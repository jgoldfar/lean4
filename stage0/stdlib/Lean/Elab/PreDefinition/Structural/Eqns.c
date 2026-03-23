// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.Eqns
// Imports: public import Lean.Elab.PreDefinition.FixedParams import Lean.Elab.PreDefinition.EqnsUtils import Lean.Meta.Tactic.CasesOnStuckLHS import Lean.Meta.Tactic.Delta import Lean.Meta.Tactic.Simp.Main import Lean.Meta.Tactic.Delta import Lean.Meta.Tactic.CasesOnStuckLHS import Lean.Meta.Tactic.Split
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
lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ConstantInfo_hasValue(lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Meta_delta_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_isBRecOnRecursor(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_define(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_tryURefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_tryContradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_whnfReducibleLHS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_simpMatch_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_simpIf_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpTargetStar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_casesOnStuckLHS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_splitTarget_x3f(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
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
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
extern lean_object* l_Lean_Meta_unfoldThmSuffix;
lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Eqns_deltaLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_inferDefEqAttr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_tactic_hygienic;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_maxRecDepth;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__2;
static const lean_array_object l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__3 = (const lean_object*)&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_instInhabitedEqnInfo;
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "could not find `.brecOn` application in"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1;
static const lean_closure_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__2_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__4 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "goal not an equality"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "step:\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__6___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2;
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__3 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__3_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__4;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__0 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__0_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eqns"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structural"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__1_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 73, 239, 7, 229, 151, 237, 199)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__3_value),LEAN_SCALAR_PTR_LITERAL(83, 150, 182, 177, 14, 34, 156, 192)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "whnfReducibleLHS succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "simpMatch\? succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "simpIf\? succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10;
static const lean_array_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__14;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__16;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__18;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "simpTargetStar closed the goal"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__22 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__22_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "deltaRHS\? succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__24 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__24_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "casesOnStuckLHS\? succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__26 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__26_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "splitTarget\? succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__28 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__28_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "no progress at goal\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__30 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__30_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "simpTargetStar modified the goal"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__32 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__32_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "tryContadiction succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__34 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__34_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tryURefl succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__36 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__36_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "r"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(201, 206, 29, 183, 206, 15, 98, 41)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "theorem `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not an equality\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "abstracting"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " from"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__9_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "no theorem `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__11_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__13_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "goUnfold:\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "proving:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "failed to generate equational theorem for `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Structural_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Structural_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_Structural_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Structural_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Structural"};
static const lean_object* l_Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eqnInfoExt"};
static const lean_object* l_Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(14, 221, 148, 2, 30, 47, 242, 74)}};
static const lean_ctor_object l_Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 216, 81, 142, 241, 75, 113, 77)}};
static const lean_object* l_Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_eqnInfoExt;
static lean_once_cell_t l_Lean_Elab_Structural_registerEqnsInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_registerEqnsInfo___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_registerEqnsInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_registerEqnsInfo___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_registerEqnsInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_registerEqnsInfo___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_registerEqnsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_get_structural_rec_arg_pos(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 172, 242, 185, 134, 214, 81, 182)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(201, 185, 97, 74, 150, 8, 57, 175)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Eqns"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(169, 19, 250, 232, 19, 103, 59, 84)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(236, 64, 85, 238, 73, 235, 224, 238)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(237, 241, 197, 13, 174, 23, 186, 239)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 232, 160, 88, 66, 78, 213, 243)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(141, 117, 235, 94, 194, 72, 147, 153)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(100, 146, 13, 135, 45, 158, 59, 107)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(109, 222, 70, 43, 201, 77, 119, 184)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Structural_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 51, 79, 28, 160, 228, 197, 175)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 14, 83, 143, 58, 41, 180, 194)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(197, 131, 204, 33, 154, 17, 78, 114)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Elab_Structural_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(51, 169, 96, 182, 175, 131, 16, 69)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(171, 31, 30, 186, 131, 197, 38, 7)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__4(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_9_ = l_Lean_Elab_instInhabitedFixedParamPerms_default;
v___x_10_ = ((lean_object*)(l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__3));
v___x_11_ = lean_unsigned_to_nat(0u);
v___x_12_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__2, &l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__2_once, _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__2);
v___x_13_ = lean_box(0);
v___x_14_ = lean_box(0);
v___x_15_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set(v___x_15_, 2, v___x_12_);
lean_ctor_set(v___x_15_, 3, v___x_12_);
lean_ctor_set(v___x_15_, 4, v___x_11_);
lean_ctor_set(v___x_15_, 5, v___x_10_);
lean_ctor_set(v___x_15_, 6, v___x_9_);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = lean_obj_once(&l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__4, &l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__4_once, _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default___closed__4);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_instInhabitedEqnInfo(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lean_Elab_Structural_instInhabitedEqnInfo_default;
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0(lean_object* v_k_18_, lean_object* v_b_19_, lean_object* v_c_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_apply_7(v_k_18_, v_b_19_, v_c_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, lean_box(0));
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0___boxed(lean_object* v_k_27_, lean_object* v_b_28_, lean_object* v_c_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0(v_k_27_, v_b_28_, v_c_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg(lean_object* v_type_36_, lean_object* v_k_37_, uint8_t v_cleanupAnnotations_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v___f_44_; uint8_t v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___f_44_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_44_, 0, v_k_37_);
v___x_45_ = 0;
v___x_46_ = lean_box(0);
v___x_47_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_45_, v___x_46_, v_type_36_, v___f_44_, v_cleanupAnnotations_38_, v___x_45_, v___y_39_, v___y_40_, v___y_41_, v___y_42_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___boxed(lean_object* v_type_64_, lean_object* v_k_65_, lean_object* v_cleanupAnnotations_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_72_; lean_object* v_res_73_; 
v_cleanupAnnotations_boxed_72_ = lean_unbox(v_cleanupAnnotations_66_);
v_res_73_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg(v_type_64_, v_k_65_, v_cleanupAnnotations_boxed_72_, v___y_67_, v___y_68_, v___y_69_, v___y_70_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1(lean_object* v_00_u03b1_74_, lean_object* v_type_75_, lean_object* v_k_76_, uint8_t v_cleanupAnnotations_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg(v_type_75_, v_k_76_, v_cleanupAnnotations_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___boxed(lean_object* v_00_u03b1_84_, lean_object* v_type_85_, lean_object* v_k_86_, lean_object* v_cleanupAnnotations_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_93_; lean_object* v_res_94_; 
v_cleanupAnnotations_boxed_93_ = lean_unbox(v_cleanupAnnotations_87_);
v_res_94_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1(v_00_u03b1_84_, v_type_85_, v_k_86_, v_cleanupAnnotations_boxed_93_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2(lean_object* v___x_95_, lean_object* v_k_96_, lean_object* v___x_97_, lean_object* v_x_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = l_Subarray_copy___redArg(v___x_95_);
lean_inc_ref(v_x_98_);
v___x_105_ = l_Lean_mkAppN(v_x_98_, v___x_104_);
lean_dec_ref(v___x_104_);
v___x_106_ = lean_apply_8(v_k_96_, v___x_97_, v_x_98_, v___x_105_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, lean_box(0));
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2___boxed(lean_object* v___x_107_, lean_object* v_k_108_, lean_object* v___x_109_, lean_object* v_x_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2(v___x_107_, v_k_108_, v___x_109_, v_x_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0(lean_object* v_typeName_117_, lean_object* v_idx_118_, lean_object* v_x_119_, lean_object* v_k_120_, lean_object* v_brecOnApp_121_, lean_object* v_x_122_, lean_object* v_c_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = l_Lean_mkProj(v_typeName_117_, v_idx_118_, v_c_123_);
v___x_130_ = l_Lean_mkAppN(v___x_129_, v_x_119_);
v___x_131_ = lean_apply_8(v_k_120_, v_brecOnApp_121_, v_x_122_, v___x_130_, v___y_124_, v___y_125_, v___y_126_, v___y_127_, lean_box(0));
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0___boxed(lean_object* v_typeName_132_, lean_object* v_idx_133_, lean_object* v_x_134_, lean_object* v_k_135_, lean_object* v_brecOnApp_136_, lean_object* v_x_137_, lean_object* v_c_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0(v_typeName_132_, v_idx_133_, v_x_134_, v_k_135_, v_brecOnApp_136_, v_x_137_, v_c_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
lean_dec_ref(v_x_134_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0(lean_object* v_k_145_, lean_object* v_b_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_apply_6(v_k_145_, v_b_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, lean_box(0));
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v_k_153_, lean_object* v_b_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0(v_k_153_, v_b_154_, v___y_155_, v___y_156_, v___y_157_, v___y_158_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg(lean_object* v_name_161_, uint8_t v_bi_162_, lean_object* v_type_163_, lean_object* v_k_164_, uint8_t v_kind_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v___f_171_; lean_object* v___x_172_; 
v___f_171_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_171_, 0, v_k_164_);
v___x_172_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_161_, v_bi_162_, v_type_163_, v___f_171_, v_kind_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_180_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_180_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_a_173_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
v_a_181_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_172_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_172_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg___boxed(lean_object* v_name_189_, lean_object* v_bi_190_, lean_object* v_type_191_, lean_object* v_k_192_, lean_object* v_kind_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
uint8_t v_bi_boxed_199_; uint8_t v_kind_boxed_200_; lean_object* v_res_201_; 
v_bi_boxed_199_ = lean_unbox(v_bi_190_);
v_kind_boxed_200_ = lean_unbox(v_kind_193_);
v_res_201_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg(v_name_189_, v_bi_boxed_199_, v_type_191_, v_k_192_, v_kind_boxed_200_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg(lean_object* v_name_202_, lean_object* v_type_203_, lean_object* v_k_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
uint8_t v___x_210_; uint8_t v___x_211_; lean_object* v___x_212_; 
v___x_210_ = 0;
v___x_211_ = 0;
v___x_212_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg(v_name_202_, v___x_210_, v_type_203_, v_k_204_, v___x_211_, v___y_205_, v___y_206_, v___y_207_, v___y_208_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg___boxed(lean_object* v_name_213_, lean_object* v_type_214_, lean_object* v_k_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg(v_name_213_, v_type_214_, v_k_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(lean_object* v_msgData_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; lean_object* v_env_229_; lean_object* v___x_230_; lean_object* v_mctx_231_; lean_object* v_lctx_232_; lean_object* v_options_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_228_ = lean_st_ref_get(v___y_226_);
v_env_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc_ref(v_env_229_);
lean_dec(v___x_228_);
v___x_230_ = lean_st_ref_get(v___y_224_);
v_mctx_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc_ref(v_mctx_231_);
lean_dec(v___x_230_);
v_lctx_232_ = lean_ctor_get(v___y_223_, 2);
v_options_233_ = lean_ctor_get(v___y_225_, 2);
lean_inc_ref(v_options_233_);
lean_inc_ref(v_lctx_232_);
v___x_234_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_234_, 0, v_env_229_);
lean_ctor_set(v___x_234_, 1, v_mctx_231_);
lean_ctor_set(v___x_234_, 2, v_lctx_232_);
lean_ctor_set(v___x_234_, 3, v_options_233_);
v___x_235_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
lean_ctor_set(v___x_235_, 1, v_msgData_222_);
v___x_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0___boxed(lean_object* v_msgData_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(v_msgData_237_, v___y_238_, v___y_239_, v___y_240_, v___y_241_);
lean_dec(v___y_241_);
lean_dec_ref(v___y_240_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(lean_object* v_msg_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
lean_object* v_ref_250_; lean_object* v___x_251_; lean_object* v_a_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_260_; 
v_ref_250_ = lean_ctor_get(v___y_247_, 5);
v___x_251_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(v_msg_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_);
v_a_252_ = lean_ctor_get(v___x_251_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_260_ == 0)
{
v___x_254_ = v___x_251_;
v_isShared_255_ = v_isSharedCheck_260_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_a_252_);
lean_dec(v___x_251_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_260_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; lean_object* v___x_258_; 
lean_inc(v_ref_250_);
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v_ref_250_);
lean_ctor_set(v___x_256_, 1, v_a_252_);
if (v_isShared_255_ == 0)
{
lean_ctor_set_tag(v___x_254_, 1);
lean_ctor_set(v___x_254_, 0, v___x_256_);
v___x_258_ = v___x_254_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_256_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg___boxed(lean_object* v_msg_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v_msg_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v___y_263_);
lean_dec_ref(v___y_262_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1(lean_object* v_xs_268_, lean_object* v_x_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_array_get_size(v_xs_268_);
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1___boxed(lean_object* v_xs_277_, lean_object* v_x_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__1(v_xs_277_, v_x_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec_ref(v_x_278_);
lean_dec_ref(v_xs_277_);
return v_res_284_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_285_; lean_object* v_dummy_286_; 
v___x_285_ = lean_box(0);
v_dummy_286_ = l_Lean_Expr_sort___override(v___x_285_);
return v_dummy_286_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__0));
v___x_289_ = l_Lean_stringToMessageData(v___x_288_);
return v___x_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg(lean_object* v_e_294_, lean_object* v_k_295_, lean_object* v_x_296_, lean_object* v_x_297_, lean_object* v_x_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
lean_object* v___y_305_; lean_object* v___y_306_; lean_object* v___y_307_; lean_object* v___y_308_; 
if (lean_obj_tag(v_x_296_) == 5)
{
lean_object* v_fn_313_; lean_object* v_arg_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v_fn_313_ = lean_ctor_get(v_x_296_, 0);
lean_inc_ref(v_fn_313_);
v_arg_314_ = lean_ctor_get(v_x_296_, 1);
lean_inc_ref(v_arg_314_);
lean_dec_ref(v_x_296_);
v___x_315_ = lean_array_set(v_x_297_, v_x_298_, v_arg_314_);
v___x_316_ = lean_unsigned_to_nat(1u);
v___x_317_ = lean_nat_sub(v_x_298_, v___x_316_);
lean_dec(v_x_298_);
v_x_296_ = v_fn_313_;
v_x_297_ = v___x_315_;
v_x_298_ = v___x_317_;
goto _start;
}
else
{
lean_dec(v_x_298_);
if (lean_obj_tag(v_x_296_) == 11)
{
lean_object* v_typeName_319_; lean_object* v_idx_320_; lean_object* v_struct_321_; lean_object* v___f_322_; lean_object* v___x_323_; 
lean_dec_ref(v_e_294_);
v_typeName_319_ = lean_ctor_get(v_x_296_, 0);
lean_inc(v_typeName_319_);
v_idx_320_ = lean_ctor_get(v_x_296_, 1);
lean_inc(v_idx_320_);
v_struct_321_ = lean_ctor_get(v_x_296_, 2);
lean_inc_ref(v_struct_321_);
lean_dec_ref(v_x_296_);
v___f_322_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__0___boxed), 12, 4);
lean_closure_set(v___f_322_, 0, v_typeName_319_);
lean_closure_set(v___f_322_, 1, v_idx_320_);
lean_closure_set(v___f_322_, 2, v_x_297_);
lean_closure_set(v___f_322_, 3, v_k_295_);
v___x_323_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(v_struct_321_, v___f_322_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
return v___x_323_;
}
else
{
if (lean_obj_tag(v_x_296_) == 4)
{
lean_object* v_declName_324_; lean_object* v___x_325_; lean_object* v_env_326_; uint8_t v___x_327_; 
v_declName_324_ = lean_ctor_get(v_x_296_, 0);
v___x_325_ = lean_st_ref_get(v___y_302_);
v_env_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc_ref(v_env_326_);
lean_dec(v___x_325_);
lean_inc(v_declName_324_);
v___x_327_ = l_Lean_isBRecOnRecursor(v_env_326_, v_declName_324_);
if (v___x_327_ == 0)
{
lean_dec_ref(v_x_296_);
lean_dec_ref(v_x_297_);
lean_dec_ref(v_k_295_);
v___y_305_ = v___y_299_;
v___y_306_ = v___y_300_;
v___y_307_ = v___y_301_;
v___y_308_ = v___y_302_;
goto v___jp_304_;
}
else
{
lean_object* v___x_328_; 
lean_inc(v___y_302_);
lean_inc_ref(v___y_301_);
lean_inc(v___y_300_);
lean_inc_ref(v___y_299_);
lean_inc_ref(v_x_296_);
v___x_328_ = lean_infer_type(v_x_296_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; lean_object* v___f_330_; uint8_t v___x_331_; lean_object* v___x_332_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_a_329_);
lean_dec_ref(v___x_328_);
v___f_330_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__2));
v___x_331_ = 0;
lean_inc(v___y_302_);
lean_inc_ref(v___y_301_);
lean_inc(v___y_300_);
lean_inc_ref(v___y_299_);
v___x_332_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg(v_a_329_, v___f_330_, v___x_331_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_334_; uint8_t v___x_335_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref(v___x_332_);
v___x_334_ = lean_array_get_size(v_x_297_);
v___x_335_ = lean_nat_dec_le(v_a_333_, v___x_334_);
if (v___x_335_ == 0)
{
lean_dec(v_a_333_);
lean_dec_ref(v_x_296_);
lean_dec_ref(v_x_297_);
lean_dec_ref(v_k_295_);
v___y_305_ = v___y_299_;
v___y_306_ = v___y_300_;
v___y_307_ = v___y_301_;
v___y_308_ = v___y_302_;
goto v___jp_304_;
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
lean_dec_ref(v_e_294_);
v___x_336_ = lean_unsigned_to_nat(0u);
lean_inc(v_a_333_);
lean_inc_ref(v_x_297_);
v___x_337_ = l_Array_toSubarray___redArg(v_x_297_, v___x_336_, v_a_333_);
v___x_338_ = l_Subarray_copy___redArg(v___x_337_);
v___x_339_ = l_Lean_mkAppN(v_x_296_, v___x_338_);
lean_dec_ref(v___x_338_);
lean_inc(v___y_302_);
lean_inc_ref(v___y_301_);
lean_inc(v___y_300_);
lean_inc_ref(v___y_299_);
lean_inc_ref(v___x_339_);
v___x_340_ = lean_infer_type(v___x_339_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_342_; lean_object* v___f_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref(v___x_340_);
v___x_342_ = l_Array_toSubarray___redArg(v_x_297_, v_a_333_, v___x_334_);
v___f_343_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___lam__2___boxed), 9, 3);
lean_closure_set(v___f_343_, 0, v___x_342_);
lean_closure_set(v___f_343_, 1, v_k_295_);
lean_closure_set(v___f_343_, 2, v___x_339_);
v___x_344_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__4));
v___x_345_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg(v___x_344_, v_a_341_, v___f_343_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
return v___x_345_;
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v___x_339_);
lean_dec(v_a_333_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec_ref(v_x_297_);
lean_dec_ref(v_k_295_);
v_a_346_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_340_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_340_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_dec_ref(v_x_296_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec_ref(v_x_297_);
lean_dec_ref(v_k_295_);
lean_dec_ref(v_e_294_);
v_a_354_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_332_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_332_);
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
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec_ref(v_x_296_);
lean_dec(v___y_302_);
lean_dec_ref(v___y_301_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec_ref(v_x_297_);
lean_dec_ref(v_k_295_);
lean_dec_ref(v_e_294_);
v_a_362_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_328_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_328_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
}
else
{
lean_dec_ref(v_x_297_);
lean_dec_ref(v_x_296_);
lean_dec_ref(v_k_295_);
v___y_305_ = v___y_299_;
v___y_306_ = v___y_300_;
v___y_307_ = v___y_301_;
v___y_308_ = v___y_302_;
goto v___jp_304_;
}
}
}
v___jp_304_:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_309_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___closed__1);
v___x_310_ = l_Lean_indentExpr(v_e_294_);
v___x_311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_309_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
v___x_312_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_311_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
lean_dec(v___y_308_);
lean_dec_ref(v___y_307_);
lean_dec(v___y_306_);
lean_dec_ref(v___y_305_);
return v___x_312_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(lean_object* v_e_370_, lean_object* v_k_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_dummy_377_; lean_object* v_nargs_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_dummy_377_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0);
v_nargs_378_ = l_Lean_Expr_getAppNumArgs(v_e_370_);
lean_inc(v_nargs_378_);
v___x_379_ = lean_mk_array(v_nargs_378_, v_dummy_377_);
v___x_380_ = lean_unsigned_to_nat(1u);
v___x_381_ = lean_nat_sub(v_nargs_378_, v___x_380_);
lean_dec(v_nargs_378_);
lean_inc_ref(v_e_370_);
v___x_382_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg(v_e_370_, v_k_371_, v_e_370_, v___x_379_, v___x_381_, v_a_372_, v_a_373_, v_a_374_, v_a_375_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___boxed(lean_object* v_e_383_, lean_object* v_k_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(v_e_383_, v_k_384_, v_a_385_, v_a_386_, v_a_387_, v_a_388_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg___boxed(lean_object* v_e_391_, lean_object* v_k_392_, lean_object* v_x_393_, lean_object* v_x_394_, lean_object* v_x_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg(v_e_391_, v_k_392_, v_x_393_, v_x_394_, v_x_395_, v___y_396_, v___y_397_, v___y_398_, v___y_399_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go(lean_object* v_00_u03b1_402_, lean_object* v_e_403_, lean_object* v_k_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(v_e_403_, v_k_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___boxed(lean_object* v_00_u03b1_411_, lean_object* v_e_412_, lean_object* v_k_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go(v_00_u03b1_411_, v_e_412_, v_k_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0(lean_object* v_00_u03b1_420_, lean_object* v_msg_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v_msg_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___boxed(lean_object* v_00_u03b1_428_, lean_object* v_msg_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0(v_00_u03b1_428_, v_msg_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3(lean_object* v_00_u03b1_436_, lean_object* v_name_437_, uint8_t v_bi_438_, lean_object* v_type_439_, lean_object* v_k_440_, uint8_t v_kind_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___redArg(v_name_437_, v_bi_438_, v_type_439_, v_k_440_, v_kind_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3___boxed(lean_object* v_00_u03b1_448_, lean_object* v_name_449_, lean_object* v_bi_450_, lean_object* v_type_451_, lean_object* v_k_452_, lean_object* v_kind_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
uint8_t v_bi_boxed_459_; uint8_t v_kind_boxed_460_; lean_object* v_res_461_; 
v_bi_boxed_459_ = lean_unbox(v_bi_450_);
v_kind_boxed_460_ = lean_unbox(v_kind_453_);
v_res_461_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2_spec__3(v_00_u03b1_448_, v_name_449_, v_bi_boxed_459_, v_type_451_, v_k_452_, v_kind_boxed_460_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2(lean_object* v_00_u03b1_462_, lean_object* v_name_463_, lean_object* v_type_464_, lean_object* v_k_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___redArg(v_name_463_, v_type_464_, v_k_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2___boxed(lean_object* v_00_u03b1_472_, lean_object* v_name_473_, lean_object* v_type_474_, lean_object* v_k_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__2(v_00_u03b1_472_, v_name_473_, v_type_474_, v_k_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3(lean_object* v_00_u03b1_482_, lean_object* v_e_483_, lean_object* v_k_484_, lean_object* v_x_485_, lean_object* v_x_486_, lean_object* v_x_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___redArg(v_e_483_, v_k_484_, v_x_485_, v_x_486_, v_x_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3___boxed(lean_object* v_00_u03b1_494_, lean_object* v_e_495_, lean_object* v_k_496_, lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__3(v_00_u03b1_494_, v_e_495_, v_k_496_, v_x_497_, v_x_498_, v_x_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0(lean_object* v___x_506_, uint8_t v___x_507_, lean_object* v_brecOnApp_508_, lean_object* v_x_509_, lean_object* v_c_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; 
lean_inc(v___y_514_);
lean_inc_ref(v___y_513_);
lean_inc(v___y_512_);
lean_inc_ref(v___y_511_);
v___x_516_ = l_Lean_Meta_mkEq(v_c_510_, v___x_506_, v___y_511_, v___y_512_, v___y_513_, v___y_514_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; uint8_t v___x_522_; lean_object* v___x_523_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
lean_inc(v_a_517_);
lean_dec_ref(v___x_516_);
v___x_518_ = lean_unsigned_to_nat(1u);
v___x_519_ = lean_mk_empty_array_with_capacity(v___x_518_);
v___x_520_ = lean_array_push(v___x_519_, v_x_509_);
v___x_521_ = 0;
v___x_522_ = 1;
v___x_523_ = l_Lean_Meta_mkLambdaFVars(v___x_520_, v_a_517_, v___x_521_, v___x_507_, v___x_521_, v___x_507_, v___x_522_, v___y_511_, v___y_512_, v___y_513_, v___y_514_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec_ref(v___x_520_);
if (lean_obj_tag(v___x_523_) == 0)
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_532_; 
v_a_524_ = lean_ctor_get(v___x_523_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_532_ == 0)
{
v___x_526_ = v___x_523_;
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_523_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_532_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_528_, 0, v_brecOnApp_508_);
lean_ctor_set(v___x_528_, 1, v_a_524_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_528_);
v___x_530_ = v___x_526_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_528_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
else
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
lean_dec_ref(v_brecOnApp_508_);
v_a_533_ = lean_ctor_get(v___x_523_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v___x_523_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_523_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec_ref(v_x_509_);
lean_dec_ref(v_brecOnApp_508_);
v_a_541_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_516_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_516_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0___boxed(lean_object* v___x_549_, lean_object* v___x_550_, lean_object* v_brecOnApp_551_, lean_object* v_x_552_, lean_object* v_c_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
uint8_t v___x_656__boxed_559_; lean_object* v_res_560_; 
v___x_656__boxed_559_ = lean_unbox(v___x_550_);
v_res_560_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0(v___x_549_, v___x_656__boxed_559_, v_brecOnApp_551_, v_x_552_, v_c_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
return v_res_560_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__2));
v___x_566_ = l_Lean_stringToMessageData(v___x_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS(lean_object* v_goal_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; uint8_t v___x_575_; 
v___x_573_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1));
v___x_574_ = lean_unsigned_to_nat(3u);
v___x_575_ = l_Lean_Expr_isAppOfArity(v_goal_567_, v___x_573_, v___x_574_);
if (v___x_575_ == 0)
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_576_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__3);
v___x_577_ = l_Lean_indentExpr(v_goal_567_);
v___x_578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_576_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_578_, v_a_568_, v_a_569_, v_a_570_, v_a_571_);
lean_dec(v_a_571_);
lean_dec_ref(v_a_570_);
lean_dec(v_a_569_);
lean_dec_ref(v_a_568_);
return v___x_579_;
}
else
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___f_584_; lean_object* v___x_585_; 
v___x_580_ = l_Lean_Expr_appFn_x21(v_goal_567_);
v___x_581_ = l_Lean_Expr_appArg_x21(v___x_580_);
lean_dec_ref(v___x_580_);
v___x_582_ = l_Lean_Expr_appArg_x21(v_goal_567_);
lean_dec_ref(v_goal_567_);
v___x_583_ = lean_box(v___x_575_);
v___f_584_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___lam__0___boxed), 10, 2);
lean_closure_set(v___f_584_, 0, v___x_582_);
lean_closure_set(v___f_584_, 1, v___x_583_);
v___x_585_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg(v___x_581_, v___f_584_, v_a_568_, v_a_569_, v_a_570_, v_a_571_);
return v___x_585_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___boxed(lean_object* v_goal_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS(v_goal_586_, v_a_587_, v_a_588_, v_a_589_, v_a_590_);
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(lean_object* v_mvarId_593_, lean_object* v_x_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_593_, v_x_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_601_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
else
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
v_a_609_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v___x_600_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v___x_600_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_a_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg___boxed(lean_object* v_mvarId_617_, lean_object* v_x_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_617_, v_x_618_, v___y_619_, v___y_620_, v___y_621_, v___y_622_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0(lean_object* v_00_u03b1_625_, lean_object* v_mvarId_626_, lean_object* v_x_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_626_, v_x_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___boxed(lean_object* v_00_u03b1_634_, lean_object* v_mvarId_635_, lean_object* v_x_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0(v_00_u03b1_634_, v_mvarId_635_, v_x_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_);
return v_res_642_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0(lean_object* v_declName_643_, lean_object* v_x_644_){
_start:
{
uint8_t v___x_645_; 
v___x_645_ = lean_name_eq(v_x_644_, v_declName_643_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0___boxed(lean_object* v_declName_646_, lean_object* v_x_647_){
_start:
{
uint8_t v_res_648_; lean_object* v_r_649_; 
v_res_648_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0(v_declName_646_, v_x_647_);
lean_dec(v_x_647_);
lean_dec(v_declName_646_);
v_r_649_ = lean_box(v_res_648_);
return v_r_649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1(lean_object* v_mvarId_650_, lean_object* v___f_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
lean_object* v___x_657_; 
lean_inc(v___y_655_);
lean_inc_ref(v___y_654_);
lean_inc(v___y_653_);
lean_inc_ref(v___y_652_);
lean_inc(v_mvarId_650_);
v___x_657_ = l_Lean_MVarId_getType_x27(v_mvarId_650_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_727_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_727_ == 0)
{
v___x_660_ = v___x_657_;
v_isShared_661_ = v_isSharedCheck_727_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_657_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_727_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; 
v___x_662_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1));
v___x_663_ = lean_unsigned_to_nat(3u);
v___x_664_ = l_Lean_Expr_isAppOfArity(v_a_658_, v___x_662_, v___x_663_);
if (v___x_664_ == 0)
{
lean_object* v___x_665_; lean_object* v___x_667_; 
lean_dec(v_a_658_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec_ref(v___f_651_);
lean_dec(v_mvarId_650_);
v___x_665_ = lean_box(0);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 0, v___x_665_);
v___x_667_ = v___x_660_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
else
{
lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; lean_object* v___x_672_; 
lean_del_object(v___x_660_);
v___x_669_ = l_Lean_Expr_appArg_x21(v_a_658_);
v___x_670_ = l_Lean_Expr_consumeMData(v___x_669_);
lean_dec_ref(v___x_669_);
v___x_671_ = 0;
v___x_672_ = l_Lean_Meta_delta_x3f(v___x_670_, v___f_651_, v___x_671_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_718_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_718_ == 0)
{
v___x_675_ = v___x_672_;
v_isShared_676_ = v_isSharedCheck_718_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_718_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
if (lean_obj_tag(v_a_673_) == 1)
{
lean_object* v_val_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_713_; 
lean_del_object(v___x_675_);
v_val_677_ = lean_ctor_get(v_a_673_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v_a_673_);
if (v_isSharedCheck_713_ == 0)
{
v___x_679_ = v_a_673_;
v_isShared_680_ = v_isSharedCheck_713_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_val_677_);
lean_dec(v_a_673_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_713_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_681_ = l_Lean_Expr_appFn_x21(v_a_658_);
lean_dec(v_a_658_);
v___x_682_ = l_Lean_Expr_appArg_x21(v___x_681_);
lean_dec_ref(v___x_681_);
lean_inc(v___y_655_);
lean_inc_ref(v___y_654_);
lean_inc(v___y_653_);
lean_inc_ref(v___y_652_);
v___x_683_ = l_Lean_Meta_mkEq(v___x_682_, v_val_677_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v_a_684_; lean_object* v___x_685_; 
v_a_684_ = lean_ctor_get(v___x_683_, 0);
lean_inc(v_a_684_);
lean_dec_ref(v___x_683_);
v___x_685_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_650_, v_a_684_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_696_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_696_ == 0)
{
v___x_688_ = v___x_685_;
v_isShared_689_ = v_isSharedCheck_696_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_685_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_696_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 0, v_a_686_);
v___x_691_ = v___x_679_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_686_);
v___x_691_ = v_reuseFailAlloc_695_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_693_; 
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 0, v___x_691_);
v___x_693_ = v___x_688_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_691_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
else
{
lean_object* v_a_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_704_; 
lean_del_object(v___x_679_);
v_a_697_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_704_ == 0)
{
v___x_699_ = v___x_685_;
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_a_697_);
lean_dec(v___x_685_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_704_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_a_697_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
lean_del_object(v___x_679_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v_mvarId_650_);
v_a_705_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_683_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_683_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
}
else
{
lean_object* v___x_714_; lean_object* v___x_716_; 
lean_dec(v_a_673_);
lean_dec(v_a_658_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v_mvarId_650_);
v___x_714_ = lean_box(0);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_714_);
v___x_716_ = v___x_675_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_714_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
else
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
lean_dec(v_a_658_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v_mvarId_650_);
v_a_719_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v___x_672_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_672_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
}
}
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec_ref(v___f_651_);
lean_dec(v_mvarId_650_);
v_a_728_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_657_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_657_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1___boxed(lean_object* v_mvarId_736_, lean_object* v___f_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1(v_mvarId_736_, v___f_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(lean_object* v_mvarId_744_, lean_object* v_declName_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_){
_start:
{
lean_object* v___f_751_; lean_object* v___f_752_; lean_object* v___x_753_; 
v___f_751_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__0___boxed), 2, 1);
lean_closure_set(v___f_751_, 0, v_declName_745_);
lean_inc(v_mvarId_744_);
v___f_752_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___lam__1___boxed), 7, 2);
lean_closure_set(v___f_752_, 0, v_mvarId_744_);
lean_closure_set(v___f_752_, 1, v___f_751_);
v___x_753_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_744_, v___f_752_, v_a_746_, v_a_747_, v_a_748_, v_a_749_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f___boxed(lean_object* v_mvarId_754_, lean_object* v_declName_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_, lean_object* v_a_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(v_mvarId_754_, v_declName_755_, v_a_756_, v_a_757_, v_a_758_, v_a_759_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(lean_object* v_cls_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_options_768_; uint8_t v_hasTrace_769_; 
v_options_768_ = lean_ctor_get(v___y_766_, 2);
v_hasTrace_769_ = lean_ctor_get_uint8(v_options_768_, sizeof(void*)*1);
if (v_hasTrace_769_ == 0)
{
lean_object* v___x_770_; lean_object* v___x_771_; 
lean_dec(v_cls_765_);
v___x_770_ = lean_box(v_hasTrace_769_);
v___x_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
return v___x_771_;
}
else
{
lean_object* v_inheritedTraceOptions_772_; lean_object* v___x_773_; lean_object* v___x_774_; uint8_t v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v_inheritedTraceOptions_772_ = lean_ctor_get(v___y_766_, 13);
v___x_773_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___closed__1));
v___x_774_ = l_Lean_Name_append(v___x_773_, v_cls_765_);
v___x_775_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_772_, v_options_768_, v___x_774_);
lean_dec(v___x_774_);
v___x_776_ = lean_box(v___x_775_);
v___x_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
return v___x_777_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___boxed(lean_object* v_cls_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_778_, v___y_779_);
lean_dec_ref(v___y_779_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(lean_object* v_cls_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_782_, v___y_785_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___boxed(lean_object* v_cls_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0(v_cls_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
return v_res_795_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_796_ = lean_unsigned_to_nat(32u);
v___x_797_ = lean_mk_empty_array_with_capacity(v___x_796_);
v___x_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
return v___x_798_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_799_ = ((size_t)5ULL);
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = lean_unsigned_to_nat(32u);
v___x_802_ = lean_mk_empty_array_with_capacity(v___x_801_);
v___x_803_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__0);
v___x_804_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_804_, 0, v___x_803_);
lean_ctor_set(v___x_804_, 1, v___x_802_);
lean_ctor_set(v___x_804_, 2, v___x_800_);
lean_ctor_set(v___x_804_, 3, v___x_800_);
lean_ctor_set_usize(v___x_804_, 4, v___x_799_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg(lean_object* v___y_805_){
_start:
{
lean_object* v___x_807_; lean_object* v_traceState_808_; lean_object* v_traces_809_; lean_object* v___x_810_; lean_object* v_traceState_811_; lean_object* v_env_812_; lean_object* v_nextMacroScope_813_; lean_object* v_ngen_814_; lean_object* v_auxDeclNGen_815_; lean_object* v_cache_816_; lean_object* v_messages_817_; lean_object* v_infoState_818_; lean_object* v_snapshotTasks_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_838_; 
v___x_807_ = lean_st_ref_get(v___y_805_);
v_traceState_808_ = lean_ctor_get(v___x_807_, 4);
lean_inc_ref(v_traceState_808_);
lean_dec(v___x_807_);
v_traces_809_ = lean_ctor_get(v_traceState_808_, 0);
lean_inc_ref(v_traces_809_);
lean_dec_ref(v_traceState_808_);
v___x_810_ = lean_st_ref_take(v___y_805_);
v_traceState_811_ = lean_ctor_get(v___x_810_, 4);
v_env_812_ = lean_ctor_get(v___x_810_, 0);
v_nextMacroScope_813_ = lean_ctor_get(v___x_810_, 1);
v_ngen_814_ = lean_ctor_get(v___x_810_, 2);
v_auxDeclNGen_815_ = lean_ctor_get(v___x_810_, 3);
v_cache_816_ = lean_ctor_get(v___x_810_, 5);
v_messages_817_ = lean_ctor_get(v___x_810_, 6);
v_infoState_818_ = lean_ctor_get(v___x_810_, 7);
v_snapshotTasks_819_ = lean_ctor_get(v___x_810_, 8);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_838_ == 0)
{
v___x_821_ = v___x_810_;
v_isShared_822_ = v_isSharedCheck_838_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_snapshotTasks_819_);
lean_inc(v_infoState_818_);
lean_inc(v_messages_817_);
lean_inc(v_cache_816_);
lean_inc(v_traceState_811_);
lean_inc(v_auxDeclNGen_815_);
lean_inc(v_ngen_814_);
lean_inc(v_nextMacroScope_813_);
lean_inc(v_env_812_);
lean_dec(v___x_810_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_838_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
uint64_t v_tid_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_836_; 
v_tid_823_ = lean_ctor_get_uint64(v_traceState_811_, sizeof(void*)*1);
v_isSharedCheck_836_ = !lean_is_exclusive(v_traceState_811_);
if (v_isSharedCheck_836_ == 0)
{
lean_object* v_unused_837_; 
v_unused_837_ = lean_ctor_get(v_traceState_811_, 0);
lean_dec(v_unused_837_);
v___x_825_ = v_traceState_811_;
v_isShared_826_ = v_isSharedCheck_836_;
goto v_resetjp_824_;
}
else
{
lean_dec(v_traceState_811_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_836_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; lean_object* v___x_829_; 
v___x_827_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___closed__1);
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 0, v___x_827_);
v___x_829_ = v___x_825_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_827_);
lean_ctor_set_uint64(v_reuseFailAlloc_835_, sizeof(void*)*1, v_tid_823_);
v___x_829_ = v_reuseFailAlloc_835_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v___x_831_; 
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 4, v___x_829_);
v___x_831_ = v___x_821_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_env_812_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_nextMacroScope_813_);
lean_ctor_set(v_reuseFailAlloc_834_, 2, v_ngen_814_);
lean_ctor_set(v_reuseFailAlloc_834_, 3, v_auxDeclNGen_815_);
lean_ctor_set(v_reuseFailAlloc_834_, 4, v___x_829_);
lean_ctor_set(v_reuseFailAlloc_834_, 5, v_cache_816_);
lean_ctor_set(v_reuseFailAlloc_834_, 6, v_messages_817_);
lean_ctor_set(v_reuseFailAlloc_834_, 7, v_infoState_818_);
lean_ctor_set(v_reuseFailAlloc_834_, 8, v_snapshotTasks_819_);
v___x_831_ = v_reuseFailAlloc_834_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = lean_st_ref_set(v___y_805_, v___x_831_);
v___x_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_833_, 0, v_traces_809_);
return v___x_833_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg___boxed(lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg(v___y_839_);
lean_dec(v___y_839_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg(v___y_845_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___boxed(lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4(v___y_848_, v___y_849_, v___y_850_, v___y_851_);
lean_dec(v___y_851_);
lean_dec_ref(v___y_850_);
lean_dec(v___y_849_);
lean_dec_ref(v___y_848_);
return v_res_853_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(lean_object* v_opts_854_, lean_object* v_opt_855_){
_start:
{
lean_object* v_name_856_; lean_object* v_defValue_857_; lean_object* v_map_858_; lean_object* v___x_859_; 
v_name_856_ = lean_ctor_get(v_opt_855_, 0);
v_defValue_857_ = lean_ctor_get(v_opt_855_, 1);
v_map_858_ = lean_ctor_get(v_opts_854_, 0);
v___x_859_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_858_, v_name_856_);
if (lean_obj_tag(v___x_859_) == 0)
{
uint8_t v___x_860_; 
v___x_860_ = lean_unbox(v_defValue_857_);
return v___x_860_;
}
else
{
lean_object* v_val_861_; 
v_val_861_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_val_861_);
lean_dec_ref(v___x_859_);
if (lean_obj_tag(v_val_861_) == 1)
{
uint8_t v_v_862_; 
v_v_862_ = lean_ctor_get_uint8(v_val_861_, 0);
lean_dec_ref(v_val_861_);
return v_v_862_;
}
else
{
uint8_t v___x_863_; 
lean_dec(v_val_861_);
v___x_863_ = lean_unbox(v_defValue_857_);
return v___x_863_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5___boxed(lean_object* v_opts_864_, lean_object* v_opt_865_){
_start:
{
uint8_t v_res_866_; lean_object* v_r_867_; 
v_res_866_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_opts_864_, v_opt_865_);
lean_dec_ref(v_opt_865_);
lean_dec_ref(v_opts_864_);
v_r_867_ = lean_box(v_res_866_);
return v_r_867_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__0));
v___x_870_ = l_Lean_stringToMessageData(v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0(lean_object* v_mvarId_871_, lean_object* v_x_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_878_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___closed__1);
v___x_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_879_, 0, v_mvarId_871_);
v___x_880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_880_, 0, v___x_878_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
v___x_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___boxed(lean_object* v_mvarId_882_, lean_object* v_x_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0(v_mvarId_882_, v_x_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec_ref(v_x_883_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(lean_object* v_____r_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_896_ = lean_box(0);
v___x_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_897_, 0, v___x_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1___boxed(lean_object* v_____r_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v_____r_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__9(lean_object* v_opts_905_, lean_object* v_opt_906_){
_start:
{
lean_object* v_name_907_; lean_object* v_defValue_908_; lean_object* v_map_909_; lean_object* v___x_910_; 
v_name_907_ = lean_ctor_get(v_opt_906_, 0);
v_defValue_908_ = lean_ctor_get(v_opt_906_, 1);
v_map_909_ = lean_ctor_get(v_opts_905_, 0);
v___x_910_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_909_, v_name_907_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_inc(v_defValue_908_);
return v_defValue_908_;
}
else
{
lean_object* v_val_911_; 
v_val_911_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_val_911_);
lean_dec_ref(v___x_910_);
if (lean_obj_tag(v_val_911_) == 3)
{
lean_object* v_v_912_; 
v_v_912_ = lean_ctor_get(v_val_911_, 0);
lean_inc(v_v_912_);
lean_dec_ref(v_val_911_);
return v_v_912_;
}
else
{
lean_dec(v_val_911_);
lean_inc(v_defValue_908_);
return v_defValue_908_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__9___boxed(lean_object* v_opts_913_, lean_object* v_opt_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__9(v_opts_913_, v_opt_914_);
lean_dec_ref(v_opt_914_);
lean_dec_ref(v_opts_913_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___redArg(lean_object* v_x_916_){
_start:
{
if (lean_obj_tag(v_x_916_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
v_a_918_ = lean_ctor_get(v_x_916_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v_x_916_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v_x_916_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v_x_916_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
lean_ctor_set_tag(v___x_920_, 1);
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
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_a_926_ = lean_ctor_get(v_x_916_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v_x_916_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v_x_916_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v_x_916_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
lean_ctor_set_tag(v___x_928_, 0);
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___redArg___boxed(lean_object* v_x_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___redArg(v_x_934_);
return v_res_936_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__6(lean_object* v_e_937_){
_start:
{
if (lean_obj_tag(v_e_937_) == 0)
{
uint8_t v___x_938_; 
v___x_938_ = 2;
return v___x_938_;
}
else
{
uint8_t v___x_939_; 
v___x_939_ = 0;
return v___x_939_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__6___boxed(lean_object* v_e_940_){
_start:
{
uint8_t v_res_941_; lean_object* v_r_942_; 
v_res_941_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__6(v_e_940_);
lean_dec_ref(v_e_940_);
v_r_942_ = lean_box(v_res_941_);
return v_r_942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7_spec__8(size_t v_sz_943_, size_t v_i_944_, lean_object* v_bs_945_){
_start:
{
uint8_t v___x_946_; 
v___x_946_ = lean_usize_dec_lt(v_i_944_, v_sz_943_);
if (v___x_946_ == 0)
{
return v_bs_945_;
}
else
{
lean_object* v_v_947_; lean_object* v_msg_948_; lean_object* v___x_949_; lean_object* v_bs_x27_950_; size_t v___x_951_; size_t v___x_952_; lean_object* v___x_953_; 
v_v_947_ = lean_array_uget_borrowed(v_bs_945_, v_i_944_);
v_msg_948_ = lean_ctor_get(v_v_947_, 1);
lean_inc_ref(v_msg_948_);
v___x_949_ = lean_unsigned_to_nat(0u);
v_bs_x27_950_ = lean_array_uset(v_bs_945_, v_i_944_, v___x_949_);
v___x_951_ = ((size_t)1ULL);
v___x_952_ = lean_usize_add(v_i_944_, v___x_951_);
v___x_953_ = lean_array_uset(v_bs_x27_950_, v_i_944_, v_msg_948_);
v_i_944_ = v___x_952_;
v_bs_945_ = v___x_953_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7_spec__8___boxed(lean_object* v_sz_955_, lean_object* v_i_956_, lean_object* v_bs_957_){
_start:
{
size_t v_sz_boxed_958_; size_t v_i_boxed_959_; lean_object* v_res_960_; 
v_sz_boxed_958_ = lean_unbox_usize(v_sz_955_);
lean_dec(v_sz_955_);
v_i_boxed_959_ = lean_unbox_usize(v_i_956_);
lean_dec(v_i_956_);
v_res_960_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7_spec__8(v_sz_boxed_958_, v_i_boxed_959_, v_bs_957_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7(lean_object* v_oldTraces_961_, lean_object* v_data_962_, lean_object* v_ref_963_, lean_object* v_msg_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_fileName_970_; lean_object* v_fileMap_971_; lean_object* v_options_972_; lean_object* v_currRecDepth_973_; lean_object* v_maxRecDepth_974_; lean_object* v_ref_975_; lean_object* v_currNamespace_976_; lean_object* v_openDecls_977_; lean_object* v_initHeartbeats_978_; lean_object* v_maxHeartbeats_979_; lean_object* v_quotContext_980_; lean_object* v_currMacroScope_981_; uint8_t v_diag_982_; lean_object* v_cancelTk_x3f_983_; uint8_t v_suppressElabErrors_984_; lean_object* v_inheritedTraceOptions_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_1040_; 
v_fileName_970_ = lean_ctor_get(v___y_967_, 0);
v_fileMap_971_ = lean_ctor_get(v___y_967_, 1);
v_options_972_ = lean_ctor_get(v___y_967_, 2);
v_currRecDepth_973_ = lean_ctor_get(v___y_967_, 3);
v_maxRecDepth_974_ = lean_ctor_get(v___y_967_, 4);
v_ref_975_ = lean_ctor_get(v___y_967_, 5);
v_currNamespace_976_ = lean_ctor_get(v___y_967_, 6);
v_openDecls_977_ = lean_ctor_get(v___y_967_, 7);
v_initHeartbeats_978_ = lean_ctor_get(v___y_967_, 8);
v_maxHeartbeats_979_ = lean_ctor_get(v___y_967_, 9);
v_quotContext_980_ = lean_ctor_get(v___y_967_, 10);
v_currMacroScope_981_ = lean_ctor_get(v___y_967_, 11);
v_diag_982_ = lean_ctor_get_uint8(v___y_967_, sizeof(void*)*14);
v_cancelTk_x3f_983_ = lean_ctor_get(v___y_967_, 12);
v_suppressElabErrors_984_ = lean_ctor_get_uint8(v___y_967_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_985_ = lean_ctor_get(v___y_967_, 13);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___y_967_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_987_ = v___y_967_;
v_isShared_988_ = v_isSharedCheck_1040_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_inheritedTraceOptions_985_);
lean_inc(v_cancelTk_x3f_983_);
lean_inc(v_currMacroScope_981_);
lean_inc(v_quotContext_980_);
lean_inc(v_maxHeartbeats_979_);
lean_inc(v_initHeartbeats_978_);
lean_inc(v_openDecls_977_);
lean_inc(v_currNamespace_976_);
lean_inc(v_ref_975_);
lean_inc(v_maxRecDepth_974_);
lean_inc(v_currRecDepth_973_);
lean_inc(v_options_972_);
lean_inc(v_fileMap_971_);
lean_inc(v_fileName_970_);
lean_dec(v___y_967_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_1040_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_989_; lean_object* v_traceState_990_; lean_object* v_traces_991_; lean_object* v_ref_992_; lean_object* v___x_994_; 
v___x_989_ = lean_st_ref_get(v___y_968_);
v_traceState_990_ = lean_ctor_get(v___x_989_, 4);
lean_inc_ref(v_traceState_990_);
lean_dec(v___x_989_);
v_traces_991_ = lean_ctor_get(v_traceState_990_, 0);
lean_inc_ref(v_traces_991_);
lean_dec_ref(v_traceState_990_);
v_ref_992_ = l_Lean_replaceRef(v_ref_963_, v_ref_975_);
lean_dec(v_ref_975_);
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 5, v_ref_992_);
v___x_994_ = v___x_987_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_fileName_970_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v_fileMap_971_);
lean_ctor_set(v_reuseFailAlloc_1039_, 2, v_options_972_);
lean_ctor_set(v_reuseFailAlloc_1039_, 3, v_currRecDepth_973_);
lean_ctor_set(v_reuseFailAlloc_1039_, 4, v_maxRecDepth_974_);
lean_ctor_set(v_reuseFailAlloc_1039_, 5, v_ref_992_);
lean_ctor_set(v_reuseFailAlloc_1039_, 6, v_currNamespace_976_);
lean_ctor_set(v_reuseFailAlloc_1039_, 7, v_openDecls_977_);
lean_ctor_set(v_reuseFailAlloc_1039_, 8, v_initHeartbeats_978_);
lean_ctor_set(v_reuseFailAlloc_1039_, 9, v_maxHeartbeats_979_);
lean_ctor_set(v_reuseFailAlloc_1039_, 10, v_quotContext_980_);
lean_ctor_set(v_reuseFailAlloc_1039_, 11, v_currMacroScope_981_);
lean_ctor_set(v_reuseFailAlloc_1039_, 12, v_cancelTk_x3f_983_);
lean_ctor_set(v_reuseFailAlloc_1039_, 13, v_inheritedTraceOptions_985_);
lean_ctor_set_uint8(v_reuseFailAlloc_1039_, sizeof(void*)*14, v_diag_982_);
lean_ctor_set_uint8(v_reuseFailAlloc_1039_, sizeof(void*)*14 + 1, v_suppressElabErrors_984_);
v___x_994_ = v_reuseFailAlloc_1039_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
lean_object* v___x_995_; size_t v_sz_996_; size_t v___x_997_; lean_object* v___x_998_; lean_object* v_msg_999_; lean_object* v___x_1000_; lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1038_; 
v___x_995_ = l_Lean_PersistentArray_toArray___redArg(v_traces_991_);
lean_dec_ref(v_traces_991_);
v_sz_996_ = lean_array_size(v___x_995_);
v___x_997_ = ((size_t)0ULL);
v___x_998_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7_spec__8(v_sz_996_, v___x_997_, v___x_995_);
v_msg_999_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_999_, 0, v_data_962_);
lean_ctor_set(v_msg_999_, 1, v_msg_964_);
lean_ctor_set(v_msg_999_, 2, v___x_998_);
v___x_1000_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(v_msg_999_, v___y_965_, v___y_966_, v___x_994_, v___y_968_);
lean_dec_ref(v___x_994_);
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1003_ = v___x_1000_;
v_isShared_1004_ = v_isSharedCheck_1038_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_1000_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1038_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1005_; lean_object* v_traceState_1006_; lean_object* v_env_1007_; lean_object* v_nextMacroScope_1008_; lean_object* v_ngen_1009_; lean_object* v_auxDeclNGen_1010_; lean_object* v_cache_1011_; lean_object* v_messages_1012_; lean_object* v_infoState_1013_; lean_object* v_snapshotTasks_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1037_; 
v___x_1005_ = lean_st_ref_take(v___y_968_);
v_traceState_1006_ = lean_ctor_get(v___x_1005_, 4);
v_env_1007_ = lean_ctor_get(v___x_1005_, 0);
v_nextMacroScope_1008_ = lean_ctor_get(v___x_1005_, 1);
v_ngen_1009_ = lean_ctor_get(v___x_1005_, 2);
v_auxDeclNGen_1010_ = lean_ctor_get(v___x_1005_, 3);
v_cache_1011_ = lean_ctor_get(v___x_1005_, 5);
v_messages_1012_ = lean_ctor_get(v___x_1005_, 6);
v_infoState_1013_ = lean_ctor_get(v___x_1005_, 7);
v_snapshotTasks_1014_ = lean_ctor_get(v___x_1005_, 8);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1016_ = v___x_1005_;
v_isShared_1017_ = v_isSharedCheck_1037_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_snapshotTasks_1014_);
lean_inc(v_infoState_1013_);
lean_inc(v_messages_1012_);
lean_inc(v_cache_1011_);
lean_inc(v_traceState_1006_);
lean_inc(v_auxDeclNGen_1010_);
lean_inc(v_ngen_1009_);
lean_inc(v_nextMacroScope_1008_);
lean_inc(v_env_1007_);
lean_dec(v___x_1005_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1037_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
uint64_t v_tid_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1035_; 
v_tid_1018_ = lean_ctor_get_uint64(v_traceState_1006_, sizeof(void*)*1);
v_isSharedCheck_1035_ = !lean_is_exclusive(v_traceState_1006_);
if (v_isSharedCheck_1035_ == 0)
{
lean_object* v_unused_1036_; 
v_unused_1036_ = lean_ctor_get(v_traceState_1006_, 0);
lean_dec(v_unused_1036_);
v___x_1020_ = v_traceState_1006_;
v_isShared_1021_ = v_isSharedCheck_1035_;
goto v_resetjp_1019_;
}
else
{
lean_dec(v_traceState_1006_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1035_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1025_; 
v___x_1022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1022_, 0, v_ref_963_);
lean_ctor_set(v___x_1022_, 1, v_a_1001_);
v___x_1023_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_961_, v___x_1022_);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v___x_1023_);
v___x_1025_ = v___x_1020_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v___x_1023_);
lean_ctor_set_uint64(v_reuseFailAlloc_1034_, sizeof(void*)*1, v_tid_1018_);
v___x_1025_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
lean_object* v___x_1027_; 
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 4, v___x_1025_);
v___x_1027_ = v___x_1016_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_env_1007_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v_nextMacroScope_1008_);
lean_ctor_set(v_reuseFailAlloc_1033_, 2, v_ngen_1009_);
lean_ctor_set(v_reuseFailAlloc_1033_, 3, v_auxDeclNGen_1010_);
lean_ctor_set(v_reuseFailAlloc_1033_, 4, v___x_1025_);
lean_ctor_set(v_reuseFailAlloc_1033_, 5, v_cache_1011_);
lean_ctor_set(v_reuseFailAlloc_1033_, 6, v_messages_1012_);
lean_ctor_set(v_reuseFailAlloc_1033_, 7, v_infoState_1013_);
lean_ctor_set(v_reuseFailAlloc_1033_, 8, v_snapshotTasks_1014_);
v___x_1027_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1031_; 
v___x_1028_ = lean_st_ref_set(v___y_968_, v___x_1027_);
v___x_1029_ = lean_box(0);
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 0, v___x_1029_);
v___x_1031_ = v___x_1003_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1029_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
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
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7___boxed(lean_object* v_oldTraces_1041_, lean_object* v_data_1042_, lean_object* v_ref_1043_, lean_object* v_msg_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7(v_oldTraces_1041_, v_data_1042_, v_ref_1043_, v_msg_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_);
lean_dec(v___y_1048_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
return v_res_1050_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__1(void){
_start:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1052_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__0));
v___x_1053_ = l_Lean_stringToMessageData(v___x_1052_);
return v___x_1053_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2(void){
_start:
{
lean_object* v___x_1054_; double v___x_1055_; 
v___x_1054_ = lean_unsigned_to_nat(0u);
v___x_1055_ = lean_float_of_nat(v___x_1054_);
return v___x_1055_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__4(void){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__3));
v___x_1058_ = l_Lean_stringToMessageData(v___x_1057_);
return v___x_1058_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__5(void){
_start:
{
lean_object* v___x_1059_; double v___x_1060_; 
v___x_1059_ = lean_unsigned_to_nat(1000u);
v___x_1060_ = lean_float_of_nat(v___x_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6(lean_object* v_cls_1061_, uint8_t v_collapsed_1062_, lean_object* v_tag_1063_, lean_object* v_opts_1064_, uint8_t v_clsEnabled_1065_, lean_object* v_oldTraces_1066_, lean_object* v_msg_1067_, lean_object* v_resStartStop_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_fst_1074_; lean_object* v_snd_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1165_; 
v_fst_1074_ = lean_ctor_get(v_resStartStop_1068_, 0);
v_snd_1075_ = lean_ctor_get(v_resStartStop_1068_, 1);
v_isSharedCheck_1165_ = !lean_is_exclusive(v_resStartStop_1068_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1077_ = v_resStartStop_1068_;
v_isShared_1078_ = v_isSharedCheck_1165_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_snd_1075_);
lean_inc(v_fst_1074_);
lean_dec(v_resStartStop_1068_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1165_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___y_1080_; lean_object* v___y_1081_; lean_object* v_data_1082_; lean_object* v_fst_1085_; lean_object* v_snd_1086_; lean_object* v___x_1088_; uint8_t v_isShared_1089_; uint8_t v_isSharedCheck_1164_; 
v_fst_1085_ = lean_ctor_get(v_snd_1075_, 0);
v_snd_1086_ = lean_ctor_get(v_snd_1075_, 1);
v_isSharedCheck_1164_ = !lean_is_exclusive(v_snd_1075_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1088_ = v_snd_1075_;
v_isShared_1089_ = v_isSharedCheck_1164_;
goto v_resetjp_1087_;
}
else
{
lean_inc(v_snd_1086_);
lean_inc(v_fst_1085_);
lean_dec(v_snd_1075_);
v___x_1088_ = lean_box(0);
v_isShared_1089_ = v_isSharedCheck_1164_;
goto v_resetjp_1087_;
}
v___jp_1079_:
{
lean_object* v___x_1083_; 
v___x_1083_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7(v_oldTraces_1066_, v_data_1082_, v___y_1081_, v___y_1080_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
lean_dec(v___y_1072_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v___x_1084_; 
lean_dec_ref(v___x_1083_);
v___x_1084_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___redArg(v_fst_1074_);
return v___x_1084_;
}
else
{
lean_dec(v_fst_1074_);
return v___x_1083_;
}
}
v_resetjp_1087_:
{
lean_object* v___x_1090_; uint8_t v___x_1091_; lean_object* v___y_1093_; lean_object* v_a_1094_; uint8_t v___y_1118_; double v___y_1149_; 
v___x_1090_ = l_Lean_trace_profiler;
v___x_1091_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_opts_1064_, v___x_1090_);
if (v___x_1091_ == 0)
{
v___y_1118_ = v___x_1091_;
goto v___jp_1117_;
}
else
{
lean_object* v___x_1154_; uint8_t v___x_1155_; 
v___x_1154_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1155_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_opts_1064_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; lean_object* v___x_1157_; double v___x_1158_; double v___x_1159_; double v___x_1160_; 
v___x_1156_ = l_Lean_trace_profiler_threshold;
v___x_1157_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__9(v_opts_1064_, v___x_1156_);
v___x_1158_ = lean_float_of_nat(v___x_1157_);
v___x_1159_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__5, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__5_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__5);
v___x_1160_ = lean_float_div(v___x_1158_, v___x_1159_);
v___y_1149_ = v___x_1160_;
goto v___jp_1148_;
}
else
{
lean_object* v___x_1161_; lean_object* v___x_1162_; double v___x_1163_; 
v___x_1161_ = l_Lean_trace_profiler_threshold;
v___x_1162_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__9(v_opts_1064_, v___x_1161_);
v___x_1163_ = lean_float_of_nat(v___x_1162_);
v___y_1149_ = v___x_1163_;
goto v___jp_1148_;
}
}
v___jp_1092_:
{
uint8_t v_result_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1100_; 
v_result_1095_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__6(v_fst_1074_);
v___x_1096_ = l_Lean_TraceResult_toEmoji(v_result_1095_);
v___x_1097_ = l_Lean_stringToMessageData(v___x_1096_);
v___x_1098_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__1);
if (v_isShared_1089_ == 0)
{
lean_ctor_set_tag(v___x_1088_, 7);
lean_ctor_set(v___x_1088_, 1, v___x_1098_);
lean_ctor_set(v___x_1088_, 0, v___x_1097_);
v___x_1100_ = v___x_1088_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1097_);
lean_ctor_set(v_reuseFailAlloc_1111_, 1, v___x_1098_);
v___x_1100_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v_m_1102_; 
if (v_isShared_1078_ == 0)
{
lean_ctor_set_tag(v___x_1077_, 7);
lean_ctor_set(v___x_1077_, 1, v_a_1094_);
lean_ctor_set(v___x_1077_, 0, v___x_1100_);
v_m_1102_ = v___x_1077_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1100_);
lean_ctor_set(v_reuseFailAlloc_1110_, 1, v_a_1094_);
v_m_1102_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; double v___x_1105_; lean_object* v_data_1106_; 
v___x_1103_ = lean_box(v_result_1095_);
v___x_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
v___x_1105_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2);
lean_inc_ref(v_tag_1063_);
lean_inc_ref(v___x_1104_);
lean_inc(v_cls_1061_);
v_data_1106_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1106_, 0, v_cls_1061_);
lean_ctor_set(v_data_1106_, 1, v___x_1104_);
lean_ctor_set(v_data_1106_, 2, v_tag_1063_);
lean_ctor_set_float(v_data_1106_, sizeof(void*)*3, v___x_1105_);
lean_ctor_set_float(v_data_1106_, sizeof(void*)*3 + 8, v___x_1105_);
lean_ctor_set_uint8(v_data_1106_, sizeof(void*)*3 + 16, v_collapsed_1062_);
if (v___x_1091_ == 0)
{
lean_dec_ref(v___x_1104_);
lean_dec(v_snd_1086_);
lean_dec(v_fst_1085_);
lean_dec_ref(v_tag_1063_);
lean_dec(v_cls_1061_);
v___y_1080_ = v_m_1102_;
v___y_1081_ = v___y_1093_;
v_data_1082_ = v_data_1106_;
goto v___jp_1079_;
}
else
{
lean_object* v_data_1107_; double v___x_1108_; double v___x_1109_; 
lean_dec_ref(v_data_1106_);
v_data_1107_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1107_, 0, v_cls_1061_);
lean_ctor_set(v_data_1107_, 1, v___x_1104_);
lean_ctor_set(v_data_1107_, 2, v_tag_1063_);
v___x_1108_ = lean_unbox_float(v_fst_1085_);
lean_dec(v_fst_1085_);
lean_ctor_set_float(v_data_1107_, sizeof(void*)*3, v___x_1108_);
v___x_1109_ = lean_unbox_float(v_snd_1086_);
lean_dec(v_snd_1086_);
lean_ctor_set_float(v_data_1107_, sizeof(void*)*3 + 8, v___x_1109_);
lean_ctor_set_uint8(v_data_1107_, sizeof(void*)*3 + 16, v_collapsed_1062_);
v___y_1080_ = v_m_1102_;
v___y_1081_ = v___y_1093_;
v_data_1082_ = v_data_1107_;
goto v___jp_1079_;
}
}
}
}
v___jp_1112_:
{
lean_object* v_ref_1113_; lean_object* v___x_1114_; 
v_ref_1113_ = lean_ctor_get(v___y_1071_, 5);
lean_inc(v___y_1072_);
lean_inc_ref(v___y_1071_);
lean_inc(v___y_1070_);
lean_inc_ref(v___y_1069_);
lean_inc(v_fst_1074_);
v___x_1114_ = lean_apply_6(v_msg_1067_, v_fst_1074_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, lean_box(0));
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_a_1115_; 
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref(v___x_1114_);
lean_inc(v_ref_1113_);
v___y_1093_ = v_ref_1113_;
v_a_1094_ = v_a_1115_;
goto v___jp_1092_;
}
else
{
lean_object* v___x_1116_; 
lean_dec_ref(v___x_1114_);
v___x_1116_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__4);
lean_inc(v_ref_1113_);
v___y_1093_ = v_ref_1113_;
v_a_1094_ = v___x_1116_;
goto v___jp_1092_;
}
}
v___jp_1117_:
{
if (v_clsEnabled_1065_ == 0)
{
if (v___y_1118_ == 0)
{
lean_object* v___x_1119_; lean_object* v_traceState_1120_; lean_object* v_env_1121_; lean_object* v_nextMacroScope_1122_; lean_object* v_ngen_1123_; lean_object* v_auxDeclNGen_1124_; lean_object* v_cache_1125_; lean_object* v_messages_1126_; lean_object* v_infoState_1127_; lean_object* v_snapshotTasks_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1147_; 
lean_del_object(v___x_1088_);
lean_dec(v_snd_1086_);
lean_dec(v_fst_1085_);
lean_del_object(v___x_1077_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec_ref(v_msg_1067_);
lean_dec_ref(v_tag_1063_);
lean_dec(v_cls_1061_);
v___x_1119_ = lean_st_ref_take(v___y_1072_);
v_traceState_1120_ = lean_ctor_get(v___x_1119_, 4);
v_env_1121_ = lean_ctor_get(v___x_1119_, 0);
v_nextMacroScope_1122_ = lean_ctor_get(v___x_1119_, 1);
v_ngen_1123_ = lean_ctor_get(v___x_1119_, 2);
v_auxDeclNGen_1124_ = lean_ctor_get(v___x_1119_, 3);
v_cache_1125_ = lean_ctor_get(v___x_1119_, 5);
v_messages_1126_ = lean_ctor_get(v___x_1119_, 6);
v_infoState_1127_ = lean_ctor_get(v___x_1119_, 7);
v_snapshotTasks_1128_ = lean_ctor_get(v___x_1119_, 8);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1130_ = v___x_1119_;
v_isShared_1131_ = v_isSharedCheck_1147_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_snapshotTasks_1128_);
lean_inc(v_infoState_1127_);
lean_inc(v_messages_1126_);
lean_inc(v_cache_1125_);
lean_inc(v_traceState_1120_);
lean_inc(v_auxDeclNGen_1124_);
lean_inc(v_ngen_1123_);
lean_inc(v_nextMacroScope_1122_);
lean_inc(v_env_1121_);
lean_dec(v___x_1119_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1147_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
uint64_t v_tid_1132_; lean_object* v_traces_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1146_; 
v_tid_1132_ = lean_ctor_get_uint64(v_traceState_1120_, sizeof(void*)*1);
v_traces_1133_ = lean_ctor_get(v_traceState_1120_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v_traceState_1120_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1135_ = v_traceState_1120_;
v_isShared_1136_ = v_isSharedCheck_1146_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_traces_1133_);
lean_dec(v_traceState_1120_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1146_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1137_; lean_object* v___x_1139_; 
v___x_1137_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1066_, v_traces_1133_);
lean_dec_ref(v_traces_1133_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v___x_1137_);
v___x_1139_ = v___x_1135_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1137_);
lean_ctor_set_uint64(v_reuseFailAlloc_1145_, sizeof(void*)*1, v_tid_1132_);
v___x_1139_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
lean_object* v___x_1141_; 
if (v_isShared_1131_ == 0)
{
lean_ctor_set(v___x_1130_, 4, v___x_1139_);
v___x_1141_ = v___x_1130_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_env_1121_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v_nextMacroScope_1122_);
lean_ctor_set(v_reuseFailAlloc_1144_, 2, v_ngen_1123_);
lean_ctor_set(v_reuseFailAlloc_1144_, 3, v_auxDeclNGen_1124_);
lean_ctor_set(v_reuseFailAlloc_1144_, 4, v___x_1139_);
lean_ctor_set(v_reuseFailAlloc_1144_, 5, v_cache_1125_);
lean_ctor_set(v_reuseFailAlloc_1144_, 6, v_messages_1126_);
lean_ctor_set(v_reuseFailAlloc_1144_, 7, v_infoState_1127_);
lean_ctor_set(v_reuseFailAlloc_1144_, 8, v_snapshotTasks_1128_);
v___x_1141_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = lean_st_ref_set(v___y_1072_, v___x_1141_);
lean_dec(v___y_1072_);
v___x_1143_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___redArg(v_fst_1074_);
return v___x_1143_;
}
}
}
}
}
else
{
goto v___jp_1112_;
}
}
else
{
goto v___jp_1112_;
}
}
v___jp_1148_:
{
double v___x_1150_; double v___x_1151_; double v___x_1152_; uint8_t v___x_1153_; 
v___x_1150_ = lean_unbox_float(v_snd_1086_);
v___x_1151_ = lean_unbox_float(v_fst_1085_);
v___x_1152_ = lean_float_sub(v___x_1150_, v___x_1151_);
v___x_1153_ = lean_float_decLt(v___y_1149_, v___x_1152_);
v___y_1118_ = v___x_1153_;
goto v___jp_1117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___boxed(lean_object* v_cls_1166_, lean_object* v_collapsed_1167_, lean_object* v_tag_1168_, lean_object* v_opts_1169_, lean_object* v_clsEnabled_1170_, lean_object* v_oldTraces_1171_, lean_object* v_msg_1172_, lean_object* v_resStartStop_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
uint8_t v_collapsed_boxed_1179_; uint8_t v_clsEnabled_boxed_1180_; lean_object* v_res_1181_; 
v_collapsed_boxed_1179_ = lean_unbox(v_collapsed_1167_);
v_clsEnabled_boxed_1180_ = lean_unbox(v_clsEnabled_1170_);
v_res_1181_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6(v_cls_1166_, v_collapsed_boxed_1179_, v_tag_1168_, v_opts_1169_, v_clsEnabled_boxed_1180_, v_oldTraces_1171_, v_msg_1172_, v_resStartStop_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
lean_dec_ref(v_opts_1169_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(lean_object* v_cls_1185_, lean_object* v_msg_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_ref_1192_; lean_object* v___x_1193_; lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1238_; 
v_ref_1192_ = lean_ctor_get(v___y_1189_, 5);
v___x_1193_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0_spec__0(v_msg_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1196_ = v___x_1193_;
v_isShared_1197_ = v_isSharedCheck_1238_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1193_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1238_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1198_; lean_object* v_traceState_1199_; lean_object* v_env_1200_; lean_object* v_nextMacroScope_1201_; lean_object* v_ngen_1202_; lean_object* v_auxDeclNGen_1203_; lean_object* v_cache_1204_; lean_object* v_messages_1205_; lean_object* v_infoState_1206_; lean_object* v_snapshotTasks_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1237_; 
v___x_1198_ = lean_st_ref_take(v___y_1190_);
v_traceState_1199_ = lean_ctor_get(v___x_1198_, 4);
v_env_1200_ = lean_ctor_get(v___x_1198_, 0);
v_nextMacroScope_1201_ = lean_ctor_get(v___x_1198_, 1);
v_ngen_1202_ = lean_ctor_get(v___x_1198_, 2);
v_auxDeclNGen_1203_ = lean_ctor_get(v___x_1198_, 3);
v_cache_1204_ = lean_ctor_get(v___x_1198_, 5);
v_messages_1205_ = lean_ctor_get(v___x_1198_, 6);
v_infoState_1206_ = lean_ctor_get(v___x_1198_, 7);
v_snapshotTasks_1207_ = lean_ctor_get(v___x_1198_, 8);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1209_ = v___x_1198_;
v_isShared_1210_ = v_isSharedCheck_1237_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_snapshotTasks_1207_);
lean_inc(v_infoState_1206_);
lean_inc(v_messages_1205_);
lean_inc(v_cache_1204_);
lean_inc(v_traceState_1199_);
lean_inc(v_auxDeclNGen_1203_);
lean_inc(v_ngen_1202_);
lean_inc(v_nextMacroScope_1201_);
lean_inc(v_env_1200_);
lean_dec(v___x_1198_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1237_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
uint64_t v_tid_1211_; lean_object* v_traces_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1236_; 
v_tid_1211_ = lean_ctor_get_uint64(v_traceState_1199_, sizeof(void*)*1);
v_traces_1212_ = lean_ctor_get(v_traceState_1199_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v_traceState_1199_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1214_ = v_traceState_1199_;
v_isShared_1215_ = v_isSharedCheck_1236_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_traces_1212_);
lean_dec(v_traceState_1199_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1236_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1216_; double v___x_1217_; uint8_t v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1226_; 
v___x_1216_ = lean_box(0);
v___x_1217_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2);
v___x_1218_ = 0;
v___x_1219_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__0));
v___x_1220_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1220_, 0, v_cls_1185_);
lean_ctor_set(v___x_1220_, 1, v___x_1216_);
lean_ctor_set(v___x_1220_, 2, v___x_1219_);
lean_ctor_set_float(v___x_1220_, sizeof(void*)*3, v___x_1217_);
lean_ctor_set_float(v___x_1220_, sizeof(void*)*3 + 8, v___x_1217_);
lean_ctor_set_uint8(v___x_1220_, sizeof(void*)*3 + 16, v___x_1218_);
v___x_1221_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__1));
v___x_1222_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1220_);
lean_ctor_set(v___x_1222_, 1, v_a_1194_);
lean_ctor_set(v___x_1222_, 2, v___x_1221_);
lean_inc(v_ref_1192_);
v___x_1223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1223_, 0, v_ref_1192_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
v___x_1224_ = l_Lean_PersistentArray_push___redArg(v_traces_1212_, v___x_1223_);
if (v_isShared_1215_ == 0)
{
lean_ctor_set(v___x_1214_, 0, v___x_1224_);
v___x_1226_ = v___x_1214_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v___x_1224_);
lean_ctor_set_uint64(v_reuseFailAlloc_1235_, sizeof(void*)*1, v_tid_1211_);
v___x_1226_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
lean_object* v___x_1228_; 
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 4, v___x_1226_);
v___x_1228_ = v___x_1209_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_env_1200_);
lean_ctor_set(v_reuseFailAlloc_1234_, 1, v_nextMacroScope_1201_);
lean_ctor_set(v_reuseFailAlloc_1234_, 2, v_ngen_1202_);
lean_ctor_set(v_reuseFailAlloc_1234_, 3, v_auxDeclNGen_1203_);
lean_ctor_set(v_reuseFailAlloc_1234_, 4, v___x_1226_);
lean_ctor_set(v_reuseFailAlloc_1234_, 5, v_cache_1204_);
lean_ctor_set(v_reuseFailAlloc_1234_, 6, v_messages_1205_);
lean_ctor_set(v_reuseFailAlloc_1234_, 7, v_infoState_1206_);
lean_ctor_set(v_reuseFailAlloc_1234_, 8, v_snapshotTasks_1207_);
v___x_1228_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1232_; 
v___x_1229_ = lean_st_ref_set(v___y_1190_, v___x_1228_);
v___x_1230_ = lean_box(0);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 0, v___x_1230_);
v___x_1232_ = v___x_1196_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v___x_1230_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___boxed(lean_object* v_cls_1239_, lean_object* v_msg_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1239_, v_msg_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
return v_res_1246_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__5));
v___x_1258_ = l_Lean_stringToMessageData(v___x_1257_);
return v___x_1258_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8(void){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__7));
v___x_1261_ = l_Lean_stringToMessageData(v___x_1260_);
return v___x_1261_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__9));
v___x_1264_ = l_Lean_stringToMessageData(v___x_1263_);
return v___x_1264_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__14(void){
_start:
{
lean_object* v___x_1267_; 
v___x_1267_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1267_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15(void){
_start:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__14, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__14_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__14);
v___x_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
return v___x_1269_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12(void){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1270_ = lean_box(0);
v___x_1271_ = lean_unsigned_to_nat(16u);
v___x_1272_ = lean_mk_array(v___x_1271_, v___x_1270_);
return v___x_1272_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13(void){
_start:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__12);
v___x_1274_ = lean_unsigned_to_nat(0u);
v___x_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
lean_ctor_set(v___x_1275_, 1, v___x_1273_);
return v___x_1275_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__16(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; uint8_t v___x_1278_; lean_object* v___x_1279_; 
v___x_1276_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15);
v___x_1277_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13);
v___x_1278_ = 1;
v___x_1279_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1279_, 0, v___x_1277_);
lean_ctor_set(v___x_1279_, 1, v___x_1276_);
lean_ctor_set_uint8(v___x_1279_, sizeof(void*)*2, v___x_1278_);
return v___x_1279_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__18(void){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1280_ = lean_unsigned_to_nat(32u);
v___x_1281_ = lean_mk_empty_array_with_capacity(v___x_1280_);
v___x_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
return v___x_1282_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19(void){
_start:
{
size_t v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1283_ = ((size_t)5ULL);
v___x_1284_ = lean_unsigned_to_nat(0u);
v___x_1285_ = lean_unsigned_to_nat(32u);
v___x_1286_ = lean_mk_empty_array_with_capacity(v___x_1285_);
v___x_1287_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__18, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__18_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__18);
v___x_1288_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
lean_ctor_set(v___x_1288_, 1, v___x_1286_);
lean_ctor_set(v___x_1288_, 2, v___x_1284_);
lean_ctor_set(v___x_1288_, 3, v___x_1284_);
lean_ctor_set_usize(v___x_1288_, 4, v___x_1283_);
return v___x_1288_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1289_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__19);
v___x_1290_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15);
v___x_1291_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
lean_ctor_set(v___x_1291_, 2, v___x_1290_);
lean_ctor_set(v___x_1291_, 3, v___x_1289_);
return v___x_1291_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1292_ = lean_unsigned_to_nat(0u);
v___x_1293_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15);
v___x_1294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
lean_ctor_set(v___x_1294_, 1, v___x_1292_);
return v___x_1294_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21(void){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1295_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__20);
v___x_1296_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__17);
v___x_1297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
lean_ctor_set(v___x_1297_, 1, v___x_1295_);
return v___x_1297_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23(void){
_start:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1299_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__22));
v___x_1300_ = l_Lean_stringToMessageData(v___x_1299_);
return v___x_1300_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25(void){
_start:
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__24));
v___x_1303_ = l_Lean_stringToMessageData(v___x_1302_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(lean_object* v_declName_1304_, lean_object* v_as_1305_, size_t v_i_1306_, size_t v_stop_1307_, lean_object* v_b_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_usize_dec_eq(v_i_1306_, v_stop_1307_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1315_ = lean_array_uget_borrowed(v_as_1305_, v_i_1306_);
lean_inc(v___y_1312_);
lean_inc_ref(v___y_1311_);
lean_inc(v___y_1310_);
lean_inc_ref(v___y_1309_);
lean_inc(v___x_1315_);
lean_inc(v_declName_1304_);
v___x_1316_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1304_, v___x_1315_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; size_t v___x_1318_; size_t v___x_1319_; 
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
lean_inc(v_a_1317_);
lean_dec_ref(v___x_1316_);
v___x_1318_ = ((size_t)1ULL);
v___x_1319_ = lean_usize_add(v_i_1306_, v___x_1318_);
v_i_1306_ = v___x_1319_;
v_b_1308_ = v_a_1317_;
goto _start;
}
else
{
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v_declName_1304_);
return v___x_1316_;
}
}
else
{
lean_object* v___x_1321_; 
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v_declName_1304_);
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v_b_1308_);
return v___x_1321_;
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27(void){
_start:
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1323_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__26));
v___x_1324_ = l_Lean_stringToMessageData(v___x_1323_);
return v___x_1324_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29(void){
_start:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__28));
v___x_1327_ = l_Lean_stringToMessageData(v___x_1326_);
return v___x_1327_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31(void){
_start:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1329_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__30));
v___x_1330_ = l_Lean_stringToMessageData(v___x_1329_);
return v___x_1330_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33(void){
_start:
{
lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1332_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__32));
v___x_1333_ = l_Lean_stringToMessageData(v___x_1332_);
return v___x_1333_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35(void){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__34));
v___x_1336_ = l_Lean_stringToMessageData(v___x_1335_);
return v___x_1336_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__36));
v___x_1339_ = l_Lean_stringToMessageData(v___x_1338_);
return v___x_1339_;
}
}
static double _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38(void){
_start:
{
lean_object* v___x_1340_; double v___x_1341_; 
v___x_1340_ = lean_unsigned_to_nat(1000000000u);
v___x_1341_ = lean_float_of_nat(v___x_1340_);
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(lean_object* v_val_1342_, lean_object* v___x_1343_, lean_object* v_declName_1344_, lean_object* v_____r_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; uint8_t v___x_1353_; 
v___x_1351_ = lean_array_get_size(v_val_1342_);
v___x_1352_ = lean_box(0);
v___x_1353_ = lean_nat_dec_lt(v___x_1343_, v___x_1351_);
if (v___x_1353_ == 0)
{
lean_object* v___x_1354_; 
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v_declName_1344_);
v___x_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1352_);
return v___x_1354_;
}
else
{
uint8_t v___x_1355_; 
v___x_1355_ = lean_nat_dec_le(v___x_1351_, v___x_1351_);
if (v___x_1355_ == 0)
{
if (v___x_1353_ == 0)
{
lean_object* v___x_1356_; 
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v_declName_1344_);
v___x_1356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1352_);
return v___x_1356_;
}
else
{
size_t v___x_1357_; size_t v___x_1358_; lean_object* v___x_1359_; 
v___x_1357_ = ((size_t)0ULL);
v___x_1358_ = lean_usize_of_nat(v___x_1351_);
v___x_1359_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1344_, v_val_1342_, v___x_1357_, v___x_1358_, v___x_1352_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
return v___x_1359_;
}
}
else
{
size_t v___x_1360_; size_t v___x_1361_; lean_object* v___x_1362_; 
v___x_1360_ = ((size_t)0ULL);
v___x_1361_ = lean_usize_of_nat(v___x_1351_);
v___x_1362_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1344_, v_val_1342_, v___x_1360_, v___x_1361_, v___x_1352_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
return v___x_1362_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(lean_object* v_declName_1363_, lean_object* v_mvarId_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_){
_start:
{
lean_object* v_options_1382_; uint8_t v_hasTrace_1383_; lean_object* v_cls_1384_; 
v_options_1382_ = lean_ctor_get(v_a_1367_, 2);
v_hasTrace_1383_ = lean_ctor_get_uint8(v_options_1382_, sizeof(void*)*1);
v_cls_1384_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4));
if (v_hasTrace_1383_ == 0)
{
lean_object* v___x_1385_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1385_ = l_Lean_Elab_Eqns_tryURefl(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; uint8_t v___x_1387_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc(v_a_1386_);
lean_dec_ref(v___x_1385_);
v___x_1387_ = lean_unbox(v_a_1386_);
lean_dec(v_a_1386_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1388_ = l_Lean_Elab_Eqns_tryContradiction(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; uint8_t v___x_1390_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
lean_inc(v_a_1389_);
lean_dec_ref(v___x_1388_);
v___x_1390_ = lean_unbox(v_a_1389_);
lean_dec(v_a_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1391_ = l_Lean_Elab_Eqns_whnfReducibleLHS_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1391_) == 0)
{
lean_object* v_a_1392_; 
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
lean_inc(v_a_1392_);
lean_dec_ref(v___x_1391_);
if (lean_obj_tag(v_a_1392_) == 1)
{
lean_object* v_val_1393_; lean_object* v___x_1394_; 
lean_dec(v_mvarId_1364_);
v_val_1393_ = lean_ctor_get(v_a_1392_, 0);
lean_inc(v_val_1393_);
lean_dec_ref(v_a_1392_);
v___x_1394_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_a_1395_; uint8_t v___x_1396_; 
v_a_1395_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_a_1395_);
lean_dec_ref(v___x_1394_);
v___x_1396_ = lean_unbox(v_a_1395_);
lean_dec(v_a_1395_);
if (v___x_1396_ == 0)
{
v_mvarId_1364_ = v_val_1393_;
goto _start;
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1398_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6);
v___x_1399_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1398_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_dec_ref(v___x_1399_);
v_mvarId_1364_ = v_val_1393_;
goto _start;
}
else
{
lean_dec(v_val_1393_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_1399_;
}
}
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
lean_dec(v_val_1393_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_1401_ = lean_ctor_get(v___x_1394_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1394_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1394_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1394_);
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
else
{
lean_object* v___x_1409_; 
lean_dec(v_a_1392_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1409_ = l_Lean_Elab_Eqns_simpMatch_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_a_1410_; 
v_a_1410_ = lean_ctor_get(v___x_1409_, 0);
lean_inc(v_a_1410_);
lean_dec_ref(v___x_1409_);
if (lean_obj_tag(v_a_1410_) == 1)
{
lean_object* v_val_1411_; lean_object* v___x_1412_; 
lean_dec(v_mvarId_1364_);
v_val_1411_ = lean_ctor_get(v_a_1410_, 0);
lean_inc(v_val_1411_);
lean_dec_ref(v_a_1410_);
v___x_1412_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v_a_1413_; uint8_t v___x_1414_; 
v_a_1413_ = lean_ctor_get(v___x_1412_, 0);
lean_inc(v_a_1413_);
lean_dec_ref(v___x_1412_);
v___x_1414_ = lean_unbox(v_a_1413_);
lean_dec(v_a_1413_);
if (v___x_1414_ == 0)
{
v_mvarId_1364_ = v_val_1411_;
goto _start;
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8);
v___x_1417_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1416_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_dec_ref(v___x_1417_);
v_mvarId_1364_ = v_val_1411_;
goto _start;
}
else
{
lean_dec(v_val_1411_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_1417_;
}
}
}
else
{
lean_object* v_a_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1426_; 
lean_dec(v_val_1411_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_1419_ = lean_ctor_get(v___x_1412_, 0);
v_isSharedCheck_1426_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1426_ == 0)
{
v___x_1421_ = v___x_1412_;
v_isShared_1422_ = v_isSharedCheck_1426_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_a_1419_);
lean_dec(v___x_1412_);
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
else
{
uint8_t v___x_1427_; lean_object* v___x_1428_; 
lean_dec(v_a_1410_);
v___x_1427_ = 1;
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1428_ = l_Lean_Elab_Eqns_simpIf_x3f(v_mvarId_1364_, v___x_1427_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref(v___x_1428_);
if (lean_obj_tag(v_a_1429_) == 1)
{
lean_object* v_val_1430_; lean_object* v___x_1431_; 
lean_dec(v_mvarId_1364_);
v_val_1430_ = lean_ctor_get(v_a_1429_, 0);
lean_inc(v_val_1430_);
lean_dec_ref(v_a_1429_);
v___x_1431_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v_a_1432_; uint8_t v___x_1433_; 
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_a_1432_);
lean_dec_ref(v___x_1431_);
v___x_1433_ = lean_unbox(v_a_1432_);
lean_dec(v_a_1432_);
if (v___x_1433_ == 0)
{
v_mvarId_1364_ = v_val_1430_;
goto _start;
}
else
{
lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1435_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10);
v___x_1436_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1435_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_dec_ref(v___x_1436_);
v_mvarId_1364_ = v_val_1430_;
goto _start;
}
else
{
lean_dec(v_val_1430_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_1436_;
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
lean_dec(v_val_1430_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_1438_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1431_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1431_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
else
{
lean_object* v___x_1446_; lean_object* v___x_1447_; uint8_t v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
lean_dec(v_a_1429_);
v___x_1446_ = lean_unsigned_to_nat(100000u);
v___x_1447_ = lean_unsigned_to_nat(2u);
v___x_1448_ = 0;
v___x_1449_ = lean_box(0);
v___x_1450_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1450_, 0, v___x_1446_);
lean_ctor_set(v___x_1450_, 1, v___x_1447_);
lean_ctor_set(v___x_1450_, 2, v___x_1449_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 1, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 2, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 3, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 4, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 5, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 6, v___x_1448_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 7, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 8, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 9, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 10, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 11, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 12, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 13, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 14, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 15, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 16, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 17, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 18, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 19, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 20, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 21, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 22, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 23, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 24, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 25, v___x_1427_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 26, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 27, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1450_, sizeof(void*)*3 + 28, v_hasTrace_1383_);
v___x_1451_ = lean_unsigned_to_nat(0u);
v___x_1452_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11));
v___x_1453_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__16, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__16_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__16);
v___x_1454_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1450_, v___x_1452_, v___x_1453_, v_a_1365_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1454_) == 0)
{
lean_object* v_a_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_a_1455_ = lean_ctor_get(v___x_1454_, 0);
lean_inc(v_a_1455_);
lean_dec_ref(v___x_1454_);
v___x_1456_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1457_ = l_Lean_Meta_simpTargetStar(v_mvarId_1364_, v_a_1455_, v___x_1452_, v___x_1449_, v___x_1456_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; lean_object* v_fst_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1607_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_a_1458_);
lean_dec_ref(v___x_1457_);
v_fst_1459_ = lean_ctor_get(v_a_1458_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_a_1458_);
if (v_isSharedCheck_1607_ == 0)
{
lean_object* v_unused_1608_; 
v_unused_1608_ = lean_ctor_get(v_a_1458_, 1);
lean_dec(v_unused_1608_);
v___x_1461_ = v_a_1458_;
v_isShared_1462_ = v_isSharedCheck_1607_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_fst_1459_);
lean_dec(v_a_1458_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1607_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
switch(lean_obj_tag(v_fst_1459_))
{
case 0:
{
lean_object* v___x_1463_; 
lean_del_object(v___x_1461_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_1463_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1475_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1466_ = v___x_1463_;
v_isShared_1467_ = v_isSharedCheck_1475_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_a_1464_);
lean_dec(v___x_1463_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1475_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
uint8_t v___x_1468_; 
v___x_1468_ = lean_unbox(v_a_1464_);
lean_dec(v_a_1464_);
if (v___x_1468_ == 0)
{
lean_object* v___x_1469_; lean_object* v___x_1471_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
v___x_1469_ = lean_box(0);
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 0, v___x_1469_);
v___x_1471_ = v___x_1466_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v___x_1469_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
else
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
lean_del_object(v___x_1466_);
v___x_1473_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23);
v___x_1474_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1473_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
return v___x_1474_;
}
}
}
else
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1483_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
v_a_1476_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1478_ = v___x_1463_;
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1463_);
v___x_1478_ = lean_box(0);
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
v_resetjp_1477_:
{
lean_object* v___x_1481_; 
if (v_isShared_1479_ == 0)
{
v___x_1481_ = v___x_1478_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_a_1476_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
case 1:
{
lean_object* v___x_1484_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_declName_1363_);
lean_inc(v_mvarId_1364_);
v___x_1484_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(v_mvarId_1364_, v_declName_1363_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1484_) == 0)
{
lean_object* v_a_1485_; 
v_a_1485_ = lean_ctor_get(v___x_1484_, 0);
lean_inc(v_a_1485_);
lean_dec_ref(v___x_1484_);
if (lean_obj_tag(v_a_1485_) == 1)
{
lean_object* v_val_1486_; lean_object* v___x_1487_; 
lean_del_object(v___x_1461_);
lean_dec(v_mvarId_1364_);
v_val_1486_ = lean_ctor_get(v_a_1485_, 0);
lean_inc(v_val_1486_);
lean_dec_ref(v_a_1485_);
v___x_1487_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v_a_1488_; uint8_t v___x_1489_; 
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_a_1488_);
lean_dec_ref(v___x_1487_);
v___x_1489_ = lean_unbox(v_a_1488_);
lean_dec(v_a_1488_);
if (v___x_1489_ == 0)
{
v_mvarId_1364_ = v_val_1486_;
goto _start;
}
else
{
lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1491_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25);
v___x_1492_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1491_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_dec_ref(v___x_1492_);
v_mvarId_1364_ = v_val_1486_;
goto _start;
}
else
{
lean_dec(v_val_1486_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_1492_;
}
}
}
else
{
lean_object* v_a_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1501_; 
lean_dec(v_val_1486_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_1494_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1496_ = v___x_1487_;
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_a_1494_);
lean_dec(v___x_1487_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
lean_object* v___x_1499_; 
if (v_isShared_1497_ == 0)
{
v___x_1499_ = v___x_1496_;
goto v_reusejp_1498_;
}
else
{
lean_object* v_reuseFailAlloc_1500_; 
v_reuseFailAlloc_1500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1500_, 0, v_a_1494_);
v___x_1499_ = v_reuseFailAlloc_1500_;
goto v_reusejp_1498_;
}
v_reusejp_1498_:
{
return v___x_1499_;
}
}
}
}
else
{
lean_object* v___x_1502_; 
lean_dec(v_a_1485_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1502_ = l_Lean_Meta_casesOnStuckLHS_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1574_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1505_ = v___x_1502_;
v_isShared_1506_ = v_isSharedCheck_1574_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1502_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1574_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
if (lean_obj_tag(v_a_1503_) == 1)
{
lean_object* v_val_1507_; lean_object* v___y_1509_; lean_object* v___y_1510_; lean_object* v___y_1511_; lean_object* v___y_1512_; lean_object* v___x_1529_; 
lean_del_object(v___x_1461_);
lean_dec(v_mvarId_1364_);
v_val_1507_ = lean_ctor_get(v_a_1503_, 0);
lean_inc(v_val_1507_);
lean_dec_ref(v_a_1503_);
v___x_1529_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; uint8_t v___x_1531_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc(v_a_1530_);
lean_dec_ref(v___x_1529_);
v___x_1531_ = lean_unbox(v_a_1530_);
lean_dec(v_a_1530_);
if (v___x_1531_ == 0)
{
v___y_1509_ = v_a_1365_;
v___y_1510_ = v_a_1366_;
v___y_1511_ = v_a_1367_;
v___y_1512_ = v_a_1368_;
goto v___jp_1508_;
}
else
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27);
v___x_1533_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1532_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_dec_ref(v___x_1533_);
v___y_1509_ = v_a_1365_;
v___y_1510_ = v_a_1366_;
v___y_1511_ = v_a_1367_;
v___y_1512_ = v_a_1368_;
goto v___jp_1508_;
}
else
{
lean_dec(v_val_1507_);
lean_del_object(v___x_1505_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_1533_;
}
}
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
lean_dec(v_val_1507_);
lean_del_object(v___x_1505_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_1534_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1529_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1529_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
v___jp_1508_:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; uint8_t v___x_1515_; 
v___x_1513_ = lean_array_get_size(v_val_1507_);
v___x_1514_ = lean_box(0);
v___x_1515_ = lean_nat_dec_lt(v___x_1451_, v___x_1513_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1517_; 
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v_val_1507_);
lean_dec(v_declName_1363_);
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 0, v___x_1514_);
v___x_1517_ = v___x_1505_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1518_; 
v_reuseFailAlloc_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1518_, 0, v___x_1514_);
v___x_1517_ = v_reuseFailAlloc_1518_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
return v___x_1517_;
}
}
else
{
uint8_t v___x_1519_; 
v___x_1519_ = lean_nat_dec_le(v___x_1513_, v___x_1513_);
if (v___x_1519_ == 0)
{
if (v___x_1515_ == 0)
{
lean_object* v___x_1521_; 
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v_val_1507_);
lean_dec(v_declName_1363_);
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 0, v___x_1514_);
v___x_1521_ = v___x_1505_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v___x_1514_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
else
{
size_t v___x_1523_; size_t v___x_1524_; lean_object* v___x_1525_; 
lean_del_object(v___x_1505_);
v___x_1523_ = ((size_t)0ULL);
v___x_1524_ = lean_usize_of_nat(v___x_1513_);
v___x_1525_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1363_, v_val_1507_, v___x_1523_, v___x_1524_, v___x_1514_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
lean_dec(v_val_1507_);
return v___x_1525_;
}
}
else
{
size_t v___x_1526_; size_t v___x_1527_; lean_object* v___x_1528_; 
lean_del_object(v___x_1505_);
v___x_1526_ = ((size_t)0ULL);
v___x_1527_ = lean_usize_of_nat(v___x_1513_);
v___x_1528_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1363_, v_val_1507_, v___x_1526_, v___x_1527_, v___x_1514_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
lean_dec(v_val_1507_);
return v___x_1528_;
}
}
}
}
else
{
lean_object* v___x_1542_; 
lean_del_object(v___x_1505_);
lean_dec(v_a_1503_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1542_ = l_Lean_Meta_splitTarget_x3f(v_mvarId_1364_, v___x_1427_, v___x_1427_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; 
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_a_1543_);
lean_dec_ref(v___x_1542_);
if (lean_obj_tag(v_a_1543_) == 1)
{
lean_object* v_val_1544_; lean_object* v___x_1545_; 
lean_del_object(v___x_1461_);
lean_dec(v_mvarId_1364_);
v_val_1544_ = lean_ctor_get(v_a_1543_, 0);
lean_inc(v_val_1544_);
lean_dec_ref(v_a_1543_);
v___x_1545_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v_a_1546_; uint8_t v___x_1547_; 
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
lean_inc(v_a_1546_);
lean_dec_ref(v___x_1545_);
v___x_1547_ = lean_unbox(v_a_1546_);
lean_dec(v_a_1546_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; 
v___x_1548_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(v_declName_1363_, v_val_1544_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
return v___x_1548_;
}
else
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29);
v___x_1550_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1549_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v___x_1551_; 
lean_dec_ref(v___x_1550_);
v___x_1551_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(v_declName_1363_, v_val_1544_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
return v___x_1551_;
}
else
{
lean_dec(v_val_1544_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_1550_;
}
}
}
else
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1559_; 
lean_dec(v_val_1544_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_1552_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1554_ = v___x_1545_;
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1545_);
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
else
{
lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1563_; 
lean_dec(v_a_1543_);
lean_dec(v_declName_1363_);
v___x_1560_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31);
v___x_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1561_, 0, v_mvarId_1364_);
if (v_isShared_1462_ == 0)
{
lean_ctor_set_tag(v___x_1461_, 7);
lean_ctor_set(v___x_1461_, 1, v___x_1561_);
lean_ctor_set(v___x_1461_, 0, v___x_1560_);
v___x_1563_ = v___x_1461_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v___x_1560_);
lean_ctor_set(v_reuseFailAlloc_1565_, 1, v___x_1561_);
v___x_1563_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
lean_object* v___x_1564_; 
v___x_1564_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_1563_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
return v___x_1564_;
}
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
lean_del_object(v___x_1461_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1566_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1542_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1542_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
}
}
else
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
lean_del_object(v___x_1461_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
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
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
lean_del_object(v___x_1461_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1583_ = lean_ctor_get(v___x_1484_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1484_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1484_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1484_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
default: 
{
lean_object* v_mvarId_1591_; lean_object* v___x_1592_; 
lean_del_object(v___x_1461_);
lean_dec(v_mvarId_1364_);
v_mvarId_1591_ = lean_ctor_get(v_fst_1459_, 0);
lean_inc(v_mvarId_1591_);
lean_dec_ref(v_fst_1459_);
v___x_1592_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1592_) == 0)
{
lean_object* v_a_1593_; uint8_t v___x_1594_; 
v_a_1593_ = lean_ctor_get(v___x_1592_, 0);
lean_inc(v_a_1593_);
lean_dec_ref(v___x_1592_);
v___x_1594_ = lean_unbox(v_a_1593_);
lean_dec(v_a_1593_);
if (v___x_1594_ == 0)
{
v_mvarId_1364_ = v_mvarId_1591_;
goto _start;
}
else
{
lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1596_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33);
v___x_1597_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1596_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1597_) == 0)
{
lean_dec_ref(v___x_1597_);
v_mvarId_1364_ = v_mvarId_1591_;
goto _start;
}
else
{
lean_dec(v_mvarId_1591_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_1597_;
}
}
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
lean_dec(v_mvarId_1591_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_1599_ = lean_ctor_get(v___x_1592_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___x_1592_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1592_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1616_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1609_ = lean_ctor_get(v___x_1457_, 0);
v_isSharedCheck_1616_ = !lean_is_exclusive(v___x_1457_);
if (v_isSharedCheck_1616_ == 0)
{
v___x_1611_ = v___x_1457_;
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1457_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1616_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___x_1614_; 
if (v_isShared_1612_ == 0)
{
v___x_1614_ = v___x_1611_;
goto v_reusejp_1613_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v_a_1609_);
v___x_1614_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1613_;
}
v_reusejp_1613_:
{
return v___x_1614_;
}
}
}
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; uint8_t v_isShared_1620_; uint8_t v_isSharedCheck_1624_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1617_ = lean_ctor_get(v___x_1454_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1619_ = v___x_1454_;
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
else
{
lean_inc(v_a_1617_);
lean_dec(v___x_1454_);
v___x_1619_ = lean_box(0);
v_isShared_1620_ = v_isSharedCheck_1624_;
goto v_resetjp_1618_;
}
v_resetjp_1618_:
{
lean_object* v___x_1622_; 
if (v_isShared_1620_ == 0)
{
v___x_1622_ = v___x_1619_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v_a_1617_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
}
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1625_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1428_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1428_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
}
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; uint8_t v_isShared_1636_; uint8_t v_isSharedCheck_1640_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1633_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1635_ = v___x_1409_;
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
else
{
lean_inc(v_a_1633_);
lean_dec(v___x_1409_);
v___x_1635_ = lean_box(0);
v_isShared_1636_ = v_isSharedCheck_1640_;
goto v_resetjp_1634_;
}
v_resetjp_1634_:
{
lean_object* v___x_1638_; 
if (v_isShared_1636_ == 0)
{
v___x_1638_ = v___x_1635_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v_a_1633_);
v___x_1638_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
return v___x_1638_;
}
}
}
}
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1648_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1641_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1643_ = v___x_1391_;
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1391_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1646_; 
if (v_isShared_1644_ == 0)
{
v___x_1646_ = v___x_1643_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1641_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
else
{
lean_object* v___x_1649_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_1649_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1649_) == 0)
{
lean_object* v_a_1650_; uint8_t v___x_1651_; 
v_a_1650_ = lean_ctor_get(v___x_1649_, 0);
lean_inc(v_a_1650_);
lean_dec_ref(v___x_1649_);
v___x_1651_ = lean_unbox(v_a_1650_);
lean_dec(v_a_1650_);
if (v___x_1651_ == 0)
{
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
goto v___jp_1376_;
}
else
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35);
v___x_1653_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1652_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_dec_ref(v___x_1653_);
goto v___jp_1376_;
}
else
{
return v___x_1653_;
}
}
}
else
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1661_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
v_a_1654_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1661_ == 0)
{
v___x_1656_ = v___x_1649_;
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1649_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1661_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1659_; 
if (v_isShared_1657_ == 0)
{
v___x_1659_ = v___x_1656_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1660_; 
v_reuseFailAlloc_1660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1660_, 0, v_a_1654_);
v___x_1659_ = v_reuseFailAlloc_1660_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
return v___x_1659_;
}
}
}
}
}
else
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1669_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1662_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1669_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1669_ == 0)
{
v___x_1664_ = v___x_1388_;
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___x_1388_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1669_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1667_; 
if (v_isShared_1665_ == 0)
{
v___x_1667_ = v___x_1664_;
goto v_reusejp_1666_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v_a_1662_);
v___x_1667_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1666_;
}
v_reusejp_1666_:
{
return v___x_1667_;
}
}
}
}
else
{
lean_object* v___x_1670_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_1670_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; uint8_t v___x_1672_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
lean_inc(v_a_1671_);
lean_dec_ref(v___x_1670_);
v___x_1672_ = lean_unbox(v_a_1671_);
lean_dec(v_a_1671_);
if (v___x_1672_ == 0)
{
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
goto v___jp_1379_;
}
else
{
lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1673_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37);
v___x_1674_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1673_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_dec_ref(v___x_1674_);
goto v___jp_1379_;
}
else
{
return v___x_1674_;
}
}
}
else
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
v_a_1675_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1670_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1670_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
}
}
else
{
lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1690_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1683_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1685_ = v___x_1385_;
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_dec(v___x_1385_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
if (v_isShared_1686_ == 0)
{
v___x_1688_ = v___x_1685_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1683_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
}
else
{
lean_object* v___x_1691_; 
v___x_1691_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_object* v_a_1692_; lean_object* v___f_1693_; lean_object* v___x_1694_; lean_object* v___y_1696_; lean_object* v___y_1697_; lean_object* v_a_1698_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v_a_1711_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v_a_1716_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v_a_1727_; lean_object* v___y_1741_; lean_object* v___y_1742_; lean_object* v_a_1743_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v_a_1748_; lean_object* v___y_1751_; lean_object* v___y_1752_; lean_object* v___y_1753_; uint8_t v___x_2088_; 
v_a_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_a_1692_);
lean_dec_ref(v___x_1691_);
lean_inc(v_mvarId_1364_);
v___f_1693_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1693_, 0, v_mvarId_1364_);
v___x_1694_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__0));
v___x_2088_ = lean_unbox(v_a_1692_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; uint8_t v___x_2090_; 
v___x_2089_ = l_Lean_trace_profiler;
v___x_2090_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_options_1382_, v___x_2089_);
if (v___x_2090_ == 0)
{
lean_object* v___x_2091_; 
lean_dec_ref(v___f_1693_);
lean_dec(v_a_1692_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_2091_ = l_Lean_Elab_Eqns_tryURefl(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2091_) == 0)
{
lean_object* v_a_2092_; uint8_t v___x_2093_; 
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
lean_inc(v_a_2092_);
lean_dec_ref(v___x_2091_);
v___x_2093_ = lean_unbox(v_a_2092_);
lean_dec(v_a_2092_);
if (v___x_2093_ == 0)
{
lean_object* v___x_2094_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_2094_ = l_Lean_Elab_Eqns_tryContradiction(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; uint8_t v___x_2096_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
lean_inc(v_a_2095_);
lean_dec_ref(v___x_2094_);
v___x_2096_ = lean_unbox(v_a_2095_);
lean_dec(v_a_2095_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_2097_ = l_Lean_Elab_Eqns_whnfReducibleLHS_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2097_) == 0)
{
lean_object* v_a_2098_; 
v_a_2098_ = lean_ctor_get(v___x_2097_, 0);
lean_inc(v_a_2098_);
lean_dec_ref(v___x_2097_);
if (lean_obj_tag(v_a_2098_) == 1)
{
lean_object* v_val_2099_; lean_object* v___x_2100_; 
lean_dec(v_mvarId_1364_);
v_val_2099_ = lean_ctor_get(v_a_2098_, 0);
lean_inc(v_val_2099_);
lean_dec_ref(v_a_2098_);
v___x_2100_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; uint8_t v___x_2102_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref(v___x_2100_);
v___x_2102_ = lean_unbox(v_a_2101_);
lean_dec(v_a_2101_);
if (v___x_2102_ == 0)
{
v_mvarId_1364_ = v_val_2099_;
goto _start;
}
else
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2104_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6);
v___x_2105_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2104_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2105_) == 0)
{
lean_dec_ref(v___x_2105_);
v_mvarId_1364_ = v_val_2099_;
goto _start;
}
else
{
lean_dec(v_val_2099_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_2105_;
}
}
}
else
{
lean_object* v_a_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2114_; 
lean_dec(v_val_2099_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_2107_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2114_ == 0)
{
v___x_2109_ = v___x_2100_;
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_a_2107_);
lean_dec(v___x_2100_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2114_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2112_; 
if (v_isShared_2110_ == 0)
{
v___x_2112_ = v___x_2109_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v_a_2107_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
}
else
{
lean_object* v___x_2115_; 
lean_dec(v_a_2098_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_2115_ = l_Lean_Elab_Eqns_simpMatch_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_a_2116_);
lean_dec_ref(v___x_2115_);
if (lean_obj_tag(v_a_2116_) == 1)
{
lean_object* v_val_2117_; lean_object* v___x_2118_; 
lean_dec(v_mvarId_1364_);
v_val_2117_ = lean_ctor_get(v_a_2116_, 0);
lean_inc(v_val_2117_);
lean_dec_ref(v_a_2116_);
v___x_2118_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v_a_2119_; uint8_t v___x_2120_; 
v_a_2119_ = lean_ctor_get(v___x_2118_, 0);
lean_inc(v_a_2119_);
lean_dec_ref(v___x_2118_);
v___x_2120_ = lean_unbox(v_a_2119_);
lean_dec(v_a_2119_);
if (v___x_2120_ == 0)
{
v_mvarId_1364_ = v_val_2117_;
goto _start;
}
else
{
lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2122_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8);
v___x_2123_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2122_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_dec_ref(v___x_2123_);
v_mvarId_1364_ = v_val_2117_;
goto _start;
}
else
{
lean_dec(v_val_2117_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_2123_;
}
}
}
else
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2132_; 
lean_dec(v_val_2117_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_2125_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2127_ = v___x_2118_;
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2118_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2132_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2130_; 
if (v_isShared_2128_ == 0)
{
v___x_2130_ = v___x_2127_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v_a_2125_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
}
}
else
{
lean_object* v___x_2133_; 
lean_dec(v_a_2116_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_2133_ = l_Lean_Elab_Eqns_simpIf_x3f(v_mvarId_1364_, v_hasTrace_1383_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v_a_2134_; 
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2134_);
lean_dec_ref(v___x_2133_);
if (lean_obj_tag(v_a_2134_) == 1)
{
lean_object* v_val_2135_; lean_object* v___x_2136_; 
lean_dec(v_mvarId_1364_);
v_val_2135_ = lean_ctor_get(v_a_2134_, 0);
lean_inc(v_val_2135_);
lean_dec_ref(v_a_2134_);
v___x_2136_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; uint8_t v___x_2138_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_a_2137_);
lean_dec_ref(v___x_2136_);
v___x_2138_ = lean_unbox(v_a_2137_);
lean_dec(v_a_2137_);
if (v___x_2138_ == 0)
{
v_mvarId_1364_ = v_val_2135_;
goto _start;
}
else
{
lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2140_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10);
v___x_2141_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2140_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_dec_ref(v___x_2141_);
v_mvarId_1364_ = v_val_2135_;
goto _start;
}
else
{
lean_dec(v_val_2135_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_2141_;
}
}
}
else
{
lean_object* v_a_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2150_; 
lean_dec(v_val_2135_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_2143_ = lean_ctor_get(v___x_2136_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2145_ = v___x_2136_;
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_a_2143_);
lean_dec(v___x_2136_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2150_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
if (v_isShared_2146_ == 0)
{
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2149_; 
v_reuseFailAlloc_2149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2149_, 0, v_a_2143_);
v___x_2148_ = v_reuseFailAlloc_2149_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
return v___x_2148_;
}
}
}
}
else
{
lean_object* v___x_2151_; lean_object* v___x_2152_; uint8_t v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
lean_dec(v_a_2134_);
v___x_2151_ = lean_unsigned_to_nat(100000u);
v___x_2152_ = lean_unsigned_to_nat(2u);
v___x_2153_ = 0;
v___x_2154_ = lean_box(0);
v___x_2155_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_2155_, 0, v___x_2151_);
lean_ctor_set(v___x_2155_, 1, v___x_2152_);
lean_ctor_set(v___x_2155_, 2, v___x_2154_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3, v___x_2090_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 1, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 2, v___x_2090_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 3, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 4, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 5, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 6, v___x_2153_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 7, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 8, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 9, v___x_2090_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 10, v___x_2090_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 11, v___x_2090_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 12, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 13, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 14, v___x_2090_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 15, v___x_2090_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 16, v___x_2090_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 17, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 18, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 19, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 20, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 21, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 22, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 23, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 24, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 25, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 26, v___x_2090_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 27, v___x_2090_);
lean_ctor_set_uint8(v___x_2155_, sizeof(void*)*3 + 28, v___x_2090_);
v___x_2156_ = lean_unsigned_to_nat(0u);
v___x_2157_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11));
v___x_2158_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13);
v___x_2159_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15);
v___x_2160_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2160_, 0, v___x_2158_);
lean_ctor_set(v___x_2160_, 1, v___x_2159_);
lean_ctor_set_uint8(v___x_2160_, sizeof(void*)*2, v_hasTrace_1383_);
v___x_2161_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_2155_, v___x_2157_, v___x_2160_, v_a_1365_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref(v___x_2161_);
v___x_2163_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_2164_ = l_Lean_Meta_simpTargetStar(v_mvarId_1364_, v_a_2162_, v___x_2157_, v___x_2154_, v___x_2163_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v_a_2165_; lean_object* v_fst_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2314_; 
v_a_2165_ = lean_ctor_get(v___x_2164_, 0);
lean_inc(v_a_2165_);
lean_dec_ref(v___x_2164_);
v_fst_2166_ = lean_ctor_get(v_a_2165_, 0);
v_isSharedCheck_2314_ = !lean_is_exclusive(v_a_2165_);
if (v_isSharedCheck_2314_ == 0)
{
lean_object* v_unused_2315_; 
v_unused_2315_ = lean_ctor_get(v_a_2165_, 1);
lean_dec(v_unused_2315_);
v___x_2168_ = v_a_2165_;
v_isShared_2169_ = v_isSharedCheck_2314_;
goto v_resetjp_2167_;
}
else
{
lean_inc(v_fst_2166_);
lean_dec(v_a_2165_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2314_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
switch(lean_obj_tag(v_fst_2166_))
{
case 0:
{
lean_object* v___x_2170_; 
lean_del_object(v___x_2168_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_2170_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2182_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2173_ = v___x_2170_;
v_isShared_2174_ = v_isSharedCheck_2182_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2170_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2182_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
uint8_t v___x_2175_; 
v___x_2175_ = lean_unbox(v_a_2171_);
lean_dec(v_a_2171_);
if (v___x_2175_ == 0)
{
lean_object* v___x_2176_; lean_object* v___x_2178_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
v___x_2176_ = lean_box(0);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v___x_2176_);
v___x_2178_ = v___x_2173_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v___x_2176_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
else
{
lean_object* v___x_2180_; lean_object* v___x_2181_; 
lean_del_object(v___x_2173_);
v___x_2180_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23);
v___x_2181_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2180_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
return v___x_2181_;
}
}
}
else
{
lean_object* v_a_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2190_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
v_a_2183_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2185_ = v___x_2170_;
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_a_2183_);
lean_dec(v___x_2170_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2190_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___x_2188_; 
if (v_isShared_2186_ == 0)
{
v___x_2188_ = v___x_2185_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v_a_2183_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
case 1:
{
lean_object* v___x_2191_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_declName_1363_);
lean_inc(v_mvarId_1364_);
v___x_2191_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(v_mvarId_1364_, v_declName_1363_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_object* v_a_2192_; 
v_a_2192_ = lean_ctor_get(v___x_2191_, 0);
lean_inc(v_a_2192_);
lean_dec_ref(v___x_2191_);
if (lean_obj_tag(v_a_2192_) == 1)
{
lean_object* v_val_2193_; lean_object* v___x_2194_; 
lean_del_object(v___x_2168_);
lean_dec(v_mvarId_1364_);
v_val_2193_ = lean_ctor_get(v_a_2192_, 0);
lean_inc(v_val_2193_);
lean_dec_ref(v_a_2192_);
v___x_2194_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; uint8_t v___x_2196_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
lean_inc(v_a_2195_);
lean_dec_ref(v___x_2194_);
v___x_2196_ = lean_unbox(v_a_2195_);
lean_dec(v_a_2195_);
if (v___x_2196_ == 0)
{
v_mvarId_1364_ = v_val_2193_;
goto _start;
}
else
{
lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2198_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25);
v___x_2199_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2198_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_dec_ref(v___x_2199_);
v_mvarId_1364_ = v_val_2193_;
goto _start;
}
else
{
lean_dec(v_val_2193_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_2199_;
}
}
}
else
{
lean_object* v_a_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
lean_dec(v_val_2193_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_2201_ = lean_ctor_get(v___x_2194_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v___x_2194_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_a_2201_);
lean_dec(v___x_2194_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_a_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
}
else
{
lean_object* v___x_2209_; 
lean_dec(v_a_2192_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_2209_ = l_Lean_Meta_casesOnStuckLHS_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2281_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2212_ = v___x_2209_;
v_isShared_2213_ = v_isSharedCheck_2281_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2209_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2281_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
if (lean_obj_tag(v_a_2210_) == 1)
{
lean_object* v_val_2214_; lean_object* v___y_2216_; lean_object* v___y_2217_; lean_object* v___y_2218_; lean_object* v___y_2219_; lean_object* v___x_2236_; 
lean_del_object(v___x_2168_);
lean_dec(v_mvarId_1364_);
v_val_2214_ = lean_ctor_get(v_a_2210_, 0);
lean_inc(v_val_2214_);
lean_dec_ref(v_a_2210_);
v___x_2236_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v_a_2237_; uint8_t v___x_2238_; 
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
lean_inc(v_a_2237_);
lean_dec_ref(v___x_2236_);
v___x_2238_ = lean_unbox(v_a_2237_);
lean_dec(v_a_2237_);
if (v___x_2238_ == 0)
{
v___y_2216_ = v_a_1365_;
v___y_2217_ = v_a_1366_;
v___y_2218_ = v_a_1367_;
v___y_2219_ = v_a_1368_;
goto v___jp_2215_;
}
else
{
lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2239_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27);
v___x_2240_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2239_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2240_) == 0)
{
lean_dec_ref(v___x_2240_);
v___y_2216_ = v_a_1365_;
v___y_2217_ = v_a_1366_;
v___y_2218_ = v_a_1367_;
v___y_2219_ = v_a_1368_;
goto v___jp_2215_;
}
else
{
lean_dec(v_val_2214_);
lean_del_object(v___x_2212_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_2240_;
}
}
}
else
{
lean_object* v_a_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2248_; 
lean_dec(v_val_2214_);
lean_del_object(v___x_2212_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_2241_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2248_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2243_ = v___x_2236_;
v_isShared_2244_ = v_isSharedCheck_2248_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_a_2241_);
lean_dec(v___x_2236_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2248_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v___x_2246_; 
if (v_isShared_2244_ == 0)
{
v___x_2246_ = v___x_2243_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2247_; 
v_reuseFailAlloc_2247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2247_, 0, v_a_2241_);
v___x_2246_ = v_reuseFailAlloc_2247_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
return v___x_2246_;
}
}
}
v___jp_2215_:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; uint8_t v___x_2222_; 
v___x_2220_ = lean_array_get_size(v_val_2214_);
v___x_2221_ = lean_box(0);
v___x_2222_ = lean_nat_dec_lt(v___x_2156_, v___x_2220_);
if (v___x_2222_ == 0)
{
lean_object* v___x_2224_; 
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
lean_dec(v___y_2217_);
lean_dec_ref(v___y_2216_);
lean_dec(v_val_2214_);
lean_dec(v_declName_1363_);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 0, v___x_2221_);
v___x_2224_ = v___x_2212_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v___x_2221_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
else
{
uint8_t v___x_2226_; 
v___x_2226_ = lean_nat_dec_le(v___x_2220_, v___x_2220_);
if (v___x_2226_ == 0)
{
if (v___x_2222_ == 0)
{
lean_object* v___x_2228_; 
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
lean_dec(v___y_2217_);
lean_dec_ref(v___y_2216_);
lean_dec(v_val_2214_);
lean_dec(v_declName_1363_);
if (v_isShared_2213_ == 0)
{
lean_ctor_set(v___x_2212_, 0, v___x_2221_);
v___x_2228_ = v___x_2212_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v___x_2221_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
else
{
size_t v___x_2230_; size_t v___x_2231_; lean_object* v___x_2232_; 
lean_del_object(v___x_2212_);
v___x_2230_ = ((size_t)0ULL);
v___x_2231_ = lean_usize_of_nat(v___x_2220_);
v___x_2232_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1363_, v_val_2214_, v___x_2230_, v___x_2231_, v___x_2221_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
lean_dec(v_val_2214_);
return v___x_2232_;
}
}
else
{
size_t v___x_2233_; size_t v___x_2234_; lean_object* v___x_2235_; 
lean_del_object(v___x_2212_);
v___x_2233_ = ((size_t)0ULL);
v___x_2234_ = lean_usize_of_nat(v___x_2220_);
v___x_2235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_1363_, v_val_2214_, v___x_2233_, v___x_2234_, v___x_2221_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_);
lean_dec(v_val_2214_);
return v___x_2235_;
}
}
}
}
else
{
lean_object* v___x_2249_; 
lean_del_object(v___x_2212_);
lean_dec(v_a_2210_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_2249_ = l_Lean_Meta_splitTarget_x3f(v_mvarId_1364_, v_hasTrace_1383_, v_hasTrace_1383_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v_a_2250_; 
v_a_2250_ = lean_ctor_get(v___x_2249_, 0);
lean_inc(v_a_2250_);
lean_dec_ref(v___x_2249_);
if (lean_obj_tag(v_a_2250_) == 1)
{
lean_object* v_val_2251_; lean_object* v___x_2252_; 
lean_del_object(v___x_2168_);
lean_dec(v_mvarId_1364_);
v_val_2251_ = lean_ctor_get(v_a_2250_, 0);
lean_inc(v_val_2251_);
lean_dec_ref(v_a_2250_);
v___x_2252_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; uint8_t v___x_2254_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref(v___x_2252_);
v___x_2254_ = lean_unbox(v_a_2253_);
lean_dec(v_a_2253_);
if (v___x_2254_ == 0)
{
lean_object* v___x_2255_; 
v___x_2255_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(v_declName_1363_, v_val_2251_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
return v___x_2255_;
}
else
{
lean_object* v___x_2256_; lean_object* v___x_2257_; 
v___x_2256_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29);
v___x_2257_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2256_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2257_) == 0)
{
lean_object* v___x_2258_; 
lean_dec_ref(v___x_2257_);
v___x_2258_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(v_declName_1363_, v_val_2251_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
return v___x_2258_;
}
else
{
lean_dec(v_val_2251_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_2257_;
}
}
}
else
{
lean_object* v_a_2259_; lean_object* v___x_2261_; uint8_t v_isShared_2262_; uint8_t v_isSharedCheck_2266_; 
lean_dec(v_val_2251_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_2259_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2261_ = v___x_2252_;
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
else
{
lean_inc(v_a_2259_);
lean_dec(v___x_2252_);
v___x_2261_ = lean_box(0);
v_isShared_2262_ = v_isSharedCheck_2266_;
goto v_resetjp_2260_;
}
v_resetjp_2260_:
{
lean_object* v___x_2264_; 
if (v_isShared_2262_ == 0)
{
v___x_2264_ = v___x_2261_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v_a_2259_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
}
else
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2270_; 
lean_dec(v_a_2250_);
lean_dec(v_declName_1363_);
v___x_2267_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31);
v___x_2268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2268_, 0, v_mvarId_1364_);
if (v_isShared_2169_ == 0)
{
lean_ctor_set_tag(v___x_2168_, 7);
lean_ctor_set(v___x_2168_, 1, v___x_2268_);
lean_ctor_set(v___x_2168_, 0, v___x_2267_);
v___x_2270_ = v___x_2168_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v___x_2267_);
lean_ctor_set(v_reuseFailAlloc_2272_, 1, v___x_2268_);
v___x_2270_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
lean_object* v___x_2271_; 
v___x_2271_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_2270_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
return v___x_2271_;
}
}
}
else
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2280_; 
lean_del_object(v___x_2168_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2273_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2275_ = v___x_2249_;
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v___x_2249_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2278_; 
if (v_isShared_2276_ == 0)
{
v___x_2278_ = v___x_2275_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_a_2273_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
}
}
}
}
else
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2289_; 
lean_del_object(v___x_2168_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2282_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2284_ = v___x_2209_;
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2209_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
if (v_isShared_2285_ == 0)
{
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2282_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
}
else
{
lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2297_; 
lean_del_object(v___x_2168_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2290_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2292_ = v___x_2191_;
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_dec(v___x_2191_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2297_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2295_; 
if (v_isShared_2293_ == 0)
{
v___x_2295_ = v___x_2292_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v_a_2290_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
}
default: 
{
lean_object* v_mvarId_2298_; lean_object* v___x_2299_; 
lean_del_object(v___x_2168_);
lean_dec(v_mvarId_1364_);
v_mvarId_2298_ = lean_ctor_get(v_fst_2166_, 0);
lean_inc(v_mvarId_2298_);
lean_dec_ref(v_fst_2166_);
v___x_2299_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2299_) == 0)
{
lean_object* v_a_2300_; uint8_t v___x_2301_; 
v_a_2300_ = lean_ctor_get(v___x_2299_, 0);
lean_inc(v_a_2300_);
lean_dec_ref(v___x_2299_);
v___x_2301_ = lean_unbox(v_a_2300_);
lean_dec(v_a_2300_);
if (v___x_2301_ == 0)
{
v_mvarId_1364_ = v_mvarId_2298_;
goto _start;
}
else
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2303_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33);
v___x_2304_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2303_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2304_) == 0)
{
lean_dec_ref(v___x_2304_);
v_mvarId_1364_ = v_mvarId_2298_;
goto _start;
}
else
{
lean_dec(v_mvarId_2298_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
return v___x_2304_;
}
}
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
lean_dec(v_mvarId_2298_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_declName_1363_);
v_a_2306_ = lean_ctor_get(v___x_2299_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2299_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2299_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2299_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_a_2306_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2316_ = lean_ctor_get(v___x_2164_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2164_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2164_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2331_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2324_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2326_ = v___x_2161_;
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2161_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
}
else
{
lean_object* v_a_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2339_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2332_ = lean_ctor_get(v___x_2133_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2334_ = v___x_2133_;
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_a_2332_);
lean_dec(v___x_2133_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2337_; 
if (v_isShared_2335_ == 0)
{
v___x_2337_ = v___x_2334_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2332_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
}
else
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2347_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2340_ = lean_ctor_get(v___x_2115_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2342_ = v___x_2115_;
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2115_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2340_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
}
}
else
{
lean_object* v_a_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2355_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2348_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2350_ = v___x_2097_;
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_a_2348_);
lean_dec(v___x_2097_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2355_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2353_; 
if (v_isShared_2351_ == 0)
{
v___x_2353_ = v___x_2350_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2348_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
return v___x_2353_;
}
}
}
}
else
{
lean_object* v___x_2356_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_2356_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2356_) == 0)
{
lean_object* v_a_2357_; uint8_t v___x_2358_; 
v_a_2357_ = lean_ctor_get(v___x_2356_, 0);
lean_inc(v_a_2357_);
lean_dec_ref(v___x_2356_);
v___x_2358_ = lean_unbox(v_a_2357_);
lean_dec(v_a_2357_);
if (v___x_2358_ == 0)
{
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
goto v___jp_1373_;
}
else
{
lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2359_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35);
v___x_2360_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2359_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_dec_ref(v___x_2360_);
goto v___jp_1373_;
}
else
{
return v___x_2360_;
}
}
}
else
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
v_a_2361_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2363_ = v___x_2356_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2356_);
v___x_2363_ = lean_box(0);
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
v_resetjp_2362_:
{
lean_object* v___x_2366_; 
if (v_isShared_2364_ == 0)
{
v___x_2366_ = v___x_2363_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_a_2361_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
}
}
}
else
{
lean_object* v_a_2369_; lean_object* v___x_2371_; uint8_t v_isShared_2372_; uint8_t v_isSharedCheck_2376_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2369_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2376_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2376_ == 0)
{
v___x_2371_ = v___x_2094_;
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
else
{
lean_inc(v_a_2369_);
lean_dec(v___x_2094_);
v___x_2371_ = lean_box(0);
v_isShared_2372_ = v_isSharedCheck_2376_;
goto v_resetjp_2370_;
}
v_resetjp_2370_:
{
lean_object* v___x_2374_; 
if (v_isShared_2372_ == 0)
{
v___x_2374_ = v___x_2371_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_a_2369_);
v___x_2374_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
return v___x_2374_;
}
}
}
}
else
{
lean_object* v___x_2377_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_2377_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2377_) == 0)
{
lean_object* v_a_2378_; uint8_t v___x_2379_; 
v_a_2378_ = lean_ctor_get(v___x_2377_, 0);
lean_inc(v_a_2378_);
lean_dec_ref(v___x_2377_);
v___x_2379_ = lean_unbox(v_a_2378_);
lean_dec(v_a_2378_);
if (v___x_2379_ == 0)
{
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
goto v___jp_1370_;
}
else
{
lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2380_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37);
v___x_2381_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2380_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_dec_ref(v___x_2381_);
goto v___jp_1370_;
}
else
{
return v___x_2381_;
}
}
}
else
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
v_a_2382_ = lean_ctor_get(v___x_2377_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2377_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2384_ = v___x_2377_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2377_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2382_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
}
}
else
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2397_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2390_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2392_ = v___x_2091_;
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2091_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2395_; 
if (v_isShared_2393_ == 0)
{
v___x_2395_ = v___x_2392_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_a_2390_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
}
else
{
lean_inc_ref(v_options_1382_);
goto v___jp_1756_;
}
}
else
{
lean_inc_ref(v_options_1382_);
goto v___jp_1756_;
}
v___jp_1695_:
{
lean_object* v___x_1699_; double v___x_1700_; double v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; uint8_t v___x_1706_; lean_object* v___x_1707_; 
v___x_1699_ = lean_io_get_num_heartbeats();
v___x_1700_ = lean_float_of_nat(v___y_1696_);
v___x_1701_ = lean_float_of_nat(v___x_1699_);
v___x_1702_ = lean_box_float(v___x_1700_);
v___x_1703_ = lean_box_float(v___x_1701_);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1702_);
lean_ctor_set(v___x_1704_, 1, v___x_1703_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v_a_1698_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = lean_unbox(v_a_1692_);
lean_dec(v_a_1692_);
v___x_1707_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6(v_cls_1384_, v_hasTrace_1383_, v___x_1694_, v_options_1382_, v___x_1706_, v___y_1697_, v___f_1693_, v___x_1705_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec_ref(v_options_1382_);
return v___x_1707_;
}
v___jp_1708_:
{
lean_object* v___x_1712_; 
v___x_1712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1712_, 0, v_a_1711_);
v___y_1696_ = v___y_1709_;
v___y_1697_ = v___y_1710_;
v_a_1698_ = v___x_1712_;
goto v___jp_1695_;
}
v___jp_1713_:
{
lean_object* v___x_1717_; 
v___x_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1717_, 0, v_a_1716_);
v___y_1696_ = v___y_1714_;
v___y_1697_ = v___y_1715_;
v_a_1698_ = v___x_1717_;
goto v___jp_1695_;
}
v___jp_1718_:
{
if (lean_obj_tag(v___y_1721_) == 0)
{
lean_object* v_a_1722_; 
v_a_1722_ = lean_ctor_get(v___y_1721_, 0);
lean_inc(v_a_1722_);
lean_dec_ref(v___y_1721_);
v___y_1709_ = v___y_1719_;
v___y_1710_ = v___y_1720_;
v_a_1711_ = v_a_1722_;
goto v___jp_1708_;
}
else
{
lean_object* v_a_1723_; 
v_a_1723_ = lean_ctor_get(v___y_1721_, 0);
lean_inc(v_a_1723_);
lean_dec_ref(v___y_1721_);
v___y_1714_ = v___y_1719_;
v___y_1715_ = v___y_1720_;
v_a_1716_ = v_a_1723_;
goto v___jp_1713_;
}
}
v___jp_1724_:
{
lean_object* v___x_1728_; double v___x_1729_; double v___x_1730_; double v___x_1731_; double v___x_1732_; double v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; uint8_t v___x_1738_; lean_object* v___x_1739_; 
v___x_1728_ = lean_io_mono_nanos_now();
v___x_1729_ = lean_float_of_nat(v___y_1726_);
v___x_1730_ = lean_float_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38);
v___x_1731_ = lean_float_div(v___x_1729_, v___x_1730_);
v___x_1732_ = lean_float_of_nat(v___x_1728_);
v___x_1733_ = lean_float_div(v___x_1732_, v___x_1730_);
v___x_1734_ = lean_box_float(v___x_1731_);
v___x_1735_ = lean_box_float(v___x_1733_);
v___x_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1734_);
lean_ctor_set(v___x_1736_, 1, v___x_1735_);
v___x_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1737_, 0, v_a_1727_);
lean_ctor_set(v___x_1737_, 1, v___x_1736_);
v___x_1738_ = lean_unbox(v_a_1692_);
lean_dec(v_a_1692_);
v___x_1739_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6(v_cls_1384_, v_hasTrace_1383_, v___x_1694_, v_options_1382_, v___x_1738_, v___y_1725_, v___f_1693_, v___x_1737_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec_ref(v_options_1382_);
return v___x_1739_;
}
v___jp_1740_:
{
lean_object* v___x_1744_; 
v___x_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1744_, 0, v_a_1743_);
v___y_1725_ = v___y_1741_;
v___y_1726_ = v___y_1742_;
v_a_1727_ = v___x_1744_;
goto v___jp_1724_;
}
v___jp_1745_:
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1749_, 0, v_a_1748_);
v___y_1725_ = v___y_1746_;
v___y_1726_ = v___y_1747_;
v_a_1727_ = v___x_1749_;
goto v___jp_1724_;
}
v___jp_1750_:
{
if (lean_obj_tag(v___y_1753_) == 0)
{
lean_object* v_a_1754_; 
v_a_1754_ = lean_ctor_get(v___y_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref(v___y_1753_);
v___y_1746_ = v___y_1751_;
v___y_1747_ = v___y_1752_;
v_a_1748_ = v_a_1754_;
goto v___jp_1745_;
}
else
{
lean_object* v_a_1755_; 
v_a_1755_ = lean_ctor_get(v___y_1753_, 0);
lean_inc(v_a_1755_);
lean_dec_ref(v___y_1753_);
v___y_1741_ = v___y_1751_;
v___y_1742_ = v___y_1752_;
v_a_1743_ = v_a_1755_;
goto v___jp_1740_;
}
}
v___jp_1756_:
{
lean_object* v___x_1757_; 
v___x_1757_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg(v_a_1368_);
if (lean_obj_tag(v___x_1757_) == 0)
{
lean_object* v_a_1758_; lean_object* v___x_1759_; uint8_t v___x_1760_; 
v_a_1758_ = lean_ctor_get(v___x_1757_, 0);
lean_inc(v_a_1758_);
lean_dec_ref(v___x_1757_);
v___x_1759_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1760_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_options_1382_, v___x_1759_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1761_ = lean_io_mono_nanos_now();
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1762_ = l_Lean_Elab_Eqns_tryURefl(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v_a_1763_; uint8_t v___x_1764_; 
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_a_1763_);
lean_dec_ref(v___x_1762_);
v___x_1764_ = lean_unbox(v_a_1763_);
lean_dec(v_a_1763_);
if (v___x_1764_ == 0)
{
lean_object* v___x_1765_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1765_ = l_Lean_Elab_Eqns_tryContradiction(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1765_) == 0)
{
lean_object* v_a_1766_; uint8_t v___x_1767_; 
v_a_1766_ = lean_ctor_get(v___x_1765_, 0);
lean_inc(v_a_1766_);
lean_dec_ref(v___x_1765_);
v___x_1767_ = lean_unbox(v_a_1766_);
lean_dec(v_a_1766_);
if (v___x_1767_ == 0)
{
lean_object* v___x_1768_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1768_ = l_Lean_Elab_Eqns_whnfReducibleLHS_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref(v___x_1768_);
if (lean_obj_tag(v_a_1769_) == 1)
{
lean_object* v_val_1770_; lean_object* v___x_1771_; 
lean_dec(v_mvarId_1364_);
v_val_1770_ = lean_ctor_get(v_a_1769_, 0);
lean_inc(v_val_1770_);
lean_dec_ref(v_a_1769_);
v___x_1771_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; uint8_t v___x_1773_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1772_);
lean_dec_ref(v___x_1771_);
v___x_1773_ = lean_unbox(v_a_1772_);
lean_dec(v_a_1772_);
if (v___x_1773_ == 0)
{
lean_object* v___x_1774_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1774_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1770_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1774_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1775_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6);
v___x_1776_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1775_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v___x_1777_; 
lean_dec_ref(v___x_1776_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1777_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1770_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1777_;
goto v___jp_1750_;
}
else
{
lean_dec(v_val_1770_);
lean_dec(v_declName_1363_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1776_;
goto v___jp_1750_;
}
}
}
else
{
lean_object* v_a_1778_; 
lean_dec(v_val_1770_);
lean_dec(v_declName_1363_);
v_a_1778_ = lean_ctor_get(v___x_1771_, 0);
lean_inc(v_a_1778_);
lean_dec_ref(v___x_1771_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1778_;
goto v___jp_1740_;
}
}
else
{
lean_object* v___x_1779_; 
lean_dec(v_a_1769_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1779_ = l_Lean_Elab_Eqns_simpMatch_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v_a_1780_; 
v_a_1780_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_a_1780_);
lean_dec_ref(v___x_1779_);
if (lean_obj_tag(v_a_1780_) == 1)
{
lean_object* v_val_1781_; lean_object* v___x_1782_; 
lean_dec(v_mvarId_1364_);
v_val_1781_ = lean_ctor_get(v_a_1780_, 0);
lean_inc(v_val_1781_);
lean_dec_ref(v_a_1780_);
v___x_1782_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; uint8_t v___x_1784_; 
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
lean_inc(v_a_1783_);
lean_dec_ref(v___x_1782_);
v___x_1784_ = lean_unbox(v_a_1783_);
lean_dec(v_a_1783_);
if (v___x_1784_ == 0)
{
lean_object* v___x_1785_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1785_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1781_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1785_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1786_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8);
v___x_1787_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1786_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v___x_1788_; 
lean_dec_ref(v___x_1787_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1788_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1781_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1788_;
goto v___jp_1750_;
}
else
{
lean_dec(v_val_1781_);
lean_dec(v_declName_1363_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1787_;
goto v___jp_1750_;
}
}
}
else
{
lean_object* v_a_1789_; 
lean_dec(v_val_1781_);
lean_dec(v_declName_1363_);
v_a_1789_ = lean_ctor_get(v___x_1782_, 0);
lean_inc(v_a_1789_);
lean_dec_ref(v___x_1782_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1789_;
goto v___jp_1740_;
}
}
else
{
lean_object* v___x_1790_; 
lean_dec(v_a_1780_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1790_ = l_Lean_Elab_Eqns_simpIf_x3f(v_mvarId_1364_, v_hasTrace_1383_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v_a_1791_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_a_1791_);
lean_dec_ref(v___x_1790_);
if (lean_obj_tag(v_a_1791_) == 1)
{
lean_object* v_val_1792_; lean_object* v___x_1793_; 
lean_dec(v_mvarId_1364_);
v_val_1792_ = lean_ctor_get(v_a_1791_, 0);
lean_inc(v_val_1792_);
lean_dec_ref(v_a_1791_);
v___x_1793_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; uint8_t v___x_1795_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1794_);
lean_dec_ref(v___x_1793_);
v___x_1795_ = lean_unbox(v_a_1794_);
lean_dec(v_a_1794_);
if (v___x_1795_ == 0)
{
lean_object* v___x_1796_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1796_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1792_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1796_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1797_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10);
v___x_1798_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1797_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v___x_1799_; 
lean_dec_ref(v___x_1798_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1799_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1792_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1799_;
goto v___jp_1750_;
}
else
{
lean_dec(v_val_1792_);
lean_dec(v_declName_1363_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1798_;
goto v___jp_1750_;
}
}
}
else
{
lean_object* v_a_1800_; 
lean_dec(v_val_1792_);
lean_dec(v_declName_1363_);
v_a_1800_ = lean_ctor_get(v___x_1793_, 0);
lean_inc(v_a_1800_);
lean_dec_ref(v___x_1793_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1800_;
goto v___jp_1740_;
}
}
else
{
lean_object* v___x_1801_; lean_object* v___x_1802_; uint8_t v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
lean_dec(v_a_1791_);
v___x_1801_ = lean_unsigned_to_nat(100000u);
v___x_1802_ = lean_unsigned_to_nat(2u);
v___x_1803_ = 0;
v___x_1804_ = lean_box(0);
v___x_1805_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1805_, 0, v___x_1801_);
lean_ctor_set(v___x_1805_, 1, v___x_1802_);
lean_ctor_set(v___x_1805_, 2, v___x_1804_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3, v___x_1760_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 1, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 2, v___x_1760_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 3, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 4, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 5, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 6, v___x_1803_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 7, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 8, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 9, v___x_1760_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 10, v___x_1760_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 11, v___x_1760_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 12, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 13, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 14, v___x_1760_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 15, v___x_1760_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 16, v___x_1760_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 17, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 18, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 19, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 20, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 21, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 22, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 23, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 24, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 25, v_hasTrace_1383_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 26, v___x_1760_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 27, v___x_1760_);
lean_ctor_set_uint8(v___x_1805_, sizeof(void*)*3 + 28, v___x_1760_);
v___x_1806_ = lean_unsigned_to_nat(0u);
v___x_1807_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11));
v___x_1808_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13);
v___x_1809_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15);
v___x_1810_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1810_, 0, v___x_1808_);
lean_ctor_set(v___x_1810_, 1, v___x_1809_);
lean_ctor_set_uint8(v___x_1810_, sizeof(void*)*2, v_hasTrace_1383_);
v___x_1811_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1805_, v___x_1807_, v___x_1810_, v_a_1365_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1812_);
lean_dec_ref(v___x_1811_);
v___x_1813_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1814_ = l_Lean_Meta_simpTargetStar(v_mvarId_1364_, v_a_1812_, v___x_1807_, v___x_1804_, v___x_1813_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_a_1815_; lean_object* v_fst_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1886_; 
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
lean_inc(v_a_1815_);
lean_dec_ref(v___x_1814_);
v_fst_1816_ = lean_ctor_get(v_a_1815_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v_a_1815_);
if (v_isSharedCheck_1886_ == 0)
{
lean_object* v_unused_1887_; 
v_unused_1887_ = lean_ctor_get(v_a_1815_, 1);
lean_dec(v_unused_1887_);
v___x_1818_ = v_a_1815_;
v_isShared_1819_ = v_isSharedCheck_1886_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_fst_1816_);
lean_dec(v_a_1815_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1886_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
switch(lean_obj_tag(v_fst_1816_))
{
case 0:
{
lean_object* v___x_1820_; 
lean_del_object(v___x_1818_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_1820_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; uint8_t v___x_1822_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
lean_dec_ref(v___x_1820_);
v___x_1822_ = lean_unbox(v_a_1821_);
lean_dec(v_a_1821_);
if (v___x_1822_ == 0)
{
lean_object* v___x_1823_; 
v___x_1823_ = lean_box(0);
v___y_1746_ = v_a_1758_;
v___y_1747_ = v___x_1761_;
v_a_1748_ = v___x_1823_;
goto v___jp_1745_;
}
else
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1824_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23);
v___x_1825_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1824_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1825_;
goto v___jp_1750_;
}
}
else
{
lean_object* v_a_1826_; 
v_a_1826_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1826_);
lean_dec_ref(v___x_1820_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1826_;
goto v___jp_1740_;
}
}
case 1:
{
lean_object* v___x_1827_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_declName_1363_);
lean_inc(v_mvarId_1364_);
v___x_1827_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(v_mvarId_1364_, v_declName_1363_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v_a_1828_; 
v_a_1828_ = lean_ctor_get(v___x_1827_, 0);
lean_inc(v_a_1828_);
lean_dec_ref(v___x_1827_);
if (lean_obj_tag(v_a_1828_) == 1)
{
lean_object* v_val_1829_; lean_object* v___x_1830_; 
lean_del_object(v___x_1818_);
lean_dec(v_mvarId_1364_);
v_val_1829_ = lean_ctor_get(v_a_1828_, 0);
lean_inc(v_val_1829_);
lean_dec_ref(v_a_1828_);
v___x_1830_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; uint8_t v___x_1832_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1831_);
lean_dec_ref(v___x_1830_);
v___x_1832_ = lean_unbox(v_a_1831_);
lean_dec(v_a_1831_);
if (v___x_1832_ == 0)
{
lean_object* v___x_1833_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1833_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1829_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1833_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25);
v___x_1835_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1834_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v___x_1836_; 
lean_dec_ref(v___x_1835_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1836_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1829_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1836_;
goto v___jp_1750_;
}
else
{
lean_dec(v_val_1829_);
lean_dec(v_declName_1363_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1835_;
goto v___jp_1750_;
}
}
}
else
{
lean_object* v_a_1837_; 
lean_dec(v_val_1829_);
lean_dec(v_declName_1363_);
v_a_1837_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1837_);
lean_dec_ref(v___x_1830_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1837_;
goto v___jp_1740_;
}
}
else
{
lean_object* v___x_1838_; 
lean_dec(v_a_1828_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1838_ = l_Lean_Meta_casesOnStuckLHS_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_a_1839_; 
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
lean_inc(v_a_1839_);
lean_dec_ref(v___x_1838_);
if (lean_obj_tag(v_a_1839_) == 1)
{
lean_object* v_val_1840_; lean_object* v___x_1841_; 
lean_del_object(v___x_1818_);
lean_dec(v_mvarId_1364_);
v_val_1840_ = lean_ctor_get(v_a_1839_, 0);
lean_inc(v_val_1840_);
lean_dec_ref(v_a_1839_);
v___x_1841_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; uint8_t v___x_1843_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref(v___x_1841_);
v___x_1843_ = lean_unbox(v_a_1842_);
lean_dec(v_a_1842_);
if (v___x_1843_ == 0)
{
lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1844_ = lean_box(0);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1845_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(v_val_1840_, v___x_1806_, v_declName_1363_, v___x_1844_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_val_1840_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1845_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1846_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27);
v___x_1847_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1846_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v_a_1848_; lean_object* v___x_1849_; 
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_a_1848_);
lean_dec_ref(v___x_1847_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1849_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(v_val_1840_, v___x_1806_, v_declName_1363_, v_a_1848_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_val_1840_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1849_;
goto v___jp_1750_;
}
else
{
lean_dec(v_val_1840_);
lean_dec(v_declName_1363_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1847_;
goto v___jp_1750_;
}
}
}
else
{
lean_object* v_a_1850_; 
lean_dec(v_val_1840_);
lean_dec(v_declName_1363_);
v_a_1850_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1850_);
lean_dec_ref(v___x_1841_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1850_;
goto v___jp_1740_;
}
}
else
{
lean_object* v___x_1851_; 
lean_dec(v_a_1839_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1851_ = l_Lean_Meta_splitTarget_x3f(v_mvarId_1364_, v_hasTrace_1383_, v_hasTrace_1383_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_object* v_a_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1873_; 
v_a_1852_ = lean_ctor_get(v___x_1851_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1854_ = v___x_1851_;
v_isShared_1855_ = v_isSharedCheck_1873_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_a_1852_);
lean_dec(v___x_1851_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1873_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
if (lean_obj_tag(v_a_1852_) == 1)
{
lean_object* v_val_1856_; lean_object* v___x_1857_; 
lean_del_object(v___x_1854_);
lean_del_object(v___x_1818_);
lean_dec(v_mvarId_1364_);
v_val_1856_ = lean_ctor_get(v_a_1852_, 0);
lean_inc(v_val_1856_);
lean_dec_ref(v_a_1852_);
v___x_1857_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1857_) == 0)
{
lean_object* v_a_1858_; uint8_t v___x_1859_; 
v_a_1858_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_a_1858_);
lean_dec_ref(v___x_1857_);
v___x_1859_ = lean_unbox(v_a_1858_);
lean_dec(v_a_1858_);
if (v___x_1859_ == 0)
{
lean_object* v___x_1860_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1860_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(v_declName_1363_, v_val_1856_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1860_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1861_; lean_object* v___x_1862_; 
v___x_1861_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29);
v___x_1862_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1861_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1862_) == 0)
{
lean_object* v___x_1863_; 
lean_dec_ref(v___x_1862_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1863_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(v_declName_1363_, v_val_1856_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1863_;
goto v___jp_1750_;
}
else
{
lean_dec(v_val_1856_);
lean_dec(v_declName_1363_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1862_;
goto v___jp_1750_;
}
}
}
else
{
lean_object* v_a_1864_; 
lean_dec(v_val_1856_);
lean_dec(v_declName_1363_);
v_a_1864_ = lean_ctor_get(v___x_1857_, 0);
lean_inc(v_a_1864_);
lean_dec_ref(v___x_1857_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1864_;
goto v___jp_1740_;
}
}
else
{
lean_object* v___x_1865_; lean_object* v___x_1867_; 
lean_dec(v_a_1852_);
lean_dec(v_declName_1363_);
v___x_1865_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31);
if (v_isShared_1855_ == 0)
{
lean_ctor_set_tag(v___x_1854_, 1);
lean_ctor_set(v___x_1854_, 0, v_mvarId_1364_);
v___x_1867_ = v___x_1854_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v_mvarId_1364_);
v___x_1867_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1869_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set_tag(v___x_1818_, 7);
lean_ctor_set(v___x_1818_, 1, v___x_1867_);
lean_ctor_set(v___x_1818_, 0, v___x_1865_);
v___x_1869_ = v___x_1818_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v___x_1865_);
lean_ctor_set(v_reuseFailAlloc_1871_, 1, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_1869_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1870_;
goto v___jp_1750_;
}
}
}
}
}
else
{
lean_object* v_a_1874_; 
lean_del_object(v___x_1818_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1874_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_a_1874_);
lean_dec_ref(v___x_1851_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1874_;
goto v___jp_1740_;
}
}
}
else
{
lean_object* v_a_1875_; 
lean_del_object(v___x_1818_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1875_ = lean_ctor_get(v___x_1838_, 0);
lean_inc(v_a_1875_);
lean_dec_ref(v___x_1838_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1875_;
goto v___jp_1740_;
}
}
}
else
{
lean_object* v_a_1876_; 
lean_del_object(v___x_1818_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1876_ = lean_ctor_get(v___x_1827_, 0);
lean_inc(v_a_1876_);
lean_dec_ref(v___x_1827_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1876_;
goto v___jp_1740_;
}
}
default: 
{
lean_object* v_mvarId_1877_; lean_object* v___x_1878_; 
lean_del_object(v___x_1818_);
lean_dec(v_mvarId_1364_);
v_mvarId_1877_ = lean_ctor_get(v_fst_1816_, 0);
lean_inc(v_mvarId_1877_);
lean_dec_ref(v_fst_1816_);
v___x_1878_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v_a_1879_; uint8_t v___x_1880_; 
v_a_1879_ = lean_ctor_get(v___x_1878_, 0);
lean_inc(v_a_1879_);
lean_dec_ref(v___x_1878_);
v___x_1880_ = lean_unbox(v_a_1879_);
lean_dec(v_a_1879_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1881_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1881_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_mvarId_1877_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1881_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33);
v___x_1883_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1882_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v___x_1884_; 
lean_dec_ref(v___x_1883_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1884_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_mvarId_1877_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1884_;
goto v___jp_1750_;
}
else
{
lean_dec(v_mvarId_1877_);
lean_dec(v_declName_1363_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1883_;
goto v___jp_1750_;
}
}
}
else
{
lean_object* v_a_1885_; 
lean_dec(v_mvarId_1877_);
lean_dec(v_declName_1363_);
v_a_1885_ = lean_ctor_get(v___x_1878_, 0);
lean_inc(v_a_1885_);
lean_dec_ref(v___x_1878_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1885_;
goto v___jp_1740_;
}
}
}
}
}
else
{
lean_object* v_a_1888_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1888_ = lean_ctor_get(v___x_1814_, 0);
lean_inc(v_a_1888_);
lean_dec_ref(v___x_1814_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1888_;
goto v___jp_1740_;
}
}
else
{
lean_object* v_a_1889_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1889_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1889_);
lean_dec_ref(v___x_1811_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1889_;
goto v___jp_1740_;
}
}
}
else
{
lean_object* v_a_1890_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1890_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_a_1890_);
lean_dec_ref(v___x_1790_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1890_;
goto v___jp_1740_;
}
}
}
else
{
lean_object* v_a_1891_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1891_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_a_1891_);
lean_dec_ref(v___x_1779_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1891_;
goto v___jp_1740_;
}
}
}
else
{
lean_object* v_a_1892_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1892_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1892_);
lean_dec_ref(v___x_1768_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1892_;
goto v___jp_1740_;
}
}
else
{
lean_object* v___x_1893_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_1893_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1893_) == 0)
{
lean_object* v_a_1894_; uint8_t v___x_1895_; 
v_a_1894_ = lean_ctor_get(v___x_1893_, 0);
lean_inc(v_a_1894_);
lean_dec_ref(v___x_1893_);
v___x_1895_ = lean_unbox(v_a_1894_);
lean_dec(v_a_1894_);
if (v___x_1895_ == 0)
{
lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1896_ = lean_box(0);
v___x_1897_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v___x_1896_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1897_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1898_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35);
v___x_1899_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1898_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_object* v_a_1900_; lean_object* v___x_1901_; 
v_a_1900_ = lean_ctor_get(v___x_1899_, 0);
lean_inc(v_a_1900_);
lean_dec_ref(v___x_1899_);
v___x_1901_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v_a_1900_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1901_;
goto v___jp_1750_;
}
else
{
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1899_;
goto v___jp_1750_;
}
}
}
else
{
lean_object* v_a_1902_; 
v_a_1902_ = lean_ctor_get(v___x_1893_, 0);
lean_inc(v_a_1902_);
lean_dec_ref(v___x_1893_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1902_;
goto v___jp_1740_;
}
}
}
else
{
lean_object* v_a_1903_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1903_ = lean_ctor_get(v___x_1765_, 0);
lean_inc(v_a_1903_);
lean_dec_ref(v___x_1765_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1903_;
goto v___jp_1740_;
}
}
else
{
lean_object* v___x_1904_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_1904_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1904_) == 0)
{
lean_object* v_a_1905_; uint8_t v___x_1906_; 
v_a_1905_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_a_1905_);
lean_dec_ref(v___x_1904_);
v___x_1906_ = lean_unbox(v_a_1905_);
lean_dec(v_a_1905_);
if (v___x_1906_ == 0)
{
lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1907_ = lean_box(0);
v___x_1908_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v___x_1907_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1908_;
goto v___jp_1750_;
}
else
{
lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1909_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37);
v___x_1910_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1909_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1912_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1911_);
lean_dec_ref(v___x_1910_);
v___x_1912_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v_a_1911_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1912_;
goto v___jp_1750_;
}
else
{
v___y_1751_ = v_a_1758_;
v___y_1752_ = v___x_1761_;
v___y_1753_ = v___x_1910_;
goto v___jp_1750_;
}
}
}
else
{
lean_object* v_a_1913_; 
v_a_1913_ = lean_ctor_get(v___x_1904_, 0);
lean_inc(v_a_1913_);
lean_dec_ref(v___x_1904_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1913_;
goto v___jp_1740_;
}
}
}
else
{
lean_object* v_a_1914_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_1914_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_a_1914_);
lean_dec_ref(v___x_1762_);
v___y_1741_ = v_a_1758_;
v___y_1742_ = v___x_1761_;
v_a_1743_ = v_a_1914_;
goto v___jp_1740_;
}
}
else
{
lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1915_ = lean_io_get_num_heartbeats();
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1916_ = l_Lean_Elab_Eqns_tryURefl(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; uint8_t v___x_1918_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref(v___x_1916_);
v___x_1918_ = lean_unbox(v_a_1917_);
lean_dec(v_a_1917_);
if (v___x_1918_ == 0)
{
lean_object* v___x_1919_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1919_ = l_Lean_Elab_Eqns_tryContradiction(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; uint8_t v___x_1921_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref(v___x_1919_);
v___x_1921_ = lean_unbox(v_a_1920_);
if (v___x_1921_ == 0)
{
lean_object* v___x_1922_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1922_ = l_Lean_Elab_Eqns_whnfReducibleLHS_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1922_) == 0)
{
lean_object* v_a_1923_; 
v_a_1923_ = lean_ctor_get(v___x_1922_, 0);
lean_inc(v_a_1923_);
lean_dec_ref(v___x_1922_);
if (lean_obj_tag(v_a_1923_) == 1)
{
lean_object* v_val_1924_; lean_object* v___x_1925_; 
lean_dec(v_a_1920_);
lean_dec(v_mvarId_1364_);
v_val_1924_ = lean_ctor_get(v_a_1923_, 0);
lean_inc(v_val_1924_);
lean_dec_ref(v_a_1923_);
v___x_1925_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1925_) == 0)
{
lean_object* v_a_1926_; uint8_t v___x_1927_; 
v_a_1926_ = lean_ctor_get(v___x_1925_, 0);
lean_inc(v_a_1926_);
lean_dec_ref(v___x_1925_);
v___x_1927_ = lean_unbox(v_a_1926_);
lean_dec(v_a_1926_);
if (v___x_1927_ == 0)
{
lean_object* v___x_1928_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1928_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1924_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1928_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__6);
v___x_1930_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1929_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v___x_1931_; 
lean_dec_ref(v___x_1930_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1931_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1924_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1931_;
goto v___jp_1718_;
}
else
{
lean_dec(v_val_1924_);
lean_dec(v_declName_1363_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1930_;
goto v___jp_1718_;
}
}
}
else
{
lean_object* v_a_1932_; 
lean_dec(v_val_1924_);
lean_dec(v_declName_1363_);
v_a_1932_ = lean_ctor_get(v___x_1925_, 0);
lean_inc(v_a_1932_);
lean_dec_ref(v___x_1925_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_1932_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_1933_; 
lean_dec(v_a_1923_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1933_ = l_Lean_Elab_Eqns_simpMatch_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_1934_);
lean_dec_ref(v___x_1933_);
if (lean_obj_tag(v_a_1934_) == 1)
{
lean_object* v_val_1935_; lean_object* v___x_1936_; 
lean_dec(v_a_1920_);
lean_dec(v_mvarId_1364_);
v_val_1935_ = lean_ctor_get(v_a_1934_, 0);
lean_inc(v_val_1935_);
lean_dec_ref(v_a_1934_);
v___x_1936_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v_a_1937_; uint8_t v___x_1938_; 
v_a_1937_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1937_);
lean_dec_ref(v___x_1936_);
v___x_1938_ = lean_unbox(v_a_1937_);
lean_dec(v_a_1937_);
if (v___x_1938_ == 0)
{
lean_object* v___x_1939_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1939_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1935_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1939_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__8);
v___x_1941_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1940_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v___x_1942_; 
lean_dec_ref(v___x_1941_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1942_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1935_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1942_;
goto v___jp_1718_;
}
else
{
lean_dec(v_val_1935_);
lean_dec(v_declName_1363_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1941_;
goto v___jp_1718_;
}
}
}
else
{
lean_object* v_a_1943_; 
lean_dec(v_val_1935_);
lean_dec(v_declName_1363_);
v_a_1943_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1943_);
lean_dec_ref(v___x_1936_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_1943_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_1944_; 
lean_dec(v_a_1934_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1944_ = l_Lean_Elab_Eqns_simpIf_x3f(v_mvarId_1364_, v___x_1760_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_a_1945_; 
v_a_1945_ = lean_ctor_get(v___x_1944_, 0);
lean_inc(v_a_1945_);
lean_dec_ref(v___x_1944_);
if (lean_obj_tag(v_a_1945_) == 1)
{
lean_object* v_val_1946_; lean_object* v___x_1947_; 
lean_dec(v_a_1920_);
lean_dec(v_mvarId_1364_);
v_val_1946_ = lean_ctor_get(v_a_1945_, 0);
lean_inc(v_val_1946_);
lean_dec_ref(v_a_1945_);
v___x_1947_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; uint8_t v___x_1949_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1948_);
lean_dec_ref(v___x_1947_);
v___x_1949_ = lean_unbox(v_a_1948_);
lean_dec(v_a_1948_);
if (v___x_1949_ == 0)
{
lean_object* v___x_1950_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1950_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1946_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1950_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1951_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__10);
v___x_1952_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1951_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_object* v___x_1953_; 
lean_dec_ref(v___x_1952_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1953_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1946_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1953_;
goto v___jp_1718_;
}
else
{
lean_dec(v_val_1946_);
lean_dec(v_declName_1363_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1952_;
goto v___jp_1718_;
}
}
}
else
{
lean_object* v_a_1954_; 
lean_dec(v_val_1946_);
lean_dec(v_declName_1363_);
v_a_1954_ = lean_ctor_get(v___x_1947_, 0);
lean_inc(v_a_1954_);
lean_dec_ref(v___x_1947_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_1954_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_1955_; lean_object* v___x_1956_; uint8_t v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; uint8_t v___x_1960_; uint8_t v___x_1961_; uint8_t v___x_1962_; uint8_t v___x_1963_; uint8_t v___x_1964_; uint8_t v___x_1965_; uint8_t v___x_1966_; uint8_t v___x_1967_; uint8_t v___x_1968_; uint8_t v___x_1969_; uint8_t v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
lean_dec(v_a_1945_);
v___x_1955_ = lean_unsigned_to_nat(100000u);
v___x_1956_ = lean_unsigned_to_nat(2u);
v___x_1957_ = 0;
v___x_1958_ = lean_box(0);
v___x_1959_ = lean_alloc_ctor(0, 3, 29);
lean_ctor_set(v___x_1959_, 0, v___x_1955_);
lean_ctor_set(v___x_1959_, 1, v___x_1956_);
lean_ctor_set(v___x_1959_, 2, v___x_1958_);
v___x_1960_ = lean_unbox(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3, v___x_1960_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 1, v___x_1760_);
v___x_1961_ = lean_unbox(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 2, v___x_1961_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 3, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 4, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 5, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 6, v___x_1957_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 7, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 8, v___x_1760_);
v___x_1962_ = lean_unbox(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 9, v___x_1962_);
v___x_1963_ = lean_unbox(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 10, v___x_1963_);
v___x_1964_ = lean_unbox(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 11, v___x_1964_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 12, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 13, v___x_1760_);
v___x_1965_ = lean_unbox(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 14, v___x_1965_);
v___x_1966_ = lean_unbox(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 15, v___x_1966_);
v___x_1967_ = lean_unbox(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 16, v___x_1967_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 17, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 18, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 19, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 20, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 21, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 22, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 23, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 24, v___x_1760_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 25, v___x_1760_);
v___x_1968_ = lean_unbox(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 26, v___x_1968_);
v___x_1969_ = lean_unbox(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 27, v___x_1969_);
v___x_1970_ = lean_unbox(v_a_1920_);
lean_dec(v_a_1920_);
lean_ctor_set_uint8(v___x_1959_, sizeof(void*)*3 + 28, v___x_1970_);
v___x_1971_ = lean_unsigned_to_nat(0u);
v___x_1972_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__11));
v___x_1973_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__13);
v___x_1974_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__15);
v___x_1975_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1975_, 0, v___x_1973_);
lean_ctor_set(v___x_1975_, 1, v___x_1974_);
lean_ctor_set_uint8(v___x_1975_, sizeof(void*)*2, v___x_1760_);
v___x_1976_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_1959_, v___x_1972_, v___x_1975_, v_a_1365_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_1977_);
lean_dec_ref(v___x_1976_);
v___x_1978_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__21);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_1979_ = l_Lean_Meta_simpTargetStar(v_mvarId_1364_, v_a_1977_, v___x_1972_, v___x_1958_, v___x_1978_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1979_) == 0)
{
lean_object* v_a_1980_; lean_object* v_fst_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_2051_; 
v_a_1980_ = lean_ctor_get(v___x_1979_, 0);
lean_inc(v_a_1980_);
lean_dec_ref(v___x_1979_);
v_fst_1981_ = lean_ctor_get(v_a_1980_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v_a_1980_);
if (v_isSharedCheck_2051_ == 0)
{
lean_object* v_unused_2052_; 
v_unused_2052_ = lean_ctor_get(v_a_1980_, 1);
lean_dec(v_unused_2052_);
v___x_1983_ = v_a_1980_;
v_isShared_1984_ = v_isSharedCheck_2051_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_fst_1981_);
lean_dec(v_a_1980_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_2051_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
switch(lean_obj_tag(v_fst_1981_))
{
case 0:
{
lean_object* v___x_1985_; 
lean_del_object(v___x_1983_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_1985_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; uint8_t v___x_1987_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1986_);
lean_dec_ref(v___x_1985_);
v___x_1987_ = lean_unbox(v_a_1986_);
lean_dec(v_a_1986_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; 
v___x_1988_ = lean_box(0);
v___y_1709_ = v___x_1915_;
v___y_1710_ = v_a_1758_;
v_a_1711_ = v___x_1988_;
goto v___jp_1708_;
}
else
{
lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1989_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__23);
v___x_1990_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1989_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1990_;
goto v___jp_1718_;
}
}
else
{
lean_object* v_a_1991_; 
v_a_1991_ = lean_ctor_get(v___x_1985_, 0);
lean_inc(v_a_1991_);
lean_dec_ref(v___x_1985_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_1991_;
goto v___jp_1713_;
}
}
case 1:
{
lean_object* v___x_1992_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_declName_1363_);
lean_inc(v_mvarId_1364_);
v___x_1992_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f(v_mvarId_1364_, v_declName_1363_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_a_1993_);
lean_dec_ref(v___x_1992_);
if (lean_obj_tag(v_a_1993_) == 1)
{
lean_object* v_val_1994_; lean_object* v___x_1995_; 
lean_del_object(v___x_1983_);
lean_dec(v_mvarId_1364_);
v_val_1994_ = lean_ctor_get(v_a_1993_, 0);
lean_inc(v_val_1994_);
lean_dec_ref(v_a_1993_);
v___x_1995_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_1995_) == 0)
{
lean_object* v_a_1996_; uint8_t v___x_1997_; 
v_a_1996_ = lean_ctor_get(v___x_1995_, 0);
lean_inc(v_a_1996_);
lean_dec_ref(v___x_1995_);
v___x_1997_ = lean_unbox(v_a_1996_);
lean_dec(v_a_1996_);
if (v___x_1997_ == 0)
{
lean_object* v___x_1998_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_1998_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1994_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_1998_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1999_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__25);
v___x_2000_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_1999_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v___x_2001_; 
lean_dec_ref(v___x_2000_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_2001_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_val_1994_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2001_;
goto v___jp_1718_;
}
else
{
lean_dec(v_val_1994_);
lean_dec(v_declName_1363_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2000_;
goto v___jp_1718_;
}
}
}
else
{
lean_object* v_a_2002_; 
lean_dec(v_val_1994_);
lean_dec(v_declName_1363_);
v_a_2002_ = lean_ctor_get(v___x_1995_, 0);
lean_inc(v_a_2002_);
lean_dec_ref(v___x_1995_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2002_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_2003_; 
lean_dec(v_a_1993_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_2003_ = l_Lean_Meta_casesOnStuckLHS_x3f(v_mvarId_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
lean_inc(v_a_2004_);
lean_dec_ref(v___x_2003_);
if (lean_obj_tag(v_a_2004_) == 1)
{
lean_object* v_val_2005_; lean_object* v___x_2006_; 
lean_del_object(v___x_1983_);
lean_dec(v_mvarId_1364_);
v_val_2005_ = lean_ctor_get(v_a_2004_, 0);
lean_inc(v_val_2005_);
lean_dec_ref(v_a_2004_);
v___x_2006_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_object* v_a_2007_; uint8_t v___x_2008_; 
v_a_2007_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_a_2007_);
lean_dec_ref(v___x_2006_);
v___x_2008_ = lean_unbox(v_a_2007_);
lean_dec(v_a_2007_);
if (v___x_2008_ == 0)
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = lean_box(0);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_2010_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(v_val_2005_, v___x_1971_, v_declName_1363_, v___x_2009_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_val_2005_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2010_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__27);
v___x_2012_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2011_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v_a_2013_; lean_object* v___x_2014_; 
v_a_2013_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_a_2013_);
lean_dec_ref(v___x_2012_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_2014_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(v_val_2005_, v___x_1971_, v_declName_1363_, v_a_2013_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
lean_dec(v_val_2005_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2014_;
goto v___jp_1718_;
}
else
{
lean_dec(v_val_2005_);
lean_dec(v_declName_1363_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2012_;
goto v___jp_1718_;
}
}
}
else
{
lean_object* v_a_2015_; 
lean_dec(v_val_2005_);
lean_dec(v_declName_1363_);
v_a_2015_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_a_2015_);
lean_dec_ref(v___x_2006_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2015_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_2016_; 
lean_dec(v_a_2004_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
lean_inc(v_mvarId_1364_);
v___x_2016_ = l_Lean_Meta_splitTarget_x3f(v_mvarId_1364_, v___x_1760_, v___x_1760_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2038_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2038_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2038_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
if (lean_obj_tag(v_a_2017_) == 1)
{
lean_object* v_val_2021_; lean_object* v___x_2022_; 
lean_del_object(v___x_2019_);
lean_del_object(v___x_1983_);
lean_dec(v_mvarId_1364_);
v_val_2021_ = lean_ctor_get(v_a_2017_, 0);
lean_inc(v_val_2021_);
lean_dec_ref(v_a_2017_);
v___x_2022_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2022_) == 0)
{
lean_object* v_a_2023_; uint8_t v___x_2024_; 
v_a_2023_ = lean_ctor_get(v___x_2022_, 0);
lean_inc(v_a_2023_);
lean_dec_ref(v___x_2022_);
v___x_2024_ = lean_unbox(v_a_2023_);
lean_dec(v_a_2023_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_2025_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(v_declName_1363_, v_val_2021_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2025_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__29);
v___x_2027_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2026_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v___x_2028_; 
lean_dec_ref(v___x_2027_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_2028_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(v_declName_1363_, v_val_2021_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2028_;
goto v___jp_1718_;
}
else
{
lean_dec(v_val_2021_);
lean_dec(v_declName_1363_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2027_;
goto v___jp_1718_;
}
}
}
else
{
lean_object* v_a_2029_; 
lean_dec(v_val_2021_);
lean_dec(v_declName_1363_);
v_a_2029_ = lean_ctor_get(v___x_2022_, 0);
lean_inc(v_a_2029_);
lean_dec_ref(v___x_2022_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2029_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_2030_; lean_object* v___x_2032_; 
lean_dec(v_a_2017_);
lean_dec(v_declName_1363_);
v___x_2030_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__31);
if (v_isShared_2020_ == 0)
{
lean_ctor_set_tag(v___x_2019_, 1);
lean_ctor_set(v___x_2019_, 0, v_mvarId_1364_);
v___x_2032_ = v___x_2019_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_mvarId_1364_);
v___x_2032_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
lean_object* v___x_2034_; 
if (v_isShared_1984_ == 0)
{
lean_ctor_set_tag(v___x_1983_, 7);
lean_ctor_set(v___x_1983_, 1, v___x_2032_);
lean_ctor_set(v___x_1983_, 0, v___x_2030_);
v___x_2034_ = v___x_1983_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2030_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v___x_2032_);
v___x_2034_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
lean_object* v___x_2035_; 
v___x_2035_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_2034_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2035_;
goto v___jp_1718_;
}
}
}
}
}
else
{
lean_object* v_a_2039_; 
lean_del_object(v___x_1983_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2039_ = lean_ctor_get(v___x_2016_, 0);
lean_inc(v_a_2039_);
lean_dec_ref(v___x_2016_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2039_;
goto v___jp_1713_;
}
}
}
else
{
lean_object* v_a_2040_; 
lean_del_object(v___x_1983_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2040_ = lean_ctor_get(v___x_2003_, 0);
lean_inc(v_a_2040_);
lean_dec_ref(v___x_2003_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2040_;
goto v___jp_1713_;
}
}
}
else
{
lean_object* v_a_2041_; 
lean_del_object(v___x_1983_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2041_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_a_2041_);
lean_dec_ref(v___x_1992_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2041_;
goto v___jp_1713_;
}
}
default: 
{
lean_object* v_mvarId_2042_; lean_object* v___x_2043_; 
lean_del_object(v___x_1983_);
lean_dec(v_mvarId_1364_);
v_mvarId_2042_ = lean_ctor_get(v_fst_1981_, 0);
lean_inc(v_mvarId_2042_);
lean_dec_ref(v_fst_1981_);
v___x_2043_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v_a_2044_; uint8_t v___x_2045_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
lean_inc(v_a_2044_);
lean_dec_ref(v___x_2043_);
v___x_2045_ = lean_unbox(v_a_2044_);
lean_dec(v_a_2044_);
if (v___x_2045_ == 0)
{
lean_object* v___x_2046_; 
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_2046_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_mvarId_2042_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2046_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2047_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__33);
v___x_2048_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2047_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v___x_2049_; 
lean_dec_ref(v___x_2048_);
lean_inc(v_a_1368_);
lean_inc_ref(v_a_1367_);
lean_inc(v_a_1366_);
lean_inc_ref(v_a_1365_);
v___x_2049_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_1363_, v_mvarId_2042_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2049_;
goto v___jp_1718_;
}
else
{
lean_dec(v_mvarId_2042_);
lean_dec(v_declName_1363_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2048_;
goto v___jp_1718_;
}
}
}
else
{
lean_object* v_a_2050_; 
lean_dec(v_mvarId_2042_);
lean_dec(v_declName_1363_);
v_a_2050_ = lean_ctor_get(v___x_2043_, 0);
lean_inc(v_a_2050_);
lean_dec_ref(v___x_2043_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2050_;
goto v___jp_1713_;
}
}
}
}
}
else
{
lean_object* v_a_2053_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2053_ = lean_ctor_get(v___x_1979_, 0);
lean_inc(v_a_2053_);
lean_dec_ref(v___x_1979_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2053_;
goto v___jp_1713_;
}
}
else
{
lean_object* v_a_2054_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2054_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_2054_);
lean_dec_ref(v___x_1976_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2054_;
goto v___jp_1713_;
}
}
}
else
{
lean_object* v_a_2055_; 
lean_dec(v_a_1920_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2055_ = lean_ctor_get(v___x_1944_, 0);
lean_inc(v_a_2055_);
lean_dec_ref(v___x_1944_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2055_;
goto v___jp_1713_;
}
}
}
else
{
lean_object* v_a_2056_; 
lean_dec(v_a_1920_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2056_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_2056_);
lean_dec_ref(v___x_1933_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2056_;
goto v___jp_1713_;
}
}
}
else
{
lean_object* v_a_2057_; 
lean_dec(v_a_1920_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2057_ = lean_ctor_get(v___x_1922_, 0);
lean_inc(v_a_2057_);
lean_dec_ref(v___x_1922_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2057_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_2058_; 
lean_dec(v_a_1920_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_2058_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; uint8_t v___x_2060_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2059_);
lean_dec_ref(v___x_2058_);
v___x_2060_ = lean_unbox(v_a_2059_);
lean_dec(v_a_2059_);
if (v___x_2060_ == 0)
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = lean_box(0);
v___x_2062_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v___x_2061_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2062_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2063_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__35);
v___x_2064_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2063_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v_a_2065_; lean_object* v___x_2066_; 
v_a_2065_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2065_);
lean_dec_ref(v___x_2064_);
v___x_2066_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v_a_2065_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2066_;
goto v___jp_1718_;
}
else
{
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2064_;
goto v___jp_1718_;
}
}
}
else
{
lean_object* v_a_2067_; 
v_a_2067_ = lean_ctor_get(v___x_2058_, 0);
lean_inc(v_a_2067_);
lean_dec_ref(v___x_2058_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2067_;
goto v___jp_1713_;
}
}
}
else
{
lean_object* v_a_2068_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2068_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_2068_);
lean_dec_ref(v___x_1919_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2068_;
goto v___jp_1713_;
}
}
else
{
lean_object* v___x_2069_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v___x_2069_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_1384_, v_a_1367_);
if (lean_obj_tag(v___x_2069_) == 0)
{
lean_object* v_a_2070_; uint8_t v___x_2071_; 
v_a_2070_ = lean_ctor_get(v___x_2069_, 0);
lean_inc(v_a_2070_);
lean_dec_ref(v___x_2069_);
v___x_2071_ = lean_unbox(v_a_2070_);
lean_dec(v_a_2070_);
if (v___x_2071_ == 0)
{
lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2072_ = lean_box(0);
v___x_2073_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v___x_2072_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2073_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2074_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__37);
v___x_2075_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_1384_, v___x_2074_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; lean_object* v___x_2077_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref(v___x_2075_);
v___x_2077_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__1(v_a_2076_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2077_;
goto v___jp_1718_;
}
else
{
v___y_1719_ = v___x_1915_;
v___y_1720_ = v_a_1758_;
v___y_1721_ = v___x_2075_;
goto v___jp_1718_;
}
}
}
else
{
lean_object* v_a_2078_; 
v_a_2078_ = lean_ctor_get(v___x_2069_, 0);
lean_inc(v_a_2078_);
lean_dec_ref(v___x_2069_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2078_;
goto v___jp_1713_;
}
}
}
else
{
lean_object* v_a_2079_; 
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2079_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_2079_);
lean_dec_ref(v___x_1916_);
v___y_1714_ = v___x_1915_;
v___y_1715_ = v_a_1758_;
v_a_1716_ = v_a_2079_;
goto v___jp_1713_;
}
}
}
else
{
lean_object* v_a_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
lean_dec_ref(v___f_1693_);
lean_dec(v_a_1692_);
lean_dec_ref(v_options_1382_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2080_ = lean_ctor_get(v___x_1757_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_1757_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_1757_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_a_2080_);
lean_dec(v___x_1757_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_a_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
}
}
else
{
lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2405_; 
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_mvarId_1364_);
lean_dec(v_declName_1363_);
v_a_2398_ = lean_ctor_get(v___x_1691_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_1691_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2400_ = v___x_1691_;
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_1691_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2405_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
lean_object* v___x_2403_; 
if (v_isShared_2401_ == 0)
{
v___x_2403_ = v___x_2400_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v_a_2398_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
v___jp_1370_:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = lean_box(0);
v___x_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1371_);
return v___x_1372_;
}
v___jp_1373_:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = lean_box(0);
v___x_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1374_);
return v___x_1375_;
}
v___jp_1376_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = lean_box(0);
v___x_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1377_);
return v___x_1378_;
}
v___jp_1379_:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = lean_box(0);
v___x_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
return v___x_1381_;
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(lean_object* v_declName_2406_, lean_object* v_as_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
if (lean_obj_tag(v_as_2407_) == 0)
{
lean_object* v___x_2413_; lean_object* v___x_2414_; 
lean_dec(v___y_2411_);
lean_dec_ref(v___y_2410_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v_declName_2406_);
v___x_2413_ = lean_box(0);
v___x_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2413_);
return v___x_2414_;
}
else
{
lean_object* v_head_2415_; lean_object* v_tail_2416_; lean_object* v___x_2417_; 
v_head_2415_ = lean_ctor_get(v_as_2407_, 0);
lean_inc(v_head_2415_);
v_tail_2416_ = lean_ctor_get(v_as_2407_, 1);
lean_inc(v_tail_2416_);
lean_dec_ref(v_as_2407_);
lean_inc(v___y_2411_);
lean_inc_ref(v___y_2410_);
lean_inc(v___y_2409_);
lean_inc_ref(v___y_2408_);
lean_inc(v_declName_2406_);
v___x_2417_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2406_, v_head_2415_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_dec_ref(v___x_2417_);
v_as_2407_ = v_tail_2416_;
goto _start;
}
else
{
lean_dec(v_tail_2416_);
lean_dec(v___y_2411_);
lean_dec_ref(v___y_2410_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v_declName_2406_);
return v___x_2417_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3___boxed(lean_object* v_declName_2419_, lean_object* v_as_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l_List_forM___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__3(v_declName_2419_, v_as_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2___boxed(lean_object* v_declName_2427_, lean_object* v_as_2428_, lean_object* v_i_2429_, lean_object* v_stop_2430_, lean_object* v_b_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_){
_start:
{
size_t v_i_boxed_2437_; size_t v_stop_boxed_2438_; lean_object* v_res_2439_; 
v_i_boxed_2437_ = lean_unbox_usize(v_i_2429_);
lean_dec(v_i_2429_);
v_stop_boxed_2438_ = lean_unbox_usize(v_stop_2430_);
lean_dec(v_stop_2430_);
v_res_2439_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__2(v_declName_2427_, v_as_2428_, v_i_boxed_2437_, v_stop_boxed_2438_, v_b_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
lean_dec_ref(v_as_2428_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5___boxed(lean_object* v_val_2440_, lean_object* v___x_2441_, lean_object* v_declName_2442_, lean_object* v_____r_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_){
_start:
{
lean_object* v_res_2449_; 
v_res_2449_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___lam__5(v_val_2440_, v___x_2441_, v_declName_2442_, v_____r_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
lean_dec(v___x_2441_);
lean_dec_ref(v_val_2440_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___boxed(lean_object* v_declName_2450_, lean_object* v_mvarId_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2450_, v_mvarId_2451_, v_a_2452_, v_a_2453_, v_a_2454_, v_a_2455_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8(lean_object* v_00_u03b1_2458_, lean_object* v_x_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_){
_start:
{
lean_object* v___x_2465_; 
v___x_2465_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___redArg(v_x_2459_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___boxed(lean_object* v_00_u03b1_2466_, lean_object* v_x_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8(v_00_u03b1_2466_, v_x_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg(lean_object* v_constName_2474_, uint8_t v_skipRealize_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v___x_2478_; lean_object* v_env_2479_; uint8_t v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2478_ = lean_st_ref_get(v___y_2476_);
v_env_2479_ = lean_ctor_get(v___x_2478_, 0);
lean_inc_ref(v_env_2479_);
lean_dec(v___x_2478_);
v___x_2480_ = l_Lean_Environment_contains(v_env_2479_, v_constName_2474_, v_skipRealize_2475_);
v___x_2481_ = lean_box(v___x_2480_);
v___x_2482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg___boxed(lean_object* v_constName_2483_, lean_object* v_skipRealize_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
uint8_t v_skipRealize_boxed_2487_; lean_object* v_res_2488_; 
v_skipRealize_boxed_2487_ = lean_unbox(v_skipRealize_2484_);
v_res_2488_ = l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg(v_constName_2483_, v_skipRealize_boxed_2487_, v___y_2485_);
lean_dec(v___y_2485_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0(lean_object* v_constName_2489_, uint8_t v_skipRealize_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
lean_object* v___x_2496_; 
v___x_2496_ = l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg(v_constName_2489_, v_skipRealize_2490_, v___y_2494_);
return v___x_2496_;
}
}
LEAN_EXPORT lean_object* l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___boxed(lean_object* v_constName_2497_, lean_object* v_skipRealize_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
uint8_t v_skipRealize_boxed_2504_; lean_object* v_res_2505_; 
v_skipRealize_boxed_2504_ = lean_unbox(v_skipRealize_2498_);
v_res_2505_ = l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0(v_constName_2497_, v_skipRealize_boxed_2504_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0(lean_object* v_snd_2506_, lean_object* v___x_2507_, lean_object* v___x_2508_, lean_object* v_snd_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___x_2515_; 
lean_inc(v___y_2513_);
lean_inc_ref(v___y_2512_);
lean_inc(v___y_2511_);
lean_inc_ref(v___y_2510_);
lean_inc_ref(v_snd_2506_);
v___x_2515_ = l_Lean_Meta_mkCongrArg(v_snd_2506_, v___x_2507_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2516_);
lean_dec_ref(v___x_2515_);
v___x_2517_ = l_Lean_Expr_app___override(v_snd_2506_, v___x_2508_);
v___x_2518_ = l_Lean_MVarId_replaceTargetEq(v_snd_2509_, v___x_2517_, v_a_2516_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
return v___x_2518_;
}
else
{
lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2526_; 
lean_dec(v___y_2513_);
lean_dec_ref(v___y_2512_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v_snd_2509_);
lean_dec_ref(v___x_2508_);
lean_dec_ref(v_snd_2506_);
v_a_2519_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2526_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2526_ == 0)
{
v___x_2521_ = v___x_2515_;
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2515_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2526_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2524_; 
if (v_isShared_2522_ == 0)
{
v___x_2524_ = v___x_2521_;
goto v_reusejp_2523_;
}
else
{
lean_object* v_reuseFailAlloc_2525_; 
v_reuseFailAlloc_2525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2525_, 0, v_a_2519_);
v___x_2524_ = v_reuseFailAlloc_2525_;
goto v_reusejp_2523_;
}
v_reusejp_2523_:
{
return v___x_2524_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0___boxed(lean_object* v_snd_2527_, lean_object* v___x_2528_, lean_object* v___x_2529_, lean_object* v_snd_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0(v_snd_2527_, v___x_2528_, v___x_2529_, v_snd_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
return v_res_2536_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; 
v___x_2542_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__3));
v___x_2543_ = l_Lean_stringToMessageData(v___x_2542_);
return v___x_2543_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6(void){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2545_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__5));
v___x_2546_ = l_Lean_stringToMessageData(v___x_2545_);
return v___x_2546_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8(void){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__7));
v___x_2549_ = l_Lean_stringToMessageData(v___x_2548_);
return v___x_2549_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10(void){
_start:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2551_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__9));
v___x_2552_ = l_Lean_stringToMessageData(v___x_2551_);
return v___x_2552_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12(void){
_start:
{
lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2554_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__11));
v___x_2555_ = l_Lean_stringToMessageData(v___x_2554_);
return v___x_2555_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14(void){
_start:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2557_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__13));
v___x_2558_ = l_Lean_stringToMessageData(v___x_2557_);
return v___x_2558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1(lean_object* v_mvarId_2559_, lean_object* v_cls_2560_, lean_object* v___x_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_){
_start:
{
lean_object* v___x_2567_; 
lean_inc(v_mvarId_2559_);
v___x_2567_ = l_Lean_MVarId_getType(v_mvarId_2559_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; lean_object* v___x_2569_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref(v___x_2567_);
lean_inc(v___y_2565_);
lean_inc_ref(v___y_2564_);
lean_inc(v___y_2563_);
lean_inc_ref(v___y_2562_);
v___x_2569_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS(v_a_2568_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_object* v_a_2570_; lean_object* v_fst_2571_; lean_object* v_snd_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2722_; 
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2570_);
lean_dec_ref(v___x_2569_);
v_fst_2571_ = lean_ctor_get(v_a_2570_, 0);
v_snd_2572_ = lean_ctor_get(v_a_2570_, 1);
v_isSharedCheck_2722_ = !lean_is_exclusive(v_a_2570_);
if (v_isSharedCheck_2722_ == 0)
{
v___x_2574_ = v_a_2570_;
v_isShared_2575_ = v_isSharedCheck_2722_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_snd_2572_);
lean_inc(v_fst_2571_);
lean_dec(v_a_2570_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2722_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; uint8_t v___x_2580_; lean_object* v___x_2581_; lean_object* v_a_2582_; lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2721_; 
v___x_2576_ = l_Lean_Expr_getAppFn(v_fst_2571_);
v___x_2577_ = l_Lean_Expr_constName_x21(v___x_2576_);
v___x_2578_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__0));
v___x_2579_ = l_Lean_Name_str___override(v___x_2577_, v___x_2578_);
v___x_2580_ = 1;
lean_inc(v___x_2579_);
v___x_2581_ = l_Lean_hasConst___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold_spec__0___redArg(v___x_2579_, v___x_2580_, v___y_2565_);
v_a_2582_ = lean_ctor_get(v___x_2581_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2581_);
if (v_isSharedCheck_2721_ == 0)
{
v___x_2584_ = v___x_2581_;
v_isShared_2585_ = v_isSharedCheck_2721_;
goto v_resetjp_2583_;
}
else
{
lean_inc(v_a_2582_);
lean_dec(v___x_2581_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2721_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v_nargs_2586_; lean_object* v___x_2587_; lean_object* v_dummy_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2596_; uint8_t v___y_2597_; lean_object* v___y_2598_; lean_object* v___y_2599_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v___y_2634_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; uint8_t v___x_2704_; 
v_nargs_2586_ = l_Lean_Expr_getAppNumArgs(v_fst_2571_);
v___x_2587_ = l_Lean_Expr_constLevels_x21(v___x_2576_);
lean_dec_ref(v___x_2576_);
v_dummy_2588_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go___redArg___closed__0);
lean_inc(v_nargs_2586_);
v___x_2589_ = lean_mk_array(v_nargs_2586_, v_dummy_2588_);
v___x_2590_ = lean_unsigned_to_nat(1u);
v___x_2591_ = lean_nat_sub(v_nargs_2586_, v___x_2590_);
lean_dec(v_nargs_2586_);
v___x_2592_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_fst_2571_, v___x_2589_, v___x_2591_);
v___x_2704_ = lean_unbox(v_a_2582_);
lean_dec(v_a_2582_);
if (v___x_2704_ == 0)
{
lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2720_; 
lean_dec_ref(v___x_2592_);
lean_dec(v___x_2587_);
lean_del_object(v___x_2584_);
lean_del_object(v___x_2574_);
lean_dec(v_snd_2572_);
lean_dec_ref(v___x_2561_);
lean_dec(v_cls_2560_);
v___x_2705_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__12);
v___x_2706_ = l_Lean_MessageData_ofName(v___x_2579_);
v___x_2707_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2705_);
lean_ctor_set(v___x_2707_, 1, v___x_2706_);
v___x_2708_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__14);
v___x_2709_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2707_);
lean_ctor_set(v___x_2709_, 1, v___x_2708_);
v___x_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2710_, 0, v_mvarId_2559_);
v___x_2711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2709_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
v___x_2712_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_2711_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
v_a_2713_ = lean_ctor_get(v___x_2712_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2715_ = v___x_2712_;
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2712_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2718_; 
if (v_isShared_2716_ == 0)
{
v___x_2718_ = v___x_2715_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_a_2713_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
else
{
v___y_2634_ = v___y_2562_;
v___y_2635_ = v___y_2563_;
v___y_2636_ = v___y_2564_;
v___y_2637_ = v___y_2565_;
goto v___jp_2633_;
}
v___jp_2593_:
{
lean_object* v___x_2602_; 
lean_inc(v___y_2601_);
lean_inc_ref(v___y_2600_);
lean_inc(v___y_2599_);
lean_inc_ref(v___y_2598_);
lean_inc_ref(v___y_2594_);
v___x_2602_ = lean_infer_type(v___y_2594_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_);
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
lean_inc(v_a_2603_);
lean_dec_ref(v___x_2602_);
v___x_2604_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__2));
lean_inc(v___y_2601_);
lean_inc_ref(v___y_2600_);
lean_inc(v___y_2599_);
lean_inc_ref(v___y_2598_);
v___x_2605_ = l_Lean_MVarId_define(v_mvarId_2559_, v___x_2604_, v_a_2603_, v___y_2594_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v_a_2606_; lean_object* v___x_2607_; 
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
lean_inc(v_a_2606_);
lean_dec_ref(v___x_2605_);
lean_inc(v___y_2601_);
lean_inc_ref(v___y_2600_);
lean_inc(v___y_2599_);
lean_inc_ref(v___y_2598_);
v___x_2607_ = l_Lean_Meta_intro1Core(v_a_2606_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v_a_2608_; lean_object* v_fst_2609_; lean_object* v_snd_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___f_2615_; lean_object* v___x_2616_; 
v_a_2608_ = lean_ctor_get(v___x_2607_, 0);
lean_inc(v_a_2608_);
lean_dec_ref(v___x_2607_);
v_fst_2609_ = lean_ctor_get(v_a_2608_, 0);
lean_inc(v_fst_2609_);
v_snd_2610_ = lean_ctor_get(v_a_2608_, 1);
lean_inc(v_snd_2610_);
lean_dec(v_a_2608_);
v___x_2611_ = l_Lean_Expr_appFn_x21(v___y_2595_);
lean_dec_ref(v___y_2595_);
v___x_2612_ = l_Lean_mkFVar(v_fst_2609_);
v___x_2613_ = l_Lean_Expr_app___override(v___x_2611_, v___x_2612_);
v___x_2614_ = l_Lean_mkAppN(v___y_2596_, v___x_2592_);
lean_dec_ref(v___x_2592_);
lean_inc(v_snd_2610_);
v___f_2615_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2615_, 0, v_snd_2572_);
lean_closure_set(v___f_2615_, 1, v___x_2614_);
lean_closure_set(v___f_2615_, 2, v___x_2613_);
lean_closure_set(v___f_2615_, 3, v_snd_2610_);
v___x_2616_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_snd_2610_, v___f_2615_, v___y_2598_, v___y_2599_, v___y_2600_, v___y_2601_);
return v___x_2616_;
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
lean_dec(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec_ref(v___x_2592_);
lean_dec(v_snd_2572_);
v_a_2617_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2607_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2607_);
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
v_reuseFailAlloc_2623_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
lean_dec(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec_ref(v___x_2592_);
lean_dec(v_snd_2572_);
return v___x_2605_;
}
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
lean_dec(v___y_2599_);
lean_dec_ref(v___y_2598_);
lean_dec_ref(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec_ref(v___y_2594_);
lean_dec_ref(v___x_2592_);
lean_dec(v_snd_2572_);
lean_dec(v_mvarId_2559_);
v_a_2625_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2602_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2602_);
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
v___jp_2633_:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; 
lean_inc(v___x_2579_);
v___x_2638_ = l_Lean_mkConst(v___x_2579_, v___x_2587_);
lean_inc(v___y_2637_);
lean_inc_ref(v___y_2636_);
lean_inc(v___y_2635_);
lean_inc_ref(v___y_2634_);
lean_inc_ref(v___x_2638_);
v___x_2639_ = lean_infer_type(v___x_2638_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v___x_2641_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2640_);
lean_dec_ref(v___x_2639_);
lean_inc(v___y_2637_);
lean_inc_ref(v___y_2636_);
lean_inc(v___y_2635_);
lean_inc_ref(v___y_2634_);
v___x_2641_ = l_Lean_Meta_instantiateForall(v_a_2640_, v___x_2592_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_a_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_a_2642_);
lean_dec_ref(v___x_2641_);
v___x_2643_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS___closed__1));
v___x_2644_ = lean_unsigned_to_nat(3u);
v___x_2645_ = l_Lean_Expr_isAppOfArity(v_a_2642_, v___x_2643_, v___x_2644_);
if (v___x_2645_ == 0)
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2649_; 
lean_dec(v_a_2642_);
lean_dec_ref(v___x_2638_);
lean_dec_ref(v___x_2592_);
lean_dec(v_snd_2572_);
lean_dec_ref(v___x_2561_);
lean_dec(v_cls_2560_);
v___x_2646_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__4);
v___x_2647_ = l_Lean_MessageData_ofName(v___x_2579_);
if (v_isShared_2575_ == 0)
{
lean_ctor_set_tag(v___x_2574_, 7);
lean_ctor_set(v___x_2574_, 1, v___x_2647_);
lean_ctor_set(v___x_2574_, 0, v___x_2646_);
v___x_2649_ = v___x_2574_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v___x_2646_);
lean_ctor_set(v_reuseFailAlloc_2657_, 1, v___x_2647_);
v___x_2649_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2653_; 
v___x_2650_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__6);
v___x_2651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2649_);
lean_ctor_set(v___x_2651_, 1, v___x_2650_);
if (v_isShared_2585_ == 0)
{
lean_ctor_set_tag(v___x_2584_, 1);
lean_ctor_set(v___x_2584_, 0, v_mvarId_2559_);
v___x_2653_ = v___x_2584_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v_mvarId_2559_);
v___x_2653_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2651_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
v___x_2655_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__0___redArg(v___x_2654_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
lean_dec(v___y_2637_);
lean_dec_ref(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
return v___x_2655_;
}
}
}
else
{
lean_object* v___x_2658_; lean_object* v_a_2659_; lean_object* v___x_2660_; lean_object* v_nargs_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; uint8_t v___x_2668_; 
lean_del_object(v___x_2584_);
lean_dec(v___x_2579_);
lean_inc(v_cls_2560_);
v___x_2658_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_2560_, v___y_2636_);
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref(v___x_2658_);
v___x_2660_ = l_Lean_Expr_appArg_x21(v_a_2642_);
lean_dec(v_a_2642_);
v_nargs_2661_ = l_Lean_Expr_getAppNumArgs(v___x_2660_);
lean_inc(v_nargs_2661_);
v___x_2662_ = lean_mk_array(v_nargs_2661_, v_dummy_2588_);
v___x_2663_ = lean_nat_sub(v_nargs_2661_, v___x_2590_);
lean_dec(v_nargs_2661_);
lean_inc_ref(v___x_2660_);
v___x_2664_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_2660_, v___x_2662_, v___x_2663_);
v___x_2665_ = lean_array_get_size(v___x_2664_);
v___x_2666_ = lean_nat_sub(v___x_2665_, v___x_2590_);
v___x_2667_ = lean_array_get(v___x_2561_, v___x_2664_, v___x_2666_);
lean_dec(v___x_2666_);
lean_dec_ref(v___x_2664_);
v___x_2668_ = lean_unbox(v_a_2659_);
lean_dec(v_a_2659_);
if (v___x_2668_ == 0)
{
lean_del_object(v___x_2574_);
lean_dec(v_cls_2560_);
v___y_2594_ = v___x_2667_;
v___y_2595_ = v___x_2660_;
v___y_2596_ = v___x_2638_;
v___y_2597_ = v___x_2645_;
v___y_2598_ = v___y_2634_;
v___y_2599_ = v___y_2635_;
v___y_2600_ = v___y_2636_;
v___y_2601_ = v___y_2637_;
goto v___jp_2593_;
}
else
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2673_; 
v___x_2669_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__8);
v___x_2670_ = lean_unsigned_to_nat(30u);
lean_inc(v___x_2667_);
v___x_2671_ = l_Lean_inlineExpr(v___x_2667_, v___x_2670_);
if (v_isShared_2575_ == 0)
{
lean_ctor_set_tag(v___x_2574_, 7);
lean_ctor_set(v___x_2574_, 1, v___x_2671_);
lean_ctor_set(v___x_2574_, 0, v___x_2669_);
v___x_2673_ = v___x_2574_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2669_);
lean_ctor_set(v_reuseFailAlloc_2687_, 1, v___x_2671_);
v___x_2673_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2674_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___closed__10);
v___x_2675_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2673_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
lean_inc_ref(v___x_2660_);
v___x_2676_ = l_Lean_indentExpr(v___x_2660_);
v___x_2677_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2677_, 0, v___x_2675_);
lean_ctor_set(v___x_2677_, 1, v___x_2676_);
v___x_2678_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1(v_cls_2560_, v___x_2677_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_dec_ref(v___x_2678_);
v___y_2594_ = v___x_2667_;
v___y_2595_ = v___x_2660_;
v___y_2596_ = v___x_2638_;
v___y_2597_ = v___x_2645_;
v___y_2598_ = v___y_2634_;
v___y_2599_ = v___y_2635_;
v___y_2600_ = v___y_2636_;
v___y_2601_ = v___y_2637_;
goto v___jp_2593_;
}
else
{
lean_object* v_a_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2686_; 
lean_dec(v___x_2667_);
lean_dec_ref(v___x_2660_);
lean_dec_ref(v___x_2638_);
lean_dec(v___y_2637_);
lean_dec_ref(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec_ref(v___x_2592_);
lean_dec(v_snd_2572_);
lean_dec(v_mvarId_2559_);
v_a_2679_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2681_ = v___x_2678_;
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_a_2679_);
lean_dec(v___x_2678_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2684_; 
if (v_isShared_2682_ == 0)
{
v___x_2684_ = v___x_2681_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_a_2679_);
v___x_2684_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
return v___x_2684_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
lean_dec_ref(v___x_2638_);
lean_dec(v___y_2637_);
lean_dec_ref(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec_ref(v___x_2592_);
lean_del_object(v___x_2584_);
lean_dec(v___x_2579_);
lean_del_object(v___x_2574_);
lean_dec(v_snd_2572_);
lean_dec_ref(v___x_2561_);
lean_dec(v_cls_2560_);
lean_dec(v_mvarId_2559_);
v_a_2688_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2690_ = v___x_2641_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___x_2641_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2688_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
}
else
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2703_; 
lean_dec_ref(v___x_2638_);
lean_dec(v___y_2637_);
lean_dec_ref(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec_ref(v___x_2592_);
lean_del_object(v___x_2584_);
lean_dec(v___x_2579_);
lean_del_object(v___x_2574_);
lean_dec(v_snd_2572_);
lean_dec_ref(v___x_2561_);
lean_dec(v_cls_2560_);
lean_dec(v_mvarId_2559_);
v_a_2696_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2698_ = v___x_2639_;
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v___x_2639_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2701_; 
if (v_isShared_2699_ == 0)
{
v___x_2701_ = v___x_2698_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_a_2696_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec_ref(v___x_2561_);
lean_dec(v_cls_2560_);
lean_dec(v_mvarId_2559_);
v_a_2723_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2725_ = v___x_2569_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2569_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2723_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
else
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec_ref(v___x_2561_);
lean_dec(v_cls_2560_);
lean_dec(v_mvarId_2559_);
v_a_2731_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2567_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2567_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___boxed(lean_object* v_mvarId_2739_, lean_object* v_cls_2740_, lean_object* v___x_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v_res_2747_; 
v_res_2747_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1(v_mvarId_2739_, v_cls_2740_, v___x_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_);
return v_res_2747_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2749_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__0));
v___x_2750_ = l_Lean_stringToMessageData(v___x_2749_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2(lean_object* v_mvarId_2751_, lean_object* v_x_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_){
_start:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; 
v___x_2758_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___closed__1);
v___x_2759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2759_, 0, v_mvarId_2751_);
v___x_2760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2758_);
lean_ctor_set(v___x_2760_, 1, v___x_2759_);
v___x_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2760_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___boxed(lean_object* v_mvarId_2762_, lean_object* v_x_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2(v_mvarId_2762_, v_x_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_);
lean_dec(v___y_2767_);
lean_dec_ref(v___y_2766_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec_ref(v_x_2763_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold(lean_object* v_declName_2770_, lean_object* v_mvarId_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_){
_start:
{
lean_object* v_options_2777_; uint8_t v_hasTrace_2778_; lean_object* v___x_2779_; lean_object* v_cls_2780_; lean_object* v___f_2781_; 
v_options_2777_ = lean_ctor_get(v_a_2774_, 2);
v_hasTrace_2778_ = lean_ctor_get_uint8(v_options_2777_, sizeof(void*)*1);
v___x_2779_ = l_Lean_instInhabitedExpr;
v_cls_2780_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4));
lean_inc(v_mvarId_2771_);
v___f_2781_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__1___boxed), 8, 3);
lean_closure_set(v___f_2781_, 0, v_mvarId_2771_);
lean_closure_set(v___f_2781_, 1, v_cls_2780_);
lean_closure_set(v___f_2781_, 2, v___x_2779_);
if (v_hasTrace_2778_ == 0)
{
lean_object* v___x_2782_; 
lean_inc(v_a_2775_);
lean_inc_ref(v_a_2774_);
lean_inc(v_a_2773_);
lean_inc_ref(v_a_2772_);
v___x_2782_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_2771_, v___f_2781_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v_a_2783_; lean_object* v___x_2784_; 
v_a_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc(v_a_2783_);
lean_dec_ref(v___x_2782_);
v___x_2784_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2770_, v_a_2783_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
return v___x_2784_;
}
else
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
lean_dec(v_a_2775_);
lean_dec_ref(v_a_2774_);
lean_dec(v_a_2773_);
lean_dec_ref(v_a_2772_);
lean_dec(v_declName_2770_);
v_a_2785_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2782_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2782_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
else
{
lean_object* v___x_2793_; lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2888_; 
v___x_2793_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v_cls_2780_, v_a_2774_);
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2796_ = v___x_2793_;
v_isShared_2797_ = v_isSharedCheck_2888_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2793_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2888_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___f_2798_; lean_object* v___x_2799_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v_a_2803_; lean_object* v___y_2817_; lean_object* v___y_2818_; lean_object* v_a_2819_; lean_object* v___y_2824_; lean_object* v___y_2825_; lean_object* v_a_2826_; lean_object* v___y_2837_; lean_object* v___y_2838_; lean_object* v_a_2839_; uint8_t v___x_2874_; 
lean_inc(v_mvarId_2771_);
v___f_2798_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___lam__2___boxed), 7, 1);
lean_closure_set(v___f_2798_, 0, v_mvarId_2771_);
v___x_2799_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__0));
v___x_2874_ = lean_unbox(v_a_2794_);
if (v___x_2874_ == 0)
{
lean_object* v___x_2875_; uint8_t v___x_2876_; 
v___x_2875_ = l_Lean_trace_profiler;
v___x_2876_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_options_2777_, v___x_2875_);
if (v___x_2876_ == 0)
{
lean_object* v___x_2877_; 
lean_dec_ref(v___f_2798_);
lean_del_object(v___x_2796_);
lean_dec(v_a_2794_);
lean_inc(v_a_2775_);
lean_inc_ref(v_a_2774_);
lean_inc(v_a_2773_);
lean_inc_ref(v_a_2772_);
v___x_2877_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_2771_, v___f_2781_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
if (lean_obj_tag(v___x_2877_) == 0)
{
lean_object* v_a_2878_; lean_object* v___x_2879_; 
v_a_2878_ = lean_ctor_get(v___x_2877_, 0);
lean_inc(v_a_2878_);
lean_dec_ref(v___x_2877_);
v___x_2879_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2770_, v_a_2878_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
return v___x_2879_;
}
else
{
lean_object* v_a_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2887_; 
lean_dec(v_a_2775_);
lean_dec_ref(v_a_2774_);
lean_dec(v_a_2773_);
lean_dec_ref(v_a_2772_);
lean_dec(v_declName_2770_);
v_a_2880_ = lean_ctor_get(v___x_2877_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2877_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2882_ = v___x_2877_;
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_a_2880_);
lean_dec(v___x_2877_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v___x_2885_; 
if (v_isShared_2883_ == 0)
{
v___x_2885_ = v___x_2882_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_a_2880_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
}
}
else
{
lean_inc_ref(v_options_2777_);
goto v___jp_2841_;
}
}
else
{
lean_inc_ref(v_options_2777_);
goto v___jp_2841_;
}
v___jp_2800_:
{
lean_object* v___x_2804_; double v___x_2805_; double v___x_2806_; double v___x_2807_; double v___x_2808_; double v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; uint8_t v___x_2814_; lean_object* v___x_2815_; 
v___x_2804_ = lean_io_mono_nanos_now();
v___x_2805_ = lean_float_of_nat(v___y_2801_);
v___x_2806_ = lean_float_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38);
v___x_2807_ = lean_float_div(v___x_2805_, v___x_2806_);
v___x_2808_ = lean_float_of_nat(v___x_2804_);
v___x_2809_ = lean_float_div(v___x_2808_, v___x_2806_);
v___x_2810_ = lean_box_float(v___x_2807_);
v___x_2811_ = lean_box_float(v___x_2809_);
v___x_2812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2812_, 0, v___x_2810_);
lean_ctor_set(v___x_2812_, 1, v___x_2811_);
v___x_2813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2813_, 0, v_a_2803_);
lean_ctor_set(v___x_2813_, 1, v___x_2812_);
v___x_2814_ = lean_unbox(v_a_2794_);
lean_dec(v_a_2794_);
v___x_2815_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6(v_cls_2780_, v_hasTrace_2778_, v___x_2799_, v_options_2777_, v___x_2814_, v___y_2802_, v___f_2798_, v___x_2813_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
lean_dec_ref(v_options_2777_);
return v___x_2815_;
}
v___jp_2816_:
{
lean_object* v___x_2821_; 
if (v_isShared_2797_ == 0)
{
lean_ctor_set(v___x_2796_, 0, v_a_2819_);
v___x_2821_ = v___x_2796_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_a_2819_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
v___y_2801_ = v___y_2817_;
v___y_2802_ = v___y_2818_;
v_a_2803_ = v___x_2821_;
goto v___jp_2800_;
}
}
v___jp_2823_:
{
lean_object* v___x_2827_; double v___x_2828_; double v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; uint8_t v___x_2834_; lean_object* v___x_2835_; 
v___x_2827_ = lean_io_get_num_heartbeats();
v___x_2828_ = lean_float_of_nat(v___y_2824_);
v___x_2829_ = lean_float_of_nat(v___x_2827_);
v___x_2830_ = lean_box_float(v___x_2828_);
v___x_2831_ = lean_box_float(v___x_2829_);
v___x_2832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2830_);
lean_ctor_set(v___x_2832_, 1, v___x_2831_);
v___x_2833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2833_, 0, v_a_2826_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
v___x_2834_ = lean_unbox(v_a_2794_);
lean_dec(v_a_2794_);
v___x_2835_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6(v_cls_2780_, v_hasTrace_2778_, v___x_2799_, v_options_2777_, v___x_2834_, v___y_2825_, v___f_2798_, v___x_2833_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
lean_dec_ref(v_options_2777_);
return v___x_2835_;
}
v___jp_2836_:
{
lean_object* v___x_2840_; 
v___x_2840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2840_, 0, v_a_2839_);
v___y_2824_ = v___y_2837_;
v___y_2825_ = v___y_2838_;
v_a_2826_ = v___x_2840_;
goto v___jp_2823_;
}
v___jp_2841_:
{
lean_object* v___x_2842_; lean_object* v_a_2843_; lean_object* v___x_2844_; uint8_t v___x_2845_; 
v___x_2842_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg(v_a_2775_);
v_a_2843_ = lean_ctor_get(v___x_2842_, 0);
lean_inc(v_a_2843_);
lean_dec_ref(v___x_2842_);
v___x_2844_ = l_Lean_trace_profiler_useHeartbeats;
v___x_2845_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_options_2777_, v___x_2844_);
if (v___x_2845_ == 0)
{
lean_object* v___x_2846_; lean_object* v___x_2847_; 
v___x_2846_ = lean_io_mono_nanos_now();
lean_inc(v_a_2775_);
lean_inc_ref(v_a_2774_);
lean_inc(v_a_2773_);
lean_inc_ref(v_a_2772_);
v___x_2847_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_2771_, v___f_2781_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v_a_2848_; lean_object* v___x_2849_; 
v_a_2848_ = lean_ctor_get(v___x_2847_, 0);
lean_inc(v_a_2848_);
lean_dec_ref(v___x_2847_);
lean_inc(v_a_2775_);
lean_inc_ref(v_a_2774_);
lean_inc(v_a_2773_);
lean_inc_ref(v_a_2772_);
v___x_2849_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2770_, v_a_2848_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2857_; 
lean_del_object(v___x_2796_);
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2852_ = v___x_2849_;
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2849_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
lean_ctor_set_tag(v___x_2852_, 1);
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
v___y_2801_ = v___x_2846_;
v___y_2802_ = v_a_2843_;
v_a_2803_ = v___x_2855_;
goto v___jp_2800_;
}
}
}
else
{
lean_object* v_a_2858_; 
v_a_2858_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_a_2858_);
lean_dec_ref(v___x_2849_);
v___y_2817_ = v___x_2846_;
v___y_2818_ = v_a_2843_;
v_a_2819_ = v_a_2858_;
goto v___jp_2816_;
}
}
else
{
lean_object* v_a_2859_; 
lean_dec(v_declName_2770_);
v_a_2859_ = lean_ctor_get(v___x_2847_, 0);
lean_inc(v_a_2859_);
lean_dec_ref(v___x_2847_);
v___y_2817_ = v___x_2846_;
v___y_2818_ = v_a_2843_;
v_a_2819_ = v_a_2859_;
goto v___jp_2816_;
}
}
else
{
lean_object* v___x_2860_; lean_object* v___x_2861_; 
lean_del_object(v___x_2796_);
v___x_2860_ = lean_io_get_num_heartbeats();
lean_inc(v_a_2775_);
lean_inc_ref(v_a_2774_);
lean_inc(v_a_2773_);
lean_inc_ref(v_a_2772_);
v___x_2861_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_deltaRHS_x3f_spec__0___redArg(v_mvarId_2771_, v___f_2781_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_object* v_a_2862_; lean_object* v___x_2863_; 
v_a_2862_ = lean_ctor_get(v___x_2861_, 0);
lean_inc(v_a_2862_);
lean_dec_ref(v___x_2861_);
lean_inc(v_a_2775_);
lean_inc_ref(v_a_2774_);
lean_inc(v_a_2773_);
lean_inc_ref(v_a_2772_);
v___x_2863_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go(v_declName_2770_, v_a_2862_, v_a_2772_, v_a_2773_, v_a_2774_, v_a_2775_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v_a_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2871_; 
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2871_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2871_ == 0)
{
v___x_2866_ = v___x_2863_;
v_isShared_2867_ = v_isSharedCheck_2871_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_a_2864_);
lean_dec(v___x_2863_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2871_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2869_; 
if (v_isShared_2867_ == 0)
{
lean_ctor_set_tag(v___x_2866_, 1);
v___x_2869_ = v___x_2866_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2870_; 
v_reuseFailAlloc_2870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2870_, 0, v_a_2864_);
v___x_2869_ = v_reuseFailAlloc_2870_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
v___y_2824_ = v___x_2860_;
v___y_2825_ = v_a_2843_;
v_a_2826_ = v___x_2869_;
goto v___jp_2823_;
}
}
}
else
{
lean_object* v_a_2872_; 
v_a_2872_ = lean_ctor_get(v___x_2863_, 0);
lean_inc(v_a_2872_);
lean_dec_ref(v___x_2863_);
v___y_2837_ = v___x_2860_;
v___y_2838_ = v_a_2843_;
v_a_2839_ = v_a_2872_;
goto v___jp_2836_;
}
}
else
{
lean_object* v_a_2873_; 
lean_dec(v_declName_2770_);
v_a_2873_ = lean_ctor_get(v___x_2861_, 0);
lean_inc(v_a_2873_);
lean_dec_ref(v___x_2861_);
v___y_2837_ = v___x_2860_;
v___y_2838_ = v_a_2843_;
v_a_2839_ = v_a_2873_;
goto v___jp_2836_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold___boxed(lean_object* v_declName_2889_, lean_object* v_mvarId_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_){
_start:
{
lean_object* v_res_2896_; 
v_res_2896_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold(v_declName_2889_, v_mvarId_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(lean_object* v_e_2897_, lean_object* v___y_2898_){
_start:
{
uint8_t v___x_2900_; 
v___x_2900_ = l_Lean_Expr_hasMVar(v_e_2897_);
if (v___x_2900_ == 0)
{
lean_object* v___x_2901_; 
v___x_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2901_, 0, v_e_2897_);
return v___x_2901_;
}
else
{
lean_object* v___x_2902_; lean_object* v_mctx_2903_; lean_object* v___x_2904_; lean_object* v_fst_2905_; lean_object* v_snd_2906_; lean_object* v___x_2907_; lean_object* v_cache_2908_; lean_object* v_zetaDeltaFVarIds_2909_; lean_object* v_postponed_2910_; lean_object* v_diag_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2920_; 
v___x_2902_ = lean_st_ref_get(v___y_2898_);
v_mctx_2903_ = lean_ctor_get(v___x_2902_, 0);
lean_inc_ref(v_mctx_2903_);
lean_dec(v___x_2902_);
v___x_2904_ = l_Lean_instantiateMVarsCore(v_mctx_2903_, v_e_2897_);
v_fst_2905_ = lean_ctor_get(v___x_2904_, 0);
lean_inc(v_fst_2905_);
v_snd_2906_ = lean_ctor_get(v___x_2904_, 1);
lean_inc(v_snd_2906_);
lean_dec_ref(v___x_2904_);
v___x_2907_ = lean_st_ref_take(v___y_2898_);
v_cache_2908_ = lean_ctor_get(v___x_2907_, 1);
v_zetaDeltaFVarIds_2909_ = lean_ctor_get(v___x_2907_, 2);
v_postponed_2910_ = lean_ctor_get(v___x_2907_, 3);
v_diag_2911_ = lean_ctor_get(v___x_2907_, 4);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2920_ == 0)
{
lean_object* v_unused_2921_; 
v_unused_2921_ = lean_ctor_get(v___x_2907_, 0);
lean_dec(v_unused_2921_);
v___x_2913_ = v___x_2907_;
v_isShared_2914_ = v_isSharedCheck_2920_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_diag_2911_);
lean_inc(v_postponed_2910_);
lean_inc(v_zetaDeltaFVarIds_2909_);
lean_inc(v_cache_2908_);
lean_dec(v___x_2907_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2920_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
lean_ctor_set(v___x_2913_, 0, v_snd_2906_);
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_snd_2906_);
lean_ctor_set(v_reuseFailAlloc_2919_, 1, v_cache_2908_);
lean_ctor_set(v_reuseFailAlloc_2919_, 2, v_zetaDeltaFVarIds_2909_);
lean_ctor_set(v_reuseFailAlloc_2919_, 3, v_postponed_2910_);
lean_ctor_set(v_reuseFailAlloc_2919_, 4, v_diag_2911_);
v___x_2916_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2917_ = lean_st_ref_set(v___y_2898_, v___x_2916_);
v___x_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2918_, 0, v_fst_2905_);
return v___x_2918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg___boxed(lean_object* v_e_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(v_e_2922_, v___y_2923_);
lean_dec(v___y_2923_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0(lean_object* v_e_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_){
_start:
{
lean_object* v___x_2932_; 
v___x_2932_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(v_e_2926_, v___y_2928_);
return v___x_2932_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___boxed(lean_object* v_e_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
lean_object* v_res_2939_; 
v_res_2939_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0(v_e_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_);
lean_dec(v___y_2937_);
lean_dec_ref(v___y_2936_);
lean_dec(v___y_2935_);
lean_dec_ref(v___y_2934_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg(lean_object* v_k_2940_, uint8_t v_allowLevelAssignments_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v___x_2947_; 
v___x_2947_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_2941_, v_k_2940_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_);
if (lean_obj_tag(v___x_2947_) == 0)
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2955_; 
v_a_2948_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2950_ = v___x_2947_;
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2947_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2955_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2953_; 
if (v_isShared_2951_ == 0)
{
v___x_2953_ = v___x_2950_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2948_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
return v___x_2953_;
}
}
}
else
{
lean_object* v_a_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2963_; 
v_a_2956_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_2963_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2963_ == 0)
{
v___x_2958_ = v___x_2947_;
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_a_2956_);
lean_dec(v___x_2947_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2963_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v___x_2961_; 
if (v_isShared_2959_ == 0)
{
v___x_2961_ = v___x_2958_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v_a_2956_);
v___x_2961_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
return v___x_2961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg___boxed(lean_object* v_k_2964_, lean_object* v_allowLevelAssignments_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2971_; lean_object* v_res_2972_; 
v_allowLevelAssignments_boxed_2971_ = lean_unbox(v_allowLevelAssignments_2965_);
v_res_2972_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg(v_k_2964_, v_allowLevelAssignments_boxed_2971_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_);
return v_res_2972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1(lean_object* v_00_u03b1_2973_, lean_object* v_k_2974_, uint8_t v_allowLevelAssignments_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_){
_start:
{
lean_object* v___x_2981_; 
v___x_2981_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___redArg(v_k_2974_, v_allowLevelAssignments_2975_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_);
return v___x_2981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___boxed(lean_object* v_00_u03b1_2982_, lean_object* v_k_2983_, lean_object* v_allowLevelAssignments_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2990_; lean_object* v_res_2991_; 
v_allowLevelAssignments_boxed_2990_ = lean_unbox(v_allowLevelAssignments_2984_);
v_res_2991_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1(v_00_u03b1_2982_, v_k_2983_, v_allowLevelAssignments_boxed_2990_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__0(lean_object* v___x_2992_, lean_object* v_e_2993_){
_start:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; 
v___x_2994_ = l_Lean_indentD(v_e_2993_);
v___x_2995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2995_, 0, v___x_2992_);
lean_ctor_set(v___x_2995_, 1, v___x_2994_);
return v___x_2995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1(lean_object* v_type_2996_, lean_object* v___x_2997_, lean_object* v_declName_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
lean_object* v___x_3004_; 
lean_inc_ref(v___y_2999_);
v___x_3004_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_type_2996_, v___x_2997_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_a_3005_);
lean_dec_ref(v___x_3004_);
v___x_3006_ = l_Lean_Expr_mvarId_x21(v_a_3005_);
lean_inc(v___y_3002_);
lean_inc_ref(v___y_3001_);
lean_inc(v___y_3000_);
lean_inc_ref(v___y_2999_);
v___x_3007_ = l_Lean_MVarId_intros(v___x_3006_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v_snd_3009_; lean_object* v___x_3010_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
lean_inc(v_a_3008_);
lean_dec_ref(v___x_3007_);
v_snd_3009_ = lean_ctor_get(v_a_3008_, 1);
lean_inc(v_snd_3009_);
lean_dec(v_a_3008_);
lean_inc(v___y_3002_);
lean_inc_ref(v___y_3001_);
lean_inc(v___y_3000_);
lean_inc_ref(v___y_2999_);
lean_inc(v_snd_3009_);
v___x_3010_ = l_Lean_Elab_Eqns_tryURefl(v_snd_3009_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_);
if (lean_obj_tag(v___x_3010_) == 0)
{
lean_object* v_a_3011_; uint8_t v___x_3012_; 
v_a_3011_ = lean_ctor_get(v___x_3010_, 0);
lean_inc(v_a_3011_);
lean_dec_ref(v___x_3010_);
v___x_3012_ = lean_unbox(v_a_3011_);
lean_dec(v_a_3011_);
if (v___x_3012_ == 0)
{
lean_object* v___x_3013_; 
lean_inc(v___y_3002_);
lean_inc_ref(v___y_3001_);
lean_inc(v___y_3000_);
lean_inc_ref(v___y_2999_);
v___x_3013_ = l_Lean_Elab_Eqns_deltaLHS(v_snd_3009_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_a_3014_; lean_object* v___x_3015_; 
v_a_3014_ = lean_ctor_get(v___x_3013_, 0);
lean_inc(v_a_3014_);
lean_dec_ref(v___x_3013_);
lean_inc(v___y_3000_);
v___x_3015_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_goUnfold(v_declName_2998_, v_a_3014_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v___x_3016_; 
lean_dec_ref(v___x_3015_);
v___x_3016_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(v_a_3005_, v___y_3000_);
lean_dec(v___y_3000_);
return v___x_3016_;
}
else
{
lean_object* v_a_3017_; lean_object* v___x_3019_; uint8_t v_isShared_3020_; uint8_t v_isSharedCheck_3024_; 
lean_dec(v_a_3005_);
lean_dec(v___y_3000_);
v_a_3017_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3024_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3024_ == 0)
{
v___x_3019_ = v___x_3015_;
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
else
{
lean_inc(v_a_3017_);
lean_dec(v___x_3015_);
v___x_3019_ = lean_box(0);
v_isShared_3020_ = v_isSharedCheck_3024_;
goto v_resetjp_3018_;
}
v_resetjp_3018_:
{
lean_object* v___x_3022_; 
if (v_isShared_3020_ == 0)
{
v___x_3022_ = v___x_3019_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v_a_3017_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
lean_dec(v_a_3005_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
lean_dec(v_declName_2998_);
v_a_3025_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_3013_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_3013_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
else
{
lean_object* v___x_3033_; 
lean_dec(v_snd_3009_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec_ref(v___y_2999_);
lean_dec(v_declName_2998_);
v___x_3033_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__0___redArg(v_a_3005_, v___y_3000_);
lean_dec(v___y_3000_);
return v___x_3033_;
}
}
else
{
lean_object* v_a_3034_; lean_object* v___x_3036_; uint8_t v_isShared_3037_; uint8_t v_isSharedCheck_3041_; 
lean_dec(v_snd_3009_);
lean_dec(v_a_3005_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
lean_dec(v_declName_2998_);
v_a_3034_ = lean_ctor_get(v___x_3010_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3036_ = v___x_3010_;
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
else
{
lean_inc(v_a_3034_);
lean_dec(v___x_3010_);
v___x_3036_ = lean_box(0);
v_isShared_3037_ = v_isSharedCheck_3041_;
goto v_resetjp_3035_;
}
v_resetjp_3035_:
{
lean_object* v___x_3039_; 
if (v_isShared_3037_ == 0)
{
v___x_3039_ = v___x_3036_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v_a_3034_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
return v___x_3039_;
}
}
}
}
else
{
lean_object* v_a_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3049_; 
lean_dec(v_a_3005_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
lean_dec(v_declName_2998_);
v_a_3042_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3049_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_3044_ = v___x_3007_;
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_a_3042_);
lean_dec(v___x_3007_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3049_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
lean_object* v___x_3047_; 
if (v_isShared_3045_ == 0)
{
v___x_3047_ = v___x_3044_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v_a_3042_);
v___x_3047_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
return v___x_3047_;
}
}
}
}
else
{
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
lean_dec(v_declName_2998_);
return v___x_3004_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1___boxed(lean_object* v_type_3050_, lean_object* v___x_3051_, lean_object* v_declName_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v_res_3058_; 
v_res_3058_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1(v_type_3050_, v___x_3051_, v_declName_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_);
return v_res_3058_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1(void){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3060_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__0));
v___x_3061_ = l_Lean_stringToMessageData(v___x_3060_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2(lean_object* v_type_3062_, lean_object* v_x_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_){
_start:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3069_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___closed__1);
v___x_3070_ = l_Lean_indentExpr(v_type_3062_);
v___x_3071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3071_, 0, v___x_3069_);
lean_ctor_set(v___x_3071_, 1, v___x_3070_);
v___x_3072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
return v___x_3072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___boxed(lean_object* v_type_3073_, lean_object* v_x_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2(v_type_3073_, v_x_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec_ref(v_x_3074_);
return v_res_3080_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2(lean_object* v_e_3081_){
_start:
{
if (lean_obj_tag(v_e_3081_) == 0)
{
uint8_t v___x_3082_; 
v___x_3082_ = 2;
return v___x_3082_;
}
else
{
uint8_t v___x_3083_; 
v___x_3083_ = 0;
return v___x_3083_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2___boxed(lean_object* v_e_3084_){
_start:
{
uint8_t v_res_3085_; lean_object* v_r_3086_; 
v_res_3085_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2(v_e_3084_);
lean_dec_ref(v_e_3084_);
v_r_3086_ = lean_box(v_res_3085_);
return v_r_3086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2(lean_object* v_cls_3087_, uint8_t v_collapsed_3088_, lean_object* v_tag_3089_, lean_object* v_opts_3090_, uint8_t v_clsEnabled_3091_, lean_object* v_oldTraces_3092_, lean_object* v_msg_3093_, lean_object* v_resStartStop_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_){
_start:
{
lean_object* v_fst_3100_; lean_object* v_snd_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3199_; 
v_fst_3100_ = lean_ctor_get(v_resStartStop_3094_, 0);
v_snd_3101_ = lean_ctor_get(v_resStartStop_3094_, 1);
v_isSharedCheck_3199_ = !lean_is_exclusive(v_resStartStop_3094_);
if (v_isSharedCheck_3199_ == 0)
{
v___x_3103_ = v_resStartStop_3094_;
v_isShared_3104_ = v_isSharedCheck_3199_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_snd_3101_);
lean_inc(v_fst_3100_);
lean_dec(v_resStartStop_3094_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3199_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v_data_3108_; lean_object* v_fst_3119_; lean_object* v_snd_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3198_; 
v_fst_3119_ = lean_ctor_get(v_snd_3101_, 0);
v_snd_3120_ = lean_ctor_get(v_snd_3101_, 1);
v_isSharedCheck_3198_ = !lean_is_exclusive(v_snd_3101_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3122_ = v_snd_3101_;
v_isShared_3123_ = v_isSharedCheck_3198_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_snd_3120_);
lean_inc(v_fst_3119_);
lean_dec(v_snd_3101_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3198_;
goto v_resetjp_3121_;
}
v___jp_3105_:
{
lean_object* v___x_3109_; 
v___x_3109_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__7(v_oldTraces_3092_, v_data_3108_, v___y_3107_, v___y_3106_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_);
lean_dec(v___y_3098_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v___x_3110_; 
lean_dec_ref(v___x_3109_);
v___x_3110_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___redArg(v_fst_3100_);
return v___x_3110_;
}
else
{
lean_object* v_a_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3118_; 
lean_dec(v_fst_3100_);
v_a_3111_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3118_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3113_ = v___x_3109_;
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_a_3111_);
lean_dec(v___x_3109_);
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
v_resetjp_3121_:
{
lean_object* v___x_3124_; uint8_t v___x_3125_; lean_object* v___y_3127_; lean_object* v_a_3128_; uint8_t v___y_3152_; double v___y_3183_; 
v___x_3124_ = l_Lean_trace_profiler;
v___x_3125_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_opts_3090_, v___x_3124_);
if (v___x_3125_ == 0)
{
v___y_3152_ = v___x_3125_;
goto v___jp_3151_;
}
else
{
lean_object* v___x_3188_; uint8_t v___x_3189_; 
v___x_3188_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3189_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_opts_3090_, v___x_3188_);
if (v___x_3189_ == 0)
{
lean_object* v___x_3190_; lean_object* v___x_3191_; double v___x_3192_; double v___x_3193_; double v___x_3194_; 
v___x_3190_ = l_Lean_trace_profiler_threshold;
v___x_3191_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__9(v_opts_3090_, v___x_3190_);
v___x_3192_ = lean_float_of_nat(v___x_3191_);
v___x_3193_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__5, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__5_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__5);
v___x_3194_ = lean_float_div(v___x_3192_, v___x_3193_);
v___y_3183_ = v___x_3194_;
goto v___jp_3182_;
}
else
{
lean_object* v___x_3195_; lean_object* v___x_3196_; double v___x_3197_; 
v___x_3195_ = l_Lean_trace_profiler_threshold;
v___x_3196_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__9(v_opts_3090_, v___x_3195_);
v___x_3197_ = lean_float_of_nat(v___x_3196_);
v___y_3183_ = v___x_3197_;
goto v___jp_3182_;
}
}
v___jp_3126_:
{
uint8_t v_result_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3134_; 
v_result_3129_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2_spec__2(v_fst_3100_);
v___x_3130_ = l_Lean_TraceResult_toEmoji(v_result_3129_);
v___x_3131_ = l_Lean_stringToMessageData(v___x_3130_);
v___x_3132_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__1);
if (v_isShared_3123_ == 0)
{
lean_ctor_set_tag(v___x_3122_, 7);
lean_ctor_set(v___x_3122_, 1, v___x_3132_);
lean_ctor_set(v___x_3122_, 0, v___x_3131_);
v___x_3134_ = v___x_3122_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3145_; 
v_reuseFailAlloc_3145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3145_, 0, v___x_3131_);
lean_ctor_set(v_reuseFailAlloc_3145_, 1, v___x_3132_);
v___x_3134_ = v_reuseFailAlloc_3145_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
lean_object* v_m_3136_; 
if (v_isShared_3104_ == 0)
{
lean_ctor_set_tag(v___x_3103_, 7);
lean_ctor_set(v___x_3103_, 1, v_a_3128_);
lean_ctor_set(v___x_3103_, 0, v___x_3134_);
v_m_3136_ = v___x_3103_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v___x_3134_);
lean_ctor_set(v_reuseFailAlloc_3144_, 1, v_a_3128_);
v_m_3136_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; double v___x_3139_; lean_object* v_data_3140_; 
v___x_3137_ = lean_box(v_result_3129_);
v___x_3138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3138_, 0, v___x_3137_);
v___x_3139_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__2);
lean_inc_ref(v_tag_3089_);
lean_inc_ref(v___x_3138_);
lean_inc(v_cls_3087_);
v_data_3140_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3140_, 0, v_cls_3087_);
lean_ctor_set(v_data_3140_, 1, v___x_3138_);
lean_ctor_set(v_data_3140_, 2, v_tag_3089_);
lean_ctor_set_float(v_data_3140_, sizeof(void*)*3, v___x_3139_);
lean_ctor_set_float(v_data_3140_, sizeof(void*)*3 + 8, v___x_3139_);
lean_ctor_set_uint8(v_data_3140_, sizeof(void*)*3 + 16, v_collapsed_3088_);
if (v___x_3125_ == 0)
{
lean_dec_ref(v___x_3138_);
lean_dec(v_snd_3120_);
lean_dec(v_fst_3119_);
lean_dec_ref(v_tag_3089_);
lean_dec(v_cls_3087_);
v___y_3106_ = v_m_3136_;
v___y_3107_ = v___y_3127_;
v_data_3108_ = v_data_3140_;
goto v___jp_3105_;
}
else
{
lean_object* v_data_3141_; double v___x_3142_; double v___x_3143_; 
lean_dec_ref(v_data_3140_);
v_data_3141_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3141_, 0, v_cls_3087_);
lean_ctor_set(v_data_3141_, 1, v___x_3138_);
lean_ctor_set(v_data_3141_, 2, v_tag_3089_);
v___x_3142_ = lean_unbox_float(v_fst_3119_);
lean_dec(v_fst_3119_);
lean_ctor_set_float(v_data_3141_, sizeof(void*)*3, v___x_3142_);
v___x_3143_ = lean_unbox_float(v_snd_3120_);
lean_dec(v_snd_3120_);
lean_ctor_set_float(v_data_3141_, sizeof(void*)*3 + 8, v___x_3143_);
lean_ctor_set_uint8(v_data_3141_, sizeof(void*)*3 + 16, v_collapsed_3088_);
v___y_3106_ = v_m_3136_;
v___y_3107_ = v___y_3127_;
v_data_3108_ = v_data_3141_;
goto v___jp_3105_;
}
}
}
}
v___jp_3146_:
{
lean_object* v_ref_3147_; lean_object* v___x_3148_; 
v_ref_3147_ = lean_ctor_get(v___y_3097_, 5);
lean_inc(v___y_3098_);
lean_inc_ref(v___y_3097_);
lean_inc(v___y_3096_);
lean_inc_ref(v___y_3095_);
lean_inc(v_fst_3100_);
v___x_3148_ = lean_apply_6(v_msg_3093_, v_fst_3100_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, lean_box(0));
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_object* v_a_3149_; 
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
lean_inc(v_a_3149_);
lean_dec_ref(v___x_3148_);
lean_inc(v_ref_3147_);
v___y_3127_ = v_ref_3147_;
v_a_3128_ = v_a_3149_;
goto v___jp_3126_;
}
else
{
lean_object* v___x_3150_; 
lean_dec_ref(v___x_3148_);
v___x_3150_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6___closed__4);
lean_inc(v_ref_3147_);
v___y_3127_ = v_ref_3147_;
v_a_3128_ = v___x_3150_;
goto v___jp_3126_;
}
}
v___jp_3151_:
{
if (v_clsEnabled_3091_ == 0)
{
if (v___y_3152_ == 0)
{
lean_object* v___x_3153_; lean_object* v_traceState_3154_; lean_object* v_env_3155_; lean_object* v_nextMacroScope_3156_; lean_object* v_ngen_3157_; lean_object* v_auxDeclNGen_3158_; lean_object* v_cache_3159_; lean_object* v_messages_3160_; lean_object* v_infoState_3161_; lean_object* v_snapshotTasks_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3181_; 
lean_del_object(v___x_3122_);
lean_dec(v_snd_3120_);
lean_dec(v_fst_3119_);
lean_del_object(v___x_3103_);
lean_dec_ref(v___y_3097_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
lean_dec_ref(v_msg_3093_);
lean_dec_ref(v_tag_3089_);
lean_dec(v_cls_3087_);
v___x_3153_ = lean_st_ref_take(v___y_3098_);
v_traceState_3154_ = lean_ctor_get(v___x_3153_, 4);
v_env_3155_ = lean_ctor_get(v___x_3153_, 0);
v_nextMacroScope_3156_ = lean_ctor_get(v___x_3153_, 1);
v_ngen_3157_ = lean_ctor_get(v___x_3153_, 2);
v_auxDeclNGen_3158_ = lean_ctor_get(v___x_3153_, 3);
v_cache_3159_ = lean_ctor_get(v___x_3153_, 5);
v_messages_3160_ = lean_ctor_get(v___x_3153_, 6);
v_infoState_3161_ = lean_ctor_get(v___x_3153_, 7);
v_snapshotTasks_3162_ = lean_ctor_get(v___x_3153_, 8);
v_isSharedCheck_3181_ = !lean_is_exclusive(v___x_3153_);
if (v_isSharedCheck_3181_ == 0)
{
v___x_3164_ = v___x_3153_;
v_isShared_3165_ = v_isSharedCheck_3181_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_snapshotTasks_3162_);
lean_inc(v_infoState_3161_);
lean_inc(v_messages_3160_);
lean_inc(v_cache_3159_);
lean_inc(v_traceState_3154_);
lean_inc(v_auxDeclNGen_3158_);
lean_inc(v_ngen_3157_);
lean_inc(v_nextMacroScope_3156_);
lean_inc(v_env_3155_);
lean_dec(v___x_3153_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3181_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
uint64_t v_tid_3166_; lean_object* v_traces_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3180_; 
v_tid_3166_ = lean_ctor_get_uint64(v_traceState_3154_, sizeof(void*)*1);
v_traces_3167_ = lean_ctor_get(v_traceState_3154_, 0);
v_isSharedCheck_3180_ = !lean_is_exclusive(v_traceState_3154_);
if (v_isSharedCheck_3180_ == 0)
{
v___x_3169_ = v_traceState_3154_;
v_isShared_3170_ = v_isSharedCheck_3180_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_traces_3167_);
lean_dec(v_traceState_3154_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3180_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v___x_3171_; lean_object* v___x_3173_; 
v___x_3171_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3092_, v_traces_3167_);
lean_dec_ref(v_traces_3167_);
if (v_isShared_3170_ == 0)
{
lean_ctor_set(v___x_3169_, 0, v___x_3171_);
v___x_3173_ = v___x_3169_;
goto v_reusejp_3172_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3171_);
lean_ctor_set_uint64(v_reuseFailAlloc_3179_, sizeof(void*)*1, v_tid_3166_);
v___x_3173_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3172_;
}
v_reusejp_3172_:
{
lean_object* v___x_3175_; 
if (v_isShared_3165_ == 0)
{
lean_ctor_set(v___x_3164_, 4, v___x_3173_);
v___x_3175_ = v___x_3164_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_env_3155_);
lean_ctor_set(v_reuseFailAlloc_3178_, 1, v_nextMacroScope_3156_);
lean_ctor_set(v_reuseFailAlloc_3178_, 2, v_ngen_3157_);
lean_ctor_set(v_reuseFailAlloc_3178_, 3, v_auxDeclNGen_3158_);
lean_ctor_set(v_reuseFailAlloc_3178_, 4, v___x_3173_);
lean_ctor_set(v_reuseFailAlloc_3178_, 5, v_cache_3159_);
lean_ctor_set(v_reuseFailAlloc_3178_, 6, v_messages_3160_);
lean_ctor_set(v_reuseFailAlloc_3178_, 7, v_infoState_3161_);
lean_ctor_set(v_reuseFailAlloc_3178_, 8, v_snapshotTasks_3162_);
v___x_3175_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; 
v___x_3176_ = lean_st_ref_set(v___y_3098_, v___x_3175_);
lean_dec(v___y_3098_);
v___x_3177_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__8___redArg(v_fst_3100_);
return v___x_3177_;
}
}
}
}
}
else
{
goto v___jp_3146_;
}
}
else
{
goto v___jp_3146_;
}
}
v___jp_3182_:
{
double v___x_3184_; double v___x_3185_; double v___x_3186_; uint8_t v___x_3187_; 
v___x_3184_ = lean_unbox_float(v_snd_3120_);
v___x_3185_ = lean_unbox_float(v_fst_3119_);
v___x_3186_ = lean_float_sub(v___x_3184_, v___x_3185_);
v___x_3187_ = lean_float_decLt(v___y_3183_, v___x_3186_);
v___y_3152_ = v___x_3187_;
goto v___jp_3151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2___boxed(lean_object* v_cls_3200_, lean_object* v_collapsed_3201_, lean_object* v_tag_3202_, lean_object* v_opts_3203_, lean_object* v_clsEnabled_3204_, lean_object* v_oldTraces_3205_, lean_object* v_msg_3206_, lean_object* v_resStartStop_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
uint8_t v_collapsed_boxed_3213_; uint8_t v_clsEnabled_boxed_3214_; lean_object* v_res_3215_; 
v_collapsed_boxed_3213_ = lean_unbox(v_collapsed_3201_);
v_clsEnabled_boxed_3214_ = lean_unbox(v_clsEnabled_3204_);
v_res_3215_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2(v_cls_3200_, v_collapsed_boxed_3213_, v_tag_3202_, v_opts_3203_, v_clsEnabled_boxed_3214_, v_oldTraces_3205_, v_msg_3206_, v_resStartStop_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_);
lean_dec_ref(v_opts_3203_);
return v_res_3215_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1(void){
_start:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; 
v___x_3217_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__0));
v___x_3218_ = l_Lean_stringToMessageData(v___x_3217_);
return v___x_3218_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3220_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__2));
v___x_3221_ = l_Lean_stringToMessageData(v___x_3220_);
return v___x_3221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof(lean_object* v_declName_3222_, lean_object* v_type_3223_, lean_object* v_a_3224_, lean_object* v_a_3225_, lean_object* v_a_3226_, lean_object* v_a_3227_){
_start:
{
lean_object* v_options_3229_; uint8_t v_hasTrace_3230_; uint8_t v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___f_3237_; lean_object* v___x_3238_; lean_object* v___f_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; 
v_options_3229_ = lean_ctor_get(v_a_3226_, 2);
v_hasTrace_3230_ = lean_ctor_get_uint8(v_options_3229_, sizeof(void*)*1);
v___x_3231_ = 0;
lean_inc(v_declName_3222_);
v___x_3232_ = l_Lean_MessageData_ofConstName(v_declName_3222_, v___x_3231_);
v___x_3233_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__1);
v___x_3234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3234_, 0, v___x_3233_);
lean_ctor_set(v___x_3234_, 1, v___x_3232_);
v___x_3235_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___closed__3);
v___x_3236_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3236_, 0, v___x_3234_);
lean_ctor_set(v___x_3236_, 1, v___x_3235_);
v___f_3237_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__0), 2, 1);
lean_closure_set(v___f_3237_, 0, v___x_3236_);
v___x_3238_ = lean_box(0);
lean_inc_ref(v_type_3223_);
v___f_3239_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__1___boxed), 8, 3);
lean_closure_set(v___f_3239_, 0, v_type_3223_);
lean_closure_set(v___f_3239_, 1, v___x_3238_);
lean_closure_set(v___f_3239_, 2, v_declName_3222_);
v___x_3240_ = lean_box(v___x_3231_);
v___x_3241_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__1___boxed), 8, 3);
lean_closure_set(v___x_3241_, 0, lean_box(0));
lean_closure_set(v___x_3241_, 1, v___f_3239_);
lean_closure_set(v___x_3241_, 2, v___x_3240_);
if (v_hasTrace_3230_ == 0)
{
lean_object* v___x_3242_; 
lean_dec_ref(v_type_3223_);
v___x_3242_ = l_Lean_Meta_mapErrorImp___redArg(v___x_3241_, v___f_3237_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3250_; 
v_a_3243_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3245_ = v___x_3242_;
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3242_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3248_; 
if (v_isShared_3246_ == 0)
{
v___x_3248_ = v___x_3245_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_a_3243_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3258_; 
v_a_3251_ = lean_ctor_get(v___x_3242_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3253_ = v___x_3242_;
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3242_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
else
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v_a_3261_; lean_object* v___f_3262_; lean_object* v___x_3263_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v_a_3267_; lean_object* v___y_3281_; lean_object* v___y_3282_; lean_object* v_a_3283_; uint8_t v___x_3334_; 
v___x_3259_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4));
v___x_3260_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg(v___x_3259_, v_a_3226_);
v_a_3261_ = lean_ctor_get(v___x_3260_, 0);
lean_inc(v_a_3261_);
lean_dec_ref(v___x_3260_);
v___f_3262_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___lam__2___boxed), 7, 1);
lean_closure_set(v___f_3262_, 0, v_type_3223_);
v___x_3263_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__1___closed__0));
v___x_3334_ = lean_unbox(v_a_3261_);
if (v___x_3334_ == 0)
{
lean_object* v___x_3335_; uint8_t v___x_3336_; 
v___x_3335_ = l_Lean_trace_profiler;
v___x_3336_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_options_3229_, v___x_3335_);
if (v___x_3336_ == 0)
{
lean_object* v___x_3337_; 
lean_dec_ref(v___f_3262_);
lean_dec(v_a_3261_);
v___x_3337_ = l_Lean_Meta_mapErrorImp___redArg(v___x_3241_, v___f_3237_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3337_) == 0)
{
lean_object* v_a_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3345_; 
v_a_3338_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3340_ = v___x_3337_;
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_a_3338_);
lean_dec(v___x_3337_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3343_; 
if (v_isShared_3341_ == 0)
{
v___x_3343_ = v___x_3340_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v_a_3338_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
else
{
lean_object* v_a_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3353_; 
v_a_3346_ = lean_ctor_get(v___x_3337_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3337_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3348_ = v___x_3337_;
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_a_3346_);
lean_dec(v___x_3337_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3351_; 
if (v_isShared_3349_ == 0)
{
v___x_3351_ = v___x_3348_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_a_3346_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
}
}
else
{
lean_inc_ref(v_options_3229_);
goto v___jp_3293_;
}
}
else
{
lean_inc_ref(v_options_3229_);
goto v___jp_3293_;
}
v___jp_3264_:
{
lean_object* v___x_3268_; double v___x_3269_; double v___x_3270_; double v___x_3271_; double v___x_3272_; double v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; uint8_t v___x_3278_; lean_object* v___x_3279_; 
v___x_3268_ = lean_io_mono_nanos_now();
v___x_3269_ = lean_float_of_nat(v___y_3266_);
v___x_3270_ = lean_float_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38_once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__38);
v___x_3271_ = lean_float_div(v___x_3269_, v___x_3270_);
v___x_3272_ = lean_float_of_nat(v___x_3268_);
v___x_3273_ = lean_float_div(v___x_3272_, v___x_3270_);
v___x_3274_ = lean_box_float(v___x_3271_);
v___x_3275_ = lean_box_float(v___x_3273_);
v___x_3276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3276_, 0, v___x_3274_);
lean_ctor_set(v___x_3276_, 1, v___x_3275_);
v___x_3277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3277_, 0, v_a_3267_);
lean_ctor_set(v___x_3277_, 1, v___x_3276_);
v___x_3278_ = lean_unbox(v_a_3261_);
lean_dec(v_a_3261_);
v___x_3279_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2(v___x_3259_, v_hasTrace_3230_, v___x_3263_, v_options_3229_, v___x_3278_, v___y_3265_, v___f_3262_, v___x_3277_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
lean_dec_ref(v_options_3229_);
return v___x_3279_;
}
v___jp_3280_:
{
lean_object* v___x_3284_; double v___x_3285_; double v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; uint8_t v___x_3291_; lean_object* v___x_3292_; 
v___x_3284_ = lean_io_get_num_heartbeats();
v___x_3285_ = lean_float_of_nat(v___y_3282_);
v___x_3286_ = lean_float_of_nat(v___x_3284_);
v___x_3287_ = lean_box_float(v___x_3285_);
v___x_3288_ = lean_box_float(v___x_3286_);
v___x_3289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3287_);
lean_ctor_set(v___x_3289_, 1, v___x_3288_);
v___x_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3290_, 0, v_a_3283_);
lean_ctor_set(v___x_3290_, 1, v___x_3289_);
v___x_3291_ = lean_unbox(v_a_3261_);
lean_dec(v_a_3261_);
v___x_3292_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_spec__2(v___x_3259_, v_hasTrace_3230_, v___x_3263_, v_options_3229_, v___x_3291_, v___y_3281_, v___f_3262_, v___x_3290_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
lean_dec_ref(v_options_3229_);
return v___x_3292_;
}
v___jp_3293_:
{
lean_object* v___x_3294_; lean_object* v_a_3295_; lean_object* v___x_3296_; uint8_t v___x_3297_; 
v___x_3294_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__4___redArg(v_a_3227_);
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_a_3295_);
lean_dec_ref(v___x_3294_);
v___x_3296_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3297_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v_options_3229_, v___x_3296_);
if (v___x_3297_ == 0)
{
lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___x_3298_ = lean_io_mono_nanos_now();
lean_inc(v_a_3227_);
lean_inc_ref(v_a_3226_);
lean_inc(v_a_3225_);
lean_inc_ref(v_a_3224_);
v___x_3299_ = l_Lean_Meta_mapErrorImp___redArg(v___x_3241_, v___f_3237_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v_a_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3307_; 
v_a_3300_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3302_ = v___x_3299_;
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_a_3300_);
lean_dec(v___x_3299_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3305_; 
if (v_isShared_3303_ == 0)
{
lean_ctor_set_tag(v___x_3302_, 1);
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_a_3300_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
v___y_3265_ = v_a_3295_;
v___y_3266_ = v___x_3298_;
v_a_3267_ = v___x_3305_;
goto v___jp_3264_;
}
}
}
else
{
lean_object* v_a_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3315_; 
v_a_3308_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3315_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3310_ = v___x_3299_;
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_a_3308_);
lean_dec(v___x_3299_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v___x_3313_; 
if (v_isShared_3311_ == 0)
{
lean_ctor_set_tag(v___x_3310_, 0);
v___x_3313_ = v___x_3310_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v_a_3308_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
v___y_3265_ = v_a_3295_;
v___y_3266_ = v___x_3298_;
v_a_3267_ = v___x_3313_;
goto v___jp_3264_;
}
}
}
}
else
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3316_ = lean_io_get_num_heartbeats();
lean_inc(v_a_3227_);
lean_inc_ref(v_a_3226_);
lean_inc(v_a_3225_);
lean_inc_ref(v_a_3224_);
v___x_3317_ = l_Lean_Meta_mapErrorImp___redArg(v___x_3241_, v___f_3237_, v_a_3224_, v_a_3225_, v_a_3226_, v_a_3227_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
v_a_3318_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3317_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3317_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
lean_ctor_set_tag(v___x_3320_, 1);
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
v___y_3281_ = v_a_3295_;
v___y_3282_ = v___x_3316_;
v_a_3283_ = v___x_3323_;
goto v___jp_3280_;
}
}
}
else
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3333_; 
v_a_3326_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3328_ = v___x_3317_;
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3317_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3331_; 
if (v_isShared_3329_ == 0)
{
lean_ctor_set_tag(v___x_3328_, 0);
v___x_3331_ = v___x_3328_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v_a_3326_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
v___y_3281_ = v_a_3295_;
v___y_3282_ = v___x_3316_;
v_a_3283_ = v___x_3331_;
goto v___jp_3280_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___boxed(lean_object* v_declName_3354_, lean_object* v_type_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_, lean_object* v_a_3358_, lean_object* v_a_3359_, lean_object* v_a_3360_){
_start:
{
lean_object* v_res_3361_; 
v_res_3361_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof(v_declName_3354_, v_type_3355_, v_a_3356_, v_a_3357_, v_a_3358_, v_a_3359_);
return v_res_3361_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_(lean_object* v_env_3362_, lean_object* v_n_3363_, lean_object* v_x_3364_){
_start:
{
uint8_t v___x_3365_; lean_object* v___x_3366_; 
v___x_3365_ = 0;
v___x_3366_ = l_Lean_Environment_find_x3f(v_env_3362_, v_n_3363_, v___x_3365_);
if (lean_obj_tag(v___x_3366_) == 0)
{
return v___x_3365_;
}
else
{
lean_object* v_val_3367_; uint8_t v___x_3368_; 
v_val_3367_ = lean_ctor_get(v___x_3366_, 0);
lean_inc(v_val_3367_);
lean_dec_ref(v___x_3366_);
v___x_3368_ = l_Lean_ConstantInfo_hasValue(v_val_3367_, v___x_3365_);
lean_dec(v_val_3367_);
return v___x_3368_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2____boxed(lean_object* v_env_3369_, lean_object* v_n_3370_, lean_object* v_x_3371_){
_start:
{
uint8_t v_res_3372_; lean_object* v_r_3373_; 
v_res_3372_ = l_Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_(v_env_3369_, v_n_3370_, v_x_3371_);
lean_dec_ref(v_x_3371_);
v_r_3373_ = lean_box(v_res_3372_);
return v_r_3373_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_3374_, lean_object* v_x_3375_){
_start:
{
if (lean_obj_tag(v_x_3375_) == 0)
{
lean_object* v_k_3376_; lean_object* v_v_3377_; lean_object* v_l_3378_; lean_object* v_r_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v_k_3376_ = lean_ctor_get(v_x_3375_, 1);
v_v_3377_ = lean_ctor_get(v_x_3375_, 2);
v_l_3378_ = lean_ctor_get(v_x_3375_, 3);
v_r_3379_ = lean_ctor_get(v_x_3375_, 4);
v___x_3380_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0_spec__0(v_init_3374_, v_l_3378_);
lean_inc(v_v_3377_);
lean_inc(v_k_3376_);
v___x_3381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3381_, 0, v_k_3376_);
lean_ctor_set(v___x_3381_, 1, v_v_3377_);
v___x_3382_ = lean_array_push(v___x_3380_, v___x_3381_);
v_init_3374_ = v___x_3382_;
v_x_3375_ = v_r_3379_;
goto _start;
}
else
{
return v_init_3374_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_3384_, lean_object* v_x_3385_){
_start:
{
lean_object* v_res_3386_; 
v_res_3386_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0_spec__0(v_init_3384_, v_x_3385_);
lean_dec(v_x_3385_);
return v_res_3386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_(lean_object* v_env_3389_, lean_object* v_s_3390_, uint8_t v_x_3391_){
_start:
{
lean_object* v___f_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___f_3392_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2____boxed), 3, 1);
lean_closure_set(v___f_3392_, 0, v_env_3389_);
v___x_3393_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v___f_3392_, v_s_3390_);
v___x_3394_ = ((lean_object*)(l_Lean_Elab_Structural_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_));
v___x_3395_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0_spec__0(v___x_3394_, v___x_3393_);
lean_dec(v___x_3393_);
return v___x_3395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2____boxed(lean_object* v_env_3396_, lean_object* v_s_3397_, lean_object* v_x_3398_){
_start:
{
uint8_t v_x_232__boxed_3399_; lean_object* v_res_3400_; 
v_x_232__boxed_3399_ = lean_unbox(v_x_3398_);
v_res_3400_ = l_Lean_Elab_Structural_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_(v_env_3396_, v_s_3397_, v_x_232__boxed_3399_);
return v_res_3400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___f_3413_ = ((lean_object*)(l_Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_));
v___x_3414_ = ((lean_object*)(l_Lean_Elab_Structural_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_));
v___x_3415_ = ((lean_object*)(l_Lean_Elab_Structural_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_));
v___x_3416_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_3414_, v___x_3415_, v___f_3413_);
return v___x_3416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2____boxed(lean_object* v_a_3417_){
_start:
{
lean_object* v_res_3418_; 
v_res_3418_ = l_Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_();
return v_res_3418_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0(lean_object* v_init_3419_, lean_object* v_t_3420_){
_start:
{
lean_object* v___x_3421_; 
v___x_3421_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0_spec__0(v_init_3419_, v_t_3420_);
return v___x_3421_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_3422_, lean_object* v_t_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2__spec__0(v_init_3422_, v_t_3423_);
lean_dec(v_t_3423_);
return v_res_3424_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__0(void){
_start:
{
lean_object* v___x_3425_; 
v___x_3425_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_3425_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__1(void){
_start:
{
lean_object* v___x_3426_; lean_object* v___x_3427_; 
v___x_3426_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__0, &l_Lean_Elab_Structural_registerEqnsInfo___closed__0_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__0);
v___x_3427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3426_);
return v___x_3427_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__2(void){
_start:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3428_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__1, &l_Lean_Elab_Structural_registerEqnsInfo___closed__1_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__1);
v___x_3429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3428_);
lean_ctor_set(v___x_3429_, 1, v___x_3428_);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_registerEqnsInfo(lean_object* v_preDef_3430_, lean_object* v_declNames_3431_, lean_object* v_recArgPos_3432_, lean_object* v_fixedParamPerms_3433_, lean_object* v_a_3434_, lean_object* v_a_3435_){
_start:
{
lean_object* v_levelParams_3437_; lean_object* v_declName_3438_; lean_object* v_type_3439_; lean_object* v_value_3440_; lean_object* v___x_3441_; 
v_levelParams_3437_ = lean_ctor_get(v_preDef_3430_, 1);
lean_inc(v_levelParams_3437_);
v_declName_3438_ = lean_ctor_get(v_preDef_3430_, 3);
lean_inc(v_declName_3438_);
v_type_3439_ = lean_ctor_get(v_preDef_3430_, 6);
lean_inc_ref(v_type_3439_);
v_value_3440_ = lean_ctor_get(v_preDef_3430_, 7);
lean_inc_ref(v_value_3440_);
lean_dec_ref(v_preDef_3430_);
lean_inc(v_declName_3438_);
v___x_3441_ = l_Lean_Meta_ensureEqnReservedNamesAvailable(v_declName_3438_, v_a_3434_, v_a_3435_);
if (lean_obj_tag(v___x_3441_) == 0)
{
lean_object* v___x_3443_; uint8_t v_isShared_3444_; uint8_t v_isSharedCheck_3471_; 
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3471_ == 0)
{
lean_object* v_unused_3472_; 
v_unused_3472_ = lean_ctor_get(v___x_3441_, 0);
lean_dec(v_unused_3472_);
v___x_3443_ = v___x_3441_;
v_isShared_3444_ = v_isSharedCheck_3471_;
goto v_resetjp_3442_;
}
else
{
lean_dec(v___x_3441_);
v___x_3443_ = lean_box(0);
v_isShared_3444_ = v_isSharedCheck_3471_;
goto v_resetjp_3442_;
}
v_resetjp_3442_:
{
lean_object* v___x_3445_; lean_object* v_env_3446_; lean_object* v_nextMacroScope_3447_; lean_object* v_ngen_3448_; lean_object* v_auxDeclNGen_3449_; lean_object* v_traceState_3450_; lean_object* v_messages_3451_; lean_object* v_infoState_3452_; lean_object* v_snapshotTasks_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3469_; 
v___x_3445_ = lean_st_ref_take(v_a_3435_);
v_env_3446_ = lean_ctor_get(v___x_3445_, 0);
v_nextMacroScope_3447_ = lean_ctor_get(v___x_3445_, 1);
v_ngen_3448_ = lean_ctor_get(v___x_3445_, 2);
v_auxDeclNGen_3449_ = lean_ctor_get(v___x_3445_, 3);
v_traceState_3450_ = lean_ctor_get(v___x_3445_, 4);
v_messages_3451_ = lean_ctor_get(v___x_3445_, 6);
v_infoState_3452_ = lean_ctor_get(v___x_3445_, 7);
v_snapshotTasks_3453_ = lean_ctor_get(v___x_3445_, 8);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3445_);
if (v_isSharedCheck_3469_ == 0)
{
lean_object* v_unused_3470_; 
v_unused_3470_ = lean_ctor_get(v___x_3445_, 5);
lean_dec(v_unused_3470_);
v___x_3455_ = v___x_3445_;
v_isShared_3456_ = v_isSharedCheck_3469_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_snapshotTasks_3453_);
lean_inc(v_infoState_3452_);
lean_inc(v_messages_3451_);
lean_inc(v_traceState_3450_);
lean_inc(v_auxDeclNGen_3449_);
lean_inc(v_ngen_3448_);
lean_inc(v_nextMacroScope_3447_);
lean_inc(v_env_3446_);
lean_dec(v___x_3445_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3469_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3462_; 
v___x_3457_ = l_Lean_Elab_Structural_eqnInfoExt;
lean_inc(v_declName_3438_);
v___x_3458_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_3458_, 0, v_declName_3438_);
lean_ctor_set(v___x_3458_, 1, v_levelParams_3437_);
lean_ctor_set(v___x_3458_, 2, v_type_3439_);
lean_ctor_set(v___x_3458_, 3, v_value_3440_);
lean_ctor_set(v___x_3458_, 4, v_recArgPos_3432_);
lean_ctor_set(v___x_3458_, 5, v_declNames_3431_);
lean_ctor_set(v___x_3458_, 6, v_fixedParamPerms_3433_);
v___x_3459_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3457_, v_env_3446_, v_declName_3438_, v___x_3458_);
v___x_3460_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__2, &l_Lean_Elab_Structural_registerEqnsInfo___closed__2_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__2);
if (v_isShared_3456_ == 0)
{
lean_ctor_set(v___x_3455_, 5, v___x_3460_);
lean_ctor_set(v___x_3455_, 0, v___x_3459_);
v___x_3462_ = v___x_3455_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v___x_3459_);
lean_ctor_set(v_reuseFailAlloc_3468_, 1, v_nextMacroScope_3447_);
lean_ctor_set(v_reuseFailAlloc_3468_, 2, v_ngen_3448_);
lean_ctor_set(v_reuseFailAlloc_3468_, 3, v_auxDeclNGen_3449_);
lean_ctor_set(v_reuseFailAlloc_3468_, 4, v_traceState_3450_);
lean_ctor_set(v_reuseFailAlloc_3468_, 5, v___x_3460_);
lean_ctor_set(v_reuseFailAlloc_3468_, 6, v_messages_3451_);
lean_ctor_set(v_reuseFailAlloc_3468_, 7, v_infoState_3452_);
lean_ctor_set(v_reuseFailAlloc_3468_, 8, v_snapshotTasks_3453_);
v___x_3462_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3466_; 
v___x_3463_ = lean_st_ref_set(v_a_3435_, v___x_3462_);
v___x_3464_ = lean_box(0);
if (v_isShared_3444_ == 0)
{
lean_ctor_set(v___x_3443_, 0, v___x_3464_);
v___x_3466_ = v___x_3443_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v___x_3464_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
}
}
}
else
{
lean_dec_ref(v_value_3440_);
lean_dec_ref(v_type_3439_);
lean_dec(v_declName_3438_);
lean_dec(v_levelParams_3437_);
lean_dec_ref(v_fixedParamPerms_3433_);
lean_dec(v_recArgPos_3432_);
lean_dec_ref(v_declNames_3431_);
return v___x_3441_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_registerEqnsInfo___boxed(lean_object* v_preDef_3473_, lean_object* v_declNames_3474_, lean_object* v_recArgPos_3475_, lean_object* v_fixedParamPerms_3476_, lean_object* v_a_3477_, lean_object* v_a_3478_, lean_object* v_a_3479_){
_start:
{
lean_object* v_res_3480_; 
v_res_3480_ = l_Lean_Elab_Structural_registerEqnsInfo(v_preDef_3473_, v_declNames_3474_, v_recArgPos_3475_, v_fixedParamPerms_3476_, v_a_3477_, v_a_3478_);
lean_dec(v_a_3478_);
lean_dec_ref(v_a_3477_);
return v_res_3480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg(lean_object* v_e_3481_, lean_object* v_k_3482_, uint8_t v_cleanupAnnotations_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_){
_start:
{
lean_object* v___f_3489_; uint8_t v___x_3490_; uint8_t v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___f_3489_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_findBRecOnLHS_go_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3489_, 0, v_k_3482_);
v___x_3490_ = 1;
v___x_3491_ = 0;
v___x_3492_ = lean_box(0);
v___x_3493_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3481_, v___x_3490_, v___x_3491_, v___x_3490_, v___x_3491_, v___x_3492_, v___f_3489_, v_cleanupAnnotations_3483_, v___y_3484_, v___y_3485_, v___y_3486_, v___y_3487_);
if (lean_obj_tag(v___x_3493_) == 0)
{
lean_object* v_a_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3501_; 
v_a_3494_ = lean_ctor_get(v___x_3493_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3493_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3496_ = v___x_3493_;
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_a_3494_);
lean_dec(v___x_3493_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v___x_3499_; 
if (v_isShared_3497_ == 0)
{
v___x_3499_ = v___x_3496_;
goto v_reusejp_3498_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v_a_3494_);
v___x_3499_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3498_;
}
v_reusejp_3498_:
{
return v___x_3499_;
}
}
}
else
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3509_; 
v_a_3502_ = lean_ctor_get(v___x_3493_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3493_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3504_ = v___x_3493_;
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3493_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3509_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3507_; 
if (v_isShared_3505_ == 0)
{
v___x_3507_ = v___x_3504_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_a_3502_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg___boxed(lean_object* v_e_3510_, lean_object* v_k_3511_, lean_object* v_cleanupAnnotations_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3518_; lean_object* v_res_3519_; 
v_cleanupAnnotations_boxed_3518_ = lean_unbox(v_cleanupAnnotations_3512_);
v_res_3519_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg(v_e_3510_, v_k_3511_, v_cleanupAnnotations_boxed_3518_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3(lean_object* v_00_u03b1_3520_, lean_object* v_e_3521_, lean_object* v_k_3522_, uint8_t v_cleanupAnnotations_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_){
_start:
{
lean_object* v___x_3529_; 
v___x_3529_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg(v_e_3521_, v_k_3522_, v_cleanupAnnotations_3523_, v___y_3524_, v___y_3525_, v___y_3526_, v___y_3527_);
return v___x_3529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___boxed(lean_object* v_00_u03b1_3530_, lean_object* v_e_3531_, lean_object* v_k_3532_, lean_object* v_cleanupAnnotations_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3539_; lean_object* v_res_3540_; 
v_cleanupAnnotations_boxed_3539_ = lean_unbox(v_cleanupAnnotations_3533_);
v_res_3540_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3(v_00_u03b1_3530_, v_e_3531_, v_k_3532_, v_cleanupAnnotations_boxed_3539_, v___y_3534_, v___y_3535_, v___y_3536_, v___y_3537_);
return v_res_3540_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0(lean_object* v___y_3541_, uint8_t v_isExporting_3542_, lean_object* v___x_3543_, lean_object* v___y_3544_, lean_object* v___x_3545_, lean_object* v_a_x3f_3546_){
_start:
{
lean_object* v___x_3548_; lean_object* v_env_3549_; lean_object* v_nextMacroScope_3550_; lean_object* v_ngen_3551_; lean_object* v_auxDeclNGen_3552_; lean_object* v_traceState_3553_; lean_object* v_messages_3554_; lean_object* v_infoState_3555_; lean_object* v_snapshotTasks_3556_; lean_object* v___x_3558_; uint8_t v_isShared_3559_; uint8_t v_isSharedCheck_3581_; 
v___x_3548_ = lean_st_ref_take(v___y_3541_);
v_env_3549_ = lean_ctor_get(v___x_3548_, 0);
v_nextMacroScope_3550_ = lean_ctor_get(v___x_3548_, 1);
v_ngen_3551_ = lean_ctor_get(v___x_3548_, 2);
v_auxDeclNGen_3552_ = lean_ctor_get(v___x_3548_, 3);
v_traceState_3553_ = lean_ctor_get(v___x_3548_, 4);
v_messages_3554_ = lean_ctor_get(v___x_3548_, 6);
v_infoState_3555_ = lean_ctor_get(v___x_3548_, 7);
v_snapshotTasks_3556_ = lean_ctor_get(v___x_3548_, 8);
v_isSharedCheck_3581_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3581_ == 0)
{
lean_object* v_unused_3582_; 
v_unused_3582_ = lean_ctor_get(v___x_3548_, 5);
lean_dec(v_unused_3582_);
v___x_3558_ = v___x_3548_;
v_isShared_3559_ = v_isSharedCheck_3581_;
goto v_resetjp_3557_;
}
else
{
lean_inc(v_snapshotTasks_3556_);
lean_inc(v_infoState_3555_);
lean_inc(v_messages_3554_);
lean_inc(v_traceState_3553_);
lean_inc(v_auxDeclNGen_3552_);
lean_inc(v_ngen_3551_);
lean_inc(v_nextMacroScope_3550_);
lean_inc(v_env_3549_);
lean_dec(v___x_3548_);
v___x_3558_ = lean_box(0);
v_isShared_3559_ = v_isSharedCheck_3581_;
goto v_resetjp_3557_;
}
v_resetjp_3557_:
{
lean_object* v___x_3560_; lean_object* v___x_3562_; 
v___x_3560_ = l_Lean_Environment_setExporting(v_env_3549_, v_isExporting_3542_);
if (v_isShared_3559_ == 0)
{
lean_ctor_set(v___x_3558_, 5, v___x_3543_);
lean_ctor_set(v___x_3558_, 0, v___x_3560_);
v___x_3562_ = v___x_3558_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v___x_3560_);
lean_ctor_set(v_reuseFailAlloc_3580_, 1, v_nextMacroScope_3550_);
lean_ctor_set(v_reuseFailAlloc_3580_, 2, v_ngen_3551_);
lean_ctor_set(v_reuseFailAlloc_3580_, 3, v_auxDeclNGen_3552_);
lean_ctor_set(v_reuseFailAlloc_3580_, 4, v_traceState_3553_);
lean_ctor_set(v_reuseFailAlloc_3580_, 5, v___x_3543_);
lean_ctor_set(v_reuseFailAlloc_3580_, 6, v_messages_3554_);
lean_ctor_set(v_reuseFailAlloc_3580_, 7, v_infoState_3555_);
lean_ctor_set(v_reuseFailAlloc_3580_, 8, v_snapshotTasks_3556_);
v___x_3562_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v_mctx_3565_; lean_object* v_zetaDeltaFVarIds_3566_; lean_object* v_postponed_3567_; lean_object* v_diag_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3578_; 
v___x_3563_ = lean_st_ref_set(v___y_3541_, v___x_3562_);
v___x_3564_ = lean_st_ref_take(v___y_3544_);
v_mctx_3565_ = lean_ctor_get(v___x_3564_, 0);
v_zetaDeltaFVarIds_3566_ = lean_ctor_get(v___x_3564_, 2);
v_postponed_3567_ = lean_ctor_get(v___x_3564_, 3);
v_diag_3568_ = lean_ctor_get(v___x_3564_, 4);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3564_);
if (v_isSharedCheck_3578_ == 0)
{
lean_object* v_unused_3579_; 
v_unused_3579_ = lean_ctor_get(v___x_3564_, 1);
lean_dec(v_unused_3579_);
v___x_3570_ = v___x_3564_;
v_isShared_3571_ = v_isSharedCheck_3578_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_diag_3568_);
lean_inc(v_postponed_3567_);
lean_inc(v_zetaDeltaFVarIds_3566_);
lean_inc(v_mctx_3565_);
lean_dec(v___x_3564_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3578_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
lean_ctor_set(v___x_3570_, 1, v___x_3545_);
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_mctx_3565_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v___x_3545_);
lean_ctor_set(v_reuseFailAlloc_3577_, 2, v_zetaDeltaFVarIds_3566_);
lean_ctor_set(v_reuseFailAlloc_3577_, 3, v_postponed_3567_);
lean_ctor_set(v_reuseFailAlloc_3577_, 4, v_diag_3568_);
v___x_3573_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3574_ = lean_st_ref_set(v___y_3544_, v___x_3573_);
v___x_3575_ = lean_box(0);
v___x_3576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3576_, 0, v___x_3575_);
return v___x_3576_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_3583_, lean_object* v_isExporting_3584_, lean_object* v___x_3585_, lean_object* v___y_3586_, lean_object* v___x_3587_, lean_object* v_a_x3f_3588_, lean_object* v___y_3589_){
_start:
{
uint8_t v_isExporting_boxed_3590_; lean_object* v_res_3591_; 
v_isExporting_boxed_3590_ = lean_unbox(v_isExporting_3584_);
v_res_3591_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0(v___y_3583_, v_isExporting_boxed_3590_, v___x_3585_, v___y_3586_, v___x_3587_, v_a_x3f_3588_);
lean_dec(v_a_x3f_3588_);
lean_dec(v___y_3586_);
lean_dec(v___y_3583_);
return v_res_3591_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_3592_; lean_object* v___x_3593_; 
v___x_3592_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__1, &l_Lean_Elab_Structural_registerEqnsInfo___closed__1_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__1);
v___x_3593_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3593_, 0, v___x_3592_);
lean_ctor_set(v___x_3593_, 1, v___x_3592_);
lean_ctor_set(v___x_3593_, 2, v___x_3592_);
lean_ctor_set(v___x_3593_, 3, v___x_3592_);
lean_ctor_set(v___x_3593_, 4, v___x_3592_);
lean_ctor_set(v___x_3593_, 5, v___x_3592_);
return v___x_3593_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg(lean_object* v_x_3594_, uint8_t v_isExporting_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_){
_start:
{
lean_object* v___x_3601_; lean_object* v_env_3602_; uint8_t v_isExporting_3603_; lean_object* v___x_3604_; lean_object* v_env_3605_; lean_object* v_nextMacroScope_3606_; lean_object* v_ngen_3607_; lean_object* v_auxDeclNGen_3608_; lean_object* v_traceState_3609_; lean_object* v_messages_3610_; lean_object* v_infoState_3611_; lean_object* v_snapshotTasks_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3666_; 
v___x_3601_ = lean_st_ref_get(v___y_3599_);
v_env_3602_ = lean_ctor_get(v___x_3601_, 0);
lean_inc_ref(v_env_3602_);
lean_dec(v___x_3601_);
v_isExporting_3603_ = lean_ctor_get_uint8(v_env_3602_, sizeof(void*)*8);
lean_dec_ref(v_env_3602_);
v___x_3604_ = lean_st_ref_take(v___y_3599_);
v_env_3605_ = lean_ctor_get(v___x_3604_, 0);
v_nextMacroScope_3606_ = lean_ctor_get(v___x_3604_, 1);
v_ngen_3607_ = lean_ctor_get(v___x_3604_, 2);
v_auxDeclNGen_3608_ = lean_ctor_get(v___x_3604_, 3);
v_traceState_3609_ = lean_ctor_get(v___x_3604_, 4);
v_messages_3610_ = lean_ctor_get(v___x_3604_, 6);
v_infoState_3611_ = lean_ctor_get(v___x_3604_, 7);
v_snapshotTasks_3612_ = lean_ctor_get(v___x_3604_, 8);
v_isSharedCheck_3666_ = !lean_is_exclusive(v___x_3604_);
if (v_isSharedCheck_3666_ == 0)
{
lean_object* v_unused_3667_; 
v_unused_3667_ = lean_ctor_get(v___x_3604_, 5);
lean_dec(v_unused_3667_);
v___x_3614_ = v___x_3604_;
v_isShared_3615_ = v_isSharedCheck_3666_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_snapshotTasks_3612_);
lean_inc(v_infoState_3611_);
lean_inc(v_messages_3610_);
lean_inc(v_traceState_3609_);
lean_inc(v_auxDeclNGen_3608_);
lean_inc(v_ngen_3607_);
lean_inc(v_nextMacroScope_3606_);
lean_inc(v_env_3605_);
lean_dec(v___x_3604_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3666_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3619_; 
v___x_3616_ = l_Lean_Environment_setExporting(v_env_3605_, v_isExporting_3595_);
v___x_3617_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__2, &l_Lean_Elab_Structural_registerEqnsInfo___closed__2_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__2);
if (v_isShared_3615_ == 0)
{
lean_ctor_set(v___x_3614_, 5, v___x_3617_);
lean_ctor_set(v___x_3614_, 0, v___x_3616_);
v___x_3619_ = v___x_3614_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v___x_3616_);
lean_ctor_set(v_reuseFailAlloc_3665_, 1, v_nextMacroScope_3606_);
lean_ctor_set(v_reuseFailAlloc_3665_, 2, v_ngen_3607_);
lean_ctor_set(v_reuseFailAlloc_3665_, 3, v_auxDeclNGen_3608_);
lean_ctor_set(v_reuseFailAlloc_3665_, 4, v_traceState_3609_);
lean_ctor_set(v_reuseFailAlloc_3665_, 5, v___x_3617_);
lean_ctor_set(v_reuseFailAlloc_3665_, 6, v_messages_3610_);
lean_ctor_set(v_reuseFailAlloc_3665_, 7, v_infoState_3611_);
lean_ctor_set(v_reuseFailAlloc_3665_, 8, v_snapshotTasks_3612_);
v___x_3619_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v_mctx_3622_; lean_object* v_zetaDeltaFVarIds_3623_; lean_object* v_postponed_3624_; lean_object* v_diag_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3663_; 
v___x_3620_ = lean_st_ref_set(v___y_3599_, v___x_3619_);
v___x_3621_ = lean_st_ref_take(v___y_3597_);
v_mctx_3622_ = lean_ctor_get(v___x_3621_, 0);
v_zetaDeltaFVarIds_3623_ = lean_ctor_get(v___x_3621_, 2);
v_postponed_3624_ = lean_ctor_get(v___x_3621_, 3);
v_diag_3625_ = lean_ctor_get(v___x_3621_, 4);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3663_ == 0)
{
lean_object* v_unused_3664_; 
v_unused_3664_ = lean_ctor_get(v___x_3621_, 1);
lean_dec(v_unused_3664_);
v___x_3627_ = v___x_3621_;
v_isShared_3628_ = v_isSharedCheck_3663_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_diag_3625_);
lean_inc(v_postponed_3624_);
lean_inc(v_zetaDeltaFVarIds_3623_);
lean_inc(v_mctx_3622_);
lean_dec(v___x_3621_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3663_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3629_; lean_object* v___x_3631_; 
v___x_3629_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___closed__0);
if (v_isShared_3628_ == 0)
{
lean_ctor_set(v___x_3627_, 1, v___x_3629_);
v___x_3631_ = v___x_3627_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_mctx_3622_);
lean_ctor_set(v_reuseFailAlloc_3662_, 1, v___x_3629_);
lean_ctor_set(v_reuseFailAlloc_3662_, 2, v_zetaDeltaFVarIds_3623_);
lean_ctor_set(v_reuseFailAlloc_3662_, 3, v_postponed_3624_);
lean_ctor_set(v_reuseFailAlloc_3662_, 4, v_diag_3625_);
v___x_3631_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
lean_object* v___x_3632_; lean_object* v_r_3633_; 
v___x_3632_ = lean_st_ref_set(v___y_3597_, v___x_3631_);
lean_inc(v___y_3599_);
lean_inc(v___y_3597_);
v_r_3633_ = lean_apply_5(v_x_3594_, v___y_3596_, v___y_3597_, v___y_3598_, v___y_3599_, lean_box(0));
if (lean_obj_tag(v_r_3633_) == 0)
{
lean_object* v_a_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3650_; 
v_a_3634_ = lean_ctor_get(v_r_3633_, 0);
v_isSharedCheck_3650_ = !lean_is_exclusive(v_r_3633_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3636_ = v_r_3633_;
v_isShared_3637_ = v_isSharedCheck_3650_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_a_3634_);
lean_dec(v_r_3633_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3650_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
lean_inc(v_a_3634_);
if (v_isShared_3637_ == 0)
{
lean_ctor_set_tag(v___x_3636_, 1);
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_a_3634_);
v___x_3639_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
lean_object* v___x_3640_; lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3647_; 
v___x_3640_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0(v___y_3599_, v_isExporting_3603_, v___x_3617_, v___y_3597_, v___x_3629_, v___x_3639_);
lean_dec_ref(v___x_3639_);
lean_dec(v___y_3597_);
lean_dec(v___y_3599_);
v_isSharedCheck_3647_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3647_ == 0)
{
lean_object* v_unused_3648_; 
v_unused_3648_ = lean_ctor_get(v___x_3640_, 0);
lean_dec(v_unused_3648_);
v___x_3642_ = v___x_3640_;
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
else
{
lean_dec(v___x_3640_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v___x_3645_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 0, v_a_3634_);
v___x_3645_ = v___x_3642_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v_a_3634_);
v___x_3645_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
return v___x_3645_;
}
}
}
}
}
else
{
lean_object* v_a_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3660_; 
v_a_3651_ = lean_ctor_get(v_r_3633_, 0);
lean_inc(v_a_3651_);
lean_dec_ref(v_r_3633_);
v___x_3652_ = lean_box(0);
v___x_3653_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___lam__0(v___y_3599_, v_isExporting_3603_, v___x_3617_, v___y_3597_, v___x_3629_, v___x_3652_);
lean_dec(v___y_3597_);
lean_dec(v___y_3599_);
v_isSharedCheck_3660_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3660_ == 0)
{
lean_object* v_unused_3661_; 
v_unused_3661_ = lean_ctor_get(v___x_3653_, 0);
lean_dec(v_unused_3661_);
v___x_3655_ = v___x_3653_;
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
else
{
lean_dec(v___x_3653_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3660_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v___x_3658_; 
if (v_isShared_3656_ == 0)
{
lean_ctor_set_tag(v___x_3655_, 1);
lean_ctor_set(v___x_3655_, 0, v_a_3651_);
v___x_3658_ = v___x_3655_;
goto v_reusejp_3657_;
}
else
{
lean_object* v_reuseFailAlloc_3659_; 
v_reuseFailAlloc_3659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3659_, 0, v_a_3651_);
v___x_3658_ = v_reuseFailAlloc_3659_;
goto v_reusejp_3657_;
}
v_reusejp_3657_:
{
return v___x_3658_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg___boxed(lean_object* v_x_3668_, lean_object* v_isExporting_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_){
_start:
{
uint8_t v_isExporting_boxed_3675_; lean_object* v_res_3676_; 
v_isExporting_boxed_3675_ = lean_unbox(v_isExporting_3669_);
v_res_3676_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg(v_x_3668_, v_isExporting_boxed_3675_, v___y_3670_, v___y_3671_, v___y_3672_, v___y_3673_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg(lean_object* v_x_3677_, uint8_t v_when_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_){
_start:
{
if (v_when_3678_ == 0)
{
lean_object* v___x_3684_; 
v___x_3684_ = lean_apply_5(v_x_3677_, v___y_3679_, v___y_3680_, v___y_3681_, v___y_3682_, lean_box(0));
return v___x_3684_;
}
else
{
uint8_t v___x_3685_; lean_object* v___x_3686_; 
v___x_3685_ = 0;
v___x_3686_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg(v_x_3677_, v___x_3685_, v___y_3679_, v___y_3680_, v___y_3681_, v___y_3682_);
return v___x_3686_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg___boxed(lean_object* v_x_3687_, lean_object* v_when_3688_, lean_object* v___y_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_){
_start:
{
uint8_t v_when_boxed_3694_; lean_object* v_res_3695_; 
v_when_boxed_3694_ = lean_unbox(v_when_3688_);
v_res_3695_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg(v_x_3687_, v_when_boxed_3694_, v___y_3689_, v___y_3690_, v___y_3691_, v___y_3692_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__0(lean_object* v_a_3696_, lean_object* v_a_3697_){
_start:
{
if (lean_obj_tag(v_a_3696_) == 0)
{
lean_object* v___x_3698_; 
v___x_3698_ = l_List_reverse___redArg(v_a_3697_);
return v___x_3698_;
}
else
{
lean_object* v_head_3699_; lean_object* v_tail_3700_; lean_object* v___x_3702_; uint8_t v_isShared_3703_; uint8_t v_isSharedCheck_3709_; 
v_head_3699_ = lean_ctor_get(v_a_3696_, 0);
v_tail_3700_ = lean_ctor_get(v_a_3696_, 1);
v_isSharedCheck_3709_ = !lean_is_exclusive(v_a_3696_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3702_ = v_a_3696_;
v_isShared_3703_ = v_isSharedCheck_3709_;
goto v_resetjp_3701_;
}
else
{
lean_inc(v_tail_3700_);
lean_inc(v_head_3699_);
lean_dec(v_a_3696_);
v___x_3702_ = lean_box(0);
v_isShared_3703_ = v_isSharedCheck_3709_;
goto v_resetjp_3701_;
}
v_resetjp_3701_:
{
lean_object* v___x_3704_; lean_object* v___x_3706_; 
v___x_3704_ = l_Lean_mkLevelParam(v_head_3699_);
if (v_isShared_3703_ == 0)
{
lean_ctor_set(v___x_3702_, 1, v_a_3697_);
lean_ctor_set(v___x_3702_, 0, v___x_3704_);
v___x_3706_ = v___x_3702_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v___x_3704_);
lean_ctor_set(v_reuseFailAlloc_3708_, 1, v_a_3697_);
v___x_3706_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
v_a_3696_ = v_tail_3700_;
v_a_3697_ = v___x_3706_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0(lean_object* v_levelParams_3710_, lean_object* v_declName_3711_, lean_object* v_name_3712_, lean_object* v_xs_3713_, lean_object* v_body_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
lean_object* v___x_3720_; lean_object* v_us_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; 
v___x_3720_ = lean_box(0);
lean_inc(v_levelParams_3710_);
v_us_3721_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__0(v_levelParams_3710_, v___x_3720_);
lean_inc(v_declName_3711_);
v___x_3722_ = l_Lean_mkConst(v_declName_3711_, v_us_3721_);
v___x_3723_ = l_Lean_mkAppN(v___x_3722_, v_xs_3713_);
lean_inc(v___y_3718_);
lean_inc_ref(v___y_3717_);
lean_inc(v___y_3716_);
lean_inc_ref(v___y_3715_);
v___x_3724_ = l_Lean_Meta_mkEq(v___x_3723_, v_body_3714_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_);
if (lean_obj_tag(v___x_3724_) == 0)
{
lean_object* v_a_3725_; lean_object* v___x_3726_; uint8_t v___x_3727_; lean_object* v___x_3728_; 
v_a_3725_ = lean_ctor_get(v___x_3724_, 0);
lean_inc(v_a_3725_);
lean_dec_ref(v___x_3724_);
lean_inc(v_a_3725_);
v___x_3726_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof___boxed), 7, 2);
lean_closure_set(v___x_3726_, 0, v_declName_3711_);
lean_closure_set(v___x_3726_, 1, v_a_3725_);
v___x_3727_ = 1;
lean_inc(v___y_3718_);
lean_inc_ref(v___y_3717_);
lean_inc(v___y_3716_);
lean_inc_ref(v___y_3715_);
v___x_3728_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg(v___x_3726_, v___x_3727_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v_a_3729_; uint8_t v___x_3730_; uint8_t v___x_3731_; lean_object* v___x_3732_; 
v_a_3729_ = lean_ctor_get(v___x_3728_, 0);
lean_inc(v_a_3729_);
lean_dec_ref(v___x_3728_);
v___x_3730_ = 0;
v___x_3731_ = 1;
v___x_3732_ = l_Lean_Meta_mkForallFVars(v_xs_3713_, v_a_3725_, v___x_3730_, v___x_3727_, v___x_3727_, v___x_3731_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_);
if (lean_obj_tag(v___x_3732_) == 0)
{
lean_object* v_a_3733_; lean_object* v___x_3734_; 
v_a_3733_ = lean_ctor_get(v___x_3732_, 0);
lean_inc(v_a_3733_);
lean_dec_ref(v___x_3732_);
lean_inc(v___y_3718_);
lean_inc_ref(v___y_3717_);
lean_inc(v___y_3716_);
lean_inc_ref(v___y_3715_);
v___x_3734_ = l_Lean_Meta_letToHave(v_a_3733_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_);
if (lean_obj_tag(v___x_3734_) == 0)
{
lean_object* v_a_3735_; lean_object* v___x_3736_; 
v_a_3735_ = lean_ctor_get(v___x_3734_, 0);
lean_inc(v_a_3735_);
lean_dec_ref(v___x_3734_);
v___x_3736_ = l_Lean_Meta_mkLambdaFVars(v_xs_3713_, v_a_3729_, v___x_3730_, v___x_3727_, v___x_3730_, v___x_3727_, v___x_3731_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_);
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3737_);
lean_dec_ref(v___x_3736_);
lean_inc(v_name_3712_);
v___x_3738_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3738_, 0, v_name_3712_);
lean_ctor_set(v___x_3738_, 1, v_levelParams_3710_);
lean_ctor_set(v___x_3738_, 2, v_a_3735_);
lean_inc(v_name_3712_);
v___x_3739_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3739_, 0, v_name_3712_);
lean_ctor_set(v___x_3739_, 1, v___x_3720_);
v___x_3740_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3738_);
lean_ctor_set(v___x_3740_, 1, v_a_3737_);
lean_ctor_set(v___x_3740_, 2, v___x_3739_);
v___x_3741_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3741_, 0, v___x_3740_);
lean_inc(v___y_3718_);
lean_inc_ref(v___y_3717_);
v___x_3742_ = l_Lean_addDecl(v___x_3741_, v___x_3730_, v___y_3717_, v___y_3718_);
if (lean_obj_tag(v___x_3742_) == 0)
{
lean_object* v___x_3743_; 
lean_dec_ref(v___x_3742_);
v___x_3743_ = l_Lean_inferDefEqAttr(v_name_3712_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_);
return v___x_3743_;
}
else
{
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v_name_3712_);
return v___x_3742_;
}
}
else
{
lean_object* v_a_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3751_; 
lean_dec(v_a_3735_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v_name_3712_);
lean_dec(v_levelParams_3710_);
v_a_3744_ = lean_ctor_get(v___x_3736_, 0);
v_isSharedCheck_3751_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3751_ == 0)
{
v___x_3746_ = v___x_3736_;
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_a_3744_);
lean_dec(v___x_3736_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3751_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
lean_object* v___x_3749_; 
if (v_isShared_3747_ == 0)
{
v___x_3749_ = v___x_3746_;
goto v_reusejp_3748_;
}
else
{
lean_object* v_reuseFailAlloc_3750_; 
v_reuseFailAlloc_3750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3750_, 0, v_a_3744_);
v___x_3749_ = v_reuseFailAlloc_3750_;
goto v_reusejp_3748_;
}
v_reusejp_3748_:
{
return v___x_3749_;
}
}
}
}
else
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3759_; 
lean_dec(v_a_3729_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v_name_3712_);
lean_dec(v_levelParams_3710_);
v_a_3752_ = lean_ctor_get(v___x_3734_, 0);
v_isSharedCheck_3759_ = !lean_is_exclusive(v___x_3734_);
if (v_isSharedCheck_3759_ == 0)
{
v___x_3754_ = v___x_3734_;
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3734_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3759_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v___x_3757_; 
if (v_isShared_3755_ == 0)
{
v___x_3757_ = v___x_3754_;
goto v_reusejp_3756_;
}
else
{
lean_object* v_reuseFailAlloc_3758_; 
v_reuseFailAlloc_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3758_, 0, v_a_3752_);
v___x_3757_ = v_reuseFailAlloc_3758_;
goto v_reusejp_3756_;
}
v_reusejp_3756_:
{
return v___x_3757_;
}
}
}
}
else
{
lean_object* v_a_3760_; lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3767_; 
lean_dec(v_a_3729_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v_name_3712_);
lean_dec(v_levelParams_3710_);
v_a_3760_ = lean_ctor_get(v___x_3732_, 0);
v_isSharedCheck_3767_ = !lean_is_exclusive(v___x_3732_);
if (v_isSharedCheck_3767_ == 0)
{
v___x_3762_ = v___x_3732_;
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
else
{
lean_inc(v_a_3760_);
lean_dec(v___x_3732_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3767_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v___x_3765_; 
if (v_isShared_3763_ == 0)
{
v___x_3765_ = v___x_3762_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v_a_3760_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
return v___x_3765_;
}
}
}
}
else
{
lean_object* v_a_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3775_; 
lean_dec(v_a_3725_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v_name_3712_);
lean_dec(v_levelParams_3710_);
v_a_3768_ = lean_ctor_get(v___x_3728_, 0);
v_isSharedCheck_3775_ = !lean_is_exclusive(v___x_3728_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3770_ = v___x_3728_;
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_a_3768_);
lean_dec(v___x_3728_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3775_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
lean_object* v___x_3773_; 
if (v_isShared_3771_ == 0)
{
v___x_3773_ = v___x_3770_;
goto v_reusejp_3772_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v_a_3768_);
v___x_3773_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3772_;
}
v_reusejp_3772_:
{
return v___x_3773_;
}
}
}
}
else
{
lean_object* v_a_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3783_; 
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
lean_dec(v_name_3712_);
lean_dec(v_declName_3711_);
lean_dec(v_levelParams_3710_);
v_a_3776_ = lean_ctor_get(v___x_3724_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v___x_3724_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3778_ = v___x_3724_;
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_a_3776_);
lean_dec(v___x_3724_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3781_; 
if (v_isShared_3779_ == 0)
{
v___x_3781_ = v___x_3778_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v_a_3776_);
v___x_3781_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
return v___x_3781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0___boxed(lean_object* v_levelParams_3784_, lean_object* v_declName_3785_, lean_object* v_name_3786_, lean_object* v_xs_3787_, lean_object* v_body_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
lean_object* v_res_3794_; 
v_res_3794_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0(v_levelParams_3784_, v_declName_3785_, v_name_3786_, v_xs_3787_, v_body_3788_, v___y_3789_, v___y_3790_, v___y_3791_, v___y_3792_);
lean_dec_ref(v_xs_3787_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3(lean_object* v_o_3795_, lean_object* v_k_3796_, uint8_t v_v_3797_){
_start:
{
lean_object* v_map_3798_; uint8_t v_hasTrace_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_3813_; 
v_map_3798_ = lean_ctor_get(v_o_3795_, 0);
v_hasTrace_3799_ = lean_ctor_get_uint8(v_o_3795_, sizeof(void*)*1);
v_isSharedCheck_3813_ = !lean_is_exclusive(v_o_3795_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3801_ = v_o_3795_;
v_isShared_3802_ = v_isSharedCheck_3813_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_map_3798_);
lean_dec(v_o_3795_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_3813_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3803_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3803_, 0, v_v_3797_);
lean_inc(v_k_3796_);
v___x_3804_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_3796_, v___x_3803_, v_map_3798_);
if (v_hasTrace_3799_ == 0)
{
lean_object* v___x_3805_; uint8_t v___x_3806_; lean_object* v___x_3808_; 
v___x_3805_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__0___redArg___closed__1));
v___x_3806_ = l_Lean_Name_isPrefixOf(v___x_3805_, v_k_3796_);
lean_dec(v_k_3796_);
if (v_isShared_3802_ == 0)
{
lean_ctor_set(v___x_3801_, 0, v___x_3804_);
v___x_3808_ = v___x_3801_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v___x_3804_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
lean_ctor_set_uint8(v___x_3808_, sizeof(void*)*1, v___x_3806_);
return v___x_3808_;
}
}
else
{
lean_object* v___x_3811_; 
lean_dec(v_k_3796_);
if (v_isShared_3802_ == 0)
{
lean_ctor_set(v___x_3801_, 0, v___x_3804_);
v___x_3811_ = v___x_3801_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v___x_3804_);
lean_ctor_set_uint8(v_reuseFailAlloc_3812_, sizeof(void*)*1, v_hasTrace_3799_);
v___x_3811_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
return v___x_3811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3___boxed(lean_object* v_o_3814_, lean_object* v_k_3815_, lean_object* v_v_3816_){
_start:
{
uint8_t v_v_boxed_3817_; lean_object* v_res_3818_; 
v_v_boxed_3817_ = lean_unbox(v_v_3816_);
v_res_3818_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3(v_o_3814_, v_k_3815_, v_v_boxed_3817_);
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2(lean_object* v_opts_3819_, lean_object* v_opt_3820_, uint8_t v_val_3821_){
_start:
{
lean_object* v_name_3822_; lean_object* v___x_3823_; 
v_name_3822_ = lean_ctor_get(v_opt_3820_, 0);
lean_inc(v_name_3822_);
lean_dec_ref(v_opt_3820_);
v___x_3823_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2_spec__3(v_opts_3819_, v_name_3822_, v_val_3821_);
return v___x_3823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2___boxed(lean_object* v_opts_3824_, lean_object* v_opt_3825_, lean_object* v_val_3826_){
_start:
{
uint8_t v_val_boxed_3827_; lean_object* v_res_3828_; 
v_val_boxed_3827_ = lean_unbox(v_val_3826_);
v_res_3828_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2(v_opts_3824_, v_opt_3825_, v_val_boxed_3827_);
return v_res_3828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize(lean_object* v_declName_3829_, lean_object* v_info_3830_, lean_object* v_name_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_){
_start:
{
lean_object* v___x_3837_; lean_object* v_levelParams_3838_; lean_object* v_value_3839_; lean_object* v_fileName_3840_; lean_object* v_fileMap_3841_; lean_object* v_options_3842_; lean_object* v_currRecDepth_3843_; lean_object* v_ref_3844_; lean_object* v_currNamespace_3845_; lean_object* v_openDecls_3846_; lean_object* v_initHeartbeats_3847_; lean_object* v_maxHeartbeats_3848_; lean_object* v_quotContext_3849_; lean_object* v_currMacroScope_3850_; lean_object* v_cancelTk_x3f_3851_; uint8_t v_suppressElabErrors_3852_; lean_object* v_inheritedTraceOptions_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3908_; 
v___x_3837_ = lean_st_ref_get(v_a_3835_);
v_levelParams_3838_ = lean_ctor_get(v_info_3830_, 1);
lean_inc(v_levelParams_3838_);
v_value_3839_ = lean_ctor_get(v_info_3830_, 3);
lean_inc_ref(v_value_3839_);
lean_dec_ref(v_info_3830_);
v_fileName_3840_ = lean_ctor_get(v_a_3834_, 0);
v_fileMap_3841_ = lean_ctor_get(v_a_3834_, 1);
v_options_3842_ = lean_ctor_get(v_a_3834_, 2);
v_currRecDepth_3843_ = lean_ctor_get(v_a_3834_, 3);
v_ref_3844_ = lean_ctor_get(v_a_3834_, 5);
v_currNamespace_3845_ = lean_ctor_get(v_a_3834_, 6);
v_openDecls_3846_ = lean_ctor_get(v_a_3834_, 7);
v_initHeartbeats_3847_ = lean_ctor_get(v_a_3834_, 8);
v_maxHeartbeats_3848_ = lean_ctor_get(v_a_3834_, 9);
v_quotContext_3849_ = lean_ctor_get(v_a_3834_, 10);
v_currMacroScope_3850_ = lean_ctor_get(v_a_3834_, 11);
v_cancelTk_x3f_3851_ = lean_ctor_get(v_a_3834_, 12);
v_suppressElabErrors_3852_ = lean_ctor_get_uint8(v_a_3834_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3853_ = lean_ctor_get(v_a_3834_, 13);
v_isSharedCheck_3908_ = !lean_is_exclusive(v_a_3834_);
if (v_isSharedCheck_3908_ == 0)
{
lean_object* v_unused_3909_; 
v_unused_3909_ = lean_ctor_get(v_a_3834_, 4);
lean_dec(v_unused_3909_);
v___x_3855_ = v_a_3834_;
v_isShared_3856_ = v_isSharedCheck_3908_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_inheritedTraceOptions_3853_);
lean_inc(v_cancelTk_x3f_3851_);
lean_inc(v_currMacroScope_3850_);
lean_inc(v_quotContext_3849_);
lean_inc(v_maxHeartbeats_3848_);
lean_inc(v_initHeartbeats_3847_);
lean_inc(v_openDecls_3846_);
lean_inc(v_currNamespace_3845_);
lean_inc(v_ref_3844_);
lean_inc(v_currRecDepth_3843_);
lean_inc(v_options_3842_);
lean_inc(v_fileMap_3841_);
lean_inc(v_fileName_3840_);
lean_dec(v_a_3834_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3908_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v_env_3857_; lean_object* v___f_3858_; uint8_t v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; uint8_t v___x_3863_; lean_object* v_fileName_3865_; lean_object* v_fileMap_3866_; lean_object* v_currRecDepth_3867_; lean_object* v_ref_3868_; lean_object* v_currNamespace_3869_; lean_object* v_openDecls_3870_; lean_object* v_initHeartbeats_3871_; lean_object* v_maxHeartbeats_3872_; lean_object* v_quotContext_3873_; lean_object* v_currMacroScope_3874_; lean_object* v_cancelTk_x3f_3875_; uint8_t v_suppressElabErrors_3876_; lean_object* v_inheritedTraceOptions_3877_; lean_object* v___y_3878_; uint8_t v___y_3886_; uint8_t v___x_3907_; 
v_env_3857_ = lean_ctor_get(v___x_3837_, 0);
lean_inc_ref(v_env_3857_);
lean_dec(v___x_3837_);
v___f_3858_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3858_, 0, v_levelParams_3838_);
lean_closure_set(v___f_3858_, 1, v_declName_3829_);
lean_closure_set(v___f_3858_, 2, v_name_3831_);
v___x_3859_ = 0;
v___x_3860_ = l_Lean_Meta_tactic_hygienic;
v___x_3861_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__2(v_options_3842_, v___x_3860_, v___x_3859_);
v___x_3862_ = l_Lean_diagnostics;
v___x_3863_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__5(v___x_3861_, v___x_3862_);
v___x_3907_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_3857_);
lean_dec_ref(v_env_3857_);
if (v___x_3907_ == 0)
{
if (v___x_3863_ == 0)
{
v_fileName_3865_ = v_fileName_3840_;
v_fileMap_3866_ = v_fileMap_3841_;
v_currRecDepth_3867_ = v_currRecDepth_3843_;
v_ref_3868_ = v_ref_3844_;
v_currNamespace_3869_ = v_currNamespace_3845_;
v_openDecls_3870_ = v_openDecls_3846_;
v_initHeartbeats_3871_ = v_initHeartbeats_3847_;
v_maxHeartbeats_3872_ = v_maxHeartbeats_3848_;
v_quotContext_3873_ = v_quotContext_3849_;
v_currMacroScope_3874_ = v_currMacroScope_3850_;
v_cancelTk_x3f_3875_ = v_cancelTk_x3f_3851_;
v_suppressElabErrors_3876_ = v_suppressElabErrors_3852_;
v_inheritedTraceOptions_3877_ = v_inheritedTraceOptions_3853_;
v___y_3878_ = v_a_3835_;
goto v___jp_3864_;
}
else
{
v___y_3886_ = v___x_3907_;
goto v___jp_3885_;
}
}
else
{
v___y_3886_ = v___x_3863_;
goto v___jp_3885_;
}
v___jp_3864_:
{
lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3882_; 
v___x_3879_ = l_Lean_maxRecDepth;
v___x_3880_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go_spec__6_spec__9(v___x_3861_, v___x_3879_);
if (v_isShared_3856_ == 0)
{
lean_ctor_set(v___x_3855_, 13, v_inheritedTraceOptions_3877_);
lean_ctor_set(v___x_3855_, 12, v_cancelTk_x3f_3875_);
lean_ctor_set(v___x_3855_, 11, v_currMacroScope_3874_);
lean_ctor_set(v___x_3855_, 10, v_quotContext_3873_);
lean_ctor_set(v___x_3855_, 9, v_maxHeartbeats_3872_);
lean_ctor_set(v___x_3855_, 8, v_initHeartbeats_3871_);
lean_ctor_set(v___x_3855_, 7, v_openDecls_3870_);
lean_ctor_set(v___x_3855_, 6, v_currNamespace_3869_);
lean_ctor_set(v___x_3855_, 5, v_ref_3868_);
lean_ctor_set(v___x_3855_, 4, v___x_3880_);
lean_ctor_set(v___x_3855_, 3, v_currRecDepth_3867_);
lean_ctor_set(v___x_3855_, 2, v___x_3861_);
lean_ctor_set(v___x_3855_, 1, v_fileMap_3866_);
lean_ctor_set(v___x_3855_, 0, v_fileName_3865_);
v___x_3882_ = v___x_3855_;
goto v_reusejp_3881_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v_fileName_3865_);
lean_ctor_set(v_reuseFailAlloc_3884_, 1, v_fileMap_3866_);
lean_ctor_set(v_reuseFailAlloc_3884_, 2, v___x_3861_);
lean_ctor_set(v_reuseFailAlloc_3884_, 3, v_currRecDepth_3867_);
lean_ctor_set(v_reuseFailAlloc_3884_, 4, v___x_3880_);
lean_ctor_set(v_reuseFailAlloc_3884_, 5, v_ref_3868_);
lean_ctor_set(v_reuseFailAlloc_3884_, 6, v_currNamespace_3869_);
lean_ctor_set(v_reuseFailAlloc_3884_, 7, v_openDecls_3870_);
lean_ctor_set(v_reuseFailAlloc_3884_, 8, v_initHeartbeats_3871_);
lean_ctor_set(v_reuseFailAlloc_3884_, 9, v_maxHeartbeats_3872_);
lean_ctor_set(v_reuseFailAlloc_3884_, 10, v_quotContext_3873_);
lean_ctor_set(v_reuseFailAlloc_3884_, 11, v_currMacroScope_3874_);
lean_ctor_set(v_reuseFailAlloc_3884_, 12, v_cancelTk_x3f_3875_);
lean_ctor_set(v_reuseFailAlloc_3884_, 13, v_inheritedTraceOptions_3877_);
v___x_3882_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3881_;
}
v_reusejp_3881_:
{
lean_object* v___x_3883_; 
lean_ctor_set_uint8(v___x_3882_, sizeof(void*)*14, v___x_3863_);
lean_ctor_set_uint8(v___x_3882_, sizeof(void*)*14 + 1, v_suppressElabErrors_3876_);
v___x_3883_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__3___redArg(v_value_3839_, v___f_3858_, v___x_3859_, v_a_3832_, v_a_3833_, v___x_3882_, v___y_3878_);
return v___x_3883_;
}
}
v___jp_3885_:
{
if (v___y_3886_ == 0)
{
lean_object* v___x_3887_; lean_object* v_env_3888_; lean_object* v_nextMacroScope_3889_; lean_object* v_ngen_3890_; lean_object* v_auxDeclNGen_3891_; lean_object* v_traceState_3892_; lean_object* v_messages_3893_; lean_object* v_infoState_3894_; lean_object* v_snapshotTasks_3895_; lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3905_; 
v___x_3887_ = lean_st_ref_take(v_a_3835_);
v_env_3888_ = lean_ctor_get(v___x_3887_, 0);
v_nextMacroScope_3889_ = lean_ctor_get(v___x_3887_, 1);
v_ngen_3890_ = lean_ctor_get(v___x_3887_, 2);
v_auxDeclNGen_3891_ = lean_ctor_get(v___x_3887_, 3);
v_traceState_3892_ = lean_ctor_get(v___x_3887_, 4);
v_messages_3893_ = lean_ctor_get(v___x_3887_, 6);
v_infoState_3894_ = lean_ctor_get(v___x_3887_, 7);
v_snapshotTasks_3895_ = lean_ctor_get(v___x_3887_, 8);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3905_ == 0)
{
lean_object* v_unused_3906_; 
v_unused_3906_ = lean_ctor_get(v___x_3887_, 5);
lean_dec(v_unused_3906_);
v___x_3897_ = v___x_3887_;
v_isShared_3898_ = v_isSharedCheck_3905_;
goto v_resetjp_3896_;
}
else
{
lean_inc(v_snapshotTasks_3895_);
lean_inc(v_infoState_3894_);
lean_inc(v_messages_3893_);
lean_inc(v_traceState_3892_);
lean_inc(v_auxDeclNGen_3891_);
lean_inc(v_ngen_3890_);
lean_inc(v_nextMacroScope_3889_);
lean_inc(v_env_3888_);
lean_dec(v___x_3887_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3905_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3902_; 
v___x_3899_ = l_Lean_Kernel_enableDiag(v_env_3888_, v___x_3863_);
v___x_3900_ = lean_obj_once(&l_Lean_Elab_Structural_registerEqnsInfo___closed__2, &l_Lean_Elab_Structural_registerEqnsInfo___closed__2_once, _init_l_Lean_Elab_Structural_registerEqnsInfo___closed__2);
if (v_isShared_3898_ == 0)
{
lean_ctor_set(v___x_3897_, 5, v___x_3900_);
lean_ctor_set(v___x_3897_, 0, v___x_3899_);
v___x_3902_ = v___x_3897_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v___x_3899_);
lean_ctor_set(v_reuseFailAlloc_3904_, 1, v_nextMacroScope_3889_);
lean_ctor_set(v_reuseFailAlloc_3904_, 2, v_ngen_3890_);
lean_ctor_set(v_reuseFailAlloc_3904_, 3, v_auxDeclNGen_3891_);
lean_ctor_set(v_reuseFailAlloc_3904_, 4, v_traceState_3892_);
lean_ctor_set(v_reuseFailAlloc_3904_, 5, v___x_3900_);
lean_ctor_set(v_reuseFailAlloc_3904_, 6, v_messages_3893_);
lean_ctor_set(v_reuseFailAlloc_3904_, 7, v_infoState_3894_);
lean_ctor_set(v_reuseFailAlloc_3904_, 8, v_snapshotTasks_3895_);
v___x_3902_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
lean_object* v___x_3903_; 
v___x_3903_ = lean_st_ref_set(v_a_3835_, v___x_3902_);
v_fileName_3865_ = v_fileName_3840_;
v_fileMap_3866_ = v_fileMap_3841_;
v_currRecDepth_3867_ = v_currRecDepth_3843_;
v_ref_3868_ = v_ref_3844_;
v_currNamespace_3869_ = v_currNamespace_3845_;
v_openDecls_3870_ = v_openDecls_3846_;
v_initHeartbeats_3871_ = v_initHeartbeats_3847_;
v_maxHeartbeats_3872_ = v_maxHeartbeats_3848_;
v_quotContext_3873_ = v_quotContext_3849_;
v_currMacroScope_3874_ = v_currMacroScope_3850_;
v_cancelTk_x3f_3875_ = v_cancelTk_x3f_3851_;
v_suppressElabErrors_3876_ = v_suppressElabErrors_3852_;
v_inheritedTraceOptions_3877_ = v_inheritedTraceOptions_3853_;
v___y_3878_ = v_a_3835_;
goto v___jp_3864_;
}
}
}
else
{
v_fileName_3865_ = v_fileName_3840_;
v_fileMap_3866_ = v_fileMap_3841_;
v_currRecDepth_3867_ = v_currRecDepth_3843_;
v_ref_3868_ = v_ref_3844_;
v_currNamespace_3869_ = v_currNamespace_3845_;
v_openDecls_3870_ = v_openDecls_3846_;
v_initHeartbeats_3871_ = v_initHeartbeats_3847_;
v_maxHeartbeats_3872_ = v_maxHeartbeats_3848_;
v_quotContext_3873_ = v_quotContext_3849_;
v_currMacroScope_3874_ = v_currMacroScope_3850_;
v_cancelTk_x3f_3875_ = v_cancelTk_x3f_3851_;
v_suppressElabErrors_3876_ = v_suppressElabErrors_3852_;
v_inheritedTraceOptions_3877_ = v_inheritedTraceOptions_3853_;
v___y_3878_ = v_a_3835_;
goto v___jp_3864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___boxed(lean_object* v_declName_3910_, lean_object* v_info_3911_, lean_object* v_name_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize(v_declName_3910_, v_info_3911_, v_name_3912_, v_a_3913_, v_a_3914_, v_a_3915_, v_a_3916_);
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1(lean_object* v_00_u03b1_3919_, lean_object* v_x_3920_, uint8_t v_isExporting_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_){
_start:
{
lean_object* v___x_3927_; 
v___x_3927_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___redArg(v_x_3920_, v_isExporting_3921_, v___y_3922_, v___y_3923_, v___y_3924_, v___y_3925_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1___boxed(lean_object* v_00_u03b1_3928_, lean_object* v_x_3929_, lean_object* v_isExporting_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_){
_start:
{
uint8_t v_isExporting_boxed_3936_; lean_object* v_res_3937_; 
v_isExporting_boxed_3936_ = lean_unbox(v_isExporting_3930_);
v_res_3937_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1_spec__1(v_00_u03b1_3928_, v_x_3929_, v_isExporting_boxed_3936_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
return v_res_3937_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1(lean_object* v_00_u03b1_3938_, lean_object* v_x_3939_, uint8_t v_when_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_){
_start:
{
lean_object* v___x_3946_; 
v___x_3946_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___redArg(v_x_3939_, v_when_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
return v___x_3946_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1___boxed(lean_object* v_00_u03b1_3947_, lean_object* v_x_3948_, lean_object* v_when_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_){
_start:
{
uint8_t v_when_boxed_3955_; lean_object* v_res_3956_; 
v_when_boxed_3955_ = lean_unbox(v_when_3949_);
v_res_3956_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize_spec__1(v_00_u03b1_3947_, v_x_3948_, v_when_boxed_3955_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq(lean_object* v_declName_3957_, lean_object* v_info_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_){
_start:
{
lean_object* v___x_3964_; lean_object* v_env_3965_; lean_object* v_declName_3966_; lean_object* v_declNames_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; 
v___x_3964_ = lean_st_ref_get(v_a_3962_);
v_env_3965_ = lean_ctor_get(v___x_3964_, 0);
lean_inc_ref(v_env_3965_);
lean_dec(v___x_3964_);
v_declName_3966_ = lean_ctor_get(v_info_3958_, 0);
v_declNames_3967_ = lean_ctor_get(v_info_3958_, 5);
v___x_3968_ = lean_box(0);
v___x_3969_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc(v_declName_3966_);
v___x_3970_ = l_Lean_Meta_mkEqLikeNameFor(v_env_3965_, v_declName_3966_, v___x_3969_);
v___x_3971_ = lean_unsigned_to_nat(0u);
v___x_3972_ = lean_array_get(v___x_3968_, v_declNames_3967_, v___x_3971_);
lean_inc(v___x_3970_);
v___x_3973_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq_doRealize___boxed), 8, 3);
lean_closure_set(v___x_3973_, 0, v_declName_3957_);
lean_closure_set(v___x_3973_, 1, v_info_3958_);
lean_closure_set(v___x_3973_, 2, v___x_3970_);
lean_inc(v___x_3970_);
v___x_3974_ = l_Lean_Meta_realizeConst(v___x_3972_, v___x_3970_, v___x_3973_, v_a_3959_, v_a_3960_, v_a_3961_, v_a_3962_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_3981_; 
v_isSharedCheck_3981_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3981_ == 0)
{
lean_object* v_unused_3982_; 
v_unused_3982_ = lean_ctor_get(v___x_3974_, 0);
lean_dec(v_unused_3982_);
v___x_3976_ = v___x_3974_;
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
else
{
lean_dec(v___x_3974_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
lean_object* v___x_3979_; 
if (v_isShared_3977_ == 0)
{
lean_ctor_set(v___x_3976_, 0, v___x_3970_);
v___x_3979_ = v___x_3976_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v___x_3970_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
return v___x_3979_;
}
}
}
else
{
lean_object* v_a_3983_; lean_object* v___x_3985_; uint8_t v_isShared_3986_; uint8_t v_isSharedCheck_3990_; 
lean_dec(v___x_3970_);
v_a_3983_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_3990_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3990_ == 0)
{
v___x_3985_ = v___x_3974_;
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
else
{
lean_inc(v_a_3983_);
lean_dec(v___x_3974_);
v___x_3985_ = lean_box(0);
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
v_resetjp_3984_:
{
lean_object* v___x_3988_; 
if (v_isShared_3986_ == 0)
{
v___x_3988_ = v___x_3985_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_3989_; 
v_reuseFailAlloc_3989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3989_, 0, v_a_3983_);
v___x_3988_ = v_reuseFailAlloc_3989_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
return v___x_3988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq___boxed(lean_object* v_declName_3991_, lean_object* v_info_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq(v_declName_3991_, v_info_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f(lean_object* v_declName_3999_, lean_object* v_a_4000_, lean_object* v_a_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_){
_start:
{
lean_object* v___x_4005_; lean_object* v_env_4006_; lean_object* v___x_4007_; lean_object* v_toEnvExtension_4008_; lean_object* v_asyncMode_4009_; lean_object* v___x_4010_; uint8_t v___x_4011_; lean_object* v___x_4012_; 
v___x_4005_ = lean_st_ref_get(v_a_4003_);
v_env_4006_ = lean_ctor_get(v___x_4005_, 0);
lean_inc_ref(v_env_4006_);
lean_dec(v___x_4005_);
v___x_4007_ = l_Lean_Elab_Structural_eqnInfoExt;
v_toEnvExtension_4008_ = lean_ctor_get(v___x_4007_, 0);
lean_inc_ref(v_toEnvExtension_4008_);
v_asyncMode_4009_ = lean_ctor_get(v_toEnvExtension_4008_, 2);
lean_inc(v_asyncMode_4009_);
lean_dec_ref(v_toEnvExtension_4008_);
v___x_4010_ = l_Lean_Elab_Structural_instInhabitedEqnInfo_default;
v___x_4011_ = 0;
lean_inc(v_declName_3999_);
v___x_4012_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_4010_, v___x_4007_, v_env_4006_, v_declName_3999_, v_asyncMode_4009_, v___x_4011_);
lean_dec(v_asyncMode_4009_);
if (lean_obj_tag(v___x_4012_) == 1)
{
lean_object* v_val_4013_; lean_object* v___x_4015_; uint8_t v_isShared_4016_; uint8_t v_isSharedCheck_4037_; 
v_val_4013_ = lean_ctor_get(v___x_4012_, 0);
v_isSharedCheck_4037_ = !lean_is_exclusive(v___x_4012_);
if (v_isSharedCheck_4037_ == 0)
{
v___x_4015_ = v___x_4012_;
v_isShared_4016_ = v_isSharedCheck_4037_;
goto v_resetjp_4014_;
}
else
{
lean_inc(v_val_4013_);
lean_dec(v___x_4012_);
v___x_4015_ = lean_box(0);
v_isShared_4016_ = v_isSharedCheck_4037_;
goto v_resetjp_4014_;
}
v_resetjp_4014_:
{
lean_object* v___x_4017_; 
v___x_4017_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkUnfoldEq(v_declName_3999_, v_val_4013_, v_a_4000_, v_a_4001_, v_a_4002_, v_a_4003_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4028_; 
v_a_4018_ = lean_ctor_get(v___x_4017_, 0);
v_isSharedCheck_4028_ = !lean_is_exclusive(v___x_4017_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_4020_ = v___x_4017_;
v_isShared_4021_ = v_isSharedCheck_4028_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_4017_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4028_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4016_ == 0)
{
lean_ctor_set(v___x_4015_, 0, v_a_4018_);
v___x_4023_ = v___x_4015_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
lean_object* v___x_4025_; 
if (v_isShared_4021_ == 0)
{
lean_ctor_set(v___x_4020_, 0, v___x_4023_);
v___x_4025_ = v___x_4020_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v___x_4023_);
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
lean_object* v_a_4029_; lean_object* v___x_4031_; uint8_t v_isShared_4032_; uint8_t v_isSharedCheck_4036_; 
lean_del_object(v___x_4015_);
v_a_4029_ = lean_ctor_get(v___x_4017_, 0);
v_isSharedCheck_4036_ = !lean_is_exclusive(v___x_4017_);
if (v_isSharedCheck_4036_ == 0)
{
v___x_4031_ = v___x_4017_;
v_isShared_4032_ = v_isSharedCheck_4036_;
goto v_resetjp_4030_;
}
else
{
lean_inc(v_a_4029_);
lean_dec(v___x_4017_);
v___x_4031_ = lean_box(0);
v_isShared_4032_ = v_isSharedCheck_4036_;
goto v_resetjp_4030_;
}
v_resetjp_4030_:
{
lean_object* v___x_4034_; 
if (v_isShared_4032_ == 0)
{
v___x_4034_ = v___x_4031_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v_a_4029_);
v___x_4034_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
return v___x_4034_;
}
}
}
}
}
else
{
lean_object* v___x_4038_; lean_object* v___x_4039_; 
lean_dec(v___x_4012_);
lean_dec(v_a_4003_);
lean_dec_ref(v_a_4002_);
lean_dec(v_a_4001_);
lean_dec_ref(v_a_4000_);
lean_dec(v_declName_3999_);
v___x_4038_ = lean_box(0);
v___x_4039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4039_, 0, v___x_4038_);
return v___x_4039_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f___boxed(lean_object* v_declName_4040_, lean_object* v_a_4041_, lean_object* v_a_4042_, lean_object* v_a_4043_, lean_object* v_a_4044_, lean_object* v_a_4045_){
_start:
{
lean_object* v_res_4046_; 
v_res_4046_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getUnfoldFor_x3f(v_declName_4040_, v_a_4041_, v_a_4042_, v_a_4043_, v_a_4044_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg(lean_object* v_declName_4047_, lean_object* v_a_4048_){
_start:
{
lean_object* v___x_4050_; lean_object* v_env_4051_; lean_object* v___x_4052_; lean_object* v_toEnvExtension_4053_; lean_object* v_asyncMode_4054_; lean_object* v___x_4055_; uint8_t v___x_4056_; lean_object* v___x_4057_; 
v___x_4050_ = lean_st_ref_get(v_a_4048_);
v_env_4051_ = lean_ctor_get(v___x_4050_, 0);
lean_inc_ref(v_env_4051_);
lean_dec(v___x_4050_);
v___x_4052_ = l_Lean_Elab_Structural_eqnInfoExt;
v_toEnvExtension_4053_ = lean_ctor_get(v___x_4052_, 0);
lean_inc_ref(v_toEnvExtension_4053_);
v_asyncMode_4054_ = lean_ctor_get(v_toEnvExtension_4053_, 2);
lean_inc(v_asyncMode_4054_);
lean_dec_ref(v_toEnvExtension_4053_);
v___x_4055_ = l_Lean_Elab_Structural_instInhabitedEqnInfo_default;
v___x_4056_ = 0;
v___x_4057_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_4055_, v___x_4052_, v_env_4051_, v_declName_4047_, v_asyncMode_4054_, v___x_4056_);
lean_dec(v_asyncMode_4054_);
if (lean_obj_tag(v___x_4057_) == 1)
{
lean_object* v_val_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4067_; 
v_val_4058_ = lean_ctor_get(v___x_4057_, 0);
v_isSharedCheck_4067_ = !lean_is_exclusive(v___x_4057_);
if (v_isSharedCheck_4067_ == 0)
{
v___x_4060_ = v___x_4057_;
v_isShared_4061_ = v_isSharedCheck_4067_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_val_4058_);
lean_dec(v___x_4057_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4067_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v_recArgPos_4062_; lean_object* v___x_4064_; 
v_recArgPos_4062_ = lean_ctor_get(v_val_4058_, 4);
lean_inc(v_recArgPos_4062_);
lean_dec(v_val_4058_);
if (v_isShared_4061_ == 0)
{
lean_ctor_set(v___x_4060_, 0, v_recArgPos_4062_);
v___x_4064_ = v___x_4060_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v_recArgPos_4062_);
v___x_4064_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
lean_object* v___x_4065_; 
v___x_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
return v___x_4065_;
}
}
}
else
{
lean_object* v___x_4068_; lean_object* v___x_4069_; 
lean_dec(v___x_4057_);
v___x_4068_ = lean_box(0);
v___x_4069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4069_, 0, v___x_4068_);
return v___x_4069_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg___boxed(lean_object* v_declName_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg(v_declName_4070_, v_a_4071_);
lean_dec(v_a_4071_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* lean_get_structural_rec_arg_pos(lean_object* v_declName_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_){
_start:
{
lean_object* v___x_4078_; 
lean_dec_ref(v_a_4075_);
v___x_4078_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___redArg(v_declName_4074_, v_a_4076_);
lean_dec(v_a_4076_);
return v___x_4078_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_getStructuralRecArgPosImp_x3f___boxed(lean_object* v_declName_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_){
_start:
{
lean_object* v_res_4083_; 
v_res_4083_ = lean_get_structural_rec_arg_pos(v_declName_4079_, v_a_4080_, v_a_4081_);
return v_res_4083_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; 
v___x_4141_ = lean_unsigned_to_nat(2295916746u);
v___x_4142_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_4143_ = l_Lean_Name_num___override(v___x_4142_, v___x_4141_);
return v___x_4143_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; 
v___x_4145_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_4146_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_4147_ = l_Lean_Name_str___override(v___x_4146_, v___x_4145_);
return v___x_4147_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; 
v___x_4149_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_4150_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_4151_ = l_Lean_Name_str___override(v___x_4150_, v___x_4149_);
return v___x_4151_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4152_ = lean_unsigned_to_nat(2u);
v___x_4153_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_4154_ = l_Lean_Name_num___override(v___x_4153_, v___x_4152_);
return v___x_4154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4156_; lean_object* v___x_4157_; 
v___x_4156_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_));
v___x_4157_ = l_Lean_Meta_registerGetUnfoldEqnFn(v___x_4156_);
if (lean_obj_tag(v___x_4157_) == 0)
{
lean_object* v___x_4158_; uint8_t v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; 
lean_dec_ref(v___x_4157_);
v___x_4158_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_mkProof_go___closed__4));
v___x_4159_ = 0;
v___x_4160_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_);
v___x_4161_ = l_Lean_registerTraceClass(v___x_4158_, v___x_4159_, v___x_4160_);
return v___x_4161_;
}
else
{
return v___x_4157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2____boxed(lean_object* v_a_4162_){
_start:
{
lean_object* v_res_4163_; 
v_res_4163_ = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_();
return v_res_4163_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_EqnsUtils(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_EqnsUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Structural_instInhabitedEqnInfo_default = _init_l_Lean_Elab_Structural_instInhabitedEqnInfo_default();
lean_mark_persistent(l_Lean_Elab_Structural_instInhabitedEqnInfo_default);
l_Lean_Elab_Structural_instInhabitedEqnInfo = _init_l_Lean_Elab_Structural_instInhabitedEqnInfo();
lean_mark_persistent(l_Lean_Elab_Structural_instInhabitedEqnInfo);
res = l_Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_1270222229____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_Structural_eqnInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_Structural_eqnInfoExt);
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_Structural_Eqns_0__Lean_Elab_Structural_initFn_00___x40_Lean_Elab_PreDefinition_Structural_Eqns_2295916746____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_EqnsUtils(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_EqnsUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_Eqns(builtin);
}
#ifdef __cplusplus
}
#endif
