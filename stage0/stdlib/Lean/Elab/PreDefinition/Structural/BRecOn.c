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
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "not type correct!"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "initial belowDict for "};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__6;
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__7_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__9;
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
lean_object* v___x_792_; lean_object* v___f_793_; size_t v_sz_794_; size_t v___x_795_; lean_object* v___x_7888__overap_796_; lean_object* v___x_797_; 
v___x_792_ = lean_array_fget_borrowed(v_array_780_, v_start_781_);
lean_inc(v___x_792_);
v___f_793_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___boxed), 9, 1);
lean_closure_set(v___f_793_, 0, v___x_792_);
v_sz_794_ = lean_array_size(v_a_767_);
v___x_795_ = ((size_t)0ULL);
v___x_7888__overap_796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_766_, v_a_767_, v___f_793_, v_sz_794_, v___x_795_, v_fst_776_);
v___x_797_ = lean_apply_5(v___x_7888__overap_796_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, lean_box(0));
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
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_842_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__3));
v___x_843_ = l_Lean_stringToMessageData(v___x_842_);
return v___x_843_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__6(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__5));
v___x_846_ = l_Lean_stringToMessageData(v___x_845_);
return v___x_846_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__9(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__8));
v___x_850_ = l_Lean_stringToMessageData(v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(lean_object* v___x_851_, lean_object* v___x_852_, lean_object* v_positions_853_, lean_object* v_a_854_, lean_object* v___x_855_, lean_object* v___x_856_, lean_object* v___x_857_, lean_object* v___x_858_, lean_object* v___x_859_, lean_object* v_k_860_, lean_object* v___x_861_, lean_object* v___f_862_, lean_object* v_Cs_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v___x_869_; lean_object* v___x_7916__overap_870_; lean_object* v___x_871_; 
v___x_869_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__0));
lean_inc_ref(v_Cs_863_);
lean_inc_ref(v___x_851_);
v___x_7916__overap_870_ = l_Lean_Elab_Structural_Positions_mapMwith___redArg(v___x_851_, v___x_852_, v___x_869_, v_positions_853_, v_a_854_, v_Cs_863_);
lean_inc(v___y_867_);
lean_inc_ref(v___y_866_);
lean_inc(v___y_865_);
lean_inc_ref(v___y_864_);
v___x_871_ = lean_apply_5(v___x_7916__overap_870_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, lean_box(0));
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_7919__overap_873_; lean_object* v___x_874_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref(v___x_871_);
lean_inc(v___x_857_);
lean_inc(v___x_856_);
lean_inc_ref(v___x_855_);
lean_inc_ref(v___x_851_);
v___x_7919__overap_873_ = l_Lean_isTracingEnabledFor___redArg(v___x_851_, v___x_855_, v___x_856_, v___x_857_);
lean_inc(v___y_867_);
lean_inc_ref(v___y_866_);
lean_inc(v___y_865_);
lean_inc_ref(v___y_864_);
v___x_874_ = lean_apply_5(v___x_7919__overap_873_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, lean_box(0));
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; uint8_t v___x_928_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_a_875_);
lean_dec_ref(v___x_874_);
v___x_876_ = l_Lean_mkAppN(v___x_858_, v_a_872_);
lean_dec(v_a_872_);
v___x_877_ = l_Subarray_copy___redArg(v___x_859_);
v___x_878_ = l_Lean_mkAppN(v___x_876_, v___x_877_);
lean_dec_ref(v___x_877_);
v___x_928_ = lean_unbox(v_a_875_);
lean_dec(v_a_875_);
if (v___x_928_ == 0)
{
v___y_880_ = v___y_864_;
v___y_881_ = v___y_865_;
v___y_882_ = v___y_866_;
v___y_883_ = v___y_867_;
goto v___jp_879_;
}
else
{
lean_object* v___f_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v_toMonadRef_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_7979__overap_947_; lean_object* v___x_948_; 
v___f_929_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_930_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2));
v___x_931_ = l_Lean_Core_instMonadQuotationCoreM;
lean_inc(v___x_861_);
v___x_932_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_930_, v___x_861_, v___x_931_);
lean_inc(v___f_862_);
v___x_933_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_929_, v___f_862_, v___x_932_);
v_toMonadRef_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc_ref(v_toMonadRef_934_);
lean_dec_ref(v___x_933_);
v___x_935_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_936_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__6);
lean_inc_ref(v_Cs_863_);
v___x_937_ = lean_array_to_list(v_Cs_863_);
v___x_938_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__7));
v___x_939_ = lean_box(0);
v___x_940_ = l_List_mapTR_loop___redArg(v___x_938_, v___x_937_, v___x_939_);
v___x_941_ = l_Lean_MessageData_ofList(v___x_940_);
v___x_942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_936_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__9, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__9);
v___x_944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_942_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
lean_inc_ref(v___x_878_);
v___x_945_ = l_Lean_indentExpr(v___x_878_);
v___x_946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_944_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
lean_inc(v___x_857_);
lean_inc_ref(v___x_855_);
lean_inc_ref(v___x_851_);
v___x_7979__overap_947_ = l_Lean_addTrace___redArg(v___x_851_, v___x_855_, v_toMonadRef_934_, v___x_935_, v___x_857_, v___x_946_);
lean_inc(v___y_867_);
lean_inc_ref(v___y_866_);
lean_inc(v___y_865_);
lean_inc_ref(v___y_864_);
v___x_948_ = lean_apply_5(v___x_7979__overap_947_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, lean_box(0));
if (lean_obj_tag(v___x_948_) == 0)
{
lean_dec_ref(v___x_948_);
v___y_880_ = v___y_864_;
v___y_881_ = v___y_865_;
v___y_882_ = v___y_866_;
v___y_883_ = v___y_867_;
goto v___jp_879_;
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
lean_dec_ref(v___x_878_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
lean_dec_ref(v_Cs_863_);
lean_dec(v___f_862_);
lean_dec(v___x_861_);
lean_dec_ref(v_k_860_);
lean_dec(v___x_857_);
lean_dec(v___x_856_);
lean_dec_ref(v___x_855_);
lean_dec_ref(v___x_851_);
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
v___jp_879_:
{
lean_object* v___x_884_; 
lean_inc(v___y_883_);
lean_inc_ref(v___y_882_);
lean_inc(v___y_881_);
lean_inc_ref(v___y_880_);
lean_inc_ref(v___x_878_);
v___x_884_ = l_Lean_Meta_isTypeCorrect(v___x_878_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; uint8_t v___x_886_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_a_885_);
lean_dec_ref(v___x_884_);
v___x_886_ = lean_unbox(v_a_885_);
lean_dec(v_a_885_);
if (v___x_886_ == 0)
{
lean_object* v___x_7934__overap_887_; lean_object* v___x_888_; 
lean_inc(v___x_857_);
lean_inc_ref(v___x_855_);
lean_inc_ref(v___x_851_);
v___x_7934__overap_887_ = l_Lean_isTracingEnabledFor___redArg(v___x_851_, v___x_855_, v___x_856_, v___x_857_);
lean_inc(v___y_883_);
lean_inc_ref(v___y_882_);
lean_inc(v___y_881_);
lean_inc_ref(v___y_880_);
v___x_888_ = lean_apply_5(v___x_7934__overap_887_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, lean_box(0));
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; uint8_t v___x_890_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref(v___x_888_);
v___x_890_ = lean_unbox(v_a_889_);
lean_dec(v_a_889_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; 
lean_dec(v___f_862_);
lean_dec(v___x_861_);
lean_dec(v___x_857_);
lean_dec_ref(v___x_855_);
lean_dec_ref(v___x_851_);
v___x_891_ = lean_apply_7(v_k_860_, v_Cs_863_, v___x_878_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, lean_box(0));
return v___x_891_;
}
else
{
lean_object* v___f_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v_toMonadRef_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_7946__overap_900_; lean_object* v___x_901_; 
v___f_892_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_893_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2));
v___x_894_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_895_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_893_, v___x_861_, v___x_894_);
v___x_896_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_892_, v___f_862_, v___x_895_);
v_toMonadRef_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc_ref(v_toMonadRef_897_);
lean_dec_ref(v___x_896_);
v___x_898_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_899_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4);
v___x_7946__overap_900_ = l_Lean_addTrace___redArg(v___x_851_, v___x_855_, v_toMonadRef_897_, v___x_898_, v___x_857_, v___x_899_);
lean_inc(v___y_883_);
lean_inc_ref(v___y_882_);
lean_inc(v___y_881_);
lean_inc_ref(v___y_880_);
v___x_901_ = lean_apply_5(v___x_7946__overap_900_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, lean_box(0));
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v___x_902_; 
lean_dec_ref(v___x_901_);
v___x_902_ = lean_apply_7(v_k_860_, v_Cs_863_, v___x_878_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, lean_box(0));
return v___x_902_;
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec_ref(v___x_878_);
lean_dec_ref(v_Cs_863_);
lean_dec_ref(v_k_860_);
v_a_903_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_901_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_901_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
}
else
{
lean_object* v_a_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_918_; 
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec_ref(v___x_878_);
lean_dec_ref(v_Cs_863_);
lean_dec(v___f_862_);
lean_dec(v___x_861_);
lean_dec_ref(v_k_860_);
lean_dec(v___x_857_);
lean_dec_ref(v___x_855_);
lean_dec_ref(v___x_851_);
v_a_911_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_918_ == 0)
{
v___x_913_ = v___x_888_;
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_a_911_);
lean_dec(v___x_888_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_918_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_916_; 
if (v_isShared_914_ == 0)
{
v___x_916_ = v___x_913_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_a_911_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
}
else
{
lean_object* v___x_919_; 
lean_dec(v___f_862_);
lean_dec(v___x_861_);
lean_dec(v___x_857_);
lean_dec(v___x_856_);
lean_dec_ref(v___x_855_);
lean_dec_ref(v___x_851_);
v___x_919_ = lean_apply_7(v_k_860_, v_Cs_863_, v___x_878_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, lean_box(0));
return v___x_919_;
}
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec_ref(v___x_878_);
lean_dec_ref(v_Cs_863_);
lean_dec(v___f_862_);
lean_dec(v___x_861_);
lean_dec_ref(v_k_860_);
lean_dec(v___x_857_);
lean_dec(v___x_856_);
lean_dec_ref(v___x_855_);
lean_dec_ref(v___x_851_);
v_a_920_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_884_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_884_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
}
else
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_964_; 
lean_dec(v_a_872_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
lean_dec_ref(v_Cs_863_);
lean_dec(v___f_862_);
lean_dec(v___x_861_);
lean_dec_ref(v_k_860_);
lean_dec_ref(v___x_859_);
lean_dec_ref(v___x_858_);
lean_dec(v___x_857_);
lean_dec(v___x_856_);
lean_dec_ref(v___x_855_);
lean_dec_ref(v___x_851_);
v_a_957_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_964_ == 0)
{
v___x_959_ = v___x_874_;
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_874_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_957_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
lean_dec_ref(v_Cs_863_);
lean_dec(v___f_862_);
lean_dec(v___x_861_);
lean_dec_ref(v_k_860_);
lean_dec_ref(v___x_859_);
lean_dec_ref(v___x_858_);
lean_dec(v___x_857_);
lean_dec(v___x_856_);
lean_dec_ref(v___x_855_);
lean_dec_ref(v___x_851_);
v_a_965_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_871_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_871_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed(lean_object** _args){
lean_object* v___x_973_ = _args[0];
lean_object* v___x_974_ = _args[1];
lean_object* v_positions_975_ = _args[2];
lean_object* v_a_976_ = _args[3];
lean_object* v___x_977_ = _args[4];
lean_object* v___x_978_ = _args[5];
lean_object* v___x_979_ = _args[6];
lean_object* v___x_980_ = _args[7];
lean_object* v___x_981_ = _args[8];
lean_object* v_k_982_ = _args[9];
lean_object* v___x_983_ = _args[10];
lean_object* v___f_984_ = _args[11];
lean_object* v_Cs_985_ = _args[12];
lean_object* v___y_986_ = _args[13];
lean_object* v___y_987_ = _args[14];
lean_object* v___y_988_ = _args[15];
lean_object* v___y_989_ = _args[16];
lean_object* v___y_990_ = _args[17];
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(v___x_973_, v___x_974_, v_positions_975_, v_a_976_, v___x_977_, v___x_978_, v___x_979_, v___x_980_, v___x_981_, v_k_982_, v___x_983_, v___f_984_, v_Cs_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
return v_res_991_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = lean_unsigned_to_nat(37u);
v___x_993_ = l_Lean_Level_ofNat(v___x_992_);
return v___x_993_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0);
v___x_995_ = l_Lean_Expr_sort___override(v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2));
v___x_998_ = l_Lean_stringToMessageData(v___x_997_);
return v___x_998_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5(void){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_1000_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4));
v___x_1001_ = l_Lean_stringToMessageData(v___x_1000_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(lean_object* v_positions_1002_, lean_object* v___x_1003_, lean_object* v___f_1004_, lean_object* v___f_1005_, lean_object* v___x_1006_, lean_object* v_numTypeFormers_1007_, lean_object* v___x_1008_, lean_object* v___x_1009_, lean_object* v___x_1010_, lean_object* v___x_1011_, lean_object* v_k_1012_, lean_object* v___x_1013_, lean_object* v___f_1014_, lean_object* v_numIndParams_1015_, lean_object* v_a_1016_, lean_object* v_f_1017_, lean_object* v_args_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_){
_start:
{
lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1068_; lean_object* v___y_1069_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___x_1158_; lean_object* v___x_1159_; uint8_t v___x_1160_; 
v___x_1158_ = lean_nat_add(v_numIndParams_1015_, v_numTypeFormers_1007_);
v___x_1159_ = lean_array_get_size(v_args_1018_);
v___x_1160_ = lean_nat_dec_lt(v___x_1158_, v___x_1159_);
lean_dec(v___x_1158_);
if (v___x_1160_ == 0)
{
lean_object* v___x_8099__overap_1161_; lean_object* v___x_1162_; 
lean_dec_ref(v_args_1018_);
lean_dec_ref(v_f_1017_);
lean_dec(v_numIndParams_1015_);
lean_dec_ref(v_k_1012_);
lean_dec_ref(v___x_1011_);
lean_dec(v_numTypeFormers_1007_);
lean_dec_ref(v___x_1006_);
lean_dec_ref(v___f_1005_);
lean_dec_ref(v___f_1004_);
lean_dec_ref(v_positions_1002_);
lean_inc(v___x_1010_);
lean_inc_ref(v___x_1008_);
lean_inc_ref(v___x_1003_);
v___x_8099__overap_1161_ = l_Lean_isTracingEnabledFor___redArg(v___x_1003_, v___x_1008_, v___x_1009_, v___x_1010_);
lean_inc(v___y_1022_);
lean_inc_ref(v___y_1021_);
lean_inc(v___y_1020_);
lean_inc_ref(v___y_1019_);
v___x_1162_ = lean_apply_5(v___x_8099__overap_1161_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, lean_box(0));
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v_a_1163_; uint8_t v___x_1164_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
lean_inc(v_a_1163_);
lean_dec_ref(v___x_1162_);
v___x_1164_ = lean_unbox(v_a_1163_);
lean_dec(v_a_1163_);
if (v___x_1164_ == 0)
{
lean_dec_ref(v_a_1016_);
lean_dec(v___f_1014_);
lean_dec(v___x_1013_);
lean_dec(v___x_1010_);
lean_dec_ref(v___x_1008_);
lean_dec_ref(v___x_1003_);
v___y_1145_ = v___y_1019_;
v___y_1146_ = v___y_1020_;
v___y_1147_ = v___y_1021_;
v___y_1148_ = v___y_1022_;
goto v___jp_1144_;
}
else
{
lean_object* v___f_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v_toMonadRef_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_8124__overap_1175_; lean_object* v___x_1176_; 
v___f_1165_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_1166_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2));
v___x_1167_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1168_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1166_, v___x_1013_, v___x_1167_);
v___x_1169_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1165_, v___f_1014_, v___x_1168_);
v_toMonadRef_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc_ref(v_toMonadRef_1170_);
lean_dec_ref(v___x_1169_);
v___x_1171_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1172_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5);
v___x_1173_ = l_Lean_indentExpr(v_a_1016_);
v___x_1174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1172_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_8124__overap_1175_ = l_Lean_addTrace___redArg(v___x_1003_, v___x_1008_, v_toMonadRef_1170_, v___x_1171_, v___x_1010_, v___x_1174_);
lean_inc(v___y_1022_);
lean_inc_ref(v___y_1021_);
lean_inc(v___y_1020_);
lean_inc_ref(v___y_1019_);
v___x_1176_ = lean_apply_5(v___x_8124__overap_1175_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, lean_box(0));
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_dec_ref(v___x_1176_);
v___y_1145_ = v___y_1019_;
v___y_1146_ = v___y_1020_;
v___y_1147_ = v___y_1021_;
v___y_1148_ = v___y_1022_;
goto v___jp_1144_;
}
else
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1179_ = v___x_1176_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1176_);
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
}
else
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
lean_dec_ref(v_a_1016_);
lean_dec(v___f_1014_);
lean_dec(v___x_1013_);
lean_dec(v___x_1010_);
lean_dec_ref(v___x_1008_);
lean_dec_ref(v___x_1003_);
v_a_1185_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1162_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1162_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
else
{
lean_dec_ref(v_a_1016_);
v___y_1133_ = v___y_1019_;
v___y_1134_ = v___y_1020_;
v___y_1135_ = v___y_1021_;
v___y_1136_ = v___y_1022_;
goto v___jp_1132_;
}
v___jp_1024_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; size_t v_sz_1038_; size_t v___x_1039_; lean_object* v___x_8025__overap_1040_; lean_object* v___x_1041_; 
v___x_1033_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1);
v___x_1034_ = lean_mk_array(v___y_1028_, v___x_1033_);
v___x_1035_ = lean_array_get_size(v___y_1027_);
v___x_1036_ = l_Array_toSubarray___redArg(v___y_1027_, v___y_1025_, v___x_1035_);
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1034_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v_sz_1038_ = lean_array_size(v_positions_1002_);
v___x_1039_ = ((size_t)0ULL);
lean_inc_ref(v___x_1003_);
v___x_8025__overap_1040_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1003_, v_positions_1002_, v___f_1004_, v_sz_1038_, v___x_1039_, v___x_1037_);
lean_inc(v___y_1032_);
lean_inc_ref(v___y_1031_);
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
v___x_1041_ = lean_apply_5(v___x_8025__overap_1040_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, lean_box(0));
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; lean_object* v_fst_1043_; size_t v_sz_1044_; lean_object* v___x_8028__overap_1045_; lean_object* v___x_1046_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_a_1042_);
lean_dec_ref(v___x_1041_);
v_fst_1043_ = lean_ctor_get(v_a_1042_, 0);
lean_inc(v_fst_1043_);
lean_dec(v_a_1042_);
v_sz_1044_ = lean_array_size(v_fst_1043_);
lean_inc_ref(v___x_1003_);
v___x_8028__overap_1045_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1003_, v___f_1005_, v_sz_1044_, v___x_1039_, v_fst_1043_);
lean_inc(v___y_1032_);
lean_inc_ref(v___y_1031_);
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
v___x_1046_ = lean_apply_5(v___x_8028__overap_1045_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, lean_box(0));
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; uint8_t v___x_1048_; lean_object* v___x_8032__overap_1049_; lean_object* v___x_1050_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
lean_inc(v_a_1047_);
lean_dec_ref(v___x_1046_);
v___x_1048_ = 0;
v___x_8032__overap_1049_ = l_Lean_Meta_withLocalDeclsD___redArg(v___x_1006_, v___x_1003_, v_a_1047_, v___y_1026_, v___x_1048_);
v___x_1050_ = lean_apply_5(v___x_8032__overap_1049_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, lean_box(0));
return v___x_1050_;
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec_ref(v___y_1026_);
lean_dec_ref(v___x_1006_);
lean_dec_ref(v___x_1003_);
v_a_1051_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1046_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1046_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec_ref(v___y_1026_);
lean_dec_ref(v___x_1006_);
lean_dec_ref(v___f_1005_);
lean_dec_ref(v___x_1003_);
v_a_1059_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1041_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1041_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
v___jp_1067_:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1075_ = l_Subarray_copy___redArg(v___y_1071_);
v___x_1076_ = l_Lean_mkAppN(v_f_1017_, v___x_1075_);
lean_dec_ref(v___x_1075_);
lean_inc(v___y_1068_);
lean_inc_ref(v___y_1073_);
lean_inc(v___y_1070_);
lean_inc_ref(v___y_1072_);
lean_inc_ref(v___x_1076_);
v___x_1077_ = l_Lean_Meta_inferArgumentTypesN(v_numTypeFormers_1007_, v___x_1076_, v___y_1072_, v___y_1070_, v___y_1073_, v___y_1068_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_8053__overap_1079_; lean_object* v___x_1080_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref(v___x_1077_);
lean_inc(v___x_1010_);
lean_inc(v___x_1009_);
lean_inc_ref(v___x_1008_);
lean_inc_ref(v___x_1003_);
v___x_8053__overap_1079_ = l_Lean_isTracingEnabledFor___redArg(v___x_1003_, v___x_1008_, v___x_1009_, v___x_1010_);
lean_inc(v___y_1068_);
lean_inc_ref(v___y_1073_);
lean_inc(v___y_1070_);
lean_inc_ref(v___y_1072_);
v___x_1080_ = lean_apply_5(v___x_8053__overap_1079_, v___y_1072_, v___y_1070_, v___y_1073_, v___y_1068_, lean_box(0));
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v_lower_1082_; lean_object* v_upper_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1115_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
lean_dec_ref(v___x_1080_);
v_lower_1082_ = lean_ctor_get(v___y_1074_, 0);
v_upper_1083_ = lean_ctor_get(v___y_1074_, 1);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___y_1074_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1085_ = v___y_1074_;
v_isShared_1086_ = v_isSharedCheck_1115_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_upper_1083_);
lean_inc(v_lower_1082_);
lean_dec(v___y_1074_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1115_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1087_; lean_object* v___f_1088_; lean_object* v___x_1089_; uint8_t v___x_1090_; 
v___x_1087_ = l_Array_toSubarray___redArg(v_args_1018_, v_lower_1082_, v_upper_1083_);
lean_inc(v___f_1014_);
lean_inc(v___x_1013_);
lean_inc(v___x_1010_);
lean_inc_ref(v___x_1008_);
lean_inc(v_a_1078_);
lean_inc_ref(v_positions_1002_);
lean_inc_ref(v___x_1003_);
v___f_1088_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed), 18, 12);
lean_closure_set(v___f_1088_, 0, v___x_1003_);
lean_closure_set(v___f_1088_, 1, v___x_1011_);
lean_closure_set(v___f_1088_, 2, v_positions_1002_);
lean_closure_set(v___f_1088_, 3, v_a_1078_);
lean_closure_set(v___f_1088_, 4, v___x_1008_);
lean_closure_set(v___f_1088_, 5, v___x_1009_);
lean_closure_set(v___f_1088_, 6, v___x_1010_);
lean_closure_set(v___f_1088_, 7, v___x_1076_);
lean_closure_set(v___f_1088_, 8, v___x_1087_);
lean_closure_set(v___f_1088_, 9, v_k_1012_);
lean_closure_set(v___f_1088_, 10, v___x_1013_);
lean_closure_set(v___f_1088_, 11, v___f_1014_);
v___x_1089_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_1002_);
v___x_1090_ = lean_unbox(v_a_1081_);
lean_dec(v_a_1081_);
if (v___x_1090_ == 0)
{
lean_del_object(v___x_1085_);
lean_dec(v___f_1014_);
lean_dec(v___x_1013_);
lean_dec(v___x_1010_);
lean_dec_ref(v___x_1008_);
v___y_1025_ = v___y_1069_;
v___y_1026_ = v___f_1088_;
v___y_1027_ = v_a_1078_;
v___y_1028_ = v___x_1089_;
v___y_1029_ = v___y_1072_;
v___y_1030_ = v___y_1070_;
v___y_1031_ = v___y_1073_;
v___y_1032_ = v___y_1068_;
goto v___jp_1024_;
}
else
{
lean_object* v___f_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v_toMonadRef_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1103_; 
v___f_1091_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_1092_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2));
v___x_1093_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1094_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1092_, v___x_1013_, v___x_1093_);
v___x_1095_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1091_, v___f_1014_, v___x_1094_);
v_toMonadRef_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc_ref(v_toMonadRef_1096_);
lean_dec_ref(v___x_1095_);
v___x_1097_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1098_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3);
lean_inc(v___x_1089_);
v___x_1099_ = l_Nat_reprFast(v___x_1089_);
v___x_1100_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
v___x_1101_ = l_Lean_MessageData_ofFormat(v___x_1100_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set_tag(v___x_1085_, 7);
lean_ctor_set(v___x_1085_, 1, v___x_1101_);
lean_ctor_set(v___x_1085_, 0, v___x_1098_);
v___x_1103_ = v___x_1085_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1098_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v___x_1101_);
v___x_1103_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
lean_object* v___x_8071__overap_1104_; lean_object* v___x_1105_; 
lean_inc_ref(v___x_1003_);
v___x_8071__overap_1104_ = l_Lean_addTrace___redArg(v___x_1003_, v___x_1008_, v_toMonadRef_1096_, v___x_1097_, v___x_1010_, v___x_1103_);
lean_inc(v___y_1068_);
lean_inc_ref(v___y_1073_);
lean_inc(v___y_1070_);
lean_inc_ref(v___y_1072_);
v___x_1105_ = lean_apply_5(v___x_8071__overap_1104_, v___y_1072_, v___y_1070_, v___y_1073_, v___y_1068_, lean_box(0));
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_dec_ref(v___x_1105_);
v___y_1025_ = v___y_1069_;
v___y_1026_ = v___f_1088_;
v___y_1027_ = v_a_1078_;
v___y_1028_ = v___x_1089_;
v___y_1029_ = v___y_1072_;
v___y_1030_ = v___y_1070_;
v___y_1031_ = v___y_1073_;
v___y_1032_ = v___y_1068_;
goto v___jp_1024_;
}
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
lean_dec(v___x_1089_);
lean_dec_ref(v___f_1088_);
lean_dec(v_a_1078_);
lean_dec_ref(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1070_);
lean_dec(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___x_1006_);
lean_dec_ref(v___f_1005_);
lean_dec_ref(v___f_1004_);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v_positions_1002_);
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1108_ = v___x_1105_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1105_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1106_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
lean_dec(v_a_1078_);
lean_dec_ref(v___x_1076_);
lean_dec_ref(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1070_);
lean_dec(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v_args_1018_);
lean_dec(v___f_1014_);
lean_dec(v___x_1013_);
lean_dec_ref(v_k_1012_);
lean_dec_ref(v___x_1011_);
lean_dec(v___x_1010_);
lean_dec(v___x_1009_);
lean_dec_ref(v___x_1008_);
lean_dec_ref(v___x_1006_);
lean_dec_ref(v___f_1005_);
lean_dec_ref(v___f_1004_);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v_positions_1002_);
v_a_1116_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1080_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1080_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec_ref(v___x_1076_);
lean_dec_ref(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1070_);
lean_dec(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v_args_1018_);
lean_dec(v___f_1014_);
lean_dec(v___x_1013_);
lean_dec_ref(v_k_1012_);
lean_dec_ref(v___x_1011_);
lean_dec(v___x_1010_);
lean_dec(v___x_1009_);
lean_dec_ref(v___x_1008_);
lean_dec_ref(v___x_1006_);
lean_dec_ref(v___f_1005_);
lean_dec_ref(v___f_1004_);
lean_dec_ref(v___x_1003_);
lean_dec_ref(v_positions_1002_);
v_a_1124_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1077_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1077_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
v___jp_1132_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; uint8_t v___x_1141_; 
v___x_1137_ = lean_unsigned_to_nat(0u);
lean_inc(v_numIndParams_1015_);
lean_inc_ref(v_args_1018_);
v___x_1138_ = l_Array_toSubarray___redArg(v_args_1018_, v___x_1137_, v_numIndParams_1015_);
v___x_1139_ = lean_nat_add(v_numIndParams_1015_, v_numTypeFormers_1007_);
lean_dec(v_numIndParams_1015_);
v___x_1140_ = lean_array_get_size(v_args_1018_);
v___x_1141_ = lean_nat_dec_le(v___x_1139_, v___x_1137_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; 
v___x_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1139_);
lean_ctor_set(v___x_1142_, 1, v___x_1140_);
v___y_1068_ = v___y_1136_;
v___y_1069_ = v___x_1137_;
v___y_1070_ = v___y_1134_;
v___y_1071_ = v___x_1138_;
v___y_1072_ = v___y_1133_;
v___y_1073_ = v___y_1135_;
v___y_1074_ = v___x_1142_;
goto v___jp_1067_;
}
else
{
lean_object* v___x_1143_; 
lean_dec(v___x_1139_);
v___x_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1137_);
lean_ctor_set(v___x_1143_, 1, v___x_1140_);
v___y_1068_ = v___y_1136_;
v___y_1069_ = v___x_1137_;
v___y_1070_ = v___y_1134_;
v___y_1071_ = v___x_1138_;
v___y_1072_ = v___y_1133_;
v___y_1073_ = v___y_1135_;
v___y_1074_ = v___x_1143_;
goto v___jp_1067_;
}
}
v___jp_1144_:
{
lean_object* v___x_1149_; lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
v___x_1149_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec(v___y_1146_);
lean_dec_ref(v___y_1145_);
v_a_1150_ = lean_ctor_get(v___x_1149_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1149_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1149_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_positions_1193_ = _args[0];
lean_object* v___x_1194_ = _args[1];
lean_object* v___f_1195_ = _args[2];
lean_object* v___f_1196_ = _args[3];
lean_object* v___x_1197_ = _args[4];
lean_object* v_numTypeFormers_1198_ = _args[5];
lean_object* v___x_1199_ = _args[6];
lean_object* v___x_1200_ = _args[7];
lean_object* v___x_1201_ = _args[8];
lean_object* v___x_1202_ = _args[9];
lean_object* v_k_1203_ = _args[10];
lean_object* v___x_1204_ = _args[11];
lean_object* v___f_1205_ = _args[12];
lean_object* v_numIndParams_1206_ = _args[13];
lean_object* v_a_1207_ = _args[14];
lean_object* v_f_1208_ = _args[15];
lean_object* v_args_1209_ = _args[16];
lean_object* v___y_1210_ = _args[17];
lean_object* v___y_1211_ = _args[18];
lean_object* v___y_1212_ = _args[19];
lean_object* v___y_1213_ = _args[20];
lean_object* v___y_1214_ = _args[21];
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(v_positions_1193_, v___x_1194_, v___f_1195_, v___f_1196_, v___x_1197_, v_numTypeFormers_1198_, v___x_1199_, v___x_1200_, v___x_1201_, v___x_1202_, v_k_1203_, v___x_1204_, v___f_1205_, v_numIndParams_1206_, v_a_1207_, v_f_1208_, v_args_1209_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
return v_res_1215_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0(void){
_start:
{
lean_object* v___x_1216_; 
v___x_1216_ = l_instMonadEIO(lean_box(0));
return v___x_1216_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1(void){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0);
v___x_1218_ = l_StateRefT_x27_instMonad___redArg(v___x_1217_);
return v___x_1218_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8(void){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1225_ = l_Lean_Core_instMonadTraceCoreM;
v___x_1226_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7));
v___x_1227_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1226_, v___x_1225_);
return v___x_1227_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9(void){
_start:
{
lean_object* v___x_1228_; lean_object* v___f_1229_; lean_object* v___x_1230_; 
v___x_1228_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8);
v___f_1229_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6));
v___x_1230_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1229_, v___x_1228_);
return v___x_1230_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14(void){
_start:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1237_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1238_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7));
v___x_1239_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__2));
v___x_1240_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1239_, v___x_1238_, v___x_1237_);
return v___x_1240_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15(void){
_start:
{
lean_object* v___x_1241_; lean_object* v___f_1242_; lean_object* v___f_1243_; lean_object* v___x_1244_; 
v___x_1241_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14);
v___f_1242_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6));
v___f_1243_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__1));
v___x_1244_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1243_, v___f_1242_, v___x_1241_);
return v___x_1244_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17(void){
_start:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1246_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__16));
v___x_1247_ = l_Lean_stringToMessageData(v___x_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(lean_object* v_below_1248_, lean_object* v_numIndParams_1249_, lean_object* v_positions_1250_, lean_object* v_k_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_){
_start:
{
lean_object* v___x_1257_; lean_object* v_toApplicative_1258_; lean_object* v_toFunctor_1259_; lean_object* v_toSeq_1260_; lean_object* v_toSeqLeft_1261_; lean_object* v_toSeqRight_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1440_; 
v___x_1257_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc_ref(v_toApplicative_1258_);
v_toFunctor_1259_ = lean_ctor_get(v_toApplicative_1258_, 0);
v_toSeq_1260_ = lean_ctor_get(v_toApplicative_1258_, 2);
v_toSeqLeft_1261_ = lean_ctor_get(v_toApplicative_1258_, 3);
v_toSeqRight_1262_ = lean_ctor_get(v_toApplicative_1258_, 4);
v_isSharedCheck_1440_ = !lean_is_exclusive(v_toApplicative_1258_);
if (v_isSharedCheck_1440_ == 0)
{
lean_object* v_unused_1441_; 
v_unused_1441_ = lean_ctor_get(v_toApplicative_1258_, 1);
lean_dec(v_unused_1441_);
v___x_1264_ = v_toApplicative_1258_;
v_isShared_1265_ = v_isSharedCheck_1440_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_toSeqRight_1262_);
lean_inc(v_toSeqLeft_1261_);
lean_inc(v_toSeq_1260_);
lean_inc(v_toFunctor_1259_);
lean_dec(v_toApplicative_1258_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1440_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___f_1266_; lean_object* v___f_1267_; lean_object* v___f_1268_; lean_object* v___f_1269_; lean_object* v___x_1270_; lean_object* v___f_1271_; lean_object* v___f_1272_; lean_object* v___f_1273_; lean_object* v___x_1275_; 
v___f_1266_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2));
v___f_1267_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3));
lean_inc_ref(v_toFunctor_1259_);
v___f_1268_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1268_, 0, v_toFunctor_1259_);
v___f_1269_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1269_, 0, v_toFunctor_1259_);
v___x_1270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___f_1268_);
lean_ctor_set(v___x_1270_, 1, v___f_1269_);
v___f_1271_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1271_, 0, v_toSeqRight_1262_);
v___f_1272_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1272_, 0, v_toSeqLeft_1261_);
v___f_1273_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1273_, 0, v_toSeq_1260_);
if (v_isShared_1265_ == 0)
{
lean_ctor_set(v___x_1264_, 4, v___f_1271_);
lean_ctor_set(v___x_1264_, 3, v___f_1272_);
lean_ctor_set(v___x_1264_, 2, v___f_1273_);
lean_ctor_set(v___x_1264_, 1, v___f_1266_);
lean_ctor_set(v___x_1264_, 0, v___x_1270_);
v___x_1275_ = v___x_1264_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1270_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v___f_1266_);
lean_ctor_set(v_reuseFailAlloc_1439_, 2, v___f_1273_);
lean_ctor_set(v_reuseFailAlloc_1439_, 3, v___f_1272_);
lean_ctor_set(v_reuseFailAlloc_1439_, 4, v___f_1271_);
v___x_1275_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v_toApplicative_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1437_; 
v___x_1276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
lean_ctor_set(v___x_1276_, 1, v___f_1267_);
v___x_1277_ = l_StateRefT_x27_instMonad___redArg(v___x_1276_);
v_toApplicative_1278_ = lean_ctor_get(v___x_1277_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1277_);
if (v_isSharedCheck_1437_ == 0)
{
lean_object* v_unused_1438_; 
v_unused_1438_ = lean_ctor_get(v___x_1277_, 1);
lean_dec(v_unused_1438_);
v___x_1280_ = v___x_1277_;
v_isShared_1281_ = v_isSharedCheck_1437_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_toApplicative_1278_);
lean_dec(v___x_1277_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1437_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v_toFunctor_1282_; lean_object* v_toSeq_1283_; lean_object* v_toSeqLeft_1284_; lean_object* v_toSeqRight_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1435_; 
v_toFunctor_1282_ = lean_ctor_get(v_toApplicative_1278_, 0);
v_toSeq_1283_ = lean_ctor_get(v_toApplicative_1278_, 2);
v_toSeqLeft_1284_ = lean_ctor_get(v_toApplicative_1278_, 3);
v_toSeqRight_1285_ = lean_ctor_get(v_toApplicative_1278_, 4);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_toApplicative_1278_);
if (v_isSharedCheck_1435_ == 0)
{
lean_object* v_unused_1436_; 
v_unused_1436_ = lean_ctor_get(v_toApplicative_1278_, 1);
lean_dec(v_unused_1436_);
v___x_1287_ = v_toApplicative_1278_;
v_isShared_1288_ = v_isSharedCheck_1435_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_toSeqRight_1285_);
lean_inc(v_toSeqLeft_1284_);
lean_inc(v_toSeq_1283_);
lean_inc(v_toFunctor_1282_);
lean_dec(v_toApplicative_1278_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1435_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___f_1289_; lean_object* v___f_1290_; lean_object* v___f_1291_; lean_object* v___f_1292_; lean_object* v___x_1293_; lean_object* v___f_1294_; lean_object* v___f_1295_; lean_object* v___f_1296_; lean_object* v___x_1298_; 
v___f_1289_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4));
v___f_1290_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5));
lean_inc_ref(v_toFunctor_1282_);
v___f_1291_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1291_, 0, v_toFunctor_1282_);
v___f_1292_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1292_, 0, v_toFunctor_1282_);
v___x_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___f_1291_);
lean_ctor_set(v___x_1293_, 1, v___f_1292_);
v___f_1294_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1294_, 0, v_toSeqRight_1285_);
v___f_1295_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1295_, 0, v_toSeqLeft_1284_);
v___f_1296_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1296_, 0, v_toSeq_1283_);
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 4, v___f_1294_);
lean_ctor_set(v___x_1287_, 3, v___f_1295_);
lean_ctor_set(v___x_1287_, 2, v___f_1296_);
lean_ctor_set(v___x_1287_, 1, v___f_1289_);
lean_ctor_set(v___x_1287_, 0, v___x_1293_);
v___x_1298_ = v___x_1287_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1293_);
lean_ctor_set(v_reuseFailAlloc_1434_, 1, v___f_1289_);
lean_ctor_set(v_reuseFailAlloc_1434_, 2, v___f_1296_);
lean_ctor_set(v_reuseFailAlloc_1434_, 3, v___f_1295_);
lean_ctor_set(v_reuseFailAlloc_1434_, 4, v___f_1294_);
v___x_1298_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
lean_object* v___x_1300_; 
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 1, v___f_1290_);
lean_ctor_set(v___x_1280_, 0, v___x_1298_);
v___x_1300_ = v___x_1280_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1298_);
lean_ctor_set(v_reuseFailAlloc_1433_, 1, v___f_1290_);
v___x_1300_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
lean_object* v___f_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v_toApplicative_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1431_; 
v___f_1301_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6));
v___x_1302_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7));
v___x_1303_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9);
v_toApplicative_1304_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1431_ == 0)
{
lean_object* v_unused_1432_; 
v_unused_1432_ = lean_ctor_get(v___x_1257_, 1);
lean_dec(v_unused_1432_);
v___x_1306_ = v___x_1257_;
v_isShared_1307_ = v_isSharedCheck_1431_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_toApplicative_1304_);
lean_dec(v___x_1257_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1431_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v_toFunctor_1308_; lean_object* v_toSeq_1309_; lean_object* v_toSeqLeft_1310_; lean_object* v_toSeqRight_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1429_; 
v_toFunctor_1308_ = lean_ctor_get(v_toApplicative_1304_, 0);
v_toSeq_1309_ = lean_ctor_get(v_toApplicative_1304_, 2);
v_toSeqLeft_1310_ = lean_ctor_get(v_toApplicative_1304_, 3);
v_toSeqRight_1311_ = lean_ctor_get(v_toApplicative_1304_, 4);
v_isSharedCheck_1429_ = !lean_is_exclusive(v_toApplicative_1304_);
if (v_isSharedCheck_1429_ == 0)
{
lean_object* v_unused_1430_; 
v_unused_1430_ = lean_ctor_get(v_toApplicative_1304_, 1);
lean_dec(v_unused_1430_);
v___x_1313_ = v_toApplicative_1304_;
v_isShared_1314_ = v_isSharedCheck_1429_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_toSeqRight_1311_);
lean_inc(v_toSeqLeft_1310_);
lean_inc(v_toSeq_1309_);
lean_inc(v_toFunctor_1308_);
lean_dec(v_toApplicative_1304_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1429_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___f_1315_; lean_object* v___f_1316_; lean_object* v___x_1317_; lean_object* v___f_1318_; lean_object* v___f_1319_; lean_object* v___f_1320_; lean_object* v___x_1322_; 
lean_inc_ref(v_toFunctor_1308_);
v___f_1315_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1315_, 0, v_toFunctor_1308_);
v___f_1316_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1316_, 0, v_toFunctor_1308_);
v___x_1317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___f_1315_);
lean_ctor_set(v___x_1317_, 1, v___f_1316_);
v___f_1318_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1318_, 0, v_toSeqRight_1311_);
v___f_1319_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1319_, 0, v_toSeqLeft_1310_);
v___f_1320_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1320_, 0, v_toSeq_1309_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 4, v___f_1318_);
lean_ctor_set(v___x_1313_, 3, v___f_1319_);
lean_ctor_set(v___x_1313_, 2, v___f_1320_);
lean_ctor_set(v___x_1313_, 1, v___f_1266_);
lean_ctor_set(v___x_1313_, 0, v___x_1317_);
v___x_1322_ = v___x_1313_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1317_);
lean_ctor_set(v_reuseFailAlloc_1428_, 1, v___f_1266_);
lean_ctor_set(v_reuseFailAlloc_1428_, 2, v___f_1320_);
lean_ctor_set(v_reuseFailAlloc_1428_, 3, v___f_1319_);
lean_ctor_set(v_reuseFailAlloc_1428_, 4, v___f_1318_);
v___x_1322_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
lean_object* v___x_1324_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 1, v___f_1267_);
lean_ctor_set(v___x_1306_, 0, v___x_1322_);
v___x_1324_ = v___x_1306_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1322_);
lean_ctor_set(v_reuseFailAlloc_1427_, 1, v___f_1267_);
v___x_1324_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1325_ = l_StateRefT_x27_instMonad___redArg(v___x_1324_);
v___x_1326_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1326_, 0, lean_box(0));
lean_closure_set(v___x_1326_, 1, lean_box(0));
lean_closure_set(v___x_1326_, 2, v___x_1325_);
v___x_1327_ = l_instMonadControlTOfPure___redArg(v___x_1326_);
lean_inc(v_a_1255_);
lean_inc_ref(v_a_1254_);
lean_inc(v_a_1253_);
lean_inc_ref(v_a_1252_);
lean_inc_ref(v_below_1248_);
v___x_1328_ = lean_infer_type(v_below_1248_, v_a_1252_, v_a_1253_, v_a_1254_, v_a_1255_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_7068__overap_1332_; lean_object* v___x_1333_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref(v___x_1328_);
v___x_1330_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12));
v___x_1331_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
lean_inc_ref(v___x_1300_);
v___x_7068__overap_1332_ = l_Lean_isTracingEnabledFor___redArg(v___x_1300_, v___x_1303_, v___x_1330_, v___x_1331_);
lean_inc(v_a_1255_);
lean_inc_ref(v_a_1254_);
lean_inc(v_a_1253_);
lean_inc_ref(v_a_1252_);
v___x_1333_ = lean_apply_5(v___x_7068__overap_1332_, v_a_1252_, v_a_1253_, v_a_1254_, v_a_1255_, lean_box(0));
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; lean_object* v___f_1335_; lean_object* v___f_1336_; lean_object* v___x_1337_; lean_object* v_numTypeFormers_1338_; lean_object* v___f_1339_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1343_; lean_object* v___y_1344_; lean_object* v___y_1353_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; uint8_t v___x_1394_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_a_1334_);
lean_dec_ref(v___x_1333_);
v___f_1335_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13));
lean_inc_ref(v___x_1300_);
v___f_1336_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3___boxed), 9, 1);
lean_closure_set(v___f_1336_, 0, v___x_1300_);
v___x_1337_ = l_Lean_instInhabitedExpr;
v_numTypeFormers_1338_ = lean_array_get_size(v_positions_1250_);
lean_inc(v_a_1329_);
lean_inc_ref(v___x_1300_);
v___f_1339_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed), 22, 15);
lean_closure_set(v___f_1339_, 0, v_positions_1250_);
lean_closure_set(v___f_1339_, 1, v___x_1300_);
lean_closure_set(v___f_1339_, 2, v___f_1336_);
lean_closure_set(v___f_1339_, 3, v___f_1335_);
lean_closure_set(v___f_1339_, 4, v___x_1327_);
lean_closure_set(v___f_1339_, 5, v_numTypeFormers_1338_);
lean_closure_set(v___f_1339_, 6, v___x_1303_);
lean_closure_set(v___f_1339_, 7, v___x_1330_);
lean_closure_set(v___f_1339_, 8, v___x_1331_);
lean_closure_set(v___f_1339_, 9, v___x_1337_);
lean_closure_set(v___f_1339_, 10, v_k_1251_);
lean_closure_set(v___f_1339_, 11, v___x_1302_);
lean_closure_set(v___f_1339_, 12, v___f_1301_);
lean_closure_set(v___f_1339_, 13, v_numIndParams_1249_);
lean_closure_set(v___f_1339_, 14, v_a_1329_);
v___x_1394_ = lean_unbox(v_a_1334_);
lean_dec(v_a_1334_);
if (v___x_1394_ == 0)
{
v___y_1353_ = v_a_1252_;
v___y_1354_ = v_a_1253_;
v___y_1355_ = v_a_1254_;
v___y_1356_ = v_a_1255_;
goto v___jp_1352_;
}
else
{
lean_object* v___x_1395_; lean_object* v_toMonadRef_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_7723__overap_1401_; lean_object* v___x_1402_; 
v___x_1395_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15);
v_toMonadRef_1396_ = lean_ctor_get(v___x_1395_, 0);
lean_inc_ref(v_toMonadRef_1396_);
v___x_1397_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1398_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__17);
lean_inc(v_a_1329_);
v___x_1399_ = l_Lean_MessageData_ofExpr(v_a_1329_);
v___x_1400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1398_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
lean_inc_ref(v___x_1300_);
v___x_7723__overap_1401_ = l_Lean_addTrace___redArg(v___x_1300_, v___x_1303_, v_toMonadRef_1396_, v___x_1397_, v___x_1331_, v___x_1400_);
lean_inc(v_a_1255_);
lean_inc_ref(v_a_1254_);
lean_inc(v_a_1253_);
lean_inc_ref(v_a_1252_);
v___x_1402_ = lean_apply_5(v___x_7723__overap_1401_, v_a_1252_, v_a_1253_, v_a_1254_, v_a_1255_, lean_box(0));
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_dec_ref(v___x_1402_);
v___y_1353_ = v_a_1252_;
v___y_1354_ = v_a_1253_;
v___y_1355_ = v_a_1254_;
v___y_1356_ = v_a_1255_;
goto v___jp_1352_;
}
else
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1410_; 
lean_dec_ref(v___f_1339_);
lean_dec(v_a_1329_);
lean_dec_ref(v___x_1300_);
lean_dec(v_a_1255_);
lean_dec_ref(v_a_1254_);
lean_dec(v_a_1253_);
lean_dec_ref(v_a_1252_);
lean_dec_ref(v_below_1248_);
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1405_ = v___x_1402_;
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1402_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1408_; 
if (v_isShared_1406_ == 0)
{
v___x_1408_ = v___x_1405_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v_a_1403_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
}
}
v___jp_1340_:
{
lean_object* v_dummy_1345_; lean_object* v_nargs_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_7442__overap_1350_; lean_object* v___x_1351_; 
v_dummy_1345_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0);
v_nargs_1346_ = l_Lean_Expr_getAppNumArgs(v_a_1329_);
lean_inc(v_nargs_1346_);
v___x_1347_ = lean_mk_array(v_nargs_1346_, v_dummy_1345_);
v___x_1348_ = lean_unsigned_to_nat(1u);
v___x_1349_ = lean_nat_sub(v_nargs_1346_, v___x_1348_);
lean_dec(v_nargs_1346_);
v___x_7442__overap_1350_ = l_Lean_Expr_withAppAux___redArg(v___f_1339_, v_a_1329_, v___x_1347_, v___x_1349_);
v___x_1351_ = lean_apply_5(v___x_7442__overap_1350_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, lean_box(0));
return v___x_1351_;
}
v___jp_1352_:
{
lean_object* v___x_1357_; 
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc_ref(v___y_1353_);
v___x_1357_ = l_Lean_Meta_isTypeCorrect(v_below_1248_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; uint8_t v___x_1359_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_a_1358_);
lean_dec_ref(v___x_1357_);
v___x_1359_ = lean_unbox(v_a_1358_);
lean_dec(v_a_1358_);
if (v___x_1359_ == 0)
{
lean_object* v___x_7664__overap_1360_; lean_object* v___x_1361_; 
lean_inc_ref(v___x_1300_);
v___x_7664__overap_1360_ = l_Lean_isTracingEnabledFor___redArg(v___x_1300_, v___x_1303_, v___x_1330_, v___x_1331_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc_ref(v___y_1353_);
v___x_1361_ = lean_apply_5(v___x_7664__overap_1360_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, lean_box(0));
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; uint8_t v___x_1363_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref(v___x_1361_);
v___x_1363_ = lean_unbox(v_a_1362_);
lean_dec(v_a_1362_);
if (v___x_1363_ == 0)
{
lean_dec_ref(v___x_1300_);
v___y_1341_ = v___y_1353_;
v___y_1342_ = v___y_1354_;
v___y_1343_ = v___y_1355_;
v___y_1344_ = v___y_1356_;
goto v___jp_1340_;
}
else
{
lean_object* v___x_1364_; lean_object* v_toMonadRef_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_7701__overap_1368_; lean_object* v___x_1369_; 
v___x_1364_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15);
v_toMonadRef_1365_ = lean_ctor_get(v___x_1364_, 0);
lean_inc_ref(v_toMonadRef_1365_);
v___x_1366_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1367_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__4);
v___x_7701__overap_1368_ = l_Lean_addTrace___redArg(v___x_1300_, v___x_1303_, v_toMonadRef_1365_, v___x_1366_, v___x_1331_, v___x_1367_);
lean_inc(v___y_1356_);
lean_inc_ref(v___y_1355_);
lean_inc(v___y_1354_);
lean_inc_ref(v___y_1353_);
v___x_1369_ = lean_apply_5(v___x_7701__overap_1368_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, lean_box(0));
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_dec_ref(v___x_1369_);
v___y_1341_ = v___y_1353_;
v___y_1342_ = v___y_1354_;
v___y_1343_ = v___y_1355_;
v___y_1344_ = v___y_1356_;
goto v___jp_1340_;
}
else
{
lean_object* v_a_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1377_; 
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec_ref(v___f_1339_);
lean_dec(v_a_1329_);
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1372_ = v___x_1369_;
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_a_1370_);
lean_dec(v___x_1369_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_a_1370_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
}
}
else
{
lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1385_; 
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec_ref(v___f_1339_);
lean_dec(v_a_1329_);
lean_dec_ref(v___x_1300_);
v_a_1378_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1385_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1380_ = v___x_1361_;
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v___x_1361_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1385_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
lean_object* v___x_1383_; 
if (v_isShared_1381_ == 0)
{
v___x_1383_ = v___x_1380_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v_a_1378_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
}
else
{
lean_dec_ref(v___x_1300_);
v___y_1341_ = v___y_1353_;
v___y_1342_ = v___y_1354_;
v___y_1343_ = v___y_1355_;
v___y_1344_ = v___y_1356_;
goto v___jp_1340_;
}
}
else
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
lean_dec(v___y_1356_);
lean_dec_ref(v___y_1355_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec_ref(v___f_1339_);
lean_dec(v_a_1329_);
lean_dec_ref(v___x_1300_);
v_a_1386_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1388_ = v___x_1357_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1357_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1386_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
}
else
{
lean_object* v_a_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1418_; 
lean_dec(v_a_1329_);
lean_dec_ref(v___x_1327_);
lean_dec_ref(v___x_1300_);
lean_dec(v_a_1255_);
lean_dec_ref(v_a_1254_);
lean_dec(v_a_1253_);
lean_dec_ref(v_a_1252_);
lean_dec_ref(v_k_1251_);
lean_dec_ref(v_positions_1250_);
lean_dec(v_numIndParams_1249_);
lean_dec_ref(v_below_1248_);
v_a_1411_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1413_ = v___x_1333_;
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_a_1411_);
lean_dec(v___x_1333_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1416_; 
if (v_isShared_1414_ == 0)
{
v___x_1416_ = v___x_1413_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_a_1411_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
}
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
lean_dec_ref(v___x_1327_);
lean_dec_ref(v___x_1300_);
lean_dec(v_a_1255_);
lean_dec_ref(v_a_1254_);
lean_dec(v_a_1253_);
lean_dec_ref(v_a_1252_);
lean_dec_ref(v_k_1251_);
lean_dec_ref(v_positions_1250_);
lean_dec(v_numIndParams_1249_);
lean_dec_ref(v_below_1248_);
v_a_1419_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1328_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1328_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
lean_object* v___x_1424_; 
if (v_isShared_1422_ == 0)
{
v___x_1424_ = v___x_1421_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v_a_1419_);
v___x_1424_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
return v___x_1424_;
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___boxed(lean_object* v_below_1442_, lean_object* v_numIndParams_1443_, lean_object* v_positions_1444_, lean_object* v_k_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_, lean_object* v_a_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1442_, v_numIndParams_1443_, v_positions_1444_, v_k_1445_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(lean_object* v_00_u03b1_1452_, lean_object* v_inst_1453_, lean_object* v_below_1454_, lean_object* v_numIndParams_1455_, lean_object* v_positions_1456_, lean_object* v_k_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_){
_start:
{
lean_object* v___x_1463_; 
v___x_1463_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1454_, v_numIndParams_1455_, v_positions_1456_, v_k_1457_, v_a_1458_, v_a_1459_, v_a_1460_, v_a_1461_);
return v___x_1463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___boxed(lean_object* v_00_u03b1_1464_, lean_object* v_inst_1465_, lean_object* v_below_1466_, lean_object* v_numIndParams_1467_, lean_object* v_positions_1468_, lean_object* v_k_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(v_00_u03b1_1464_, v_inst_1465_, v_below_1466_, v_numIndParams_1467_, v_positions_1468_, v_k_1469_, v_a_1470_, v_a_1471_, v_a_1472_, v_a_1473_);
lean_dec(v_inst_1465_);
return v_res_1475_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1476_ = lean_unsigned_to_nat(32u);
v___x_1477_ = lean_mk_empty_array_with_capacity(v___x_1476_);
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1477_);
return v___x_1478_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1479_ = ((size_t)5ULL);
v___x_1480_ = lean_unsigned_to_nat(0u);
v___x_1481_ = lean_unsigned_to_nat(32u);
v___x_1482_ = lean_mk_empty_array_with_capacity(v___x_1481_);
v___x_1483_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0);
v___x_1484_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1484_, 0, v___x_1483_);
lean_ctor_set(v___x_1484_, 1, v___x_1482_);
lean_ctor_set(v___x_1484_, 2, v___x_1480_);
lean_ctor_set(v___x_1484_, 3, v___x_1480_);
lean_ctor_set_usize(v___x_1484_, 4, v___x_1479_);
return v___x_1484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(lean_object* v___y_1485_){
_start:
{
lean_object* v___x_1487_; lean_object* v_traceState_1488_; lean_object* v_traces_1489_; lean_object* v___x_1490_; lean_object* v_traceState_1491_; lean_object* v_env_1492_; lean_object* v_nextMacroScope_1493_; lean_object* v_ngen_1494_; lean_object* v_auxDeclNGen_1495_; lean_object* v_cache_1496_; lean_object* v_messages_1497_; lean_object* v_infoState_1498_; lean_object* v_snapshotTasks_1499_; lean_object* v___x_1501_; uint8_t v_isShared_1502_; uint8_t v_isSharedCheck_1518_; 
v___x_1487_ = lean_st_ref_get(v___y_1485_);
v_traceState_1488_ = lean_ctor_get(v___x_1487_, 4);
lean_inc_ref(v_traceState_1488_);
lean_dec(v___x_1487_);
v_traces_1489_ = lean_ctor_get(v_traceState_1488_, 0);
lean_inc_ref(v_traces_1489_);
lean_dec_ref(v_traceState_1488_);
v___x_1490_ = lean_st_ref_take(v___y_1485_);
v_traceState_1491_ = lean_ctor_get(v___x_1490_, 4);
v_env_1492_ = lean_ctor_get(v___x_1490_, 0);
v_nextMacroScope_1493_ = lean_ctor_get(v___x_1490_, 1);
v_ngen_1494_ = lean_ctor_get(v___x_1490_, 2);
v_auxDeclNGen_1495_ = lean_ctor_get(v___x_1490_, 3);
v_cache_1496_ = lean_ctor_get(v___x_1490_, 5);
v_messages_1497_ = lean_ctor_get(v___x_1490_, 6);
v_infoState_1498_ = lean_ctor_get(v___x_1490_, 7);
v_snapshotTasks_1499_ = lean_ctor_get(v___x_1490_, 8);
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1490_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1501_ = v___x_1490_;
v_isShared_1502_ = v_isSharedCheck_1518_;
goto v_resetjp_1500_;
}
else
{
lean_inc(v_snapshotTasks_1499_);
lean_inc(v_infoState_1498_);
lean_inc(v_messages_1497_);
lean_inc(v_cache_1496_);
lean_inc(v_traceState_1491_);
lean_inc(v_auxDeclNGen_1495_);
lean_inc(v_ngen_1494_);
lean_inc(v_nextMacroScope_1493_);
lean_inc(v_env_1492_);
lean_dec(v___x_1490_);
v___x_1501_ = lean_box(0);
v_isShared_1502_ = v_isSharedCheck_1518_;
goto v_resetjp_1500_;
}
v_resetjp_1500_:
{
uint64_t v_tid_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1516_; 
v_tid_1503_ = lean_ctor_get_uint64(v_traceState_1491_, sizeof(void*)*1);
v_isSharedCheck_1516_ = !lean_is_exclusive(v_traceState_1491_);
if (v_isSharedCheck_1516_ == 0)
{
lean_object* v_unused_1517_; 
v_unused_1517_ = lean_ctor_get(v_traceState_1491_, 0);
lean_dec(v_unused_1517_);
v___x_1505_ = v_traceState_1491_;
v_isShared_1506_ = v_isSharedCheck_1516_;
goto v_resetjp_1504_;
}
else
{
lean_dec(v_traceState_1491_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1516_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1507_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1);
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 0, v___x_1507_);
v___x_1509_ = v___x_1505_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1507_);
lean_ctor_set_uint64(v_reuseFailAlloc_1515_, sizeof(void*)*1, v_tid_1503_);
v___x_1509_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
lean_object* v___x_1511_; 
if (v_isShared_1502_ == 0)
{
lean_ctor_set(v___x_1501_, 4, v___x_1509_);
v___x_1511_ = v___x_1501_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_env_1492_);
lean_ctor_set(v_reuseFailAlloc_1514_, 1, v_nextMacroScope_1493_);
lean_ctor_set(v_reuseFailAlloc_1514_, 2, v_ngen_1494_);
lean_ctor_set(v_reuseFailAlloc_1514_, 3, v_auxDeclNGen_1495_);
lean_ctor_set(v_reuseFailAlloc_1514_, 4, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1514_, 5, v_cache_1496_);
lean_ctor_set(v_reuseFailAlloc_1514_, 6, v_messages_1497_);
lean_ctor_set(v_reuseFailAlloc_1514_, 7, v_infoState_1498_);
lean_ctor_set(v_reuseFailAlloc_1514_, 8, v_snapshotTasks_1499_);
v___x_1511_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_st_ref_set(v___y_1485_, v___x_1511_);
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v_traces_1489_);
return v___x_1513_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___boxed(lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v___y_1519_);
lean_dec(v___y_1519_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v___x_1527_; 
v___x_1527_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v___y_1525_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___boxed(lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
return v_res_1533_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(lean_object* v_opts_1534_, lean_object* v_opt_1535_){
_start:
{
lean_object* v_name_1536_; lean_object* v_defValue_1537_; lean_object* v_map_1538_; lean_object* v___x_1539_; 
v_name_1536_ = lean_ctor_get(v_opt_1535_, 0);
v_defValue_1537_ = lean_ctor_get(v_opt_1535_, 1);
v_map_1538_ = lean_ctor_get(v_opts_1534_, 0);
v___x_1539_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1538_, v_name_1536_);
if (lean_obj_tag(v___x_1539_) == 0)
{
uint8_t v___x_1540_; 
v___x_1540_ = lean_unbox(v_defValue_1537_);
return v___x_1540_;
}
else
{
lean_object* v_val_1541_; 
v_val_1541_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_val_1541_);
lean_dec_ref(v___x_1539_);
if (lean_obj_tag(v_val_1541_) == 1)
{
uint8_t v_v_1542_; 
v_v_1542_ = lean_ctor_get_uint8(v_val_1541_, 0);
lean_dec_ref(v_val_1541_);
return v_v_1542_;
}
else
{
uint8_t v___x_1543_; 
lean_dec(v_val_1541_);
v___x_1543_ = lean_unbox(v_defValue_1537_);
return v___x_1543_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1___boxed(lean_object* v_opts_1544_, lean_object* v_opt_1545_){
_start:
{
uint8_t v_res_1546_; lean_object* v_r_1547_; 
v_res_1546_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1544_, v_opt_1545_);
lean_dec_ref(v_opt_1545_);
lean_dec_ref(v_opts_1544_);
v_r_1547_ = lean_box(v_res_1546_);
return v_r_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0(lean_object* v___x_1548_, lean_object* v_fnIndex_1549_, lean_object* v_recArg_1550_, lean_object* v_below_1551_, lean_object* v_Cs_1552_, lean_object* v_belowDict_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v___x_1559_; lean_object* v___x_1560_; 
v___x_1559_ = lean_array_get_borrowed(v___x_1548_, v_Cs_1552_, v_fnIndex_1549_);
lean_inc(v___x_1559_);
v___x_1560_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(v___x_1559_, v_belowDict_1553_, v_recArg_1550_, v_below_1551_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0___boxed(lean_object* v___x_1561_, lean_object* v_fnIndex_1562_, lean_object* v_recArg_1563_, lean_object* v_below_1564_, lean_object* v_Cs_1565_, lean_object* v_belowDict_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_Lean_Elab_Structural_toBelow___lam__0(v___x_1561_, v_fnIndex_1562_, v_recArg_1563_, v_below_1564_, v_Cs_1565_, v_belowDict_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
lean_dec_ref(v_Cs_1565_);
lean_dec(v_fnIndex_1562_);
return v_res_1572_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; 
v___x_1574_ = ((lean_object*)(l_Lean_Elab_Structural_toBelow___lam__1___closed__0));
v___x_1575_ = l_Lean_stringToMessageData(v___x_1574_);
return v___x_1575_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1577_; lean_object* v___x_1578_; 
v___x_1577_ = ((lean_object*)(l_Lean_Elab_Structural_toBelow___lam__1___closed__2));
v___x_1578_ = l_Lean_stringToMessageData(v___x_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1(lean_object* v_below_1579_, lean_object* v_recArg_1580_, lean_object* v_x_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = lean_infer_type(v_below_1579_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
if (lean_obj_tag(v___x_1587_) == 0)
{
lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1602_; 
v_a_1588_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1590_ = v___x_1587_;
v_isShared_1591_ = v_isSharedCheck_1602_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_dec(v___x_1587_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1602_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1600_; 
v___x_1592_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__1, &l_Lean_Elab_Structural_toBelow___lam__1___closed__1_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__1);
v___x_1593_ = l_Lean_MessageData_ofExpr(v_recArg_1580_);
v___x_1594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1592_);
lean_ctor_set(v___x_1594_, 1, v___x_1593_);
v___x_1595_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__3, &l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3);
v___x_1596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1594_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = l_Lean_MessageData_ofExpr(v_a_1588_);
v___x_1598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1596_);
lean_ctor_set(v___x_1598_, 1, v___x_1597_);
if (v_isShared_1591_ == 0)
{
lean_ctor_set(v___x_1590_, 0, v___x_1598_);
v___x_1600_ = v___x_1590_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v___x_1598_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
else
{
lean_object* v_a_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1610_; 
lean_dec_ref(v_recArg_1580_);
v_a_1603_ = lean_ctor_get(v___x_1587_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1587_);
if (v_isSharedCheck_1610_ == 0)
{
v___x_1605_ = v___x_1587_;
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_a_1603_);
lean_dec(v___x_1587_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1610_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1608_; 
if (v_isShared_1606_ == 0)
{
v___x_1608_ = v___x_1605_;
goto v_reusejp_1607_;
}
else
{
lean_object* v_reuseFailAlloc_1609_; 
v_reuseFailAlloc_1609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1609_, 0, v_a_1603_);
v___x_1608_ = v_reuseFailAlloc_1609_;
goto v_reusejp_1607_;
}
v_reusejp_1607_:
{
return v___x_1608_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1___boxed(lean_object* v_below_1611_, lean_object* v_recArg_1612_, lean_object* v_x_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_Elab_Structural_toBelow___lam__1(v_below_1611_, v_recArg_1612_, v_x_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
lean_dec_ref(v_x_1613_);
return v_res_1619_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(lean_object* v_e_1620_){
_start:
{
if (lean_obj_tag(v_e_1620_) == 0)
{
uint8_t v___x_1621_; 
v___x_1621_ = 2;
return v___x_1621_;
}
else
{
uint8_t v___x_1622_; 
v___x_1622_ = 0;
return v___x_1622_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2___boxed(lean_object* v_e_1623_){
_start:
{
uint8_t v_res_1624_; lean_object* v_r_1625_; 
v_res_1624_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(v_e_1623_);
lean_dec_ref(v_e_1623_);
v_r_1625_ = lean_box(v_res_1624_);
return v_r_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(lean_object* v_opts_1626_, lean_object* v_opt_1627_){
_start:
{
lean_object* v_name_1628_; lean_object* v_defValue_1629_; lean_object* v_map_1630_; lean_object* v___x_1631_; 
v_name_1628_ = lean_ctor_get(v_opt_1627_, 0);
v_defValue_1629_ = lean_ctor_get(v_opt_1627_, 1);
v_map_1630_ = lean_ctor_get(v_opts_1626_, 0);
v___x_1631_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1630_, v_name_1628_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_inc(v_defValue_1629_);
return v_defValue_1629_;
}
else
{
lean_object* v_val_1632_; 
v_val_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc(v_val_1632_);
lean_dec_ref(v___x_1631_);
if (lean_obj_tag(v_val_1632_) == 3)
{
lean_object* v_v_1633_; 
v_v_1633_ = lean_ctor_get(v_val_1632_, 0);
lean_inc(v_v_1633_);
lean_dec_ref(v_val_1632_);
return v_v_1633_;
}
else
{
lean_dec(v_val_1632_);
lean_inc(v_defValue_1629_);
return v_defValue_1629_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5___boxed(lean_object* v_opts_1634_, lean_object* v_opt_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1634_, v_opt_1635_);
lean_dec_ref(v_opt_1635_);
lean_dec_ref(v_opts_1634_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(lean_object* v_x_1637_){
_start:
{
if (lean_obj_tag(v_x_1637_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1646_; 
v_a_1639_ = lean_ctor_get(v_x_1637_, 0);
v_isSharedCheck_1646_ = !lean_is_exclusive(v_x_1637_);
if (v_isSharedCheck_1646_ == 0)
{
v___x_1641_ = v_x_1637_;
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
else
{
lean_inc(v_a_1639_);
lean_dec(v_x_1637_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1646_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v___x_1644_; 
if (v_isShared_1642_ == 0)
{
lean_ctor_set_tag(v___x_1641_, 1);
v___x_1644_ = v___x_1641_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1645_; 
v_reuseFailAlloc_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1645_, 0, v_a_1639_);
v___x_1644_ = v_reuseFailAlloc_1645_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
return v___x_1644_;
}
}
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
v_a_1647_ = lean_ctor_get(v_x_1637_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v_x_1637_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v_x_1637_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v_x_1637_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
lean_ctor_set_tag(v___x_1649_, 0);
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg___boxed(lean_object* v_x_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_x_1655_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(size_t v_sz_1658_, size_t v_i_1659_, lean_object* v_bs_1660_){
_start:
{
uint8_t v___x_1661_; 
v___x_1661_ = lean_usize_dec_lt(v_i_1659_, v_sz_1658_);
if (v___x_1661_ == 0)
{
return v_bs_1660_;
}
else
{
lean_object* v_v_1662_; lean_object* v_msg_1663_; lean_object* v___x_1664_; lean_object* v_bs_x27_1665_; size_t v___x_1666_; size_t v___x_1667_; lean_object* v___x_1668_; 
v_v_1662_ = lean_array_uget_borrowed(v_bs_1660_, v_i_1659_);
v_msg_1663_ = lean_ctor_get(v_v_1662_, 1);
lean_inc_ref(v_msg_1663_);
v___x_1664_ = lean_unsigned_to_nat(0u);
v_bs_x27_1665_ = lean_array_uset(v_bs_1660_, v_i_1659_, v___x_1664_);
v___x_1666_ = ((size_t)1ULL);
v___x_1667_ = lean_usize_add(v_i_1659_, v___x_1666_);
v___x_1668_ = lean_array_uset(v_bs_x27_1665_, v_i_1659_, v_msg_1663_);
v_i_1659_ = v___x_1667_;
v_bs_1660_ = v___x_1668_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_1670_, lean_object* v_i_1671_, lean_object* v_bs_1672_){
_start:
{
size_t v_sz_boxed_1673_; size_t v_i_boxed_1674_; lean_object* v_res_1675_; 
v_sz_boxed_1673_ = lean_unbox_usize(v_sz_1670_);
lean_dec(v_sz_1670_);
v_i_boxed_1674_ = lean_unbox_usize(v_i_1671_);
lean_dec(v_i_1671_);
v_res_1675_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(v_sz_boxed_1673_, v_i_boxed_1674_, v_bs_1672_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(lean_object* v_oldTraces_1676_, lean_object* v_data_1677_, lean_object* v_ref_1678_, lean_object* v_msg_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v_fileName_1685_; lean_object* v_fileMap_1686_; lean_object* v_options_1687_; lean_object* v_currRecDepth_1688_; lean_object* v_maxRecDepth_1689_; lean_object* v_ref_1690_; lean_object* v_currNamespace_1691_; lean_object* v_openDecls_1692_; lean_object* v_initHeartbeats_1693_; lean_object* v_maxHeartbeats_1694_; lean_object* v_quotContext_1695_; lean_object* v_currMacroScope_1696_; uint8_t v_diag_1697_; lean_object* v_cancelTk_x3f_1698_; uint8_t v_suppressElabErrors_1699_; lean_object* v_inheritedTraceOptions_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1755_; 
v_fileName_1685_ = lean_ctor_get(v___y_1682_, 0);
v_fileMap_1686_ = lean_ctor_get(v___y_1682_, 1);
v_options_1687_ = lean_ctor_get(v___y_1682_, 2);
v_currRecDepth_1688_ = lean_ctor_get(v___y_1682_, 3);
v_maxRecDepth_1689_ = lean_ctor_get(v___y_1682_, 4);
v_ref_1690_ = lean_ctor_get(v___y_1682_, 5);
v_currNamespace_1691_ = lean_ctor_get(v___y_1682_, 6);
v_openDecls_1692_ = lean_ctor_get(v___y_1682_, 7);
v_initHeartbeats_1693_ = lean_ctor_get(v___y_1682_, 8);
v_maxHeartbeats_1694_ = lean_ctor_get(v___y_1682_, 9);
v_quotContext_1695_ = lean_ctor_get(v___y_1682_, 10);
v_currMacroScope_1696_ = lean_ctor_get(v___y_1682_, 11);
v_diag_1697_ = lean_ctor_get_uint8(v___y_1682_, sizeof(void*)*14);
v_cancelTk_x3f_1698_ = lean_ctor_get(v___y_1682_, 12);
v_suppressElabErrors_1699_ = lean_ctor_get_uint8(v___y_1682_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1700_ = lean_ctor_get(v___y_1682_, 13);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___y_1682_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1702_ = v___y_1682_;
v_isShared_1703_ = v_isSharedCheck_1755_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_inheritedTraceOptions_1700_);
lean_inc(v_cancelTk_x3f_1698_);
lean_inc(v_currMacroScope_1696_);
lean_inc(v_quotContext_1695_);
lean_inc(v_maxHeartbeats_1694_);
lean_inc(v_initHeartbeats_1693_);
lean_inc(v_openDecls_1692_);
lean_inc(v_currNamespace_1691_);
lean_inc(v_ref_1690_);
lean_inc(v_maxRecDepth_1689_);
lean_inc(v_currRecDepth_1688_);
lean_inc(v_options_1687_);
lean_inc(v_fileMap_1686_);
lean_inc(v_fileName_1685_);
lean_dec(v___y_1682_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1755_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1704_; lean_object* v_traceState_1705_; lean_object* v_traces_1706_; lean_object* v_ref_1707_; lean_object* v___x_1709_; 
v___x_1704_ = lean_st_ref_get(v___y_1683_);
v_traceState_1705_ = lean_ctor_get(v___x_1704_, 4);
lean_inc_ref(v_traceState_1705_);
lean_dec(v___x_1704_);
v_traces_1706_ = lean_ctor_get(v_traceState_1705_, 0);
lean_inc_ref(v_traces_1706_);
lean_dec_ref(v_traceState_1705_);
v_ref_1707_ = l_Lean_replaceRef(v_ref_1678_, v_ref_1690_);
lean_dec(v_ref_1690_);
if (v_isShared_1703_ == 0)
{
lean_ctor_set(v___x_1702_, 5, v_ref_1707_);
v___x_1709_ = v___x_1702_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_fileName_1685_);
lean_ctor_set(v_reuseFailAlloc_1754_, 1, v_fileMap_1686_);
lean_ctor_set(v_reuseFailAlloc_1754_, 2, v_options_1687_);
lean_ctor_set(v_reuseFailAlloc_1754_, 3, v_currRecDepth_1688_);
lean_ctor_set(v_reuseFailAlloc_1754_, 4, v_maxRecDepth_1689_);
lean_ctor_set(v_reuseFailAlloc_1754_, 5, v_ref_1707_);
lean_ctor_set(v_reuseFailAlloc_1754_, 6, v_currNamespace_1691_);
lean_ctor_set(v_reuseFailAlloc_1754_, 7, v_openDecls_1692_);
lean_ctor_set(v_reuseFailAlloc_1754_, 8, v_initHeartbeats_1693_);
lean_ctor_set(v_reuseFailAlloc_1754_, 9, v_maxHeartbeats_1694_);
lean_ctor_set(v_reuseFailAlloc_1754_, 10, v_quotContext_1695_);
lean_ctor_set(v_reuseFailAlloc_1754_, 11, v_currMacroScope_1696_);
lean_ctor_set(v_reuseFailAlloc_1754_, 12, v_cancelTk_x3f_1698_);
lean_ctor_set(v_reuseFailAlloc_1754_, 13, v_inheritedTraceOptions_1700_);
lean_ctor_set_uint8(v_reuseFailAlloc_1754_, sizeof(void*)*14, v_diag_1697_);
lean_ctor_set_uint8(v_reuseFailAlloc_1754_, sizeof(void*)*14 + 1, v_suppressElabErrors_1699_);
v___x_1709_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
lean_object* v___x_1710_; size_t v_sz_1711_; size_t v___x_1712_; lean_object* v___x_1713_; lean_object* v_msg_1714_; lean_object* v___x_1715_; lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1753_; 
v___x_1710_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1706_);
lean_dec_ref(v_traces_1706_);
v_sz_1711_ = lean_array_size(v___x_1710_);
v___x_1712_ = ((size_t)0ULL);
v___x_1713_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(v_sz_1711_, v___x_1712_, v___x_1710_);
v_msg_1714_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1714_, 0, v_data_1677_);
lean_ctor_set(v_msg_1714_, 1, v_msg_1679_);
lean_ctor_set(v_msg_1714_, 2, v___x_1713_);
v___x_1715_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_1714_, v___y_1680_, v___y_1681_, v___x_1709_, v___y_1683_);
lean_dec_ref(v___x_1709_);
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1718_ = v___x_1715_;
v_isShared_1719_ = v_isSharedCheck_1753_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1715_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1753_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1720_; lean_object* v_traceState_1721_; lean_object* v_env_1722_; lean_object* v_nextMacroScope_1723_; lean_object* v_ngen_1724_; lean_object* v_auxDeclNGen_1725_; lean_object* v_cache_1726_; lean_object* v_messages_1727_; lean_object* v_infoState_1728_; lean_object* v_snapshotTasks_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1752_; 
v___x_1720_ = lean_st_ref_take(v___y_1683_);
v_traceState_1721_ = lean_ctor_get(v___x_1720_, 4);
v_env_1722_ = lean_ctor_get(v___x_1720_, 0);
v_nextMacroScope_1723_ = lean_ctor_get(v___x_1720_, 1);
v_ngen_1724_ = lean_ctor_get(v___x_1720_, 2);
v_auxDeclNGen_1725_ = lean_ctor_get(v___x_1720_, 3);
v_cache_1726_ = lean_ctor_get(v___x_1720_, 5);
v_messages_1727_ = lean_ctor_get(v___x_1720_, 6);
v_infoState_1728_ = lean_ctor_get(v___x_1720_, 7);
v_snapshotTasks_1729_ = lean_ctor_get(v___x_1720_, 8);
v_isSharedCheck_1752_ = !lean_is_exclusive(v___x_1720_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1731_ = v___x_1720_;
v_isShared_1732_ = v_isSharedCheck_1752_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_snapshotTasks_1729_);
lean_inc(v_infoState_1728_);
lean_inc(v_messages_1727_);
lean_inc(v_cache_1726_);
lean_inc(v_traceState_1721_);
lean_inc(v_auxDeclNGen_1725_);
lean_inc(v_ngen_1724_);
lean_inc(v_nextMacroScope_1723_);
lean_inc(v_env_1722_);
lean_dec(v___x_1720_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1752_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
uint64_t v_tid_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1750_; 
v_tid_1733_ = lean_ctor_get_uint64(v_traceState_1721_, sizeof(void*)*1);
v_isSharedCheck_1750_ = !lean_is_exclusive(v_traceState_1721_);
if (v_isSharedCheck_1750_ == 0)
{
lean_object* v_unused_1751_; 
v_unused_1751_ = lean_ctor_get(v_traceState_1721_, 0);
lean_dec(v_unused_1751_);
v___x_1735_ = v_traceState_1721_;
v_isShared_1736_ = v_isSharedCheck_1750_;
goto v_resetjp_1734_;
}
else
{
lean_dec(v_traceState_1721_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1750_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1740_; 
v___x_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1737_, 0, v_ref_1678_);
lean_ctor_set(v___x_1737_, 1, v_a_1716_);
v___x_1738_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1676_, v___x_1737_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set(v___x_1735_, 0, v___x_1738_);
v___x_1740_ = v___x_1735_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v___x_1738_);
lean_ctor_set_uint64(v_reuseFailAlloc_1749_, sizeof(void*)*1, v_tid_1733_);
v___x_1740_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1742_; 
if (v_isShared_1732_ == 0)
{
lean_ctor_set(v___x_1731_, 4, v___x_1740_);
v___x_1742_ = v___x_1731_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_env_1722_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v_nextMacroScope_1723_);
lean_ctor_set(v_reuseFailAlloc_1748_, 2, v_ngen_1724_);
lean_ctor_set(v_reuseFailAlloc_1748_, 3, v_auxDeclNGen_1725_);
lean_ctor_set(v_reuseFailAlloc_1748_, 4, v___x_1740_);
lean_ctor_set(v_reuseFailAlloc_1748_, 5, v_cache_1726_);
lean_ctor_set(v_reuseFailAlloc_1748_, 6, v_messages_1727_);
lean_ctor_set(v_reuseFailAlloc_1748_, 7, v_infoState_1728_);
lean_ctor_set(v_reuseFailAlloc_1748_, 8, v_snapshotTasks_1729_);
v___x_1742_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1746_; 
v___x_1743_ = lean_st_ref_set(v___y_1683_, v___x_1742_);
v___x_1744_ = lean_box(0);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 0, v___x_1744_);
v___x_1746_ = v___x_1718_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1744_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
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
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___boxed(lean_object* v_oldTraces_1756_, lean_object* v_data_1757_, lean_object* v_ref_1758_, lean_object* v_msg_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(v_oldTraces_1756_, v_data_1757_, v_ref_1758_, v_msg_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
lean_dec(v___y_1763_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
return v_res_1765_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1767_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0));
v___x_1768_ = l_Lean_stringToMessageData(v___x_1767_);
return v___x_1768_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1770_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2));
v___x_1771_ = l_Lean_stringToMessageData(v___x_1770_);
return v___x_1771_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1772_; double v___x_1773_; 
v___x_1772_ = lean_unsigned_to_nat(1000u);
v___x_1773_ = lean_float_of_nat(v___x_1772_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(lean_object* v_cls_1774_, uint8_t v_collapsed_1775_, lean_object* v_tag_1776_, lean_object* v_opts_1777_, uint8_t v_clsEnabled_1778_, lean_object* v_oldTraces_1779_, lean_object* v_msg_1780_, lean_object* v_resStartStop_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v_fst_1787_; lean_object* v_snd_1788_; lean_object* v___x_1790_; uint8_t v_isShared_1791_; uint8_t v_isSharedCheck_1886_; 
v_fst_1787_ = lean_ctor_get(v_resStartStop_1781_, 0);
v_snd_1788_ = lean_ctor_get(v_resStartStop_1781_, 1);
v_isSharedCheck_1886_ = !lean_is_exclusive(v_resStartStop_1781_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1790_ = v_resStartStop_1781_;
v_isShared_1791_ = v_isSharedCheck_1886_;
goto v_resetjp_1789_;
}
else
{
lean_inc(v_snd_1788_);
lean_inc(v_fst_1787_);
lean_dec(v_resStartStop_1781_);
v___x_1790_ = lean_box(0);
v_isShared_1791_ = v_isSharedCheck_1886_;
goto v_resetjp_1789_;
}
v_resetjp_1789_:
{
lean_object* v___y_1793_; lean_object* v___y_1794_; lean_object* v_data_1795_; lean_object* v_fst_1806_; lean_object* v_snd_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1885_; 
v_fst_1806_ = lean_ctor_get(v_snd_1788_, 0);
v_snd_1807_ = lean_ctor_get(v_snd_1788_, 1);
v_isSharedCheck_1885_ = !lean_is_exclusive(v_snd_1788_);
if (v_isSharedCheck_1885_ == 0)
{
v___x_1809_ = v_snd_1788_;
v_isShared_1810_ = v_isSharedCheck_1885_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_snd_1807_);
lean_inc(v_fst_1806_);
lean_dec(v_snd_1788_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1885_;
goto v_resetjp_1808_;
}
v___jp_1792_:
{
lean_object* v___x_1796_; 
v___x_1796_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(v_oldTraces_1779_, v_data_1795_, v___y_1793_, v___y_1794_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_);
lean_dec(v___y_1785_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v___x_1797_; 
lean_dec_ref(v___x_1796_);
v___x_1797_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_fst_1787_);
return v___x_1797_;
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
lean_dec(v_fst_1787_);
v_a_1798_ = lean_ctor_get(v___x_1796_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1796_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1796_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1796_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
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
v_resetjp_1808_:
{
lean_object* v___x_1811_; uint8_t v___x_1812_; lean_object* v___y_1814_; lean_object* v_a_1815_; uint8_t v___y_1839_; double v___y_1870_; 
v___x_1811_ = l_Lean_trace_profiler;
v___x_1812_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1777_, v___x_1811_);
if (v___x_1812_ == 0)
{
v___y_1839_ = v___x_1812_;
goto v___jp_1838_;
}
else
{
lean_object* v___x_1875_; uint8_t v___x_1876_; 
v___x_1875_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1876_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1777_, v___x_1875_);
if (v___x_1876_ == 0)
{
lean_object* v___x_1877_; lean_object* v___x_1878_; double v___x_1879_; double v___x_1880_; double v___x_1881_; 
v___x_1877_ = l_Lean_trace_profiler_threshold;
v___x_1878_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1777_, v___x_1877_);
v___x_1879_ = lean_float_of_nat(v___x_1878_);
v___x_1880_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4);
v___x_1881_ = lean_float_div(v___x_1879_, v___x_1880_);
v___y_1870_ = v___x_1881_;
goto v___jp_1869_;
}
else
{
lean_object* v___x_1882_; lean_object* v___x_1883_; double v___x_1884_; 
v___x_1882_ = l_Lean_trace_profiler_threshold;
v___x_1883_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1777_, v___x_1882_);
v___x_1884_ = lean_float_of_nat(v___x_1883_);
v___y_1870_ = v___x_1884_;
goto v___jp_1869_;
}
}
v___jp_1813_:
{
uint8_t v_result_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1821_; 
v_result_1816_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(v_fst_1787_);
v___x_1817_ = l_Lean_TraceResult_toEmoji(v_result_1816_);
v___x_1818_ = l_Lean_stringToMessageData(v___x_1817_);
v___x_1819_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1);
if (v_isShared_1810_ == 0)
{
lean_ctor_set_tag(v___x_1809_, 7);
lean_ctor_set(v___x_1809_, 1, v___x_1819_);
lean_ctor_set(v___x_1809_, 0, v___x_1818_);
v___x_1821_ = v___x_1809_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v___x_1818_);
lean_ctor_set(v_reuseFailAlloc_1832_, 1, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
lean_object* v_m_1823_; 
if (v_isShared_1791_ == 0)
{
lean_ctor_set_tag(v___x_1790_, 7);
lean_ctor_set(v___x_1790_, 1, v_a_1815_);
lean_ctor_set(v___x_1790_, 0, v___x_1821_);
v_m_1823_ = v___x_1790_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v___x_1821_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v_a_1815_);
v_m_1823_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; double v___x_1826_; lean_object* v_data_1827_; 
v___x_1824_ = lean_box(v_result_1816_);
v___x_1825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
v___x_1826_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0);
lean_inc_ref(v_tag_1776_);
lean_inc_ref(v___x_1825_);
lean_inc(v_cls_1774_);
v_data_1827_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1827_, 0, v_cls_1774_);
lean_ctor_set(v_data_1827_, 1, v___x_1825_);
lean_ctor_set(v_data_1827_, 2, v_tag_1776_);
lean_ctor_set_float(v_data_1827_, sizeof(void*)*3, v___x_1826_);
lean_ctor_set_float(v_data_1827_, sizeof(void*)*3 + 8, v___x_1826_);
lean_ctor_set_uint8(v_data_1827_, sizeof(void*)*3 + 16, v_collapsed_1775_);
if (v___x_1812_ == 0)
{
lean_dec_ref(v___x_1825_);
lean_dec(v_snd_1807_);
lean_dec(v_fst_1806_);
lean_dec_ref(v_tag_1776_);
lean_dec(v_cls_1774_);
v___y_1793_ = v___y_1814_;
v___y_1794_ = v_m_1823_;
v_data_1795_ = v_data_1827_;
goto v___jp_1792_;
}
else
{
lean_object* v_data_1828_; double v___x_1829_; double v___x_1830_; 
lean_dec_ref(v_data_1827_);
v_data_1828_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1828_, 0, v_cls_1774_);
lean_ctor_set(v_data_1828_, 1, v___x_1825_);
lean_ctor_set(v_data_1828_, 2, v_tag_1776_);
v___x_1829_ = lean_unbox_float(v_fst_1806_);
lean_dec(v_fst_1806_);
lean_ctor_set_float(v_data_1828_, sizeof(void*)*3, v___x_1829_);
v___x_1830_ = lean_unbox_float(v_snd_1807_);
lean_dec(v_snd_1807_);
lean_ctor_set_float(v_data_1828_, sizeof(void*)*3 + 8, v___x_1830_);
lean_ctor_set_uint8(v_data_1828_, sizeof(void*)*3 + 16, v_collapsed_1775_);
v___y_1793_ = v___y_1814_;
v___y_1794_ = v_m_1823_;
v_data_1795_ = v_data_1828_;
goto v___jp_1792_;
}
}
}
}
v___jp_1833_:
{
lean_object* v_ref_1834_; lean_object* v___x_1835_; 
v_ref_1834_ = lean_ctor_get(v___y_1784_, 5);
lean_inc(v___y_1785_);
lean_inc_ref(v___y_1784_);
lean_inc(v___y_1783_);
lean_inc_ref(v___y_1782_);
lean_inc(v_fst_1787_);
v___x_1835_ = lean_apply_6(v_msg_1780_, v_fst_1787_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, lean_box(0));
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref(v___x_1835_);
lean_inc(v_ref_1834_);
v___y_1814_ = v_ref_1834_;
v_a_1815_ = v_a_1836_;
goto v___jp_1813_;
}
else
{
lean_object* v___x_1837_; 
lean_dec_ref(v___x_1835_);
v___x_1837_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3);
lean_inc(v_ref_1834_);
v___y_1814_ = v_ref_1834_;
v_a_1815_ = v___x_1837_;
goto v___jp_1813_;
}
}
v___jp_1838_:
{
if (v_clsEnabled_1778_ == 0)
{
if (v___y_1839_ == 0)
{
lean_object* v___x_1840_; lean_object* v_traceState_1841_; lean_object* v_env_1842_; lean_object* v_nextMacroScope_1843_; lean_object* v_ngen_1844_; lean_object* v_auxDeclNGen_1845_; lean_object* v_cache_1846_; lean_object* v_messages_1847_; lean_object* v_infoState_1848_; lean_object* v_snapshotTasks_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1868_; 
lean_del_object(v___x_1809_);
lean_dec(v_snd_1807_);
lean_dec(v_fst_1806_);
lean_del_object(v___x_1790_);
lean_dec_ref(v___y_1784_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec_ref(v_msg_1780_);
lean_dec_ref(v_tag_1776_);
lean_dec(v_cls_1774_);
v___x_1840_ = lean_st_ref_take(v___y_1785_);
v_traceState_1841_ = lean_ctor_get(v___x_1840_, 4);
v_env_1842_ = lean_ctor_get(v___x_1840_, 0);
v_nextMacroScope_1843_ = lean_ctor_get(v___x_1840_, 1);
v_ngen_1844_ = lean_ctor_get(v___x_1840_, 2);
v_auxDeclNGen_1845_ = lean_ctor_get(v___x_1840_, 3);
v_cache_1846_ = lean_ctor_get(v___x_1840_, 5);
v_messages_1847_ = lean_ctor_get(v___x_1840_, 6);
v_infoState_1848_ = lean_ctor_get(v___x_1840_, 7);
v_snapshotTasks_1849_ = lean_ctor_get(v___x_1840_, 8);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1868_ == 0)
{
v___x_1851_ = v___x_1840_;
v_isShared_1852_ = v_isSharedCheck_1868_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_snapshotTasks_1849_);
lean_inc(v_infoState_1848_);
lean_inc(v_messages_1847_);
lean_inc(v_cache_1846_);
lean_inc(v_traceState_1841_);
lean_inc(v_auxDeclNGen_1845_);
lean_inc(v_ngen_1844_);
lean_inc(v_nextMacroScope_1843_);
lean_inc(v_env_1842_);
lean_dec(v___x_1840_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1868_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
uint64_t v_tid_1853_; lean_object* v_traces_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1867_; 
v_tid_1853_ = lean_ctor_get_uint64(v_traceState_1841_, sizeof(void*)*1);
v_traces_1854_ = lean_ctor_get(v_traceState_1841_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v_traceState_1841_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1856_ = v_traceState_1841_;
v_isShared_1857_ = v_isSharedCheck_1867_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_traces_1854_);
lean_dec(v_traceState_1841_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1867_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1858_; lean_object* v___x_1860_; 
v___x_1858_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1779_, v_traces_1854_);
lean_dec_ref(v_traces_1854_);
if (v_isShared_1857_ == 0)
{
lean_ctor_set(v___x_1856_, 0, v___x_1858_);
v___x_1860_ = v___x_1856_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v___x_1858_);
lean_ctor_set_uint64(v_reuseFailAlloc_1866_, sizeof(void*)*1, v_tid_1853_);
v___x_1860_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
lean_object* v___x_1862_; 
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 4, v___x_1860_);
v___x_1862_ = v___x_1851_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_env_1842_);
lean_ctor_set(v_reuseFailAlloc_1865_, 1, v_nextMacroScope_1843_);
lean_ctor_set(v_reuseFailAlloc_1865_, 2, v_ngen_1844_);
lean_ctor_set(v_reuseFailAlloc_1865_, 3, v_auxDeclNGen_1845_);
lean_ctor_set(v_reuseFailAlloc_1865_, 4, v___x_1860_);
lean_ctor_set(v_reuseFailAlloc_1865_, 5, v_cache_1846_);
lean_ctor_set(v_reuseFailAlloc_1865_, 6, v_messages_1847_);
lean_ctor_set(v_reuseFailAlloc_1865_, 7, v_infoState_1848_);
lean_ctor_set(v_reuseFailAlloc_1865_, 8, v_snapshotTasks_1849_);
v___x_1862_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1863_ = lean_st_ref_set(v___y_1785_, v___x_1862_);
lean_dec(v___y_1785_);
v___x_1864_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_fst_1787_);
return v___x_1864_;
}
}
}
}
}
else
{
goto v___jp_1833_;
}
}
else
{
goto v___jp_1833_;
}
}
v___jp_1869_:
{
double v___x_1871_; double v___x_1872_; double v___x_1873_; uint8_t v___x_1874_; 
v___x_1871_ = lean_unbox_float(v_snd_1807_);
v___x_1872_ = lean_unbox_float(v_fst_1806_);
v___x_1873_ = lean_float_sub(v___x_1871_, v___x_1872_);
v___x_1874_ = lean_float_decLt(v___y_1870_, v___x_1873_);
v___y_1839_ = v___x_1874_;
goto v___jp_1838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___boxed(lean_object* v_cls_1887_, lean_object* v_collapsed_1888_, lean_object* v_tag_1889_, lean_object* v_opts_1890_, lean_object* v_clsEnabled_1891_, lean_object* v_oldTraces_1892_, lean_object* v_msg_1893_, lean_object* v_resStartStop_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
uint8_t v_collapsed_boxed_1900_; uint8_t v_clsEnabled_boxed_1901_; lean_object* v_res_1902_; 
v_collapsed_boxed_1900_ = lean_unbox(v_collapsed_1888_);
v_clsEnabled_boxed_1901_ = lean_unbox(v_clsEnabled_1891_);
v_res_1902_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v_cls_1887_, v_collapsed_boxed_1900_, v_tag_1889_, v_opts_1890_, v_clsEnabled_boxed_1901_, v_oldTraces_1892_, v_msg_1893_, v_resStartStop_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_);
lean_dec_ref(v_opts_1890_);
return v_res_1902_;
}
}
static double _init_l_Lean_Elab_Structural_toBelow___closed__0(void){
_start:
{
lean_object* v___x_1903_; double v___x_1904_; 
v___x_1903_ = lean_unsigned_to_nat(1000000000u);
v___x_1904_ = lean_float_of_nat(v___x_1903_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow(lean_object* v_below_1905_, lean_object* v_numIndParams_1906_, lean_object* v_positions_1907_, lean_object* v_fnIndex_1908_, lean_object* v_recArg_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_){
_start:
{
lean_object* v_options_1915_; uint8_t v_hasTrace_1916_; lean_object* v___x_1917_; lean_object* v___f_1918_; 
v_options_1915_ = lean_ctor_get(v_a_1912_, 2);
v_hasTrace_1916_ = lean_ctor_get_uint8(v_options_1915_, sizeof(void*)*1);
v___x_1917_ = l_Lean_instInhabitedExpr;
lean_inc_ref(v_below_1905_);
lean_inc_ref(v_recArg_1909_);
v___f_1918_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_toBelow___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1918_, 0, v___x_1917_);
lean_closure_set(v___f_1918_, 1, v_fnIndex_1908_);
lean_closure_set(v___f_1918_, 2, v_recArg_1909_);
lean_closure_set(v___f_1918_, 3, v_below_1905_);
if (v_hasTrace_1916_ == 0)
{
lean_object* v___x_1919_; 
lean_dec_ref(v_recArg_1909_);
v___x_1919_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1905_, v_numIndParams_1906_, v_positions_1907_, v___f_1918_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
return v___x_1919_;
}
else
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v_a_1922_; lean_object* v___f_1923_; lean_object* v___x_1924_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v_a_1928_; lean_object* v___y_1942_; lean_object* v___y_1943_; lean_object* v_a_1944_; uint8_t v___x_1995_; 
v___x_1920_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v___x_1921_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg(v___x_1920_, v_a_1912_);
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
lean_dec_ref(v___x_1921_);
lean_inc_ref(v_below_1905_);
v___f_1923_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_toBelow___lam__1___boxed), 8, 2);
lean_closure_set(v___f_1923_, 0, v_below_1905_);
lean_closure_set(v___f_1923_, 1, v_recArg_1909_);
v___x_1924_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__1));
v___x_1995_ = lean_unbox(v_a_1922_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1996_; uint8_t v___x_1997_; 
v___x_1996_ = l_Lean_trace_profiler;
v___x_1997_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_options_1915_, v___x_1996_);
if (v___x_1997_ == 0)
{
lean_object* v___x_1998_; 
lean_dec_ref(v___f_1923_);
lean_dec(v_a_1922_);
v___x_1998_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1905_, v_numIndParams_1906_, v_positions_1907_, v___f_1918_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
return v___x_1998_;
}
else
{
lean_inc_ref(v_options_1915_);
goto v___jp_1954_;
}
}
else
{
lean_inc_ref(v_options_1915_);
goto v___jp_1954_;
}
v___jp_1925_:
{
lean_object* v___x_1929_; double v___x_1930_; double v___x_1931_; double v___x_1932_; double v___x_1933_; double v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; uint8_t v___x_1939_; lean_object* v___x_1940_; 
v___x_1929_ = lean_io_mono_nanos_now();
v___x_1930_ = lean_float_of_nat(v___y_1927_);
v___x_1931_ = lean_float_once(&l_Lean_Elab_Structural_toBelow___closed__0, &l_Lean_Elab_Structural_toBelow___closed__0_once, _init_l_Lean_Elab_Structural_toBelow___closed__0);
v___x_1932_ = lean_float_div(v___x_1930_, v___x_1931_);
v___x_1933_ = lean_float_of_nat(v___x_1929_);
v___x_1934_ = lean_float_div(v___x_1933_, v___x_1931_);
v___x_1935_ = lean_box_float(v___x_1932_);
v___x_1936_ = lean_box_float(v___x_1934_);
v___x_1937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1937_, 0, v___x_1935_);
lean_ctor_set(v___x_1937_, 1, v___x_1936_);
v___x_1938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1938_, 0, v_a_1928_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
v___x_1939_ = lean_unbox(v_a_1922_);
lean_dec(v_a_1922_);
v___x_1940_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v___x_1920_, v_hasTrace_1916_, v___x_1924_, v_options_1915_, v___x_1939_, v___y_1926_, v___f_1923_, v___x_1938_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
lean_dec_ref(v_options_1915_);
return v___x_1940_;
}
v___jp_1941_:
{
lean_object* v___x_1945_; double v___x_1946_; double v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; uint8_t v___x_1952_; lean_object* v___x_1953_; 
v___x_1945_ = lean_io_get_num_heartbeats();
v___x_1946_ = lean_float_of_nat(v___y_1943_);
v___x_1947_ = lean_float_of_nat(v___x_1945_);
v___x_1948_ = lean_box_float(v___x_1946_);
v___x_1949_ = lean_box_float(v___x_1947_);
v___x_1950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1948_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
v___x_1951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1951_, 0, v_a_1944_);
lean_ctor_set(v___x_1951_, 1, v___x_1950_);
v___x_1952_ = lean_unbox(v_a_1922_);
lean_dec(v_a_1922_);
v___x_1953_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v___x_1920_, v_hasTrace_1916_, v___x_1924_, v_options_1915_, v___x_1952_, v___y_1942_, v___f_1923_, v___x_1951_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
lean_dec_ref(v_options_1915_);
return v___x_1953_;
}
v___jp_1954_:
{
lean_object* v___x_1955_; lean_object* v_a_1956_; lean_object* v___x_1957_; uint8_t v___x_1958_; 
v___x_1955_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v_a_1913_);
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_a_1956_);
lean_dec_ref(v___x_1955_);
v___x_1957_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1958_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_options_1915_, v___x_1957_);
if (v___x_1958_ == 0)
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1959_ = lean_io_mono_nanos_now();
lean_inc(v_a_1913_);
lean_inc_ref(v_a_1912_);
lean_inc(v_a_1911_);
lean_inc_ref(v_a_1910_);
v___x_1960_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1905_, v_numIndParams_1906_, v_positions_1907_, v___f_1918_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
if (lean_obj_tag(v___x_1960_) == 0)
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
v_a_1961_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1960_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1960_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
lean_ctor_set_tag(v___x_1963_, 1);
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
v___y_1926_ = v_a_1956_;
v___y_1927_ = v___x_1959_;
v_a_1928_ = v___x_1966_;
goto v___jp_1925_;
}
}
}
else
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
v_a_1969_ = lean_ctor_get(v___x_1960_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1960_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1960_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1960_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
lean_ctor_set_tag(v___x_1971_, 0);
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1969_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
v___y_1926_ = v_a_1956_;
v___y_1927_ = v___x_1959_;
v_a_1928_ = v___x_1974_;
goto v___jp_1925_;
}
}
}
}
else
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = lean_io_get_num_heartbeats();
lean_inc(v_a_1913_);
lean_inc_ref(v_a_1912_);
lean_inc(v_a_1911_);
lean_inc_ref(v_a_1910_);
v___x_1978_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1905_, v_numIndParams_1906_, v_positions_1907_, v___f_1918_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1986_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1981_ = v___x_1978_;
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1982_ == 0)
{
lean_ctor_set_tag(v___x_1981_, 1);
v___x_1984_ = v___x_1981_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
v___y_1942_ = v_a_1956_;
v___y_1943_ = v___x_1977_;
v_a_1944_ = v___x_1984_;
goto v___jp_1941_;
}
}
}
else
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
v_a_1987_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1989_ = v___x_1978_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v___x_1978_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set_tag(v___x_1989_, 0);
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1987_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
v___y_1942_ = v_a_1956_;
v___y_1943_ = v___x_1977_;
v_a_1944_ = v___x_1992_;
goto v___jp_1941_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___boxed(lean_object* v_below_1999_, lean_object* v_numIndParams_2000_, lean_object* v_positions_2001_, lean_object* v_fnIndex_2002_, lean_object* v_recArg_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_){
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l_Lean_Elab_Structural_toBelow(v_below_1999_, v_numIndParams_2000_, v_positions_2001_, v_fnIndex_2002_, v_recArg_2003_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(lean_object* v_00_u03b1_2010_, lean_object* v_x_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_x_2011_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___boxed(lean_object* v_00_u03b1_2018_, lean_object* v_x_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_){
_start:
{
lean_object* v_res_2025_; 
v_res_2025_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(v_00_u03b1_2018_, v_x_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_);
lean_dec(v___y_2023_);
lean_dec_ref(v___y_2022_);
lean_dec(v___y_2021_);
lean_dec_ref(v___y_2020_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(lean_object* v_k_2026_, lean_object* v___y_2027_, lean_object* v_b_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v___x_2034_; 
v___x_2034_ = lean_apply_7(v_k_2026_, v_b_2028_, v___y_2027_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, lean_box(0));
return v___x_2034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed(lean_object* v_k_2035_, lean_object* v___y_2036_, lean_object* v_b_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_){
_start:
{
lean_object* v_res_2043_; 
v_res_2043_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(v_k_2035_, v___y_2036_, v_b_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(lean_object* v_name_2044_, uint8_t v_bi_2045_, lean_object* v_type_2046_, lean_object* v_k_2047_, uint8_t v_kind_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v___f_2055_; lean_object* v___x_2056_; 
v___f_2055_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2055_, 0, v_k_2047_);
lean_closure_set(v___f_2055_, 1, v___y_2049_);
v___x_2056_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2044_, v_bi_2045_, v_type_2046_, v___f_2055_, v_kind_2048_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_);
if (lean_obj_tag(v___x_2056_) == 0)
{
return v___x_2056_;
}
else
{
lean_object* v_a_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2064_; 
v_a_2057_ = lean_ctor_get(v___x_2056_, 0);
v_isSharedCheck_2064_ = !lean_is_exclusive(v___x_2056_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2059_ = v___x_2056_;
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_a_2057_);
lean_dec(v___x_2056_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2062_; 
if (v_isShared_2060_ == 0)
{
v___x_2062_ = v___x_2059_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_a_2057_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___boxed(lean_object* v_name_2065_, lean_object* v_bi_2066_, lean_object* v_type_2067_, lean_object* v_k_2068_, lean_object* v_kind_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
uint8_t v_bi_boxed_2076_; uint8_t v_kind_boxed_2077_; lean_object* v_res_2078_; 
v_bi_boxed_2076_ = lean_unbox(v_bi_2066_);
v_kind_boxed_2077_ = lean_unbox(v_kind_2069_);
v_res_2078_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_name_2065_, v_bi_boxed_2076_, v_type_2067_, v_k_2068_, v_kind_boxed_2077_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(lean_object* v_00_u03b1_2079_, lean_object* v_name_2080_, uint8_t v_bi_2081_, lean_object* v_type_2082_, lean_object* v_k_2083_, uint8_t v_kind_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
lean_object* v___x_2091_; 
v___x_2091_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_name_2080_, v_bi_2081_, v_type_2082_, v_k_2083_, v_kind_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_);
return v___x_2091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___boxed(lean_object* v_00_u03b1_2092_, lean_object* v_name_2093_, lean_object* v_bi_2094_, lean_object* v_type_2095_, lean_object* v_k_2096_, lean_object* v_kind_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
uint8_t v_bi_boxed_2104_; uint8_t v_kind_boxed_2105_; lean_object* v_res_2106_; 
v_bi_boxed_2104_ = lean_unbox(v_bi_2094_);
v_kind_boxed_2105_ = lean_unbox(v_kind_2097_);
v_res_2106_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(v_00_u03b1_2092_, v_name_2093_, v_bi_boxed_2104_, v_type_2095_, v_k_2096_, v_kind_boxed_2105_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(lean_object* v_cls_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v_options_2110_; uint8_t v_hasTrace_2111_; 
v_options_2110_ = lean_ctor_get(v___y_2108_, 2);
v_hasTrace_2111_ = lean_ctor_get_uint8(v_options_2110_, sizeof(void*)*1);
if (v_hasTrace_2111_ == 0)
{
lean_object* v___x_2112_; lean_object* v___x_2113_; 
lean_dec(v_cls_2107_);
v___x_2112_ = lean_box(v_hasTrace_2111_);
v___x_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
return v___x_2113_;
}
else
{
lean_object* v_inheritedTraceOptions_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v_inheritedTraceOptions_2114_ = lean_ctor_get(v___y_2108_, 13);
v___x_2115_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___redArg___closed__1));
v___x_2116_ = l_Lean_Name_append(v___x_2115_, v_cls_2107_);
v___x_2117_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2114_, v_options_2110_, v___x_2116_);
lean_dec(v___x_2116_);
v___x_2118_ = lean_box(v___x_2117_);
v___x_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
return v___x_2119_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg___boxed(lean_object* v_cls_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
lean_object* v_res_2123_; 
v_res_2123_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(v_cls_2120_, v___y_2121_);
lean_dec_ref(v___y_2121_);
return v_res_2123_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(lean_object* v_cls_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
lean_object* v___x_2131_; 
v___x_2131_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(v_cls_2124_, v___y_2128_);
return v___x_2131_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___boxed(lean_object* v_cls_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_){
_start:
{
lean_object* v_res_2139_; 
v_res_2139_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(v_cls_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___lam__0(lean_object* v_k_2140_, lean_object* v___y_2141_, lean_object* v_b_2142_, lean_object* v_c_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = lean_apply_8(v_k_2140_, v_b_2142_, v_c_2143_, v___y_2141_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, lean_box(0));
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___lam__0___boxed(lean_object* v_k_2150_, lean_object* v___y_2151_, lean_object* v_b_2152_, lean_object* v_c_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___lam__0(v_k_2150_, v___y_2151_, v_b_2152_, v_c_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg(lean_object* v_e_2160_, lean_object* v_maxFVars_2161_, lean_object* v_k_2162_, uint8_t v_cleanupAnnotations_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
lean_object* v___f_2170_; uint8_t v___x_2171_; uint8_t v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___f_2170_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2170_, 0, v_k_2162_);
lean_closure_set(v___f_2170_, 1, v___y_2164_);
v___x_2171_ = 1;
v___x_2172_ = 0;
v___x_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2173_, 0, v_maxFVars_2161_);
v___x_2174_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2160_, v___x_2171_, v___x_2172_, v___x_2171_, v___x_2172_, v___x_2173_, v___f_2170_, v_cleanupAnnotations_2163_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
lean_dec_ref(v___x_2173_);
if (lean_obj_tag(v___x_2174_) == 0)
{
return v___x_2174_;
}
else
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2182_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2177_ = v___x_2174_;
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2174_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2180_; 
if (v_isShared_2178_ == 0)
{
v___x_2180_ = v___x_2177_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_a_2175_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg___boxed(lean_object* v_e_2183_, lean_object* v_maxFVars_2184_, lean_object* v_k_2185_, lean_object* v_cleanupAnnotations_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2193_; lean_object* v_res_2194_; 
v_cleanupAnnotations_boxed_2193_ = lean_unbox(v_cleanupAnnotations_2186_);
v_res_2194_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg(v_e_2183_, v_maxFVars_2184_, v_k_2185_, v_cleanupAnnotations_boxed_2193_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(lean_object* v_00_u03b1_2195_, lean_object* v_e_2196_, lean_object* v_maxFVars_2197_, lean_object* v_k_2198_, uint8_t v_cleanupAnnotations_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_){
_start:
{
lean_object* v___x_2206_; 
v___x_2206_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg(v_e_2196_, v_maxFVars_2197_, v_k_2198_, v_cleanupAnnotations_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___boxed(lean_object* v_00_u03b1_2207_, lean_object* v_e_2208_, lean_object* v_maxFVars_2209_, lean_object* v_k_2210_, lean_object* v_cleanupAnnotations_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2218_; lean_object* v_res_2219_; 
v_cleanupAnnotations_boxed_2218_ = lean_unbox(v_cleanupAnnotations_2211_);
v_res_2219_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(v_00_u03b1_2207_, v_e_2208_, v_maxFVars_2209_, v_k_2210_, v_cleanupAnnotations_boxed_2218_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_);
return v_res_2219_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(lean_object* v_cls_2220_, lean_object* v_msg_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_){
_start:
{
lean_object* v_ref_2227_; lean_object* v___x_2228_; lean_object* v_a_2229_; lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2273_; 
v_ref_2227_ = lean_ctor_get(v___y_2224_, 5);
v___x_2228_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_);
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2231_ = v___x_2228_;
v_isShared_2232_ = v_isSharedCheck_2273_;
goto v_resetjp_2230_;
}
else
{
lean_inc(v_a_2229_);
lean_dec(v___x_2228_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2273_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v___x_2233_; lean_object* v_traceState_2234_; lean_object* v_env_2235_; lean_object* v_nextMacroScope_2236_; lean_object* v_ngen_2237_; lean_object* v_auxDeclNGen_2238_; lean_object* v_cache_2239_; lean_object* v_messages_2240_; lean_object* v_infoState_2241_; lean_object* v_snapshotTasks_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2272_; 
v___x_2233_ = lean_st_ref_take(v___y_2225_);
v_traceState_2234_ = lean_ctor_get(v___x_2233_, 4);
v_env_2235_ = lean_ctor_get(v___x_2233_, 0);
v_nextMacroScope_2236_ = lean_ctor_get(v___x_2233_, 1);
v_ngen_2237_ = lean_ctor_get(v___x_2233_, 2);
v_auxDeclNGen_2238_ = lean_ctor_get(v___x_2233_, 3);
v_cache_2239_ = lean_ctor_get(v___x_2233_, 5);
v_messages_2240_ = lean_ctor_get(v___x_2233_, 6);
v_infoState_2241_ = lean_ctor_get(v___x_2233_, 7);
v_snapshotTasks_2242_ = lean_ctor_get(v___x_2233_, 8);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2244_ = v___x_2233_;
v_isShared_2245_ = v_isSharedCheck_2272_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_snapshotTasks_2242_);
lean_inc(v_infoState_2241_);
lean_inc(v_messages_2240_);
lean_inc(v_cache_2239_);
lean_inc(v_traceState_2234_);
lean_inc(v_auxDeclNGen_2238_);
lean_inc(v_ngen_2237_);
lean_inc(v_nextMacroScope_2236_);
lean_inc(v_env_2235_);
lean_dec(v___x_2233_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2272_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
uint64_t v_tid_2246_; lean_object* v_traces_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2271_; 
v_tid_2246_ = lean_ctor_get_uint64(v_traceState_2234_, sizeof(void*)*1);
v_traces_2247_ = lean_ctor_get(v_traceState_2234_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v_traceState_2234_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2249_ = v_traceState_2234_;
v_isShared_2250_ = v_isSharedCheck_2271_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_traces_2247_);
lean_dec(v_traceState_2234_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2271_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2251_; double v___x_2252_; uint8_t v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2261_; 
v___x_2251_ = lean_box(0);
v___x_2252_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__0);
v___x_2253_ = 0;
v___x_2254_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__1));
v___x_2255_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2255_, 0, v_cls_2220_);
lean_ctor_set(v___x_2255_, 1, v___x_2251_);
lean_ctor_set(v___x_2255_, 2, v___x_2254_);
lean_ctor_set_float(v___x_2255_, sizeof(void*)*3, v___x_2252_);
lean_ctor_set_float(v___x_2255_, sizeof(void*)*3 + 8, v___x_2252_);
lean_ctor_set_uint8(v___x_2255_, sizeof(void*)*3 + 16, v___x_2253_);
v___x_2256_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___closed__2));
v___x_2257_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2257_, 0, v___x_2255_);
lean_ctor_set(v___x_2257_, 1, v_a_2229_);
lean_ctor_set(v___x_2257_, 2, v___x_2256_);
lean_inc(v_ref_2227_);
v___x_2258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2258_, 0, v_ref_2227_);
lean_ctor_set(v___x_2258_, 1, v___x_2257_);
v___x_2259_ = l_Lean_PersistentArray_push___redArg(v_traces_2247_, v___x_2258_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 0, v___x_2259_);
v___x_2261_ = v___x_2249_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v___x_2259_);
lean_ctor_set_uint64(v_reuseFailAlloc_2270_, sizeof(void*)*1, v_tid_2246_);
v___x_2261_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
lean_object* v___x_2263_; 
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 4, v___x_2261_);
v___x_2263_ = v___x_2244_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v_env_2235_);
lean_ctor_set(v_reuseFailAlloc_2269_, 1, v_nextMacroScope_2236_);
lean_ctor_set(v_reuseFailAlloc_2269_, 2, v_ngen_2237_);
lean_ctor_set(v_reuseFailAlloc_2269_, 3, v_auxDeclNGen_2238_);
lean_ctor_set(v_reuseFailAlloc_2269_, 4, v___x_2261_);
lean_ctor_set(v_reuseFailAlloc_2269_, 5, v_cache_2239_);
lean_ctor_set(v_reuseFailAlloc_2269_, 6, v_messages_2240_);
lean_ctor_set(v_reuseFailAlloc_2269_, 7, v_infoState_2241_);
lean_ctor_set(v_reuseFailAlloc_2269_, 8, v_snapshotTasks_2242_);
v___x_2263_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2267_; 
v___x_2264_ = lean_st_ref_set(v___y_2225_, v___x_2263_);
v___x_2265_ = lean_box(0);
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 0, v___x_2265_);
v___x_2267_ = v___x_2231_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v___x_2265_);
v___x_2267_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
return v___x_2267_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___boxed(lean_object* v_cls_2274_, lean_object* v_msg_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_){
_start:
{
lean_object* v_res_2281_; 
v_res_2281_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v_cls_2274_, v_msg_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
return v_res_2281_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(lean_object* v_e_2282_, lean_object* v_as_2283_, size_t v_i_2284_, size_t v_stop_2285_){
_start:
{
uint8_t v___x_2286_; 
v___x_2286_ = lean_usize_dec_eq(v_i_2284_, v_stop_2285_);
if (v___x_2286_ == 0)
{
lean_object* v___x_2287_; lean_object* v_fnName_2288_; lean_object* v_recArgPos_2289_; uint8_t v___x_2290_; 
v___x_2287_ = lean_array_uget_borrowed(v_as_2283_, v_i_2284_);
v_fnName_2288_ = lean_ctor_get(v___x_2287_, 0);
v_recArgPos_2289_ = lean_ctor_get(v___x_2287_, 2);
lean_inc(v_recArgPos_2289_);
lean_inc(v_fnName_2288_);
v___x_2290_ = l_Lean_Elab_Structural_recArgHasLooseBVarsAt(v_fnName_2288_, v_recArgPos_2289_, v_e_2282_);
if (v___x_2290_ == 0)
{
size_t v___x_2291_; size_t v___x_2292_; 
v___x_2291_ = ((size_t)1ULL);
v___x_2292_ = lean_usize_add(v_i_2284_, v___x_2291_);
v_i_2284_ = v___x_2292_;
goto _start;
}
else
{
return v___x_2290_;
}
}
else
{
uint8_t v___x_2294_; 
v___x_2294_ = 0;
return v___x_2294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6___boxed(lean_object* v_e_2295_, lean_object* v_as_2296_, lean_object* v_i_2297_, lean_object* v_stop_2298_){
_start:
{
size_t v_i_boxed_2299_; size_t v_stop_boxed_2300_; uint8_t v_res_2301_; lean_object* v_r_2302_; 
v_i_boxed_2299_ = lean_unbox_usize(v_i_2297_);
lean_dec(v_i_2297_);
v_stop_boxed_2300_ = lean_unbox_usize(v_stop_2298_);
lean_dec(v_stop_2298_);
v_res_2301_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(v_e_2295_, v_as_2296_, v_i_boxed_2299_, v_stop_boxed_2300_);
lean_dec_ref(v_as_2296_);
lean_dec_ref(v_e_2295_);
v_r_2302_ = lean_box(v_res_2301_);
return v_r_2302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(lean_object* v_declName_2303_, lean_object* v___y_2304_){
_start:
{
lean_object* v___x_2306_; lean_object* v_env_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2306_ = lean_st_ref_get(v___y_2304_);
v_env_2307_ = lean_ctor_get(v___x_2306_, 0);
lean_inc_ref(v_env_2307_);
lean_dec(v___x_2306_);
v___x_2308_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_2307_, v_declName_2303_);
v___x_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2308_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg___boxed(lean_object* v_declName_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_){
_start:
{
lean_object* v_res_2313_; 
v_res_2313_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_2310_, v___y_2311_);
lean_dec(v___y_2311_);
return v_res_2313_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(lean_object* v_msg_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_){
_start:
{
lean_object* v___x_2321_; lean_object* v_toApplicative_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2384_; 
v___x_2321_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_2322_ = lean_ctor_get(v___x_2321_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2321_);
if (v_isSharedCheck_2384_ == 0)
{
lean_object* v_unused_2385_; 
v_unused_2385_ = lean_ctor_get(v___x_2321_, 1);
lean_dec(v_unused_2385_);
v___x_2324_ = v___x_2321_;
v_isShared_2325_ = v_isSharedCheck_2384_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_toApplicative_2322_);
lean_dec(v___x_2321_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2384_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v_toFunctor_2326_; lean_object* v_toSeq_2327_; lean_object* v_toSeqLeft_2328_; lean_object* v_toSeqRight_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2382_; 
v_toFunctor_2326_ = lean_ctor_get(v_toApplicative_2322_, 0);
v_toSeq_2327_ = lean_ctor_get(v_toApplicative_2322_, 2);
v_toSeqLeft_2328_ = lean_ctor_get(v_toApplicative_2322_, 3);
v_toSeqRight_2329_ = lean_ctor_get(v_toApplicative_2322_, 4);
v_isSharedCheck_2382_ = !lean_is_exclusive(v_toApplicative_2322_);
if (v_isSharedCheck_2382_ == 0)
{
lean_object* v_unused_2383_; 
v_unused_2383_ = lean_ctor_get(v_toApplicative_2322_, 1);
lean_dec(v_unused_2383_);
v___x_2331_ = v_toApplicative_2322_;
v_isShared_2332_ = v_isSharedCheck_2382_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_toSeqRight_2329_);
lean_inc(v_toSeqLeft_2328_);
lean_inc(v_toSeq_2327_);
lean_inc(v_toFunctor_2326_);
lean_dec(v_toApplicative_2322_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2382_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___f_2333_; lean_object* v___f_2334_; lean_object* v___f_2335_; lean_object* v___f_2336_; lean_object* v___x_2337_; lean_object* v___f_2338_; lean_object* v___f_2339_; lean_object* v___f_2340_; lean_object* v___x_2342_; 
v___f_2333_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2));
v___f_2334_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3));
lean_inc_ref(v_toFunctor_2326_);
v___f_2335_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2335_, 0, v_toFunctor_2326_);
v___f_2336_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2336_, 0, v_toFunctor_2326_);
v___x_2337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2337_, 0, v___f_2335_);
lean_ctor_set(v___x_2337_, 1, v___f_2336_);
v___f_2338_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2338_, 0, v_toSeqRight_2329_);
v___f_2339_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2339_, 0, v_toSeqLeft_2328_);
v___f_2340_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2340_, 0, v_toSeq_2327_);
if (v_isShared_2332_ == 0)
{
lean_ctor_set(v___x_2331_, 4, v___f_2338_);
lean_ctor_set(v___x_2331_, 3, v___f_2339_);
lean_ctor_set(v___x_2331_, 2, v___f_2340_);
lean_ctor_set(v___x_2331_, 1, v___f_2333_);
lean_ctor_set(v___x_2331_, 0, v___x_2337_);
v___x_2342_ = v___x_2331_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v___x_2337_);
lean_ctor_set(v_reuseFailAlloc_2381_, 1, v___f_2333_);
lean_ctor_set(v_reuseFailAlloc_2381_, 2, v___f_2340_);
lean_ctor_set(v_reuseFailAlloc_2381_, 3, v___f_2339_);
lean_ctor_set(v_reuseFailAlloc_2381_, 4, v___f_2338_);
v___x_2342_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
lean_object* v___x_2344_; 
if (v_isShared_2325_ == 0)
{
lean_ctor_set(v___x_2324_, 1, v___f_2334_);
lean_ctor_set(v___x_2324_, 0, v___x_2342_);
v___x_2344_ = v___x_2324_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v___x_2342_);
lean_ctor_set(v_reuseFailAlloc_2380_, 1, v___f_2334_);
v___x_2344_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
lean_object* v___x_2345_; lean_object* v_toApplicative_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2378_; 
v___x_2345_ = l_StateRefT_x27_instMonad___redArg(v___x_2344_);
v_toApplicative_2346_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2378_ == 0)
{
lean_object* v_unused_2379_; 
v_unused_2379_ = lean_ctor_get(v___x_2345_, 1);
lean_dec(v_unused_2379_);
v___x_2348_ = v___x_2345_;
v_isShared_2349_ = v_isSharedCheck_2378_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_toApplicative_2346_);
lean_dec(v___x_2345_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2378_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
lean_object* v_toFunctor_2350_; lean_object* v_toSeq_2351_; lean_object* v_toSeqLeft_2352_; lean_object* v_toSeqRight_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2376_; 
v_toFunctor_2350_ = lean_ctor_get(v_toApplicative_2346_, 0);
v_toSeq_2351_ = lean_ctor_get(v_toApplicative_2346_, 2);
v_toSeqLeft_2352_ = lean_ctor_get(v_toApplicative_2346_, 3);
v_toSeqRight_2353_ = lean_ctor_get(v_toApplicative_2346_, 4);
v_isSharedCheck_2376_ = !lean_is_exclusive(v_toApplicative_2346_);
if (v_isSharedCheck_2376_ == 0)
{
lean_object* v_unused_2377_; 
v_unused_2377_ = lean_ctor_get(v_toApplicative_2346_, 1);
lean_dec(v_unused_2377_);
v___x_2355_ = v_toApplicative_2346_;
v_isShared_2356_ = v_isSharedCheck_2376_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_toSeqRight_2353_);
lean_inc(v_toSeqLeft_2352_);
lean_inc(v_toSeq_2351_);
lean_inc(v_toFunctor_2350_);
lean_dec(v_toApplicative_2346_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2376_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___f_2357_; lean_object* v___f_2358_; lean_object* v___f_2359_; lean_object* v___f_2360_; lean_object* v___x_2361_; lean_object* v___f_2362_; lean_object* v___f_2363_; lean_object* v___f_2364_; lean_object* v___x_2366_; 
v___f_2357_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4));
v___f_2358_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5));
lean_inc_ref(v_toFunctor_2350_);
v___f_2359_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2359_, 0, v_toFunctor_2350_);
v___f_2360_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2360_, 0, v_toFunctor_2350_);
v___x_2361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2361_, 0, v___f_2359_);
lean_ctor_set(v___x_2361_, 1, v___f_2360_);
v___f_2362_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2362_, 0, v_toSeqRight_2353_);
v___f_2363_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2363_, 0, v_toSeqLeft_2352_);
v___f_2364_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2364_, 0, v_toSeq_2351_);
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 4, v___f_2362_);
lean_ctor_set(v___x_2355_, 3, v___f_2363_);
lean_ctor_set(v___x_2355_, 2, v___f_2364_);
lean_ctor_set(v___x_2355_, 1, v___f_2357_);
lean_ctor_set(v___x_2355_, 0, v___x_2361_);
v___x_2366_ = v___x_2355_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v___x_2361_);
lean_ctor_set(v_reuseFailAlloc_2375_, 1, v___f_2357_);
lean_ctor_set(v_reuseFailAlloc_2375_, 2, v___f_2364_);
lean_ctor_set(v_reuseFailAlloc_2375_, 3, v___f_2363_);
lean_ctor_set(v_reuseFailAlloc_2375_, 4, v___f_2362_);
v___x_2366_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
lean_object* v___x_2368_; 
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 1, v___f_2358_);
lean_ctor_set(v___x_2348_, 0, v___x_2366_);
v___x_2368_ = v___x_2348_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2366_);
lean_ctor_set(v_reuseFailAlloc_2374_, 1, v___f_2358_);
v___x_2368_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_26058__overap_2372_; lean_object* v___x_2373_; 
v___x_2369_ = l_StateRefT_x27_instMonad___redArg(v___x_2368_);
v___x_2370_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_2371_ = l_instInhabitedOfMonad___redArg(v___x_2369_, v___x_2370_);
v___x_26058__overap_2372_ = lean_panic_fn(v___x_2371_, v_msg_2314_);
v___x_2373_ = lean_apply_6(v___x_26058__overap_2372_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, lean_box(0));
return v___x_2373_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7___boxed(lean_object* v_msg_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(v_msg_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_);
return v_res_2393_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__0(void){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2394_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2395_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__0);
v___x_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
return v___x_2396_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__2(void){
_start:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2397_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1);
v___x_2398_ = lean_unsigned_to_nat(0u);
v___x_2399_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2399_, 0, v___x_2398_);
lean_ctor_set(v___x_2399_, 1, v___x_2398_);
lean_ctor_set(v___x_2399_, 2, v___x_2398_);
lean_ctor_set(v___x_2399_, 3, v___x_2397_);
lean_ctor_set(v___x_2399_, 4, v___x_2397_);
lean_ctor_set(v___x_2399_, 5, v___x_2397_);
lean_ctor_set(v___x_2399_, 6, v___x_2397_);
lean_ctor_set(v___x_2399_, 7, v___x_2397_);
lean_ctor_set(v___x_2399_, 8, v___x_2397_);
return v___x_2399_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__3(void){
_start:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2400_ = lean_unsigned_to_nat(32u);
v___x_2401_ = lean_mk_empty_array_with_capacity(v___x_2400_);
v___x_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2401_);
return v___x_2402_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__4(void){
_start:
{
size_t v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2403_ = ((size_t)5ULL);
v___x_2404_ = lean_unsigned_to_nat(0u);
v___x_2405_ = lean_unsigned_to_nat(32u);
v___x_2406_ = lean_mk_empty_array_with_capacity(v___x_2405_);
v___x_2407_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__3);
v___x_2408_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
lean_ctor_set(v___x_2408_, 1, v___x_2406_);
lean_ctor_set(v___x_2408_, 2, v___x_2404_);
lean_ctor_set(v___x_2408_, 3, v___x_2404_);
lean_ctor_set_usize(v___x_2408_, 4, v___x_2403_);
return v___x_2408_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__5(void){
_start:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2409_ = lean_box(1);
v___x_2410_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__4);
v___x_2411_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__1);
v___x_2412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2411_);
lean_ctor_set(v___x_2412_, 1, v___x_2410_);
lean_ctor_set(v___x_2412_, 2, v___x_2409_);
return v___x_2412_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7(void){
_start:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2414_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__6));
v___x_2415_ = l_Lean_stringToMessageData(v___x_2414_);
return v___x_2415_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__9(void){
_start:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
v___x_2417_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__8));
v___x_2418_ = l_Lean_stringToMessageData(v___x_2417_);
return v___x_2418_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__11(void){
_start:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2420_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__10));
v___x_2421_ = l_Lean_stringToMessageData(v___x_2420_);
return v___x_2421_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__13(void){
_start:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__12));
v___x_2424_ = l_Lean_stringToMessageData(v___x_2423_);
return v___x_2424_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__15(void){
_start:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; 
v___x_2426_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__14));
v___x_2427_ = l_Lean_stringToMessageData(v___x_2426_);
return v___x_2427_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__17(void){
_start:
{
lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2429_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__16));
v___x_2430_ = l_Lean_stringToMessageData(v___x_2429_);
return v___x_2430_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__19(void){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2432_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__18));
v___x_2433_ = l_Lean_stringToMessageData(v___x_2432_);
return v___x_2433_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg(lean_object* v_msg_2434_, lean_object* v_declHint_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v___x_2438_; lean_object* v_env_2439_; uint8_t v___x_2440_; 
v___x_2438_ = lean_st_ref_get(v___y_2436_);
v_env_2439_ = lean_ctor_get(v___x_2438_, 0);
lean_inc_ref(v_env_2439_);
lean_dec(v___x_2438_);
v___x_2440_ = l_Lean_Name_isAnonymous(v_declHint_2435_);
if (v___x_2440_ == 0)
{
uint8_t v_isExporting_2441_; 
v_isExporting_2441_ = lean_ctor_get_uint8(v_env_2439_, sizeof(void*)*8);
if (v_isExporting_2441_ == 0)
{
lean_object* v___x_2442_; 
lean_dec_ref(v_env_2439_);
lean_dec(v_declHint_2435_);
v___x_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2442_, 0, v_msg_2434_);
return v___x_2442_;
}
else
{
lean_object* v___x_2443_; uint8_t v___x_2444_; 
lean_inc_ref(v_env_2439_);
v___x_2443_ = l_Lean_Environment_setExporting(v_env_2439_, v___x_2440_);
lean_inc(v_declHint_2435_);
lean_inc_ref(v___x_2443_);
v___x_2444_ = l_Lean_Environment_contains(v___x_2443_, v_declHint_2435_, v_isExporting_2441_);
if (v___x_2444_ == 0)
{
lean_object* v___x_2445_; 
lean_dec_ref(v___x_2443_);
lean_dec_ref(v_env_2439_);
lean_dec(v_declHint_2435_);
v___x_2445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2445_, 0, v_msg_2434_);
return v___x_2445_;
}
else
{
lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v_c_2451_; lean_object* v___x_2452_; 
v___x_2446_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__2);
v___x_2447_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__5);
v___x_2448_ = l_Lean_Options_empty;
v___x_2449_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2443_);
lean_ctor_set(v___x_2449_, 1, v___x_2446_);
lean_ctor_set(v___x_2449_, 2, v___x_2447_);
lean_ctor_set(v___x_2449_, 3, v___x_2448_);
lean_inc(v_declHint_2435_);
v___x_2450_ = l_Lean_MessageData_ofConstName(v_declHint_2435_, v___x_2440_);
v_c_2451_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2451_, 0, v___x_2449_);
lean_ctor_set(v_c_2451_, 1, v___x_2450_);
v___x_2452_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2439_, v_declHint_2435_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; 
lean_dec_ref(v_env_2439_);
lean_dec(v_declHint_2435_);
v___x_2453_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7);
v___x_2454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2454_, 0, v___x_2453_);
lean_ctor_set(v___x_2454_, 1, v_c_2451_);
v___x_2455_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__9);
v___x_2456_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2454_);
lean_ctor_set(v___x_2456_, 1, v___x_2455_);
v___x_2457_ = l_Lean_MessageData_note(v___x_2456_);
v___x_2458_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2458_, 0, v_msg_2434_);
lean_ctor_set(v___x_2458_, 1, v___x_2457_);
v___x_2459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2458_);
return v___x_2459_;
}
else
{
lean_object* v_val_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2495_; 
v_val_2460_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2495_ == 0)
{
v___x_2462_ = v___x_2452_;
v_isShared_2463_ = v_isSharedCheck_2495_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_val_2460_);
lean_dec(v___x_2452_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2495_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v_mod_2467_; uint8_t v___x_2468_; 
v___x_2464_ = lean_box(0);
v___x_2465_ = l_Lean_Environment_header(v_env_2439_);
lean_dec_ref(v_env_2439_);
v___x_2466_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2465_);
v_mod_2467_ = lean_array_get(v___x_2464_, v___x_2466_, v_val_2460_);
lean_dec(v_val_2460_);
lean_dec_ref(v___x_2466_);
v___x_2468_ = l_Lean_isPrivateName(v_declHint_2435_);
lean_dec(v_declHint_2435_);
if (v___x_2468_ == 0)
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2480_; 
v___x_2469_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__11);
v___x_2470_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2470_, 0, v___x_2469_);
lean_ctor_set(v___x_2470_, 1, v_c_2451_);
v___x_2471_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__13);
v___x_2472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2472_, 0, v___x_2470_);
lean_ctor_set(v___x_2472_, 1, v___x_2471_);
v___x_2473_ = l_Lean_MessageData_ofName(v_mod_2467_);
v___x_2474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2474_, 0, v___x_2472_);
lean_ctor_set(v___x_2474_, 1, v___x_2473_);
v___x_2475_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__15);
v___x_2476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2476_, 0, v___x_2474_);
lean_ctor_set(v___x_2476_, 1, v___x_2475_);
v___x_2477_ = l_Lean_MessageData_note(v___x_2476_);
v___x_2478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2478_, 0, v_msg_2434_);
lean_ctor_set(v___x_2478_, 1, v___x_2477_);
if (v_isShared_2463_ == 0)
{
lean_ctor_set_tag(v___x_2462_, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2478_);
v___x_2480_ = v___x_2462_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v___x_2478_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
else
{
lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2493_; 
v___x_2482_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__7);
v___x_2483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2482_);
lean_ctor_set(v___x_2483_, 1, v_c_2451_);
v___x_2484_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__17);
v___x_2485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2483_);
lean_ctor_set(v___x_2485_, 1, v___x_2484_);
v___x_2486_ = l_Lean_MessageData_ofName(v_mod_2467_);
v___x_2487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2487_, 0, v___x_2485_);
lean_ctor_set(v___x_2487_, 1, v___x_2486_);
v___x_2488_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___closed__19);
v___x_2489_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2487_);
lean_ctor_set(v___x_2489_, 1, v___x_2488_);
v___x_2490_ = l_Lean_MessageData_note(v___x_2489_);
v___x_2491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2491_, 0, v_msg_2434_);
lean_ctor_set(v___x_2491_, 1, v___x_2490_);
if (v_isShared_2463_ == 0)
{
lean_ctor_set_tag(v___x_2462_, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2491_);
v___x_2493_ = v___x_2462_;
goto v_reusejp_2492_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v___x_2491_);
v___x_2493_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2492_;
}
v_reusejp_2492_:
{
return v___x_2493_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2496_; 
lean_dec_ref(v_env_2439_);
lean_dec(v_declHint_2435_);
v___x_2496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2496_, 0, v_msg_2434_);
return v___x_2496_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg___boxed(lean_object* v_msg_2497_, lean_object* v_declHint_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_){
_start:
{
lean_object* v_res_2501_; 
v_res_2501_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg(v_msg_2497_, v_declHint_2498_, v___y_2499_);
lean_dec(v___y_2499_);
return v_res_2501_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19(lean_object* v_msg_2502_, lean_object* v_declHint_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v___x_2510_; lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2520_; 
v___x_2510_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg(v_msg_2502_, v_declHint_2503_, v___y_2508_);
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2513_ = v___x_2510_;
v_isShared_2514_ = v_isSharedCheck_2520_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v___x_2510_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2520_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2518_; 
v___x_2515_ = l_Lean_unknownIdentifierMessageTag;
v___x_2516_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2515_);
lean_ctor_set(v___x_2516_, 1, v_a_2511_);
if (v_isShared_2514_ == 0)
{
lean_ctor_set(v___x_2513_, 0, v___x_2516_);
v___x_2518_ = v___x_2513_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19___boxed(lean_object* v_msg_2521_, lean_object* v_declHint_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19(v_msg_2521_, v_declHint_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
lean_dec(v___y_2523_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(lean_object* v_msg_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v_ref_2536_; lean_object* v___x_2537_; lean_object* v_a_2538_; lean_object* v___x_2540_; uint8_t v_isShared_2541_; uint8_t v_isSharedCheck_2546_; 
v_ref_2536_ = lean_ctor_get(v___y_2533_, 5);
v___x_2537_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
v_a_2538_ = lean_ctor_get(v___x_2537_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2540_ = v___x_2537_;
v_isShared_2541_ = v_isSharedCheck_2546_;
goto v_resetjp_2539_;
}
else
{
lean_inc(v_a_2538_);
lean_dec(v___x_2537_);
v___x_2540_ = lean_box(0);
v_isShared_2541_ = v_isSharedCheck_2546_;
goto v_resetjp_2539_;
}
v_resetjp_2539_:
{
lean_object* v___x_2542_; lean_object* v___x_2544_; 
lean_inc(v_ref_2536_);
v___x_2542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2542_, 0, v_ref_2536_);
lean_ctor_set(v___x_2542_, 1, v_a_2538_);
if (v_isShared_2541_ == 0)
{
lean_ctor_set_tag(v___x_2540_, 1);
lean_ctor_set(v___x_2540_, 0, v___x_2542_);
v___x_2544_ = v___x_2540_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v___x_2542_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
return v___x_2544_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg___boxed(lean_object* v_msg_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg(lean_object* v_ref_2554_, lean_object* v_msg_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_){
_start:
{
lean_object* v_fileName_2562_; lean_object* v_fileMap_2563_; lean_object* v_options_2564_; lean_object* v_currRecDepth_2565_; lean_object* v_maxRecDepth_2566_; lean_object* v_ref_2567_; lean_object* v_currNamespace_2568_; lean_object* v_openDecls_2569_; lean_object* v_initHeartbeats_2570_; lean_object* v_maxHeartbeats_2571_; lean_object* v_quotContext_2572_; lean_object* v_currMacroScope_2573_; uint8_t v_diag_2574_; lean_object* v_cancelTk_x3f_2575_; uint8_t v_suppressElabErrors_2576_; lean_object* v_inheritedTraceOptions_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2586_; 
v_fileName_2562_ = lean_ctor_get(v___y_2559_, 0);
v_fileMap_2563_ = lean_ctor_get(v___y_2559_, 1);
v_options_2564_ = lean_ctor_get(v___y_2559_, 2);
v_currRecDepth_2565_ = lean_ctor_get(v___y_2559_, 3);
v_maxRecDepth_2566_ = lean_ctor_get(v___y_2559_, 4);
v_ref_2567_ = lean_ctor_get(v___y_2559_, 5);
v_currNamespace_2568_ = lean_ctor_get(v___y_2559_, 6);
v_openDecls_2569_ = lean_ctor_get(v___y_2559_, 7);
v_initHeartbeats_2570_ = lean_ctor_get(v___y_2559_, 8);
v_maxHeartbeats_2571_ = lean_ctor_get(v___y_2559_, 9);
v_quotContext_2572_ = lean_ctor_get(v___y_2559_, 10);
v_currMacroScope_2573_ = lean_ctor_get(v___y_2559_, 11);
v_diag_2574_ = lean_ctor_get_uint8(v___y_2559_, sizeof(void*)*14);
v_cancelTk_x3f_2575_ = lean_ctor_get(v___y_2559_, 12);
v_suppressElabErrors_2576_ = lean_ctor_get_uint8(v___y_2559_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2577_ = lean_ctor_get(v___y_2559_, 13);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___y_2559_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2579_ = v___y_2559_;
v_isShared_2580_ = v_isSharedCheck_2586_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_inheritedTraceOptions_2577_);
lean_inc(v_cancelTk_x3f_2575_);
lean_inc(v_currMacroScope_2573_);
lean_inc(v_quotContext_2572_);
lean_inc(v_maxHeartbeats_2571_);
lean_inc(v_initHeartbeats_2570_);
lean_inc(v_openDecls_2569_);
lean_inc(v_currNamespace_2568_);
lean_inc(v_ref_2567_);
lean_inc(v_maxRecDepth_2566_);
lean_inc(v_currRecDepth_2565_);
lean_inc(v_options_2564_);
lean_inc(v_fileMap_2563_);
lean_inc(v_fileName_2562_);
lean_dec(v___y_2559_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2586_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v_ref_2581_; lean_object* v___x_2583_; 
v_ref_2581_ = l_Lean_replaceRef(v_ref_2554_, v_ref_2567_);
lean_dec(v_ref_2567_);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 5, v_ref_2581_);
v___x_2583_ = v___x_2579_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_fileName_2562_);
lean_ctor_set(v_reuseFailAlloc_2585_, 1, v_fileMap_2563_);
lean_ctor_set(v_reuseFailAlloc_2585_, 2, v_options_2564_);
lean_ctor_set(v_reuseFailAlloc_2585_, 3, v_currRecDepth_2565_);
lean_ctor_set(v_reuseFailAlloc_2585_, 4, v_maxRecDepth_2566_);
lean_ctor_set(v_reuseFailAlloc_2585_, 5, v_ref_2581_);
lean_ctor_set(v_reuseFailAlloc_2585_, 6, v_currNamespace_2568_);
lean_ctor_set(v_reuseFailAlloc_2585_, 7, v_openDecls_2569_);
lean_ctor_set(v_reuseFailAlloc_2585_, 8, v_initHeartbeats_2570_);
lean_ctor_set(v_reuseFailAlloc_2585_, 9, v_maxHeartbeats_2571_);
lean_ctor_set(v_reuseFailAlloc_2585_, 10, v_quotContext_2572_);
lean_ctor_set(v_reuseFailAlloc_2585_, 11, v_currMacroScope_2573_);
lean_ctor_set(v_reuseFailAlloc_2585_, 12, v_cancelTk_x3f_2575_);
lean_ctor_set(v_reuseFailAlloc_2585_, 13, v_inheritedTraceOptions_2577_);
lean_ctor_set_uint8(v_reuseFailAlloc_2585_, sizeof(void*)*14, v_diag_2574_);
lean_ctor_set_uint8(v_reuseFailAlloc_2585_, sizeof(void*)*14 + 1, v_suppressElabErrors_2576_);
v___x_2583_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
lean_object* v___x_2584_; 
v___x_2584_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_2555_, v___y_2557_, v___y_2558_, v___x_2583_, v___y_2560_);
lean_dec_ref(v___x_2583_);
return v___x_2584_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg___boxed(lean_object* v_ref_2587_, lean_object* v_msg_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg(v_ref_2587_, v_msg_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_);
lean_dec(v___y_2593_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec(v_ref_2587_);
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg(lean_object* v_ref_2596_, lean_object* v_msg_2597_, lean_object* v_declHint_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; lean_object* v_a_2606_; lean_object* v___x_2607_; 
v___x_2605_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19(v_msg_2597_, v_declHint_2598_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
lean_inc(v_a_2606_);
lean_dec_ref(v___x_2605_);
v___x_2607_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg(v_ref_2596_, v_a_2606_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
return v___x_2607_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg___boxed(lean_object* v_ref_2608_, lean_object* v_msg_2609_, lean_object* v_declHint_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg(v_ref_2608_, v_msg_2609_, v_declHint_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_);
lean_dec(v___y_2615_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec(v___y_2611_);
lean_dec(v_ref_2608_);
return v_res_2617_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2619_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__0));
v___x_2620_ = l_Lean_stringToMessageData(v___x_2619_);
return v___x_2620_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2622_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__2));
v___x_2623_ = l_Lean_stringToMessageData(v___x_2622_);
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg(lean_object* v_ref_2624_, lean_object* v_constName_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_){
_start:
{
lean_object* v___x_2632_; uint8_t v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2632_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__1);
v___x_2633_ = 0;
lean_inc(v_constName_2625_);
v___x_2634_ = l_Lean_MessageData_ofConstName(v_constName_2625_, v___x_2633_);
v___x_2635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2632_);
lean_ctor_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___closed__3);
v___x_2637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2637_, 0, v___x_2635_);
lean_ctor_set(v___x_2637_, 1, v___x_2636_);
v___x_2638_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg(v_ref_2624_, v___x_2637_, v_constName_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg___boxed(lean_object* v_ref_2639_, lean_object* v_constName_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg(v_ref_2639_, v_constName_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_);
lean_dec(v___y_2645_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
lean_dec(v___y_2641_);
lean_dec(v_ref_2639_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg(lean_object* v_constName_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v_ref_2655_; lean_object* v___x_2656_; 
v_ref_2655_ = lean_ctor_get(v___y_2652_, 5);
lean_inc(v_ref_2655_);
v___x_2656_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg(v_ref_2655_, v_constName_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_);
lean_dec(v_ref_2655_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg___boxed(lean_object* v_constName_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_){
_start:
{
lean_object* v_res_2664_; 
v_res_2664_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg(v_constName_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_);
lean_dec(v___y_2662_);
lean_dec(v___y_2660_);
lean_dec_ref(v___y_2659_);
lean_dec(v___y_2658_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(lean_object* v_constName_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_){
_start:
{
lean_object* v___x_2672_; lean_object* v_env_2673_; uint8_t v___x_2674_; lean_object* v___x_2675_; 
v___x_2672_ = lean_st_ref_get(v___y_2670_);
v_env_2673_ = lean_ctor_get(v___x_2672_, 0);
lean_inc_ref(v_env_2673_);
lean_dec(v___x_2672_);
v___x_2674_ = 0;
lean_inc(v_constName_2665_);
v___x_2675_ = l_Lean_Environment_find_x3f(v_env_2673_, v_constName_2665_, v___x_2674_);
if (lean_obj_tag(v___x_2675_) == 0)
{
lean_object* v___x_2676_; 
v___x_2676_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg(v_constName_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_);
return v___x_2676_;
}
else
{
lean_object* v_val_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2684_; 
lean_dec_ref(v___y_2669_);
lean_dec(v_constName_2665_);
v_val_2677_ = lean_ctor_get(v___x_2675_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2679_ = v___x_2675_;
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_val_2677_);
lean_dec(v___x_2675_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2682_; 
if (v_isShared_2680_ == 0)
{
lean_ctor_set_tag(v___x_2679_, 0);
v___x_2682_ = v___x_2679_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_val_2677_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6___boxed(lean_object* v_constName_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_constName_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_);
lean_dec(v___y_2690_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2687_);
lean_dec(v___y_2686_);
return v_res_2692_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3(void){
_start:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2696_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2));
v___x_2697_ = lean_unsigned_to_nat(53u);
v___x_2698_ = lean_unsigned_to_nat(62u);
v___x_2699_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1));
v___x_2700_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0));
v___x_2701_ = l_mkPanicMessageWithDecl(v___x_2700_, v___x_2699_, v___x_2698_, v___x_2697_, v___x_2696_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(size_t v_sz_2702_, size_t v_i_2703_, lean_object* v_bs_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
uint8_t v___x_2711_; 
v___x_2711_ = lean_usize_dec_lt(v_i_2703_, v_sz_2702_);
if (v___x_2711_ == 0)
{
lean_object* v___x_2712_; 
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec(v___y_2707_);
lean_dec_ref(v___y_2706_);
lean_dec(v___y_2705_);
v___x_2712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2712_, 0, v_bs_2704_);
return v___x_2712_;
}
else
{
lean_object* v_v_2713_; lean_object* v___x_2714_; 
v_v_2713_ = lean_array_uget_borrowed(v_bs_2704_, v_i_2703_);
lean_inc_ref(v___y_2708_);
lean_inc(v_v_2713_);
v___x_2714_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_v_2713_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_object* v_a_2715_; lean_object* v___x_2716_; lean_object* v_bs_x27_2717_; lean_object* v_a_2719_; 
v_a_2715_ = lean_ctor_get(v___x_2714_, 0);
lean_inc(v_a_2715_);
lean_dec_ref(v___x_2714_);
v___x_2716_ = lean_unsigned_to_nat(0u);
v_bs_x27_2717_ = lean_array_uset(v_bs_2704_, v_i_2703_, v___x_2716_);
if (lean_obj_tag(v_a_2715_) == 6)
{
lean_object* v_val_2724_; lean_object* v_numFields_2725_; uint8_t v___x_2726_; lean_object* v___x_2727_; 
v_val_2724_ = lean_ctor_get(v_a_2715_, 0);
lean_inc_ref(v_val_2724_);
lean_dec_ref(v_a_2715_);
v_numFields_2725_ = lean_ctor_get(v_val_2724_, 4);
lean_inc(v_numFields_2725_);
lean_dec_ref(v_val_2724_);
v___x_2726_ = 0;
v___x_2727_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2727_, 0, v_numFields_2725_);
lean_ctor_set(v___x_2727_, 1, v___x_2716_);
lean_ctor_set_uint8(v___x_2727_, sizeof(void*)*2, v___x_2726_);
v_a_2719_ = v___x_2727_;
goto v___jp_2718_;
}
else
{
lean_object* v___x_2728_; lean_object* v___x_2729_; 
lean_dec(v_a_2715_);
v___x_2728_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3);
lean_inc(v___y_2709_);
lean_inc_ref(v___y_2708_);
lean_inc(v___y_2707_);
lean_inc_ref(v___y_2706_);
lean_inc(v___y_2705_);
v___x_2729_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(v___x_2728_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_object* v_a_2730_; 
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
lean_inc(v_a_2730_);
lean_dec_ref(v___x_2729_);
v_a_2719_ = v_a_2730_;
goto v___jp_2718_;
}
else
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
lean_dec_ref(v_bs_x27_2717_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec(v___y_2707_);
lean_dec_ref(v___y_2706_);
lean_dec(v___y_2705_);
v_a_2731_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2729_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2729_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2734_ == 0)
{
v___x_2736_ = v___x_2733_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_a_2731_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
return v___x_2736_;
}
}
}
}
v___jp_2718_:
{
size_t v___x_2720_; size_t v___x_2721_; lean_object* v___x_2722_; 
v___x_2720_ = ((size_t)1ULL);
v___x_2721_ = lean_usize_add(v_i_2703_, v___x_2720_);
v___x_2722_ = lean_array_uset(v_bs_x27_2717_, v_i_2703_, v_a_2719_);
v_i_2703_ = v___x_2721_;
v_bs_2704_ = v___x_2722_;
goto _start;
}
}
else
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2746_; 
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec(v___y_2707_);
lean_dec_ref(v___y_2706_);
lean_dec(v___y_2705_);
lean_dec_ref(v_bs_2704_);
v_a_2739_ = lean_ctor_get(v___x_2714_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2741_ = v___x_2714_;
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2714_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2744_; 
if (v_isShared_2742_ == 0)
{
v___x_2744_ = v___x_2741_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2739_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
return v___x_2744_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___boxed(lean_object* v_sz_2747_, lean_object* v_i_2748_, lean_object* v_bs_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
size_t v_sz_boxed_2756_; size_t v_i_boxed_2757_; lean_object* v_res_2758_; 
v_sz_boxed_2756_ = lean_unbox_usize(v_sz_2747_);
lean_dec(v_sz_2747_);
v_i_boxed_2757_ = lean_unbox_usize(v_i_2748_);
lean_dec(v_i_2748_);
v_res_2758_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(v_sz_boxed_2756_, v_i_boxed_2757_, v_bs_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
return v_res_2758_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0(void){
_start:
{
lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2759_ = lean_box(0);
v___x_2760_ = lean_unsigned_to_nat(16u);
v___x_2761_ = lean_mk_array(v___x_2760_, v___x_2759_);
return v___x_2761_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2762_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0);
v___x_2763_ = lean_unsigned_to_nat(0u);
v___x_2764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2763_);
lean_ctor_set(v___x_2764_, 1, v___x_2762_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(lean_object* v_e_2767_, uint8_t v_alsoCasesOn_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
uint8_t v___x_2778_; 
v___x_2778_ = l_Lean_Expr_isApp(v_e_2767_);
if (v___x_2778_ == 0)
{
lean_object* v___x_2779_; lean_object* v___x_2780_; 
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
lean_dec_ref(v_e_2767_);
v___x_2779_ = lean_box(0);
v___x_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2779_);
return v___x_2780_;
}
else
{
lean_object* v___x_2781_; 
v___x_2781_ = l_Lean_Expr_getAppFn(v_e_2767_);
if (lean_obj_tag(v___x_2781_) == 4)
{
lean_object* v_declName_2782_; lean_object* v_us_2783_; lean_object* v___x_2784_; lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2939_; 
v_declName_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_declName_2782_);
v_us_2783_ = lean_ctor_get(v___x_2781_, 1);
lean_inc(v_us_2783_);
lean_dec_ref(v___x_2781_);
lean_inc(v_declName_2782_);
v___x_2784_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_2782_, v___y_2773_);
v_a_2785_ = lean_ctor_get(v___x_2784_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2784_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2787_ = v___x_2784_;
v_isShared_2788_ = v_isSharedCheck_2939_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2784_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2939_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
if (lean_obj_tag(v_a_2785_) == 1)
{
lean_object* v_val_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2831_; 
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
v_val_2789_ = lean_ctor_get(v_a_2785_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v_a_2785_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2791_ = v_a_2785_;
v_isShared_2792_ = v_isSharedCheck_2831_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_val_2789_);
lean_dec(v_a_2785_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2831_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v_dummy_2793_; lean_object* v_nargs_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v_args_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; uint8_t v___x_2801_; 
v_dummy_2793_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0);
v_nargs_2794_ = l_Lean_Expr_getAppNumArgs(v_e_2767_);
lean_inc(v_nargs_2794_);
v___x_2795_ = lean_mk_array(v_nargs_2794_, v_dummy_2793_);
v___x_2796_ = lean_unsigned_to_nat(1u);
v___x_2797_ = lean_nat_sub(v_nargs_2794_, v___x_2796_);
lean_dec(v_nargs_2794_);
v_args_2798_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2767_, v___x_2795_, v___x_2797_);
v___x_2799_ = lean_array_get_size(v_args_2798_);
v___x_2800_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_2789_);
v___x_2801_ = lean_nat_dec_lt(v___x_2799_, v___x_2800_);
lean_dec(v___x_2800_);
if (v___x_2801_ == 0)
{
lean_object* v_numParams_2802_; lean_object* v_numDiscrs_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2822_; 
v_numParams_2802_ = lean_ctor_get(v_val_2789_, 0);
v_numDiscrs_2803_ = lean_ctor_get(v_val_2789_, 1);
v___x_2804_ = lean_array_mk(v_us_2783_);
v___x_2805_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2802_);
v___x_2806_ = l_Array_extract___redArg(v_args_2798_, v___x_2805_, v_numParams_2802_);
v___x_2807_ = l_Lean_instInhabitedExpr;
v___x_2808_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_2789_);
v___x_2809_ = lean_array_get(v___x_2807_, v_args_2798_, v___x_2808_);
lean_dec(v___x_2808_);
v___x_2810_ = lean_nat_add(v_numParams_2802_, v___x_2796_);
v___x_2811_ = lean_nat_add(v___x_2810_, v_numDiscrs_2803_);
lean_inc(v___x_2811_);
lean_inc_ref(v_args_2798_);
v___x_2812_ = l_Array_toSubarray___redArg(v_args_2798_, v___x_2810_, v___x_2811_);
v___x_2813_ = l_Subarray_copy___redArg(v___x_2812_);
v___x_2814_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_2789_);
v___x_2815_ = lean_nat_add(v___x_2811_, v___x_2814_);
lean_dec(v___x_2814_);
lean_inc(v___x_2815_);
lean_inc_ref(v_args_2798_);
v___x_2816_ = l_Array_toSubarray___redArg(v_args_2798_, v___x_2811_, v___x_2815_);
v___x_2817_ = l_Subarray_copy___redArg(v___x_2816_);
v___x_2818_ = l_Array_toSubarray___redArg(v_args_2798_, v___x_2815_, v___x_2799_);
v___x_2819_ = l_Subarray_copy___redArg(v___x_2818_);
v___x_2820_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2820_, 0, v_val_2789_);
lean_ctor_set(v___x_2820_, 1, v_declName_2782_);
lean_ctor_set(v___x_2820_, 2, v___x_2804_);
lean_ctor_set(v___x_2820_, 3, v___x_2806_);
lean_ctor_set(v___x_2820_, 4, v___x_2809_);
lean_ctor_set(v___x_2820_, 5, v___x_2813_);
lean_ctor_set(v___x_2820_, 6, v___x_2817_);
lean_ctor_set(v___x_2820_, 7, v___x_2819_);
if (v_isShared_2792_ == 0)
{
lean_ctor_set(v___x_2791_, 0, v___x_2820_);
v___x_2822_ = v___x_2791_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v___x_2820_);
v___x_2822_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
lean_object* v___x_2824_; 
if (v_isShared_2788_ == 0)
{
lean_ctor_set(v___x_2787_, 0, v___x_2822_);
v___x_2824_ = v___x_2787_;
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
else
{
lean_object* v___x_2827_; lean_object* v___x_2829_; 
lean_dec_ref(v_args_2798_);
lean_del_object(v___x_2791_);
lean_dec(v_val_2789_);
lean_dec(v_us_2783_);
lean_dec(v_declName_2782_);
v___x_2827_ = lean_box(0);
if (v_isShared_2788_ == 0)
{
lean_ctor_set(v___x_2787_, 0, v___x_2827_);
v___x_2829_ = v___x_2787_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v___x_2827_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
}
else
{
lean_object* v___x_2832_; 
lean_del_object(v___x_2787_);
lean_dec(v_a_2785_);
v___x_2832_ = lean_st_ref_get(v___y_2773_);
if (v_alsoCasesOn_2768_ == 0)
{
lean_dec(v___x_2832_);
lean_dec(v_us_2783_);
lean_dec(v_declName_2782_);
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
lean_dec_ref(v_e_2767_);
goto v___jp_2775_;
}
else
{
lean_object* v_env_2833_; uint8_t v___x_2834_; 
v_env_2833_ = lean_ctor_get(v___x_2832_, 0);
lean_inc_ref(v_env_2833_);
lean_dec(v___x_2832_);
lean_inc(v_declName_2782_);
v___x_2834_ = l_Lean_isCasesOnRecursor(v_env_2833_, v_declName_2782_);
if (v___x_2834_ == 0)
{
lean_dec(v_us_2783_);
lean_dec(v_declName_2782_);
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
lean_dec_ref(v_e_2767_);
goto v___jp_2775_;
}
else
{
lean_object* v_indName_2835_; lean_object* v___x_2836_; 
v_indName_2835_ = l_Lean_Name_getPrefix(v_declName_2782_);
lean_inc_ref(v___y_2772_);
v___x_2836_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_indName_2835_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v_a_2837_; lean_object* v___x_2839_; uint8_t v_isShared_2840_; uint8_t v_isSharedCheck_2930_; 
v_a_2837_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2930_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2930_ == 0)
{
v___x_2839_ = v___x_2836_;
v_isShared_2840_ = v_isSharedCheck_2930_;
goto v_resetjp_2838_;
}
else
{
lean_inc(v_a_2837_);
lean_dec(v___x_2836_);
v___x_2839_ = lean_box(0);
v_isShared_2840_ = v_isSharedCheck_2930_;
goto v_resetjp_2838_;
}
v_resetjp_2838_:
{
if (lean_obj_tag(v_a_2837_) == 5)
{
lean_object* v_val_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2925_; 
v_val_2841_ = lean_ctor_get(v_a_2837_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v_a_2837_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2843_ = v_a_2837_;
v_isShared_2844_ = v_isSharedCheck_2925_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_val_2841_);
lean_dec(v_a_2837_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2925_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v_toConstantVal_2845_; lean_object* v_numParams_2846_; lean_object* v_numIndices_2847_; lean_object* v_ctors_2848_; lean_object* v_nargs_2849_; lean_object* v_dummy_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v_args_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; uint8_t v___x_2861_; 
v_toConstantVal_2845_ = lean_ctor_get(v_val_2841_, 0);
lean_inc_ref(v_toConstantVal_2845_);
v_numParams_2846_ = lean_ctor_get(v_val_2841_, 1);
lean_inc(v_numParams_2846_);
v_numIndices_2847_ = lean_ctor_get(v_val_2841_, 2);
lean_inc(v_numIndices_2847_);
v_ctors_2848_ = lean_ctor_get(v_val_2841_, 4);
lean_inc(v_ctors_2848_);
v_nargs_2849_ = l_Lean_Expr_getAppNumArgs(v_e_2767_);
v_dummy_2850_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0);
lean_inc(v_nargs_2849_);
v___x_2851_ = lean_mk_array(v_nargs_2849_, v_dummy_2850_);
v___x_2852_ = lean_unsigned_to_nat(1u);
v___x_2853_ = lean_nat_sub(v_nargs_2849_, v___x_2852_);
lean_dec(v_nargs_2849_);
v_args_2854_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2767_, v___x_2851_, v___x_2853_);
v___x_2855_ = lean_nat_add(v_numParams_2846_, v___x_2852_);
v___x_2856_ = lean_nat_add(v___x_2855_, v_numIndices_2847_);
v___x_2857_ = lean_nat_add(v___x_2856_, v___x_2852_);
lean_dec(v___x_2856_);
v___x_2858_ = l_Lean_InductiveVal_numCtors(v_val_2841_);
lean_dec_ref(v_val_2841_);
v___x_2859_ = lean_nat_add(v___x_2857_, v___x_2858_);
lean_dec(v___x_2858_);
v___x_2860_ = lean_array_get_size(v_args_2854_);
v___x_2861_ = lean_nat_dec_le(v___x_2859_, v___x_2860_);
if (v___x_2861_ == 0)
{
lean_object* v___x_2862_; lean_object* v___x_2864_; 
lean_dec(v___x_2859_);
lean_dec(v___x_2857_);
lean_dec(v___x_2855_);
lean_dec_ref(v_args_2854_);
lean_dec(v_ctors_2848_);
lean_dec(v_numIndices_2847_);
lean_dec(v_numParams_2846_);
lean_dec_ref(v_toConstantVal_2845_);
lean_del_object(v___x_2843_);
lean_dec(v_us_2783_);
lean_dec(v_declName_2782_);
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
v___x_2862_ = lean_box(0);
if (v_isShared_2840_ == 0)
{
lean_ctor_set(v___x_2839_, 0, v___x_2862_);
v___x_2864_ = v___x_2839_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v___x_2862_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
else
{
lean_object* v___x_2866_; lean_object* v_params_2867_; lean_object* v___x_2868_; lean_object* v_motive_2869_; lean_object* v_discrs_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v_discrInfos_2873_; lean_object* v_alts_2874_; lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v_lower_2916_; lean_object* v_upper_2917_; uint8_t v___x_2924_; 
lean_del_object(v___x_2839_);
v___x_2866_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2846_);
lean_inc_ref(v_args_2854_);
v_params_2867_ = l_Array_toSubarray___redArg(v_args_2854_, v___x_2866_, v_numParams_2846_);
v___x_2868_ = l_Lean_instInhabitedExpr;
v_motive_2869_ = lean_array_get(v___x_2868_, v_args_2854_, v_numParams_2846_);
lean_dec(v_numParams_2846_);
lean_inc(v___x_2857_);
lean_inc_ref(v_args_2854_);
v_discrs_2870_ = l_Array_toSubarray___redArg(v_args_2854_, v___x_2855_, v___x_2857_);
v___x_2871_ = lean_nat_add(v_numIndices_2847_, v___x_2852_);
lean_dec(v_numIndices_2847_);
v___x_2872_ = lean_box(0);
v_discrInfos_2873_ = lean_mk_array(v___x_2871_, v___x_2872_);
lean_inc(v___x_2859_);
lean_inc_ref(v_args_2854_);
v_alts_2874_ = l_Array_toSubarray___redArg(v_args_2854_, v___x_2857_, v___x_2859_);
v___x_2924_ = lean_nat_dec_le(v___x_2859_, v___x_2866_);
if (v___x_2924_ == 0)
{
v_lower_2916_ = v___x_2859_;
v_upper_2917_ = v___x_2860_;
goto v___jp_2915_;
}
else
{
lean_dec(v___x_2859_);
v_lower_2916_ = v___x_2866_;
v_upper_2917_ = v___x_2860_;
goto v___jp_2915_;
}
v___jp_2875_:
{
lean_object* v___x_2878_; size_t v_sz_2879_; size_t v___x_2880_; lean_object* v___x_2881_; 
v___x_2878_ = lean_array_mk(v_ctors_2848_);
v_sz_2879_ = lean_array_size(v___x_2878_);
v___x_2880_ = ((size_t)0ULL);
v___x_2881_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(v_sz_2879_, v___x_2880_, v___x_2878_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_);
if (lean_obj_tag(v___x_2881_) == 0)
{
lean_object* v_a_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2906_; 
v_a_2882_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2884_ = v___x_2881_;
v_isShared_2885_ = v_isSharedCheck_2906_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_a_2882_);
lean_dec(v___x_2881_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2906_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v_start_2886_; lean_object* v_stop_2887_; lean_object* v_start_2888_; lean_object* v_stop_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2901_; 
v_start_2886_ = lean_ctor_get(v_params_2867_, 1);
lean_inc(v_start_2886_);
v_stop_2887_ = lean_ctor_get(v_params_2867_, 2);
lean_inc(v_stop_2887_);
v_start_2888_ = lean_ctor_get(v_discrs_2870_, 1);
lean_inc(v_start_2888_);
v_stop_2889_ = lean_ctor_get(v_discrs_2870_, 2);
lean_inc(v_stop_2889_);
v___x_2890_ = lean_nat_sub(v_stop_2887_, v_start_2886_);
lean_dec(v_start_2886_);
lean_dec(v_stop_2887_);
v___x_2891_ = lean_nat_sub(v_stop_2889_, v_start_2888_);
lean_dec(v_start_2888_);
lean_dec(v_stop_2889_);
v___x_2892_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1);
v___x_2893_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2890_);
lean_ctor_set(v___x_2893_, 1, v___x_2891_);
lean_ctor_set(v___x_2893_, 2, v_a_2882_);
lean_ctor_set(v___x_2893_, 3, v___y_2877_);
lean_ctor_set(v___x_2893_, 4, v_discrInfos_2873_);
lean_ctor_set(v___x_2893_, 5, v___x_2892_);
v___x_2894_ = lean_array_mk(v_us_2783_);
v___x_2895_ = l_Subarray_copy___redArg(v_params_2867_);
v___x_2896_ = l_Subarray_copy___redArg(v_discrs_2870_);
v___x_2897_ = l_Subarray_copy___redArg(v_alts_2874_);
v___x_2898_ = l_Subarray_copy___redArg(v___y_2876_);
v___x_2899_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2893_);
lean_ctor_set(v___x_2899_, 1, v_declName_2782_);
lean_ctor_set(v___x_2899_, 2, v___x_2894_);
lean_ctor_set(v___x_2899_, 3, v___x_2895_);
lean_ctor_set(v___x_2899_, 4, v_motive_2869_);
lean_ctor_set(v___x_2899_, 5, v___x_2896_);
lean_ctor_set(v___x_2899_, 6, v___x_2897_);
lean_ctor_set(v___x_2899_, 7, v___x_2898_);
if (v_isShared_2844_ == 0)
{
lean_ctor_set_tag(v___x_2843_, 1);
lean_ctor_set(v___x_2843_, 0, v___x_2899_);
v___x_2901_ = v___x_2843_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2905_; 
v_reuseFailAlloc_2905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2905_, 0, v___x_2899_);
v___x_2901_ = v_reuseFailAlloc_2905_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
lean_object* v___x_2903_; 
if (v_isShared_2885_ == 0)
{
lean_ctor_set(v___x_2884_, 0, v___x_2901_);
v___x_2903_ = v___x_2884_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2904_; 
v_reuseFailAlloc_2904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2904_, 0, v___x_2901_);
v___x_2903_ = v_reuseFailAlloc_2904_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
return v___x_2903_;
}
}
}
}
else
{
lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2914_; 
lean_dec(v___y_2877_);
lean_dec_ref(v___y_2876_);
lean_dec_ref(v_alts_2874_);
lean_dec_ref(v_discrInfos_2873_);
lean_dec_ref(v_discrs_2870_);
lean_dec(v_motive_2869_);
lean_dec_ref(v_params_2867_);
lean_del_object(v___x_2843_);
lean_dec(v_us_2783_);
lean_dec(v_declName_2782_);
v_a_2907_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2914_ == 0)
{
v___x_2909_ = v___x_2881_;
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_dec(v___x_2881_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2914_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2912_; 
if (v_isShared_2910_ == 0)
{
v___x_2912_ = v___x_2909_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v_a_2907_);
v___x_2912_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
return v___x_2912_;
}
}
}
}
v___jp_2915_:
{
lean_object* v_levelParams_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; uint8_t v___x_2922_; 
v_levelParams_2918_ = lean_ctor_get(v_toConstantVal_2845_, 1);
lean_inc(v_levelParams_2918_);
lean_dec_ref(v_toConstantVal_2845_);
v___x_2919_ = l_Array_toSubarray___redArg(v_args_2854_, v_lower_2916_, v_upper_2917_);
v___x_2920_ = l_List_lengthTR___redArg(v_levelParams_2918_);
lean_dec(v_levelParams_2918_);
v___x_2921_ = l_List_lengthTR___redArg(v_us_2783_);
v___x_2922_ = lean_nat_dec_eq(v___x_2920_, v___x_2921_);
lean_dec(v___x_2921_);
lean_dec(v___x_2920_);
if (v___x_2922_ == 0)
{
lean_object* v___x_2923_; 
v___x_2923_ = ((lean_object*)(l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2));
v___y_2876_ = v___x_2919_;
v___y_2877_ = v___x_2923_;
goto v___jp_2875_;
}
else
{
v___y_2876_ = v___x_2919_;
v___y_2877_ = v___x_2872_;
goto v___jp_2875_;
}
}
}
}
}
else
{
lean_object* v___x_2926_; lean_object* v___x_2928_; 
lean_dec(v_a_2837_);
lean_dec(v_us_2783_);
lean_dec(v_declName_2782_);
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
lean_dec_ref(v_e_2767_);
v___x_2926_ = lean_box(0);
if (v_isShared_2840_ == 0)
{
lean_ctor_set(v___x_2839_, 0, v___x_2926_);
v___x_2928_ = v___x_2839_;
goto v_reusejp_2927_;
}
else
{
lean_object* v_reuseFailAlloc_2929_; 
v_reuseFailAlloc_2929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2929_, 0, v___x_2926_);
v___x_2928_ = v_reuseFailAlloc_2929_;
goto v_reusejp_2927_;
}
v_reusejp_2927_:
{
return v___x_2928_;
}
}
}
}
else
{
lean_object* v_a_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2938_; 
lean_dec(v_us_2783_);
lean_dec(v_declName_2782_);
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
lean_dec_ref(v_e_2767_);
v_a_2931_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2938_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2933_ = v___x_2836_;
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_a_2931_);
lean_dec(v___x_2836_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2938_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2936_; 
if (v_isShared_2934_ == 0)
{
v___x_2936_ = v___x_2933_;
goto v_reusejp_2935_;
}
else
{
lean_object* v_reuseFailAlloc_2937_; 
v_reuseFailAlloc_2937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2937_, 0, v_a_2931_);
v___x_2936_ = v_reuseFailAlloc_2937_;
goto v_reusejp_2935_;
}
v_reusejp_2935_:
{
return v___x_2936_;
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
lean_dec_ref(v___x_2781_);
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
lean_dec_ref(v_e_2767_);
goto v___jp_2775_;
}
}
v___jp_2775_:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2776_ = lean_box(0);
v___x_2777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
return v___x_2777_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed(lean_object* v_e_2940_, lean_object* v_alsoCasesOn_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_){
_start:
{
uint8_t v_alsoCasesOn_boxed_2948_; lean_object* v_res_2949_; 
v_alsoCasesOn_boxed_2948_ = lean_unbox(v_alsoCasesOn_2941_);
v_res_2949_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(v_e_2940_, v_alsoCasesOn_boxed_2948_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(lean_object* v_a_2950_, lean_object* v_a_2951_){
_start:
{
if (lean_obj_tag(v_a_2950_) == 0)
{
lean_object* v___x_2952_; 
v___x_2952_ = l_List_reverse___redArg(v_a_2951_);
return v___x_2952_;
}
else
{
lean_object* v_head_2953_; lean_object* v_tail_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2963_; 
v_head_2953_ = lean_ctor_get(v_a_2950_, 0);
v_tail_2954_ = lean_ctor_get(v_a_2950_, 1);
v_isSharedCheck_2963_ = !lean_is_exclusive(v_a_2950_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2956_ = v_a_2950_;
v_isShared_2957_ = v_isSharedCheck_2963_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_tail_2954_);
lean_inc(v_head_2953_);
lean_dec(v_a_2950_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2963_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2958_; lean_object* v___x_2960_; 
v___x_2958_ = l_Lean_MessageData_ofExpr(v_head_2953_);
if (v_isShared_2957_ == 0)
{
lean_ctor_set(v___x_2956_, 1, v_a_2951_);
lean_ctor_set(v___x_2956_, 0, v___x_2958_);
v___x_2960_ = v___x_2956_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v___x_2958_);
lean_ctor_set(v_reuseFailAlloc_2962_, 1, v_a_2951_);
v___x_2960_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
v_a_2950_ = v_tail_2954_;
v_a_2951_ = v___x_2960_;
goto _start;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(lean_object* v_x_2964_, lean_object* v_x_2965_){
_start:
{
lean_object* v_fnName_2966_; uint8_t v___x_2967_; 
v_fnName_2966_ = lean_ctor_get(v_x_2965_, 0);
v___x_2967_ = l_Lean_Expr_isConstOf(v_x_2964_, v_fnName_2966_);
return v___x_2967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed(lean_object* v_x_2968_, lean_object* v_x_2969_){
_start:
{
uint8_t v_res_2970_; lean_object* v_r_2971_; 
v_res_2970_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(v_x_2968_, v_x_2969_);
lean_dec_ref(v_x_2969_);
lean_dec_ref(v_x_2968_);
v_r_2971_ = lean_box(v_res_2970_);
return v_r_2971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object* v_name_2972_, lean_object* v_type_2973_, lean_object* v_val_2974_, lean_object* v_k_2975_, uint8_t v_nondep_2976_, uint8_t v_kind_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v___f_2984_; lean_object* v___x_2985_; 
v___f_2984_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2984_, 0, v_k_2975_);
lean_closure_set(v___f_2984_, 1, v___y_2978_);
v___x_2985_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2972_, v_type_2973_, v_val_2974_, v___f_2984_, v_nondep_2976_, v_kind_2977_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_);
if (lean_obj_tag(v___x_2985_) == 0)
{
return v___x_2985_;
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2985_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2985_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object* v_name_2994_, lean_object* v_type_2995_, lean_object* v_val_2996_, lean_object* v_k_2997_, lean_object* v_nondep_2998_, lean_object* v_kind_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_){
_start:
{
uint8_t v_nondep_boxed_3006_; uint8_t v_kind_boxed_3007_; lean_object* v_res_3008_; 
v_nondep_boxed_3006_ = lean_unbox(v_nondep_2998_);
v_kind_boxed_3007_ = lean_unbox(v_kind_2999_);
v_res_3008_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_2994_, v_type_2995_, v_val_2996_, v_k_2997_, v_nondep_boxed_3006_, v_kind_boxed_3007_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(lean_object* v_k_3009_, uint8_t v_usedLetOnly_3010_, lean_object* v_x_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_){
_start:
{
lean_object* v___x_3018_; 
lean_inc(v___y_3016_);
lean_inc_ref(v___y_3015_);
lean_inc(v___y_3014_);
lean_inc_ref(v___y_3013_);
lean_inc_ref(v_x_3011_);
v___x_3018_ = lean_apply_7(v_k_3009_, v_x_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, lean_box(0));
if (lean_obj_tag(v___x_3018_) == 0)
{
lean_object* v_a_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; uint8_t v___x_3023_; uint8_t v___x_3024_; lean_object* v___x_3025_; 
v_a_3019_ = lean_ctor_get(v___x_3018_, 0);
lean_inc(v_a_3019_);
lean_dec_ref(v___x_3018_);
v___x_3020_ = lean_unsigned_to_nat(1u);
v___x_3021_ = lean_mk_empty_array_with_capacity(v___x_3020_);
v___x_3022_ = lean_array_push(v___x_3021_, v_x_3011_);
v___x_3023_ = 0;
v___x_3024_ = 1;
v___x_3025_ = l_Lean_Meta_mkLetFVars(v___x_3022_, v_a_3019_, v_usedLetOnly_3010_, v___x_3023_, v___x_3024_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_);
lean_dec(v___y_3016_);
lean_dec_ref(v___y_3015_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
lean_dec_ref(v___x_3022_);
return v___x_3025_;
}
else
{
lean_dec(v___y_3016_);
lean_dec_ref(v___y_3015_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
lean_dec_ref(v_x_3011_);
return v___x_3018_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed(lean_object* v_k_3026_, lean_object* v_usedLetOnly_3027_, lean_object* v_x_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_){
_start:
{
uint8_t v_usedLetOnly_boxed_3035_; lean_object* v_res_3036_; 
v_usedLetOnly_boxed_3035_ = lean_unbox(v_usedLetOnly_3027_);
v_res_3036_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(v_k_3026_, v_usedLetOnly_boxed_3035_, v_x_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(lean_object* v_name_3037_, lean_object* v_type_3038_, lean_object* v_val_3039_, lean_object* v_k_3040_, uint8_t v_nondep_3041_, uint8_t v_kind_3042_, uint8_t v_usedLetOnly_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_){
_start:
{
lean_object* v___x_3050_; lean_object* v___f_3051_; lean_object* v___x_3052_; 
v___x_3050_ = lean_box(v_usedLetOnly_3043_);
v___f_3051_ = lean_alloc_closure((void*)(l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed), 9, 2);
lean_closure_set(v___f_3051_, 0, v_k_3040_);
lean_closure_set(v___f_3051_, 1, v___x_3050_);
v___x_3052_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_3037_, v_type_3038_, v_val_3039_, v___f_3051_, v_nondep_3041_, v_kind_3042_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___boxed(lean_object* v_name_3053_, lean_object* v_type_3054_, lean_object* v_val_3055_, lean_object* v_k_3056_, lean_object* v_nondep_3057_, lean_object* v_kind_3058_, lean_object* v_usedLetOnly_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_){
_start:
{
uint8_t v_nondep_boxed_3066_; uint8_t v_kind_boxed_3067_; uint8_t v_usedLetOnly_boxed_3068_; lean_object* v_res_3069_; 
v_nondep_boxed_3066_ = lean_unbox(v_nondep_3057_);
v_kind_boxed_3067_ = lean_unbox(v_kind_3058_);
v_usedLetOnly_boxed_3068_ = lean_unbox(v_usedLetOnly_3059_);
v_res_3069_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(v_name_3053_, v_type_3054_, v_val_3055_, v_k_3056_, v_nondep_boxed_3066_, v_kind_boxed_3067_, v_usedLetOnly_boxed_3068_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_, v___y_3064_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(lean_object* v_recArgInfos_3070_, lean_object* v_positions_3071_, lean_object* v_recFnNames_3072_, lean_object* v_containsRecFn_3073_, lean_object* v_below_3074_, size_t v_sz_3075_, size_t v_i_3076_, lean_object* v_bs_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_){
_start:
{
uint8_t v___x_3084_; 
v___x_3084_ = lean_usize_dec_lt(v_i_3076_, v_sz_3075_);
if (v___x_3084_ == 0)
{
lean_object* v___x_3085_; 
lean_dec(v___y_3082_);
lean_dec_ref(v___y_3081_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v_below_3074_);
lean_dec_ref(v_containsRecFn_3073_);
lean_dec_ref(v_recFnNames_3072_);
lean_dec_ref(v_positions_3071_);
lean_dec_ref(v_recArgInfos_3070_);
v___x_3085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3085_, 0, v_bs_3077_);
return v___x_3085_;
}
else
{
lean_object* v_v_3086_; lean_object* v___x_3087_; 
v_v_3086_ = lean_array_uget_borrowed(v_bs_3077_, v_i_3076_);
lean_inc(v___y_3082_);
lean_inc_ref(v___y_3081_);
lean_inc(v___y_3080_);
lean_inc_ref(v___y_3079_);
lean_inc(v___y_3078_);
lean_inc(v_v_3086_);
lean_inc_ref(v_below_3074_);
lean_inc_ref(v_containsRecFn_3073_);
lean_inc_ref(v_recFnNames_3072_);
lean_inc_ref(v_positions_3071_);
lean_inc_ref(v_recArgInfos_3070_);
v___x_3087_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3070_, v_positions_3071_, v_recFnNames_3072_, v_containsRecFn_3073_, v_below_3074_, v_v_3086_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_);
if (lean_obj_tag(v___x_3087_) == 0)
{
lean_object* v_a_3088_; lean_object* v___x_3089_; lean_object* v_bs_x27_3090_; size_t v___x_3091_; size_t v___x_3092_; lean_object* v___x_3093_; 
v_a_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc(v_a_3088_);
lean_dec_ref(v___x_3087_);
v___x_3089_ = lean_unsigned_to_nat(0u);
v_bs_x27_3090_ = lean_array_uset(v_bs_3077_, v_i_3076_, v___x_3089_);
v___x_3091_ = ((size_t)1ULL);
v___x_3092_ = lean_usize_add(v_i_3076_, v___x_3091_);
v___x_3093_ = lean_array_uset(v_bs_x27_3090_, v_i_3076_, v_a_3088_);
v_i_3076_ = v___x_3092_;
v_bs_3077_ = v___x_3093_;
goto _start;
}
else
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3102_; 
lean_dec(v___y_3082_);
lean_dec_ref(v___y_3081_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v_bs_3077_);
lean_dec_ref(v_below_3074_);
lean_dec_ref(v_containsRecFn_3073_);
lean_dec_ref(v_recFnNames_3072_);
lean_dec_ref(v_positions_3071_);
lean_dec_ref(v_recArgInfos_3070_);
v_a_3095_ = lean_ctor_get(v___x_3087_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3097_ = v___x_3087_;
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3087_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3100_; 
if (v_isShared_3098_ == 0)
{
v___x_3100_ = v___x_3097_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3095_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
return v___x_3100_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; 
v___x_3104_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0));
v___x_3105_ = l_Lean_stringToMessageData(v___x_3104_);
return v___x_3105_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3107_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2));
v___x_3108_ = l_Lean_stringToMessageData(v___x_3107_);
return v___x_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(lean_object* v_recArgInfos_3109_, lean_object* v_positions_3110_, lean_object* v_recFnNames_3111_, lean_object* v_containsRecFn_3112_, lean_object* v_below_3113_, lean_object* v_e_3114_, lean_object* v_x_3115_, lean_object* v_x_3116_, lean_object* v_x_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_){
_start:
{
if (lean_obj_tag(v_x_3115_) == 5)
{
lean_object* v_fn_3124_; lean_object* v_arg_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
v_fn_3124_ = lean_ctor_get(v_x_3115_, 0);
lean_inc_ref(v_fn_3124_);
v_arg_3125_ = lean_ctor_get(v_x_3115_, 1);
lean_inc_ref(v_arg_3125_);
lean_dec_ref(v_x_3115_);
v___x_3126_ = lean_array_set(v_x_3116_, v_x_3117_, v_arg_3125_);
v___x_3127_ = lean_unsigned_to_nat(1u);
v___x_3128_ = lean_nat_sub(v_x_3117_, v___x_3127_);
lean_dec(v_x_3117_);
v_x_3115_ = v_fn_3124_;
v_x_3116_ = v___x_3126_;
v_x_3117_ = v___x_3128_;
goto _start;
}
else
{
lean_object* v___f_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
lean_dec(v_x_3117_);
lean_inc_ref(v_x_3115_);
v___f_3130_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3130_, 0, v_x_3115_);
v___x_3131_ = lean_unsigned_to_nat(0u);
v___x_3132_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_3130_, v_recArgInfos_3109_, v___x_3131_);
if (lean_obj_tag(v___x_3132_) == 1)
{
lean_object* v_val_3133_; lean_object* v___x_3134_; lean_object* v___y_3136_; lean_object* v_recArgPos_3162_; lean_object* v_indGroupInst_3163_; lean_object* v___x_3164_; uint8_t v___x_3165_; 
lean_dec_ref(v_x_3115_);
v_val_3133_ = lean_ctor_get(v___x_3132_, 0);
lean_inc(v_val_3133_);
lean_dec_ref(v___x_3132_);
v___x_3134_ = lean_array_fget_borrowed(v_recArgInfos_3109_, v_val_3133_);
v_recArgPos_3162_ = lean_ctor_get(v___x_3134_, 2);
v_indGroupInst_3163_ = lean_ctor_get(v___x_3134_, 4);
v___x_3164_ = lean_array_get_size(v_x_3116_);
v___x_3165_ = lean_nat_dec_lt(v_recArgPos_3162_, v___x_3164_);
if (v___x_3165_ == 0)
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
lean_dec(v_val_3133_);
lean_dec(v___y_3118_);
lean_dec_ref(v_x_3116_);
lean_dec_ref(v_below_3113_);
lean_dec_ref(v_containsRecFn_3112_);
lean_dec_ref(v_recFnNames_3111_);
lean_dec_ref(v_positions_3110_);
lean_dec_ref(v_recArgInfos_3109_);
v___x_3166_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1);
v___x_3167_ = l_Lean_indentExpr(v_e_3114_);
v___x_3168_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3168_, 0, v___x_3166_);
lean_ctor_set(v___x_3168_, 1, v___x_3167_);
v___x_3169_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3168_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
return v___x_3169_;
}
else
{
lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3170_ = lean_array_fget_borrowed(v_x_3116_, v_recArgPos_3162_);
lean_inc(v___y_3122_);
lean_inc_ref(v___y_3121_);
lean_inc(v___y_3120_);
lean_inc_ref(v___y_3119_);
lean_inc(v___y_3118_);
lean_inc(v___x_3170_);
lean_inc_ref(v_below_3113_);
lean_inc_ref(v_containsRecFn_3112_);
lean_inc_ref(v_recFnNames_3111_);
lean_inc_ref(v_positions_3110_);
lean_inc_ref(v_recArgInfos_3109_);
v___x_3171_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3109_, v_positions_3110_, v_recFnNames_3111_, v_containsRecFn_3112_, v_below_3113_, v___x_3170_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
if (lean_obj_tag(v___x_3171_) == 0)
{
lean_object* v_a_3172_; lean_object* v_params_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v_a_3172_ = lean_ctor_get(v___x_3171_, 0);
lean_inc(v_a_3172_);
lean_dec_ref(v___x_3171_);
v_params_3173_ = lean_ctor_get(v_indGroupInst_3163_, 2);
v___x_3174_ = lean_array_get_size(v_params_3173_);
lean_inc(v___y_3122_);
lean_inc_ref(v___y_3121_);
lean_inc(v___y_3120_);
lean_inc_ref(v___y_3119_);
lean_inc_ref(v_positions_3110_);
lean_inc_ref(v_below_3113_);
v___x_3175_ = l_Lean_Elab_Structural_toBelow(v_below_3113_, v___x_3174_, v_positions_3110_, v_val_3133_, v_a_3172_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
if (lean_obj_tag(v___x_3175_) == 0)
{
lean_dec_ref(v_e_3114_);
v___y_3136_ = v___x_3175_;
goto v___jp_3135_;
}
else
{
lean_object* v_a_3176_; uint8_t v___y_3178_; uint8_t v___x_3183_; 
v_a_3176_ = lean_ctor_get(v___x_3175_, 0);
lean_inc(v_a_3176_);
v___x_3183_ = l_Lean_Exception_isInterrupt(v_a_3176_);
if (v___x_3183_ == 0)
{
uint8_t v___x_3184_; 
v___x_3184_ = l_Lean_Exception_isRuntime(v_a_3176_);
v___y_3178_ = v___x_3184_;
goto v___jp_3177_;
}
else
{
lean_dec(v_a_3176_);
v___y_3178_ = v___x_3183_;
goto v___jp_3177_;
}
v___jp_3177_:
{
if (v___y_3178_ == 0)
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
lean_dec_ref(v___x_3175_);
v___x_3179_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3);
v___x_3180_ = l_Lean_indentExpr(v_e_3114_);
v___x_3181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3179_);
lean_ctor_set(v___x_3181_, 1, v___x_3180_);
v___x_3182_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3181_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
v___y_3136_ = v___x_3182_;
goto v___jp_3135_;
}
else
{
lean_dec_ref(v_e_3114_);
v___y_3136_ = v___x_3175_;
goto v___jp_3135_;
}
}
}
}
else
{
lean_dec(v_val_3133_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
lean_dec(v___y_3118_);
lean_dec_ref(v_x_3116_);
lean_dec_ref(v_e_3114_);
lean_dec_ref(v_below_3113_);
lean_dec_ref(v_containsRecFn_3112_);
lean_dec_ref(v_recFnNames_3111_);
lean_dec_ref(v_positions_3110_);
lean_dec_ref(v_recArgInfos_3109_);
return v___x_3171_;
}
}
v___jp_3135_:
{
if (lean_obj_tag(v___y_3136_) == 0)
{
lean_object* v_a_3137_; lean_object* v_fixedParamPerm_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v_snd_3141_; size_t v_sz_3142_; size_t v___x_3143_; lean_object* v___x_3144_; 
v_a_3137_ = lean_ctor_get(v___y_3136_, 0);
lean_inc(v_a_3137_);
lean_dec_ref(v___y_3136_);
v_fixedParamPerm_3138_ = lean_ctor_get(v___x_3134_, 1);
v___x_3139_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_fixedParamPerm_3138_, v_x_3116_);
lean_dec_ref(v_x_3116_);
lean_inc(v___x_3134_);
v___x_3140_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v___x_3134_, v___x_3139_);
v_snd_3141_ = lean_ctor_get(v___x_3140_, 1);
lean_inc(v_snd_3141_);
lean_dec_ref(v___x_3140_);
v_sz_3142_ = lean_array_size(v_snd_3141_);
v___x_3143_ = ((size_t)0ULL);
v___x_3144_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(v_recArgInfos_3109_, v_positions_3110_, v_recFnNames_3111_, v_containsRecFn_3112_, v_below_3113_, v_sz_3142_, v___x_3143_, v_snd_3141_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
if (lean_obj_tag(v___x_3144_) == 0)
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3153_; 
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3147_ = v___x_3144_;
v_isShared_3148_ = v_isSharedCheck_3153_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3144_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3153_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3149_; lean_object* v___x_3151_; 
v___x_3149_ = l_Lean_mkAppN(v_a_3137_, v_a_3145_);
lean_dec(v_a_3145_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set(v___x_3147_, 0, v___x_3149_);
v___x_3151_ = v___x_3147_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v___x_3149_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
else
{
lean_object* v_a_3154_; lean_object* v___x_3156_; uint8_t v_isShared_3157_; uint8_t v_isSharedCheck_3161_; 
lean_dec(v_a_3137_);
v_a_3154_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3156_ = v___x_3144_;
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
else
{
lean_inc(v_a_3154_);
lean_dec(v___x_3144_);
v___x_3156_ = lean_box(0);
v_isShared_3157_ = v_isSharedCheck_3161_;
goto v_resetjp_3155_;
}
v_resetjp_3155_:
{
lean_object* v___x_3159_; 
if (v_isShared_3157_ == 0)
{
v___x_3159_ = v___x_3156_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v_a_3154_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
}
else
{
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
lean_dec(v___y_3118_);
lean_dec_ref(v_x_3116_);
lean_dec_ref(v_below_3113_);
lean_dec_ref(v_containsRecFn_3112_);
lean_dec_ref(v_recFnNames_3111_);
lean_dec_ref(v_positions_3110_);
lean_dec_ref(v_recArgInfos_3109_);
return v___y_3136_;
}
}
}
else
{
lean_object* v___x_3185_; 
lean_dec(v___x_3132_);
lean_dec_ref(v_e_3114_);
lean_inc(v___y_3122_);
lean_inc_ref(v___y_3121_);
lean_inc(v___y_3120_);
lean_inc_ref(v___y_3119_);
lean_inc(v___y_3118_);
lean_inc_ref(v_below_3113_);
lean_inc_ref(v_containsRecFn_3112_);
lean_inc_ref(v_recFnNames_3111_);
lean_inc_ref(v_positions_3110_);
lean_inc_ref(v_recArgInfos_3109_);
v___x_3185_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3109_, v_positions_3110_, v_recFnNames_3111_, v_containsRecFn_3112_, v_below_3113_, v_x_3115_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
if (lean_obj_tag(v___x_3185_) == 0)
{
lean_object* v_a_3186_; size_t v_sz_3187_; size_t v___x_3188_; lean_object* v___x_3189_; 
v_a_3186_ = lean_ctor_get(v___x_3185_, 0);
lean_inc(v_a_3186_);
lean_dec_ref(v___x_3185_);
v_sz_3187_ = lean_array_size(v_x_3116_);
v___x_3188_ = ((size_t)0ULL);
v___x_3189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(v_recArgInfos_3109_, v_positions_3110_, v_recFnNames_3111_, v_containsRecFn_3112_, v_below_3113_, v_sz_3187_, v___x_3188_, v_x_3116_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_object* v_a_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3198_; 
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3192_ = v___x_3189_;
v_isShared_3193_ = v_isSharedCheck_3198_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_a_3190_);
lean_dec(v___x_3189_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3198_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v___x_3194_; lean_object* v___x_3196_; 
v___x_3194_ = l_Lean_mkAppN(v_a_3186_, v_a_3190_);
lean_dec(v_a_3190_);
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 0, v___x_3194_);
v___x_3196_ = v___x_3192_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v___x_3194_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
}
else
{
lean_object* v_a_3199_; lean_object* v___x_3201_; uint8_t v_isShared_3202_; uint8_t v_isSharedCheck_3206_; 
lean_dec(v_a_3186_);
v_a_3199_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3201_ = v___x_3189_;
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
else
{
lean_inc(v_a_3199_);
lean_dec(v___x_3189_);
v___x_3201_ = lean_box(0);
v_isShared_3202_ = v_isSharedCheck_3206_;
goto v_resetjp_3200_;
}
v_resetjp_3200_:
{
lean_object* v___x_3204_; 
if (v_isShared_3202_ == 0)
{
v___x_3204_ = v___x_3201_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3205_; 
v_reuseFailAlloc_3205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3205_, 0, v_a_3199_);
v___x_3204_ = v_reuseFailAlloc_3205_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
return v___x_3204_;
}
}
}
}
else
{
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
lean_dec(v___y_3118_);
lean_dec_ref(v_x_3116_);
lean_dec_ref(v_below_3113_);
lean_dec_ref(v_containsRecFn_3112_);
lean_dec_ref(v_recFnNames_3111_);
lean_dec_ref(v_positions_3110_);
lean_dec_ref(v_recArgInfos_3109_);
return v___x_3185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(lean_object* v_body_3207_, lean_object* v_recArgInfos_3208_, lean_object* v_positions_3209_, lean_object* v_recFnNames_3210_, lean_object* v_containsRecFn_3211_, lean_object* v_below_3212_, uint8_t v___x_3213_, uint8_t v_a_3214_, lean_object* v_x_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_){
_start:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
v___x_3222_ = lean_expr_instantiate1(v_body_3207_, v_x_3215_);
lean_inc(v___y_3220_);
lean_inc_ref(v___y_3219_);
lean_inc(v___y_3218_);
lean_inc_ref(v___y_3217_);
v___x_3223_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3208_, v_positions_3209_, v_recFnNames_3210_, v_containsRecFn_3211_, v_below_3212_, v___x_3222_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_);
if (lean_obj_tag(v___x_3223_) == 0)
{
lean_object* v_a_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; uint8_t v___x_3228_; lean_object* v___x_3229_; 
v_a_3224_ = lean_ctor_get(v___x_3223_, 0);
lean_inc(v_a_3224_);
lean_dec_ref(v___x_3223_);
v___x_3225_ = lean_unsigned_to_nat(1u);
v___x_3226_ = lean_mk_empty_array_with_capacity(v___x_3225_);
v___x_3227_ = lean_array_push(v___x_3226_, v_x_3215_);
v___x_3228_ = 1;
v___x_3229_ = l_Lean_Meta_mkLambdaFVars(v___x_3227_, v_a_3224_, v___x_3213_, v_a_3214_, v___x_3213_, v_a_3214_, v___x_3228_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3217_);
lean_dec_ref(v___x_3227_);
return v___x_3229_;
}
else
{
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec(v___y_3218_);
lean_dec_ref(v___y_3217_);
lean_dec_ref(v_x_3215_);
return v___x_3223_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed(lean_object* v_body_3230_, lean_object* v_recArgInfos_3231_, lean_object* v_positions_3232_, lean_object* v_recFnNames_3233_, lean_object* v_containsRecFn_3234_, lean_object* v_below_3235_, lean_object* v___x_3236_, lean_object* v_a_3237_, lean_object* v_x_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_){
_start:
{
uint8_t v___x_31274__boxed_3245_; uint8_t v_a_31275__boxed_3246_; lean_object* v_res_3247_; 
v___x_31274__boxed_3245_ = lean_unbox(v___x_3236_);
v_a_31275__boxed_3246_ = lean_unbox(v_a_3237_);
v_res_3247_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(v_body_3230_, v_recArgInfos_3231_, v_positions_3232_, v_recFnNames_3233_, v_containsRecFn_3234_, v_below_3235_, v___x_31274__boxed_3245_, v_a_31275__boxed_3246_, v_x_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
lean_dec_ref(v_body_3230_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(lean_object* v_body_3248_, lean_object* v_recArgInfos_3249_, lean_object* v_positions_3250_, lean_object* v_recFnNames_3251_, lean_object* v_containsRecFn_3252_, lean_object* v_below_3253_, uint8_t v___x_3254_, uint8_t v_a_3255_, lean_object* v_x_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_){
_start:
{
lean_object* v___x_3263_; lean_object* v___x_3264_; 
v___x_3263_ = lean_expr_instantiate1(v_body_3248_, v_x_3256_);
lean_inc(v___y_3261_);
lean_inc_ref(v___y_3260_);
lean_inc(v___y_3259_);
lean_inc_ref(v___y_3258_);
v___x_3264_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3249_, v_positions_3250_, v_recFnNames_3251_, v_containsRecFn_3252_, v_below_3253_, v___x_3263_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
if (lean_obj_tag(v___x_3264_) == 0)
{
lean_object* v_a_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; uint8_t v___x_3269_; lean_object* v___x_3270_; 
v_a_3265_ = lean_ctor_get(v___x_3264_, 0);
lean_inc(v_a_3265_);
lean_dec_ref(v___x_3264_);
v___x_3266_ = lean_unsigned_to_nat(1u);
v___x_3267_ = lean_mk_empty_array_with_capacity(v___x_3266_);
v___x_3268_ = lean_array_push(v___x_3267_, v_x_3256_);
v___x_3269_ = 1;
v___x_3270_ = l_Lean_Meta_mkForallFVars(v___x_3268_, v_a_3265_, v___x_3254_, v_a_3255_, v_a_3255_, v___x_3269_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
lean_dec(v___y_3261_);
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3259_);
lean_dec_ref(v___y_3258_);
lean_dec_ref(v___x_3268_);
return v___x_3270_;
}
else
{
lean_dec(v___y_3261_);
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3259_);
lean_dec_ref(v___y_3258_);
lean_dec_ref(v_x_3256_);
return v___x_3264_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed(lean_object* v_body_3271_, lean_object* v_recArgInfos_3272_, lean_object* v_positions_3273_, lean_object* v_recFnNames_3274_, lean_object* v_containsRecFn_3275_, lean_object* v_below_3276_, lean_object* v___x_3277_, lean_object* v_a_3278_, lean_object* v_x_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_){
_start:
{
uint8_t v___x_31292__boxed_3286_; uint8_t v_a_31293__boxed_3287_; lean_object* v_res_3288_; 
v___x_31292__boxed_3286_ = lean_unbox(v___x_3277_);
v_a_31293__boxed_3287_ = lean_unbox(v_a_3278_);
v_res_3288_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(v_body_3271_, v_recArgInfos_3272_, v_positions_3273_, v_recFnNames_3274_, v_containsRecFn_3275_, v_below_3276_, v___x_31292__boxed_3286_, v_a_31293__boxed_3287_, v_x_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_);
lean_dec_ref(v_body_3271_);
return v_res_3288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed(lean_object* v_body_3289_, lean_object* v_recArgInfos_3290_, lean_object* v_positions_3291_, lean_object* v_recFnNames_3292_, lean_object* v_containsRecFn_3293_, lean_object* v_below_3294_, lean_object* v_x_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_){
_start:
{
lean_object* v_res_3302_; 
v_res_3302_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(v_body_3289_, v_recArgInfos_3290_, v_positions_3291_, v_recFnNames_3292_, v_containsRecFn_3293_, v_below_3294_, v_x_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_);
lean_dec_ref(v_x_3295_);
lean_dec_ref(v_body_3289_);
return v_res_3302_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; 
v___x_3306_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__0));
v___x_3307_ = l_Lean_stringToMessageData(v___x_3306_);
return v___x_3307_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3309_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__2));
v___x_3310_ = l_Lean_stringToMessageData(v___x_3309_);
return v___x_3310_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3312_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__4));
v___x_3313_ = l_Lean_stringToMessageData(v___x_3312_);
return v___x_3313_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3315_ = ((lean_object*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__6));
v___x_3316_ = l_Lean_stringToMessageData(v___x_3315_);
return v___x_3316_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0(lean_object* v___x_3317_, lean_object* v_b_3318_, lean_object* v_recArgInfos_3319_, lean_object* v_positions_3320_, lean_object* v_recFnNames_3321_, lean_object* v_containsRecFn_3322_, uint8_t v___x_3323_, uint8_t v_a_3324_, lean_object* v___x_3325_, lean_object* v_a_3326_, lean_object* v_e_3327_, lean_object* v_xs_3328_, lean_object* v_altBody_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_){
_start:
{
lean_object* v___y_3337_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3349_; lean_object* v___y_3350_; lean_object* v___y_3351_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___x_3372_; lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3401_; 
lean_inc(v___x_3317_);
v___x_3372_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(v___x_3317_, v___y_3333_);
v_a_3373_ = lean_ctor_get(v___x_3372_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3372_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3375_ = v___x_3372_;
v_isShared_3376_ = v_isSharedCheck_3401_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v___x_3372_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3401_;
goto v_resetjp_3374_;
}
v___jp_3336_:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3342_ = l_Lean_instInhabitedExpr;
v___x_3343_ = lean_array_get_borrowed(v___x_3342_, v_xs_3328_, v_b_3318_);
lean_dec(v_b_3318_);
lean_inc(v___y_3341_);
lean_inc_ref(v___y_3340_);
lean_inc(v___y_3339_);
lean_inc_ref(v___y_3338_);
lean_inc(v___x_3343_);
v___x_3344_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3319_, v_positions_3320_, v_recFnNames_3321_, v_containsRecFn_3322_, v___x_3343_, v_altBody_3329_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v_a_3345_; uint8_t v___x_3346_; lean_object* v___x_3347_; 
v_a_3345_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_a_3345_);
lean_dec_ref(v___x_3344_);
v___x_3346_ = 1;
v___x_3347_ = l_Lean_Meta_mkLambdaFVars(v_xs_3328_, v_a_3345_, v___x_3323_, v_a_3324_, v___x_3323_, v_a_3324_, v___x_3346_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v___y_3339_);
lean_dec_ref(v___y_3338_);
lean_dec_ref(v_xs_3328_);
return v___x_3347_;
}
else
{
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v___y_3339_);
lean_dec_ref(v___y_3338_);
lean_dec_ref(v_xs_3328_);
return v___x_3344_;
}
}
v___jp_3348_:
{
lean_object* v___x_3354_; uint8_t v___x_3355_; 
v___x_3354_ = lean_array_get_size(v_xs_3328_);
v___x_3355_ = lean_nat_dec_eq(v___x_3354_, v___x_3325_);
if (v___x_3355_ == 0)
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v_a_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3371_; 
lean_dec(v___y_3349_);
lean_dec_ref(v_altBody_3329_);
lean_dec_ref(v_xs_3328_);
lean_dec_ref(v_containsRecFn_3322_);
lean_dec_ref(v_recFnNames_3321_);
lean_dec_ref(v_positions_3320_);
lean_dec_ref(v_recArgInfos_3319_);
lean_dec(v_b_3318_);
v___x_3356_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__1, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__1);
v___x_3357_ = l_Lean_indentExpr(v_a_3326_);
v___x_3358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3356_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__3, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__3_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__3);
v___x_3360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3358_);
lean_ctor_set(v___x_3360_, 1, v___x_3359_);
v___x_3361_ = l_Lean_indentExpr(v_e_3327_);
v___x_3362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3360_);
lean_ctor_set(v___x_3362_, 1, v___x_3361_);
v___x_3363_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3362_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
lean_dec(v___y_3353_);
lean_dec_ref(v___y_3352_);
lean_dec(v___y_3351_);
lean_dec_ref(v___y_3350_);
v_a_3364_ = lean_ctor_get(v___x_3363_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v___x_3363_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3366_ = v___x_3363_;
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
else
{
lean_inc(v_a_3364_);
lean_dec(v___x_3363_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3369_; 
if (v_isShared_3367_ == 0)
{
v___x_3369_ = v___x_3366_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3364_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
return v___x_3369_;
}
}
}
else
{
lean_dec_ref(v_e_3327_);
lean_dec_ref(v_a_3326_);
v___y_3337_ = v___y_3349_;
v___y_3338_ = v___y_3350_;
v___y_3339_ = v___y_3351_;
v___y_3340_ = v___y_3352_;
v___y_3341_ = v___y_3353_;
goto v___jp_3336_;
}
}
v_resetjp_3374_:
{
uint8_t v___x_3377_; 
v___x_3377_ = lean_unbox(v_a_3373_);
lean_dec(v_a_3373_);
if (v___x_3377_ == 0)
{
lean_del_object(v___x_3375_);
lean_dec(v___x_3317_);
v___y_3349_ = v___y_3330_;
v___y_3350_ = v___y_3331_;
v___y_3351_ = v___y_3332_;
v___y_3352_ = v___y_3333_;
v___y_3353_ = v___y_3334_;
goto v___jp_3348_;
}
else
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3381_; 
v___x_3378_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__5, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__5_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__5);
lean_inc(v_b_3318_);
v___x_3379_ = l_Nat_reprFast(v_b_3318_);
if (v_isShared_3376_ == 0)
{
lean_ctor_set_tag(v___x_3375_, 3);
lean_ctor_set(v___x_3375_, 0, v___x_3379_);
v___x_3381_ = v___x_3375_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v___x_3379_);
v___x_3381_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3382_ = l_Lean_MessageData_ofFormat(v___x_3381_);
v___x_3383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3378_);
lean_ctor_set(v___x_3383_, 1, v___x_3382_);
v___x_3384_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__7, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__7_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___closed__7);
v___x_3385_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3385_, 0, v___x_3383_);
lean_ctor_set(v___x_3385_, 1, v___x_3384_);
lean_inc_ref(v_xs_3328_);
v___x_3386_ = lean_array_to_list(v_xs_3328_);
v___x_3387_ = lean_box(0);
v___x_3388_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(v___x_3386_, v___x_3387_);
v___x_3389_ = l_Lean_MessageData_ofList(v___x_3388_);
v___x_3390_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3385_);
lean_ctor_set(v___x_3390_, 1, v___x_3389_);
v___x_3391_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v___x_3317_, v___x_3390_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_);
if (lean_obj_tag(v___x_3391_) == 0)
{
lean_dec_ref(v___x_3391_);
v___y_3349_ = v___y_3330_;
v___y_3350_ = v___y_3331_;
v___y_3351_ = v___y_3332_;
v___y_3352_ = v___y_3333_;
v___y_3353_ = v___y_3334_;
goto v___jp_3348_;
}
else
{
lean_object* v_a_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3399_; 
lean_dec(v___y_3334_);
lean_dec_ref(v___y_3333_);
lean_dec(v___y_3332_);
lean_dec_ref(v___y_3331_);
lean_dec(v___y_3330_);
lean_dec_ref(v_altBody_3329_);
lean_dec_ref(v_xs_3328_);
lean_dec_ref(v_e_3327_);
lean_dec_ref(v_a_3326_);
lean_dec_ref(v_containsRecFn_3322_);
lean_dec_ref(v_recFnNames_3321_);
lean_dec_ref(v_positions_3320_);
lean_dec_ref(v_recArgInfos_3319_);
lean_dec(v_b_3318_);
v_a_3392_ = lean_ctor_get(v___x_3391_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v___x_3391_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3394_ = v___x_3391_;
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_a_3392_);
lean_dec(v___x_3391_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3399_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___x_3397_; 
if (v_isShared_3395_ == 0)
{
v___x_3397_ = v___x_3394_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v_a_3392_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___boxed(lean_object** _args){
lean_object* v___x_3402_ = _args[0];
lean_object* v_b_3403_ = _args[1];
lean_object* v_recArgInfos_3404_ = _args[2];
lean_object* v_positions_3405_ = _args[3];
lean_object* v_recFnNames_3406_ = _args[4];
lean_object* v_containsRecFn_3407_ = _args[5];
lean_object* v___x_3408_ = _args[6];
lean_object* v_a_3409_ = _args[7];
lean_object* v___x_3410_ = _args[8];
lean_object* v_a_3411_ = _args[9];
lean_object* v_e_3412_ = _args[10];
lean_object* v_xs_3413_ = _args[11];
lean_object* v_altBody_3414_ = _args[12];
lean_object* v___y_3415_ = _args[13];
lean_object* v___y_3416_ = _args[14];
lean_object* v___y_3417_ = _args[15];
lean_object* v___y_3418_ = _args[16];
lean_object* v___y_3419_ = _args[17];
lean_object* v___y_3420_ = _args[18];
_start:
{
uint8_t v___x_31367__boxed_3421_; uint8_t v_a_31368__boxed_3422_; lean_object* v_res_3423_; 
v___x_31367__boxed_3421_ = lean_unbox(v___x_3408_);
v_a_31368__boxed_3422_ = lean_unbox(v_a_3409_);
v_res_3423_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0(v___x_3402_, v_b_3403_, v_recArgInfos_3404_, v_positions_3405_, v_recFnNames_3406_, v_containsRecFn_3407_, v___x_31367__boxed_3421_, v_a_31368__boxed_3422_, v___x_3410_, v_a_3411_, v_e_3412_, v_xs_3413_, v_altBody_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_);
lean_dec(v___x_3410_);
return v_res_3423_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11(lean_object* v_recArgInfos_3424_, lean_object* v_positions_3425_, lean_object* v_recFnNames_3426_, lean_object* v_containsRecFn_3427_, uint8_t v_a_3428_, lean_object* v_e_3429_, lean_object* v_as_3430_, lean_object* v_bs_3431_, lean_object* v_i_3432_, lean_object* v_cs_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_){
_start:
{
lean_object* v___x_3440_; uint8_t v___x_3441_; 
v___x_3440_ = lean_array_get_size(v_as_3430_);
v___x_3441_ = lean_nat_dec_lt(v_i_3432_, v___x_3440_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; 
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec(v_i_3432_);
lean_dec_ref(v_e_3429_);
lean_dec_ref(v_containsRecFn_3427_);
lean_dec_ref(v_recFnNames_3426_);
lean_dec_ref(v_positions_3425_);
lean_dec_ref(v_recArgInfos_3424_);
v___x_3442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3442_, 0, v_cs_3433_);
return v___x_3442_;
}
else
{
lean_object* v___x_3443_; uint8_t v___x_3444_; 
v___x_3443_ = lean_array_get_size(v_bs_3431_);
v___x_3444_ = lean_nat_dec_lt(v_i_3432_, v___x_3443_);
if (v___x_3444_ == 0)
{
lean_object* v___x_3445_; 
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec(v_i_3432_);
lean_dec_ref(v_e_3429_);
lean_dec_ref(v_containsRecFn_3427_);
lean_dec_ref(v_recFnNames_3426_);
lean_dec_ref(v_positions_3425_);
lean_dec_ref(v_recArgInfos_3424_);
v___x_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3445_, 0, v_cs_3433_);
return v___x_3445_;
}
else
{
uint8_t v___x_3446_; lean_object* v___x_3447_; lean_object* v_a_3448_; lean_object* v_b_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___f_3454_; lean_object* v___x_3455_; 
v___x_3446_ = 0;
v___x_3447_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v_a_3448_ = lean_array_fget_borrowed(v_as_3430_, v_i_3432_);
v_b_3449_ = lean_array_fget_borrowed(v_bs_3431_, v_i_3432_);
v___x_3450_ = lean_unsigned_to_nat(1u);
v___x_3451_ = lean_nat_add(v_b_3449_, v___x_3450_);
v___x_3452_ = lean_box(v___x_3446_);
v___x_3453_ = lean_box(v_a_3428_);
lean_inc_ref(v_e_3429_);
lean_inc(v_a_3448_);
lean_inc(v___x_3451_);
lean_inc_ref(v_containsRecFn_3427_);
lean_inc_ref(v_recFnNames_3426_);
lean_inc_ref(v_positions_3425_);
lean_inc_ref(v_recArgInfos_3424_);
lean_inc(v_b_3449_);
v___f_3454_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___lam__0___boxed), 19, 11);
lean_closure_set(v___f_3454_, 0, v___x_3447_);
lean_closure_set(v___f_3454_, 1, v_b_3449_);
lean_closure_set(v___f_3454_, 2, v_recArgInfos_3424_);
lean_closure_set(v___f_3454_, 3, v_positions_3425_);
lean_closure_set(v___f_3454_, 4, v_recFnNames_3426_);
lean_closure_set(v___f_3454_, 5, v_containsRecFn_3427_);
lean_closure_set(v___f_3454_, 6, v___x_3452_);
lean_closure_set(v___f_3454_, 7, v___x_3453_);
lean_closure_set(v___f_3454_, 8, v___x_3451_);
lean_closure_set(v___f_3454_, 9, v_a_3448_);
lean_closure_set(v___f_3454_, 10, v_e_3429_);
lean_inc(v___y_3438_);
lean_inc_ref(v___y_3437_);
lean_inc(v___y_3436_);
lean_inc_ref(v___y_3435_);
lean_inc(v___y_3434_);
lean_inc(v_a_3448_);
v___x_3455_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___redArg(v_a_3448_, v___x_3451_, v___f_3454_, v___x_3446_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_);
if (lean_obj_tag(v___x_3455_) == 0)
{
lean_object* v_a_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
v_a_3456_ = lean_ctor_get(v___x_3455_, 0);
lean_inc(v_a_3456_);
lean_dec_ref(v___x_3455_);
v___x_3457_ = lean_nat_add(v_i_3432_, v___x_3450_);
lean_dec(v_i_3432_);
v___x_3458_ = lean_array_push(v_cs_3433_, v_a_3456_);
v_i_3432_ = v___x_3457_;
v_cs_3433_ = v___x_3458_;
goto _start;
}
else
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3467_; 
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec_ref(v_cs_3433_);
lean_dec(v_i_3432_);
lean_dec_ref(v_e_3429_);
lean_dec_ref(v_containsRecFn_3427_);
lean_dec_ref(v_recFnNames_3426_);
lean_dec_ref(v_positions_3425_);
lean_dec_ref(v_recArgInfos_3424_);
v_a_3460_ = lean_ctor_get(v___x_3455_, 0);
v_isSharedCheck_3467_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3467_ == 0)
{
v___x_3462_ = v___x_3455_;
v_isShared_3463_ = v_isSharedCheck_3467_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3455_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3467_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3465_; 
if (v_isShared_3463_ == 0)
{
v___x_3465_ = v___x_3462_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v_a_3460_);
v___x_3465_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
return v___x_3465_;
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
lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3469_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1));
v___x_3470_ = l_Lean_stringToMessageData(v___x_3469_);
return v___x_3470_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4(void){
_start:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; 
v___x_3472_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3));
v___x_3473_ = l_Lean_stringToMessageData(v___x_3472_);
return v___x_3473_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6(void){
_start:
{
lean_object* v___x_3475_; lean_object* v___x_3476_; 
v___x_3475_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5));
v___x_3476_ = l_Lean_stringToMessageData(v___x_3475_);
return v___x_3476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(lean_object* v_recArgInfos_3477_, lean_object* v_positions_3478_, lean_object* v_recFnNames_3479_, lean_object* v_containsRecFn_3480_, lean_object* v_below_3481_, lean_object* v_e_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_){
_start:
{
lean_object* v_e_3490_; lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___x_3502_; 
lean_inc_ref(v_containsRecFn_3480_);
lean_inc(v_a_3487_);
lean_inc_ref(v_a_3486_);
lean_inc(v_a_3485_);
lean_inc_ref(v_a_3484_);
lean_inc(v_a_3483_);
lean_inc_ref(v_e_3482_);
v___x_3502_ = lean_apply_7(v_containsRecFn_3480_, v_e_3482_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_, lean_box(0));
if (lean_obj_tag(v___x_3502_) == 0)
{
lean_object* v_a_3503_; lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3729_; 
v_a_3503_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3505_ = v___x_3502_;
v_isShared_3506_ = v_isSharedCheck_3729_;
goto v_resetjp_3504_;
}
else
{
lean_inc(v_a_3503_);
lean_dec(v___x_3502_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3729_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
uint8_t v___x_3507_; 
v___x_3507_ = lean_unbox(v_a_3503_);
if (v___x_3507_ == 0)
{
lean_object* v___x_3509_; 
lean_dec(v_a_3503_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 0, v_e_3482_);
v___x_3509_ = v___x_3505_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v_e_3482_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
else
{
uint8_t v___x_3511_; 
lean_del_object(v___x_3505_);
v___x_3511_ = 0;
switch(lean_obj_tag(v_e_3482_))
{
case 6:
{
lean_object* v_binderName_3512_; lean_object* v_binderType_3513_; lean_object* v_body_3514_; uint8_t v_binderInfo_3515_; lean_object* v___x_3516_; 
v_binderName_3512_ = lean_ctor_get(v_e_3482_, 0);
lean_inc(v_binderName_3512_);
v_binderType_3513_ = lean_ctor_get(v_e_3482_, 1);
lean_inc_ref(v_binderType_3513_);
v_body_3514_ = lean_ctor_get(v_e_3482_, 2);
lean_inc_ref(v_body_3514_);
v_binderInfo_3515_ = lean_ctor_get_uint8(v_e_3482_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3482_);
lean_inc(v_a_3487_);
lean_inc_ref(v_a_3486_);
lean_inc(v_a_3485_);
lean_inc_ref(v_a_3484_);
lean_inc(v_a_3483_);
lean_inc_ref(v_below_3481_);
lean_inc_ref(v_containsRecFn_3480_);
lean_inc_ref(v_recFnNames_3479_);
lean_inc_ref(v_positions_3478_);
lean_inc_ref(v_recArgInfos_3477_);
v___x_3516_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3477_, v_positions_3478_, v_recFnNames_3479_, v_containsRecFn_3480_, v_below_3481_, v_binderType_3513_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v___x_3518_; lean_object* v___f_3519_; uint8_t v___x_3520_; lean_object* v___x_3521_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
lean_inc(v_a_3517_);
lean_dec_ref(v___x_3516_);
v___x_3518_ = lean_box(v___x_3511_);
v___f_3519_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed), 15, 8);
lean_closure_set(v___f_3519_, 0, v_body_3514_);
lean_closure_set(v___f_3519_, 1, v_recArgInfos_3477_);
lean_closure_set(v___f_3519_, 2, v_positions_3478_);
lean_closure_set(v___f_3519_, 3, v_recFnNames_3479_);
lean_closure_set(v___f_3519_, 4, v_containsRecFn_3480_);
lean_closure_set(v___f_3519_, 5, v_below_3481_);
lean_closure_set(v___f_3519_, 6, v___x_3518_);
lean_closure_set(v___f_3519_, 7, v_a_3503_);
v___x_3520_ = 0;
v___x_3521_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_binderName_3512_, v_binderInfo_3515_, v_a_3517_, v___f_3519_, v___x_3520_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
return v___x_3521_;
}
else
{
lean_dec_ref(v_body_3514_);
lean_dec(v_binderName_3512_);
lean_dec(v_a_3503_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
return v___x_3516_;
}
}
case 7:
{
lean_object* v_binderName_3522_; lean_object* v_binderType_3523_; lean_object* v_body_3524_; uint8_t v_binderInfo_3525_; lean_object* v___x_3526_; 
v_binderName_3522_ = lean_ctor_get(v_e_3482_, 0);
lean_inc(v_binderName_3522_);
v_binderType_3523_ = lean_ctor_get(v_e_3482_, 1);
lean_inc_ref(v_binderType_3523_);
v_body_3524_ = lean_ctor_get(v_e_3482_, 2);
lean_inc_ref(v_body_3524_);
v_binderInfo_3525_ = lean_ctor_get_uint8(v_e_3482_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3482_);
lean_inc(v_a_3487_);
lean_inc_ref(v_a_3486_);
lean_inc(v_a_3485_);
lean_inc_ref(v_a_3484_);
lean_inc(v_a_3483_);
lean_inc_ref(v_below_3481_);
lean_inc_ref(v_containsRecFn_3480_);
lean_inc_ref(v_recFnNames_3479_);
lean_inc_ref(v_positions_3478_);
lean_inc_ref(v_recArgInfos_3477_);
v___x_3526_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3477_, v_positions_3478_, v_recFnNames_3479_, v_containsRecFn_3480_, v_below_3481_, v_binderType_3523_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v_a_3527_; lean_object* v___x_3528_; lean_object* v___f_3529_; uint8_t v___x_3530_; lean_object* v___x_3531_; 
v_a_3527_ = lean_ctor_get(v___x_3526_, 0);
lean_inc(v_a_3527_);
lean_dec_ref(v___x_3526_);
v___x_3528_ = lean_box(v___x_3511_);
v___f_3529_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed), 15, 8);
lean_closure_set(v___f_3529_, 0, v_body_3524_);
lean_closure_set(v___f_3529_, 1, v_recArgInfos_3477_);
lean_closure_set(v___f_3529_, 2, v_positions_3478_);
lean_closure_set(v___f_3529_, 3, v_recFnNames_3479_);
lean_closure_set(v___f_3529_, 4, v_containsRecFn_3480_);
lean_closure_set(v___f_3529_, 5, v_below_3481_);
lean_closure_set(v___f_3529_, 6, v___x_3528_);
lean_closure_set(v___f_3529_, 7, v_a_3503_);
v___x_3530_ = 0;
v___x_3531_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_binderName_3522_, v_binderInfo_3525_, v_a_3527_, v___f_3529_, v___x_3530_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
return v___x_3531_;
}
else
{
lean_dec_ref(v_body_3524_);
lean_dec(v_binderName_3522_);
lean_dec(v_a_3503_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
return v___x_3526_;
}
}
case 8:
{
lean_object* v_declName_3532_; lean_object* v_type_3533_; lean_object* v_value_3534_; lean_object* v_body_3535_; uint8_t v_nondep_3536_; lean_object* v___x_3537_; 
lean_dec(v_a_3503_);
v_declName_3532_ = lean_ctor_get(v_e_3482_, 0);
lean_inc(v_declName_3532_);
v_type_3533_ = lean_ctor_get(v_e_3482_, 1);
lean_inc_ref(v_type_3533_);
v_value_3534_ = lean_ctor_get(v_e_3482_, 2);
lean_inc_ref(v_value_3534_);
v_body_3535_ = lean_ctor_get(v_e_3482_, 3);
lean_inc_ref(v_body_3535_);
v_nondep_3536_ = lean_ctor_get_uint8(v_e_3482_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_3482_);
lean_inc(v_a_3487_);
lean_inc_ref(v_a_3486_);
lean_inc(v_a_3485_);
lean_inc_ref(v_a_3484_);
lean_inc(v_a_3483_);
lean_inc_ref(v_below_3481_);
lean_inc_ref(v_containsRecFn_3480_);
lean_inc_ref(v_recFnNames_3479_);
lean_inc_ref(v_positions_3478_);
lean_inc_ref(v_recArgInfos_3477_);
v___x_3537_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3477_, v_positions_3478_, v_recFnNames_3479_, v_containsRecFn_3480_, v_below_3481_, v_type_3533_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; lean_object* v___x_3539_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3538_);
lean_dec_ref(v___x_3537_);
lean_inc(v_a_3487_);
lean_inc_ref(v_a_3486_);
lean_inc(v_a_3485_);
lean_inc_ref(v_a_3484_);
lean_inc(v_a_3483_);
lean_inc_ref(v_below_3481_);
lean_inc_ref(v_containsRecFn_3480_);
lean_inc_ref(v_recFnNames_3479_);
lean_inc_ref(v_positions_3478_);
lean_inc_ref(v_recArgInfos_3477_);
v___x_3539_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3477_, v_positions_3478_, v_recFnNames_3479_, v_containsRecFn_3480_, v_below_3481_, v_value_3534_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3539_) == 0)
{
lean_object* v_a_3540_; lean_object* v___f_3541_; uint8_t v___x_3542_; lean_object* v___x_3543_; 
v_a_3540_ = lean_ctor_get(v___x_3539_, 0);
lean_inc(v_a_3540_);
lean_dec_ref(v___x_3539_);
v___f_3541_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed), 13, 6);
lean_closure_set(v___f_3541_, 0, v_body_3535_);
lean_closure_set(v___f_3541_, 1, v_recArgInfos_3477_);
lean_closure_set(v___f_3541_, 2, v_positions_3478_);
lean_closure_set(v___f_3541_, 3, v_recFnNames_3479_);
lean_closure_set(v___f_3541_, 4, v_containsRecFn_3480_);
lean_closure_set(v___f_3541_, 5, v_below_3481_);
v___x_3542_ = 0;
v___x_3543_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(v_declName_3532_, v_a_3538_, v_a_3540_, v___f_3541_, v_nondep_3536_, v___x_3542_, v___x_3511_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
return v___x_3543_;
}
else
{
lean_dec(v_a_3538_);
lean_dec_ref(v_body_3535_);
lean_dec(v_declName_3532_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
return v___x_3539_;
}
}
else
{
lean_dec_ref(v_body_3535_);
lean_dec_ref(v_value_3534_);
lean_dec(v_declName_3532_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
return v___x_3537_;
}
}
case 10:
{
lean_object* v_data_3544_; lean_object* v_expr_3545_; lean_object* v___x_3546_; 
lean_dec(v_a_3503_);
v_data_3544_ = lean_ctor_get(v_e_3482_, 0);
lean_inc(v_data_3544_);
v_expr_3545_ = lean_ctor_get(v_e_3482_, 1);
lean_inc_ref(v_expr_3545_);
v___x_3546_ = l_Lean_getRecAppSyntax_x3f(v_e_3482_);
lean_dec_ref(v_e_3482_);
if (lean_obj_tag(v___x_3546_) == 1)
{
lean_object* v_val_3547_; lean_object* v_fileName_3548_; lean_object* v_fileMap_3549_; lean_object* v_options_3550_; lean_object* v_currRecDepth_3551_; lean_object* v_maxRecDepth_3552_; lean_object* v_ref_3553_; lean_object* v_currNamespace_3554_; lean_object* v_openDecls_3555_; lean_object* v_initHeartbeats_3556_; lean_object* v_maxHeartbeats_3557_; lean_object* v_quotContext_3558_; lean_object* v_currMacroScope_3559_; uint8_t v_diag_3560_; lean_object* v_cancelTk_x3f_3561_; uint8_t v_suppressElabErrors_3562_; lean_object* v_inheritedTraceOptions_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3572_; 
lean_dec(v_data_3544_);
v_val_3547_ = lean_ctor_get(v___x_3546_, 0);
lean_inc(v_val_3547_);
lean_dec_ref(v___x_3546_);
v_fileName_3548_ = lean_ctor_get(v_a_3486_, 0);
v_fileMap_3549_ = lean_ctor_get(v_a_3486_, 1);
v_options_3550_ = lean_ctor_get(v_a_3486_, 2);
v_currRecDepth_3551_ = lean_ctor_get(v_a_3486_, 3);
v_maxRecDepth_3552_ = lean_ctor_get(v_a_3486_, 4);
v_ref_3553_ = lean_ctor_get(v_a_3486_, 5);
v_currNamespace_3554_ = lean_ctor_get(v_a_3486_, 6);
v_openDecls_3555_ = lean_ctor_get(v_a_3486_, 7);
v_initHeartbeats_3556_ = lean_ctor_get(v_a_3486_, 8);
v_maxHeartbeats_3557_ = lean_ctor_get(v_a_3486_, 9);
v_quotContext_3558_ = lean_ctor_get(v_a_3486_, 10);
v_currMacroScope_3559_ = lean_ctor_get(v_a_3486_, 11);
v_diag_3560_ = lean_ctor_get_uint8(v_a_3486_, sizeof(void*)*14);
v_cancelTk_x3f_3561_ = lean_ctor_get(v_a_3486_, 12);
v_suppressElabErrors_3562_ = lean_ctor_get_uint8(v_a_3486_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3563_ = lean_ctor_get(v_a_3486_, 13);
v_isSharedCheck_3572_ = !lean_is_exclusive(v_a_3486_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3565_ = v_a_3486_;
v_isShared_3566_ = v_isSharedCheck_3572_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_inheritedTraceOptions_3563_);
lean_inc(v_cancelTk_x3f_3561_);
lean_inc(v_currMacroScope_3559_);
lean_inc(v_quotContext_3558_);
lean_inc(v_maxHeartbeats_3557_);
lean_inc(v_initHeartbeats_3556_);
lean_inc(v_openDecls_3555_);
lean_inc(v_currNamespace_3554_);
lean_inc(v_ref_3553_);
lean_inc(v_maxRecDepth_3552_);
lean_inc(v_currRecDepth_3551_);
lean_inc(v_options_3550_);
lean_inc(v_fileMap_3549_);
lean_inc(v_fileName_3548_);
lean_dec(v_a_3486_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3572_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v_ref_3567_; lean_object* v___x_3569_; 
v_ref_3567_ = l_Lean_replaceRef(v_val_3547_, v_ref_3553_);
lean_dec(v_ref_3553_);
lean_dec(v_val_3547_);
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 5, v_ref_3567_);
v___x_3569_ = v___x_3565_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_fileName_3548_);
lean_ctor_set(v_reuseFailAlloc_3571_, 1, v_fileMap_3549_);
lean_ctor_set(v_reuseFailAlloc_3571_, 2, v_options_3550_);
lean_ctor_set(v_reuseFailAlloc_3571_, 3, v_currRecDepth_3551_);
lean_ctor_set(v_reuseFailAlloc_3571_, 4, v_maxRecDepth_3552_);
lean_ctor_set(v_reuseFailAlloc_3571_, 5, v_ref_3567_);
lean_ctor_set(v_reuseFailAlloc_3571_, 6, v_currNamespace_3554_);
lean_ctor_set(v_reuseFailAlloc_3571_, 7, v_openDecls_3555_);
lean_ctor_set(v_reuseFailAlloc_3571_, 8, v_initHeartbeats_3556_);
lean_ctor_set(v_reuseFailAlloc_3571_, 9, v_maxHeartbeats_3557_);
lean_ctor_set(v_reuseFailAlloc_3571_, 10, v_quotContext_3558_);
lean_ctor_set(v_reuseFailAlloc_3571_, 11, v_currMacroScope_3559_);
lean_ctor_set(v_reuseFailAlloc_3571_, 12, v_cancelTk_x3f_3561_);
lean_ctor_set(v_reuseFailAlloc_3571_, 13, v_inheritedTraceOptions_3563_);
lean_ctor_set_uint8(v_reuseFailAlloc_3571_, sizeof(void*)*14, v_diag_3560_);
lean_ctor_set_uint8(v_reuseFailAlloc_3571_, sizeof(void*)*14 + 1, v_suppressElabErrors_3562_);
v___x_3569_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
v_e_3482_ = v_expr_3545_;
v_a_3486_ = v___x_3569_;
goto _start;
}
}
}
else
{
lean_object* v___x_3573_; 
lean_dec(v___x_3546_);
v___x_3573_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3477_, v_positions_3478_, v_recFnNames_3479_, v_containsRecFn_3480_, v_below_3481_, v_expr_3545_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v_a_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3582_; 
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3576_ = v___x_3573_;
v_isShared_3577_ = v_isSharedCheck_3582_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_a_3574_);
lean_dec(v___x_3573_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3582_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3578_; lean_object* v___x_3580_; 
v___x_3578_ = l_Lean_mkMData(v_data_3544_, v_a_3574_);
if (v_isShared_3577_ == 0)
{
lean_ctor_set(v___x_3576_, 0, v___x_3578_);
v___x_3580_ = v___x_3576_;
goto v_reusejp_3579_;
}
else
{
lean_object* v_reuseFailAlloc_3581_; 
v_reuseFailAlloc_3581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3581_, 0, v___x_3578_);
v___x_3580_ = v_reuseFailAlloc_3581_;
goto v_reusejp_3579_;
}
v_reusejp_3579_:
{
return v___x_3580_;
}
}
}
else
{
lean_dec(v_data_3544_);
return v___x_3573_;
}
}
}
case 11:
{
lean_object* v_typeName_3583_; lean_object* v_idx_3584_; lean_object* v_struct_3585_; lean_object* v___x_3586_; 
lean_dec(v_a_3503_);
v_typeName_3583_ = lean_ctor_get(v_e_3482_, 0);
lean_inc(v_typeName_3583_);
v_idx_3584_ = lean_ctor_get(v_e_3482_, 1);
lean_inc(v_idx_3584_);
v_struct_3585_ = lean_ctor_get(v_e_3482_, 2);
lean_inc_ref(v_struct_3585_);
lean_dec_ref(v_e_3482_);
v___x_3586_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3477_, v_positions_3478_, v_recFnNames_3479_, v_containsRecFn_3480_, v_below_3481_, v_struct_3585_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v_a_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3595_; 
v_a_3587_ = lean_ctor_get(v___x_3586_, 0);
v_isSharedCheck_3595_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3595_ == 0)
{
v___x_3589_ = v___x_3586_;
v_isShared_3590_ = v_isSharedCheck_3595_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_a_3587_);
lean_dec(v___x_3586_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3595_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
lean_object* v___x_3591_; lean_object* v___x_3593_; 
v___x_3591_ = l_Lean_mkProj(v_typeName_3583_, v_idx_3584_, v_a_3587_);
if (v_isShared_3590_ == 0)
{
lean_ctor_set(v___x_3589_, 0, v___x_3591_);
v___x_3593_ = v___x_3589_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3594_; 
v_reuseFailAlloc_3594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3594_, 0, v___x_3591_);
v___x_3593_ = v_reuseFailAlloc_3594_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
return v___x_3593_;
}
}
}
else
{
lean_dec(v_idx_3584_);
lean_dec(v_typeName_3583_);
return v___x_3586_;
}
}
case 5:
{
uint8_t v___x_3596_; lean_object* v___x_3597_; 
v___x_3596_ = lean_unbox(v_a_3503_);
lean_inc(v_a_3487_);
lean_inc_ref(v_a_3486_);
lean_inc(v_a_3485_);
lean_inc_ref(v_a_3484_);
lean_inc(v_a_3483_);
lean_inc_ref(v_e_3482_);
v___x_3597_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(v_e_3482_, v___x_3596_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3597_) == 0)
{
lean_object* v_a_3598_; 
v_a_3598_ = lean_ctor_get(v___x_3597_, 0);
lean_inc(v_a_3598_);
lean_dec_ref(v___x_3597_);
if (lean_obj_tag(v_a_3598_) == 0)
{
lean_dec(v_a_3503_);
v_e_3490_ = v_e_3482_;
v___y_3491_ = v_a_3483_;
v___y_3492_ = v_a_3484_;
v___y_3493_ = v_a_3485_;
v___y_3494_ = v_a_3486_;
v___y_3495_ = v_a_3487_;
goto v___jp_3489_;
}
else
{
lean_object* v_val_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; uint8_t v___x_3602_; 
v_val_3599_ = lean_ctor_get(v_a_3598_, 0);
lean_inc(v_val_3599_);
lean_dec_ref(v_a_3598_);
v___x_3600_ = lean_unsigned_to_nat(0u);
v___x_3601_ = lean_array_get_size(v_recArgInfos_3477_);
v___x_3602_ = lean_nat_dec_lt(v___x_3600_, v___x_3601_);
if (v___x_3602_ == 0)
{
lean_dec(v_val_3599_);
lean_dec(v_a_3503_);
v_e_3490_ = v_e_3482_;
v___y_3491_ = v_a_3483_;
v___y_3492_ = v_a_3484_;
v___y_3493_ = v_a_3485_;
v___y_3494_ = v_a_3486_;
v___y_3495_ = v_a_3487_;
goto v___jp_3489_;
}
else
{
if (v___x_3602_ == 0)
{
lean_dec(v_val_3599_);
lean_dec(v_a_3503_);
v_e_3490_ = v_e_3482_;
v___y_3491_ = v_a_3483_;
v___y_3492_ = v_a_3484_;
v___y_3493_ = v_a_3485_;
v___y_3494_ = v_a_3486_;
v___y_3495_ = v_a_3487_;
goto v___jp_3489_;
}
else
{
size_t v___x_3603_; size_t v___x_3604_; uint8_t v___x_3605_; 
v___x_3603_ = ((size_t)0ULL);
v___x_3604_ = lean_usize_of_nat(v___x_3601_);
v___x_3605_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(v_e_3482_, v_recArgInfos_3477_, v___x_3603_, v___x_3604_);
if (v___x_3605_ == 0)
{
lean_dec(v_val_3599_);
lean_dec(v_a_3503_);
v_e_3490_ = v_e_3482_;
v___y_3491_ = v_a_3483_;
v___y_3492_ = v_a_3484_;
v___y_3493_ = v_a_3485_;
v___y_3494_ = v_a_3486_;
v___y_3495_ = v_a_3487_;
goto v___jp_3489_;
}
else
{
lean_object* v___x_3606_; lean_object* v___y_3608_; lean_object* v___y_3609_; lean_object* v___y_3610_; lean_object* v___y_3611_; lean_object* v___y_3612_; lean_object* v___x_3675_; 
v___x_3606_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3));
v___x_3675_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(v___x_3606_, v_a_3486_);
if (lean_obj_tag(v___x_3675_) == 0)
{
lean_object* v_a_3676_; uint8_t v___x_3677_; 
v_a_3676_ = lean_ctor_get(v___x_3675_, 0);
lean_inc(v_a_3676_);
lean_dec_ref(v___x_3675_);
v___x_3677_ = lean_unbox(v_a_3676_);
lean_dec(v_a_3676_);
if (v___x_3677_ == 0)
{
v___y_3608_ = v_a_3483_;
v___y_3609_ = v_a_3484_;
v___y_3610_ = v_a_3485_;
v___y_3611_ = v_a_3486_;
v___y_3612_ = v_a_3487_;
goto v___jp_3607_;
}
else
{
lean_object* v___x_3678_; 
lean_inc(v_a_3487_);
lean_inc_ref(v_a_3486_);
lean_inc(v_a_3485_);
lean_inc_ref(v_a_3484_);
lean_inc_ref(v_below_3481_);
v___x_3678_ = lean_infer_type(v_below_3481_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3678_) == 0)
{
lean_object* v_a_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; 
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
lean_inc(v_a_3679_);
lean_dec_ref(v___x_3678_);
v___x_3680_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4);
lean_inc_ref(v_below_3481_);
v___x_3681_ = l_Lean_MessageData_ofExpr(v_below_3481_);
v___x_3682_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3682_, 0, v___x_3680_);
lean_ctor_set(v___x_3682_, 1, v___x_3681_);
v___x_3683_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6);
v___x_3684_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3684_, 0, v___x_3682_);
lean_ctor_set(v___x_3684_, 1, v___x_3683_);
v___x_3685_ = l_Lean_MessageData_ofExpr(v_a_3679_);
v___x_3686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3686_, 0, v___x_3684_);
lean_ctor_set(v___x_3686_, 1, v___x_3685_);
v___x_3687_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v___x_3606_, v___x_3686_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3687_) == 0)
{
lean_dec_ref(v___x_3687_);
v___y_3608_ = v_a_3483_;
v___y_3609_ = v_a_3484_;
v___y_3610_ = v_a_3485_;
v___y_3611_ = v_a_3486_;
v___y_3612_ = v_a_3487_;
goto v___jp_3607_;
}
else
{
lean_object* v_a_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3695_; 
lean_dec(v_val_3599_);
lean_dec_ref(v_e_3482_);
lean_dec(v_a_3503_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3690_ = v___x_3687_;
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_a_3688_);
lean_dec(v___x_3687_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3693_; 
if (v_isShared_3691_ == 0)
{
v___x_3693_ = v___x_3690_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v_a_3688_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
}
else
{
lean_dec(v_val_3599_);
lean_dec_ref(v_e_3482_);
lean_dec(v_a_3503_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
return v___x_3678_;
}
}
}
else
{
lean_object* v_a_3696_; lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3703_; 
lean_dec(v_val_3599_);
lean_dec_ref(v_e_3482_);
lean_dec(v_a_3503_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
v_a_3696_ = lean_ctor_get(v___x_3675_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3698_ = v___x_3675_;
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
else
{
lean_inc(v_a_3696_);
lean_dec(v___x_3675_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3701_; 
if (v_isShared_3699_ == 0)
{
v___x_3701_ = v___x_3698_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_a_3696_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
v___jp_3607_:
{
lean_object* v___x_3613_; 
lean_inc(v___y_3612_);
lean_inc_ref(v___y_3611_);
lean_inc(v___y_3610_);
lean_inc_ref(v___y_3609_);
lean_inc_ref(v_below_3481_);
v___x_3613_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_val_3599_, v_below_3481_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_);
if (lean_obj_tag(v___x_3613_) == 0)
{
lean_object* v_a_3614_; 
v_a_3614_ = lean_ctor_get(v___x_3613_, 0);
lean_inc(v_a_3614_);
lean_dec_ref(v___x_3613_);
if (lean_obj_tag(v_a_3614_) == 1)
{
lean_object* v_val_3615_; lean_object* v_toMatcherInfo_3616_; lean_object* v_matcherName_3617_; lean_object* v_matcherLevels_3618_; lean_object* v_params_3619_; lean_object* v_motive_3620_; lean_object* v_discrs_3621_; lean_object* v_alts_3622_; lean_object* v_remaining_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; uint8_t v___x_3626_; lean_object* v___x_3627_; 
lean_dec_ref(v_below_3481_);
v_val_3615_ = lean_ctor_get(v_a_3614_, 0);
lean_inc(v_val_3615_);
lean_dec_ref(v_a_3614_);
v_toMatcherInfo_3616_ = lean_ctor_get(v_val_3615_, 0);
lean_inc_ref(v_toMatcherInfo_3616_);
v_matcherName_3617_ = lean_ctor_get(v_val_3615_, 1);
lean_inc(v_matcherName_3617_);
v_matcherLevels_3618_ = lean_ctor_get(v_val_3615_, 2);
lean_inc_ref(v_matcherLevels_3618_);
v_params_3619_ = lean_ctor_get(v_val_3615_, 3);
lean_inc_ref(v_params_3619_);
v_motive_3620_ = lean_ctor_get(v_val_3615_, 4);
lean_inc_ref(v_motive_3620_);
v_discrs_3621_ = lean_ctor_get(v_val_3615_, 5);
lean_inc_ref(v_discrs_3621_);
v_alts_3622_ = lean_ctor_get(v_val_3615_, 6);
lean_inc_ref(v_alts_3622_);
v_remaining_3623_ = lean_ctor_get(v_val_3615_, 7);
lean_inc_ref(v_remaining_3623_);
v___x_3624_ = l_Lean_Meta_MatcherApp_altNumParams(v_val_3615_);
v___x_3625_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0));
v___x_3626_ = lean_unbox(v_a_3503_);
lean_dec(v_a_3503_);
v___x_3627_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11(v_recArgInfos_3477_, v_positions_3478_, v_recFnNames_3479_, v_containsRecFn_3480_, v___x_3626_, v_e_3482_, v_alts_3622_, v___x_3624_, v___x_3600_, v___x_3625_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_);
lean_dec_ref(v___x_3624_);
lean_dec_ref(v_alts_3622_);
if (lean_obj_tag(v___x_3627_) == 0)
{
lean_object* v_a_3628_; lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_3637_; 
v_a_3628_ = lean_ctor_get(v___x_3627_, 0);
v_isSharedCheck_3637_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3637_ == 0)
{
v___x_3630_ = v___x_3627_;
v_isShared_3631_ = v_isSharedCheck_3637_;
goto v_resetjp_3629_;
}
else
{
lean_inc(v_a_3628_);
lean_dec(v___x_3627_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_3637_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3635_; 
v___x_3632_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3632_, 0, v_toMatcherInfo_3616_);
lean_ctor_set(v___x_3632_, 1, v_matcherName_3617_);
lean_ctor_set(v___x_3632_, 2, v_matcherLevels_3618_);
lean_ctor_set(v___x_3632_, 3, v_params_3619_);
lean_ctor_set(v___x_3632_, 4, v_motive_3620_);
lean_ctor_set(v___x_3632_, 5, v_discrs_3621_);
lean_ctor_set(v___x_3632_, 6, v_a_3628_);
lean_ctor_set(v___x_3632_, 7, v_remaining_3623_);
v___x_3633_ = l_Lean_Meta_MatcherApp_toExpr(v___x_3632_);
if (v_isShared_3631_ == 0)
{
lean_ctor_set(v___x_3630_, 0, v___x_3633_);
v___x_3635_ = v___x_3630_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v___x_3633_);
v___x_3635_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
return v___x_3635_;
}
}
}
else
{
lean_object* v_a_3638_; lean_object* v___x_3640_; uint8_t v_isShared_3641_; uint8_t v_isSharedCheck_3645_; 
lean_dec_ref(v_remaining_3623_);
lean_dec_ref(v_discrs_3621_);
lean_dec_ref(v_motive_3620_);
lean_dec_ref(v_params_3619_);
lean_dec_ref(v_matcherLevels_3618_);
lean_dec(v_matcherName_3617_);
lean_dec_ref(v_toMatcherInfo_3616_);
v_a_3638_ = lean_ctor_get(v___x_3627_, 0);
v_isSharedCheck_3645_ = !lean_is_exclusive(v___x_3627_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3640_ = v___x_3627_;
v_isShared_3641_ = v_isSharedCheck_3645_;
goto v_resetjp_3639_;
}
else
{
lean_inc(v_a_3638_);
lean_dec(v___x_3627_);
v___x_3640_ = lean_box(0);
v_isShared_3641_ = v_isSharedCheck_3645_;
goto v_resetjp_3639_;
}
v_resetjp_3639_:
{
lean_object* v___x_3643_; 
if (v_isShared_3641_ == 0)
{
v___x_3643_ = v___x_3640_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v_a_3638_);
v___x_3643_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
return v___x_3643_;
}
}
}
}
else
{
lean_object* v___x_3646_; 
lean_dec(v_a_3614_);
lean_dec(v_a_3503_);
v___x_3646_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7___redArg(v___x_3606_, v___y_3611_);
if (lean_obj_tag(v___x_3646_) == 0)
{
lean_object* v_a_3647_; uint8_t v___x_3648_; 
v_a_3647_ = lean_ctor_get(v___x_3646_, 0);
lean_inc(v_a_3647_);
lean_dec_ref(v___x_3646_);
v___x_3648_ = lean_unbox(v_a_3647_);
lean_dec(v_a_3647_);
if (v___x_3648_ == 0)
{
v_e_3490_ = v_e_3482_;
v___y_3491_ = v___y_3608_;
v___y_3492_ = v___y_3609_;
v___y_3493_ = v___y_3610_;
v___y_3494_ = v___y_3611_;
v___y_3495_ = v___y_3612_;
goto v___jp_3489_;
}
else
{
lean_object* v___x_3649_; lean_object* v___x_3650_; 
v___x_3649_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2);
v___x_3650_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v___x_3606_, v___x_3649_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_);
if (lean_obj_tag(v___x_3650_) == 0)
{
lean_dec_ref(v___x_3650_);
v_e_3490_ = v_e_3482_;
v___y_3491_ = v___y_3608_;
v___y_3492_ = v___y_3609_;
v___y_3493_ = v___y_3610_;
v___y_3494_ = v___y_3611_;
v___y_3495_ = v___y_3612_;
goto v___jp_3489_;
}
else
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3658_; 
lean_dec(v___y_3612_);
lean_dec_ref(v___y_3611_);
lean_dec(v___y_3610_);
lean_dec_ref(v___y_3609_);
lean_dec(v___y_3608_);
lean_dec_ref(v_e_3482_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
v_a_3651_ = lean_ctor_get(v___x_3650_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3650_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3653_ = v___x_3650_;
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3650_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3651_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
}
}
else
{
lean_object* v_a_3659_; lean_object* v___x_3661_; uint8_t v_isShared_3662_; uint8_t v_isSharedCheck_3666_; 
lean_dec(v___y_3612_);
lean_dec_ref(v___y_3611_);
lean_dec(v___y_3610_);
lean_dec_ref(v___y_3609_);
lean_dec(v___y_3608_);
lean_dec_ref(v_e_3482_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
v_a_3659_ = lean_ctor_get(v___x_3646_, 0);
v_isSharedCheck_3666_ = !lean_is_exclusive(v___x_3646_);
if (v_isSharedCheck_3666_ == 0)
{
v___x_3661_ = v___x_3646_;
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
else
{
lean_inc(v_a_3659_);
lean_dec(v___x_3646_);
v___x_3661_ = lean_box(0);
v_isShared_3662_ = v_isSharedCheck_3666_;
goto v_resetjp_3660_;
}
v_resetjp_3660_:
{
lean_object* v___x_3664_; 
if (v_isShared_3662_ == 0)
{
v___x_3664_ = v___x_3661_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v_a_3659_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
}
}
}
else
{
lean_object* v_a_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3674_; 
lean_dec(v___y_3612_);
lean_dec_ref(v___y_3611_);
lean_dec(v___y_3610_);
lean_dec_ref(v___y_3609_);
lean_dec(v___y_3608_);
lean_dec_ref(v_e_3482_);
lean_dec(v_a_3503_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
v_a_3667_ = lean_ctor_get(v___x_3613_, 0);
v_isSharedCheck_3674_ = !lean_is_exclusive(v___x_3613_);
if (v_isSharedCheck_3674_ == 0)
{
v___x_3669_ = v___x_3613_;
v_isShared_3670_ = v_isSharedCheck_3674_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_a_3667_);
lean_dec(v___x_3613_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3674_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___x_3672_; 
if (v_isShared_3670_ == 0)
{
v___x_3672_ = v___x_3669_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v_a_3667_);
v___x_3672_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
return v___x_3672_;
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
lean_object* v_a_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3711_; 
lean_dec_ref(v_e_3482_);
lean_dec(v_a_3503_);
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
v_a_3704_ = lean_ctor_get(v___x_3597_, 0);
v_isSharedCheck_3711_ = !lean_is_exclusive(v___x_3597_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3706_ = v___x_3597_;
v_isShared_3707_ = v_isSharedCheck_3711_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_a_3704_);
lean_dec(v___x_3597_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3711_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3709_; 
if (v_isShared_3707_ == 0)
{
v___x_3709_ = v___x_3706_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v_a_3704_);
v___x_3709_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
return v___x_3709_;
}
}
}
}
default: 
{
lean_object* v___x_3712_; 
lean_dec(v_a_3503_);
lean_dec(v_a_3483_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
lean_inc_ref(v_e_3482_);
v___x_3712_ = l_Lean_Elab_ensureNoRecFn(v_recFnNames_3479_, v_e_3482_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3719_; 
v_isSharedCheck_3719_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3719_ == 0)
{
lean_object* v_unused_3720_; 
v_unused_3720_ = lean_ctor_get(v___x_3712_, 0);
lean_dec(v_unused_3720_);
v___x_3714_ = v___x_3712_;
v_isShared_3715_ = v_isSharedCheck_3719_;
goto v_resetjp_3713_;
}
else
{
lean_dec(v___x_3712_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3719_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
lean_object* v___x_3717_; 
if (v_isShared_3715_ == 0)
{
lean_ctor_set(v___x_3714_, 0, v_e_3482_);
v___x_3717_ = v___x_3714_;
goto v_reusejp_3716_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v_e_3482_);
v___x_3717_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3716_;
}
v_reusejp_3716_:
{
return v___x_3717_;
}
}
}
else
{
lean_object* v_a_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3728_; 
lean_dec_ref(v_e_3482_);
v_a_3721_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3728_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3728_ == 0)
{
v___x_3723_ = v___x_3712_;
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_a_3721_);
lean_dec(v___x_3712_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3728_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3726_; 
if (v_isShared_3724_ == 0)
{
v___x_3726_ = v___x_3723_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v_a_3721_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
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
lean_object* v_a_3730_; lean_object* v___x_3732_; uint8_t v_isShared_3733_; uint8_t v_isSharedCheck_3737_; 
lean_dec(v_a_3487_);
lean_dec_ref(v_a_3486_);
lean_dec(v_a_3485_);
lean_dec_ref(v_a_3484_);
lean_dec(v_a_3483_);
lean_dec_ref(v_e_3482_);
lean_dec_ref(v_below_3481_);
lean_dec_ref(v_containsRecFn_3480_);
lean_dec_ref(v_recFnNames_3479_);
lean_dec_ref(v_positions_3478_);
lean_dec_ref(v_recArgInfos_3477_);
v_a_3730_ = lean_ctor_get(v___x_3502_, 0);
v_isSharedCheck_3737_ = !lean_is_exclusive(v___x_3502_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3732_ = v___x_3502_;
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
else
{
lean_inc(v_a_3730_);
lean_dec(v___x_3502_);
v___x_3732_ = lean_box(0);
v_isShared_3733_ = v_isSharedCheck_3737_;
goto v_resetjp_3731_;
}
v_resetjp_3731_:
{
lean_object* v___x_3735_; 
if (v_isShared_3733_ == 0)
{
v___x_3735_ = v___x_3732_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_a_3730_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
v___jp_3489_:
{
lean_object* v_dummy_3496_; lean_object* v_nargs_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v_dummy_3496_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0);
v_nargs_3497_ = l_Lean_Expr_getAppNumArgs(v_e_3490_);
lean_inc(v_nargs_3497_);
v___x_3498_ = lean_mk_array(v_nargs_3497_, v_dummy_3496_);
v___x_3499_ = lean_unsigned_to_nat(1u);
v___x_3500_ = lean_nat_sub(v_nargs_3497_, v___x_3499_);
lean_dec(v_nargs_3497_);
lean_inc_ref(v_e_3490_);
v___x_3501_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(v_recArgInfos_3477_, v_positions_3478_, v_recFnNames_3479_, v_containsRecFn_3480_, v_below_3481_, v_e_3490_, v_e_3490_, v___x_3498_, v___x_3500_, v___y_3491_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_);
return v___x_3501_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(lean_object* v_body_3738_, lean_object* v_recArgInfos_3739_, lean_object* v_positions_3740_, lean_object* v_recFnNames_3741_, lean_object* v_containsRecFn_3742_, lean_object* v_below_3743_, lean_object* v_x_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_){
_start:
{
lean_object* v___x_3751_; lean_object* v___x_3752_; 
v___x_3751_ = lean_expr_instantiate1(v_body_3738_, v_x_3744_);
v___x_3752_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3739_, v_positions_3740_, v_recFnNames_3741_, v_containsRecFn_3742_, v_below_3743_, v___x_3751_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_);
return v___x_3752_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0___boxed(lean_object* v_recArgInfos_3753_, lean_object* v_positions_3754_, lean_object* v_recFnNames_3755_, lean_object* v_containsRecFn_3756_, lean_object* v_below_3757_, lean_object* v_sz_3758_, lean_object* v_i_3759_, lean_object* v_bs_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_){
_start:
{
size_t v_sz_boxed_3767_; size_t v_i_boxed_3768_; lean_object* v_res_3769_; 
v_sz_boxed_3767_ = lean_unbox_usize(v_sz_3758_);
lean_dec(v_sz_3758_);
v_i_boxed_3768_ = lean_unbox_usize(v_i_3759_);
lean_dec(v_i_3759_);
v_res_3769_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(v_recArgInfos_3753_, v_positions_3754_, v_recFnNames_3755_, v_containsRecFn_3756_, v_below_3757_, v_sz_boxed_3767_, v_i_boxed_3768_, v_bs_3760_, v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_, v___y_3765_);
return v_res_3769_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11___boxed(lean_object* v_recArgInfos_3770_, lean_object* v_positions_3771_, lean_object* v_recFnNames_3772_, lean_object* v_containsRecFn_3773_, lean_object* v_a_3774_, lean_object* v_e_3775_, lean_object* v_as_3776_, lean_object* v_bs_3777_, lean_object* v_i_3778_, lean_object* v_cs_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_){
_start:
{
uint8_t v_a_31326__boxed_3786_; lean_object* v_res_3787_; 
v_a_31326__boxed_3786_ = lean_unbox(v_a_3774_);
v_res_3787_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__11(v_recArgInfos_3770_, v_positions_3771_, v_recFnNames_3772_, v_containsRecFn_3773_, v_a_31326__boxed_3786_, v_e_3775_, v_as_3776_, v_bs_3777_, v_i_3778_, v_cs_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_);
lean_dec_ref(v_bs_3777_);
lean_dec_ref(v_as_3776_);
return v_res_3787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___boxed(lean_object* v_recArgInfos_3788_, lean_object* v_positions_3789_, lean_object* v_recFnNames_3790_, lean_object* v_containsRecFn_3791_, lean_object* v_below_3792_, lean_object* v_e_3793_, lean_object* v_x_3794_, lean_object* v_x_3795_, lean_object* v_x_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_){
_start:
{
lean_object* v_res_3803_; 
v_res_3803_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(v_recArgInfos_3788_, v_positions_3789_, v_recFnNames_3790_, v_containsRecFn_3791_, v_below_3792_, v_e_3793_, v_x_3794_, v_x_3795_, v_x_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_);
return v_res_3803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___boxed(lean_object* v_recArgInfos_3804_, lean_object* v_positions_3805_, lean_object* v_recFnNames_3806_, lean_object* v_containsRecFn_3807_, lean_object* v_below_3808_, lean_object* v_e_3809_, lean_object* v_a_3810_, lean_object* v_a_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_){
_start:
{
lean_object* v_res_3816_; 
v_res_3816_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3804_, v_positions_3805_, v_recFnNames_3806_, v_containsRecFn_3807_, v_below_3808_, v_e_3809_, v_a_3810_, v_a_3811_, v_a_3812_, v_a_3813_, v_a_3814_);
return v_res_3816_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(lean_object* v_00_u03b1_3817_, lean_object* v_msg_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_){
_start:
{
lean_object* v___x_3825_; 
v___x_3825_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_3818_, v___y_3820_, v___y_3821_, v___y_3822_, v___y_3823_);
return v___x_3825_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___boxed(lean_object* v_00_u03b1_3826_, lean_object* v_msg_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
lean_object* v_res_3834_; 
v_res_3834_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(v_00_u03b1_3826_, v_msg_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_);
lean_dec(v___y_3832_);
lean_dec_ref(v___y_3831_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
lean_dec(v___y_3828_);
return v_res_3834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(lean_object* v_00_u03b1_3835_, lean_object* v_name_3836_, lean_object* v_type_3837_, lean_object* v_val_3838_, lean_object* v_k_3839_, uint8_t v_nondep_3840_, uint8_t v_kind_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_){
_start:
{
lean_object* v___x_3848_; 
v___x_3848_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_3836_, v_type_3837_, v_val_3838_, v_k_3839_, v_nondep_3840_, v_kind_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_, v___y_3846_);
return v___x_3848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object* v_00_u03b1_3849_, lean_object* v_name_3850_, lean_object* v_type_3851_, lean_object* v_val_3852_, lean_object* v_k_3853_, lean_object* v_nondep_3854_, lean_object* v_kind_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_){
_start:
{
uint8_t v_nondep_boxed_3862_; uint8_t v_kind_boxed_3863_; lean_object* v_res_3864_; 
v_nondep_boxed_3862_ = lean_unbox(v_nondep_3854_);
v_kind_boxed_3863_ = lean_unbox(v_kind_3855_);
v_res_3864_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(v_00_u03b1_3849_, v_name_3850_, v_type_3851_, v_val_3852_, v_k_3853_, v_nondep_boxed_3862_, v_kind_boxed_3863_, v___y_3856_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_);
return v_res_3864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(lean_object* v_declName_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_){
_start:
{
lean_object* v___x_3872_; 
v___x_3872_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_3865_, v___y_3870_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___boxed(lean_object* v_declName_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_){
_start:
{
lean_object* v_res_3880_; 
v_res_3880_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(v_declName_3873_, v___y_3874_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_);
lean_dec(v___y_3878_);
lean_dec_ref(v___y_3877_);
lean_dec(v___y_3876_);
lean_dec_ref(v___y_3875_);
lean_dec(v___y_3874_);
return v_res_3880_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(lean_object* v_cls_3881_, lean_object* v_msg_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_){
_start:
{
lean_object* v___x_3889_; 
v___x_3889_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v_cls_3881_, v_msg_3882_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_);
return v___x_3889_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___boxed(lean_object* v_cls_3890_, lean_object* v_msg_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_){
_start:
{
lean_object* v_res_3898_; 
v_res_3898_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(v_cls_3890_, v_msg_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_, v___y_3896_);
lean_dec(v___y_3896_);
lean_dec_ref(v___y_3895_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
lean_dec(v___y_3892_);
return v_res_3898_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9(lean_object* v_00_u03b1_3899_, lean_object* v_constName_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_){
_start:
{
lean_object* v___x_3907_; 
v___x_3907_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___redArg(v_constName_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
return v___x_3907_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9___boxed(lean_object* v_00_u03b1_3908_, lean_object* v_constName_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_){
_start:
{
lean_object* v_res_3916_; 
v_res_3916_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9(v_00_u03b1_3908_, v_constName_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
lean_dec(v___y_3914_);
lean_dec(v___y_3912_);
lean_dec_ref(v___y_3911_);
lean_dec(v___y_3910_);
return v_res_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16(lean_object* v_00_u03b1_3917_, lean_object* v_ref_3918_, lean_object* v_constName_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_){
_start:
{
lean_object* v___x_3926_; 
v___x_3926_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___redArg(v_ref_3918_, v_constName_3919_, v___y_3920_, v___y_3921_, v___y_3922_, v___y_3923_, v___y_3924_);
return v___x_3926_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16___boxed(lean_object* v_00_u03b1_3927_, lean_object* v_ref_3928_, lean_object* v_constName_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_){
_start:
{
lean_object* v_res_3936_; 
v_res_3936_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16(v_00_u03b1_3927_, v_ref_3928_, v_constName_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
lean_dec(v___y_3934_);
lean_dec(v___y_3932_);
lean_dec_ref(v___y_3931_);
lean_dec(v___y_3930_);
lean_dec(v_ref_3928_);
return v_res_3936_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18(lean_object* v_00_u03b1_3937_, lean_object* v_ref_3938_, lean_object* v_msg_3939_, lean_object* v_declHint_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_){
_start:
{
lean_object* v___x_3947_; 
v___x_3947_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___redArg(v_ref_3938_, v_msg_3939_, v_declHint_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_);
return v___x_3947_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18___boxed(lean_object* v_00_u03b1_3948_, lean_object* v_ref_3949_, lean_object* v_msg_3950_, lean_object* v_declHint_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_){
_start:
{
lean_object* v_res_3958_; 
v_res_3958_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18(v_00_u03b1_3948_, v_ref_3949_, v_msg_3950_, v_declHint_3951_, v___y_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_);
lean_dec(v___y_3956_);
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec(v_ref_3949_);
return v_res_3958_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20(lean_object* v_msg_3959_, lean_object* v_declHint_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_){
_start:
{
lean_object* v___x_3967_; 
v___x_3967_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___redArg(v_msg_3959_, v_declHint_3960_, v___y_3965_);
return v___x_3967_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20___boxed(lean_object* v_msg_3968_, lean_object* v_declHint_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_){
_start:
{
lean_object* v_res_3976_; 
v_res_3976_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__19_spec__20(v_msg_3968_, v_declHint_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_);
lean_dec(v___y_3974_);
lean_dec_ref(v___y_3973_);
lean_dec(v___y_3972_);
lean_dec_ref(v___y_3971_);
lean_dec(v___y_3970_);
return v_res_3976_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20(lean_object* v_00_u03b1_3977_, lean_object* v_ref_3978_, lean_object* v_msg_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_){
_start:
{
lean_object* v___x_3986_; 
v___x_3986_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___redArg(v_ref_3978_, v_msg_3979_, v___y_3980_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_);
return v___x_3986_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20___boxed(lean_object* v_00_u03b1_3987_, lean_object* v_ref_3988_, lean_object* v_msg_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__9_spec__16_spec__18_spec__20(v_00_u03b1_3987_, v_ref_3988_, v_msg_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_);
lean_dec(v___y_3994_);
lean_dec(v___y_3992_);
lean_dec_ref(v___y_3991_);
lean_dec(v___y_3990_);
lean_dec(v_ref_3988_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(lean_object* v_recFnNames_3997_, lean_object* v_e_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v_fst_4007_; lean_object* v_snd_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; 
v___x_4005_ = lean_st_ref_take(v___y_3999_);
v___x_4006_ = l_Lean_HasConstCache_containsUnsafe(v_recFnNames_3997_, v_e_3998_, v___x_4005_);
v_fst_4007_ = lean_ctor_get(v___x_4006_, 0);
lean_inc(v_fst_4007_);
v_snd_4008_ = lean_ctor_get(v___x_4006_, 1);
lean_inc(v_snd_4008_);
lean_dec_ref(v___x_4006_);
v___x_4009_ = lean_st_ref_set(v___y_3999_, v_snd_4008_);
v___x_4010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4010_, 0, v_fst_4007_);
return v___x_4010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed(lean_object* v_recFnNames_4011_, lean_object* v_e_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_){
_start:
{
lean_object* v_res_4019_; 
v_res_4019_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(v_recFnNames_4011_, v_e_4012_, v___y_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_);
lean_dec(v___y_4017_);
lean_dec_ref(v___y_4016_);
lean_dec(v___y_4015_);
lean_dec_ref(v___y_4014_);
lean_dec(v___y_4013_);
lean_dec_ref(v_recFnNames_4011_);
return v_res_4019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(size_t v_sz_4020_, size_t v_i_4021_, lean_object* v_bs_4022_){
_start:
{
uint8_t v___x_4023_; 
v___x_4023_ = lean_usize_dec_lt(v_i_4021_, v_sz_4020_);
if (v___x_4023_ == 0)
{
return v_bs_4022_;
}
else
{
lean_object* v_v_4024_; lean_object* v_fnName_4025_; lean_object* v___x_4026_; lean_object* v_bs_x27_4027_; size_t v___x_4028_; size_t v___x_4029_; lean_object* v___x_4030_; 
v_v_4024_ = lean_array_uget_borrowed(v_bs_4022_, v_i_4021_);
v_fnName_4025_ = lean_ctor_get(v_v_4024_, 0);
lean_inc(v_fnName_4025_);
v___x_4026_ = lean_unsigned_to_nat(0u);
v_bs_x27_4027_ = lean_array_uset(v_bs_4022_, v_i_4021_, v___x_4026_);
v___x_4028_ = ((size_t)1ULL);
v___x_4029_ = lean_usize_add(v_i_4021_, v___x_4028_);
v___x_4030_ = lean_array_uset(v_bs_x27_4027_, v_i_4021_, v_fnName_4025_);
v_i_4021_ = v___x_4029_;
v_bs_4022_ = v___x_4030_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0___boxed(lean_object* v_sz_4032_, lean_object* v_i_4033_, lean_object* v_bs_4034_){
_start:
{
size_t v_sz_boxed_4035_; size_t v_i_boxed_4036_; lean_object* v_res_4037_; 
v_sz_boxed_4035_ = lean_unbox_usize(v_sz_4032_);
lean_dec(v_sz_4032_);
v_i_boxed_4036_ = lean_unbox_usize(v_i_4033_);
lean_dec(v_i_4033_);
v_res_4037_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(v_sz_boxed_4035_, v_i_boxed_4036_, v_bs_4034_);
return v_res_4037_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0(void){
_start:
{
lean_object* v___x_4038_; lean_object* v___x_4039_; lean_object* v___x_4040_; 
v___x_4038_ = lean_box(0);
v___x_4039_ = lean_unsigned_to_nat(16u);
v___x_4040_ = lean_mk_array(v___x_4039_, v___x_4038_);
return v___x_4040_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1(void){
_start:
{
lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; 
v___x_4041_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0);
v___x_4042_ = lean_unsigned_to_nat(0u);
v___x_4043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4042_);
lean_ctor_set(v___x_4043_, 1, v___x_4041_);
return v___x_4043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(lean_object* v_recArgInfos_4044_, lean_object* v_positions_4045_, lean_object* v_below_4046_, lean_object* v_e_4047_, lean_object* v_a_4048_, lean_object* v_a_4049_, lean_object* v_a_4050_, lean_object* v_a_4051_){
_start:
{
lean_object* v___x_4053_; lean_object* v___x_4054_; size_t v_sz_4055_; size_t v___x_4056_; lean_object* v_recFnNames_4057_; lean_object* v_containsRecFn_4058_; lean_object* v___x_4059_; 
v___x_4053_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1);
v___x_4054_ = lean_st_mk_ref(v___x_4053_);
v_sz_4055_ = lean_array_size(v_recArgInfos_4044_);
v___x_4056_ = ((size_t)0ULL);
lean_inc_ref(v_recArgInfos_4044_);
v_recFnNames_4057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(v_sz_4055_, v___x_4056_, v_recArgInfos_4044_);
lean_inc_ref(v_recFnNames_4057_);
v_containsRecFn_4058_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed), 8, 1);
lean_closure_set(v_containsRecFn_4058_, 0, v_recFnNames_4057_);
lean_inc(v___x_4054_);
v___x_4059_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_4044_, v_positions_4045_, v_recFnNames_4057_, v_containsRecFn_4058_, v_below_4046_, v_e_4047_, v___x_4054_, v_a_4048_, v_a_4049_, v_a_4050_, v_a_4051_);
if (lean_obj_tag(v___x_4059_) == 0)
{
lean_object* v_a_4060_; lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4068_; 
v_a_4060_ = lean_ctor_get(v___x_4059_, 0);
v_isSharedCheck_4068_ = !lean_is_exclusive(v___x_4059_);
if (v_isSharedCheck_4068_ == 0)
{
v___x_4062_ = v___x_4059_;
v_isShared_4063_ = v_isSharedCheck_4068_;
goto v_resetjp_4061_;
}
else
{
lean_inc(v_a_4060_);
lean_dec(v___x_4059_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4068_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v___x_4064_; lean_object* v___x_4066_; 
v___x_4064_ = lean_st_ref_get(v___x_4054_);
lean_dec(v___x_4054_);
lean_dec(v___x_4064_);
if (v_isShared_4063_ == 0)
{
v___x_4066_ = v___x_4062_;
goto v_reusejp_4065_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v_a_4060_);
v___x_4066_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4065_;
}
v_reusejp_4065_:
{
return v___x_4066_;
}
}
}
else
{
lean_dec(v___x_4054_);
return v___x_4059_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___boxed(lean_object* v_recArgInfos_4069_, lean_object* v_positions_4070_, lean_object* v_below_4071_, lean_object* v_e_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_, lean_object* v_a_4077_){
_start:
{
lean_object* v_res_4078_; 
v_res_4078_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(v_recArgInfos_4069_, v_positions_4070_, v_below_4071_, v_e_4072_, v_a_4073_, v_a_4074_, v_a_4075_, v_a_4076_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(lean_object* v_e_4079_, lean_object* v_k_4080_, uint8_t v_cleanupAnnotations_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_){
_start:
{
lean_object* v___f_4087_; uint8_t v___x_4088_; uint8_t v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v___f_4087_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4087_, 0, v_k_4080_);
v___x_4088_ = 1;
v___x_4089_ = 0;
v___x_4090_ = lean_box(0);
v___x_4091_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4079_, v___x_4088_, v___x_4089_, v___x_4088_, v___x_4089_, v___x_4090_, v___f_4087_, v_cleanupAnnotations_4081_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_);
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4099_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4099_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4099_ == 0)
{
v___x_4094_ = v___x_4091_;
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4091_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4099_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4097_; 
if (v_isShared_4095_ == 0)
{
v___x_4097_ = v___x_4094_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v_a_4092_);
v___x_4097_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
return v___x_4097_;
}
}
}
else
{
lean_object* v_a_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4107_; 
v_a_4100_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4107_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4102_ = v___x_4091_;
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_a_4100_);
lean_dec(v___x_4091_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4105_; 
if (v_isShared_4103_ == 0)
{
v___x_4105_ = v___x_4102_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_a_4100_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
return v___x_4105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg___boxed(lean_object* v_e_4108_, lean_object* v_k_4109_, lean_object* v_cleanupAnnotations_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4116_; lean_object* v_res_4117_; 
v_cleanupAnnotations_boxed_4116_ = lean_unbox(v_cleanupAnnotations_4110_);
v_res_4117_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_e_4108_, v_k_4109_, v_cleanupAnnotations_boxed_4116_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_);
return v_res_4117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(lean_object* v_00_u03b1_4118_, lean_object* v_e_4119_, lean_object* v_k_4120_, uint8_t v_cleanupAnnotations_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_){
_start:
{
lean_object* v___x_4127_; 
v___x_4127_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_e_4119_, v_k_4120_, v_cleanupAnnotations_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
return v___x_4127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___boxed(lean_object* v_00_u03b1_4128_, lean_object* v_e_4129_, lean_object* v_k_4130_, lean_object* v_cleanupAnnotations_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4137_; lean_object* v_res_4138_; 
v_cleanupAnnotations_boxed_4137_ = lean_unbox(v_cleanupAnnotations_4131_);
v_res_4138_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(v_00_u03b1_4128_, v_e_4129_, v_k_4130_, v_cleanupAnnotations_boxed_4137_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_);
return v_res_4138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(lean_object* v_type_4139_, lean_object* v_recArgInfo_4140_, lean_object* v_xs_4141_, lean_object* v___value_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_){
_start:
{
lean_object* v___x_4148_; 
lean_inc(v___y_4146_);
lean_inc_ref(v___y_4145_);
lean_inc(v___y_4144_);
lean_inc_ref(v___y_4143_);
v___x_4148_ = l_Lean_Meta_instantiateForall(v_type_4139_, v_xs_4141_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_);
if (lean_obj_tag(v___x_4148_) == 0)
{
lean_object* v_a_4149_; lean_object* v___x_4150_; lean_object* v_fst_4151_; lean_object* v_snd_4152_; uint8_t v___x_4153_; uint8_t v___x_4154_; uint8_t v___x_4155_; lean_object* v___x_4156_; 
v_a_4149_ = lean_ctor_get(v___x_4148_, 0);
lean_inc(v_a_4149_);
lean_dec_ref(v___x_4148_);
v___x_4150_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_4140_, v_xs_4141_);
v_fst_4151_ = lean_ctor_get(v___x_4150_, 0);
lean_inc(v_fst_4151_);
v_snd_4152_ = lean_ctor_get(v___x_4150_, 1);
lean_inc(v_snd_4152_);
lean_dec_ref(v___x_4150_);
v___x_4153_ = 0;
v___x_4154_ = 1;
v___x_4155_ = 1;
v___x_4156_ = l_Lean_Meta_mkForallFVars(v_snd_4152_, v_a_4149_, v___x_4153_, v___x_4154_, v___x_4154_, v___x_4155_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_);
lean_dec(v_snd_4152_);
if (lean_obj_tag(v___x_4156_) == 0)
{
lean_object* v_a_4157_; lean_object* v___x_4158_; 
v_a_4157_ = lean_ctor_get(v___x_4156_, 0);
lean_inc(v_a_4157_);
lean_dec_ref(v___x_4156_);
v___x_4158_ = l_Lean_Meta_mkLambdaFVars(v_fst_4151_, v_a_4157_, v___x_4153_, v___x_4154_, v___x_4153_, v___x_4154_, v___x_4155_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_);
lean_dec(v___y_4146_);
lean_dec_ref(v___y_4145_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
lean_dec(v_fst_4151_);
return v___x_4158_;
}
else
{
lean_dec(v_fst_4151_);
lean_dec(v___y_4146_);
lean_dec_ref(v___y_4145_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
return v___x_4156_;
}
}
else
{
lean_dec(v___y_4146_);
lean_dec_ref(v___y_4145_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
lean_dec_ref(v_xs_4141_);
lean_dec_ref(v_recArgInfo_4140_);
return v___x_4148_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed(lean_object* v_type_4159_, lean_object* v_recArgInfo_4160_, lean_object* v_xs_4161_, lean_object* v___value_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_){
_start:
{
lean_object* v_res_4168_; 
v_res_4168_ = l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(v_type_4159_, v_recArgInfo_4160_, v_xs_4161_, v___value_4162_, v___y_4163_, v___y_4164_, v___y_4165_, v___y_4166_);
lean_dec_ref(v___value_4162_);
return v_res_4168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive(lean_object* v_recArgInfo_4169_, lean_object* v_value_4170_, lean_object* v_type_4171_, lean_object* v_a_4172_, lean_object* v_a_4173_, lean_object* v_a_4174_, lean_object* v_a_4175_){
_start:
{
lean_object* v___f_4177_; uint8_t v___x_4178_; lean_object* v___x_4179_; 
v___f_4177_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed), 9, 2);
lean_closure_set(v___f_4177_, 0, v_type_4171_);
lean_closure_set(v___f_4177_, 1, v_recArgInfo_4169_);
v___x_4178_ = 0;
v___x_4179_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_4170_, v___f_4177_, v___x_4178_, v_a_4172_, v_a_4173_, v_a_4174_, v_a_4175_);
return v___x_4179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___boxed(lean_object* v_recArgInfo_4180_, lean_object* v_value_4181_, lean_object* v_type_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_){
_start:
{
lean_object* v_res_4188_; 
v_res_4188_ = l_Lean_Elab_Structural_mkBRecOnMotive(v_recArgInfo_4180_, v_value_4181_, v_type_4182_, v_a_4183_, v_a_4184_, v_a_4185_, v_a_4186_);
return v_res_4188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(lean_object* v_type_4189_, lean_object* v_maxFVars_x3f_4190_, lean_object* v_k_4191_, uint8_t v_cleanupAnnotations_4192_, uint8_t v_whnfType_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_){
_start:
{
lean_object* v___f_4199_; lean_object* v___x_4200_; 
v___f_4199_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4199_, 0, v_k_4191_);
v___x_4200_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4189_, v_maxFVars_x3f_4190_, v___f_4199_, v_cleanupAnnotations_4192_, v_whnfType_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_);
if (lean_obj_tag(v___x_4200_) == 0)
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4208_; 
v_a_4201_ = lean_ctor_get(v___x_4200_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v___x_4200_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4203_ = v___x_4200_;
v_isShared_4204_ = v_isSharedCheck_4208_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_4200_);
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
v_reuseFailAlloc_4207_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_4209_; lean_object* v___x_4211_; uint8_t v_isShared_4212_; uint8_t v_isSharedCheck_4216_; 
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg___boxed(lean_object* v_type_4217_, lean_object* v_maxFVars_x3f_4218_, lean_object* v_k_4219_, lean_object* v_cleanupAnnotations_4220_, lean_object* v_whnfType_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4227_; uint8_t v_whnfType_boxed_4228_; lean_object* v_res_4229_; 
v_cleanupAnnotations_boxed_4227_ = lean_unbox(v_cleanupAnnotations_4220_);
v_whnfType_boxed_4228_ = lean_unbox(v_whnfType_4221_);
v_res_4229_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_type_4217_, v_maxFVars_x3f_4218_, v_k_4219_, v_cleanupAnnotations_boxed_4227_, v_whnfType_boxed_4228_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_);
return v_res_4229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(lean_object* v_00_u03b1_4230_, lean_object* v_type_4231_, lean_object* v_maxFVars_x3f_4232_, lean_object* v_k_4233_, uint8_t v_cleanupAnnotations_4234_, uint8_t v_whnfType_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_){
_start:
{
lean_object* v___x_4241_; 
v___x_4241_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_type_4231_, v_maxFVars_x3f_4232_, v_k_4233_, v_cleanupAnnotations_4234_, v_whnfType_4235_, v___y_4236_, v___y_4237_, v___y_4238_, v___y_4239_);
return v___x_4241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___boxed(lean_object* v_00_u03b1_4242_, lean_object* v_type_4243_, lean_object* v_maxFVars_x3f_4244_, lean_object* v_k_4245_, lean_object* v_cleanupAnnotations_4246_, lean_object* v_whnfType_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4253_; uint8_t v_whnfType_boxed_4254_; lean_object* v_res_4255_; 
v_cleanupAnnotations_boxed_4253_ = lean_unbox(v_cleanupAnnotations_4246_);
v_whnfType_boxed_4254_ = lean_unbox(v_whnfType_4247_);
v_res_4255_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(v_00_u03b1_4242_, v_type_4243_, v_maxFVars_x3f_4244_, v_k_4245_, v_cleanupAnnotations_boxed_4253_, v_whnfType_boxed_4254_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_);
return v_res_4255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0(lean_object* v___x_4256_, lean_object* v_recArgInfos_4257_, lean_object* v_positions_4258_, lean_object* v_value_4259_, lean_object* v_fst_4260_, lean_object* v_snd_4261_, lean_object* v_below_4262_, lean_object* v_x_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_){
_start:
{
lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; 
v___x_4269_ = lean_unsigned_to_nat(0u);
v___x_4270_ = lean_array_get_borrowed(v___x_4256_, v_below_4262_, v___x_4269_);
lean_inc(v___y_4267_);
lean_inc_ref(v___y_4266_);
lean_inc(v___y_4265_);
lean_inc_ref(v___y_4264_);
lean_inc(v___x_4270_);
v___x_4271_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(v_recArgInfos_4257_, v_positions_4258_, v___x_4270_, v_value_4259_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_);
if (lean_obj_tag(v___x_4271_) == 0)
{
lean_object* v_a_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; uint8_t v___x_4278_; uint8_t v___x_4279_; uint8_t v___x_4280_; lean_object* v___x_4281_; 
v_a_4272_ = lean_ctor_get(v___x_4271_, 0);
lean_inc(v_a_4272_);
lean_dec_ref(v___x_4271_);
v___x_4273_ = lean_unsigned_to_nat(1u);
v___x_4274_ = lean_mk_empty_array_with_capacity(v___x_4273_);
lean_inc(v___x_4270_);
v___x_4275_ = lean_array_push(v___x_4274_, v___x_4270_);
v___x_4276_ = l_Array_append___redArg(v_fst_4260_, v___x_4275_);
lean_dec_ref(v___x_4275_);
v___x_4277_ = l_Array_append___redArg(v___x_4276_, v_snd_4261_);
v___x_4278_ = 0;
v___x_4279_ = 1;
v___x_4280_ = 1;
v___x_4281_ = l_Lean_Meta_mkLambdaFVars(v___x_4277_, v_a_4272_, v___x_4278_, v___x_4279_, v___x_4278_, v___x_4279_, v___x_4280_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_);
lean_dec(v___y_4267_);
lean_dec_ref(v___y_4266_);
lean_dec(v___y_4265_);
lean_dec_ref(v___y_4264_);
lean_dec_ref(v___x_4277_);
return v___x_4281_;
}
else
{
lean_dec(v___y_4267_);
lean_dec_ref(v___y_4266_);
lean_dec(v___y_4265_);
lean_dec_ref(v___y_4264_);
lean_dec_ref(v_fst_4260_);
return v___x_4271_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed(lean_object* v___x_4282_, lean_object* v_recArgInfos_4283_, lean_object* v_positions_4284_, lean_object* v_value_4285_, lean_object* v_fst_4286_, lean_object* v_snd_4287_, lean_object* v_below_4288_, lean_object* v_x_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_){
_start:
{
lean_object* v_res_4295_; 
v_res_4295_ = l_Lean_Elab_Structural_mkBRecOnF___lam__0(v___x_4282_, v_recArgInfos_4283_, v_positions_4284_, v_value_4285_, v_fst_4286_, v_snd_4287_, v_below_4288_, v_x_4289_, v___y_4290_, v___y_4291_, v___y_4292_, v___y_4293_);
lean_dec_ref(v_x_4289_);
lean_dec_ref(v_below_4288_);
lean_dec_ref(v_snd_4287_);
return v_res_4295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1(lean_object* v_recArgInfo_4298_, lean_object* v_FType_4299_, lean_object* v___x_4300_, lean_object* v_recArgInfos_4301_, lean_object* v_positions_4302_, lean_object* v_xs_4303_, lean_object* v_value_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_){
_start:
{
lean_object* v___x_4310_; lean_object* v_fst_4311_; lean_object* v_snd_4312_; lean_object* v___x_4313_; 
v___x_4310_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_4298_, v_xs_4303_);
v_fst_4311_ = lean_ctor_get(v___x_4310_, 0);
lean_inc(v_fst_4311_);
v_snd_4312_ = lean_ctor_get(v___x_4310_, 1);
lean_inc(v_snd_4312_);
lean_dec_ref(v___x_4310_);
lean_inc(v___y_4308_);
lean_inc_ref(v___y_4307_);
lean_inc(v___y_4306_);
lean_inc_ref(v___y_4305_);
v___x_4313_ = l_Lean_Meta_instantiateForall(v_FType_4299_, v_fst_4311_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_);
if (lean_obj_tag(v___x_4313_) == 0)
{
lean_object* v_a_4314_; lean_object* v___f_4315_; lean_object* v___x_4316_; uint8_t v___x_4317_; lean_object* v___x_4318_; 
v_a_4314_ = lean_ctor_get(v___x_4313_, 0);
lean_inc(v_a_4314_);
lean_dec_ref(v___x_4313_);
v___f_4315_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed), 13, 6);
lean_closure_set(v___f_4315_, 0, v___x_4300_);
lean_closure_set(v___f_4315_, 1, v_recArgInfos_4301_);
lean_closure_set(v___f_4315_, 2, v_positions_4302_);
lean_closure_set(v___f_4315_, 3, v_value_4304_);
lean_closure_set(v___f_4315_, 4, v_fst_4311_);
lean_closure_set(v___f_4315_, 5, v_snd_4312_);
v___x_4316_ = ((lean_object*)(l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0));
v___x_4317_ = 0;
v___x_4318_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_a_4314_, v___x_4316_, v___f_4315_, v___x_4317_, v___x_4317_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_);
return v___x_4318_;
}
else
{
lean_dec(v_snd_4312_);
lean_dec(v_fst_4311_);
lean_dec(v___y_4308_);
lean_dec_ref(v___y_4307_);
lean_dec(v___y_4306_);
lean_dec_ref(v___y_4305_);
lean_dec_ref(v_value_4304_);
lean_dec_ref(v_positions_4302_);
lean_dec_ref(v_recArgInfos_4301_);
lean_dec_ref(v___x_4300_);
return v___x_4313_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed(lean_object* v_recArgInfo_4319_, lean_object* v_FType_4320_, lean_object* v___x_4321_, lean_object* v_recArgInfos_4322_, lean_object* v_positions_4323_, lean_object* v_xs_4324_, lean_object* v_value_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_){
_start:
{
lean_object* v_res_4331_; 
v_res_4331_ = l_Lean_Elab_Structural_mkBRecOnF___lam__1(v_recArgInfo_4319_, v_FType_4320_, v___x_4321_, v_recArgInfos_4322_, v_positions_4323_, v_xs_4324_, v_value_4325_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF(lean_object* v_recArgInfos_4332_, lean_object* v_positions_4333_, lean_object* v_recArgInfo_4334_, lean_object* v_value_4335_, lean_object* v_FType_4336_, lean_object* v_a_4337_, lean_object* v_a_4338_, lean_object* v_a_4339_, lean_object* v_a_4340_){
_start:
{
lean_object* v___x_4342_; lean_object* v___f_4343_; uint8_t v___x_4344_; lean_object* v___x_4345_; 
v___x_4342_ = l_Lean_instInhabitedExpr;
v___f_4343_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed), 12, 5);
lean_closure_set(v___f_4343_, 0, v_recArgInfo_4334_);
lean_closure_set(v___f_4343_, 1, v_FType_4336_);
lean_closure_set(v___f_4343_, 2, v___x_4342_);
lean_closure_set(v___f_4343_, 3, v_recArgInfos_4332_);
lean_closure_set(v___f_4343_, 4, v_positions_4333_);
v___x_4344_ = 0;
v___x_4345_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_4335_, v___f_4343_, v___x_4344_, v_a_4337_, v_a_4338_, v_a_4339_, v_a_4340_);
return v___x_4345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___boxed(lean_object* v_recArgInfos_4346_, lean_object* v_positions_4347_, lean_object* v_recArgInfo_4348_, lean_object* v_value_4349_, lean_object* v_FType_4350_, lean_object* v_a_4351_, lean_object* v_a_4352_, lean_object* v_a_4353_, lean_object* v_a_4354_, lean_object* v_a_4355_){
_start:
{
lean_object* v_res_4356_; 
v_res_4356_ = l_Lean_Elab_Structural_mkBRecOnF(v_recArgInfos_4346_, v_positions_4347_, v_recArgInfo_4348_, v_value_4349_, v_FType_4350_, v_a_4351_, v_a_4352_, v_a_4353_, v_a_4354_);
return v_res_4356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0(lean_object* v_toIndGroupInfo_4357_, lean_object* v_params_4358_, uint8_t v_isIndPred_4359_, lean_object* v_brecOnUniv_4360_, lean_object* v_levels_4361_, lean_object* v_idx_4362_){
_start:
{
lean_object* v_n_4363_; lean_object* v___y_4365_; 
v_n_4363_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_toIndGroupInfo_4357_, v_idx_4362_);
if (v_isIndPred_4359_ == 0)
{
lean_object* v___x_4368_; 
v___x_4368_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4368_, 0, v_brecOnUniv_4360_);
lean_ctor_set(v___x_4368_, 1, v_levels_4361_);
v___y_4365_ = v___x_4368_;
goto v___jp_4364_;
}
else
{
lean_dec(v_brecOnUniv_4360_);
v___y_4365_ = v_levels_4361_;
goto v___jp_4364_;
}
v___jp_4364_:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; 
v___x_4366_ = l_Lean_Expr_const___override(v_n_4363_, v___y_4365_);
v___x_4367_ = l_Lean_mkAppN(v___x_4366_, v_params_4358_);
return v___x_4367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed(lean_object* v_toIndGroupInfo_4369_, lean_object* v_params_4370_, lean_object* v_isIndPred_4371_, lean_object* v_brecOnUniv_4372_, lean_object* v_levels_4373_, lean_object* v_idx_4374_){
_start:
{
uint8_t v_isIndPred_boxed_4375_; lean_object* v_res_4376_; 
v_isIndPred_boxed_4375_ = lean_unbox(v_isIndPred_4371_);
v_res_4376_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__0(v_toIndGroupInfo_4369_, v_params_4370_, v_isIndPred_boxed_4375_, v_brecOnUniv_4372_, v_levels_4373_, v_idx_4374_);
lean_dec(v_idx_4374_);
lean_dec_ref(v_params_4370_);
lean_dec_ref(v_toIndGroupInfo_4369_);
return v_res_4376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1(lean_object* v_brecOnCons_4377_, lean_object* v_a_4378_, lean_object* v_n_4379_){
_start:
{
lean_object* v___x_4380_; lean_object* v___x_4381_; 
v___x_4380_ = lean_apply_1(v_brecOnCons_4377_, v_n_4379_);
v___x_4381_ = l_Lean_mkAppN(v___x_4380_, v_a_4378_);
return v___x_4381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed(lean_object* v_brecOnCons_4382_, lean_object* v_a_4383_, lean_object* v_n_4384_){
_start:
{
lean_object* v_res_4385_; 
v_res_4385_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__1(v_brecOnCons_4382_, v_a_4383_, v_n_4384_);
lean_dec_ref(v_a_4383_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2(lean_object* v_x_4386_, lean_object* v_type_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_){
_start:
{
lean_object* v___x_4393_; 
v___x_4393_ = l_Lean_Meta_getLevel(v_type_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_);
return v___x_4393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2___boxed(lean_object* v_x_4394_, lean_object* v_type_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_){
_start:
{
lean_object* v_res_4401_; 
v_res_4401_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__2(v_x_4394_, v_type_4395_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_);
lean_dec_ref(v_x_4394_);
return v_res_4401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg(lean_object* v_inst_4402_, lean_object* v_xs_4403_, size_t v_sz_4404_, size_t v_i_4405_, lean_object* v_bs_4406_){
_start:
{
uint8_t v___x_4407_; 
v___x_4407_ = lean_usize_dec_lt(v_i_4405_, v_sz_4404_);
if (v___x_4407_ == 0)
{
lean_dec(v_inst_4402_);
return v_bs_4406_;
}
else
{
lean_object* v_v_4408_; lean_object* v___x_4409_; lean_object* v_bs_x27_4410_; lean_object* v___x_4411_; size_t v___x_4412_; size_t v___x_4413_; lean_object* v___x_4414_; 
v_v_4408_ = lean_array_uget(v_bs_4406_, v_i_4405_);
v___x_4409_ = lean_unsigned_to_nat(0u);
v_bs_x27_4410_ = lean_array_uset(v_bs_4406_, v_i_4405_, v___x_4409_);
lean_inc(v_inst_4402_);
v___x_4411_ = lean_array_get_borrowed(v_inst_4402_, v_xs_4403_, v_v_4408_);
lean_dec(v_v_4408_);
v___x_4412_ = ((size_t)1ULL);
v___x_4413_ = lean_usize_add(v_i_4405_, v___x_4412_);
lean_inc(v___x_4411_);
v___x_4414_ = lean_array_uset(v_bs_x27_4410_, v_i_4405_, v___x_4411_);
v_i_4405_ = v___x_4413_;
v_bs_4406_ = v___x_4414_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg___boxed(lean_object* v_inst_4416_, lean_object* v_xs_4417_, lean_object* v_sz_4418_, lean_object* v_i_4419_, lean_object* v_bs_4420_){
_start:
{
size_t v_sz_boxed_4421_; size_t v_i_boxed_4422_; lean_object* v_res_4423_; 
v_sz_boxed_4421_ = lean_unbox_usize(v_sz_4418_);
lean_dec(v_sz_4418_);
v_i_boxed_4422_ = lean_unbox_usize(v_i_4419_);
lean_dec(v_i_4419_);
v_res_4423_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg(v_inst_4416_, v_xs_4417_, v_sz_boxed_4421_, v_i_boxed_4422_, v_bs_4420_);
lean_dec_ref(v_xs_4417_);
return v_res_4423_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(lean_object* v_inst_4424_, lean_object* v_xs_4425_, lean_object* v_f_4426_, lean_object* v_as_4427_, lean_object* v_bs_4428_, lean_object* v_i_4429_, lean_object* v_cs_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_){
_start:
{
lean_object* v___x_4436_; uint8_t v___x_4437_; 
v___x_4436_ = lean_array_get_size(v_as_4427_);
v___x_4437_ = lean_nat_dec_lt(v_i_4429_, v___x_4436_);
if (v___x_4437_ == 0)
{
lean_object* v___x_4438_; 
lean_dec(v___y_4434_);
lean_dec_ref(v___y_4433_);
lean_dec(v___y_4432_);
lean_dec_ref(v___y_4431_);
lean_dec(v_i_4429_);
lean_dec_ref(v_f_4426_);
lean_dec(v_inst_4424_);
v___x_4438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4438_, 0, v_cs_4430_);
return v___x_4438_;
}
else
{
lean_object* v___x_4439_; uint8_t v___x_4440_; 
v___x_4439_ = lean_array_get_size(v_bs_4428_);
v___x_4440_ = lean_nat_dec_lt(v_i_4429_, v___x_4439_);
if (v___x_4440_ == 0)
{
lean_object* v___x_4441_; 
lean_dec(v___y_4434_);
lean_dec_ref(v___y_4433_);
lean_dec(v___y_4432_);
lean_dec_ref(v___y_4431_);
lean_dec(v_i_4429_);
lean_dec_ref(v_f_4426_);
lean_dec(v_inst_4424_);
v___x_4441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4441_, 0, v_cs_4430_);
return v___x_4441_;
}
else
{
lean_object* v_a_4442_; lean_object* v_b_4443_; size_t v_sz_4444_; size_t v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; 
v_a_4442_ = lean_array_fget_borrowed(v_as_4427_, v_i_4429_);
v_b_4443_ = lean_array_fget_borrowed(v_bs_4428_, v_i_4429_);
v_sz_4444_ = lean_array_size(v_b_4443_);
v___x_4445_ = ((size_t)0ULL);
lean_inc(v_b_4443_);
lean_inc(v_inst_4424_);
v___x_4446_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg(v_inst_4424_, v_xs_4425_, v_sz_4444_, v___x_4445_, v_b_4443_);
lean_inc_ref(v_f_4426_);
lean_inc(v___y_4434_);
lean_inc_ref(v___y_4433_);
lean_inc(v___y_4432_);
lean_inc_ref(v___y_4431_);
lean_inc(v_a_4442_);
v___x_4447_ = lean_apply_7(v_f_4426_, v_a_4442_, v___x_4446_, v___y_4431_, v___y_4432_, v___y_4433_, v___y_4434_, lean_box(0));
if (lean_obj_tag(v___x_4447_) == 0)
{
lean_object* v_a_4448_; lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; 
v_a_4448_ = lean_ctor_get(v___x_4447_, 0);
lean_inc(v_a_4448_);
lean_dec_ref(v___x_4447_);
v___x_4449_ = lean_unsigned_to_nat(1u);
v___x_4450_ = lean_nat_add(v_i_4429_, v___x_4449_);
lean_dec(v_i_4429_);
v___x_4451_ = lean_array_push(v_cs_4430_, v_a_4448_);
v_i_4429_ = v___x_4450_;
v_cs_4430_ = v___x_4451_;
goto _start;
}
else
{
lean_object* v_a_4453_; lean_object* v___x_4455_; uint8_t v_isShared_4456_; uint8_t v_isSharedCheck_4460_; 
lean_dec(v___y_4434_);
lean_dec_ref(v___y_4433_);
lean_dec(v___y_4432_);
lean_dec_ref(v___y_4431_);
lean_dec_ref(v_cs_4430_);
lean_dec(v_i_4429_);
lean_dec_ref(v_f_4426_);
lean_dec(v_inst_4424_);
v_a_4453_ = lean_ctor_get(v___x_4447_, 0);
v_isSharedCheck_4460_ = !lean_is_exclusive(v___x_4447_);
if (v_isSharedCheck_4460_ == 0)
{
v___x_4455_ = v___x_4447_;
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
else
{
lean_inc(v_a_4453_);
lean_dec(v___x_4447_);
v___x_4455_ = lean_box(0);
v_isShared_4456_ = v_isSharedCheck_4460_;
goto v_resetjp_4454_;
}
v_resetjp_4454_:
{
lean_object* v___x_4458_; 
if (v_isShared_4456_ == 0)
{
v___x_4458_ = v___x_4455_;
goto v_reusejp_4457_;
}
else
{
lean_object* v_reuseFailAlloc_4459_; 
v_reuseFailAlloc_4459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4459_, 0, v_a_4453_);
v___x_4458_ = v_reuseFailAlloc_4459_;
goto v_reusejp_4457_;
}
v_reusejp_4457_:
{
return v___x_4458_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg___boxed(lean_object* v_inst_4461_, lean_object* v_xs_4462_, lean_object* v_f_4463_, lean_object* v_as_4464_, lean_object* v_bs_4465_, lean_object* v_i_4466_, lean_object* v_cs_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_){
_start:
{
lean_object* v_res_4473_; 
v_res_4473_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_inst_4461_, v_xs_4462_, v_f_4463_, v_as_4464_, v_bs_4465_, v_i_4466_, v_cs_4467_, v___y_4468_, v___y_4469_, v___y_4470_, v___y_4471_);
lean_dec_ref(v_bs_4465_);
lean_dec_ref(v_as_4464_);
lean_dec_ref(v_xs_4462_);
return v_res_4473_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_4474_; 
v___x_4474_ = l_Array_instInhabited(lean_box(0));
return v___x_4474_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(lean_object* v_msg_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_){
_start:
{
lean_object* v___x_4481_; lean_object* v_toApplicative_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4543_; 
v___x_4481_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_4482_ = lean_ctor_get(v___x_4481_, 0);
v_isSharedCheck_4543_ = !lean_is_exclusive(v___x_4481_);
if (v_isSharedCheck_4543_ == 0)
{
lean_object* v_unused_4544_; 
v_unused_4544_ = lean_ctor_get(v___x_4481_, 1);
lean_dec(v_unused_4544_);
v___x_4484_ = v___x_4481_;
v_isShared_4485_ = v_isSharedCheck_4543_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_toApplicative_4482_);
lean_dec(v___x_4481_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4543_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v_toFunctor_4486_; lean_object* v_toSeq_4487_; lean_object* v_toSeqLeft_4488_; lean_object* v_toSeqRight_4489_; lean_object* v___x_4491_; uint8_t v_isShared_4492_; uint8_t v_isSharedCheck_4541_; 
v_toFunctor_4486_ = lean_ctor_get(v_toApplicative_4482_, 0);
v_toSeq_4487_ = lean_ctor_get(v_toApplicative_4482_, 2);
v_toSeqLeft_4488_ = lean_ctor_get(v_toApplicative_4482_, 3);
v_toSeqRight_4489_ = lean_ctor_get(v_toApplicative_4482_, 4);
v_isSharedCheck_4541_ = !lean_is_exclusive(v_toApplicative_4482_);
if (v_isSharedCheck_4541_ == 0)
{
lean_object* v_unused_4542_; 
v_unused_4542_ = lean_ctor_get(v_toApplicative_4482_, 1);
lean_dec(v_unused_4542_);
v___x_4491_ = v_toApplicative_4482_;
v_isShared_4492_ = v_isSharedCheck_4541_;
goto v_resetjp_4490_;
}
else
{
lean_inc(v_toSeqRight_4489_);
lean_inc(v_toSeqLeft_4488_);
lean_inc(v_toSeq_4487_);
lean_inc(v_toFunctor_4486_);
lean_dec(v_toApplicative_4482_);
v___x_4491_ = lean_box(0);
v_isShared_4492_ = v_isSharedCheck_4541_;
goto v_resetjp_4490_;
}
v_resetjp_4490_:
{
lean_object* v___f_4493_; lean_object* v___f_4494_; lean_object* v___f_4495_; lean_object* v___f_4496_; lean_object* v___x_4497_; lean_object* v___f_4498_; lean_object* v___f_4499_; lean_object* v___f_4500_; lean_object* v___x_4502_; 
v___f_4493_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2));
v___f_4494_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3));
lean_inc_ref(v_toFunctor_4486_);
v___f_4495_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4495_, 0, v_toFunctor_4486_);
v___f_4496_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4496_, 0, v_toFunctor_4486_);
v___x_4497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4497_, 0, v___f_4495_);
lean_ctor_set(v___x_4497_, 1, v___f_4496_);
v___f_4498_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4498_, 0, v_toSeqRight_4489_);
v___f_4499_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4499_, 0, v_toSeqLeft_4488_);
v___f_4500_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4500_, 0, v_toSeq_4487_);
if (v_isShared_4492_ == 0)
{
lean_ctor_set(v___x_4491_, 4, v___f_4498_);
lean_ctor_set(v___x_4491_, 3, v___f_4499_);
lean_ctor_set(v___x_4491_, 2, v___f_4500_);
lean_ctor_set(v___x_4491_, 1, v___f_4493_);
lean_ctor_set(v___x_4491_, 0, v___x_4497_);
v___x_4502_ = v___x_4491_;
goto v_reusejp_4501_;
}
else
{
lean_object* v_reuseFailAlloc_4540_; 
v_reuseFailAlloc_4540_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4540_, 0, v___x_4497_);
lean_ctor_set(v_reuseFailAlloc_4540_, 1, v___f_4493_);
lean_ctor_set(v_reuseFailAlloc_4540_, 2, v___f_4500_);
lean_ctor_set(v_reuseFailAlloc_4540_, 3, v___f_4499_);
lean_ctor_set(v_reuseFailAlloc_4540_, 4, v___f_4498_);
v___x_4502_ = v_reuseFailAlloc_4540_;
goto v_reusejp_4501_;
}
v_reusejp_4501_:
{
lean_object* v___x_4504_; 
if (v_isShared_4485_ == 0)
{
lean_ctor_set(v___x_4484_, 1, v___f_4494_);
lean_ctor_set(v___x_4484_, 0, v___x_4502_);
v___x_4504_ = v___x_4484_;
goto v_reusejp_4503_;
}
else
{
lean_object* v_reuseFailAlloc_4539_; 
v_reuseFailAlloc_4539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4539_, 0, v___x_4502_);
lean_ctor_set(v_reuseFailAlloc_4539_, 1, v___f_4494_);
v___x_4504_ = v_reuseFailAlloc_4539_;
goto v_reusejp_4503_;
}
v_reusejp_4503_:
{
lean_object* v___x_4505_; lean_object* v_toApplicative_4506_; lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4537_; 
v___x_4505_ = l_StateRefT_x27_instMonad___redArg(v___x_4504_);
v_toApplicative_4506_ = lean_ctor_get(v___x_4505_, 0);
v_isSharedCheck_4537_ = !lean_is_exclusive(v___x_4505_);
if (v_isSharedCheck_4537_ == 0)
{
lean_object* v_unused_4538_; 
v_unused_4538_ = lean_ctor_get(v___x_4505_, 1);
lean_dec(v_unused_4538_);
v___x_4508_ = v___x_4505_;
v_isShared_4509_ = v_isSharedCheck_4537_;
goto v_resetjp_4507_;
}
else
{
lean_inc(v_toApplicative_4506_);
lean_dec(v___x_4505_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4537_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v_toFunctor_4510_; lean_object* v_toSeq_4511_; lean_object* v_toSeqLeft_4512_; lean_object* v_toSeqRight_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4535_; 
v_toFunctor_4510_ = lean_ctor_get(v_toApplicative_4506_, 0);
v_toSeq_4511_ = lean_ctor_get(v_toApplicative_4506_, 2);
v_toSeqLeft_4512_ = lean_ctor_get(v_toApplicative_4506_, 3);
v_toSeqRight_4513_ = lean_ctor_get(v_toApplicative_4506_, 4);
v_isSharedCheck_4535_ = !lean_is_exclusive(v_toApplicative_4506_);
if (v_isSharedCheck_4535_ == 0)
{
lean_object* v_unused_4536_; 
v_unused_4536_ = lean_ctor_get(v_toApplicative_4506_, 1);
lean_dec(v_unused_4536_);
v___x_4515_ = v_toApplicative_4506_;
v_isShared_4516_ = v_isSharedCheck_4535_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_toSeqRight_4513_);
lean_inc(v_toSeqLeft_4512_);
lean_inc(v_toSeq_4511_);
lean_inc(v_toFunctor_4510_);
lean_dec(v_toApplicative_4506_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4535_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___f_4517_; lean_object* v___f_4518_; lean_object* v___f_4519_; lean_object* v___f_4520_; lean_object* v___x_4521_; lean_object* v___f_4522_; lean_object* v___f_4523_; lean_object* v___f_4524_; lean_object* v___x_4526_; 
v___f_4517_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4));
v___f_4518_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5));
lean_inc_ref(v_toFunctor_4510_);
v___f_4519_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4519_, 0, v_toFunctor_4510_);
v___f_4520_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4520_, 0, v_toFunctor_4510_);
v___x_4521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4521_, 0, v___f_4519_);
lean_ctor_set(v___x_4521_, 1, v___f_4520_);
v___f_4522_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4522_, 0, v_toSeqRight_4513_);
v___f_4523_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4523_, 0, v_toSeqLeft_4512_);
v___f_4524_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4524_, 0, v_toSeq_4511_);
if (v_isShared_4516_ == 0)
{
lean_ctor_set(v___x_4515_, 4, v___f_4522_);
lean_ctor_set(v___x_4515_, 3, v___f_4523_);
lean_ctor_set(v___x_4515_, 2, v___f_4524_);
lean_ctor_set(v___x_4515_, 1, v___f_4517_);
lean_ctor_set(v___x_4515_, 0, v___x_4521_);
v___x_4526_ = v___x_4515_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4534_; 
v_reuseFailAlloc_4534_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4534_, 0, v___x_4521_);
lean_ctor_set(v_reuseFailAlloc_4534_, 1, v___f_4517_);
lean_ctor_set(v_reuseFailAlloc_4534_, 2, v___f_4524_);
lean_ctor_set(v_reuseFailAlloc_4534_, 3, v___f_4523_);
lean_ctor_set(v_reuseFailAlloc_4534_, 4, v___f_4522_);
v___x_4526_ = v_reuseFailAlloc_4534_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
lean_object* v___x_4528_; 
if (v_isShared_4509_ == 0)
{
lean_ctor_set(v___x_4508_, 1, v___f_4518_);
lean_ctor_set(v___x_4508_, 0, v___x_4526_);
v___x_4528_ = v___x_4508_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4533_; 
v_reuseFailAlloc_4533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4533_, 0, v___x_4526_);
lean_ctor_set(v_reuseFailAlloc_4533_, 1, v___f_4518_);
v___x_4528_ = v_reuseFailAlloc_4533_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_944__overap_4531_; lean_object* v___x_4532_; 
v___x_4529_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0, &l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0);
v___x_4530_ = l_instInhabitedOfMonad___redArg(v___x_4528_, v___x_4529_);
v___x_944__overap_4531_ = lean_panic_fn(v___x_4530_, v_msg_4475_);
v___x_4532_ = lean_apply_5(v___x_944__overap_4531_, v___y_4476_, v___y_4477_, v___y_4478_, v___y_4479_, lean_box(0));
return v___x_4532_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___boxed(lean_object* v_msg_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_){
_start:
{
lean_object* v_res_4551_; 
v_res_4551_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v_msg_4545_, v___y_4546_, v___y_4547_, v___y_4548_, v___y_4549_);
return v_res_4551_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; 
v___x_4555_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2));
v___x_4556_ = lean_unsigned_to_nat(2u);
v___x_4557_ = lean_unsigned_to_nat(73u);
v___x_4558_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1));
v___x_4559_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0));
v___x_4560_ = l_mkPanicMessageWithDecl(v___x_4559_, v___x_4558_, v___x_4557_, v___x_4556_, v___x_4555_);
return v___x_4560_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v___x_4562_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4));
v___x_4563_ = lean_unsigned_to_nat(2u);
v___x_4564_ = lean_unsigned_to_nat(74u);
v___x_4565_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1));
v___x_4566_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0));
v___x_4567_ = l_mkPanicMessageWithDecl(v___x_4566_, v___x_4565_, v___x_4564_, v___x_4563_, v___x_4562_);
return v___x_4567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(lean_object* v_inst_4570_, lean_object* v_f_4571_, lean_object* v_positions_4572_, lean_object* v_ys_4573_, lean_object* v_xs_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_){
_start:
{
lean_object* v___x_4580_; lean_object* v___x_4581_; uint8_t v___x_4582_; 
v___x_4580_ = lean_array_get_size(v_positions_4572_);
v___x_4581_ = lean_array_get_size(v_ys_4573_);
v___x_4582_ = lean_nat_dec_eq(v___x_4580_, v___x_4581_);
if (v___x_4582_ == 0)
{
lean_object* v___x_4583_; lean_object* v___x_4584_; 
lean_dec_ref(v_f_4571_);
lean_dec(v_inst_4570_);
v___x_4583_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3);
v___x_4584_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v___x_4583_, v___y_4575_, v___y_4576_, v___y_4577_, v___y_4578_);
return v___x_4584_;
}
else
{
lean_object* v___x_4585_; lean_object* v___x_4586_; uint8_t v___x_4587_; 
v___x_4585_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_4572_);
v___x_4586_ = lean_array_get_size(v_xs_4574_);
v___x_4587_ = lean_nat_dec_eq(v___x_4585_, v___x_4586_);
lean_dec(v___x_4585_);
if (v___x_4587_ == 0)
{
lean_object* v___x_4588_; lean_object* v___x_4589_; 
lean_dec_ref(v_f_4571_);
lean_dec(v_inst_4570_);
v___x_4588_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5);
v___x_4589_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v___x_4588_, v___y_4575_, v___y_4576_, v___y_4577_, v___y_4578_);
return v___x_4589_;
}
else
{
lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; 
v___x_4590_ = lean_unsigned_to_nat(0u);
v___x_4591_ = ((lean_object*)(l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6));
v___x_4592_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_inst_4570_, v_xs_4574_, v_f_4571_, v_ys_4573_, v_positions_4572_, v___x_4590_, v___x_4591_, v___y_4575_, v___y_4576_, v___y_4577_, v___y_4578_);
return v___x_4592_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___boxed(lean_object* v_inst_4593_, lean_object* v_f_4594_, lean_object* v_positions_4595_, lean_object* v_ys_4596_, lean_object* v_xs_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_){
_start:
{
lean_object* v_res_4603_; 
v_res_4603_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v_inst_4593_, v_f_4594_, v_positions_4595_, v_ys_4596_, v_xs_4597_, v___y_4598_, v___y_4599_, v___y_4600_, v___y_4601_);
lean_dec_ref(v_xs_4597_);
lean_dec_ref(v_ys_4596_);
lean_dec_ref(v_positions_4595_);
return v_res_4603_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1(void){
_start:
{
lean_object* v___x_4605_; lean_object* v___x_4606_; 
v___x_4605_ = lean_unsigned_to_nat(0u);
v___x_4606_ = l_Lean_Level_ofNat(v___x_4605_);
return v___x_4606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst(lean_object* v_recArgInfos_4607_, lean_object* v_positions_4608_, lean_object* v_motives_4609_, uint8_t v_isIndPred_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_){
_start:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v_indGroupInst_4619_; lean_object* v___x_4620_; lean_object* v_brecOnUniv_4622_; lean_object* v___y_4623_; lean_object* v___y_4624_; lean_object* v___y_4625_; lean_object* v___y_4626_; 
v___x_4616_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_4617_ = lean_unsigned_to_nat(0u);
v___x_4618_ = lean_array_get_borrowed(v___x_4616_, v_recArgInfos_4607_, v___x_4617_);
v_indGroupInst_4619_ = lean_ctor_get(v___x_4618_, 4);
v___x_4620_ = l_Lean_instInhabitedExpr;
if (v_isIndPred_4610_ == 0)
{
lean_object* v___f_4663_; lean_object* v_motive_4664_; lean_object* v___x_4665_; 
v___f_4663_ = ((lean_object*)(l_Lean_Elab_Structural_mkBRecOnConst___closed__0));
v_motive_4664_ = lean_array_get_borrowed(v___x_4620_, v_motives_4609_, v___x_4617_);
lean_inc(v_a_4614_);
lean_inc_ref(v_a_4613_);
lean_inc(v_a_4612_);
lean_inc_ref(v_a_4611_);
lean_inc(v_motive_4664_);
v___x_4665_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_motive_4664_, v___f_4663_, v_isIndPred_4610_, v_a_4611_, v_a_4612_, v_a_4613_, v_a_4614_);
if (lean_obj_tag(v___x_4665_) == 0)
{
lean_object* v_a_4666_; 
v_a_4666_ = lean_ctor_get(v___x_4665_, 0);
lean_inc(v_a_4666_);
lean_dec_ref(v___x_4665_);
v_brecOnUniv_4622_ = v_a_4666_;
v___y_4623_ = v_a_4611_;
v___y_4624_ = v_a_4612_;
v___y_4625_ = v_a_4613_;
v___y_4626_ = v_a_4614_;
goto v___jp_4621_;
}
else
{
lean_object* v_a_4667_; lean_object* v___x_4669_; uint8_t v_isShared_4670_; uint8_t v_isSharedCheck_4674_; 
lean_dec(v_a_4614_);
lean_dec_ref(v_a_4613_);
lean_dec(v_a_4612_);
lean_dec_ref(v_a_4611_);
v_a_4667_ = lean_ctor_get(v___x_4665_, 0);
v_isSharedCheck_4674_ = !lean_is_exclusive(v___x_4665_);
if (v_isSharedCheck_4674_ == 0)
{
v___x_4669_ = v___x_4665_;
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
else
{
lean_inc(v_a_4667_);
lean_dec(v___x_4665_);
v___x_4669_ = lean_box(0);
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
v_resetjp_4668_:
{
lean_object* v___x_4672_; 
if (v_isShared_4670_ == 0)
{
v___x_4672_ = v___x_4669_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v_a_4667_);
v___x_4672_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
return v___x_4672_;
}
}
}
}
else
{
lean_object* v___x_4675_; 
v___x_4675_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnConst___closed__1, &l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1);
v_brecOnUniv_4622_ = v___x_4675_;
v___y_4623_ = v_a_4611_;
v___y_4624_ = v_a_4612_;
v___y_4625_ = v_a_4613_;
v___y_4626_ = v_a_4614_;
goto v___jp_4621_;
}
v___jp_4621_:
{
lean_object* v_toIndGroupInfo_4627_; lean_object* v_levels_4628_; lean_object* v_params_4629_; lean_object* v___x_4630_; lean_object* v_brecOnCons_4631_; lean_object* v_brecOnAux_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; 
v_toIndGroupInfo_4627_ = lean_ctor_get(v_indGroupInst_4619_, 0);
v_levels_4628_ = lean_ctor_get(v_indGroupInst_4619_, 1);
v_params_4629_ = lean_ctor_get(v_indGroupInst_4619_, 2);
v___x_4630_ = lean_box(v_isIndPred_4610_);
lean_inc(v_levels_4628_);
lean_inc(v_brecOnUniv_4622_);
lean_inc_ref(v_params_4629_);
lean_inc_ref(v_toIndGroupInfo_4627_);
v_brecOnCons_4631_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed), 6, 5);
lean_closure_set(v_brecOnCons_4631_, 0, v_toIndGroupInfo_4627_);
lean_closure_set(v_brecOnCons_4631_, 1, v_params_4629_);
lean_closure_set(v_brecOnCons_4631_, 2, v___x_4630_);
lean_closure_set(v_brecOnCons_4631_, 3, v_brecOnUniv_4622_);
lean_closure_set(v_brecOnCons_4631_, 4, v_levels_4628_);
lean_inc(v_levels_4628_);
v_brecOnAux_4632_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__0(v_toIndGroupInfo_4627_, v_params_4629_, v_isIndPred_4610_, v_brecOnUniv_4622_, v_levels_4628_, v___x_4617_);
v___x_4633_ = l_Lean_Elab_Structural_IndGroupInfo_numMotives(v_toIndGroupInfo_4627_);
lean_inc(v___y_4626_);
lean_inc_ref(v___y_4625_);
lean_inc(v___y_4624_);
lean_inc_ref(v___y_4623_);
v___x_4634_ = l_Lean_Meta_inferArgumentTypesN(v___x_4633_, v_brecOnAux_4632_, v___y_4623_, v___y_4624_, v___y_4625_, v___y_4626_);
if (lean_obj_tag(v___x_4634_) == 0)
{
lean_object* v_a_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; 
v_a_4635_ = lean_ctor_get(v___x_4634_, 0);
lean_inc(v_a_4635_);
lean_dec_ref(v___x_4634_);
v___x_4636_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___closed__0));
v___x_4637_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v___x_4620_, v___x_4636_, v_positions_4608_, v_a_4635_, v_motives_4609_, v___y_4623_, v___y_4624_, v___y_4625_, v___y_4626_);
lean_dec(v_a_4635_);
if (lean_obj_tag(v___x_4637_) == 0)
{
lean_object* v_a_4638_; lean_object* v___x_4640_; uint8_t v_isShared_4641_; uint8_t v_isSharedCheck_4646_; 
v_a_4638_ = lean_ctor_get(v___x_4637_, 0);
v_isSharedCheck_4646_ = !lean_is_exclusive(v___x_4637_);
if (v_isSharedCheck_4646_ == 0)
{
v___x_4640_ = v___x_4637_;
v_isShared_4641_ = v_isSharedCheck_4646_;
goto v_resetjp_4639_;
}
else
{
lean_inc(v_a_4638_);
lean_dec(v___x_4637_);
v___x_4640_ = lean_box(0);
v_isShared_4641_ = v_isSharedCheck_4646_;
goto v_resetjp_4639_;
}
v_resetjp_4639_:
{
lean_object* v___f_4642_; lean_object* v___x_4644_; 
v___f_4642_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed), 3, 2);
lean_closure_set(v___f_4642_, 0, v_brecOnCons_4631_);
lean_closure_set(v___f_4642_, 1, v_a_4638_);
if (v_isShared_4641_ == 0)
{
lean_ctor_set(v___x_4640_, 0, v___f_4642_);
v___x_4644_ = v___x_4640_;
goto v_reusejp_4643_;
}
else
{
lean_object* v_reuseFailAlloc_4645_; 
v_reuseFailAlloc_4645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4645_, 0, v___f_4642_);
v___x_4644_ = v_reuseFailAlloc_4645_;
goto v_reusejp_4643_;
}
v_reusejp_4643_:
{
return v___x_4644_;
}
}
}
else
{
lean_object* v_a_4647_; lean_object* v___x_4649_; uint8_t v_isShared_4650_; uint8_t v_isSharedCheck_4654_; 
lean_dec_ref(v_brecOnCons_4631_);
v_a_4647_ = lean_ctor_get(v___x_4637_, 0);
v_isSharedCheck_4654_ = !lean_is_exclusive(v___x_4637_);
if (v_isSharedCheck_4654_ == 0)
{
v___x_4649_ = v___x_4637_;
v_isShared_4650_ = v_isSharedCheck_4654_;
goto v_resetjp_4648_;
}
else
{
lean_inc(v_a_4647_);
lean_dec(v___x_4637_);
v___x_4649_ = lean_box(0);
v_isShared_4650_ = v_isSharedCheck_4654_;
goto v_resetjp_4648_;
}
v_resetjp_4648_:
{
lean_object* v___x_4652_; 
if (v_isShared_4650_ == 0)
{
v___x_4652_ = v___x_4649_;
goto v_reusejp_4651_;
}
else
{
lean_object* v_reuseFailAlloc_4653_; 
v_reuseFailAlloc_4653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4653_, 0, v_a_4647_);
v___x_4652_ = v_reuseFailAlloc_4653_;
goto v_reusejp_4651_;
}
v_reusejp_4651_:
{
return v___x_4652_;
}
}
}
}
else
{
lean_object* v_a_4655_; lean_object* v___x_4657_; uint8_t v_isShared_4658_; uint8_t v_isSharedCheck_4662_; 
lean_dec_ref(v_brecOnCons_4631_);
lean_dec(v___y_4626_);
lean_dec_ref(v___y_4625_);
lean_dec(v___y_4624_);
lean_dec_ref(v___y_4623_);
v_a_4655_ = lean_ctor_get(v___x_4634_, 0);
v_isSharedCheck_4662_ = !lean_is_exclusive(v___x_4634_);
if (v_isSharedCheck_4662_ == 0)
{
v___x_4657_ = v___x_4634_;
v_isShared_4658_ = v_isSharedCheck_4662_;
goto v_resetjp_4656_;
}
else
{
lean_inc(v_a_4655_);
lean_dec(v___x_4634_);
v___x_4657_ = lean_box(0);
v_isShared_4658_ = v_isSharedCheck_4662_;
goto v_resetjp_4656_;
}
v_resetjp_4656_:
{
lean_object* v___x_4660_; 
if (v_isShared_4658_ == 0)
{
v___x_4660_ = v___x_4657_;
goto v_reusejp_4659_;
}
else
{
lean_object* v_reuseFailAlloc_4661_; 
v_reuseFailAlloc_4661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4661_, 0, v_a_4655_);
v___x_4660_ = v_reuseFailAlloc_4661_;
goto v_reusejp_4659_;
}
v_reusejp_4659_:
{
return v___x_4660_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___boxed(lean_object* v_recArgInfos_4676_, lean_object* v_positions_4677_, lean_object* v_motives_4678_, lean_object* v_isIndPred_4679_, lean_object* v_a_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_){
_start:
{
uint8_t v_isIndPred_boxed_4685_; lean_object* v_res_4686_; 
v_isIndPred_boxed_4685_ = lean_unbox(v_isIndPred_4679_);
v_res_4686_ = l_Lean_Elab_Structural_mkBRecOnConst(v_recArgInfos_4676_, v_positions_4677_, v_motives_4678_, v_isIndPred_boxed_4685_, v_a_4680_, v_a_4681_, v_a_4682_, v_a_4683_);
lean_dec_ref(v_motives_4678_);
lean_dec_ref(v_positions_4677_);
lean_dec_ref(v_recArgInfos_4676_);
return v_res_4686_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(lean_object* v_00_u03b3_4687_, lean_object* v_msg_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_){
_start:
{
lean_object* v___x_4694_; 
v___x_4694_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v_msg_4688_, v___y_4689_, v___y_4690_, v___y_4691_, v___y_4692_);
return v___x_4694_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___boxed(lean_object* v_00_u03b3_4695_, lean_object* v_msg_4696_, lean_object* v___y_4697_, lean_object* v___y_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_, lean_object* v___y_4701_){
_start:
{
lean_object* v_res_4702_; 
v_res_4702_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(v_00_u03b3_4695_, v_msg_4696_, v___y_4697_, v___y_4698_, v___y_4699_, v___y_4700_);
return v_res_4702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(lean_object* v_00_u03b3_4703_, lean_object* v_00_u03b1_4704_, lean_object* v_00_u03b2_4705_, lean_object* v_inst_4706_, lean_object* v_f_4707_, lean_object* v_positions_4708_, lean_object* v_ys_4709_, lean_object* v_xs_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_){
_start:
{
lean_object* v___x_4716_; 
v___x_4716_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v_inst_4706_, v_f_4707_, v_positions_4708_, v_ys_4709_, v_xs_4710_, v___y_4711_, v___y_4712_, v___y_4713_, v___y_4714_);
return v___x_4716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___boxed(lean_object* v_00_u03b3_4717_, lean_object* v_00_u03b1_4718_, lean_object* v_00_u03b2_4719_, lean_object* v_inst_4720_, lean_object* v_f_4721_, lean_object* v_positions_4722_, lean_object* v_ys_4723_, lean_object* v_xs_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_, lean_object* v___y_4729_){
_start:
{
lean_object* v_res_4730_; 
v_res_4730_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(v_00_u03b3_4717_, v_00_u03b1_4718_, v_00_u03b2_4719_, v_inst_4720_, v_f_4721_, v_positions_4722_, v_ys_4723_, v_xs_4724_, v___y_4725_, v___y_4726_, v___y_4727_, v___y_4728_);
lean_dec_ref(v_xs_4724_);
lean_dec_ref(v_ys_4723_);
lean_dec_ref(v_positions_4722_);
return v_res_4730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(lean_object* v_00_u03b2_4731_, lean_object* v_inst_4732_, lean_object* v_xs_4733_, size_t v_sz_4734_, size_t v_i_4735_, lean_object* v_bs_4736_){
_start:
{
lean_object* v___x_4737_; 
v___x_4737_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___redArg(v_inst_4732_, v_xs_4733_, v_sz_4734_, v_i_4735_, v_bs_4736_);
return v___x_4737_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4738_, lean_object* v_inst_4739_, lean_object* v_xs_4740_, lean_object* v_sz_4741_, lean_object* v_i_4742_, lean_object* v_bs_4743_){
_start:
{
size_t v_sz_boxed_4744_; size_t v_i_boxed_4745_; lean_object* v_res_4746_; 
v_sz_boxed_4744_ = lean_unbox_usize(v_sz_4741_);
lean_dec(v_sz_4741_);
v_i_boxed_4745_ = lean_unbox_usize(v_i_4742_);
lean_dec(v_i_4742_);
v_res_4746_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(v_00_u03b2_4738_, v_inst_4739_, v_xs_4740_, v_sz_boxed_4744_, v_i_boxed_4745_, v_bs_4743_);
lean_dec_ref(v_xs_4740_);
return v_res_4746_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(lean_object* v_00_u03b1_4747_, lean_object* v_00_u03b3_4748_, lean_object* v_00_u03b2_4749_, lean_object* v_inst_4750_, lean_object* v_xs_4751_, lean_object* v_f_4752_, lean_object* v_as_4753_, lean_object* v_bs_4754_, lean_object* v_i_4755_, lean_object* v_cs_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_){
_start:
{
lean_object* v___x_4762_; 
v___x_4762_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_inst_4750_, v_xs_4751_, v_f_4752_, v_as_4753_, v_bs_4754_, v_i_4755_, v_cs_4756_, v___y_4757_, v___y_4758_, v___y_4759_, v___y_4760_);
return v___x_4762_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___boxed(lean_object* v_00_u03b1_4763_, lean_object* v_00_u03b3_4764_, lean_object* v_00_u03b2_4765_, lean_object* v_inst_4766_, lean_object* v_xs_4767_, lean_object* v_f_4768_, lean_object* v_as_4769_, lean_object* v_bs_4770_, lean_object* v_i_4771_, lean_object* v_cs_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_){
_start:
{
lean_object* v_res_4778_; 
v_res_4778_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(v_00_u03b1_4763_, v_00_u03b3_4764_, v_00_u03b2_4765_, v_inst_4766_, v_xs_4767_, v_f_4768_, v_as_4769_, v_bs_4770_, v_i_4771_, v_cs_4772_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
lean_dec_ref(v_bs_4770_);
lean_dec_ref(v_as_4769_);
lean_dec_ref(v_xs_4767_);
return v_res_4778_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0(lean_object* v___x_4779_, lean_object* v_e_4780_){
_start:
{
lean_object* v___x_4781_; lean_object* v___x_4782_; 
v___x_4781_ = l_Lean_indentD(v_e_4780_);
v___x_4782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4782_, 0, v___x_4779_);
lean_ctor_set(v___x_4782_, 1, v___x_4781_);
return v___x_4782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1(lean_object* v_numTypeFormers_4783_, lean_object* v_x_4784_, lean_object* v_brecOnType_4785_, lean_object* v___y_4786_, lean_object* v___y_4787_, lean_object* v___y_4788_, lean_object* v___y_4789_){
_start:
{
lean_object* v___x_4791_; 
v___x_4791_ = l_Lean_Meta_arrowDomainsN(v_numTypeFormers_4783_, v_brecOnType_4785_, v___y_4786_, v___y_4787_, v___y_4788_, v___y_4789_);
return v___x_4791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1___boxed(lean_object* v_numTypeFormers_4792_, lean_object* v_x_4793_, lean_object* v_brecOnType_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_, lean_object* v___y_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_){
_start:
{
lean_object* v_res_4800_; 
v_res_4800_ = l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1(v_numTypeFormers_4792_, v_x_4793_, v_brecOnType_4794_, v___y_4795_, v___y_4796_, v___y_4797_, v___y_4798_);
lean_dec_ref(v_x_4793_);
return v_res_4800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(lean_object* v_a_4801_, lean_object* v_as_4802_, size_t v_sz_4803_, size_t v_i_4804_, lean_object* v_b_4805_){
_start:
{
uint8_t v___x_4807_; 
v___x_4807_ = lean_usize_dec_lt(v_i_4804_, v_sz_4803_);
if (v___x_4807_ == 0)
{
lean_object* v___x_4808_; 
lean_dec_ref(v_a_4801_);
v___x_4808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4808_, 0, v_b_4805_);
return v___x_4808_;
}
else
{
lean_object* v_a_4809_; lean_object* v___x_4810_; size_t v___x_4811_; size_t v___x_4812_; 
v_a_4809_ = lean_array_uget_borrowed(v_as_4802_, v_i_4804_);
lean_inc_ref(v_a_4801_);
v___x_4810_ = lean_array_set(v_b_4805_, v_a_4809_, v_a_4801_);
v___x_4811_ = ((size_t)1ULL);
v___x_4812_ = lean_usize_add(v_i_4804_, v___x_4811_);
v_i_4804_ = v___x_4812_;
v_b_4805_ = v___x_4810_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg___boxed(lean_object* v_a_4814_, lean_object* v_as_4815_, lean_object* v_sz_4816_, lean_object* v_i_4817_, lean_object* v_b_4818_, lean_object* v___y_4819_){
_start:
{
size_t v_sz_boxed_4820_; size_t v_i_boxed_4821_; lean_object* v_res_4822_; 
v_sz_boxed_4820_ = lean_unbox_usize(v_sz_4816_);
lean_dec(v_sz_4816_);
v_i_boxed_4821_ = lean_unbox_usize(v_i_4817_);
lean_dec(v_i_4817_);
v_res_4822_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4814_, v_as_4815_, v_sz_boxed_4820_, v_i_boxed_4821_, v_b_4818_);
lean_dec_ref(v_as_4815_);
return v_res_4822_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(lean_object* v_as_4823_, size_t v_sz_4824_, size_t v_i_4825_, lean_object* v_b_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_){
_start:
{
uint8_t v___x_4832_; 
v___x_4832_ = lean_usize_dec_lt(v_i_4825_, v_sz_4824_);
if (v___x_4832_ == 0)
{
lean_object* v___x_4833_; 
v___x_4833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4833_, 0, v_b_4826_);
return v___x_4833_;
}
else
{
lean_object* v_snd_4834_; lean_object* v_fst_4835_; lean_object* v___x_4837_; uint8_t v_isShared_4838_; uint8_t v_isSharedCheck_4879_; 
v_snd_4834_ = lean_ctor_get(v_b_4826_, 1);
v_fst_4835_ = lean_ctor_get(v_b_4826_, 0);
v_isSharedCheck_4879_ = !lean_is_exclusive(v_b_4826_);
if (v_isSharedCheck_4879_ == 0)
{
v___x_4837_ = v_b_4826_;
v_isShared_4838_ = v_isSharedCheck_4879_;
goto v_resetjp_4836_;
}
else
{
lean_inc(v_snd_4834_);
lean_inc(v_fst_4835_);
lean_dec(v_b_4826_);
v___x_4837_ = lean_box(0);
v_isShared_4838_ = v_isSharedCheck_4879_;
goto v_resetjp_4836_;
}
v_resetjp_4836_:
{
lean_object* v_array_4839_; lean_object* v_start_4840_; lean_object* v_stop_4841_; uint8_t v___x_4842_; 
v_array_4839_ = lean_ctor_get(v_snd_4834_, 0);
v_start_4840_ = lean_ctor_get(v_snd_4834_, 1);
v_stop_4841_ = lean_ctor_get(v_snd_4834_, 2);
v___x_4842_ = lean_nat_dec_lt(v_start_4840_, v_stop_4841_);
if (v___x_4842_ == 0)
{
lean_object* v___x_4844_; 
if (v_isShared_4838_ == 0)
{
v___x_4844_ = v___x_4837_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4846_; 
v_reuseFailAlloc_4846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4846_, 0, v_fst_4835_);
lean_ctor_set(v_reuseFailAlloc_4846_, 1, v_snd_4834_);
v___x_4844_ = v_reuseFailAlloc_4846_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
lean_object* v___x_4845_; 
v___x_4845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4845_, 0, v___x_4844_);
return v___x_4845_;
}
}
else
{
lean_object* v___x_4848_; uint8_t v_isShared_4849_; uint8_t v_isSharedCheck_4875_; 
lean_inc(v_stop_4841_);
lean_inc(v_start_4840_);
lean_inc_ref(v_array_4839_);
v_isSharedCheck_4875_ = !lean_is_exclusive(v_snd_4834_);
if (v_isSharedCheck_4875_ == 0)
{
lean_object* v_unused_4876_; lean_object* v_unused_4877_; lean_object* v_unused_4878_; 
v_unused_4876_ = lean_ctor_get(v_snd_4834_, 2);
lean_dec(v_unused_4876_);
v_unused_4877_ = lean_ctor_get(v_snd_4834_, 1);
lean_dec(v_unused_4877_);
v_unused_4878_ = lean_ctor_get(v_snd_4834_, 0);
lean_dec(v_unused_4878_);
v___x_4848_ = v_snd_4834_;
v_isShared_4849_ = v_isSharedCheck_4875_;
goto v_resetjp_4847_;
}
else
{
lean_dec(v_snd_4834_);
v___x_4848_ = lean_box(0);
v_isShared_4849_ = v_isSharedCheck_4875_;
goto v_resetjp_4847_;
}
v_resetjp_4847_:
{
lean_object* v_a_4850_; lean_object* v___x_4851_; size_t v_sz_4852_; size_t v___x_4853_; lean_object* v___x_4854_; 
v_a_4850_ = lean_array_uget_borrowed(v_as_4823_, v_i_4825_);
v___x_4851_ = lean_array_fget_borrowed(v_array_4839_, v_start_4840_);
v_sz_4852_ = lean_array_size(v___x_4851_);
v___x_4853_ = ((size_t)0ULL);
lean_inc(v_a_4850_);
v___x_4854_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4850_, v___x_4851_, v_sz_4852_, v___x_4853_, v_fst_4835_);
if (lean_obj_tag(v___x_4854_) == 0)
{
lean_object* v_a_4855_; lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4859_; 
v_a_4855_ = lean_ctor_get(v___x_4854_, 0);
lean_inc(v_a_4855_);
lean_dec_ref(v___x_4854_);
v___x_4856_ = lean_unsigned_to_nat(1u);
v___x_4857_ = lean_nat_add(v_start_4840_, v___x_4856_);
lean_dec(v_start_4840_);
if (v_isShared_4849_ == 0)
{
lean_ctor_set(v___x_4848_, 1, v___x_4857_);
v___x_4859_ = v___x_4848_;
goto v_reusejp_4858_;
}
else
{
lean_object* v_reuseFailAlloc_4866_; 
v_reuseFailAlloc_4866_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4866_, 0, v_array_4839_);
lean_ctor_set(v_reuseFailAlloc_4866_, 1, v___x_4857_);
lean_ctor_set(v_reuseFailAlloc_4866_, 2, v_stop_4841_);
v___x_4859_ = v_reuseFailAlloc_4866_;
goto v_reusejp_4858_;
}
v_reusejp_4858_:
{
lean_object* v___x_4861_; 
if (v_isShared_4838_ == 0)
{
lean_ctor_set(v___x_4837_, 1, v___x_4859_);
lean_ctor_set(v___x_4837_, 0, v_a_4855_);
v___x_4861_ = v___x_4837_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4865_; 
v_reuseFailAlloc_4865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4865_, 0, v_a_4855_);
lean_ctor_set(v_reuseFailAlloc_4865_, 1, v___x_4859_);
v___x_4861_ = v_reuseFailAlloc_4865_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
size_t v___x_4862_; size_t v___x_4863_; 
v___x_4862_ = ((size_t)1ULL);
v___x_4863_ = lean_usize_add(v_i_4825_, v___x_4862_);
v_i_4825_ = v___x_4863_;
v_b_4826_ = v___x_4861_;
goto _start;
}
}
}
else
{
lean_object* v_a_4867_; lean_object* v___x_4869_; uint8_t v_isShared_4870_; uint8_t v_isSharedCheck_4874_; 
lean_del_object(v___x_4848_);
lean_dec(v_stop_4841_);
lean_dec(v_start_4840_);
lean_dec_ref(v_array_4839_);
lean_del_object(v___x_4837_);
v_a_4867_ = lean_ctor_get(v___x_4854_, 0);
v_isSharedCheck_4874_ = !lean_is_exclusive(v___x_4854_);
if (v_isSharedCheck_4874_ == 0)
{
v___x_4869_ = v___x_4854_;
v_isShared_4870_ = v_isSharedCheck_4874_;
goto v_resetjp_4868_;
}
else
{
lean_inc(v_a_4867_);
lean_dec(v___x_4854_);
v___x_4869_ = lean_box(0);
v_isShared_4870_ = v_isSharedCheck_4874_;
goto v_resetjp_4868_;
}
v_resetjp_4868_:
{
lean_object* v___x_4872_; 
if (v_isShared_4870_ == 0)
{
v___x_4872_ = v___x_4869_;
goto v_reusejp_4871_;
}
else
{
lean_object* v_reuseFailAlloc_4873_; 
v_reuseFailAlloc_4873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4873_, 0, v_a_4867_);
v___x_4872_ = v_reuseFailAlloc_4873_;
goto v_reusejp_4871_;
}
v_reusejp_4871_:
{
return v___x_4872_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1___boxed(lean_object* v_as_4880_, lean_object* v_sz_4881_, lean_object* v_i_4882_, lean_object* v_b_4883_, lean_object* v___y_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_){
_start:
{
size_t v_sz_boxed_4889_; size_t v_i_boxed_4890_; lean_object* v_res_4891_; 
v_sz_boxed_4889_ = lean_unbox_usize(v_sz_4881_);
lean_dec(v_sz_4881_);
v_i_boxed_4890_ = lean_unbox_usize(v_i_4882_);
lean_dec(v_i_4882_);
v_res_4891_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(v_as_4880_, v_sz_boxed_4889_, v_i_boxed_4890_, v_b_4883_, v___y_4884_, v___y_4885_, v___y_4886_, v___y_4887_);
lean_dec(v___y_4887_);
lean_dec_ref(v___y_4886_);
lean_dec(v___y_4885_);
lean_dec_ref(v___y_4884_);
lean_dec_ref(v_as_4880_);
return v_res_4891_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1(void){
_start:
{
lean_object* v___x_4893_; lean_object* v___x_4894_; 
v___x_4893_ = ((lean_object*)(l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0));
v___x_4894_ = l_Lean_stringToMessageData(v___x_4893_);
return v___x_4894_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2(void){
_start:
{
lean_object* v___x_4895_; lean_object* v___f_4896_; 
v___x_4895_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1);
v___f_4896_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0), 2, 1);
lean_closure_set(v___f_4896_, 0, v___x_4895_);
return v___f_4896_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3(void){
_start:
{
lean_object* v___x_4897_; lean_object* v___x_4898_; 
v___x_4897_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnConst___closed__1, &l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1);
v___x_4898_ = l_Lean_Expr_sort___override(v___x_4897_);
return v___x_4898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes(lean_object* v_recArgInfos_4899_, lean_object* v_positions_4900_, lean_object* v_brecOnConst_4901_, lean_object* v_a_4902_, lean_object* v_a_4903_, lean_object* v_a_4904_, lean_object* v_a_4905_){
_start:
{
lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v_recArgInfo_4909_; lean_object* v_indicesPos_4910_; lean_object* v_indIdx_4911_; lean_object* v_brecOn_4912_; lean_object* v___f_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; 
v___x_4907_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_4908_ = lean_unsigned_to_nat(0u);
v_recArgInfo_4909_ = lean_array_get_borrowed(v___x_4907_, v_recArgInfos_4899_, v___x_4908_);
v_indicesPos_4910_ = lean_ctor_get(v_recArgInfo_4909_, 3);
v_indIdx_4911_ = lean_ctor_get(v_recArgInfo_4909_, 5);
lean_inc(v_indIdx_4911_);
v_brecOn_4912_ = lean_apply_1(v_brecOnConst_4901_, v_indIdx_4911_);
v___f_4913_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2);
lean_inc_ref(v_brecOn_4912_);
v___x_4914_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 6, 1);
lean_closure_set(v___x_4914_, 0, v_brecOn_4912_);
lean_inc(v_a_4905_);
lean_inc_ref(v_a_4904_);
lean_inc(v_a_4903_);
lean_inc_ref(v_a_4902_);
v___x_4915_ = l_Lean_Meta_mapErrorImp___redArg(v___x_4914_, v___f_4913_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_);
if (lean_obj_tag(v___x_4915_) == 0)
{
lean_object* v___x_4916_; 
lean_dec_ref(v___x_4915_);
lean_inc(v_a_4905_);
lean_inc_ref(v_a_4904_);
lean_inc(v_a_4903_);
lean_inc_ref(v_a_4902_);
v___x_4916_ = lean_infer_type(v_brecOn_4912_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_);
if (lean_obj_tag(v___x_4916_) == 0)
{
lean_object* v_a_4917_; lean_object* v_numTypeFormers_4918_; lean_object* v___f_4919_; lean_object* v___x_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; uint8_t v___x_4924_; lean_object* v___x_4925_; 
v_a_4917_ = lean_ctor_get(v___x_4916_, 0);
lean_inc(v_a_4917_);
lean_dec_ref(v___x_4916_);
v_numTypeFormers_4918_ = lean_array_get_size(v_positions_4900_);
v___f_4919_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1___boxed), 8, 1);
lean_closure_set(v___f_4919_, 0, v_numTypeFormers_4918_);
v___x_4920_ = lean_array_get_size(v_indicesPos_4910_);
v___x_4921_ = lean_unsigned_to_nat(1u);
v___x_4922_ = lean_nat_add(v___x_4920_, v___x_4921_);
v___x_4923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4923_, 0, v___x_4922_);
v___x_4924_ = 0;
lean_inc(v_a_4905_);
lean_inc_ref(v_a_4904_);
lean_inc(v_a_4903_);
lean_inc_ref(v_a_4902_);
v___x_4925_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_a_4917_, v___x_4923_, v___f_4919_, v___x_4924_, v___x_4924_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_);
if (lean_obj_tag(v___x_4925_) == 0)
{
lean_object* v_a_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; size_t v_sz_4932_; size_t v___x_4933_; lean_object* v___x_4934_; 
v_a_4926_ = lean_ctor_get(v___x_4925_, 0);
lean_inc(v_a_4926_);
lean_dec_ref(v___x_4925_);
v___x_4927_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_4900_);
v___x_4928_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3);
v___x_4929_ = lean_mk_array(v___x_4927_, v___x_4928_);
v___x_4930_ = l_Array_toSubarray___redArg(v_positions_4900_, v___x_4908_, v_numTypeFormers_4918_);
v___x_4931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4931_, 0, v___x_4929_);
lean_ctor_set(v___x_4931_, 1, v___x_4930_);
v_sz_4932_ = lean_array_size(v_a_4926_);
v___x_4933_ = ((size_t)0ULL);
v___x_4934_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(v_a_4926_, v_sz_4932_, v___x_4933_, v___x_4931_, v_a_4902_, v_a_4903_, v_a_4904_, v_a_4905_);
lean_dec(v_a_4905_);
lean_dec_ref(v_a_4904_);
lean_dec(v_a_4903_);
lean_dec_ref(v_a_4902_);
lean_dec(v_a_4926_);
if (lean_obj_tag(v___x_4934_) == 0)
{
lean_object* v_a_4935_; lean_object* v___x_4937_; uint8_t v_isShared_4938_; uint8_t v_isSharedCheck_4943_; 
v_a_4935_ = lean_ctor_get(v___x_4934_, 0);
v_isSharedCheck_4943_ = !lean_is_exclusive(v___x_4934_);
if (v_isSharedCheck_4943_ == 0)
{
v___x_4937_ = v___x_4934_;
v_isShared_4938_ = v_isSharedCheck_4943_;
goto v_resetjp_4936_;
}
else
{
lean_inc(v_a_4935_);
lean_dec(v___x_4934_);
v___x_4937_ = lean_box(0);
v_isShared_4938_ = v_isSharedCheck_4943_;
goto v_resetjp_4936_;
}
v_resetjp_4936_:
{
lean_object* v_fst_4939_; lean_object* v___x_4941_; 
v_fst_4939_ = lean_ctor_get(v_a_4935_, 0);
lean_inc(v_fst_4939_);
lean_dec(v_a_4935_);
if (v_isShared_4938_ == 0)
{
lean_ctor_set(v___x_4937_, 0, v_fst_4939_);
v___x_4941_ = v___x_4937_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4942_; 
v_reuseFailAlloc_4942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4942_, 0, v_fst_4939_);
v___x_4941_ = v_reuseFailAlloc_4942_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
return v___x_4941_;
}
}
}
else
{
lean_object* v_a_4944_; lean_object* v___x_4946_; uint8_t v_isShared_4947_; uint8_t v_isSharedCheck_4951_; 
v_a_4944_ = lean_ctor_get(v___x_4934_, 0);
v_isSharedCheck_4951_ = !lean_is_exclusive(v___x_4934_);
if (v_isSharedCheck_4951_ == 0)
{
v___x_4946_ = v___x_4934_;
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
else
{
lean_inc(v_a_4944_);
lean_dec(v___x_4934_);
v___x_4946_ = lean_box(0);
v_isShared_4947_ = v_isSharedCheck_4951_;
goto v_resetjp_4945_;
}
v_resetjp_4945_:
{
lean_object* v___x_4949_; 
if (v_isShared_4947_ == 0)
{
v___x_4949_ = v___x_4946_;
goto v_reusejp_4948_;
}
else
{
lean_object* v_reuseFailAlloc_4950_; 
v_reuseFailAlloc_4950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4950_, 0, v_a_4944_);
v___x_4949_ = v_reuseFailAlloc_4950_;
goto v_reusejp_4948_;
}
v_reusejp_4948_:
{
return v___x_4949_;
}
}
}
}
else
{
lean_dec(v_a_4905_);
lean_dec_ref(v_a_4904_);
lean_dec(v_a_4903_);
lean_dec_ref(v_a_4902_);
lean_dec_ref(v_positions_4900_);
return v___x_4925_;
}
}
else
{
lean_object* v_a_4952_; lean_object* v___x_4954_; uint8_t v_isShared_4955_; uint8_t v_isSharedCheck_4959_; 
lean_dec(v_a_4905_);
lean_dec_ref(v_a_4904_);
lean_dec(v_a_4903_);
lean_dec_ref(v_a_4902_);
lean_dec_ref(v_positions_4900_);
v_a_4952_ = lean_ctor_get(v___x_4916_, 0);
v_isSharedCheck_4959_ = !lean_is_exclusive(v___x_4916_);
if (v_isSharedCheck_4959_ == 0)
{
v___x_4954_ = v___x_4916_;
v_isShared_4955_ = v_isSharedCheck_4959_;
goto v_resetjp_4953_;
}
else
{
lean_inc(v_a_4952_);
lean_dec(v___x_4916_);
v___x_4954_ = lean_box(0);
v_isShared_4955_ = v_isSharedCheck_4959_;
goto v_resetjp_4953_;
}
v_resetjp_4953_:
{
lean_object* v___x_4957_; 
if (v_isShared_4955_ == 0)
{
v___x_4957_ = v___x_4954_;
goto v_reusejp_4956_;
}
else
{
lean_object* v_reuseFailAlloc_4958_; 
v_reuseFailAlloc_4958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4958_, 0, v_a_4952_);
v___x_4957_ = v_reuseFailAlloc_4958_;
goto v_reusejp_4956_;
}
v_reusejp_4956_:
{
return v___x_4957_;
}
}
}
}
else
{
lean_object* v_a_4960_; lean_object* v___x_4962_; uint8_t v_isShared_4963_; uint8_t v_isSharedCheck_4967_; 
lean_dec_ref(v_brecOn_4912_);
lean_dec(v_a_4905_);
lean_dec_ref(v_a_4904_);
lean_dec(v_a_4903_);
lean_dec_ref(v_a_4902_);
lean_dec_ref(v_positions_4900_);
v_a_4960_ = lean_ctor_get(v___x_4915_, 0);
v_isSharedCheck_4967_ = !lean_is_exclusive(v___x_4915_);
if (v_isSharedCheck_4967_ == 0)
{
v___x_4962_ = v___x_4915_;
v_isShared_4963_ = v_isSharedCheck_4967_;
goto v_resetjp_4961_;
}
else
{
lean_inc(v_a_4960_);
lean_dec(v___x_4915_);
v___x_4962_ = lean_box(0);
v_isShared_4963_ = v_isSharedCheck_4967_;
goto v_resetjp_4961_;
}
v_resetjp_4961_:
{
lean_object* v___x_4965_; 
if (v_isShared_4963_ == 0)
{
v___x_4965_ = v___x_4962_;
goto v_reusejp_4964_;
}
else
{
lean_object* v_reuseFailAlloc_4966_; 
v_reuseFailAlloc_4966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4966_, 0, v_a_4960_);
v___x_4965_ = v_reuseFailAlloc_4966_;
goto v_reusejp_4964_;
}
v_reusejp_4964_:
{
return v___x_4965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___boxed(lean_object* v_recArgInfos_4968_, lean_object* v_positions_4969_, lean_object* v_brecOnConst_4970_, lean_object* v_a_4971_, lean_object* v_a_4972_, lean_object* v_a_4973_, lean_object* v_a_4974_, lean_object* v_a_4975_){
_start:
{
lean_object* v_res_4976_; 
v_res_4976_ = l_Lean_Elab_Structural_inferBRecOnFTypes(v_recArgInfos_4968_, v_positions_4969_, v_brecOnConst_4970_, v_a_4971_, v_a_4972_, v_a_4973_, v_a_4974_);
lean_dec_ref(v_recArgInfos_4968_);
return v_res_4976_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(lean_object* v_a_4977_, lean_object* v_as_4978_, size_t v_sz_4979_, size_t v_i_4980_, lean_object* v_b_4981_, lean_object* v___y_4982_, lean_object* v___y_4983_, lean_object* v___y_4984_, lean_object* v___y_4985_){
_start:
{
lean_object* v___x_4987_; 
v___x_4987_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4977_, v_as_4978_, v_sz_4979_, v_i_4980_, v_b_4981_);
return v___x_4987_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___boxed(lean_object* v_a_4988_, lean_object* v_as_4989_, lean_object* v_sz_4990_, lean_object* v_i_4991_, lean_object* v_b_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_){
_start:
{
size_t v_sz_boxed_4998_; size_t v_i_boxed_4999_; lean_object* v_res_5000_; 
v_sz_boxed_4998_ = lean_unbox_usize(v_sz_4990_);
lean_dec(v_sz_4990_);
v_i_boxed_4999_ = lean_unbox_usize(v_i_4991_);
lean_dec(v_i_4991_);
v_res_5000_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(v_a_4988_, v_as_4989_, v_sz_boxed_4998_, v_i_boxed_4999_, v_b_4992_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_);
lean_dec(v___y_4996_);
lean_dec_ref(v___y_4995_);
lean_dec(v___y_4994_);
lean_dec_ref(v___y_4993_);
lean_dec_ref(v_as_4989_);
return v_res_5000_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(lean_object* v_a_5001_, lean_object* v_a_5002_){
_start:
{
if (lean_obj_tag(v_a_5001_) == 0)
{
lean_object* v___x_5003_; 
v___x_5003_ = l_List_reverse___redArg(v_a_5002_);
return v___x_5003_;
}
else
{
lean_object* v_head_5004_; lean_object* v_tail_5005_; lean_object* v___x_5007_; uint8_t v_isShared_5008_; uint8_t v_isSharedCheck_5016_; 
v_head_5004_ = lean_ctor_get(v_a_5001_, 0);
v_tail_5005_ = lean_ctor_get(v_a_5001_, 1);
v_isSharedCheck_5016_ = !lean_is_exclusive(v_a_5001_);
if (v_isSharedCheck_5016_ == 0)
{
v___x_5007_ = v_a_5001_;
v_isShared_5008_ = v_isSharedCheck_5016_;
goto v_resetjp_5006_;
}
else
{
lean_inc(v_tail_5005_);
lean_inc(v_head_5004_);
lean_dec(v_a_5001_);
v___x_5007_ = lean_box(0);
v_isShared_5008_ = v_isSharedCheck_5016_;
goto v_resetjp_5006_;
}
v_resetjp_5006_:
{
lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5013_; 
v___x_5009_ = l_Nat_reprFast(v_head_5004_);
v___x_5010_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5010_, 0, v___x_5009_);
v___x_5011_ = l_Lean_MessageData_ofFormat(v___x_5010_);
if (v_isShared_5008_ == 0)
{
lean_ctor_set(v___x_5007_, 1, v_a_5002_);
lean_ctor_set(v___x_5007_, 0, v___x_5011_);
v___x_5013_ = v___x_5007_;
goto v_reusejp_5012_;
}
else
{
lean_object* v_reuseFailAlloc_5015_; 
v_reuseFailAlloc_5015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5015_, 0, v___x_5011_);
lean_ctor_set(v_reuseFailAlloc_5015_, 1, v_a_5002_);
v___x_5013_ = v_reuseFailAlloc_5015_;
goto v_reusejp_5012_;
}
v_reusejp_5012_:
{
v_a_5001_ = v_tail_5005_;
v_a_5002_ = v___x_5013_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(lean_object* v_a_5017_, lean_object* v_a_5018_){
_start:
{
if (lean_obj_tag(v_a_5017_) == 0)
{
lean_object* v___x_5019_; 
v___x_5019_ = l_List_reverse___redArg(v_a_5018_);
return v___x_5019_;
}
else
{
lean_object* v_head_5020_; lean_object* v_tail_5021_; lean_object* v___x_5023_; uint8_t v_isShared_5024_; uint8_t v_isSharedCheck_5033_; 
v_head_5020_ = lean_ctor_get(v_a_5017_, 0);
v_tail_5021_ = lean_ctor_get(v_a_5017_, 1);
v_isSharedCheck_5033_ = !lean_is_exclusive(v_a_5017_);
if (v_isSharedCheck_5033_ == 0)
{
v___x_5023_ = v_a_5017_;
v_isShared_5024_ = v_isSharedCheck_5033_;
goto v_resetjp_5022_;
}
else
{
lean_inc(v_tail_5021_);
lean_inc(v_head_5020_);
lean_dec(v_a_5017_);
v___x_5023_ = lean_box(0);
v_isShared_5024_ = v_isSharedCheck_5033_;
goto v_resetjp_5022_;
}
v_resetjp_5022_:
{
lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5030_; 
v___x_5025_ = lean_array_to_list(v_head_5020_);
v___x_5026_ = lean_box(0);
v___x_5027_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(v___x_5025_, v___x_5026_);
v___x_5028_ = l_Lean_MessageData_ofList(v___x_5027_);
if (v_isShared_5024_ == 0)
{
lean_ctor_set(v___x_5023_, 1, v_a_5018_);
lean_ctor_set(v___x_5023_, 0, v___x_5028_);
v___x_5030_ = v___x_5023_;
goto v_reusejp_5029_;
}
else
{
lean_object* v_reuseFailAlloc_5032_; 
v_reuseFailAlloc_5032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5032_, 0, v___x_5028_);
lean_ctor_set(v_reuseFailAlloc_5032_, 1, v_a_5018_);
v___x_5030_ = v_reuseFailAlloc_5032_;
goto v_reusejp_5029_;
}
v_reusejp_5029_:
{
v_a_5017_ = v_tail_5021_;
v_a_5018_ = v___x_5030_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(lean_object* v_xs_5034_, lean_object* v_v_5035_, lean_object* v_i_5036_){
_start:
{
lean_object* v___x_5037_; uint8_t v___x_5038_; 
v___x_5037_ = lean_array_get_size(v_xs_5034_);
v___x_5038_ = lean_nat_dec_lt(v_i_5036_, v___x_5037_);
if (v___x_5038_ == 0)
{
lean_object* v___x_5039_; 
lean_dec(v_i_5036_);
v___x_5039_ = lean_box(0);
return v___x_5039_;
}
else
{
lean_object* v___x_5040_; uint8_t v___x_5041_; 
v___x_5040_ = lean_array_fget_borrowed(v_xs_5034_, v_i_5036_);
v___x_5041_ = lean_nat_dec_eq(v___x_5040_, v_v_5035_);
if (v___x_5041_ == 0)
{
lean_object* v___x_5042_; lean_object* v___x_5043_; 
v___x_5042_ = lean_unsigned_to_nat(1u);
v___x_5043_ = lean_nat_add(v_i_5036_, v___x_5042_);
lean_dec(v_i_5036_);
v_i_5036_ = v___x_5043_;
goto _start;
}
else
{
lean_object* v___x_5045_; 
v___x_5045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5045_, 0, v_i_5036_);
return v___x_5045_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2___boxed(lean_object* v_xs_5046_, lean_object* v_v_5047_, lean_object* v_i_5048_){
_start:
{
lean_object* v_res_5049_; 
v_res_5049_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(v_xs_5046_, v_v_5047_, v_i_5048_);
lean_dec(v_v_5047_);
lean_dec_ref(v_xs_5046_);
return v_res_5049_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(lean_object* v_xs_5050_, lean_object* v_v_5051_){
_start:
{
lean_object* v___x_5052_; lean_object* v___x_5053_; 
v___x_5052_ = lean_unsigned_to_nat(0u);
v___x_5053_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(v_xs_5050_, v_v_5051_, v___x_5052_);
return v___x_5053_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2___boxed(lean_object* v_xs_5054_, lean_object* v_v_5055_){
_start:
{
lean_object* v_res_5056_; 
v_res_5056_ = l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(v_xs_5054_, v_v_5055_);
lean_dec(v_v_5055_);
lean_dec_ref(v_xs_5054_);
return v_res_5056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(lean_object* v_fnIdx_5060_, lean_object* v_as_5061_, size_t v_sz_5062_, size_t v_i_5063_, lean_object* v_b_5064_){
_start:
{
uint8_t v___x_5065_; 
v___x_5065_ = lean_usize_dec_lt(v_i_5063_, v_sz_5062_);
if (v___x_5065_ == 0)
{
return v_b_5064_;
}
else
{
lean_object* v___x_5066_; lean_object* v_a_5067_; lean_object* v___x_5068_; 
lean_dec_ref(v_b_5064_);
v___x_5066_ = lean_box(0);
v_a_5067_ = lean_array_uget_borrowed(v_as_5061_, v_i_5063_);
v___x_5068_ = l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(v_a_5067_, v_fnIdx_5060_);
if (lean_obj_tag(v___x_5068_) == 0)
{
lean_object* v___x_5069_; size_t v___x_5070_; size_t v___x_5071_; 
v___x_5069_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0));
v___x_5070_ = ((size_t)1ULL);
v___x_5071_ = lean_usize_add(v_i_5063_, v___x_5070_);
v_i_5063_ = v___x_5071_;
v_b_5064_ = v___x_5069_;
goto _start;
}
else
{
lean_object* v_val_5073_; lean_object* v___x_5075_; uint8_t v_isShared_5076_; uint8_t v_isSharedCheck_5084_; 
v_val_5073_ = lean_ctor_get(v___x_5068_, 0);
v_isSharedCheck_5084_ = !lean_is_exclusive(v___x_5068_);
if (v_isSharedCheck_5084_ == 0)
{
v___x_5075_ = v___x_5068_;
v_isShared_5076_ = v_isSharedCheck_5084_;
goto v_resetjp_5074_;
}
else
{
lean_inc(v_val_5073_);
lean_dec(v___x_5068_);
v___x_5075_ = lean_box(0);
v_isShared_5076_ = v_isSharedCheck_5084_;
goto v_resetjp_5074_;
}
v_resetjp_5074_:
{
lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5080_; 
v___x_5077_ = lean_array_get_size(v_a_5067_);
v___x_5078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5078_, 0, v___x_5077_);
lean_ctor_set(v___x_5078_, 1, v_val_5073_);
if (v_isShared_5076_ == 0)
{
lean_ctor_set(v___x_5075_, 0, v___x_5078_);
v___x_5080_ = v___x_5075_;
goto v_reusejp_5079_;
}
else
{
lean_object* v_reuseFailAlloc_5083_; 
v_reuseFailAlloc_5083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5083_, 0, v___x_5078_);
v___x_5080_ = v_reuseFailAlloc_5083_;
goto v_reusejp_5079_;
}
v_reusejp_5079_:
{
lean_object* v___x_5081_; lean_object* v___x_5082_; 
v___x_5081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5081_, 0, v___x_5080_);
v___x_5082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5082_, 0, v___x_5081_);
lean_ctor_set(v___x_5082_, 1, v___x_5066_);
return v___x_5082_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___boxed(lean_object* v_fnIdx_5085_, lean_object* v_as_5086_, lean_object* v_sz_5087_, lean_object* v_i_5088_, lean_object* v_b_5089_){
_start:
{
size_t v_sz_boxed_5090_; size_t v_i_boxed_5091_; lean_object* v_res_5092_; 
v_sz_boxed_5090_ = lean_unbox_usize(v_sz_5087_);
lean_dec(v_sz_5087_);
v_i_boxed_5091_ = lean_unbox_usize(v_i_5088_);
lean_dec(v_i_5088_);
v_res_5092_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(v_fnIdx_5085_, v_as_5086_, v_sz_boxed_5090_, v_i_boxed_5091_, v_b_5089_);
lean_dec_ref(v_as_5086_);
lean_dec(v_fnIdx_5085_);
return v_res_5092_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5094_; lean_object* v___x_5095_; 
v___x_5094_ = ((lean_object*)(l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0));
v___x_5095_ = l_Lean_stringToMessageData(v___x_5094_);
return v___x_5095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0(lean_object* v_recArgInfo_5096_, lean_object* v_positions_5097_, lean_object* v_fnIdx_5098_, lean_object* v_brecOnConst_5099_, lean_object* v_packedFArgs_5100_, lean_object* v_funTypes_5101_, lean_object* v_ys_5102_, lean_object* v___value_5103_, lean_object* v___y_5104_, lean_object* v___y_5105_, lean_object* v___y_5106_, lean_object* v___y_5107_){
_start:
{
lean_object* v___y_5110_; lean_object* v___y_5111_; lean_object* v___y_5112_; lean_object* v___y_5113_; lean_object* v___x_5127_; lean_object* v_fst_5128_; lean_object* v_snd_5129_; lean_object* v___x_5130_; size_t v_sz_5131_; size_t v___x_5132_; lean_object* v___x_5133_; lean_object* v_fst_5134_; 
lean_inc_ref(v_ys_5102_);
lean_inc_ref(v_recArgInfo_5096_);
v___x_5127_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_5096_, v_ys_5102_);
v_fst_5128_ = lean_ctor_get(v___x_5127_, 0);
lean_inc(v_fst_5128_);
v_snd_5129_ = lean_ctor_get(v___x_5127_, 1);
lean_inc(v_snd_5129_);
lean_dec_ref(v___x_5127_);
v___x_5130_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0));
v_sz_5131_ = lean_array_size(v_positions_5097_);
v___x_5132_ = ((size_t)0ULL);
v___x_5133_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(v_fnIdx_5098_, v_positions_5097_, v_sz_5131_, v___x_5132_, v___x_5130_);
v_fst_5134_ = lean_ctor_get(v___x_5133_, 0);
lean_inc(v_fst_5134_);
lean_dec_ref(v___x_5133_);
if (lean_obj_tag(v_fst_5134_) == 0)
{
lean_dec(v_snd_5129_);
lean_dec(v_fst_5128_);
lean_dec_ref(v_ys_5102_);
lean_dec_ref(v_brecOnConst_5099_);
lean_dec_ref(v_recArgInfo_5096_);
v___y_5110_ = v___y_5104_;
v___y_5111_ = v___y_5105_;
v___y_5112_ = v___y_5106_;
v___y_5113_ = v___y_5107_;
goto v___jp_5109_;
}
else
{
lean_object* v_val_5135_; 
v_val_5135_ = lean_ctor_get(v_fst_5134_, 0);
lean_inc(v_val_5135_);
lean_dec_ref(v_fst_5134_);
if (lean_obj_tag(v_val_5135_) == 1)
{
lean_object* v_val_5136_; lean_object* v_fst_5137_; lean_object* v_snd_5138_; lean_object* v_indIdx_5139_; lean_object* v_brecOn_5140_; lean_object* v_brecOn_5141_; lean_object* v_brecOn_5142_; lean_object* v___x_5143_; 
lean_dec(v_fnIdx_5098_);
lean_dec_ref(v_positions_5097_);
v_val_5136_ = lean_ctor_get(v_val_5135_, 0);
lean_inc(v_val_5136_);
lean_dec_ref(v_val_5135_);
v_fst_5137_ = lean_ctor_get(v_val_5136_, 0);
lean_inc(v_fst_5137_);
v_snd_5138_ = lean_ctor_get(v_val_5136_, 1);
lean_inc(v_snd_5138_);
lean_dec(v_val_5136_);
v_indIdx_5139_ = lean_ctor_get(v_recArgInfo_5096_, 5);
lean_inc(v_indIdx_5139_);
lean_dec_ref(v_recArgInfo_5096_);
v_brecOn_5140_ = lean_apply_1(v_brecOnConst_5099_, v_indIdx_5139_);
v_brecOn_5141_ = l_Lean_mkAppN(v_brecOn_5140_, v_fst_5128_);
lean_dec(v_fst_5128_);
v_brecOn_5142_ = l_Lean_mkAppN(v_brecOn_5141_, v_packedFArgs_5100_);
lean_inc(v___y_5107_);
lean_inc_ref(v___y_5106_);
lean_inc(v___y_5105_);
lean_inc_ref(v___y_5104_);
v___x_5143_ = l_Lean_Meta_PProdN_projM(v_fst_5137_, v_snd_5138_, v_brecOn_5142_, v___y_5104_, v___y_5105_, v___y_5106_, v___y_5107_);
lean_dec(v_snd_5138_);
lean_dec(v_fst_5137_);
if (lean_obj_tag(v___x_5143_) == 0)
{
lean_object* v_a_5144_; lean_object* v___x_5145_; uint8_t v___x_5146_; uint8_t v___x_5147_; lean_object* v___x_5148_; 
v_a_5144_ = lean_ctor_get(v___x_5143_, 0);
lean_inc(v_a_5144_);
lean_dec_ref(v___x_5143_);
v___x_5145_ = l_Lean_mkAppN(v_a_5144_, v_snd_5129_);
lean_dec(v_snd_5129_);
v___x_5146_ = 1;
v___x_5147_ = 1;
v___x_5148_ = l_Lean_Meta_mkLetFVars(v_funTypes_5101_, v___x_5145_, v___x_5146_, v___x_5146_, v___x_5147_, v___y_5104_, v___y_5105_, v___y_5106_, v___y_5107_);
if (lean_obj_tag(v___x_5148_) == 0)
{
lean_object* v_a_5149_; uint8_t v___x_5150_; lean_object* v___x_5151_; 
v_a_5149_ = lean_ctor_get(v___x_5148_, 0);
lean_inc(v_a_5149_);
lean_dec_ref(v___x_5148_);
v___x_5150_ = 0;
v___x_5151_ = l_Lean_Meta_mkLambdaFVars(v_ys_5102_, v_a_5149_, v___x_5150_, v___x_5146_, v___x_5150_, v___x_5146_, v___x_5147_, v___y_5104_, v___y_5105_, v___y_5106_, v___y_5107_);
lean_dec(v___y_5107_);
lean_dec_ref(v___y_5106_);
lean_dec(v___y_5105_);
lean_dec_ref(v___y_5104_);
lean_dec_ref(v_ys_5102_);
return v___x_5151_;
}
else
{
lean_dec(v___y_5107_);
lean_dec_ref(v___y_5106_);
lean_dec(v___y_5105_);
lean_dec_ref(v___y_5104_);
lean_dec_ref(v_ys_5102_);
return v___x_5148_;
}
}
else
{
lean_dec(v_snd_5129_);
lean_dec(v___y_5107_);
lean_dec_ref(v___y_5106_);
lean_dec(v___y_5105_);
lean_dec_ref(v___y_5104_);
lean_dec_ref(v_ys_5102_);
return v___x_5143_;
}
}
else
{
lean_dec(v_val_5135_);
lean_dec(v_snd_5129_);
lean_dec(v_fst_5128_);
lean_dec_ref(v_ys_5102_);
lean_dec_ref(v_brecOnConst_5099_);
lean_dec_ref(v_recArgInfo_5096_);
v___y_5110_ = v___y_5104_;
v___y_5111_ = v___y_5105_;
v___y_5112_ = v___y_5106_;
v___y_5113_ = v___y_5107_;
goto v___jp_5109_;
}
}
v___jp_5109_:
{
lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; 
v___x_5114_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1, &l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1);
v___x_5115_ = l_Nat_reprFast(v_fnIdx_5098_);
v___x_5116_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5116_, 0, v___x_5115_);
v___x_5117_ = l_Lean_MessageData_ofFormat(v___x_5116_);
v___x_5118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5118_, 0, v___x_5114_);
lean_ctor_set(v___x_5118_, 1, v___x_5117_);
v___x_5119_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__3, &l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3);
v___x_5120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5120_, 0, v___x_5118_);
lean_ctor_set(v___x_5120_, 1, v___x_5119_);
v___x_5121_ = lean_array_to_list(v_positions_5097_);
v___x_5122_ = lean_box(0);
v___x_5123_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(v___x_5121_, v___x_5122_);
v___x_5124_ = l_Lean_MessageData_ofList(v___x_5123_);
v___x_5125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5125_, 0, v___x_5120_);
lean_ctor_set(v___x_5125_, 1, v___x_5124_);
v___x_5126_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v___x_5125_, v___y_5110_, v___y_5111_, v___y_5112_, v___y_5113_);
lean_dec(v___y_5113_);
lean_dec_ref(v___y_5112_);
lean_dec(v___y_5111_);
lean_dec_ref(v___y_5110_);
return v___x_5126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed(lean_object* v_recArgInfo_5152_, lean_object* v_positions_5153_, lean_object* v_fnIdx_5154_, lean_object* v_brecOnConst_5155_, lean_object* v_packedFArgs_5156_, lean_object* v_funTypes_5157_, lean_object* v_ys_5158_, lean_object* v___value_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_){
_start:
{
lean_object* v_res_5165_; 
v_res_5165_ = l_Lean_Elab_Structural_mkBRecOnApp___lam__0(v_recArgInfo_5152_, v_positions_5153_, v_fnIdx_5154_, v_brecOnConst_5155_, v_packedFArgs_5156_, v_funTypes_5157_, v_ys_5158_, v___value_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_);
lean_dec_ref(v___value_5159_);
lean_dec_ref(v_funTypes_5157_);
lean_dec_ref(v_packedFArgs_5156_);
return v_res_5165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp(lean_object* v_positions_5166_, lean_object* v_fnIdx_5167_, lean_object* v_brecOnConst_5168_, lean_object* v_packedFArgs_5169_, lean_object* v_funTypes_5170_, lean_object* v_recArgInfo_5171_, lean_object* v_value_5172_, lean_object* v_a_5173_, lean_object* v_a_5174_, lean_object* v_a_5175_, lean_object* v_a_5176_){
_start:
{
lean_object* v___f_5178_; uint8_t v___x_5179_; lean_object* v___x_5180_; 
v___f_5178_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed), 13, 6);
lean_closure_set(v___f_5178_, 0, v_recArgInfo_5171_);
lean_closure_set(v___f_5178_, 1, v_positions_5166_);
lean_closure_set(v___f_5178_, 2, v_fnIdx_5167_);
lean_closure_set(v___f_5178_, 3, v_brecOnConst_5168_);
lean_closure_set(v___f_5178_, 4, v_packedFArgs_5169_);
lean_closure_set(v___f_5178_, 5, v_funTypes_5170_);
v___x_5179_ = 0;
v___x_5180_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_5172_, v___f_5178_, v___x_5179_, v_a_5173_, v_a_5174_, v_a_5175_, v_a_5176_);
return v___x_5180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___boxed(lean_object* v_positions_5181_, lean_object* v_fnIdx_5182_, lean_object* v_brecOnConst_5183_, lean_object* v_packedFArgs_5184_, lean_object* v_funTypes_5185_, lean_object* v_recArgInfo_5186_, lean_object* v_value_5187_, lean_object* v_a_5188_, lean_object* v_a_5189_, lean_object* v_a_5190_, lean_object* v_a_5191_, lean_object* v_a_5192_){
_start:
{
lean_object* v_res_5193_; 
v_res_5193_ = l_Lean_Elab_Structural_mkBRecOnApp(v_positions_5181_, v_fnIdx_5182_, v_brecOnConst_5183_, v_packedFArgs_5184_, v_funTypes_5185_, v_recArgInfo_5186_, v_value_5187_, v_a_5188_, v_a_5189_, v_a_5190_, v_a_5191_);
return v_res_5193_;
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
