// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.BRecOn
// Imports: public import Lean.Util.HasConstCache public import Lean.Meta.PProdN public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Elab.PreDefinition.Structural.Basic public import Lean.Elab.PreDefinition.Structural.RecArgInfo import Init.Data.Nat.Order import Init.Data.Order.Lemmas
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
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_zetaReduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isTracingEnabledFor___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclsD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_packLambdas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Elab_Structural_Positions_numIndices(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Expr_withAppAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getRecAppSyntax_x3f(lean_object*);
lean_object* l_Lean_mkMData(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Elab_Structural_recArgHasLooseBVarsAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_Elab_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_HasConstCache_containsUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_projM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
extern lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
lean_object* l_Lean_Meta_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "toBelow failed"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_searchPProd___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PProd"};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_searchPProd___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Structural_searchPProd___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Structural_searchPProd___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 14, 124, 134, 125, 191, 184, 142)}};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Structural_searchPProd___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__4_value;
static const lean_string_object l_Lean_Elab_Structural_searchPProd___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Structural_searchPProd___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "belowDict not an app:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "belowDict step 2:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "belowDict step 1:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structural"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 73, 239, 7, 229, 151, 237, 199)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "belowDict start:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "\narg:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "C"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(118, 87, 66, 208, 34, 24, 101, 135)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_PProdN_packLambdas___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not type correct!"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "initial belowDict for "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__5;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__6_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "numMotives: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unexpected 'below' type"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10_value)} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11_value)} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12_value;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "belowType: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__16 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__16_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_toBelow___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "searching IH for "};
static const lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_toBelow___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_Structural_toBelow___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_toBelow___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Elab_Structural_toBelow___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.Match.MatcherApp.Basic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.matchMatcherApp\?"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1;
static const lean_ctor_object l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2 = (const lean_object*)&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "insufficient number of parameters at recursive application "};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "failed to eliminate recursive application"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0_value;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "unexpected matcher application alternative"};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__0 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__0_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__1;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\nat application"};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__2 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__2_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__3;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "altNumParams: "};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__4 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__4_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__5;
static const lean_string_object l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", xs: "};
static const lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__6 = (const lean_object*)&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__6_value;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "`matcherApp.addArg\?` failed"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "below before matcherApp.addArg: "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Elab.PreDefinition.Structural.Basic"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Elab.Structural.Positions.mapMwith"};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "assertion violation: positions.size = ys.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "assertion violation: positions.numIndices = xs.size\n  "};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5;
static const lean_array_object l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_mkBRecOnConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_mkBRecOnConst___lam__2___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_mkBRecOnConst___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_mkBRecOnConst___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_mkBRecOnConst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "brecOn is type incorrect"};
static const lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2;
static lean_once_cell_t l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "mkBRecOnApp: Could not find "};
static const lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v_mctx_10_; lean_object* v_lctx_11_; lean_object* v_options_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_3_);
v_mctx_10_ = lean_ctor_get(v___x_9_, 0);
lean_inc_ref(v_mctx_10_);
lean_dec(v___x_9_);
v_lctx_11_ = lean_ctor_get(v___y_2_, 2);
v_options_12_ = lean_ctor_get(v___y_4_, 2);
lean_inc_ref(v_options_12_);
lean_inc_ref(v_lctx_11_);
v___x_13_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_13_, 0, v_env_8_);
lean_ctor_set(v___x_13_, 1, v_mctx_10_);
lean_ctor_set(v___x_13_, 2, v_lctx_11_);
lean_ctor_set(v___x_13_, 3, v_options_12_);
v___x_14_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v_msgData_1_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0___boxed(lean_object* v_msgData_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msgData_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(lean_object* v_msg_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v_ref_29_; lean_object* v___x_30_; lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_39_; 
v_ref_29_ = lean_ctor_get(v___y_26_, 5);
v___x_30_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_39_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_39_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_39_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_39_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_35_; lean_object* v___x_37_; 
lean_inc(v_ref_29_);
v___x_35_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_35_, 0, v_ref_29_);
lean_ctor_set(v___x_35_, 1, v_a_31_);
if (v_isShared_34_ == 0)
{
lean_ctor_set_tag(v___x_33_, 1);
lean_ctor_set(v___x_33_, 0, v___x_35_);
v___x_37_ = v___x_33_;
goto v_reusejp_36_;
}
else
{
lean_object* v_reuseFailAlloc_38_; 
v_reuseFailAlloc_38_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_38_, 0, v___x_35_);
v___x_37_ = v_reuseFailAlloc_38_;
goto v_reusejp_36_;
}
v_reusejp_36_:
{
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg___boxed(lean_object* v_msg_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v_msg_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_);
lean_dec(v___y_44_);
lean_dec_ref(v___y_43_);
lean_dec(v___y_42_);
lean_dec_ref(v___y_41_);
return v_res_46_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0));
v___x_49_ = l_Lean_stringToMessageData(v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1);
v___x_56_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v___x_55_, v_a_50_, v_a_51_, v_a_52_, v_a_53_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___boxed(lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_57_, v_a_58_, v_a_59_, v_a_60_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
lean_dec(v_a_58_);
lean_dec_ref(v_a_57_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed(lean_object* v_00_u03b1_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_64_, v_a_65_, v_a_66_, v_a_67_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___boxed(lean_object* v_00_u03b1_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed(v_00_u03b1_70_, v_a_71_, v_a_72_, v_a_73_, v_a_74_);
lean_dec(v_a_74_);
lean_dec_ref(v_a_73_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0(lean_object* v_00_u03b1_77_, lean_object* v_msg_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v_msg_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___boxed(lean_object* v_00_u03b1_85_, lean_object* v_msg_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0(v_00_u03b1_85_, v_msg_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg(lean_object* v_e_101_, lean_object* v_F_102_, lean_object* v_k_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_){
_start:
{
lean_object* v___x_109_; 
lean_inc(v_a_107_);
lean_inc_ref(v_a_106_);
lean_inc(v_a_105_);
lean_inc_ref(v_a_104_);
lean_inc_ref(v_e_101_);
v___x_109_ = lean_whnf(v_e_101_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
if (lean_obj_tag(v___x_109_) == 0)
{
lean_object* v_a_110_; 
v_a_110_ = lean_ctor_get(v___x_109_, 0);
lean_inc(v_a_110_);
lean_dec_ref(v___x_109_);
switch(lean_obj_tag(v_a_110_))
{
case 5:
{
lean_object* v_fn_111_; 
v_fn_111_ = lean_ctor_get(v_a_110_, 0);
lean_inc_ref(v_fn_111_);
if (lean_obj_tag(v_fn_111_) == 5)
{
lean_object* v_fn_112_; 
v_fn_112_ = lean_ctor_get(v_fn_111_, 0);
if (lean_obj_tag(v_fn_112_) == 4)
{
lean_object* v_declName_113_; 
v_declName_113_ = lean_ctor_get(v_fn_112_, 0);
lean_inc(v_declName_113_);
if (lean_obj_tag(v_declName_113_) == 1)
{
lean_object* v_pre_114_; 
v_pre_114_ = lean_ctor_get(v_declName_113_, 0);
if (lean_obj_tag(v_pre_114_) == 0)
{
lean_object* v_arg_115_; lean_object* v_arg_116_; lean_object* v_str_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v_arg_115_ = lean_ctor_get(v_a_110_, 1);
lean_inc_ref(v_arg_115_);
lean_dec_ref(v_a_110_);
v_arg_116_ = lean_ctor_get(v_fn_111_, 1);
lean_inc_ref(v_arg_116_);
lean_dec_ref(v_fn_111_);
v_str_117_ = lean_ctor_get(v_declName_113_, 1);
lean_inc_ref(v_str_117_);
lean_dec_ref(v_declName_113_);
v___x_118_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__0));
v___x_119_ = lean_string_dec_eq(v_str_117_, v___x_118_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__1));
v___x_121_ = lean_string_dec_eq(v_str_117_, v___x_120_);
lean_dec_ref(v_str_117_);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; 
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_arg_115_);
v___x_122_ = lean_apply_7(v_k_103_, v_e_101_, v_F_102_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, lean_box(0));
return v___x_122_;
}
else
{
lean_object* v___x_123_; 
lean_dec_ref(v_e_101_);
v___x_123_ = l_Lean_Meta_saveState___redArg(v_a_105_, v_a_107_);
if (lean_obj_tag(v___x_123_) == 0)
{
lean_object* v_a_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v_a_124_ = lean_ctor_get(v___x_123_, 0);
lean_inc(v_a_124_);
lean_dec_ref(v___x_123_);
v___x_125_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__2));
v___x_126_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_F_102_);
v___x_127_ = l_Lean_Expr_proj___override(v___x_125_, v___x_126_, v_F_102_);
lean_inc(v_a_107_);
lean_inc_ref(v_a_106_);
lean_inc(v_a_105_);
lean_inc_ref(v_a_104_);
lean_inc_ref(v_k_103_);
v___x_128_ = l_Lean_Elab_Structural_searchPProd___redArg(v_arg_116_, v___x_127_, v_k_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
if (lean_obj_tag(v___x_128_) == 0)
{
lean_dec(v_a_124_);
lean_dec_ref(v_arg_115_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
return v___x_128_;
}
else
{
lean_object* v_a_129_; uint8_t v___y_131_; uint8_t v___x_144_; 
v_a_129_ = lean_ctor_get(v___x_128_, 0);
lean_inc(v_a_129_);
v___x_144_ = l_Lean_Exception_isInterrupt(v_a_129_);
if (v___x_144_ == 0)
{
uint8_t v___x_145_; 
v___x_145_ = l_Lean_Exception_isRuntime(v_a_129_);
v___y_131_ = v___x_145_;
goto v___jp_130_;
}
else
{
lean_dec(v_a_129_);
v___y_131_ = v___x_144_;
goto v___jp_130_;
}
v___jp_130_:
{
if (v___y_131_ == 0)
{
lean_object* v___x_132_; 
lean_dec_ref(v___x_128_);
v___x_132_ = l_Lean_Meta_SavedState_restore___redArg(v_a_124_, v_a_105_, v_a_107_);
lean_dec(v_a_124_);
if (lean_obj_tag(v___x_132_) == 0)
{
lean_object* v___x_133_; lean_object* v___x_134_; 
lean_dec_ref(v___x_132_);
v___x_133_ = lean_unsigned_to_nat(1u);
v___x_134_ = l_Lean_Expr_proj___override(v___x_125_, v___x_133_, v_F_102_);
v_e_101_ = v_arg_115_;
v_F_102_ = v___x_134_;
goto _start;
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
lean_dec_ref(v_arg_115_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
v_a_136_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_132_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_132_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
else
{
lean_dec(v_a_124_);
lean_dec_ref(v_arg_115_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
return v___x_128_;
}
}
}
}
else
{
lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_153_; 
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_arg_115_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
v_a_146_ = lean_ctor_get(v___x_123_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_123_);
if (v_isSharedCheck_153_ == 0)
{
v___x_148_ = v___x_123_;
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_dec(v___x_123_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_153_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_151_; 
if (v_isShared_149_ == 0)
{
v___x_151_ = v___x_148_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_a_146_);
v___x_151_ = v_reuseFailAlloc_152_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
return v___x_151_;
}
}
}
}
}
else
{
lean_object* v___x_154_; 
lean_dec_ref(v_str_117_);
lean_dec_ref(v_e_101_);
v___x_154_ = l_Lean_Meta_saveState___redArg(v_a_105_, v_a_107_);
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_a_155_);
lean_dec_ref(v___x_154_);
v___x_156_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__3));
v___x_157_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_F_102_);
v___x_158_ = l_Lean_Expr_proj___override(v___x_156_, v___x_157_, v_F_102_);
lean_inc(v_a_107_);
lean_inc_ref(v_a_106_);
lean_inc(v_a_105_);
lean_inc_ref(v_a_104_);
lean_inc_ref(v_k_103_);
v___x_159_ = l_Lean_Elab_Structural_searchPProd___redArg(v_arg_116_, v___x_158_, v_k_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_);
if (lean_obj_tag(v___x_159_) == 0)
{
lean_dec(v_a_155_);
lean_dec_ref(v_arg_115_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
return v___x_159_;
}
else
{
lean_object* v_a_160_; uint8_t v___y_162_; uint8_t v___x_175_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_a_160_);
v___x_175_ = l_Lean_Exception_isInterrupt(v_a_160_);
if (v___x_175_ == 0)
{
uint8_t v___x_176_; 
v___x_176_ = l_Lean_Exception_isRuntime(v_a_160_);
v___y_162_ = v___x_176_;
goto v___jp_161_;
}
else
{
lean_dec(v_a_160_);
v___y_162_ = v___x_175_;
goto v___jp_161_;
}
v___jp_161_:
{
if (v___y_162_ == 0)
{
lean_object* v___x_163_; 
lean_dec_ref(v___x_159_);
v___x_163_ = l_Lean_Meta_SavedState_restore___redArg(v_a_155_, v_a_105_, v_a_107_);
lean_dec(v_a_155_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v___x_164_; lean_object* v___x_165_; 
lean_dec_ref(v___x_163_);
v___x_164_ = lean_unsigned_to_nat(1u);
v___x_165_ = l_Lean_Expr_proj___override(v___x_156_, v___x_164_, v_F_102_);
v_e_101_ = v_arg_115_;
v_F_102_ = v___x_165_;
goto _start;
}
else
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_174_; 
lean_dec_ref(v_arg_115_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
v_a_167_ = lean_ctor_get(v___x_163_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_163_);
if (v_isSharedCheck_174_ == 0)
{
v___x_169_ = v___x_163_;
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v___x_163_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_a_167_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
}
else
{
lean_dec(v_a_155_);
lean_dec_ref(v_arg_115_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
return v___x_159_;
}
}
}
}
else
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_arg_115_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
v_a_177_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_184_ == 0)
{
v___x_179_ = v___x_154_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___x_154_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_a_177_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
}
else
{
lean_object* v___x_185_; 
lean_dec_ref(v_declName_113_);
lean_dec_ref(v_fn_111_);
lean_dec_ref(v_a_110_);
v___x_185_ = lean_apply_7(v_k_103_, v_e_101_, v_F_102_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, lean_box(0));
return v___x_185_;
}
}
else
{
lean_object* v___x_186_; 
lean_dec(v_declName_113_);
lean_dec_ref(v_fn_111_);
lean_dec_ref(v_a_110_);
v___x_186_ = lean_apply_7(v_k_103_, v_e_101_, v_F_102_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, lean_box(0));
return v___x_186_;
}
}
else
{
lean_object* v___x_187_; 
lean_dec_ref(v_fn_111_);
lean_dec_ref(v_a_110_);
v___x_187_ = lean_apply_7(v_k_103_, v_e_101_, v_F_102_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, lean_box(0));
return v___x_187_;
}
}
else
{
lean_object* v___x_188_; 
lean_dec_ref(v_a_110_);
lean_dec_ref(v_fn_111_);
v___x_188_ = lean_apply_7(v_k_103_, v_e_101_, v_F_102_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, lean_box(0));
return v___x_188_;
}
}
case 4:
{
lean_object* v_declName_189_; 
v_declName_189_ = lean_ctor_get(v_a_110_, 0);
lean_inc(v_declName_189_);
lean_dec_ref(v_a_110_);
if (lean_obj_tag(v_declName_189_) == 1)
{
lean_object* v_pre_190_; 
v_pre_190_ = lean_ctor_get(v_declName_189_, 0);
if (lean_obj_tag(v_pre_190_) == 0)
{
lean_object* v_str_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v_str_191_ = lean_ctor_get(v_declName_189_, 1);
lean_inc_ref(v_str_191_);
lean_dec_ref(v_declName_189_);
v___x_192_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__4));
v___x_193_ = lean_string_dec_eq(v_str_191_, v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = ((lean_object*)(l_Lean_Elab_Structural_searchPProd___redArg___closed__5));
v___x_195_ = lean_string_dec_eq(v_str_191_, v___x_194_);
lean_dec_ref(v_str_191_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; 
v___x_196_ = lean_apply_7(v_k_103_, v_e_101_, v_F_102_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, lean_box(0));
return v___x_196_;
}
else
{
lean_object* v___x_197_; 
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
lean_dec_ref(v_e_101_);
v___x_197_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_104_, v_a_105_, v_a_106_, v_a_107_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
return v___x_197_;
}
}
else
{
lean_object* v___x_198_; 
lean_dec_ref(v_str_191_);
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
lean_dec_ref(v_e_101_);
v___x_198_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_104_, v_a_105_, v_a_106_, v_a_107_);
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
return v___x_198_;
}
}
else
{
lean_object* v___x_199_; 
lean_dec_ref(v_declName_189_);
v___x_199_ = lean_apply_7(v_k_103_, v_e_101_, v_F_102_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, lean_box(0));
return v___x_199_;
}
}
else
{
lean_object* v___x_200_; 
lean_dec(v_declName_189_);
v___x_200_ = lean_apply_7(v_k_103_, v_e_101_, v_F_102_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, lean_box(0));
return v___x_200_;
}
}
default: 
{
lean_object* v___x_201_; 
lean_dec(v_a_110_);
v___x_201_ = lean_apply_7(v_k_103_, v_e_101_, v_F_102_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, lean_box(0));
return v___x_201_;
}
}
}
else
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
lean_dec(v_a_107_);
lean_dec_ref(v_a_106_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec_ref(v_k_103_);
lean_dec_ref(v_F_102_);
lean_dec_ref(v_e_101_);
v_a_202_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_209_ == 0)
{
v___x_204_ = v___x_109_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_109_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg___boxed(lean_object* v_e_210_, lean_object* v_F_211_, lean_object* v_k_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lean_Elab_Structural_searchPProd___redArg(v_e_210_, v_F_211_, v_k_212_, v_a_213_, v_a_214_, v_a_215_, v_a_216_);
return v_res_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd(lean_object* v_00_u03b1_219_, lean_object* v_e_220_, lean_object* v_F_221_, lean_object* v_k_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_Elab_Structural_searchPProd___redArg(v_e_220_, v_F_221_, v_k_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___boxed(lean_object* v_00_u03b1_229_, lean_object* v_e_230_, lean_object* v_F_231_, lean_object* v_k_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lean_Elab_Structural_searchPProd(v_00_u03b1_229_, v_e_230_, v_F_231_, v_k_232_, v_a_233_, v_a_234_, v_a_235_, v_a_236_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg(lean_object* v_cls_242_, lean_object* v___y_243_){
_start:
{
lean_object* v_options_245_; uint8_t v_hasTrace_246_; 
v_options_245_ = lean_ctor_get(v___y_243_, 2);
v_hasTrace_246_ = lean_ctor_get_uint8(v_options_245_, sizeof(void*)*1);
if (v_hasTrace_246_ == 0)
{
lean_object* v___x_247_; lean_object* v___x_248_; 
lean_dec(v_cls_242_);
v___x_247_ = lean_box(v_hasTrace_246_);
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
return v___x_248_;
}
else
{
lean_object* v_inheritedTraceOptions_249_; lean_object* v___x_250_; lean_object* v___x_251_; uint8_t v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_inheritedTraceOptions_249_ = lean_ctor_get(v___y_243_, 13);
v___x_250_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___closed__1));
v___x_251_ = l_Lean_Name_append(v___x_250_, v_cls_242_);
v___x_252_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_249_, v_options_245_, v___x_251_);
lean_dec(v___x_251_);
v___x_253_ = lean_box(v___x_252_);
v___x_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___boxed(lean_object* v_cls_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg(v_cls_255_, v___y_256_);
lean_dec_ref(v___y_256_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(lean_object* v_cls_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg(v_cls_259_, v___y_262_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___boxed(lean_object* v_cls_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_);
lean_dec(v___y_270_);
lean_dec_ref(v___y_269_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___lam__0(lean_object* v_k_273_, lean_object* v_b_274_, lean_object* v_c_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = lean_apply_7(v_k_273_, v_b_274_, v_c_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, lean_box(0));
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___lam__0___boxed(lean_object* v_k_282_, lean_object* v_b_283_, lean_object* v_c_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___lam__0(v_k_282_, v_b_283_, v_c_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg(lean_object* v_type_291_, lean_object* v_k_292_, uint8_t v_cleanupAnnotations_293_, uint8_t v_whnfType_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
lean_object* v___f_300_; lean_object* v___x_301_; 
v___f_300_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_300_, 0, v_k_292_);
v___x_301_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_291_, v___f_300_, v_cleanupAnnotations_293_, v_whnfType_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_);
if (lean_obj_tag(v___x_301_) == 0)
{
lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_309_; 
v_a_302_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_309_ == 0)
{
v___x_304_ = v___x_301_;
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___x_301_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_307_; 
if (v_isShared_305_ == 0)
{
v___x_307_ = v___x_304_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_a_302_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
else
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_317_; 
v_a_310_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_317_ == 0)
{
v___x_312_ = v___x_301_;
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_301_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_317_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_315_; 
if (v_isShared_313_ == 0)
{
v___x_315_ = v___x_312_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_a_310_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
return v___x_315_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___boxed(lean_object* v_type_318_, lean_object* v_k_319_, lean_object* v_cleanupAnnotations_320_, lean_object* v_whnfType_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_327_; uint8_t v_whnfType_boxed_328_; lean_object* v_res_329_; 
v_cleanupAnnotations_boxed_327_ = lean_unbox(v_cleanupAnnotations_320_);
v_whnfType_boxed_328_ = lean_unbox(v_whnfType_321_);
v_res_329_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg(v_type_318_, v_k_319_, v_cleanupAnnotations_boxed_327_, v_whnfType_boxed_328_, v___y_322_, v___y_323_, v___y_324_, v___y_325_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2(lean_object* v_00_u03b1_330_, lean_object* v_type_331_, lean_object* v_k_332_, uint8_t v_cleanupAnnotations_333_, uint8_t v_whnfType_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg(v_type_331_, v_k_332_, v_cleanupAnnotations_333_, v_whnfType_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___boxed(lean_object* v_00_u03b1_341_, lean_object* v_type_342_, lean_object* v_k_343_, lean_object* v_cleanupAnnotations_344_, lean_object* v_whnfType_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_351_; uint8_t v_whnfType_boxed_352_; lean_object* v_res_353_; 
v_cleanupAnnotations_boxed_351_ = lean_unbox(v_cleanupAnnotations_344_);
v_whnfType_boxed_352_ = lean_unbox(v_whnfType_345_);
v_res_353_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2(v_00_u03b1_341_, v_type_342_, v_k_343_, v_cleanupAnnotations_boxed_351_, v_whnfType_boxed_352_, v___y_346_, v___y_347_, v___y_348_, v___y_349_);
return v_res_353_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0(void){
_start:
{
lean_object* v___x_354_; double v___x_355_; 
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = lean_float_of_nat(v___x_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(lean_object* v_cls_359_, lean_object* v_msg_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v_ref_366_; lean_object* v___x_367_; lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_412_; 
v_ref_366_ = lean_ctor_get(v___y_363_, 5);
v___x_367_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_412_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_412_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_412_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v_traceState_373_; lean_object* v_env_374_; lean_object* v_nextMacroScope_375_; lean_object* v_ngen_376_; lean_object* v_auxDeclNGen_377_; lean_object* v_cache_378_; lean_object* v_messages_379_; lean_object* v_infoState_380_; lean_object* v_snapshotTasks_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_411_; 
v___x_372_ = lean_st_ref_take(v___y_364_);
v_traceState_373_ = lean_ctor_get(v___x_372_, 4);
v_env_374_ = lean_ctor_get(v___x_372_, 0);
v_nextMacroScope_375_ = lean_ctor_get(v___x_372_, 1);
v_ngen_376_ = lean_ctor_get(v___x_372_, 2);
v_auxDeclNGen_377_ = lean_ctor_get(v___x_372_, 3);
v_cache_378_ = lean_ctor_get(v___x_372_, 5);
v_messages_379_ = lean_ctor_get(v___x_372_, 6);
v_infoState_380_ = lean_ctor_get(v___x_372_, 7);
v_snapshotTasks_381_ = lean_ctor_get(v___x_372_, 8);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_411_ == 0)
{
v___x_383_ = v___x_372_;
v_isShared_384_ = v_isSharedCheck_411_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_snapshotTasks_381_);
lean_inc(v_infoState_380_);
lean_inc(v_messages_379_);
lean_inc(v_cache_378_);
lean_inc(v_traceState_373_);
lean_inc(v_auxDeclNGen_377_);
lean_inc(v_ngen_376_);
lean_inc(v_nextMacroScope_375_);
lean_inc(v_env_374_);
lean_dec(v___x_372_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_411_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
uint64_t v_tid_385_; lean_object* v_traces_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_410_; 
v_tid_385_ = lean_ctor_get_uint64(v_traceState_373_, sizeof(void*)*1);
v_traces_386_ = lean_ctor_get(v_traceState_373_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v_traceState_373_);
if (v_isSharedCheck_410_ == 0)
{
v___x_388_ = v_traceState_373_;
v_isShared_389_ = v_isSharedCheck_410_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_traces_386_);
lean_dec(v_traceState_373_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_410_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_390_; double v___x_391_; uint8_t v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_400_; 
v___x_390_ = lean_box(0);
v___x_391_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0);
v___x_392_ = 0;
v___x_393_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__1));
v___x_394_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_394_, 0, v_cls_359_);
lean_ctor_set(v___x_394_, 1, v___x_390_);
lean_ctor_set(v___x_394_, 2, v___x_393_);
lean_ctor_set_float(v___x_394_, sizeof(void*)*3, v___x_391_);
lean_ctor_set_float(v___x_394_, sizeof(void*)*3 + 8, v___x_391_);
lean_ctor_set_uint8(v___x_394_, sizeof(void*)*3 + 16, v___x_392_);
v___x_395_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__2));
v___x_396_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_396_, 0, v___x_394_);
lean_ctor_set(v___x_396_, 1, v_a_368_);
lean_ctor_set(v___x_396_, 2, v___x_395_);
lean_inc(v_ref_366_);
v___x_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_397_, 0, v_ref_366_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = l_Lean_PersistentArray_push___redArg(v_traces_386_, v___x_397_);
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v___x_398_);
v___x_400_ = v___x_388_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_409_; 
v_reuseFailAlloc_409_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_409_, 0, v___x_398_);
lean_ctor_set_uint64(v_reuseFailAlloc_409_, sizeof(void*)*1, v_tid_385_);
v___x_400_ = v_reuseFailAlloc_409_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_402_; 
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 4, v___x_400_);
v___x_402_ = v___x_383_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_env_374_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_nextMacroScope_375_);
lean_ctor_set(v_reuseFailAlloc_408_, 2, v_ngen_376_);
lean_ctor_set(v_reuseFailAlloc_408_, 3, v_auxDeclNGen_377_);
lean_ctor_set(v_reuseFailAlloc_408_, 4, v___x_400_);
lean_ctor_set(v_reuseFailAlloc_408_, 5, v_cache_378_);
lean_ctor_set(v_reuseFailAlloc_408_, 6, v_messages_379_);
lean_ctor_set(v_reuseFailAlloc_408_, 7, v_infoState_380_);
lean_ctor_set(v_reuseFailAlloc_408_, 8, v_snapshotTasks_381_);
v___x_402_ = v_reuseFailAlloc_408_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_403_ = lean_st_ref_set(v___y_364_, v___x_402_);
v___x_404_ = lean_box(0);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v___x_404_);
v___x_406_ = v___x_370_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___boxed(lean_object* v_cls_413_, lean_object* v_msg_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(v_cls_413_, v_msg_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
return v_res_420_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_422_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0));
v___x_423_ = l_Lean_stringToMessageData(v___x_422_);
return v___x_423_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__3(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__2));
v___x_426_ = l_Lean_stringToMessageData(v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(lean_object* v_cls_427_, lean_object* v_a_428_, lean_object* v_C_429_, lean_object* v_belowDict_430_, lean_object* v_F_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_){
_start:
{
lean_object* v___y_438_; lean_object* v___y_439_; lean_object* v___y_440_; lean_object* v___y_441_; lean_object* v___y_442_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v___y_474_; lean_object* v___x_505_; lean_object* v_a_506_; uint8_t v___x_507_; 
lean_inc(v_cls_427_);
v___x_505_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg(v_cls_427_, v___y_434_);
v_a_506_ = lean_ctor_get(v___x_505_, 0);
lean_inc(v_a_506_);
lean_dec_ref(v___x_505_);
v___x_507_ = lean_unbox(v_a_506_);
lean_dec(v_a_506_);
if (v___x_507_ == 0)
{
v___y_471_ = v___y_432_;
v___y_472_ = v___y_433_;
v___y_473_ = v___y_434_;
v___y_474_ = v___y_435_;
goto v___jp_470_;
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_508_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__3);
lean_inc_ref(v_belowDict_430_);
v___x_509_ = l_Lean_indentExpr(v_belowDict_430_);
v___x_510_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_510_, 0, v___x_508_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
lean_inc(v_cls_427_);
v___x_511_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(v_cls_427_, v___x_510_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_dec_ref(v___x_511_);
v___y_471_ = v___y_432_;
v___y_472_ = v___y_433_;
v___y_473_ = v___y_434_;
v___y_474_ = v___y_435_;
goto v___jp_470_;
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec_ref(v_F_431_);
lean_dec_ref(v_belowDict_430_);
lean_dec_ref(v_a_428_);
lean_dec(v_cls_427_);
v_a_512_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_511_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_511_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
v___jp_437_:
{
lean_object* v___x_443_; 
lean_inc(v___y_442_);
lean_inc_ref(v___y_441_);
lean_inc(v___y_440_);
lean_inc_ref(v___y_439_);
v___x_443_ = l_Lean_Meta_isExprDefEq(v___y_438_, v_a_428_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_461_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_461_ == 0)
{
v___x_446_ = v___x_443_;
v_isShared_447_ = v_isSharedCheck_461_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_443_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_461_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
uint8_t v___x_448_; 
v___x_448_ = lean_unbox(v_a_444_);
lean_dec(v_a_444_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
lean_del_object(v___x_446_);
lean_dec_ref(v_F_431_);
v___x_449_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
v_a_450_ = lean_ctor_get(v___x_449_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_449_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_449_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_449_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
else
{
lean_object* v___x_459_; 
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
if (v_isShared_447_ == 0)
{
lean_ctor_set(v___x_446_, 0, v_F_431_);
v___x_459_ = v___x_446_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_F_431_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
else
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_469_; 
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
lean_dec_ref(v_F_431_);
v_a_462_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_469_ == 0)
{
v___x_464_ = v___x_443_;
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_443_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_467_; 
if (v_isShared_465_ == 0)
{
v___x_467_ = v___x_464_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_a_462_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
}
v___jp_470_:
{
if (lean_obj_tag(v_belowDict_430_) == 5)
{
lean_object* v_fn_475_; lean_object* v_arg_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
lean_dec(v_cls_427_);
v_fn_475_ = lean_ctor_get(v_belowDict_430_, 0);
lean_inc_ref(v_fn_475_);
v_arg_476_ = lean_ctor_get(v_belowDict_430_, 1);
lean_inc_ref(v_arg_476_);
lean_dec_ref(v_belowDict_430_);
v___x_477_ = l_Lean_Expr_getAppFn(v_fn_475_);
lean_dec_ref(v_fn_475_);
v___x_478_ = lean_expr_eqv(v___x_477_, v_C_429_);
lean_dec_ref(v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
lean_dec_ref(v_arg_476_);
lean_dec_ref(v_F_431_);
lean_dec_ref(v_a_428_);
v___x_479_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_471_, v___y_472_, v___y_473_, v___y_474_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_487_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_480_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
else
{
v___y_438_ = v_arg_476_;
v___y_439_ = v___y_471_;
v___y_440_ = v___y_472_;
v___y_441_ = v___y_473_;
v___y_442_ = v___y_474_;
goto v___jp_437_;
}
}
else
{
lean_object* v___x_488_; lean_object* v_a_489_; uint8_t v___x_490_; 
lean_dec_ref(v_F_431_);
lean_dec_ref(v_a_428_);
lean_inc(v_cls_427_);
v___x_488_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg(v_cls_427_, v___y_473_);
v_a_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_489_);
lean_dec_ref(v___x_488_);
v___x_490_ = lean_unbox(v_a_489_);
lean_dec(v_a_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; 
lean_dec_ref(v_belowDict_430_);
lean_dec(v_cls_427_);
v___x_491_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_471_, v___y_472_, v___y_473_, v___y_474_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
return v___x_491_;
}
else
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_492_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1);
v___x_493_ = l_Lean_indentExpr(v_belowDict_430_);
v___x_494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_494_, 0, v___x_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(v_cls_427_, v___x_494_, v___y_471_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v___x_496_; 
lean_dec_ref(v___x_495_);
v___x_496_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_471_, v___y_472_, v___y_473_, v___y_474_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
return v___x_496_;
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
v_a_497_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_495_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_495_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___boxed(lean_object* v_cls_520_, lean_object* v_a_521_, lean_object* v_C_522_, lean_object* v_belowDict_523_, lean_object* v_F_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(v_cls_520_, v_a_521_, v_C_522_, v_belowDict_523_, v_F_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
lean_dec_ref(v_C_522_);
return v_res_530_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0(void){
_start:
{
lean_object* v___x_531_; lean_object* v_dummy_532_; 
v___x_531_ = lean_box(0);
v_dummy_532_ = l_Lean_Expr_sort___override(v___x_531_);
return v_dummy_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1(lean_object* v_arg_533_, lean_object* v_cls_534_, lean_object* v_C_535_, lean_object* v_F_536_, lean_object* v_xs_537_, lean_object* v_belowDict_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
uint8_t v___x_544_; lean_object* v___x_545_; 
v___x_544_ = 1;
lean_inc(v___y_542_);
lean_inc_ref(v___y_541_);
lean_inc(v___y_540_);
lean_inc_ref(v___y_539_);
v___x_545_ = l_Lean_Meta_zetaReduce(v_arg_533_, v___x_544_, v___x_544_, v___x_544_, v___y_539_, v___y_540_, v___y_541_, v___y_542_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v_a_546_; lean_object* v___f_547_; lean_object* v_dummy_548_; lean_object* v_nargs_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___y_555_; lean_object* v___y_556_; lean_object* v___y_557_; lean_object* v___y_558_; lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v_a_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc(v_a_546_);
lean_dec_ref(v___x_545_);
lean_inc(v_a_546_);
v___f_547_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___boxed), 10, 3);
lean_closure_set(v___f_547_, 0, v_cls_534_);
lean_closure_set(v___f_547_, 1, v_a_546_);
lean_closure_set(v___f_547_, 2, v_C_535_);
v_dummy_548_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0);
v_nargs_549_ = l_Lean_Expr_getAppNumArgs(v_a_546_);
lean_inc(v_nargs_549_);
v___x_550_ = lean_mk_array(v_nargs_549_, v_dummy_548_);
v___x_551_ = lean_unsigned_to_nat(1u);
v___x_552_ = lean_nat_sub(v_nargs_549_, v___x_551_);
lean_dec(v_nargs_549_);
v___x_553_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_546_, v___x_550_, v___x_552_);
v___x_566_ = lean_array_get_size(v_xs_537_);
v___x_567_ = lean_array_get_size(v___x_553_);
v___x_568_ = lean_nat_dec_le(v___x_566_, v___x_567_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec_ref(v___x_553_);
lean_dec_ref(v___f_547_);
lean_dec_ref(v_F_536_);
v___x_569_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_539_, v___y_540_, v___y_541_, v___y_542_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
v_a_570_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_569_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_569_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
else
{
v___y_555_ = v___y_539_;
v___y_556_ = v___y_540_;
v___y_557_ = v___y_541_;
v___y_558_ = v___y_542_;
goto v___jp_554_;
}
v___jp_554_:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_559_ = lean_array_get_size(v___x_553_);
v___x_560_ = lean_array_get_size(v_xs_537_);
v___x_561_ = lean_nat_sub(v___x_559_, v___x_560_);
v___x_562_ = l_Array_extract___redArg(v___x_553_, v___x_561_, v___x_559_);
lean_dec_ref(v___x_553_);
v___x_563_ = l_Lean_Expr_replaceFVars(v_belowDict_538_, v_xs_537_, v___x_562_);
v___x_564_ = l_Lean_mkAppN(v_F_536_, v___x_562_);
lean_dec_ref(v___x_562_);
v___x_565_ = l_Lean_Elab_Structural_searchPProd___redArg(v___x_563_, v___x_564_, v___f_547_, v___y_555_, v___y_556_, v___y_557_, v___y_558_);
return v___x_565_;
}
}
else
{
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec_ref(v_F_536_);
lean_dec_ref(v_C_535_);
lean_dec(v_cls_534_);
return v___x_545_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___boxed(lean_object* v_arg_578_, lean_object* v_cls_579_, lean_object* v_C_580_, lean_object* v_F_581_, lean_object* v_xs_582_, lean_object* v_belowDict_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1(v_arg_578_, v_cls_579_, v_C_580_, v_F_581_, v_xs_582_, v_belowDict_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
lean_dec_ref(v_belowDict_583_);
lean_dec_ref(v_xs_582_);
return v_res_589_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0));
v___x_592_ = l_Lean_stringToMessageData(v___x_591_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2(lean_object* v_cls_593_, lean_object* v_arg_594_, lean_object* v_C_595_, lean_object* v_belowDict_596_, lean_object* v_F_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_){
_start:
{
lean_object* v___x_603_; lean_object* v_a_604_; lean_object* v___f_605_; lean_object* v___y_607_; lean_object* v___y_608_; lean_object* v___y_609_; lean_object* v___y_610_; uint8_t v___x_613_; 
lean_inc(v_cls_593_);
v___x_603_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg(v_cls_593_, v___y_600_);
v_a_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_604_);
lean_dec_ref(v___x_603_);
lean_inc(v_cls_593_);
v___f_605_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___boxed), 11, 4);
lean_closure_set(v___f_605_, 0, v_arg_594_);
lean_closure_set(v___f_605_, 1, v_cls_593_);
lean_closure_set(v___f_605_, 2, v_C_595_);
lean_closure_set(v___f_605_, 3, v_F_597_);
v___x_613_ = lean_unbox(v_a_604_);
lean_dec(v_a_604_);
if (v___x_613_ == 0)
{
lean_dec(v_cls_593_);
v___y_607_ = v___y_598_;
v___y_608_ = v___y_599_;
v___y_609_ = v___y_600_;
v___y_610_ = v___y_601_;
goto v___jp_606_;
}
else
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_614_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__1);
lean_inc_ref(v_belowDict_596_);
v___x_615_ = l_Lean_indentExpr(v_belowDict_596_);
v___x_616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_614_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
v___x_617_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(v_cls_593_, v___x_616_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
if (lean_obj_tag(v___x_617_) == 0)
{
lean_dec_ref(v___x_617_);
v___y_607_ = v___y_598_;
v___y_608_ = v___y_599_;
v___y_609_ = v___y_600_;
v___y_610_ = v___y_601_;
goto v___jp_606_;
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_dec_ref(v___f_605_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec_ref(v_belowDict_596_);
v_a_618_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_617_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_617_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
v___jp_606_:
{
uint8_t v___x_611_; lean_object* v___x_612_; 
v___x_611_ = 0;
v___x_612_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg(v_belowDict_596_, v___f_605_, v___x_611_, v___x_611_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
return v___x_612_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___boxed(lean_object* v_cls_626_, lean_object* v_arg_627_, lean_object* v_C_628_, lean_object* v_belowDict_629_, lean_object* v_F_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
lean_object* v_res_636_; 
v_res_636_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2(v_cls_626_, v_arg_627_, v_C_628_, v_belowDict_629_, v_F_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_);
return v_res_636_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5(void){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4));
v___x_646_ = l_Lean_stringToMessageData(v___x_645_);
return v___x_646_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6));
v___x_649_ = l_Lean_stringToMessageData(v___x_648_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(lean_object* v_C_650_, lean_object* v_belowDict_651_, lean_object* v_arg_652_, lean_object* v_F_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_cls_659_; lean_object* v___x_660_; lean_object* v_a_661_; lean_object* v___f_662_; uint8_t v___x_663_; 
v_cls_659_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v___x_660_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg(v_cls_659_, v_a_656_);
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_661_);
lean_dec_ref(v___x_660_);
lean_inc_ref(v_arg_652_);
v___f_662_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___boxed), 10, 3);
lean_closure_set(v___f_662_, 0, v_cls_659_);
lean_closure_set(v___f_662_, 1, v_arg_652_);
lean_closure_set(v___f_662_, 2, v_C_650_);
v___x_663_ = lean_unbox(v_a_661_);
lean_dec(v_a_661_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; 
lean_dec_ref(v_arg_652_);
v___x_664_ = l_Lean_Elab_Structural_searchPProd___redArg(v_belowDict_651_, v_F_653_, v___f_662_, v_a_654_, v_a_655_, v_a_656_, v_a_657_);
return v___x_664_;
}
else
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_665_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5);
lean_inc_ref(v_belowDict_651_);
v___x_666_ = l_Lean_indentExpr(v_belowDict_651_);
v___x_667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_665_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7);
v___x_669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
v___x_670_ = l_Lean_indentExpr(v_arg_652_);
v___x_671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_669_);
lean_ctor_set(v___x_671_, 1, v___x_670_);
v___x_672_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(v_cls_659_, v___x_671_, v_a_654_, v_a_655_, v_a_656_, v_a_657_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v___x_673_; 
lean_dec_ref(v___x_672_);
v___x_673_ = l_Lean_Elab_Structural_searchPProd___redArg(v_belowDict_651_, v_F_653_, v___f_662_, v_a_654_, v_a_655_, v_a_656_, v_a_657_);
return v___x_673_;
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_dec_ref(v___f_662_);
lean_dec(v_a_657_);
lean_dec_ref(v_a_656_);
lean_dec(v_a_655_);
lean_dec_ref(v_a_654_);
lean_dec_ref(v_F_653_);
lean_dec_ref(v_belowDict_651_);
v_a_674_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_672_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_672_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___boxed(lean_object* v_C_682_, lean_object* v_belowDict_683_, lean_object* v_arg_684_, lean_object* v_F_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(v_C_682_, v_belowDict_683_, v_arg_684_, v_F_685_, v_a_686_, v_a_687_, v_a_688_, v_a_689_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(lean_object* v_t_692_, lean_object* v_x_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v___x_699_; 
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v_t_692_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0___boxed(lean_object* v_t_700_, lean_object* v_x_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(v_t_700_, v_x_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
lean_dec(v___y_703_);
lean_dec_ref(v___y_702_);
lean_dec_ref(v_x_701_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1(lean_object* v_t_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_717_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___closed__1));
v___x_718_ = l_Lean_Core_mkFreshUserName(v___x_717_, v___y_714_, v___y_715_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_728_; 
v_a_719_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_728_ == 0)
{
v___x_721_ = v___x_718_;
v_isShared_722_ = v_isSharedCheck_728_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_718_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_728_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___f_723_; lean_object* v___x_724_; lean_object* v___x_726_; 
v___f_723_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_723_, 0, v_t_711_);
v___x_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_724_, 0, v_a_719_);
lean_ctor_set(v___x_724_, 1, v___f_723_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_724_);
v___x_726_ = v___x_721_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_724_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
else
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
lean_dec_ref(v_t_711_);
v_a_729_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_736_ == 0)
{
v___x_731_ = v___x_718_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_718_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_729_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___boxed(lean_object* v_t_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1(v_t_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2(lean_object* v___x_744_, lean_object* v_a_745_, lean_object* v_x_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_753_ = lean_array_set(v___y_747_, v_a_745_, v___x_744_);
v___x_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
v___x_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___boxed(lean_object* v___x_756_, lean_object* v_a_757_, lean_object* v_x_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2(v___x_756_, v_a_757_, v_x_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec(v_a_757_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3(lean_object* v___x_766_, lean_object* v_a_767_, lean_object* v_x_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_snd_775_; lean_object* v_fst_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_827_; 
v_snd_775_ = lean_ctor_get(v___y_769_, 1);
v_fst_776_ = lean_ctor_get(v___y_769_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___y_769_);
if (v_isSharedCheck_827_ == 0)
{
v___x_778_ = v___y_769_;
v_isShared_779_ = v_isSharedCheck_827_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_snd_775_);
lean_inc(v_fst_776_);
lean_dec(v___y_769_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_827_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v_array_780_; lean_object* v_start_781_; lean_object* v_stop_782_; uint8_t v___x_783_; 
v_array_780_ = lean_ctor_get(v_snd_775_, 0);
v_start_781_ = lean_ctor_get(v_snd_775_, 1);
v_stop_782_ = lean_ctor_get(v_snd_775_, 2);
v___x_783_ = lean_nat_dec_lt(v_start_781_, v_stop_782_);
if (v___x_783_ == 0)
{
lean_object* v___x_785_; 
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
lean_dec_ref(v_a_767_);
lean_dec_ref(v___x_766_);
if (v_isShared_779_ == 0)
{
v___x_785_ = v___x_778_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_fst_776_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_snd_775_);
v___x_785_ = v_reuseFailAlloc_788_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
return v___x_787_;
}
}
else
{
lean_object* v___x_790_; uint8_t v_isShared_791_; uint8_t v_isSharedCheck_823_; 
lean_inc(v_stop_782_);
lean_inc(v_start_781_);
lean_inc_ref(v_array_780_);
v_isSharedCheck_823_ = !lean_is_exclusive(v_snd_775_);
if (v_isSharedCheck_823_ == 0)
{
lean_object* v_unused_824_; lean_object* v_unused_825_; lean_object* v_unused_826_; 
v_unused_824_ = lean_ctor_get(v_snd_775_, 2);
lean_dec(v_unused_824_);
v_unused_825_ = lean_ctor_get(v_snd_775_, 1);
lean_dec(v_unused_825_);
v_unused_826_ = lean_ctor_get(v_snd_775_, 0);
lean_dec(v_unused_826_);
v___x_790_ = v_snd_775_;
v_isShared_791_ = v_isSharedCheck_823_;
goto v_resetjp_789_;
}
else
{
lean_dec(v_snd_775_);
v___x_790_ = lean_box(0);
v_isShared_791_ = v_isSharedCheck_823_;
goto v_resetjp_789_;
}
v_resetjp_789_:
{
lean_object* v___x_792_; lean_object* v___f_793_; size_t v_sz_794_; size_t v___x_795_; lean_object* v___x_8044__overap_796_; lean_object* v___x_797_; 
v___x_792_ = lean_array_fget_borrowed(v_array_780_, v_start_781_);
lean_inc(v___x_792_);
v___f_793_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___boxed), 9, 1);
lean_closure_set(v___f_793_, 0, v___x_792_);
v_sz_794_ = lean_array_size(v_a_767_);
v___x_795_ = ((size_t)0ULL);
v___x_8044__overap_796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_766_, v_a_767_, v___f_793_, v_sz_794_, v___x_795_, v_fst_776_);
v___x_797_ = lean_apply_5(v___x_8044__overap_796_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, lean_box(0));
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_814_; 
v_a_798_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_814_ == 0)
{
v___x_800_ = v___x_797_;
v_isShared_801_ = v_isSharedCheck_814_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_797_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_814_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_805_; 
v___x_802_ = lean_unsigned_to_nat(1u);
v___x_803_ = lean_nat_add(v_start_781_, v___x_802_);
lean_dec(v_start_781_);
if (v_isShared_791_ == 0)
{
lean_ctor_set(v___x_790_, 1, v___x_803_);
v___x_805_ = v___x_790_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_array_780_);
lean_ctor_set(v_reuseFailAlloc_813_, 1, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_813_, 2, v_stop_782_);
v___x_805_ = v_reuseFailAlloc_813_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
lean_object* v___x_807_; 
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 1, v___x_805_);
lean_ctor_set(v___x_778_, 0, v_a_798_);
v___x_807_ = v___x_778_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_798_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v___x_805_);
v___x_807_ = v_reuseFailAlloc_812_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_808_; lean_object* v___x_810_; 
v___x_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v___x_808_);
v___x_810_ = v___x_800_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v___x_808_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
}
else
{
lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
lean_del_object(v___x_790_);
lean_dec(v_stop_782_);
lean_dec(v_start_781_);
lean_dec_ref(v_array_780_);
lean_del_object(v___x_778_);
v_a_815_ = lean_ctor_get(v___x_797_, 0);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_797_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_797_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_dec(v___x_797_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3___boxed(lean_object* v___x_828_, lean_object* v_a_829_, lean_object* v_x_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3(v___x_828_, v_a_829_, v_x_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
return v_res_837_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2));
v___x_842_ = l_Lean_stringToMessageData(v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__5(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4));
v___x_845_ = l_Lean_stringToMessageData(v___x_844_);
return v___x_845_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__8(void){
_start:
{
lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_848_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__7));
v___x_849_ = l_Lean_stringToMessageData(v___x_848_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(lean_object* v___x_850_, lean_object* v___x_851_, lean_object* v_positions_852_, lean_object* v_a_853_, lean_object* v___x_854_, lean_object* v___x_855_, lean_object* v___x_856_, lean_object* v___x_857_, lean_object* v___x_858_, lean_object* v_k_859_, lean_object* v___x_860_, lean_object* v___f_861_, lean_object* v_Cs_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
lean_object* v___x_868_; lean_object* v___x_8072__overap_869_; lean_object* v___x_870_; 
v___x_868_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__0));
lean_inc_ref(v_Cs_862_);
lean_inc_ref(v___x_850_);
v___x_8072__overap_869_ = l_Lean_Elab_Structural_Positions_mapMwith___redArg(v___x_850_, v___x_851_, v___x_868_, v_positions_852_, v_a_853_, v_Cs_862_);
lean_inc(v___y_866_);
lean_inc_ref(v___y_865_);
lean_inc(v___y_864_);
lean_inc_ref(v___y_863_);
v___x_870_ = lean_apply_5(v___x_8072__overap_869_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, lean_box(0));
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_8075__overap_872_; lean_object* v___x_873_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_a_871_);
lean_dec_ref(v___x_870_);
lean_inc(v___x_856_);
lean_inc(v___x_855_);
lean_inc_ref(v___x_854_);
lean_inc_ref(v___x_850_);
v___x_8075__overap_872_ = l_Lean_isTracingEnabledFor___redArg(v___x_850_, v___x_854_, v___x_855_, v___x_856_);
lean_inc(v___y_866_);
lean_inc_ref(v___y_865_);
lean_inc(v___y_864_);
lean_inc_ref(v___y_863_);
v___x_873_ = lean_apply_5(v___x_8075__overap_872_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, lean_box(0));
if (lean_obj_tag(v___x_873_) == 0)
{
lean_object* v_a_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; uint8_t v___x_926_; 
v_a_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_a_874_);
lean_dec_ref(v___x_873_);
v___x_875_ = l_Lean_mkAppN(v___x_857_, v_a_871_);
lean_dec(v_a_871_);
v___x_876_ = l_Subarray_copy___redArg(v___x_858_);
v___x_877_ = l_Lean_mkAppN(v___x_875_, v___x_876_);
lean_dec_ref(v___x_876_);
v___x_926_ = lean_unbox(v_a_874_);
lean_dec(v_a_874_);
if (v___x_926_ == 0)
{
v___y_879_ = v___y_863_;
v___y_880_ = v___y_864_;
v___y_881_ = v___y_865_;
v___y_882_ = v___y_866_;
goto v___jp_878_;
}
else
{
lean_object* v___f_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v_toMonadRef_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_8135__overap_944_; lean_object* v___x_945_; 
v___f_927_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_928_ = l_Lean_Core_instMonadQuotationCoreM;
lean_inc(v___x_860_);
v___x_929_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_927_, v___x_860_, v___x_928_);
lean_inc(v___f_861_);
v___x_930_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_927_, v___f_861_, v___x_929_);
v_toMonadRef_931_ = lean_ctor_get(v___x_930_, 0);
lean_inc_ref(v_toMonadRef_931_);
lean_dec_ref(v___x_930_);
v___x_932_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_933_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__5);
lean_inc_ref(v_Cs_862_);
v___x_934_ = lean_array_to_list(v_Cs_862_);
v___x_935_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__6));
v___x_936_ = lean_box(0);
v___x_937_ = l_List_mapTR_loop___redArg(v___x_935_, v___x_934_, v___x_936_);
v___x_938_ = l_Lean_MessageData_ofList(v___x_937_);
v___x_939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_933_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__8);
v___x_941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_939_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
lean_inc_ref(v___x_877_);
v___x_942_ = l_Lean_indentExpr(v___x_877_);
v___x_943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_941_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
lean_inc(v___x_856_);
lean_inc_ref(v___x_854_);
lean_inc_ref(v___x_850_);
v___x_8135__overap_944_ = l_Lean_addTrace___redArg(v___x_850_, v___x_854_, v_toMonadRef_931_, v___x_932_, v___x_856_, v___x_943_);
lean_inc(v___y_866_);
lean_inc_ref(v___y_865_);
lean_inc(v___y_864_);
lean_inc_ref(v___y_863_);
v___x_945_ = lean_apply_5(v___x_8135__overap_944_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, lean_box(0));
if (lean_obj_tag(v___x_945_) == 0)
{
lean_dec_ref(v___x_945_);
v___y_879_ = v___y_863_;
v___y_880_ = v___y_864_;
v___y_881_ = v___y_865_;
v___y_882_ = v___y_866_;
goto v___jp_878_;
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec_ref(v___x_877_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec_ref(v_Cs_862_);
lean_dec(v___f_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_k_859_);
lean_dec(v___x_856_);
lean_dec(v___x_855_);
lean_dec_ref(v___x_854_);
lean_dec_ref(v___x_850_);
v_a_946_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_945_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_945_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
v___jp_878_:
{
lean_object* v___x_883_; 
lean_inc(v___y_882_);
lean_inc_ref(v___y_881_);
lean_inc(v___y_880_);
lean_inc_ref(v___y_879_);
lean_inc_ref(v___x_877_);
v___x_883_ = l_Lean_Meta_isTypeCorrect(v___x_877_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; uint8_t v___x_885_; 
v_a_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref(v___x_883_);
v___x_885_ = lean_unbox(v_a_884_);
lean_dec(v_a_884_);
if (v___x_885_ == 0)
{
lean_object* v___x_8090__overap_886_; lean_object* v___x_887_; 
lean_inc(v___x_856_);
lean_inc_ref(v___x_854_);
lean_inc_ref(v___x_850_);
v___x_8090__overap_886_ = l_Lean_isTracingEnabledFor___redArg(v___x_850_, v___x_854_, v___x_855_, v___x_856_);
lean_inc(v___y_882_);
lean_inc_ref(v___y_881_);
lean_inc(v___y_880_);
lean_inc_ref(v___y_879_);
v___x_887_ = lean_apply_5(v___x_8090__overap_886_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, lean_box(0));
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; uint8_t v___x_889_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
lean_dec_ref(v___x_887_);
v___x_889_ = lean_unbox(v_a_888_);
lean_dec(v_a_888_);
if (v___x_889_ == 0)
{
lean_object* v___x_890_; 
lean_dec(v___f_861_);
lean_dec(v___x_860_);
lean_dec(v___x_856_);
lean_dec_ref(v___x_854_);
lean_dec_ref(v___x_850_);
v___x_890_ = lean_apply_7(v_k_859_, v_Cs_862_, v___x_877_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, lean_box(0));
return v___x_890_;
}
else
{
lean_object* v___f_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v_toMonadRef_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_8102__overap_898_; lean_object* v___x_899_; 
v___f_891_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_892_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_893_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_891_, v___x_860_, v___x_892_);
v___x_894_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_891_, v___f_861_, v___x_893_);
v_toMonadRef_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc_ref(v_toMonadRef_895_);
lean_dec_ref(v___x_894_);
v___x_896_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_897_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3);
v___x_8102__overap_898_ = l_Lean_addTrace___redArg(v___x_850_, v___x_854_, v_toMonadRef_895_, v___x_896_, v___x_856_, v___x_897_);
lean_inc(v___y_882_);
lean_inc_ref(v___y_881_);
lean_inc(v___y_880_);
lean_inc_ref(v___y_879_);
v___x_899_ = lean_apply_5(v___x_8102__overap_898_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, lean_box(0));
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v___x_900_; 
lean_dec_ref(v___x_899_);
v___x_900_ = lean_apply_7(v_k_859_, v_Cs_862_, v___x_877_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, lean_box(0));
return v___x_900_;
}
else
{
lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_908_; 
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v_Cs_862_);
lean_dec_ref(v_k_859_);
v_a_901_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_908_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_908_ == 0)
{
v___x_903_ = v___x_899_;
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_899_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_908_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_906_; 
if (v_isShared_904_ == 0)
{
v___x_906_ = v___x_903_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_907_; 
v_reuseFailAlloc_907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_907_, 0, v_a_901_);
v___x_906_ = v_reuseFailAlloc_907_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
return v___x_906_;
}
}
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v_Cs_862_);
lean_dec(v___f_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_k_859_);
lean_dec(v___x_856_);
lean_dec_ref(v___x_854_);
lean_dec_ref(v___x_850_);
v_a_909_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_887_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_887_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_object* v___x_917_; 
lean_dec(v___f_861_);
lean_dec(v___x_860_);
lean_dec(v___x_856_);
lean_dec(v___x_855_);
lean_dec_ref(v___x_854_);
lean_dec_ref(v___x_850_);
v___x_917_ = lean_apply_7(v_k_859_, v_Cs_862_, v___x_877_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, lean_box(0));
return v___x_917_;
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec_ref(v___x_877_);
lean_dec_ref(v_Cs_862_);
lean_dec(v___f_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_k_859_);
lean_dec(v___x_856_);
lean_dec(v___x_855_);
lean_dec_ref(v___x_854_);
lean_dec_ref(v___x_850_);
v_a_918_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_883_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_883_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec(v_a_871_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec_ref(v_Cs_862_);
lean_dec(v___f_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_k_859_);
lean_dec_ref(v___x_858_);
lean_dec_ref(v___x_857_);
lean_dec(v___x_856_);
lean_dec(v___x_855_);
lean_dec_ref(v___x_854_);
lean_dec_ref(v___x_850_);
v_a_954_ = lean_ctor_get(v___x_873_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_873_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_873_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_873_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec_ref(v_Cs_862_);
lean_dec(v___f_861_);
lean_dec(v___x_860_);
lean_dec_ref(v_k_859_);
lean_dec_ref(v___x_858_);
lean_dec_ref(v___x_857_);
lean_dec(v___x_856_);
lean_dec(v___x_855_);
lean_dec_ref(v___x_854_);
lean_dec_ref(v___x_850_);
v_a_962_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_870_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_870_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed(lean_object** _args){
lean_object* v___x_970_ = _args[0];
lean_object* v___x_971_ = _args[1];
lean_object* v_positions_972_ = _args[2];
lean_object* v_a_973_ = _args[3];
lean_object* v___x_974_ = _args[4];
lean_object* v___x_975_ = _args[5];
lean_object* v___x_976_ = _args[6];
lean_object* v___x_977_ = _args[7];
lean_object* v___x_978_ = _args[8];
lean_object* v_k_979_ = _args[9];
lean_object* v___x_980_ = _args[10];
lean_object* v___f_981_ = _args[11];
lean_object* v_Cs_982_ = _args[12];
lean_object* v___y_983_ = _args[13];
lean_object* v___y_984_ = _args[14];
lean_object* v___y_985_ = _args[15];
lean_object* v___y_986_ = _args[16];
lean_object* v___y_987_ = _args[17];
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(v___x_970_, v___x_971_, v_positions_972_, v_a_973_, v___x_974_, v___x_975_, v___x_976_, v___x_977_, v___x_978_, v_k_979_, v___x_980_, v___f_981_, v_Cs_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
return v_res_988_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_unsigned_to_nat(37u);
v___x_990_ = l_Lean_Level_ofNat(v___x_989_);
return v___x_990_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0);
v___x_992_ = l_Lean_Expr_sort___override(v___x_991_);
return v___x_992_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2));
v___x_995_ = l_Lean_stringToMessageData(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4));
v___x_998_ = l_Lean_stringToMessageData(v___x_997_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(lean_object* v_positions_999_, lean_object* v___x_1000_, lean_object* v___f_1001_, lean_object* v___f_1002_, lean_object* v___x_1003_, lean_object* v_numTypeFormers_1004_, lean_object* v___x_1005_, lean_object* v___x_1006_, lean_object* v___x_1007_, lean_object* v___x_1008_, lean_object* v_k_1009_, lean_object* v___x_1010_, lean_object* v___f_1011_, lean_object* v_numIndParams_1012_, lean_object* v_a_1013_, lean_object* v_f_1014_, lean_object* v_args_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1068_; lean_object* v___y_1069_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1144_; lean_object* v___x_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; 
v___x_1154_ = lean_nat_add(v_numIndParams_1012_, v_numTypeFormers_1004_);
v___x_1155_ = lean_array_get_size(v_args_1015_);
v___x_1156_ = lean_nat_dec_lt(v___x_1154_, v___x_1155_);
lean_dec(v___x_1154_);
if (v___x_1156_ == 0)
{
lean_object* v___x_8255__overap_1157_; lean_object* v___x_1158_; 
lean_dec_ref(v_args_1015_);
lean_dec_ref(v_f_1014_);
lean_dec(v_numIndParams_1012_);
lean_dec_ref(v_k_1009_);
lean_dec_ref(v___x_1008_);
lean_dec(v_numTypeFormers_1004_);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v___f_1002_);
lean_dec_ref(v___f_1001_);
lean_dec_ref(v_positions_999_);
lean_inc(v___x_1007_);
lean_inc_ref(v___x_1005_);
lean_inc_ref(v___x_1000_);
v___x_8255__overap_1157_ = l_Lean_isTracingEnabledFor___redArg(v___x_1000_, v___x_1005_, v___x_1006_, v___x_1007_);
lean_inc(v___y_1019_);
lean_inc_ref(v___y_1018_);
lean_inc(v___y_1017_);
lean_inc_ref(v___y_1016_);
v___x_1158_ = lean_apply_5(v___x_8255__overap_1157_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, lean_box(0));
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; uint8_t v___x_1160_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_a_1159_);
lean_dec_ref(v___x_1158_);
v___x_1160_ = lean_unbox(v_a_1159_);
lean_dec(v_a_1159_);
if (v___x_1160_ == 0)
{
lean_dec_ref(v_a_1013_);
lean_dec(v___f_1011_);
lean_dec(v___x_1010_);
lean_dec(v___x_1007_);
lean_dec_ref(v___x_1005_);
lean_dec_ref(v___x_1000_);
v___y_1141_ = v___y_1016_;
v___y_1142_ = v___y_1017_;
v___y_1143_ = v___y_1018_;
v___y_1144_ = v___y_1019_;
goto v___jp_1140_;
}
else
{
lean_object* v___f_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v_toMonadRef_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_8280__overap_1170_; lean_object* v___x_1171_; 
v___f_1161_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_1162_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1163_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1161_, v___x_1010_, v___x_1162_);
v___x_1164_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1161_, v___f_1011_, v___x_1163_);
v_toMonadRef_1165_ = lean_ctor_get(v___x_1164_, 0);
lean_inc_ref(v_toMonadRef_1165_);
lean_dec_ref(v___x_1164_);
v___x_1166_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1167_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5);
v___x_1168_ = l_Lean_indentExpr(v_a_1013_);
v___x_1169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1167_);
lean_ctor_set(v___x_1169_, 1, v___x_1168_);
v___x_8280__overap_1170_ = l_Lean_addTrace___redArg(v___x_1000_, v___x_1005_, v_toMonadRef_1165_, v___x_1166_, v___x_1007_, v___x_1169_);
lean_inc(v___y_1019_);
lean_inc_ref(v___y_1018_);
lean_inc(v___y_1017_);
lean_inc_ref(v___y_1016_);
v___x_1171_ = lean_apply_5(v___x_8280__overap_1170_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, lean_box(0));
if (lean_obj_tag(v___x_1171_) == 0)
{
lean_dec_ref(v___x_1171_);
v___y_1141_ = v___y_1016_;
v___y_1142_ = v___y_1017_;
v___y_1143_ = v___y_1018_;
v___y_1144_ = v___y_1019_;
goto v___jp_1140_;
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
v_a_1172_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1171_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1171_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
lean_dec_ref(v_a_1013_);
lean_dec(v___f_1011_);
lean_dec(v___x_1010_);
lean_dec(v___x_1007_);
lean_dec_ref(v___x_1005_);
lean_dec_ref(v___x_1000_);
v_a_1180_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1182_ = v___x_1158_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1158_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_a_1180_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
}
else
{
lean_dec_ref(v_a_1013_);
v___y_1129_ = v___y_1016_;
v___y_1130_ = v___y_1017_;
v___y_1131_ = v___y_1018_;
v___y_1132_ = v___y_1019_;
goto v___jp_1128_;
}
v___jp_1021_:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; size_t v_sz_1035_; size_t v___x_1036_; lean_object* v___x_8181__overap_1037_; lean_object* v___x_1038_; 
v___x_1030_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1);
v___x_1031_ = lean_mk_array(v___y_1025_, v___x_1030_);
v___x_1032_ = lean_array_get_size(v___y_1023_);
v___x_1033_ = l_Array_toSubarray___redArg(v___y_1023_, v___y_1022_, v___x_1032_);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1031_);
lean_ctor_set(v___x_1034_, 1, v___x_1033_);
v_sz_1035_ = lean_array_size(v_positions_999_);
v___x_1036_ = ((size_t)0ULL);
lean_inc_ref(v___x_1000_);
v___x_8181__overap_1037_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1000_, v_positions_999_, v___f_1001_, v_sz_1035_, v___x_1036_, v___x_1034_);
lean_inc(v___y_1029_);
lean_inc_ref(v___y_1028_);
lean_inc(v___y_1027_);
lean_inc_ref(v___y_1026_);
v___x_1038_ = lean_apply_5(v___x_8181__overap_1037_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, lean_box(0));
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; lean_object* v_fst_1040_; size_t v_sz_1041_; lean_object* v___x_8184__overap_1042_; lean_object* v___x_1043_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_a_1039_);
lean_dec_ref(v___x_1038_);
v_fst_1040_ = lean_ctor_get(v_a_1039_, 0);
lean_inc(v_fst_1040_);
lean_dec(v_a_1039_);
v_sz_1041_ = lean_array_size(v_fst_1040_);
lean_inc_ref(v___x_1000_);
v___x_8184__overap_1042_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1000_, v___f_1002_, v_sz_1041_, v___x_1036_, v_fst_1040_);
lean_inc(v___y_1029_);
lean_inc_ref(v___y_1028_);
lean_inc(v___y_1027_);
lean_inc_ref(v___y_1026_);
v___x_1043_ = lean_apply_5(v___x_8184__overap_1042_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, lean_box(0));
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v_a_1044_; uint8_t v___x_1045_; lean_object* v___x_8188__overap_1046_; lean_object* v___x_1047_; 
v_a_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_a_1044_);
lean_dec_ref(v___x_1043_);
v___x_1045_ = 0;
v___x_8188__overap_1046_ = l_Lean_Meta_withLocalDeclsD___redArg(v___x_1003_, v___x_1000_, v_a_1044_, v___y_1024_, v___x_1045_);
v___x_1047_ = lean_apply_5(v___x_8188__overap_1046_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, lean_box(0));
return v___x_1047_;
}
else
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec_ref(v___y_1024_);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v___x_1000_);
v_a_1048_ = lean_ctor_get(v___x_1043_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_1043_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1050_ = v___x_1043_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_1043_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_a_1048_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec_ref(v___y_1024_);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v___f_1002_);
lean_dec_ref(v___x_1000_);
v_a_1056_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1038_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1038_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
v___jp_1064_:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1072_ = l_Subarray_copy___redArg(v___y_1069_);
v___x_1073_ = l_Lean_mkAppN(v_f_1014_, v___x_1072_);
lean_dec_ref(v___x_1072_);
lean_inc(v___y_1066_);
lean_inc_ref(v___y_1067_);
lean_inc(v___y_1070_);
lean_inc_ref(v___y_1068_);
lean_inc_ref(v___x_1073_);
v___x_1074_ = l_Lean_Meta_inferArgumentTypesN(v_numTypeFormers_1004_, v___x_1073_, v___y_1068_, v___y_1070_, v___y_1067_, v___y_1066_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_8209__overap_1076_; lean_object* v___x_1077_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
lean_inc(v_a_1075_);
lean_dec_ref(v___x_1074_);
lean_inc(v___x_1007_);
lean_inc(v___x_1006_);
lean_inc_ref(v___x_1005_);
lean_inc_ref(v___x_1000_);
v___x_8209__overap_1076_ = l_Lean_isTracingEnabledFor___redArg(v___x_1000_, v___x_1005_, v___x_1006_, v___x_1007_);
lean_inc(v___y_1066_);
lean_inc_ref(v___y_1067_);
lean_inc(v___y_1070_);
lean_inc_ref(v___y_1068_);
v___x_1077_ = lean_apply_5(v___x_8209__overap_1076_, v___y_1068_, v___y_1070_, v___y_1067_, v___y_1066_, lean_box(0));
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v_lower_1079_; lean_object* v_upper_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1111_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref(v___x_1077_);
v_lower_1079_ = lean_ctor_get(v___y_1071_, 0);
v_upper_1080_ = lean_ctor_get(v___y_1071_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___y_1071_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1082_ = v___y_1071_;
v_isShared_1083_ = v_isSharedCheck_1111_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_upper_1080_);
lean_inc(v_lower_1079_);
lean_dec(v___y_1071_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1111_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1084_; lean_object* v___f_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; 
v___x_1084_ = l_Array_toSubarray___redArg(v_args_1015_, v_lower_1079_, v_upper_1080_);
lean_inc(v___f_1011_);
lean_inc(v___x_1010_);
lean_inc(v___x_1007_);
lean_inc_ref(v___x_1005_);
lean_inc(v_a_1075_);
lean_inc_ref(v_positions_999_);
lean_inc_ref(v___x_1000_);
v___f_1085_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed), 18, 12);
lean_closure_set(v___f_1085_, 0, v___x_1000_);
lean_closure_set(v___f_1085_, 1, v___x_1008_);
lean_closure_set(v___f_1085_, 2, v_positions_999_);
lean_closure_set(v___f_1085_, 3, v_a_1075_);
lean_closure_set(v___f_1085_, 4, v___x_1005_);
lean_closure_set(v___f_1085_, 5, v___x_1006_);
lean_closure_set(v___f_1085_, 6, v___x_1007_);
lean_closure_set(v___f_1085_, 7, v___x_1073_);
lean_closure_set(v___f_1085_, 8, v___x_1084_);
lean_closure_set(v___f_1085_, 9, v_k_1009_);
lean_closure_set(v___f_1085_, 10, v___x_1010_);
lean_closure_set(v___f_1085_, 11, v___f_1011_);
v___x_1086_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_999_);
v___x_1087_ = lean_unbox(v_a_1078_);
lean_dec(v_a_1078_);
if (v___x_1087_ == 0)
{
lean_del_object(v___x_1082_);
lean_dec(v___f_1011_);
lean_dec(v___x_1010_);
lean_dec(v___x_1007_);
lean_dec_ref(v___x_1005_);
v___y_1022_ = v___y_1065_;
v___y_1023_ = v_a_1075_;
v___y_1024_ = v___f_1085_;
v___y_1025_ = v___x_1086_;
v___y_1026_ = v___y_1068_;
v___y_1027_ = v___y_1070_;
v___y_1028_ = v___y_1067_;
v___y_1029_ = v___y_1066_;
goto v___jp_1021_;
}
else
{
lean_object* v___f_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v_toMonadRef_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1099_; 
v___f_1088_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_1089_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1090_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1088_, v___x_1010_, v___x_1089_);
v___x_1091_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1088_, v___f_1011_, v___x_1090_);
v_toMonadRef_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc_ref(v_toMonadRef_1092_);
lean_dec_ref(v___x_1091_);
v___x_1093_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1094_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3);
lean_inc(v___x_1086_);
v___x_1095_ = l_Nat_reprFast(v___x_1086_);
v___x_1096_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
v___x_1097_ = l_Lean_MessageData_ofFormat(v___x_1096_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set_tag(v___x_1082_, 7);
lean_ctor_set(v___x_1082_, 1, v___x_1097_);
lean_ctor_set(v___x_1082_, 0, v___x_1094_);
v___x_1099_ = v___x_1082_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1094_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
lean_object* v___x_8227__overap_1100_; lean_object* v___x_1101_; 
lean_inc_ref(v___x_1000_);
v___x_8227__overap_1100_ = l_Lean_addTrace___redArg(v___x_1000_, v___x_1005_, v_toMonadRef_1092_, v___x_1093_, v___x_1007_, v___x_1099_);
lean_inc(v___y_1066_);
lean_inc_ref(v___y_1067_);
lean_inc(v___y_1070_);
lean_inc_ref(v___y_1068_);
v___x_1101_ = lean_apply_5(v___x_8227__overap_1100_, v___y_1068_, v___y_1070_, v___y_1067_, v___y_1066_, lean_box(0));
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_dec_ref(v___x_1101_);
v___y_1022_ = v___y_1065_;
v___y_1023_ = v_a_1075_;
v___y_1024_ = v___f_1085_;
v___y_1025_ = v___x_1086_;
v___y_1026_ = v___y_1068_;
v___y_1027_ = v___y_1070_;
v___y_1028_ = v___y_1067_;
v___y_1029_ = v___y_1066_;
goto v___jp_1021_;
}
else
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
lean_dec(v___x_1086_);
lean_dec_ref(v___f_1085_);
lean_dec(v_a_1075_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v___f_1002_);
lean_dec_ref(v___f_1001_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v_positions_999_);
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1101_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1101_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1119_; 
lean_dec(v_a_1075_);
lean_dec_ref(v___x_1073_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v_args_1015_);
lean_dec(v___f_1011_);
lean_dec(v___x_1010_);
lean_dec_ref(v_k_1009_);
lean_dec_ref(v___x_1008_);
lean_dec(v___x_1007_);
lean_dec(v___x_1006_);
lean_dec_ref(v___x_1005_);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v___f_1002_);
lean_dec_ref(v___f_1001_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v_positions_999_);
v_a_1112_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1114_ = v___x_1077_;
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1077_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
if (v_isShared_1115_ == 0)
{
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1112_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
else
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec_ref(v___x_1073_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v_args_1015_);
lean_dec(v___f_1011_);
lean_dec(v___x_1010_);
lean_dec_ref(v_k_1009_);
lean_dec_ref(v___x_1008_);
lean_dec(v___x_1007_);
lean_dec(v___x_1006_);
lean_dec_ref(v___x_1005_);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v___f_1002_);
lean_dec_ref(v___f_1001_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v_positions_999_);
v_a_1120_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v___x_1074_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1074_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_a_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
v___jp_1128_:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; uint8_t v___x_1137_; 
v___x_1133_ = lean_unsigned_to_nat(0u);
lean_inc(v_numIndParams_1012_);
lean_inc_ref(v_args_1015_);
v___x_1134_ = l_Array_toSubarray___redArg(v_args_1015_, v___x_1133_, v_numIndParams_1012_);
v___x_1135_ = lean_nat_add(v_numIndParams_1012_, v_numTypeFormers_1004_);
lean_dec(v_numIndParams_1012_);
v___x_1136_ = lean_array_get_size(v_args_1015_);
v___x_1137_ = lean_nat_dec_le(v___x_1135_, v___x_1133_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1135_);
lean_ctor_set(v___x_1138_, 1, v___x_1136_);
v___y_1065_ = v___x_1133_;
v___y_1066_ = v___y_1132_;
v___y_1067_ = v___y_1131_;
v___y_1068_ = v___y_1129_;
v___y_1069_ = v___x_1134_;
v___y_1070_ = v___y_1130_;
v___y_1071_ = v___x_1138_;
goto v___jp_1064_;
}
else
{
lean_object* v___x_1139_; 
lean_dec(v___x_1135_);
v___x_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1133_);
lean_ctor_set(v___x_1139_, 1, v___x_1136_);
v___y_1065_ = v___x_1133_;
v___y_1066_ = v___y_1132_;
v___y_1067_ = v___y_1131_;
v___y_1068_ = v___y_1129_;
v___y_1069_ = v___x_1134_;
v___y_1070_ = v___y_1130_;
v___y_1071_ = v___x_1139_;
goto v___jp_1064_;
}
}
v___jp_1140_:
{
lean_object* v___x_1145_; lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
v___x_1145_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1145_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1145_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_positions_1188_ = _args[0];
lean_object* v___x_1189_ = _args[1];
lean_object* v___f_1190_ = _args[2];
lean_object* v___f_1191_ = _args[3];
lean_object* v___x_1192_ = _args[4];
lean_object* v_numTypeFormers_1193_ = _args[5];
lean_object* v___x_1194_ = _args[6];
lean_object* v___x_1195_ = _args[7];
lean_object* v___x_1196_ = _args[8];
lean_object* v___x_1197_ = _args[9];
lean_object* v_k_1198_ = _args[10];
lean_object* v___x_1199_ = _args[11];
lean_object* v___f_1200_ = _args[12];
lean_object* v_numIndParams_1201_ = _args[13];
lean_object* v_a_1202_ = _args[14];
lean_object* v_f_1203_ = _args[15];
lean_object* v_args_1204_ = _args[16];
lean_object* v___y_1205_ = _args[17];
lean_object* v___y_1206_ = _args[18];
lean_object* v___y_1207_ = _args[19];
lean_object* v___y_1208_ = _args[20];
lean_object* v___y_1209_ = _args[21];
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(v_positions_1188_, v___x_1189_, v___f_1190_, v___f_1191_, v___x_1192_, v_numTypeFormers_1193_, v___x_1194_, v___x_1195_, v___x_1196_, v___x_1197_, v_k_1198_, v___x_1199_, v___f_1200_, v_numIndParams_1201_, v_a_1202_, v_f_1203_, v_args_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_);
return v_res_1210_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0(void){
_start:
{
lean_object* v___x_1211_; 
v___x_1211_ = l_instMonadEST(lean_box(0), lean_box(0));
return v___x_1211_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1(void){
_start:
{
lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1212_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0);
v___x_1213_ = l_ReaderT_instMonad___redArg(v___x_1212_);
return v___x_1213_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8(void){
_start:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1220_ = l_Lean_Core_instMonadTraceCoreM;
v___x_1221_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7));
v___x_1222_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1221_, v___x_1220_);
return v___x_1222_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9(void){
_start:
{
lean_object* v___x_1223_; lean_object* v___f_1224_; lean_object* v___x_1225_; 
v___x_1223_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8);
v___f_1224_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6));
v___x_1225_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1224_, v___x_1223_);
return v___x_1225_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14(void){
_start:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___f_1234_; lean_object* v___x_1235_; 
v___x_1232_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1233_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7));
v___f_1234_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_1235_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1234_, v___x_1233_, v___x_1232_);
return v___x_1235_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15(void){
_start:
{
lean_object* v___x_1236_; lean_object* v___f_1237_; lean_object* v___f_1238_; lean_object* v___x_1239_; 
v___x_1236_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14);
v___f_1237_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6));
v___f_1238_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_1239_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1238_, v___f_1237_, v___x_1236_);
return v___x_1239_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17(void){
_start:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1241_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__16));
v___x_1242_ = l_Lean_stringToMessageData(v___x_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(lean_object* v_below_1243_, lean_object* v_numIndParams_1244_, lean_object* v_positions_1245_, lean_object* v_k_1246_, lean_object* v_a_1247_, lean_object* v_a_1248_, lean_object* v_a_1249_, lean_object* v_a_1250_){
_start:
{
lean_object* v___x_1252_; lean_object* v_toApplicative_1253_; lean_object* v_toFunctor_1254_; lean_object* v_toSeq_1255_; lean_object* v_toSeqLeft_1256_; lean_object* v_toSeqRight_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1435_; 
v___x_1252_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_1253_ = lean_ctor_get(v___x_1252_, 0);
lean_inc_ref(v_toApplicative_1253_);
v_toFunctor_1254_ = lean_ctor_get(v_toApplicative_1253_, 0);
v_toSeq_1255_ = lean_ctor_get(v_toApplicative_1253_, 2);
v_toSeqLeft_1256_ = lean_ctor_get(v_toApplicative_1253_, 3);
v_toSeqRight_1257_ = lean_ctor_get(v_toApplicative_1253_, 4);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_toApplicative_1253_);
if (v_isSharedCheck_1435_ == 0)
{
lean_object* v_unused_1436_; 
v_unused_1436_ = lean_ctor_get(v_toApplicative_1253_, 1);
lean_dec(v_unused_1436_);
v___x_1259_ = v_toApplicative_1253_;
v_isShared_1260_ = v_isSharedCheck_1435_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_toSeqRight_1257_);
lean_inc(v_toSeqLeft_1256_);
lean_inc(v_toSeq_1255_);
lean_inc(v_toFunctor_1254_);
lean_dec(v_toApplicative_1253_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1435_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___f_1261_; lean_object* v___f_1262_; lean_object* v___f_1263_; lean_object* v___f_1264_; lean_object* v___x_1265_; lean_object* v___f_1266_; lean_object* v___f_1267_; lean_object* v___f_1268_; lean_object* v___x_1270_; 
v___f_1261_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2));
v___f_1262_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3));
lean_inc_ref(v_toFunctor_1254_);
v___f_1263_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1263_, 0, v_toFunctor_1254_);
v___f_1264_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1264_, 0, v_toFunctor_1254_);
v___x_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___f_1263_);
lean_ctor_set(v___x_1265_, 1, v___f_1264_);
v___f_1266_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1266_, 0, v_toSeqRight_1257_);
v___f_1267_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1267_, 0, v_toSeqLeft_1256_);
v___f_1268_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1268_, 0, v_toSeq_1255_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 4, v___f_1266_);
lean_ctor_set(v___x_1259_, 3, v___f_1267_);
lean_ctor_set(v___x_1259_, 2, v___f_1268_);
lean_ctor_set(v___x_1259_, 1, v___f_1261_);
lean_ctor_set(v___x_1259_, 0, v___x_1265_);
v___x_1270_ = v___x_1259_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1265_);
lean_ctor_set(v_reuseFailAlloc_1434_, 1, v___f_1261_);
lean_ctor_set(v_reuseFailAlloc_1434_, 2, v___f_1268_);
lean_ctor_set(v_reuseFailAlloc_1434_, 3, v___f_1267_);
lean_ctor_set(v_reuseFailAlloc_1434_, 4, v___f_1266_);
v___x_1270_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v_toApplicative_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1432_; 
v___x_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
lean_ctor_set(v___x_1271_, 1, v___f_1262_);
v___x_1272_ = l_ReaderT_instMonad___redArg(v___x_1271_);
v_toApplicative_1273_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1432_ == 0)
{
lean_object* v_unused_1433_; 
v_unused_1433_ = lean_ctor_get(v___x_1272_, 1);
lean_dec(v_unused_1433_);
v___x_1275_ = v___x_1272_;
v_isShared_1276_ = v_isSharedCheck_1432_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_toApplicative_1273_);
lean_dec(v___x_1272_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1432_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v_toFunctor_1277_; lean_object* v_toSeq_1278_; lean_object* v_toSeqLeft_1279_; lean_object* v_toSeqRight_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1430_; 
v_toFunctor_1277_ = lean_ctor_get(v_toApplicative_1273_, 0);
v_toSeq_1278_ = lean_ctor_get(v_toApplicative_1273_, 2);
v_toSeqLeft_1279_ = lean_ctor_get(v_toApplicative_1273_, 3);
v_toSeqRight_1280_ = lean_ctor_get(v_toApplicative_1273_, 4);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_toApplicative_1273_);
if (v_isSharedCheck_1430_ == 0)
{
lean_object* v_unused_1431_; 
v_unused_1431_ = lean_ctor_get(v_toApplicative_1273_, 1);
lean_dec(v_unused_1431_);
v___x_1282_ = v_toApplicative_1273_;
v_isShared_1283_ = v_isSharedCheck_1430_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_toSeqRight_1280_);
lean_inc(v_toSeqLeft_1279_);
lean_inc(v_toSeq_1278_);
lean_inc(v_toFunctor_1277_);
lean_dec(v_toApplicative_1273_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1430_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___f_1284_; lean_object* v___f_1285_; lean_object* v___f_1286_; lean_object* v___f_1287_; lean_object* v___x_1288_; lean_object* v___f_1289_; lean_object* v___f_1290_; lean_object* v___f_1291_; lean_object* v___x_1293_; 
v___f_1284_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4));
v___f_1285_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5));
lean_inc_ref(v_toFunctor_1277_);
v___f_1286_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1286_, 0, v_toFunctor_1277_);
v___f_1287_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1287_, 0, v_toFunctor_1277_);
v___x_1288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___f_1286_);
lean_ctor_set(v___x_1288_, 1, v___f_1287_);
v___f_1289_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1289_, 0, v_toSeqRight_1280_);
v___f_1290_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1290_, 0, v_toSeqLeft_1279_);
v___f_1291_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1291_, 0, v_toSeq_1278_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 4, v___f_1289_);
lean_ctor_set(v___x_1282_, 3, v___f_1290_);
lean_ctor_set(v___x_1282_, 2, v___f_1291_);
lean_ctor_set(v___x_1282_, 1, v___f_1284_);
lean_ctor_set(v___x_1282_, 0, v___x_1288_);
v___x_1293_ = v___x_1282_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v___x_1288_);
lean_ctor_set(v_reuseFailAlloc_1429_, 1, v___f_1284_);
lean_ctor_set(v_reuseFailAlloc_1429_, 2, v___f_1291_);
lean_ctor_set(v_reuseFailAlloc_1429_, 3, v___f_1290_);
lean_ctor_set(v_reuseFailAlloc_1429_, 4, v___f_1289_);
v___x_1293_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
lean_object* v___x_1295_; 
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 1, v___f_1285_);
lean_ctor_set(v___x_1275_, 0, v___x_1293_);
v___x_1295_ = v___x_1275_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1293_);
lean_ctor_set(v_reuseFailAlloc_1428_, 1, v___f_1285_);
v___x_1295_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
lean_object* v___f_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v_toApplicative_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1426_; 
v___f_1296_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6));
v___x_1297_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7));
v___x_1298_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9);
v_toApplicative_1299_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1426_ == 0)
{
lean_object* v_unused_1427_; 
v_unused_1427_ = lean_ctor_get(v___x_1252_, 1);
lean_dec(v_unused_1427_);
v___x_1301_ = v___x_1252_;
v_isShared_1302_ = v_isSharedCheck_1426_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_toApplicative_1299_);
lean_dec(v___x_1252_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1426_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v_toFunctor_1303_; lean_object* v_toSeq_1304_; lean_object* v_toSeqLeft_1305_; lean_object* v_toSeqRight_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1424_; 
v_toFunctor_1303_ = lean_ctor_get(v_toApplicative_1299_, 0);
v_toSeq_1304_ = lean_ctor_get(v_toApplicative_1299_, 2);
v_toSeqLeft_1305_ = lean_ctor_get(v_toApplicative_1299_, 3);
v_toSeqRight_1306_ = lean_ctor_get(v_toApplicative_1299_, 4);
v_isSharedCheck_1424_ = !lean_is_exclusive(v_toApplicative_1299_);
if (v_isSharedCheck_1424_ == 0)
{
lean_object* v_unused_1425_; 
v_unused_1425_ = lean_ctor_get(v_toApplicative_1299_, 1);
lean_dec(v_unused_1425_);
v___x_1308_ = v_toApplicative_1299_;
v_isShared_1309_ = v_isSharedCheck_1424_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_toSeqRight_1306_);
lean_inc(v_toSeqLeft_1305_);
lean_inc(v_toSeq_1304_);
lean_inc(v_toFunctor_1303_);
lean_dec(v_toApplicative_1299_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1424_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___f_1310_; lean_object* v___f_1311_; lean_object* v___x_1312_; lean_object* v___f_1313_; lean_object* v___f_1314_; lean_object* v___f_1315_; lean_object* v___x_1317_; 
lean_inc_ref(v_toFunctor_1303_);
v___f_1310_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1310_, 0, v_toFunctor_1303_);
v___f_1311_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1311_, 0, v_toFunctor_1303_);
v___x_1312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___f_1310_);
lean_ctor_set(v___x_1312_, 1, v___f_1311_);
v___f_1313_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1313_, 0, v_toSeqRight_1306_);
v___f_1314_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1314_, 0, v_toSeqLeft_1305_);
v___f_1315_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1315_, 0, v_toSeq_1304_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 4, v___f_1313_);
lean_ctor_set(v___x_1308_, 3, v___f_1314_);
lean_ctor_set(v___x_1308_, 2, v___f_1315_);
lean_ctor_set(v___x_1308_, 1, v___f_1261_);
lean_ctor_set(v___x_1308_, 0, v___x_1312_);
v___x_1317_ = v___x_1308_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v___x_1312_);
lean_ctor_set(v_reuseFailAlloc_1423_, 1, v___f_1261_);
lean_ctor_set(v_reuseFailAlloc_1423_, 2, v___f_1315_);
lean_ctor_set(v_reuseFailAlloc_1423_, 3, v___f_1314_);
lean_ctor_set(v_reuseFailAlloc_1423_, 4, v___f_1313_);
v___x_1317_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
lean_object* v___x_1319_; 
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 1, v___f_1262_);
lean_ctor_set(v___x_1301_, 0, v___x_1317_);
v___x_1319_ = v___x_1301_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1422_; 
v_reuseFailAlloc_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1422_, 0, v___x_1317_);
lean_ctor_set(v_reuseFailAlloc_1422_, 1, v___f_1262_);
v___x_1319_ = v_reuseFailAlloc_1422_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1320_ = l_ReaderT_instMonad___redArg(v___x_1319_);
v___x_1321_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1321_, 0, lean_box(0));
lean_closure_set(v___x_1321_, 1, lean_box(0));
lean_closure_set(v___x_1321_, 2, v___x_1320_);
v___x_1322_ = l_instMonadControlTOfPure___redArg(v___x_1321_);
lean_inc(v_a_1250_);
lean_inc_ref(v_a_1249_);
lean_inc(v_a_1248_);
lean_inc_ref(v_a_1247_);
lean_inc_ref(v_below_1243_);
v___x_1323_ = lean_infer_type(v_below_1243_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_7223__overap_1327_; lean_object* v___x_1328_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_a_1324_);
lean_dec_ref(v___x_1323_);
v___x_1325_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12));
v___x_1326_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
lean_inc_ref(v___x_1295_);
v___x_7223__overap_1327_ = l_Lean_isTracingEnabledFor___redArg(v___x_1295_, v___x_1298_, v___x_1325_, v___x_1326_);
lean_inc(v_a_1250_);
lean_inc_ref(v_a_1249_);
lean_inc(v_a_1248_);
lean_inc_ref(v_a_1247_);
v___x_1328_ = lean_apply_5(v___x_7223__overap_1327_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_, lean_box(0));
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___f_1330_; lean_object* v___f_1331_; lean_object* v___x_1332_; lean_object* v_numTypeFormers_1333_; lean_object* v___f_1334_; lean_object* v___y_1336_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; uint8_t v___x_1389_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref(v___x_1328_);
v___f_1330_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13));
lean_inc_ref(v___x_1295_);
v___f_1331_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3___boxed), 9, 1);
lean_closure_set(v___f_1331_, 0, v___x_1295_);
v___x_1332_ = l_Lean_instInhabitedExpr;
v_numTypeFormers_1333_ = lean_array_get_size(v_positions_1245_);
lean_inc(v_a_1324_);
lean_inc_ref(v___x_1295_);
v___f_1334_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed), 22, 15);
lean_closure_set(v___f_1334_, 0, v_positions_1245_);
lean_closure_set(v___f_1334_, 1, v___x_1295_);
lean_closure_set(v___f_1334_, 2, v___f_1331_);
lean_closure_set(v___f_1334_, 3, v___f_1330_);
lean_closure_set(v___f_1334_, 4, v___x_1322_);
lean_closure_set(v___f_1334_, 5, v_numTypeFormers_1333_);
lean_closure_set(v___f_1334_, 6, v___x_1298_);
lean_closure_set(v___f_1334_, 7, v___x_1325_);
lean_closure_set(v___f_1334_, 8, v___x_1326_);
lean_closure_set(v___f_1334_, 9, v___x_1332_);
lean_closure_set(v___f_1334_, 10, v_k_1246_);
lean_closure_set(v___f_1334_, 11, v___x_1297_);
lean_closure_set(v___f_1334_, 12, v___f_1296_);
lean_closure_set(v___f_1334_, 13, v_numIndParams_1244_);
lean_closure_set(v___f_1334_, 14, v_a_1324_);
v___x_1389_ = lean_unbox(v_a_1329_);
lean_dec(v_a_1329_);
if (v___x_1389_ == 0)
{
v___y_1348_ = v_a_1247_;
v___y_1349_ = v_a_1248_;
v___y_1350_ = v_a_1249_;
v___y_1351_ = v_a_1250_;
goto v___jp_1347_;
}
else
{
lean_object* v___x_1390_; lean_object* v_toMonadRef_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_7878__overap_1396_; lean_object* v___x_1397_; 
v___x_1390_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15);
v_toMonadRef_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc_ref(v_toMonadRef_1391_);
v___x_1392_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1393_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17);
lean_inc(v_a_1324_);
v___x_1394_ = l_Lean_MessageData_ofExpr(v_a_1324_);
v___x_1395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1393_);
lean_ctor_set(v___x_1395_, 1, v___x_1394_);
lean_inc_ref(v___x_1295_);
v___x_7878__overap_1396_ = l_Lean_addTrace___redArg(v___x_1295_, v___x_1298_, v_toMonadRef_1391_, v___x_1392_, v___x_1326_, v___x_1395_);
lean_inc(v_a_1250_);
lean_inc_ref(v_a_1249_);
lean_inc(v_a_1248_);
lean_inc_ref(v_a_1247_);
v___x_1397_ = lean_apply_5(v___x_7878__overap_1396_, v_a_1247_, v_a_1248_, v_a_1249_, v_a_1250_, lean_box(0));
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_dec_ref(v___x_1397_);
v___y_1348_ = v_a_1247_;
v___y_1349_ = v_a_1248_;
v___y_1350_ = v_a_1249_;
v___y_1351_ = v_a_1250_;
goto v___jp_1347_;
}
else
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1405_; 
lean_dec_ref(v___f_1334_);
lean_dec(v_a_1324_);
lean_dec_ref(v___x_1295_);
lean_dec(v_a_1250_);
lean_dec_ref(v_a_1249_);
lean_dec(v_a_1248_);
lean_dec_ref(v_a_1247_);
lean_dec_ref(v_below_1243_);
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1400_ = v___x_1397_;
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1397_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_a_1398_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
v___jp_1335_:
{
lean_object* v_dummy_1340_; lean_object* v_nargs_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_7597__overap_1345_; lean_object* v___x_1346_; 
v_dummy_1340_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0);
v_nargs_1341_ = l_Lean_Expr_getAppNumArgs(v_a_1324_);
lean_inc(v_nargs_1341_);
v___x_1342_ = lean_mk_array(v_nargs_1341_, v_dummy_1340_);
v___x_1343_ = lean_unsigned_to_nat(1u);
v___x_1344_ = lean_nat_sub(v_nargs_1341_, v___x_1343_);
lean_dec(v_nargs_1341_);
v___x_7597__overap_1345_ = l_Lean_Expr_withAppAux___redArg(v___f_1334_, v_a_1324_, v___x_1342_, v___x_1344_);
v___x_1346_ = lean_apply_5(v___x_7597__overap_1345_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, lean_box(0));
return v___x_1346_;
}
v___jp_1347_:
{
lean_object* v___x_1352_; 
lean_inc(v___y_1351_);
lean_inc_ref(v___y_1350_);
lean_inc(v___y_1349_);
lean_inc_ref(v___y_1348_);
v___x_1352_ = l_Lean_Meta_isTypeCorrect(v_below_1243_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; uint8_t v___x_1354_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc(v_a_1353_);
lean_dec_ref(v___x_1352_);
v___x_1354_ = lean_unbox(v_a_1353_);
lean_dec(v_a_1353_);
if (v___x_1354_ == 0)
{
lean_object* v___x_7819__overap_1355_; lean_object* v___x_1356_; 
lean_inc_ref(v___x_1295_);
v___x_7819__overap_1355_ = l_Lean_isTracingEnabledFor___redArg(v___x_1295_, v___x_1298_, v___x_1325_, v___x_1326_);
lean_inc(v___y_1351_);
lean_inc_ref(v___y_1350_);
lean_inc(v___y_1349_);
lean_inc_ref(v___y_1348_);
v___x_1356_ = lean_apply_5(v___x_7819__overap_1355_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, lean_box(0));
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v_a_1357_; uint8_t v___x_1358_; 
v_a_1357_ = lean_ctor_get(v___x_1356_, 0);
lean_inc(v_a_1357_);
lean_dec_ref(v___x_1356_);
v___x_1358_ = lean_unbox(v_a_1357_);
lean_dec(v_a_1357_);
if (v___x_1358_ == 0)
{
lean_dec_ref(v___x_1295_);
v___y_1336_ = v___y_1348_;
v___y_1337_ = v___y_1349_;
v___y_1338_ = v___y_1350_;
v___y_1339_ = v___y_1351_;
goto v___jp_1335_;
}
else
{
lean_object* v___x_1359_; lean_object* v_toMonadRef_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_7856__overap_1363_; lean_object* v___x_1364_; 
v___x_1359_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15);
v_toMonadRef_1360_ = lean_ctor_get(v___x_1359_, 0);
lean_inc_ref(v_toMonadRef_1360_);
v___x_1361_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1362_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3);
v___x_7856__overap_1363_ = l_Lean_addTrace___redArg(v___x_1295_, v___x_1298_, v_toMonadRef_1360_, v___x_1361_, v___x_1326_, v___x_1362_);
lean_inc(v___y_1351_);
lean_inc_ref(v___y_1350_);
lean_inc(v___y_1349_);
lean_inc_ref(v___y_1348_);
v___x_1364_ = lean_apply_5(v___x_7856__overap_1363_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, lean_box(0));
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_dec_ref(v___x_1364_);
v___y_1336_ = v___y_1348_;
v___y_1337_ = v___y_1349_;
v___y_1338_ = v___y_1350_;
v___y_1339_ = v___y_1351_;
goto v___jp_1335_;
}
else
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec_ref(v___f_1334_);
lean_dec(v_a_1324_);
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1364_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1364_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
}
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec_ref(v___f_1334_);
lean_dec(v_a_1324_);
lean_dec_ref(v___x_1295_);
v_a_1373_ = lean_ctor_get(v___x_1356_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v___x_1356_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1356_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1373_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
else
{
lean_dec_ref(v___x_1295_);
v___y_1336_ = v___y_1348_;
v___y_1337_ = v___y_1349_;
v___y_1338_ = v___y_1350_;
v___y_1339_ = v___y_1351_;
goto v___jp_1335_;
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec_ref(v___f_1334_);
lean_dec(v_a_1324_);
lean_dec_ref(v___x_1295_);
v_a_1381_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1352_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1352_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_a_1324_);
lean_dec_ref(v___x_1322_);
lean_dec_ref(v___x_1295_);
lean_dec(v_a_1250_);
lean_dec_ref(v_a_1249_);
lean_dec(v_a_1248_);
lean_dec_ref(v_a_1247_);
lean_dec_ref(v_k_1246_);
lean_dec_ref(v_positions_1245_);
lean_dec(v_numIndParams_1244_);
lean_dec_ref(v_below_1243_);
v_a_1406_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1328_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1328_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec_ref(v___x_1322_);
lean_dec_ref(v___x_1295_);
lean_dec(v_a_1250_);
lean_dec_ref(v_a_1249_);
lean_dec(v_a_1248_);
lean_dec_ref(v_a_1247_);
lean_dec_ref(v_k_1246_);
lean_dec_ref(v_positions_1245_);
lean_dec(v_numIndParams_1244_);
lean_dec_ref(v_below_1243_);
v_a_1414_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1323_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1323_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___boxed(lean_object* v_below_1437_, lean_object* v_numIndParams_1438_, lean_object* v_positions_1439_, lean_object* v_k_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1437_, v_numIndParams_1438_, v_positions_1439_, v_k_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(lean_object* v_00_u03b1_1447_, lean_object* v_inst_1448_, lean_object* v_below_1449_, lean_object* v_numIndParams_1450_, lean_object* v_positions_1451_, lean_object* v_k_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1449_, v_numIndParams_1450_, v_positions_1451_, v_k_1452_, v_a_1453_, v_a_1454_, v_a_1455_, v_a_1456_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___boxed(lean_object* v_00_u03b1_1459_, lean_object* v_inst_1460_, lean_object* v_below_1461_, lean_object* v_numIndParams_1462_, lean_object* v_positions_1463_, lean_object* v_k_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(v_00_u03b1_1459_, v_inst_1460_, v_below_1461_, v_numIndParams_1462_, v_positions_1463_, v_k_1464_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_);
lean_dec(v_inst_1460_);
return v_res_1470_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1471_ = lean_unsigned_to_nat(32u);
v___x_1472_ = lean_mk_empty_array_with_capacity(v___x_1471_);
v___x_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
return v___x_1473_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1474_ = ((size_t)5ULL);
v___x_1475_ = lean_unsigned_to_nat(0u);
v___x_1476_ = lean_unsigned_to_nat(32u);
v___x_1477_ = lean_mk_empty_array_with_capacity(v___x_1476_);
v___x_1478_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0);
v___x_1479_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1479_, 0, v___x_1478_);
lean_ctor_set(v___x_1479_, 1, v___x_1477_);
lean_ctor_set(v___x_1479_, 2, v___x_1475_);
lean_ctor_set(v___x_1479_, 3, v___x_1475_);
lean_ctor_set_usize(v___x_1479_, 4, v___x_1474_);
return v___x_1479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(lean_object* v___y_1480_){
_start:
{
lean_object* v___x_1482_; lean_object* v_traceState_1483_; lean_object* v_traces_1484_; lean_object* v___x_1485_; lean_object* v_traceState_1486_; lean_object* v_env_1487_; lean_object* v_nextMacroScope_1488_; lean_object* v_ngen_1489_; lean_object* v_auxDeclNGen_1490_; lean_object* v_cache_1491_; lean_object* v_messages_1492_; lean_object* v_infoState_1493_; lean_object* v_snapshotTasks_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1513_; 
v___x_1482_ = lean_st_ref_get(v___y_1480_);
v_traceState_1483_ = lean_ctor_get(v___x_1482_, 4);
lean_inc_ref(v_traceState_1483_);
lean_dec(v___x_1482_);
v_traces_1484_ = lean_ctor_get(v_traceState_1483_, 0);
lean_inc_ref(v_traces_1484_);
lean_dec_ref(v_traceState_1483_);
v___x_1485_ = lean_st_ref_take(v___y_1480_);
v_traceState_1486_ = lean_ctor_get(v___x_1485_, 4);
v_env_1487_ = lean_ctor_get(v___x_1485_, 0);
v_nextMacroScope_1488_ = lean_ctor_get(v___x_1485_, 1);
v_ngen_1489_ = lean_ctor_get(v___x_1485_, 2);
v_auxDeclNGen_1490_ = lean_ctor_get(v___x_1485_, 3);
v_cache_1491_ = lean_ctor_get(v___x_1485_, 5);
v_messages_1492_ = lean_ctor_get(v___x_1485_, 6);
v_infoState_1493_ = lean_ctor_get(v___x_1485_, 7);
v_snapshotTasks_1494_ = lean_ctor_get(v___x_1485_, 8);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1496_ = v___x_1485_;
v_isShared_1497_ = v_isSharedCheck_1513_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_snapshotTasks_1494_);
lean_inc(v_infoState_1493_);
lean_inc(v_messages_1492_);
lean_inc(v_cache_1491_);
lean_inc(v_traceState_1486_);
lean_inc(v_auxDeclNGen_1490_);
lean_inc(v_ngen_1489_);
lean_inc(v_nextMacroScope_1488_);
lean_inc(v_env_1487_);
lean_dec(v___x_1485_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1513_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
uint64_t v_tid_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1511_; 
v_tid_1498_ = lean_ctor_get_uint64(v_traceState_1486_, sizeof(void*)*1);
v_isSharedCheck_1511_ = !lean_is_exclusive(v_traceState_1486_);
if (v_isSharedCheck_1511_ == 0)
{
lean_object* v_unused_1512_; 
v_unused_1512_ = lean_ctor_get(v_traceState_1486_, 0);
lean_dec(v_unused_1512_);
v___x_1500_ = v_traceState_1486_;
v_isShared_1501_ = v_isSharedCheck_1511_;
goto v_resetjp_1499_;
}
else
{
lean_dec(v_traceState_1486_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1511_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1502_; lean_object* v___x_1504_; 
v___x_1502_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1);
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 0, v___x_1502_);
v___x_1504_ = v___x_1500_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1502_);
lean_ctor_set_uint64(v_reuseFailAlloc_1510_, sizeof(void*)*1, v_tid_1498_);
v___x_1504_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
lean_object* v___x_1506_; 
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 4, v___x_1504_);
v___x_1506_ = v___x_1496_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_env_1487_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v_nextMacroScope_1488_);
lean_ctor_set(v_reuseFailAlloc_1509_, 2, v_ngen_1489_);
lean_ctor_set(v_reuseFailAlloc_1509_, 3, v_auxDeclNGen_1490_);
lean_ctor_set(v_reuseFailAlloc_1509_, 4, v___x_1504_);
lean_ctor_set(v_reuseFailAlloc_1509_, 5, v_cache_1491_);
lean_ctor_set(v_reuseFailAlloc_1509_, 6, v_messages_1492_);
lean_ctor_set(v_reuseFailAlloc_1509_, 7, v_infoState_1493_);
lean_ctor_set(v_reuseFailAlloc_1509_, 8, v_snapshotTasks_1494_);
v___x_1506_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = lean_st_ref_set(v___y_1480_, v___x_1506_);
v___x_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1508_, 0, v_traces_1484_);
return v___x_1508_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___boxed(lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v___y_1514_);
lean_dec(v___y_1514_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v___x_1522_; 
v___x_1522_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v___y_1520_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___boxed(lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_);
lean_dec(v___y_1526_);
lean_dec_ref(v___y_1525_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
return v_res_1528_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(lean_object* v_opts_1529_, lean_object* v_opt_1530_){
_start:
{
lean_object* v_name_1531_; lean_object* v_defValue_1532_; lean_object* v_map_1533_; lean_object* v___x_1534_; 
v_name_1531_ = lean_ctor_get(v_opt_1530_, 0);
v_defValue_1532_ = lean_ctor_get(v_opt_1530_, 1);
v_map_1533_ = lean_ctor_get(v_opts_1529_, 0);
v___x_1534_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1533_, v_name_1531_);
if (lean_obj_tag(v___x_1534_) == 0)
{
uint8_t v___x_1535_; 
v___x_1535_ = lean_unbox(v_defValue_1532_);
return v___x_1535_;
}
else
{
lean_object* v_val_1536_; 
v_val_1536_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_val_1536_);
lean_dec_ref(v___x_1534_);
if (lean_obj_tag(v_val_1536_) == 1)
{
uint8_t v_v_1537_; 
v_v_1537_ = lean_ctor_get_uint8(v_val_1536_, 0);
lean_dec_ref(v_val_1536_);
return v_v_1537_;
}
else
{
uint8_t v___x_1538_; 
lean_dec(v_val_1536_);
v___x_1538_ = lean_unbox(v_defValue_1532_);
return v___x_1538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1___boxed(lean_object* v_opts_1539_, lean_object* v_opt_1540_){
_start:
{
uint8_t v_res_1541_; lean_object* v_r_1542_; 
v_res_1541_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1539_, v_opt_1540_);
lean_dec_ref(v_opt_1540_);
lean_dec_ref(v_opts_1539_);
v_r_1542_ = lean_box(v_res_1541_);
return v_r_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0(lean_object* v___x_1543_, lean_object* v_fnIndex_1544_, lean_object* v_recArg_1545_, lean_object* v_below_1546_, lean_object* v_Cs_1547_, lean_object* v_belowDict_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = lean_array_get_borrowed(v___x_1543_, v_Cs_1547_, v_fnIndex_1544_);
lean_inc(v___x_1554_);
v___x_1555_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(v___x_1554_, v_belowDict_1548_, v_recArg_1545_, v_below_1546_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0___boxed(lean_object* v___x_1556_, lean_object* v_fnIndex_1557_, lean_object* v_recArg_1558_, lean_object* v_below_1559_, lean_object* v_Cs_1560_, lean_object* v_belowDict_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lean_Elab_Structural_toBelow___lam__0(v___x_1556_, v_fnIndex_1557_, v_recArg_1558_, v_below_1559_, v_Cs_1560_, v_belowDict_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
lean_dec_ref(v_Cs_1560_);
lean_dec(v_fnIndex_1557_);
return v_res_1567_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1569_ = ((lean_object*)(l_Lean_Elab_Structural_toBelow___lam__1___closed__0));
v___x_1570_ = l_Lean_stringToMessageData(v___x_1569_);
return v___x_1570_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = ((lean_object*)(l_Lean_Elab_Structural_toBelow___lam__1___closed__2));
v___x_1573_ = l_Lean_stringToMessageData(v___x_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1(lean_object* v_below_1574_, lean_object* v_recArg_1575_, lean_object* v_x_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = lean_infer_type(v_below_1574_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1597_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1585_ = v___x_1582_;
v_isShared_1586_ = v_isSharedCheck_1597_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1582_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1597_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1595_; 
v___x_1587_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__1, &l_Lean_Elab_Structural_toBelow___lam__1___closed__1_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__1);
v___x_1588_ = l_Lean_MessageData_ofExpr(v_recArg_1575_);
v___x_1589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1587_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__3, &l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3);
v___x_1591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1589_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = l_Lean_MessageData_ofExpr(v_a_1583_);
v___x_1593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
if (v_isShared_1586_ == 0)
{
lean_ctor_set(v___x_1585_, 0, v___x_1593_);
v___x_1595_ = v___x_1585_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v___x_1593_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec_ref(v_recArg_1575_);
v_a_1598_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1582_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1582_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1___boxed(lean_object* v_below_1606_, lean_object* v_recArg_1607_, lean_object* v_x_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Lean_Elab_Structural_toBelow___lam__1(v_below_1606_, v_recArg_1607_, v_x_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
lean_dec_ref(v_x_1608_);
return v_res_1614_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(lean_object* v_e_1615_){
_start:
{
if (lean_obj_tag(v_e_1615_) == 0)
{
uint8_t v___x_1616_; 
v___x_1616_ = 2;
return v___x_1616_;
}
else
{
uint8_t v___x_1617_; 
v___x_1617_ = 0;
return v___x_1617_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2___boxed(lean_object* v_e_1618_){
_start:
{
uint8_t v_res_1619_; lean_object* v_r_1620_; 
v_res_1619_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(v_e_1618_);
lean_dec_ref(v_e_1618_);
v_r_1620_ = lean_box(v_res_1619_);
return v_r_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(lean_object* v_opts_1621_, lean_object* v_opt_1622_){
_start:
{
lean_object* v_name_1623_; lean_object* v_defValue_1624_; lean_object* v_map_1625_; lean_object* v___x_1626_; 
v_name_1623_ = lean_ctor_get(v_opt_1622_, 0);
v_defValue_1624_ = lean_ctor_get(v_opt_1622_, 1);
v_map_1625_ = lean_ctor_get(v_opts_1621_, 0);
v___x_1626_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1625_, v_name_1623_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_inc(v_defValue_1624_);
return v_defValue_1624_;
}
else
{
lean_object* v_val_1627_; 
v_val_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc(v_val_1627_);
lean_dec_ref(v___x_1626_);
if (lean_obj_tag(v_val_1627_) == 3)
{
lean_object* v_v_1628_; 
v_v_1628_ = lean_ctor_get(v_val_1627_, 0);
lean_inc(v_v_1628_);
lean_dec_ref(v_val_1627_);
return v_v_1628_;
}
else
{
lean_dec(v_val_1627_);
lean_inc(v_defValue_1624_);
return v_defValue_1624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5___boxed(lean_object* v_opts_1629_, lean_object* v_opt_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1629_, v_opt_1630_);
lean_dec_ref(v_opt_1630_);
lean_dec_ref(v_opts_1629_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(lean_object* v_x_1632_){
_start:
{
if (lean_obj_tag(v_x_1632_) == 0)
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1641_; 
v_a_1634_ = lean_ctor_get(v_x_1632_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_x_1632_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1636_ = v_x_1632_;
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v_x_1632_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1639_; 
if (v_isShared_1637_ == 0)
{
lean_ctor_set_tag(v___x_1636_, 1);
v___x_1639_ = v___x_1636_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_a_1634_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
else
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1649_; 
v_a_1642_ = lean_ctor_get(v_x_1632_, 0);
v_isSharedCheck_1649_ = !lean_is_exclusive(v_x_1632_);
if (v_isSharedCheck_1649_ == 0)
{
v___x_1644_ = v_x_1632_;
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v_x_1632_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1649_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1647_; 
if (v_isShared_1645_ == 0)
{
lean_ctor_set_tag(v___x_1644_, 0);
v___x_1647_ = v___x_1644_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v_a_1642_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg___boxed(lean_object* v_x_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_x_1650_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(size_t v_sz_1653_, size_t v_i_1654_, lean_object* v_bs_1655_){
_start:
{
uint8_t v___x_1656_; 
v___x_1656_ = lean_usize_dec_lt(v_i_1654_, v_sz_1653_);
if (v___x_1656_ == 0)
{
return v_bs_1655_;
}
else
{
lean_object* v_v_1657_; lean_object* v_msg_1658_; lean_object* v___x_1659_; lean_object* v_bs_x27_1660_; size_t v___x_1661_; size_t v___x_1662_; lean_object* v___x_1663_; 
v_v_1657_ = lean_array_uget_borrowed(v_bs_1655_, v_i_1654_);
v_msg_1658_ = lean_ctor_get(v_v_1657_, 1);
lean_inc_ref(v_msg_1658_);
v___x_1659_ = lean_unsigned_to_nat(0u);
v_bs_x27_1660_ = lean_array_uset(v_bs_1655_, v_i_1654_, v___x_1659_);
v___x_1661_ = ((size_t)1ULL);
v___x_1662_ = lean_usize_add(v_i_1654_, v___x_1661_);
v___x_1663_ = lean_array_uset(v_bs_x27_1660_, v_i_1654_, v_msg_1658_);
v_i_1654_ = v___x_1662_;
v_bs_1655_ = v___x_1663_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_1665_, lean_object* v_i_1666_, lean_object* v_bs_1667_){
_start:
{
size_t v_sz_boxed_1668_; size_t v_i_boxed_1669_; lean_object* v_res_1670_; 
v_sz_boxed_1668_ = lean_unbox_usize(v_sz_1665_);
lean_dec(v_sz_1665_);
v_i_boxed_1669_ = lean_unbox_usize(v_i_1666_);
lean_dec(v_i_1666_);
v_res_1670_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(v_sz_boxed_1668_, v_i_boxed_1669_, v_bs_1667_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(lean_object* v_oldTraces_1671_, lean_object* v_data_1672_, lean_object* v_ref_1673_, lean_object* v_msg_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v_fileName_1680_; lean_object* v_fileMap_1681_; lean_object* v_options_1682_; lean_object* v_currRecDepth_1683_; lean_object* v_maxRecDepth_1684_; lean_object* v_ref_1685_; lean_object* v_currNamespace_1686_; lean_object* v_openDecls_1687_; lean_object* v_initHeartbeats_1688_; lean_object* v_maxHeartbeats_1689_; lean_object* v_quotContext_1690_; lean_object* v_currMacroScope_1691_; uint8_t v_diag_1692_; lean_object* v_cancelTk_x3f_1693_; uint8_t v_suppressElabErrors_1694_; lean_object* v_inheritedTraceOptions_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1750_; 
v_fileName_1680_ = lean_ctor_get(v___y_1677_, 0);
v_fileMap_1681_ = lean_ctor_get(v___y_1677_, 1);
v_options_1682_ = lean_ctor_get(v___y_1677_, 2);
v_currRecDepth_1683_ = lean_ctor_get(v___y_1677_, 3);
v_maxRecDepth_1684_ = lean_ctor_get(v___y_1677_, 4);
v_ref_1685_ = lean_ctor_get(v___y_1677_, 5);
v_currNamespace_1686_ = lean_ctor_get(v___y_1677_, 6);
v_openDecls_1687_ = lean_ctor_get(v___y_1677_, 7);
v_initHeartbeats_1688_ = lean_ctor_get(v___y_1677_, 8);
v_maxHeartbeats_1689_ = lean_ctor_get(v___y_1677_, 9);
v_quotContext_1690_ = lean_ctor_get(v___y_1677_, 10);
v_currMacroScope_1691_ = lean_ctor_get(v___y_1677_, 11);
v_diag_1692_ = lean_ctor_get_uint8(v___y_1677_, sizeof(void*)*14);
v_cancelTk_x3f_1693_ = lean_ctor_get(v___y_1677_, 12);
v_suppressElabErrors_1694_ = lean_ctor_get_uint8(v___y_1677_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1695_ = lean_ctor_get(v___y_1677_, 13);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___y_1677_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1697_ = v___y_1677_;
v_isShared_1698_ = v_isSharedCheck_1750_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_inheritedTraceOptions_1695_);
lean_inc(v_cancelTk_x3f_1693_);
lean_inc(v_currMacroScope_1691_);
lean_inc(v_quotContext_1690_);
lean_inc(v_maxHeartbeats_1689_);
lean_inc(v_initHeartbeats_1688_);
lean_inc(v_openDecls_1687_);
lean_inc(v_currNamespace_1686_);
lean_inc(v_ref_1685_);
lean_inc(v_maxRecDepth_1684_);
lean_inc(v_currRecDepth_1683_);
lean_inc(v_options_1682_);
lean_inc(v_fileMap_1681_);
lean_inc(v_fileName_1680_);
lean_dec(v___y_1677_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1750_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1699_; lean_object* v_traceState_1700_; lean_object* v_traces_1701_; lean_object* v_ref_1702_; lean_object* v___x_1704_; 
v___x_1699_ = lean_st_ref_get(v___y_1678_);
v_traceState_1700_ = lean_ctor_get(v___x_1699_, 4);
lean_inc_ref(v_traceState_1700_);
lean_dec(v___x_1699_);
v_traces_1701_ = lean_ctor_get(v_traceState_1700_, 0);
lean_inc_ref(v_traces_1701_);
lean_dec_ref(v_traceState_1700_);
v_ref_1702_ = l_Lean_replaceRef(v_ref_1673_, v_ref_1685_);
lean_dec(v_ref_1685_);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 5, v_ref_1702_);
v___x_1704_ = v___x_1697_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_fileName_1680_);
lean_ctor_set(v_reuseFailAlloc_1749_, 1, v_fileMap_1681_);
lean_ctor_set(v_reuseFailAlloc_1749_, 2, v_options_1682_);
lean_ctor_set(v_reuseFailAlloc_1749_, 3, v_currRecDepth_1683_);
lean_ctor_set(v_reuseFailAlloc_1749_, 4, v_maxRecDepth_1684_);
lean_ctor_set(v_reuseFailAlloc_1749_, 5, v_ref_1702_);
lean_ctor_set(v_reuseFailAlloc_1749_, 6, v_currNamespace_1686_);
lean_ctor_set(v_reuseFailAlloc_1749_, 7, v_openDecls_1687_);
lean_ctor_set(v_reuseFailAlloc_1749_, 8, v_initHeartbeats_1688_);
lean_ctor_set(v_reuseFailAlloc_1749_, 9, v_maxHeartbeats_1689_);
lean_ctor_set(v_reuseFailAlloc_1749_, 10, v_quotContext_1690_);
lean_ctor_set(v_reuseFailAlloc_1749_, 11, v_currMacroScope_1691_);
lean_ctor_set(v_reuseFailAlloc_1749_, 12, v_cancelTk_x3f_1693_);
lean_ctor_set(v_reuseFailAlloc_1749_, 13, v_inheritedTraceOptions_1695_);
lean_ctor_set_uint8(v_reuseFailAlloc_1749_, sizeof(void*)*14, v_diag_1692_);
lean_ctor_set_uint8(v_reuseFailAlloc_1749_, sizeof(void*)*14 + 1, v_suppressElabErrors_1694_);
v___x_1704_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
lean_object* v___x_1705_; size_t v_sz_1706_; size_t v___x_1707_; lean_object* v___x_1708_; lean_object* v_msg_1709_; lean_object* v___x_1710_; lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1748_; 
v___x_1705_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1701_);
lean_dec_ref(v_traces_1701_);
v_sz_1706_ = lean_array_size(v___x_1705_);
v___x_1707_ = ((size_t)0ULL);
v___x_1708_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(v_sz_1706_, v___x_1707_, v___x_1705_);
v_msg_1709_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1709_, 0, v_data_1672_);
lean_ctor_set(v_msg_1709_, 1, v_msg_1674_);
lean_ctor_set(v_msg_1709_, 2, v___x_1708_);
v___x_1710_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_1709_, v___y_1675_, v___y_1676_, v___x_1704_, v___y_1678_);
lean_dec_ref(v___x_1704_);
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1713_ = v___x_1710_;
v_isShared_1714_ = v_isSharedCheck_1748_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1710_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1748_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1715_; lean_object* v_traceState_1716_; lean_object* v_env_1717_; lean_object* v_nextMacroScope_1718_; lean_object* v_ngen_1719_; lean_object* v_auxDeclNGen_1720_; lean_object* v_cache_1721_; lean_object* v_messages_1722_; lean_object* v_infoState_1723_; lean_object* v_snapshotTasks_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1747_; 
v___x_1715_ = lean_st_ref_take(v___y_1678_);
v_traceState_1716_ = lean_ctor_get(v___x_1715_, 4);
v_env_1717_ = lean_ctor_get(v___x_1715_, 0);
v_nextMacroScope_1718_ = lean_ctor_get(v___x_1715_, 1);
v_ngen_1719_ = lean_ctor_get(v___x_1715_, 2);
v_auxDeclNGen_1720_ = lean_ctor_get(v___x_1715_, 3);
v_cache_1721_ = lean_ctor_get(v___x_1715_, 5);
v_messages_1722_ = lean_ctor_get(v___x_1715_, 6);
v_infoState_1723_ = lean_ctor_get(v___x_1715_, 7);
v_snapshotTasks_1724_ = lean_ctor_get(v___x_1715_, 8);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1726_ = v___x_1715_;
v_isShared_1727_ = v_isSharedCheck_1747_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_snapshotTasks_1724_);
lean_inc(v_infoState_1723_);
lean_inc(v_messages_1722_);
lean_inc(v_cache_1721_);
lean_inc(v_traceState_1716_);
lean_inc(v_auxDeclNGen_1720_);
lean_inc(v_ngen_1719_);
lean_inc(v_nextMacroScope_1718_);
lean_inc(v_env_1717_);
lean_dec(v___x_1715_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1747_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
uint64_t v_tid_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1745_; 
v_tid_1728_ = lean_ctor_get_uint64(v_traceState_1716_, sizeof(void*)*1);
v_isSharedCheck_1745_ = !lean_is_exclusive(v_traceState_1716_);
if (v_isSharedCheck_1745_ == 0)
{
lean_object* v_unused_1746_; 
v_unused_1746_ = lean_ctor_get(v_traceState_1716_, 0);
lean_dec(v_unused_1746_);
v___x_1730_ = v_traceState_1716_;
v_isShared_1731_ = v_isSharedCheck_1745_;
goto v_resetjp_1729_;
}
else
{
lean_dec(v_traceState_1716_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1745_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1735_; 
v___x_1732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1732_, 0, v_ref_1673_);
lean_ctor_set(v___x_1732_, 1, v_a_1711_);
v___x_1733_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1671_, v___x_1732_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 0, v___x_1733_);
v___x_1735_ = v___x_1730_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1733_);
lean_ctor_set_uint64(v_reuseFailAlloc_1744_, sizeof(void*)*1, v_tid_1728_);
v___x_1735_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
lean_object* v___x_1737_; 
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 4, v___x_1735_);
v___x_1737_ = v___x_1726_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_env_1717_);
lean_ctor_set(v_reuseFailAlloc_1743_, 1, v_nextMacroScope_1718_);
lean_ctor_set(v_reuseFailAlloc_1743_, 2, v_ngen_1719_);
lean_ctor_set(v_reuseFailAlloc_1743_, 3, v_auxDeclNGen_1720_);
lean_ctor_set(v_reuseFailAlloc_1743_, 4, v___x_1735_);
lean_ctor_set(v_reuseFailAlloc_1743_, 5, v_cache_1721_);
lean_ctor_set(v_reuseFailAlloc_1743_, 6, v_messages_1722_);
lean_ctor_set(v_reuseFailAlloc_1743_, 7, v_infoState_1723_);
lean_ctor_set(v_reuseFailAlloc_1743_, 8, v_snapshotTasks_1724_);
v___x_1737_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1741_; 
v___x_1738_ = lean_st_ref_set(v___y_1678_, v___x_1737_);
v___x_1739_ = lean_box(0);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1739_);
v___x_1741_ = v___x_1713_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1739_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
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
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___boxed(lean_object* v_oldTraces_1751_, lean_object* v_data_1752_, lean_object* v_ref_1753_, lean_object* v_msg_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(v_oldTraces_1751_, v_data_1752_, v_ref_1753_, v_msg_1754_, v___y_1755_, v___y_1756_, v___y_1757_, v___y_1758_);
lean_dec(v___y_1758_);
lean_dec(v___y_1756_);
lean_dec_ref(v___y_1755_);
return v_res_1760_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; 
v___x_1762_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0));
v___x_1763_ = l_Lean_stringToMessageData(v___x_1762_);
return v___x_1763_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2));
v___x_1766_ = l_Lean_stringToMessageData(v___x_1765_);
return v___x_1766_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1767_; double v___x_1768_; 
v___x_1767_ = lean_unsigned_to_nat(1000u);
v___x_1768_ = lean_float_of_nat(v___x_1767_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(lean_object* v_cls_1769_, uint8_t v_collapsed_1770_, lean_object* v_tag_1771_, lean_object* v_opts_1772_, uint8_t v_clsEnabled_1773_, lean_object* v_oldTraces_1774_, lean_object* v_msg_1775_, lean_object* v_resStartStop_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
lean_object* v_fst_1782_; lean_object* v_snd_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1881_; 
v_fst_1782_ = lean_ctor_get(v_resStartStop_1776_, 0);
v_snd_1783_ = lean_ctor_get(v_resStartStop_1776_, 1);
v_isSharedCheck_1881_ = !lean_is_exclusive(v_resStartStop_1776_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1785_ = v_resStartStop_1776_;
v_isShared_1786_ = v_isSharedCheck_1881_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_snd_1783_);
lean_inc(v_fst_1782_);
lean_dec(v_resStartStop_1776_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1881_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___y_1788_; lean_object* v___y_1789_; lean_object* v_data_1790_; lean_object* v_fst_1801_; lean_object* v_snd_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1880_; 
v_fst_1801_ = lean_ctor_get(v_snd_1783_, 0);
v_snd_1802_ = lean_ctor_get(v_snd_1783_, 1);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_snd_1783_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1804_ = v_snd_1783_;
v_isShared_1805_ = v_isSharedCheck_1880_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_snd_1802_);
lean_inc(v_fst_1801_);
lean_dec(v_snd_1783_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1880_;
goto v_resetjp_1803_;
}
v___jp_1787_:
{
lean_object* v___x_1791_; 
v___x_1791_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(v_oldTraces_1774_, v_data_1790_, v___y_1789_, v___y_1788_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_);
lean_dec(v___y_1780_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v___x_1792_; 
lean_dec_ref(v___x_1791_);
v___x_1792_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_fst_1782_);
return v___x_1792_;
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_dec(v_fst_1782_);
v_a_1793_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1791_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1791_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
v_resetjp_1803_:
{
lean_object* v___x_1806_; uint8_t v___x_1807_; lean_object* v___y_1809_; lean_object* v_a_1810_; uint8_t v___y_1834_; double v___y_1865_; 
v___x_1806_ = l_Lean_trace_profiler;
v___x_1807_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1772_, v___x_1806_);
if (v___x_1807_ == 0)
{
v___y_1834_ = v___x_1807_;
goto v___jp_1833_;
}
else
{
lean_object* v___x_1870_; uint8_t v___x_1871_; 
v___x_1870_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1871_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1772_, v___x_1870_);
if (v___x_1871_ == 0)
{
lean_object* v___x_1872_; lean_object* v___x_1873_; double v___x_1874_; double v___x_1875_; double v___x_1876_; 
v___x_1872_ = l_Lean_trace_profiler_threshold;
v___x_1873_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1772_, v___x_1872_);
v___x_1874_ = lean_float_of_nat(v___x_1873_);
v___x_1875_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4);
v___x_1876_ = lean_float_div(v___x_1874_, v___x_1875_);
v___y_1865_ = v___x_1876_;
goto v___jp_1864_;
}
else
{
lean_object* v___x_1877_; lean_object* v___x_1878_; double v___x_1879_; 
v___x_1877_ = l_Lean_trace_profiler_threshold;
v___x_1878_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1772_, v___x_1877_);
v___x_1879_ = lean_float_of_nat(v___x_1878_);
v___y_1865_ = v___x_1879_;
goto v___jp_1864_;
}
}
v___jp_1808_:
{
uint8_t v_result_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1816_; 
v_result_1811_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(v_fst_1782_);
v___x_1812_ = l_Lean_TraceResult_toEmoji(v_result_1811_);
v___x_1813_ = l_Lean_stringToMessageData(v___x_1812_);
v___x_1814_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1);
if (v_isShared_1805_ == 0)
{
lean_ctor_set_tag(v___x_1804_, 7);
lean_ctor_set(v___x_1804_, 1, v___x_1814_);
lean_ctor_set(v___x_1804_, 0, v___x_1813_);
v___x_1816_ = v___x_1804_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v___x_1813_);
lean_ctor_set(v_reuseFailAlloc_1827_, 1, v___x_1814_);
v___x_1816_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
lean_object* v_m_1818_; 
if (v_isShared_1786_ == 0)
{
lean_ctor_set_tag(v___x_1785_, 7);
lean_ctor_set(v___x_1785_, 1, v_a_1810_);
lean_ctor_set(v___x_1785_, 0, v___x_1816_);
v_m_1818_ = v___x_1785_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___x_1816_);
lean_ctor_set(v_reuseFailAlloc_1826_, 1, v_a_1810_);
v_m_1818_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
lean_object* v___x_1819_; lean_object* v___x_1820_; double v___x_1821_; lean_object* v_data_1822_; 
v___x_1819_ = lean_box(v_result_1811_);
v___x_1820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1819_);
v___x_1821_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0);
lean_inc_ref(v_tag_1771_);
lean_inc_ref(v___x_1820_);
lean_inc(v_cls_1769_);
v_data_1822_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1822_, 0, v_cls_1769_);
lean_ctor_set(v_data_1822_, 1, v___x_1820_);
lean_ctor_set(v_data_1822_, 2, v_tag_1771_);
lean_ctor_set_float(v_data_1822_, sizeof(void*)*3, v___x_1821_);
lean_ctor_set_float(v_data_1822_, sizeof(void*)*3 + 8, v___x_1821_);
lean_ctor_set_uint8(v_data_1822_, sizeof(void*)*3 + 16, v_collapsed_1770_);
if (v___x_1807_ == 0)
{
lean_dec_ref(v___x_1820_);
lean_dec(v_snd_1802_);
lean_dec(v_fst_1801_);
lean_dec_ref(v_tag_1771_);
lean_dec(v_cls_1769_);
v___y_1788_ = v_m_1818_;
v___y_1789_ = v___y_1809_;
v_data_1790_ = v_data_1822_;
goto v___jp_1787_;
}
else
{
lean_object* v_data_1823_; double v___x_1824_; double v___x_1825_; 
lean_dec_ref(v_data_1822_);
v_data_1823_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1823_, 0, v_cls_1769_);
lean_ctor_set(v_data_1823_, 1, v___x_1820_);
lean_ctor_set(v_data_1823_, 2, v_tag_1771_);
v___x_1824_ = lean_unbox_float(v_fst_1801_);
lean_dec(v_fst_1801_);
lean_ctor_set_float(v_data_1823_, sizeof(void*)*3, v___x_1824_);
v___x_1825_ = lean_unbox_float(v_snd_1802_);
lean_dec(v_snd_1802_);
lean_ctor_set_float(v_data_1823_, sizeof(void*)*3 + 8, v___x_1825_);
lean_ctor_set_uint8(v_data_1823_, sizeof(void*)*3 + 16, v_collapsed_1770_);
v___y_1788_ = v_m_1818_;
v___y_1789_ = v___y_1809_;
v_data_1790_ = v_data_1823_;
goto v___jp_1787_;
}
}
}
}
v___jp_1828_:
{
lean_object* v_ref_1829_; lean_object* v___x_1830_; 
v_ref_1829_ = lean_ctor_get(v___y_1779_, 5);
lean_inc(v___y_1780_);
lean_inc_ref(v___y_1779_);
lean_inc(v___y_1778_);
lean_inc_ref(v___y_1777_);
lean_inc(v_fst_1782_);
v___x_1830_ = lean_apply_6(v_msg_1775_, v_fst_1782_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, lean_box(0));
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1831_);
lean_dec_ref(v___x_1830_);
lean_inc(v_ref_1829_);
v___y_1809_ = v_ref_1829_;
v_a_1810_ = v_a_1831_;
goto v___jp_1808_;
}
else
{
lean_object* v___x_1832_; 
lean_dec_ref(v___x_1830_);
v___x_1832_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3);
lean_inc(v_ref_1829_);
v___y_1809_ = v_ref_1829_;
v_a_1810_ = v___x_1832_;
goto v___jp_1808_;
}
}
v___jp_1833_:
{
if (v_clsEnabled_1773_ == 0)
{
if (v___y_1834_ == 0)
{
lean_object* v___x_1835_; lean_object* v_traceState_1836_; lean_object* v_env_1837_; lean_object* v_nextMacroScope_1838_; lean_object* v_ngen_1839_; lean_object* v_auxDeclNGen_1840_; lean_object* v_cache_1841_; lean_object* v_messages_1842_; lean_object* v_infoState_1843_; lean_object* v_snapshotTasks_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1863_; 
lean_del_object(v___x_1804_);
lean_dec(v_snd_1802_);
lean_dec(v_fst_1801_);
lean_del_object(v___x_1785_);
lean_dec_ref(v___y_1779_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec_ref(v_msg_1775_);
lean_dec_ref(v_tag_1771_);
lean_dec(v_cls_1769_);
v___x_1835_ = lean_st_ref_take(v___y_1780_);
v_traceState_1836_ = lean_ctor_get(v___x_1835_, 4);
v_env_1837_ = lean_ctor_get(v___x_1835_, 0);
v_nextMacroScope_1838_ = lean_ctor_get(v___x_1835_, 1);
v_ngen_1839_ = lean_ctor_get(v___x_1835_, 2);
v_auxDeclNGen_1840_ = lean_ctor_get(v___x_1835_, 3);
v_cache_1841_ = lean_ctor_get(v___x_1835_, 5);
v_messages_1842_ = lean_ctor_get(v___x_1835_, 6);
v_infoState_1843_ = lean_ctor_get(v___x_1835_, 7);
v_snapshotTasks_1844_ = lean_ctor_get(v___x_1835_, 8);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1846_ = v___x_1835_;
v_isShared_1847_ = v_isSharedCheck_1863_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_snapshotTasks_1844_);
lean_inc(v_infoState_1843_);
lean_inc(v_messages_1842_);
lean_inc(v_cache_1841_);
lean_inc(v_traceState_1836_);
lean_inc(v_auxDeclNGen_1840_);
lean_inc(v_ngen_1839_);
lean_inc(v_nextMacroScope_1838_);
lean_inc(v_env_1837_);
lean_dec(v___x_1835_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1863_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
uint64_t v_tid_1848_; lean_object* v_traces_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1862_; 
v_tid_1848_ = lean_ctor_get_uint64(v_traceState_1836_, sizeof(void*)*1);
v_traces_1849_ = lean_ctor_get(v_traceState_1836_, 0);
v_isSharedCheck_1862_ = !lean_is_exclusive(v_traceState_1836_);
if (v_isSharedCheck_1862_ == 0)
{
v___x_1851_ = v_traceState_1836_;
v_isShared_1852_ = v_isSharedCheck_1862_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_traces_1849_);
lean_dec(v_traceState_1836_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1862_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1853_; lean_object* v___x_1855_; 
v___x_1853_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1774_, v_traces_1849_);
lean_dec_ref(v_traces_1849_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 0, v___x_1853_);
v___x_1855_ = v___x_1851_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v___x_1853_);
lean_ctor_set_uint64(v_reuseFailAlloc_1861_, sizeof(void*)*1, v_tid_1848_);
v___x_1855_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
lean_object* v___x_1857_; 
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 4, v___x_1855_);
v___x_1857_ = v___x_1846_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_env_1837_);
lean_ctor_set(v_reuseFailAlloc_1860_, 1, v_nextMacroScope_1838_);
lean_ctor_set(v_reuseFailAlloc_1860_, 2, v_ngen_1839_);
lean_ctor_set(v_reuseFailAlloc_1860_, 3, v_auxDeclNGen_1840_);
lean_ctor_set(v_reuseFailAlloc_1860_, 4, v___x_1855_);
lean_ctor_set(v_reuseFailAlloc_1860_, 5, v_cache_1841_);
lean_ctor_set(v_reuseFailAlloc_1860_, 6, v_messages_1842_);
lean_ctor_set(v_reuseFailAlloc_1860_, 7, v_infoState_1843_);
lean_ctor_set(v_reuseFailAlloc_1860_, 8, v_snapshotTasks_1844_);
v___x_1857_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1858_ = lean_st_ref_set(v___y_1780_, v___x_1857_);
lean_dec(v___y_1780_);
v___x_1859_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_fst_1782_);
return v___x_1859_;
}
}
}
}
}
else
{
goto v___jp_1828_;
}
}
else
{
goto v___jp_1828_;
}
}
v___jp_1864_:
{
double v___x_1866_; double v___x_1867_; double v___x_1868_; uint8_t v___x_1869_; 
v___x_1866_ = lean_unbox_float(v_snd_1802_);
v___x_1867_ = lean_unbox_float(v_fst_1801_);
v___x_1868_ = lean_float_sub(v___x_1866_, v___x_1867_);
v___x_1869_ = lean_float_decLt(v___y_1865_, v___x_1868_);
v___y_1834_ = v___x_1869_;
goto v___jp_1833_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___boxed(lean_object* v_cls_1882_, lean_object* v_collapsed_1883_, lean_object* v_tag_1884_, lean_object* v_opts_1885_, lean_object* v_clsEnabled_1886_, lean_object* v_oldTraces_1887_, lean_object* v_msg_1888_, lean_object* v_resStartStop_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_){
_start:
{
uint8_t v_collapsed_boxed_1895_; uint8_t v_clsEnabled_boxed_1896_; lean_object* v_res_1897_; 
v_collapsed_boxed_1895_ = lean_unbox(v_collapsed_1883_);
v_clsEnabled_boxed_1896_ = lean_unbox(v_clsEnabled_1886_);
v_res_1897_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v_cls_1882_, v_collapsed_boxed_1895_, v_tag_1884_, v_opts_1885_, v_clsEnabled_boxed_1896_, v_oldTraces_1887_, v_msg_1888_, v_resStartStop_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
lean_dec_ref(v_opts_1885_);
return v_res_1897_;
}
}
static double _init_l_Lean_Elab_Structural_toBelow___closed__0(void){
_start:
{
lean_object* v___x_1898_; double v___x_1899_; 
v___x_1898_ = lean_unsigned_to_nat(1000000000u);
v___x_1899_ = lean_float_of_nat(v___x_1898_);
return v___x_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow(lean_object* v_below_1900_, lean_object* v_numIndParams_1901_, lean_object* v_positions_1902_, lean_object* v_fnIndex_1903_, lean_object* v_recArg_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_){
_start:
{
lean_object* v_options_1910_; uint8_t v_hasTrace_1911_; lean_object* v___x_1912_; lean_object* v___f_1913_; 
v_options_1910_ = lean_ctor_get(v_a_1907_, 2);
v_hasTrace_1911_ = lean_ctor_get_uint8(v_options_1910_, sizeof(void*)*1);
v___x_1912_ = l_Lean_instInhabitedExpr;
lean_inc_ref(v_below_1900_);
lean_inc_ref(v_recArg_1904_);
v___f_1913_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_toBelow___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1913_, 0, v___x_1912_);
lean_closure_set(v___f_1913_, 1, v_fnIndex_1903_);
lean_closure_set(v___f_1913_, 2, v_recArg_1904_);
lean_closure_set(v___f_1913_, 3, v_below_1900_);
if (v_hasTrace_1911_ == 0)
{
lean_object* v___x_1914_; 
lean_dec_ref(v_recArg_1904_);
v___x_1914_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1900_, v_numIndParams_1901_, v_positions_1902_, v___f_1913_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
return v___x_1914_;
}
else
{
lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v_a_1917_; lean_object* v___f_1918_; lean_object* v___x_1919_; lean_object* v___y_1921_; lean_object* v___y_1922_; lean_object* v_a_1923_; lean_object* v___y_1937_; lean_object* v___y_1938_; lean_object* v_a_1939_; uint8_t v___x_1990_; 
v___x_1915_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v___x_1916_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg(v___x_1915_, v_a_1907_);
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref(v___x_1916_);
lean_inc_ref(v_below_1900_);
v___f_1918_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_toBelow___lam__1___boxed), 8, 2);
lean_closure_set(v___f_1918_, 0, v_below_1900_);
lean_closure_set(v___f_1918_, 1, v_recArg_1904_);
v___x_1919_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__1));
v___x_1990_ = lean_unbox(v_a_1917_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1991_; uint8_t v___x_1992_; 
v___x_1991_ = l_Lean_trace_profiler;
v___x_1992_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_options_1910_, v___x_1991_);
if (v___x_1992_ == 0)
{
lean_object* v___x_1993_; 
lean_dec_ref(v___f_1918_);
lean_dec(v_a_1917_);
v___x_1993_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1900_, v_numIndParams_1901_, v_positions_1902_, v___f_1913_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
return v___x_1993_;
}
else
{
lean_inc_ref(v_options_1910_);
goto v___jp_1949_;
}
}
else
{
lean_inc_ref(v_options_1910_);
goto v___jp_1949_;
}
v___jp_1920_:
{
lean_object* v___x_1924_; double v___x_1925_; double v___x_1926_; double v___x_1927_; double v___x_1928_; double v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; uint8_t v___x_1934_; lean_object* v___x_1935_; 
v___x_1924_ = lean_io_mono_nanos_now();
v___x_1925_ = lean_float_of_nat(v___y_1921_);
v___x_1926_ = lean_float_once(&l_Lean_Elab_Structural_toBelow___closed__0, &l_Lean_Elab_Structural_toBelow___closed__0_once, _init_l_Lean_Elab_Structural_toBelow___closed__0);
v___x_1927_ = lean_float_div(v___x_1925_, v___x_1926_);
v___x_1928_ = lean_float_of_nat(v___x_1924_);
v___x_1929_ = lean_float_div(v___x_1928_, v___x_1926_);
v___x_1930_ = lean_box_float(v___x_1927_);
v___x_1931_ = lean_box_float(v___x_1929_);
v___x_1932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1930_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
v___x_1933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1933_, 0, v_a_1923_);
lean_ctor_set(v___x_1933_, 1, v___x_1932_);
v___x_1934_ = lean_unbox(v_a_1917_);
lean_dec(v_a_1917_);
v___x_1935_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v___x_1915_, v_hasTrace_1911_, v___x_1919_, v_options_1910_, v___x_1934_, v___y_1922_, v___f_1918_, v___x_1933_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
lean_dec_ref(v_options_1910_);
return v___x_1935_;
}
v___jp_1936_:
{
lean_object* v___x_1940_; double v___x_1941_; double v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; uint8_t v___x_1947_; lean_object* v___x_1948_; 
v___x_1940_ = lean_io_get_num_heartbeats();
v___x_1941_ = lean_float_of_nat(v___y_1937_);
v___x_1942_ = lean_float_of_nat(v___x_1940_);
v___x_1943_ = lean_box_float(v___x_1941_);
v___x_1944_ = lean_box_float(v___x_1942_);
v___x_1945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1943_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1946_, 0, v_a_1939_);
lean_ctor_set(v___x_1946_, 1, v___x_1945_);
v___x_1947_ = lean_unbox(v_a_1917_);
lean_dec(v_a_1917_);
v___x_1948_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v___x_1915_, v_hasTrace_1911_, v___x_1919_, v_options_1910_, v___x_1947_, v___y_1938_, v___f_1918_, v___x_1946_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
lean_dec_ref(v_options_1910_);
return v___x_1948_;
}
v___jp_1949_:
{
lean_object* v___x_1950_; lean_object* v_a_1951_; lean_object* v___x_1952_; uint8_t v___x_1953_; 
v___x_1950_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v_a_1908_);
v_a_1951_ = lean_ctor_get(v___x_1950_, 0);
lean_inc(v_a_1951_);
lean_dec_ref(v___x_1950_);
v___x_1952_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1953_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_options_1910_, v___x_1952_);
if (v___x_1953_ == 0)
{
lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1954_ = lean_io_mono_nanos_now();
lean_inc(v_a_1908_);
lean_inc_ref(v_a_1907_);
lean_inc(v_a_1906_);
lean_inc_ref(v_a_1905_);
v___x_1955_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1900_, v_numIndParams_1901_, v_positions_1902_, v___f_1913_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1963_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1958_ = v___x_1955_;
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1955_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1961_; 
if (v_isShared_1959_ == 0)
{
lean_ctor_set_tag(v___x_1958_, 1);
v___x_1961_ = v___x_1958_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_a_1956_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
v___y_1921_ = v___x_1954_;
v___y_1922_ = v_a_1951_;
v_a_1923_ = v___x_1961_;
goto v___jp_1920_;
}
}
}
else
{
lean_object* v_a_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1971_; 
v_a_1964_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_1971_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1971_ == 0)
{
v___x_1966_ = v___x_1955_;
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_a_1964_);
lean_dec(v___x_1955_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1971_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
lean_object* v___x_1969_; 
if (v_isShared_1967_ == 0)
{
lean_ctor_set_tag(v___x_1966_, 0);
v___x_1969_ = v___x_1966_;
goto v_reusejp_1968_;
}
else
{
lean_object* v_reuseFailAlloc_1970_; 
v_reuseFailAlloc_1970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1970_, 0, v_a_1964_);
v___x_1969_ = v_reuseFailAlloc_1970_;
goto v_reusejp_1968_;
}
v_reusejp_1968_:
{
v___y_1921_ = v___x_1954_;
v___y_1922_ = v_a_1951_;
v_a_1923_ = v___x_1969_;
goto v___jp_1920_;
}
}
}
}
else
{
lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1972_ = lean_io_get_num_heartbeats();
lean_inc(v_a_1908_);
lean_inc_ref(v_a_1907_);
lean_inc(v_a_1906_);
lean_inc_ref(v_a_1905_);
v___x_1973_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1900_, v_numIndParams_1901_, v_positions_1902_, v___f_1913_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1981_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1976_ = v___x_1973_;
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1973_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1979_; 
if (v_isShared_1977_ == 0)
{
lean_ctor_set_tag(v___x_1976_, 1);
v___x_1979_ = v___x_1976_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v_a_1974_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
v___y_1937_ = v___x_1972_;
v___y_1938_ = v_a_1951_;
v_a_1939_ = v___x_1979_;
goto v___jp_1936_;
}
}
}
else
{
lean_object* v_a_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1989_; 
v_a_1982_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1984_ = v___x_1973_;
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_a_1982_);
lean_dec(v___x_1973_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1985_ == 0)
{
lean_ctor_set_tag(v___x_1984_, 0);
v___x_1987_ = v___x_1984_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_a_1982_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
v___y_1937_ = v___x_1972_;
v___y_1938_ = v_a_1951_;
v_a_1939_ = v___x_1987_;
goto v___jp_1936_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___boxed(lean_object* v_below_1994_, lean_object* v_numIndParams_1995_, lean_object* v_positions_1996_, lean_object* v_fnIndex_1997_, lean_object* v_recArg_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l_Lean_Elab_Structural_toBelow(v_below_1994_, v_numIndParams_1995_, v_positions_1996_, v_fnIndex_1997_, v_recArg_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(lean_object* v_00_u03b1_2005_, lean_object* v_x_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_){
_start:
{
lean_object* v___x_2012_; 
v___x_2012_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_x_2006_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___boxed(lean_object* v_00_u03b1_2013_, lean_object* v_x_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_){
_start:
{
lean_object* v_res_2020_; 
v_res_2020_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(v_00_u03b1_2013_, v_x_2014_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_);
lean_dec(v___y_2018_);
lean_dec_ref(v___y_2017_);
lean_dec(v___y_2016_);
lean_dec_ref(v___y_2015_);
return v_res_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(lean_object* v_k_2021_, lean_object* v___y_2022_, lean_object* v_b_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_){
_start:
{
lean_object* v___x_2029_; 
v___x_2029_ = lean_apply_7(v_k_2021_, v_b_2023_, v___y_2022_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, lean_box(0));
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed(lean_object* v_k_2030_, lean_object* v___y_2031_, lean_object* v_b_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_){
_start:
{
lean_object* v_res_2038_; 
v_res_2038_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(v_k_2030_, v___y_2031_, v_b_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(lean_object* v_name_2039_, uint8_t v_bi_2040_, lean_object* v_type_2041_, lean_object* v_k_2042_, uint8_t v_kind_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_){
_start:
{
lean_object* v___f_2050_; lean_object* v___x_2051_; 
v___f_2050_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2050_, 0, v_k_2042_);
lean_closure_set(v___f_2050_, 1, v___y_2044_);
v___x_2051_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2039_, v_bi_2040_, v_type_2041_, v___f_2050_, v_kind_2043_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_);
if (lean_obj_tag(v___x_2051_) == 0)
{
return v___x_2051_;
}
else
{
lean_object* v_a_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2059_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2054_ = v___x_2051_;
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_a_2052_);
lean_dec(v___x_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2059_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2057_; 
if (v_isShared_2055_ == 0)
{
v___x_2057_ = v___x_2054_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_a_2052_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
return v___x_2057_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___boxed(lean_object* v_name_2060_, lean_object* v_bi_2061_, lean_object* v_type_2062_, lean_object* v_k_2063_, lean_object* v_kind_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_){
_start:
{
uint8_t v_bi_boxed_2071_; uint8_t v_kind_boxed_2072_; lean_object* v_res_2073_; 
v_bi_boxed_2071_ = lean_unbox(v_bi_2061_);
v_kind_boxed_2072_ = lean_unbox(v_kind_2064_);
v_res_2073_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_name_2060_, v_bi_boxed_2071_, v_type_2062_, v_k_2063_, v_kind_boxed_2072_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(lean_object* v_00_u03b1_2074_, lean_object* v_name_2075_, uint8_t v_bi_2076_, lean_object* v_type_2077_, lean_object* v_k_2078_, uint8_t v_kind_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_){
_start:
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_name_2075_, v_bi_2076_, v_type_2077_, v_k_2078_, v_kind_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_);
return v___x_2086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___boxed(lean_object* v_00_u03b1_2087_, lean_object* v_name_2088_, lean_object* v_bi_2089_, lean_object* v_type_2090_, lean_object* v_k_2091_, lean_object* v_kind_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_){
_start:
{
uint8_t v_bi_boxed_2099_; uint8_t v_kind_boxed_2100_; lean_object* v_res_2101_; 
v_bi_boxed_2099_ = lean_unbox(v_bi_2089_);
v_kind_boxed_2100_ = lean_unbox(v_kind_2092_);
v_res_2101_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(v_00_u03b1_2087_, v_name_2088_, v_bi_boxed_2099_, v_type_2090_, v_k_2091_, v_kind_boxed_2100_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_);
return v_res_2101_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(lean_object* v_cls_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v_options_2105_; uint8_t v_hasTrace_2106_; 
v_options_2105_ = lean_ctor_get(v___y_2103_, 2);
v_hasTrace_2106_ = lean_ctor_get_uint8(v_options_2105_, sizeof(void*)*1);
if (v_hasTrace_2106_ == 0)
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
lean_dec(v_cls_2102_);
v___x_2107_ = lean_box(v_hasTrace_2106_);
v___x_2108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2108_, 0, v___x_2107_);
return v___x_2108_;
}
else
{
lean_object* v_inheritedTraceOptions_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; uint8_t v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
v_inheritedTraceOptions_2109_ = lean_ctor_get(v___y_2103_, 13);
v___x_2110_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___closed__1));
v___x_2111_ = l_Lean_Name_append(v___x_2110_, v_cls_2102_);
v___x_2112_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2109_, v_options_2105_, v___x_2111_);
lean_dec(v___x_2111_);
v___x_2113_ = lean_box(v___x_2112_);
v___x_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2113_);
return v___x_2114_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg___boxed(lean_object* v_cls_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_){
_start:
{
lean_object* v_res_2118_; 
v_res_2118_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(v_cls_2115_, v___y_2116_);
lean_dec_ref(v___y_2116_);
return v_res_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(lean_object* v_cls_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_){
_start:
{
lean_object* v___x_2126_; 
v___x_2126_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(v_cls_2119_, v___y_2123_);
return v___x_2126_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___boxed(lean_object* v_cls_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(v_cls_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___lam__0(lean_object* v_k_2135_, lean_object* v___y_2136_, lean_object* v_b_2137_, lean_object* v_c_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_){
_start:
{
lean_object* v___x_2144_; 
v___x_2144_ = lean_apply_8(v_k_2135_, v_b_2137_, v_c_2138_, v___y_2136_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_, lean_box(0));
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___lam__0___boxed(lean_object* v_k_2145_, lean_object* v___y_2146_, lean_object* v_b_2147_, lean_object* v_c_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___lam__0(v_k_2145_, v___y_2146_, v_b_2147_, v_c_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg(lean_object* v_e_2155_, lean_object* v_maxFVars_2156_, lean_object* v_k_2157_, uint8_t v_cleanupAnnotations_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v___f_2165_; uint8_t v___x_2166_; uint8_t v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___f_2165_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2165_, 0, v_k_2157_);
lean_closure_set(v___f_2165_, 1, v___y_2159_);
v___x_2166_ = 1;
v___x_2167_ = 0;
v___x_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2168_, 0, v_maxFVars_2156_);
v___x_2169_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2155_, v___x_2166_, v___x_2167_, v___x_2166_, v___x_2167_, v___x_2168_, v___f_2165_, v_cleanupAnnotations_2158_, v___y_2160_, v___y_2161_, v___y_2162_, v___y_2163_);
lean_dec_ref(v___x_2168_);
if (lean_obj_tag(v___x_2169_) == 0)
{
return v___x_2169_;
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
v_a_2170_ = lean_ctor_get(v___x_2169_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2169_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___x_2169_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2169_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___boxed(lean_object* v_e_2178_, lean_object* v_maxFVars_2179_, lean_object* v_k_2180_, lean_object* v_cleanupAnnotations_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2188_; lean_object* v_res_2189_; 
v_cleanupAnnotations_boxed_2188_ = lean_unbox(v_cleanupAnnotations_2181_);
v_res_2189_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg(v_e_2178_, v_maxFVars_2179_, v_k_2180_, v_cleanupAnnotations_boxed_2188_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(lean_object* v_00_u03b1_2190_, lean_object* v_e_2191_, lean_object* v_maxFVars_2192_, lean_object* v_k_2193_, uint8_t v_cleanupAnnotations_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
lean_object* v___x_2201_; 
v___x_2201_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg(v_e_2191_, v_maxFVars_2192_, v_k_2193_, v_cleanupAnnotations_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
return v___x_2201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___boxed(lean_object* v_00_u03b1_2202_, lean_object* v_e_2203_, lean_object* v_maxFVars_2204_, lean_object* v_k_2205_, lean_object* v_cleanupAnnotations_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2213_; lean_object* v_res_2214_; 
v_cleanupAnnotations_boxed_2213_ = lean_unbox(v_cleanupAnnotations_2206_);
v_res_2214_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(v_00_u03b1_2202_, v_e_2203_, v_maxFVars_2204_, v_k_2205_, v_cleanupAnnotations_boxed_2213_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(lean_object* v_cls_2215_, lean_object* v_msg_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v_ref_2222_; lean_object* v___x_2223_; lean_object* v_a_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2268_; 
v_ref_2222_ = lean_ctor_get(v___y_2219_, 5);
v___x_2223_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_);
v_a_2224_ = lean_ctor_get(v___x_2223_, 0);
v_isSharedCheck_2268_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2226_ = v___x_2223_;
v_isShared_2227_ = v_isSharedCheck_2268_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_a_2224_);
lean_dec(v___x_2223_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2268_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2228_; lean_object* v_traceState_2229_; lean_object* v_env_2230_; lean_object* v_nextMacroScope_2231_; lean_object* v_ngen_2232_; lean_object* v_auxDeclNGen_2233_; lean_object* v_cache_2234_; lean_object* v_messages_2235_; lean_object* v_infoState_2236_; lean_object* v_snapshotTasks_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2267_; 
v___x_2228_ = lean_st_ref_take(v___y_2220_);
v_traceState_2229_ = lean_ctor_get(v___x_2228_, 4);
v_env_2230_ = lean_ctor_get(v___x_2228_, 0);
v_nextMacroScope_2231_ = lean_ctor_get(v___x_2228_, 1);
v_ngen_2232_ = lean_ctor_get(v___x_2228_, 2);
v_auxDeclNGen_2233_ = lean_ctor_get(v___x_2228_, 3);
v_cache_2234_ = lean_ctor_get(v___x_2228_, 5);
v_messages_2235_ = lean_ctor_get(v___x_2228_, 6);
v_infoState_2236_ = lean_ctor_get(v___x_2228_, 7);
v_snapshotTasks_2237_ = lean_ctor_get(v___x_2228_, 8);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2239_ = v___x_2228_;
v_isShared_2240_ = v_isSharedCheck_2267_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_snapshotTasks_2237_);
lean_inc(v_infoState_2236_);
lean_inc(v_messages_2235_);
lean_inc(v_cache_2234_);
lean_inc(v_traceState_2229_);
lean_inc(v_auxDeclNGen_2233_);
lean_inc(v_ngen_2232_);
lean_inc(v_nextMacroScope_2231_);
lean_inc(v_env_2230_);
lean_dec(v___x_2228_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2267_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
uint64_t v_tid_2241_; lean_object* v_traces_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2266_; 
v_tid_2241_ = lean_ctor_get_uint64(v_traceState_2229_, sizeof(void*)*1);
v_traces_2242_ = lean_ctor_get(v_traceState_2229_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v_traceState_2229_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2244_ = v_traceState_2229_;
v_isShared_2245_ = v_isSharedCheck_2266_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_traces_2242_);
lean_dec(v_traceState_2229_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2266_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v___x_2246_; double v___x_2247_; uint8_t v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2256_; 
v___x_2246_ = lean_box(0);
v___x_2247_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0);
v___x_2248_ = 0;
v___x_2249_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__1));
v___x_2250_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2250_, 0, v_cls_2215_);
lean_ctor_set(v___x_2250_, 1, v___x_2246_);
lean_ctor_set(v___x_2250_, 2, v___x_2249_);
lean_ctor_set_float(v___x_2250_, sizeof(void*)*3, v___x_2247_);
lean_ctor_set_float(v___x_2250_, sizeof(void*)*3 + 8, v___x_2247_);
lean_ctor_set_uint8(v___x_2250_, sizeof(void*)*3 + 16, v___x_2248_);
v___x_2251_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__2));
v___x_2252_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2250_);
lean_ctor_set(v___x_2252_, 1, v_a_2224_);
lean_ctor_set(v___x_2252_, 2, v___x_2251_);
lean_inc(v_ref_2222_);
v___x_2253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2253_, 0, v_ref_2222_);
lean_ctor_set(v___x_2253_, 1, v___x_2252_);
v___x_2254_ = l_Lean_PersistentArray_push___redArg(v_traces_2242_, v___x_2253_);
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 0, v___x_2254_);
v___x_2256_ = v___x_2244_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v___x_2254_);
lean_ctor_set_uint64(v_reuseFailAlloc_2265_, sizeof(void*)*1, v_tid_2241_);
v___x_2256_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
lean_object* v___x_2258_; 
if (v_isShared_2240_ == 0)
{
lean_ctor_set(v___x_2239_, 4, v___x_2256_);
v___x_2258_ = v___x_2239_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v_env_2230_);
lean_ctor_set(v_reuseFailAlloc_2264_, 1, v_nextMacroScope_2231_);
lean_ctor_set(v_reuseFailAlloc_2264_, 2, v_ngen_2232_);
lean_ctor_set(v_reuseFailAlloc_2264_, 3, v_auxDeclNGen_2233_);
lean_ctor_set(v_reuseFailAlloc_2264_, 4, v___x_2256_);
lean_ctor_set(v_reuseFailAlloc_2264_, 5, v_cache_2234_);
lean_ctor_set(v_reuseFailAlloc_2264_, 6, v_messages_2235_);
lean_ctor_set(v_reuseFailAlloc_2264_, 7, v_infoState_2236_);
lean_ctor_set(v_reuseFailAlloc_2264_, 8, v_snapshotTasks_2237_);
v___x_2258_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2262_; 
v___x_2259_ = lean_st_ref_set(v___y_2220_, v___x_2258_);
v___x_2260_ = lean_box(0);
if (v_isShared_2227_ == 0)
{
lean_ctor_set(v___x_2226_, 0, v___x_2260_);
v___x_2262_ = v___x_2226_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v___x_2260_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___boxed(lean_object* v_cls_2269_, lean_object* v_msg_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v_cls_2269_, v_msg_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
return v_res_2276_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(lean_object* v_e_2277_, lean_object* v_as_2278_, size_t v_i_2279_, size_t v_stop_2280_){
_start:
{
uint8_t v___x_2281_; 
v___x_2281_ = lean_usize_dec_eq(v_i_2279_, v_stop_2280_);
if (v___x_2281_ == 0)
{
lean_object* v___x_2282_; lean_object* v_fnName_2283_; lean_object* v_recArgPos_2284_; uint8_t v___x_2285_; 
v___x_2282_ = lean_array_uget_borrowed(v_as_2278_, v_i_2279_);
v_fnName_2283_ = lean_ctor_get(v___x_2282_, 0);
v_recArgPos_2284_ = lean_ctor_get(v___x_2282_, 2);
lean_inc(v_recArgPos_2284_);
lean_inc(v_fnName_2283_);
v___x_2285_ = l_Lean_Elab_Structural_recArgHasLooseBVarsAt(v_fnName_2283_, v_recArgPos_2284_, v_e_2277_);
if (v___x_2285_ == 0)
{
size_t v___x_2286_; size_t v___x_2287_; 
v___x_2286_ = ((size_t)1ULL);
v___x_2287_ = lean_usize_add(v_i_2279_, v___x_2286_);
v_i_2279_ = v___x_2287_;
goto _start;
}
else
{
return v___x_2285_;
}
}
else
{
uint8_t v___x_2289_; 
v___x_2289_ = 0;
return v___x_2289_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6___boxed(lean_object* v_e_2290_, lean_object* v_as_2291_, lean_object* v_i_2292_, lean_object* v_stop_2293_){
_start:
{
size_t v_i_boxed_2294_; size_t v_stop_boxed_2295_; uint8_t v_res_2296_; lean_object* v_r_2297_; 
v_i_boxed_2294_ = lean_unbox_usize(v_i_2292_);
lean_dec(v_i_2292_);
v_stop_boxed_2295_ = lean_unbox_usize(v_stop_2293_);
lean_dec(v_stop_2293_);
v_res_2296_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(v_e_2290_, v_as_2291_, v_i_boxed_2294_, v_stop_boxed_2295_);
lean_dec_ref(v_as_2291_);
lean_dec_ref(v_e_2290_);
v_r_2297_ = lean_box(v_res_2296_);
return v_r_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(lean_object* v_declName_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v___x_2301_; lean_object* v_env_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2301_ = lean_st_ref_get(v___y_2299_);
v_env_2302_ = lean_ctor_get(v___x_2301_, 0);
lean_inc_ref(v_env_2302_);
lean_dec(v___x_2301_);
v___x_2303_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_2302_, v_declName_2298_);
v___x_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg___boxed(lean_object* v_declName_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_2305_, v___y_2306_);
lean_dec(v___y_2306_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(lean_object* v_msg_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
lean_object* v___x_2316_; lean_object* v_toApplicative_2317_; lean_object* v___x_2319_; uint8_t v_isShared_2320_; uint8_t v_isSharedCheck_2379_; 
v___x_2316_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_2317_ = lean_ctor_get(v___x_2316_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2316_);
if (v_isSharedCheck_2379_ == 0)
{
lean_object* v_unused_2380_; 
v_unused_2380_ = lean_ctor_get(v___x_2316_, 1);
lean_dec(v_unused_2380_);
v___x_2319_ = v___x_2316_;
v_isShared_2320_ = v_isSharedCheck_2379_;
goto v_resetjp_2318_;
}
else
{
lean_inc(v_toApplicative_2317_);
lean_dec(v___x_2316_);
v___x_2319_ = lean_box(0);
v_isShared_2320_ = v_isSharedCheck_2379_;
goto v_resetjp_2318_;
}
v_resetjp_2318_:
{
lean_object* v_toFunctor_2321_; lean_object* v_toSeq_2322_; lean_object* v_toSeqLeft_2323_; lean_object* v_toSeqRight_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2377_; 
v_toFunctor_2321_ = lean_ctor_get(v_toApplicative_2317_, 0);
v_toSeq_2322_ = lean_ctor_get(v_toApplicative_2317_, 2);
v_toSeqLeft_2323_ = lean_ctor_get(v_toApplicative_2317_, 3);
v_toSeqRight_2324_ = lean_ctor_get(v_toApplicative_2317_, 4);
v_isSharedCheck_2377_ = !lean_is_exclusive(v_toApplicative_2317_);
if (v_isSharedCheck_2377_ == 0)
{
lean_object* v_unused_2378_; 
v_unused_2378_ = lean_ctor_get(v_toApplicative_2317_, 1);
lean_dec(v_unused_2378_);
v___x_2326_ = v_toApplicative_2317_;
v_isShared_2327_ = v_isSharedCheck_2377_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_toSeqRight_2324_);
lean_inc(v_toSeqLeft_2323_);
lean_inc(v_toSeq_2322_);
lean_inc(v_toFunctor_2321_);
lean_dec(v_toApplicative_2317_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2377_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___f_2328_; lean_object* v___f_2329_; lean_object* v___f_2330_; lean_object* v___f_2331_; lean_object* v___x_2332_; lean_object* v___f_2333_; lean_object* v___f_2334_; lean_object* v___f_2335_; lean_object* v___x_2337_; 
v___f_2328_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2));
v___f_2329_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3));
lean_inc_ref(v_toFunctor_2321_);
v___f_2330_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2330_, 0, v_toFunctor_2321_);
v___f_2331_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2331_, 0, v_toFunctor_2321_);
v___x_2332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___f_2330_);
lean_ctor_set(v___x_2332_, 1, v___f_2331_);
v___f_2333_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2333_, 0, v_toSeqRight_2324_);
v___f_2334_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2334_, 0, v_toSeqLeft_2323_);
v___f_2335_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2335_, 0, v_toSeq_2322_);
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 4, v___f_2333_);
lean_ctor_set(v___x_2326_, 3, v___f_2334_);
lean_ctor_set(v___x_2326_, 2, v___f_2335_);
lean_ctor_set(v___x_2326_, 1, v___f_2328_);
lean_ctor_set(v___x_2326_, 0, v___x_2332_);
v___x_2337_ = v___x_2326_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2332_);
lean_ctor_set(v_reuseFailAlloc_2376_, 1, v___f_2328_);
lean_ctor_set(v_reuseFailAlloc_2376_, 2, v___f_2335_);
lean_ctor_set(v_reuseFailAlloc_2376_, 3, v___f_2334_);
lean_ctor_set(v_reuseFailAlloc_2376_, 4, v___f_2333_);
v___x_2337_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
lean_object* v___x_2339_; 
if (v_isShared_2320_ == 0)
{
lean_ctor_set(v___x_2319_, 1, v___f_2329_);
lean_ctor_set(v___x_2319_, 0, v___x_2337_);
v___x_2339_ = v___x_2319_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v___x_2337_);
lean_ctor_set(v_reuseFailAlloc_2375_, 1, v___f_2329_);
v___x_2339_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
lean_object* v___x_2340_; lean_object* v_toApplicative_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2373_; 
v___x_2340_ = l_ReaderT_instMonad___redArg(v___x_2339_);
v_toApplicative_2341_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2373_ == 0)
{
lean_object* v_unused_2374_; 
v_unused_2374_ = lean_ctor_get(v___x_2340_, 1);
lean_dec(v_unused_2374_);
v___x_2343_ = v___x_2340_;
v_isShared_2344_ = v_isSharedCheck_2373_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_toApplicative_2341_);
lean_dec(v___x_2340_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2373_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v_toFunctor_2345_; lean_object* v_toSeq_2346_; lean_object* v_toSeqLeft_2347_; lean_object* v_toSeqRight_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2371_; 
v_toFunctor_2345_ = lean_ctor_get(v_toApplicative_2341_, 0);
v_toSeq_2346_ = lean_ctor_get(v_toApplicative_2341_, 2);
v_toSeqLeft_2347_ = lean_ctor_get(v_toApplicative_2341_, 3);
v_toSeqRight_2348_ = lean_ctor_get(v_toApplicative_2341_, 4);
v_isSharedCheck_2371_ = !lean_is_exclusive(v_toApplicative_2341_);
if (v_isSharedCheck_2371_ == 0)
{
lean_object* v_unused_2372_; 
v_unused_2372_ = lean_ctor_get(v_toApplicative_2341_, 1);
lean_dec(v_unused_2372_);
v___x_2350_ = v_toApplicative_2341_;
v_isShared_2351_ = v_isSharedCheck_2371_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_toSeqRight_2348_);
lean_inc(v_toSeqLeft_2347_);
lean_inc(v_toSeq_2346_);
lean_inc(v_toFunctor_2345_);
lean_dec(v_toApplicative_2341_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2371_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___f_2352_; lean_object* v___f_2353_; lean_object* v___f_2354_; lean_object* v___f_2355_; lean_object* v___x_2356_; lean_object* v___f_2357_; lean_object* v___f_2358_; lean_object* v___f_2359_; lean_object* v___x_2361_; 
v___f_2352_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4));
v___f_2353_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5));
lean_inc_ref(v_toFunctor_2345_);
v___f_2354_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2354_, 0, v_toFunctor_2345_);
v___f_2355_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2355_, 0, v_toFunctor_2345_);
v___x_2356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2356_, 0, v___f_2354_);
lean_ctor_set(v___x_2356_, 1, v___f_2355_);
v___f_2357_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2357_, 0, v_toSeqRight_2348_);
v___f_2358_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2358_, 0, v_toSeqLeft_2347_);
v___f_2359_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2359_, 0, v_toSeq_2346_);
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 4, v___f_2357_);
lean_ctor_set(v___x_2350_, 3, v___f_2358_);
lean_ctor_set(v___x_2350_, 2, v___f_2359_);
lean_ctor_set(v___x_2350_, 1, v___f_2352_);
lean_ctor_set(v___x_2350_, 0, v___x_2356_);
v___x_2361_ = v___x_2350_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v___x_2356_);
lean_ctor_set(v_reuseFailAlloc_2370_, 1, v___f_2352_);
lean_ctor_set(v_reuseFailAlloc_2370_, 2, v___f_2359_);
lean_ctor_set(v_reuseFailAlloc_2370_, 3, v___f_2358_);
lean_ctor_set(v_reuseFailAlloc_2370_, 4, v___f_2357_);
v___x_2361_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2363_; 
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 1, v___f_2353_);
lean_ctor_set(v___x_2343_, 0, v___x_2361_);
v___x_2363_ = v___x_2343_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2361_);
lean_ctor_set(v_reuseFailAlloc_2369_, 1, v___f_2353_);
v___x_2363_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_26806__overap_2367_; lean_object* v___x_2368_; 
v___x_2364_ = l_ReaderT_instMonad___redArg(v___x_2363_);
v___x_2365_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_2366_ = l_instInhabitedOfMonad___redArg(v___x_2364_, v___x_2365_);
v___x_26806__overap_2367_ = lean_panic_fn(v___x_2366_, v_msg_2309_);
v___x_2368_ = lean_apply_6(v___x_26806__overap_2367_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, lean_box(0));
return v___x_2368_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7___boxed(lean_object* v_msg_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(v_msg_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_);
return v_res_2388_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__0(void){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2389_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2390_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__0);
v___x_2391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2391_, 0, v___x_2390_);
return v___x_2391_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__2(void){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2392_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1);
v___x_2393_ = lean_unsigned_to_nat(0u);
v___x_2394_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2393_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
lean_ctor_set(v___x_2394_, 2, v___x_2393_);
lean_ctor_set(v___x_2394_, 3, v___x_2392_);
lean_ctor_set(v___x_2394_, 4, v___x_2392_);
lean_ctor_set(v___x_2394_, 5, v___x_2392_);
lean_ctor_set(v___x_2394_, 6, v___x_2392_);
lean_ctor_set(v___x_2394_, 7, v___x_2392_);
lean_ctor_set(v___x_2394_, 8, v___x_2392_);
return v___x_2394_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__3(void){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2395_ = lean_unsigned_to_nat(32u);
v___x_2396_ = lean_mk_empty_array_with_capacity(v___x_2395_);
v___x_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2396_);
return v___x_2397_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__4(void){
_start:
{
size_t v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2398_ = ((size_t)5ULL);
v___x_2399_ = lean_unsigned_to_nat(0u);
v___x_2400_ = lean_unsigned_to_nat(32u);
v___x_2401_ = lean_mk_empty_array_with_capacity(v___x_2400_);
v___x_2402_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__3);
v___x_2403_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2403_, 0, v___x_2402_);
lean_ctor_set(v___x_2403_, 1, v___x_2401_);
lean_ctor_set(v___x_2403_, 2, v___x_2399_);
lean_ctor_set(v___x_2403_, 3, v___x_2399_);
lean_ctor_set_usize(v___x_2403_, 4, v___x_2398_);
return v___x_2403_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__5(void){
_start:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2404_ = lean_box(1);
v___x_2405_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__4);
v___x_2406_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1);
v___x_2407_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2407_, 0, v___x_2406_);
lean_ctor_set(v___x_2407_, 1, v___x_2405_);
lean_ctor_set(v___x_2407_, 2, v___x_2404_);
return v___x_2407_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7(void){
_start:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2409_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__6));
v___x_2410_ = l_Lean_stringToMessageData(v___x_2409_);
return v___x_2410_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__9(void){
_start:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; 
v___x_2412_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__8));
v___x_2413_ = l_Lean_stringToMessageData(v___x_2412_);
return v___x_2413_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__11(void){
_start:
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2415_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__10));
v___x_2416_ = l_Lean_stringToMessageData(v___x_2415_);
return v___x_2416_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__13(void){
_start:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2418_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__12));
v___x_2419_ = l_Lean_stringToMessageData(v___x_2418_);
return v___x_2419_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__15(void){
_start:
{
lean_object* v___x_2421_; lean_object* v___x_2422_; 
v___x_2421_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__14));
v___x_2422_ = l_Lean_stringToMessageData(v___x_2421_);
return v___x_2422_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__17(void){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2424_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__16));
v___x_2425_ = l_Lean_stringToMessageData(v___x_2424_);
return v___x_2425_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__19(void){
_start:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; 
v___x_2427_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__18));
v___x_2428_ = l_Lean_stringToMessageData(v___x_2427_);
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg(lean_object* v_msg_2429_, lean_object* v_declHint_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v___x_2433_; lean_object* v_env_2434_; uint8_t v___x_2435_; 
v___x_2433_ = lean_st_ref_get(v___y_2431_);
v_env_2434_ = lean_ctor_get(v___x_2433_, 0);
lean_inc_ref(v_env_2434_);
lean_dec(v___x_2433_);
v___x_2435_ = l_Lean_Name_isAnonymous(v_declHint_2430_);
if (v___x_2435_ == 0)
{
uint8_t v_isExporting_2436_; 
v_isExporting_2436_ = lean_ctor_get_uint8(v_env_2434_, sizeof(void*)*8);
if (v_isExporting_2436_ == 0)
{
lean_object* v___x_2437_; 
lean_dec_ref(v_env_2434_);
lean_dec(v_declHint_2430_);
v___x_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2437_, 0, v_msg_2429_);
return v___x_2437_;
}
else
{
lean_object* v___x_2438_; uint8_t v___x_2439_; 
lean_inc_ref(v_env_2434_);
v___x_2438_ = l_Lean_Environment_setExporting(v_env_2434_, v___x_2435_);
lean_inc(v_declHint_2430_);
lean_inc_ref(v___x_2438_);
v___x_2439_ = l_Lean_Environment_contains(v___x_2438_, v_declHint_2430_, v_isExporting_2436_);
if (v___x_2439_ == 0)
{
lean_object* v___x_2440_; 
lean_dec_ref(v___x_2438_);
lean_dec_ref(v_env_2434_);
lean_dec(v_declHint_2430_);
v___x_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2440_, 0, v_msg_2429_);
return v___x_2440_;
}
else
{
lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v_c_2446_; lean_object* v___x_2447_; 
v___x_2441_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__2);
v___x_2442_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__5);
v___x_2443_ = l_Lean_Options_empty;
v___x_2444_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2438_);
lean_ctor_set(v___x_2444_, 1, v___x_2441_);
lean_ctor_set(v___x_2444_, 2, v___x_2442_);
lean_ctor_set(v___x_2444_, 3, v___x_2443_);
lean_inc(v_declHint_2430_);
v___x_2445_ = l_Lean_MessageData_ofConstName(v_declHint_2430_, v___x_2435_);
v_c_2446_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2446_, 0, v___x_2444_);
lean_ctor_set(v_c_2446_, 1, v___x_2445_);
v___x_2447_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2434_, v_declHint_2430_);
if (lean_obj_tag(v___x_2447_) == 0)
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; 
lean_dec_ref(v_env_2434_);
lean_dec(v_declHint_2430_);
v___x_2448_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7);
v___x_2449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2448_);
lean_ctor_set(v___x_2449_, 1, v_c_2446_);
v___x_2450_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__9);
v___x_2451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2449_);
lean_ctor_set(v___x_2451_, 1, v___x_2450_);
v___x_2452_ = l_Lean_MessageData_note(v___x_2451_);
v___x_2453_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2453_, 0, v_msg_2429_);
lean_ctor_set(v___x_2453_, 1, v___x_2452_);
v___x_2454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2453_);
return v___x_2454_;
}
else
{
lean_object* v_val_2455_; lean_object* v___x_2457_; uint8_t v_isShared_2458_; uint8_t v_isSharedCheck_2490_; 
v_val_2455_ = lean_ctor_get(v___x_2447_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2447_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2457_ = v___x_2447_;
v_isShared_2458_ = v_isSharedCheck_2490_;
goto v_resetjp_2456_;
}
else
{
lean_inc(v_val_2455_);
lean_dec(v___x_2447_);
v___x_2457_ = lean_box(0);
v_isShared_2458_ = v_isSharedCheck_2490_;
goto v_resetjp_2456_;
}
v_resetjp_2456_:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v_mod_2462_; uint8_t v___x_2463_; 
v___x_2459_ = lean_box(0);
v___x_2460_ = l_Lean_Environment_header(v_env_2434_);
lean_dec_ref(v_env_2434_);
v___x_2461_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2460_);
v_mod_2462_ = lean_array_get(v___x_2459_, v___x_2461_, v_val_2455_);
lean_dec(v_val_2455_);
lean_dec_ref(v___x_2461_);
v___x_2463_ = l_Lean_isPrivateName(v_declHint_2430_);
lean_dec(v_declHint_2430_);
if (v___x_2463_ == 0)
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2475_; 
v___x_2464_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__11);
v___x_2465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2464_);
lean_ctor_set(v___x_2465_, 1, v_c_2446_);
v___x_2466_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__13);
v___x_2467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2465_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
v___x_2468_ = l_Lean_MessageData_ofName(v_mod_2462_);
v___x_2469_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2469_, 0, v___x_2467_);
lean_ctor_set(v___x_2469_, 1, v___x_2468_);
v___x_2470_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__15);
v___x_2471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2469_);
lean_ctor_set(v___x_2471_, 1, v___x_2470_);
v___x_2472_ = l_Lean_MessageData_note(v___x_2471_);
v___x_2473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2473_, 0, v_msg_2429_);
lean_ctor_set(v___x_2473_, 1, v___x_2472_);
if (v_isShared_2458_ == 0)
{
lean_ctor_set_tag(v___x_2457_, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2473_);
v___x_2475_ = v___x_2457_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v___x_2473_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
else
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2488_; 
v___x_2477_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7);
v___x_2478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2477_);
lean_ctor_set(v___x_2478_, 1, v_c_2446_);
v___x_2479_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__17);
v___x_2480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2478_);
lean_ctor_set(v___x_2480_, 1, v___x_2479_);
v___x_2481_ = l_Lean_MessageData_ofName(v_mod_2462_);
v___x_2482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v___x_2483_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__19);
v___x_2484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2484_, 0, v___x_2482_);
lean_ctor_set(v___x_2484_, 1, v___x_2483_);
v___x_2485_ = l_Lean_MessageData_note(v___x_2484_);
v___x_2486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2486_, 0, v_msg_2429_);
lean_ctor_set(v___x_2486_, 1, v___x_2485_);
if (v_isShared_2458_ == 0)
{
lean_ctor_set_tag(v___x_2457_, 0);
lean_ctor_set(v___x_2457_, 0, v___x_2486_);
v___x_2488_ = v___x_2457_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v___x_2486_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2491_; 
lean_dec_ref(v_env_2434_);
lean_dec(v_declHint_2430_);
v___x_2491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2491_, 0, v_msg_2429_);
return v___x_2491_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___boxed(lean_object* v_msg_2492_, lean_object* v_declHint_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
lean_object* v_res_2496_; 
v_res_2496_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg(v_msg_2492_, v_declHint_2493_, v___y_2494_);
lean_dec(v___y_2494_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19(lean_object* v_msg_2497_, lean_object* v_declHint_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v___x_2505_; lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2515_; 
v___x_2505_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg(v_msg_2497_, v_declHint_2498_, v___y_2503_);
v_a_2506_ = lean_ctor_get(v___x_2505_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2508_ = v___x_2505_;
v_isShared_2509_ = v_isSharedCheck_2515_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2505_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2515_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2513_; 
v___x_2510_ = l_Lean_unknownIdentifierMessageTag;
v___x_2511_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
lean_ctor_set(v___x_2511_, 1, v_a_2506_);
if (v_isShared_2509_ == 0)
{
lean_ctor_set(v___x_2508_, 0, v___x_2511_);
v___x_2513_ = v___x_2508_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___x_2511_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19___boxed(lean_object* v_msg_2516_, lean_object* v_declHint_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_){
_start:
{
lean_object* v_res_2524_; 
v_res_2524_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19(v_msg_2516_, v_declHint_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
lean_dec(v___y_2520_);
lean_dec_ref(v___y_2519_);
lean_dec(v___y_2518_);
return v_res_2524_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(lean_object* v_msg_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_){
_start:
{
lean_object* v_ref_2531_; lean_object* v___x_2532_; lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2541_; 
v_ref_2531_ = lean_ctor_get(v___y_2528_, 5);
v___x_2532_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_);
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2535_ = v___x_2532_;
v_isShared_2536_ = v_isSharedCheck_2541_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v___x_2532_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2541_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2537_; lean_object* v___x_2539_; 
lean_inc(v_ref_2531_);
v___x_2537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2537_, 0, v_ref_2531_);
lean_ctor_set(v___x_2537_, 1, v_a_2533_);
if (v_isShared_2536_ == 0)
{
lean_ctor_set_tag(v___x_2535_, 1);
lean_ctor_set(v___x_2535_, 0, v___x_2537_);
v___x_2539_ = v___x_2535_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v___x_2537_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg___boxed(lean_object* v_msg_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
lean_dec(v___y_2546_);
lean_dec_ref(v___y_2545_);
lean_dec(v___y_2544_);
lean_dec_ref(v___y_2543_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg(lean_object* v_ref_2549_, lean_object* v_msg_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
lean_object* v_fileName_2557_; lean_object* v_fileMap_2558_; lean_object* v_options_2559_; lean_object* v_currRecDepth_2560_; lean_object* v_maxRecDepth_2561_; lean_object* v_ref_2562_; lean_object* v_currNamespace_2563_; lean_object* v_openDecls_2564_; lean_object* v_initHeartbeats_2565_; lean_object* v_maxHeartbeats_2566_; lean_object* v_quotContext_2567_; lean_object* v_currMacroScope_2568_; uint8_t v_diag_2569_; lean_object* v_cancelTk_x3f_2570_; uint8_t v_suppressElabErrors_2571_; lean_object* v_inheritedTraceOptions_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2581_; 
v_fileName_2557_ = lean_ctor_get(v___y_2554_, 0);
v_fileMap_2558_ = lean_ctor_get(v___y_2554_, 1);
v_options_2559_ = lean_ctor_get(v___y_2554_, 2);
v_currRecDepth_2560_ = lean_ctor_get(v___y_2554_, 3);
v_maxRecDepth_2561_ = lean_ctor_get(v___y_2554_, 4);
v_ref_2562_ = lean_ctor_get(v___y_2554_, 5);
v_currNamespace_2563_ = lean_ctor_get(v___y_2554_, 6);
v_openDecls_2564_ = lean_ctor_get(v___y_2554_, 7);
v_initHeartbeats_2565_ = lean_ctor_get(v___y_2554_, 8);
v_maxHeartbeats_2566_ = lean_ctor_get(v___y_2554_, 9);
v_quotContext_2567_ = lean_ctor_get(v___y_2554_, 10);
v_currMacroScope_2568_ = lean_ctor_get(v___y_2554_, 11);
v_diag_2569_ = lean_ctor_get_uint8(v___y_2554_, sizeof(void*)*14);
v_cancelTk_x3f_2570_ = lean_ctor_get(v___y_2554_, 12);
v_suppressElabErrors_2571_ = lean_ctor_get_uint8(v___y_2554_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2572_ = lean_ctor_get(v___y_2554_, 13);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___y_2554_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2574_ = v___y_2554_;
v_isShared_2575_ = v_isSharedCheck_2581_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_inheritedTraceOptions_2572_);
lean_inc(v_cancelTk_x3f_2570_);
lean_inc(v_currMacroScope_2568_);
lean_inc(v_quotContext_2567_);
lean_inc(v_maxHeartbeats_2566_);
lean_inc(v_initHeartbeats_2565_);
lean_inc(v_openDecls_2564_);
lean_inc(v_currNamespace_2563_);
lean_inc(v_ref_2562_);
lean_inc(v_maxRecDepth_2561_);
lean_inc(v_currRecDepth_2560_);
lean_inc(v_options_2559_);
lean_inc(v_fileMap_2558_);
lean_inc(v_fileName_2557_);
lean_dec(v___y_2554_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2581_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v_ref_2576_; lean_object* v___x_2578_; 
v_ref_2576_ = l_Lean_replaceRef(v_ref_2549_, v_ref_2562_);
lean_dec(v_ref_2562_);
if (v_isShared_2575_ == 0)
{
lean_ctor_set(v___x_2574_, 5, v_ref_2576_);
v___x_2578_ = v___x_2574_;
goto v_reusejp_2577_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_fileName_2557_);
lean_ctor_set(v_reuseFailAlloc_2580_, 1, v_fileMap_2558_);
lean_ctor_set(v_reuseFailAlloc_2580_, 2, v_options_2559_);
lean_ctor_set(v_reuseFailAlloc_2580_, 3, v_currRecDepth_2560_);
lean_ctor_set(v_reuseFailAlloc_2580_, 4, v_maxRecDepth_2561_);
lean_ctor_set(v_reuseFailAlloc_2580_, 5, v_ref_2576_);
lean_ctor_set(v_reuseFailAlloc_2580_, 6, v_currNamespace_2563_);
lean_ctor_set(v_reuseFailAlloc_2580_, 7, v_openDecls_2564_);
lean_ctor_set(v_reuseFailAlloc_2580_, 8, v_initHeartbeats_2565_);
lean_ctor_set(v_reuseFailAlloc_2580_, 9, v_maxHeartbeats_2566_);
lean_ctor_set(v_reuseFailAlloc_2580_, 10, v_quotContext_2567_);
lean_ctor_set(v_reuseFailAlloc_2580_, 11, v_currMacroScope_2568_);
lean_ctor_set(v_reuseFailAlloc_2580_, 12, v_cancelTk_x3f_2570_);
lean_ctor_set(v_reuseFailAlloc_2580_, 13, v_inheritedTraceOptions_2572_);
lean_ctor_set_uint8(v_reuseFailAlloc_2580_, sizeof(void*)*14, v_diag_2569_);
lean_ctor_set_uint8(v_reuseFailAlloc_2580_, sizeof(void*)*14 + 1, v_suppressElabErrors_2571_);
v___x_2578_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2577_;
}
v_reusejp_2577_:
{
lean_object* v___x_2579_; 
v___x_2579_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_2550_, v___y_2552_, v___y_2553_, v___x_2578_, v___y_2555_);
lean_dec_ref(v___x_2578_);
return v___x_2579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg___boxed(lean_object* v_ref_2582_, lean_object* v_msg_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_){
_start:
{
lean_object* v_res_2590_; 
v_res_2590_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg(v_ref_2582_, v_msg_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
lean_dec(v___y_2588_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
lean_dec(v___y_2584_);
lean_dec(v_ref_2582_);
return v_res_2590_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg(lean_object* v_ref_2591_, lean_object* v_msg_2592_, lean_object* v_declHint_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v___x_2600_; lean_object* v_a_2601_; lean_object* v___x_2602_; 
v___x_2600_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19(v_msg_2592_, v_declHint_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_a_2601_);
lean_dec_ref(v___x_2600_);
v___x_2602_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg(v_ref_2591_, v_a_2601_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg___boxed(lean_object* v_ref_2603_, lean_object* v_msg_2604_, lean_object* v_declHint_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
lean_object* v_res_2612_; 
v_res_2612_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg(v_ref_2603_, v_msg_2604_, v_declHint_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
lean_dec(v___y_2610_);
lean_dec(v___y_2608_);
lean_dec_ref(v___y_2607_);
lean_dec(v___y_2606_);
lean_dec(v_ref_2603_);
return v_res_2612_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_2614_; lean_object* v___x_2615_; 
v___x_2614_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__0));
v___x_2615_ = l_Lean_stringToMessageData(v___x_2614_);
return v___x_2615_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2617_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__2));
v___x_2618_ = l_Lean_stringToMessageData(v___x_2617_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg(lean_object* v_ref_2619_, lean_object* v_constName_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_){
_start:
{
lean_object* v___x_2627_; uint8_t v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2627_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__1);
v___x_2628_ = 0;
lean_inc(v_constName_2620_);
v___x_2629_ = l_Lean_MessageData_ofConstName(v_constName_2620_, v___x_2628_);
v___x_2630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2627_);
lean_ctor_set(v___x_2630_, 1, v___x_2629_);
v___x_2631_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__3);
v___x_2632_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2630_);
lean_ctor_set(v___x_2632_, 1, v___x_2631_);
v___x_2633_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg(v_ref_2619_, v___x_2632_, v_constName_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___boxed(lean_object* v_ref_2634_, lean_object* v_constName_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg(v_ref_2634_, v_constName_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
lean_dec(v___y_2640_);
lean_dec(v___y_2638_);
lean_dec_ref(v___y_2637_);
lean_dec(v___y_2636_);
lean_dec(v_ref_2634_);
return v_res_2642_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg(lean_object* v_constName_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
lean_object* v_ref_2650_; lean_object* v___x_2651_; 
v_ref_2650_ = lean_ctor_get(v___y_2647_, 5);
lean_inc(v_ref_2650_);
v___x_2651_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg(v_ref_2650_, v_constName_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
lean_dec(v_ref_2650_);
return v___x_2651_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg___boxed(lean_object* v_constName_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg(v_constName_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
lean_dec(v___y_2653_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(lean_object* v_constName_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_){
_start:
{
lean_object* v___x_2667_; lean_object* v_env_2668_; uint8_t v___x_2669_; lean_object* v___x_2670_; 
v___x_2667_ = lean_st_ref_get(v___y_2665_);
v_env_2668_ = lean_ctor_get(v___x_2667_, 0);
lean_inc_ref(v_env_2668_);
lean_dec(v___x_2667_);
v___x_2669_ = 0;
lean_inc(v_constName_2660_);
v___x_2670_ = l_Lean_Environment_find_x3f(v_env_2668_, v_constName_2660_, v___x_2669_);
if (lean_obj_tag(v___x_2670_) == 0)
{
lean_object* v___x_2671_; 
v___x_2671_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg(v_constName_2660_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_);
return v___x_2671_;
}
else
{
lean_object* v_val_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_dec_ref(v___y_2664_);
lean_dec(v_constName_2660_);
v_val_2672_ = lean_ctor_get(v___x_2670_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2670_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_val_2672_);
lean_dec(v___x_2670_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
lean_ctor_set_tag(v___x_2674_, 0);
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_val_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6___boxed(lean_object* v_constName_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_constName_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
lean_dec(v___y_2685_);
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
return v_res_2687_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3(void){
_start:
{
lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; 
v___x_2691_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2));
v___x_2692_ = lean_unsigned_to_nat(53u);
v___x_2693_ = lean_unsigned_to_nat(62u);
v___x_2694_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1));
v___x_2695_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0));
v___x_2696_ = l_mkPanicMessageWithDecl(v___x_2695_, v___x_2694_, v___x_2693_, v___x_2692_, v___x_2691_);
return v___x_2696_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(size_t v_sz_2697_, size_t v_i_2698_, lean_object* v_bs_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_){
_start:
{
uint8_t v___x_2706_; 
v___x_2706_ = lean_usize_dec_lt(v_i_2698_, v_sz_2697_);
if (v___x_2706_ == 0)
{
lean_object* v___x_2707_; 
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
v___x_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2707_, 0, v_bs_2699_);
return v___x_2707_;
}
else
{
lean_object* v_v_2708_; lean_object* v___x_2709_; 
v_v_2708_ = lean_array_uget_borrowed(v_bs_2699_, v_i_2698_);
lean_inc_ref(v___y_2703_);
lean_inc(v_v_2708_);
v___x_2709_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_v_2708_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
if (lean_obj_tag(v___x_2709_) == 0)
{
lean_object* v_a_2710_; lean_object* v___x_2711_; lean_object* v_bs_x27_2712_; lean_object* v_a_2714_; 
v_a_2710_ = lean_ctor_get(v___x_2709_, 0);
lean_inc(v_a_2710_);
lean_dec_ref(v___x_2709_);
v___x_2711_ = lean_unsigned_to_nat(0u);
v_bs_x27_2712_ = lean_array_uset(v_bs_2699_, v_i_2698_, v___x_2711_);
if (lean_obj_tag(v_a_2710_) == 6)
{
lean_object* v_val_2719_; lean_object* v_numFields_2720_; uint8_t v___x_2721_; lean_object* v___x_2722_; 
v_val_2719_ = lean_ctor_get(v_a_2710_, 0);
lean_inc_ref(v_val_2719_);
lean_dec_ref(v_a_2710_);
v_numFields_2720_ = lean_ctor_get(v_val_2719_, 4);
lean_inc(v_numFields_2720_);
lean_dec_ref(v_val_2719_);
v___x_2721_ = 0;
v___x_2722_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2722_, 0, v_numFields_2720_);
lean_ctor_set(v___x_2722_, 1, v___x_2711_);
lean_ctor_set_uint8(v___x_2722_, sizeof(void*)*2, v___x_2721_);
v_a_2714_ = v___x_2722_;
goto v___jp_2713_;
}
else
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
lean_dec(v_a_2710_);
v___x_2723_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3);
lean_inc(v___y_2704_);
lean_inc_ref(v___y_2703_);
lean_inc(v___y_2702_);
lean_inc_ref(v___y_2701_);
lean_inc(v___y_2700_);
v___x_2724_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(v___x_2723_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_);
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v_a_2725_; 
v_a_2725_ = lean_ctor_get(v___x_2724_, 0);
lean_inc(v_a_2725_);
lean_dec_ref(v___x_2724_);
v_a_2714_ = v_a_2725_;
goto v___jp_2713_;
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec_ref(v_bs_x27_2712_);
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
v_a_2726_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2724_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2724_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
v___jp_2713_:
{
size_t v___x_2715_; size_t v___x_2716_; lean_object* v___x_2717_; 
v___x_2715_ = ((size_t)1ULL);
v___x_2716_ = lean_usize_add(v_i_2698_, v___x_2715_);
v___x_2717_ = lean_array_uset(v_bs_x27_2712_, v_i_2698_, v_a_2714_);
v_i_2698_ = v___x_2716_;
v_bs_2699_ = v___x_2717_;
goto _start;
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec(v___y_2704_);
lean_dec_ref(v___y_2703_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
lean_dec_ref(v_bs_2699_);
v_a_2734_ = lean_ctor_get(v___x_2709_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2709_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2709_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2709_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___boxed(lean_object* v_sz_2742_, lean_object* v_i_2743_, lean_object* v_bs_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_){
_start:
{
size_t v_sz_boxed_2751_; size_t v_i_boxed_2752_; lean_object* v_res_2753_; 
v_sz_boxed_2751_ = lean_unbox_usize(v_sz_2742_);
lean_dec(v_sz_2742_);
v_i_boxed_2752_ = lean_unbox_usize(v_i_2743_);
lean_dec(v_i_2743_);
v_res_2753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(v_sz_boxed_2751_, v_i_boxed_2752_, v_bs_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_);
return v_res_2753_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0(void){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2754_ = lean_box(0);
v___x_2755_ = lean_unsigned_to_nat(16u);
v___x_2756_ = lean_mk_array(v___x_2755_, v___x_2754_);
return v___x_2756_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2757_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0);
v___x_2758_ = lean_unsigned_to_nat(0u);
v___x_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2759_, 0, v___x_2758_);
lean_ctor_set(v___x_2759_, 1, v___x_2757_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(lean_object* v_e_2762_, uint8_t v_alsoCasesOn_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_){
_start:
{
uint8_t v___x_2773_; 
v___x_2773_ = l_Lean_Expr_isApp(v_e_2762_);
if (v___x_2773_ == 0)
{
lean_object* v___x_2774_; lean_object* v___x_2775_; 
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
lean_dec_ref(v_e_2762_);
v___x_2774_ = lean_box(0);
v___x_2775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2774_);
return v___x_2775_;
}
else
{
lean_object* v___x_2776_; 
v___x_2776_ = l_Lean_Expr_getAppFn(v_e_2762_);
if (lean_obj_tag(v___x_2776_) == 4)
{
lean_object* v_declName_2777_; lean_object* v_us_2778_; lean_object* v___x_2779_; lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2934_; 
v_declName_2777_ = lean_ctor_get(v___x_2776_, 0);
lean_inc(v_declName_2777_);
v_us_2778_ = lean_ctor_get(v___x_2776_, 1);
lean_inc(v_us_2778_);
lean_dec_ref(v___x_2776_);
lean_inc(v_declName_2777_);
v___x_2779_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_2777_, v___y_2768_);
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2782_ = v___x_2779_;
v_isShared_2783_ = v_isSharedCheck_2934_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2779_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2934_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
if (lean_obj_tag(v_a_2780_) == 1)
{
lean_object* v_val_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2826_; 
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
v_val_2784_ = lean_ctor_get(v_a_2780_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v_a_2780_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2786_ = v_a_2780_;
v_isShared_2787_ = v_isSharedCheck_2826_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_val_2784_);
lean_dec(v_a_2780_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2826_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v_dummy_2788_; lean_object* v_nargs_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v_args_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; uint8_t v___x_2796_; 
v_dummy_2788_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0);
v_nargs_2789_ = l_Lean_Expr_getAppNumArgs(v_e_2762_);
lean_inc(v_nargs_2789_);
v___x_2790_ = lean_mk_array(v_nargs_2789_, v_dummy_2788_);
v___x_2791_ = lean_unsigned_to_nat(1u);
v___x_2792_ = lean_nat_sub(v_nargs_2789_, v___x_2791_);
lean_dec(v_nargs_2789_);
v_args_2793_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2762_, v___x_2790_, v___x_2792_);
v___x_2794_ = lean_array_get_size(v_args_2793_);
v___x_2795_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_2784_);
v___x_2796_ = lean_nat_dec_lt(v___x_2794_, v___x_2795_);
lean_dec(v___x_2795_);
if (v___x_2796_ == 0)
{
lean_object* v_numParams_2797_; lean_object* v_numDiscrs_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2817_; 
v_numParams_2797_ = lean_ctor_get(v_val_2784_, 0);
v_numDiscrs_2798_ = lean_ctor_get(v_val_2784_, 1);
v___x_2799_ = lean_array_mk(v_us_2778_);
v___x_2800_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2797_);
v___x_2801_ = l_Array_extract___redArg(v_args_2793_, v___x_2800_, v_numParams_2797_);
v___x_2802_ = l_Lean_instInhabitedExpr;
v___x_2803_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_2784_);
v___x_2804_ = lean_array_get(v___x_2802_, v_args_2793_, v___x_2803_);
lean_dec(v___x_2803_);
v___x_2805_ = lean_nat_add(v_numParams_2797_, v___x_2791_);
v___x_2806_ = lean_nat_add(v___x_2805_, v_numDiscrs_2798_);
lean_inc(v___x_2806_);
lean_inc_ref(v_args_2793_);
v___x_2807_ = l_Array_toSubarray___redArg(v_args_2793_, v___x_2805_, v___x_2806_);
v___x_2808_ = l_Subarray_copy___redArg(v___x_2807_);
v___x_2809_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_2784_);
v___x_2810_ = lean_nat_add(v___x_2806_, v___x_2809_);
lean_dec(v___x_2809_);
lean_inc(v___x_2810_);
lean_inc_ref(v_args_2793_);
v___x_2811_ = l_Array_toSubarray___redArg(v_args_2793_, v___x_2806_, v___x_2810_);
v___x_2812_ = l_Subarray_copy___redArg(v___x_2811_);
v___x_2813_ = l_Array_toSubarray___redArg(v_args_2793_, v___x_2810_, v___x_2794_);
v___x_2814_ = l_Subarray_copy___redArg(v___x_2813_);
v___x_2815_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2815_, 0, v_val_2784_);
lean_ctor_set(v___x_2815_, 1, v_declName_2777_);
lean_ctor_set(v___x_2815_, 2, v___x_2799_);
lean_ctor_set(v___x_2815_, 3, v___x_2801_);
lean_ctor_set(v___x_2815_, 4, v___x_2804_);
lean_ctor_set(v___x_2815_, 5, v___x_2808_);
lean_ctor_set(v___x_2815_, 6, v___x_2812_);
lean_ctor_set(v___x_2815_, 7, v___x_2814_);
if (v_isShared_2787_ == 0)
{
lean_ctor_set(v___x_2786_, 0, v___x_2815_);
v___x_2817_ = v___x_2786_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v___x_2815_);
v___x_2817_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
lean_object* v___x_2819_; 
if (v_isShared_2783_ == 0)
{
lean_ctor_set(v___x_2782_, 0, v___x_2817_);
v___x_2819_ = v___x_2782_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v___x_2817_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
else
{
lean_object* v___x_2822_; lean_object* v___x_2824_; 
lean_dec_ref(v_args_2793_);
lean_del_object(v___x_2786_);
lean_dec(v_val_2784_);
lean_dec(v_us_2778_);
lean_dec(v_declName_2777_);
v___x_2822_ = lean_box(0);
if (v_isShared_2783_ == 0)
{
lean_ctor_set(v___x_2782_, 0, v___x_2822_);
v___x_2824_ = v___x_2782_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v___x_2822_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
else
{
lean_object* v___x_2827_; 
lean_del_object(v___x_2782_);
lean_dec(v_a_2780_);
v___x_2827_ = lean_st_ref_get(v___y_2768_);
if (v_alsoCasesOn_2763_ == 0)
{
lean_dec(v___x_2827_);
lean_dec(v_us_2778_);
lean_dec(v_declName_2777_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
lean_dec_ref(v_e_2762_);
goto v___jp_2770_;
}
else
{
lean_object* v_env_2828_; uint8_t v___x_2829_; 
v_env_2828_ = lean_ctor_get(v___x_2827_, 0);
lean_inc_ref(v_env_2828_);
lean_dec(v___x_2827_);
lean_inc(v_declName_2777_);
v___x_2829_ = l_Lean_isCasesOnRecursor(v_env_2828_, v_declName_2777_);
if (v___x_2829_ == 0)
{
lean_dec(v_us_2778_);
lean_dec(v_declName_2777_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
lean_dec_ref(v_e_2762_);
goto v___jp_2770_;
}
else
{
lean_object* v_indName_2830_; lean_object* v___x_2831_; 
v_indName_2830_ = l_Lean_Name_getPrefix(v_declName_2777_);
lean_inc_ref(v___y_2767_);
v___x_2831_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_indName_2830_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2925_; 
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2834_ = v___x_2831_;
v_isShared_2835_ = v_isSharedCheck_2925_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2831_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2925_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
if (lean_obj_tag(v_a_2832_) == 5)
{
lean_object* v_val_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2920_; 
v_val_2836_ = lean_ctor_get(v_a_2832_, 0);
v_isSharedCheck_2920_ = !lean_is_exclusive(v_a_2832_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2838_ = v_a_2832_;
v_isShared_2839_ = v_isSharedCheck_2920_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_val_2836_);
lean_dec(v_a_2832_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2920_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v_toConstantVal_2840_; lean_object* v_numParams_2841_; lean_object* v_numIndices_2842_; lean_object* v_ctors_2843_; lean_object* v_nargs_2844_; lean_object* v_dummy_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v_args_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; uint8_t v___x_2856_; 
v_toConstantVal_2840_ = lean_ctor_get(v_val_2836_, 0);
lean_inc_ref(v_toConstantVal_2840_);
v_numParams_2841_ = lean_ctor_get(v_val_2836_, 1);
lean_inc(v_numParams_2841_);
v_numIndices_2842_ = lean_ctor_get(v_val_2836_, 2);
lean_inc(v_numIndices_2842_);
v_ctors_2843_ = lean_ctor_get(v_val_2836_, 4);
lean_inc(v_ctors_2843_);
v_nargs_2844_ = l_Lean_Expr_getAppNumArgs(v_e_2762_);
v_dummy_2845_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0);
lean_inc(v_nargs_2844_);
v___x_2846_ = lean_mk_array(v_nargs_2844_, v_dummy_2845_);
v___x_2847_ = lean_unsigned_to_nat(1u);
v___x_2848_ = lean_nat_sub(v_nargs_2844_, v___x_2847_);
lean_dec(v_nargs_2844_);
v_args_2849_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2762_, v___x_2846_, v___x_2848_);
v___x_2850_ = lean_nat_add(v_numParams_2841_, v___x_2847_);
v___x_2851_ = lean_nat_add(v___x_2850_, v_numIndices_2842_);
v___x_2852_ = lean_nat_add(v___x_2851_, v___x_2847_);
lean_dec(v___x_2851_);
v___x_2853_ = l_Lean_InductiveVal_numCtors(v_val_2836_);
lean_dec_ref(v_val_2836_);
v___x_2854_ = lean_nat_add(v___x_2852_, v___x_2853_);
lean_dec(v___x_2853_);
v___x_2855_ = lean_array_get_size(v_args_2849_);
v___x_2856_ = lean_nat_dec_le(v___x_2854_, v___x_2855_);
if (v___x_2856_ == 0)
{
lean_object* v___x_2857_; lean_object* v___x_2859_; 
lean_dec(v___x_2854_);
lean_dec(v___x_2852_);
lean_dec(v___x_2850_);
lean_dec_ref(v_args_2849_);
lean_dec(v_ctors_2843_);
lean_dec(v_numIndices_2842_);
lean_dec(v_numParams_2841_);
lean_dec_ref(v_toConstantVal_2840_);
lean_del_object(v___x_2838_);
lean_dec(v_us_2778_);
lean_dec(v_declName_2777_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
v___x_2857_ = lean_box(0);
if (v_isShared_2835_ == 0)
{
lean_ctor_set(v___x_2834_, 0, v___x_2857_);
v___x_2859_ = v___x_2834_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v___x_2857_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
return v___x_2859_;
}
}
else
{
lean_object* v___x_2861_; lean_object* v_params_2862_; lean_object* v___x_2863_; lean_object* v_motive_2864_; lean_object* v_discrs_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v_discrInfos_2868_; lean_object* v_alts_2869_; lean_object* v___y_2871_; lean_object* v___y_2872_; lean_object* v_lower_2911_; lean_object* v_upper_2912_; uint8_t v___x_2919_; 
lean_del_object(v___x_2834_);
v___x_2861_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2841_);
lean_inc_ref(v_args_2849_);
v_params_2862_ = l_Array_toSubarray___redArg(v_args_2849_, v___x_2861_, v_numParams_2841_);
v___x_2863_ = l_Lean_instInhabitedExpr;
v_motive_2864_ = lean_array_get(v___x_2863_, v_args_2849_, v_numParams_2841_);
lean_dec(v_numParams_2841_);
lean_inc(v___x_2852_);
lean_inc_ref(v_args_2849_);
v_discrs_2865_ = l_Array_toSubarray___redArg(v_args_2849_, v___x_2850_, v___x_2852_);
v___x_2866_ = lean_nat_add(v_numIndices_2842_, v___x_2847_);
lean_dec(v_numIndices_2842_);
v___x_2867_ = lean_box(0);
v_discrInfos_2868_ = lean_mk_array(v___x_2866_, v___x_2867_);
lean_inc(v___x_2854_);
lean_inc_ref(v_args_2849_);
v_alts_2869_ = l_Array_toSubarray___redArg(v_args_2849_, v___x_2852_, v___x_2854_);
v___x_2919_ = lean_nat_dec_le(v___x_2854_, v___x_2861_);
if (v___x_2919_ == 0)
{
v_lower_2911_ = v___x_2854_;
v_upper_2912_ = v___x_2855_;
goto v___jp_2910_;
}
else
{
lean_dec(v___x_2854_);
v_lower_2911_ = v___x_2861_;
v_upper_2912_ = v___x_2855_;
goto v___jp_2910_;
}
v___jp_2870_:
{
lean_object* v___x_2873_; size_t v_sz_2874_; size_t v___x_2875_; lean_object* v___x_2876_; 
v___x_2873_ = lean_array_mk(v_ctors_2843_);
v_sz_2874_ = lean_array_size(v___x_2873_);
v___x_2875_ = ((size_t)0ULL);
v___x_2876_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(v_sz_2874_, v___x_2875_, v___x_2873_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2901_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v___x_2876_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2879_ = v___x_2876_;
v_isShared_2880_ = v_isSharedCheck_2901_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v___x_2876_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2901_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v_start_2881_; lean_object* v_stop_2882_; lean_object* v_start_2883_; lean_object* v_stop_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2896_; 
v_start_2881_ = lean_ctor_get(v_params_2862_, 1);
lean_inc(v_start_2881_);
v_stop_2882_ = lean_ctor_get(v_params_2862_, 2);
lean_inc(v_stop_2882_);
v_start_2883_ = lean_ctor_get(v_discrs_2865_, 1);
lean_inc(v_start_2883_);
v_stop_2884_ = lean_ctor_get(v_discrs_2865_, 2);
lean_inc(v_stop_2884_);
v___x_2885_ = lean_nat_sub(v_stop_2882_, v_start_2881_);
lean_dec(v_start_2881_);
lean_dec(v_stop_2882_);
v___x_2886_ = lean_nat_sub(v_stop_2884_, v_start_2883_);
lean_dec(v_start_2883_);
lean_dec(v_stop_2884_);
v___x_2887_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1);
v___x_2888_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2885_);
lean_ctor_set(v___x_2888_, 1, v___x_2886_);
lean_ctor_set(v___x_2888_, 2, v_a_2877_);
lean_ctor_set(v___x_2888_, 3, v___y_2872_);
lean_ctor_set(v___x_2888_, 4, v_discrInfos_2868_);
lean_ctor_set(v___x_2888_, 5, v___x_2887_);
v___x_2889_ = lean_array_mk(v_us_2778_);
v___x_2890_ = l_Subarray_copy___redArg(v_params_2862_);
v___x_2891_ = l_Subarray_copy___redArg(v_discrs_2865_);
v___x_2892_ = l_Subarray_copy___redArg(v_alts_2869_);
v___x_2893_ = l_Subarray_copy___redArg(v___y_2871_);
v___x_2894_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2888_);
lean_ctor_set(v___x_2894_, 1, v_declName_2777_);
lean_ctor_set(v___x_2894_, 2, v___x_2889_);
lean_ctor_set(v___x_2894_, 3, v___x_2890_);
lean_ctor_set(v___x_2894_, 4, v_motive_2864_);
lean_ctor_set(v___x_2894_, 5, v___x_2891_);
lean_ctor_set(v___x_2894_, 6, v___x_2892_);
lean_ctor_set(v___x_2894_, 7, v___x_2893_);
if (v_isShared_2839_ == 0)
{
lean_ctor_set_tag(v___x_2838_, 1);
lean_ctor_set(v___x_2838_, 0, v___x_2894_);
v___x_2896_ = v___x_2838_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v___x_2894_);
v___x_2896_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
lean_object* v___x_2898_; 
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 0, v___x_2896_);
v___x_2898_ = v___x_2879_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v___x_2896_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
return v___x_2898_;
}
}
}
}
else
{
lean_object* v_a_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2909_; 
lean_dec(v___y_2872_);
lean_dec_ref(v___y_2871_);
lean_dec_ref(v_alts_2869_);
lean_dec_ref(v_discrInfos_2868_);
lean_dec_ref(v_discrs_2865_);
lean_dec(v_motive_2864_);
lean_dec_ref(v_params_2862_);
lean_del_object(v___x_2838_);
lean_dec(v_us_2778_);
lean_dec(v_declName_2777_);
v_a_2902_ = lean_ctor_get(v___x_2876_, 0);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___x_2876_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2904_ = v___x_2876_;
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_a_2902_);
lean_dec(v___x_2876_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2907_; 
if (v_isShared_2905_ == 0)
{
v___x_2907_ = v___x_2904_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v_a_2902_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
}
v___jp_2910_:
{
lean_object* v_levelParams_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; uint8_t v___x_2917_; 
v_levelParams_2913_ = lean_ctor_get(v_toConstantVal_2840_, 1);
lean_inc(v_levelParams_2913_);
lean_dec_ref(v_toConstantVal_2840_);
v___x_2914_ = l_Array_toSubarray___redArg(v_args_2849_, v_lower_2911_, v_upper_2912_);
v___x_2915_ = l_List_lengthTR___redArg(v_levelParams_2913_);
lean_dec(v_levelParams_2913_);
v___x_2916_ = l_List_lengthTR___redArg(v_us_2778_);
v___x_2917_ = lean_nat_dec_eq(v___x_2915_, v___x_2916_);
lean_dec(v___x_2916_);
lean_dec(v___x_2915_);
if (v___x_2917_ == 0)
{
lean_object* v___x_2918_; 
v___x_2918_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2));
v___y_2871_ = v___x_2914_;
v___y_2872_ = v___x_2918_;
goto v___jp_2870_;
}
else
{
v___y_2871_ = v___x_2914_;
v___y_2872_ = v___x_2867_;
goto v___jp_2870_;
}
}
}
}
}
else
{
lean_object* v___x_2921_; lean_object* v___x_2923_; 
lean_dec(v_a_2832_);
lean_dec(v_us_2778_);
lean_dec(v_declName_2777_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
lean_dec_ref(v_e_2762_);
v___x_2921_ = lean_box(0);
if (v_isShared_2835_ == 0)
{
lean_ctor_set(v___x_2834_, 0, v___x_2921_);
v___x_2923_ = v___x_2834_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v___x_2921_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2933_; 
lean_dec(v_us_2778_);
lean_dec(v_declName_2777_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
lean_dec_ref(v_e_2762_);
v_a_2926_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2928_ = v___x_2831_;
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_dec(v___x_2831_);
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
}
}
else
{
lean_dec_ref(v___x_2776_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
lean_dec_ref(v_e_2762_);
goto v___jp_2770_;
}
}
v___jp_2770_:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2771_ = lean_box(0);
v___x_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2771_);
return v___x_2772_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed(lean_object* v_e_2935_, lean_object* v_alsoCasesOn_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
uint8_t v_alsoCasesOn_boxed_2943_; lean_object* v_res_2944_; 
v_alsoCasesOn_boxed_2943_ = lean_unbox(v_alsoCasesOn_2936_);
v_res_2944_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(v_e_2935_, v_alsoCasesOn_boxed_2943_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(lean_object* v_a_2945_, lean_object* v_a_2946_){
_start:
{
if (lean_obj_tag(v_a_2945_) == 0)
{
lean_object* v___x_2947_; 
v___x_2947_ = l_List_reverse___redArg(v_a_2946_);
return v___x_2947_;
}
else
{
lean_object* v_head_2948_; lean_object* v_tail_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2958_; 
v_head_2948_ = lean_ctor_get(v_a_2945_, 0);
v_tail_2949_ = lean_ctor_get(v_a_2945_, 1);
v_isSharedCheck_2958_ = !lean_is_exclusive(v_a_2945_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2951_ = v_a_2945_;
v_isShared_2952_ = v_isSharedCheck_2958_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_tail_2949_);
lean_inc(v_head_2948_);
lean_dec(v_a_2945_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2958_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v___x_2953_; lean_object* v___x_2955_; 
v___x_2953_ = l_Lean_MessageData_ofExpr(v_head_2948_);
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 1, v_a_2946_);
lean_ctor_set(v___x_2951_, 0, v___x_2953_);
v___x_2955_ = v___x_2951_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v___x_2953_);
lean_ctor_set(v_reuseFailAlloc_2957_, 1, v_a_2946_);
v___x_2955_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
v_a_2945_ = v_tail_2949_;
v_a_2946_ = v___x_2955_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(lean_object* v_x_2959_, lean_object* v_x_2960_){
_start:
{
lean_object* v_fnName_2961_; uint8_t v___x_2962_; 
v_fnName_2961_ = lean_ctor_get(v_x_2960_, 0);
v___x_2962_ = l_Lean_Expr_isConstOf(v_x_2959_, v_fnName_2961_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed(lean_object* v_x_2963_, lean_object* v_x_2964_){
_start:
{
uint8_t v_res_2965_; lean_object* v_r_2966_; 
v_res_2965_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(v_x_2963_, v_x_2964_);
lean_dec_ref(v_x_2964_);
lean_dec_ref(v_x_2963_);
v_r_2966_ = lean_box(v_res_2965_);
return v_r_2966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object* v_name_2967_, lean_object* v_type_2968_, lean_object* v_val_2969_, lean_object* v_k_2970_, uint8_t v_nondep_2971_, uint8_t v_kind_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_){
_start:
{
lean_object* v___f_2979_; lean_object* v___x_2980_; 
v___f_2979_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2979_, 0, v_k_2970_);
lean_closure_set(v___f_2979_, 1, v___y_2973_);
v___x_2980_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2967_, v_type_2968_, v_val_2969_, v___f_2979_, v_nondep_2971_, v_kind_2972_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_2980_) == 0)
{
return v___x_2980_;
}
else
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2988_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2983_ = v___x_2980_;
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2980_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2986_; 
if (v_isShared_2984_ == 0)
{
v___x_2986_ = v___x_2983_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2981_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object* v_name_2989_, lean_object* v_type_2990_, lean_object* v_val_2991_, lean_object* v_k_2992_, lean_object* v_nondep_2993_, lean_object* v_kind_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_){
_start:
{
uint8_t v_nondep_boxed_3001_; uint8_t v_kind_boxed_3002_; lean_object* v_res_3003_; 
v_nondep_boxed_3001_ = lean_unbox(v_nondep_2993_);
v_kind_boxed_3002_ = lean_unbox(v_kind_2994_);
v_res_3003_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_2989_, v_type_2990_, v_val_2991_, v_k_2992_, v_nondep_boxed_3001_, v_kind_boxed_3002_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(lean_object* v_k_3004_, uint8_t v_usedLetOnly_3005_, lean_object* v_x_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_){
_start:
{
lean_object* v___x_3013_; 
lean_inc(v___y_3011_);
lean_inc_ref(v___y_3010_);
lean_inc(v___y_3009_);
lean_inc_ref(v___y_3008_);
lean_inc_ref(v_x_3006_);
v___x_3013_ = lean_apply_7(v_k_3004_, v_x_3006_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_, v___y_3011_, lean_box(0));
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_a_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; uint8_t v___x_3018_; uint8_t v___x_3019_; lean_object* v___x_3020_; 
v_a_3014_ = lean_ctor_get(v___x_3013_, 0);
lean_inc(v_a_3014_);
lean_dec_ref(v___x_3013_);
v___x_3015_ = lean_unsigned_to_nat(1u);
v___x_3016_ = lean_mk_empty_array_with_capacity(v___x_3015_);
v___x_3017_ = lean_array_push(v___x_3016_, v_x_3006_);
v___x_3018_ = 0;
v___x_3019_ = 1;
v___x_3020_ = l_Lean_Meta_mkLetFVars(v___x_3017_, v_a_3014_, v_usedLetOnly_3005_, v___x_3018_, v___x_3019_, v___y_3008_, v___y_3009_, v___y_3010_, v___y_3011_);
lean_dec(v___y_3011_);
lean_dec_ref(v___y_3010_);
lean_dec(v___y_3009_);
lean_dec_ref(v___y_3008_);
lean_dec_ref(v___x_3017_);
return v___x_3020_;
}
else
{
lean_dec(v___y_3011_);
lean_dec_ref(v___y_3010_);
lean_dec(v___y_3009_);
lean_dec_ref(v___y_3008_);
lean_dec_ref(v_x_3006_);
return v___x_3013_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed(lean_object* v_k_3021_, lean_object* v_usedLetOnly_3022_, lean_object* v_x_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_){
_start:
{
uint8_t v_usedLetOnly_boxed_3030_; lean_object* v_res_3031_; 
v_usedLetOnly_boxed_3030_ = lean_unbox(v_usedLetOnly_3022_);
v_res_3031_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(v_k_3021_, v_usedLetOnly_boxed_3030_, v_x_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
return v_res_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(lean_object* v_name_3032_, lean_object* v_type_3033_, lean_object* v_val_3034_, lean_object* v_k_3035_, uint8_t v_nondep_3036_, uint8_t v_kind_3037_, uint8_t v_usedLetOnly_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_){
_start:
{
lean_object* v___x_3045_; lean_object* v___f_3046_; lean_object* v___x_3047_; 
v___x_3045_ = lean_box(v_usedLetOnly_3038_);
v___f_3046_ = lean_alloc_closure((void*)(l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed), 9, 2);
lean_closure_set(v___f_3046_, 0, v_k_3035_);
lean_closure_set(v___f_3046_, 1, v___x_3045_);
v___x_3047_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_3032_, v_type_3033_, v_val_3034_, v___f_3046_, v_nondep_3036_, v_kind_3037_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___boxed(lean_object* v_name_3048_, lean_object* v_type_3049_, lean_object* v_val_3050_, lean_object* v_k_3051_, lean_object* v_nondep_3052_, lean_object* v_kind_3053_, lean_object* v_usedLetOnly_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
uint8_t v_nondep_boxed_3061_; uint8_t v_kind_boxed_3062_; uint8_t v_usedLetOnly_boxed_3063_; lean_object* v_res_3064_; 
v_nondep_boxed_3061_ = lean_unbox(v_nondep_3052_);
v_kind_boxed_3062_ = lean_unbox(v_kind_3053_);
v_usedLetOnly_boxed_3063_ = lean_unbox(v_usedLetOnly_3054_);
v_res_3064_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(v_name_3048_, v_type_3049_, v_val_3050_, v_k_3051_, v_nondep_boxed_3061_, v_kind_boxed_3062_, v_usedLetOnly_boxed_3063_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
return v_res_3064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(lean_object* v_recArgInfos_3065_, lean_object* v_positions_3066_, lean_object* v_recFnNames_3067_, lean_object* v_containsRecFn_3068_, lean_object* v_below_3069_, size_t v_sz_3070_, size_t v_i_3071_, lean_object* v_bs_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_){
_start:
{
uint8_t v___x_3079_; 
v___x_3079_ = lean_usize_dec_lt(v_i_3071_, v_sz_3070_);
if (v___x_3079_ == 0)
{
lean_object* v___x_3080_; 
lean_dec(v___y_3077_);
lean_dec_ref(v___y_3076_);
lean_dec(v___y_3075_);
lean_dec_ref(v___y_3074_);
lean_dec(v___y_3073_);
lean_dec_ref(v_below_3069_);
lean_dec_ref(v_containsRecFn_3068_);
lean_dec_ref(v_recFnNames_3067_);
lean_dec_ref(v_positions_3066_);
lean_dec_ref(v_recArgInfos_3065_);
v___x_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3080_, 0, v_bs_3072_);
return v___x_3080_;
}
else
{
lean_object* v_v_3081_; lean_object* v___x_3082_; 
v_v_3081_ = lean_array_uget_borrowed(v_bs_3072_, v_i_3071_);
lean_inc(v___y_3077_);
lean_inc_ref(v___y_3076_);
lean_inc(v___y_3075_);
lean_inc_ref(v___y_3074_);
lean_inc(v___y_3073_);
lean_inc(v_v_3081_);
lean_inc_ref(v_below_3069_);
lean_inc_ref(v_containsRecFn_3068_);
lean_inc_ref(v_recFnNames_3067_);
lean_inc_ref(v_positions_3066_);
lean_inc_ref(v_recArgInfos_3065_);
v___x_3082_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3065_, v_positions_3066_, v_recFnNames_3067_, v_containsRecFn_3068_, v_below_3069_, v_v_3081_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; lean_object* v___x_3084_; lean_object* v_bs_x27_3085_; size_t v___x_3086_; size_t v___x_3087_; lean_object* v___x_3088_; 
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc(v_a_3083_);
lean_dec_ref(v___x_3082_);
v___x_3084_ = lean_unsigned_to_nat(0u);
v_bs_x27_3085_ = lean_array_uset(v_bs_3072_, v_i_3071_, v___x_3084_);
v___x_3086_ = ((size_t)1ULL);
v___x_3087_ = lean_usize_add(v_i_3071_, v___x_3086_);
v___x_3088_ = lean_array_uset(v_bs_x27_3085_, v_i_3071_, v_a_3083_);
v_i_3071_ = v___x_3087_;
v_bs_3072_ = v___x_3088_;
goto _start;
}
else
{
lean_object* v_a_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3097_; 
lean_dec(v___y_3077_);
lean_dec_ref(v___y_3076_);
lean_dec(v___y_3075_);
lean_dec_ref(v___y_3074_);
lean_dec(v___y_3073_);
lean_dec_ref(v_bs_3072_);
lean_dec_ref(v_below_3069_);
lean_dec_ref(v_containsRecFn_3068_);
lean_dec_ref(v_recFnNames_3067_);
lean_dec_ref(v_positions_3066_);
lean_dec_ref(v_recArgInfos_3065_);
v_a_3090_ = lean_ctor_get(v___x_3082_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3092_ = v___x_3082_;
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_a_3090_);
lean_dec(v___x_3082_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3097_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3095_; 
if (v_isShared_3093_ == 0)
{
v___x_3095_ = v___x_3092_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v_a_3090_);
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
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3099_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0));
v___x_3100_ = l_Lean_stringToMessageData(v___x_3099_);
return v___x_3100_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; 
v___x_3102_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2));
v___x_3103_ = l_Lean_stringToMessageData(v___x_3102_);
return v___x_3103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(lean_object* v_recArgInfos_3104_, lean_object* v_positions_3105_, lean_object* v_recFnNames_3106_, lean_object* v_containsRecFn_3107_, lean_object* v_below_3108_, lean_object* v_e_3109_, lean_object* v_x_3110_, lean_object* v_x_3111_, lean_object* v_x_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_){
_start:
{
if (lean_obj_tag(v_x_3110_) == 5)
{
lean_object* v_fn_3119_; lean_object* v_arg_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v_fn_3119_ = lean_ctor_get(v_x_3110_, 0);
lean_inc_ref(v_fn_3119_);
v_arg_3120_ = lean_ctor_get(v_x_3110_, 1);
lean_inc_ref(v_arg_3120_);
lean_dec_ref(v_x_3110_);
v___x_3121_ = lean_array_set(v_x_3111_, v_x_3112_, v_arg_3120_);
v___x_3122_ = lean_unsigned_to_nat(1u);
v___x_3123_ = lean_nat_sub(v_x_3112_, v___x_3122_);
lean_dec(v_x_3112_);
v_x_3110_ = v_fn_3119_;
v_x_3111_ = v___x_3121_;
v_x_3112_ = v___x_3123_;
goto _start;
}
else
{
lean_object* v___f_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
lean_dec(v_x_3112_);
lean_inc_ref(v_x_3110_);
v___f_3125_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3125_, 0, v_x_3110_);
v___x_3126_ = lean_unsigned_to_nat(0u);
v___x_3127_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_3125_, v_recArgInfos_3104_, v___x_3126_);
if (lean_obj_tag(v___x_3127_) == 1)
{
lean_object* v_val_3128_; lean_object* v___x_3129_; lean_object* v___y_3131_; lean_object* v_recArgPos_3157_; lean_object* v_indGroupInst_3158_; lean_object* v___x_3159_; uint8_t v___x_3160_; 
lean_dec_ref(v_x_3110_);
v_val_3128_ = lean_ctor_get(v___x_3127_, 0);
lean_inc(v_val_3128_);
lean_dec_ref(v___x_3127_);
v___x_3129_ = lean_array_fget_borrowed(v_recArgInfos_3104_, v_val_3128_);
v_recArgPos_3157_ = lean_ctor_get(v___x_3129_, 2);
v_indGroupInst_3158_ = lean_ctor_get(v___x_3129_, 4);
v___x_3159_ = lean_array_get_size(v_x_3111_);
v___x_3160_ = lean_nat_dec_lt(v_recArgPos_3157_, v___x_3159_);
if (v___x_3160_ == 0)
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
lean_dec(v_val_3128_);
lean_dec(v___y_3113_);
lean_dec_ref(v_x_3111_);
lean_dec_ref(v_below_3108_);
lean_dec_ref(v_containsRecFn_3107_);
lean_dec_ref(v_recFnNames_3106_);
lean_dec_ref(v_positions_3105_);
lean_dec_ref(v_recArgInfos_3104_);
v___x_3161_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1);
v___x_3162_ = l_Lean_indentExpr(v_e_3109_);
v___x_3163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3161_);
lean_ctor_set(v___x_3163_, 1, v___x_3162_);
v___x_3164_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3163_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
return v___x_3164_;
}
else
{
lean_object* v___x_3165_; lean_object* v___x_3166_; 
v___x_3165_ = lean_array_fget_borrowed(v_x_3111_, v_recArgPos_3157_);
lean_inc(v___y_3117_);
lean_inc_ref(v___y_3116_);
lean_inc(v___y_3115_);
lean_inc_ref(v___y_3114_);
lean_inc(v___y_3113_);
lean_inc(v___x_3165_);
lean_inc_ref(v_below_3108_);
lean_inc_ref(v_containsRecFn_3107_);
lean_inc_ref(v_recFnNames_3106_);
lean_inc_ref(v_positions_3105_);
lean_inc_ref(v_recArgInfos_3104_);
v___x_3166_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3104_, v_positions_3105_, v_recFnNames_3106_, v_containsRecFn_3107_, v_below_3108_, v___x_3165_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3167_; lean_object* v_params_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; 
v_a_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3167_);
lean_dec_ref(v___x_3166_);
v_params_3168_ = lean_ctor_get(v_indGroupInst_3158_, 2);
v___x_3169_ = lean_array_get_size(v_params_3168_);
lean_inc(v___y_3117_);
lean_inc_ref(v___y_3116_);
lean_inc(v___y_3115_);
lean_inc_ref(v___y_3114_);
lean_inc_ref(v_positions_3105_);
lean_inc_ref(v_below_3108_);
v___x_3170_ = l_Lean_Elab_Structural_toBelow(v_below_3108_, v___x_3169_, v_positions_3105_, v_val_3128_, v_a_3167_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
if (lean_obj_tag(v___x_3170_) == 0)
{
lean_dec_ref(v_e_3109_);
v___y_3131_ = v___x_3170_;
goto v___jp_3130_;
}
else
{
lean_object* v_a_3171_; uint8_t v___y_3173_; uint8_t v___x_3178_; 
v_a_3171_ = lean_ctor_get(v___x_3170_, 0);
lean_inc(v_a_3171_);
v___x_3178_ = l_Lean_Exception_isInterrupt(v_a_3171_);
if (v___x_3178_ == 0)
{
uint8_t v___x_3179_; 
v___x_3179_ = l_Lean_Exception_isRuntime(v_a_3171_);
v___y_3173_ = v___x_3179_;
goto v___jp_3172_;
}
else
{
lean_dec(v_a_3171_);
v___y_3173_ = v___x_3178_;
goto v___jp_3172_;
}
v___jp_3172_:
{
if (v___y_3173_ == 0)
{
lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; 
lean_dec_ref(v___x_3170_);
v___x_3174_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3);
v___x_3175_ = l_Lean_indentExpr(v_e_3109_);
v___x_3176_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3176_, 0, v___x_3174_);
lean_ctor_set(v___x_3176_, 1, v___x_3175_);
v___x_3177_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3176_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
v___y_3131_ = v___x_3177_;
goto v___jp_3130_;
}
else
{
lean_dec_ref(v_e_3109_);
v___y_3131_ = v___x_3170_;
goto v___jp_3130_;
}
}
}
}
else
{
lean_dec(v_val_3128_);
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec_ref(v_x_3111_);
lean_dec_ref(v_e_3109_);
lean_dec_ref(v_below_3108_);
lean_dec_ref(v_containsRecFn_3107_);
lean_dec_ref(v_recFnNames_3106_);
lean_dec_ref(v_positions_3105_);
lean_dec_ref(v_recArgInfos_3104_);
return v___x_3166_;
}
}
v___jp_3130_:
{
if (lean_obj_tag(v___y_3131_) == 0)
{
lean_object* v_a_3132_; lean_object* v_fixedParamPerm_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v_snd_3136_; size_t v_sz_3137_; size_t v___x_3138_; lean_object* v___x_3139_; 
v_a_3132_ = lean_ctor_get(v___y_3131_, 0);
lean_inc(v_a_3132_);
lean_dec_ref(v___y_3131_);
v_fixedParamPerm_3133_ = lean_ctor_get(v___x_3129_, 1);
v___x_3134_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_fixedParamPerm_3133_, v_x_3111_);
lean_dec_ref(v_x_3111_);
lean_inc(v___x_3129_);
v___x_3135_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v___x_3129_, v___x_3134_);
v_snd_3136_ = lean_ctor_get(v___x_3135_, 1);
lean_inc(v_snd_3136_);
lean_dec_ref(v___x_3135_);
v_sz_3137_ = lean_array_size(v_snd_3136_);
v___x_3138_ = ((size_t)0ULL);
v___x_3139_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(v_recArgInfos_3104_, v_positions_3105_, v_recFnNames_3106_, v_containsRecFn_3107_, v_below_3108_, v_sz_3137_, v___x_3138_, v_snd_3136_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3148_; 
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3148_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3148_ == 0)
{
v___x_3142_ = v___x_3139_;
v_isShared_3143_ = v_isSharedCheck_3148_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3139_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3148_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3144_; lean_object* v___x_3146_; 
v___x_3144_ = l_Lean_mkAppN(v_a_3132_, v_a_3140_);
lean_dec(v_a_3140_);
if (v_isShared_3143_ == 0)
{
lean_ctor_set(v___x_3142_, 0, v___x_3144_);
v___x_3146_ = v___x_3142_;
goto v_reusejp_3145_;
}
else
{
lean_object* v_reuseFailAlloc_3147_; 
v_reuseFailAlloc_3147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3147_, 0, v___x_3144_);
v___x_3146_ = v_reuseFailAlloc_3147_;
goto v_reusejp_3145_;
}
v_reusejp_3145_:
{
return v___x_3146_;
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec(v_a_3132_);
v_a_3149_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3139_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3139_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
else
{
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec_ref(v_x_3111_);
lean_dec_ref(v_below_3108_);
lean_dec_ref(v_containsRecFn_3107_);
lean_dec_ref(v_recFnNames_3106_);
lean_dec_ref(v_positions_3105_);
lean_dec_ref(v_recArgInfos_3104_);
return v___y_3131_;
}
}
}
else
{
lean_object* v___x_3180_; 
lean_dec(v___x_3127_);
lean_dec_ref(v_e_3109_);
lean_inc(v___y_3117_);
lean_inc_ref(v___y_3116_);
lean_inc(v___y_3115_);
lean_inc_ref(v___y_3114_);
lean_inc(v___y_3113_);
lean_inc_ref(v_below_3108_);
lean_inc_ref(v_containsRecFn_3107_);
lean_inc_ref(v_recFnNames_3106_);
lean_inc_ref(v_positions_3105_);
lean_inc_ref(v_recArgInfos_3104_);
v___x_3180_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3104_, v_positions_3105_, v_recFnNames_3106_, v_containsRecFn_3107_, v_below_3108_, v_x_3110_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
if (lean_obj_tag(v___x_3180_) == 0)
{
lean_object* v_a_3181_; size_t v_sz_3182_; size_t v___x_3183_; lean_object* v___x_3184_; 
v_a_3181_ = lean_ctor_get(v___x_3180_, 0);
lean_inc(v_a_3181_);
lean_dec_ref(v___x_3180_);
v_sz_3182_ = lean_array_size(v_x_3111_);
v___x_3183_ = ((size_t)0ULL);
v___x_3184_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(v_recArgInfos_3104_, v_positions_3105_, v_recFnNames_3106_, v_containsRecFn_3107_, v_below_3108_, v_sz_3182_, v___x_3183_, v_x_3111_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3193_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3193_ == 0)
{
v___x_3187_ = v___x_3184_;
v_isShared_3188_ = v_isSharedCheck_3193_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_a_3185_);
lean_dec(v___x_3184_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3193_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
lean_object* v___x_3189_; lean_object* v___x_3191_; 
v___x_3189_ = l_Lean_mkAppN(v_a_3181_, v_a_3185_);
lean_dec(v_a_3185_);
if (v_isShared_3188_ == 0)
{
lean_ctor_set(v___x_3187_, 0, v___x_3189_);
v___x_3191_ = v___x_3187_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v___x_3189_);
v___x_3191_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
return v___x_3191_;
}
}
}
else
{
lean_object* v_a_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3201_; 
lean_dec(v_a_3181_);
v_a_3194_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3196_ = v___x_3184_;
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_a_3194_);
lean_dec(v___x_3184_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3199_; 
if (v_isShared_3197_ == 0)
{
v___x_3199_ = v___x_3196_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_a_3194_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
else
{
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec_ref(v_x_3111_);
lean_dec_ref(v_below_3108_);
lean_dec_ref(v_containsRecFn_3107_);
lean_dec_ref(v_recFnNames_3106_);
lean_dec_ref(v_positions_3105_);
lean_dec_ref(v_recArgInfos_3104_);
return v___x_3180_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(lean_object* v_body_3202_, lean_object* v_recArgInfos_3203_, lean_object* v_positions_3204_, lean_object* v_recFnNames_3205_, lean_object* v_containsRecFn_3206_, lean_object* v_below_3207_, uint8_t v___x_3208_, uint8_t v_a_3209_, lean_object* v_x_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_){
_start:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; 
v___x_3217_ = lean_expr_instantiate1(v_body_3202_, v_x_3210_);
lean_inc(v___y_3215_);
lean_inc_ref(v___y_3214_);
lean_inc(v___y_3213_);
lean_inc_ref(v___y_3212_);
v___x_3218_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3203_, v_positions_3204_, v_recFnNames_3205_, v_containsRecFn_3206_, v_below_3207_, v___x_3217_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v_a_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; uint8_t v___x_3223_; lean_object* v___x_3224_; 
v_a_3219_ = lean_ctor_get(v___x_3218_, 0);
lean_inc(v_a_3219_);
lean_dec_ref(v___x_3218_);
v___x_3220_ = lean_unsigned_to_nat(1u);
v___x_3221_ = lean_mk_empty_array_with_capacity(v___x_3220_);
v___x_3222_ = lean_array_push(v___x_3221_, v_x_3210_);
v___x_3223_ = 1;
v___x_3224_ = l_Lean_Meta_mkLambdaFVars(v___x_3222_, v_a_3219_, v___x_3208_, v_a_3209_, v___x_3208_, v_a_3209_, v___x_3223_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
lean_dec(v___y_3213_);
lean_dec_ref(v___y_3212_);
lean_dec_ref(v___x_3222_);
return v___x_3224_;
}
else
{
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
lean_dec(v___y_3213_);
lean_dec_ref(v___y_3212_);
lean_dec_ref(v_x_3210_);
return v___x_3218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed(lean_object* v_body_3225_, lean_object* v_recArgInfos_3226_, lean_object* v_positions_3227_, lean_object* v_recFnNames_3228_, lean_object* v_containsRecFn_3229_, lean_object* v_below_3230_, lean_object* v___x_3231_, lean_object* v_a_3232_, lean_object* v_x_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_){
_start:
{
uint8_t v___x_32032__boxed_3240_; uint8_t v_a_32033__boxed_3241_; lean_object* v_res_3242_; 
v___x_32032__boxed_3240_ = lean_unbox(v___x_3231_);
v_a_32033__boxed_3241_ = lean_unbox(v_a_3232_);
v_res_3242_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(v_body_3225_, v_recArgInfos_3226_, v_positions_3227_, v_recFnNames_3228_, v_containsRecFn_3229_, v_below_3230_, v___x_32032__boxed_3240_, v_a_32033__boxed_3241_, v_x_3233_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
lean_dec_ref(v_body_3225_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(lean_object* v_body_3243_, lean_object* v_recArgInfos_3244_, lean_object* v_positions_3245_, lean_object* v_recFnNames_3246_, lean_object* v_containsRecFn_3247_, lean_object* v_below_3248_, uint8_t v___x_3249_, uint8_t v_a_3250_, lean_object* v_x_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_){
_start:
{
lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3258_ = lean_expr_instantiate1(v_body_3243_, v_x_3251_);
lean_inc(v___y_3256_);
lean_inc_ref(v___y_3255_);
lean_inc(v___y_3254_);
lean_inc_ref(v___y_3253_);
v___x_3259_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3244_, v_positions_3245_, v_recFnNames_3246_, v_containsRecFn_3247_, v_below_3248_, v___x_3258_, v___y_3252_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_);
if (lean_obj_tag(v___x_3259_) == 0)
{
lean_object* v_a_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; uint8_t v___x_3264_; lean_object* v___x_3265_; 
v_a_3260_ = lean_ctor_get(v___x_3259_, 0);
lean_inc(v_a_3260_);
lean_dec_ref(v___x_3259_);
v___x_3261_ = lean_unsigned_to_nat(1u);
v___x_3262_ = lean_mk_empty_array_with_capacity(v___x_3261_);
v___x_3263_ = lean_array_push(v___x_3262_, v_x_3251_);
v___x_3264_ = 1;
v___x_3265_ = l_Lean_Meta_mkForallFVars(v___x_3263_, v_a_3260_, v___x_3249_, v_a_3250_, v_a_3250_, v___x_3264_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_);
lean_dec(v___y_3256_);
lean_dec_ref(v___y_3255_);
lean_dec(v___y_3254_);
lean_dec_ref(v___y_3253_);
lean_dec_ref(v___x_3263_);
return v___x_3265_;
}
else
{
lean_dec(v___y_3256_);
lean_dec_ref(v___y_3255_);
lean_dec(v___y_3254_);
lean_dec_ref(v___y_3253_);
lean_dec_ref(v_x_3251_);
return v___x_3259_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed(lean_object* v_body_3266_, lean_object* v_recArgInfos_3267_, lean_object* v_positions_3268_, lean_object* v_recFnNames_3269_, lean_object* v_containsRecFn_3270_, lean_object* v_below_3271_, lean_object* v___x_3272_, lean_object* v_a_3273_, lean_object* v_x_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_){
_start:
{
uint8_t v___x_32050__boxed_3281_; uint8_t v_a_32051__boxed_3282_; lean_object* v_res_3283_; 
v___x_32050__boxed_3281_ = lean_unbox(v___x_3272_);
v_a_32051__boxed_3282_ = lean_unbox(v_a_3273_);
v_res_3283_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(v_body_3266_, v_recArgInfos_3267_, v_positions_3268_, v_recFnNames_3269_, v_containsRecFn_3270_, v_below_3271_, v___x_32050__boxed_3281_, v_a_32051__boxed_3282_, v_x_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_);
lean_dec_ref(v_body_3266_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed(lean_object* v_body_3284_, lean_object* v_recArgInfos_3285_, lean_object* v_positions_3286_, lean_object* v_recFnNames_3287_, lean_object* v_containsRecFn_3288_, lean_object* v_below_3289_, lean_object* v_x_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_){
_start:
{
lean_object* v_res_3297_; 
v_res_3297_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(v_body_3284_, v_recArgInfos_3285_, v_positions_3286_, v_recFnNames_3287_, v_containsRecFn_3288_, v_below_3289_, v_x_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_);
lean_dec_ref(v_x_3290_);
lean_dec_ref(v_body_3284_);
return v_res_3297_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3301_; lean_object* v___x_3302_; 
v___x_3301_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__0));
v___x_3302_ = l_Lean_stringToMessageData(v___x_3301_);
return v___x_3302_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; 
v___x_3304_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__2));
v___x_3305_ = l_Lean_stringToMessageData(v___x_3304_);
return v___x_3305_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3307_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__4));
v___x_3308_ = l_Lean_stringToMessageData(v___x_3307_);
return v___x_3308_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3310_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__6));
v___x_3311_ = l_Lean_stringToMessageData(v___x_3310_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0(lean_object* v___x_3312_, lean_object* v_b_3313_, lean_object* v_recArgInfos_3314_, lean_object* v_positions_3315_, lean_object* v_recFnNames_3316_, lean_object* v_containsRecFn_3317_, uint8_t v___x_3318_, uint8_t v_a_3319_, lean_object* v___x_3320_, lean_object* v_a_3321_, lean_object* v_e_3322_, lean_object* v_xs_3323_, lean_object* v_altBody_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
lean_object* v___y_3332_; lean_object* v___y_3333_; lean_object* v___y_3334_; lean_object* v___y_3335_; lean_object* v___y_3336_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; lean_object* v___x_3367_; lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3396_; 
lean_inc(v___x_3312_);
v___x_3367_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(v___x_3312_, v___y_3328_);
v_a_3368_ = lean_ctor_get(v___x_3367_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3367_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3370_ = v___x_3367_;
v_isShared_3371_ = v_isSharedCheck_3396_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_dec(v___x_3367_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3396_;
goto v_resetjp_3369_;
}
v___jp_3331_:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; 
v___x_3337_ = l_Lean_instInhabitedExpr;
v___x_3338_ = lean_array_get_borrowed(v___x_3337_, v_xs_3323_, v_b_3313_);
lean_dec(v_b_3313_);
lean_inc(v___y_3336_);
lean_inc_ref(v___y_3335_);
lean_inc(v___y_3334_);
lean_inc_ref(v___y_3333_);
lean_inc(v___x_3338_);
v___x_3339_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3314_, v_positions_3315_, v_recFnNames_3316_, v_containsRecFn_3317_, v___x_3338_, v_altBody_3324_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
if (lean_obj_tag(v___x_3339_) == 0)
{
lean_object* v_a_3340_; uint8_t v___x_3341_; lean_object* v___x_3342_; 
v_a_3340_ = lean_ctor_get(v___x_3339_, 0);
lean_inc(v_a_3340_);
lean_dec_ref(v___x_3339_);
v___x_3341_ = 1;
v___x_3342_ = l_Lean_Meta_mkLambdaFVars(v_xs_3323_, v_a_3340_, v___x_3318_, v_a_3319_, v___x_3318_, v_a_3319_, v___x_3341_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
lean_dec(v___y_3336_);
lean_dec_ref(v___y_3335_);
lean_dec(v___y_3334_);
lean_dec_ref(v___y_3333_);
lean_dec_ref(v_xs_3323_);
return v___x_3342_;
}
else
{
lean_dec(v___y_3336_);
lean_dec_ref(v___y_3335_);
lean_dec(v___y_3334_);
lean_dec_ref(v___y_3333_);
lean_dec_ref(v_xs_3323_);
return v___x_3339_;
}
}
v___jp_3343_:
{
lean_object* v___x_3349_; uint8_t v___x_3350_; 
v___x_3349_ = lean_array_get_size(v_xs_3323_);
v___x_3350_ = lean_nat_dec_eq(v___x_3349_, v___x_3320_);
if (v___x_3350_ == 0)
{
lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3366_; 
lean_dec(v___y_3344_);
lean_dec_ref(v_altBody_3324_);
lean_dec_ref(v_xs_3323_);
lean_dec_ref(v_containsRecFn_3317_);
lean_dec_ref(v_recFnNames_3316_);
lean_dec_ref(v_positions_3315_);
lean_dec_ref(v_recArgInfos_3314_);
lean_dec(v_b_3313_);
v___x_3351_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__1, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__1);
v___x_3352_ = l_Lean_indentExpr(v_a_3321_);
v___x_3353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3351_);
lean_ctor_set(v___x_3353_, 1, v___x_3352_);
v___x_3354_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__3, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__3_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__3);
v___x_3355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3353_);
lean_ctor_set(v___x_3355_, 1, v___x_3354_);
v___x_3356_ = l_Lean_indentExpr(v_e_3322_);
v___x_3357_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3355_);
lean_ctor_set(v___x_3357_, 1, v___x_3356_);
v___x_3358_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3357_, v___y_3345_, v___y_3346_, v___y_3347_, v___y_3348_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3347_);
lean_dec(v___y_3346_);
lean_dec_ref(v___y_3345_);
v_a_3359_ = lean_ctor_get(v___x_3358_, 0);
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3358_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3361_ = v___x_3358_;
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3358_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3364_; 
if (v_isShared_3362_ == 0)
{
v___x_3364_ = v___x_3361_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v_a_3359_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
}
else
{
lean_dec_ref(v_e_3322_);
lean_dec_ref(v_a_3321_);
v___y_3332_ = v___y_3344_;
v___y_3333_ = v___y_3345_;
v___y_3334_ = v___y_3346_;
v___y_3335_ = v___y_3347_;
v___y_3336_ = v___y_3348_;
goto v___jp_3331_;
}
}
v_resetjp_3369_:
{
uint8_t v___x_3372_; 
v___x_3372_ = lean_unbox(v_a_3368_);
lean_dec(v_a_3368_);
if (v___x_3372_ == 0)
{
lean_del_object(v___x_3370_);
lean_dec(v___x_3312_);
v___y_3344_ = v___y_3325_;
v___y_3345_ = v___y_3326_;
v___y_3346_ = v___y_3327_;
v___y_3347_ = v___y_3328_;
v___y_3348_ = v___y_3329_;
goto v___jp_3343_;
}
else
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3376_; 
v___x_3373_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__5, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__5_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__5);
lean_inc(v_b_3313_);
v___x_3374_ = l_Nat_reprFast(v_b_3313_);
if (v_isShared_3371_ == 0)
{
lean_ctor_set_tag(v___x_3370_, 3);
lean_ctor_set(v___x_3370_, 0, v___x_3374_);
v___x_3376_ = v___x_3370_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v___x_3374_);
v___x_3376_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3377_ = l_Lean_MessageData_ofFormat(v___x_3376_);
v___x_3378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3378_, 0, v___x_3373_);
lean_ctor_set(v___x_3378_, 1, v___x_3377_);
v___x_3379_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__7, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__7_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__7);
v___x_3380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3380_, 0, v___x_3378_);
lean_ctor_set(v___x_3380_, 1, v___x_3379_);
lean_inc_ref(v_xs_3323_);
v___x_3381_ = lean_array_to_list(v_xs_3323_);
v___x_3382_ = lean_box(0);
v___x_3383_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(v___x_3381_, v___x_3382_);
v___x_3384_ = l_Lean_MessageData_ofList(v___x_3383_);
v___x_3385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3385_, 0, v___x_3380_);
lean_ctor_set(v___x_3385_, 1, v___x_3384_);
v___x_3386_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v___x_3312_, v___x_3385_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_dec_ref(v___x_3386_);
v___y_3344_ = v___y_3325_;
v___y_3345_ = v___y_3326_;
v___y_3346_ = v___y_3327_;
v___y_3347_ = v___y_3328_;
v___y_3348_ = v___y_3329_;
goto v___jp_3343_;
}
else
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3394_; 
lean_dec(v___y_3329_);
lean_dec_ref(v___y_3328_);
lean_dec(v___y_3327_);
lean_dec_ref(v___y_3326_);
lean_dec(v___y_3325_);
lean_dec_ref(v_altBody_3324_);
lean_dec_ref(v_xs_3323_);
lean_dec_ref(v_e_3322_);
lean_dec_ref(v_a_3321_);
lean_dec_ref(v_containsRecFn_3317_);
lean_dec_ref(v_recFnNames_3316_);
lean_dec_ref(v_positions_3315_);
lean_dec_ref(v_recArgInfos_3314_);
lean_dec(v_b_3313_);
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3394_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3389_ = v___x_3386_;
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v___x_3386_);
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
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___boxed(lean_object** _args){
lean_object* v___x_3397_ = _args[0];
lean_object* v_b_3398_ = _args[1];
lean_object* v_recArgInfos_3399_ = _args[2];
lean_object* v_positions_3400_ = _args[3];
lean_object* v_recFnNames_3401_ = _args[4];
lean_object* v_containsRecFn_3402_ = _args[5];
lean_object* v___x_3403_ = _args[6];
lean_object* v_a_3404_ = _args[7];
lean_object* v___x_3405_ = _args[8];
lean_object* v_a_3406_ = _args[9];
lean_object* v_e_3407_ = _args[10];
lean_object* v_xs_3408_ = _args[11];
lean_object* v_altBody_3409_ = _args[12];
lean_object* v___y_3410_ = _args[13];
lean_object* v___y_3411_ = _args[14];
lean_object* v___y_3412_ = _args[15];
lean_object* v___y_3413_ = _args[16];
lean_object* v___y_3414_ = _args[17];
lean_object* v___y_3415_ = _args[18];
_start:
{
uint8_t v___x_32125__boxed_3416_; uint8_t v_a_32126__boxed_3417_; lean_object* v_res_3418_; 
v___x_32125__boxed_3416_ = lean_unbox(v___x_3403_);
v_a_32126__boxed_3417_ = lean_unbox(v_a_3404_);
v_res_3418_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0(v___x_3397_, v_b_3398_, v_recArgInfos_3399_, v_positions_3400_, v_recFnNames_3401_, v_containsRecFn_3402_, v___x_32125__boxed_3416_, v_a_32126__boxed_3417_, v___x_3405_, v_a_3406_, v_e_3407_, v_xs_3408_, v_altBody_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_);
lean_dec(v___x_3405_);
return v_res_3418_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11(lean_object* v_recArgInfos_3419_, lean_object* v_positions_3420_, lean_object* v_recFnNames_3421_, lean_object* v_containsRecFn_3422_, uint8_t v_a_3423_, lean_object* v_e_3424_, lean_object* v_as_3425_, lean_object* v_bs_3426_, lean_object* v_i_3427_, lean_object* v_cs_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_){
_start:
{
lean_object* v___x_3435_; uint8_t v___x_3436_; 
v___x_3435_ = lean_array_get_size(v_as_3425_);
v___x_3436_ = lean_nat_dec_lt(v_i_3427_, v___x_3435_);
if (v___x_3436_ == 0)
{
lean_object* v___x_3437_; 
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3431_);
lean_dec_ref(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec(v_i_3427_);
lean_dec_ref(v_e_3424_);
lean_dec_ref(v_containsRecFn_3422_);
lean_dec_ref(v_recFnNames_3421_);
lean_dec_ref(v_positions_3420_);
lean_dec_ref(v_recArgInfos_3419_);
v___x_3437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3437_, 0, v_cs_3428_);
return v___x_3437_;
}
else
{
lean_object* v___x_3438_; uint8_t v___x_3439_; 
v___x_3438_ = lean_array_get_size(v_bs_3426_);
v___x_3439_ = lean_nat_dec_lt(v_i_3427_, v___x_3438_);
if (v___x_3439_ == 0)
{
lean_object* v___x_3440_; 
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3431_);
lean_dec_ref(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec(v_i_3427_);
lean_dec_ref(v_e_3424_);
lean_dec_ref(v_containsRecFn_3422_);
lean_dec_ref(v_recFnNames_3421_);
lean_dec_ref(v_positions_3420_);
lean_dec_ref(v_recArgInfos_3419_);
v___x_3440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3440_, 0, v_cs_3428_);
return v___x_3440_;
}
else
{
uint8_t v___x_3441_; lean_object* v___x_3442_; lean_object* v_a_3443_; lean_object* v_b_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___f_3449_; lean_object* v___x_3450_; 
v___x_3441_ = 0;
v___x_3442_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v_a_3443_ = lean_array_fget_borrowed(v_as_3425_, v_i_3427_);
v_b_3444_ = lean_array_fget_borrowed(v_bs_3426_, v_i_3427_);
v___x_3445_ = lean_unsigned_to_nat(1u);
v___x_3446_ = lean_nat_add(v_b_3444_, v___x_3445_);
v___x_3447_ = lean_box(v___x_3441_);
v___x_3448_ = lean_box(v_a_3423_);
lean_inc_ref(v_e_3424_);
lean_inc(v_a_3443_);
lean_inc(v___x_3446_);
lean_inc_ref(v_containsRecFn_3422_);
lean_inc_ref(v_recFnNames_3421_);
lean_inc_ref(v_positions_3420_);
lean_inc_ref(v_recArgInfos_3419_);
lean_inc(v_b_3444_);
v___f_3449_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___boxed), 19, 11);
lean_closure_set(v___f_3449_, 0, v___x_3442_);
lean_closure_set(v___f_3449_, 1, v_b_3444_);
lean_closure_set(v___f_3449_, 2, v_recArgInfos_3419_);
lean_closure_set(v___f_3449_, 3, v_positions_3420_);
lean_closure_set(v___f_3449_, 4, v_recFnNames_3421_);
lean_closure_set(v___f_3449_, 5, v_containsRecFn_3422_);
lean_closure_set(v___f_3449_, 6, v___x_3447_);
lean_closure_set(v___f_3449_, 7, v___x_3448_);
lean_closure_set(v___f_3449_, 8, v___x_3446_);
lean_closure_set(v___f_3449_, 9, v_a_3443_);
lean_closure_set(v___f_3449_, 10, v_e_3424_);
lean_inc(v___y_3433_);
lean_inc_ref(v___y_3432_);
lean_inc(v___y_3431_);
lean_inc_ref(v___y_3430_);
lean_inc(v___y_3429_);
lean_inc(v_a_3443_);
v___x_3450_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg(v_a_3443_, v___x_3446_, v___f_3449_, v___x_3441_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_);
if (lean_obj_tag(v___x_3450_) == 0)
{
lean_object* v_a_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v_a_3451_ = lean_ctor_get(v___x_3450_, 0);
lean_inc(v_a_3451_);
lean_dec_ref(v___x_3450_);
v___x_3452_ = lean_nat_add(v_i_3427_, v___x_3445_);
lean_dec(v_i_3427_);
v___x_3453_ = lean_array_push(v_cs_3428_, v_a_3451_);
v_i_3427_ = v___x_3452_;
v_cs_3428_ = v___x_3453_;
goto _start;
}
else
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3462_; 
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec(v___y_3431_);
lean_dec_ref(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec_ref(v_cs_3428_);
lean_dec(v_i_3427_);
lean_dec_ref(v_e_3424_);
lean_dec_ref(v_containsRecFn_3422_);
lean_dec_ref(v_recFnNames_3421_);
lean_dec_ref(v_positions_3420_);
lean_dec_ref(v_recArgInfos_3419_);
v_a_3455_ = lean_ctor_get(v___x_3450_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3450_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3457_ = v___x_3450_;
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3450_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3460_; 
if (v_isShared_3458_ == 0)
{
v___x_3460_ = v___x_3457_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3455_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
return v___x_3460_;
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2(void){
_start:
{
lean_object* v___x_3464_; lean_object* v___x_3465_; 
v___x_3464_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1));
v___x_3465_ = l_Lean_stringToMessageData(v___x_3464_);
return v___x_3465_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4(void){
_start:
{
lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___x_3467_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3));
v___x_3468_ = l_Lean_stringToMessageData(v___x_3467_);
return v___x_3468_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6(void){
_start:
{
lean_object* v___x_3470_; lean_object* v___x_3471_; 
v___x_3470_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5));
v___x_3471_ = l_Lean_stringToMessageData(v___x_3470_);
return v___x_3471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(lean_object* v_recArgInfos_3472_, lean_object* v_positions_3473_, lean_object* v_recFnNames_3474_, lean_object* v_containsRecFn_3475_, lean_object* v_below_3476_, lean_object* v_e_3477_, lean_object* v_a_3478_, lean_object* v_a_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_){
_start:
{
lean_object* v_e_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; lean_object* v___y_3488_; lean_object* v___y_3489_; lean_object* v___y_3490_; lean_object* v___x_3497_; 
lean_inc_ref(v_containsRecFn_3475_);
lean_inc(v_a_3482_);
lean_inc_ref(v_a_3481_);
lean_inc(v_a_3480_);
lean_inc_ref(v_a_3479_);
lean_inc(v_a_3478_);
lean_inc_ref(v_e_3477_);
v___x_3497_ = lean_apply_7(v_containsRecFn_3475_, v_e_3477_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_, lean_box(0));
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_object* v_a_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3724_; 
v_a_3498_ = lean_ctor_get(v___x_3497_, 0);
v_isSharedCheck_3724_ = !lean_is_exclusive(v___x_3497_);
if (v_isSharedCheck_3724_ == 0)
{
v___x_3500_ = v___x_3497_;
v_isShared_3501_ = v_isSharedCheck_3724_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_a_3498_);
lean_dec(v___x_3497_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3724_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
uint8_t v___x_3502_; 
v___x_3502_ = lean_unbox(v_a_3498_);
if (v___x_3502_ == 0)
{
lean_object* v___x_3504_; 
lean_dec(v_a_3498_);
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
if (v_isShared_3501_ == 0)
{
lean_ctor_set(v___x_3500_, 0, v_e_3477_);
v___x_3504_ = v___x_3500_;
goto v_reusejp_3503_;
}
else
{
lean_object* v_reuseFailAlloc_3505_; 
v_reuseFailAlloc_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3505_, 0, v_e_3477_);
v___x_3504_ = v_reuseFailAlloc_3505_;
goto v_reusejp_3503_;
}
v_reusejp_3503_:
{
return v___x_3504_;
}
}
else
{
uint8_t v___x_3506_; 
lean_del_object(v___x_3500_);
v___x_3506_ = 0;
switch(lean_obj_tag(v_e_3477_))
{
case 6:
{
lean_object* v_binderName_3507_; lean_object* v_binderType_3508_; lean_object* v_body_3509_; uint8_t v_binderInfo_3510_; lean_object* v___x_3511_; 
v_binderName_3507_ = lean_ctor_get(v_e_3477_, 0);
lean_inc(v_binderName_3507_);
v_binderType_3508_ = lean_ctor_get(v_e_3477_, 1);
lean_inc_ref(v_binderType_3508_);
v_body_3509_ = lean_ctor_get(v_e_3477_, 2);
lean_inc_ref(v_body_3509_);
v_binderInfo_3510_ = lean_ctor_get_uint8(v_e_3477_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3477_);
lean_inc(v_a_3482_);
lean_inc_ref(v_a_3481_);
lean_inc(v_a_3480_);
lean_inc_ref(v_a_3479_);
lean_inc(v_a_3478_);
lean_inc_ref(v_below_3476_);
lean_inc_ref(v_containsRecFn_3475_);
lean_inc_ref(v_recFnNames_3474_);
lean_inc_ref(v_positions_3473_);
lean_inc_ref(v_recArgInfos_3472_);
v___x_3511_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3472_, v_positions_3473_, v_recFnNames_3474_, v_containsRecFn_3475_, v_below_3476_, v_binderType_3508_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3511_) == 0)
{
lean_object* v_a_3512_; lean_object* v___x_3513_; lean_object* v___f_3514_; uint8_t v___x_3515_; lean_object* v___x_3516_; 
v_a_3512_ = lean_ctor_get(v___x_3511_, 0);
lean_inc(v_a_3512_);
lean_dec_ref(v___x_3511_);
v___x_3513_ = lean_box(v___x_3506_);
v___f_3514_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed), 15, 8);
lean_closure_set(v___f_3514_, 0, v_body_3509_);
lean_closure_set(v___f_3514_, 1, v_recArgInfos_3472_);
lean_closure_set(v___f_3514_, 2, v_positions_3473_);
lean_closure_set(v___f_3514_, 3, v_recFnNames_3474_);
lean_closure_set(v___f_3514_, 4, v_containsRecFn_3475_);
lean_closure_set(v___f_3514_, 5, v_below_3476_);
lean_closure_set(v___f_3514_, 6, v___x_3513_);
lean_closure_set(v___f_3514_, 7, v_a_3498_);
v___x_3515_ = 0;
v___x_3516_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_binderName_3507_, v_binderInfo_3510_, v_a_3512_, v___f_3514_, v___x_3515_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
return v___x_3516_;
}
else
{
lean_dec_ref(v_body_3509_);
lean_dec(v_binderName_3507_);
lean_dec(v_a_3498_);
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
return v___x_3511_;
}
}
case 7:
{
lean_object* v_binderName_3517_; lean_object* v_binderType_3518_; lean_object* v_body_3519_; uint8_t v_binderInfo_3520_; lean_object* v___x_3521_; 
v_binderName_3517_ = lean_ctor_get(v_e_3477_, 0);
lean_inc(v_binderName_3517_);
v_binderType_3518_ = lean_ctor_get(v_e_3477_, 1);
lean_inc_ref(v_binderType_3518_);
v_body_3519_ = lean_ctor_get(v_e_3477_, 2);
lean_inc_ref(v_body_3519_);
v_binderInfo_3520_ = lean_ctor_get_uint8(v_e_3477_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3477_);
lean_inc(v_a_3482_);
lean_inc_ref(v_a_3481_);
lean_inc(v_a_3480_);
lean_inc_ref(v_a_3479_);
lean_inc(v_a_3478_);
lean_inc_ref(v_below_3476_);
lean_inc_ref(v_containsRecFn_3475_);
lean_inc_ref(v_recFnNames_3474_);
lean_inc_ref(v_positions_3473_);
lean_inc_ref(v_recArgInfos_3472_);
v___x_3521_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3472_, v_positions_3473_, v_recFnNames_3474_, v_containsRecFn_3475_, v_below_3476_, v_binderType_3518_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_object* v_a_3522_; lean_object* v___x_3523_; lean_object* v___f_3524_; uint8_t v___x_3525_; lean_object* v___x_3526_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
lean_inc(v_a_3522_);
lean_dec_ref(v___x_3521_);
v___x_3523_ = lean_box(v___x_3506_);
v___f_3524_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed), 15, 8);
lean_closure_set(v___f_3524_, 0, v_body_3519_);
lean_closure_set(v___f_3524_, 1, v_recArgInfos_3472_);
lean_closure_set(v___f_3524_, 2, v_positions_3473_);
lean_closure_set(v___f_3524_, 3, v_recFnNames_3474_);
lean_closure_set(v___f_3524_, 4, v_containsRecFn_3475_);
lean_closure_set(v___f_3524_, 5, v_below_3476_);
lean_closure_set(v___f_3524_, 6, v___x_3523_);
lean_closure_set(v___f_3524_, 7, v_a_3498_);
v___x_3525_ = 0;
v___x_3526_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_binderName_3517_, v_binderInfo_3520_, v_a_3522_, v___f_3524_, v___x_3525_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
return v___x_3526_;
}
else
{
lean_dec_ref(v_body_3519_);
lean_dec(v_binderName_3517_);
lean_dec(v_a_3498_);
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
return v___x_3521_;
}
}
case 8:
{
lean_object* v_declName_3527_; lean_object* v_type_3528_; lean_object* v_value_3529_; lean_object* v_body_3530_; uint8_t v_nondep_3531_; lean_object* v___x_3532_; 
lean_dec(v_a_3498_);
v_declName_3527_ = lean_ctor_get(v_e_3477_, 0);
lean_inc(v_declName_3527_);
v_type_3528_ = lean_ctor_get(v_e_3477_, 1);
lean_inc_ref(v_type_3528_);
v_value_3529_ = lean_ctor_get(v_e_3477_, 2);
lean_inc_ref(v_value_3529_);
v_body_3530_ = lean_ctor_get(v_e_3477_, 3);
lean_inc_ref(v_body_3530_);
v_nondep_3531_ = lean_ctor_get_uint8(v_e_3477_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_3477_);
lean_inc(v_a_3482_);
lean_inc_ref(v_a_3481_);
lean_inc(v_a_3480_);
lean_inc_ref(v_a_3479_);
lean_inc(v_a_3478_);
lean_inc_ref(v_below_3476_);
lean_inc_ref(v_containsRecFn_3475_);
lean_inc_ref(v_recFnNames_3474_);
lean_inc_ref(v_positions_3473_);
lean_inc_ref(v_recArgInfos_3472_);
v___x_3532_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3472_, v_positions_3473_, v_recFnNames_3474_, v_containsRecFn_3475_, v_below_3476_, v_type_3528_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3532_) == 0)
{
lean_object* v_a_3533_; lean_object* v___x_3534_; 
v_a_3533_ = lean_ctor_get(v___x_3532_, 0);
lean_inc(v_a_3533_);
lean_dec_ref(v___x_3532_);
lean_inc(v_a_3482_);
lean_inc_ref(v_a_3481_);
lean_inc(v_a_3480_);
lean_inc_ref(v_a_3479_);
lean_inc(v_a_3478_);
lean_inc_ref(v_below_3476_);
lean_inc_ref(v_containsRecFn_3475_);
lean_inc_ref(v_recFnNames_3474_);
lean_inc_ref(v_positions_3473_);
lean_inc_ref(v_recArgInfos_3472_);
v___x_3534_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3472_, v_positions_3473_, v_recFnNames_3474_, v_containsRecFn_3475_, v_below_3476_, v_value_3529_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3534_) == 0)
{
lean_object* v_a_3535_; lean_object* v___f_3536_; uint8_t v___x_3537_; lean_object* v___x_3538_; 
v_a_3535_ = lean_ctor_get(v___x_3534_, 0);
lean_inc(v_a_3535_);
lean_dec_ref(v___x_3534_);
v___f_3536_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed), 13, 6);
lean_closure_set(v___f_3536_, 0, v_body_3530_);
lean_closure_set(v___f_3536_, 1, v_recArgInfos_3472_);
lean_closure_set(v___f_3536_, 2, v_positions_3473_);
lean_closure_set(v___f_3536_, 3, v_recFnNames_3474_);
lean_closure_set(v___f_3536_, 4, v_containsRecFn_3475_);
lean_closure_set(v___f_3536_, 5, v_below_3476_);
v___x_3537_ = 0;
v___x_3538_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(v_declName_3527_, v_a_3533_, v_a_3535_, v___f_3536_, v_nondep_3531_, v___x_3537_, v___x_3506_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
return v___x_3538_;
}
else
{
lean_dec(v_a_3533_);
lean_dec_ref(v_body_3530_);
lean_dec(v_declName_3527_);
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
return v___x_3534_;
}
}
else
{
lean_dec_ref(v_body_3530_);
lean_dec_ref(v_value_3529_);
lean_dec(v_declName_3527_);
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
return v___x_3532_;
}
}
case 10:
{
lean_object* v_data_3539_; lean_object* v_expr_3540_; lean_object* v___x_3541_; 
lean_dec(v_a_3498_);
v_data_3539_ = lean_ctor_get(v_e_3477_, 0);
lean_inc(v_data_3539_);
v_expr_3540_ = lean_ctor_get(v_e_3477_, 1);
lean_inc_ref(v_expr_3540_);
v___x_3541_ = l_Lean_getRecAppSyntax_x3f(v_e_3477_);
lean_dec_ref(v_e_3477_);
if (lean_obj_tag(v___x_3541_) == 1)
{
lean_object* v_val_3542_; lean_object* v_fileName_3543_; lean_object* v_fileMap_3544_; lean_object* v_options_3545_; lean_object* v_currRecDepth_3546_; lean_object* v_maxRecDepth_3547_; lean_object* v_ref_3548_; lean_object* v_currNamespace_3549_; lean_object* v_openDecls_3550_; lean_object* v_initHeartbeats_3551_; lean_object* v_maxHeartbeats_3552_; lean_object* v_quotContext_3553_; lean_object* v_currMacroScope_3554_; uint8_t v_diag_3555_; lean_object* v_cancelTk_x3f_3556_; uint8_t v_suppressElabErrors_3557_; lean_object* v_inheritedTraceOptions_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3567_; 
lean_dec(v_data_3539_);
v_val_3542_ = lean_ctor_get(v___x_3541_, 0);
lean_inc(v_val_3542_);
lean_dec_ref(v___x_3541_);
v_fileName_3543_ = lean_ctor_get(v_a_3481_, 0);
v_fileMap_3544_ = lean_ctor_get(v_a_3481_, 1);
v_options_3545_ = lean_ctor_get(v_a_3481_, 2);
v_currRecDepth_3546_ = lean_ctor_get(v_a_3481_, 3);
v_maxRecDepth_3547_ = lean_ctor_get(v_a_3481_, 4);
v_ref_3548_ = lean_ctor_get(v_a_3481_, 5);
v_currNamespace_3549_ = lean_ctor_get(v_a_3481_, 6);
v_openDecls_3550_ = lean_ctor_get(v_a_3481_, 7);
v_initHeartbeats_3551_ = lean_ctor_get(v_a_3481_, 8);
v_maxHeartbeats_3552_ = lean_ctor_get(v_a_3481_, 9);
v_quotContext_3553_ = lean_ctor_get(v_a_3481_, 10);
v_currMacroScope_3554_ = lean_ctor_get(v_a_3481_, 11);
v_diag_3555_ = lean_ctor_get_uint8(v_a_3481_, sizeof(void*)*14);
v_cancelTk_x3f_3556_ = lean_ctor_get(v_a_3481_, 12);
v_suppressElabErrors_3557_ = lean_ctor_get_uint8(v_a_3481_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3558_ = lean_ctor_get(v_a_3481_, 13);
v_isSharedCheck_3567_ = !lean_is_exclusive(v_a_3481_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3560_ = v_a_3481_;
v_isShared_3561_ = v_isSharedCheck_3567_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_inheritedTraceOptions_3558_);
lean_inc(v_cancelTk_x3f_3556_);
lean_inc(v_currMacroScope_3554_);
lean_inc(v_quotContext_3553_);
lean_inc(v_maxHeartbeats_3552_);
lean_inc(v_initHeartbeats_3551_);
lean_inc(v_openDecls_3550_);
lean_inc(v_currNamespace_3549_);
lean_inc(v_ref_3548_);
lean_inc(v_maxRecDepth_3547_);
lean_inc(v_currRecDepth_3546_);
lean_inc(v_options_3545_);
lean_inc(v_fileMap_3544_);
lean_inc(v_fileName_3543_);
lean_dec(v_a_3481_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3567_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v_ref_3562_; lean_object* v___x_3564_; 
v_ref_3562_ = l_Lean_replaceRef(v_val_3542_, v_ref_3548_);
lean_dec(v_ref_3548_);
lean_dec(v_val_3542_);
if (v_isShared_3561_ == 0)
{
lean_ctor_set(v___x_3560_, 5, v_ref_3562_);
v___x_3564_ = v___x_3560_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_fileName_3543_);
lean_ctor_set(v_reuseFailAlloc_3566_, 1, v_fileMap_3544_);
lean_ctor_set(v_reuseFailAlloc_3566_, 2, v_options_3545_);
lean_ctor_set(v_reuseFailAlloc_3566_, 3, v_currRecDepth_3546_);
lean_ctor_set(v_reuseFailAlloc_3566_, 4, v_maxRecDepth_3547_);
lean_ctor_set(v_reuseFailAlloc_3566_, 5, v_ref_3562_);
lean_ctor_set(v_reuseFailAlloc_3566_, 6, v_currNamespace_3549_);
lean_ctor_set(v_reuseFailAlloc_3566_, 7, v_openDecls_3550_);
lean_ctor_set(v_reuseFailAlloc_3566_, 8, v_initHeartbeats_3551_);
lean_ctor_set(v_reuseFailAlloc_3566_, 9, v_maxHeartbeats_3552_);
lean_ctor_set(v_reuseFailAlloc_3566_, 10, v_quotContext_3553_);
lean_ctor_set(v_reuseFailAlloc_3566_, 11, v_currMacroScope_3554_);
lean_ctor_set(v_reuseFailAlloc_3566_, 12, v_cancelTk_x3f_3556_);
lean_ctor_set(v_reuseFailAlloc_3566_, 13, v_inheritedTraceOptions_3558_);
lean_ctor_set_uint8(v_reuseFailAlloc_3566_, sizeof(void*)*14, v_diag_3555_);
lean_ctor_set_uint8(v_reuseFailAlloc_3566_, sizeof(void*)*14 + 1, v_suppressElabErrors_3557_);
v___x_3564_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
v_e_3477_ = v_expr_3540_;
v_a_3481_ = v___x_3564_;
goto _start;
}
}
}
else
{
lean_object* v___x_3568_; 
lean_dec(v___x_3541_);
v___x_3568_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3472_, v_positions_3473_, v_recFnNames_3474_, v_containsRecFn_3475_, v_below_3476_, v_expr_3540_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3571_; uint8_t v_isShared_3572_; uint8_t v_isSharedCheck_3577_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3577_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3577_ == 0)
{
v___x_3571_ = v___x_3568_;
v_isShared_3572_ = v_isSharedCheck_3577_;
goto v_resetjp_3570_;
}
else
{
lean_inc(v_a_3569_);
lean_dec(v___x_3568_);
v___x_3571_ = lean_box(0);
v_isShared_3572_ = v_isSharedCheck_3577_;
goto v_resetjp_3570_;
}
v_resetjp_3570_:
{
lean_object* v___x_3573_; lean_object* v___x_3575_; 
v___x_3573_ = l_Lean_mkMData(v_data_3539_, v_a_3569_);
if (v_isShared_3572_ == 0)
{
lean_ctor_set(v___x_3571_, 0, v___x_3573_);
v___x_3575_ = v___x_3571_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3576_; 
v_reuseFailAlloc_3576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3576_, 0, v___x_3573_);
v___x_3575_ = v_reuseFailAlloc_3576_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
return v___x_3575_;
}
}
}
else
{
lean_dec(v_data_3539_);
return v___x_3568_;
}
}
}
case 11:
{
lean_object* v_typeName_3578_; lean_object* v_idx_3579_; lean_object* v_struct_3580_; lean_object* v___x_3581_; 
lean_dec(v_a_3498_);
v_typeName_3578_ = lean_ctor_get(v_e_3477_, 0);
lean_inc(v_typeName_3578_);
v_idx_3579_ = lean_ctor_get(v_e_3477_, 1);
lean_inc(v_idx_3579_);
v_struct_3580_ = lean_ctor_get(v_e_3477_, 2);
lean_inc_ref(v_struct_3580_);
lean_dec_ref(v_e_3477_);
v___x_3581_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3472_, v_positions_3473_, v_recFnNames_3474_, v_containsRecFn_3475_, v_below_3476_, v_struct_3580_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3590_; 
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3584_ = v___x_3581_;
v_isShared_3585_ = v_isSharedCheck_3590_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_a_3582_);
lean_dec(v___x_3581_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3590_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
lean_object* v___x_3586_; lean_object* v___x_3588_; 
v___x_3586_ = l_Lean_mkProj(v_typeName_3578_, v_idx_3579_, v_a_3582_);
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 0, v___x_3586_);
v___x_3588_ = v___x_3584_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v___x_3586_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
else
{
lean_dec(v_idx_3579_);
lean_dec(v_typeName_3578_);
return v___x_3581_;
}
}
case 5:
{
uint8_t v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = lean_unbox(v_a_3498_);
lean_inc(v_a_3482_);
lean_inc_ref(v_a_3481_);
lean_inc(v_a_3480_);
lean_inc_ref(v_a_3479_);
lean_inc(v_a_3478_);
lean_inc_ref(v_e_3477_);
v___x_3592_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(v_e_3477_, v___x_3591_, v_a_3478_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3592_) == 0)
{
lean_object* v_a_3593_; 
v_a_3593_ = lean_ctor_get(v___x_3592_, 0);
lean_inc(v_a_3593_);
lean_dec_ref(v___x_3592_);
if (lean_obj_tag(v_a_3593_) == 0)
{
lean_dec(v_a_3498_);
v_e_3485_ = v_e_3477_;
v___y_3486_ = v_a_3478_;
v___y_3487_ = v_a_3479_;
v___y_3488_ = v_a_3480_;
v___y_3489_ = v_a_3481_;
v___y_3490_ = v_a_3482_;
goto v___jp_3484_;
}
else
{
lean_object* v_val_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; uint8_t v___x_3597_; 
v_val_3594_ = lean_ctor_get(v_a_3593_, 0);
lean_inc(v_val_3594_);
lean_dec_ref(v_a_3593_);
v___x_3595_ = lean_unsigned_to_nat(0u);
v___x_3596_ = lean_array_get_size(v_recArgInfos_3472_);
v___x_3597_ = lean_nat_dec_lt(v___x_3595_, v___x_3596_);
if (v___x_3597_ == 0)
{
lean_dec(v_val_3594_);
lean_dec(v_a_3498_);
v_e_3485_ = v_e_3477_;
v___y_3486_ = v_a_3478_;
v___y_3487_ = v_a_3479_;
v___y_3488_ = v_a_3480_;
v___y_3489_ = v_a_3481_;
v___y_3490_ = v_a_3482_;
goto v___jp_3484_;
}
else
{
if (v___x_3597_ == 0)
{
lean_dec(v_val_3594_);
lean_dec(v_a_3498_);
v_e_3485_ = v_e_3477_;
v___y_3486_ = v_a_3478_;
v___y_3487_ = v_a_3479_;
v___y_3488_ = v_a_3480_;
v___y_3489_ = v_a_3481_;
v___y_3490_ = v_a_3482_;
goto v___jp_3484_;
}
else
{
size_t v___x_3598_; size_t v___x_3599_; uint8_t v___x_3600_; 
v___x_3598_ = ((size_t)0ULL);
v___x_3599_ = lean_usize_of_nat(v___x_3596_);
v___x_3600_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(v_e_3477_, v_recArgInfos_3472_, v___x_3598_, v___x_3599_);
if (v___x_3600_ == 0)
{
lean_dec(v_val_3594_);
lean_dec(v_a_3498_);
v_e_3485_ = v_e_3477_;
v___y_3486_ = v_a_3478_;
v___y_3487_ = v_a_3479_;
v___y_3488_ = v_a_3480_;
v___y_3489_ = v_a_3481_;
v___y_3490_ = v_a_3482_;
goto v___jp_3484_;
}
else
{
lean_object* v___x_3601_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v___y_3605_; lean_object* v___y_3606_; lean_object* v___y_3607_; lean_object* v___x_3670_; 
v___x_3601_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v___x_3670_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(v___x_3601_, v_a_3481_);
if (lean_obj_tag(v___x_3670_) == 0)
{
lean_object* v_a_3671_; uint8_t v___x_3672_; 
v_a_3671_ = lean_ctor_get(v___x_3670_, 0);
lean_inc(v_a_3671_);
lean_dec_ref(v___x_3670_);
v___x_3672_ = lean_unbox(v_a_3671_);
lean_dec(v_a_3671_);
if (v___x_3672_ == 0)
{
v___y_3603_ = v_a_3478_;
v___y_3604_ = v_a_3479_;
v___y_3605_ = v_a_3480_;
v___y_3606_ = v_a_3481_;
v___y_3607_ = v_a_3482_;
goto v___jp_3602_;
}
else
{
lean_object* v___x_3673_; 
lean_inc(v_a_3482_);
lean_inc_ref(v_a_3481_);
lean_inc(v_a_3480_);
lean_inc_ref(v_a_3479_);
lean_inc_ref(v_below_3476_);
v___x_3673_ = lean_infer_type(v_below_3476_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_a_3674_);
lean_dec_ref(v___x_3673_);
v___x_3675_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4);
lean_inc_ref(v_below_3476_);
v___x_3676_ = l_Lean_MessageData_ofExpr(v_below_3476_);
v___x_3677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3677_, 0, v___x_3675_);
lean_ctor_set(v___x_3677_, 1, v___x_3676_);
v___x_3678_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6);
v___x_3679_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3679_, 0, v___x_3677_);
lean_ctor_set(v___x_3679_, 1, v___x_3678_);
v___x_3680_ = l_Lean_MessageData_ofExpr(v_a_3674_);
v___x_3681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3681_, 0, v___x_3679_);
lean_ctor_set(v___x_3681_, 1, v___x_3680_);
v___x_3682_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v___x_3601_, v___x_3681_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_dec_ref(v___x_3682_);
v___y_3603_ = v_a_3478_;
v___y_3604_ = v_a_3479_;
v___y_3605_ = v_a_3480_;
v___y_3606_ = v_a_3481_;
v___y_3607_ = v_a_3482_;
goto v___jp_3602_;
}
else
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3690_; 
lean_dec(v_val_3594_);
lean_dec_ref(v_e_3477_);
lean_dec(v_a_3498_);
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3685_ = v___x_3682_;
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3682_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3686_ == 0)
{
v___x_3688_ = v___x_3685_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3683_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
}
else
{
lean_dec(v_val_3594_);
lean_dec_ref(v_e_3477_);
lean_dec(v_a_3498_);
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
return v___x_3673_;
}
}
}
else
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3698_; 
lean_dec(v_val_3594_);
lean_dec_ref(v_e_3477_);
lean_dec(v_a_3498_);
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
v_a_3691_ = lean_ctor_get(v___x_3670_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3670_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3693_ = v___x_3670_;
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3670_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3698_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
lean_object* v___x_3696_; 
if (v_isShared_3694_ == 0)
{
v___x_3696_ = v___x_3693_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3697_; 
v_reuseFailAlloc_3697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3697_, 0, v_a_3691_);
v___x_3696_ = v_reuseFailAlloc_3697_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
return v___x_3696_;
}
}
}
v___jp_3602_:
{
lean_object* v___x_3608_; 
lean_inc(v___y_3607_);
lean_inc_ref(v___y_3606_);
lean_inc(v___y_3605_);
lean_inc_ref(v___y_3604_);
lean_inc_ref(v_below_3476_);
v___x_3608_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_val_3594_, v_below_3476_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_);
if (lean_obj_tag(v___x_3608_) == 0)
{
lean_object* v_a_3609_; 
v_a_3609_ = lean_ctor_get(v___x_3608_, 0);
lean_inc(v_a_3609_);
lean_dec_ref(v___x_3608_);
if (lean_obj_tag(v_a_3609_) == 1)
{
lean_object* v_val_3610_; lean_object* v_toMatcherInfo_3611_; lean_object* v_matcherName_3612_; lean_object* v_matcherLevels_3613_; lean_object* v_params_3614_; lean_object* v_motive_3615_; lean_object* v_discrs_3616_; lean_object* v_alts_3617_; lean_object* v_remaining_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; uint8_t v___x_3621_; lean_object* v___x_3622_; 
lean_dec_ref(v_below_3476_);
v_val_3610_ = lean_ctor_get(v_a_3609_, 0);
lean_inc(v_val_3610_);
lean_dec_ref(v_a_3609_);
v_toMatcherInfo_3611_ = lean_ctor_get(v_val_3610_, 0);
lean_inc_ref(v_toMatcherInfo_3611_);
v_matcherName_3612_ = lean_ctor_get(v_val_3610_, 1);
lean_inc(v_matcherName_3612_);
v_matcherLevels_3613_ = lean_ctor_get(v_val_3610_, 2);
lean_inc_ref(v_matcherLevels_3613_);
v_params_3614_ = lean_ctor_get(v_val_3610_, 3);
lean_inc_ref(v_params_3614_);
v_motive_3615_ = lean_ctor_get(v_val_3610_, 4);
lean_inc_ref(v_motive_3615_);
v_discrs_3616_ = lean_ctor_get(v_val_3610_, 5);
lean_inc_ref(v_discrs_3616_);
v_alts_3617_ = lean_ctor_get(v_val_3610_, 6);
lean_inc_ref(v_alts_3617_);
v_remaining_3618_ = lean_ctor_get(v_val_3610_, 7);
lean_inc_ref(v_remaining_3618_);
v___x_3619_ = l_Lean_Meta_MatcherApp_altNumParams(v_val_3610_);
v___x_3620_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0));
v___x_3621_ = lean_unbox(v_a_3498_);
lean_dec(v_a_3498_);
v___x_3622_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11(v_recArgInfos_3472_, v_positions_3473_, v_recFnNames_3474_, v_containsRecFn_3475_, v___x_3621_, v_e_3477_, v_alts_3617_, v___x_3619_, v___x_3595_, v___x_3620_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_);
lean_dec_ref(v___x_3619_);
lean_dec_ref(v_alts_3617_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3632_; 
v_a_3623_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3625_ = v___x_3622_;
v_isShared_3626_ = v_isSharedCheck_3632_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3622_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3632_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3630_; 
v___x_3627_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3627_, 0, v_toMatcherInfo_3611_);
lean_ctor_set(v___x_3627_, 1, v_matcherName_3612_);
lean_ctor_set(v___x_3627_, 2, v_matcherLevels_3613_);
lean_ctor_set(v___x_3627_, 3, v_params_3614_);
lean_ctor_set(v___x_3627_, 4, v_motive_3615_);
lean_ctor_set(v___x_3627_, 5, v_discrs_3616_);
lean_ctor_set(v___x_3627_, 6, v_a_3623_);
lean_ctor_set(v___x_3627_, 7, v_remaining_3618_);
v___x_3628_ = l_Lean_Meta_MatcherApp_toExpr(v___x_3627_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 0, v___x_3628_);
v___x_3630_ = v___x_3625_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v___x_3628_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
lean_dec_ref(v_remaining_3618_);
lean_dec_ref(v_discrs_3616_);
lean_dec_ref(v_motive_3615_);
lean_dec_ref(v_params_3614_);
lean_dec_ref(v_matcherLevels_3613_);
lean_dec(v_matcherName_3612_);
lean_dec_ref(v_toMatcherInfo_3611_);
v_a_3633_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3622_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3622_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
else
{
lean_object* v___x_3641_; 
lean_dec(v_a_3609_);
lean_dec(v_a_3498_);
v___x_3641_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(v___x_3601_, v___y_3606_);
if (lean_obj_tag(v___x_3641_) == 0)
{
lean_object* v_a_3642_; uint8_t v___x_3643_; 
v_a_3642_ = lean_ctor_get(v___x_3641_, 0);
lean_inc(v_a_3642_);
lean_dec_ref(v___x_3641_);
v___x_3643_ = lean_unbox(v_a_3642_);
lean_dec(v_a_3642_);
if (v___x_3643_ == 0)
{
v_e_3485_ = v_e_3477_;
v___y_3486_ = v___y_3603_;
v___y_3487_ = v___y_3604_;
v___y_3488_ = v___y_3605_;
v___y_3489_ = v___y_3606_;
v___y_3490_ = v___y_3607_;
goto v___jp_3484_;
}
else
{
lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3644_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2);
v___x_3645_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v___x_3601_, v___x_3644_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_);
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_dec_ref(v___x_3645_);
v_e_3485_ = v_e_3477_;
v___y_3486_ = v___y_3603_;
v___y_3487_ = v___y_3604_;
v___y_3488_ = v___y_3605_;
v___y_3489_ = v___y_3606_;
v___y_3490_ = v___y_3607_;
goto v___jp_3484_;
}
else
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3653_; 
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec(v___y_3605_);
lean_dec_ref(v___y_3604_);
lean_dec(v___y_3603_);
lean_dec_ref(v_e_3477_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
v_a_3646_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3648_ = v___x_3645_;
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3645_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3651_; 
if (v_isShared_3649_ == 0)
{
v___x_3651_ = v___x_3648_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_a_3646_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
}
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3661_; 
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec(v___y_3605_);
lean_dec_ref(v___y_3604_);
lean_dec(v___y_3603_);
lean_dec_ref(v_e_3477_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
v_a_3654_ = lean_ctor_get(v___x_3641_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3641_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3656_ = v___x_3641_;
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3641_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
if (v_isShared_3657_ == 0)
{
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_a_3654_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
}
}
else
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3669_; 
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec(v___y_3605_);
lean_dec_ref(v___y_3604_);
lean_dec(v___y_3603_);
lean_dec_ref(v_e_3477_);
lean_dec(v_a_3498_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
v_a_3662_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3669_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3664_ = v___x_3608_;
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3608_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3669_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
lean_object* v___x_3667_; 
if (v_isShared_3665_ == 0)
{
v___x_3667_ = v___x_3664_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_a_3662_);
v___x_3667_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
return v___x_3667_;
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
lean_object* v_a_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3706_; 
lean_dec_ref(v_e_3477_);
lean_dec(v_a_3498_);
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
v_a_3699_ = lean_ctor_get(v___x_3592_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3592_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3701_ = v___x_3592_;
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_a_3699_);
lean_dec(v___x_3592_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3704_; 
if (v_isShared_3702_ == 0)
{
v___x_3704_ = v___x_3701_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_a_3699_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
default: 
{
lean_object* v___x_3707_; 
lean_dec(v_a_3498_);
lean_dec(v_a_3478_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
lean_inc_ref(v_e_3477_);
v___x_3707_ = l_Lean_Elab_ensureNoRecFn(v_recFnNames_3474_, v_e_3477_, v_a_3479_, v_a_3480_, v_a_3481_, v_a_3482_);
if (lean_obj_tag(v___x_3707_) == 0)
{
lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3714_; 
v_isSharedCheck_3714_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3714_ == 0)
{
lean_object* v_unused_3715_; 
v_unused_3715_ = lean_ctor_get(v___x_3707_, 0);
lean_dec(v_unused_3715_);
v___x_3709_ = v___x_3707_;
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
else
{
lean_dec(v___x_3707_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3714_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v___x_3712_; 
if (v_isShared_3710_ == 0)
{
lean_ctor_set(v___x_3709_, 0, v_e_3477_);
v___x_3712_ = v___x_3709_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3713_; 
v_reuseFailAlloc_3713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3713_, 0, v_e_3477_);
v___x_3712_ = v_reuseFailAlloc_3713_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
return v___x_3712_;
}
}
}
else
{
lean_object* v_a_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3723_; 
lean_dec_ref(v_e_3477_);
v_a_3716_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3723_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3723_ == 0)
{
v___x_3718_ = v___x_3707_;
v_isShared_3719_ = v_isSharedCheck_3723_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_a_3716_);
lean_dec(v___x_3707_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3723_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
lean_object* v___x_3721_; 
if (v_isShared_3719_ == 0)
{
v___x_3721_ = v___x_3718_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3722_; 
v_reuseFailAlloc_3722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3722_, 0, v_a_3716_);
v___x_3721_ = v_reuseFailAlloc_3722_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
return v___x_3721_;
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
lean_object* v_a_3725_; lean_object* v___x_3727_; uint8_t v_isShared_3728_; uint8_t v_isSharedCheck_3732_; 
lean_dec(v_a_3482_);
lean_dec_ref(v_a_3481_);
lean_dec(v_a_3480_);
lean_dec_ref(v_a_3479_);
lean_dec(v_a_3478_);
lean_dec_ref(v_e_3477_);
lean_dec_ref(v_below_3476_);
lean_dec_ref(v_containsRecFn_3475_);
lean_dec_ref(v_recFnNames_3474_);
lean_dec_ref(v_positions_3473_);
lean_dec_ref(v_recArgInfos_3472_);
v_a_3725_ = lean_ctor_get(v___x_3497_, 0);
v_isSharedCheck_3732_ = !lean_is_exclusive(v___x_3497_);
if (v_isSharedCheck_3732_ == 0)
{
v___x_3727_ = v___x_3497_;
v_isShared_3728_ = v_isSharedCheck_3732_;
goto v_resetjp_3726_;
}
else
{
lean_inc(v_a_3725_);
lean_dec(v___x_3497_);
v___x_3727_ = lean_box(0);
v_isShared_3728_ = v_isSharedCheck_3732_;
goto v_resetjp_3726_;
}
v_resetjp_3726_:
{
lean_object* v___x_3730_; 
if (v_isShared_3728_ == 0)
{
v___x_3730_ = v___x_3727_;
goto v_reusejp_3729_;
}
else
{
lean_object* v_reuseFailAlloc_3731_; 
v_reuseFailAlloc_3731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3731_, 0, v_a_3725_);
v___x_3730_ = v_reuseFailAlloc_3731_;
goto v_reusejp_3729_;
}
v_reusejp_3729_:
{
return v___x_3730_;
}
}
}
v___jp_3484_:
{
lean_object* v_dummy_3491_; lean_object* v_nargs_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
v_dummy_3491_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0);
v_nargs_3492_ = l_Lean_Expr_getAppNumArgs(v_e_3485_);
lean_inc(v_nargs_3492_);
v___x_3493_ = lean_mk_array(v_nargs_3492_, v_dummy_3491_);
v___x_3494_ = lean_unsigned_to_nat(1u);
v___x_3495_ = lean_nat_sub(v_nargs_3492_, v___x_3494_);
lean_dec(v_nargs_3492_);
lean_inc_ref(v_e_3485_);
v___x_3496_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(v_recArgInfos_3472_, v_positions_3473_, v_recFnNames_3474_, v_containsRecFn_3475_, v_below_3476_, v_e_3485_, v_e_3485_, v___x_3493_, v___x_3495_, v___y_3486_, v___y_3487_, v___y_3488_, v___y_3489_, v___y_3490_);
return v___x_3496_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(lean_object* v_body_3733_, lean_object* v_recArgInfos_3734_, lean_object* v_positions_3735_, lean_object* v_recFnNames_3736_, lean_object* v_containsRecFn_3737_, lean_object* v_below_3738_, lean_object* v_x_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_){
_start:
{
lean_object* v___x_3746_; lean_object* v___x_3747_; 
v___x_3746_ = lean_expr_instantiate1(v_body_3733_, v_x_3739_);
v___x_3747_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3734_, v_positions_3735_, v_recFnNames_3736_, v_containsRecFn_3737_, v_below_3738_, v___x_3746_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0___boxed(lean_object* v_recArgInfos_3748_, lean_object* v_positions_3749_, lean_object* v_recFnNames_3750_, lean_object* v_containsRecFn_3751_, lean_object* v_below_3752_, lean_object* v_sz_3753_, lean_object* v_i_3754_, lean_object* v_bs_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_){
_start:
{
size_t v_sz_boxed_3762_; size_t v_i_boxed_3763_; lean_object* v_res_3764_; 
v_sz_boxed_3762_ = lean_unbox_usize(v_sz_3753_);
lean_dec(v_sz_3753_);
v_i_boxed_3763_ = lean_unbox_usize(v_i_3754_);
lean_dec(v_i_3754_);
v_res_3764_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(v_recArgInfos_3748_, v_positions_3749_, v_recFnNames_3750_, v_containsRecFn_3751_, v_below_3752_, v_sz_boxed_3762_, v_i_boxed_3763_, v_bs_3755_, v___y_3756_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_);
return v_res_3764_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___boxed(lean_object* v_recArgInfos_3765_, lean_object* v_positions_3766_, lean_object* v_recFnNames_3767_, lean_object* v_containsRecFn_3768_, lean_object* v_a_3769_, lean_object* v_e_3770_, lean_object* v_as_3771_, lean_object* v_bs_3772_, lean_object* v_i_3773_, lean_object* v_cs_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_){
_start:
{
uint8_t v_a_32084__boxed_3781_; lean_object* v_res_3782_; 
v_a_32084__boxed_3781_ = lean_unbox(v_a_3769_);
v_res_3782_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11(v_recArgInfos_3765_, v_positions_3766_, v_recFnNames_3767_, v_containsRecFn_3768_, v_a_32084__boxed_3781_, v_e_3770_, v_as_3771_, v_bs_3772_, v_i_3773_, v_cs_3774_, v___y_3775_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
lean_dec_ref(v_bs_3772_);
lean_dec_ref(v_as_3771_);
return v_res_3782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___boxed(lean_object* v_recArgInfos_3783_, lean_object* v_positions_3784_, lean_object* v_recFnNames_3785_, lean_object* v_containsRecFn_3786_, lean_object* v_below_3787_, lean_object* v_e_3788_, lean_object* v_x_3789_, lean_object* v_x_3790_, lean_object* v_x_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_){
_start:
{
lean_object* v_res_3798_; 
v_res_3798_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(v_recArgInfos_3783_, v_positions_3784_, v_recFnNames_3785_, v_containsRecFn_3786_, v_below_3787_, v_e_3788_, v_x_3789_, v_x_3790_, v_x_3791_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_);
return v_res_3798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___boxed(lean_object* v_recArgInfos_3799_, lean_object* v_positions_3800_, lean_object* v_recFnNames_3801_, lean_object* v_containsRecFn_3802_, lean_object* v_below_3803_, lean_object* v_e_3804_, lean_object* v_a_3805_, lean_object* v_a_3806_, lean_object* v_a_3807_, lean_object* v_a_3808_, lean_object* v_a_3809_, lean_object* v_a_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3799_, v_positions_3800_, v_recFnNames_3801_, v_containsRecFn_3802_, v_below_3803_, v_e_3804_, v_a_3805_, v_a_3806_, v_a_3807_, v_a_3808_, v_a_3809_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(lean_object* v_00_u03b1_3812_, lean_object* v_msg_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_){
_start:
{
lean_object* v___x_3820_; 
v___x_3820_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_3813_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_);
return v___x_3820_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___boxed(lean_object* v_00_u03b1_3821_, lean_object* v_msg_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(v_00_u03b1_3821_, v_msg_3822_, v___y_3823_, v___y_3824_, v___y_3825_, v___y_3826_, v___y_3827_);
lean_dec(v___y_3827_);
lean_dec_ref(v___y_3826_);
lean_dec(v___y_3825_);
lean_dec_ref(v___y_3824_);
lean_dec(v___y_3823_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(lean_object* v_00_u03b1_3830_, lean_object* v_name_3831_, lean_object* v_type_3832_, lean_object* v_val_3833_, lean_object* v_k_3834_, uint8_t v_nondep_3835_, uint8_t v_kind_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_){
_start:
{
lean_object* v___x_3843_; 
v___x_3843_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_3831_, v_type_3832_, v_val_3833_, v_k_3834_, v_nondep_3835_, v_kind_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_);
return v___x_3843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object* v_00_u03b1_3844_, lean_object* v_name_3845_, lean_object* v_type_3846_, lean_object* v_val_3847_, lean_object* v_k_3848_, lean_object* v_nondep_3849_, lean_object* v_kind_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_){
_start:
{
uint8_t v_nondep_boxed_3857_; uint8_t v_kind_boxed_3858_; lean_object* v_res_3859_; 
v_nondep_boxed_3857_ = lean_unbox(v_nondep_3849_);
v_kind_boxed_3858_ = lean_unbox(v_kind_3850_);
v_res_3859_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(v_00_u03b1_3844_, v_name_3845_, v_type_3846_, v_val_3847_, v_k_3848_, v_nondep_boxed_3857_, v_kind_boxed_3858_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_);
return v_res_3859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(lean_object* v_declName_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_){
_start:
{
lean_object* v___x_3867_; 
v___x_3867_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_3860_, v___y_3865_);
return v___x_3867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___boxed(lean_object* v_declName_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_){
_start:
{
lean_object* v_res_3875_; 
v_res_3875_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(v_declName_3868_, v___y_3869_, v___y_3870_, v___y_3871_, v___y_3872_, v___y_3873_);
lean_dec(v___y_3873_);
lean_dec_ref(v___y_3872_);
lean_dec(v___y_3871_);
lean_dec_ref(v___y_3870_);
lean_dec(v___y_3869_);
return v_res_3875_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(lean_object* v_cls_3876_, lean_object* v_msg_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_){
_start:
{
lean_object* v___x_3884_; 
v___x_3884_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v_cls_3876_, v_msg_3877_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
return v___x_3884_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___boxed(lean_object* v_cls_3885_, lean_object* v_msg_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_){
_start:
{
lean_object* v_res_3893_; 
v_res_3893_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(v_cls_3885_, v_msg_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
lean_dec(v___y_3887_);
return v_res_3893_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9(lean_object* v_00_u03b1_3894_, lean_object* v_constName_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_){
_start:
{
lean_object* v___x_3902_; 
v___x_3902_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg(v_constName_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_);
return v___x_3902_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___boxed(lean_object* v_00_u03b1_3903_, lean_object* v_constName_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_){
_start:
{
lean_object* v_res_3911_; 
v_res_3911_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9(v_00_u03b1_3903_, v_constName_3904_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_);
lean_dec(v___y_3909_);
lean_dec(v___y_3907_);
lean_dec_ref(v___y_3906_);
lean_dec(v___y_3905_);
return v_res_3911_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16(lean_object* v_00_u03b1_3912_, lean_object* v_ref_3913_, lean_object* v_constName_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_){
_start:
{
lean_object* v___x_3921_; 
v___x_3921_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg(v_ref_3913_, v_constName_3914_, v___y_3915_, v___y_3916_, v___y_3917_, v___y_3918_, v___y_3919_);
return v___x_3921_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___boxed(lean_object* v_00_u03b1_3922_, lean_object* v_ref_3923_, lean_object* v_constName_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16(v_00_u03b1_3922_, v_ref_3923_, v_constName_3924_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_, v___y_3929_);
lean_dec(v___y_3929_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3926_);
lean_dec(v___y_3925_);
lean_dec(v_ref_3923_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18(lean_object* v_00_u03b1_3932_, lean_object* v_ref_3933_, lean_object* v_msg_3934_, lean_object* v_declHint_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_){
_start:
{
lean_object* v___x_3942_; 
v___x_3942_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg(v_ref_3933_, v_msg_3934_, v_declHint_3935_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_);
return v___x_3942_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___boxed(lean_object* v_00_u03b1_3943_, lean_object* v_ref_3944_, lean_object* v_msg_3945_, lean_object* v_declHint_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18(v_00_u03b1_3943_, v_ref_3944_, v_msg_3945_, v_declHint_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_, v___y_3951_);
lean_dec(v___y_3951_);
lean_dec(v___y_3949_);
lean_dec_ref(v___y_3948_);
lean_dec(v___y_3947_);
lean_dec(v_ref_3944_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20(lean_object* v_msg_3954_, lean_object* v_declHint_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_){
_start:
{
lean_object* v___x_3962_; 
v___x_3962_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg(v_msg_3954_, v_declHint_3955_, v___y_3960_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___boxed(lean_object* v_msg_3963_, lean_object* v_declHint_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_){
_start:
{
lean_object* v_res_3971_; 
v_res_3971_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20(v_msg_3963_, v_declHint_3964_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
lean_dec(v___y_3967_);
lean_dec_ref(v___y_3966_);
lean_dec(v___y_3965_);
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20(lean_object* v_00_u03b1_3972_, lean_object* v_ref_3973_, lean_object* v_msg_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_){
_start:
{
lean_object* v___x_3981_; 
v___x_3981_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg(v_ref_3973_, v_msg_3974_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_);
return v___x_3981_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___boxed(lean_object* v_00_u03b1_3982_, lean_object* v_ref_3983_, lean_object* v_msg_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_){
_start:
{
lean_object* v_res_3991_; 
v_res_3991_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20(v_00_u03b1_3982_, v_ref_3983_, v_msg_3984_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_);
lean_dec(v___y_3989_);
lean_dec(v___y_3987_);
lean_dec_ref(v___y_3986_);
lean_dec(v___y_3985_);
lean_dec(v_ref_3983_);
return v_res_3991_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(lean_object* v_recFnNames_3992_, lean_object* v_e_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_){
_start:
{
lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v_fst_4002_; lean_object* v_snd_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___x_4000_ = lean_st_ref_take(v___y_3994_);
v___x_4001_ = l_Lean_HasConstCache_containsUnsafe(v_recFnNames_3992_, v_e_3993_, v___x_4000_);
v_fst_4002_ = lean_ctor_get(v___x_4001_, 0);
lean_inc(v_fst_4002_);
v_snd_4003_ = lean_ctor_get(v___x_4001_, 1);
lean_inc(v_snd_4003_);
lean_dec_ref(v___x_4001_);
v___x_4004_ = lean_st_ref_set(v___y_3994_, v_snd_4003_);
v___x_4005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4005_, 0, v_fst_4002_);
return v___x_4005_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed(lean_object* v_recFnNames_4006_, lean_object* v_e_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_){
_start:
{
lean_object* v_res_4014_; 
v_res_4014_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(v_recFnNames_4006_, v_e_4007_, v___y_4008_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_);
lean_dec(v___y_4012_);
lean_dec_ref(v___y_4011_);
lean_dec(v___y_4010_);
lean_dec_ref(v___y_4009_);
lean_dec(v___y_4008_);
lean_dec_ref(v_recFnNames_4006_);
return v_res_4014_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(size_t v_sz_4015_, size_t v_i_4016_, lean_object* v_bs_4017_){
_start:
{
uint8_t v___x_4018_; 
v___x_4018_ = lean_usize_dec_lt(v_i_4016_, v_sz_4015_);
if (v___x_4018_ == 0)
{
return v_bs_4017_;
}
else
{
lean_object* v_v_4019_; lean_object* v_fnName_4020_; lean_object* v___x_4021_; lean_object* v_bs_x27_4022_; size_t v___x_4023_; size_t v___x_4024_; lean_object* v___x_4025_; 
v_v_4019_ = lean_array_uget_borrowed(v_bs_4017_, v_i_4016_);
v_fnName_4020_ = lean_ctor_get(v_v_4019_, 0);
lean_inc(v_fnName_4020_);
v___x_4021_ = lean_unsigned_to_nat(0u);
v_bs_x27_4022_ = lean_array_uset(v_bs_4017_, v_i_4016_, v___x_4021_);
v___x_4023_ = ((size_t)1ULL);
v___x_4024_ = lean_usize_add(v_i_4016_, v___x_4023_);
v___x_4025_ = lean_array_uset(v_bs_x27_4022_, v_i_4016_, v_fnName_4020_);
v_i_4016_ = v___x_4024_;
v_bs_4017_ = v___x_4025_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0___boxed(lean_object* v_sz_4027_, lean_object* v_i_4028_, lean_object* v_bs_4029_){
_start:
{
size_t v_sz_boxed_4030_; size_t v_i_boxed_4031_; lean_object* v_res_4032_; 
v_sz_boxed_4030_ = lean_unbox_usize(v_sz_4027_);
lean_dec(v_sz_4027_);
v_i_boxed_4031_ = lean_unbox_usize(v_i_4028_);
lean_dec(v_i_4028_);
v_res_4032_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(v_sz_boxed_4030_, v_i_boxed_4031_, v_bs_4029_);
return v_res_4032_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0(void){
_start:
{
lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; 
v___x_4033_ = lean_box(0);
v___x_4034_ = lean_unsigned_to_nat(16u);
v___x_4035_ = lean_mk_array(v___x_4034_, v___x_4033_);
return v___x_4035_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1(void){
_start:
{
lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4036_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0);
v___x_4037_ = lean_unsigned_to_nat(0u);
v___x_4038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4038_, 0, v___x_4037_);
lean_ctor_set(v___x_4038_, 1, v___x_4036_);
return v___x_4038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(lean_object* v_recArgInfos_4039_, lean_object* v_positions_4040_, lean_object* v_below_4041_, lean_object* v_e_4042_, lean_object* v_a_4043_, lean_object* v_a_4044_, lean_object* v_a_4045_, lean_object* v_a_4046_){
_start:
{
lean_object* v___x_4048_; lean_object* v___x_4049_; size_t v_sz_4050_; size_t v___x_4051_; lean_object* v_recFnNames_4052_; lean_object* v_containsRecFn_4053_; lean_object* v___x_4054_; 
v___x_4048_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1);
v___x_4049_ = lean_st_mk_ref(v___x_4048_);
v_sz_4050_ = lean_array_size(v_recArgInfos_4039_);
v___x_4051_ = ((size_t)0ULL);
lean_inc_ref(v_recArgInfos_4039_);
v_recFnNames_4052_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(v_sz_4050_, v___x_4051_, v_recArgInfos_4039_);
lean_inc_ref(v_recFnNames_4052_);
v_containsRecFn_4053_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed), 8, 1);
lean_closure_set(v_containsRecFn_4053_, 0, v_recFnNames_4052_);
lean_inc(v___x_4049_);
v___x_4054_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_4039_, v_positions_4040_, v_recFnNames_4052_, v_containsRecFn_4053_, v_below_4041_, v_e_4042_, v___x_4049_, v_a_4043_, v_a_4044_, v_a_4045_, v_a_4046_);
if (lean_obj_tag(v___x_4054_) == 0)
{
lean_object* v_a_4055_; lean_object* v___x_4057_; uint8_t v_isShared_4058_; uint8_t v_isSharedCheck_4063_; 
v_a_4055_ = lean_ctor_get(v___x_4054_, 0);
v_isSharedCheck_4063_ = !lean_is_exclusive(v___x_4054_);
if (v_isSharedCheck_4063_ == 0)
{
v___x_4057_ = v___x_4054_;
v_isShared_4058_ = v_isSharedCheck_4063_;
goto v_resetjp_4056_;
}
else
{
lean_inc(v_a_4055_);
lean_dec(v___x_4054_);
v___x_4057_ = lean_box(0);
v_isShared_4058_ = v_isSharedCheck_4063_;
goto v_resetjp_4056_;
}
v_resetjp_4056_:
{
lean_object* v___x_4059_; lean_object* v___x_4061_; 
v___x_4059_ = lean_st_ref_get(v___x_4049_);
lean_dec(v___x_4049_);
lean_dec(v___x_4059_);
if (v_isShared_4058_ == 0)
{
v___x_4061_ = v___x_4057_;
goto v_reusejp_4060_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v_a_4055_);
v___x_4061_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4060_;
}
v_reusejp_4060_:
{
return v___x_4061_;
}
}
}
else
{
lean_dec(v___x_4049_);
return v___x_4054_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___boxed(lean_object* v_recArgInfos_4064_, lean_object* v_positions_4065_, lean_object* v_below_4066_, lean_object* v_e_4067_, lean_object* v_a_4068_, lean_object* v_a_4069_, lean_object* v_a_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(v_recArgInfos_4064_, v_positions_4065_, v_below_4066_, v_e_4067_, v_a_4068_, v_a_4069_, v_a_4070_, v_a_4071_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(lean_object* v_e_4074_, lean_object* v_k_4075_, uint8_t v_cleanupAnnotations_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_){
_start:
{
lean_object* v___f_4082_; uint8_t v___x_4083_; uint8_t v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; 
v___f_4082_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4082_, 0, v_k_4075_);
v___x_4083_ = 1;
v___x_4084_ = 0;
v___x_4085_ = lean_box(0);
v___x_4086_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4074_, v___x_4083_, v___x_4084_, v___x_4083_, v___x_4084_, v___x_4085_, v___f_4082_, v_cleanupAnnotations_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_);
if (lean_obj_tag(v___x_4086_) == 0)
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4094_; 
v_a_4087_ = lean_ctor_get(v___x_4086_, 0);
v_isSharedCheck_4094_ = !lean_is_exclusive(v___x_4086_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4089_ = v___x_4086_;
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v___x_4086_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4092_; 
if (v_isShared_4090_ == 0)
{
v___x_4092_ = v___x_4089_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v_a_4087_);
v___x_4092_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
return v___x_4092_;
}
}
}
else
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4102_; 
v_a_4095_ = lean_ctor_get(v___x_4086_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v___x_4086_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4097_ = v___x_4086_;
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v___x_4086_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4100_; 
if (v_isShared_4098_ == 0)
{
v___x_4100_ = v___x_4097_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4095_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
return v___x_4100_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg___boxed(lean_object* v_e_4103_, lean_object* v_k_4104_, lean_object* v_cleanupAnnotations_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4111_; lean_object* v_res_4112_; 
v_cleanupAnnotations_boxed_4111_ = lean_unbox(v_cleanupAnnotations_4105_);
v_res_4112_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_e_4103_, v_k_4104_, v_cleanupAnnotations_boxed_4111_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
return v_res_4112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(lean_object* v_00_u03b1_4113_, lean_object* v_e_4114_, lean_object* v_k_4115_, uint8_t v_cleanupAnnotations_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_){
_start:
{
lean_object* v___x_4122_; 
v___x_4122_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_e_4114_, v_k_4115_, v_cleanupAnnotations_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
return v___x_4122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___boxed(lean_object* v_00_u03b1_4123_, lean_object* v_e_4124_, lean_object* v_k_4125_, lean_object* v_cleanupAnnotations_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4132_; lean_object* v_res_4133_; 
v_cleanupAnnotations_boxed_4132_ = lean_unbox(v_cleanupAnnotations_4126_);
v_res_4133_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(v_00_u03b1_4123_, v_e_4124_, v_k_4125_, v_cleanupAnnotations_boxed_4132_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_);
return v_res_4133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(lean_object* v_type_4134_, lean_object* v_recArgInfo_4135_, lean_object* v_xs_4136_, lean_object* v___value_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_){
_start:
{
lean_object* v___x_4143_; 
lean_inc(v___y_4141_);
lean_inc_ref(v___y_4140_);
lean_inc(v___y_4139_);
lean_inc_ref(v___y_4138_);
v___x_4143_ = l_Lean_Meta_instantiateForall(v_type_4134_, v_xs_4136_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_);
if (lean_obj_tag(v___x_4143_) == 0)
{
lean_object* v_a_4144_; lean_object* v___x_4145_; lean_object* v_fst_4146_; lean_object* v_snd_4147_; uint8_t v___x_4148_; uint8_t v___x_4149_; uint8_t v___x_4150_; lean_object* v___x_4151_; 
v_a_4144_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_a_4144_);
lean_dec_ref(v___x_4143_);
v___x_4145_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_4135_, v_xs_4136_);
v_fst_4146_ = lean_ctor_get(v___x_4145_, 0);
lean_inc(v_fst_4146_);
v_snd_4147_ = lean_ctor_get(v___x_4145_, 1);
lean_inc(v_snd_4147_);
lean_dec_ref(v___x_4145_);
v___x_4148_ = 0;
v___x_4149_ = 1;
v___x_4150_ = 1;
v___x_4151_ = l_Lean_Meta_mkForallFVars(v_snd_4147_, v_a_4144_, v___x_4148_, v___x_4149_, v___x_4149_, v___x_4150_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_);
lean_dec(v_snd_4147_);
if (lean_obj_tag(v___x_4151_) == 0)
{
lean_object* v_a_4152_; lean_object* v___x_4153_; 
v_a_4152_ = lean_ctor_get(v___x_4151_, 0);
lean_inc(v_a_4152_);
lean_dec_ref(v___x_4151_);
v___x_4153_ = l_Lean_Meta_mkLambdaFVars(v_fst_4146_, v_a_4152_, v___x_4148_, v___x_4149_, v___x_4148_, v___x_4149_, v___x_4150_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_);
lean_dec(v___y_4141_);
lean_dec_ref(v___y_4140_);
lean_dec(v___y_4139_);
lean_dec_ref(v___y_4138_);
lean_dec(v_fst_4146_);
return v___x_4153_;
}
else
{
lean_dec(v_fst_4146_);
lean_dec(v___y_4141_);
lean_dec_ref(v___y_4140_);
lean_dec(v___y_4139_);
lean_dec_ref(v___y_4138_);
return v___x_4151_;
}
}
else
{
lean_dec(v___y_4141_);
lean_dec_ref(v___y_4140_);
lean_dec(v___y_4139_);
lean_dec_ref(v___y_4138_);
lean_dec_ref(v_xs_4136_);
lean_dec_ref(v_recArgInfo_4135_);
return v___x_4143_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed(lean_object* v_type_4154_, lean_object* v_recArgInfo_4155_, lean_object* v_xs_4156_, lean_object* v___value_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_){
_start:
{
lean_object* v_res_4163_; 
v_res_4163_ = l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(v_type_4154_, v_recArgInfo_4155_, v_xs_4156_, v___value_4157_, v___y_4158_, v___y_4159_, v___y_4160_, v___y_4161_);
lean_dec_ref(v___value_4157_);
return v_res_4163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive(lean_object* v_recArgInfo_4164_, lean_object* v_value_4165_, lean_object* v_type_4166_, lean_object* v_a_4167_, lean_object* v_a_4168_, lean_object* v_a_4169_, lean_object* v_a_4170_){
_start:
{
lean_object* v___f_4172_; uint8_t v___x_4173_; lean_object* v___x_4174_; 
v___f_4172_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed), 9, 2);
lean_closure_set(v___f_4172_, 0, v_type_4166_);
lean_closure_set(v___f_4172_, 1, v_recArgInfo_4164_);
v___x_4173_ = 0;
v___x_4174_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_4165_, v___f_4172_, v___x_4173_, v_a_4167_, v_a_4168_, v_a_4169_, v_a_4170_);
return v___x_4174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___boxed(lean_object* v_recArgInfo_4175_, lean_object* v_value_4176_, lean_object* v_type_4177_, lean_object* v_a_4178_, lean_object* v_a_4179_, lean_object* v_a_4180_, lean_object* v_a_4181_, lean_object* v_a_4182_){
_start:
{
lean_object* v_res_4183_; 
v_res_4183_ = l_Lean_Elab_Structural_mkBRecOnMotive(v_recArgInfo_4175_, v_value_4176_, v_type_4177_, v_a_4178_, v_a_4179_, v_a_4180_, v_a_4181_);
return v_res_4183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(lean_object* v_type_4184_, lean_object* v_maxFVars_x3f_4185_, lean_object* v_k_4186_, uint8_t v_cleanupAnnotations_4187_, uint8_t v_whnfType_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_){
_start:
{
lean_object* v___f_4194_; lean_object* v___x_4195_; 
v___f_4194_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4194_, 0, v_k_4186_);
v___x_4195_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4184_, v_maxFVars_x3f_4185_, v___f_4194_, v_cleanupAnnotations_4187_, v_whnfType_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_);
if (lean_obj_tag(v___x_4195_) == 0)
{
lean_object* v_a_4196_; lean_object* v___x_4198_; uint8_t v_isShared_4199_; uint8_t v_isSharedCheck_4203_; 
v_a_4196_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4203_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4203_ == 0)
{
v___x_4198_ = v___x_4195_;
v_isShared_4199_ = v_isSharedCheck_4203_;
goto v_resetjp_4197_;
}
else
{
lean_inc(v_a_4196_);
lean_dec(v___x_4195_);
v___x_4198_ = lean_box(0);
v_isShared_4199_ = v_isSharedCheck_4203_;
goto v_resetjp_4197_;
}
v_resetjp_4197_:
{
lean_object* v___x_4201_; 
if (v_isShared_4199_ == 0)
{
v___x_4201_ = v___x_4198_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v_a_4196_);
v___x_4201_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
return v___x_4201_;
}
}
}
else
{
lean_object* v_a_4204_; lean_object* v___x_4206_; uint8_t v_isShared_4207_; uint8_t v_isSharedCheck_4211_; 
v_a_4204_ = lean_ctor_get(v___x_4195_, 0);
v_isSharedCheck_4211_ = !lean_is_exclusive(v___x_4195_);
if (v_isSharedCheck_4211_ == 0)
{
v___x_4206_ = v___x_4195_;
v_isShared_4207_ = v_isSharedCheck_4211_;
goto v_resetjp_4205_;
}
else
{
lean_inc(v_a_4204_);
lean_dec(v___x_4195_);
v___x_4206_ = lean_box(0);
v_isShared_4207_ = v_isSharedCheck_4211_;
goto v_resetjp_4205_;
}
v_resetjp_4205_:
{
lean_object* v___x_4209_; 
if (v_isShared_4207_ == 0)
{
v___x_4209_ = v___x_4206_;
goto v_reusejp_4208_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v_a_4204_);
v___x_4209_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4208_;
}
v_reusejp_4208_:
{
return v___x_4209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg___boxed(lean_object* v_type_4212_, lean_object* v_maxFVars_x3f_4213_, lean_object* v_k_4214_, lean_object* v_cleanupAnnotations_4215_, lean_object* v_whnfType_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4222_; uint8_t v_whnfType_boxed_4223_; lean_object* v_res_4224_; 
v_cleanupAnnotations_boxed_4222_ = lean_unbox(v_cleanupAnnotations_4215_);
v_whnfType_boxed_4223_ = lean_unbox(v_whnfType_4216_);
v_res_4224_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_type_4212_, v_maxFVars_x3f_4213_, v_k_4214_, v_cleanupAnnotations_boxed_4222_, v_whnfType_boxed_4223_, v___y_4217_, v___y_4218_, v___y_4219_, v___y_4220_);
return v_res_4224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(lean_object* v_00_u03b1_4225_, lean_object* v_type_4226_, lean_object* v_maxFVars_x3f_4227_, lean_object* v_k_4228_, uint8_t v_cleanupAnnotations_4229_, uint8_t v_whnfType_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v___x_4236_; 
v___x_4236_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_type_4226_, v_maxFVars_x3f_4227_, v_k_4228_, v_cleanupAnnotations_4229_, v_whnfType_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
return v___x_4236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___boxed(lean_object* v_00_u03b1_4237_, lean_object* v_type_4238_, lean_object* v_maxFVars_x3f_4239_, lean_object* v_k_4240_, lean_object* v_cleanupAnnotations_4241_, lean_object* v_whnfType_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4248_; uint8_t v_whnfType_boxed_4249_; lean_object* v_res_4250_; 
v_cleanupAnnotations_boxed_4248_ = lean_unbox(v_cleanupAnnotations_4241_);
v_whnfType_boxed_4249_ = lean_unbox(v_whnfType_4242_);
v_res_4250_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(v_00_u03b1_4237_, v_type_4238_, v_maxFVars_x3f_4239_, v_k_4240_, v_cleanupAnnotations_boxed_4248_, v_whnfType_boxed_4249_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_);
return v_res_4250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0(lean_object* v___x_4251_, lean_object* v_recArgInfos_4252_, lean_object* v_positions_4253_, lean_object* v_value_4254_, lean_object* v_fst_4255_, lean_object* v_snd_4256_, lean_object* v_below_4257_, lean_object* v_x_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_){
_start:
{
lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; 
v___x_4264_ = lean_unsigned_to_nat(0u);
v___x_4265_ = lean_array_get_borrowed(v___x_4251_, v_below_4257_, v___x_4264_);
lean_inc(v___y_4262_);
lean_inc_ref(v___y_4261_);
lean_inc(v___y_4260_);
lean_inc_ref(v___y_4259_);
lean_inc(v___x_4265_);
v___x_4266_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(v_recArgInfos_4252_, v_positions_4253_, v___x_4265_, v_value_4254_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_);
if (lean_obj_tag(v___x_4266_) == 0)
{
lean_object* v_a_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; uint8_t v___x_4273_; uint8_t v___x_4274_; uint8_t v___x_4275_; lean_object* v___x_4276_; 
v_a_4267_ = lean_ctor_get(v___x_4266_, 0);
lean_inc(v_a_4267_);
lean_dec_ref(v___x_4266_);
v___x_4268_ = lean_unsigned_to_nat(1u);
v___x_4269_ = lean_mk_empty_array_with_capacity(v___x_4268_);
lean_inc(v___x_4265_);
v___x_4270_ = lean_array_push(v___x_4269_, v___x_4265_);
v___x_4271_ = l_Array_append___redArg(v_fst_4255_, v___x_4270_);
lean_dec_ref(v___x_4270_);
v___x_4272_ = l_Array_append___redArg(v___x_4271_, v_snd_4256_);
v___x_4273_ = 0;
v___x_4274_ = 1;
v___x_4275_ = 1;
v___x_4276_ = l_Lean_Meta_mkLambdaFVars(v___x_4272_, v_a_4267_, v___x_4273_, v___x_4274_, v___x_4273_, v___x_4274_, v___x_4275_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_);
lean_dec(v___y_4262_);
lean_dec_ref(v___y_4261_);
lean_dec(v___y_4260_);
lean_dec_ref(v___y_4259_);
lean_dec_ref(v___x_4272_);
return v___x_4276_;
}
else
{
lean_dec(v___y_4262_);
lean_dec_ref(v___y_4261_);
lean_dec(v___y_4260_);
lean_dec_ref(v___y_4259_);
lean_dec_ref(v_fst_4255_);
return v___x_4266_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed(lean_object* v___x_4277_, lean_object* v_recArgInfos_4278_, lean_object* v_positions_4279_, lean_object* v_value_4280_, lean_object* v_fst_4281_, lean_object* v_snd_4282_, lean_object* v_below_4283_, lean_object* v_x_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_){
_start:
{
lean_object* v_res_4290_; 
v_res_4290_ = l_Lean_Elab_Structural_mkBRecOnF___lam__0(v___x_4277_, v_recArgInfos_4278_, v_positions_4279_, v_value_4280_, v_fst_4281_, v_snd_4282_, v_below_4283_, v_x_4284_, v___y_4285_, v___y_4286_, v___y_4287_, v___y_4288_);
lean_dec_ref(v_x_4284_);
lean_dec_ref(v_below_4283_);
lean_dec_ref(v_snd_4282_);
return v_res_4290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1(lean_object* v_recArgInfo_4293_, lean_object* v_FType_4294_, lean_object* v___x_4295_, lean_object* v_recArgInfos_4296_, lean_object* v_positions_4297_, lean_object* v_xs_4298_, lean_object* v_value_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_){
_start:
{
lean_object* v___x_4305_; lean_object* v_fst_4306_; lean_object* v_snd_4307_; lean_object* v___x_4308_; 
v___x_4305_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_4293_, v_xs_4298_);
v_fst_4306_ = lean_ctor_get(v___x_4305_, 0);
lean_inc(v_fst_4306_);
v_snd_4307_ = lean_ctor_get(v___x_4305_, 1);
lean_inc(v_snd_4307_);
lean_dec_ref(v___x_4305_);
lean_inc(v___y_4303_);
lean_inc_ref(v___y_4302_);
lean_inc(v___y_4301_);
lean_inc_ref(v___y_4300_);
v___x_4308_ = l_Lean_Meta_instantiateForall(v_FType_4294_, v_fst_4306_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_);
if (lean_obj_tag(v___x_4308_) == 0)
{
lean_object* v_a_4309_; lean_object* v___f_4310_; lean_object* v___x_4311_; uint8_t v___x_4312_; lean_object* v___x_4313_; 
v_a_4309_ = lean_ctor_get(v___x_4308_, 0);
lean_inc(v_a_4309_);
lean_dec_ref(v___x_4308_);
v___f_4310_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed), 13, 6);
lean_closure_set(v___f_4310_, 0, v___x_4295_);
lean_closure_set(v___f_4310_, 1, v_recArgInfos_4296_);
lean_closure_set(v___f_4310_, 2, v_positions_4297_);
lean_closure_set(v___f_4310_, 3, v_value_4299_);
lean_closure_set(v___f_4310_, 4, v_fst_4306_);
lean_closure_set(v___f_4310_, 5, v_snd_4307_);
v___x_4311_ = ((lean_object*)(l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0));
v___x_4312_ = 0;
v___x_4313_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_a_4309_, v___x_4311_, v___f_4310_, v___x_4312_, v___x_4312_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_);
return v___x_4313_;
}
else
{
lean_dec(v_snd_4307_);
lean_dec(v_fst_4306_);
lean_dec(v___y_4303_);
lean_dec_ref(v___y_4302_);
lean_dec(v___y_4301_);
lean_dec_ref(v___y_4300_);
lean_dec_ref(v_value_4299_);
lean_dec_ref(v_positions_4297_);
lean_dec_ref(v_recArgInfos_4296_);
lean_dec_ref(v___x_4295_);
return v___x_4308_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed(lean_object* v_recArgInfo_4314_, lean_object* v_FType_4315_, lean_object* v___x_4316_, lean_object* v_recArgInfos_4317_, lean_object* v_positions_4318_, lean_object* v_xs_4319_, lean_object* v_value_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_){
_start:
{
lean_object* v_res_4326_; 
v_res_4326_ = l_Lean_Elab_Structural_mkBRecOnF___lam__1(v_recArgInfo_4314_, v_FType_4315_, v___x_4316_, v_recArgInfos_4317_, v_positions_4318_, v_xs_4319_, v_value_4320_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_);
return v_res_4326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF(lean_object* v_recArgInfos_4327_, lean_object* v_positions_4328_, lean_object* v_recArgInfo_4329_, lean_object* v_value_4330_, lean_object* v_FType_4331_, lean_object* v_a_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_, lean_object* v_a_4335_){
_start:
{
lean_object* v___x_4337_; lean_object* v___f_4338_; uint8_t v___x_4339_; lean_object* v___x_4340_; 
v___x_4337_ = l_Lean_instInhabitedExpr;
v___f_4338_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed), 12, 5);
lean_closure_set(v___f_4338_, 0, v_recArgInfo_4329_);
lean_closure_set(v___f_4338_, 1, v_FType_4331_);
lean_closure_set(v___f_4338_, 2, v___x_4337_);
lean_closure_set(v___f_4338_, 3, v_recArgInfos_4327_);
lean_closure_set(v___f_4338_, 4, v_positions_4328_);
v___x_4339_ = 0;
v___x_4340_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_4330_, v___f_4338_, v___x_4339_, v_a_4332_, v_a_4333_, v_a_4334_, v_a_4335_);
return v___x_4340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___boxed(lean_object* v_recArgInfos_4341_, lean_object* v_positions_4342_, lean_object* v_recArgInfo_4343_, lean_object* v_value_4344_, lean_object* v_FType_4345_, lean_object* v_a_4346_, lean_object* v_a_4347_, lean_object* v_a_4348_, lean_object* v_a_4349_, lean_object* v_a_4350_){
_start:
{
lean_object* v_res_4351_; 
v_res_4351_ = l_Lean_Elab_Structural_mkBRecOnF(v_recArgInfos_4341_, v_positions_4342_, v_recArgInfo_4343_, v_value_4344_, v_FType_4345_, v_a_4346_, v_a_4347_, v_a_4348_, v_a_4349_);
return v_res_4351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0(lean_object* v_toIndGroupInfo_4352_, lean_object* v_params_4353_, uint8_t v_isIndPred_4354_, lean_object* v_brecOnUniv_4355_, lean_object* v_levels_4356_, lean_object* v_idx_4357_){
_start:
{
lean_object* v_n_4358_; lean_object* v___y_4360_; 
v_n_4358_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_toIndGroupInfo_4352_, v_idx_4357_);
if (v_isIndPred_4354_ == 0)
{
lean_object* v___x_4363_; 
v___x_4363_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4363_, 0, v_brecOnUniv_4355_);
lean_ctor_set(v___x_4363_, 1, v_levels_4356_);
v___y_4360_ = v___x_4363_;
goto v___jp_4359_;
}
else
{
lean_dec(v_brecOnUniv_4355_);
v___y_4360_ = v_levels_4356_;
goto v___jp_4359_;
}
v___jp_4359_:
{
lean_object* v___x_4361_; lean_object* v___x_4362_; 
v___x_4361_ = l_Lean_Expr_const___override(v_n_4358_, v___y_4360_);
v___x_4362_ = l_Lean_mkAppN(v___x_4361_, v_params_4353_);
return v___x_4362_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed(lean_object* v_toIndGroupInfo_4364_, lean_object* v_params_4365_, lean_object* v_isIndPred_4366_, lean_object* v_brecOnUniv_4367_, lean_object* v_levels_4368_, lean_object* v_idx_4369_){
_start:
{
uint8_t v_isIndPred_boxed_4370_; lean_object* v_res_4371_; 
v_isIndPred_boxed_4370_ = lean_unbox(v_isIndPred_4366_);
v_res_4371_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__0(v_toIndGroupInfo_4364_, v_params_4365_, v_isIndPred_boxed_4370_, v_brecOnUniv_4367_, v_levels_4368_, v_idx_4369_);
lean_dec(v_idx_4369_);
lean_dec_ref(v_params_4365_);
lean_dec_ref(v_toIndGroupInfo_4364_);
return v_res_4371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1(lean_object* v_brecOnCons_4372_, lean_object* v_a_4373_, lean_object* v_n_4374_){
_start:
{
lean_object* v___x_4375_; lean_object* v___x_4376_; 
v___x_4375_ = lean_apply_1(v_brecOnCons_4372_, v_n_4374_);
v___x_4376_ = l_Lean_mkAppN(v___x_4375_, v_a_4373_);
return v___x_4376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed(lean_object* v_brecOnCons_4377_, lean_object* v_a_4378_, lean_object* v_n_4379_){
_start:
{
lean_object* v_res_4380_; 
v_res_4380_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__1(v_brecOnCons_4377_, v_a_4378_, v_n_4379_);
lean_dec_ref(v_a_4378_);
return v_res_4380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2(lean_object* v_x_4381_, lean_object* v_type_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_){
_start:
{
lean_object* v___x_4388_; 
v___x_4388_ = l_Lean_Meta_getLevel(v_type_4382_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_);
return v___x_4388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2___boxed(lean_object* v_x_4389_, lean_object* v_type_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_){
_start:
{
lean_object* v_res_4396_; 
v_res_4396_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__2(v_x_4389_, v_type_4390_, v___y_4391_, v___y_4392_, v___y_4393_, v___y_4394_);
lean_dec_ref(v_x_4389_);
return v_res_4396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg(lean_object* v_inst_4397_, lean_object* v_xs_4398_, size_t v_sz_4399_, size_t v_i_4400_, lean_object* v_bs_4401_){
_start:
{
uint8_t v___x_4402_; 
v___x_4402_ = lean_usize_dec_lt(v_i_4400_, v_sz_4399_);
if (v___x_4402_ == 0)
{
lean_dec(v_inst_4397_);
return v_bs_4401_;
}
else
{
lean_object* v_v_4403_; lean_object* v___x_4404_; lean_object* v_bs_x27_4405_; lean_object* v___x_4406_; size_t v___x_4407_; size_t v___x_4408_; lean_object* v___x_4409_; 
v_v_4403_ = lean_array_uget(v_bs_4401_, v_i_4400_);
v___x_4404_ = lean_unsigned_to_nat(0u);
v_bs_x27_4405_ = lean_array_uset(v_bs_4401_, v_i_4400_, v___x_4404_);
lean_inc(v_inst_4397_);
v___x_4406_ = lean_array_get_borrowed(v_inst_4397_, v_xs_4398_, v_v_4403_);
lean_dec(v_v_4403_);
v___x_4407_ = ((size_t)1ULL);
v___x_4408_ = lean_usize_add(v_i_4400_, v___x_4407_);
lean_inc(v___x_4406_);
v___x_4409_ = lean_array_uset(v_bs_x27_4405_, v_i_4400_, v___x_4406_);
v_i_4400_ = v___x_4408_;
v_bs_4401_ = v___x_4409_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg___boxed(lean_object* v_inst_4411_, lean_object* v_xs_4412_, lean_object* v_sz_4413_, lean_object* v_i_4414_, lean_object* v_bs_4415_){
_start:
{
size_t v_sz_boxed_4416_; size_t v_i_boxed_4417_; lean_object* v_res_4418_; 
v_sz_boxed_4416_ = lean_unbox_usize(v_sz_4413_);
lean_dec(v_sz_4413_);
v_i_boxed_4417_ = lean_unbox_usize(v_i_4414_);
lean_dec(v_i_4414_);
v_res_4418_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg(v_inst_4411_, v_xs_4412_, v_sz_boxed_4416_, v_i_boxed_4417_, v_bs_4415_);
lean_dec_ref(v_xs_4412_);
return v_res_4418_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(lean_object* v_inst_4419_, lean_object* v_xs_4420_, lean_object* v_f_4421_, lean_object* v_as_4422_, lean_object* v_bs_4423_, lean_object* v_i_4424_, lean_object* v_cs_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_){
_start:
{
lean_object* v___x_4431_; uint8_t v___x_4432_; 
v___x_4431_ = lean_array_get_size(v_as_4422_);
v___x_4432_ = lean_nat_dec_lt(v_i_4424_, v___x_4431_);
if (v___x_4432_ == 0)
{
lean_object* v___x_4433_; 
lean_dec(v___y_4429_);
lean_dec_ref(v___y_4428_);
lean_dec(v___y_4427_);
lean_dec_ref(v___y_4426_);
lean_dec(v_i_4424_);
lean_dec_ref(v_f_4421_);
lean_dec(v_inst_4419_);
v___x_4433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4433_, 0, v_cs_4425_);
return v___x_4433_;
}
else
{
lean_object* v___x_4434_; uint8_t v___x_4435_; 
v___x_4434_ = lean_array_get_size(v_bs_4423_);
v___x_4435_ = lean_nat_dec_lt(v_i_4424_, v___x_4434_);
if (v___x_4435_ == 0)
{
lean_object* v___x_4436_; 
lean_dec(v___y_4429_);
lean_dec_ref(v___y_4428_);
lean_dec(v___y_4427_);
lean_dec_ref(v___y_4426_);
lean_dec(v_i_4424_);
lean_dec_ref(v_f_4421_);
lean_dec(v_inst_4419_);
v___x_4436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4436_, 0, v_cs_4425_);
return v___x_4436_;
}
else
{
lean_object* v_a_4437_; lean_object* v_b_4438_; size_t v_sz_4439_; size_t v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; 
v_a_4437_ = lean_array_fget_borrowed(v_as_4422_, v_i_4424_);
v_b_4438_ = lean_array_fget_borrowed(v_bs_4423_, v_i_4424_);
v_sz_4439_ = lean_array_size(v_b_4438_);
v___x_4440_ = ((size_t)0ULL);
lean_inc(v_b_4438_);
lean_inc(v_inst_4419_);
v___x_4441_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg(v_inst_4419_, v_xs_4420_, v_sz_4439_, v___x_4440_, v_b_4438_);
lean_inc_ref(v_f_4421_);
lean_inc(v___y_4429_);
lean_inc_ref(v___y_4428_);
lean_inc(v___y_4427_);
lean_inc_ref(v___y_4426_);
lean_inc(v_a_4437_);
v___x_4442_ = lean_apply_7(v_f_4421_, v_a_4437_, v___x_4441_, v___y_4426_, v___y_4427_, v___y_4428_, v___y_4429_, lean_box(0));
if (lean_obj_tag(v___x_4442_) == 0)
{
lean_object* v_a_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; 
v_a_4443_ = lean_ctor_get(v___x_4442_, 0);
lean_inc(v_a_4443_);
lean_dec_ref(v___x_4442_);
v___x_4444_ = lean_unsigned_to_nat(1u);
v___x_4445_ = lean_nat_add(v_i_4424_, v___x_4444_);
lean_dec(v_i_4424_);
v___x_4446_ = lean_array_push(v_cs_4425_, v_a_4443_);
v_i_4424_ = v___x_4445_;
v_cs_4425_ = v___x_4446_;
goto _start;
}
else
{
lean_object* v_a_4448_; lean_object* v___x_4450_; uint8_t v_isShared_4451_; uint8_t v_isSharedCheck_4455_; 
lean_dec(v___y_4429_);
lean_dec_ref(v___y_4428_);
lean_dec(v___y_4427_);
lean_dec_ref(v___y_4426_);
lean_dec_ref(v_cs_4425_);
lean_dec(v_i_4424_);
lean_dec_ref(v_f_4421_);
lean_dec(v_inst_4419_);
v_a_4448_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4455_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4450_ = v___x_4442_;
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
else
{
lean_inc(v_a_4448_);
lean_dec(v___x_4442_);
v___x_4450_ = lean_box(0);
v_isShared_4451_ = v_isSharedCheck_4455_;
goto v_resetjp_4449_;
}
v_resetjp_4449_:
{
lean_object* v___x_4453_; 
if (v_isShared_4451_ == 0)
{
v___x_4453_ = v___x_4450_;
goto v_reusejp_4452_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_a_4448_);
v___x_4453_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4452_;
}
v_reusejp_4452_:
{
return v___x_4453_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg___boxed(lean_object* v_inst_4456_, lean_object* v_xs_4457_, lean_object* v_f_4458_, lean_object* v_as_4459_, lean_object* v_bs_4460_, lean_object* v_i_4461_, lean_object* v_cs_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_){
_start:
{
lean_object* v_res_4468_; 
v_res_4468_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_inst_4456_, v_xs_4457_, v_f_4458_, v_as_4459_, v_bs_4460_, v_i_4461_, v_cs_4462_, v___y_4463_, v___y_4464_, v___y_4465_, v___y_4466_);
lean_dec_ref(v_bs_4460_);
lean_dec_ref(v_as_4459_);
lean_dec_ref(v_xs_4457_);
return v_res_4468_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_4469_; 
v___x_4469_ = l_Array_instInhabited(lean_box(0));
return v___x_4469_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(lean_object* v_msg_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_){
_start:
{
lean_object* v___x_4476_; lean_object* v_toApplicative_4477_; lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4538_; 
v___x_4476_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_4477_ = lean_ctor_get(v___x_4476_, 0);
v_isSharedCheck_4538_ = !lean_is_exclusive(v___x_4476_);
if (v_isSharedCheck_4538_ == 0)
{
lean_object* v_unused_4539_; 
v_unused_4539_ = lean_ctor_get(v___x_4476_, 1);
lean_dec(v_unused_4539_);
v___x_4479_ = v___x_4476_;
v_isShared_4480_ = v_isSharedCheck_4538_;
goto v_resetjp_4478_;
}
else
{
lean_inc(v_toApplicative_4477_);
lean_dec(v___x_4476_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4538_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v_toFunctor_4481_; lean_object* v_toSeq_4482_; lean_object* v_toSeqLeft_4483_; lean_object* v_toSeqRight_4484_; lean_object* v___x_4486_; uint8_t v_isShared_4487_; uint8_t v_isSharedCheck_4536_; 
v_toFunctor_4481_ = lean_ctor_get(v_toApplicative_4477_, 0);
v_toSeq_4482_ = lean_ctor_get(v_toApplicative_4477_, 2);
v_toSeqLeft_4483_ = lean_ctor_get(v_toApplicative_4477_, 3);
v_toSeqRight_4484_ = lean_ctor_get(v_toApplicative_4477_, 4);
v_isSharedCheck_4536_ = !lean_is_exclusive(v_toApplicative_4477_);
if (v_isSharedCheck_4536_ == 0)
{
lean_object* v_unused_4537_; 
v_unused_4537_ = lean_ctor_get(v_toApplicative_4477_, 1);
lean_dec(v_unused_4537_);
v___x_4486_ = v_toApplicative_4477_;
v_isShared_4487_ = v_isSharedCheck_4536_;
goto v_resetjp_4485_;
}
else
{
lean_inc(v_toSeqRight_4484_);
lean_inc(v_toSeqLeft_4483_);
lean_inc(v_toSeq_4482_);
lean_inc(v_toFunctor_4481_);
lean_dec(v_toApplicative_4477_);
v___x_4486_ = lean_box(0);
v_isShared_4487_ = v_isSharedCheck_4536_;
goto v_resetjp_4485_;
}
v_resetjp_4485_:
{
lean_object* v___f_4488_; lean_object* v___f_4489_; lean_object* v___f_4490_; lean_object* v___f_4491_; lean_object* v___x_4492_; lean_object* v___f_4493_; lean_object* v___f_4494_; lean_object* v___f_4495_; lean_object* v___x_4497_; 
v___f_4488_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2));
v___f_4489_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3));
lean_inc_ref(v_toFunctor_4481_);
v___f_4490_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4490_, 0, v_toFunctor_4481_);
v___f_4491_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4491_, 0, v_toFunctor_4481_);
v___x_4492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4492_, 0, v___f_4490_);
lean_ctor_set(v___x_4492_, 1, v___f_4491_);
v___f_4493_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4493_, 0, v_toSeqRight_4484_);
v___f_4494_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4494_, 0, v_toSeqLeft_4483_);
v___f_4495_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4495_, 0, v_toSeq_4482_);
if (v_isShared_4487_ == 0)
{
lean_ctor_set(v___x_4486_, 4, v___f_4493_);
lean_ctor_set(v___x_4486_, 3, v___f_4494_);
lean_ctor_set(v___x_4486_, 2, v___f_4495_);
lean_ctor_set(v___x_4486_, 1, v___f_4488_);
lean_ctor_set(v___x_4486_, 0, v___x_4492_);
v___x_4497_ = v___x_4486_;
goto v_reusejp_4496_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v___x_4492_);
lean_ctor_set(v_reuseFailAlloc_4535_, 1, v___f_4488_);
lean_ctor_set(v_reuseFailAlloc_4535_, 2, v___f_4495_);
lean_ctor_set(v_reuseFailAlloc_4535_, 3, v___f_4494_);
lean_ctor_set(v_reuseFailAlloc_4535_, 4, v___f_4493_);
v___x_4497_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4496_;
}
v_reusejp_4496_:
{
lean_object* v___x_4499_; 
if (v_isShared_4480_ == 0)
{
lean_ctor_set(v___x_4479_, 1, v___f_4489_);
lean_ctor_set(v___x_4479_, 0, v___x_4497_);
v___x_4499_ = v___x_4479_;
goto v_reusejp_4498_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v___x_4497_);
lean_ctor_set(v_reuseFailAlloc_4534_, 1, v___f_4489_);
v___x_4499_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4498_;
}
v_reusejp_4498_:
{
lean_object* v___x_4500_; lean_object* v_toApplicative_4501_; lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4532_; 
v___x_4500_ = l_ReaderT_instMonad___redArg(v___x_4499_);
v_toApplicative_4501_ = lean_ctor_get(v___x_4500_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v___x_4500_);
if (v_isSharedCheck_4532_ == 0)
{
lean_object* v_unused_4533_; 
v_unused_4533_ = lean_ctor_get(v___x_4500_, 1);
lean_dec(v_unused_4533_);
v___x_4503_ = v___x_4500_;
v_isShared_4504_ = v_isSharedCheck_4532_;
goto v_resetjp_4502_;
}
else
{
lean_inc(v_toApplicative_4501_);
lean_dec(v___x_4500_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4532_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v_toFunctor_4505_; lean_object* v_toSeq_4506_; lean_object* v_toSeqLeft_4507_; lean_object* v_toSeqRight_4508_; lean_object* v___x_4510_; uint8_t v_isShared_4511_; uint8_t v_isSharedCheck_4530_; 
v_toFunctor_4505_ = lean_ctor_get(v_toApplicative_4501_, 0);
v_toSeq_4506_ = lean_ctor_get(v_toApplicative_4501_, 2);
v_toSeqLeft_4507_ = lean_ctor_get(v_toApplicative_4501_, 3);
v_toSeqRight_4508_ = lean_ctor_get(v_toApplicative_4501_, 4);
v_isSharedCheck_4530_ = !lean_is_exclusive(v_toApplicative_4501_);
if (v_isSharedCheck_4530_ == 0)
{
lean_object* v_unused_4531_; 
v_unused_4531_ = lean_ctor_get(v_toApplicative_4501_, 1);
lean_dec(v_unused_4531_);
v___x_4510_ = v_toApplicative_4501_;
v_isShared_4511_ = v_isSharedCheck_4530_;
goto v_resetjp_4509_;
}
else
{
lean_inc(v_toSeqRight_4508_);
lean_inc(v_toSeqLeft_4507_);
lean_inc(v_toSeq_4506_);
lean_inc(v_toFunctor_4505_);
lean_dec(v_toApplicative_4501_);
v___x_4510_ = lean_box(0);
v_isShared_4511_ = v_isSharedCheck_4530_;
goto v_resetjp_4509_;
}
v_resetjp_4509_:
{
lean_object* v___f_4512_; lean_object* v___f_4513_; lean_object* v___f_4514_; lean_object* v___f_4515_; lean_object* v___x_4516_; lean_object* v___f_4517_; lean_object* v___f_4518_; lean_object* v___f_4519_; lean_object* v___x_4521_; 
v___f_4512_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4));
v___f_4513_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5));
lean_inc_ref(v_toFunctor_4505_);
v___f_4514_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4514_, 0, v_toFunctor_4505_);
v___f_4515_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4515_, 0, v_toFunctor_4505_);
v___x_4516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4516_, 0, v___f_4514_);
lean_ctor_set(v___x_4516_, 1, v___f_4515_);
v___f_4517_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4517_, 0, v_toSeqRight_4508_);
v___f_4518_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4518_, 0, v_toSeqLeft_4507_);
v___f_4519_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4519_, 0, v_toSeq_4506_);
if (v_isShared_4511_ == 0)
{
lean_ctor_set(v___x_4510_, 4, v___f_4517_);
lean_ctor_set(v___x_4510_, 3, v___f_4518_);
lean_ctor_set(v___x_4510_, 2, v___f_4519_);
lean_ctor_set(v___x_4510_, 1, v___f_4512_);
lean_ctor_set(v___x_4510_, 0, v___x_4516_);
v___x_4521_ = v___x_4510_;
goto v_reusejp_4520_;
}
else
{
lean_object* v_reuseFailAlloc_4529_; 
v_reuseFailAlloc_4529_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4529_, 0, v___x_4516_);
lean_ctor_set(v_reuseFailAlloc_4529_, 1, v___f_4512_);
lean_ctor_set(v_reuseFailAlloc_4529_, 2, v___f_4519_);
lean_ctor_set(v_reuseFailAlloc_4529_, 3, v___f_4518_);
lean_ctor_set(v_reuseFailAlloc_4529_, 4, v___f_4517_);
v___x_4521_ = v_reuseFailAlloc_4529_;
goto v_reusejp_4520_;
}
v_reusejp_4520_:
{
lean_object* v___x_4523_; 
if (v_isShared_4504_ == 0)
{
lean_ctor_set(v___x_4503_, 1, v___f_4513_);
lean_ctor_set(v___x_4503_, 0, v___x_4521_);
v___x_4523_ = v___x_4503_;
goto v_reusejp_4522_;
}
else
{
lean_object* v_reuseFailAlloc_4528_; 
v_reuseFailAlloc_4528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4528_, 0, v___x_4521_);
lean_ctor_set(v_reuseFailAlloc_4528_, 1, v___f_4513_);
v___x_4523_ = v_reuseFailAlloc_4528_;
goto v_reusejp_4522_;
}
v_reusejp_4522_:
{
lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_1006__overap_4526_; lean_object* v___x_4527_; 
v___x_4524_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0, &l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0);
v___x_4525_ = l_instInhabitedOfMonad___redArg(v___x_4523_, v___x_4524_);
v___x_1006__overap_4526_ = lean_panic_fn(v___x_4525_, v_msg_4470_);
v___x_4527_ = lean_apply_5(v___x_1006__overap_4526_, v___y_4471_, v___y_4472_, v___y_4473_, v___y_4474_, lean_box(0));
return v___x_4527_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___boxed(lean_object* v_msg_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_){
_start:
{
lean_object* v_res_4546_; 
v_res_4546_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v_msg_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_);
return v_res_4546_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; 
v___x_4550_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2));
v___x_4551_ = lean_unsigned_to_nat(2u);
v___x_4552_ = lean_unsigned_to_nat(73u);
v___x_4553_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1));
v___x_4554_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0));
v___x_4555_ = l_mkPanicMessageWithDecl(v___x_4554_, v___x_4553_, v___x_4552_, v___x_4551_, v___x_4550_);
return v___x_4555_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; 
v___x_4557_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4));
v___x_4558_ = lean_unsigned_to_nat(2u);
v___x_4559_ = lean_unsigned_to_nat(74u);
v___x_4560_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1));
v___x_4561_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0));
v___x_4562_ = l_mkPanicMessageWithDecl(v___x_4561_, v___x_4560_, v___x_4559_, v___x_4558_, v___x_4557_);
return v___x_4562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(lean_object* v_inst_4565_, lean_object* v_f_4566_, lean_object* v_positions_4567_, lean_object* v_ys_4568_, lean_object* v_xs_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_){
_start:
{
lean_object* v___x_4575_; lean_object* v___x_4576_; uint8_t v___x_4577_; 
v___x_4575_ = lean_array_get_size(v_positions_4567_);
v___x_4576_ = lean_array_get_size(v_ys_4568_);
v___x_4577_ = lean_nat_dec_eq(v___x_4575_, v___x_4576_);
if (v___x_4577_ == 0)
{
lean_object* v___x_4578_; lean_object* v___x_4579_; 
lean_dec_ref(v_f_4566_);
lean_dec(v_inst_4565_);
v___x_4578_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3);
v___x_4579_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v___x_4578_, v___y_4570_, v___y_4571_, v___y_4572_, v___y_4573_);
return v___x_4579_;
}
else
{
lean_object* v___x_4580_; lean_object* v___x_4581_; uint8_t v___x_4582_; 
v___x_4580_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_4567_);
v___x_4581_ = lean_array_get_size(v_xs_4569_);
v___x_4582_ = lean_nat_dec_eq(v___x_4580_, v___x_4581_);
lean_dec(v___x_4580_);
if (v___x_4582_ == 0)
{
lean_object* v___x_4583_; lean_object* v___x_4584_; 
lean_dec_ref(v_f_4566_);
lean_dec(v_inst_4565_);
v___x_4583_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5);
v___x_4584_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v___x_4583_, v___y_4570_, v___y_4571_, v___y_4572_, v___y_4573_);
return v___x_4584_;
}
else
{
lean_object* v___x_4585_; lean_object* v___x_4586_; lean_object* v___x_4587_; 
v___x_4585_ = lean_unsigned_to_nat(0u);
v___x_4586_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6));
v___x_4587_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_inst_4565_, v_xs_4569_, v_f_4566_, v_ys_4568_, v_positions_4567_, v___x_4585_, v___x_4586_, v___y_4570_, v___y_4571_, v___y_4572_, v___y_4573_);
return v___x_4587_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___boxed(lean_object* v_inst_4588_, lean_object* v_f_4589_, lean_object* v_positions_4590_, lean_object* v_ys_4591_, lean_object* v_xs_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_){
_start:
{
lean_object* v_res_4598_; 
v_res_4598_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v_inst_4588_, v_f_4589_, v_positions_4590_, v_ys_4591_, v_xs_4592_, v___y_4593_, v___y_4594_, v___y_4595_, v___y_4596_);
lean_dec_ref(v_xs_4592_);
lean_dec_ref(v_ys_4591_);
lean_dec_ref(v_positions_4590_);
return v_res_4598_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1(void){
_start:
{
lean_object* v___x_4600_; lean_object* v___x_4601_; 
v___x_4600_ = lean_unsigned_to_nat(0u);
v___x_4601_ = l_Lean_Level_ofNat(v___x_4600_);
return v___x_4601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst(lean_object* v_recArgInfos_4602_, lean_object* v_positions_4603_, lean_object* v_motives_4604_, uint8_t v_isIndPred_4605_, lean_object* v_a_4606_, lean_object* v_a_4607_, lean_object* v_a_4608_, lean_object* v_a_4609_){
_start:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v_indGroupInst_4614_; lean_object* v___x_4615_; lean_object* v_brecOnUniv_4617_; lean_object* v___y_4618_; lean_object* v___y_4619_; lean_object* v___y_4620_; lean_object* v___y_4621_; 
v___x_4611_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_4612_ = lean_unsigned_to_nat(0u);
v___x_4613_ = lean_array_get_borrowed(v___x_4611_, v_recArgInfos_4602_, v___x_4612_);
v_indGroupInst_4614_ = lean_ctor_get(v___x_4613_, 4);
v___x_4615_ = l_Lean_instInhabitedExpr;
if (v_isIndPred_4605_ == 0)
{
lean_object* v___f_4658_; lean_object* v_motive_4659_; lean_object* v___x_4660_; 
v___f_4658_ = ((lean_object*)(l_Lean_Elab_Structural_mkBRecOnConst___closed__0));
v_motive_4659_ = lean_array_get_borrowed(v___x_4615_, v_motives_4604_, v___x_4612_);
lean_inc(v_a_4609_);
lean_inc_ref(v_a_4608_);
lean_inc(v_a_4607_);
lean_inc_ref(v_a_4606_);
lean_inc(v_motive_4659_);
v___x_4660_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_motive_4659_, v___f_4658_, v_isIndPred_4605_, v_a_4606_, v_a_4607_, v_a_4608_, v_a_4609_);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_object* v_a_4661_; 
v_a_4661_ = lean_ctor_get(v___x_4660_, 0);
lean_inc(v_a_4661_);
lean_dec_ref(v___x_4660_);
v_brecOnUniv_4617_ = v_a_4661_;
v___y_4618_ = v_a_4606_;
v___y_4619_ = v_a_4607_;
v___y_4620_ = v_a_4608_;
v___y_4621_ = v_a_4609_;
goto v___jp_4616_;
}
else
{
lean_object* v_a_4662_; lean_object* v___x_4664_; uint8_t v_isShared_4665_; uint8_t v_isSharedCheck_4669_; 
lean_dec(v_a_4609_);
lean_dec_ref(v_a_4608_);
lean_dec(v_a_4607_);
lean_dec_ref(v_a_4606_);
v_a_4662_ = lean_ctor_get(v___x_4660_, 0);
v_isSharedCheck_4669_ = !lean_is_exclusive(v___x_4660_);
if (v_isSharedCheck_4669_ == 0)
{
v___x_4664_ = v___x_4660_;
v_isShared_4665_ = v_isSharedCheck_4669_;
goto v_resetjp_4663_;
}
else
{
lean_inc(v_a_4662_);
lean_dec(v___x_4660_);
v___x_4664_ = lean_box(0);
v_isShared_4665_ = v_isSharedCheck_4669_;
goto v_resetjp_4663_;
}
v_resetjp_4663_:
{
lean_object* v___x_4667_; 
if (v_isShared_4665_ == 0)
{
v___x_4667_ = v___x_4664_;
goto v_reusejp_4666_;
}
else
{
lean_object* v_reuseFailAlloc_4668_; 
v_reuseFailAlloc_4668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4668_, 0, v_a_4662_);
v___x_4667_ = v_reuseFailAlloc_4668_;
goto v_reusejp_4666_;
}
v_reusejp_4666_:
{
return v___x_4667_;
}
}
}
}
else
{
lean_object* v___x_4670_; 
v___x_4670_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnConst___closed__1, &l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1);
v_brecOnUniv_4617_ = v___x_4670_;
v___y_4618_ = v_a_4606_;
v___y_4619_ = v_a_4607_;
v___y_4620_ = v_a_4608_;
v___y_4621_ = v_a_4609_;
goto v___jp_4616_;
}
v___jp_4616_:
{
lean_object* v_toIndGroupInfo_4622_; lean_object* v_levels_4623_; lean_object* v_params_4624_; lean_object* v___x_4625_; lean_object* v_brecOnCons_4626_; lean_object* v_brecOnAux_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v_toIndGroupInfo_4622_ = lean_ctor_get(v_indGroupInst_4614_, 0);
v_levels_4623_ = lean_ctor_get(v_indGroupInst_4614_, 1);
v_params_4624_ = lean_ctor_get(v_indGroupInst_4614_, 2);
v___x_4625_ = lean_box(v_isIndPred_4605_);
lean_inc(v_levels_4623_);
lean_inc(v_brecOnUniv_4617_);
lean_inc_ref(v_params_4624_);
lean_inc_ref(v_toIndGroupInfo_4622_);
v_brecOnCons_4626_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed), 6, 5);
lean_closure_set(v_brecOnCons_4626_, 0, v_toIndGroupInfo_4622_);
lean_closure_set(v_brecOnCons_4626_, 1, v_params_4624_);
lean_closure_set(v_brecOnCons_4626_, 2, v___x_4625_);
lean_closure_set(v_brecOnCons_4626_, 3, v_brecOnUniv_4617_);
lean_closure_set(v_brecOnCons_4626_, 4, v_levels_4623_);
lean_inc(v_levels_4623_);
v_brecOnAux_4627_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__0(v_toIndGroupInfo_4622_, v_params_4624_, v_isIndPred_4605_, v_brecOnUniv_4617_, v_levels_4623_, v___x_4612_);
v___x_4628_ = l_Lean_Elab_Structural_IndGroupInfo_numMotives(v_toIndGroupInfo_4622_);
lean_inc(v___y_4621_);
lean_inc_ref(v___y_4620_);
lean_inc(v___y_4619_);
lean_inc_ref(v___y_4618_);
v___x_4629_ = l_Lean_Meta_inferArgumentTypesN(v___x_4628_, v_brecOnAux_4627_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_);
if (lean_obj_tag(v___x_4629_) == 0)
{
lean_object* v_a_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; 
v_a_4630_ = lean_ctor_get(v___x_4629_, 0);
lean_inc(v_a_4630_);
lean_dec_ref(v___x_4629_);
v___x_4631_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__0));
v___x_4632_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v___x_4615_, v___x_4631_, v_positions_4603_, v_a_4630_, v_motives_4604_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_);
lean_dec(v_a_4630_);
if (lean_obj_tag(v___x_4632_) == 0)
{
lean_object* v_a_4633_; lean_object* v___x_4635_; uint8_t v_isShared_4636_; uint8_t v_isSharedCheck_4641_; 
v_a_4633_ = lean_ctor_get(v___x_4632_, 0);
v_isSharedCheck_4641_ = !lean_is_exclusive(v___x_4632_);
if (v_isSharedCheck_4641_ == 0)
{
v___x_4635_ = v___x_4632_;
v_isShared_4636_ = v_isSharedCheck_4641_;
goto v_resetjp_4634_;
}
else
{
lean_inc(v_a_4633_);
lean_dec(v___x_4632_);
v___x_4635_ = lean_box(0);
v_isShared_4636_ = v_isSharedCheck_4641_;
goto v_resetjp_4634_;
}
v_resetjp_4634_:
{
lean_object* v___f_4637_; lean_object* v___x_4639_; 
v___f_4637_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed), 3, 2);
lean_closure_set(v___f_4637_, 0, v_brecOnCons_4626_);
lean_closure_set(v___f_4637_, 1, v_a_4633_);
if (v_isShared_4636_ == 0)
{
lean_ctor_set(v___x_4635_, 0, v___f_4637_);
v___x_4639_ = v___x_4635_;
goto v_reusejp_4638_;
}
else
{
lean_object* v_reuseFailAlloc_4640_; 
v_reuseFailAlloc_4640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4640_, 0, v___f_4637_);
v___x_4639_ = v_reuseFailAlloc_4640_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
return v___x_4639_;
}
}
}
else
{
lean_object* v_a_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4649_; 
lean_dec_ref(v_brecOnCons_4626_);
v_a_4642_ = lean_ctor_get(v___x_4632_, 0);
v_isSharedCheck_4649_ = !lean_is_exclusive(v___x_4632_);
if (v_isSharedCheck_4649_ == 0)
{
v___x_4644_ = v___x_4632_;
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
else
{
lean_inc(v_a_4642_);
lean_dec(v___x_4632_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
lean_object* v___x_4647_; 
if (v_isShared_4645_ == 0)
{
v___x_4647_ = v___x_4644_;
goto v_reusejp_4646_;
}
else
{
lean_object* v_reuseFailAlloc_4648_; 
v_reuseFailAlloc_4648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4648_, 0, v_a_4642_);
v___x_4647_ = v_reuseFailAlloc_4648_;
goto v_reusejp_4646_;
}
v_reusejp_4646_:
{
return v___x_4647_;
}
}
}
}
else
{
lean_object* v_a_4650_; lean_object* v___x_4652_; uint8_t v_isShared_4653_; uint8_t v_isSharedCheck_4657_; 
lean_dec_ref(v_brecOnCons_4626_);
lean_dec(v___y_4621_);
lean_dec_ref(v___y_4620_);
lean_dec(v___y_4619_);
lean_dec_ref(v___y_4618_);
v_a_4650_ = lean_ctor_get(v___x_4629_, 0);
v_isSharedCheck_4657_ = !lean_is_exclusive(v___x_4629_);
if (v_isSharedCheck_4657_ == 0)
{
v___x_4652_ = v___x_4629_;
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
else
{
lean_inc(v_a_4650_);
lean_dec(v___x_4629_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___boxed(lean_object* v_recArgInfos_4671_, lean_object* v_positions_4672_, lean_object* v_motives_4673_, lean_object* v_isIndPred_4674_, lean_object* v_a_4675_, lean_object* v_a_4676_, lean_object* v_a_4677_, lean_object* v_a_4678_, lean_object* v_a_4679_){
_start:
{
uint8_t v_isIndPred_boxed_4680_; lean_object* v_res_4681_; 
v_isIndPred_boxed_4680_ = lean_unbox(v_isIndPred_4674_);
v_res_4681_ = l_Lean_Elab_Structural_mkBRecOnConst(v_recArgInfos_4671_, v_positions_4672_, v_motives_4673_, v_isIndPred_boxed_4680_, v_a_4675_, v_a_4676_, v_a_4677_, v_a_4678_);
lean_dec_ref(v_motives_4673_);
lean_dec_ref(v_positions_4672_);
lean_dec_ref(v_recArgInfos_4671_);
return v_res_4681_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(lean_object* v_00_u03b3_4682_, lean_object* v_msg_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_){
_start:
{
lean_object* v___x_4689_; 
v___x_4689_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v_msg_4683_, v___y_4684_, v___y_4685_, v___y_4686_, v___y_4687_);
return v___x_4689_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___boxed(lean_object* v_00_u03b3_4690_, lean_object* v_msg_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_, lean_object* v___y_4696_){
_start:
{
lean_object* v_res_4697_; 
v_res_4697_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(v_00_u03b3_4690_, v_msg_4691_, v___y_4692_, v___y_4693_, v___y_4694_, v___y_4695_);
return v_res_4697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(lean_object* v_00_u03b3_4698_, lean_object* v_00_u03b1_4699_, lean_object* v_00_u03b2_4700_, lean_object* v_inst_4701_, lean_object* v_f_4702_, lean_object* v_positions_4703_, lean_object* v_ys_4704_, lean_object* v_xs_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_){
_start:
{
lean_object* v___x_4711_; 
v___x_4711_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v_inst_4701_, v_f_4702_, v_positions_4703_, v_ys_4704_, v_xs_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_);
return v___x_4711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___boxed(lean_object* v_00_u03b3_4712_, lean_object* v_00_u03b1_4713_, lean_object* v_00_u03b2_4714_, lean_object* v_inst_4715_, lean_object* v_f_4716_, lean_object* v_positions_4717_, lean_object* v_ys_4718_, lean_object* v_xs_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_){
_start:
{
lean_object* v_res_4725_; 
v_res_4725_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(v_00_u03b3_4712_, v_00_u03b1_4713_, v_00_u03b2_4714_, v_inst_4715_, v_f_4716_, v_positions_4717_, v_ys_4718_, v_xs_4719_, v___y_4720_, v___y_4721_, v___y_4722_, v___y_4723_);
lean_dec_ref(v_xs_4719_);
lean_dec_ref(v_ys_4718_);
lean_dec_ref(v_positions_4717_);
return v_res_4725_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(lean_object* v_00_u03b2_4726_, lean_object* v_inst_4727_, lean_object* v_xs_4728_, size_t v_sz_4729_, size_t v_i_4730_, lean_object* v_bs_4731_){
_start:
{
lean_object* v___x_4732_; 
v___x_4732_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg(v_inst_4727_, v_xs_4728_, v_sz_4729_, v_i_4730_, v_bs_4731_);
return v___x_4732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4733_, lean_object* v_inst_4734_, lean_object* v_xs_4735_, lean_object* v_sz_4736_, lean_object* v_i_4737_, lean_object* v_bs_4738_){
_start:
{
size_t v_sz_boxed_4739_; size_t v_i_boxed_4740_; lean_object* v_res_4741_; 
v_sz_boxed_4739_ = lean_unbox_usize(v_sz_4736_);
lean_dec(v_sz_4736_);
v_i_boxed_4740_ = lean_unbox_usize(v_i_4737_);
lean_dec(v_i_4737_);
v_res_4741_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(v_00_u03b2_4733_, v_inst_4734_, v_xs_4735_, v_sz_boxed_4739_, v_i_boxed_4740_, v_bs_4738_);
lean_dec_ref(v_xs_4735_);
return v_res_4741_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(lean_object* v_00_u03b1_4742_, lean_object* v_00_u03b3_4743_, lean_object* v_00_u03b2_4744_, lean_object* v_inst_4745_, lean_object* v_xs_4746_, lean_object* v_f_4747_, lean_object* v_as_4748_, lean_object* v_bs_4749_, lean_object* v_i_4750_, lean_object* v_cs_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_){
_start:
{
lean_object* v___x_4757_; 
v___x_4757_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_inst_4745_, v_xs_4746_, v_f_4747_, v_as_4748_, v_bs_4749_, v_i_4750_, v_cs_4751_, v___y_4752_, v___y_4753_, v___y_4754_, v___y_4755_);
return v___x_4757_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___boxed(lean_object* v_00_u03b1_4758_, lean_object* v_00_u03b3_4759_, lean_object* v_00_u03b2_4760_, lean_object* v_inst_4761_, lean_object* v_xs_4762_, lean_object* v_f_4763_, lean_object* v_as_4764_, lean_object* v_bs_4765_, lean_object* v_i_4766_, lean_object* v_cs_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(v_00_u03b1_4758_, v_00_u03b3_4759_, v_00_u03b2_4760_, v_inst_4761_, v_xs_4762_, v_f_4763_, v_as_4764_, v_bs_4765_, v_i_4766_, v_cs_4767_, v___y_4768_, v___y_4769_, v___y_4770_, v___y_4771_);
lean_dec_ref(v_bs_4765_);
lean_dec_ref(v_as_4764_);
lean_dec_ref(v_xs_4762_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0(lean_object* v___x_4774_, lean_object* v_e_4775_){
_start:
{
lean_object* v___x_4776_; lean_object* v___x_4777_; 
v___x_4776_ = l_Lean_indentD(v_e_4775_);
v___x_4777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4777_, 0, v___x_4774_);
lean_ctor_set(v___x_4777_, 1, v___x_4776_);
return v___x_4777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1(lean_object* v_numTypeFormers_4778_, lean_object* v_x_4779_, lean_object* v_brecOnType_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_){
_start:
{
lean_object* v___x_4786_; 
v___x_4786_ = l_Lean_Meta_arrowDomainsN(v_numTypeFormers_4778_, v_brecOnType_4780_, v___y_4781_, v___y_4782_, v___y_4783_, v___y_4784_);
return v___x_4786_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1___boxed(lean_object* v_numTypeFormers_4787_, lean_object* v_x_4788_, lean_object* v_brecOnType_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_){
_start:
{
lean_object* v_res_4795_; 
v_res_4795_ = l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1(v_numTypeFormers_4787_, v_x_4788_, v_brecOnType_4789_, v___y_4790_, v___y_4791_, v___y_4792_, v___y_4793_);
lean_dec_ref(v_x_4788_);
return v_res_4795_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(lean_object* v_a_4796_, lean_object* v_as_4797_, size_t v_sz_4798_, size_t v_i_4799_, lean_object* v_b_4800_){
_start:
{
uint8_t v___x_4802_; 
v___x_4802_ = lean_usize_dec_lt(v_i_4799_, v_sz_4798_);
if (v___x_4802_ == 0)
{
lean_object* v___x_4803_; 
lean_dec_ref(v_a_4796_);
v___x_4803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4803_, 0, v_b_4800_);
return v___x_4803_;
}
else
{
lean_object* v_a_4804_; lean_object* v___x_4805_; size_t v___x_4806_; size_t v___x_4807_; 
v_a_4804_ = lean_array_uget_borrowed(v_as_4797_, v_i_4799_);
lean_inc_ref(v_a_4796_);
v___x_4805_ = lean_array_set(v_b_4800_, v_a_4804_, v_a_4796_);
v___x_4806_ = ((size_t)1ULL);
v___x_4807_ = lean_usize_add(v_i_4799_, v___x_4806_);
v_i_4799_ = v___x_4807_;
v_b_4800_ = v___x_4805_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg___boxed(lean_object* v_a_4809_, lean_object* v_as_4810_, lean_object* v_sz_4811_, lean_object* v_i_4812_, lean_object* v_b_4813_, lean_object* v___y_4814_){
_start:
{
size_t v_sz_boxed_4815_; size_t v_i_boxed_4816_; lean_object* v_res_4817_; 
v_sz_boxed_4815_ = lean_unbox_usize(v_sz_4811_);
lean_dec(v_sz_4811_);
v_i_boxed_4816_ = lean_unbox_usize(v_i_4812_);
lean_dec(v_i_4812_);
v_res_4817_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4809_, v_as_4810_, v_sz_boxed_4815_, v_i_boxed_4816_, v_b_4813_);
lean_dec_ref(v_as_4810_);
return v_res_4817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(lean_object* v_as_4818_, size_t v_sz_4819_, size_t v_i_4820_, lean_object* v_b_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_){
_start:
{
uint8_t v___x_4827_; 
v___x_4827_ = lean_usize_dec_lt(v_i_4820_, v_sz_4819_);
if (v___x_4827_ == 0)
{
lean_object* v___x_4828_; 
v___x_4828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4828_, 0, v_b_4821_);
return v___x_4828_;
}
else
{
lean_object* v_snd_4829_; lean_object* v_fst_4830_; lean_object* v___x_4832_; uint8_t v_isShared_4833_; uint8_t v_isSharedCheck_4874_; 
v_snd_4829_ = lean_ctor_get(v_b_4821_, 1);
v_fst_4830_ = lean_ctor_get(v_b_4821_, 0);
v_isSharedCheck_4874_ = !lean_is_exclusive(v_b_4821_);
if (v_isSharedCheck_4874_ == 0)
{
v___x_4832_ = v_b_4821_;
v_isShared_4833_ = v_isSharedCheck_4874_;
goto v_resetjp_4831_;
}
else
{
lean_inc(v_snd_4829_);
lean_inc(v_fst_4830_);
lean_dec(v_b_4821_);
v___x_4832_ = lean_box(0);
v_isShared_4833_ = v_isSharedCheck_4874_;
goto v_resetjp_4831_;
}
v_resetjp_4831_:
{
lean_object* v_array_4834_; lean_object* v_start_4835_; lean_object* v_stop_4836_; uint8_t v___x_4837_; 
v_array_4834_ = lean_ctor_get(v_snd_4829_, 0);
v_start_4835_ = lean_ctor_get(v_snd_4829_, 1);
v_stop_4836_ = lean_ctor_get(v_snd_4829_, 2);
v___x_4837_ = lean_nat_dec_lt(v_start_4835_, v_stop_4836_);
if (v___x_4837_ == 0)
{
lean_object* v___x_4839_; 
if (v_isShared_4833_ == 0)
{
v___x_4839_ = v___x_4832_;
goto v_reusejp_4838_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v_fst_4830_);
lean_ctor_set(v_reuseFailAlloc_4841_, 1, v_snd_4829_);
v___x_4839_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4838_;
}
v_reusejp_4838_:
{
lean_object* v___x_4840_; 
v___x_4840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4840_, 0, v___x_4839_);
return v___x_4840_;
}
}
else
{
lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4870_; 
lean_inc(v_stop_4836_);
lean_inc(v_start_4835_);
lean_inc_ref(v_array_4834_);
v_isSharedCheck_4870_ = !lean_is_exclusive(v_snd_4829_);
if (v_isSharedCheck_4870_ == 0)
{
lean_object* v_unused_4871_; lean_object* v_unused_4872_; lean_object* v_unused_4873_; 
v_unused_4871_ = lean_ctor_get(v_snd_4829_, 2);
lean_dec(v_unused_4871_);
v_unused_4872_ = lean_ctor_get(v_snd_4829_, 1);
lean_dec(v_unused_4872_);
v_unused_4873_ = lean_ctor_get(v_snd_4829_, 0);
lean_dec(v_unused_4873_);
v___x_4843_ = v_snd_4829_;
v_isShared_4844_ = v_isSharedCheck_4870_;
goto v_resetjp_4842_;
}
else
{
lean_dec(v_snd_4829_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4870_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v_a_4845_; lean_object* v___x_4846_; size_t v_sz_4847_; size_t v___x_4848_; lean_object* v___x_4849_; 
v_a_4845_ = lean_array_uget_borrowed(v_as_4818_, v_i_4820_);
v___x_4846_ = lean_array_fget_borrowed(v_array_4834_, v_start_4835_);
v_sz_4847_ = lean_array_size(v___x_4846_);
v___x_4848_ = ((size_t)0ULL);
lean_inc(v_a_4845_);
v___x_4849_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4845_, v___x_4846_, v_sz_4847_, v___x_4848_, v_fst_4830_);
if (lean_obj_tag(v___x_4849_) == 0)
{
lean_object* v_a_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4854_; 
v_a_4850_ = lean_ctor_get(v___x_4849_, 0);
lean_inc(v_a_4850_);
lean_dec_ref(v___x_4849_);
v___x_4851_ = lean_unsigned_to_nat(1u);
v___x_4852_ = lean_nat_add(v_start_4835_, v___x_4851_);
lean_dec(v_start_4835_);
if (v_isShared_4844_ == 0)
{
lean_ctor_set(v___x_4843_, 1, v___x_4852_);
v___x_4854_ = v___x_4843_;
goto v_reusejp_4853_;
}
else
{
lean_object* v_reuseFailAlloc_4861_; 
v_reuseFailAlloc_4861_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4861_, 0, v_array_4834_);
lean_ctor_set(v_reuseFailAlloc_4861_, 1, v___x_4852_);
lean_ctor_set(v_reuseFailAlloc_4861_, 2, v_stop_4836_);
v___x_4854_ = v_reuseFailAlloc_4861_;
goto v_reusejp_4853_;
}
v_reusejp_4853_:
{
lean_object* v___x_4856_; 
if (v_isShared_4833_ == 0)
{
lean_ctor_set(v___x_4832_, 1, v___x_4854_);
lean_ctor_set(v___x_4832_, 0, v_a_4850_);
v___x_4856_ = v___x_4832_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4860_; 
v_reuseFailAlloc_4860_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4860_, 0, v_a_4850_);
lean_ctor_set(v_reuseFailAlloc_4860_, 1, v___x_4854_);
v___x_4856_ = v_reuseFailAlloc_4860_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
size_t v___x_4857_; size_t v___x_4858_; 
v___x_4857_ = ((size_t)1ULL);
v___x_4858_ = lean_usize_add(v_i_4820_, v___x_4857_);
v_i_4820_ = v___x_4858_;
v_b_4821_ = v___x_4856_;
goto _start;
}
}
}
else
{
lean_object* v_a_4862_; lean_object* v___x_4864_; uint8_t v_isShared_4865_; uint8_t v_isSharedCheck_4869_; 
lean_del_object(v___x_4843_);
lean_dec(v_stop_4836_);
lean_dec(v_start_4835_);
lean_dec_ref(v_array_4834_);
lean_del_object(v___x_4832_);
v_a_4862_ = lean_ctor_get(v___x_4849_, 0);
v_isSharedCheck_4869_ = !lean_is_exclusive(v___x_4849_);
if (v_isSharedCheck_4869_ == 0)
{
v___x_4864_ = v___x_4849_;
v_isShared_4865_ = v_isSharedCheck_4869_;
goto v_resetjp_4863_;
}
else
{
lean_inc(v_a_4862_);
lean_dec(v___x_4849_);
v___x_4864_ = lean_box(0);
v_isShared_4865_ = v_isSharedCheck_4869_;
goto v_resetjp_4863_;
}
v_resetjp_4863_:
{
lean_object* v___x_4867_; 
if (v_isShared_4865_ == 0)
{
v___x_4867_ = v___x_4864_;
goto v_reusejp_4866_;
}
else
{
lean_object* v_reuseFailAlloc_4868_; 
v_reuseFailAlloc_4868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4868_, 0, v_a_4862_);
v___x_4867_ = v_reuseFailAlloc_4868_;
goto v_reusejp_4866_;
}
v_reusejp_4866_:
{
return v___x_4867_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1___boxed(lean_object* v_as_4875_, lean_object* v_sz_4876_, lean_object* v_i_4877_, lean_object* v_b_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_){
_start:
{
size_t v_sz_boxed_4884_; size_t v_i_boxed_4885_; lean_object* v_res_4886_; 
v_sz_boxed_4884_ = lean_unbox_usize(v_sz_4876_);
lean_dec(v_sz_4876_);
v_i_boxed_4885_ = lean_unbox_usize(v_i_4877_);
lean_dec(v_i_4877_);
v_res_4886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(v_as_4875_, v_sz_boxed_4884_, v_i_boxed_4885_, v_b_4878_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_);
lean_dec(v___y_4882_);
lean_dec_ref(v___y_4881_);
lean_dec(v___y_4880_);
lean_dec_ref(v___y_4879_);
lean_dec_ref(v_as_4875_);
return v_res_4886_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1(void){
_start:
{
lean_object* v___x_4888_; lean_object* v___x_4889_; 
v___x_4888_ = ((lean_object*)(l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0));
v___x_4889_ = l_Lean_stringToMessageData(v___x_4888_);
return v___x_4889_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2(void){
_start:
{
lean_object* v___x_4890_; lean_object* v___f_4891_; 
v___x_4890_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1);
v___f_4891_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0), 2, 1);
lean_closure_set(v___f_4891_, 0, v___x_4890_);
return v___f_4891_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3(void){
_start:
{
lean_object* v___x_4892_; lean_object* v___x_4893_; 
v___x_4892_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnConst___closed__1, &l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1);
v___x_4893_ = l_Lean_Expr_sort___override(v___x_4892_);
return v___x_4893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes(lean_object* v_recArgInfos_4894_, lean_object* v_positions_4895_, lean_object* v_brecOnConst_4896_, lean_object* v_a_4897_, lean_object* v_a_4898_, lean_object* v_a_4899_, lean_object* v_a_4900_){
_start:
{
lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v_recArgInfo_4904_; lean_object* v_indicesPos_4905_; lean_object* v_indIdx_4906_; lean_object* v_brecOn_4907_; lean_object* v___f_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; 
v___x_4902_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_4903_ = lean_unsigned_to_nat(0u);
v_recArgInfo_4904_ = lean_array_get_borrowed(v___x_4902_, v_recArgInfos_4894_, v___x_4903_);
v_indicesPos_4905_ = lean_ctor_get(v_recArgInfo_4904_, 3);
v_indIdx_4906_ = lean_ctor_get(v_recArgInfo_4904_, 5);
lean_inc(v_indIdx_4906_);
v_brecOn_4907_ = lean_apply_1(v_brecOnConst_4896_, v_indIdx_4906_);
v___f_4908_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2);
lean_inc_ref(v_brecOn_4907_);
v___x_4909_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 6, 1);
lean_closure_set(v___x_4909_, 0, v_brecOn_4907_);
lean_inc(v_a_4900_);
lean_inc_ref(v_a_4899_);
lean_inc(v_a_4898_);
lean_inc_ref(v_a_4897_);
v___x_4910_ = l_Lean_Meta_mapErrorImp___redArg(v___x_4909_, v___f_4908_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_);
if (lean_obj_tag(v___x_4910_) == 0)
{
lean_object* v___x_4911_; 
lean_dec_ref(v___x_4910_);
lean_inc(v_a_4900_);
lean_inc_ref(v_a_4899_);
lean_inc(v_a_4898_);
lean_inc_ref(v_a_4897_);
v___x_4911_ = lean_infer_type(v_brecOn_4907_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_);
if (lean_obj_tag(v___x_4911_) == 0)
{
lean_object* v_a_4912_; lean_object* v_numTypeFormers_4913_; lean_object* v___f_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; uint8_t v___x_4919_; lean_object* v___x_4920_; 
v_a_4912_ = lean_ctor_get(v___x_4911_, 0);
lean_inc(v_a_4912_);
lean_dec_ref(v___x_4911_);
v_numTypeFormers_4913_ = lean_array_get_size(v_positions_4895_);
v___f_4914_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1___boxed), 8, 1);
lean_closure_set(v___f_4914_, 0, v_numTypeFormers_4913_);
v___x_4915_ = lean_array_get_size(v_indicesPos_4905_);
v___x_4916_ = lean_unsigned_to_nat(1u);
v___x_4917_ = lean_nat_add(v___x_4915_, v___x_4916_);
v___x_4918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4918_, 0, v___x_4917_);
v___x_4919_ = 0;
lean_inc(v_a_4900_);
lean_inc_ref(v_a_4899_);
lean_inc(v_a_4898_);
lean_inc_ref(v_a_4897_);
v___x_4920_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_a_4912_, v___x_4918_, v___f_4914_, v___x_4919_, v___x_4919_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_);
if (lean_obj_tag(v___x_4920_) == 0)
{
lean_object* v_a_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; size_t v_sz_4927_; size_t v___x_4928_; lean_object* v___x_4929_; 
v_a_4921_ = lean_ctor_get(v___x_4920_, 0);
lean_inc(v_a_4921_);
lean_dec_ref(v___x_4920_);
v___x_4922_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_4895_);
v___x_4923_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3);
v___x_4924_ = lean_mk_array(v___x_4922_, v___x_4923_);
v___x_4925_ = l_Array_toSubarray___redArg(v_positions_4895_, v___x_4903_, v_numTypeFormers_4913_);
v___x_4926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4926_, 0, v___x_4924_);
lean_ctor_set(v___x_4926_, 1, v___x_4925_);
v_sz_4927_ = lean_array_size(v_a_4921_);
v___x_4928_ = ((size_t)0ULL);
v___x_4929_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(v_a_4921_, v_sz_4927_, v___x_4928_, v___x_4926_, v_a_4897_, v_a_4898_, v_a_4899_, v_a_4900_);
lean_dec(v_a_4900_);
lean_dec_ref(v_a_4899_);
lean_dec(v_a_4898_);
lean_dec_ref(v_a_4897_);
lean_dec(v_a_4921_);
if (lean_obj_tag(v___x_4929_) == 0)
{
lean_object* v_a_4930_; lean_object* v___x_4932_; uint8_t v_isShared_4933_; uint8_t v_isSharedCheck_4938_; 
v_a_4930_ = lean_ctor_get(v___x_4929_, 0);
v_isSharedCheck_4938_ = !lean_is_exclusive(v___x_4929_);
if (v_isSharedCheck_4938_ == 0)
{
v___x_4932_ = v___x_4929_;
v_isShared_4933_ = v_isSharedCheck_4938_;
goto v_resetjp_4931_;
}
else
{
lean_inc(v_a_4930_);
lean_dec(v___x_4929_);
v___x_4932_ = lean_box(0);
v_isShared_4933_ = v_isSharedCheck_4938_;
goto v_resetjp_4931_;
}
v_resetjp_4931_:
{
lean_object* v_fst_4934_; lean_object* v___x_4936_; 
v_fst_4934_ = lean_ctor_get(v_a_4930_, 0);
lean_inc(v_fst_4934_);
lean_dec(v_a_4930_);
if (v_isShared_4933_ == 0)
{
lean_ctor_set(v___x_4932_, 0, v_fst_4934_);
v___x_4936_ = v___x_4932_;
goto v_reusejp_4935_;
}
else
{
lean_object* v_reuseFailAlloc_4937_; 
v_reuseFailAlloc_4937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4937_, 0, v_fst_4934_);
v___x_4936_ = v_reuseFailAlloc_4937_;
goto v_reusejp_4935_;
}
v_reusejp_4935_:
{
return v___x_4936_;
}
}
}
else
{
lean_object* v_a_4939_; lean_object* v___x_4941_; uint8_t v_isShared_4942_; uint8_t v_isSharedCheck_4946_; 
v_a_4939_ = lean_ctor_get(v___x_4929_, 0);
v_isSharedCheck_4946_ = !lean_is_exclusive(v___x_4929_);
if (v_isSharedCheck_4946_ == 0)
{
v___x_4941_ = v___x_4929_;
v_isShared_4942_ = v_isSharedCheck_4946_;
goto v_resetjp_4940_;
}
else
{
lean_inc(v_a_4939_);
lean_dec(v___x_4929_);
v___x_4941_ = lean_box(0);
v_isShared_4942_ = v_isSharedCheck_4946_;
goto v_resetjp_4940_;
}
v_resetjp_4940_:
{
lean_object* v___x_4944_; 
if (v_isShared_4942_ == 0)
{
v___x_4944_ = v___x_4941_;
goto v_reusejp_4943_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v_a_4939_);
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
else
{
lean_dec(v_a_4900_);
lean_dec_ref(v_a_4899_);
lean_dec(v_a_4898_);
lean_dec_ref(v_a_4897_);
lean_dec_ref(v_positions_4895_);
return v___x_4920_;
}
}
else
{
lean_object* v_a_4947_; lean_object* v___x_4949_; uint8_t v_isShared_4950_; uint8_t v_isSharedCheck_4954_; 
lean_dec(v_a_4900_);
lean_dec_ref(v_a_4899_);
lean_dec(v_a_4898_);
lean_dec_ref(v_a_4897_);
lean_dec_ref(v_positions_4895_);
v_a_4947_ = lean_ctor_get(v___x_4911_, 0);
v_isSharedCheck_4954_ = !lean_is_exclusive(v___x_4911_);
if (v_isSharedCheck_4954_ == 0)
{
v___x_4949_ = v___x_4911_;
v_isShared_4950_ = v_isSharedCheck_4954_;
goto v_resetjp_4948_;
}
else
{
lean_inc(v_a_4947_);
lean_dec(v___x_4911_);
v___x_4949_ = lean_box(0);
v_isShared_4950_ = v_isSharedCheck_4954_;
goto v_resetjp_4948_;
}
v_resetjp_4948_:
{
lean_object* v___x_4952_; 
if (v_isShared_4950_ == 0)
{
v___x_4952_ = v___x_4949_;
goto v_reusejp_4951_;
}
else
{
lean_object* v_reuseFailAlloc_4953_; 
v_reuseFailAlloc_4953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4953_, 0, v_a_4947_);
v___x_4952_ = v_reuseFailAlloc_4953_;
goto v_reusejp_4951_;
}
v_reusejp_4951_:
{
return v___x_4952_;
}
}
}
}
else
{
lean_object* v_a_4955_; lean_object* v___x_4957_; uint8_t v_isShared_4958_; uint8_t v_isSharedCheck_4962_; 
lean_dec_ref(v_brecOn_4907_);
lean_dec(v_a_4900_);
lean_dec_ref(v_a_4899_);
lean_dec(v_a_4898_);
lean_dec_ref(v_a_4897_);
lean_dec_ref(v_positions_4895_);
v_a_4955_ = lean_ctor_get(v___x_4910_, 0);
v_isSharedCheck_4962_ = !lean_is_exclusive(v___x_4910_);
if (v_isSharedCheck_4962_ == 0)
{
v___x_4957_ = v___x_4910_;
v_isShared_4958_ = v_isSharedCheck_4962_;
goto v_resetjp_4956_;
}
else
{
lean_inc(v_a_4955_);
lean_dec(v___x_4910_);
v___x_4957_ = lean_box(0);
v_isShared_4958_ = v_isSharedCheck_4962_;
goto v_resetjp_4956_;
}
v_resetjp_4956_:
{
lean_object* v___x_4960_; 
if (v_isShared_4958_ == 0)
{
v___x_4960_ = v___x_4957_;
goto v_reusejp_4959_;
}
else
{
lean_object* v_reuseFailAlloc_4961_; 
v_reuseFailAlloc_4961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4961_, 0, v_a_4955_);
v___x_4960_ = v_reuseFailAlloc_4961_;
goto v_reusejp_4959_;
}
v_reusejp_4959_:
{
return v___x_4960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___boxed(lean_object* v_recArgInfos_4963_, lean_object* v_positions_4964_, lean_object* v_brecOnConst_4965_, lean_object* v_a_4966_, lean_object* v_a_4967_, lean_object* v_a_4968_, lean_object* v_a_4969_, lean_object* v_a_4970_){
_start:
{
lean_object* v_res_4971_; 
v_res_4971_ = l_Lean_Elab_Structural_inferBRecOnFTypes(v_recArgInfos_4963_, v_positions_4964_, v_brecOnConst_4965_, v_a_4966_, v_a_4967_, v_a_4968_, v_a_4969_);
lean_dec_ref(v_recArgInfos_4963_);
return v_res_4971_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(lean_object* v_a_4972_, lean_object* v_as_4973_, size_t v_sz_4974_, size_t v_i_4975_, lean_object* v_b_4976_, lean_object* v___y_4977_, lean_object* v___y_4978_, lean_object* v___y_4979_, lean_object* v___y_4980_){
_start:
{
lean_object* v___x_4982_; 
v___x_4982_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4972_, v_as_4973_, v_sz_4974_, v_i_4975_, v_b_4976_);
return v___x_4982_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___boxed(lean_object* v_a_4983_, lean_object* v_as_4984_, lean_object* v_sz_4985_, lean_object* v_i_4986_, lean_object* v_b_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_){
_start:
{
size_t v_sz_boxed_4993_; size_t v_i_boxed_4994_; lean_object* v_res_4995_; 
v_sz_boxed_4993_ = lean_unbox_usize(v_sz_4985_);
lean_dec(v_sz_4985_);
v_i_boxed_4994_ = lean_unbox_usize(v_i_4986_);
lean_dec(v_i_4986_);
v_res_4995_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(v_a_4983_, v_as_4984_, v_sz_boxed_4993_, v_i_boxed_4994_, v_b_4987_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_);
lean_dec(v___y_4991_);
lean_dec_ref(v___y_4990_);
lean_dec(v___y_4989_);
lean_dec_ref(v___y_4988_);
lean_dec_ref(v_as_4984_);
return v_res_4995_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(lean_object* v_a_4996_, lean_object* v_a_4997_){
_start:
{
if (lean_obj_tag(v_a_4996_) == 0)
{
lean_object* v___x_4998_; 
v___x_4998_ = l_List_reverse___redArg(v_a_4997_);
return v___x_4998_;
}
else
{
lean_object* v_head_4999_; lean_object* v_tail_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5011_; 
v_head_4999_ = lean_ctor_get(v_a_4996_, 0);
v_tail_5000_ = lean_ctor_get(v_a_4996_, 1);
v_isSharedCheck_5011_ = !lean_is_exclusive(v_a_4996_);
if (v_isSharedCheck_5011_ == 0)
{
v___x_5002_ = v_a_4996_;
v_isShared_5003_ = v_isSharedCheck_5011_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_tail_5000_);
lean_inc(v_head_4999_);
lean_dec(v_a_4996_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5011_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v___x_5004_; lean_object* v___x_5005_; lean_object* v___x_5006_; lean_object* v___x_5008_; 
v___x_5004_ = l_Nat_reprFast(v_head_4999_);
v___x_5005_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5005_, 0, v___x_5004_);
v___x_5006_ = l_Lean_MessageData_ofFormat(v___x_5005_);
if (v_isShared_5003_ == 0)
{
lean_ctor_set(v___x_5002_, 1, v_a_4997_);
lean_ctor_set(v___x_5002_, 0, v___x_5006_);
v___x_5008_ = v___x_5002_;
goto v_reusejp_5007_;
}
else
{
lean_object* v_reuseFailAlloc_5010_; 
v_reuseFailAlloc_5010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5010_, 0, v___x_5006_);
lean_ctor_set(v_reuseFailAlloc_5010_, 1, v_a_4997_);
v___x_5008_ = v_reuseFailAlloc_5010_;
goto v_reusejp_5007_;
}
v_reusejp_5007_:
{
v_a_4996_ = v_tail_5000_;
v_a_4997_ = v___x_5008_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(lean_object* v_a_5012_, lean_object* v_a_5013_){
_start:
{
if (lean_obj_tag(v_a_5012_) == 0)
{
lean_object* v___x_5014_; 
v___x_5014_ = l_List_reverse___redArg(v_a_5013_);
return v___x_5014_;
}
else
{
lean_object* v_head_5015_; lean_object* v_tail_5016_; lean_object* v___x_5018_; uint8_t v_isShared_5019_; uint8_t v_isSharedCheck_5028_; 
v_head_5015_ = lean_ctor_get(v_a_5012_, 0);
v_tail_5016_ = lean_ctor_get(v_a_5012_, 1);
v_isSharedCheck_5028_ = !lean_is_exclusive(v_a_5012_);
if (v_isSharedCheck_5028_ == 0)
{
v___x_5018_ = v_a_5012_;
v_isShared_5019_ = v_isSharedCheck_5028_;
goto v_resetjp_5017_;
}
else
{
lean_inc(v_tail_5016_);
lean_inc(v_head_5015_);
lean_dec(v_a_5012_);
v___x_5018_ = lean_box(0);
v_isShared_5019_ = v_isSharedCheck_5028_;
goto v_resetjp_5017_;
}
v_resetjp_5017_:
{
lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5025_; 
v___x_5020_ = lean_array_to_list(v_head_5015_);
v___x_5021_ = lean_box(0);
v___x_5022_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(v___x_5020_, v___x_5021_);
v___x_5023_ = l_Lean_MessageData_ofList(v___x_5022_);
if (v_isShared_5019_ == 0)
{
lean_ctor_set(v___x_5018_, 1, v_a_5013_);
lean_ctor_set(v___x_5018_, 0, v___x_5023_);
v___x_5025_ = v___x_5018_;
goto v_reusejp_5024_;
}
else
{
lean_object* v_reuseFailAlloc_5027_; 
v_reuseFailAlloc_5027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5027_, 0, v___x_5023_);
lean_ctor_set(v_reuseFailAlloc_5027_, 1, v_a_5013_);
v___x_5025_ = v_reuseFailAlloc_5027_;
goto v_reusejp_5024_;
}
v_reusejp_5024_:
{
v_a_5012_ = v_tail_5016_;
v_a_5013_ = v___x_5025_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(lean_object* v_xs_5029_, lean_object* v_v_5030_, lean_object* v_i_5031_){
_start:
{
lean_object* v___x_5032_; uint8_t v___x_5033_; 
v___x_5032_ = lean_array_get_size(v_xs_5029_);
v___x_5033_ = lean_nat_dec_lt(v_i_5031_, v___x_5032_);
if (v___x_5033_ == 0)
{
lean_object* v___x_5034_; 
lean_dec(v_i_5031_);
v___x_5034_ = lean_box(0);
return v___x_5034_;
}
else
{
lean_object* v___x_5035_; uint8_t v___x_5036_; 
v___x_5035_ = lean_array_fget_borrowed(v_xs_5029_, v_i_5031_);
v___x_5036_ = lean_nat_dec_eq(v___x_5035_, v_v_5030_);
if (v___x_5036_ == 0)
{
lean_object* v___x_5037_; lean_object* v___x_5038_; 
v___x_5037_ = lean_unsigned_to_nat(1u);
v___x_5038_ = lean_nat_add(v_i_5031_, v___x_5037_);
lean_dec(v_i_5031_);
v_i_5031_ = v___x_5038_;
goto _start;
}
else
{
lean_object* v___x_5040_; 
v___x_5040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5040_, 0, v_i_5031_);
return v___x_5040_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2___boxed(lean_object* v_xs_5041_, lean_object* v_v_5042_, lean_object* v_i_5043_){
_start:
{
lean_object* v_res_5044_; 
v_res_5044_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(v_xs_5041_, v_v_5042_, v_i_5043_);
lean_dec(v_v_5042_);
lean_dec_ref(v_xs_5041_);
return v_res_5044_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(lean_object* v_xs_5045_, lean_object* v_v_5046_){
_start:
{
lean_object* v___x_5047_; lean_object* v___x_5048_; 
v___x_5047_ = lean_unsigned_to_nat(0u);
v___x_5048_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(v_xs_5045_, v_v_5046_, v___x_5047_);
return v___x_5048_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2___boxed(lean_object* v_xs_5049_, lean_object* v_v_5050_){
_start:
{
lean_object* v_res_5051_; 
v_res_5051_ = l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(v_xs_5049_, v_v_5050_);
lean_dec(v_v_5050_);
lean_dec_ref(v_xs_5049_);
return v_res_5051_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(lean_object* v_fnIdx_5055_, lean_object* v_as_5056_, size_t v_sz_5057_, size_t v_i_5058_, lean_object* v_b_5059_){
_start:
{
uint8_t v___x_5060_; 
v___x_5060_ = lean_usize_dec_lt(v_i_5058_, v_sz_5057_);
if (v___x_5060_ == 0)
{
return v_b_5059_;
}
else
{
lean_object* v___x_5061_; lean_object* v_a_5062_; lean_object* v___x_5063_; 
lean_dec_ref(v_b_5059_);
v___x_5061_ = lean_box(0);
v_a_5062_ = lean_array_uget_borrowed(v_as_5056_, v_i_5058_);
v___x_5063_ = l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(v_a_5062_, v_fnIdx_5055_);
if (lean_obj_tag(v___x_5063_) == 0)
{
lean_object* v___x_5064_; size_t v___x_5065_; size_t v___x_5066_; 
v___x_5064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0));
v___x_5065_ = ((size_t)1ULL);
v___x_5066_ = lean_usize_add(v_i_5058_, v___x_5065_);
v_i_5058_ = v___x_5066_;
v_b_5059_ = v___x_5064_;
goto _start;
}
else
{
lean_object* v_val_5068_; lean_object* v___x_5070_; uint8_t v_isShared_5071_; uint8_t v_isSharedCheck_5079_; 
v_val_5068_ = lean_ctor_get(v___x_5063_, 0);
v_isSharedCheck_5079_ = !lean_is_exclusive(v___x_5063_);
if (v_isSharedCheck_5079_ == 0)
{
v___x_5070_ = v___x_5063_;
v_isShared_5071_ = v_isSharedCheck_5079_;
goto v_resetjp_5069_;
}
else
{
lean_inc(v_val_5068_);
lean_dec(v___x_5063_);
v___x_5070_ = lean_box(0);
v_isShared_5071_ = v_isSharedCheck_5079_;
goto v_resetjp_5069_;
}
v_resetjp_5069_:
{
lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5075_; 
v___x_5072_ = lean_array_get_size(v_a_5062_);
v___x_5073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5073_, 0, v___x_5072_);
lean_ctor_set(v___x_5073_, 1, v_val_5068_);
if (v_isShared_5071_ == 0)
{
lean_ctor_set(v___x_5070_, 0, v___x_5073_);
v___x_5075_ = v___x_5070_;
goto v_reusejp_5074_;
}
else
{
lean_object* v_reuseFailAlloc_5078_; 
v_reuseFailAlloc_5078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5078_, 0, v___x_5073_);
v___x_5075_ = v_reuseFailAlloc_5078_;
goto v_reusejp_5074_;
}
v_reusejp_5074_:
{
lean_object* v___x_5076_; lean_object* v___x_5077_; 
v___x_5076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5076_, 0, v___x_5075_);
v___x_5077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5077_, 0, v___x_5076_);
lean_ctor_set(v___x_5077_, 1, v___x_5061_);
return v___x_5077_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___boxed(lean_object* v_fnIdx_5080_, lean_object* v_as_5081_, lean_object* v_sz_5082_, lean_object* v_i_5083_, lean_object* v_b_5084_){
_start:
{
size_t v_sz_boxed_5085_; size_t v_i_boxed_5086_; lean_object* v_res_5087_; 
v_sz_boxed_5085_ = lean_unbox_usize(v_sz_5082_);
lean_dec(v_sz_5082_);
v_i_boxed_5086_ = lean_unbox_usize(v_i_5083_);
lean_dec(v_i_5083_);
v_res_5087_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(v_fnIdx_5080_, v_as_5081_, v_sz_boxed_5085_, v_i_boxed_5086_, v_b_5084_);
lean_dec_ref(v_as_5081_);
lean_dec(v_fnIdx_5080_);
return v_res_5087_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; 
v___x_5089_ = ((lean_object*)(l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0));
v___x_5090_ = l_Lean_stringToMessageData(v___x_5089_);
return v___x_5090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0(lean_object* v_recArgInfo_5091_, lean_object* v_positions_5092_, lean_object* v_fnIdx_5093_, lean_object* v_brecOnConst_5094_, lean_object* v_packedFArgs_5095_, lean_object* v_funTypes_5096_, lean_object* v_ys_5097_, lean_object* v___value_5098_, lean_object* v___y_5099_, lean_object* v___y_5100_, lean_object* v___y_5101_, lean_object* v___y_5102_){
_start:
{
lean_object* v___y_5105_; lean_object* v___y_5106_; lean_object* v___y_5107_; lean_object* v___y_5108_; lean_object* v___x_5122_; lean_object* v_fst_5123_; lean_object* v_snd_5124_; lean_object* v___x_5125_; size_t v_sz_5126_; size_t v___x_5127_; lean_object* v___x_5128_; lean_object* v_fst_5129_; 
lean_inc_ref(v_ys_5097_);
lean_inc_ref(v_recArgInfo_5091_);
v___x_5122_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_5091_, v_ys_5097_);
v_fst_5123_ = lean_ctor_get(v___x_5122_, 0);
lean_inc(v_fst_5123_);
v_snd_5124_ = lean_ctor_get(v___x_5122_, 1);
lean_inc(v_snd_5124_);
lean_dec_ref(v___x_5122_);
v___x_5125_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0));
v_sz_5126_ = lean_array_size(v_positions_5092_);
v___x_5127_ = ((size_t)0ULL);
v___x_5128_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(v_fnIdx_5093_, v_positions_5092_, v_sz_5126_, v___x_5127_, v___x_5125_);
v_fst_5129_ = lean_ctor_get(v___x_5128_, 0);
lean_inc(v_fst_5129_);
lean_dec_ref(v___x_5128_);
if (lean_obj_tag(v_fst_5129_) == 0)
{
lean_dec(v_snd_5124_);
lean_dec(v_fst_5123_);
lean_dec_ref(v_ys_5097_);
lean_dec_ref(v_brecOnConst_5094_);
lean_dec_ref(v_recArgInfo_5091_);
v___y_5105_ = v___y_5099_;
v___y_5106_ = v___y_5100_;
v___y_5107_ = v___y_5101_;
v___y_5108_ = v___y_5102_;
goto v___jp_5104_;
}
else
{
lean_object* v_val_5130_; 
v_val_5130_ = lean_ctor_get(v_fst_5129_, 0);
lean_inc(v_val_5130_);
lean_dec_ref(v_fst_5129_);
if (lean_obj_tag(v_val_5130_) == 1)
{
lean_object* v_val_5131_; lean_object* v_fst_5132_; lean_object* v_snd_5133_; lean_object* v_indIdx_5134_; lean_object* v_brecOn_5135_; lean_object* v_brecOn_5136_; lean_object* v_brecOn_5137_; lean_object* v___x_5138_; 
lean_dec(v_fnIdx_5093_);
lean_dec_ref(v_positions_5092_);
v_val_5131_ = lean_ctor_get(v_val_5130_, 0);
lean_inc(v_val_5131_);
lean_dec_ref(v_val_5130_);
v_fst_5132_ = lean_ctor_get(v_val_5131_, 0);
lean_inc(v_fst_5132_);
v_snd_5133_ = lean_ctor_get(v_val_5131_, 1);
lean_inc(v_snd_5133_);
lean_dec(v_val_5131_);
v_indIdx_5134_ = lean_ctor_get(v_recArgInfo_5091_, 5);
lean_inc(v_indIdx_5134_);
lean_dec_ref(v_recArgInfo_5091_);
v_brecOn_5135_ = lean_apply_1(v_brecOnConst_5094_, v_indIdx_5134_);
v_brecOn_5136_ = l_Lean_mkAppN(v_brecOn_5135_, v_fst_5123_);
lean_dec(v_fst_5123_);
v_brecOn_5137_ = l_Lean_mkAppN(v_brecOn_5136_, v_packedFArgs_5095_);
lean_inc(v___y_5102_);
lean_inc_ref(v___y_5101_);
lean_inc(v___y_5100_);
lean_inc_ref(v___y_5099_);
v___x_5138_ = l_Lean_Meta_PProdN_projM(v_fst_5132_, v_snd_5133_, v_brecOn_5137_, v___y_5099_, v___y_5100_, v___y_5101_, v___y_5102_);
lean_dec(v_snd_5133_);
lean_dec(v_fst_5132_);
if (lean_obj_tag(v___x_5138_) == 0)
{
lean_object* v_a_5139_; lean_object* v___x_5140_; uint8_t v___x_5141_; uint8_t v___x_5142_; lean_object* v___x_5143_; 
v_a_5139_ = lean_ctor_get(v___x_5138_, 0);
lean_inc(v_a_5139_);
lean_dec_ref(v___x_5138_);
v___x_5140_ = l_Lean_mkAppN(v_a_5139_, v_snd_5124_);
lean_dec(v_snd_5124_);
v___x_5141_ = 1;
v___x_5142_ = 1;
v___x_5143_ = l_Lean_Meta_mkLetFVars(v_funTypes_5096_, v___x_5140_, v___x_5141_, v___x_5141_, v___x_5142_, v___y_5099_, v___y_5100_, v___y_5101_, v___y_5102_);
if (lean_obj_tag(v___x_5143_) == 0)
{
lean_object* v_a_5144_; uint8_t v___x_5145_; lean_object* v___x_5146_; 
v_a_5144_ = lean_ctor_get(v___x_5143_, 0);
lean_inc(v_a_5144_);
lean_dec_ref(v___x_5143_);
v___x_5145_ = 0;
v___x_5146_ = l_Lean_Meta_mkLambdaFVars(v_ys_5097_, v_a_5144_, v___x_5145_, v___x_5141_, v___x_5145_, v___x_5141_, v___x_5142_, v___y_5099_, v___y_5100_, v___y_5101_, v___y_5102_);
lean_dec(v___y_5102_);
lean_dec_ref(v___y_5101_);
lean_dec(v___y_5100_);
lean_dec_ref(v___y_5099_);
lean_dec_ref(v_ys_5097_);
return v___x_5146_;
}
else
{
lean_dec(v___y_5102_);
lean_dec_ref(v___y_5101_);
lean_dec(v___y_5100_);
lean_dec_ref(v___y_5099_);
lean_dec_ref(v_ys_5097_);
return v___x_5143_;
}
}
else
{
lean_dec(v_snd_5124_);
lean_dec(v___y_5102_);
lean_dec_ref(v___y_5101_);
lean_dec(v___y_5100_);
lean_dec_ref(v___y_5099_);
lean_dec_ref(v_ys_5097_);
return v___x_5138_;
}
}
else
{
lean_dec(v_val_5130_);
lean_dec(v_snd_5124_);
lean_dec(v_fst_5123_);
lean_dec_ref(v_ys_5097_);
lean_dec_ref(v_brecOnConst_5094_);
lean_dec_ref(v_recArgInfo_5091_);
v___y_5105_ = v___y_5099_;
v___y_5106_ = v___y_5100_;
v___y_5107_ = v___y_5101_;
v___y_5108_ = v___y_5102_;
goto v___jp_5104_;
}
}
v___jp_5104_:
{
lean_object* v___x_5109_; lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; 
v___x_5109_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1, &l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1);
v___x_5110_ = l_Nat_reprFast(v_fnIdx_5093_);
v___x_5111_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5111_, 0, v___x_5110_);
v___x_5112_ = l_Lean_MessageData_ofFormat(v___x_5111_);
v___x_5113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5113_, 0, v___x_5109_);
lean_ctor_set(v___x_5113_, 1, v___x_5112_);
v___x_5114_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__3, &l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3);
v___x_5115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5115_, 0, v___x_5113_);
lean_ctor_set(v___x_5115_, 1, v___x_5114_);
v___x_5116_ = lean_array_to_list(v_positions_5092_);
v___x_5117_ = lean_box(0);
v___x_5118_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(v___x_5116_, v___x_5117_);
v___x_5119_ = l_Lean_MessageData_ofList(v___x_5118_);
v___x_5120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5120_, 0, v___x_5115_);
lean_ctor_set(v___x_5120_, 1, v___x_5119_);
v___x_5121_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v___x_5120_, v___y_5105_, v___y_5106_, v___y_5107_, v___y_5108_);
lean_dec(v___y_5108_);
lean_dec_ref(v___y_5107_);
lean_dec(v___y_5106_);
lean_dec_ref(v___y_5105_);
return v___x_5121_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed(lean_object* v_recArgInfo_5147_, lean_object* v_positions_5148_, lean_object* v_fnIdx_5149_, lean_object* v_brecOnConst_5150_, lean_object* v_packedFArgs_5151_, lean_object* v_funTypes_5152_, lean_object* v_ys_5153_, lean_object* v___value_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_){
_start:
{
lean_object* v_res_5160_; 
v_res_5160_ = l_Lean_Elab_Structural_mkBRecOnApp___lam__0(v_recArgInfo_5147_, v_positions_5148_, v_fnIdx_5149_, v_brecOnConst_5150_, v_packedFArgs_5151_, v_funTypes_5152_, v_ys_5153_, v___value_5154_, v___y_5155_, v___y_5156_, v___y_5157_, v___y_5158_);
lean_dec_ref(v___value_5154_);
lean_dec_ref(v_funTypes_5152_);
lean_dec_ref(v_packedFArgs_5151_);
return v_res_5160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp(lean_object* v_positions_5161_, lean_object* v_fnIdx_5162_, lean_object* v_brecOnConst_5163_, lean_object* v_packedFArgs_5164_, lean_object* v_funTypes_5165_, lean_object* v_recArgInfo_5166_, lean_object* v_value_5167_, lean_object* v_a_5168_, lean_object* v_a_5169_, lean_object* v_a_5170_, lean_object* v_a_5171_){
_start:
{
lean_object* v___f_5173_; uint8_t v___x_5174_; lean_object* v___x_5175_; 
v___f_5173_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed), 13, 6);
lean_closure_set(v___f_5173_, 0, v_recArgInfo_5166_);
lean_closure_set(v___f_5173_, 1, v_positions_5161_);
lean_closure_set(v___f_5173_, 2, v_fnIdx_5162_);
lean_closure_set(v___f_5173_, 3, v_brecOnConst_5163_);
lean_closure_set(v___f_5173_, 4, v_packedFArgs_5164_);
lean_closure_set(v___f_5173_, 5, v_funTypes_5165_);
v___x_5174_ = 0;
v___x_5175_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_5167_, v___f_5173_, v___x_5174_, v_a_5168_, v_a_5169_, v_a_5170_, v_a_5171_);
return v___x_5175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___boxed(lean_object* v_positions_5176_, lean_object* v_fnIdx_5177_, lean_object* v_brecOnConst_5178_, lean_object* v_packedFArgs_5179_, lean_object* v_funTypes_5180_, lean_object* v_recArgInfo_5181_, lean_object* v_value_5182_, lean_object* v_a_5183_, lean_object* v_a_5184_, lean_object* v_a_5185_, lean_object* v_a_5186_, lean_object* v_a_5187_){
_start:
{
lean_object* v_res_5188_; 
v_res_5188_ = l_Lean_Elab_Structural_mkBRecOnApp(v_positions_5176_, v_fnIdx_5177_, v_brecOnConst_5178_, v_packedFArgs_5179_, v_funTypes_5180_, v_recArgInfo_5181_, v_value_5182_, v_a_5183_, v_a_5184_, v_a_5185_, v_a_5186_);
return v_res_5188_;
}
}
lean_object* runtime_initialize_Lean_Util_HasConstCache(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_Lemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_HasConstCache(uint8_t builtin);
lean_object* initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* initialize_Init_Data_Order_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
}
#ifdef __cplusplus
}
#endif
