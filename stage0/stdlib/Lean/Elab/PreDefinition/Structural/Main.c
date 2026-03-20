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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_mkLambdas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEST(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_withEnv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_TerminationMeasure_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_local_ctx_erase(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
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
lean_object* l_Nat_blt___boxed(lean_object*, lean_object*);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isInductivePredicate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_Positions_numIndices(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkIndPredBRecOnF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnConst(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_mkBRecOnMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__0;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__1 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__2 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__3 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__4 = (const lean_object*)&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__4_value;
static lean_once_cell_t l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__5;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.PreDefinition.Structural.Basic"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Elab.Structural.Positions.mapMwith"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "assertion violation: positions.size = ys.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: positions.numIndices = xs.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__5;
static const lean_array_object l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed__const__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_blt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8(lean_object*);
static const lean_string_object l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lean.Elab.Structural.Positions.groupAndSort"};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "assertion violation: Array.range xs.size == positions.flatten.qsort Nat.blt\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__2;
static const lean_array_object l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
v___x_66_ = lean_apply_7(v_k_58_, v_b_59_, v_c_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_, lean_box(0));
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0___boxed(lean_object* v_k_67_, lean_object* v_b_68_, lean_object* v_c_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg___lam__0(v_k_67_, v_b_68_, v_c_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15_spec__27(lean_object* v_msgData_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; lean_object* v_env_181_; lean_object* v___x_182_; lean_object* v_mctx_183_; lean_object* v_lctx_184_; lean_object* v_options_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_180_ = lean_st_ref_get(v___y_178_);
v_env_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc_ref(v_env_181_);
lean_dec(v___x_180_);
v___x_182_ = lean_st_ref_get(v___y_176_);
v_mctx_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc_ref(v_mctx_183_);
lean_dec(v___x_182_);
v_lctx_184_ = lean_ctor_get(v___y_175_, 2);
v_options_185_ = lean_ctor_get(v___y_177_, 2);
lean_inc_ref(v_options_185_);
lean_inc_ref(v_lctx_184_);
v___x_186_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_186_, 0, v_env_181_);
lean_ctor_set(v___x_186_, 1, v_mctx_183_);
lean_ctor_set(v___x_186_, 2, v_lctx_184_);
lean_ctor_set(v___x_186_, 3, v_options_185_);
v___x_187_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_187_, 0, v___x_186_);
lean_ctor_set(v___x_187_, 1, v_msgData_174_);
v___x_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_188_, 0, v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15_spec__27___boxed(lean_object* v_msgData_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15_spec__27(v_msgData_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
return v_res_195_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__0(void){
_start:
{
lean_object* v___x_196_; double v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(0u);
v___x_197_ = lean_float_of_nat(v___x_196_);
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(lean_object* v_cls_201_, lean_object* v_msg_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_ref_208_; lean_object* v___x_209_; lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_254_; 
v_ref_208_ = lean_ctor_get(v___y_205_, 5);
v___x_209_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15_spec__27(v_msg_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
v_a_210_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_254_ == 0)
{
v___x_212_ = v___x_209_;
v_isShared_213_ = v_isSharedCheck_254_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_209_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_254_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_214_; lean_object* v_traceState_215_; lean_object* v_env_216_; lean_object* v_nextMacroScope_217_; lean_object* v_ngen_218_; lean_object* v_auxDeclNGen_219_; lean_object* v_cache_220_; lean_object* v_messages_221_; lean_object* v_infoState_222_; lean_object* v_snapshotTasks_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_253_; 
v___x_214_ = lean_st_ref_take(v___y_206_);
v_traceState_215_ = lean_ctor_get(v___x_214_, 4);
v_env_216_ = lean_ctor_get(v___x_214_, 0);
v_nextMacroScope_217_ = lean_ctor_get(v___x_214_, 1);
v_ngen_218_ = lean_ctor_get(v___x_214_, 2);
v_auxDeclNGen_219_ = lean_ctor_get(v___x_214_, 3);
v_cache_220_ = lean_ctor_get(v___x_214_, 5);
v_messages_221_ = lean_ctor_get(v___x_214_, 6);
v_infoState_222_ = lean_ctor_get(v___x_214_, 7);
v_snapshotTasks_223_ = lean_ctor_get(v___x_214_, 8);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_253_ == 0)
{
v___x_225_ = v___x_214_;
v_isShared_226_ = v_isSharedCheck_253_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_snapshotTasks_223_);
lean_inc(v_infoState_222_);
lean_inc(v_messages_221_);
lean_inc(v_cache_220_);
lean_inc(v_traceState_215_);
lean_inc(v_auxDeclNGen_219_);
lean_inc(v_ngen_218_);
lean_inc(v_nextMacroScope_217_);
lean_inc(v_env_216_);
lean_dec(v___x_214_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_253_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
uint64_t v_tid_227_; lean_object* v_traces_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_252_; 
v_tid_227_ = lean_ctor_get_uint64(v_traceState_215_, sizeof(void*)*1);
v_traces_228_ = lean_ctor_get(v_traceState_215_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v_traceState_215_);
if (v_isSharedCheck_252_ == 0)
{
v___x_230_ = v_traceState_215_;
v_isShared_231_ = v_isSharedCheck_252_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_traces_228_);
lean_dec(v_traceState_215_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_252_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_232_; double v___x_233_; uint8_t v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_232_ = lean_box(0);
v___x_233_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__0);
v___x_234_ = 0;
v___x_235_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__1));
v___x_236_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_236_, 0, v_cls_201_);
lean_ctor_set(v___x_236_, 1, v___x_232_);
lean_ctor_set(v___x_236_, 2, v___x_235_);
lean_ctor_set_float(v___x_236_, sizeof(void*)*3, v___x_233_);
lean_ctor_set_float(v___x_236_, sizeof(void*)*3 + 8, v___x_233_);
lean_ctor_set_uint8(v___x_236_, sizeof(void*)*3 + 16, v___x_234_);
v___x_237_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___closed__2));
v___x_238_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_238_, 0, v___x_236_);
lean_ctor_set(v___x_238_, 1, v_a_210_);
lean_ctor_set(v___x_238_, 2, v___x_237_);
lean_inc(v_ref_208_);
v___x_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_239_, 0, v_ref_208_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = l_Lean_PersistentArray_push___redArg(v_traces_228_, v___x_239_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 0, v___x_240_);
v___x_242_ = v___x_230_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_240_);
lean_ctor_set_uint64(v_reuseFailAlloc_251_, sizeof(void*)*1, v_tid_227_);
v___x_242_ = v_reuseFailAlloc_251_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_object* v___x_244_; 
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 4, v___x_242_);
v___x_244_ = v___x_225_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v_env_216_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v_nextMacroScope_217_);
lean_ctor_set(v_reuseFailAlloc_250_, 2, v_ngen_218_);
lean_ctor_set(v_reuseFailAlloc_250_, 3, v_auxDeclNGen_219_);
lean_ctor_set(v_reuseFailAlloc_250_, 4, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_250_, 5, v_cache_220_);
lean_ctor_set(v_reuseFailAlloc_250_, 6, v_messages_221_);
lean_ctor_set(v_reuseFailAlloc_250_, 7, v_infoState_222_);
lean_ctor_set(v_reuseFailAlloc_250_, 8, v_snapshotTasks_223_);
v___x_244_ = v_reuseFailAlloc_250_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_245_ = lean_st_ref_set(v___y_206_, v___x_244_);
v___x_246_ = lean_box(0);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 0, v___x_246_);
v___x_248_ = v___x_212_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v___x_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15___boxed(lean_object* v_cls_255_, lean_object* v_msg_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v_cls_255_, v_msg_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
return v_res_262_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__0(void){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_instMonadEST(lean_box(0), lean_box(0));
return v___x_263_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__5(void){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Array_instInhabited(lean_box(0));
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg(lean_object* v_msg_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v_toApplicative_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_338_; 
v___x_275_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__0, &l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__0_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__0);
v___x_276_ = l_ReaderT_instMonad___redArg(v___x_275_);
v_toApplicative_277_ = lean_ctor_get(v___x_276_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_276_);
if (v_isSharedCheck_338_ == 0)
{
lean_object* v_unused_339_; 
v_unused_339_ = lean_ctor_get(v___x_276_, 1);
lean_dec(v_unused_339_);
v___x_279_ = v___x_276_;
v_isShared_280_ = v_isSharedCheck_338_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_toApplicative_277_);
lean_dec(v___x_276_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_338_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v_toFunctor_281_; lean_object* v_toSeq_282_; lean_object* v_toSeqLeft_283_; lean_object* v_toSeqRight_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_336_; 
v_toFunctor_281_ = lean_ctor_get(v_toApplicative_277_, 0);
v_toSeq_282_ = lean_ctor_get(v_toApplicative_277_, 2);
v_toSeqLeft_283_ = lean_ctor_get(v_toApplicative_277_, 3);
v_toSeqRight_284_ = lean_ctor_get(v_toApplicative_277_, 4);
v_isSharedCheck_336_ = !lean_is_exclusive(v_toApplicative_277_);
if (v_isSharedCheck_336_ == 0)
{
lean_object* v_unused_337_; 
v_unused_337_ = lean_ctor_get(v_toApplicative_277_, 1);
lean_dec(v_unused_337_);
v___x_286_ = v_toApplicative_277_;
v_isShared_287_ = v_isSharedCheck_336_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_toSeqRight_284_);
lean_inc(v_toSeqLeft_283_);
lean_inc(v_toSeq_282_);
lean_inc(v_toFunctor_281_);
lean_dec(v_toApplicative_277_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_336_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___f_288_; lean_object* v___f_289_; lean_object* v___f_290_; lean_object* v___f_291_; lean_object* v___x_292_; lean_object* v___f_293_; lean_object* v___f_294_; lean_object* v___f_295_; lean_object* v___x_297_; 
v___f_288_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__1));
v___f_289_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__2));
lean_inc_ref(v_toFunctor_281_);
v___f_290_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_290_, 0, v_toFunctor_281_);
v___f_291_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_291_, 0, v_toFunctor_281_);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v___f_290_);
lean_ctor_set(v___x_292_, 1, v___f_291_);
v___f_293_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_293_, 0, v_toSeqRight_284_);
v___f_294_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_294_, 0, v_toSeqLeft_283_);
v___f_295_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_295_, 0, v_toSeq_282_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 4, v___f_293_);
lean_ctor_set(v___x_286_, 3, v___f_294_);
lean_ctor_set(v___x_286_, 2, v___f_295_);
lean_ctor_set(v___x_286_, 1, v___f_288_);
lean_ctor_set(v___x_286_, 0, v___x_292_);
v___x_297_ = v___x_286_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v___f_288_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v___f_295_);
lean_ctor_set(v_reuseFailAlloc_335_, 3, v___f_294_);
lean_ctor_set(v_reuseFailAlloc_335_, 4, v___f_293_);
v___x_297_ = v_reuseFailAlloc_335_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_299_; 
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 1, v___f_289_);
lean_ctor_set(v___x_279_, 0, v___x_297_);
v___x_299_ = v___x_279_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_297_);
lean_ctor_set(v_reuseFailAlloc_334_, 1, v___f_289_);
v___x_299_ = v_reuseFailAlloc_334_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v___x_300_; lean_object* v_toApplicative_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_332_; 
v___x_300_ = l_ReaderT_instMonad___redArg(v___x_299_);
v_toApplicative_301_ = lean_ctor_get(v___x_300_, 0);
v_isSharedCheck_332_ = !lean_is_exclusive(v___x_300_);
if (v_isSharedCheck_332_ == 0)
{
lean_object* v_unused_333_; 
v_unused_333_ = lean_ctor_get(v___x_300_, 1);
lean_dec(v_unused_333_);
v___x_303_ = v___x_300_;
v_isShared_304_ = v_isSharedCheck_332_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_toApplicative_301_);
lean_dec(v___x_300_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_332_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v_toFunctor_305_; lean_object* v_toSeq_306_; lean_object* v_toSeqLeft_307_; lean_object* v_toSeqRight_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_330_; 
v_toFunctor_305_ = lean_ctor_get(v_toApplicative_301_, 0);
v_toSeq_306_ = lean_ctor_get(v_toApplicative_301_, 2);
v_toSeqLeft_307_ = lean_ctor_get(v_toApplicative_301_, 3);
v_toSeqRight_308_ = lean_ctor_get(v_toApplicative_301_, 4);
v_isSharedCheck_330_ = !lean_is_exclusive(v_toApplicative_301_);
if (v_isSharedCheck_330_ == 0)
{
lean_object* v_unused_331_; 
v_unused_331_ = lean_ctor_get(v_toApplicative_301_, 1);
lean_dec(v_unused_331_);
v___x_310_ = v_toApplicative_301_;
v_isShared_311_ = v_isSharedCheck_330_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_toSeqRight_308_);
lean_inc(v_toSeqLeft_307_);
lean_inc(v_toSeq_306_);
lean_inc(v_toFunctor_305_);
lean_dec(v_toApplicative_301_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_330_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___f_312_; lean_object* v___f_313_; lean_object* v___f_314_; lean_object* v___f_315_; lean_object* v___x_316_; lean_object* v___f_317_; lean_object* v___f_318_; lean_object* v___f_319_; lean_object* v___x_321_; 
v___f_312_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__3));
v___f_313_ = ((lean_object*)(l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__4));
lean_inc_ref(v_toFunctor_305_);
v___f_314_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_314_, 0, v_toFunctor_305_);
v___f_315_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_315_, 0, v_toFunctor_305_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v___f_314_);
lean_ctor_set(v___x_316_, 1, v___f_315_);
v___f_317_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_317_, 0, v_toSeqRight_308_);
v___f_318_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_318_, 0, v_toSeqLeft_307_);
v___f_319_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_319_, 0, v_toSeq_306_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 4, v___f_317_);
lean_ctor_set(v___x_310_, 3, v___f_318_);
lean_ctor_set(v___x_310_, 2, v___f_319_);
lean_ctor_set(v___x_310_, 1, v___f_312_);
lean_ctor_set(v___x_310_, 0, v___x_316_);
v___x_321_ = v___x_310_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_316_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v___f_312_);
lean_ctor_set(v_reuseFailAlloc_329_, 2, v___f_319_);
lean_ctor_set(v_reuseFailAlloc_329_, 3, v___f_318_);
lean_ctor_set(v_reuseFailAlloc_329_, 4, v___f_317_);
v___x_321_ = v_reuseFailAlloc_329_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
lean_object* v___x_323_; 
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 1, v___f_313_);
lean_ctor_set(v___x_303_, 0, v___x_321_);
v___x_323_ = v___x_303_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v___x_321_);
lean_ctor_set(v_reuseFailAlloc_328_, 1, v___f_313_);
v___x_323_ = v_reuseFailAlloc_328_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_18738__overap_326_; lean_object* v___x_327_; 
v___x_324_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__5, &l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__5_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___closed__5);
v___x_325_ = l_instInhabitedOfMonad___redArg(v___x_323_, v___x_324_);
v___x_18738__overap_326_ = lean_panic_fn(v___x_325_, v_msg_269_);
v___x_327_ = lean_apply_5(v___x_18738__overap_326_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, lean_box(0));
return v___x_327_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg___boxed(lean_object* v_msg_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg(v_msg_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19___redArg(lean_object* v_inst_347_, lean_object* v_xs_348_, size_t v_sz_349_, size_t v_i_350_, lean_object* v_bs_351_){
_start:
{
uint8_t v___x_352_; 
v___x_352_ = lean_usize_dec_lt(v_i_350_, v_sz_349_);
if (v___x_352_ == 0)
{
lean_dec(v_inst_347_);
return v_bs_351_;
}
else
{
lean_object* v_v_353_; lean_object* v___x_354_; lean_object* v_bs_x27_355_; lean_object* v___x_356_; size_t v___x_357_; size_t v___x_358_; lean_object* v___x_359_; 
v_v_353_ = lean_array_uget(v_bs_351_, v_i_350_);
v___x_354_ = lean_unsigned_to_nat(0u);
v_bs_x27_355_ = lean_array_uset(v_bs_351_, v_i_350_, v___x_354_);
lean_inc(v_inst_347_);
v___x_356_ = lean_array_get_borrowed(v_inst_347_, v_xs_348_, v_v_353_);
lean_dec(v_v_353_);
v___x_357_ = ((size_t)1ULL);
v___x_358_ = lean_usize_add(v_i_350_, v___x_357_);
lean_inc(v___x_356_);
v___x_359_ = lean_array_uset(v_bs_x27_355_, v_i_350_, v___x_356_);
v_i_350_ = v___x_358_;
v_bs_351_ = v___x_359_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19___redArg___boxed(lean_object* v_inst_361_, lean_object* v_xs_362_, lean_object* v_sz_363_, lean_object* v_i_364_, lean_object* v_bs_365_){
_start:
{
size_t v_sz_boxed_366_; size_t v_i_boxed_367_; lean_object* v_res_368_; 
v_sz_boxed_366_ = lean_unbox_usize(v_sz_363_);
lean_dec(v_sz_363_);
v_i_boxed_367_ = lean_unbox_usize(v_i_364_);
lean_dec(v_i_364_);
v_res_368_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19___redArg(v_inst_361_, v_xs_362_, v_sz_boxed_366_, v_i_boxed_367_, v_bs_365_);
lean_dec_ref(v_xs_362_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21___redArg(lean_object* v_inst_369_, lean_object* v_xs_370_, lean_object* v_f_371_, lean_object* v_as_372_, lean_object* v_bs_373_, lean_object* v_i_374_, lean_object* v_cs_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_381_ = lean_array_get_size(v_as_372_);
v___x_382_ = lean_nat_dec_lt(v_i_374_, v___x_381_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; 
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v_i_374_);
lean_dec_ref(v_f_371_);
lean_dec(v_inst_369_);
v___x_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_383_, 0, v_cs_375_);
return v___x_383_;
}
else
{
lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_384_ = lean_array_get_size(v_bs_373_);
v___x_385_ = lean_nat_dec_lt(v_i_374_, v___x_384_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; 
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v_i_374_);
lean_dec_ref(v_f_371_);
lean_dec(v_inst_369_);
v___x_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_386_, 0, v_cs_375_);
return v___x_386_;
}
else
{
lean_object* v_a_387_; lean_object* v_b_388_; size_t v_sz_389_; size_t v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v_a_387_ = lean_array_fget_borrowed(v_as_372_, v_i_374_);
v_b_388_ = lean_array_fget_borrowed(v_bs_373_, v_i_374_);
v_sz_389_ = lean_array_size(v_b_388_);
v___x_390_ = ((size_t)0ULL);
lean_inc(v_b_388_);
lean_inc(v_inst_369_);
v___x_391_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19___redArg(v_inst_369_, v_xs_370_, v_sz_389_, v___x_390_, v_b_388_);
lean_inc_ref(v_f_371_);
lean_inc(v___y_379_);
lean_inc_ref(v___y_378_);
lean_inc(v___y_377_);
lean_inc_ref(v___y_376_);
lean_inc(v_a_387_);
v___x_392_ = lean_apply_7(v_f_371_, v_a_387_, v___x_391_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, lean_box(0));
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v_a_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v_a_393_ = lean_ctor_get(v___x_392_, 0);
lean_inc(v_a_393_);
lean_dec_ref(v___x_392_);
v___x_394_ = lean_unsigned_to_nat(1u);
v___x_395_ = lean_nat_add(v_i_374_, v___x_394_);
lean_dec(v_i_374_);
v___x_396_ = lean_array_push(v_cs_375_, v_a_393_);
v_i_374_ = v___x_395_;
v_cs_375_ = v___x_396_;
goto _start;
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec_ref(v_cs_375_);
lean_dec(v_i_374_);
lean_dec_ref(v_f_371_);
lean_dec(v_inst_369_);
v_a_398_ = lean_ctor_get(v___x_392_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_392_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_392_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21___redArg___boxed(lean_object* v_inst_406_, lean_object* v_xs_407_, lean_object* v_f_408_, lean_object* v_as_409_, lean_object* v_bs_410_, lean_object* v_i_411_, lean_object* v_cs_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21___redArg(v_inst_406_, v_xs_407_, v_f_408_, v_as_409_, v_bs_410_, v_i_411_, v_cs_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
lean_dec_ref(v_bs_410_);
lean_dec_ref(v_as_409_);
lean_dec_ref(v_xs_407_);
return v_res_418_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_422_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__2));
v___x_423_ = lean_unsigned_to_nat(2u);
v___x_424_ = lean_unsigned_to_nat(73u);
v___x_425_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__1));
v___x_426_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__0));
v___x_427_ = l_mkPanicMessageWithDecl(v___x_426_, v___x_425_, v___x_424_, v___x_423_, v___x_422_);
return v___x_427_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__5(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_429_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__4));
v___x_430_ = lean_unsigned_to_nat(2u);
v___x_431_ = lean_unsigned_to_nat(74u);
v___x_432_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__1));
v___x_433_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__0));
v___x_434_ = l_mkPanicMessageWithDecl(v___x_433_, v___x_432_, v___x_431_, v___x_430_, v___x_429_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg(lean_object* v_inst_437_, lean_object* v_f_438_, lean_object* v_positions_439_, lean_object* v_ys_440_, lean_object* v_xs_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; uint8_t v___x_449_; 
v___x_447_ = lean_array_get_size(v_positions_439_);
v___x_448_ = lean_array_get_size(v_ys_440_);
v___x_449_ = lean_nat_dec_eq(v___x_447_, v___x_448_);
if (v___x_449_ == 0)
{
lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec_ref(v_f_438_);
lean_dec(v_inst_437_);
v___x_450_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__3, &l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__3_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__3);
v___x_451_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg(v___x_450_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
return v___x_451_;
}
else
{
lean_object* v___x_452_; lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_452_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_439_);
v___x_453_ = lean_array_get_size(v_xs_441_);
v___x_454_ = lean_nat_dec_eq(v___x_452_, v___x_453_);
lean_dec(v___x_452_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v___x_456_; 
lean_dec_ref(v_f_438_);
lean_dec(v_inst_437_);
v___x_455_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__5, &l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__5_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__5);
v___x_456_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg(v___x_455_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
return v___x_456_;
}
else
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_457_ = lean_unsigned_to_nat(0u);
v___x_458_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__6));
v___x_459_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21___redArg(v_inst_437_, v_xs_441_, v_f_438_, v_ys_440_, v_positions_439_, v___x_457_, v___x_458_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
return v___x_459_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___boxed(lean_object* v_inst_460_, lean_object* v_f_461_, lean_object* v_positions_462_, lean_object* v_ys_463_, lean_object* v_xs_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg(v_inst_460_, v_f_461_, v_positions_462_, v_ys_463_, v_xs_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
lean_dec_ref(v_xs_464_);
lean_dec_ref(v_ys_463_);
lean_dec_ref(v_positions_462_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___redArg(lean_object* v___x_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_funTypes_474_, lean_object* v_as_475_, lean_object* v_i_476_, lean_object* v_j_477_, lean_object* v_bs_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_){
_start:
{
lean_object* v_zero_484_; uint8_t v_isZero_485_; 
v_zero_484_ = lean_unsigned_to_nat(0u);
v_isZero_485_ = lean_nat_dec_eq(v_i_476_, v_zero_484_);
if (v_isZero_485_ == 1)
{
lean_object* v___x_486_; 
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v_j_477_);
lean_dec(v_i_476_);
lean_dec_ref(v_funTypes_474_);
lean_dec_ref(v_a_473_);
lean_dec_ref(v_a_472_);
lean_dec_ref(v___x_471_);
v___x_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_486_, 0, v_bs_478_);
return v___x_486_;
}
else
{
lean_object* v___x_487_; lean_object* v_fst_488_; lean_object* v_snd_489_; lean_object* v___x_490_; 
v___x_487_ = lean_array_fget_borrowed(v_as_475_, v_j_477_);
v_fst_488_ = lean_ctor_get(v___x_487_, 0);
v_snd_489_ = lean_ctor_get(v___x_487_, 1);
lean_inc(v___y_482_);
lean_inc_ref(v___y_481_);
lean_inc(v___y_480_);
lean_inc_ref(v___y_479_);
lean_inc(v_snd_489_);
lean_inc(v_fst_488_);
lean_inc_ref(v_funTypes_474_);
lean_inc_ref(v_a_473_);
lean_inc_ref(v_a_472_);
lean_inc(v_j_477_);
lean_inc_ref(v___x_471_);
v___x_490_ = l_Lean_Elab_Structural_mkBRecOnApp(v___x_471_, v_j_477_, v_a_472_, v_a_473_, v_funTypes_474_, v_fst_488_, v_snd_489_, v___y_479_, v___y_480_, v___y_481_, v___y_482_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v_one_492_; lean_object* v_n_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref(v___x_490_);
v_one_492_ = lean_unsigned_to_nat(1u);
v_n_493_ = lean_nat_sub(v_i_476_, v_one_492_);
lean_dec(v_i_476_);
v___x_494_ = lean_nat_add(v_j_477_, v_one_492_);
lean_dec(v_j_477_);
v___x_495_ = lean_array_push(v_bs_478_, v_a_491_);
v_i_476_ = v_n_493_;
v_j_477_ = v___x_494_;
v_bs_478_ = v___x_495_;
goto _start;
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec_ref(v_bs_478_);
lean_dec(v_j_477_);
lean_dec(v_i_476_);
lean_dec_ref(v_funTypes_474_);
lean_dec_ref(v_a_473_);
lean_dec_ref(v_a_472_);
lean_dec_ref(v___x_471_);
v_a_497_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_490_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_490_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_497_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___redArg___boxed(lean_object* v___x_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_funTypes_508_, lean_object* v_as_509_, lean_object* v_i_510_, lean_object* v_j_511_, lean_object* v_bs_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___redArg(v___x_505_, v_a_506_, v_a_507_, v_funTypes_508_, v_as_509_, v_i_510_, v_j_511_, v_bs_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
lean_dec_ref(v_as_509_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(lean_object* v_as_519_, lean_object* v_bs_520_, lean_object* v_i_521_, lean_object* v_cs_522_){
_start:
{
lean_object* v___x_523_; uint8_t v___x_524_; 
v___x_523_ = lean_array_get_size(v_as_519_);
v___x_524_ = lean_nat_dec_lt(v_i_521_, v___x_523_);
if (v___x_524_ == 0)
{
lean_dec(v_i_521_);
return v_cs_522_;
}
else
{
lean_object* v___x_525_; uint8_t v___x_526_; 
v___x_525_ = lean_array_get_size(v_bs_520_);
v___x_526_ = lean_nat_dec_lt(v_i_521_, v___x_525_);
if (v___x_526_ == 0)
{
lean_dec(v_i_521_);
return v_cs_522_;
}
else
{
lean_object* v_a_527_; lean_object* v_ref_528_; uint8_t v_kind_529_; lean_object* v_levelParams_530_; lean_object* v_modifiers_531_; lean_object* v_declName_532_; lean_object* v_binders_533_; lean_object* v_numSectionVars_534_; lean_object* v_type_535_; lean_object* v_termination_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_548_; 
v_a_527_ = lean_array_fget(v_as_519_, v_i_521_);
v_ref_528_ = lean_ctor_get(v_a_527_, 0);
v_kind_529_ = lean_ctor_get_uint8(v_a_527_, sizeof(void*)*9);
v_levelParams_530_ = lean_ctor_get(v_a_527_, 1);
v_modifiers_531_ = lean_ctor_get(v_a_527_, 2);
v_declName_532_ = lean_ctor_get(v_a_527_, 3);
v_binders_533_ = lean_ctor_get(v_a_527_, 4);
v_numSectionVars_534_ = lean_ctor_get(v_a_527_, 5);
v_type_535_ = lean_ctor_get(v_a_527_, 6);
v_termination_536_ = lean_ctor_get(v_a_527_, 8);
v_isSharedCheck_548_ = !lean_is_exclusive(v_a_527_);
if (v_isSharedCheck_548_ == 0)
{
lean_object* v_unused_549_; 
v_unused_549_ = lean_ctor_get(v_a_527_, 7);
lean_dec(v_unused_549_);
v___x_538_ = v_a_527_;
v_isShared_539_ = v_isSharedCheck_548_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_termination_536_);
lean_inc(v_type_535_);
lean_inc(v_numSectionVars_534_);
lean_inc(v_binders_533_);
lean_inc(v_declName_532_);
lean_inc(v_modifiers_531_);
lean_inc(v_levelParams_530_);
lean_inc(v_ref_528_);
lean_dec(v_a_527_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_548_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v_b_540_; lean_object* v___x_542_; 
v_b_540_ = lean_array_fget_borrowed(v_bs_520_, v_i_521_);
lean_inc(v_b_540_);
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 7, v_b_540_);
v___x_542_ = v___x_538_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_ref_528_);
lean_ctor_set(v_reuseFailAlloc_547_, 1, v_levelParams_530_);
lean_ctor_set(v_reuseFailAlloc_547_, 2, v_modifiers_531_);
lean_ctor_set(v_reuseFailAlloc_547_, 3, v_declName_532_);
lean_ctor_set(v_reuseFailAlloc_547_, 4, v_binders_533_);
lean_ctor_set(v_reuseFailAlloc_547_, 5, v_numSectionVars_534_);
lean_ctor_set(v_reuseFailAlloc_547_, 6, v_type_535_);
lean_ctor_set(v_reuseFailAlloc_547_, 7, v_b_540_);
lean_ctor_set(v_reuseFailAlloc_547_, 8, v_termination_536_);
lean_ctor_set_uint8(v_reuseFailAlloc_547_, sizeof(void*)*9, v_kind_529_);
v___x_542_ = v_reuseFailAlloc_547_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_543_ = lean_unsigned_to_nat(1u);
v___x_544_ = lean_nat_add(v_i_521_, v___x_543_);
lean_dec(v_i_521_);
v___x_545_ = lean_array_push(v_cs_522_, v___x_542_);
v_i_521_ = v___x_544_;
v_cs_522_ = v___x_545_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13___boxed(lean_object* v_as_550_, lean_object* v_bs_551_, lean_object* v_i_552_, lean_object* v_cs_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(v_as_550_, v_bs_551_, v_i_552_, v_cs_553_);
lean_dec_ref(v_bs_551_);
lean_dec_ref(v_as_550_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__0(lean_object* v___y_555_, lean_object* v_k_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
lean_object* v___x_562_; 
lean_inc(v___y_560_);
lean_inc_ref(v___y_559_);
lean_inc(v___y_558_);
lean_inc_ref(v___y_557_);
v___x_562_ = lean_apply_5(v___y_555_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, lean_box(0));
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v___x_563_; 
lean_dec_ref(v___x_562_);
v___x_563_ = lean_apply_5(v_k_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, lean_box(0));
return v___x_563_;
}
else
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
lean_dec(v___y_560_);
lean_dec_ref(v___y_559_);
lean_dec(v___y_558_);
lean_dec_ref(v___y_557_);
lean_dec_ref(v_k_556_);
v_a_564_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_562_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_562_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_a_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__0___boxed(lean_object* v___y_572_, lean_object* v_k_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__0(v___y_572_, v_k_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__1(lean_object* v___x_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_580_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__1___boxed(lean_object* v___x_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__1(v___x_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg(lean_object* v_as_594_, size_t v_i_595_, size_t v_stop_596_, lean_object* v_b_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
uint8_t v___x_601_; 
v___x_601_ = lean_usize_dec_eq(v_i_595_, v_stop_596_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = lean_array_uget_borrowed(v_as_594_, v_i_595_);
lean_inc(v___y_599_);
lean_inc_ref(v___y_598_);
v___x_603_ = l_Lean_Elab_addAsAxiom___redArg(v___x_602_, v___y_598_, v___y_599_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; size_t v___x_605_; size_t v___x_606_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_604_);
lean_dec_ref(v___x_603_);
v___x_605_ = ((size_t)1ULL);
v___x_606_ = lean_usize_add(v_i_595_, v___x_605_);
v_i_595_ = v___x_606_;
v_b_597_ = v_a_604_;
goto _start;
}
else
{
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
return v___x_603_;
}
}
else
{
lean_object* v___x_608_; 
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
v___x_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_608_, 0, v_b_597_);
return v___x_608_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg___boxed(lean_object* v_as_609_, lean_object* v_i_610_, lean_object* v_stop_611_, lean_object* v_b_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
size_t v_i_boxed_616_; size_t v_stop_boxed_617_; lean_object* v_res_618_; 
v_i_boxed_616_ = lean_unbox_usize(v_i_610_);
lean_dec(v_i_610_);
v_stop_boxed_617_ = lean_unbox_usize(v_stop_611_);
lean_dec(v_stop_611_);
v_res_618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg(v_as_609_, v_i_boxed_616_, v_stop_boxed_617_, v_b_612_, v___y_613_, v___y_614_);
lean_dec_ref(v_as_609_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15(lean_object* v_as_619_, size_t v_i_620_, size_t v_stop_621_, lean_object* v_b_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___redArg(v_as_619_, v_i_620_, v_stop_621_, v_b_622_, v___y_625_, v___y_626_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___boxed(lean_object* v_as_629_, lean_object* v_i_630_, lean_object* v_stop_631_, lean_object* v_b_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_){
_start:
{
size_t v_i_boxed_638_; size_t v_stop_boxed_639_; lean_object* v_res_640_; 
v_i_boxed_638_ = lean_unbox_usize(v_i_630_);
lean_dec(v_i_630_);
v_stop_boxed_639_ = lean_unbox_usize(v_stop_631_);
lean_dec(v_stop_631_);
v_res_640_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15(v_as_629_, v_i_boxed_638_, v_stop_boxed_639_, v_b_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
lean_dec(v___y_634_);
lean_dec_ref(v___y_633_);
lean_dec_ref(v_as_629_);
return v_res_640_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_641_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__0);
v___x_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
return v___x_643_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__2(void){
_start:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__1);
v___x_645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
return v___x_645_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__1);
v___x_647_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
lean_ctor_set(v___x_647_, 1, v___x_646_);
lean_ctor_set(v___x_647_, 2, v___x_646_);
lean_ctor_set(v___x_647_, 3, v___x_646_);
lean_ctor_set(v___x_647_, 4, v___x_646_);
lean_ctor_set(v___x_647_, 5, v___x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg(lean_object* v_env_648_, lean_object* v___y_649_, lean_object* v___y_650_){
_start:
{
lean_object* v___x_652_; lean_object* v_nextMacroScope_653_; lean_object* v_ngen_654_; lean_object* v_auxDeclNGen_655_; lean_object* v_traceState_656_; lean_object* v_messages_657_; lean_object* v_infoState_658_; lean_object* v_snapshotTasks_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_685_; 
v___x_652_ = lean_st_ref_take(v___y_650_);
v_nextMacroScope_653_ = lean_ctor_get(v___x_652_, 1);
v_ngen_654_ = lean_ctor_get(v___x_652_, 2);
v_auxDeclNGen_655_ = lean_ctor_get(v___x_652_, 3);
v_traceState_656_ = lean_ctor_get(v___x_652_, 4);
v_messages_657_ = lean_ctor_get(v___x_652_, 6);
v_infoState_658_ = lean_ctor_get(v___x_652_, 7);
v_snapshotTasks_659_ = lean_ctor_get(v___x_652_, 8);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_685_ == 0)
{
lean_object* v_unused_686_; lean_object* v_unused_687_; 
v_unused_686_ = lean_ctor_get(v___x_652_, 5);
lean_dec(v_unused_686_);
v_unused_687_ = lean_ctor_get(v___x_652_, 0);
lean_dec(v_unused_687_);
v___x_661_ = v___x_652_;
v_isShared_662_ = v_isSharedCheck_685_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_snapshotTasks_659_);
lean_inc(v_infoState_658_);
lean_inc(v_messages_657_);
lean_inc(v_traceState_656_);
lean_inc(v_auxDeclNGen_655_);
lean_inc(v_ngen_654_);
lean_inc(v_nextMacroScope_653_);
lean_dec(v___x_652_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_685_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v___x_665_; 
v___x_663_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__2);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 5, v___x_663_);
lean_ctor_set(v___x_661_, 0, v_env_648_);
v___x_665_ = v___x_661_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_env_648_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v_nextMacroScope_653_);
lean_ctor_set(v_reuseFailAlloc_684_, 2, v_ngen_654_);
lean_ctor_set(v_reuseFailAlloc_684_, 3, v_auxDeclNGen_655_);
lean_ctor_set(v_reuseFailAlloc_684_, 4, v_traceState_656_);
lean_ctor_set(v_reuseFailAlloc_684_, 5, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_684_, 6, v_messages_657_);
lean_ctor_set(v_reuseFailAlloc_684_, 7, v_infoState_658_);
lean_ctor_set(v_reuseFailAlloc_684_, 8, v_snapshotTasks_659_);
v___x_665_ = v_reuseFailAlloc_684_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v_mctx_668_; lean_object* v_zetaDeltaFVarIds_669_; lean_object* v_postponed_670_; lean_object* v_diag_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_682_; 
v___x_666_ = lean_st_ref_set(v___y_650_, v___x_665_);
v___x_667_ = lean_st_ref_take(v___y_649_);
v_mctx_668_ = lean_ctor_get(v___x_667_, 0);
v_zetaDeltaFVarIds_669_ = lean_ctor_get(v___x_667_, 2);
v_postponed_670_ = lean_ctor_get(v___x_667_, 3);
v_diag_671_ = lean_ctor_get(v___x_667_, 4);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_682_ == 0)
{
lean_object* v_unused_683_; 
v_unused_683_ = lean_ctor_get(v___x_667_, 1);
lean_dec(v_unused_683_);
v___x_673_ = v___x_667_;
v_isShared_674_ = v_isSharedCheck_682_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_diag_671_);
lean_inc(v_postponed_670_);
lean_inc(v_zetaDeltaFVarIds_669_);
lean_inc(v_mctx_668_);
lean_dec(v___x_667_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_682_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___closed__3);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 1, v___x_675_);
v___x_677_ = v___x_673_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_mctx_668_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v___x_675_);
lean_ctor_set(v_reuseFailAlloc_681_, 2, v_zetaDeltaFVarIds_669_);
lean_ctor_set(v_reuseFailAlloc_681_, 3, v_postponed_670_);
lean_ctor_set(v_reuseFailAlloc_681_, 4, v_diag_671_);
v___x_677_ = v_reuseFailAlloc_681_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_678_ = lean_st_ref_set(v___y_649_, v___x_677_);
v___x_679_ = lean_box(0);
v___x_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
return v___x_680_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg___boxed(lean_object* v_env_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg(v_env_688_, v___y_689_, v___y_690_);
lean_dec(v___y_690_);
lean_dec(v___y_689_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___redArg(lean_object* v_env_693_, lean_object* v_x_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_){
_start:
{
lean_object* v___x_700_; lean_object* v_env_701_; lean_object* v_a_703_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_700_ = lean_st_ref_get(v___y_698_);
v_env_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc_ref(v_env_701_);
lean_dec(v___x_700_);
v___x_713_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg(v_env_693_, v___y_696_, v___y_698_);
lean_dec_ref(v___x_713_);
lean_inc(v___y_698_);
lean_inc(v___y_696_);
v___x_714_ = lean_apply_5(v_x_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, lean_box(0));
if (lean_obj_tag(v___x_714_) == 0)
{
lean_object* v_a_715_; lean_object* v___x_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
v_a_715_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_a_715_);
lean_dec_ref(v___x_714_);
v___x_716_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg(v_env_701_, v___y_696_, v___y_698_);
lean_dec(v___y_698_);
lean_dec(v___y_696_);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_716_);
if (v_isSharedCheck_723_ == 0)
{
lean_object* v_unused_724_; 
v_unused_724_ = lean_ctor_get(v___x_716_, 0);
lean_dec(v_unused_724_);
v___x_718_ = v___x_716_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_dec(v___x_716_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 0, v_a_715_);
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_715_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
else
{
lean_object* v_a_725_; 
v_a_725_ = lean_ctor_get(v___x_714_, 0);
lean_inc(v_a_725_);
lean_dec_ref(v___x_714_);
v_a_703_ = v_a_725_;
goto v___jp_702_;
}
v___jp_702_:
{
lean_object* v___x_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
v___x_704_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg(v_env_701_, v___y_696_, v___y_698_);
lean_dec(v___y_698_);
lean_dec(v___y_696_);
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
lean_ctor_set_tag(v___x_706_, 1);
lean_ctor_set(v___x_706_, 0, v_a_703_);
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_703_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___redArg___boxed(lean_object* v_env_726_, lean_object* v_x_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___redArg(v_env_726_, v_x_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(lean_object* v_preDefs_738_, lean_object* v_k_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v___y_746_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; uint8_t v___x_755_; 
v___x_752_ = lean_unsigned_to_nat(0u);
v___x_753_ = lean_array_get_size(v_preDefs_738_);
v___x_754_ = lean_box(0);
v___x_755_ = lean_nat_dec_lt(v___x_752_, v___x_753_);
if (v___x_755_ == 0)
{
lean_object* v___f_756_; 
lean_dec_ref(v_preDefs_738_);
v___f_756_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0));
v___y_746_ = v___f_756_;
goto v___jp_745_;
}
else
{
uint8_t v___x_757_; 
v___x_757_ = lean_nat_dec_le(v___x_753_, v___x_753_);
if (v___x_757_ == 0)
{
if (v___x_755_ == 0)
{
lean_object* v___f_758_; 
lean_dec_ref(v_preDefs_738_);
v___f_758_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___closed__0));
v___y_746_ = v___f_758_;
goto v___jp_745_;
}
else
{
size_t v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_759_ = lean_usize_of_nat(v___x_753_);
v___x_760_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed__const__1));
v___x_761_ = lean_box_usize(v___x_759_);
v___x_762_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___boxed), 9, 4);
lean_closure_set(v___x_762_, 0, v_preDefs_738_);
lean_closure_set(v___x_762_, 1, v___x_760_);
lean_closure_set(v___x_762_, 2, v___x_761_);
lean_closure_set(v___x_762_, 3, v___x_754_);
v___y_746_ = v___x_762_;
goto v___jp_745_;
}
}
else
{
size_t v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_763_ = lean_usize_of_nat(v___x_753_);
v___x_764_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed__const__1));
v___x_765_ = lean_box_usize(v___x_763_);
v___x_766_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__15___boxed), 9, 4);
lean_closure_set(v___x_766_, 0, v_preDefs_738_);
lean_closure_set(v___x_766_, 1, v___x_764_);
lean_closure_set(v___x_766_, 2, v___x_765_);
lean_closure_set(v___x_766_, 3, v___x_754_);
v___y_746_ = v___x_766_;
goto v___jp_745_;
}
}
v___jp_745_:
{
lean_object* v___x_747_; lean_object* v_env_748_; lean_object* v___f_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_747_ = lean_st_ref_get(v___y_743_);
v_env_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc_ref(v_env_748_);
lean_dec(v___x_747_);
v___f_749_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_749_, 0, v___y_746_);
lean_closure_set(v___f_749_, 1, v_k_739_);
v___x_750_ = l_Lean_Environment_unlockAsync(v_env_748_);
v___x_751_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___redArg(v___x_750_, v___f_749_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
return v___x_751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed(lean_object* v_preDefs_767_, lean_object* v_k_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v_preDefs_767_, v_k_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(lean_object* v_as_775_, size_t v_i_776_, size_t v_stop_777_, lean_object* v_b_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_){
_start:
{
uint8_t v___x_784_; 
v___x_784_ = lean_usize_dec_eq(v_i_776_, v_stop_777_);
if (v___x_784_ == 0)
{
lean_object* v___x_13910__overap_785_; lean_object* v___x_786_; 
v___x_13910__overap_785_ = lean_array_uget_borrowed(v_as_775_, v_i_776_);
lean_inc(v___x_13910__overap_785_);
lean_inc(v___y_782_);
lean_inc_ref(v___y_781_);
lean_inc(v___y_780_);
lean_inc_ref(v___y_779_);
v___x_786_ = lean_apply_5(v___x_13910__overap_785_, v___y_779_, v___y_780_, v___y_781_, v___y_782_, lean_box(0));
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; size_t v___x_788_; size_t v___x_789_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
lean_inc(v_a_787_);
lean_dec_ref(v___x_786_);
v___x_788_ = ((size_t)1ULL);
v___x_789_ = lean_usize_add(v_i_776_, v___x_788_);
v_i_776_ = v___x_789_;
v_b_778_ = v_a_787_;
goto _start;
}
else
{
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
return v___x_786_;
}
}
else
{
lean_object* v___x_791_; 
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
v___x_791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_791_, 0, v_b_778_);
return v___x_791_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8___boxed(lean_object* v_as_792_, lean_object* v_i_793_, lean_object* v_stop_794_, lean_object* v_b_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
size_t v_i_boxed_801_; size_t v_stop_boxed_802_; lean_object* v_res_803_; 
v_i_boxed_801_ = lean_unbox_usize(v_i_793_);
lean_dec(v_i_793_);
v_stop_boxed_802_ = lean_unbox_usize(v_stop_794_);
lean_dec(v_stop_794_);
v_res_803_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(v_as_792_, v_i_boxed_801_, v_stop_boxed_802_, v_b_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
lean_dec_ref(v_as_792_);
return v_res_803_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_804_; lean_object* v_dummy_805_; 
v___x_804_ = lean_box(0);
v_dummy_805_ = l_Lean_Expr_sort___override(v___x_804_);
return v_dummy_805_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg(uint8_t v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_recArgInfos_809_, lean_object* v___x_810_, lean_object* v_preDefs_811_, lean_object* v_a_812_, lean_object* v_as_813_, lean_object* v_i_814_, lean_object* v_j_815_, lean_object* v_bs_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_zero_822_; uint8_t v_isZero_823_; 
v_zero_822_ = lean_unsigned_to_nat(0u);
v_isZero_823_ = lean_nat_dec_eq(v_i_814_, v_zero_822_);
if (v_isZero_823_ == 1)
{
lean_object* v___x_824_; 
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v_j_815_);
lean_dec(v_i_814_);
lean_dec_ref(v_a_812_);
lean_dec_ref(v_preDefs_811_);
lean_dec_ref(v___x_810_);
lean_dec_ref(v_recArgInfos_809_);
v___x_824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_824_, 0, v_bs_816_);
return v___x_824_;
}
else
{
lean_object* v___x_825_; lean_object* v_one_826_; lean_object* v_n_827_; lean_object* v_a_829_; lean_object* v___x_833_; 
v___x_825_ = l_Lean_instInhabitedExpr;
v_one_826_ = lean_unsigned_to_nat(1u);
v_n_827_ = lean_nat_sub(v_i_814_, v_one_826_);
lean_dec(v_i_814_);
v___x_833_ = lean_array_fget_borrowed(v_as_813_, v_j_815_);
if (v_a_806_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_834_ = lean_array_get_borrowed(v___x_825_, v_a_807_, v_j_815_);
v___x_835_ = lean_array_get_borrowed(v___x_825_, v_a_808_, v_j_815_);
lean_inc(v___x_835_);
lean_inc(v___x_834_);
lean_inc(v___x_833_);
lean_inc_ref(v___x_810_);
lean_inc_ref(v_recArgInfos_809_);
v___x_836_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___boxed), 10, 5);
lean_closure_set(v___x_836_, 0, v_recArgInfos_809_);
lean_closure_set(v___x_836_, 1, v___x_810_);
lean_closure_set(v___x_836_, 2, v___x_833_);
lean_closure_set(v___x_836_, 3, v___x_834_);
lean_closure_set(v___x_836_, 4, v___x_835_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
lean_inc_ref(v_preDefs_811_);
v___x_837_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v_preDefs_811_, v___x_836_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_838_);
lean_dec_ref(v___x_837_);
v_a_829_ = v_a_838_;
goto v___jp_828_;
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
lean_dec(v_n_827_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec_ref(v_bs_816_);
lean_dec(v_j_815_);
lean_dec_ref(v_a_812_);
lean_dec_ref(v_preDefs_811_);
lean_dec_ref(v___x_810_);
lean_dec_ref(v_recArgInfos_809_);
v_a_839_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_837_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_837_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
else
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v_dummy_850_; lean_object* v_nargs_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_847_ = lean_array_get_borrowed(v___x_825_, v_a_807_, v_j_815_);
v___x_848_ = lean_array_get_borrowed(v___x_825_, v_a_808_, v_j_815_);
lean_inc_ref(v_a_812_);
v___x_849_ = lean_apply_1(v_a_812_, v_zero_822_);
v_dummy_850_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___closed__0);
v_nargs_851_ = l_Lean_Expr_getAppNumArgs(v___x_849_);
lean_inc(v_nargs_851_);
v___x_852_ = lean_mk_array(v_nargs_851_, v_dummy_850_);
v___x_853_ = lean_nat_sub(v_nargs_851_, v_one_826_);
lean_dec(v_nargs_851_);
v___x_854_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_849_, v___x_852_, v___x_853_);
lean_inc(v___x_848_);
lean_inc(v___x_847_);
lean_inc(v___x_833_);
lean_inc_ref(v___x_810_);
lean_inc_ref(v_recArgInfos_809_);
v___x_855_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkIndPredBRecOnF___boxed), 11, 6);
lean_closure_set(v___x_855_, 0, v_recArgInfos_809_);
lean_closure_set(v___x_855_, 1, v___x_810_);
lean_closure_set(v___x_855_, 2, v___x_833_);
lean_closure_set(v___x_855_, 3, v___x_847_);
lean_closure_set(v___x_855_, 4, v___x_848_);
lean_closure_set(v___x_855_, 5, v___x_854_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
lean_inc_ref(v_preDefs_811_);
v___x_856_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v_preDefs_811_, v___x_855_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v_fst_858_; lean_object* v_snd_859_; lean_object* v___y_861_; lean_object* v___x_870_; uint8_t v___x_871_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_857_);
lean_dec_ref(v___x_856_);
v_fst_858_ = lean_ctor_get(v_a_857_, 0);
lean_inc(v_fst_858_);
v_snd_859_ = lean_ctor_get(v_a_857_, 1);
lean_inc(v_snd_859_);
lean_dec(v_a_857_);
v___x_870_ = lean_array_get_size(v_snd_859_);
v___x_871_ = lean_nat_dec_lt(v_zero_822_, v___x_870_);
if (v___x_871_ == 0)
{
lean_dec(v_snd_859_);
v_a_829_ = v_fst_858_;
goto v___jp_828_;
}
else
{
lean_object* v___x_872_; uint8_t v___x_873_; 
v___x_872_ = lean_box(0);
v___x_873_ = lean_nat_dec_le(v___x_870_, v___x_870_);
if (v___x_873_ == 0)
{
if (v___x_871_ == 0)
{
lean_dec(v_snd_859_);
v_a_829_ = v_fst_858_;
goto v___jp_828_;
}
else
{
size_t v___x_874_; size_t v___x_875_; lean_object* v___x_876_; 
v___x_874_ = ((size_t)0ULL);
v___x_875_ = lean_usize_of_nat(v___x_870_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
v___x_876_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(v_snd_859_, v___x_874_, v___x_875_, v___x_872_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
lean_dec(v_snd_859_);
v___y_861_ = v___x_876_;
goto v___jp_860_;
}
}
else
{
size_t v___x_877_; size_t v___x_878_; lean_object* v___x_879_; 
v___x_877_ = ((size_t)0ULL);
v___x_878_ = lean_usize_of_nat(v___x_870_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
v___x_879_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__8(v_snd_859_, v___x_877_, v___x_878_, v___x_872_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
lean_dec(v_snd_859_);
v___y_861_ = v___x_879_;
goto v___jp_860_;
}
}
v___jp_860_:
{
if (lean_obj_tag(v___y_861_) == 0)
{
lean_dec_ref(v___y_861_);
v_a_829_ = v_fst_858_;
goto v___jp_828_;
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
lean_dec(v_fst_858_);
lean_dec(v_n_827_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec_ref(v_bs_816_);
lean_dec(v_j_815_);
lean_dec_ref(v_a_812_);
lean_dec_ref(v_preDefs_811_);
lean_dec_ref(v___x_810_);
lean_dec_ref(v_recArgInfos_809_);
v_a_862_ = lean_ctor_get(v___y_861_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___y_861_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___y_861_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___y_861_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_a_862_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec(v_n_827_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec_ref(v_bs_816_);
lean_dec(v_j_815_);
lean_dec_ref(v_a_812_);
lean_dec_ref(v_preDefs_811_);
lean_dec_ref(v___x_810_);
lean_dec_ref(v_recArgInfos_809_);
v_a_880_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_856_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_856_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
v___jp_828_:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_nat_add(v_j_815_, v_one_826_);
lean_dec(v_j_815_);
v___x_831_ = lean_array_push(v_bs_816_, v_a_829_);
v_i_814_ = v_n_827_;
v_j_815_ = v___x_830_;
v_bs_816_ = v___x_831_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg___boxed(lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_recArgInfos_891_, lean_object* v___x_892_, lean_object* v_preDefs_893_, lean_object* v_a_894_, lean_object* v_as_895_, lean_object* v_i_896_, lean_object* v_j_897_, lean_object* v_bs_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
uint8_t v_a_21400__boxed_904_; lean_object* v_res_905_; 
v_a_21400__boxed_904_ = lean_unbox(v_a_888_);
v_res_905_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg(v_a_21400__boxed_904_, v_a_889_, v_a_890_, v_recArgInfos_891_, v___x_892_, v_preDefs_893_, v_a_894_, v_as_895_, v_i_896_, v_j_897_, v_bs_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
lean_dec_ref(v_as_895_);
lean_dec_ref(v_a_890_);
lean_dec_ref(v_a_889_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
if (lean_obj_tag(v_a_906_) == 0)
{
lean_object* v___x_908_; 
v___x_908_ = l_List_reverse___redArg(v_a_907_);
return v___x_908_;
}
else
{
lean_object* v_head_909_; lean_object* v_tail_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_919_; 
v_head_909_ = lean_ctor_get(v_a_906_, 0);
v_tail_910_ = lean_ctor_get(v_a_906_, 1);
v_isSharedCheck_919_ = !lean_is_exclusive(v_a_906_);
if (v_isSharedCheck_919_ == 0)
{
v___x_912_ = v_a_906_;
v_isShared_913_ = v_isSharedCheck_919_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_tail_910_);
lean_inc(v_head_909_);
lean_dec(v_a_906_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_919_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_914_; lean_object* v___x_916_; 
v___x_914_ = l_Lean_MessageData_ofExpr(v_head_909_);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 1, v_a_907_);
lean_ctor_set(v___x_912_, 0, v___x_914_);
v___x_916_ = v___x_912_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_914_);
lean_ctor_set(v_reuseFailAlloc_918_, 1, v_a_907_);
v___x_916_ = v_reuseFailAlloc_918_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
v_a_906_ = v_tail_910_;
v_a_907_ = v___x_916_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0(lean_object* v_fixedParamPerms_920_, lean_object* v___x_921_, lean_object* v_j_922_, lean_object* v_xs_923_, lean_object* v_snd_924_, uint8_t v_isZero_925_, lean_object* v_ys_926_, lean_object* v_x_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_perms_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; uint8_t v___x_937_; uint8_t v___x_938_; lean_object* v___x_939_; 
v_perms_933_ = lean_ctor_get(v_fixedParamPerms_920_, 1);
v___x_934_ = lean_array_get_borrowed(v___x_921_, v_perms_933_, v_j_922_);
lean_inc_ref(v_ys_926_);
lean_inc(v___x_934_);
v___x_935_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v___x_934_, v_xs_923_, v_ys_926_);
v___x_936_ = l_Lean_Expr_beta(v_snd_924_, v_ys_926_);
v___x_937_ = 1;
v___x_938_ = 1;
v___x_939_ = l_Lean_Meta_mkLambdaFVars(v___x_935_, v___x_936_, v_isZero_925_, v___x_937_, v_isZero_925_, v___x_937_, v___x_938_, v___y_928_, v___y_929_, v___y_930_, v___y_931_);
lean_dec_ref(v___x_935_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0___boxed(lean_object* v_fixedParamPerms_940_, lean_object* v___x_941_, lean_object* v_j_942_, lean_object* v_xs_943_, lean_object* v_snd_944_, lean_object* v_isZero_945_, lean_object* v_ys_946_, lean_object* v_x_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
uint8_t v_isZero_boxed_953_; lean_object* v_res_954_; 
v_isZero_boxed_953_ = lean_unbox(v_isZero_945_);
v_res_954_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0(v_fixedParamPerms_940_, v___x_941_, v_j_942_, v_xs_943_, v_snd_944_, v_isZero_boxed_953_, v_ys_946_, v_x_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
lean_dec_ref(v_x_947_);
lean_dec_ref(v_xs_943_);
lean_dec(v_j_942_);
lean_dec_ref(v_fixedParamPerms_940_);
return v_res_954_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0(void){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = l_Array_instInhabited(lean_box(0));
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(lean_object* v_fixedParamPerms_956_, lean_object* v_xs_957_, lean_object* v_as_958_, lean_object* v_i_959_, lean_object* v_j_960_, lean_object* v_bs_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v_zero_967_; uint8_t v_isZero_968_; 
v_zero_967_ = lean_unsigned_to_nat(0u);
v_isZero_968_ = lean_nat_dec_eq(v_i_959_, v_zero_967_);
if (v_isZero_968_ == 1)
{
lean_object* v___x_969_; 
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec(v___y_963_);
lean_dec_ref(v___y_962_);
lean_dec(v_j_960_);
lean_dec(v_i_959_);
lean_dec_ref(v_xs_957_);
lean_dec_ref(v_fixedParamPerms_956_);
v___x_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_969_, 0, v_bs_961_);
return v___x_969_;
}
else
{
lean_object* v___x_970_; lean_object* v_fst_971_; lean_object* v_snd_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___f_975_; lean_object* v___x_976_; 
v___x_970_ = lean_array_fget_borrowed(v_as_958_, v_j_960_);
v_fst_971_ = lean_ctor_get(v___x_970_, 0);
v_snd_972_ = lean_ctor_get(v___x_970_, 1);
v___x_973_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0);
v___x_974_ = lean_box(v_isZero_968_);
lean_inc(v_snd_972_);
lean_inc_ref(v_xs_957_);
lean_inc(v_j_960_);
lean_inc_ref(v_fixedParamPerms_956_);
v___f_975_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___lam__0___boxed), 13, 6);
lean_closure_set(v___f_975_, 0, v_fixedParamPerms_956_);
lean_closure_set(v___f_975_, 1, v___x_973_);
lean_closure_set(v___f_975_, 2, v_j_960_);
lean_closure_set(v___f_975_, 3, v_xs_957_);
lean_closure_set(v___f_975_, 4, v_snd_972_);
lean_closure_set(v___f_975_, 5, v___x_974_);
lean_inc(v___y_965_);
lean_inc_ref(v___y_964_);
lean_inc(v___y_963_);
lean_inc_ref(v___y_962_);
lean_inc(v_fst_971_);
v___x_976_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_fst_971_, v___f_975_, v_isZero_968_, v___y_962_, v___y_963_, v___y_964_, v___y_965_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v_one_978_; lean_object* v_n_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref(v___x_976_);
v_one_978_ = lean_unsigned_to_nat(1u);
v_n_979_ = lean_nat_sub(v_i_959_, v_one_978_);
lean_dec(v_i_959_);
v___x_980_ = lean_nat_add(v_j_960_, v_one_978_);
lean_dec(v_j_960_);
v___x_981_ = lean_array_push(v_bs_961_, v_a_977_);
v_i_959_ = v_n_979_;
v_j_960_ = v___x_980_;
v_bs_961_ = v___x_981_;
goto _start;
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec(v___y_963_);
lean_dec_ref(v___y_962_);
lean_dec_ref(v_bs_961_);
lean_dec(v_j_960_);
lean_dec(v_i_959_);
lean_dec_ref(v_xs_957_);
lean_dec_ref(v_fixedParamPerms_956_);
v_a_983_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_976_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_976_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___boxed(lean_object* v_fixedParamPerms_991_, lean_object* v_xs_992_, lean_object* v_as_993_, lean_object* v_i_994_, lean_object* v_j_995_, lean_object* v_bs_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(v_fixedParamPerms_991_, v_xs_992_, v_as_993_, v_i_994_, v_j_995_, v_bs_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_);
lean_dec_ref(v_as_993_);
return v_res_1002_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = lean_box(0);
v___x_1007_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__1));
v___x_1008_ = l_Lean_Expr_const___override(v___x_1007_, v___x_1006_);
return v___x_1008_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__3));
v___x_1011_ = l_Lean_stringToMessageData(v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__5));
v___x_1014_ = l_Lean_stringToMessageData(v___x_1013_);
return v___x_1014_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__8(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__7));
v___x_1017_ = l_Lean_stringToMessageData(v___x_1016_);
return v___x_1017_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__10(void){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__9));
v___x_1020_ = l_Lean_stringToMessageData(v___x_1019_);
return v___x_1020_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__12(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__11));
v___x_1023_ = l_Lean_stringToMessageData(v___x_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(lean_object* v___x_1024_, lean_object* v_recArgInfos_1025_, lean_object* v_a_1026_, lean_object* v___x_1027_, lean_object* v___x_1028_, lean_object* v_fixedParamPerms_1029_, lean_object* v_xs_1030_, lean_object* v_preDefs_1031_, lean_object* v_numIndices_1032_, lean_object* v___x_1033_, lean_object* v___f_1034_, uint8_t v_a_1035_, lean_object* v_funTypes_1036_, lean_object* v_motives_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v___y_1088_; lean_object* v___y_1089_; lean_object* v___y_1090_; lean_object* v___y_1091_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___x_1217_; lean_object* v_a_1218_; uint8_t v___x_1219_; 
lean_inc(v___x_1024_);
v___x_1217_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_1024_, v___y_1040_);
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
lean_inc(v_a_1218_);
lean_dec_ref(v___x_1217_);
v___x_1219_ = lean_unbox(v_a_1218_);
lean_dec(v_a_1218_);
if (v___x_1219_ == 0)
{
v___y_1175_ = v___y_1038_;
v___y_1176_ = v___y_1039_;
v___y_1177_ = v___y_1040_;
v___y_1178_ = v___y_1041_;
goto v___jp_1174_;
}
else
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1220_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__10);
lean_inc_ref(v_funTypes_1036_);
v___x_1221_ = lean_array_to_list(v_funTypes_1036_);
v___x_1222_ = lean_box(0);
v___x_1223_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v___x_1221_, v___x_1222_);
v___x_1224_ = l_Lean_MessageData_ofList(v___x_1223_);
v___x_1225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1220_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__12);
v___x_1227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1225_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
lean_inc_ref(v_motives_1037_);
v___x_1228_ = lean_array_to_list(v_motives_1037_);
v___x_1229_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v___x_1228_, v___x_1222_);
v___x_1230_ = l_Lean_MessageData_ofList(v___x_1229_);
v___x_1231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1227_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
lean_inc(v___x_1024_);
v___x_1232_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v___x_1024_, v___x_1231_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_dec_ref(v___x_1232_);
v___y_1175_ = v___y_1038_;
v___y_1176_ = v___y_1039_;
v___y_1177_ = v___y_1040_;
v___y_1178_ = v___y_1041_;
goto v___jp_1174_;
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec_ref(v_motives_1037_);
lean_dec_ref(v_funTypes_1036_);
lean_dec_ref(v___f_1034_);
lean_dec_ref(v___x_1033_);
lean_dec_ref(v_preDefs_1031_);
lean_dec_ref(v_xs_1030_);
lean_dec_ref(v_fixedParamPerms_1029_);
lean_dec(v___x_1028_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v_recArgInfos_1025_);
lean_dec(v___x_1024_);
v_a_1233_ = lean_ctor_get(v___x_1232_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1232_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1232_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1232_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
v___jp_1043_:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1050_ = l_Array_zip___redArg(v_recArgInfos_1025_, v_a_1026_);
lean_dec_ref(v_recArgInfos_1025_);
v___x_1051_ = lean_array_get_size(v___x_1050_);
v___x_1052_ = lean_mk_empty_array_with_capacity(v___x_1051_);
lean_inc(v___y_1049_);
lean_inc_ref(v___y_1048_);
lean_inc(v___y_1047_);
lean_inc_ref(v___y_1046_);
lean_inc(v___x_1028_);
v___x_1053_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___redArg(v___x_1027_, v___y_1044_, v___y_1045_, v_funTypes_1036_, v___x_1050_, v___x_1051_, v___x_1028_, v___x_1052_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_);
lean_dec_ref(v___x_1050_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref(v___x_1053_);
v___x_1055_ = l_Array_zip___redArg(v_a_1026_, v_a_1054_);
lean_dec(v_a_1054_);
v___x_1056_ = lean_array_get_size(v___x_1055_);
v___x_1057_ = lean_mk_empty_array_with_capacity(v___x_1056_);
lean_inc(v___x_1028_);
v___x_1058_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(v_fixedParamPerms_1029_, v_xs_1030_, v___x_1055_, v___x_1056_, v___x_1028_, v___x_1057_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_);
lean_dec_ref(v___x_1055_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1068_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1061_ = v___x_1058_;
v_isShared_1062_ = v_isSharedCheck_1068_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1058_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1068_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1066_; 
v___x_1063_ = lean_mk_empty_array_with_capacity(v___x_1028_);
v___x_1064_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__13(v_preDefs_1031_, v_a_1059_, v___x_1028_, v___x_1063_);
lean_dec(v_a_1059_);
lean_dec_ref(v_preDefs_1031_);
if (v_isShared_1062_ == 0)
{
lean_ctor_set(v___x_1061_, 0, v___x_1064_);
v___x_1066_ = v___x_1061_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1064_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
lean_dec_ref(v_preDefs_1031_);
lean_dec(v___x_1028_);
v_a_1069_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1058_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1058_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
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
else
{
lean_object* v_a_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1084_; 
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec_ref(v_preDefs_1031_);
lean_dec_ref(v_xs_1030_);
lean_dec_ref(v_fixedParamPerms_1029_);
lean_dec(v___x_1028_);
v_a_1077_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1084_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1079_ = v___x_1053_;
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_a_1077_);
lean_dec(v___x_1053_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1084_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v___x_1082_; 
if (v_isShared_1080_ == 0)
{
v___x_1082_ = v___x_1079_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v_a_1077_);
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
v___jp_1085_:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
lean_inc_ref(v___y_1086_);
lean_inc(v___x_1028_);
v___x_1092_ = lean_apply_1(v___y_1086_, v___x_1028_);
v___x_1093_ = lean_unsigned_to_nat(1u);
v___x_1094_ = lean_nat_add(v_numIndices_1032_, v___x_1093_);
v___x_1095_ = lean_box(0);
v___x_1096_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__2);
v___x_1097_ = lean_mk_array(v___x_1094_, v___x_1096_);
v___x_1098_ = l_Lean_mkAppN(v___x_1092_, v___x_1097_);
lean_dec_ref(v___x_1097_);
v___x_1099_ = lean_array_get_size(v___x_1027_);
lean_inc(v___y_1091_);
lean_inc_ref(v___y_1090_);
lean_inc(v___y_1089_);
lean_inc_ref(v___y_1088_);
v___x_1100_ = l_Lean_Meta_inferArgumentTypesN(v___x_1099_, v___x_1098_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
if (lean_obj_tag(v___x_1100_) == 0)
{
lean_object* v_a_1101_; lean_object* v___x_1102_; 
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_a_1101_);
lean_dec_ref(v___x_1100_);
lean_inc(v___y_1091_);
lean_inc_ref(v___y_1090_);
lean_inc(v___y_1089_);
lean_inc_ref(v___y_1088_);
v___x_1102_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg(v___x_1033_, v___f_1034_, v___x_1027_, v_a_1101_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
lean_dec_ref(v___y_1087_);
lean_dec(v_a_1101_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; lean_object* v___x_1104_; lean_object* v_a_1105_; uint8_t v___x_1106_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc(v_a_1103_);
lean_dec_ref(v___x_1102_);
lean_inc(v___x_1024_);
v___x_1104_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_1024_, v___y_1090_);
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref(v___x_1104_);
v___x_1106_ = lean_unbox(v_a_1105_);
lean_dec(v_a_1105_);
if (v___x_1106_ == 0)
{
lean_dec(v___x_1024_);
v___y_1044_ = v___y_1086_;
v___y_1045_ = v_a_1103_;
v___y_1046_ = v___y_1088_;
v___y_1047_ = v___y_1089_;
v___y_1048_ = v___y_1090_;
v___y_1049_ = v___y_1091_;
goto v___jp_1043_;
}
else
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1107_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__4);
lean_inc(v_a_1103_);
v___x_1108_ = lean_array_to_list(v_a_1103_);
v___x_1109_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v___x_1108_, v___x_1095_);
v___x_1110_ = l_Lean_MessageData_ofList(v___x_1109_);
v___x_1111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1107_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v___x_1024_, v___x_1111_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_dec_ref(v___x_1112_);
v___y_1044_ = v___y_1086_;
v___y_1045_ = v_a_1103_;
v___y_1046_ = v___y_1088_;
v___y_1047_ = v___y_1089_;
v___y_1048_ = v___y_1090_;
v___y_1049_ = v___y_1091_;
goto v___jp_1043_;
}
else
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
lean_dec(v_a_1103_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec_ref(v___y_1086_);
lean_dec_ref(v_funTypes_1036_);
lean_dec_ref(v_preDefs_1031_);
lean_dec_ref(v_xs_1030_);
lean_dec_ref(v_fixedParamPerms_1029_);
lean_dec(v___x_1028_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v_recArgInfos_1025_);
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1115_ = v___x_1112_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___x_1112_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1113_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
}
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec_ref(v___y_1086_);
lean_dec_ref(v_funTypes_1036_);
lean_dec_ref(v_preDefs_1031_);
lean_dec_ref(v_xs_1030_);
lean_dec_ref(v_fixedParamPerms_1029_);
lean_dec(v___x_1028_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v_recArgInfos_1025_);
lean_dec(v___x_1024_);
v_a_1121_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1102_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1102_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec_ref(v___y_1086_);
lean_dec_ref(v_funTypes_1036_);
lean_dec_ref(v___f_1034_);
lean_dec_ref(v___x_1033_);
lean_dec_ref(v_preDefs_1031_);
lean_dec_ref(v_xs_1030_);
lean_dec_ref(v_fixedParamPerms_1029_);
lean_dec(v___x_1028_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v_recArgInfos_1025_);
lean_dec(v___x_1024_);
v_a_1129_ = lean_ctor_get(v___x_1100_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1100_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1100_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1100_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
v___jp_1137_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1144_ = lean_array_get_size(v_recArgInfos_1025_);
v___x_1145_ = lean_mk_empty_array_with_capacity(v___x_1144_);
lean_inc(v___y_1143_);
lean_inc_ref(v___y_1142_);
lean_inc(v___y_1141_);
lean_inc_ref(v___y_1140_);
lean_inc(v___x_1028_);
lean_inc_ref(v___y_1138_);
lean_inc_ref(v_preDefs_1031_);
lean_inc_ref(v___x_1027_);
lean_inc_ref(v_recArgInfos_1025_);
v___x_1146_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg(v_a_1035_, v_a_1026_, v___y_1139_, v_recArgInfos_1025_, v___x_1027_, v_preDefs_1031_, v___y_1138_, v_recArgInfos_1025_, v___x_1144_, v___x_1028_, v___x_1145_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
lean_dec_ref(v___y_1139_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1148_; lean_object* v_a_1149_; uint8_t v___x_1150_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref(v___x_1146_);
lean_inc(v___x_1024_);
v___x_1148_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_1024_, v___y_1142_);
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1149_);
lean_dec_ref(v___x_1148_);
v___x_1150_ = lean_unbox(v_a_1149_);
lean_dec(v_a_1149_);
if (v___x_1150_ == 0)
{
v___y_1086_ = v___y_1138_;
v___y_1087_ = v_a_1147_;
v___y_1088_ = v___y_1140_;
v___y_1089_ = v___y_1141_;
v___y_1090_ = v___y_1142_;
v___y_1091_ = v___y_1143_;
goto v___jp_1085_;
}
else
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1151_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__6);
lean_inc(v_a_1147_);
v___x_1152_ = lean_array_to_list(v_a_1147_);
v___x_1153_ = lean_box(0);
v___x_1154_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v___x_1152_, v___x_1153_);
v___x_1155_ = l_Lean_MessageData_ofList(v___x_1154_);
v___x_1156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1151_);
lean_ctor_set(v___x_1156_, 1, v___x_1155_);
lean_inc(v___x_1024_);
v___x_1157_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v___x_1024_, v___x_1156_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_dec_ref(v___x_1157_);
v___y_1086_ = v___y_1138_;
v___y_1087_ = v_a_1147_;
v___y_1088_ = v___y_1140_;
v___y_1089_ = v___y_1141_;
v___y_1090_ = v___y_1142_;
v___y_1091_ = v___y_1143_;
goto v___jp_1085_;
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
lean_dec(v_a_1147_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec_ref(v___y_1138_);
lean_dec_ref(v_funTypes_1036_);
lean_dec_ref(v___f_1034_);
lean_dec_ref(v___x_1033_);
lean_dec_ref(v_preDefs_1031_);
lean_dec_ref(v_xs_1030_);
lean_dec_ref(v_fixedParamPerms_1029_);
lean_dec(v___x_1028_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v_recArgInfos_1025_);
lean_dec(v___x_1024_);
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
else
{
lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1173_; 
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec_ref(v___y_1138_);
lean_dec_ref(v_funTypes_1036_);
lean_dec_ref(v___f_1034_);
lean_dec_ref(v___x_1033_);
lean_dec_ref(v_preDefs_1031_);
lean_dec_ref(v_xs_1030_);
lean_dec_ref(v_fixedParamPerms_1029_);
lean_dec(v___x_1028_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v_recArgInfos_1025_);
lean_dec(v___x_1024_);
v_a_1166_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1168_ = v___x_1146_;
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_dec(v___x_1146_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1169_ == 0)
{
v___x_1171_ = v___x_1168_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1166_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
v___jp_1174_:
{
lean_object* v___x_1179_; 
lean_inc(v___y_1178_);
lean_inc_ref(v___y_1177_);
lean_inc(v___y_1176_);
lean_inc_ref(v___y_1175_);
v___x_1179_ = l_Lean_Elab_Structural_mkBRecOnConst(v_recArgInfos_1025_, v___x_1027_, v_motives_1037_, v_a_1035_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
lean_dec_ref(v_motives_1037_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_a_1180_; lean_object* v___x_1181_; 
v_a_1180_ = lean_ctor_get(v___x_1179_, 0);
lean_inc(v_a_1180_);
lean_dec_ref(v___x_1179_);
lean_inc(v___y_1178_);
lean_inc_ref(v___y_1177_);
lean_inc(v___y_1176_);
lean_inc_ref(v___y_1175_);
lean_inc(v_a_1180_);
lean_inc_ref(v___x_1027_);
v___x_1181_ = l_Lean_Elab_Structural_inferBRecOnFTypes(v_recArgInfos_1025_, v___x_1027_, v_a_1180_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; lean_object* v___x_1183_; lean_object* v_a_1184_; uint8_t v___x_1185_; 
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
lean_inc(v_a_1182_);
lean_dec_ref(v___x_1181_);
lean_inc(v___x_1024_);
v___x_1183_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_1024_, v___y_1177_);
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
lean_inc(v_a_1184_);
lean_dec_ref(v___x_1183_);
v___x_1185_ = lean_unbox(v_a_1184_);
lean_dec(v_a_1184_);
if (v___x_1185_ == 0)
{
v___y_1138_ = v_a_1180_;
v___y_1139_ = v_a_1182_;
v___y_1140_ = v___y_1175_;
v___y_1141_ = v___y_1176_;
v___y_1142_ = v___y_1177_;
v___y_1143_ = v___y_1178_;
goto v___jp_1137_;
}
else
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1186_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___closed__8);
lean_inc(v_a_1182_);
v___x_1187_ = lean_array_to_list(v_a_1182_);
v___x_1188_ = lean_box(0);
v___x_1189_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v___x_1187_, v___x_1188_);
v___x_1190_ = l_Lean_MessageData_ofList(v___x_1189_);
v___x_1191_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1186_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
lean_inc(v___x_1024_);
v___x_1192_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v___x_1024_, v___x_1191_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
if (lean_obj_tag(v___x_1192_) == 0)
{
lean_dec_ref(v___x_1192_);
v___y_1138_ = v_a_1180_;
v___y_1139_ = v_a_1182_;
v___y_1140_ = v___y_1175_;
v___y_1141_ = v___y_1176_;
v___y_1142_ = v___y_1177_;
v___y_1143_ = v___y_1178_;
goto v___jp_1137_;
}
else
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1200_; 
lean_dec(v_a_1182_);
lean_dec(v_a_1180_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec_ref(v_funTypes_1036_);
lean_dec_ref(v___f_1034_);
lean_dec_ref(v___x_1033_);
lean_dec_ref(v_preDefs_1031_);
lean_dec_ref(v_xs_1030_);
lean_dec_ref(v_fixedParamPerms_1029_);
lean_dec(v___x_1028_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v_recArgInfos_1025_);
lean_dec(v___x_1024_);
v_a_1193_ = lean_ctor_get(v___x_1192_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1195_ = v___x_1192_;
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v___x_1192_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_a_1193_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
}
else
{
lean_object* v_a_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1208_; 
lean_dec(v_a_1180_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec_ref(v_funTypes_1036_);
lean_dec_ref(v___f_1034_);
lean_dec_ref(v___x_1033_);
lean_dec_ref(v_preDefs_1031_);
lean_dec_ref(v_xs_1030_);
lean_dec_ref(v_fixedParamPerms_1029_);
lean_dec(v___x_1028_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v_recArgInfos_1025_);
lean_dec(v___x_1024_);
v_a_1201_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1208_ == 0)
{
v___x_1203_ = v___x_1181_;
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_a_1201_);
lean_dec(v___x_1181_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1208_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1206_; 
if (v_isShared_1204_ == 0)
{
v___x_1206_ = v___x_1203_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v_a_1201_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec_ref(v_funTypes_1036_);
lean_dec_ref(v___f_1034_);
lean_dec_ref(v___x_1033_);
lean_dec_ref(v_preDefs_1031_);
lean_dec_ref(v_xs_1030_);
lean_dec_ref(v_fixedParamPerms_1029_);
lean_dec(v___x_1028_);
lean_dec_ref(v___x_1027_);
lean_dec_ref(v_recArgInfos_1025_);
lean_dec(v___x_1024_);
v_a_1209_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1179_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1179_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___boxed(lean_object** _args){
lean_object* v___x_1241_ = _args[0];
lean_object* v_recArgInfos_1242_ = _args[1];
lean_object* v_a_1243_ = _args[2];
lean_object* v___x_1244_ = _args[3];
lean_object* v___x_1245_ = _args[4];
lean_object* v_fixedParamPerms_1246_ = _args[5];
lean_object* v_xs_1247_ = _args[6];
lean_object* v_preDefs_1248_ = _args[7];
lean_object* v_numIndices_1249_ = _args[8];
lean_object* v___x_1250_ = _args[9];
lean_object* v___f_1251_ = _args[10];
lean_object* v_a_1252_ = _args[11];
lean_object* v_funTypes_1253_ = _args[12];
lean_object* v_motives_1254_ = _args[13];
lean_object* v___y_1255_ = _args[14];
lean_object* v___y_1256_ = _args[15];
lean_object* v___y_1257_ = _args[16];
lean_object* v___y_1258_ = _args[17];
lean_object* v___y_1259_ = _args[18];
_start:
{
uint8_t v_a_21726__boxed_1260_; lean_object* v_res_1261_; 
v_a_21726__boxed_1260_ = lean_unbox(v_a_1252_);
v_res_1261_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(v___x_1241_, v_recArgInfos_1242_, v_a_1243_, v___x_1244_, v___x_1245_, v_fixedParamPerms_1246_, v_xs_1247_, v_preDefs_1248_, v_numIndices_1249_, v___x_1250_, v___f_1251_, v_a_21726__boxed_1260_, v_funTypes_1253_, v_motives_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_);
lean_dec(v_numIndices_1249_);
lean_dec_ref(v_a_1243_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___redArg(lean_object* v_a_1262_, lean_object* v_funTypes_1263_, lean_object* v_as_1264_, lean_object* v_i_1265_, lean_object* v_j_1266_, lean_object* v_bs_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v_zero_1273_; uint8_t v_isZero_1274_; 
v_zero_1273_ = lean_unsigned_to_nat(0u);
v_isZero_1274_ = lean_nat_dec_eq(v_i_1265_, v_zero_1273_);
if (v_isZero_1274_ == 1)
{
lean_object* v___x_1275_; 
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
lean_dec(v_j_1266_);
lean_dec(v_i_1265_);
v___x_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1275_, 0, v_bs_1267_);
return v___x_1275_;
}
else
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1276_ = l_Lean_instInhabitedExpr;
v___x_1277_ = lean_array_fget_borrowed(v_as_1264_, v_j_1266_);
v___x_1278_ = lean_array_get_borrowed(v___x_1276_, v_a_1262_, v_j_1266_);
v___x_1279_ = lean_array_get_borrowed(v___x_1276_, v_funTypes_1263_, v_j_1266_);
lean_inc(v___y_1271_);
lean_inc_ref(v___y_1270_);
lean_inc(v___y_1269_);
lean_inc_ref(v___y_1268_);
lean_inc(v___x_1279_);
lean_inc(v___x_1278_);
lean_inc(v___x_1277_);
v___x_1280_ = l_Lean_Elab_Structural_mkIndPredBRecOnMotive(v___x_1277_, v___x_1278_, v___x_1279_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v_one_1282_; lean_object* v_n_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_a_1281_);
lean_dec_ref(v___x_1280_);
v_one_1282_ = lean_unsigned_to_nat(1u);
v_n_1283_ = lean_nat_sub(v_i_1265_, v_one_1282_);
lean_dec(v_i_1265_);
v___x_1284_ = lean_nat_add(v_j_1266_, v_one_1282_);
lean_dec(v_j_1266_);
v___x_1285_ = lean_array_push(v_bs_1267_, v_a_1281_);
v_i_1265_ = v_n_1283_;
v_j_1266_ = v___x_1284_;
v_bs_1267_ = v___x_1285_;
goto _start;
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
lean_dec_ref(v_bs_1267_);
lean_dec(v_j_1266_);
lean_dec(v_i_1265_);
v_a_1287_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1280_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1280_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___redArg___boxed(lean_object* v_a_1295_, lean_object* v_funTypes_1296_, lean_object* v_as_1297_, lean_object* v_i_1298_, lean_object* v_j_1299_, lean_object* v_bs_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___redArg(v_a_1295_, v_funTypes_1296_, v_as_1297_, v_i_1298_, v_j_1299_, v_bs_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
lean_dec_ref(v_as_1297_);
lean_dec_ref(v_funTypes_1296_);
lean_dec_ref(v_a_1295_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2(lean_object* v_recArgInfos_1307_, lean_object* v_a_1308_, lean_object* v___x_1309_, lean_object* v___f_1310_, lean_object* v_funTypes_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1317_ = lean_array_get_size(v_recArgInfos_1307_);
v___x_1318_ = lean_mk_empty_array_with_capacity(v___x_1317_);
lean_inc(v___y_1315_);
lean_inc_ref(v___y_1314_);
lean_inc(v___y_1313_);
lean_inc_ref(v___y_1312_);
v___x_1319_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___redArg(v_a_1308_, v_funTypes_1311_, v_recArgInfos_1307_, v___x_1317_, v___x_1309_, v___x_1318_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1321_; 
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
lean_inc(v_a_1320_);
lean_dec_ref(v___x_1319_);
v___x_1321_ = lean_apply_7(v___f_1310_, v_funTypes_1311_, v_a_1320_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, lean_box(0));
return v___x_1321_;
}
else
{
lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1329_; 
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec_ref(v_funTypes_1311_);
lean_dec_ref(v___f_1310_);
v_a_1322_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1324_ = v___x_1319_;
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v___x_1319_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1327_; 
if (v_isShared_1325_ == 0)
{
v___x_1327_ = v___x_1324_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_a_1322_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___boxed(lean_object* v_recArgInfos_1330_, lean_object* v_a_1331_, lean_object* v___x_1332_, lean_object* v___f_1333_, lean_object* v_funTypes_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2(v_recArgInfos_1330_, v_a_1331_, v___x_1332_, v___f_1333_, v_funTypes_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_);
lean_dec_ref(v_a_1331_);
lean_dec_ref(v_recArgInfos_1330_);
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(lean_object* v_a_1341_, lean_object* v_a_1342_){
_start:
{
if (lean_obj_tag(v_a_1341_) == 0)
{
lean_object* v___x_1343_; 
v___x_1343_ = l_List_reverse___redArg(v_a_1342_);
return v___x_1343_;
}
else
{
lean_object* v_head_1344_; lean_object* v_tail_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1356_; 
v_head_1344_ = lean_ctor_get(v_a_1341_, 0);
v_tail_1345_ = lean_ctor_get(v_a_1341_, 1);
v_isSharedCheck_1356_ = !lean_is_exclusive(v_a_1341_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1347_ = v_a_1341_;
v_isShared_1348_ = v_isSharedCheck_1356_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_tail_1345_);
lean_inc(v_head_1344_);
lean_dec(v_a_1341_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1356_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1353_; 
v___x_1349_ = l_Nat_reprFast(v_head_1344_);
v___x_1350_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1349_);
v___x_1351_ = l_Lean_MessageData_ofFormat(v___x_1350_);
if (v_isShared_1348_ == 0)
{
lean_ctor_set(v___x_1347_, 1, v_a_1342_);
lean_ctor_set(v___x_1347_, 0, v___x_1351_);
v___x_1353_ = v___x_1347_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v___x_1351_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v_a_1342_);
v___x_1353_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
v_a_1341_ = v_tail_1345_;
v_a_1342_ = v___x_1353_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18(lean_object* v_a_1357_, lean_object* v_a_1358_){
_start:
{
if (lean_obj_tag(v_a_1357_) == 0)
{
lean_object* v___x_1359_; 
v___x_1359_ = l_List_reverse___redArg(v_a_1358_);
return v___x_1359_;
}
else
{
lean_object* v_head_1360_; lean_object* v_tail_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1373_; 
v_head_1360_ = lean_ctor_get(v_a_1357_, 0);
v_tail_1361_ = lean_ctor_get(v_a_1357_, 1);
v_isSharedCheck_1373_ = !lean_is_exclusive(v_a_1357_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1363_ = v_a_1357_;
v_isShared_1364_ = v_isSharedCheck_1373_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_tail_1361_);
lean_inc(v_head_1360_);
lean_dec(v_a_1357_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1373_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1370_; 
v___x_1365_ = lean_array_to_list(v_head_1360_);
v___x_1366_ = lean_box(0);
v___x_1367_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(v___x_1365_, v___x_1366_);
v___x_1368_ = l_Lean_MessageData_ofList(v___x_1367_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 1, v_a_1358_);
lean_ctor_set(v___x_1363_, 0, v___x_1368_);
v___x_1370_ = v___x_1363_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v___x_1368_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v_a_1358_);
v___x_1370_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
v_a_1357_ = v_tail_1361_;
v_a_1358_ = v___x_1370_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(lean_object* v_msg_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_ref_1380_; lean_object* v___x_1381_; lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1390_; 
v_ref_1380_ = lean_ctor_get(v___y_1377_, 5);
v___x_1381_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15_spec__27(v_msg_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_);
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1384_ = v___x_1381_;
v_isShared_1385_ = v_isSharedCheck_1390_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1381_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1390_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; lean_object* v___x_1388_; 
lean_inc(v_ref_1380_);
v___x_1386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1386_, 0, v_ref_1380_);
lean_ctor_set(v___x_1386_, 1, v_a_1382_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 1);
lean_ctor_set(v___x_1384_, 0, v___x_1386_);
v___x_1388_ = v___x_1384_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v___x_1386_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg___boxed(lean_object* v_msg_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v_msg_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
return v_res_1397_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__0));
v___x_1400_ = l_Lean_stringToMessageData(v___x_1399_);
return v___x_1400_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1402_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__2));
v___x_1403_ = l_Lean_stringToMessageData(v___x_1402_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(lean_object* v_constName_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
lean_object* v___x_1410_; lean_object* v_env_1411_; lean_object* v___x_1412_; 
v___x_1410_ = lean_st_ref_get(v___y_1408_);
v_env_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc_ref(v_env_1411_);
lean_dec(v___x_1410_);
lean_inc(v_constName_1404_);
v___x_1412_ = l_Lean_isInductiveCore_x3f(v_env_1411_, v_constName_1404_);
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v___x_1413_; uint8_t v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1413_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__1);
v___x_1414_ = 0;
v___x_1415_ = l_Lean_MessageData_ofConstName(v_constName_1404_, v___x_1414_);
v___x_1416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1413_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3, &l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3_once, _init_l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___closed__3);
v___x_1418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1418_, 0, v___x_1416_);
lean_ctor_set(v___x_1418_, 1, v___x_1417_);
v___x_1419_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v___x_1418_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
return v___x_1419_;
}
else
{
lean_object* v_val_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1427_; 
lean_dec(v_constName_1404_);
v_val_1420_ = lean_ctor_get(v___x_1412_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1422_ = v___x_1412_;
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_val_1420_);
lean_dec(v___x_1412_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1425_; 
if (v_isShared_1423_ == 0)
{
lean_ctor_set_tag(v___x_1422_, 0);
v___x_1425_ = v___x_1422_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_val_1420_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4___boxed(lean_object* v_constName_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(v_constName_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___redArg(lean_object* v_inst_1435_, lean_object* v_xs_1436_, lean_object* v_f_1437_, lean_object* v_x_1438_, lean_object* v_as_1439_, size_t v_i_1440_, size_t v_stop_1441_, lean_object* v_b_1442_){
_start:
{
lean_object* v___y_1444_; uint8_t v___x_1448_; 
v___x_1448_ = lean_usize_dec_eq(v_i_1440_, v_stop_1441_);
if (v___x_1448_ == 0)
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; uint8_t v___x_1452_; 
v___x_1449_ = lean_array_uget_borrowed(v_as_1439_, v_i_1440_);
lean_inc(v_inst_1435_);
v___x_1450_ = lean_array_get_borrowed(v_inst_1435_, v_xs_1436_, v___x_1449_);
lean_inc_ref(v_f_1437_);
lean_inc(v___x_1450_);
v___x_1451_ = lean_apply_1(v_f_1437_, v___x_1450_);
v___x_1452_ = lean_nat_dec_eq(v___x_1451_, v_x_1438_);
lean_dec(v___x_1451_);
if (v___x_1452_ == 0)
{
v___y_1444_ = v_b_1442_;
goto v___jp_1443_;
}
else
{
lean_object* v___x_1453_; 
lean_inc(v___x_1449_);
v___x_1453_ = lean_array_push(v_b_1442_, v___x_1449_);
v___y_1444_ = v___x_1453_;
goto v___jp_1443_;
}
}
else
{
lean_dec_ref(v_f_1437_);
lean_dec(v_inst_1435_);
return v_b_1442_;
}
v___jp_1443_:
{
size_t v___x_1445_; size_t v___x_1446_; 
v___x_1445_ = ((size_t)1ULL);
v___x_1446_ = lean_usize_add(v_i_1440_, v___x_1445_);
v_i_1440_ = v___x_1446_;
v_b_1442_ = v___y_1444_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___redArg___boxed(lean_object* v_inst_1454_, lean_object* v_xs_1455_, lean_object* v_f_1456_, lean_object* v_x_1457_, lean_object* v_as_1458_, lean_object* v_i_1459_, lean_object* v_stop_1460_, lean_object* v_b_1461_){
_start:
{
size_t v_i_boxed_1462_; size_t v_stop_boxed_1463_; lean_object* v_res_1464_; 
v_i_boxed_1462_ = lean_unbox_usize(v_i_1459_);
lean_dec(v_i_1459_);
v_stop_boxed_1463_ = lean_unbox_usize(v_stop_1460_);
lean_dec(v_stop_1460_);
v_res_1464_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___redArg(v_inst_1454_, v_xs_1455_, v_f_1456_, v_x_1457_, v_as_1458_, v_i_boxed_1462_, v_stop_boxed_1463_, v_b_1461_);
lean_dec_ref(v_as_1458_);
lean_dec(v_x_1457_);
lean_dec_ref(v_xs_1455_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg(lean_object* v_xs_1467_, lean_object* v_inst_1468_, lean_object* v_f_1469_, size_t v_sz_1470_, size_t v_i_1471_, lean_object* v_bs_1472_){
_start:
{
uint8_t v___x_1473_; 
v___x_1473_ = lean_usize_dec_lt(v_i_1471_, v_sz_1470_);
if (v___x_1473_ == 0)
{
lean_dec_ref(v_f_1469_);
lean_dec(v_inst_1468_);
return v_bs_1472_;
}
else
{
lean_object* v_v_1474_; lean_object* v___x_1475_; lean_object* v_bs_x27_1476_; lean_object* v___y_1478_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; uint8_t v___x_1487_; 
v_v_1474_ = lean_array_uget(v_bs_1472_, v_i_1471_);
v___x_1475_ = lean_unsigned_to_nat(0u);
v_bs_x27_1476_ = lean_array_uset(v_bs_1472_, v_i_1471_, v___x_1475_);
v___x_1483_ = lean_array_get_size(v_xs_1467_);
v___x_1484_ = l_Array_range(v___x_1483_);
v___x_1485_ = lean_array_get_size(v___x_1484_);
v___x_1486_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg___closed__0));
v___x_1487_ = lean_nat_dec_lt(v___x_1475_, v___x_1485_);
if (v___x_1487_ == 0)
{
lean_dec_ref(v___x_1484_);
lean_dec(v_v_1474_);
v___y_1478_ = v___x_1486_;
goto v___jp_1477_;
}
else
{
uint8_t v___x_1488_; 
v___x_1488_ = lean_nat_dec_le(v___x_1485_, v___x_1485_);
if (v___x_1488_ == 0)
{
if (v___x_1487_ == 0)
{
lean_dec_ref(v___x_1484_);
lean_dec(v_v_1474_);
v___y_1478_ = v___x_1486_;
goto v___jp_1477_;
}
else
{
size_t v___x_1489_; size_t v___x_1490_; lean_object* v___x_1491_; 
v___x_1489_ = ((size_t)0ULL);
v___x_1490_ = lean_usize_of_nat(v___x_1485_);
lean_inc_ref(v_f_1469_);
lean_inc(v_inst_1468_);
v___x_1491_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___redArg(v_inst_1468_, v_xs_1467_, v_f_1469_, v_v_1474_, v___x_1484_, v___x_1489_, v___x_1490_, v___x_1486_);
lean_dec_ref(v___x_1484_);
lean_dec(v_v_1474_);
v___y_1478_ = v___x_1491_;
goto v___jp_1477_;
}
}
else
{
size_t v___x_1492_; size_t v___x_1493_; lean_object* v___x_1494_; 
v___x_1492_ = ((size_t)0ULL);
v___x_1493_ = lean_usize_of_nat(v___x_1485_);
lean_inc_ref(v_f_1469_);
lean_inc(v_inst_1468_);
v___x_1494_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___redArg(v_inst_1468_, v_xs_1467_, v_f_1469_, v_v_1474_, v___x_1484_, v___x_1492_, v___x_1493_, v___x_1486_);
lean_dec_ref(v___x_1484_);
lean_dec(v_v_1474_);
v___y_1478_ = v___x_1494_;
goto v___jp_1477_;
}
}
v___jp_1477_:
{
size_t v___x_1479_; size_t v___x_1480_; lean_object* v___x_1481_; 
v___x_1479_ = ((size_t)1ULL);
v___x_1480_ = lean_usize_add(v_i_1471_, v___x_1479_);
v___x_1481_ = lean_array_uset(v_bs_x27_1476_, v_i_1471_, v___y_1478_);
v_i_1471_ = v___x_1480_;
v_bs_1472_ = v___x_1481_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg___boxed(lean_object* v_xs_1495_, lean_object* v_inst_1496_, lean_object* v_f_1497_, lean_object* v_sz_1498_, lean_object* v_i_1499_, lean_object* v_bs_1500_){
_start:
{
size_t v_sz_boxed_1501_; size_t v_i_boxed_1502_; lean_object* v_res_1503_; 
v_sz_boxed_1501_ = lean_unbox_usize(v_sz_1498_);
lean_dec(v_sz_1498_);
v_i_boxed_1502_ = lean_unbox_usize(v_i_1499_);
lean_dec(v_i_1499_);
v_res_1503_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg(v_xs_1495_, v_inst_1496_, v_f_1497_, v_sz_boxed_1501_, v_i_boxed_1502_, v_bs_1500_);
lean_dec_ref(v_xs_1495_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___redArg(lean_object* v_inst_1504_, lean_object* v_xs_1505_, lean_object* v_f_1506_, size_t v_sz_1507_, size_t v_i_1508_, lean_object* v_bs_1509_){
_start:
{
uint8_t v___x_1510_; 
v___x_1510_ = lean_usize_dec_lt(v_i_1508_, v_sz_1507_);
if (v___x_1510_ == 0)
{
lean_dec_ref(v_f_1506_);
lean_dec(v_inst_1504_);
return v_bs_1509_;
}
else
{
lean_object* v_v_1511_; lean_object* v___x_1512_; lean_object* v_bs_x27_1513_; lean_object* v___y_1515_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; 
v_v_1511_ = lean_array_uget(v_bs_1509_, v_i_1508_);
v___x_1512_ = lean_unsigned_to_nat(0u);
v_bs_x27_1513_ = lean_array_uset(v_bs_1509_, v_i_1508_, v___x_1512_);
v___x_1520_ = lean_array_get_size(v_xs_1505_);
v___x_1521_ = l_Array_range(v___x_1520_);
v___x_1522_ = lean_array_get_size(v___x_1521_);
v___x_1523_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg___closed__0));
v___x_1524_ = lean_nat_dec_lt(v___x_1512_, v___x_1522_);
if (v___x_1524_ == 0)
{
lean_dec_ref(v___x_1521_);
lean_dec(v_v_1511_);
v___y_1515_ = v___x_1523_;
goto v___jp_1514_;
}
else
{
uint8_t v___x_1525_; 
v___x_1525_ = lean_nat_dec_le(v___x_1522_, v___x_1522_);
if (v___x_1525_ == 0)
{
if (v___x_1524_ == 0)
{
lean_dec_ref(v___x_1521_);
lean_dec(v_v_1511_);
v___y_1515_ = v___x_1523_;
goto v___jp_1514_;
}
else
{
size_t v___x_1526_; size_t v___x_1527_; lean_object* v___x_1528_; 
v___x_1526_ = ((size_t)0ULL);
v___x_1527_ = lean_usize_of_nat(v___x_1522_);
lean_inc_ref(v_f_1506_);
lean_inc(v_inst_1504_);
v___x_1528_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___redArg(v_inst_1504_, v_xs_1505_, v_f_1506_, v_v_1511_, v___x_1521_, v___x_1526_, v___x_1527_, v___x_1523_);
lean_dec_ref(v___x_1521_);
lean_dec(v_v_1511_);
v___y_1515_ = v___x_1528_;
goto v___jp_1514_;
}
}
else
{
size_t v___x_1529_; size_t v___x_1530_; lean_object* v___x_1531_; 
v___x_1529_ = ((size_t)0ULL);
v___x_1530_ = lean_usize_of_nat(v___x_1522_);
lean_inc_ref(v_f_1506_);
lean_inc(v_inst_1504_);
v___x_1531_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___redArg(v_inst_1504_, v_xs_1505_, v_f_1506_, v_v_1511_, v___x_1521_, v___x_1529_, v___x_1530_, v___x_1523_);
lean_dec_ref(v___x_1521_);
lean_dec(v_v_1511_);
v___y_1515_ = v___x_1531_;
goto v___jp_1514_;
}
}
v___jp_1514_:
{
size_t v___x_1516_; size_t v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1516_ = ((size_t)1ULL);
v___x_1517_ = lean_usize_add(v_i_1508_, v___x_1516_);
v___x_1518_ = lean_array_uset(v_bs_x27_1513_, v_i_1508_, v___y_1515_);
v___x_1519_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg(v_xs_1505_, v_inst_1504_, v_f_1506_, v_sz_1507_, v___x_1517_, v___x_1518_);
return v___x_1519_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___redArg___boxed(lean_object* v_inst_1532_, lean_object* v_xs_1533_, lean_object* v_f_1534_, lean_object* v_sz_1535_, lean_object* v_i_1536_, lean_object* v_bs_1537_){
_start:
{
size_t v_sz_boxed_1538_; size_t v_i_boxed_1539_; lean_object* v_res_1540_; 
v_sz_boxed_1538_ = lean_unbox_usize(v_sz_1535_);
lean_dec(v_sz_1535_);
v_i_boxed_1539_ = lean_unbox_usize(v_i_1536_);
lean_dec(v_i_1536_);
v_res_1540_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___redArg(v_inst_1532_, v_xs_1533_, v_f_1534_, v_sz_boxed_1538_, v_i_boxed_1539_, v_bs_1537_);
lean_dec_ref(v_xs_1533_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(lean_object* v_as_1542_, lean_object* v_lo_1543_, lean_object* v_hi_1544_){
_start:
{
uint8_t v___x_1545_; 
v___x_1545_ = lean_nat_dec_lt(v_lo_1543_, v_hi_1544_);
if (v___x_1545_ == 0)
{
lean_dec(v_lo_1543_);
return v_as_1542_;
}
else
{
lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v_fst_1548_; lean_object* v_snd_1549_; uint8_t v___x_1550_; 
v___x_1546_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___closed__0));
lean_inc(v_lo_1543_);
v___x_1547_ = l_Array_qpartition___redArg(v_as_1542_, v___x_1546_, v_lo_1543_, v_hi_1544_);
v_fst_1548_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_fst_1548_);
v_snd_1549_ = lean_ctor_get(v___x_1547_, 1);
lean_inc(v_snd_1549_);
lean_dec_ref(v___x_1547_);
v___x_1550_ = lean_nat_dec_le(v_hi_1544_, v_fst_1548_);
if (v___x_1550_ == 0)
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1551_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(v_snd_1549_, v_lo_1543_, v_fst_1548_);
v___x_1552_ = lean_unsigned_to_nat(1u);
v___x_1553_ = lean_nat_add(v_fst_1548_, v___x_1552_);
lean_dec(v_fst_1548_);
v_as_1542_ = v___x_1551_;
v_lo_1543_ = v___x_1553_;
goto _start;
}
else
{
lean_dec(v_fst_1548_);
lean_dec(v_lo_1543_);
return v_snd_1549_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg___boxed(lean_object* v_as_1555_, lean_object* v_lo_1556_, lean_object* v_hi_1557_){
_start:
{
lean_object* v_res_1558_; 
v_res_1558_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(v_as_1555_, v_lo_1556_, v_hi_1557_);
lean_dec(v_hi_1557_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12(lean_object* v_as_1559_, size_t v_i_1560_, size_t v_stop_1561_, lean_object* v_b_1562_){
_start:
{
uint8_t v___x_1563_; 
v___x_1563_ = lean_usize_dec_eq(v_i_1560_, v_stop_1561_);
if (v___x_1563_ == 0)
{
lean_object* v___x_1564_; lean_object* v___x_1565_; size_t v___x_1566_; size_t v___x_1567_; 
v___x_1564_ = lean_array_uget_borrowed(v_as_1559_, v_i_1560_);
v___x_1565_ = l_Array_append___redArg(v_b_1562_, v___x_1564_);
v___x_1566_ = ((size_t)1ULL);
v___x_1567_ = lean_usize_add(v_i_1560_, v___x_1566_);
v_i_1560_ = v___x_1567_;
v_b_1562_ = v___x_1565_;
goto _start;
}
else
{
return v_b_1562_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12___boxed(lean_object* v_as_1569_, lean_object* v_i_1570_, lean_object* v_stop_1571_, lean_object* v_b_1572_){
_start:
{
size_t v_i_boxed_1573_; size_t v_stop_boxed_1574_; lean_object* v_res_1575_; 
v_i_boxed_1573_ = lean_unbox_usize(v_i_1570_);
lean_dec(v_i_1570_);
v_stop_boxed_1574_ = lean_unbox_usize(v_stop_1571_);
lean_dec(v_stop_1571_);
v_res_1575_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12(v_as_1569_, v_i_boxed_1573_, v_stop_boxed_1574_, v_b_1572_);
lean_dec_ref(v_as_1569_);
return v_res_1575_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg(lean_object* v_xs_1576_, lean_object* v_ys_1577_, lean_object* v_x_1578_){
_start:
{
lean_object* v_zero_1579_; uint8_t v_isZero_1580_; 
v_zero_1579_ = lean_unsigned_to_nat(0u);
v_isZero_1580_ = lean_nat_dec_eq(v_x_1578_, v_zero_1579_);
if (v_isZero_1580_ == 1)
{
lean_dec(v_x_1578_);
return v_isZero_1580_;
}
else
{
lean_object* v_one_1581_; lean_object* v_n_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; uint8_t v___x_1585_; 
v_one_1581_ = lean_unsigned_to_nat(1u);
v_n_1582_ = lean_nat_sub(v_x_1578_, v_one_1581_);
lean_dec(v_x_1578_);
v___x_1583_ = lean_array_fget_borrowed(v_xs_1576_, v_n_1582_);
v___x_1584_ = lean_array_fget_borrowed(v_ys_1577_, v_n_1582_);
v___x_1585_ = lean_nat_dec_eq(v___x_1583_, v___x_1584_);
if (v___x_1585_ == 0)
{
lean_dec(v_n_1582_);
return v___x_1585_;
}
else
{
v_x_1578_ = v_n_1582_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg___boxed(lean_object* v_xs_1587_, lean_object* v_ys_1588_, lean_object* v_x_1589_){
_start:
{
uint8_t v_res_1590_; lean_object* v_r_1591_; 
v_res_1590_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg(v_xs_1587_, v_ys_1588_, v_x_1589_);
lean_dec_ref(v_ys_1588_);
lean_dec_ref(v_xs_1587_);
v_r_1591_ = lean_box(v_res_1590_);
return v_r_1591_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0(void){
_start:
{
lean_object* v___x_1592_; 
v___x_1592_ = l_Array_instInhabited(lean_box(0));
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8(lean_object* v_msg_1593_){
_start:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; 
v___x_1594_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0, &l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8___closed__0);
v___x_1595_ = lean_panic_fn(v___x_1594_, v_msg_1593_);
return v___x_1595_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v___x_1598_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__1));
v___x_1599_ = lean_unsigned_to_nat(2u);
v___x_1600_ = lean_unsigned_to_nat(63u);
v___x_1601_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__0));
v___x_1602_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg___closed__0));
v___x_1603_ = l_mkPanicMessageWithDecl(v___x_1602_, v___x_1601_, v___x_1600_, v___x_1599_, v___x_1598_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg(lean_object* v_inst_1606_, lean_object* v_f_1607_, lean_object* v_xs_1608_, lean_object* v_ys_1609_){
_start:
{
size_t v_sz_1613_; size_t v___x_1614_; lean_object* v_positions_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___y_1619_; lean_object* v___y_1625_; lean_object* v___y_1626_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1637_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; uint8_t v___x_1647_; 
v_sz_1613_ = lean_array_size(v_ys_1609_);
v___x_1614_ = ((size_t)0ULL);
v_positions_1615_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___redArg(v_inst_1606_, v_xs_1608_, v_f_1607_, v_sz_1613_, v___x_1614_, v_ys_1609_);
v___x_1616_ = lean_array_get_size(v_xs_1608_);
v___x_1617_ = l_Array_range(v___x_1616_);
v___x_1644_ = lean_unsigned_to_nat(0u);
v___x_1645_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__3));
v___x_1646_ = lean_array_get_size(v_positions_1615_);
v___x_1647_ = lean_nat_dec_lt(v___x_1644_, v___x_1646_);
if (v___x_1647_ == 0)
{
v___y_1637_ = v___x_1645_;
goto v___jp_1636_;
}
else
{
uint8_t v___x_1648_; 
v___x_1648_ = lean_nat_dec_le(v___x_1646_, v___x_1646_);
if (v___x_1648_ == 0)
{
if (v___x_1647_ == 0)
{
v___y_1637_ = v___x_1645_;
goto v___jp_1636_;
}
else
{
size_t v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = lean_usize_of_nat(v___x_1646_);
v___x_1650_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12(v_positions_1615_, v___x_1614_, v___x_1649_, v___x_1645_);
v___y_1637_ = v___x_1650_;
goto v___jp_1636_;
}
}
else
{
size_t v___x_1651_; lean_object* v___x_1652_; 
v___x_1651_ = lean_usize_of_nat(v___x_1646_);
v___x_1652_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__12(v_positions_1615_, v___x_1614_, v___x_1651_, v___x_1645_);
v___y_1637_ = v___x_1652_;
goto v___jp_1636_;
}
}
v___jp_1610_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__2, &l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__2_once, _init_l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___closed__2);
v___x_1612_ = l_panic___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__8(v___x_1611_);
return v___x_1612_;
}
v___jp_1618_:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; uint8_t v___x_1622_; 
v___x_1620_ = lean_array_get_size(v___x_1617_);
v___x_1621_ = lean_array_get_size(v___y_1619_);
v___x_1622_ = lean_nat_dec_eq(v___x_1620_, v___x_1621_);
if (v___x_1622_ == 0)
{
lean_dec_ref(v___y_1619_);
lean_dec_ref(v___x_1617_);
lean_dec_ref(v_positions_1615_);
goto v___jp_1610_;
}
else
{
uint8_t v___x_1623_; 
v___x_1623_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg(v___x_1617_, v___y_1619_, v___x_1620_);
lean_dec_ref(v___y_1619_);
lean_dec_ref(v___x_1617_);
if (v___x_1623_ == 0)
{
lean_dec_ref(v_positions_1615_);
goto v___jp_1610_;
}
else
{
return v_positions_1615_;
}
}
}
v___jp_1624_:
{
lean_object* v___x_1629_; 
lean_dec(v___y_1625_);
v___x_1629_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(v___y_1626_, v___y_1627_, v___y_1628_);
lean_dec(v___y_1628_);
v___y_1619_ = v___x_1629_;
goto v___jp_1618_;
}
v___jp_1630_:
{
uint8_t v___x_1635_; 
v___x_1635_ = lean_nat_dec_le(v___y_1634_, v___y_1633_);
if (v___x_1635_ == 0)
{
lean_dec(v___y_1633_);
lean_inc(v___y_1634_);
v___y_1625_ = v___y_1631_;
v___y_1626_ = v___y_1632_;
v___y_1627_ = v___y_1634_;
v___y_1628_ = v___y_1634_;
goto v___jp_1624_;
}
else
{
v___y_1625_ = v___y_1631_;
v___y_1626_ = v___y_1632_;
v___y_1627_ = v___y_1634_;
v___y_1628_ = v___y_1633_;
goto v___jp_1624_;
}
}
v___jp_1636_:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; uint8_t v___x_1640_; 
v___x_1638_ = lean_array_get_size(v___y_1637_);
v___x_1639_ = lean_unsigned_to_nat(0u);
v___x_1640_ = lean_nat_dec_eq(v___x_1638_, v___x_1639_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1641_; lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1641_ = lean_unsigned_to_nat(1u);
v___x_1642_ = lean_nat_sub(v___x_1638_, v___x_1641_);
v___x_1643_ = lean_nat_dec_le(v___x_1639_, v___x_1642_);
if (v___x_1643_ == 0)
{
lean_inc(v___x_1642_);
v___y_1631_ = v___x_1638_;
v___y_1632_ = v___y_1637_;
v___y_1633_ = v___x_1642_;
v___y_1634_ = v___x_1642_;
goto v___jp_1630_;
}
else
{
v___y_1631_ = v___x_1638_;
v___y_1632_ = v___y_1637_;
v___y_1633_ = v___x_1642_;
v___y_1634_ = v___x_1639_;
goto v___jp_1630_;
}
}
else
{
v___y_1619_ = v___y_1637_;
goto v___jp_1618_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg___boxed(lean_object* v_inst_1653_, lean_object* v_f_1654_, lean_object* v_xs_1655_, lean_object* v_ys_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg(v_inst_1653_, v_f_1654_, v_xs_1655_, v_ys_1656_);
lean_dec_ref(v_xs_1655_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(lean_object* v_fixedParamPerms_1658_, lean_object* v_xs_1659_, lean_object* v_as_1660_, lean_object* v_i_1661_, lean_object* v_j_1662_, lean_object* v_bs_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_zero_1669_; uint8_t v_isZero_1670_; 
v_zero_1669_ = lean_unsigned_to_nat(0u);
v_isZero_1670_ = lean_nat_dec_eq(v_i_1661_, v_zero_1669_);
if (v_isZero_1670_ == 1)
{
lean_object* v___x_1671_; 
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec(v_j_1662_);
lean_dec(v_i_1661_);
lean_dec_ref(v_xs_1659_);
v___x_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1671_, 0, v_bs_1663_);
return v___x_1671_;
}
else
{
lean_object* v_perms_1672_; lean_object* v___x_1673_; lean_object* v_value_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v_perms_1672_ = lean_ctor_get(v_fixedParamPerms_1658_, 1);
v___x_1673_ = lean_array_fget_borrowed(v_as_1660_, v_j_1662_);
v_value_1674_ = lean_ctor_get(v___x_1673_, 7);
v___x_1675_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0);
v___x_1676_ = lean_array_get_borrowed(v___x_1675_, v_perms_1672_, v_j_1662_);
lean_inc(v___y_1667_);
lean_inc_ref(v___y_1666_);
lean_inc(v___y_1665_);
lean_inc_ref(v___y_1664_);
lean_inc_ref(v_xs_1659_);
lean_inc_ref(v_value_1674_);
lean_inc(v___x_1676_);
v___x_1677_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_1676_, v_value_1674_, v_xs_1659_, v___y_1664_, v___y_1665_, v___y_1666_, v___y_1667_);
if (lean_obj_tag(v___x_1677_) == 0)
{
lean_object* v_a_1678_; lean_object* v_one_1679_; lean_object* v_n_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
v_a_1678_ = lean_ctor_get(v___x_1677_, 0);
lean_inc(v_a_1678_);
lean_dec_ref(v___x_1677_);
v_one_1679_ = lean_unsigned_to_nat(1u);
v_n_1680_ = lean_nat_sub(v_i_1661_, v_one_1679_);
lean_dec(v_i_1661_);
v___x_1681_ = lean_nat_add(v_j_1662_, v_one_1679_);
lean_dec(v_j_1662_);
v___x_1682_ = lean_array_push(v_bs_1663_, v_a_1678_);
v_i_1661_ = v_n_1680_;
v_j_1662_ = v___x_1681_;
v_bs_1663_ = v___x_1682_;
goto _start;
}
else
{
lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1691_; 
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec(v___y_1665_);
lean_dec_ref(v___y_1664_);
lean_dec_ref(v_bs_1663_);
lean_dec(v_j_1662_);
lean_dec(v_i_1661_);
lean_dec_ref(v_xs_1659_);
v_a_1684_ = lean_ctor_get(v___x_1677_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1686_ = v___x_1677_;
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_dec(v___x_1677_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1689_; 
if (v_isShared_1687_ == 0)
{
v___x_1689_ = v___x_1686_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_a_1684_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg___boxed(lean_object* v_fixedParamPerms_1692_, lean_object* v_xs_1693_, lean_object* v_as_1694_, lean_object* v_i_1695_, lean_object* v_j_1696_, lean_object* v_bs_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(v_fixedParamPerms_1692_, v_xs_1693_, v_as_1694_, v_i_1695_, v_j_1696_, v_bs_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
lean_dec_ref(v_as_1694_);
lean_dec_ref(v_fixedParamPerms_1692_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(lean_object* v_fixedParamPerms_1704_, lean_object* v_xs_1705_, lean_object* v_as_1706_, lean_object* v_i_1707_, lean_object* v_j_1708_, lean_object* v_bs_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_){
_start:
{
lean_object* v_zero_1715_; uint8_t v_isZero_1716_; 
v_zero_1715_ = lean_unsigned_to_nat(0u);
v_isZero_1716_ = lean_nat_dec_eq(v_i_1707_, v_zero_1715_);
if (v_isZero_1716_ == 1)
{
lean_object* v___x_1717_; 
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec(v_j_1708_);
lean_dec(v_i_1707_);
lean_dec_ref(v_xs_1705_);
v___x_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1717_, 0, v_bs_1709_);
return v___x_1717_;
}
else
{
lean_object* v_perms_1718_; lean_object* v___x_1719_; lean_object* v_type_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v_perms_1718_ = lean_ctor_get(v_fixedParamPerms_1704_, 1);
v___x_1719_ = lean_array_fget_borrowed(v_as_1706_, v_j_1708_);
v_type_1720_ = lean_ctor_get(v___x_1719_, 6);
v___x_1721_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0);
v___x_1722_ = lean_array_get_borrowed(v___x_1721_, v_perms_1718_, v_j_1708_);
lean_inc(v___y_1713_);
lean_inc_ref(v___y_1712_);
lean_inc(v___y_1711_);
lean_inc_ref(v___y_1710_);
lean_inc_ref(v_xs_1705_);
lean_inc_ref(v_type_1720_);
lean_inc(v___x_1722_);
v___x_1723_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v___x_1722_, v_type_1720_, v_xs_1705_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v_one_1725_; lean_object* v_n_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1724_);
lean_dec_ref(v___x_1723_);
v_one_1725_ = lean_unsigned_to_nat(1u);
v_n_1726_ = lean_nat_sub(v_i_1707_, v_one_1725_);
lean_dec(v_i_1707_);
v___x_1727_ = lean_nat_add(v_j_1708_, v_one_1725_);
lean_dec(v_j_1708_);
v___x_1728_ = lean_array_push(v_bs_1709_, v_a_1724_);
v_i_1707_ = v_n_1726_;
v_j_1708_ = v___x_1727_;
v_bs_1709_ = v___x_1728_;
goto _start;
}
else
{
lean_object* v_a_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1737_; 
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec_ref(v_bs_1709_);
lean_dec(v_j_1708_);
lean_dec(v_i_1707_);
lean_dec_ref(v_xs_1705_);
v_a_1730_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1732_ = v___x_1723_;
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_a_1730_);
lean_dec(v___x_1723_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1733_ == 0)
{
v___x_1735_ = v___x_1732_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_a_1730_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg___boxed(lean_object* v_fixedParamPerms_1738_, lean_object* v_xs_1739_, lean_object* v_as_1740_, lean_object* v_i_1741_, lean_object* v_j_1742_, lean_object* v_bs_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(v_fixedParamPerms_1738_, v_xs_1739_, v_as_1740_, v_i_1741_, v_j_1742_, v_bs_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
lean_dec_ref(v_as_1740_);
lean_dec_ref(v_fixedParamPerms_1738_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg(lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_as_1752_, lean_object* v_i_1753_, lean_object* v_j_1754_, lean_object* v_bs_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
lean_object* v_zero_1761_; uint8_t v_isZero_1762_; 
v_zero_1761_ = lean_unsigned_to_nat(0u);
v_isZero_1762_ = lean_nat_dec_eq(v_i_1753_, v_zero_1761_);
if (v_isZero_1762_ == 1)
{
lean_object* v___x_1763_; 
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec(v___y_1757_);
lean_dec_ref(v___y_1756_);
lean_dec(v_j_1754_);
lean_dec(v_i_1753_);
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v_bs_1755_);
return v___x_1763_;
}
else
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1764_ = l_Lean_instInhabitedExpr;
v___x_1765_ = lean_array_fget_borrowed(v_as_1752_, v_j_1754_);
v___x_1766_ = lean_array_get_borrowed(v___x_1764_, v_a_1750_, v_j_1754_);
v___x_1767_ = lean_array_get_borrowed(v___x_1764_, v_a_1751_, v_j_1754_);
lean_inc(v___y_1759_);
lean_inc_ref(v___y_1758_);
lean_inc(v___y_1757_);
lean_inc_ref(v___y_1756_);
lean_inc(v___x_1767_);
lean_inc(v___x_1766_);
lean_inc(v___x_1765_);
v___x_1768_ = l_Lean_Elab_Structural_mkBRecOnMotive(v___x_1765_, v___x_1766_, v___x_1767_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v_one_1770_; lean_object* v_n_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref(v___x_1768_);
v_one_1770_ = lean_unsigned_to_nat(1u);
v_n_1771_ = lean_nat_sub(v_i_1753_, v_one_1770_);
lean_dec(v_i_1753_);
v___x_1772_ = lean_nat_add(v_j_1754_, v_one_1770_);
lean_dec(v_j_1754_);
v___x_1773_ = lean_array_push(v_bs_1755_, v_a_1769_);
v_i_1753_ = v_n_1771_;
v_j_1754_ = v___x_1772_;
v_bs_1755_ = v___x_1773_;
goto _start;
}
else
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1782_; 
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
lean_dec(v___y_1757_);
lean_dec_ref(v___y_1756_);
lean_dec_ref(v_bs_1755_);
lean_dec(v_j_1754_);
lean_dec(v_i_1753_);
v_a_1775_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1777_ = v___x_1768_;
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1768_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1782_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v___x_1780_; 
if (v_isShared_1778_ == 0)
{
v___x_1780_ = v___x_1777_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v_a_1775_);
v___x_1780_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
return v___x_1780_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg___boxed(lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_as_1785_, lean_object* v_i_1786_, lean_object* v_j_1787_, lean_object* v_bs_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v_res_1794_; 
v_res_1794_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg(v_a_1783_, v_a_1784_, v_as_1785_, v_i_1786_, v_j_1787_, v_bs_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
lean_dec_ref(v_as_1785_);
lean_dec_ref(v_a_1784_);
lean_dec_ref(v_a_1783_);
return v_res_1794_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8(void){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1807_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__7));
v___x_1808_ = l_Lean_stringToMessageData(v___x_1807_);
return v___x_1808_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10(void){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__9));
v___x_1811_ = l_Lean_stringToMessageData(v___x_1810_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(lean_object* v_preDefs_1812_, lean_object* v_fixedParamPerms_1813_, lean_object* v_xs_1814_, lean_object* v_recArgInfos_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1821_ = lean_array_get_size(v_preDefs_1812_);
v___x_1822_ = lean_unsigned_to_nat(0u);
v___x_1823_ = lean_mk_empty_array_with_capacity(v___x_1821_);
lean_inc(v_a_1819_);
lean_inc_ref(v_a_1818_);
lean_inc(v_a_1817_);
lean_inc_ref(v_a_1816_);
lean_inc_ref(v___x_1823_);
lean_inc_ref(v_xs_1814_);
v___x_1824_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(v_fixedParamPerms_1813_, v_xs_1814_, v_preDefs_1812_, v___x_1821_, v___x_1822_, v___x_1823_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_);
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; lean_object* v___x_1826_; 
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_a_1825_);
lean_dec_ref(v___x_1824_);
lean_inc(v_a_1819_);
lean_inc_ref(v_a_1818_);
lean_inc(v_a_1817_);
lean_inc_ref(v_a_1816_);
lean_inc_ref(v_xs_1814_);
v___x_1826_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(v_fixedParamPerms_1813_, v_xs_1814_, v_preDefs_1812_, v___x_1821_, v___x_1822_, v___x_1823_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v_indGroupInst_1830_; lean_object* v_toIndGroupInfo_1831_; lean_object* v_all_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1918_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_a_1827_);
lean_dec_ref(v___x_1826_);
v___x_1828_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_1829_ = lean_array_get_borrowed(v___x_1828_, v_recArgInfos_1815_, v___x_1822_);
v_indGroupInst_1830_ = lean_ctor_get(v___x_1829_, 4);
v_toIndGroupInfo_1831_ = lean_ctor_get(v_indGroupInst_1830_, 0);
lean_inc_ref(v_toIndGroupInfo_1831_);
v_all_1832_ = lean_ctor_get(v_toIndGroupInfo_1831_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_toIndGroupInfo_1831_);
if (v_isSharedCheck_1918_ == 0)
{
lean_object* v_unused_1919_; 
v_unused_1919_ = lean_ctor_get(v_toIndGroupInfo_1831_, 1);
lean_dec(v_unused_1919_);
v___x_1834_ = v_toIndGroupInfo_1831_;
v_isShared_1835_ = v_isSharedCheck_1918_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_all_1832_);
lean_dec(v_toIndGroupInfo_1831_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1918_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1836_ = lean_box(0);
v___x_1837_ = lean_array_get(v___x_1836_, v_all_1832_, v___x_1822_);
lean_dec_ref(v_all_1832_);
v___x_1838_ = l_Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4(v___x_1837_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_a_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v_a_1842_; lean_object* v___f_1843_; lean_object* v___f_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___y_1850_; lean_object* v___y_1851_; lean_object* v___y_1852_; lean_object* v___y_1853_; uint8_t v___x_1886_; 
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
lean_inc(v_a_1839_);
lean_dec_ref(v___x_1838_);
v___x_1840_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3));
v___x_1841_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_1840_, v_a_1818_);
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref(v___x_1841_);
v___f_1843_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__4));
v___f_1844_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__5));
v___x_1845_ = l_Lean_instInhabitedExpr;
v___x_1846_ = l_Lean_InductiveVal_numTypeFormers(v_a_1839_);
v___x_1847_ = l_Array_range(v___x_1846_);
v___x_1848_ = l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg(v___x_1828_, v___f_1844_, v_recArgInfos_1815_, v___x_1847_);
v___x_1886_ = lean_unbox(v_a_1842_);
lean_dec(v_a_1842_);
if (v___x_1886_ == 0)
{
lean_del_object(v___x_1834_);
v___y_1850_ = v_a_1816_;
v___y_1851_ = v_a_1817_;
v___y_1852_ = v_a_1818_;
v___y_1853_ = v_a_1819_;
goto v___jp_1849_;
}
else
{
lean_object* v_toConstantVal_1887_; lean_object* v_name_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1892_; 
v_toConstantVal_1887_ = lean_ctor_get(v_a_1839_, 0);
v_name_1888_ = lean_ctor_get(v_toConstantVal_1887_, 0);
v___x_1889_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__8);
lean_inc(v_name_1888_);
v___x_1890_ = l_Lean_MessageData_ofName(v_name_1888_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set_tag(v___x_1834_, 7);
lean_ctor_set(v___x_1834_, 1, v___x_1890_);
lean_ctor_set(v___x_1834_, 0, v___x_1889_);
v___x_1892_ = v___x_1834_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1889_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1893_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__10);
v___x_1894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1892_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
lean_inc_ref(v___x_1848_);
v___x_1895_ = lean_array_to_list(v___x_1848_);
v___x_1896_ = lean_box(0);
v___x_1897_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__18(v___x_1895_, v___x_1896_);
v___x_1898_ = l_Lean_MessageData_ofList(v___x_1897_);
v___x_1899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1899_, 0, v___x_1894_);
lean_ctor_set(v___x_1899_, 1, v___x_1898_);
v___x_1900_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v___x_1840_, v___x_1899_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_dec_ref(v___x_1900_);
v___y_1850_ = v_a_1816_;
v___y_1851_ = v_a_1817_;
v___y_1852_ = v_a_1818_;
v___y_1853_ = v_a_1819_;
goto v___jp_1849_;
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
lean_dec_ref(v___x_1848_);
lean_dec(v_a_1839_);
lean_dec(v_a_1827_);
lean_dec(v_a_1825_);
lean_dec(v_a_1819_);
lean_dec_ref(v_a_1818_);
lean_dec(v_a_1817_);
lean_dec_ref(v_a_1816_);
lean_dec_ref(v_recArgInfos_1815_);
lean_dec_ref(v_xs_1814_);
lean_dec_ref(v_fixedParamPerms_1813_);
lean_dec_ref(v_preDefs_1812_);
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1900_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1900_);
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
}
v___jp_1849_:
{
lean_object* v_toConstantVal_1854_; lean_object* v_numIndices_1855_; lean_object* v_name_1856_; lean_object* v___x_1857_; 
v_toConstantVal_1854_ = lean_ctor_get(v_a_1839_, 0);
lean_inc_ref(v_toConstantVal_1854_);
v_numIndices_1855_ = lean_ctor_get(v_a_1839_, 2);
lean_inc(v_numIndices_1855_);
lean_dec(v_a_1839_);
v_name_1856_ = lean_ctor_get(v_toConstantVal_1854_, 0);
lean_inc(v_name_1856_);
lean_dec_ref(v_toConstantVal_1854_);
lean_inc(v___y_1853_);
lean_inc_ref(v___y_1852_);
lean_inc(v___y_1851_);
lean_inc_ref(v___y_1850_);
v___x_1857_ = l_Lean_Meta_isInductivePredicate(v_name_1856_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v_a_1858_; lean_object* v___f_1859_; uint8_t v___x_1860_; 
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_a_1858_);
lean_dec_ref(v___x_1857_);
lean_inc(v_a_1858_);
lean_inc(v_numIndices_1855_);
lean_inc_ref(v_preDefs_1812_);
lean_inc_ref(v_xs_1814_);
lean_inc_ref(v_fixedParamPerms_1813_);
lean_inc_ref(v___x_1848_);
lean_inc(v_a_1825_);
lean_inc_ref(v_recArgInfos_1815_);
v___f_1859_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1___boxed), 19, 12);
lean_closure_set(v___f_1859_, 0, v___x_1840_);
lean_closure_set(v___f_1859_, 1, v_recArgInfos_1815_);
lean_closure_set(v___f_1859_, 2, v_a_1825_);
lean_closure_set(v___f_1859_, 3, v___x_1848_);
lean_closure_set(v___f_1859_, 4, v___x_1822_);
lean_closure_set(v___f_1859_, 5, v_fixedParamPerms_1813_);
lean_closure_set(v___f_1859_, 6, v_xs_1814_);
lean_closure_set(v___f_1859_, 7, v_preDefs_1812_);
lean_closure_set(v___f_1859_, 8, v_numIndices_1855_);
lean_closure_set(v___f_1859_, 9, v___x_1845_);
lean_closure_set(v___f_1859_, 10, v___f_1843_);
lean_closure_set(v___f_1859_, 11, v_a_1858_);
v___x_1860_ = lean_unbox(v_a_1858_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
lean_dec_ref(v___f_1859_);
v___x_1861_ = lean_array_get_size(v_recArgInfos_1815_);
v___x_1862_ = lean_mk_empty_array_with_capacity(v___x_1861_);
lean_inc(v___y_1853_);
lean_inc_ref(v___y_1852_);
lean_inc(v___y_1851_);
lean_inc_ref(v___y_1850_);
v___x_1863_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg(v_a_1825_, v_a_1827_, v_recArgInfos_1815_, v___x_1861_, v___x_1822_, v___x_1862_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
lean_dec(v_a_1827_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v___x_1865_; uint8_t v___x_1866_; lean_object* v___x_1867_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1864_);
lean_dec_ref(v___x_1863_);
v___x_1865_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__6));
v___x_1866_ = lean_unbox(v_a_1858_);
lean_dec(v_a_1858_);
v___x_1867_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__1(v___x_1840_, v_recArgInfos_1815_, v_a_1825_, v___x_1848_, v___x_1822_, v_fixedParamPerms_1813_, v_xs_1814_, v_preDefs_1812_, v_numIndices_1855_, v___x_1845_, v___f_1843_, v___x_1866_, v___x_1865_, v_a_1864_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
lean_dec(v_numIndices_1855_);
lean_dec(v_a_1825_);
return v___x_1867_;
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec(v_a_1858_);
lean_dec(v_numIndices_1855_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
lean_dec_ref(v___x_1848_);
lean_dec(v_a_1825_);
lean_dec_ref(v_recArgInfos_1815_);
lean_dec_ref(v_xs_1814_);
lean_dec_ref(v_fixedParamPerms_1813_);
lean_dec_ref(v_preDefs_1812_);
v_a_1868_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1863_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1863_);
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
else
{
lean_object* v___f_1876_; lean_object* v___x_1877_; 
lean_dec(v_a_1858_);
lean_dec(v_numIndices_1855_);
lean_dec_ref(v___x_1848_);
lean_dec(v_a_1827_);
lean_dec_ref(v_xs_1814_);
lean_dec_ref(v_fixedParamPerms_1813_);
lean_dec_ref(v_preDefs_1812_);
lean_inc(v_a_1825_);
v___f_1876_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___lam__2___boxed), 10, 4);
lean_closure_set(v___f_1876_, 0, v_recArgInfos_1815_);
lean_closure_set(v___f_1876_, 1, v_a_1825_);
lean_closure_set(v___f_1876_, 2, v___x_1822_);
lean_closure_set(v___f_1876_, 3, v___f_1859_);
v___x_1877_ = l_Lean_Elab_Structural_withFunTypes___redArg(v_a_1825_, v___f_1876_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
return v___x_1877_;
}
}
else
{
lean_object* v_a_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1885_; 
lean_dec(v_numIndices_1855_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
lean_dec_ref(v___x_1848_);
lean_dec(v_a_1827_);
lean_dec(v_a_1825_);
lean_dec_ref(v_recArgInfos_1815_);
lean_dec_ref(v_xs_1814_);
lean_dec_ref(v_fixedParamPerms_1813_);
lean_dec_ref(v_preDefs_1812_);
v_a_1878_ = lean_ctor_get(v___x_1857_, 0);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1857_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1880_ = v___x_1857_;
v_isShared_1881_ = v_isSharedCheck_1885_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_a_1878_);
lean_dec(v___x_1857_);
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
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_del_object(v___x_1834_);
lean_dec(v_a_1827_);
lean_dec(v_a_1825_);
lean_dec(v_a_1819_);
lean_dec_ref(v_a_1818_);
lean_dec(v_a_1817_);
lean_dec_ref(v_a_1816_);
lean_dec_ref(v_recArgInfos_1815_);
lean_dec_ref(v_xs_1814_);
lean_dec_ref(v_fixedParamPerms_1813_);
lean_dec_ref(v_preDefs_1812_);
v_a_1910_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1838_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1838_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
lean_dec(v_a_1825_);
lean_dec(v_a_1819_);
lean_dec_ref(v_a_1818_);
lean_dec(v_a_1817_);
lean_dec_ref(v_a_1816_);
lean_dec_ref(v_recArgInfos_1815_);
lean_dec_ref(v_xs_1814_);
lean_dec_ref(v_fixedParamPerms_1813_);
lean_dec_ref(v_preDefs_1812_);
v_a_1920_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1826_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1826_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
lean_dec_ref(v___x_1823_);
lean_dec(v_a_1819_);
lean_dec_ref(v_a_1818_);
lean_dec(v_a_1817_);
lean_dec_ref(v_a_1816_);
lean_dec_ref(v_recArgInfos_1815_);
lean_dec_ref(v_xs_1814_);
lean_dec_ref(v_fixedParamPerms_1813_);
lean_dec_ref(v_preDefs_1812_);
v_a_1928_ = lean_ctor_get(v___x_1824_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1824_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1824_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1824_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___boxed(lean_object* v_preDefs_1936_, lean_object* v_fixedParamPerms_1937_, lean_object* v_xs_1938_, lean_object* v_recArgInfos_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(v_preDefs_1936_, v_fixedParamPerms_1937_, v_xs_1938_, v_recArgInfos_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2(lean_object* v_fixedParamPerms_1946_, lean_object* v_xs_1947_, lean_object* v_as_1948_, lean_object* v_i_1949_, lean_object* v_j_1950_, lean_object* v_inv_1951_, lean_object* v_bs_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_){
_start:
{
lean_object* v___x_1958_; 
v___x_1958_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___redArg(v_fixedParamPerms_1946_, v_xs_1947_, v_as_1948_, v_i_1949_, v_j_1950_, v_bs_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2___boxed(lean_object* v_fixedParamPerms_1959_, lean_object* v_xs_1960_, lean_object* v_as_1961_, lean_object* v_i_1962_, lean_object* v_j_1963_, lean_object* v_inv_1964_, lean_object* v_bs_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__2(v_fixedParamPerms_1959_, v_xs_1960_, v_as_1961_, v_i_1962_, v_j_1963_, v_inv_1964_, v_bs_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_);
lean_dec_ref(v_as_1961_);
lean_dec_ref(v_fixedParamPerms_1959_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3(lean_object* v_fixedParamPerms_1972_, lean_object* v_xs_1973_, lean_object* v_as_1974_, lean_object* v_i_1975_, lean_object* v_j_1976_, lean_object* v_inv_1977_, lean_object* v_bs_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v___x_1984_; 
v___x_1984_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___redArg(v_fixedParamPerms_1972_, v_xs_1973_, v_as_1974_, v_i_1975_, v_j_1976_, v_bs_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3___boxed(lean_object* v_fixedParamPerms_1985_, lean_object* v_xs_1986_, lean_object* v_as_1987_, lean_object* v_i_1988_, lean_object* v_j_1989_, lean_object* v_inv_1990_, lean_object* v_bs_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__3(v_fixedParamPerms_1985_, v_xs_1986_, v_as_1987_, v_i_1988_, v_j_1989_, v_inv_1990_, v_bs_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_);
lean_dec_ref(v_as_1987_);
lean_dec_ref(v_fixedParamPerms_1985_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6(lean_object* v_00_u03b1_1998_, lean_object* v_inst_1999_, lean_object* v_f_2000_, lean_object* v_xs_2001_, lean_object* v_ys_2002_){
_start:
{
lean_object* v___x_2003_; 
v___x_2003_ = l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___redArg(v_inst_1999_, v_f_2000_, v_xs_2001_, v_ys_2002_);
return v___x_2003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6___boxed(lean_object* v_00_u03b1_2004_, lean_object* v_inst_2005_, lean_object* v_f_2006_, lean_object* v_xs_2007_, lean_object* v_ys_2008_){
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l_Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6(v_00_u03b1_2004_, v_inst_2005_, v_f_2006_, v_xs_2007_, v_ys_2008_);
lean_dec_ref(v_xs_2007_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7(lean_object* v_00_u03b1_2010_, lean_object* v_preDefs_2011_, lean_object* v_k_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_){
_start:
{
lean_object* v___x_2018_; 
v___x_2018_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v_preDefs_2011_, v_k_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_);
return v___x_2018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___boxed(lean_object* v_00_u03b1_2019_, lean_object* v_preDefs_2020_, lean_object* v_k_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7(v_00_u03b1_2019_, v_preDefs_2020_, v_k_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_);
return v_res_2027_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9(uint8_t v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_recArgInfos_2031_, lean_object* v___x_2032_, lean_object* v_preDefs_2033_, lean_object* v_a_2034_, lean_object* v_as_2035_, lean_object* v_i_2036_, lean_object* v_j_2037_, lean_object* v_inv_2038_, lean_object* v_bs_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_){
_start:
{
lean_object* v___x_2045_; 
v___x_2045_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___redArg(v_a_2028_, v_a_2029_, v_a_2030_, v_recArgInfos_2031_, v___x_2032_, v_preDefs_2033_, v_a_2034_, v_as_2035_, v_i_2036_, v_j_2037_, v_bs_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9___boxed(lean_object** _args){
lean_object* v_a_2046_ = _args[0];
lean_object* v_a_2047_ = _args[1];
lean_object* v_a_2048_ = _args[2];
lean_object* v_recArgInfos_2049_ = _args[3];
lean_object* v___x_2050_ = _args[4];
lean_object* v_preDefs_2051_ = _args[5];
lean_object* v_a_2052_ = _args[6];
lean_object* v_as_2053_ = _args[7];
lean_object* v_i_2054_ = _args[8];
lean_object* v_j_2055_ = _args[9];
lean_object* v_inv_2056_ = _args[10];
lean_object* v_bs_2057_ = _args[11];
lean_object* v___y_2058_ = _args[12];
lean_object* v___y_2059_ = _args[13];
lean_object* v___y_2060_ = _args[14];
lean_object* v___y_2061_ = _args[15];
lean_object* v___y_2062_ = _args[16];
_start:
{
uint8_t v_a_23250__boxed_2063_; lean_object* v_res_2064_; 
v_a_23250__boxed_2063_ = lean_unbox(v_a_2046_);
v_res_2064_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__9(v_a_23250__boxed_2063_, v_a_2047_, v_a_2048_, v_recArgInfos_2049_, v___x_2050_, v_preDefs_2051_, v_a_2052_, v_as_2053_, v_i_2054_, v_j_2055_, v_inv_2056_, v_bs_2057_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_);
lean_dec_ref(v_as_2053_);
lean_dec_ref(v_a_2048_);
lean_dec_ref(v_a_2047_);
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20(lean_object* v_00_u03b3_2065_, lean_object* v_msg_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
lean_object* v___x_2072_; 
v___x_2072_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___redArg(v_msg_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20___boxed(lean_object* v_00_u03b3_2073_, lean_object* v_msg_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__20(v_00_u03b3_2073_, v_msg_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(lean_object* v_00_u03b3_2081_, lean_object* v_00_u03b1_2082_, lean_object* v_00_u03b2_2083_, lean_object* v_inst_2084_, lean_object* v_f_2085_, lean_object* v_positions_2086_, lean_object* v_ys_2087_, lean_object* v_xs_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
lean_object* v___x_2094_; 
v___x_2094_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___redArg(v_inst_2084_, v_f_2085_, v_positions_2086_, v_ys_2087_, v_xs_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_);
return v___x_2094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10___boxed(lean_object* v_00_u03b3_2095_, lean_object* v_00_u03b1_2096_, lean_object* v_00_u03b2_2097_, lean_object* v_inst_2098_, lean_object* v_f_2099_, lean_object* v_positions_2100_, lean_object* v_ys_2101_, lean_object* v_xs_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_){
_start:
{
lean_object* v_res_2108_; 
v_res_2108_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10(v_00_u03b3_2095_, v_00_u03b1_2096_, v_00_u03b2_2097_, v_inst_2098_, v_f_2099_, v_positions_2100_, v_ys_2101_, v_xs_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_);
lean_dec_ref(v_xs_2102_);
lean_dec_ref(v_ys_2101_);
lean_dec_ref(v_positions_2100_);
return v_res_2108_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(lean_object* v___x_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_funTypes_2112_, lean_object* v_as_2113_, lean_object* v_i_2114_, lean_object* v_j_2115_, lean_object* v_inv_2116_, lean_object* v_bs_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_){
_start:
{
lean_object* v___x_2123_; 
v___x_2123_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___redArg(v___x_2109_, v_a_2110_, v_a_2111_, v_funTypes_2112_, v_as_2113_, v_i_2114_, v_j_2115_, v_bs_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_);
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11___boxed(lean_object* v___x_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_funTypes_2127_, lean_object* v_as_2128_, lean_object* v_i_2129_, lean_object* v_j_2130_, lean_object* v_inv_2131_, lean_object* v_bs_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_){
_start:
{
lean_object* v_res_2138_; 
v_res_2138_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__11(v___x_2124_, v_a_2125_, v_a_2126_, v_funTypes_2127_, v_as_2128_, v_i_2129_, v_j_2130_, v_inv_2131_, v_bs_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_);
lean_dec_ref(v_as_2128_);
return v_res_2138_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(lean_object* v_fixedParamPerms_2139_, lean_object* v_xs_2140_, lean_object* v_as_2141_, lean_object* v_i_2142_, lean_object* v_j_2143_, lean_object* v_inv_2144_, lean_object* v_bs_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_){
_start:
{
lean_object* v___x_2151_; 
v___x_2151_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg(v_fixedParamPerms_2139_, v_xs_2140_, v_as_2141_, v_i_2142_, v_j_2143_, v_bs_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___boxed(lean_object* v_fixedParamPerms_2152_, lean_object* v_xs_2153_, lean_object* v_as_2154_, lean_object* v_i_2155_, lean_object* v_j_2156_, lean_object* v_inv_2157_, lean_object* v_bs_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v_res_2164_; 
v_res_2164_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12(v_fixedParamPerms_2152_, v_xs_2153_, v_as_2154_, v_i_2155_, v_j_2156_, v_inv_2157_, v_bs_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_);
lean_dec_ref(v_as_2154_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16(lean_object* v_a_2165_, lean_object* v_funTypes_2166_, lean_object* v_as_2167_, lean_object* v_i_2168_, lean_object* v_j_2169_, lean_object* v_inv_2170_, lean_object* v_bs_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v___x_2177_; 
v___x_2177_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___redArg(v_a_2165_, v_funTypes_2166_, v_as_2167_, v_i_2168_, v_j_2169_, v_bs_2171_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16___boxed(lean_object* v_a_2178_, lean_object* v_funTypes_2179_, lean_object* v_as_2180_, lean_object* v_i_2181_, lean_object* v_j_2182_, lean_object* v_inv_2183_, lean_object* v_bs_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_){
_start:
{
lean_object* v_res_2190_; 
v_res_2190_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__16(v_a_2178_, v_funTypes_2179_, v_as_2180_, v_i_2181_, v_j_2182_, v_inv_2183_, v_bs_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_);
lean_dec_ref(v_as_2180_);
lean_dec_ref(v_funTypes_2179_);
lean_dec_ref(v_a_2178_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17(lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_as_2193_, lean_object* v_i_2194_, lean_object* v_j_2195_, lean_object* v_inv_2196_, lean_object* v_bs_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_){
_start:
{
lean_object* v___x_2203_; 
v___x_2203_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___redArg(v_a_2191_, v_a_2192_, v_as_2193_, v_i_2194_, v_j_2195_, v_bs_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_);
return v___x_2203_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17___boxed(lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_as_2206_, lean_object* v_i_2207_, lean_object* v_j_2208_, lean_object* v_inv_2209_, lean_object* v_bs_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__17(v_a_2204_, v_a_2205_, v_as_2206_, v_i_2207_, v_j_2208_, v_inv_2209_, v_bs_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_);
lean_dec_ref(v_as_2206_);
lean_dec_ref(v_a_2205_);
lean_dec_ref(v_a_2204_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4(lean_object* v_00_u03b1_2217_, lean_object* v_msg_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v___x_2224_; 
v___x_2224_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v_msg_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
return v___x_2224_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___boxed(lean_object* v_00_u03b1_2225_, lean_object* v_msg_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4(v_00_u03b1_2225_, v_msg_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7(lean_object* v_00_u03b1_2233_, lean_object* v_inst_2234_, lean_object* v_xs_2235_, lean_object* v_f_2236_, lean_object* v_x_2237_, lean_object* v_as_2238_, size_t v_i_2239_, size_t v_stop_2240_, lean_object* v_b_2241_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___redArg(v_inst_2234_, v_xs_2235_, v_f_2236_, v_x_2237_, v_as_2238_, v_i_2239_, v_stop_2240_, v_b_2241_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7___boxed(lean_object* v_00_u03b1_2243_, lean_object* v_inst_2244_, lean_object* v_xs_2245_, lean_object* v_f_2246_, lean_object* v_x_2247_, lean_object* v_as_2248_, lean_object* v_i_2249_, lean_object* v_stop_2250_, lean_object* v_b_2251_){
_start:
{
size_t v_i_boxed_2252_; size_t v_stop_boxed_2253_; lean_object* v_res_2254_; 
v_i_boxed_2252_ = lean_unbox_usize(v_i_2249_);
lean_dec(v_i_2249_);
v_stop_boxed_2253_ = lean_unbox_usize(v_stop_2250_);
lean_dec(v_stop_2250_);
v_res_2254_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__7(v_00_u03b1_2243_, v_inst_2244_, v_xs_2245_, v_f_2246_, v_x_2247_, v_as_2248_, v_i_boxed_2252_, v_stop_boxed_2253_, v_b_2251_);
lean_dec_ref(v_as_2248_);
lean_dec(v_x_2247_);
lean_dec_ref(v_xs_2245_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9(lean_object* v_00_u03b1_2255_, lean_object* v_inst_2256_, lean_object* v_xs_2257_, lean_object* v_f_2258_, size_t v_sz_2259_, size_t v_i_2260_, lean_object* v_bs_2261_){
_start:
{
lean_object* v___x_2262_; 
v___x_2262_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___redArg(v_inst_2256_, v_xs_2257_, v_f_2258_, v_sz_2259_, v_i_2260_, v_bs_2261_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9___boxed(lean_object* v_00_u03b1_2263_, lean_object* v_inst_2264_, lean_object* v_xs_2265_, lean_object* v_f_2266_, lean_object* v_sz_2267_, lean_object* v_i_2268_, lean_object* v_bs_2269_){
_start:
{
size_t v_sz_boxed_2270_; size_t v_i_boxed_2271_; lean_object* v_res_2272_; 
v_sz_boxed_2270_ = lean_unbox_usize(v_sz_2267_);
lean_dec(v_sz_2267_);
v_i_boxed_2271_ = lean_unbox_usize(v_i_2268_);
lean_dec(v_i_2268_);
v_res_2272_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9(v_00_u03b1_2263_, v_inst_2264_, v_xs_2265_, v_f_2266_, v_sz_boxed_2270_, v_i_boxed_2271_, v_bs_2269_);
lean_dec_ref(v_xs_2265_);
return v_res_2272_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10(lean_object* v_xs_2273_, lean_object* v_ys_2274_, lean_object* v_hsz_2275_, lean_object* v_x_2276_, lean_object* v_x_2277_){
_start:
{
uint8_t v___x_2278_; 
v___x_2278_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___redArg(v_xs_2273_, v_ys_2274_, v_x_2276_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10___boxed(lean_object* v_xs_2279_, lean_object* v_ys_2280_, lean_object* v_hsz_2281_, lean_object* v_x_2282_, lean_object* v_x_2283_){
_start:
{
uint8_t v_res_2284_; lean_object* v_r_2285_; 
v_res_2284_ = l_Array_isEqvAux___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__10(v_xs_2279_, v_ys_2280_, v_hsz_2281_, v_x_2282_, v_x_2283_);
lean_dec_ref(v_ys_2280_);
lean_dec_ref(v_xs_2279_);
v_r_2285_ = lean_box(v_res_2284_);
return v_r_2285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11(lean_object* v_n_2286_, lean_object* v_as_2287_, lean_object* v_lo_2288_, lean_object* v_hi_2289_, lean_object* v_w_2290_, lean_object* v_hlo_2291_, lean_object* v_hhi_2292_){
_start:
{
lean_object* v___x_2293_; 
v___x_2293_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___redArg(v_as_2287_, v_lo_2288_, v_hi_2289_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11___boxed(lean_object* v_n_2294_, lean_object* v_as_2295_, lean_object* v_lo_2296_, lean_object* v_hi_2297_, lean_object* v_w_2298_, lean_object* v_hlo_2299_, lean_object* v_hhi_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__11(v_n_2294_, v_as_2295_, v_lo_2296_, v_hi_2297_, v_w_2298_, v_hlo_2299_, v_hhi_2300_);
lean_dec(v_hi_2297_);
lean_dec(v_n_2294_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16(lean_object* v_env_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_){
_start:
{
lean_object* v___x_2308_; 
v___x_2308_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___redArg(v_env_2302_, v___y_2304_, v___y_2306_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16___boxed(lean_object* v_env_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
lean_object* v_res_2315_; 
v_res_2315_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14_spec__16(v_env_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14(lean_object* v_00_u03b1_2316_, lean_object* v_env_2317_, lean_object* v_x_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v___x_2324_; 
v___x_2324_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___redArg(v_env_2317_, v_x_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14___boxed(lean_object* v_00_u03b1_2325_, lean_object* v_env_2326_, lean_object* v_x_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_){
_start:
{
lean_object* v_res_2333_; 
v_res_2333_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7_spec__14(v_00_u03b1_2325_, v_env_2326_, v_x_2327_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_);
return v_res_2333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19(lean_object* v_00_u03b2_2334_, lean_object* v_inst_2335_, lean_object* v_xs_2336_, size_t v_sz_2337_, size_t v_i_2338_, lean_object* v_bs_2339_){
_start:
{
lean_object* v___x_2340_; 
v___x_2340_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19___redArg(v_inst_2335_, v_xs_2336_, v_sz_2337_, v_i_2338_, v_bs_2339_);
return v___x_2340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19___boxed(lean_object* v_00_u03b2_2341_, lean_object* v_inst_2342_, lean_object* v_xs_2343_, lean_object* v_sz_2344_, lean_object* v_i_2345_, lean_object* v_bs_2346_){
_start:
{
size_t v_sz_boxed_2347_; size_t v_i_boxed_2348_; lean_object* v_res_2349_; 
v_sz_boxed_2347_ = lean_unbox_usize(v_sz_2344_);
lean_dec(v_sz_2344_);
v_i_boxed_2348_ = lean_unbox_usize(v_i_2345_);
lean_dec(v_i_2345_);
v_res_2349_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__19(v_00_u03b2_2341_, v_inst_2342_, v_xs_2343_, v_sz_boxed_2347_, v_i_boxed_2348_, v_bs_2346_);
lean_dec_ref(v_xs_2343_);
return v_res_2349_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21(lean_object* v_00_u03b1_2350_, lean_object* v_00_u03b3_2351_, lean_object* v_00_u03b2_2352_, lean_object* v_inst_2353_, lean_object* v_xs_2354_, lean_object* v_f_2355_, lean_object* v_as_2356_, lean_object* v_bs_2357_, lean_object* v_i_2358_, lean_object* v_cs_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v___x_2365_; 
v___x_2365_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21___redArg(v_inst_2353_, v_xs_2354_, v_f_2355_, v_as_2356_, v_bs_2357_, v_i_2358_, v_cs_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21___boxed(lean_object* v_00_u03b1_2366_, lean_object* v_00_u03b3_2367_, lean_object* v_00_u03b2_2368_, lean_object* v_inst_2369_, lean_object* v_xs_2370_, lean_object* v_f_2371_, lean_object* v_as_2372_, lean_object* v_bs_2373_, lean_object* v_i_2374_, lean_object* v_cs_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__10_spec__21(v_00_u03b1_2366_, v_00_u03b3_2367_, v_00_u03b2_2368_, v_inst_2369_, v_xs_2370_, v_f_2371_, v_as_2372_, v_bs_2373_, v_i_2374_, v_cs_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_);
lean_dec_ref(v_bs_2373_);
lean_dec_ref(v_as_2372_);
lean_dec_ref(v_xs_2370_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10(lean_object* v_00_u03b1_2382_, lean_object* v_xs_2383_, lean_object* v_inst_2384_, lean_object* v_f_2385_, size_t v_sz_2386_, size_t v_i_2387_, lean_object* v_bs_2388_){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___redArg(v_xs_2383_, v_inst_2384_, v_f_2385_, v_sz_2386_, v_i_2387_, v_bs_2388_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10___boxed(lean_object* v_00_u03b1_2390_, lean_object* v_xs_2391_, lean_object* v_inst_2392_, lean_object* v_f_2393_, lean_object* v_sz_2394_, lean_object* v_i_2395_, lean_object* v_bs_2396_){
_start:
{
size_t v_sz_boxed_2397_; size_t v_i_boxed_2398_; lean_object* v_res_2399_; 
v_sz_boxed_2397_ = lean_unbox_usize(v_sz_2394_);
lean_dec(v_sz_2394_);
v_i_boxed_2398_ = lean_unbox_usize(v_i_2395_);
lean_dec(v_i_2395_);
v_res_2399_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_groupAndSort___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__6_spec__9_spec__10(v_00_u03b1_2390_, v_xs_2391_, v_inst_2392_, v_f_2393_, v_sz_boxed_2397_, v_i_boxed_2398_, v_bs_2396_);
lean_dec_ref(v_xs_2391_);
return v_res_2399_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0(lean_object* v_x_2400_){
_start:
{
uint8_t v___x_2401_; 
v___x_2401_ = 0;
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0___boxed(lean_object* v_x_2402_){
_start:
{
uint8_t v_res_2403_; lean_object* v_r_2404_; 
v_res_2403_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__0(v_x_2402_);
lean_dec(v_x_2402_);
v_r_2404_ = lean_box(v_res_2403_);
return v_r_2404_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1(lean_object* v_fvarId_2405_, lean_object* v_x_2406_){
_start:
{
uint8_t v___x_2407_; 
v___x_2407_ = l_Lean_instBEqFVarId_beq(v_fvarId_2405_, v_x_2406_);
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1___boxed(lean_object* v_fvarId_2408_, lean_object* v_x_2409_){
_start:
{
uint8_t v_res_2410_; lean_object* v_r_2411_; 
v_res_2410_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1(v_fvarId_2408_, v_x_2409_);
lean_dec(v_x_2409_);
lean_dec(v_fvarId_2408_);
v_r_2411_ = lean_box(v_res_2410_);
return v_r_2411_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2413_ = lean_box(0);
v___x_2414_ = lean_unsigned_to_nat(16u);
v___x_2415_ = lean_mk_array(v___x_2414_, v___x_2413_);
return v___x_2415_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2416_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1, &l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__1);
v___x_2417_ = lean_unsigned_to_nat(0u);
v___x_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2418_, 0, v___x_2417_);
lean_ctor_set(v___x_2418_, 1, v___x_2416_);
return v___x_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(lean_object* v_e_2419_, lean_object* v_fvarId_2420_, lean_object* v___y_2421_){
_start:
{
lean_object* v___x_2423_; uint8_t v_fst_2425_; lean_object* v_mctx_2426_; lean_object* v___y_2444_; lean_object* v_mctx_2449_; lean_object* v___f_2450_; lean_object* v___f_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; uint8_t v___x_2454_; 
v___x_2423_ = lean_st_ref_get(v___y_2421_);
v_mctx_2449_ = lean_ctor_get(v___x_2423_, 0);
lean_inc_ref(v_mctx_2449_);
lean_dec(v___x_2423_);
v___f_2450_ = ((lean_object*)(l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__0));
v___f_2451_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2451_, 0, v_fvarId_2420_);
v___x_2452_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2, &l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___closed__2);
lean_inc_ref(v_mctx_2449_);
v___x_2453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2452_);
lean_ctor_set(v___x_2453_, 1, v_mctx_2449_);
v___x_2454_ = l_Lean_Expr_hasFVar(v_e_2419_);
if (v___x_2454_ == 0)
{
uint8_t v___x_2455_; 
v___x_2455_ = l_Lean_Expr_hasMVar(v_e_2419_);
if (v___x_2455_ == 0)
{
lean_dec_ref(v___x_2453_);
lean_dec_ref(v___f_2451_);
lean_dec_ref(v_e_2419_);
v_fst_2425_ = v___x_2455_;
v_mctx_2426_ = v_mctx_2449_;
goto v___jp_2424_;
}
else
{
lean_object* v___x_2456_; 
lean_dec_ref(v_mctx_2449_);
v___x_2456_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2451_, v___f_2450_, v_e_2419_, v___x_2453_);
v___y_2444_ = v___x_2456_;
goto v___jp_2443_;
}
}
else
{
lean_object* v___x_2457_; 
lean_dec_ref(v_mctx_2449_);
v___x_2457_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2451_, v___f_2450_, v_e_2419_, v___x_2453_);
v___y_2444_ = v___x_2457_;
goto v___jp_2443_;
}
v___jp_2424_:
{
lean_object* v___x_2427_; lean_object* v_cache_2428_; lean_object* v_zetaDeltaFVarIds_2429_; lean_object* v_postponed_2430_; lean_object* v_diag_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2441_; 
v___x_2427_ = lean_st_ref_take(v___y_2421_);
v_cache_2428_ = lean_ctor_get(v___x_2427_, 1);
v_zetaDeltaFVarIds_2429_ = lean_ctor_get(v___x_2427_, 2);
v_postponed_2430_ = lean_ctor_get(v___x_2427_, 3);
v_diag_2431_ = lean_ctor_get(v___x_2427_, 4);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2427_);
if (v_isSharedCheck_2441_ == 0)
{
lean_object* v_unused_2442_; 
v_unused_2442_ = lean_ctor_get(v___x_2427_, 0);
lean_dec(v_unused_2442_);
v___x_2433_ = v___x_2427_;
v_isShared_2434_ = v_isSharedCheck_2441_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_diag_2431_);
lean_inc(v_postponed_2430_);
lean_inc(v_zetaDeltaFVarIds_2429_);
lean_inc(v_cache_2428_);
lean_dec(v___x_2427_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2441_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2436_; 
if (v_isShared_2434_ == 0)
{
lean_ctor_set(v___x_2433_, 0, v_mctx_2426_);
v___x_2436_ = v___x_2433_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_mctx_2426_);
lean_ctor_set(v_reuseFailAlloc_2440_, 1, v_cache_2428_);
lean_ctor_set(v_reuseFailAlloc_2440_, 2, v_zetaDeltaFVarIds_2429_);
lean_ctor_set(v_reuseFailAlloc_2440_, 3, v_postponed_2430_);
lean_ctor_set(v_reuseFailAlloc_2440_, 4, v_diag_2431_);
v___x_2436_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2437_ = lean_st_ref_set(v___y_2421_, v___x_2436_);
v___x_2438_ = lean_box(v_fst_2425_);
v___x_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2438_);
return v___x_2439_;
}
}
}
v___jp_2443_:
{
lean_object* v_snd_2445_; lean_object* v_fst_2446_; lean_object* v_mctx_2447_; uint8_t v___x_2448_; 
v_snd_2445_ = lean_ctor_get(v___y_2444_, 1);
lean_inc(v_snd_2445_);
v_fst_2446_ = lean_ctor_get(v___y_2444_, 0);
lean_inc(v_fst_2446_);
lean_dec_ref(v___y_2444_);
v_mctx_2447_ = lean_ctor_get(v_snd_2445_, 1);
lean_inc_ref(v_mctx_2447_);
lean_dec(v_snd_2445_);
v___x_2448_ = lean_unbox(v_fst_2446_);
lean_dec(v_fst_2446_);
v_fst_2425_ = v___x_2448_;
v_mctx_2426_ = v_mctx_2447_;
goto v___jp_2424_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg___boxed(lean_object* v_e_2458_, lean_object* v_fvarId_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v_res_2462_; 
v_res_2462_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(v_e_2458_, v_fvarId_2459_, v___y_2460_);
lean_dec(v___y_2460_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5(lean_object* v_e_2463_, lean_object* v_fvarId_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(v_e_2463_, v_fvarId_2464_, v___y_2466_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___boxed(lean_object* v_e_2471_, lean_object* v_fvarId_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_){
_start:
{
lean_object* v_res_2478_; 
v_res_2478_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5(v_e_2471_, v_fvarId_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
lean_dec(v___y_2474_);
lean_dec_ref(v___y_2473_);
return v_res_2478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0(lean_object* v_k_2479_, lean_object* v_b_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_){
_start:
{
lean_object* v___x_2486_; 
v___x_2486_ = lean_apply_6(v_k_2479_, v_b_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, lean_box(0));
return v___x_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0___boxed(lean_object* v_k_2487_, lean_object* v_b_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0(v_k_2487_, v_b_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(lean_object* v_perm_2495_, lean_object* v_type_2496_, lean_object* v_k_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_){
_start:
{
lean_object* v___f_2503_; lean_object* v___x_2504_; 
v___f_2503_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2503_, 0, v_k_2497_);
v___x_2504_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_box(0), v_perm_2495_, v_type_2496_, v___f_2503_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2512_; 
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2512_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2512_ == 0)
{
v___x_2507_ = v___x_2504_;
v_isShared_2508_ = v_isSharedCheck_2512_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2504_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2512_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
lean_object* v___x_2510_; 
if (v_isShared_2508_ == 0)
{
v___x_2510_ = v___x_2507_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v_a_2505_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
else
{
lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2520_; 
v_a_2513_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2515_ = v___x_2504_;
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2504_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2518_; 
if (v_isShared_2516_ == 0)
{
v___x_2518_ = v___x_2515_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_a_2513_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg___boxed(lean_object* v_perm_2521_, lean_object* v_type_2522_, lean_object* v_k_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(v_perm_2521_, v_type_2522_, v_k_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13(lean_object* v_00_u03b1_2530_, lean_object* v_perm_2531_, lean_object* v_type_2532_, lean_object* v_k_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
lean_object* v___x_2539_; 
v___x_2539_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(v_perm_2531_, v_type_2532_, v_k_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___boxed(lean_object* v_00_u03b1_2540_, lean_object* v_perm_2541_, lean_object* v_type_2542_, lean_object* v_k_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13(v_00_u03b1_2540_, v_perm_2541_, v_type_2542_, v_k_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0(lean_object* v_a_2550_, lean_object* v_fst_2551_, lean_object* v_fst_2552_, lean_object* v___x_2553_, lean_object* v___x_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
lean_object* v___x_2560_; 
lean_inc_ref(v_fst_2551_);
v___x_2560_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion(v_a_2550_, v_fst_2551_, v_fst_2552_, v___x_2553_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2570_; 
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2563_ = v___x_2560_;
v_isShared_2564_ = v_isSharedCheck_2570_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v___x_2560_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2570_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2568_; 
v___x_2565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2565_, 0, v_a_2561_);
lean_ctor_set(v___x_2565_, 1, v_fst_2551_);
v___x_2566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2554_);
lean_ctor_set(v___x_2566_, 1, v___x_2565_);
if (v_isShared_2564_ == 0)
{
lean_ctor_set(v___x_2563_, 0, v___x_2566_);
v___x_2568_ = v___x_2563_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v___x_2566_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
return v___x_2568_;
}
}
}
else
{
lean_object* v_a_2571_; lean_object* v___x_2573_; uint8_t v_isShared_2574_; uint8_t v_isSharedCheck_2578_; 
lean_dec_ref(v___x_2554_);
lean_dec_ref(v_fst_2551_);
v_a_2571_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2573_ = v___x_2560_;
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
else
{
lean_inc(v_a_2571_);
lean_dec(v___x_2560_);
v___x_2573_ = lean_box(0);
v_isShared_2574_ = v_isSharedCheck_2578_;
goto v_resetjp_2572_;
}
v_resetjp_2572_:
{
lean_object* v___x_2576_; 
if (v_isShared_2574_ == 0)
{
v___x_2576_ = v___x_2573_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2571_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
return v___x_2576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___boxed(lean_object* v_a_2579_, lean_object* v_fst_2580_, lean_object* v_fst_2581_, lean_object* v___x_2582_, lean_object* v___x_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v_res_2589_; 
v_res_2589_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0(v_a_2579_, v_fst_2580_, v_fst_2581_, v___x_2582_, v___x_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(size_t v_sz_2590_, size_t v_i_2591_, lean_object* v_bs_2592_){
_start:
{
uint8_t v___x_2593_; 
v___x_2593_ = lean_usize_dec_lt(v_i_2591_, v_sz_2590_);
if (v___x_2593_ == 0)
{
return v_bs_2592_;
}
else
{
lean_object* v_v_2594_; lean_object* v___x_2595_; lean_object* v_bs_x27_2596_; lean_object* v___x_2597_; size_t v___x_2598_; size_t v___x_2599_; lean_object* v___x_2600_; 
v_v_2594_ = lean_array_uget(v_bs_2592_, v_i_2591_);
v___x_2595_ = lean_unsigned_to_nat(0u);
v_bs_x27_2596_ = lean_array_uset(v_bs_2592_, v_i_2591_, v___x_2595_);
v___x_2597_ = l_Lean_Elab_Structural_RecArgInfo_indicesAndRecArgPos(v_v_2594_);
v___x_2598_ = ((size_t)1ULL);
v___x_2599_ = lean_usize_add(v_i_2591_, v___x_2598_);
v___x_2600_ = lean_array_uset(v_bs_x27_2596_, v_i_2591_, v___x_2597_);
v_i_2591_ = v___x_2599_;
v_bs_2592_ = v___x_2600_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3___boxed(lean_object* v_sz_2602_, lean_object* v_i_2603_, lean_object* v_bs_2604_){
_start:
{
size_t v_sz_boxed_2605_; size_t v_i_boxed_2606_; lean_object* v_res_2607_; 
v_sz_boxed_2605_ = lean_unbox_usize(v_sz_2602_);
lean_dec(v_sz_2602_);
v_i_boxed_2606_ = lean_unbox_usize(v_i_2603_);
lean_dec(v_i_2603_);
v_res_2607_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(v_sz_boxed_2605_, v_i_boxed_2606_, v_bs_2604_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(lean_object* v_lctx_2608_, lean_object* v_localInsts_2609_, lean_object* v_x_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_){
_start:
{
lean_object* v___x_2616_; 
v___x_2616_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2608_, v_localInsts_2609_, v_x_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_);
if (lean_obj_tag(v___x_2616_) == 0)
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
v_a_2617_ = lean_ctor_get(v___x_2616_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2616_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2616_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_a_2617_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
v_a_2625_ = lean_ctor_get(v___x_2616_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2616_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2616_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2616_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg___boxed(lean_object* v_lctx_2633_, lean_object* v_localInsts_2634_, lean_object* v_x_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_){
_start:
{
lean_object* v_res_2641_; 
v_res_2641_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v_lctx_2633_, v_localInsts_2634_, v_x_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_);
return v_res_2641_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(lean_object* v_as_2642_, size_t v_i_2643_, size_t v_stop_2644_, lean_object* v_b_2645_){
_start:
{
uint8_t v___x_2646_; 
v___x_2646_ = lean_usize_dec_eq(v_i_2643_, v_stop_2644_);
if (v___x_2646_ == 0)
{
lean_object* v___x_2647_; lean_object* v___x_2648_; size_t v___x_2649_; size_t v___x_2650_; 
v___x_2647_ = lean_array_uget_borrowed(v_as_2642_, v_i_2643_);
lean_inc(v___x_2647_);
v___x_2648_ = lean_local_ctx_erase(v_b_2645_, v___x_2647_);
v___x_2649_ = ((size_t)1ULL);
v___x_2650_ = lean_usize_add(v_i_2643_, v___x_2649_);
v_i_2643_ = v___x_2650_;
v_b_2645_ = v___x_2648_;
goto _start;
}
else
{
return v_b_2645_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12___boxed(lean_object* v_as_2652_, lean_object* v_i_2653_, lean_object* v_stop_2654_, lean_object* v_b_2655_){
_start:
{
size_t v_i_boxed_2656_; size_t v_stop_boxed_2657_; lean_object* v_res_2658_; 
v_i_boxed_2656_ = lean_unbox_usize(v_i_2653_);
lean_dec(v_i_2653_);
v_stop_boxed_2657_ = lean_unbox_usize(v_stop_2654_);
lean_dec(v_stop_2654_);
v_res_2658_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(v_as_2652_, v_i_boxed_2656_, v_stop_boxed_2657_, v_b_2655_);
lean_dec_ref(v_as_2652_);
return v_res_2658_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(lean_object* v_a_2659_, lean_object* v_as_2660_, size_t v_i_2661_, size_t v_stop_2662_){
_start:
{
uint8_t v___x_2663_; 
v___x_2663_ = lean_usize_dec_eq(v_i_2661_, v_stop_2662_);
if (v___x_2663_ == 0)
{
lean_object* v___x_2664_; uint8_t v___x_2665_; 
v___x_2664_ = lean_array_uget_borrowed(v_as_2660_, v_i_2661_);
v___x_2665_ = l_Lean_instBEqFVarId_beq(v_a_2659_, v___x_2664_);
if (v___x_2665_ == 0)
{
size_t v___x_2666_; size_t v___x_2667_; 
v___x_2666_ = ((size_t)1ULL);
v___x_2667_ = lean_usize_add(v_i_2661_, v___x_2666_);
v_i_2661_ = v___x_2667_;
goto _start;
}
else
{
return v___x_2665_;
}
}
else
{
uint8_t v___x_2669_; 
v___x_2669_ = 0;
return v___x_2669_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11___boxed(lean_object* v_a_2670_, lean_object* v_as_2671_, lean_object* v_i_2672_, lean_object* v_stop_2673_){
_start:
{
size_t v_i_boxed_2674_; size_t v_stop_boxed_2675_; uint8_t v_res_2676_; lean_object* v_r_2677_; 
v_i_boxed_2674_ = lean_unbox_usize(v_i_2672_);
lean_dec(v_i_2672_);
v_stop_boxed_2675_ = lean_unbox_usize(v_stop_2673_);
lean_dec(v_stop_2673_);
v_res_2676_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(v_a_2670_, v_as_2671_, v_i_boxed_2674_, v_stop_boxed_2675_);
lean_dec_ref(v_as_2671_);
lean_dec(v_a_2670_);
v_r_2677_ = lean_box(v_res_2676_);
return v_r_2677_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(lean_object* v_as_2678_, lean_object* v_a_2679_){
_start:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; uint8_t v___x_2682_; 
v___x_2680_ = lean_unsigned_to_nat(0u);
v___x_2681_ = lean_array_get_size(v_as_2678_);
v___x_2682_ = lean_nat_dec_lt(v___x_2680_, v___x_2681_);
if (v___x_2682_ == 0)
{
return v___x_2682_;
}
else
{
if (v___x_2682_ == 0)
{
return v___x_2682_;
}
else
{
size_t v___x_2683_; size_t v___x_2684_; uint8_t v___x_2685_; 
v___x_2683_ = ((size_t)0ULL);
v___x_2684_ = lean_usize_of_nat(v___x_2681_);
v___x_2685_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9_spec__11(v_a_2679_, v_as_2678_, v___x_2683_, v___x_2684_);
return v___x_2685_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9___boxed(lean_object* v_as_2686_, lean_object* v_a_2687_){
_start:
{
uint8_t v_res_2688_; lean_object* v_r_2689_; 
v_res_2688_ = l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(v_as_2686_, v_a_2687_);
lean_dec(v_a_2687_);
lean_dec_ref(v_as_2686_);
v_r_2689_ = lean_box(v_res_2688_);
return v_r_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(lean_object* v_fvarIds_2690_, lean_object* v_as_2691_, size_t v_i_2692_, size_t v_stop_2693_, lean_object* v_b_2694_){
_start:
{
lean_object* v___y_2696_; uint8_t v___x_2700_; 
v___x_2700_ = lean_usize_dec_eq(v_i_2692_, v_stop_2693_);
if (v___x_2700_ == 0)
{
lean_object* v___x_2701_; lean_object* v_fvar_2702_; lean_object* v___x_2703_; uint8_t v___x_2704_; 
v___x_2701_ = lean_array_uget_borrowed(v_as_2691_, v_i_2692_);
v_fvar_2702_ = lean_ctor_get(v___x_2701_, 1);
v___x_2703_ = l_Lean_Expr_fvarId_x21(v_fvar_2702_);
v___x_2704_ = l_Array_contains___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__9(v_fvarIds_2690_, v___x_2703_);
lean_dec(v___x_2703_);
if (v___x_2704_ == 0)
{
lean_object* v___x_2705_; 
lean_inc(v___x_2701_);
v___x_2705_ = lean_array_push(v_b_2694_, v___x_2701_);
v___y_2696_ = v___x_2705_;
goto v___jp_2695_;
}
else
{
v___y_2696_ = v_b_2694_;
goto v___jp_2695_;
}
}
else
{
return v_b_2694_;
}
v___jp_2695_:
{
size_t v___x_2697_; size_t v___x_2698_; 
v___x_2697_ = ((size_t)1ULL);
v___x_2698_ = lean_usize_add(v_i_2692_, v___x_2697_);
v_i_2692_ = v___x_2698_;
v_b_2694_ = v___y_2696_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11___boxed(lean_object* v_fvarIds_2706_, lean_object* v_as_2707_, lean_object* v_i_2708_, lean_object* v_stop_2709_, lean_object* v_b_2710_){
_start:
{
size_t v_i_boxed_2711_; size_t v_stop_boxed_2712_; lean_object* v_res_2713_; 
v_i_boxed_2711_ = lean_unbox_usize(v_i_2708_);
lean_dec(v_i_2708_);
v_stop_boxed_2712_ = lean_unbox_usize(v_stop_2709_);
lean_dec(v_stop_2709_);
v_res_2713_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(v_fvarIds_2706_, v_as_2707_, v_i_boxed_2711_, v_stop_boxed_2712_, v_b_2710_);
lean_dec_ref(v_as_2707_);
lean_dec_ref(v_fvarIds_2706_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(lean_object* v_fvarIds_2716_, lean_object* v_k_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_){
_start:
{
lean_object* v_lctx_2723_; lean_object* v___x_2724_; 
v_lctx_2723_ = lean_ctor_get(v___y_2718_, 2);
v___x_2724_ = l_Lean_Meta_getLocalInstances___redArg(v___y_2718_);
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v_a_2725_; lean_object* v___x_2726_; lean_object* v___y_2728_; lean_object* v___x_2743_; uint8_t v___x_2744_; 
v_a_2725_ = lean_ctor_get(v___x_2724_, 0);
lean_inc(v_a_2725_);
lean_dec_ref(v___x_2724_);
v___x_2726_ = lean_unsigned_to_nat(0u);
v___x_2743_ = lean_array_get_size(v_fvarIds_2716_);
v___x_2744_ = lean_nat_dec_lt(v___x_2726_, v___x_2743_);
if (v___x_2744_ == 0)
{
lean_inc_ref(v_lctx_2723_);
v___y_2728_ = v_lctx_2723_;
goto v___jp_2727_;
}
else
{
uint8_t v___x_2745_; 
v___x_2745_ = lean_nat_dec_le(v___x_2743_, v___x_2743_);
if (v___x_2745_ == 0)
{
if (v___x_2744_ == 0)
{
lean_inc_ref(v_lctx_2723_);
v___y_2728_ = v_lctx_2723_;
goto v___jp_2727_;
}
else
{
size_t v___x_2746_; size_t v___x_2747_; lean_object* v___x_2748_; 
v___x_2746_ = ((size_t)0ULL);
v___x_2747_ = lean_usize_of_nat(v___x_2743_);
lean_inc_ref(v_lctx_2723_);
v___x_2748_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(v_fvarIds_2716_, v___x_2746_, v___x_2747_, v_lctx_2723_);
v___y_2728_ = v___x_2748_;
goto v___jp_2727_;
}
}
else
{
size_t v___x_2749_; size_t v___x_2750_; lean_object* v___x_2751_; 
v___x_2749_ = ((size_t)0ULL);
v___x_2750_ = lean_usize_of_nat(v___x_2743_);
lean_inc_ref(v_lctx_2723_);
v___x_2751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__12(v_fvarIds_2716_, v___x_2749_, v___x_2750_, v_lctx_2723_);
v___y_2728_ = v___x_2751_;
goto v___jp_2727_;
}
}
v___jp_2727_:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; uint8_t v___x_2731_; 
v___x_2729_ = lean_array_get_size(v_a_2725_);
v___x_2730_ = ((lean_object*)(l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___closed__0));
v___x_2731_ = lean_nat_dec_lt(v___x_2726_, v___x_2729_);
if (v___x_2731_ == 0)
{
lean_object* v___x_2732_; 
lean_dec(v_a_2725_);
v___x_2732_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v___y_2728_, v___x_2730_, v_k_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_);
return v___x_2732_;
}
else
{
uint8_t v___x_2733_; 
v___x_2733_ = lean_nat_dec_le(v___x_2729_, v___x_2729_);
if (v___x_2733_ == 0)
{
if (v___x_2731_ == 0)
{
lean_object* v___x_2734_; 
lean_dec(v_a_2725_);
v___x_2734_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v___y_2728_, v___x_2730_, v_k_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_);
return v___x_2734_;
}
else
{
size_t v___x_2735_; size_t v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v___x_2735_ = ((size_t)0ULL);
v___x_2736_ = lean_usize_of_nat(v___x_2729_);
v___x_2737_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(v_fvarIds_2716_, v_a_2725_, v___x_2735_, v___x_2736_, v___x_2730_);
lean_dec(v_a_2725_);
v___x_2738_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v___y_2728_, v___x_2737_, v_k_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_);
return v___x_2738_;
}
}
else
{
size_t v___x_2739_; size_t v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2739_ = ((size_t)0ULL);
v___x_2740_ = lean_usize_of_nat(v___x_2729_);
v___x_2741_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__11(v_fvarIds_2716_, v_a_2725_, v___x_2739_, v___x_2740_, v___x_2730_);
lean_dec(v_a_2725_);
v___x_2742_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v___y_2728_, v___x_2741_, v_k_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_);
return v___x_2742_;
}
}
}
}
else
{
lean_object* v_a_2752_; lean_object* v___x_2754_; uint8_t v_isShared_2755_; uint8_t v_isSharedCheck_2759_; 
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
lean_dec_ref(v_k_2717_);
v_a_2752_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2754_ = v___x_2724_;
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
else
{
lean_inc(v_a_2752_);
lean_dec(v___x_2724_);
v___x_2754_ = lean_box(0);
v_isShared_2755_ = v_isSharedCheck_2759_;
goto v_resetjp_2753_;
}
v_resetjp_2753_:
{
lean_object* v___x_2757_; 
if (v_isShared_2755_ == 0)
{
v___x_2757_ = v___x_2754_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v_a_2752_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg___boxed(lean_object* v_fvarIds_2760_, lean_object* v_k_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v_fvarIds_2760_, v_k_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_);
lean_dec_ref(v_fvarIds_2760_);
return v_res_2767_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17_spec__21(lean_object* v_x_2768_, lean_object* v_x_2769_, lean_object* v_x_2770_){
_start:
{
if (lean_obj_tag(v_x_2770_) == 0)
{
lean_dec(v_x_2768_);
return v_x_2769_;
}
else
{
lean_object* v_head_2771_; lean_object* v_tail_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2782_; 
v_head_2771_ = lean_ctor_get(v_x_2770_, 0);
v_tail_2772_ = lean_ctor_get(v_x_2770_, 1);
v_isSharedCheck_2782_ = !lean_is_exclusive(v_x_2770_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2774_ = v_x_2770_;
v_isShared_2775_ = v_isSharedCheck_2782_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_tail_2772_);
lean_inc(v_head_2771_);
lean_dec(v_x_2770_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2782_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
lean_inc(v_x_2768_);
if (v_isShared_2775_ == 0)
{
lean_ctor_set_tag(v___x_2774_, 5);
lean_ctor_set(v___x_2774_, 1, v_x_2768_);
lean_ctor_set(v___x_2774_, 0, v_x_2769_);
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_x_2769_);
lean_ctor_set(v_reuseFailAlloc_2781_, 1, v_x_2768_);
v___x_2777_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
lean_object* v___x_2778_; lean_object* v___x_2779_; 
v___x_2778_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_2771_);
v___x_2779_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2777_);
lean_ctor_set(v___x_2779_, 1, v___x_2778_);
v_x_2769_ = v___x_2779_;
v_x_2770_ = v_tail_2772_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17(lean_object* v_x_2783_, lean_object* v_x_2784_, lean_object* v_x_2785_){
_start:
{
if (lean_obj_tag(v_x_2785_) == 0)
{
lean_dec(v_x_2783_);
return v_x_2784_;
}
else
{
lean_object* v_head_2786_; lean_object* v_tail_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2797_; 
v_head_2786_ = lean_ctor_get(v_x_2785_, 0);
v_tail_2787_ = lean_ctor_get(v_x_2785_, 1);
v_isSharedCheck_2797_ = !lean_is_exclusive(v_x_2785_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2789_ = v_x_2785_;
v_isShared_2790_ = v_isSharedCheck_2797_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_tail_2787_);
lean_inc(v_head_2786_);
lean_dec(v_x_2785_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2797_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2792_; 
lean_inc(v_x_2783_);
if (v_isShared_2790_ == 0)
{
lean_ctor_set_tag(v___x_2789_, 5);
lean_ctor_set(v___x_2789_, 1, v_x_2783_);
lean_ctor_set(v___x_2789_, 0, v_x_2784_);
v___x_2792_ = v___x_2789_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_x_2784_);
lean_ctor_set(v_reuseFailAlloc_2796_, 1, v_x_2783_);
v___x_2792_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2793_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_2786_);
v___x_2794_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2794_, 0, v___x_2792_);
lean_ctor_set(v___x_2794_, 1, v___x_2793_);
v___x_2795_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17_spec__21(v_x_2783_, v___x_2794_, v_tail_2787_);
return v___x_2795_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14(lean_object* v_x_2798_, lean_object* v_x_2799_){
_start:
{
if (lean_obj_tag(v_x_2798_) == 0)
{
lean_object* v___x_2800_; 
lean_dec(v_x_2799_);
v___x_2800_ = lean_box(0);
return v___x_2800_;
}
else
{
lean_object* v_tail_2801_; 
v_tail_2801_ = lean_ctor_get(v_x_2798_, 1);
if (lean_obj_tag(v_tail_2801_) == 0)
{
lean_object* v_head_2802_; lean_object* v___x_2803_; 
lean_dec(v_x_2799_);
v_head_2802_ = lean_ctor_get(v_x_2798_, 0);
lean_inc(v_head_2802_);
lean_dec_ref(v_x_2798_);
v___x_2803_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_2802_);
return v___x_2803_;
}
else
{
lean_object* v_head_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
lean_inc(v_tail_2801_);
v_head_2804_ = lean_ctor_get(v_x_2798_, 0);
lean_inc(v_head_2804_);
lean_dec_ref(v_x_2798_);
v___x_2805_ = l_Lean_Elab_Structural_instReprRecArgInfo_repr___redArg(v_head_2804_);
v___x_2806_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14_spec__17(v_x_2799_, v___x_2805_, v_tail_2801_);
return v___x_2806_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5(void){
_start:
{
lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2815_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__0));
v___x_2816_ = lean_string_length(v___x_2815_);
return v___x_2816_;
}
}
static lean_object* _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6(void){
_start:
{
lean_object* v___x_2817_; lean_object* v___x_2818_; 
v___x_2817_ = lean_obj_once(&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5, &l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5_once, _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__5);
v___x_2818_ = lean_nat_to_int(v___x_2817_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10(lean_object* v_xs_2826_){
_start:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; uint8_t v___x_2829_; 
v___x_2827_ = lean_array_get_size(v_xs_2826_);
v___x_2828_ = lean_unsigned_to_nat(0u);
v___x_2829_ = lean_nat_dec_eq(v___x_2827_, v___x_2828_);
if (v___x_2829_ == 0)
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2830_ = lean_array_to_list(v_xs_2826_);
v___x_2831_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__3));
v___x_2832_ = l_Std_Format_joinSep___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__14(v___x_2830_, v___x_2831_);
v___x_2833_ = lean_obj_once(&l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6, &l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6_once, _init_l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__6);
v___x_2834_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__7));
v___x_2835_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2834_);
lean_ctor_set(v___x_2835_, 1, v___x_2832_);
v___x_2836_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__8));
v___x_2837_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2835_);
lean_ctor_set(v___x_2837_, 1, v___x_2836_);
v___x_2838_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2833_);
lean_ctor_set(v___x_2838_, 1, v___x_2837_);
v___x_2839_ = l_Std_Format_fill(v___x_2838_);
return v___x_2839_;
}
else
{
lean_object* v___x_2840_; 
lean_dec_ref(v_xs_2826_);
v___x_2840_ = ((lean_object*)(l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10___closed__10));
return v___x_2840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(size_t v_sz_2841_, size_t v_i_2842_, lean_object* v_bs_2843_){
_start:
{
uint8_t v___x_2844_; 
v___x_2844_ = lean_usize_dec_lt(v_i_2842_, v_sz_2841_);
if (v___x_2844_ == 0)
{
return v_bs_2843_;
}
else
{
lean_object* v_v_2845_; lean_object* v___x_2846_; lean_object* v_bs_x27_2847_; lean_object* v___x_2848_; size_t v___x_2849_; size_t v___x_2850_; lean_object* v___x_2851_; 
v_v_2845_ = lean_array_uget(v_bs_2843_, v_i_2842_);
v___x_2846_ = lean_unsigned_to_nat(0u);
v_bs_x27_2847_ = lean_array_uset(v_bs_2843_, v_i_2842_, v___x_2846_);
v___x_2848_ = l_Lean_mkFVar(v_v_2845_);
v___x_2849_ = ((size_t)1ULL);
v___x_2850_ = lean_usize_add(v_i_2842_, v___x_2849_);
v___x_2851_ = lean_array_uset(v_bs_x27_2847_, v_i_2842_, v___x_2848_);
v_i_2842_ = v___x_2850_;
v_bs_2843_ = v___x_2851_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11___boxed(lean_object* v_sz_2853_, lean_object* v_i_2854_, lean_object* v_bs_2855_){
_start:
{
size_t v_sz_boxed_2856_; size_t v_i_boxed_2857_; lean_object* v_res_2858_; 
v_sz_boxed_2856_ = lean_unbox_usize(v_sz_2853_);
lean_dec(v_sz_2853_);
v_i_boxed_2857_ = lean_unbox_usize(v_i_2854_);
lean_dec(v_i_2854_);
v_res_2858_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(v_sz_boxed_2856_, v_i_boxed_2857_, v_bs_2855_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(lean_object* v_fst_2859_, lean_object* v_as_2860_, lean_object* v_i_2861_, lean_object* v_j_2862_, lean_object* v_bs_2863_){
_start:
{
lean_object* v_zero_2864_; uint8_t v_isZero_2865_; 
v_zero_2864_ = lean_unsigned_to_nat(0u);
v_isZero_2865_ = lean_nat_dec_eq(v_i_2861_, v_zero_2864_);
if (v_isZero_2865_ == 1)
{
lean_dec(v_j_2862_);
lean_dec(v_i_2861_);
return v_bs_2863_;
}
else
{
lean_object* v___x_2866_; lean_object* v_fnName_2867_; lean_object* v_recArgPos_2868_; lean_object* v_indicesPos_2869_; lean_object* v_indGroupInst_2870_; lean_object* v_indIdx_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2886_; 
v___x_2866_ = lean_array_fget(v_as_2860_, v_j_2862_);
v_fnName_2867_ = lean_ctor_get(v___x_2866_, 0);
v_recArgPos_2868_ = lean_ctor_get(v___x_2866_, 2);
v_indicesPos_2869_ = lean_ctor_get(v___x_2866_, 3);
v_indGroupInst_2870_ = lean_ctor_get(v___x_2866_, 4);
v_indIdx_2871_ = lean_ctor_get(v___x_2866_, 5);
v_isSharedCheck_2886_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2886_ == 0)
{
lean_object* v_unused_2887_; 
v_unused_2887_ = lean_ctor_get(v___x_2866_, 1);
lean_dec(v_unused_2887_);
v___x_2873_ = v___x_2866_;
v_isShared_2874_ = v_isSharedCheck_2886_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_indIdx_2871_);
lean_inc(v_indGroupInst_2870_);
lean_inc(v_indicesPos_2869_);
lean_inc(v_recArgPos_2868_);
lean_inc(v_fnName_2867_);
lean_dec(v___x_2866_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2886_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v_perms_2875_; lean_object* v___x_2876_; lean_object* v_one_2877_; lean_object* v_n_2878_; lean_object* v___x_2879_; lean_object* v___x_2881_; 
v_perms_2875_ = lean_ctor_get(v_fst_2859_, 1);
v___x_2876_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0);
v_one_2877_ = lean_unsigned_to_nat(1u);
v_n_2878_ = lean_nat_sub(v_i_2861_, v_one_2877_);
lean_dec(v_i_2861_);
v___x_2879_ = lean_array_get_borrowed(v___x_2876_, v_perms_2875_, v_j_2862_);
lean_inc(v___x_2879_);
if (v_isShared_2874_ == 0)
{
lean_ctor_set(v___x_2873_, 1, v___x_2879_);
v___x_2881_ = v___x_2873_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2885_; 
v_reuseFailAlloc_2885_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2885_, 0, v_fnName_2867_);
lean_ctor_set(v_reuseFailAlloc_2885_, 1, v___x_2879_);
lean_ctor_set(v_reuseFailAlloc_2885_, 2, v_recArgPos_2868_);
lean_ctor_set(v_reuseFailAlloc_2885_, 3, v_indicesPos_2869_);
lean_ctor_set(v_reuseFailAlloc_2885_, 4, v_indGroupInst_2870_);
lean_ctor_set(v_reuseFailAlloc_2885_, 5, v_indIdx_2871_);
v___x_2881_ = v_reuseFailAlloc_2885_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
v___x_2882_ = lean_nat_add(v_j_2862_, v_one_2877_);
lean_dec(v_j_2862_);
v___x_2883_ = lean_array_push(v_bs_2863_, v___x_2881_);
v_i_2861_ = v_n_2878_;
v_j_2862_ = v___x_2882_;
v_bs_2863_ = v___x_2883_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg___boxed(lean_object* v_fst_2888_, lean_object* v_as_2889_, lean_object* v_i_2890_, lean_object* v_j_2891_, lean_object* v_bs_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(v_fst_2888_, v_as_2889_, v_i_2890_, v_j_2891_, v_bs_2892_);
lean_dec_ref(v_as_2889_);
lean_dec_ref(v_fst_2888_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(size_t v_sz_2894_, size_t v_i_2895_, lean_object* v_bs_2896_){
_start:
{
uint8_t v___x_2897_; 
v___x_2897_ = lean_usize_dec_lt(v_i_2895_, v_sz_2894_);
if (v___x_2897_ == 0)
{
return v_bs_2896_;
}
else
{
lean_object* v_v_2898_; lean_object* v_recArgPos_2899_; lean_object* v___x_2900_; lean_object* v_bs_x27_2901_; size_t v___x_2902_; size_t v___x_2903_; lean_object* v___x_2904_; 
v_v_2898_ = lean_array_uget_borrowed(v_bs_2896_, v_i_2895_);
v_recArgPos_2899_ = lean_ctor_get(v_v_2898_, 2);
lean_inc(v_recArgPos_2899_);
v___x_2900_ = lean_unsigned_to_nat(0u);
v_bs_x27_2901_ = lean_array_uset(v_bs_2896_, v_i_2895_, v___x_2900_);
v___x_2902_ = ((size_t)1ULL);
v___x_2903_ = lean_usize_add(v_i_2895_, v___x_2902_);
v___x_2904_ = lean_array_uset(v_bs_x27_2901_, v_i_2895_, v_recArgPos_2899_);
v_i_2895_ = v___x_2903_;
v_bs_2896_ = v___x_2904_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2___boxed(lean_object* v_sz_2906_, lean_object* v_i_2907_, lean_object* v_bs_2908_){
_start:
{
size_t v_sz_boxed_2909_; size_t v_i_boxed_2910_; lean_object* v_res_2911_; 
v_sz_boxed_2909_ = lean_unbox_usize(v_sz_2906_);
lean_dec(v_sz_2906_);
v_i_boxed_2910_ = lean_unbox_usize(v_i_2907_);
lean_dec(v_i_2907_);
v_res_2911_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(v_sz_boxed_2909_, v_i_boxed_2910_, v_bs_2908_);
return v_res_2911_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1(void){
_start:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; 
v___x_2913_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__0));
v___x_2914_ = l_Lean_stringToMessageData(v___x_2913_);
return v___x_2914_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; 
v___x_2916_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__2));
v___x_2917_ = l_Lean_stringToMessageData(v___x_2916_);
return v___x_2917_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5(void){
_start:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; 
v___x_2919_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__4));
v___x_2920_ = l_Lean_stringToMessageData(v___x_2919_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(lean_object* v_a_2921_, lean_object* v_as_2922_, size_t v_sz_2923_, size_t v_i_2924_, lean_object* v_b_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v_a_2932_; uint8_t v___x_2936_; 
v___x_2936_ = lean_usize_dec_lt(v_i_2924_, v_sz_2923_);
if (v___x_2936_ == 0)
{
lean_object* v___x_2937_; 
lean_dec_ref(v_a_2921_);
v___x_2937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2937_, 0, v_b_2925_);
return v___x_2937_;
}
else
{
lean_object* v_a_2938_; lean_object* v___x_2939_; 
v_a_2938_ = lean_array_uget_borrowed(v_as_2922_, v_i_2924_);
lean_inc(v_a_2938_);
lean_inc_ref(v_a_2921_);
v___x_2939_ = l_Lean_exprDependsOn___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__5___redArg(v_a_2921_, v_a_2938_, v___y_2927_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v_a_2940_; lean_object* v___x_2941_; uint8_t v___x_2942_; 
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
lean_inc(v_a_2940_);
lean_dec_ref(v___x_2939_);
v___x_2941_ = lean_box(0);
v___x_2942_ = lean_unbox(v_a_2940_);
lean_dec(v_a_2940_);
if (v___x_2942_ == 0)
{
v_a_2932_ = v___x_2941_;
goto v___jp_2931_;
}
else
{
uint8_t v___x_2943_; 
v___x_2943_ = l_Lean_Expr_isFVarOf(v_a_2921_, v_a_2938_);
if (v___x_2943_ == 0)
{
lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2944_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1);
lean_inc_ref(v_a_2921_);
v___x_2945_ = l_Lean_indentExpr(v_a_2921_);
v___x_2946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2946_, 0, v___x_2944_);
lean_ctor_set(v___x_2946_, 1, v___x_2945_);
v___x_2947_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__3);
v___x_2948_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2946_);
lean_ctor_set(v___x_2948_, 1, v___x_2947_);
lean_inc(v_a_2938_);
v___x_2949_ = l_Lean_mkFVar(v_a_2938_);
v___x_2950_ = l_Lean_indentExpr(v___x_2949_);
v___x_2951_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2951_, 0, v___x_2948_);
lean_ctor_set(v___x_2951_, 1, v___x_2950_);
v___x_2952_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5);
v___x_2953_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2951_);
lean_ctor_set(v___x_2953_, 1, v___x_2952_);
v___x_2954_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v___x_2953_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_dec_ref(v___x_2954_);
v_a_2932_ = v___x_2941_;
goto v___jp_2931_;
}
else
{
lean_dec_ref(v_a_2921_);
return v___x_2954_;
}
}
else
{
lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2955_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__1);
lean_inc_ref(v_a_2921_);
v___x_2956_ = l_Lean_indentExpr(v_a_2921_);
v___x_2957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2955_);
lean_ctor_set(v___x_2957_, 1, v___x_2956_);
v___x_2958_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___closed__5);
v___x_2959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2957_);
lean_ctor_set(v___x_2959_, 1, v___x_2958_);
v___x_2960_ = l_Lean_throwError___at___00Lean_getConstInfoInduct___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__4_spec__4___redArg(v___x_2959_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
if (lean_obj_tag(v___x_2960_) == 0)
{
lean_dec_ref(v___x_2960_);
v_a_2932_ = v___x_2941_;
goto v___jp_2931_;
}
else
{
lean_dec_ref(v_a_2921_);
return v___x_2960_;
}
}
}
}
else
{
lean_object* v_a_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2968_; 
lean_dec_ref(v_a_2921_);
v_a_2961_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2963_ = v___x_2939_;
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_a_2961_);
lean_dec(v___x_2939_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2968_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
lean_object* v___x_2966_; 
if (v_isShared_2964_ == 0)
{
v___x_2966_ = v___x_2963_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_a_2961_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
return v___x_2966_;
}
}
}
}
v___jp_2931_:
{
size_t v___x_2933_; size_t v___x_2934_; 
v___x_2933_ = ((size_t)1ULL);
v___x_2934_ = lean_usize_add(v_i_2924_, v___x_2933_);
v_i_2924_ = v___x_2934_;
v_b_2925_ = v_a_2932_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6___boxed(lean_object* v_a_2969_, lean_object* v_as_2970_, lean_object* v_sz_2971_, lean_object* v_i_2972_, lean_object* v_b_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_){
_start:
{
size_t v_sz_boxed_2979_; size_t v_i_boxed_2980_; lean_object* v_res_2981_; 
v_sz_boxed_2979_ = lean_unbox_usize(v_sz_2971_);
lean_dec(v_sz_2971_);
v_i_boxed_2980_ = lean_unbox_usize(v_i_2972_);
lean_dec(v_i_2972_);
v_res_2981_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(v_a_2969_, v_as_2970_, v_sz_boxed_2979_, v_i_boxed_2980_, v_b_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
lean_dec(v___y_2977_);
lean_dec_ref(v___y_2976_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v_as_2970_);
return v_res_2981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(lean_object* v_snd_2982_, lean_object* v_as_2983_, size_t v_sz_2984_, size_t v_i_2985_, lean_object* v_b_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_){
_start:
{
uint8_t v___x_2992_; 
v___x_2992_ = lean_usize_dec_lt(v_i_2985_, v_sz_2984_);
if (v___x_2992_ == 0)
{
lean_object* v___x_2993_; 
v___x_2993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2993_, 0, v_b_2986_);
return v___x_2993_;
}
else
{
lean_object* v___x_2994_; lean_object* v_a_2995_; size_t v_sz_2996_; size_t v___x_2997_; lean_object* v___x_2998_; 
v___x_2994_ = lean_box(0);
v_a_2995_ = lean_array_uget_borrowed(v_as_2983_, v_i_2985_);
v_sz_2996_ = lean_array_size(v_snd_2982_);
v___x_2997_ = ((size_t)0ULL);
lean_inc(v_a_2995_);
v___x_2998_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__6(v_a_2995_, v_snd_2982_, v_sz_2996_, v___x_2997_, v___x_2994_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_);
if (lean_obj_tag(v___x_2998_) == 0)
{
size_t v___x_2999_; size_t v___x_3000_; 
lean_dec_ref(v___x_2998_);
v___x_2999_ = ((size_t)1ULL);
v___x_3000_ = lean_usize_add(v_i_2985_, v___x_2999_);
v_i_2985_ = v___x_3000_;
v_b_2986_ = v___x_2994_;
goto _start;
}
else
{
return v___x_2998_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7___boxed(lean_object* v_snd_3002_, lean_object* v_as_3003_, lean_object* v_sz_3004_, lean_object* v_i_3005_, lean_object* v_b_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_){
_start:
{
size_t v_sz_boxed_3012_; size_t v_i_boxed_3013_; lean_object* v_res_3014_; 
v_sz_boxed_3012_ = lean_unbox_usize(v_sz_3004_);
lean_dec(v_sz_3004_);
v_i_boxed_3013_ = lean_unbox_usize(v_i_3005_);
lean_dec(v_i_3005_);
v_res_3014_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(v_snd_3002_, v_as_3003_, v_sz_boxed_3012_, v_i_boxed_3013_, v_b_3006_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_);
lean_dec(v___y_3010_);
lean_dec_ref(v___y_3009_);
lean_dec(v___y_3008_);
lean_dec_ref(v___y_3007_);
lean_dec_ref(v_as_3003_);
lean_dec_ref(v_snd_3002_);
return v_res_3014_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(lean_object* v_snd_3015_, lean_object* v_as_3016_, size_t v_sz_3017_, size_t v_i_3018_, lean_object* v_b_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_){
_start:
{
uint8_t v___x_3025_; 
v___x_3025_ = lean_usize_dec_lt(v_i_3018_, v_sz_3017_);
if (v___x_3025_ == 0)
{
lean_object* v___x_3026_; 
v___x_3026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3026_, 0, v_b_3019_);
return v___x_3026_;
}
else
{
lean_object* v_a_3027_; lean_object* v_indGroupInst_3028_; lean_object* v_params_3029_; lean_object* v___x_3030_; size_t v_sz_3031_; size_t v___x_3032_; lean_object* v___x_3033_; 
v_a_3027_ = lean_array_uget_borrowed(v_as_3016_, v_i_3018_);
v_indGroupInst_3028_ = lean_ctor_get(v_a_3027_, 4);
v_params_3029_ = lean_ctor_get(v_indGroupInst_3028_, 2);
v___x_3030_ = lean_box(0);
v_sz_3031_ = lean_array_size(v_params_3029_);
v___x_3032_ = ((size_t)0ULL);
v___x_3033_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__7(v_snd_3015_, v_params_3029_, v_sz_3031_, v___x_3032_, v___x_3030_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_);
if (lean_obj_tag(v___x_3033_) == 0)
{
size_t v___x_3034_; size_t v___x_3035_; 
lean_dec_ref(v___x_3033_);
v___x_3034_ = ((size_t)1ULL);
v___x_3035_ = lean_usize_add(v_i_3018_, v___x_3034_);
v_i_3018_ = v___x_3035_;
v_b_3019_ = v___x_3030_;
goto _start;
}
else
{
return v___x_3033_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8___boxed(lean_object* v_snd_3037_, lean_object* v_as_3038_, lean_object* v_sz_3039_, lean_object* v_i_3040_, lean_object* v_b_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_){
_start:
{
size_t v_sz_boxed_3047_; size_t v_i_boxed_3048_; lean_object* v_res_3049_; 
v_sz_boxed_3047_ = lean_unbox_usize(v_sz_3039_);
lean_dec(v_sz_3039_);
v_i_boxed_3048_ = lean_unbox_usize(v_i_3040_);
lean_dec(v_i_3040_);
v_res_3049_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(v_snd_3037_, v_as_3038_, v_sz_boxed_3047_, v_i_boxed_3048_, v_b_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
lean_dec(v___y_3045_);
lean_dec_ref(v___y_3044_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec_ref(v_as_3038_);
lean_dec_ref(v_snd_3037_);
return v_res_3049_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3051_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__0));
v___x_3052_ = l_Lean_stringToMessageData(v___x_3051_);
return v___x_3052_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; 
v___x_3054_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__2));
v___x_3055_ = l_Lean_stringToMessageData(v___x_3054_);
return v___x_3055_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__5(void){
_start:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; 
v___x_3057_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__4));
v___x_3058_ = l_Lean_stringToMessageData(v___x_3057_);
return v___x_3058_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__7(void){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__6));
v___x_3061_ = l_Lean_stringToMessageData(v___x_3060_);
return v___x_3061_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__9(void){
_start:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3063_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__8));
v___x_3064_ = l_Lean_stringToMessageData(v___x_3063_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1(size_t v___x_3065_, lean_object* v_a_3066_, lean_object* v_xs_3067_, lean_object* v___x_3068_, lean_object* v_a_3069_, lean_object* v_recArgInfos_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v___y_3077_; lean_object* v___y_3078_; lean_object* v___y_3079_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___x_3096_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v___x_3121_; lean_object* v_a_3122_; size_t v_sz_3123_; lean_object* v___x_3124_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v___y_3128_; lean_object* v___y_3129_; uint8_t v___x_3188_; 
v___x_3096_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion___closed__3));
v___x_3121_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_3096_, v___y_3073_);
v_a_3122_ = lean_ctor_get(v___x_3121_, 0);
lean_inc(v_a_3122_);
lean_dec_ref(v___x_3121_);
v_sz_3123_ = lean_array_size(v_recArgInfos_3070_);
lean_inc_ref(v_recArgInfos_3070_);
v___x_3124_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__2(v_sz_3123_, v___x_3065_, v_recArgInfos_3070_);
v___x_3188_ = lean_unbox(v_a_3122_);
lean_dec(v_a_3122_);
if (v___x_3188_ == 0)
{
v___y_3126_ = v___y_3071_;
v___y_3127_ = v___y_3072_;
v___y_3128_ = v___y_3073_;
v___y_3129_ = v___y_3074_;
goto v___jp_3125_;
}
else
{
lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3189_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__9, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__9);
lean_inc_ref(v___x_3124_);
v___x_3190_ = lean_array_to_list(v___x_3124_);
v___x_3191_ = lean_box(0);
v___x_3192_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__0(v___x_3190_, v___x_3191_);
v___x_3193_ = l_Lean_MessageData_ofList(v___x_3192_);
v___x_3194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3189_);
lean_ctor_set(v___x_3194_, 1, v___x_3193_);
v___x_3195_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v___x_3096_, v___x_3194_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_dec_ref(v___x_3195_);
v___y_3126_ = v___y_3071_;
v___y_3127_ = v___y_3072_;
v___y_3128_ = v___y_3073_;
v___y_3129_ = v___y_3074_;
goto v___jp_3125_;
}
else
{
lean_object* v_a_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3203_; 
lean_dec_ref(v___x_3124_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
lean_dec_ref(v___y_3071_);
lean_dec_ref(v_recArgInfos_3070_);
lean_dec_ref(v_a_3069_);
lean_dec(v___x_3068_);
lean_dec_ref(v_xs_3067_);
lean_dec_ref(v_a_3066_);
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3198_ = v___x_3195_;
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_a_3196_);
lean_dec(v___x_3195_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v___x_3201_; 
if (v_isShared_3199_ == 0)
{
v___x_3201_ = v___x_3198_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v_a_3196_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
}
v___jp_3076_:
{
lean_object* v___x_3084_; size_t v_sz_3085_; lean_object* v___x_3086_; 
v___x_3084_ = lean_box(0);
v_sz_3085_ = lean_array_size(v___y_3078_);
v___x_3086_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__8(v___y_3077_, v___y_3078_, v_sz_3085_, v___x_3065_, v___x_3084_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
lean_dec_ref(v___y_3078_);
if (lean_obj_tag(v___x_3086_) == 0)
{
lean_object* v___x_3087_; 
lean_dec_ref(v___x_3086_);
v___x_3087_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v___y_3077_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
lean_dec_ref(v___y_3077_);
return v___x_3087_;
}
else
{
lean_object* v_a_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3095_; 
lean_dec(v___y_3083_);
lean_dec_ref(v___y_3082_);
lean_dec(v___y_3081_);
lean_dec_ref(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec_ref(v___y_3077_);
v_a_3088_ = lean_ctor_get(v___x_3086_, 0);
v_isSharedCheck_3095_ = !lean_is_exclusive(v___x_3086_);
if (v_isSharedCheck_3095_ == 0)
{
v___x_3090_ = v___x_3086_;
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_a_3088_);
lean_dec(v___x_3086_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3093_; 
if (v_isShared_3091_ == 0)
{
v___x_3093_ = v___x_3090_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v_a_3088_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
}
v___jp_3097_:
{
lean_object* v___x_3105_; lean_object* v_a_3106_; uint8_t v___x_3107_; 
v___x_3105_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_3096_, v___y_3103_);
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
lean_inc(v_a_3106_);
lean_dec_ref(v___x_3105_);
v___x_3107_ = lean_unbox(v_a_3106_);
lean_dec(v_a_3106_);
if (v___x_3107_ == 0)
{
v___y_3077_ = v___y_3098_;
v___y_3078_ = v___y_3099_;
v___y_3079_ = v___y_3100_;
v___y_3080_ = v___y_3101_;
v___y_3081_ = v___y_3102_;
v___y_3082_ = v___y_3103_;
v___y_3083_ = v___y_3104_;
goto v___jp_3076_;
}
else
{
lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3108_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__1);
lean_inc_ref(v___y_3099_);
v___x_3109_ = l_Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10(v___y_3099_);
v___x_3110_ = l_Lean_MessageData_ofFormat(v___x_3109_);
v___x_3111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3108_);
lean_ctor_set(v___x_3111_, 1, v___x_3110_);
v___x_3112_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v___x_3096_, v___x_3111_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_dec_ref(v___x_3112_);
v___y_3077_ = v___y_3098_;
v___y_3078_ = v___y_3099_;
v___y_3079_ = v___y_3100_;
v___y_3080_ = v___y_3101_;
v___y_3081_ = v___y_3102_;
v___y_3082_ = v___y_3103_;
v___y_3083_ = v___y_3104_;
goto v___jp_3076_;
}
else
{
lean_object* v_a_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3120_; 
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3103_);
lean_dec(v___y_3102_);
lean_dec_ref(v___y_3101_);
lean_dec_ref(v___y_3100_);
lean_dec_ref(v___y_3099_);
lean_dec_ref(v___y_3098_);
v_a_3113_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3115_ = v___x_3112_;
v_isShared_3116_ = v_isSharedCheck_3120_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_a_3113_);
lean_dec(v___x_3112_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3120_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3118_; 
if (v_isShared_3116_ == 0)
{
v___x_3118_ = v___x_3115_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v_a_3113_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
}
}
v___jp_3125_:
{
lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v_snd_3132_; lean_object* v_fst_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3187_; 
lean_inc_ref(v_recArgInfos_3070_);
v___x_3130_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__3(v_sz_3123_, v___x_3065_, v_recArgInfos_3070_);
lean_inc_ref(v_xs_3067_);
v___x_3131_ = l_Lean_Elab_FixedParamPerms_erase(v_a_3066_, v_xs_3067_, v___x_3130_);
v_snd_3132_ = lean_ctor_get(v___x_3131_, 1);
v_fst_3133_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3187_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3187_ == 0)
{
v___x_3135_ = v___x_3131_;
v_isShared_3136_ = v_isSharedCheck_3187_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_snd_3132_);
lean_inc(v_fst_3133_);
lean_dec(v___x_3131_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3187_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v_fst_3137_; lean_object* v_snd_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3186_; 
v_fst_3137_ = lean_ctor_get(v_snd_3132_, 0);
v_snd_3138_ = lean_ctor_get(v_snd_3132_, 1);
v_isSharedCheck_3186_ = !lean_is_exclusive(v_snd_3132_);
if (v_isSharedCheck_3186_ == 0)
{
v___x_3140_ = v_snd_3132_;
v_isShared_3141_ = v_isSharedCheck_3186_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_snd_3138_);
lean_inc(v_fst_3137_);
lean_dec(v_snd_3132_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3186_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___f_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; uint8_t v___x_3148_; 
v___x_3142_ = lean_array_get_size(v_recArgInfos_3070_);
v___x_3143_ = lean_mk_empty_array_with_capacity(v___x_3142_);
v___x_3144_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(v_fst_3133_, v_recArgInfos_3070_, v___x_3142_, v___x_3068_, v___x_3143_);
lean_dec_ref(v_recArgInfos_3070_);
lean_inc_ref(v___x_3144_);
lean_inc(v_fst_3137_);
v___f_3145_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3145_, 0, v_a_3069_);
lean_closure_set(v___f_3145_, 1, v_fst_3133_);
lean_closure_set(v___f_3145_, 2, v_fst_3137_);
lean_closure_set(v___f_3145_, 3, v___x_3144_);
lean_closure_set(v___f_3145_, 4, v___x_3124_);
v___x_3146_ = lean_array_get_size(v_fst_3137_);
v___x_3147_ = lean_array_get_size(v_xs_3067_);
v___x_3148_ = lean_nat_dec_eq(v___x_3146_, v___x_3147_);
if (v___x_3148_ == 0)
{
lean_object* v___x_3149_; lean_object* v_a_3150_; uint8_t v___x_3151_; 
v___x_3149_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__5___redArg(v___x_3096_, v___y_3128_);
v_a_3150_ = lean_ctor_get(v___x_3149_, 0);
lean_inc(v_a_3150_);
lean_dec_ref(v___x_3149_);
v___x_3151_ = lean_unbox(v_a_3150_);
lean_dec(v_a_3150_);
if (v___x_3151_ == 0)
{
lean_del_object(v___x_3140_);
lean_dec(v_fst_3137_);
lean_del_object(v___x_3135_);
lean_dec_ref(v_xs_3067_);
v___y_3098_ = v_snd_3138_;
v___y_3099_ = v___x_3144_;
v___y_3100_ = v___f_3145_;
v___y_3101_ = v___y_3126_;
v___y_3102_ = v___y_3127_;
v___y_3103_ = v___y_3128_;
v___y_3104_ = v___y_3129_;
goto v___jp_3097_;
}
else
{
lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3158_; 
v___x_3152_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__3);
v___x_3153_ = lean_array_to_list(v_xs_3067_);
v___x_3154_ = lean_box(0);
v___x_3155_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v___x_3153_, v___x_3154_);
v___x_3156_ = l_Lean_MessageData_ofList(v___x_3155_);
if (v_isShared_3141_ == 0)
{
lean_ctor_set_tag(v___x_3140_, 7);
lean_ctor_set(v___x_3140_, 1, v___x_3156_);
lean_ctor_set(v___x_3140_, 0, v___x_3152_);
v___x_3158_ = v___x_3140_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v___x_3152_);
lean_ctor_set(v_reuseFailAlloc_3184_, 1, v___x_3156_);
v___x_3158_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
lean_object* v___x_3159_; lean_object* v___x_3161_; 
v___x_3159_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__5);
if (v_isShared_3136_ == 0)
{
lean_ctor_set_tag(v___x_3135_, 7);
lean_ctor_set(v___x_3135_, 1, v___x_3159_);
lean_ctor_set(v___x_3135_, 0, v___x_3158_);
v___x_3161_ = v___x_3135_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v___x_3158_);
lean_ctor_set(v_reuseFailAlloc_3183_, 1, v___x_3159_);
v___x_3161_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; size_t v_sz_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3162_ = lean_array_to_list(v_fst_3137_);
v___x_3163_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v___x_3162_, v___x_3154_);
v___x_3164_ = l_Lean_MessageData_ofList(v___x_3163_);
v___x_3165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3161_);
lean_ctor_set(v___x_3165_, 1, v___x_3164_);
v___x_3166_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__7, &l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___closed__7);
v___x_3167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3165_);
lean_ctor_set(v___x_3167_, 1, v___x_3166_);
v_sz_3168_ = lean_array_size(v_snd_3138_);
lean_inc(v_snd_3138_);
v___x_3169_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__11(v_sz_3168_, v___x_3065_, v_snd_3138_);
v___x_3170_ = lean_array_to_list(v___x_3169_);
v___x_3171_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__14(v___x_3170_, v___x_3154_);
v___x_3172_ = l_Lean_MessageData_ofList(v___x_3171_);
v___x_3173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3167_);
lean_ctor_set(v___x_3173_, 1, v___x_3172_);
v___x_3174_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__15(v___x_3096_, v___x_3173_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_);
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_dec_ref(v___x_3174_);
v___y_3098_ = v_snd_3138_;
v___y_3099_ = v___x_3144_;
v___y_3100_ = v___f_3145_;
v___y_3101_ = v___y_3126_;
v___y_3102_ = v___y_3127_;
v___y_3103_ = v___y_3128_;
v___y_3104_ = v___y_3129_;
goto v___jp_3097_;
}
else
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
lean_dec_ref(v___f_3145_);
lean_dec_ref(v___x_3144_);
lean_dec(v_snd_3138_);
lean_dec(v___y_3129_);
lean_dec_ref(v___y_3128_);
lean_dec(v___y_3127_);
lean_dec_ref(v___y_3126_);
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3177_ = v___x_3174_;
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3174_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3180_; 
if (v_isShared_3178_ == 0)
{
v___x_3180_ = v___x_3177_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_a_3175_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3185_; 
lean_dec_ref(v___x_3144_);
lean_del_object(v___x_3140_);
lean_dec(v_fst_3137_);
lean_del_object(v___x_3135_);
lean_dec_ref(v_xs_3067_);
v___x_3185_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v_snd_3138_, v___f_3145_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_);
lean_dec(v_snd_3138_);
return v___x_3185_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___boxed(lean_object* v___x_3204_, lean_object* v_a_3205_, lean_object* v_xs_3206_, lean_object* v___x_3207_, lean_object* v_a_3208_, lean_object* v_recArgInfos_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_){
_start:
{
size_t v___x_15163__boxed_3215_; lean_object* v_res_3216_; 
v___x_15163__boxed_3215_ = lean_unbox_usize(v___x_3204_);
lean_dec(v___x_3204_);
v_res_3216_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1(v___x_15163__boxed_3215_, v_a_3205_, v_xs_3206_, v___x_3207_, v_a_3208_, v_recArgInfos_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_);
return v_res_3216_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(lean_object* v___x_3217_, lean_object* v_xs_3218_, lean_object* v_as_3219_, lean_object* v_i_3220_, lean_object* v_j_3221_, lean_object* v_bs_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_){
_start:
{
lean_object* v_zero_3228_; uint8_t v_isZero_3229_; 
v_zero_3228_ = lean_unsigned_to_nat(0u);
v_isZero_3229_ = lean_nat_dec_eq(v_i_3220_, v_zero_3228_);
if (v_isZero_3229_ == 1)
{
lean_object* v___x_3230_; 
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec(v___y_3224_);
lean_dec_ref(v___y_3223_);
lean_dec(v_j_3221_);
lean_dec(v_i_3220_);
lean_dec_ref(v_xs_3218_);
v___x_3230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3230_, 0, v_bs_3222_);
return v___x_3230_;
}
else
{
lean_object* v___x_3231_; lean_object* v_value_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3231_ = lean_array_fget_borrowed(v_as_3219_, v_j_3221_);
v_value_3232_ = lean_ctor_get(v___x_3231_, 7);
v___x_3233_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0);
v___x_3234_ = lean_array_get_borrowed(v___x_3233_, v___x_3217_, v_j_3221_);
lean_inc(v___y_3226_);
lean_inc_ref(v___y_3225_);
lean_inc(v___y_3224_);
lean_inc_ref(v___y_3223_);
lean_inc_ref(v_xs_3218_);
lean_inc_ref(v_value_3232_);
lean_inc(v___x_3234_);
v___x_3235_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_3234_, v_value_3232_, v_xs_3218_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_object* v_a_3236_; lean_object* v_one_3237_; lean_object* v_n_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v_a_3236_ = lean_ctor_get(v___x_3235_, 0);
lean_inc(v_a_3236_);
lean_dec_ref(v___x_3235_);
v_one_3237_ = lean_unsigned_to_nat(1u);
v_n_3238_ = lean_nat_sub(v_i_3220_, v_one_3237_);
lean_dec(v_i_3220_);
v___x_3239_ = lean_nat_add(v_j_3221_, v_one_3237_);
lean_dec(v_j_3221_);
v___x_3240_ = lean_array_push(v_bs_3222_, v_a_3236_);
v_i_3220_ = v_n_3238_;
v_j_3221_ = v___x_3239_;
v_bs_3222_ = v___x_3240_;
goto _start;
}
else
{
lean_object* v_a_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3249_; 
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec(v___y_3224_);
lean_dec_ref(v___y_3223_);
lean_dec_ref(v_bs_3222_);
lean_dec(v_j_3221_);
lean_dec(v_i_3220_);
lean_dec_ref(v_xs_3218_);
v_a_3242_ = lean_ctor_get(v___x_3235_, 0);
v_isSharedCheck_3249_ = !lean_is_exclusive(v___x_3235_);
if (v_isSharedCheck_3249_ == 0)
{
v___x_3244_ = v___x_3235_;
v_isShared_3245_ = v_isSharedCheck_3249_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_a_3242_);
lean_dec(v___x_3235_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3249_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v___x_3247_; 
if (v_isShared_3245_ == 0)
{
v___x_3247_ = v___x_3244_;
goto v_reusejp_3246_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v_a_3242_);
v___x_3247_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3246_;
}
v_reusejp_3246_:
{
return v___x_3247_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg___boxed(lean_object* v___x_3250_, lean_object* v_xs_3251_, lean_object* v_as_3252_, lean_object* v_i_3253_, lean_object* v_j_3254_, lean_object* v_bs_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(v___x_3250_, v_xs_3251_, v_as_3252_, v_i_3253_, v_j_3254_, v_bs_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_);
lean_dec_ref(v_as_3252_);
lean_dec_ref(v___x_3250_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2(lean_object* v_a_3262_, lean_object* v_perms_3263_, lean_object* v___x_3264_, lean_object* v_fnNames_3265_, lean_object* v_a_3266_, lean_object* v_termMeasure_x3fs_3267_, size_t v___x_3268_, lean_object* v_xs_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; 
v___x_3275_ = lean_array_get_size(v_a_3262_);
v___x_3276_ = lean_mk_empty_array_with_capacity(v___x_3275_);
lean_inc(v___y_3273_);
lean_inc_ref(v___y_3272_);
lean_inc(v___y_3271_);
lean_inc_ref(v___y_3270_);
lean_inc(v___x_3264_);
lean_inc_ref(v_xs_3269_);
v___x_3277_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(v_perms_3263_, v_xs_3269_, v_a_3262_, v___x_3275_, v___x_3264_, v___x_3276_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
if (lean_obj_tag(v___x_3277_) == 0)
{
lean_object* v_a_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; 
v_a_3278_ = lean_ctor_get(v___x_3277_, 0);
lean_inc(v_a_3278_);
lean_dec_ref(v___x_3277_);
lean_inc(v_a_3278_);
lean_inc_ref(v_xs_3269_);
lean_inc_ref(v_a_3266_);
lean_inc_ref(v_fnNames_3265_);
v___x_3279_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_findRecArgCandidates___boxed), 10, 5);
lean_closure_set(v___x_3279_, 0, v_fnNames_3265_);
lean_closure_set(v___x_3279_, 1, v_a_3266_);
lean_closure_set(v___x_3279_, 2, v_xs_3269_);
lean_closure_set(v___x_3279_, 3, v_a_3278_);
lean_closure_set(v___x_3279_, 4, v_termMeasure_x3fs_3267_);
lean_inc(v___y_3273_);
lean_inc_ref(v___y_3272_);
lean_inc(v___y_3271_);
lean_inc_ref(v___y_3270_);
lean_inc_ref(v_a_3262_);
v___x_3280_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v_a_3262_, v___x_3279_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
if (lean_obj_tag(v___x_3280_) == 0)
{
lean_object* v_a_3281_; lean_object* v___x_3282_; lean_object* v___f_3283_; lean_object* v___x_3284_; 
v_a_3281_ = lean_ctor_get(v___x_3280_, 0);
lean_inc(v_a_3281_);
lean_dec_ref(v___x_3280_);
v___x_3282_ = lean_box_usize(v___x_3268_);
lean_inc_ref(v_xs_3269_);
v___f_3283_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__1___boxed), 11, 5);
lean_closure_set(v___f_3283_, 0, v___x_3282_);
lean_closure_set(v___f_3283_, 1, v_a_3266_);
lean_closure_set(v___f_3283_, 2, v_xs_3269_);
lean_closure_set(v___f_3283_, 3, v___x_3264_);
lean_closure_set(v___f_3283_, 4, v_a_3262_);
v___x_3284_ = l_Lean_Elab_Structural_tryCandidates___redArg(v_fnNames_3265_, v_xs_3269_, v_a_3278_, v_a_3281_, v___f_3283_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
lean_dec_ref(v_fnNames_3265_);
return v___x_3284_;
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3292_; 
lean_dec(v_a_3278_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
lean_dec_ref(v_xs_3269_);
lean_dec_ref(v_a_3266_);
lean_dec_ref(v_fnNames_3265_);
lean_dec(v___x_3264_);
lean_dec_ref(v_a_3262_);
v_a_3285_ = lean_ctor_get(v___x_3280_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3280_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3287_ = v___x_3280_;
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_a_3285_);
lean_dec(v___x_3280_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
lean_object* v___x_3290_; 
if (v_isShared_3288_ == 0)
{
v___x_3290_ = v___x_3287_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v_a_3285_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3300_; 
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
lean_dec(v___y_3271_);
lean_dec_ref(v___y_3270_);
lean_dec_ref(v_xs_3269_);
lean_dec_ref(v_termMeasure_x3fs_3267_);
lean_dec_ref(v_a_3266_);
lean_dec_ref(v_fnNames_3265_);
lean_dec(v___x_3264_);
lean_dec_ref(v_a_3262_);
v_a_3293_ = lean_ctor_get(v___x_3277_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3277_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3295_ = v___x_3277_;
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v___x_3277_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v___x_3298_; 
if (v_isShared_3296_ == 0)
{
v___x_3298_ = v___x_3295_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_a_3293_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2___boxed(lean_object* v_a_3301_, lean_object* v_perms_3302_, lean_object* v___x_3303_, lean_object* v_fnNames_3304_, lean_object* v_a_3305_, lean_object* v_termMeasure_x3fs_3306_, lean_object* v___x_3307_, lean_object* v_xs_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_){
_start:
{
size_t v___x_15520__boxed_3314_; lean_object* v_res_3315_; 
v___x_15520__boxed_3314_ = lean_unbox_usize(v___x_3307_);
lean_dec(v___x_3307_);
v_res_3315_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2(v_a_3301_, v_perms_3302_, v___x_3303_, v_fnNames_3304_, v_a_3305_, v_termMeasure_x3fs_3306_, v___x_15520__boxed_3314_, v_xs_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
lean_dec_ref(v_perms_3302_);
return v_res_3315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(size_t v_sz_3316_, size_t v_i_3317_, lean_object* v_bs_3318_){
_start:
{
uint8_t v___x_3319_; 
v___x_3319_ = lean_usize_dec_lt(v_i_3317_, v_sz_3316_);
if (v___x_3319_ == 0)
{
return v_bs_3318_;
}
else
{
lean_object* v_v_3320_; lean_object* v_declName_3321_; lean_object* v___x_3322_; lean_object* v_bs_x27_3323_; size_t v___x_3324_; size_t v___x_3325_; lean_object* v___x_3326_; 
v_v_3320_ = lean_array_uget_borrowed(v_bs_3318_, v_i_3317_);
v_declName_3321_ = lean_ctor_get(v_v_3320_, 3);
lean_inc(v_declName_3321_);
v___x_3322_ = lean_unsigned_to_nat(0u);
v_bs_x27_3323_ = lean_array_uset(v_bs_3318_, v_i_3317_, v___x_3322_);
v___x_3324_ = ((size_t)1ULL);
v___x_3325_ = lean_usize_add(v_i_3317_, v___x_3324_);
v___x_3326_ = lean_array_uset(v_bs_x27_3323_, v_i_3317_, v_declName_3321_);
v_i_3317_ = v___x_3325_;
v_bs_3318_ = v___x_3326_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0___boxed(lean_object* v_sz_3328_, lean_object* v_i_3329_, lean_object* v_bs_3330_){
_start:
{
size_t v_sz_boxed_3331_; size_t v_i_boxed_3332_; lean_object* v_res_3333_; 
v_sz_boxed_3331_ = lean_unbox_usize(v_sz_3328_);
lean_dec(v_sz_3328_);
v_i_boxed_3332_ = lean_unbox_usize(v_i_3329_);
lean_dec(v_i_3329_);
v_res_3333_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_boxed_3331_, v_i_boxed_3332_, v_bs_3330_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(lean_object* v_fnNames_3334_, lean_object* v_numSectionVars_3335_, size_t v_sz_3336_, size_t v_i_3337_, lean_object* v_bs_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_){
_start:
{
uint8_t v___x_3342_; 
v___x_3342_ = lean_usize_dec_lt(v_i_3337_, v_sz_3336_);
if (v___x_3342_ == 0)
{
lean_object* v___x_3343_; 
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec(v_numSectionVars_3335_);
lean_dec_ref(v_fnNames_3334_);
v___x_3343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3343_, 0, v_bs_3338_);
return v___x_3343_;
}
else
{
lean_object* v_v_3344_; lean_object* v_ref_3345_; uint8_t v_kind_3346_; lean_object* v_levelParams_3347_; lean_object* v_modifiers_3348_; lean_object* v_declName_3349_; lean_object* v_binders_3350_; lean_object* v_numSectionVars_3351_; lean_object* v_type_3352_; lean_object* v_value_3353_; lean_object* v_termination_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3377_; 
v_v_3344_ = lean_array_uget(v_bs_3338_, v_i_3337_);
v_ref_3345_ = lean_ctor_get(v_v_3344_, 0);
v_kind_3346_ = lean_ctor_get_uint8(v_v_3344_, sizeof(void*)*9);
v_levelParams_3347_ = lean_ctor_get(v_v_3344_, 1);
v_modifiers_3348_ = lean_ctor_get(v_v_3344_, 2);
v_declName_3349_ = lean_ctor_get(v_v_3344_, 3);
v_binders_3350_ = lean_ctor_get(v_v_3344_, 4);
v_numSectionVars_3351_ = lean_ctor_get(v_v_3344_, 5);
v_type_3352_ = lean_ctor_get(v_v_3344_, 6);
v_value_3353_ = lean_ctor_get(v_v_3344_, 7);
v_termination_3354_ = lean_ctor_get(v_v_3344_, 8);
v_isSharedCheck_3377_ = !lean_is_exclusive(v_v_3344_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3356_ = v_v_3344_;
v_isShared_3357_ = v_isSharedCheck_3377_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_termination_3354_);
lean_inc(v_value_3353_);
lean_inc(v_type_3352_);
lean_inc(v_numSectionVars_3351_);
lean_inc(v_binders_3350_);
lean_inc(v_declName_3349_);
lean_inc(v_modifiers_3348_);
lean_inc(v_levelParams_3347_);
lean_inc(v_ref_3345_);
lean_dec(v_v_3344_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3377_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3358_; 
lean_inc(v___y_3340_);
lean_inc_ref(v___y_3339_);
lean_inc(v_numSectionVars_3335_);
lean_inc_ref(v_fnNames_3334_);
v___x_3358_ = l_Lean_Elab_Structural_preprocess(v_value_3353_, v_fnNames_3334_, v_numSectionVars_3335_, v___y_3339_, v___y_3340_);
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v_a_3359_; lean_object* v___x_3360_; lean_object* v_bs_x27_3361_; lean_object* v___x_3363_; 
v_a_3359_ = lean_ctor_get(v___x_3358_, 0);
lean_inc(v_a_3359_);
lean_dec_ref(v___x_3358_);
v___x_3360_ = lean_unsigned_to_nat(0u);
v_bs_x27_3361_ = lean_array_uset(v_bs_3338_, v_i_3337_, v___x_3360_);
if (v_isShared_3357_ == 0)
{
lean_ctor_set(v___x_3356_, 7, v_a_3359_);
v___x_3363_ = v___x_3356_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_ref_3345_);
lean_ctor_set(v_reuseFailAlloc_3368_, 1, v_levelParams_3347_);
lean_ctor_set(v_reuseFailAlloc_3368_, 2, v_modifiers_3348_);
lean_ctor_set(v_reuseFailAlloc_3368_, 3, v_declName_3349_);
lean_ctor_set(v_reuseFailAlloc_3368_, 4, v_binders_3350_);
lean_ctor_set(v_reuseFailAlloc_3368_, 5, v_numSectionVars_3351_);
lean_ctor_set(v_reuseFailAlloc_3368_, 6, v_type_3352_);
lean_ctor_set(v_reuseFailAlloc_3368_, 7, v_a_3359_);
lean_ctor_set(v_reuseFailAlloc_3368_, 8, v_termination_3354_);
lean_ctor_set_uint8(v_reuseFailAlloc_3368_, sizeof(void*)*9, v_kind_3346_);
v___x_3363_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
size_t v___x_3364_; size_t v___x_3365_; lean_object* v___x_3366_; 
v___x_3364_ = ((size_t)1ULL);
v___x_3365_ = lean_usize_add(v_i_3337_, v___x_3364_);
v___x_3366_ = lean_array_uset(v_bs_x27_3361_, v_i_3337_, v___x_3363_);
v_i_3337_ = v___x_3365_;
v_bs_3338_ = v___x_3366_;
goto _start;
}
}
else
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
lean_del_object(v___x_3356_);
lean_dec_ref(v_termination_3354_);
lean_dec_ref(v_type_3352_);
lean_dec(v_numSectionVars_3351_);
lean_dec(v_binders_3350_);
lean_dec(v_declName_3349_);
lean_dec_ref(v_modifiers_3348_);
lean_dec(v_levelParams_3347_);
lean_dec(v_ref_3345_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec_ref(v_bs_3338_);
lean_dec(v_numSectionVars_3335_);
lean_dec_ref(v_fnNames_3334_);
v_a_3369_ = lean_ctor_get(v___x_3358_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3358_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3358_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg___boxed(lean_object* v_fnNames_3378_, lean_object* v_numSectionVars_3379_, lean_object* v_sz_3380_, lean_object* v_i_3381_, lean_object* v_bs_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_){
_start:
{
size_t v_sz_boxed_3386_; size_t v_i_boxed_3387_; lean_object* v_res_3388_; 
v_sz_boxed_3386_ = lean_unbox_usize(v_sz_3380_);
lean_dec(v_sz_3380_);
v_i_boxed_3387_ = lean_unbox_usize(v_i_3381_);
lean_dec(v_i_3381_);
v_res_3388_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(v_fnNames_3378_, v_numSectionVars_3379_, v_sz_boxed_3386_, v_i_boxed_3387_, v_bs_3382_, v___y_3383_, v___y_3384_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1(lean_object* v_fnNames_3389_, lean_object* v_numSectionVars_3390_, size_t v_sz_3391_, size_t v_i_3392_, lean_object* v_bs_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_){
_start:
{
lean_object* v___x_3399_; 
v___x_3399_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___redArg(v_fnNames_3389_, v_numSectionVars_3390_, v_sz_3391_, v_i_3392_, v_bs_3393_, v___y_3396_, v___y_3397_);
return v___x_3399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___boxed(lean_object* v_fnNames_3400_, lean_object* v_numSectionVars_3401_, lean_object* v_sz_3402_, lean_object* v_i_3403_, lean_object* v_bs_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_){
_start:
{
size_t v_sz_boxed_3410_; size_t v_i_boxed_3411_; lean_object* v_res_3412_; 
v_sz_boxed_3410_ = lean_unbox_usize(v_sz_3402_);
lean_dec(v_sz_3402_);
v_i_boxed_3411_ = lean_unbox_usize(v_i_3403_);
lean_dec(v_i_3403_);
v_res_3412_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1(v_fnNames_3400_, v_numSectionVars_3401_, v_sz_boxed_3410_, v_i_boxed_3411_, v_bs_3404_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(lean_object* v_preDefs_3413_, lean_object* v_termMeasure_x3fs_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_){
_start:
{
lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v_numSectionVars_3423_; size_t v_sz_3424_; size_t v___x_3425_; lean_object* v_fnNames_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; 
v___x_3420_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_3421_ = lean_unsigned_to_nat(0u);
v___x_3422_ = lean_array_get_borrowed(v___x_3420_, v_preDefs_3413_, v___x_3421_);
v_numSectionVars_3423_ = lean_ctor_get(v___x_3422_, 5);
v_sz_3424_ = lean_array_size(v_preDefs_3413_);
v___x_3425_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_3413_);
v_fnNames_3426_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_3424_, v___x_3425_, v_preDefs_3413_);
v___x_3427_ = lean_box_usize(v_sz_3424_);
v___x_3428_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed__const__1));
lean_inc_ref(v_preDefs_3413_);
lean_inc(v_numSectionVars_3423_);
lean_inc_ref(v_fnNames_3426_);
v___x_3429_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__1___boxed), 10, 5);
lean_closure_set(v___x_3429_, 0, v_fnNames_3426_);
lean_closure_set(v___x_3429_, 1, v_numSectionVars_3423_);
lean_closure_set(v___x_3429_, 2, v___x_3427_);
lean_closure_set(v___x_3429_, 3, v___x_3428_);
lean_closure_set(v___x_3429_, 4, v_preDefs_3413_);
lean_inc(v_a_3418_);
lean_inc_ref(v_a_3417_);
lean_inc(v_a_3416_);
lean_inc_ref(v_a_3415_);
v___x_3430_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v_preDefs_3413_, v___x_3429_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_a_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v_a_3431_ = lean_ctor_get(v___x_3430_, 0);
lean_inc(v_a_3431_);
lean_dec_ref(v___x_3430_);
lean_inc(v_a_3431_);
v___x_3432_ = lean_alloc_closure((void*)(l_Lean_Elab_getFixedParamPerms___boxed), 6, 1);
lean_closure_set(v___x_3432_, 0, v_a_3431_);
lean_inc(v_a_3418_);
lean_inc_ref(v_a_3417_);
lean_inc(v_a_3416_);
lean_inc_ref(v_a_3415_);
lean_inc(v_a_3431_);
v___x_3433_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg(v_a_3431_, v___x_3432_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_object* v_a_3434_; lean_object* v_perms_3435_; lean_object* v___x_3436_; lean_object* v_type_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___f_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
v_a_3434_ = lean_ctor_get(v___x_3433_, 0);
lean_inc(v_a_3434_);
lean_dec_ref(v___x_3433_);
v_perms_3435_ = lean_ctor_get(v_a_3434_, 1);
lean_inc_ref(v_perms_3435_);
v___x_3436_ = lean_array_get_borrowed(v___x_3420_, v_a_3431_, v___x_3421_);
v_type_3437_ = lean_ctor_get(v___x_3436_, 6);
lean_inc_ref(v_type_3437_);
v___x_3438_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__12___redArg___closed__0);
v___x_3439_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_withRecFunsAsAxioms___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__7___redArg___boxed__const__1));
lean_inc_ref(v_perms_3435_);
v___f_3440_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___lam__2___boxed), 13, 7);
lean_closure_set(v___f_3440_, 0, v_a_3431_);
lean_closure_set(v___f_3440_, 1, v_perms_3435_);
lean_closure_set(v___f_3440_, 2, v___x_3421_);
lean_closure_set(v___f_3440_, 3, v_fnNames_3426_);
lean_closure_set(v___f_3440_, 4, v_a_3434_);
lean_closure_set(v___f_3440_, 5, v_termMeasure_x3fs_3414_);
lean_closure_set(v___f_3440_, 6, v___x_3439_);
v___x_3441_ = lean_array_get(v___x_3438_, v_perms_3435_, v___x_3421_);
lean_dec_ref(v_perms_3435_);
v___x_3442_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__13___redArg(v___x_3441_, v_type_3437_, v___f_3440_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_);
return v___x_3442_;
}
else
{
lean_object* v_a_3443_; lean_object* v___x_3445_; uint8_t v_isShared_3446_; uint8_t v_isSharedCheck_3450_; 
lean_dec(v_a_3431_);
lean_dec_ref(v_fnNames_3426_);
lean_dec(v_a_3418_);
lean_dec_ref(v_a_3417_);
lean_dec(v_a_3416_);
lean_dec_ref(v_a_3415_);
lean_dec_ref(v_termMeasure_x3fs_3414_);
v_a_3443_ = lean_ctor_get(v___x_3433_, 0);
v_isSharedCheck_3450_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3445_ = v___x_3433_;
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
else
{
lean_inc(v_a_3443_);
lean_dec(v___x_3433_);
v___x_3445_ = lean_box(0);
v_isShared_3446_ = v_isSharedCheck_3450_;
goto v_resetjp_3444_;
}
v_resetjp_3444_:
{
lean_object* v___x_3448_; 
if (v_isShared_3446_ == 0)
{
v___x_3448_ = v___x_3445_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_a_3443_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
}
else
{
lean_object* v_a_3451_; lean_object* v___x_3453_; uint8_t v_isShared_3454_; uint8_t v_isSharedCheck_3458_; 
lean_dec_ref(v_fnNames_3426_);
lean_dec(v_a_3418_);
lean_dec_ref(v_a_3417_);
lean_dec(v_a_3416_);
lean_dec_ref(v_a_3415_);
lean_dec_ref(v_termMeasure_x3fs_3414_);
v_a_3451_ = lean_ctor_get(v___x_3430_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3458_ == 0)
{
v___x_3453_ = v___x_3430_;
v_isShared_3454_ = v_isSharedCheck_3458_;
goto v_resetjp_3452_;
}
else
{
lean_inc(v_a_3451_);
lean_dec(v___x_3430_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos___boxed(lean_object* v_preDefs_3459_, lean_object* v_termMeasure_x3fs_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(v_preDefs_3459_, v_termMeasure_x3fs_3460_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4(lean_object* v_fst_3467_, lean_object* v_as_3468_, lean_object* v_i_3469_, lean_object* v_j_3470_, lean_object* v_inv_3471_, lean_object* v_bs_3472_){
_start:
{
lean_object* v___x_3473_; 
v___x_3473_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___redArg(v_fst_3467_, v_as_3468_, v_i_3469_, v_j_3470_, v_bs_3472_);
return v___x_3473_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4___boxed(lean_object* v_fst_3474_, lean_object* v_as_3475_, lean_object* v_i_3476_, lean_object* v_j_3477_, lean_object* v_inv_3478_, lean_object* v_bs_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__4(v_fst_3474_, v_as_3475_, v_i_3476_, v_j_3477_, v_inv_3478_, v_bs_3479_);
lean_dec_ref(v_as_3475_);
lean_dec_ref(v_fst_3474_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10(lean_object* v_00_u03b1_3481_, lean_object* v_lctx_3482_, lean_object* v_localInsts_3483_, lean_object* v_x_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_){
_start:
{
lean_object* v___x_3490_; 
v___x_3490_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___redArg(v_lctx_3482_, v_localInsts_3483_, v_x_3484_, v___y_3485_, v___y_3486_, v___y_3487_, v___y_3488_);
return v___x_3490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10___boxed(lean_object* v_00_u03b1_3491_, lean_object* v_lctx_3492_, lean_object* v_localInsts_3493_, lean_object* v_x_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_){
_start:
{
lean_object* v_res_3500_; 
v_res_3500_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9_spec__10(v_00_u03b1_3491_, v_lctx_3492_, v_localInsts_3493_, v_x_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_);
return v_res_3500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9(lean_object* v_00_u03b1_3501_, lean_object* v_fvarIds_3502_, lean_object* v_k_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_){
_start:
{
lean_object* v___x_3509_; 
v___x_3509_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___redArg(v_fvarIds_3502_, v_k_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_);
return v___x_3509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9___boxed(lean_object* v_00_u03b1_3510_, lean_object* v_fvarIds_3511_, lean_object* v_k_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l_Lean_Meta_withErasedFVars___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__9(v_00_u03b1_3510_, v_fvarIds_3511_, v_k_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_);
lean_dec_ref(v_fvarIds_3511_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Array_repr___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__10_spec__15(lean_object* v_a_3519_){
_start:
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_nat_to_int(v_a_3519_);
return v___x_3520_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12(lean_object* v___x_3521_, lean_object* v_xs_3522_, lean_object* v_as_3523_, lean_object* v_i_3524_, lean_object* v_j_3525_, lean_object* v_inv_3526_, lean_object* v_bs_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_){
_start:
{
lean_object* v___x_3533_; 
v___x_3533_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___redArg(v___x_3521_, v_xs_3522_, v_as_3523_, v_i_3524_, v_j_3525_, v_bs_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_);
return v___x_3533_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12___boxed(lean_object* v___x_3534_, lean_object* v_xs_3535_, lean_object* v_as_3536_, lean_object* v_i_3537_, lean_object* v_j_3538_, lean_object* v_inv_3539_, lean_object* v_bs_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_){
_start:
{
lean_object* v_res_3546_; 
v_res_3546_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__12(v___x_3534_, v_xs_3535_, v_as_3536_, v_i_3537_, v_j_3538_, v_inv_3539_, v_bs_3540_, v___y_3541_, v___y_3542_, v___y_3543_, v___y_3544_);
lean_dec_ref(v_as_3536_);
lean_dec_ref(v___x_3534_);
return v_res_3546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__0(lean_object* v___x_3547_, lean_object* v_recArgPos_3548_, lean_object* v_xs_3549_, lean_object* v_x_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_){
_start:
{
lean_object* v___x_3556_; uint8_t v___x_3557_; uint8_t v___x_3558_; uint8_t v___x_3559_; lean_object* v___x_3560_; 
v___x_3556_ = lean_array_get_borrowed(v___x_3547_, v_xs_3549_, v_recArgPos_3548_);
v___x_3557_ = 0;
v___x_3558_ = 1;
v___x_3559_ = 1;
lean_inc(v___x_3556_);
v___x_3560_ = l_Lean_Meta_mkLambdaFVars(v_xs_3549_, v___x_3556_, v___x_3557_, v___x_3558_, v___x_3557_, v___x_3558_, v___x_3559_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_);
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__0___boxed(lean_object* v___x_3561_, lean_object* v_recArgPos_3562_, lean_object* v_xs_3563_, lean_object* v_x_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_){
_start:
{
lean_object* v_res_3570_; 
v_res_3570_ = l_Lean_Elab_Structural_reportTermMeasure___lam__0(v___x_3561_, v_recArgPos_3562_, v_xs_3563_, v_x_3564_, v___y_3565_, v___y_3566_, v___y_3567_, v___y_3568_);
lean_dec(v___y_3568_);
lean_dec_ref(v___y_3567_);
lean_dec(v___y_3566_);
lean_dec_ref(v___y_3565_);
lean_dec_ref(v_x_3564_);
lean_dec_ref(v_xs_3563_);
lean_dec(v_recArgPos_3562_);
return v_res_3570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__1(lean_object* v_xs_3571_, lean_object* v_x_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_){
_start:
{
lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3578_ = lean_array_get_size(v_xs_3571_);
v___x_3579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3579_, 0, v___x_3578_);
return v___x_3579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___lam__1___boxed(lean_object* v_xs_3580_, lean_object* v_x_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_){
_start:
{
lean_object* v_res_3587_; 
v_res_3587_ = l_Lean_Elab_Structural_reportTermMeasure___lam__1(v_xs_3580_, v_x_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_);
lean_dec(v___y_3585_);
lean_dec_ref(v___y_3584_);
lean_dec(v___y_3583_);
lean_dec_ref(v___y_3582_);
lean_dec_ref(v_x_3581_);
lean_dec_ref(v_xs_3580_);
return v_res_3587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure(lean_object* v_preDef_3599_, lean_object* v_recArgPos_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_){
_start:
{
lean_object* v_termination_3606_; lean_object* v_terminationBy_x3f_x3f_3607_; 
v_termination_3606_ = lean_ctor_get(v_preDef_3599_, 8);
lean_inc_ref(v_termination_3606_);
v_terminationBy_x3f_x3f_3607_ = lean_ctor_get(v_termination_3606_, 1);
lean_inc(v_terminationBy_x3f_x3f_3607_);
if (lean_obj_tag(v_terminationBy_x3f_x3f_3607_) == 1)
{
lean_object* v_value_3608_; lean_object* v_extraParams_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3660_; 
v_value_3608_ = lean_ctor_get(v_preDef_3599_, 7);
lean_inc_ref(v_value_3608_);
lean_dec_ref(v_preDef_3599_);
v_extraParams_3609_ = lean_ctor_get(v_termination_3606_, 5);
v_isSharedCheck_3660_ = !lean_is_exclusive(v_termination_3606_);
if (v_isSharedCheck_3660_ == 0)
{
lean_object* v_unused_3661_; lean_object* v_unused_3662_; lean_object* v_unused_3663_; lean_object* v_unused_3664_; lean_object* v_unused_3665_; 
v_unused_3661_ = lean_ctor_get(v_termination_3606_, 4);
lean_dec(v_unused_3661_);
v_unused_3662_ = lean_ctor_get(v_termination_3606_, 3);
lean_dec(v_unused_3662_);
v_unused_3663_ = lean_ctor_get(v_termination_3606_, 2);
lean_dec(v_unused_3663_);
v_unused_3664_ = lean_ctor_get(v_termination_3606_, 1);
lean_dec(v_unused_3664_);
v_unused_3665_ = lean_ctor_get(v_termination_3606_, 0);
lean_dec(v_unused_3665_);
v___x_3611_ = v_termination_3606_;
v_isShared_3612_ = v_isSharedCheck_3660_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_extraParams_3609_);
lean_dec(v_termination_3606_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3660_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v_val_3613_; lean_object* v___x_3614_; lean_object* v___f_3615_; uint8_t v___x_3616_; lean_object* v___x_3617_; 
v_val_3613_ = lean_ctor_get(v_terminationBy_x3f_x3f_3607_, 0);
lean_inc(v_val_3613_);
lean_dec_ref(v_terminationBy_x3f_x3f_3607_);
v___x_3614_ = l_Lean_instInhabitedExpr;
v___f_3615_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_reportTermMeasure___lam__0___boxed), 9, 2);
lean_closure_set(v___f_3615_, 0, v___x_3614_);
lean_closure_set(v___f_3615_, 1, v_recArgPos_3600_);
v___x_3616_ = 0;
lean_inc(v_a_3604_);
lean_inc_ref(v_a_3603_);
lean_inc(v_a_3602_);
lean_inc_ref(v_a_3601_);
lean_inc_ref(v_value_3608_);
v___x_3617_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_value_3608_, v___f_3615_, v___x_3616_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
if (lean_obj_tag(v___x_3617_) == 0)
{
lean_object* v_a_3618_; lean_object* v___f_3619_; lean_object* v___x_3620_; 
v_a_3618_ = lean_ctor_get(v___x_3617_, 0);
lean_inc(v_a_3618_);
lean_dec_ref(v___x_3617_);
v___f_3619_ = ((lean_object*)(l_Lean_Elab_Structural_reportTermMeasure___closed__0));
lean_inc(v_a_3604_);
lean_inc_ref(v_a_3603_);
lean_inc(v_a_3602_);
lean_inc_ref(v_a_3601_);
v___x_3620_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_elimMutualRecursion_spec__1___redArg(v_value_3608_, v___f_3619_, v___x_3616_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v_a_3621_; lean_object* v___x_3622_; uint8_t v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; 
v_a_3621_ = lean_ctor_get(v___x_3620_, 0);
lean_inc(v_a_3621_);
lean_dec_ref(v___x_3620_);
v___x_3622_ = lean_box(0);
v___x_3623_ = 1;
v___x_3624_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3624_, 0, v___x_3622_);
lean_ctor_set(v___x_3624_, 1, v_a_3618_);
lean_ctor_set_uint8(v___x_3624_, sizeof(void*)*2, v___x_3623_);
lean_inc(v_a_3604_);
lean_inc_ref(v_a_3603_);
v___x_3625_ = l_Lean_Elab_TerminationMeasure_delab(v_a_3621_, v_extraParams_3609_, v___x_3624_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
lean_dec(v_a_3621_);
if (lean_obj_tag(v___x_3625_) == 0)
{
lean_object* v_a_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3631_; 
v_a_3626_ = lean_ctor_get(v___x_3625_, 0);
lean_inc(v_a_3626_);
lean_dec_ref(v___x_3625_);
v___x_3627_ = ((lean_object*)(l_Lean_Elab_Structural_reportTermMeasure___closed__5));
v___x_3628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3627_);
lean_ctor_set(v___x_3628_, 1, v_a_3626_);
v___x_3629_ = lean_box(0);
if (v_isShared_3612_ == 0)
{
lean_ctor_set(v___x_3611_, 5, v___x_3629_);
lean_ctor_set(v___x_3611_, 4, v___x_3629_);
lean_ctor_set(v___x_3611_, 3, v___x_3629_);
lean_ctor_set(v___x_3611_, 2, v___x_3629_);
lean_ctor_set(v___x_3611_, 1, v___x_3629_);
lean_ctor_set(v___x_3611_, 0, v___x_3628_);
v___x_3631_ = v___x_3611_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v___x_3628_);
lean_ctor_set(v_reuseFailAlloc_3635_, 1, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3635_, 2, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3635_, 3, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3635_, 4, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3635_, 5, v___x_3629_);
v___x_3631_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
lean_object* v___x_3632_; uint8_t v___x_3633_; lean_object* v___x_3634_; 
v___x_3632_ = ((lean_object*)(l_Lean_Elab_Structural_reportTermMeasure___closed__6));
v___x_3633_ = 4;
v___x_3634_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_val_3613_, v___x_3631_, v___x_3629_, v___x_3632_, v___x_3629_, v___x_3633_, v_a_3603_, v_a_3604_);
return v___x_3634_;
}
}
else
{
lean_object* v_a_3636_; lean_object* v___x_3638_; uint8_t v_isShared_3639_; uint8_t v_isSharedCheck_3643_; 
lean_dec(v_val_3613_);
lean_del_object(v___x_3611_);
lean_dec(v_a_3604_);
lean_dec_ref(v_a_3603_);
v_a_3636_ = lean_ctor_get(v___x_3625_, 0);
v_isSharedCheck_3643_ = !lean_is_exclusive(v___x_3625_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3638_ = v___x_3625_;
v_isShared_3639_ = v_isSharedCheck_3643_;
goto v_resetjp_3637_;
}
else
{
lean_inc(v_a_3636_);
lean_dec(v___x_3625_);
v___x_3638_ = lean_box(0);
v_isShared_3639_ = v_isSharedCheck_3643_;
goto v_resetjp_3637_;
}
v_resetjp_3637_:
{
lean_object* v___x_3641_; 
if (v_isShared_3639_ == 0)
{
v___x_3641_ = v___x_3638_;
goto v_reusejp_3640_;
}
else
{
lean_object* v_reuseFailAlloc_3642_; 
v_reuseFailAlloc_3642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3642_, 0, v_a_3636_);
v___x_3641_ = v_reuseFailAlloc_3642_;
goto v_reusejp_3640_;
}
v_reusejp_3640_:
{
return v___x_3641_;
}
}
}
}
else
{
lean_object* v_a_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3651_; 
lean_dec(v_a_3618_);
lean_dec(v_val_3613_);
lean_del_object(v___x_3611_);
lean_dec(v_extraParams_3609_);
lean_dec(v_a_3604_);
lean_dec_ref(v_a_3603_);
lean_dec(v_a_3602_);
lean_dec_ref(v_a_3601_);
v_a_3644_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3646_ = v___x_3620_;
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_a_3644_);
lean_dec(v___x_3620_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3651_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
lean_object* v___x_3649_; 
if (v_isShared_3647_ == 0)
{
v___x_3649_ = v___x_3646_;
goto v_reusejp_3648_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v_a_3644_);
v___x_3649_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3648_;
}
v_reusejp_3648_:
{
return v___x_3649_;
}
}
}
}
else
{
lean_object* v_a_3652_; lean_object* v___x_3654_; uint8_t v_isShared_3655_; uint8_t v_isSharedCheck_3659_; 
lean_dec(v_val_3613_);
lean_del_object(v___x_3611_);
lean_dec(v_extraParams_3609_);
lean_dec_ref(v_value_3608_);
lean_dec(v_a_3604_);
lean_dec_ref(v_a_3603_);
lean_dec(v_a_3602_);
lean_dec_ref(v_a_3601_);
v_a_3652_ = lean_ctor_get(v___x_3617_, 0);
v_isSharedCheck_3659_ = !lean_is_exclusive(v___x_3617_);
if (v_isSharedCheck_3659_ == 0)
{
v___x_3654_ = v___x_3617_;
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
else
{
lean_inc(v_a_3652_);
lean_dec(v___x_3617_);
v___x_3654_ = lean_box(0);
v_isShared_3655_ = v_isSharedCheck_3659_;
goto v_resetjp_3653_;
}
v_resetjp_3653_:
{
lean_object* v___x_3657_; 
if (v_isShared_3655_ == 0)
{
v___x_3657_ = v___x_3654_;
goto v_reusejp_3656_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v_a_3652_);
v___x_3657_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3656_;
}
v_reusejp_3656_:
{
return v___x_3657_;
}
}
}
}
}
else
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
lean_dec(v_terminationBy_x3f_x3f_3607_);
lean_dec_ref(v_termination_3606_);
lean_dec(v_a_3604_);
lean_dec_ref(v_a_3603_);
lean_dec(v_a_3602_);
lean_dec_ref(v_a_3601_);
lean_dec(v_recArgPos_3600_);
lean_dec_ref(v_preDef_3599_);
v___x_3666_ = lean_box(0);
v___x_3667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3666_);
return v___x_3667_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_reportTermMeasure___boxed(lean_object* v_preDef_3668_, lean_object* v_recArgPos_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l_Lean_Elab_Structural_reportTermMeasure(v_preDef_3668_, v_recArgPos_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(lean_object* v_as_3676_, size_t v_sz_3677_, size_t v_i_3678_, lean_object* v_b_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_){
_start:
{
uint8_t v___x_3685_; 
v___x_3685_ = lean_usize_dec_lt(v_i_3678_, v_sz_3677_);
if (v___x_3685_ == 0)
{
lean_object* v___x_3686_; 
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
v___x_3686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3686_, 0, v_b_3679_);
return v___x_3686_;
}
else
{
lean_object* v_a_3687_; lean_object* v_declName_3688_; lean_object* v___x_3689_; 
v_a_3687_ = lean_array_uget_borrowed(v_as_3676_, v_i_3678_);
v_declName_3688_ = lean_ctor_get(v_a_3687_, 3);
lean_inc_ref(v___y_3682_);
lean_inc(v_declName_3688_);
v___x_3689_ = l_Lean_enableRealizationsForConst(v_declName_3688_, v___y_3682_, v___y_3683_);
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v___x_3690_; 
lean_dec_ref(v___x_3689_);
lean_inc(v___y_3683_);
lean_inc_ref(v___y_3682_);
lean_inc(v___y_3681_);
lean_inc_ref(v___y_3680_);
lean_inc(v_declName_3688_);
v___x_3690_ = l_Lean_Meta_generateEagerEqns(v_declName_3688_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_);
if (lean_obj_tag(v___x_3690_) == 0)
{
lean_object* v___x_3691_; size_t v___x_3692_; size_t v___x_3693_; 
lean_dec_ref(v___x_3690_);
v___x_3691_ = lean_box(0);
v___x_3692_ = ((size_t)1ULL);
v___x_3693_ = lean_usize_add(v_i_3678_, v___x_3692_);
v_i_3678_ = v___x_3693_;
v_b_3679_ = v___x_3691_;
goto _start;
}
else
{
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
return v___x_3690_;
}
}
else
{
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
return v___x_3689_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg___boxed(lean_object* v_as_3695_, lean_object* v_sz_3696_, lean_object* v_i_3697_, lean_object* v_b_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_){
_start:
{
size_t v_sz_boxed_3704_; size_t v_i_boxed_3705_; lean_object* v_res_3706_; 
v_sz_boxed_3704_ = lean_unbox_usize(v_sz_3696_);
lean_dec(v_sz_3696_);
v_i_boxed_3705_ = lean_unbox_usize(v_i_3697_);
lean_dec(v_i_3697_);
v_res_3706_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(v_as_3695_, v_sz_boxed_3704_, v_i_boxed_3705_, v_b_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_);
lean_dec_ref(v_as_3695_);
return v_res_3706_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__0(lean_object* v___x_3707_, lean_object* v_e_3708_){
_start:
{
lean_object* v___x_3709_; lean_object* v___x_3710_; 
v___x_3709_ = l_Lean_indentD(v_e_3708_);
v___x_3710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3710_, 0, v___x_3707_);
lean_ctor_set(v___x_3710_, 1, v___x_3709_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__1(lean_object* v_docCtx_3711_, lean_object* v_a_3712_, uint8_t v___x_3713_, lean_object* v___x_3714_, uint8_t v___x_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
lean_object* v___x_3723_; 
v___x_3723_ = l_Lean_Elab_addNonRec(v_docCtx_3711_, v_a_3712_, v___x_3713_, v___x_3714_, v___x_3715_, v___x_3713_, v___x_3715_, v___y_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_, v___y_3721_);
return v___x_3723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__1___boxed(lean_object* v_docCtx_3724_, lean_object* v_a_3725_, lean_object* v___x_3726_, lean_object* v___x_3727_, lean_object* v___x_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_){
_start:
{
uint8_t v___x_8755__boxed_3736_; uint8_t v___x_8757__boxed_3737_; lean_object* v_res_3738_; 
v___x_8755__boxed_3736_ = lean_unbox(v___x_3726_);
v___x_8757__boxed_3737_ = lean_unbox(v___x_3728_);
v_res_3738_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__1(v_docCtx_3724_, v_a_3725_, v___x_8755__boxed_3736_, v___x_3727_, v___x_8757__boxed_3737_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_, v___y_3733_, v___y_3734_);
return v_res_3738_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__1(void){
_start:
{
lean_object* v___x_3740_; lean_object* v___x_3741_; 
v___x_3740_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__0));
v___x_3741_ = l_Lean_stringToMessageData(v___x_3740_);
return v___x_3741_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__2(void){
_start:
{
lean_object* v___x_3742_; lean_object* v___f_3743_; 
v___x_3742_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__1);
v___f_3743_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__0), 2, 1);
lean_closure_set(v___f_3743_, 0, v___x_3742_);
return v___f_3743_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4(lean_object* v_names_3744_, lean_object* v_docCtx_3745_, lean_object* v_as_3746_, size_t v_i_3747_, size_t v_stop_3748_, lean_object* v_b_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_){
_start:
{
uint8_t v___x_3757_; 
v___x_3757_ = lean_usize_dec_eq(v_i_3747_, v_stop_3748_);
if (v___x_3757_ == 0)
{
lean_object* v___x_3758_; lean_object* v___x_3759_; 
v___x_3758_ = lean_array_uget_borrowed(v_as_3746_, v_i_3747_);
lean_inc(v___y_3755_);
lean_inc_ref(v___y_3754_);
lean_inc(v___x_3758_);
v___x_3759_ = l_Lean_Elab_eraseRecAppSyntax(v___x_3758_, v___y_3754_, v___y_3755_);
if (lean_obj_tag(v___x_3759_) == 0)
{
lean_object* v_a_3760_; lean_object* v___f_3761_; lean_object* v___x_3762_; uint8_t v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___f_3766_; lean_object* v___x_3767_; 
v_a_3760_ = lean_ctor_get(v___x_3759_, 0);
lean_inc(v_a_3760_);
lean_dec_ref(v___x_3759_);
v___f_3761_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___closed__2);
lean_inc_ref(v_names_3744_);
v___x_3762_ = lean_array_to_list(v_names_3744_);
v___x_3763_ = 1;
v___x_3764_ = lean_box(v___x_3757_);
v___x_3765_ = lean_box(v___x_3763_);
lean_inc(v___y_3751_);
lean_inc_ref(v___y_3750_);
lean_inc_ref(v_docCtx_3745_);
v___f_3766_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___lam__1___boxed), 12, 7);
lean_closure_set(v___f_3766_, 0, v_docCtx_3745_);
lean_closure_set(v___f_3766_, 1, v_a_3760_);
lean_closure_set(v___f_3766_, 2, v___x_3764_);
lean_closure_set(v___f_3766_, 3, v___x_3762_);
lean_closure_set(v___f_3766_, 4, v___x_3765_);
lean_closure_set(v___f_3766_, 5, v___y_3750_);
lean_closure_set(v___f_3766_, 6, v___y_3751_);
lean_inc(v___y_3755_);
lean_inc_ref(v___y_3754_);
lean_inc(v___y_3753_);
lean_inc_ref(v___y_3752_);
v___x_3767_ = l_Lean_Meta_mapErrorImp___redArg(v___f_3766_, v___f_3761_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_);
if (lean_obj_tag(v___x_3767_) == 0)
{
if (lean_obj_tag(v___x_3767_) == 0)
{
lean_object* v_a_3768_; size_t v___x_3769_; size_t v___x_3770_; 
v_a_3768_ = lean_ctor_get(v___x_3767_, 0);
lean_inc(v_a_3768_);
lean_dec_ref(v___x_3767_);
v___x_3769_ = ((size_t)1ULL);
v___x_3770_ = lean_usize_add(v_i_3747_, v___x_3769_);
v_i_3747_ = v___x_3770_;
v_b_3749_ = v_a_3768_;
goto _start;
}
else
{
lean_dec(v___y_3755_);
lean_dec_ref(v___y_3754_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
lean_dec_ref(v_docCtx_3745_);
lean_dec_ref(v_names_3744_);
return v___x_3767_;
}
}
else
{
lean_object* v_a_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3779_; 
lean_dec(v___y_3755_);
lean_dec_ref(v___y_3754_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
lean_dec_ref(v_docCtx_3745_);
lean_dec_ref(v_names_3744_);
v_a_3772_ = lean_ctor_get(v___x_3767_, 0);
v_isSharedCheck_3779_ = !lean_is_exclusive(v___x_3767_);
if (v_isSharedCheck_3779_ == 0)
{
v___x_3774_ = v___x_3767_;
v_isShared_3775_ = v_isSharedCheck_3779_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_a_3772_);
lean_dec(v___x_3767_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3779_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v___x_3777_; 
if (v_isShared_3775_ == 0)
{
v___x_3777_ = v___x_3774_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v_a_3772_);
v___x_3777_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
return v___x_3777_;
}
}
}
}
else
{
lean_object* v_a_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3787_; 
lean_dec(v___y_3755_);
lean_dec_ref(v___y_3754_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
lean_dec_ref(v_docCtx_3745_);
lean_dec_ref(v_names_3744_);
v_a_3780_ = lean_ctor_get(v___x_3759_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3759_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3782_ = v___x_3759_;
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_a_3780_);
lean_dec(v___x_3759_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v___x_3785_; 
if (v_isShared_3783_ == 0)
{
v___x_3785_ = v___x_3782_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_a_3780_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
}
else
{
lean_object* v___x_3788_; 
lean_dec(v___y_3755_);
lean_dec_ref(v___y_3754_);
lean_dec(v___y_3753_);
lean_dec_ref(v___y_3752_);
lean_dec(v___y_3751_);
lean_dec_ref(v___y_3750_);
lean_dec_ref(v_docCtx_3745_);
lean_dec_ref(v_names_3744_);
v___x_3788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3788_, 0, v_b_3749_);
return v___x_3788_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4___boxed(lean_object* v_names_3789_, lean_object* v_docCtx_3790_, lean_object* v_as_3791_, lean_object* v_i_3792_, lean_object* v_stop_3793_, lean_object* v_b_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_){
_start:
{
size_t v_i_boxed_3802_; size_t v_stop_boxed_3803_; lean_object* v_res_3804_; 
v_i_boxed_3802_ = lean_unbox_usize(v_i_3792_);
lean_dec(v_i_3792_);
v_stop_boxed_3803_ = lean_unbox_usize(v_stop_3793_);
lean_dec(v_stop_3793_);
v_res_3804_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4(v_names_3789_, v_docCtx_3790_, v_as_3791_, v_i_boxed_3802_, v_stop_boxed_3803_, v_b_3794_, v___y_3795_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_);
lean_dec_ref(v_as_3791_);
return v_res_3804_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(lean_object* v_docCtx_3805_, lean_object* v_a_3806_, lean_object* v_snd_3807_, lean_object* v_as_3808_, size_t v_sz_3809_, size_t v_i_3810_, lean_object* v_b_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_){
_start:
{
uint8_t v___x_3819_; 
v___x_3819_ = lean_usize_dec_lt(v_i_3810_, v_sz_3809_);
if (v___x_3819_ == 0)
{
lean_object* v___x_3820_; 
lean_dec(v___y_3817_);
lean_dec_ref(v___y_3816_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
lean_dec_ref(v_snd_3807_);
lean_dec_ref(v_a_3806_);
lean_dec_ref(v_docCtx_3805_);
v___x_3820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3820_, 0, v_b_3811_);
return v___x_3820_;
}
else
{
lean_object* v_array_3821_; lean_object* v_start_3822_; lean_object* v_stop_3823_; uint8_t v___x_3824_; 
v_array_3821_ = lean_ctor_get(v_b_3811_, 0);
v_start_3822_ = lean_ctor_get(v_b_3811_, 1);
v_stop_3823_ = lean_ctor_get(v_b_3811_, 2);
v___x_3824_ = lean_nat_dec_lt(v_start_3822_, v_stop_3823_);
if (v___x_3824_ == 0)
{
lean_object* v___x_3825_; 
lean_dec(v___y_3817_);
lean_dec_ref(v___y_3816_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
lean_dec_ref(v_snd_3807_);
lean_dec_ref(v_a_3806_);
lean_dec_ref(v_docCtx_3805_);
v___x_3825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3825_, 0, v_b_3811_);
return v___x_3825_;
}
else
{
lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3892_; 
lean_inc(v_stop_3823_);
lean_inc(v_start_3822_);
lean_inc_ref(v_array_3821_);
v_isSharedCheck_3892_ = !lean_is_exclusive(v_b_3811_);
if (v_isSharedCheck_3892_ == 0)
{
lean_object* v_unused_3893_; lean_object* v_unused_3894_; lean_object* v_unused_3895_; 
v_unused_3893_ = lean_ctor_get(v_b_3811_, 2);
lean_dec(v_unused_3893_);
v_unused_3894_ = lean_ctor_get(v_b_3811_, 1);
lean_dec(v_unused_3894_);
v_unused_3895_ = lean_ctor_get(v_b_3811_, 0);
lean_dec(v_unused_3895_);
v___x_3827_ = v_b_3811_;
v_isShared_3828_ = v_isSharedCheck_3892_;
goto v_resetjp_3826_;
}
else
{
lean_dec(v_b_3811_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3892_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v_a_3829_; uint8_t v_kind_3830_; lean_object* v_type_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3836_; 
v_a_3829_ = lean_array_uget_borrowed(v_as_3808_, v_i_3810_);
v_kind_3830_ = lean_ctor_get_uint8(v_a_3829_, sizeof(void*)*9);
v_type_3831_ = lean_ctor_get(v_a_3829_, 6);
v___x_3832_ = lean_array_fget(v_array_3821_, v_start_3822_);
v___x_3833_ = lean_unsigned_to_nat(1u);
v___x_3834_ = lean_nat_add(v_start_3822_, v___x_3833_);
lean_dec(v_start_3822_);
if (v_isShared_3828_ == 0)
{
lean_ctor_set(v___x_3827_, 1, v___x_3834_);
v___x_3836_ = v___x_3827_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v_array_3821_);
lean_ctor_set(v_reuseFailAlloc_3891_, 1, v___x_3834_);
lean_ctor_set(v_reuseFailAlloc_3891_, 2, v_stop_3823_);
v___x_3836_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
lean_object* v_preDef_3838_; lean_object* v___y_3839_; lean_object* v___y_3840_; lean_object* v___y_3841_; lean_object* v___y_3842_; lean_object* v___y_3843_; lean_object* v___y_3844_; uint8_t v___x_3857_; 
v___x_3857_ = l_Lean_Elab_DefKind_isTheorem(v_kind_3830_);
if (v___x_3857_ == 0)
{
lean_object* v___x_3858_; 
lean_inc(v___y_3817_);
lean_inc_ref(v___y_3816_);
lean_inc(v___y_3815_);
lean_inc_ref(v___y_3814_);
lean_inc_ref(v_type_3831_);
v___x_3858_ = l_Lean_Meta_isProp(v_type_3831_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_);
if (lean_obj_tag(v___x_3858_) == 0)
{
lean_object* v_a_3859_; uint8_t v___x_3860_; 
v_a_3859_ = lean_ctor_get(v___x_3858_, 0);
lean_inc(v_a_3859_);
lean_dec_ref(v___x_3858_);
v___x_3860_ = lean_unbox(v_a_3859_);
lean_dec(v_a_3859_);
if (v___x_3860_ == 0)
{
lean_object* v___x_3861_; 
lean_inc(v___y_3817_);
lean_inc_ref(v___y_3816_);
lean_inc(v___y_3815_);
lean_inc_ref(v___y_3814_);
lean_inc(v_a_3829_);
v___x_3861_ = l_Lean_Elab_abstractNestedProofs(v_a_3829_, v___x_3824_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_);
if (lean_obj_tag(v___x_3861_) == 0)
{
lean_object* v_a_3862_; size_t v_sz_3863_; size_t v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; 
v_a_3862_ = lean_ctor_get(v___x_3861_, 0);
lean_inc(v_a_3862_);
lean_dec_ref(v___x_3861_);
v_sz_3863_ = lean_array_size(v_a_3806_);
v___x_3864_ = ((size_t)0ULL);
lean_inc_ref(v_a_3806_);
v___x_3865_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_3863_, v___x_3864_, v_a_3806_);
lean_inc_ref(v_snd_3807_);
lean_inc(v___x_3832_);
lean_inc(v_a_3862_);
v___x_3866_ = l_Lean_Elab_Structural_registerEqnsInfo(v_a_3862_, v___x_3865_, v___x_3832_, v_snd_3807_, v___y_3816_, v___y_3817_);
if (lean_obj_tag(v___x_3866_) == 0)
{
lean_dec_ref(v___x_3866_);
lean_inc(v___y_3817_);
lean_inc_ref(v___y_3816_);
lean_inc(v___y_3815_);
lean_inc_ref(v___y_3814_);
lean_inc(v___y_3813_);
lean_inc_ref(v___y_3812_);
v_preDef_3838_ = v_a_3862_;
v___y_3839_ = v___y_3812_;
v___y_3840_ = v___y_3813_;
v___y_3841_ = v___y_3814_;
v___y_3842_ = v___y_3815_;
v___y_3843_ = v___y_3816_;
v___y_3844_ = v___y_3817_;
goto v___jp_3837_;
}
else
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3874_; 
lean_dec(v_a_3862_);
lean_dec_ref(v___x_3836_);
lean_dec(v___x_3832_);
lean_dec(v___y_3817_);
lean_dec_ref(v___y_3816_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
lean_dec_ref(v_snd_3807_);
lean_dec_ref(v_a_3806_);
lean_dec_ref(v_docCtx_3805_);
v_a_3867_ = lean_ctor_get(v___x_3866_, 0);
v_isSharedCheck_3874_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3874_ == 0)
{
v___x_3869_ = v___x_3866_;
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v___x_3866_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3874_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3872_; 
if (v_isShared_3870_ == 0)
{
v___x_3872_ = v___x_3869_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3873_; 
v_reuseFailAlloc_3873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3873_, 0, v_a_3867_);
v___x_3872_ = v_reuseFailAlloc_3873_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
return v___x_3872_;
}
}
}
}
else
{
lean_object* v_a_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3882_; 
lean_dec_ref(v___x_3836_);
lean_dec(v___x_3832_);
lean_dec(v___y_3817_);
lean_dec_ref(v___y_3816_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
lean_dec_ref(v_snd_3807_);
lean_dec_ref(v_a_3806_);
lean_dec_ref(v_docCtx_3805_);
v_a_3875_ = lean_ctor_get(v___x_3861_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3861_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3877_ = v___x_3861_;
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_a_3875_);
lean_dec(v___x_3861_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3882_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3880_; 
if (v_isShared_3878_ == 0)
{
v___x_3880_ = v___x_3877_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v_a_3875_);
v___x_3880_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
return v___x_3880_;
}
}
}
}
else
{
lean_inc(v___y_3817_);
lean_inc_ref(v___y_3816_);
lean_inc(v___y_3815_);
lean_inc_ref(v___y_3814_);
lean_inc(v___y_3813_);
lean_inc_ref(v___y_3812_);
lean_inc(v_a_3829_);
v_preDef_3838_ = v_a_3829_;
v___y_3839_ = v___y_3812_;
v___y_3840_ = v___y_3813_;
v___y_3841_ = v___y_3814_;
v___y_3842_ = v___y_3815_;
v___y_3843_ = v___y_3816_;
v___y_3844_ = v___y_3817_;
goto v___jp_3837_;
}
}
else
{
lean_object* v_a_3883_; lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3890_; 
lean_dec_ref(v___x_3836_);
lean_dec(v___x_3832_);
lean_dec(v___y_3817_);
lean_dec_ref(v___y_3816_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
lean_dec_ref(v_snd_3807_);
lean_dec_ref(v_a_3806_);
lean_dec_ref(v_docCtx_3805_);
v_a_3883_ = lean_ctor_get(v___x_3858_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v___x_3858_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3885_ = v___x_3858_;
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
else
{
lean_inc(v_a_3883_);
lean_dec(v___x_3858_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3890_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3888_; 
if (v_isShared_3886_ == 0)
{
v___x_3888_ = v___x_3885_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3883_);
v___x_3888_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
return v___x_3888_;
}
}
}
}
else
{
lean_inc(v___y_3817_);
lean_inc_ref(v___y_3816_);
lean_inc(v___y_3815_);
lean_inc_ref(v___y_3814_);
lean_inc(v___y_3813_);
lean_inc_ref(v___y_3812_);
lean_inc(v_a_3829_);
v_preDef_3838_ = v_a_3829_;
v___y_3839_ = v___y_3812_;
v___y_3840_ = v___y_3813_;
v___y_3841_ = v___y_3814_;
v___y_3842_ = v___y_3815_;
v___y_3843_ = v___y_3816_;
v___y_3844_ = v___y_3817_;
goto v___jp_3837_;
}
v___jp_3837_:
{
lean_object* v___x_3845_; 
lean_inc_ref(v_docCtx_3805_);
v___x_3845_ = l_Lean_Elab_Structural_addSmartUnfoldingDef(v_docCtx_3805_, v_preDef_3838_, v___x_3832_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
if (lean_obj_tag(v___x_3845_) == 0)
{
size_t v___x_3846_; size_t v___x_3847_; 
lean_dec_ref(v___x_3845_);
v___x_3846_ = ((size_t)1ULL);
v___x_3847_ = lean_usize_add(v_i_3810_, v___x_3846_);
v_i_3810_ = v___x_3847_;
v_b_3811_ = v___x_3836_;
goto _start;
}
else
{
lean_object* v_a_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3856_; 
lean_dec_ref(v___x_3836_);
lean_dec(v___y_3817_);
lean_dec_ref(v___y_3816_);
lean_dec(v___y_3815_);
lean_dec_ref(v___y_3814_);
lean_dec(v___y_3813_);
lean_dec_ref(v___y_3812_);
lean_dec_ref(v_snd_3807_);
lean_dec_ref(v_a_3806_);
lean_dec_ref(v_docCtx_3805_);
v_a_3849_ = lean_ctor_get(v___x_3845_, 0);
v_isSharedCheck_3856_ = !lean_is_exclusive(v___x_3845_);
if (v_isSharedCheck_3856_ == 0)
{
v___x_3851_ = v___x_3845_;
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_a_3849_);
lean_dec(v___x_3845_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3854_; 
if (v_isShared_3852_ == 0)
{
v___x_3854_ = v___x_3851_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v_a_3849_);
v___x_3854_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
return v___x_3854_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1___boxed(lean_object* v_docCtx_3896_, lean_object* v_a_3897_, lean_object* v_snd_3898_, lean_object* v_as_3899_, lean_object* v_sz_3900_, lean_object* v_i_3901_, lean_object* v_b_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_){
_start:
{
size_t v_sz_boxed_3910_; size_t v_i_boxed_3911_; lean_object* v_res_3912_; 
v_sz_boxed_3910_ = lean_unbox_usize(v_sz_3900_);
lean_dec(v_sz_3900_);
v_i_boxed_3911_ = lean_unbox_usize(v_i_3901_);
lean_dec(v_i_3901_);
v_res_3912_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(v_docCtx_3896_, v_a_3897_, v_snd_3898_, v_as_3899_, v_sz_boxed_3910_, v_i_boxed_3911_, v_b_3902_, v___y_3903_, v___y_3904_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_);
lean_dec_ref(v_as_3899_);
return v_res_3912_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(size_t v_sz_3913_, size_t v_i_3914_, lean_object* v_bs_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_){
_start:
{
uint8_t v___x_3919_; 
v___x_3919_ = lean_usize_dec_lt(v_i_3914_, v_sz_3913_);
if (v___x_3919_ == 0)
{
lean_object* v___x_3920_; 
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
v___x_3920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3920_, 0, v_bs_3915_);
return v___x_3920_;
}
else
{
lean_object* v_v_3921_; lean_object* v___x_3922_; 
v_v_3921_ = lean_array_uget_borrowed(v_bs_3915_, v_i_3914_);
lean_inc(v___y_3917_);
lean_inc_ref(v___y_3916_);
lean_inc(v_v_3921_);
v___x_3922_ = l_Lean_Elab_eraseRecAppSyntax(v_v_3921_, v___y_3916_, v___y_3917_);
if (lean_obj_tag(v___x_3922_) == 0)
{
lean_object* v_a_3923_; lean_object* v___x_3924_; lean_object* v_bs_x27_3925_; size_t v___x_3926_; size_t v___x_3927_; lean_object* v___x_3928_; 
v_a_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_a_3923_);
lean_dec_ref(v___x_3922_);
v___x_3924_ = lean_unsigned_to_nat(0u);
v_bs_x27_3925_ = lean_array_uset(v_bs_3915_, v_i_3914_, v___x_3924_);
v___x_3926_ = ((size_t)1ULL);
v___x_3927_ = lean_usize_add(v_i_3914_, v___x_3926_);
v___x_3928_ = lean_array_uset(v_bs_x27_3925_, v_i_3914_, v_a_3923_);
v_i_3914_ = v___x_3927_;
v_bs_3915_ = v___x_3928_;
goto _start;
}
else
{
lean_object* v_a_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3937_; 
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
lean_dec_ref(v_bs_3915_);
v_a_3930_ = lean_ctor_get(v___x_3922_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v___x_3922_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3932_ = v___x_3922_;
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_a_3930_);
lean_dec(v___x_3922_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3935_; 
if (v_isShared_3933_ == 0)
{
v___x_3935_ = v___x_3932_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_a_3930_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg___boxed(lean_object* v_sz_3938_, lean_object* v_i_3939_, lean_object* v_bs_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_){
_start:
{
size_t v_sz_boxed_3944_; size_t v_i_boxed_3945_; lean_object* v_res_3946_; 
v_sz_boxed_3944_ = lean_unbox_usize(v_sz_3938_);
lean_dec(v_sz_3938_);
v_i_boxed_3945_ = lean_unbox_usize(v_i_3939_);
lean_dec(v_i_3939_);
v_res_3946_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(v_sz_boxed_3944_, v_i_boxed_3945_, v_bs_3940_, v___y_3941_, v___y_3942_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(lean_object* v_as_3947_, size_t v_sz_3948_, size_t v_i_3949_, lean_object* v_b_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_){
_start:
{
uint8_t v___x_3956_; 
v___x_3956_ = lean_usize_dec_lt(v_i_3949_, v_sz_3948_);
if (v___x_3956_ == 0)
{
lean_object* v___x_3957_; 
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
v___x_3957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3957_, 0, v_b_3950_);
return v___x_3957_;
}
else
{
lean_object* v_array_3958_; lean_object* v_start_3959_; lean_object* v_stop_3960_; uint8_t v___x_3961_; 
v_array_3958_ = lean_ctor_get(v_b_3950_, 0);
v_start_3959_ = lean_ctor_get(v_b_3950_, 1);
v_stop_3960_ = lean_ctor_get(v_b_3950_, 2);
v___x_3961_ = lean_nat_dec_lt(v_start_3959_, v_stop_3960_);
if (v___x_3961_ == 0)
{
lean_object* v___x_3962_; 
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
v___x_3962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3962_, 0, v_b_3950_);
return v___x_3962_;
}
else
{
lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3985_; 
lean_inc(v_stop_3960_);
lean_inc(v_start_3959_);
lean_inc_ref(v_array_3958_);
v_isSharedCheck_3985_ = !lean_is_exclusive(v_b_3950_);
if (v_isSharedCheck_3985_ == 0)
{
lean_object* v_unused_3986_; lean_object* v_unused_3987_; lean_object* v_unused_3988_; 
v_unused_3986_ = lean_ctor_get(v_b_3950_, 2);
lean_dec(v_unused_3986_);
v_unused_3987_ = lean_ctor_get(v_b_3950_, 1);
lean_dec(v_unused_3987_);
v_unused_3988_ = lean_ctor_get(v_b_3950_, 0);
lean_dec(v_unused_3988_);
v___x_3964_ = v_b_3950_;
v_isShared_3965_ = v_isSharedCheck_3985_;
goto v_resetjp_3963_;
}
else
{
lean_dec(v_b_3950_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3985_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
lean_object* v_a_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; 
v_a_3966_ = lean_array_uget_borrowed(v_as_3947_, v_i_3949_);
v___x_3967_ = lean_array_fget_borrowed(v_array_3958_, v_start_3959_);
lean_inc(v___y_3954_);
lean_inc_ref(v___y_3953_);
lean_inc(v___y_3952_);
lean_inc_ref(v___y_3951_);
lean_inc(v_a_3966_);
lean_inc(v___x_3967_);
v___x_3968_ = l_Lean_Elab_Structural_reportTermMeasure(v___x_3967_, v_a_3966_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
if (lean_obj_tag(v___x_3968_) == 0)
{
lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3972_; 
lean_dec_ref(v___x_3968_);
v___x_3969_ = lean_unsigned_to_nat(1u);
v___x_3970_ = lean_nat_add(v_start_3959_, v___x_3969_);
lean_dec(v_start_3959_);
if (v_isShared_3965_ == 0)
{
lean_ctor_set(v___x_3964_, 1, v___x_3970_);
v___x_3972_ = v___x_3964_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_array_3958_);
lean_ctor_set(v_reuseFailAlloc_3976_, 1, v___x_3970_);
lean_ctor_set(v_reuseFailAlloc_3976_, 2, v_stop_3960_);
v___x_3972_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
size_t v___x_3973_; size_t v___x_3974_; 
v___x_3973_ = ((size_t)1ULL);
v___x_3974_ = lean_usize_add(v_i_3949_, v___x_3973_);
v_i_3949_ = v___x_3974_;
v_b_3950_ = v___x_3972_;
goto _start;
}
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
lean_del_object(v___x_3964_);
lean_dec(v_stop_3960_);
lean_dec(v_start_3959_);
lean_dec_ref(v_array_3958_);
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
v_a_3977_ = lean_ctor_get(v___x_3968_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3968_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3968_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3968_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg___boxed(lean_object* v_as_3989_, lean_object* v_sz_3990_, lean_object* v_i_3991_, lean_object* v_b_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
size_t v_sz_boxed_3998_; size_t v_i_boxed_3999_; lean_object* v_res_4000_; 
v_sz_boxed_3998_ = lean_unbox_usize(v_sz_3990_);
lean_dec(v_sz_3990_);
v_i_boxed_3999_ = lean_unbox_usize(v_i_3991_);
lean_dec(v_i_3991_);
v_res_4000_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(v_as_3989_, v_sz_boxed_3998_, v_i_boxed_3999_, v_b_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
lean_dec_ref(v_as_3989_);
return v_res_4000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion(lean_object* v_docCtx_4001_, lean_object* v_preDefs_4002_, lean_object* v_termMeasure_x3fs_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_){
_start:
{
size_t v_sz_4011_; size_t v___x_4012_; lean_object* v_names_4013_; lean_object* v___x_4014_; 
v_sz_4011_ = lean_array_size(v_preDefs_4002_);
v___x_4012_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_4002_);
v_names_4013_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos_spec__0(v_sz_4011_, v___x_4012_, v_preDefs_4002_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
lean_inc_ref(v_preDefs_4002_);
v___x_4014_ = l___private_Lean_Elab_PreDefinition_Structural_Main_0__Lean_Elab_Structural_inferRecArgPos(v_preDefs_4002_, v_termMeasure_x3fs_4003_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
if (lean_obj_tag(v___x_4014_) == 0)
{
lean_object* v_a_4015_; lean_object* v_snd_4016_; lean_object* v_fst_4017_; lean_object* v_fst_4018_; lean_object* v_snd_4019_; lean_object* v___y_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; size_t v_sz_4054_; lean_object* v___x_4055_; 
v_a_4015_ = lean_ctor_get(v___x_4014_, 0);
lean_inc(v_a_4015_);
lean_dec_ref(v___x_4014_);
v_snd_4016_ = lean_ctor_get(v_a_4015_, 1);
lean_inc(v_snd_4016_);
v_fst_4017_ = lean_ctor_get(v_a_4015_, 0);
lean_inc(v_fst_4017_);
lean_dec(v_a_4015_);
v_fst_4018_ = lean_ctor_get(v_snd_4016_, 0);
lean_inc(v_fst_4018_);
v_snd_4019_ = lean_ctor_get(v_snd_4016_, 1);
lean_inc(v_snd_4019_);
lean_dec(v_snd_4016_);
v___x_4051_ = lean_unsigned_to_nat(0u);
v___x_4052_ = lean_array_get_size(v_preDefs_4002_);
lean_inc_ref(v_preDefs_4002_);
v___x_4053_ = l_Array_toSubarray___redArg(v_preDefs_4002_, v___x_4051_, v___x_4052_);
v_sz_4054_ = lean_array_size(v_fst_4017_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
v___x_4055_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(v_fst_4017_, v_sz_4054_, v___x_4012_, v___x_4053_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
if (lean_obj_tag(v___x_4055_) == 0)
{
lean_object* v___x_4056_; uint8_t v___x_4057_; 
lean_dec_ref(v___x_4055_);
v___x_4056_ = lean_array_get_size(v_fst_4018_);
v___x_4057_ = lean_nat_dec_lt(v___x_4051_, v___x_4056_);
if (v___x_4057_ == 0)
{
lean_dec_ref(v_names_4013_);
goto v___jp_4020_;
}
else
{
lean_object* v___x_4058_; uint8_t v___x_4059_; 
v___x_4058_ = lean_box(0);
v___x_4059_ = lean_nat_dec_le(v___x_4056_, v___x_4056_);
if (v___x_4059_ == 0)
{
if (v___x_4057_ == 0)
{
lean_dec_ref(v_names_4013_);
goto v___jp_4020_;
}
else
{
size_t v___x_4060_; lean_object* v___x_4061_; 
v___x_4060_ = lean_usize_of_nat(v___x_4056_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
lean_inc(v_a_4005_);
lean_inc_ref(v_a_4004_);
lean_inc_ref(v_docCtx_4001_);
v___x_4061_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4(v_names_4013_, v_docCtx_4001_, v_fst_4018_, v___x_4012_, v___x_4060_, v___x_4058_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
v___y_4050_ = v___x_4061_;
goto v___jp_4049_;
}
}
else
{
size_t v___x_4062_; lean_object* v___x_4063_; 
v___x_4062_ = lean_usize_of_nat(v___x_4056_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
lean_inc(v_a_4005_);
lean_inc_ref(v_a_4004_);
lean_inc_ref(v_docCtx_4001_);
v___x_4063_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Structural_structuralRecursion_spec__4(v_names_4013_, v_docCtx_4001_, v_fst_4018_, v___x_4012_, v___x_4062_, v___x_4058_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
v___y_4050_ = v___x_4063_;
goto v___jp_4049_;
}
}
}
else
{
lean_object* v_a_4064_; lean_object* v___x_4066_; uint8_t v_isShared_4067_; uint8_t v_isSharedCheck_4071_; 
lean_dec(v_snd_4019_);
lean_dec(v_fst_4018_);
lean_dec(v_fst_4017_);
lean_dec_ref(v_names_4013_);
lean_dec(v_a_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_a_4007_);
lean_dec_ref(v_a_4006_);
lean_dec(v_a_4005_);
lean_dec_ref(v_a_4004_);
lean_dec_ref(v_preDefs_4002_);
lean_dec_ref(v_docCtx_4001_);
v_a_4064_ = lean_ctor_get(v___x_4055_, 0);
v_isSharedCheck_4071_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4071_ == 0)
{
v___x_4066_ = v___x_4055_;
v_isShared_4067_ = v_isSharedCheck_4071_;
goto v_resetjp_4065_;
}
else
{
lean_inc(v_a_4064_);
lean_dec(v___x_4055_);
v___x_4066_ = lean_box(0);
v_isShared_4067_ = v_isSharedCheck_4071_;
goto v_resetjp_4065_;
}
v_resetjp_4065_:
{
lean_object* v___x_4069_; 
if (v_isShared_4067_ == 0)
{
v___x_4069_ = v___x_4066_;
goto v_reusejp_4068_;
}
else
{
lean_object* v_reuseFailAlloc_4070_; 
v_reuseFailAlloc_4070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4070_, 0, v_a_4064_);
v___x_4069_ = v_reuseFailAlloc_4070_;
goto v_reusejp_4068_;
}
v_reusejp_4068_:
{
return v___x_4069_;
}
}
}
v___jp_4020_:
{
lean_object* v___x_4021_; 
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
v___x_4021_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(v_sz_4011_, v___x_4012_, v_preDefs_4002_, v_a_4008_, v_a_4009_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; lean_object* v___x_4023_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
lean_inc(v_a_4022_);
lean_dec_ref(v___x_4021_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
lean_inc(v_a_4005_);
lean_inc_ref(v_a_4004_);
lean_inc(v_a_4022_);
lean_inc_ref(v_docCtx_4001_);
v___x_4023_ = l_Lean_Elab_addAndCompilePartialRec(v_docCtx_4001_, v_a_4022_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
if (lean_obj_tag(v___x_4023_) == 0)
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; size_t v_sz_4027_; lean_object* v___x_4028_; 
lean_dec_ref(v___x_4023_);
v___x_4024_ = lean_unsigned_to_nat(0u);
v___x_4025_ = lean_array_get_size(v_fst_4017_);
v___x_4026_ = l_Array_toSubarray___redArg(v_fst_4017_, v___x_4024_, v___x_4025_);
v_sz_4027_ = lean_array_size(v_a_4022_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
lean_inc(v_a_4005_);
lean_inc_ref(v_a_4004_);
lean_inc(v_a_4022_);
v___x_4028_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__1(v_docCtx_4001_, v_a_4022_, v_snd_4019_, v_a_4022_, v_sz_4027_, v___x_4012_, v___x_4026_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
if (lean_obj_tag(v___x_4028_) == 0)
{
lean_object* v___x_4029_; lean_object* v___x_4030_; 
lean_dec_ref(v___x_4028_);
v___x_4029_ = lean_box(0);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
v___x_4030_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(v_a_4022_, v_sz_4027_, v___x_4012_, v___x_4029_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
lean_dec(v_a_4022_);
if (lean_obj_tag(v___x_4030_) == 0)
{
uint8_t v___x_4031_; lean_object* v___x_4032_; 
lean_dec_ref(v___x_4030_);
v___x_4031_ = 1;
v___x_4032_ = l_Lean_Elab_applyAttributesOf(v_fst_4018_, v___x_4031_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
lean_dec(v_fst_4018_);
return v___x_4032_;
}
else
{
lean_dec(v_fst_4018_);
lean_dec(v_a_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_a_4007_);
lean_dec_ref(v_a_4006_);
lean_dec(v_a_4005_);
lean_dec_ref(v_a_4004_);
return v___x_4030_;
}
}
else
{
lean_object* v_a_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4040_; 
lean_dec(v_a_4022_);
lean_dec(v_fst_4018_);
lean_dec(v_a_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_a_4007_);
lean_dec_ref(v_a_4006_);
lean_dec(v_a_4005_);
lean_dec_ref(v_a_4004_);
v_a_4033_ = lean_ctor_get(v___x_4028_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_4028_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4035_ = v___x_4028_;
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_a_4033_);
lean_dec(v___x_4028_);
v___x_4035_ = lean_box(0);
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
v_resetjp_4034_:
{
lean_object* v___x_4038_; 
if (v_isShared_4036_ == 0)
{
v___x_4038_ = v___x_4035_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4039_; 
v_reuseFailAlloc_4039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4039_, 0, v_a_4033_);
v___x_4038_ = v_reuseFailAlloc_4039_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
return v___x_4038_;
}
}
}
}
else
{
lean_dec(v_a_4022_);
lean_dec(v_snd_4019_);
lean_dec(v_fst_4018_);
lean_dec(v_fst_4017_);
lean_dec(v_a_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_a_4007_);
lean_dec_ref(v_a_4006_);
lean_dec(v_a_4005_);
lean_dec_ref(v_a_4004_);
lean_dec_ref(v_docCtx_4001_);
return v___x_4023_;
}
}
else
{
lean_object* v_a_4041_; lean_object* v___x_4043_; uint8_t v_isShared_4044_; uint8_t v_isSharedCheck_4048_; 
lean_dec(v_snd_4019_);
lean_dec(v_fst_4018_);
lean_dec(v_fst_4017_);
lean_dec(v_a_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_a_4007_);
lean_dec_ref(v_a_4006_);
lean_dec(v_a_4005_);
lean_dec_ref(v_a_4004_);
lean_dec_ref(v_docCtx_4001_);
v_a_4041_ = lean_ctor_get(v___x_4021_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v___x_4021_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4043_ = v___x_4021_;
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
else
{
lean_inc(v_a_4041_);
lean_dec(v___x_4021_);
v___x_4043_ = lean_box(0);
v_isShared_4044_ = v_isSharedCheck_4048_;
goto v_resetjp_4042_;
}
v_resetjp_4042_:
{
lean_object* v___x_4046_; 
if (v_isShared_4044_ == 0)
{
v___x_4046_ = v___x_4043_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v_a_4041_);
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
v___jp_4049_:
{
if (lean_obj_tag(v___y_4050_) == 0)
{
lean_dec_ref(v___y_4050_);
goto v___jp_4020_;
}
else
{
lean_dec(v_snd_4019_);
lean_dec(v_fst_4018_);
lean_dec(v_fst_4017_);
lean_dec(v_a_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_a_4007_);
lean_dec_ref(v_a_4006_);
lean_dec(v_a_4005_);
lean_dec_ref(v_a_4004_);
lean_dec_ref(v_preDefs_4002_);
lean_dec_ref(v_docCtx_4001_);
return v___y_4050_;
}
}
}
else
{
lean_object* v_a_4072_; lean_object* v___x_4074_; uint8_t v_isShared_4075_; uint8_t v_isSharedCheck_4079_; 
lean_dec_ref(v_names_4013_);
lean_dec(v_a_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_a_4007_);
lean_dec_ref(v_a_4006_);
lean_dec(v_a_4005_);
lean_dec_ref(v_a_4004_);
lean_dec_ref(v_preDefs_4002_);
lean_dec_ref(v_docCtx_4001_);
v_a_4072_ = lean_ctor_get(v___x_4014_, 0);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4014_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4074_ = v___x_4014_;
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
else
{
lean_inc(v_a_4072_);
lean_dec(v___x_4014_);
v___x_4074_ = lean_box(0);
v_isShared_4075_ = v_isSharedCheck_4079_;
goto v_resetjp_4073_;
}
v_resetjp_4073_:
{
lean_object* v___x_4077_; 
if (v_isShared_4075_ == 0)
{
v___x_4077_ = v___x_4074_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_a_4072_);
v___x_4077_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
return v___x_4077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_structuralRecursion___boxed(lean_object* v_docCtx_4080_, lean_object* v_preDefs_4081_, lean_object* v_termMeasure_x3fs_4082_, lean_object* v_a_4083_, lean_object* v_a_4084_, lean_object* v_a_4085_, lean_object* v_a_4086_, lean_object* v_a_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_){
_start:
{
lean_object* v_res_4090_; 
v_res_4090_ = l_Lean_Elab_Structural_structuralRecursion(v_docCtx_4080_, v_preDefs_4081_, v_termMeasure_x3fs_4082_, v_a_4083_, v_a_4084_, v_a_4085_, v_a_4086_, v_a_4087_, v_a_4088_);
return v_res_4090_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0(size_t v_sz_4091_, size_t v_i_4092_, lean_object* v_bs_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_){
_start:
{
lean_object* v___x_4101_; 
v___x_4101_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___redArg(v_sz_4091_, v_i_4092_, v_bs_4093_, v___y_4098_, v___y_4099_);
return v___x_4101_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0___boxed(lean_object* v_sz_4102_, lean_object* v_i_4103_, lean_object* v_bs_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
size_t v_sz_boxed_4112_; size_t v_i_boxed_4113_; lean_object* v_res_4114_; 
v_sz_boxed_4112_ = lean_unbox_usize(v_sz_4102_);
lean_dec(v_sz_4102_);
v_i_boxed_4113_ = lean_unbox_usize(v_i_4103_);
lean_dec(v_i_4103_);
v_res_4114_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_structuralRecursion_spec__0(v_sz_boxed_4112_, v_i_boxed_4113_, v_bs_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_);
lean_dec(v___y_4108_);
lean_dec_ref(v___y_4107_);
lean_dec(v___y_4106_);
lean_dec_ref(v___y_4105_);
return v_res_4114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2(lean_object* v_as_4115_, size_t v_sz_4116_, size_t v_i_4117_, lean_object* v_b_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_){
_start:
{
lean_object* v___x_4126_; 
v___x_4126_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___redArg(v_as_4115_, v_sz_4116_, v_i_4117_, v_b_4118_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
return v___x_4126_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2___boxed(lean_object* v_as_4127_, lean_object* v_sz_4128_, lean_object* v_i_4129_, lean_object* v_b_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_){
_start:
{
size_t v_sz_boxed_4138_; size_t v_i_boxed_4139_; lean_object* v_res_4140_; 
v_sz_boxed_4138_ = lean_unbox_usize(v_sz_4128_);
lean_dec(v_sz_4128_);
v_i_boxed_4139_ = lean_unbox_usize(v_i_4129_);
lean_dec(v_i_4129_);
v_res_4140_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__2(v_as_4127_, v_sz_boxed_4138_, v_i_boxed_4139_, v_b_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_);
lean_dec(v___y_4132_);
lean_dec_ref(v___y_4131_);
lean_dec_ref(v_as_4127_);
return v_res_4140_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3(lean_object* v_as_4141_, size_t v_sz_4142_, size_t v_i_4143_, lean_object* v_b_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_){
_start:
{
lean_object* v___x_4152_; 
v___x_4152_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___redArg(v_as_4141_, v_sz_4142_, v_i_4143_, v_b_4144_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_);
return v___x_4152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3___boxed(lean_object* v_as_4153_, lean_object* v_sz_4154_, lean_object* v_i_4155_, lean_object* v_b_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_){
_start:
{
size_t v_sz_boxed_4164_; size_t v_i_boxed_4165_; lean_object* v_res_4166_; 
v_sz_boxed_4164_ = lean_unbox_usize(v_sz_4154_);
lean_dec(v_sz_4154_);
v_i_boxed_4165_ = lean_unbox_usize(v_i_4155_);
lean_dec(v_i_4155_);
v_res_4166_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_structuralRecursion_spec__3(v_as_4153_, v_sz_boxed_4164_, v_i_boxed_4165_, v_b_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_);
lean_dec(v___y_4158_);
lean_dec_ref(v___y_4157_);
lean_dec_ref(v_as_4153_);
return v_res_4166_;
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
