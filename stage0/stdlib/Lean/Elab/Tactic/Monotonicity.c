// Lean compiler output
// Module: Lean.Elab.Tactic.Monotonicity
// Imports: public import Lean.Meta.Tactic.Split public import Lean.Elab.RecAppSyntax public import Lean.Elab.Tactic.Basic public import Init.Internal.Order
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
uint8_t l_Lean_Expr_bindingInfo_x21(lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_MVarId_applyConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Meta_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_Split_splitMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_Expr_isBVar(lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_isProj(lean_object*);
lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
lean_object* l_Lean_Meta_whnfUntil(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_projIdx_x21(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMData(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* l_Lean_MVarId_intro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_andList(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__0(lean_object*);
static const lean_string_object l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__0 = (const lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__0_value;
static const lean_string_object l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateLambda!Impl"};
static const lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__1 = (const lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__1_value;
static const lean_string_object l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "lambda expected"};
static const lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__2 = (const lean_object*)&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__2_value;
static lean_once_cell_t l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__3;
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_headBetaUnderLambda(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn___lam__1_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Monotonicity_initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Monotonicity_initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Meta_Monotonicity_initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Monotonicity_initFn___lam__1_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Monotonicity_initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Meta_Monotonicity_initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Monotonicity_initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Monotonicity"};
static const lean_object* l_Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "monotoneExt"};
static const lean_object* l_Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(25, 197, 232, 151, 31, 114, 201, 85)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(58, 32, 30, 204, 89, 199, 107, 6)}};
static const lean_object* l_Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Meta_Monotonicity_initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_monotoneExt;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__2;
static lean_once_cell_t l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "`[partial_fixpoint_monotone]` attribute only applies to lemmas proving "};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "monotone"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed, .m_arity = 7, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(26, 75, 136, 217, 100, 156, 144, 1)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed, .m_arity = 10, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(59, 196, 222, 254, 197, 21, 130, 124)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__11_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(198, 140, 192, 110, 71, 240, 154, 224)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__11_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__11_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__12_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__11_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(66, 212, 4, 86, 247, 163, 94, 38)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__12_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__12_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__13_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__12_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(153, 5, 202, 81, 145, 168, 87, 203)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__13_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__13_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__14_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__14_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__14_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__15_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__13_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__14_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(192, 98, 16, 138, 84, 251, 15, 66)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__15_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__15_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__16_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__16_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__16_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__17_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__15_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__16_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 172, 22, 91, 113, 32, 182, 37)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__17_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__17_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__18_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__17_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(196, 216, 82, 243, 114, 148, 94, 90)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__18_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__18_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__19_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__18_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(222, 87, 240, 225, 46, 211, 118, 82)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__19_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__19_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__20_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__19_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(3, 80, 35, 149, 15, 44, 32, 194)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__20_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__20_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__21_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__20_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(196, 138, 207, 136, 221, 178, 18, 223)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__21_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__21_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__22_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__21_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1250514167) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(15, 167, 57, 65, 131, 192, 222, 112)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__22_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__22_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__23_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__23_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__23_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__24_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__22_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__23_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(196, 57, 247, 147, 241, 42, 251, 172)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__24_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__24_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__25_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__25_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__25_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__26_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__24_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__25_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(208, 123, 4, 22, 209, 130, 42, 172)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__26_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__26_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__27_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__26_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(65, 207, 190, 114, 40, 155, 255, 115)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__27_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__27_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__28_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "partial_fixpoint_monotone"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__28_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__28_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__29_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__28_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 165, 223, 223, 117, 142, 190, 151)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__29_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__29_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__30_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__29_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__30_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__30_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__31_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "monotonicity theorem"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__31_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__31_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__32_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__27_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__29_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__31_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__32_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__32_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__33_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__32_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__30_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__33_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__33_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___regBuiltin___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_docString__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 302, .m_capacity = 302, .m_length = 301, .m_data = "Registers a monotonicity theorem for `partial_fixpoint`.\n\nMonotonicity theorems should have `Lean.Order.monotone ...` as a conclusion. They are used in the\n`monotonicity` tactic (scoped in the `Lean.Order` namespace) to automatically prove monotonicity\nfor functions defined using `partial_fixpoint`.\n"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___regBuiltin___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_docString__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___regBuiltin___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_docString__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___regBuiltin___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_docString__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___regBuiltin___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_docString__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_findMonoThms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_findMonoThms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0___closed__0_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Failed to prove monotonicity of:"};
static const lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__1;
static const lean_string_object l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__3;
static const lean_string_object l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Tried to apply "};
static const lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__5;
static const lean_string_object l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", but failed."};
static const lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__6 = (const lean_object*)&l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__7;
static const lean_string_object l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__8 = (const lean_object*)&l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_defaultFailK(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_defaultFailK___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___lam__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Could not apply "};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__3;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoCall___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__0;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "monotone_id"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__1 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(4, 180, 187, 101, 53, 255, 91, 19)}};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__2 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__2_value;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Internal error in `solveMonoCall "};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__3 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoCall___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__4;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "`: unexpected type "};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__5 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoCall___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__6;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "`: whnfUntil failed\?"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__7 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoCall___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__8;
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__9_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__9_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(61, 86, 242, 24, 111, 107, 219, 193)}};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__9 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__9_value;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "instPartialOrderPProd"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__10 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__10_value),LEAN_SCALAR_PTR_LITERAL(60, 246, 155, 2, 86, 129, 181, 75)}};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__11 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__11_value;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PProd"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__12 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__12_value;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "monotone_snd"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__13 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__14_value_aux_1),((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__12_value),LEAN_SCALAR_PTR_LITERAL(141, 95, 229, 62, 87, 161, 97, 26)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__14_value_aux_2),((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__13_value),LEAN_SCALAR_PTR_LITERAL(145, 36, 129, 200, 116, 223, 208, 172)}};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__14 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__14_value;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "monotone_fst"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__15 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__16_value_aux_1),((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__12_value),LEAN_SCALAR_PTR_LITERAL(141, 95, 229, 62, 87, 161, 97, 26)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__16_value_aux_2),((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__15_value),LEAN_SCALAR_PTR_LITERAL(23, 221, 93, 233, 17, 53, 114, 138)}};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__16 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__16_value;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "`: unexpected instance "};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__17 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__17_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoCall___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__18;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "instOrderPi"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__19 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__19_value;
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__20_value_aux_1),((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__19_value),LEAN_SCALAR_PTR_LITERAL(30, 250, 76, 182, 73, 26, 134, 241)}};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__20 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__20_value;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "monotone_apply"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__21 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__21_value;
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__22_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__22_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoCall___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__22_value_aux_1),((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__21_value),LEAN_SCALAR_PTR_LITERAL(244, 112, 58, 82, 85, 83, 41, 80)}};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___closed__22 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoCall___closed__22_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoCall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Expr.updateLambdaE!"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__7(uint8_t, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "monotonicity"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(180, 190, 140, 210, 253, 78, 130, 238)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(147, 139, 141, 172, 97, 219, 238, 39)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Succeeded with "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__8(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Unexpected goal:"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__1;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__2;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Failed to assign "};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__3 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__4;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__5 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__6;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " to goal"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__7 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__8;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Found recursive call "};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__9 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__10;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "f"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__11 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__11_value;
static const lean_ctor_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__11_value),LEAN_SCALAR_PTR_LITERAL(29, 68, 183, 24, 128, 148, 178, 23)}};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__12 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__12_value;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Found monoThms: "};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__13 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__13_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__14;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Unexpected number of goals after `"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__15 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__15_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__16;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "monotone_of_monotone_apply"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__17 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__17_value;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "monotone_const"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__18 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__18_value;
static const lean_string_object l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "monotonicity at\n"};
static const lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__19 = (const lean_object*)&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__19_value;
static lean_once_cell_t l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__20;
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Monotonicity_solveMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Monotonicity_solveMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Monotonicity_defaultFailK___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___lam__0___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___closed__0_value)} };
static const lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__0_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(76, 245, 3, 217, 93, 200, 5, 81)}};
static const lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__0 = (const lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__0_value;
static const lean_string_object l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "evalMonotonicity"};
static const lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__1 = (const lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(25, 197, 232, 151, 31, 114, 201, 85)}};
static const lean_ctor_object l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(189, 224, 16, 213, 21, 188, 162, 150)}};
static const lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__2 = (const lean_object*)&l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1();
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__14_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(10, 201, 9, 248, 23, 22, 82, 31)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__16_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 124, 55, 0, 61, 150, 105, 219)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(174, 86, 80, 96, 10, 59, 39, 88)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(124, 231, 15, 142, 19, 15, 154, 34)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(185, 228, 167, 115, 3, 238, 9, 128)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Monotonicity_initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(38, 144, 174, 51, 65, 124, 69, 78)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value),((lean_object*)(((size_t)(67824763) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(238, 77, 166, 112, 74, 143, 150, 206)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__23_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(121, 237, 179, 170, 14, 176, 42, 100)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__25_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(49, 235, 234, 51, 254, 116, 149, 232)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(76, 179, 59, 228, 129, 35, 160, 252)}};
static const lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__0(lean_object* v_msg_1_){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = l_Lean_instInhabitedExpr;
v___x_3_ = lean_panic_fn(v___x_2_, v_msg_1_);
return v___x_3_;
}
}
static lean_object* _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_7_ = ((lean_object*)(l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__2));
v___x_8_ = lean_unsigned_to_nat(19u);
v___x_9_ = lean_unsigned_to_nat(1907u);
v___x_10_ = ((lean_object*)(l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__1));
v___x_11_ = ((lean_object*)(l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__0));
v___x_12_ = l_mkPanicMessageWithDecl(v___x_11_, v___x_10_, v___x_9_, v___x_8_, v___x_7_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1(lean_object* v_b_13_){
_start:
{
lean_object* v___x_14_; uint8_t v___x_15_; uint8_t v___x_16_; 
v___x_14_ = l_Lean_Expr_bindingBody_x21(v_b_13_);
v___x_15_ = 0;
v___x_16_ = l_Lean_Expr_isHeadBetaTarget(v___x_14_, v___x_15_);
if (v___x_16_ == 0)
{
lean_dec_ref(v___x_14_);
return v_b_13_;
}
else
{
if (lean_obj_tag(v_b_13_) == 6)
{
lean_object* v_binderName_17_; lean_object* v_binderType_18_; lean_object* v_body_19_; uint8_t v_binderInfo_20_; uint8_t v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; uint8_t v___y_25_; size_t v___x_32_; size_t v___x_33_; uint8_t v___x_34_; 
v_binderName_17_ = lean_ctor_get(v_b_13_, 0);
v_binderType_18_ = lean_ctor_get(v_b_13_, 1);
v_body_19_ = lean_ctor_get(v_b_13_, 2);
v_binderInfo_20_ = lean_ctor_get_uint8(v_b_13_, sizeof(void*)*3 + 8);
v___x_21_ = l_Lean_Expr_bindingInfo_x21(v_b_13_);
v___x_22_ = l_Lean_Expr_bindingDomain_x21(v_b_13_);
v___x_23_ = l_Lean_Expr_headBeta(v___x_14_);
v___x_32_ = lean_ptr_addr(v_binderType_18_);
v___x_33_ = lean_ptr_addr(v___x_22_);
v___x_34_ = lean_usize_dec_eq(v___x_32_, v___x_33_);
if (v___x_34_ == 0)
{
v___y_25_ = v___x_34_;
goto v___jp_24_;
}
else
{
size_t v___x_35_; size_t v___x_36_; uint8_t v___x_37_; 
v___x_35_ = lean_ptr_addr(v_body_19_);
v___x_36_ = lean_ptr_addr(v___x_23_);
v___x_37_ = lean_usize_dec_eq(v___x_35_, v___x_36_);
v___y_25_ = v___x_37_;
goto v___jp_24_;
}
v___jp_24_:
{
if (v___y_25_ == 0)
{
lean_object* v___x_26_; 
lean_inc(v_binderName_17_);
lean_dec_ref(v_b_13_);
v___x_26_ = l_Lean_Expr_lam___override(v_binderName_17_, v___x_22_, v___x_23_, v___x_21_);
v_b_13_ = v___x_26_;
goto _start;
}
else
{
uint8_t v___x_28_; 
v___x_28_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_20_, v___x_21_);
if (v___x_28_ == 0)
{
lean_object* v___x_29_; 
lean_inc(v_binderName_17_);
lean_dec_ref(v_b_13_);
v___x_29_ = l_Lean_Expr_lam___override(v_binderName_17_, v___x_22_, v___x_23_, v___x_21_);
v_b_13_ = v___x_29_;
goto _start;
}
else
{
lean_dec_ref(v___x_23_);
lean_dec_ref(v___x_22_);
goto _start;
}
}
}
}
else
{
lean_object* v___x_38_; lean_object* v___x_39_; 
lean_dec_ref(v___x_14_);
lean_dec_ref(v_b_13_);
v___x_38_ = lean_obj_once(&l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__3, &l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__3_once, _init_l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__3);
v___x_39_ = l_panic___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__0(v___x_38_);
v_b_13_ = v___x_39_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_headBetaUnderLambda(lean_object* v_f_41_){
_start:
{
lean_object* v_f_42_; uint8_t v___x_43_; 
v_f_42_ = l_Lean_Expr_headBeta(v_f_41_);
v___x_43_ = l_Lean_Expr_isLambda(v_f_42_);
if (v___x_43_ == 0)
{
return v_f_42_;
}
else
{
lean_object* v___x_44_; 
v___x_44_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1(v_f_42_);
return v___x_44_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(uint8_t v_x_45_, lean_object* v___y_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_47_, 0, v___y_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2____boxed(lean_object* v_x_48_, lean_object* v___y_49_){
_start:
{
uint8_t v_x_1555__boxed_50_; lean_object* v_res_51_; 
v_x_1555__boxed_50_ = lean_unbox(v_x_48_);
v_res_51_ = l_Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(v_x_1555__boxed_50_, v___y_49_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_keys_52_, lean_object* v_vals_53_, lean_object* v_i_54_, lean_object* v_k_55_){
_start:
{
lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_56_ = lean_array_get_size(v_keys_52_);
v___x_57_ = lean_nat_dec_lt(v_i_54_, v___x_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; 
lean_dec(v_i_54_);
v___x_58_ = lean_box(0);
return v___x_58_;
}
else
{
lean_object* v_k_x27_59_; uint8_t v___x_60_; 
v_k_x27_59_ = lean_array_fget_borrowed(v_keys_52_, v_i_54_);
v___x_60_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_k_55_, v_k_x27_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_add(v_i_54_, v___x_61_);
lean_dec(v_i_54_);
v_i_54_ = v___x_62_;
goto _start;
}
else
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_array_fget_borrowed(v_vals_53_, v_i_54_);
lean_dec(v_i_54_);
lean_inc(v___x_64_);
v___x_65_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_keys_66_, lean_object* v_vals_67_, lean_object* v_i_68_, lean_object* v_k_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(v_keys_66_, v_vals_67_, v_i_68_, v_k_69_);
lean_dec(v_k_69_);
lean_dec_ref(v_vals_67_);
lean_dec_ref(v_keys_66_);
return v_res_70_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_71_; size_t v___x_72_; size_t v___x_73_; 
v___x_71_ = ((size_t)5ULL);
v___x_72_ = ((size_t)1ULL);
v___x_73_ = lean_usize_shift_left(v___x_72_, v___x_71_);
return v___x_73_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_74_; size_t v___x_75_; size_t v___x_76_; 
v___x_74_ = ((size_t)1ULL);
v___x_75_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__0);
v___x_76_ = lean_usize_sub(v___x_75_, v___x_74_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_x_77_, size_t v_x_78_, lean_object* v_x_79_){
_start:
{
if (lean_obj_tag(v_x_77_) == 0)
{
lean_object* v_es_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_101_; 
v_es_80_ = lean_ctor_get(v_x_77_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v_x_77_);
if (v_isSharedCheck_101_ == 0)
{
v___x_82_ = v_x_77_;
v_isShared_83_ = v_isSharedCheck_101_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_es_80_);
lean_dec(v_x_77_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_101_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_84_; size_t v___x_85_; size_t v___x_86_; size_t v___x_87_; lean_object* v_j_88_; lean_object* v___x_89_; 
v___x_84_ = lean_box(2);
v___x_85_ = ((size_t)5ULL);
v___x_86_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1);
v___x_87_ = lean_usize_land(v_x_78_, v___x_86_);
v_j_88_ = lean_usize_to_nat(v___x_87_);
v___x_89_ = lean_array_get(v___x_84_, v_es_80_, v_j_88_);
lean_dec(v_j_88_);
lean_dec_ref(v_es_80_);
switch(lean_obj_tag(v___x_89_))
{
case 0:
{
lean_object* v_key_90_; lean_object* v_val_91_; uint8_t v___x_92_; 
v_key_90_ = lean_ctor_get(v___x_89_, 0);
lean_inc(v_key_90_);
v_val_91_ = lean_ctor_get(v___x_89_, 1);
lean_inc(v_val_91_);
lean_dec_ref(v___x_89_);
v___x_92_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_79_, v_key_90_);
lean_dec(v_key_90_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; 
lean_dec(v_val_91_);
lean_del_object(v___x_82_);
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v___x_95_; 
if (v_isShared_83_ == 0)
{
lean_ctor_set_tag(v___x_82_, 1);
lean_ctor_set(v___x_82_, 0, v_val_91_);
v___x_95_ = v___x_82_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_val_91_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
return v___x_95_;
}
}
}
case 1:
{
lean_object* v_node_97_; size_t v___x_98_; 
lean_del_object(v___x_82_);
v_node_97_ = lean_ctor_get(v___x_89_, 0);
lean_inc(v_node_97_);
lean_dec_ref(v___x_89_);
v___x_98_ = lean_usize_shift_right(v_x_78_, v___x_85_);
v_x_77_ = v_node_97_;
v_x_78_ = v___x_98_;
goto _start;
}
default: 
{
lean_object* v___x_100_; 
lean_del_object(v___x_82_);
v___x_100_ = lean_box(0);
return v___x_100_;
}
}
}
}
else
{
lean_object* v_ks_102_; lean_object* v_vs_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v_ks_102_ = lean_ctor_get(v_x_77_, 0);
lean_inc_ref(v_ks_102_);
v_vs_103_ = lean_ctor_get(v_x_77_, 1);
lean_inc_ref(v_vs_103_);
lean_dec_ref(v_x_77_);
v___x_104_ = lean_unsigned_to_nat(0u);
v___x_105_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(v_ks_102_, v_vs_103_, v___x_104_, v_x_79_);
lean_dec_ref(v_vs_103_);
lean_dec_ref(v_ks_102_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_106_, lean_object* v_x_107_, lean_object* v_x_108_){
_start:
{
size_t v_x_1594__boxed_109_; lean_object* v_res_110_; 
v_x_1594__boxed_109_ = lean_unbox_usize(v_x_107_);
lean_dec(v_x_107_);
v_res_110_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_106_, v_x_1594__boxed_109_, v_x_108_);
lean_dec(v_x_108_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_111_, lean_object* v_x_112_){
_start:
{
uint64_t v___x_113_; size_t v___x_114_; lean_object* v___x_115_; 
v___x_113_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_112_);
v___x_114_ = lean_uint64_to_usize(v___x_113_);
v___x_115_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_111_, v___x_114_, v_x_112_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_116_, lean_object* v_x_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_116_, v_x_117_);
lean_dec(v_x_117_);
return v_res_118_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l_Lean_Meta_DiscrTree_instInhabited(lean_box(0));
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3(lean_object* v_msg_120_){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3___closed__0);
v___x_122_ = lean_panic_fn(v___x_121_, v_msg_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__10(lean_object* v_vs_123_, lean_object* v_v_124_, lean_object* v_i_125_){
_start:
{
lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_126_ = lean_array_get_size(v_vs_123_);
v___x_127_ = lean_nat_dec_lt(v_i_125_, v___x_126_);
if (v___x_127_ == 0)
{
lean_object* v___x_128_; 
lean_dec(v_i_125_);
v___x_128_ = lean_array_push(v_vs_123_, v_v_124_);
return v___x_128_;
}
else
{
lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_129_ = lean_array_fget_borrowed(v_vs_123_, v_i_125_);
v___x_130_ = lean_name_eq(v_v_124_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = lean_unsigned_to_nat(1u);
v___x_132_ = lean_nat_add(v_i_125_, v___x_131_);
lean_dec(v_i_125_);
v_i_125_ = v___x_132_;
goto _start;
}
else
{
lean_object* v___x_134_; 
v___x_134_ = lean_array_fset(v_vs_123_, v_i_125_, v_v_124_);
lean_dec(v_i_125_);
return v___x_134_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__5(lean_object* v_vs_135_, lean_object* v_v_136_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_unsigned_to_nat(0u);
v___x_138_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__5_spec__10(v_vs_135_, v_v_136_, v___x_137_);
return v___x_138_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1(lean_object* v_a_139_, lean_object* v_b_140_){
_start:
{
lean_object* v_fst_141_; lean_object* v_fst_142_; uint8_t v___x_143_; 
v_fst_141_ = lean_ctor_get(v_a_139_, 0);
v_fst_142_ = lean_ctor_get(v_b_140_, 0);
v___x_143_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_141_, v_fst_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1___boxed(lean_object* v_a_144_, lean_object* v_b_145_){
_start:
{
uint8_t v_res_146_; lean_object* v_r_147_; 
v_res_146_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1(v_a_144_, v_b_145_);
lean_dec_ref(v_b_145_);
lean_dec_ref(v_a_144_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__0(lean_object* v_x_148_, lean_object* v_keys_149_, lean_object* v_v_150_, lean_object* v_k_151_, lean_object* v_x_152_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v_c_155_; lean_object* v___x_156_; 
v___x_153_ = lean_unsigned_to_nat(1u);
v___x_154_ = lean_nat_add(v_x_148_, v___x_153_);
v_c_155_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_149_, v_v_150_, v___x_154_);
lean_dec(v___x_154_);
v___x_156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_156_, 0, v_k_151_);
lean_ctor_set(v___x_156_, 1, v_c_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__0___boxed(lean_object* v_x_157_, lean_object* v_keys_158_, lean_object* v_v_159_, lean_object* v_k_160_, lean_object* v_x_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__0(v_x_157_, v_keys_158_, v_v_159_, v_k_160_, v_x_161_);
lean_dec_ref(v_keys_158_);
lean_dec(v_x_157_);
return v_res_162_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__1(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__0));
v___x_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12___redArg(lean_object* v_x_167_, lean_object* v_keys_168_, lean_object* v_v_169_, lean_object* v_k_170_, lean_object* v_as_171_, lean_object* v_k_172_, lean_object* v_x_173_, lean_object* v_x_174_){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v_mid_177_; lean_object* v_midVal_178_; uint8_t v___x_179_; 
v___x_175_ = lean_nat_add(v_x_173_, v_x_174_);
v___x_176_ = lean_unsigned_to_nat(1u);
v_mid_177_ = lean_nat_shiftr(v___x_175_, v___x_176_);
lean_dec(v___x_175_);
v_midVal_178_ = lean_array_fget(v_as_171_, v_mid_177_);
v___x_179_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1(v_midVal_178_, v_k_172_);
if (v___x_179_ == 0)
{
uint8_t v___x_180_; 
lean_dec(v_x_174_);
v___x_180_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1(v_k_172_, v_midVal_178_);
if (v___x_180_ == 0)
{
lean_object* v___x_181_; uint8_t v___x_182_; 
lean_dec(v_x_173_);
v___x_181_ = lean_array_get_size(v_as_171_);
v___x_182_ = lean_nat_dec_lt(v_mid_177_, v___x_181_);
if (v___x_182_ == 0)
{
lean_dec(v_midVal_178_);
lean_dec(v_mid_177_);
lean_dec(v_k_170_);
lean_dec(v_v_169_);
return v_as_171_;
}
else
{
lean_object* v_snd_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_195_; 
v_snd_183_ = lean_ctor_get(v_midVal_178_, 1);
v_isSharedCheck_195_ = !lean_is_exclusive(v_midVal_178_);
if (v_isSharedCheck_195_ == 0)
{
lean_object* v_unused_196_; 
v_unused_196_ = lean_ctor_get(v_midVal_178_, 0);
lean_dec(v_unused_196_);
v___x_185_ = v_midVal_178_;
v_isShared_186_ = v_isSharedCheck_195_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_snd_183_);
lean_dec(v_midVal_178_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_195_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_187_; lean_object* v_xs_x27_188_; lean_object* v___x_189_; lean_object* v_c_190_; lean_object* v___x_192_; 
v___x_187_ = lean_box(0);
v_xs_x27_188_ = lean_array_fset(v_as_171_, v_mid_177_, v___x_187_);
v___x_189_ = lean_nat_add(v_x_167_, v___x_176_);
v_c_190_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2(v_keys_168_, v_v_169_, v___x_189_, v_snd_183_);
lean_dec(v___x_189_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 1, v_c_190_);
lean_ctor_set(v___x_185_, 0, v_k_170_);
v___x_192_ = v___x_185_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_k_170_);
lean_ctor_set(v_reuseFailAlloc_194_, 1, v_c_190_);
v___x_192_ = v_reuseFailAlloc_194_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
lean_object* v___x_193_; 
v___x_193_ = lean_array_fset(v_xs_x27_188_, v_mid_177_, v___x_192_);
lean_dec(v_mid_177_);
return v___x_193_;
}
}
}
}
else
{
lean_dec(v_midVal_178_);
v_x_174_ = v_mid_177_;
goto _start;
}
}
else
{
uint8_t v___x_198_; 
lean_dec(v_midVal_178_);
v___x_198_ = lean_nat_dec_eq(v_mid_177_, v_x_173_);
if (v___x_198_ == 0)
{
lean_dec(v_x_173_);
v_x_173_ = v_mid_177_;
goto _start;
}
else
{
lean_object* v___x_200_; lean_object* v_c_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v_j_204_; lean_object* v_as_205_; lean_object* v___x_206_; 
lean_dec(v_mid_177_);
lean_dec(v_x_174_);
v___x_200_ = lean_nat_add(v_x_167_, v___x_176_);
v_c_201_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_168_, v_v_169_, v___x_200_);
lean_dec(v___x_200_);
v___x_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_202_, 0, v_k_170_);
lean_ctor_set(v___x_202_, 1, v_c_201_);
v___x_203_ = lean_nat_add(v_x_173_, v___x_176_);
lean_dec(v_x_173_);
v_j_204_ = lean_array_get_size(v_as_171_);
v_as_205_ = lean_array_push(v_as_171_, v___x_202_);
v___x_206_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_203_, v_as_205_, v_j_204_);
lean_dec(v___x_203_);
return v___x_206_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6(lean_object* v_x_207_, lean_object* v_keys_208_, lean_object* v_v_209_, lean_object* v_k_210_, lean_object* v_as_211_, lean_object* v_k_212_){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_213_ = lean_array_get_size(v_as_211_);
v___x_214_ = lean_unsigned_to_nat(0u);
v___x_215_ = lean_nat_dec_eq(v___x_213_, v___x_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = lean_array_fget_borrowed(v_as_211_, v___x_214_);
v___x_217_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1(v_k_212_, v___x_216_);
if (v___x_217_ == 0)
{
uint8_t v___x_218_; 
v___x_218_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1(v___x_216_, v_k_212_);
if (v___x_218_ == 0)
{
uint8_t v___x_219_; 
v___x_219_ = lean_nat_dec_lt(v___x_214_, v___x_213_);
if (v___x_219_ == 0)
{
lean_dec(v_k_210_);
lean_dec(v_v_209_);
return v_as_211_;
}
else
{
lean_object* v___x_220_; lean_object* v_xs_x27_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
lean_inc(v___x_216_);
v___x_220_ = lean_box(0);
v_xs_x27_221_ = lean_array_fset(v_as_211_, v___x_214_, v___x_220_);
v___x_222_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__2(v_x_207_, v_keys_208_, v_v_209_, v_k_210_, v___x_216_);
v___x_223_ = lean_array_fset(v_xs_x27_221_, v___x_214_, v___x_222_);
return v___x_223_;
}
}
else
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_224_ = lean_unsigned_to_nat(1u);
v___x_225_ = lean_nat_sub(v___x_213_, v___x_224_);
v___x_226_ = lean_array_fget_borrowed(v_as_211_, v___x_225_);
v___x_227_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1(v___x_226_, v_k_212_);
if (v___x_227_ == 0)
{
uint8_t v___x_228_; 
v___x_228_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__1(v_k_212_, v___x_226_);
if (v___x_228_ == 0)
{
uint8_t v___x_229_; 
v___x_229_ = lean_nat_dec_lt(v___x_225_, v___x_213_);
if (v___x_229_ == 0)
{
lean_dec(v___x_225_);
lean_dec(v_k_210_);
lean_dec(v_v_209_);
return v_as_211_;
}
else
{
lean_object* v___x_230_; lean_object* v_xs_x27_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
lean_inc(v___x_226_);
v___x_230_ = lean_box(0);
v_xs_x27_231_ = lean_array_fset(v_as_211_, v___x_225_, v___x_230_);
v___x_232_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__2(v_x_207_, v_keys_208_, v_v_209_, v_k_210_, v___x_226_);
v___x_233_ = lean_array_fset(v_xs_x27_231_, v___x_225_, v___x_232_);
lean_dec(v___x_225_);
return v___x_233_;
}
}
else
{
lean_object* v___x_234_; 
v___x_234_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12___redArg(v_x_207_, v_keys_208_, v_v_209_, v_k_210_, v_as_211_, v_k_212_, v___x_214_, v___x_225_);
return v___x_234_;
}
}
else
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
lean_dec(v___x_225_);
v___x_235_ = lean_box(0);
v___x_236_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__0(v_x_207_, v_keys_208_, v_v_209_, v_k_210_, v___x_235_);
v___x_237_ = lean_array_push(v_as_211_, v___x_236_);
return v___x_237_;
}
}
}
else
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v_as_240_; lean_object* v___x_241_; 
v___x_238_ = lean_box(0);
v___x_239_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__0(v_x_207_, v_keys_208_, v_v_209_, v_k_210_, v___x_238_);
v_as_240_ = lean_array_push(v_as_211_, v___x_239_);
v___x_241_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_214_, v_as_240_, v___x_213_);
return v___x_241_;
}
}
else
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_242_ = lean_box(0);
v___x_243_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__0(v_x_207_, v_keys_208_, v_v_209_, v_k_210_, v___x_242_);
v___x_244_ = lean_array_push(v_as_211_, v___x_243_);
return v___x_244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_keys_245_, lean_object* v_v_246_, lean_object* v_x_247_, lean_object* v_x_248_){
_start:
{
lean_object* v_vs_249_; lean_object* v_children_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_267_; 
v_vs_249_ = lean_ctor_get(v_x_248_, 0);
v_children_250_ = lean_ctor_get(v_x_248_, 1);
v_isSharedCheck_267_ = !lean_is_exclusive(v_x_248_);
if (v_isSharedCheck_267_ == 0)
{
v___x_252_ = v_x_248_;
v_isShared_253_ = v_isSharedCheck_267_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_children_250_);
lean_inc(v_vs_249_);
lean_dec(v_x_248_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_267_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_254_ = lean_array_get_size(v_keys_245_);
v___x_255_ = lean_nat_dec_lt(v_x_247_, v___x_254_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; lean_object* v___x_258_; 
v___x_256_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__5(v_vs_249_, v_v_246_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 0, v___x_256_);
v___x_258_ = v___x_252_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v___x_256_);
lean_ctor_set(v_reuseFailAlloc_259_, 1, v_children_250_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
else
{
lean_object* v_k_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v_c_263_; lean_object* v___x_265_; 
v_k_260_ = lean_array_fget_borrowed(v_keys_245_, v_x_247_);
v___x_261_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__1, &l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__1_once, _init_l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__1);
lean_inc(v_k_260_);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v_k_260_);
lean_ctor_set(v___x_262_, 1, v___x_261_);
lean_inc(v_k_260_);
v_c_263_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6(v_x_247_, v_keys_245_, v_v_246_, v_k_260_, v_children_250_, v___x_262_);
lean_dec_ref(v___x_262_);
if (v_isShared_253_ == 0)
{
lean_ctor_set(v___x_252_, 1, v_c_263_);
v___x_265_ = v___x_252_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_vs_249_);
lean_ctor_set(v_reuseFailAlloc_266_, 1, v_c_263_);
v___x_265_ = v_reuseFailAlloc_266_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
return v___x_265_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__2(lean_object* v_x_268_, lean_object* v_keys_269_, lean_object* v_v_270_, lean_object* v_k_271_, lean_object* v_x_272_){
_start:
{
lean_object* v_snd_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_283_; 
v_snd_273_ = lean_ctor_get(v_x_272_, 1);
v_isSharedCheck_283_ = !lean_is_exclusive(v_x_272_);
if (v_isSharedCheck_283_ == 0)
{
lean_object* v_unused_284_; 
v_unused_284_ = lean_ctor_get(v_x_272_, 0);
lean_dec(v_unused_284_);
v___x_275_ = v_x_272_;
v_isShared_276_ = v_isSharedCheck_283_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_snd_273_);
lean_dec(v_x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_283_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v_c_279_; lean_object* v___x_281_; 
v___x_277_ = lean_unsigned_to_nat(1u);
v___x_278_ = lean_nat_add(v_x_268_, v___x_277_);
v_c_279_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2(v_keys_269_, v_v_270_, v___x_278_, v_snd_273_);
lean_dec(v___x_278_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v_c_279_);
lean_ctor_set(v___x_275_, 0, v_k_271_);
v___x_281_ = v___x_275_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_k_271_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_c_279_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__2___boxed(lean_object* v_x_285_, lean_object* v_keys_286_, lean_object* v_v_287_, lean_object* v_k_288_, lean_object* v_x_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___lam__2(v_x_285_, v_keys_286_, v_v_287_, v_k_288_, v_x_289_);
lean_dec_ref(v_keys_286_);
lean_dec(v_x_285_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___boxed(lean_object* v_keys_291_, lean_object* v_v_292_, lean_object* v_x_293_, lean_object* v_x_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2(v_keys_291_, v_v_292_, v_x_293_, v_x_294_);
lean_dec(v_x_293_);
lean_dec_ref(v_keys_291_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12___redArg___boxed(lean_object* v_x_296_, lean_object* v_keys_297_, lean_object* v_v_298_, lean_object* v_k_299_, lean_object* v_as_300_, lean_object* v_k_301_, lean_object* v_x_302_, lean_object* v_x_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12___redArg(v_x_296_, v_keys_297_, v_v_298_, v_k_299_, v_as_300_, v_k_301_, v_x_302_, v_x_303_);
lean_dec_ref(v_k_301_);
lean_dec_ref(v_keys_297_);
lean_dec(v_x_296_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6___boxed(lean_object* v_x_305_, lean_object* v_keys_306_, lean_object* v_v_307_, lean_object* v_k_308_, lean_object* v_as_309_, lean_object* v_k_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6(v_x_305_, v_keys_306_, v_v_307_, v_k_308_, v_as_309_, v_k_310_);
lean_dec_ref(v_k_310_);
lean_dec_ref(v_keys_306_);
lean_dec(v_x_305_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6_spec__8___redArg(lean_object* v_x_312_, lean_object* v_x_313_, lean_object* v_x_314_, lean_object* v_x_315_){
_start:
{
lean_object* v_ks_316_; lean_object* v_vs_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_341_; 
v_ks_316_ = lean_ctor_get(v_x_312_, 0);
v_vs_317_ = lean_ctor_get(v_x_312_, 1);
v_isSharedCheck_341_ = !lean_is_exclusive(v_x_312_);
if (v_isSharedCheck_341_ == 0)
{
v___x_319_ = v_x_312_;
v_isShared_320_ = v_isSharedCheck_341_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_vs_317_);
lean_inc(v_ks_316_);
lean_dec(v_x_312_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_341_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = lean_array_get_size(v_ks_316_);
v___x_322_ = lean_nat_dec_lt(v_x_313_, v___x_321_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_326_; 
lean_dec(v_x_313_);
v___x_323_ = lean_array_push(v_ks_316_, v_x_314_);
v___x_324_ = lean_array_push(v_vs_317_, v_x_315_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 1, v___x_324_);
lean_ctor_set(v___x_319_, 0, v___x_323_);
v___x_326_ = v___x_319_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_323_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v___x_324_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
else
{
lean_object* v_k_x27_328_; uint8_t v___x_329_; 
v_k_x27_328_ = lean_array_fget_borrowed(v_ks_316_, v_x_313_);
v___x_329_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_314_, v_k_x27_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_331_; 
if (v_isShared_320_ == 0)
{
v___x_331_ = v___x_319_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_ks_316_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_vs_317_);
v___x_331_ = v_reuseFailAlloc_335_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_unsigned_to_nat(1u);
v___x_333_ = lean_nat_add(v_x_313_, v___x_332_);
lean_dec(v_x_313_);
v_x_312_ = v___x_331_;
v_x_313_ = v___x_333_;
goto _start;
}
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_339_; 
v___x_336_ = lean_array_fset(v_ks_316_, v_x_313_, v_x_314_);
v___x_337_ = lean_array_fset(v_vs_317_, v_x_313_, v_x_315_);
lean_dec(v_x_313_);
if (v_isShared_320_ == 0)
{
lean_ctor_set(v___x_319_, 1, v___x_337_);
lean_ctor_set(v___x_319_, 0, v___x_336_);
v___x_339_ = v___x_319_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6___redArg(lean_object* v_n_342_, lean_object* v_k_343_, lean_object* v_v_344_){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6_spec__8___redArg(v_n_342_, v___x_345_, v_k_343_, v_v_344_);
return v___x_346_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(lean_object* v_x_348_, size_t v_x_349_, size_t v_x_350_, lean_object* v_x_351_, lean_object* v_x_352_){
_start:
{
if (lean_obj_tag(v_x_348_) == 0)
{
lean_object* v_es_353_; size_t v___x_354_; size_t v___x_355_; size_t v___x_356_; size_t v___x_357_; lean_object* v_j_358_; lean_object* v___x_359_; uint8_t v___x_360_; 
v_es_353_ = lean_ctor_get(v_x_348_, 0);
v___x_354_ = ((size_t)5ULL);
v___x_355_ = ((size_t)1ULL);
v___x_356_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1);
v___x_357_ = lean_usize_land(v_x_349_, v___x_356_);
v_j_358_ = lean_usize_to_nat(v___x_357_);
v___x_359_ = lean_array_get_size(v_es_353_);
v___x_360_ = lean_nat_dec_lt(v_j_358_, v___x_359_);
if (v___x_360_ == 0)
{
lean_dec(v_j_358_);
lean_dec(v_x_352_);
lean_dec(v_x_351_);
return v_x_348_;
}
else
{
lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_397_; 
lean_inc_ref(v_es_353_);
v_isSharedCheck_397_ = !lean_is_exclusive(v_x_348_);
if (v_isSharedCheck_397_ == 0)
{
lean_object* v_unused_398_; 
v_unused_398_ = lean_ctor_get(v_x_348_, 0);
lean_dec(v_unused_398_);
v___x_362_ = v_x_348_;
v_isShared_363_ = v_isSharedCheck_397_;
goto v_resetjp_361_;
}
else
{
lean_dec(v_x_348_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_397_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v_v_364_; lean_object* v___x_365_; lean_object* v_xs_x27_366_; lean_object* v___y_368_; 
v_v_364_ = lean_array_fget(v_es_353_, v_j_358_);
v___x_365_ = lean_box(0);
v_xs_x27_366_ = lean_array_fset(v_es_353_, v_j_358_, v___x_365_);
switch(lean_obj_tag(v_v_364_))
{
case 0:
{
lean_object* v_key_373_; lean_object* v_val_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_384_; 
v_key_373_ = lean_ctor_get(v_v_364_, 0);
v_val_374_ = lean_ctor_get(v_v_364_, 1);
v_isSharedCheck_384_ = !lean_is_exclusive(v_v_364_);
if (v_isSharedCheck_384_ == 0)
{
v___x_376_ = v_v_364_;
v_isShared_377_ = v_isSharedCheck_384_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_val_374_);
lean_inc(v_key_373_);
lean_dec(v_v_364_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_384_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
uint8_t v___x_378_; 
v___x_378_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_351_, v_key_373_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; lean_object* v___x_380_; 
lean_del_object(v___x_376_);
v___x_379_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_373_, v_val_374_, v_x_351_, v_x_352_);
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v___y_368_ = v___x_380_;
goto v___jp_367_;
}
else
{
lean_object* v___x_382_; 
lean_dec(v_val_374_);
lean_dec(v_key_373_);
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 1, v_x_352_);
lean_ctor_set(v___x_376_, 0, v_x_351_);
v___x_382_ = v___x_376_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_x_351_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_x_352_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
v___y_368_ = v___x_382_;
goto v___jp_367_;
}
}
}
}
case 1:
{
lean_object* v_node_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_395_; 
v_node_385_ = lean_ctor_get(v_v_364_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v_v_364_);
if (v_isSharedCheck_395_ == 0)
{
v___x_387_ = v_v_364_;
v_isShared_388_ = v_isSharedCheck_395_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_node_385_);
lean_dec(v_v_364_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_395_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
size_t v___x_389_; size_t v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_389_ = lean_usize_shift_right(v_x_349_, v___x_354_);
v___x_390_ = lean_usize_add(v_x_350_, v___x_355_);
v___x_391_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_node_385_, v___x_389_, v___x_390_, v_x_351_, v_x_352_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_391_);
v___x_393_ = v___x_387_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_391_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
v___y_368_ = v___x_393_;
goto v___jp_367_;
}
}
}
default: 
{
lean_object* v___x_396_; 
v___x_396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_396_, 0, v_x_351_);
lean_ctor_set(v___x_396_, 1, v_x_352_);
v___y_368_ = v___x_396_;
goto v___jp_367_;
}
}
v___jp_367_:
{
lean_object* v___x_369_; lean_object* v___x_371_; 
v___x_369_ = lean_array_fset(v_xs_x27_366_, v_j_358_, v___y_368_);
lean_dec(v_j_358_);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v___x_369_);
v___x_371_ = v___x_362_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
}
}
else
{
lean_object* v_ks_399_; lean_object* v_vs_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_420_; 
v_ks_399_ = lean_ctor_get(v_x_348_, 0);
v_vs_400_ = lean_ctor_get(v_x_348_, 1);
v_isSharedCheck_420_ = !lean_is_exclusive(v_x_348_);
if (v_isSharedCheck_420_ == 0)
{
v___x_402_ = v_x_348_;
v_isShared_403_ = v_isSharedCheck_420_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_vs_400_);
lean_inc(v_ks_399_);
lean_dec(v_x_348_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_420_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_405_; 
if (v_isShared_403_ == 0)
{
v___x_405_ = v___x_402_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_ks_399_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v_vs_400_);
v___x_405_ = v_reuseFailAlloc_419_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v_newNode_406_; uint8_t v___y_408_; size_t v___x_414_; uint8_t v___x_415_; 
v_newNode_406_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6___redArg(v___x_405_, v_x_351_, v_x_352_);
v___x_414_ = ((size_t)7ULL);
v___x_415_ = lean_usize_dec_le(v___x_414_, v_x_350_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; lean_object* v___x_417_; uint8_t v___x_418_; 
v___x_416_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_406_);
v___x_417_ = lean_unsigned_to_nat(4u);
v___x_418_ = lean_nat_dec_lt(v___x_416_, v___x_417_);
lean_dec(v___x_416_);
v___y_408_ = v___x_418_;
goto v___jp_407_;
}
else
{
v___y_408_ = v___x_415_;
goto v___jp_407_;
}
v___jp_407_:
{
if (v___y_408_ == 0)
{
lean_object* v_ks_409_; lean_object* v_vs_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v_ks_409_ = lean_ctor_get(v_newNode_406_, 0);
lean_inc_ref(v_ks_409_);
v_vs_410_ = lean_ctor_get(v_newNode_406_, 1);
lean_inc_ref(v_vs_410_);
lean_dec_ref(v_newNode_406_);
v___x_411_ = lean_unsigned_to_nat(0u);
v___x_412_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg___closed__0);
v___x_413_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7___redArg(v_x_350_, v_ks_409_, v_vs_410_, v___x_411_, v___x_412_);
lean_dec_ref(v_vs_410_);
lean_dec_ref(v_ks_409_);
return v___x_413_;
}
else
{
return v_newNode_406_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7___redArg(size_t v_depth_421_, lean_object* v_keys_422_, lean_object* v_vals_423_, lean_object* v_i_424_, lean_object* v_entries_425_){
_start:
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = lean_array_get_size(v_keys_422_);
v___x_427_ = lean_nat_dec_lt(v_i_424_, v___x_426_);
if (v___x_427_ == 0)
{
lean_dec(v_i_424_);
return v_entries_425_;
}
else
{
lean_object* v_k_428_; lean_object* v_v_429_; uint64_t v___x_430_; size_t v_h_431_; size_t v___x_432_; lean_object* v___x_433_; size_t v___x_434_; size_t v___x_435_; size_t v___x_436_; size_t v_h_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v_k_428_ = lean_array_fget_borrowed(v_keys_422_, v_i_424_);
v_v_429_ = lean_array_fget_borrowed(v_vals_423_, v_i_424_);
v___x_430_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_428_);
v_h_431_ = lean_uint64_to_usize(v___x_430_);
v___x_432_ = ((size_t)5ULL);
v___x_433_ = lean_unsigned_to_nat(1u);
v___x_434_ = ((size_t)1ULL);
v___x_435_ = lean_usize_sub(v_depth_421_, v___x_434_);
v___x_436_ = lean_usize_mul(v___x_432_, v___x_435_);
v_h_437_ = lean_usize_shift_right(v_h_431_, v___x_436_);
v___x_438_ = lean_nat_add(v_i_424_, v___x_433_);
lean_dec(v_i_424_);
lean_inc(v_v_429_);
lean_inc(v_k_428_);
v___x_439_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_entries_425_, v_h_437_, v_depth_421_, v_k_428_, v_v_429_);
v_i_424_ = v___x_438_;
v_entries_425_ = v___x_439_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_depth_441_, lean_object* v_keys_442_, lean_object* v_vals_443_, lean_object* v_i_444_, lean_object* v_entries_445_){
_start:
{
size_t v_depth_boxed_446_; lean_object* v_res_447_; 
v_depth_boxed_446_ = lean_unbox_usize(v_depth_441_);
lean_dec(v_depth_441_);
v_res_447_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7___redArg(v_depth_boxed_446_, v_keys_442_, v_vals_443_, v_i_444_, v_entries_445_);
lean_dec_ref(v_vals_443_);
lean_dec_ref(v_keys_442_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_448_, lean_object* v_x_449_, lean_object* v_x_450_, lean_object* v_x_451_, lean_object* v_x_452_){
_start:
{
size_t v_x_2000__boxed_453_; size_t v_x_2001__boxed_454_; lean_object* v_res_455_; 
v_x_2000__boxed_453_ = lean_unbox_usize(v_x_449_);
lean_dec(v_x_449_);
v_x_2001__boxed_454_ = lean_unbox_usize(v_x_450_);
lean_dec(v_x_450_);
v_res_455_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_x_448_, v_x_2000__boxed_453_, v_x_2001__boxed_454_, v_x_451_, v_x_452_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_x_456_, lean_object* v_x_457_, lean_object* v_x_458_){
_start:
{
uint64_t v___x_459_; size_t v___x_460_; size_t v___x_461_; lean_object* v___x_462_; 
v___x_459_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_457_);
v___x_460_ = lean_uint64_to_usize(v___x_459_);
v___x_461_ = ((size_t)1ULL);
v___x_462_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_x_456_, v___x_460_, v___x_461_, v_x_457_, v_x_458_);
return v___x_462_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__3(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_466_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__2));
v___x_467_ = lean_unsigned_to_nat(23u);
v___x_468_ = lean_unsigned_to_nat(166u);
v___x_469_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__1));
v___x_470_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__0));
v___x_471_ = l_mkPanicMessageWithDecl(v___x_470_, v___x_469_, v___x_468_, v___x_467_, v___x_466_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0(lean_object* v_d_472_, lean_object* v_keys_473_, lean_object* v_v_474_){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_475_ = lean_array_get_size(v_keys_473_);
v___x_476_ = lean_unsigned_to_nat(0u);
v___x_477_ = lean_nat_dec_eq(v___x_475_, v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; lean_object* v_k_479_; lean_object* v___x_480_; 
v___x_478_ = lean_box(0);
v_k_479_ = lean_array_get_borrowed(v___x_478_, v_keys_473_, v___x_476_);
lean_inc_ref(v_d_472_);
v___x_480_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0___redArg(v_d_472_, v_k_479_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v___x_481_; lean_object* v_c_482_; lean_object* v___x_483_; 
v___x_481_ = lean_unsigned_to_nat(1u);
v_c_482_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_473_, v_v_474_, v___x_481_);
lean_inc(v_k_479_);
v___x_483_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1___redArg(v_d_472_, v_k_479_, v_c_482_);
return v___x_483_;
}
else
{
lean_object* v_val_484_; lean_object* v___x_485_; lean_object* v_c_486_; lean_object* v___x_487_; 
v_val_484_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_val_484_);
lean_dec_ref(v___x_480_);
v___x_485_ = lean_unsigned_to_nat(1u);
v_c_486_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2(v_keys_473_, v_v_474_, v___x_485_, v_val_484_);
lean_inc(v_k_479_);
v___x_487_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1___redArg(v_d_472_, v_k_479_, v_c_486_);
return v___x_487_;
}
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; 
lean_dec(v_v_474_);
lean_dec_ref(v_d_472_);
v___x_488_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___closed__3);
v___x_489_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3(v___x_488_);
return v___x_489_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0___boxed(lean_object* v_d_490_, lean_object* v_keys_491_, lean_object* v_v_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0(v_d_490_, v_keys_491_, v_v_492_);
lean_dec_ref(v_keys_491_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn___lam__1_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(lean_object* v_dt_494_, lean_object* v_x_495_){
_start:
{
lean_object* v_fst_496_; lean_object* v_snd_497_; lean_object* v___x_498_; 
v_fst_496_ = lean_ctor_get(v_x_495_, 0);
lean_inc(v_fst_496_);
v_snd_497_ = lean_ctor_get(v_x_495_, 1);
lean_inc(v_snd_497_);
lean_dec_ref(v_x_495_);
v___x_498_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0(v_dt_494_, v_snd_497_, v_fst_496_);
lean_dec(v_snd_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(lean_object* v___y_499_){
_start:
{
lean_inc_ref(v___y_499_);
return v___y_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2____boxed(lean_object* v___y_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(v___y_500_);
lean_dec_ref(v___y_500_);
return v_res_501_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_514_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_obj_once(&l_Lean_Meta_Monotonicity_initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_, &l_Lean_Meta_Monotonicity_initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__once, _init_l_Lean_Meta_Monotonicity_initFn___closed__8_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_);
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
return v___x_516_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_517_; lean_object* v___f_518_; lean_object* v___x_519_; lean_object* v___f_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___f_517_ = ((lean_object*)(l_Lean_Meta_Monotonicity_initFn___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_));
v___f_518_ = ((lean_object*)(l_Lean_Meta_Monotonicity_initFn___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_));
v___x_519_ = lean_obj_once(&l_Lean_Meta_Monotonicity_initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_, &l_Lean_Meta_Monotonicity_initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__once, _init_l_Lean_Meta_Monotonicity_initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_);
v___f_520_ = ((lean_object*)(l_Lean_Meta_Monotonicity_initFn___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_));
v___x_521_ = ((lean_object*)(l_Lean_Meta_Monotonicity_initFn___closed__7_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_));
v___x_522_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
lean_ctor_set(v___x_522_, 1, v___f_520_);
lean_ctor_set(v___x_522_, 2, v___x_519_);
lean_ctor_set(v___x_522_, 3, v___f_518_);
lean_ctor_set(v___x_522_, 4, v___f_517_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = lean_obj_once(&l_Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_, &l_Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__once, _init_l_Lean_Meta_Monotonicity_initFn___closed__10_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_);
v___x_525_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2____boxed(lean_object* v_a_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_();
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_528_, lean_object* v_x_529_, lean_object* v_x_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_529_, v_x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_532_, lean_object* v_x_533_, lean_object* v_x_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_532_, v_x_533_, v_x_534_);
lean_dec(v_x_534_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_00_u03b2_536_, lean_object* v_x_537_, lean_object* v_x_538_, lean_object* v_x_539_){
_start:
{
lean_object* v___x_540_; 
v___x_540_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1___redArg(v_x_537_, v_x_538_, v_x_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_541_, lean_object* v_x_542_, size_t v_x_543_, lean_object* v_x_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_542_, v_x_543_, v_x_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_546_, lean_object* v_x_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
size_t v_x_2318__boxed_550_; lean_object* v_res_551_; 
v_x_2318__boxed_550_ = lean_unbox_usize(v_x_548_);
lean_dec(v_x_548_);
v_res_551_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_546_, v_x_547_, v_x_2318__boxed_550_, v_x_549_);
lean_dec(v_x_549_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3(lean_object* v_00_u03b2_552_, lean_object* v_x_553_, size_t v_x_554_, size_t v_x_555_, lean_object* v_x_556_, lean_object* v_x_557_){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___redArg(v_x_553_, v_x_554_, v_x_555_, v_x_556_, v_x_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_559_, lean_object* v_x_560_, lean_object* v_x_561_, lean_object* v_x_562_, lean_object* v_x_563_, lean_object* v_x_564_){
_start:
{
size_t v_x_2329__boxed_565_; size_t v_x_2330__boxed_566_; lean_object* v_res_567_; 
v_x_2329__boxed_565_ = lean_unbox_usize(v_x_561_);
lean_dec(v_x_561_);
v_x_2330__boxed_566_ = lean_unbox_usize(v_x_562_);
lean_dec(v_x_562_);
v_res_567_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3(v_00_u03b2_559_, v_x_560_, v_x_2329__boxed_565_, v_x_2330__boxed_566_, v_x_563_, v_x_564_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_568_, lean_object* v_keys_569_, lean_object* v_vals_570_, lean_object* v_heq_571_, lean_object* v_i_572_, lean_object* v_k_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(v_keys_569_, v_vals_570_, v_i_572_, v_k_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_575_, lean_object* v_keys_576_, lean_object* v_vals_577_, lean_object* v_heq_578_, lean_object* v_i_579_, lean_object* v_k_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(v_00_u03b2_575_, v_keys_576_, v_vals_577_, v_heq_578_, v_i_579_, v_k_580_);
lean_dec(v_k_580_);
lean_dec_ref(v_vals_577_);
lean_dec_ref(v_keys_576_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_582_, lean_object* v_n_583_, lean_object* v_k_584_, lean_object* v_v_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6___redArg(v_n_583_, v_k_584_, v_v_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_587_, size_t v_depth_588_, lean_object* v_keys_589_, lean_object* v_vals_590_, lean_object* v_heq_591_, lean_object* v_i_592_, lean_object* v_entries_593_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7___redArg(v_depth_588_, v_keys_589_, v_vals_590_, v_i_592_, v_entries_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7___boxed(lean_object* v_00_u03b2_595_, lean_object* v_depth_596_, lean_object* v_keys_597_, lean_object* v_vals_598_, lean_object* v_heq_599_, lean_object* v_i_600_, lean_object* v_entries_601_){
_start:
{
size_t v_depth_boxed_602_; lean_object* v_res_603_; 
v_depth_boxed_602_ = lean_unbox_usize(v_depth_596_);
lean_dec(v_depth_596_);
v_res_603_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__7(v_00_u03b2_595_, v_depth_boxed_602_, v_keys_597_, v_vals_598_, v_heq_599_, v_i_600_, v_entries_601_);
lean_dec_ref(v_vals_598_);
lean_dec_ref(v_keys_597_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12(lean_object* v_x_604_, lean_object* v_keys_605_, lean_object* v_v_606_, lean_object* v_k_607_, lean_object* v_as_608_, lean_object* v_k_609_, lean_object* v_x_610_, lean_object* v_x_611_, lean_object* v_x_612_, lean_object* v_x_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12___redArg(v_x_604_, v_keys_605_, v_v_606_, v_k_607_, v_as_608_, v_k_609_, v_x_610_, v_x_611_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12___boxed(lean_object* v_x_615_, lean_object* v_keys_616_, lean_object* v_v_617_, lean_object* v_k_618_, lean_object* v_as_619_, lean_object* v_k_620_, lean_object* v_x_621_, lean_object* v_x_622_, lean_object* v_x_623_, lean_object* v_x_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2_spec__6_spec__12(v_x_615_, v_keys_616_, v_v_617_, v_k_618_, v_as_619_, v_k_620_, v_x_621_, v_x_622_, v_x_623_, v_x_624_);
lean_dec_ref(v_k_620_);
lean_dec_ref(v_keys_616_);
lean_dec(v_x_615_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_626_, lean_object* v_x_627_, lean_object* v_x_628_, lean_object* v_x_629_, lean_object* v_x_630_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__1_spec__3_spec__6_spec__8___redArg(v_x_627_, v_x_628_, v_x_629_, v_x_630_);
return v___x_631_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_632_; 
v___x_632_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_632_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__0, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__0_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__0);
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
return v___x_634_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__1);
v___x_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__1, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__1_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__1);
v___x_638_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_638_, 0, v___x_637_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
lean_ctor_set(v___x_638_, 2, v___x_637_);
lean_ctor_set(v___x_638_, 3, v___x_637_);
lean_ctor_set(v___x_638_, 4, v___x_637_);
lean_ctor_set(v___x_638_, 5, v___x_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg(lean_object* v_ext_639_, lean_object* v_b_640_, uint8_t v_kind_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_){
_start:
{
lean_object* v_currNamespace_646_; lean_object* v___x_647_; lean_object* v_env_648_; lean_object* v_nextMacroScope_649_; lean_object* v_ngen_650_; lean_object* v_auxDeclNGen_651_; lean_object* v_traceState_652_; lean_object* v_messages_653_; lean_object* v_infoState_654_; lean_object* v_snapshotTasks_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_682_; 
v_currNamespace_646_ = lean_ctor_get(v___y_643_, 6);
lean_inc(v_currNamespace_646_);
lean_dec_ref(v___y_643_);
v___x_647_ = lean_st_ref_take(v___y_644_);
v_env_648_ = lean_ctor_get(v___x_647_, 0);
v_nextMacroScope_649_ = lean_ctor_get(v___x_647_, 1);
v_ngen_650_ = lean_ctor_get(v___x_647_, 2);
v_auxDeclNGen_651_ = lean_ctor_get(v___x_647_, 3);
v_traceState_652_ = lean_ctor_get(v___x_647_, 4);
v_messages_653_ = lean_ctor_get(v___x_647_, 6);
v_infoState_654_ = lean_ctor_get(v___x_647_, 7);
v_snapshotTasks_655_ = lean_ctor_get(v___x_647_, 8);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_647_);
if (v_isSharedCheck_682_ == 0)
{
lean_object* v_unused_683_; 
v_unused_683_ = lean_ctor_get(v___x_647_, 5);
lean_dec(v_unused_683_);
v___x_657_ = v___x_647_;
v_isShared_658_ = v_isSharedCheck_682_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_snapshotTasks_655_);
lean_inc(v_infoState_654_);
lean_inc(v_messages_653_);
lean_inc(v_traceState_652_);
lean_inc(v_auxDeclNGen_651_);
lean_inc(v_ngen_650_);
lean_inc(v_nextMacroScope_649_);
lean_inc(v_env_648_);
lean_dec(v___x_647_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_682_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_662_; 
v___x_659_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_648_, v_ext_639_, v_b_640_, v_kind_641_, v_currNamespace_646_);
v___x_660_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__2, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__2_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__2);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 5, v___x_660_);
lean_ctor_set(v___x_657_, 0, v___x_659_);
v___x_662_ = v___x_657_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_659_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_nextMacroScope_649_);
lean_ctor_set(v_reuseFailAlloc_681_, 2, v_ngen_650_);
lean_ctor_set(v_reuseFailAlloc_681_, 3, v_auxDeclNGen_651_);
lean_ctor_set(v_reuseFailAlloc_681_, 4, v_traceState_652_);
lean_ctor_set(v_reuseFailAlloc_681_, 5, v___x_660_);
lean_ctor_set(v_reuseFailAlloc_681_, 6, v_messages_653_);
lean_ctor_set(v_reuseFailAlloc_681_, 7, v_infoState_654_);
lean_ctor_set(v_reuseFailAlloc_681_, 8, v_snapshotTasks_655_);
v___x_662_ = v_reuseFailAlloc_681_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v_mctx_665_; lean_object* v_zetaDeltaFVarIds_666_; lean_object* v_postponed_667_; lean_object* v_diag_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_679_; 
v___x_663_ = lean_st_ref_set(v___y_644_, v___x_662_);
v___x_664_ = lean_st_ref_take(v___y_642_);
v_mctx_665_ = lean_ctor_get(v___x_664_, 0);
v_zetaDeltaFVarIds_666_ = lean_ctor_get(v___x_664_, 2);
v_postponed_667_ = lean_ctor_get(v___x_664_, 3);
v_diag_668_ = lean_ctor_get(v___x_664_, 4);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_679_ == 0)
{
lean_object* v_unused_680_; 
v_unused_680_ = lean_ctor_get(v___x_664_, 1);
lean_dec(v_unused_680_);
v___x_670_ = v___x_664_;
v_isShared_671_ = v_isSharedCheck_679_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_diag_668_);
lean_inc(v_postponed_667_);
lean_inc(v_zetaDeltaFVarIds_666_);
lean_inc(v_mctx_665_);
lean_dec(v___x_664_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_679_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_672_; lean_object* v___x_674_; 
v___x_672_ = lean_obj_once(&l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__3, &l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__3_once, _init_l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___closed__3);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_672_);
v___x_674_ = v___x_670_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_mctx_665_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v___x_672_);
lean_ctor_set(v_reuseFailAlloc_678_, 2, v_zetaDeltaFVarIds_666_);
lean_ctor_set(v_reuseFailAlloc_678_, 3, v_postponed_667_);
lean_ctor_set(v_reuseFailAlloc_678_, 4, v_diag_668_);
v___x_674_ = v_reuseFailAlloc_678_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = lean_st_ref_set(v___y_642_, v___x_674_);
v___x_676_ = lean_box(0);
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
return v___x_677_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_ext_684_, lean_object* v_b_685_, lean_object* v_kind_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
uint8_t v_kind_boxed_691_; lean_object* v_res_692_; 
v_kind_boxed_691_ = lean_unbox(v_kind_686_);
v_res_692_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg(v_ext_684_, v_b_685_, v_kind_boxed_691_, v___y_687_, v___y_688_, v___y_689_);
lean_dec(v___y_689_);
lean_dec(v___y_687_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b1_693_, lean_object* v_00_u03b2_694_, lean_object* v_00_u03c3_695_, lean_object* v_ext_696_, lean_object* v_b_697_, uint8_t v_kind_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg(v_ext_696_, v_b_697_, v_kind_698_, v___y_700_, v___y_701_, v___y_702_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b1_705_, lean_object* v_00_u03b2_706_, lean_object* v_00_u03c3_707_, lean_object* v_ext_708_, lean_object* v_b_709_, lean_object* v_kind_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
uint8_t v_kind_boxed_716_; lean_object* v_res_717_; 
v_kind_boxed_716_ = lean_unbox(v_kind_710_);
v_res_717_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1(v_00_u03b1_705_, v_00_u03b2_706_, v_00_u03c3_707_, v_ext_708_, v_b_709_, v_kind_boxed_716_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
lean_dec(v___y_714_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg___lam__0(lean_object* v_k_718_, lean_object* v_b_719_, lean_object* v_c_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v___x_726_; 
v___x_726_ = lean_apply_7(v_k_718_, v_b_719_, v_c_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, lean_box(0));
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed(lean_object* v_k_727_, lean_object* v_b_728_, lean_object* v_c_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg___lam__0(v_k_727_, v_b_728_, v_c_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg(lean_object* v_e_736_, lean_object* v_maxFVars_737_, lean_object* v_k_738_, uint8_t v_cleanupAnnotations_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
lean_object* v___f_745_; uint8_t v___x_746_; uint8_t v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___f_745_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_745_, 0, v_k_738_);
v___x_746_ = 1;
v___x_747_ = 0;
v___x_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_748_, 0, v_maxFVars_737_);
v___x_749_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_736_, v___x_746_, v___x_747_, v___x_746_, v___x_747_, v___x_748_, v___f_745_, v_cleanupAnnotations_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
lean_dec_ref(v___x_748_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_750_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
else
{
lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
v_a_758_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_749_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_dec(v___x_749_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_e_766_, lean_object* v_maxFVars_767_, lean_object* v_k_768_, lean_object* v_cleanupAnnotations_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_775_; lean_object* v_res_776_; 
v_cleanupAnnotations_boxed_775_ = lean_unbox(v_cleanupAnnotations_769_);
v_res_776_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg(v_e_766_, v_maxFVars_767_, v_k_768_, v_cleanupAnnotations_boxed_775_, v___y_770_, v___y_771_, v___y_772_, v___y_773_);
return v_res_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2(lean_object* v_00_u03b1_777_, lean_object* v_e_778_, lean_object* v_maxFVars_779_, lean_object* v_k_780_, uint8_t v_cleanupAnnotations_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg(v_e_778_, v_maxFVars_779_, v_k_780_, v_cleanupAnnotations_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___boxed(lean_object* v_00_u03b1_788_, lean_object* v_e_789_, lean_object* v_maxFVars_790_, lean_object* v_k_791_, lean_object* v_cleanupAnnotations_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_798_; lean_object* v_res_799_; 
v_cleanupAnnotations_boxed_798_ = lean_unbox(v_cleanupAnnotations_792_);
v_res_799_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2(v_00_u03b1_788_, v_e_789_, v_maxFVars_790_, v_k_791_, v_cleanupAnnotations_boxed_798_, v___y_793_, v___y_794_, v___y_795_, v___y_796_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_){
_start:
{
lean_object* v___x_806_; lean_object* v_env_807_; lean_object* v___x_808_; lean_object* v_mctx_809_; lean_object* v_lctx_810_; lean_object* v_options_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_806_ = lean_st_ref_get(v___y_804_);
v_env_807_ = lean_ctor_get(v___x_806_, 0);
lean_inc_ref(v_env_807_);
lean_dec(v___x_806_);
v___x_808_ = lean_st_ref_get(v___y_802_);
v_mctx_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc_ref(v_mctx_809_);
lean_dec(v___x_808_);
v_lctx_810_ = lean_ctor_get(v___y_801_, 2);
v_options_811_ = lean_ctor_get(v___y_803_, 2);
lean_inc_ref(v_options_811_);
lean_inc_ref(v_lctx_810_);
v___x_812_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_812_, 0, v_env_807_);
lean_ctor_set(v___x_812_, 1, v_mctx_809_);
lean_ctor_set(v___x_812_, 2, v_lctx_810_);
lean_ctor_set(v___x_812_, 3, v_options_811_);
v___x_813_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
lean_ctor_set(v___x_813_, 1, v_msgData_800_);
v___x_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0_spec__0(v_msgData_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v_ref_828_; lean_object* v___x_829_; lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_838_; 
v_ref_828_ = lean_ctor_get(v___y_825_, 5);
v___x_829_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0_spec__0(v_msg_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
v_a_830_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_838_ == 0)
{
v___x_832_ = v___x_829_;
v_isShared_833_ = v_isSharedCheck_838_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_829_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_838_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_834_; lean_object* v___x_836_; 
lean_inc(v_ref_828_);
v___x_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_834_, 0, v_ref_828_);
lean_ctor_set(v___x_834_, 1, v_a_830_);
if (v_isShared_833_ == 0)
{
lean_ctor_set_tag(v___x_832_, 1);
lean_ctor_set(v___x_832_, 0, v___x_834_);
v___x_836_ = v___x_832_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v___x_834_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v_msg_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
lean_dec(v___y_841_);
lean_dec_ref(v___y_840_);
return v_res_845_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_848_ = l_Lean_stringToMessageData(v___x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(lean_object* v___x_851_, lean_object* v_x_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; uint8_t v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_858_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v___x_859_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_860_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_861_ = l_Lean_Name_mkStr3(v___x_851_, v___x_859_, v___x_860_);
v___x_862_ = 0;
v___x_863_ = l_Lean_MessageData_ofConstName(v___x_861_, v___x_862_);
v___x_864_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_864_, 0, v___x_858_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
v___x_865_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v___x_864_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object* v___x_866_, lean_object* v_x_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(v___x_866_, v_x_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
return v_res_873_;
}
}
static uint64_t _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_874_; uint64_t v___x_875_; 
v___x_874_ = 2;
v___x_875_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(lean_object* v_decl_876_, uint8_t v_kind_877_, lean_object* v_x_878_, lean_object* v_e_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v___x_885_; uint8_t v_foApprox_886_; uint8_t v_ctxApprox_887_; uint8_t v_quasiPatternApprox_888_; uint8_t v_constApprox_889_; uint8_t v_isDefEqStuckEx_890_; uint8_t v_unificationHints_891_; uint8_t v_proofIrrelevance_892_; uint8_t v_assignSyntheticOpaque_893_; uint8_t v_offsetCnstrs_894_; uint8_t v_etaStruct_895_; uint8_t v_univApprox_896_; uint8_t v_iota_897_; uint8_t v_beta_898_; uint8_t v_proj_899_; uint8_t v_zeta_900_; uint8_t v_zetaDelta_901_; uint8_t v_zetaUnused_902_; uint8_t v_zetaHave_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_956_; 
v___x_885_ = l_Lean_Meta_Context_config(v___y_880_);
v_foApprox_886_ = lean_ctor_get_uint8(v___x_885_, 0);
v_ctxApprox_887_ = lean_ctor_get_uint8(v___x_885_, 1);
v_quasiPatternApprox_888_ = lean_ctor_get_uint8(v___x_885_, 2);
v_constApprox_889_ = lean_ctor_get_uint8(v___x_885_, 3);
v_isDefEqStuckEx_890_ = lean_ctor_get_uint8(v___x_885_, 4);
v_unificationHints_891_ = lean_ctor_get_uint8(v___x_885_, 5);
v_proofIrrelevance_892_ = lean_ctor_get_uint8(v___x_885_, 6);
v_assignSyntheticOpaque_893_ = lean_ctor_get_uint8(v___x_885_, 7);
v_offsetCnstrs_894_ = lean_ctor_get_uint8(v___x_885_, 8);
v_etaStruct_895_ = lean_ctor_get_uint8(v___x_885_, 10);
v_univApprox_896_ = lean_ctor_get_uint8(v___x_885_, 11);
v_iota_897_ = lean_ctor_get_uint8(v___x_885_, 12);
v_beta_898_ = lean_ctor_get_uint8(v___x_885_, 13);
v_proj_899_ = lean_ctor_get_uint8(v___x_885_, 14);
v_zeta_900_ = lean_ctor_get_uint8(v___x_885_, 15);
v_zetaDelta_901_ = lean_ctor_get_uint8(v___x_885_, 16);
v_zetaUnused_902_ = lean_ctor_get_uint8(v___x_885_, 17);
v_zetaHave_903_ = lean_ctor_get_uint8(v___x_885_, 18);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_956_ == 0)
{
v___x_905_ = v___x_885_;
v_isShared_906_ = v_isSharedCheck_956_;
goto v_resetjp_904_;
}
else
{
lean_dec(v___x_885_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_956_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
uint8_t v_trackZetaDelta_907_; lean_object* v_zetaDeltaSet_908_; lean_object* v_lctx_909_; lean_object* v_localInstances_910_; lean_object* v_defEqCtx_x3f_911_; lean_object* v_synthPendingDepth_912_; lean_object* v_canUnfold_x3f_913_; uint8_t v_univApprox_914_; uint8_t v_inTypeClassResolution_915_; uint8_t v_cacheInferType_916_; uint8_t v___x_917_; lean_object* v_config_919_; 
v_trackZetaDelta_907_ = lean_ctor_get_uint8(v___y_880_, sizeof(void*)*7);
v_zetaDeltaSet_908_ = lean_ctor_get(v___y_880_, 1);
lean_inc(v_zetaDeltaSet_908_);
v_lctx_909_ = lean_ctor_get(v___y_880_, 2);
lean_inc_ref(v_lctx_909_);
v_localInstances_910_ = lean_ctor_get(v___y_880_, 3);
lean_inc_ref(v_localInstances_910_);
v_defEqCtx_x3f_911_ = lean_ctor_get(v___y_880_, 4);
lean_inc(v_defEqCtx_x3f_911_);
v_synthPendingDepth_912_ = lean_ctor_get(v___y_880_, 5);
lean_inc(v_synthPendingDepth_912_);
v_canUnfold_x3f_913_ = lean_ctor_get(v___y_880_, 6);
lean_inc(v_canUnfold_x3f_913_);
v_univApprox_914_ = lean_ctor_get_uint8(v___y_880_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_915_ = lean_ctor_get_uint8(v___y_880_, sizeof(void*)*7 + 2);
v_cacheInferType_916_ = lean_ctor_get_uint8(v___y_880_, sizeof(void*)*7 + 3);
v___x_917_ = 2;
if (v_isShared_906_ == 0)
{
v_config_919_ = v___x_905_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 0, v_foApprox_886_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 1, v_ctxApprox_887_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 2, v_quasiPatternApprox_888_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 3, v_constApprox_889_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 4, v_isDefEqStuckEx_890_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 5, v_unificationHints_891_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 6, v_proofIrrelevance_892_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 7, v_assignSyntheticOpaque_893_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 8, v_offsetCnstrs_894_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 10, v_etaStruct_895_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 11, v_univApprox_896_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 12, v_iota_897_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 13, v_beta_898_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 14, v_proj_899_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 15, v_zeta_900_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 16, v_zetaDelta_901_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 17, v_zetaUnused_902_);
lean_ctor_set_uint8(v_reuseFailAlloc_955_, 18, v_zetaHave_903_);
v_config_919_ = v_reuseFailAlloc_955_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
uint64_t v___x_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_947_; 
lean_ctor_set_uint8(v_config_919_, 9, v___x_917_);
v___x_920_ = l_Lean_Meta_Context_configKey(v___y_880_);
v_isSharedCheck_947_ = !lean_is_exclusive(v___y_880_);
if (v_isSharedCheck_947_ == 0)
{
lean_object* v_unused_948_; lean_object* v_unused_949_; lean_object* v_unused_950_; lean_object* v_unused_951_; lean_object* v_unused_952_; lean_object* v_unused_953_; lean_object* v_unused_954_; 
v_unused_948_ = lean_ctor_get(v___y_880_, 6);
lean_dec(v_unused_948_);
v_unused_949_ = lean_ctor_get(v___y_880_, 5);
lean_dec(v_unused_949_);
v_unused_950_ = lean_ctor_get(v___y_880_, 4);
lean_dec(v_unused_950_);
v_unused_951_ = lean_ctor_get(v___y_880_, 3);
lean_dec(v_unused_951_);
v_unused_952_ = lean_ctor_get(v___y_880_, 2);
lean_dec(v_unused_952_);
v_unused_953_ = lean_ctor_get(v___y_880_, 1);
lean_dec(v_unused_953_);
v_unused_954_ = lean_ctor_get(v___y_880_, 0);
lean_dec(v_unused_954_);
v___x_922_ = v___y_880_;
v_isShared_923_ = v_isSharedCheck_947_;
goto v_resetjp_921_;
}
else
{
lean_dec(v___y_880_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_947_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
uint64_t v___x_924_; uint64_t v___x_925_; uint8_t v___x_926_; uint64_t v___x_927_; uint64_t v___x_928_; uint64_t v_key_929_; lean_object* v___x_930_; lean_object* v___x_932_; 
v___x_924_ = 2ULL;
v___x_925_ = lean_uint64_shift_right(v___x_920_, v___x_924_);
v___x_926_ = 0;
v___x_927_ = lean_uint64_shift_left(v___x_925_, v___x_924_);
v___x_928_ = lean_uint64_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v_key_929_ = lean_uint64_lor(v___x_927_, v___x_928_);
v___x_930_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_930_, 0, v_config_919_);
lean_ctor_set_uint64(v___x_930_, sizeof(void*)*1, v_key_929_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 0, v___x_930_);
v___x_932_ = v___x_922_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_930_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_zetaDeltaSet_908_);
lean_ctor_set(v_reuseFailAlloc_946_, 2, v_lctx_909_);
lean_ctor_set(v_reuseFailAlloc_946_, 3, v_localInstances_910_);
lean_ctor_set(v_reuseFailAlloc_946_, 4, v_defEqCtx_x3f_911_);
lean_ctor_set(v_reuseFailAlloc_946_, 5, v_synthPendingDepth_912_);
lean_ctor_set(v_reuseFailAlloc_946_, 6, v_canUnfold_x3f_913_);
lean_ctor_set_uint8(v_reuseFailAlloc_946_, sizeof(void*)*7, v_trackZetaDelta_907_);
lean_ctor_set_uint8(v_reuseFailAlloc_946_, sizeof(void*)*7 + 1, v_univApprox_914_);
lean_ctor_set_uint8(v_reuseFailAlloc_946_, sizeof(void*)*7 + 2, v_inTypeClassResolution_915_);
lean_ctor_set_uint8(v_reuseFailAlloc_946_, sizeof(void*)*7 + 3, v_cacheInferType_916_);
v___x_932_ = v_reuseFailAlloc_946_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
lean_object* v___x_933_; 
lean_inc(v___y_883_);
lean_inc_ref(v___y_882_);
lean_inc(v___y_881_);
v___x_933_ = l_Lean_Meta_DiscrTree_mkPath(v_e_879_, v___x_926_, v___x_932_, v___y_881_, v___y_882_, v___y_883_);
if (lean_obj_tag(v___x_933_) == 0)
{
lean_object* v_a_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v_a_934_ = lean_ctor_get(v___x_933_, 0);
lean_inc(v_a_934_);
lean_dec_ref(v___x_933_);
v___x_935_ = l_Lean_Meta_Monotonicity_monotoneExt;
v___x_936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_936_, 0, v_decl_876_);
lean_ctor_set(v___x_936_, 1, v_a_934_);
v___x_937_ = l_Lean_ScopedEnvExtension_add___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__1___redArg(v___x_935_, v___x_936_, v_kind_877_, v___y_881_, v___y_882_, v___y_883_);
lean_dec(v___y_883_);
lean_dec(v___y_881_);
return v___x_937_;
}
else
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec(v_decl_876_);
v_a_938_ = lean_ctor_get(v___x_933_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_933_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_933_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_933_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_938_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object* v_decl_957_, lean_object* v_kind_958_, lean_object* v_x_959_, lean_object* v_e_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
uint8_t v_kind_boxed_966_; lean_object* v_res_967_; 
v_kind_boxed_966_ = lean_unbox(v_kind_958_);
v_res_967_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(v_decl_957_, v_kind_boxed_966_, v_x_959_, v_e_960_, v___y_961_, v___y_962_, v___y_963_, v___y_964_);
lean_dec_ref(v_x_959_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(lean_object* v___f_968_, lean_object* v_f_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; uint8_t v___x_977_; lean_object* v___x_978_; 
v___x_975_ = l_Lean_Meta_Monotonicity_headBetaUnderLambda(v_f_969_);
v___x_976_ = lean_unsigned_to_nat(1u);
v___x_977_ = 0;
v___x_978_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__2___redArg(v___x_975_, v___x_976_, v___f_968_, v___x_977_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object* v___f_979_, lean_object* v_f_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(v___f_979_, v_f_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
return v_res_986_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_987_; 
v___x_987_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_987_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_988_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__0);
v___x_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_989_, 0, v___x_988_);
return v___x_989_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_990_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_991_ = lean_unsigned_to_nat(0u);
v___x_992_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
lean_ctor_set(v___x_992_, 2, v___x_991_);
lean_ctor_set(v___x_992_, 3, v___x_990_);
lean_ctor_set(v___x_992_, 4, v___x_990_);
lean_ctor_set(v___x_992_, 5, v___x_990_);
lean_ctor_set(v___x_992_, 6, v___x_990_);
lean_ctor_set(v___x_992_, 7, v___x_990_);
lean_ctor_set(v___x_992_, 8, v___x_990_);
return v___x_992_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_993_ = lean_unsigned_to_nat(32u);
v___x_994_ = lean_mk_empty_array_with_capacity(v___x_993_);
v___x_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_995_, 0, v___x_994_);
return v___x_995_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4(void){
_start:
{
size_t v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; 
v___x_996_ = ((size_t)5ULL);
v___x_997_ = lean_unsigned_to_nat(0u);
v___x_998_ = lean_unsigned_to_nat(32u);
v___x_999_ = lean_mk_empty_array_with_capacity(v___x_998_);
v___x_1000_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3);
v___x_1001_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1001_, 0, v___x_1000_);
lean_ctor_set(v___x_1001_, 1, v___x_999_);
lean_ctor_set(v___x_1001_, 2, v___x_997_);
lean_ctor_set(v___x_1001_, 3, v___x_997_);
lean_ctor_set_usize(v___x_1001_, 4, v___x_996_);
return v___x_1001_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5(void){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1002_ = lean_box(1);
v___x_1003_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__4);
v___x_1004_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__1);
v___x_1005_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1004_);
lean_ctor_set(v___x_1005_, 1, v___x_1003_);
lean_ctor_set(v___x_1005_, 2, v___x_1002_);
return v___x_1005_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__6));
v___x_1008_ = l_Lean_stringToMessageData(v___x_1007_);
return v___x_1008_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__8));
v___x_1011_ = l_Lean_stringToMessageData(v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__10));
v___x_1014_ = l_Lean_stringToMessageData(v___x_1013_);
return v___x_1014_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__12));
v___x_1017_ = l_Lean_stringToMessageData(v___x_1016_);
return v___x_1017_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15(void){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__14));
v___x_1020_ = l_Lean_stringToMessageData(v___x_1019_);
return v___x_1020_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__16));
v___x_1023_ = l_Lean_stringToMessageData(v___x_1022_);
return v___x_1023_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19(void){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__18));
v___x_1026_ = l_Lean_stringToMessageData(v___x_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg(lean_object* v_msg_1027_, lean_object* v_declHint_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v___x_1031_; lean_object* v_env_1032_; uint8_t v___x_1033_; 
v___x_1031_ = lean_st_ref_get(v___y_1029_);
v_env_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc_ref(v_env_1032_);
lean_dec(v___x_1031_);
v___x_1033_ = l_Lean_Name_isAnonymous(v_declHint_1028_);
if (v___x_1033_ == 0)
{
uint8_t v_isExporting_1034_; 
v_isExporting_1034_ = lean_ctor_get_uint8(v_env_1032_, sizeof(void*)*8);
if (v_isExporting_1034_ == 0)
{
lean_object* v___x_1035_; 
lean_dec_ref(v_env_1032_);
lean_dec(v_declHint_1028_);
v___x_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1035_, 0, v_msg_1027_);
return v___x_1035_;
}
else
{
lean_object* v___x_1036_; uint8_t v___x_1037_; 
lean_inc_ref(v_env_1032_);
v___x_1036_ = l_Lean_Environment_setExporting(v_env_1032_, v___x_1033_);
lean_inc(v_declHint_1028_);
lean_inc_ref(v___x_1036_);
v___x_1037_ = l_Lean_Environment_contains(v___x_1036_, v_declHint_1028_, v_isExporting_1034_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; 
lean_dec_ref(v___x_1036_);
lean_dec_ref(v_env_1032_);
lean_dec(v_declHint_1028_);
v___x_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1038_, 0, v_msg_1027_);
return v___x_1038_;
}
else
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v_c_1044_; lean_object* v___x_1045_; 
v___x_1039_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_1040_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5);
v___x_1041_ = l_Lean_Options_empty;
v___x_1042_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1036_);
lean_ctor_set(v___x_1042_, 1, v___x_1039_);
lean_ctor_set(v___x_1042_, 2, v___x_1040_);
lean_ctor_set(v___x_1042_, 3, v___x_1041_);
lean_inc(v_declHint_1028_);
v___x_1043_ = l_Lean_MessageData_ofConstName(v_declHint_1028_, v___x_1033_);
v_c_1044_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1044_, 0, v___x_1042_);
lean_ctor_set(v_c_1044_, 1, v___x_1043_);
v___x_1045_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1032_, v_declHint_1028_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
lean_dec_ref(v_env_1032_);
lean_dec(v_declHint_1028_);
v___x_1046_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7);
v___x_1047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
lean_ctor_set(v___x_1047_, 1, v_c_1044_);
v___x_1048_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__9);
v___x_1049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1047_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = l_Lean_MessageData_note(v___x_1049_);
v___x_1051_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1051_, 0, v_msg_1027_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
return v___x_1052_;
}
else
{
lean_object* v_val_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1088_; 
v_val_1053_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1055_ = v___x_1045_;
v_isShared_1056_ = v_isSharedCheck_1088_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_val_1053_);
lean_dec(v___x_1045_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1088_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v_mod_1060_; uint8_t v___x_1061_; 
v___x_1057_ = lean_box(0);
v___x_1058_ = l_Lean_Environment_header(v_env_1032_);
lean_dec_ref(v_env_1032_);
v___x_1059_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1058_);
v_mod_1060_ = lean_array_get(v___x_1057_, v___x_1059_, v_val_1053_);
lean_dec(v_val_1053_);
lean_dec_ref(v___x_1059_);
v___x_1061_ = l_Lean_isPrivateName(v_declHint_1028_);
lean_dec(v_declHint_1028_);
if (v___x_1061_ == 0)
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1073_; 
v___x_1062_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__11);
v___x_1063_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
lean_ctor_set(v___x_1063_, 1, v_c_1044_);
v___x_1064_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__13);
v___x_1065_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1063_);
lean_ctor_set(v___x_1065_, 1, v___x_1064_);
v___x_1066_ = l_Lean_MessageData_ofName(v_mod_1060_);
v___x_1067_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1065_);
lean_ctor_set(v___x_1067_, 1, v___x_1066_);
v___x_1068_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15);
v___x_1069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1067_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = l_Lean_MessageData_note(v___x_1069_);
v___x_1071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1071_, 0, v_msg_1027_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set_tag(v___x_1055_, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1071_);
v___x_1073_ = v___x_1055_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v___x_1071_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
else
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1075_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__7);
v___x_1076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
lean_ctor_set(v___x_1076_, 1, v_c_1044_);
v___x_1077_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__17);
v___x_1078_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = l_Lean_MessageData_ofName(v_mod_1060_);
v___x_1080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1078_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__19);
v___x_1082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = l_Lean_MessageData_note(v___x_1082_);
v___x_1084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1084_, 0, v_msg_1027_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set_tag(v___x_1055_, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1084_);
v___x_1086_ = v___x_1055_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1089_; 
lean_dec_ref(v_env_1032_);
lean_dec(v_declHint_1028_);
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v_msg_1027_);
return v___x_1089_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___boxed(lean_object* v_msg_1090_, lean_object* v_declHint_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg(v_msg_1090_, v_declHint_1091_, v___y_1092_);
lean_dec(v___y_1092_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9(lean_object* v_msg_1095_, lean_object* v_declHint_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v___x_1102_; lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1112_; 
v___x_1102_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg(v_msg_1095_, v_declHint_1096_, v___y_1100_);
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1105_ = v___x_1102_;
v_isShared_1106_ = v_isSharedCheck_1112_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1102_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1112_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1110_; 
v___x_1107_ = l_Lean_unknownIdentifierMessageTag;
v___x_1108_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1107_);
lean_ctor_set(v___x_1108_, 1, v_a_1103_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 0, v___x_1108_);
v___x_1110_ = v___x_1105_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1108_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9___boxed(lean_object* v_msg_1113_, lean_object* v_declHint_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9(v_msg_1113_, v_declHint_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10___redArg(lean_object* v_ref_1121_, lean_object* v_msg_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v_fileName_1128_; lean_object* v_fileMap_1129_; lean_object* v_options_1130_; lean_object* v_currRecDepth_1131_; lean_object* v_maxRecDepth_1132_; lean_object* v_ref_1133_; lean_object* v_currNamespace_1134_; lean_object* v_openDecls_1135_; lean_object* v_initHeartbeats_1136_; lean_object* v_maxHeartbeats_1137_; lean_object* v_quotContext_1138_; lean_object* v_currMacroScope_1139_; uint8_t v_diag_1140_; lean_object* v_cancelTk_x3f_1141_; uint8_t v_suppressElabErrors_1142_; lean_object* v_inheritedTraceOptions_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1152_; 
v_fileName_1128_ = lean_ctor_get(v___y_1125_, 0);
v_fileMap_1129_ = lean_ctor_get(v___y_1125_, 1);
v_options_1130_ = lean_ctor_get(v___y_1125_, 2);
v_currRecDepth_1131_ = lean_ctor_get(v___y_1125_, 3);
v_maxRecDepth_1132_ = lean_ctor_get(v___y_1125_, 4);
v_ref_1133_ = lean_ctor_get(v___y_1125_, 5);
v_currNamespace_1134_ = lean_ctor_get(v___y_1125_, 6);
v_openDecls_1135_ = lean_ctor_get(v___y_1125_, 7);
v_initHeartbeats_1136_ = lean_ctor_get(v___y_1125_, 8);
v_maxHeartbeats_1137_ = lean_ctor_get(v___y_1125_, 9);
v_quotContext_1138_ = lean_ctor_get(v___y_1125_, 10);
v_currMacroScope_1139_ = lean_ctor_get(v___y_1125_, 11);
v_diag_1140_ = lean_ctor_get_uint8(v___y_1125_, sizeof(void*)*14);
v_cancelTk_x3f_1141_ = lean_ctor_get(v___y_1125_, 12);
v_suppressElabErrors_1142_ = lean_ctor_get_uint8(v___y_1125_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1143_ = lean_ctor_get(v___y_1125_, 13);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___y_1125_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1145_ = v___y_1125_;
v_isShared_1146_ = v_isSharedCheck_1152_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_inheritedTraceOptions_1143_);
lean_inc(v_cancelTk_x3f_1141_);
lean_inc(v_currMacroScope_1139_);
lean_inc(v_quotContext_1138_);
lean_inc(v_maxHeartbeats_1137_);
lean_inc(v_initHeartbeats_1136_);
lean_inc(v_openDecls_1135_);
lean_inc(v_currNamespace_1134_);
lean_inc(v_ref_1133_);
lean_inc(v_maxRecDepth_1132_);
lean_inc(v_currRecDepth_1131_);
lean_inc(v_options_1130_);
lean_inc(v_fileMap_1129_);
lean_inc(v_fileName_1128_);
lean_dec(v___y_1125_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1152_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v_ref_1147_; lean_object* v___x_1149_; 
v_ref_1147_ = l_Lean_replaceRef(v_ref_1121_, v_ref_1133_);
lean_dec(v_ref_1133_);
if (v_isShared_1146_ == 0)
{
lean_ctor_set(v___x_1145_, 5, v_ref_1147_);
v___x_1149_ = v___x_1145_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_fileName_1128_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v_fileMap_1129_);
lean_ctor_set(v_reuseFailAlloc_1151_, 2, v_options_1130_);
lean_ctor_set(v_reuseFailAlloc_1151_, 3, v_currRecDepth_1131_);
lean_ctor_set(v_reuseFailAlloc_1151_, 4, v_maxRecDepth_1132_);
lean_ctor_set(v_reuseFailAlloc_1151_, 5, v_ref_1147_);
lean_ctor_set(v_reuseFailAlloc_1151_, 6, v_currNamespace_1134_);
lean_ctor_set(v_reuseFailAlloc_1151_, 7, v_openDecls_1135_);
lean_ctor_set(v_reuseFailAlloc_1151_, 8, v_initHeartbeats_1136_);
lean_ctor_set(v_reuseFailAlloc_1151_, 9, v_maxHeartbeats_1137_);
lean_ctor_set(v_reuseFailAlloc_1151_, 10, v_quotContext_1138_);
lean_ctor_set(v_reuseFailAlloc_1151_, 11, v_currMacroScope_1139_);
lean_ctor_set(v_reuseFailAlloc_1151_, 12, v_cancelTk_x3f_1141_);
lean_ctor_set(v_reuseFailAlloc_1151_, 13, v_inheritedTraceOptions_1143_);
lean_ctor_set_uint8(v_reuseFailAlloc_1151_, sizeof(void*)*14, v_diag_1140_);
lean_ctor_set_uint8(v_reuseFailAlloc_1151_, sizeof(void*)*14 + 1, v_suppressElabErrors_1142_);
v___x_1149_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
lean_object* v___x_1150_; 
v___x_1150_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v_msg_1122_, v___y_1123_, v___y_1124_, v___x_1149_, v___y_1126_);
lean_dec_ref(v___x_1149_);
return v___x_1150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10___redArg___boxed(lean_object* v_ref_1153_, lean_object* v_msg_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10___redArg(v_ref_1153_, v_msg_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_);
lean_dec(v___y_1158_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
lean_dec(v_ref_1153_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8___redArg(lean_object* v_ref_1161_, lean_object* v_msg_1162_, lean_object* v_declHint_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v___x_1169_; lean_object* v_a_1170_; lean_object* v___x_1171_; 
v___x_1169_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9(v_msg_1162_, v_declHint_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc(v_a_1170_);
lean_dec_ref(v___x_1169_);
v___x_1171_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10___redArg(v_ref_1161_, v_a_1170_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8___redArg___boxed(lean_object* v_ref_1172_, lean_object* v_msg_1173_, lean_object* v_declHint_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8___redArg(v_ref_1172_, v_msg_1173_, v_declHint_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
lean_dec(v___y_1178_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v_ref_1172_);
return v_res_1180_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__0));
v___x_1183_ = l_Lean_stringToMessageData(v___x_1182_);
return v___x_1183_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__2));
v___x_1186_ = l_Lean_stringToMessageData(v___x_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg(lean_object* v_ref_1187_, lean_object* v_constName_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v___x_1194_; uint8_t v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1194_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__1);
v___x_1195_ = 0;
lean_inc(v_constName_1188_);
v___x_1196_ = l_Lean_MessageData_ofConstName(v_constName_1188_, v___x_1195_);
v___x_1197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1197_, 0, v___x_1194_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___closed__3);
v___x_1199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1197_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
v___x_1200_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8___redArg(v_ref_1187_, v___x_1199_, v_constName_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_ref_1201_, lean_object* v_constName_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg(v_ref_1201_, v_constName_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
lean_dec(v___y_1206_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v_ref_1201_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4___redArg(lean_object* v_constName_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_ref_1215_; lean_object* v___x_1216_; 
v_ref_1215_ = lean_ctor_get(v___y_1212_, 5);
lean_inc(v_ref_1215_);
v___x_1216_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg(v_ref_1215_, v_constName_1209_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_);
lean_dec(v_ref_1215_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4___redArg___boxed(lean_object* v_constName_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4___redArg(v_constName_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
lean_dec(v___y_1221_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3(lean_object* v_constName_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
lean_object* v___x_1230_; lean_object* v_env_1231_; uint8_t v___x_1232_; lean_object* v___x_1233_; 
v___x_1230_ = lean_st_ref_get(v___y_1228_);
v_env_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc_ref(v_env_1231_);
lean_dec(v___x_1230_);
v___x_1232_ = 0;
lean_inc(v_constName_1224_);
v___x_1233_ = l_Lean_Environment_find_x3f(v_env_1231_, v_constName_1224_, v___x_1232_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4___redArg(v_constName_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
return v___x_1234_;
}
else
{
lean_object* v_val_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1242_; 
lean_dec_ref(v___y_1227_);
lean_dec(v_constName_1224_);
v_val_1235_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1237_ = v___x_1233_;
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
else
{
lean_inc(v_val_1235_);
lean_dec(v___x_1233_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1240_; 
if (v_isShared_1238_ == 0)
{
lean_ctor_set_tag(v___x_1237_, 0);
v___x_1240_ = v___x_1237_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_val_1235_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3___boxed(lean_object* v_constName_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
lean_object* v_res_1249_; 
v_res_1249_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3(v_constName_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
lean_dec(v___y_1247_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
return v_res_1249_;
}
}
static uint64_t _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1256_; uint64_t v___x_1257_; 
v___x_1256_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_1257_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1256_);
return v___x_1257_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1258_ = lean_uint64_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v___x_1259_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_1260_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
lean_ctor_set_uint64(v___x_1260_, sizeof(void*)*1, v___x_1258_);
return v___x_1260_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1261_; 
v___x_1261_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1261_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1262_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v___x_1263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1263_, 0, v___x_1262_);
return v___x_1263_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1264_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v___x_1265_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1264_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
lean_ctor_set(v___x_1265_, 2, v___x_1264_);
lean_ctor_set(v___x_1265_, 3, v___x_1264_);
lean_ctor_set(v___x_1265_, 4, v___x_1264_);
lean_ctor_set(v___x_1265_, 5, v___x_1264_);
return v___x_1265_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v___x_1267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1266_);
lean_ctor_set(v___x_1267_, 1, v___x_1266_);
lean_ctor_set(v___x_1267_, 2, v___x_1266_);
lean_ctor_set(v___x_1267_, 3, v___x_1266_);
lean_ctor_set(v___x_1267_, 4, v___x_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(lean_object* v___x_1268_, lean_object* v___x_1269_, lean_object* v___f_1270_, lean_object* v___x_1271_, lean_object* v_decl_1272_, lean_object* v_x_1273_, uint8_t v_kind_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_){
_start:
{
uint8_t v___x_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; size_t v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___y_1298_; lean_object* v___x_1308_; 
v___x_1278_ = 0;
v___x_1279_ = 1;
v___x_1280_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v___x_1281_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v___x_1282_ = lean_unsigned_to_nat(32u);
v___x_1283_ = lean_mk_empty_array_with_capacity(v___x_1282_);
v___x_1284_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__3);
v___x_1285_ = ((size_t)5ULL);
lean_inc_n(v___x_1268_, 2);
v___x_1286_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1286_, 0, v___x_1284_);
lean_ctor_set(v___x_1286_, 1, v___x_1283_);
lean_ctor_set(v___x_1286_, 2, v___x_1268_);
lean_ctor_set(v___x_1286_, 3, v___x_1268_);
lean_ctor_set_usize(v___x_1286_, 4, v___x_1285_);
v___x_1287_ = lean_box(1);
lean_inc_ref(v___x_1286_);
v___x_1288_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1281_);
lean_ctor_set(v___x_1288_, 1, v___x_1286_);
lean_ctor_set(v___x_1288_, 2, v___x_1287_);
v___x_1289_ = lean_mk_empty_array_with_capacity(v___x_1268_);
v___x_1290_ = lean_box(0);
lean_inc(v___x_1268_);
lean_inc_ref(v___x_1289_);
lean_inc_ref(v___x_1288_);
lean_inc(v___x_1269_);
v___x_1291_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1291_, 0, v___x_1280_);
lean_ctor_set(v___x_1291_, 1, v___x_1269_);
lean_ctor_set(v___x_1291_, 2, v___x_1288_);
lean_ctor_set(v___x_1291_, 3, v___x_1289_);
lean_ctor_set(v___x_1291_, 4, v___x_1290_);
lean_ctor_set(v___x_1291_, 5, v___x_1268_);
lean_ctor_set(v___x_1291_, 6, v___x_1290_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*7, v___x_1278_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*7 + 1, v___x_1278_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*7 + 2, v___x_1278_);
lean_ctor_set_uint8(v___x_1291_, sizeof(void*)*7 + 3, v___x_1279_);
lean_inc_n(v___x_1268_, 3);
v___x_1292_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1268_);
lean_ctor_set(v___x_1292_, 1, v___x_1268_);
lean_ctor_set(v___x_1292_, 2, v___x_1268_);
lean_ctor_set(v___x_1292_, 3, v___x_1281_);
lean_ctor_set(v___x_1292_, 4, v___x_1281_);
lean_ctor_set(v___x_1292_, 5, v___x_1281_);
lean_ctor_set(v___x_1292_, 6, v___x_1281_);
lean_ctor_set(v___x_1292_, 7, v___x_1281_);
lean_ctor_set(v___x_1292_, 8, v___x_1281_);
v___x_1293_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__5_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v___x_1294_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3___closed__6_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
lean_inc(v___x_1269_);
v___x_1295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1292_);
lean_ctor_set(v___x_1295_, 1, v___x_1293_);
lean_ctor_set(v___x_1295_, 2, v___x_1269_);
lean_ctor_set(v___x_1295_, 3, v___x_1286_);
lean_ctor_set(v___x_1295_, 4, v___x_1294_);
v___x_1296_ = lean_st_mk_ref(v___x_1295_);
lean_inc_ref(v___y_1275_);
lean_inc(v_decl_1272_);
v___x_1308_ = l_Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3(v_decl_1272_, v___x_1291_, v___x_1296_, v___y_1275_, v___y_1276_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v___x_1310_; uint8_t v_foApprox_1311_; uint8_t v_ctxApprox_1312_; uint8_t v_quasiPatternApprox_1313_; uint8_t v_constApprox_1314_; uint8_t v_isDefEqStuckEx_1315_; uint8_t v_unificationHints_1316_; uint8_t v_proofIrrelevance_1317_; uint8_t v_assignSyntheticOpaque_1318_; uint8_t v_offsetCnstrs_1319_; uint8_t v_etaStruct_1320_; uint8_t v_univApprox_1321_; uint8_t v_iota_1322_; uint8_t v_beta_1323_; uint8_t v_proj_1324_; uint8_t v_zeta_1325_; uint8_t v_zetaDelta_1326_; uint8_t v_zetaUnused_1327_; uint8_t v_zetaHave_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1402_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
lean_dec_ref(v___x_1308_);
v___x_1310_ = l_Lean_Meta_Context_config(v___x_1291_);
v_foApprox_1311_ = lean_ctor_get_uint8(v___x_1310_, 0);
v_ctxApprox_1312_ = lean_ctor_get_uint8(v___x_1310_, 1);
v_quasiPatternApprox_1313_ = lean_ctor_get_uint8(v___x_1310_, 2);
v_constApprox_1314_ = lean_ctor_get_uint8(v___x_1310_, 3);
v_isDefEqStuckEx_1315_ = lean_ctor_get_uint8(v___x_1310_, 4);
v_unificationHints_1316_ = lean_ctor_get_uint8(v___x_1310_, 5);
v_proofIrrelevance_1317_ = lean_ctor_get_uint8(v___x_1310_, 6);
v_assignSyntheticOpaque_1318_ = lean_ctor_get_uint8(v___x_1310_, 7);
v_offsetCnstrs_1319_ = lean_ctor_get_uint8(v___x_1310_, 8);
v_etaStruct_1320_ = lean_ctor_get_uint8(v___x_1310_, 10);
v_univApprox_1321_ = lean_ctor_get_uint8(v___x_1310_, 11);
v_iota_1322_ = lean_ctor_get_uint8(v___x_1310_, 12);
v_beta_1323_ = lean_ctor_get_uint8(v___x_1310_, 13);
v_proj_1324_ = lean_ctor_get_uint8(v___x_1310_, 14);
v_zeta_1325_ = lean_ctor_get_uint8(v___x_1310_, 15);
v_zetaDelta_1326_ = lean_ctor_get_uint8(v___x_1310_, 16);
v_zetaUnused_1327_ = lean_ctor_get_uint8(v___x_1310_, 17);
v_zetaHave_1328_ = lean_ctor_get_uint8(v___x_1310_, 18);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1330_ = v___x_1310_;
v_isShared_1331_ = v_isSharedCheck_1402_;
goto v_resetjp_1329_;
}
else
{
lean_dec(v___x_1310_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1402_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1332_; uint8_t v___x_1333_; uint8_t v___x_1334_; lean_object* v_config_1336_; 
v___x_1332_ = l_Lean_ConstantInfo_type(v_a_1309_);
lean_dec(v_a_1309_);
v___x_1333_ = 0;
v___x_1334_ = 2;
if (v_isShared_1331_ == 0)
{
v_config_1336_ = v___x_1330_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 0, v_foApprox_1311_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 1, v_ctxApprox_1312_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 2, v_quasiPatternApprox_1313_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 3, v_constApprox_1314_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 4, v_isDefEqStuckEx_1315_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 5, v_unificationHints_1316_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 6, v_proofIrrelevance_1317_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 7, v_assignSyntheticOpaque_1318_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 8, v_offsetCnstrs_1319_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 10, v_etaStruct_1320_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 11, v_univApprox_1321_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 12, v_iota_1322_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 13, v_beta_1323_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 14, v_proj_1324_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 15, v_zeta_1325_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 16, v_zetaDelta_1326_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 17, v_zetaUnused_1327_);
lean_ctor_set_uint8(v_reuseFailAlloc_1401_, 18, v_zetaHave_1328_);
v_config_1336_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
uint64_t v___x_1337_; uint64_t v___x_1338_; uint64_t v___x_1339_; uint64_t v___x_1340_; uint64_t v___x_1341_; uint64_t v_key_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
lean_ctor_set_uint8(v_config_1336_, 9, v___x_1334_);
v___x_1337_ = l_Lean_Meta_Context_configKey(v___x_1291_);
v___x_1338_ = 2ULL;
v___x_1339_ = lean_uint64_shift_right(v___x_1337_, v___x_1338_);
v___x_1340_ = lean_uint64_shift_left(v___x_1339_, v___x_1338_);
v___x_1341_ = lean_uint64_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v_key_1342_ = lean_uint64_lor(v___x_1340_, v___x_1341_);
v___x_1343_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1343_, 0, v_config_1336_);
lean_ctor_set_uint64(v___x_1343_, sizeof(void*)*1, v_key_1342_);
v___x_1344_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
lean_ctor_set(v___x_1344_, 1, v___x_1269_);
lean_ctor_set(v___x_1344_, 2, v___x_1288_);
lean_ctor_set(v___x_1344_, 3, v___x_1289_);
lean_ctor_set(v___x_1344_, 4, v___x_1290_);
lean_ctor_set(v___x_1344_, 5, v___x_1268_);
lean_ctor_set(v___x_1344_, 6, v___x_1290_);
lean_ctor_set_uint8(v___x_1344_, sizeof(void*)*7, v___x_1278_);
lean_ctor_set_uint8(v___x_1344_, sizeof(void*)*7 + 1, v___x_1278_);
lean_ctor_set_uint8(v___x_1344_, sizeof(void*)*7 + 2, v___x_1278_);
lean_ctor_set_uint8(v___x_1344_, sizeof(void*)*7 + 3, v___x_1279_);
lean_inc(v___y_1276_);
lean_inc_ref(v___y_1275_);
lean_inc(v___x_1296_);
v___x_1345_ = l_Lean_Meta_forallMetaTelescopeReducing(v___x_1332_, v___x_1290_, v___x_1333_, v___x_1344_, v___x_1296_, v___y_1275_, v___y_1276_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_a_1346_; lean_object* v_snd_1347_; lean_object* v_snd_1348_; lean_object* v___x_1349_; uint8_t v___x_1350_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
lean_inc(v_a_1346_);
lean_dec_ref(v___x_1345_);
v_snd_1347_ = lean_ctor_get(v_a_1346_, 1);
lean_inc(v_snd_1347_);
lean_dec(v_a_1346_);
v_snd_1348_ = lean_ctor_get(v_snd_1347_, 1);
lean_inc(v_snd_1348_);
lean_dec(v_snd_1347_);
v___x_1349_ = l_Lean_Expr_cleanupAnnotations(v_snd_1348_);
v___x_1350_ = l_Lean_Expr_isApp(v___x_1349_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec_ref(v___x_1349_);
lean_dec(v_decl_1272_);
lean_dec_ref(v___x_1271_);
v___x_1351_ = lean_box(0);
lean_inc(v___x_1296_);
v___x_1352_ = lean_apply_6(v___f_1270_, v___x_1351_, v___x_1291_, v___x_1296_, v___y_1275_, v___y_1276_, lean_box(0));
v___y_1298_ = v___x_1352_;
goto v___jp_1297_;
}
else
{
lean_object* v_arg_1353_; lean_object* v___x_1354_; uint8_t v___x_1355_; 
v_arg_1353_ = lean_ctor_get(v___x_1349_, 1);
lean_inc_ref(v_arg_1353_);
v___x_1354_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1349_);
v___x_1355_ = l_Lean_Expr_isApp(v___x_1354_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
lean_dec_ref(v___x_1354_);
lean_dec_ref(v_arg_1353_);
lean_dec(v_decl_1272_);
lean_dec_ref(v___x_1271_);
v___x_1356_ = lean_box(0);
lean_inc(v___x_1296_);
v___x_1357_ = lean_apply_6(v___f_1270_, v___x_1356_, v___x_1291_, v___x_1296_, v___y_1275_, v___y_1276_, lean_box(0));
v___y_1298_ = v___x_1357_;
goto v___jp_1297_;
}
else
{
lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1354_);
v___x_1359_ = l_Lean_Expr_isApp(v___x_1358_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
lean_dec_ref(v___x_1358_);
lean_dec_ref(v_arg_1353_);
lean_dec(v_decl_1272_);
lean_dec_ref(v___x_1271_);
v___x_1360_ = lean_box(0);
lean_inc(v___x_1296_);
v___x_1361_ = lean_apply_6(v___f_1270_, v___x_1360_, v___x_1291_, v___x_1296_, v___y_1275_, v___y_1276_, lean_box(0));
v___y_1298_ = v___x_1361_;
goto v___jp_1297_;
}
else
{
lean_object* v___x_1362_; uint8_t v___x_1363_; 
v___x_1362_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1358_);
v___x_1363_ = l_Lean_Expr_isApp(v___x_1362_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; lean_object* v___x_1365_; 
lean_dec_ref(v___x_1362_);
lean_dec_ref(v_arg_1353_);
lean_dec(v_decl_1272_);
lean_dec_ref(v___x_1271_);
v___x_1364_ = lean_box(0);
lean_inc(v___x_1296_);
v___x_1365_ = lean_apply_6(v___f_1270_, v___x_1364_, v___x_1291_, v___x_1296_, v___y_1275_, v___y_1276_, lean_box(0));
v___y_1298_ = v___x_1365_;
goto v___jp_1297_;
}
else
{
lean_object* v___x_1366_; uint8_t v___x_1367_; 
v___x_1366_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1362_);
v___x_1367_ = l_Lean_Expr_isApp(v___x_1366_);
if (v___x_1367_ == 0)
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
lean_dec_ref(v___x_1366_);
lean_dec_ref(v_arg_1353_);
lean_dec(v_decl_1272_);
lean_dec_ref(v___x_1271_);
v___x_1368_ = lean_box(0);
lean_inc(v___x_1296_);
v___x_1369_ = lean_apply_6(v___f_1270_, v___x_1368_, v___x_1291_, v___x_1296_, v___y_1275_, v___y_1276_, lean_box(0));
v___y_1298_ = v___x_1369_;
goto v___jp_1297_;
}
else
{
lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; uint8_t v___x_1374_; 
v___x_1370_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1366_);
v___x_1371_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_1372_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_1373_ = l_Lean_Name_mkStr3(v___x_1271_, v___x_1371_, v___x_1372_);
v___x_1374_ = l_Lean_Expr_isConstOf(v___x_1370_, v___x_1373_);
lean_dec(v___x_1373_);
lean_dec_ref(v___x_1370_);
if (v___x_1374_ == 0)
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
lean_dec_ref(v_arg_1353_);
lean_dec(v_decl_1272_);
v___x_1375_ = lean_box(0);
lean_inc(v___x_1296_);
v___x_1376_ = lean_apply_6(v___f_1270_, v___x_1375_, v___x_1291_, v___x_1296_, v___y_1275_, v___y_1276_, lean_box(0));
v___y_1298_ = v___x_1376_;
goto v___jp_1297_;
}
else
{
lean_object* v___x_1377_; lean_object* v___f_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
lean_dec_ref(v___f_1270_);
v___x_1377_ = lean_box(v_kind_1274_);
v___f_1378_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed), 9, 2);
lean_closure_set(v___f_1378_, 0, v_decl_1272_);
lean_closure_set(v___f_1378_, 1, v___x_1377_);
v___x_1379_ = l_Lean_Expr_headBeta(v_arg_1353_);
v___x_1380_ = l_Lean_Expr_isLambda(v___x_1379_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; 
lean_inc(v___y_1276_);
lean_inc_ref(v___y_1275_);
lean_inc(v___x_1296_);
lean_inc_ref(v___x_1291_);
v___x_1381_ = l_Lean_Meta_etaExpand(v___x_1379_, v___x_1291_, v___x_1296_, v___y_1275_, v___y_1276_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_object* v_a_1382_; lean_object* v___x_1383_; 
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_a_1382_);
lean_dec_ref(v___x_1381_);
lean_inc(v___x_1296_);
v___x_1383_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(v___f_1378_, v_a_1382_, v___x_1291_, v___x_1296_, v___y_1275_, v___y_1276_);
v___y_1298_ = v___x_1383_;
goto v___jp_1297_;
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
lean_dec_ref(v___f_1378_);
lean_dec(v___x_1296_);
lean_dec_ref(v___x_1291_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
v_a_1384_ = lean_ctor_get(v___x_1381_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1381_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___x_1381_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1381_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
else
{
lean_object* v___x_1392_; 
lean_inc(v___x_1296_);
v___x_1392_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(v___f_1378_, v___x_1379_, v___x_1291_, v___x_1296_, v___y_1275_, v___y_1276_);
v___y_1298_ = v___x_1392_;
goto v___jp_1297_;
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
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
lean_dec(v___x_1296_);
lean_dec_ref(v___x_1291_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v_decl_1272_);
lean_dec_ref(v___x_1271_);
lean_dec_ref(v___f_1270_);
v_a_1393_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v___x_1345_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1345_);
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
}
else
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1410_; 
lean_dec(v___x_1296_);
lean_dec_ref(v___x_1291_);
lean_dec_ref(v___x_1289_);
lean_dec_ref(v___x_1288_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v_decl_1272_);
lean_dec_ref(v___x_1271_);
lean_dec_ref(v___f_1270_);
lean_dec(v___x_1269_);
lean_dec(v___x_1268_);
v_a_1403_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1405_ = v___x_1308_;
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1308_);
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
v___jp_1297_:
{
if (lean_obj_tag(v___y_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1307_; 
v_a_1299_ = lean_ctor_get(v___y_1298_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___y_1298_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1301_ = v___y_1298_;
v_isShared_1302_ = v_isSharedCheck_1307_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___y_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1307_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1303_ = lean_st_ref_get(v___x_1296_);
lean_dec(v___x_1296_);
lean_dec(v___x_1303_);
if (v_isShared_1302_ == 0)
{
v___x_1305_ = v___x_1301_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_a_1299_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
else
{
lean_dec(v___x_1296_);
return v___y_1298_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object* v___x_1411_, lean_object* v___x_1412_, lean_object* v___f_1413_, lean_object* v___x_1414_, lean_object* v_decl_1415_, lean_object* v_x_1416_, lean_object* v_kind_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
uint8_t v_kind_boxed_1421_; lean_object* v_res_1422_; 
v_kind_boxed_1421_ = lean_unbox(v_kind_1417_);
v_res_1422_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(v___x_1411_, v___x_1412_, v___f_1413_, v___x_1414_, v_decl_1415_, v_x_1416_, v_kind_boxed_1421_, v___y_1418_, v___y_1419_);
lean_dec(v_x_1416_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4_spec__6(lean_object* v_msgData_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
lean_object* v___x_1427_; lean_object* v_env_1428_; lean_object* v_options_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1427_ = lean_st_ref_get(v___y_1425_);
v_env_1428_ = lean_ctor_get(v___x_1427_, 0);
lean_inc_ref(v_env_1428_);
lean_dec(v___x_1427_);
v_options_1429_ = lean_ctor_get(v___y_1424_, 2);
v___x_1430_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__2);
v___x_1431_ = lean_unsigned_to_nat(32u);
v___x_1432_ = lean_mk_empty_array_with_capacity(v___x_1431_);
lean_dec_ref(v___x_1432_);
v___x_1433_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__5);
lean_inc_ref(v_options_1429_);
v___x_1434_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1434_, 0, v_env_1428_);
lean_ctor_set(v___x_1434_, 1, v___x_1430_);
lean_ctor_set(v___x_1434_, 2, v___x_1433_);
lean_ctor_set(v___x_1434_, 3, v_options_1429_);
v___x_1435_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1434_);
lean_ctor_set(v___x_1435_, 1, v_msgData_1423_);
v___x_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1436_, 0, v___x_1435_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4_spec__6___boxed(lean_object* v_msgData_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_){
_start:
{
lean_object* v_res_1441_; 
v_res_1441_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4_spec__6(v_msgData_1437_, v___y_1438_, v___y_1439_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
return v_res_1441_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4___redArg(lean_object* v_msg_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v_ref_1446_; lean_object* v___x_1447_; lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1456_; 
v_ref_1446_ = lean_ctor_get(v___y_1443_, 5);
v___x_1447_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4_spec__6(v_msg_1442_, v___y_1443_, v___y_1444_);
v_a_1448_ = lean_ctor_get(v___x_1447_, 0);
v_isSharedCheck_1456_ = !lean_is_exclusive(v___x_1447_);
if (v_isSharedCheck_1456_ == 0)
{
v___x_1450_ = v___x_1447_;
v_isShared_1451_ = v_isSharedCheck_1456_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1447_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1456_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1452_; lean_object* v___x_1454_; 
lean_inc(v_ref_1446_);
v___x_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1452_, 0, v_ref_1446_);
lean_ctor_set(v___x_1452_, 1, v_a_1448_);
if (v_isShared_1451_ == 0)
{
lean_ctor_set_tag(v___x_1450_, 1);
lean_ctor_set(v___x_1450_, 0, v___x_1452_);
v___x_1454_ = v___x_1450_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1452_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object* v_msg_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4___redArg(v_msg_1457_, v___y_1458_, v___y_1459_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
return v_res_1461_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1463_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_1464_ = l_Lean_stringToMessageData(v___x_1463_);
return v___x_1464_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_1467_ = l_Lean_stringToMessageData(v___x_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(lean_object* v___x_1468_, lean_object* v_decl_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1473_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v___x_1474_ = l_Lean_MessageData_ofName(v___x_1468_);
v___x_1475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1473_);
lean_ctor_set(v___x_1475_, 1, v___x_1474_);
v___x_1476_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_);
v___x_1477_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1475_);
lean_ctor_set(v___x_1477_, 1, v___x_1476_);
v___x_1478_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4___redArg(v___x_1477_, v___y_1470_, v___y_1471_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object* v___x_1479_, lean_object* v_decl_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__4_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(v___x_1479_, v_decl_1480_, v___y_1481_, v___y_1482_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v_decl_1480_);
return v_res_1484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__33_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_1573_ = l_Lean_registerBuiltinAttribute(v___x_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object* v_a_1574_){
_start:
{
lean_object* v_res_1575_; 
v_res_1575_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_();
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1576_, lean_object* v_msg_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v_msg_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1584_, lean_object* v_msg_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0(v_00_u03b1_1584_, v_msg_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
lean_dec(v___y_1589_);
lean_dec_ref(v___y_1588_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4(lean_object* v_00_u03b1_1592_, lean_object* v_msg_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v___x_1597_; 
v___x_1597_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4___redArg(v_msg_1593_, v___y_1594_, v___y_1595_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4___boxed(lean_object* v_00_u03b1_1598_, lean_object* v_msg_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__4(v_00_u03b1_1598_, v_msg_1599_, v___y_1600_, v___y_1601_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4(lean_object* v_00_u03b1_1604_, lean_object* v_constName_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
lean_object* v___x_1611_; 
v___x_1611_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4___redArg(v_constName_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4___boxed(lean_object* v_00_u03b1_1612_, lean_object* v_constName_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4(v_00_u03b1_1612_, v_constName_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
lean_dec(v___y_1617_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5(lean_object* v_00_u03b1_1620_, lean_object* v_ref_1621_, lean_object* v_constName_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_){
_start:
{
lean_object* v___x_1628_; 
v___x_1628_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___redArg(v_ref_1621_, v_constName_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5___boxed(lean_object* v_00_u03b1_1629_, lean_object* v_ref_1630_, lean_object* v_constName_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5(v_00_u03b1_1629_, v_ref_1630_, v_constName_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
lean_dec(v___y_1635_);
lean_dec(v___y_1633_);
lean_dec_ref(v___y_1632_);
lean_dec(v_ref_1630_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8(lean_object* v_00_u03b1_1638_, lean_object* v_ref_1639_, lean_object* v_msg_1640_, lean_object* v_declHint_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_){
_start:
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8___redArg(v_ref_1639_, v_msg_1640_, v_declHint_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1648_, lean_object* v_ref_1649_, lean_object* v_msg_1650_, lean_object* v_declHint_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8(v_00_u03b1_1648_, v_ref_1649_, v_msg_1650_, v_declHint_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
lean_dec(v___y_1655_);
lean_dec(v___y_1653_);
lean_dec_ref(v___y_1652_);
lean_dec(v_ref_1649_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10(lean_object* v_msg_1658_, lean_object* v_declHint_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg(v_msg_1658_, v_declHint_1659_, v___y_1663_);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___boxed(lean_object* v_msg_1666_, lean_object* v_declHint_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10(v_msg_1666_, v_declHint_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10(lean_object* v_00_u03b1_1674_, lean_object* v_ref_1675_, lean_object* v_msg_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10___redArg(v_ref_1675_, v_msg_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10___boxed(lean_object* v_00_u03b1_1683_, lean_object* v_ref_1684_, lean_object* v_msg_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__10(v_00_u03b1_1683_, v_ref_1684_, v_msg_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_);
lean_dec(v___y_1689_);
lean_dec(v___y_1687_);
lean_dec_ref(v___y_1686_);
lean_dec(v_ref_1684_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___regBuiltin___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_docString__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1694_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___closed__27_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_1695_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___regBuiltin___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_docString__1___closed__0_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_1696_ = l_Lean_addBuiltinDocString(v___x_1694_, v___x_1695_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___regBuiltin___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_docString__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2____boxed(lean_object* v_a_1697_){
_start:
{
lean_object* v_res_1698_; 
v_res_1698_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___regBuiltin___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_docString__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_();
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_findMonoThms(lean_object* v_e_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_){
_start:
{
lean_object* v___x_1705_; lean_object* v_env_1706_; lean_object* v___x_1707_; lean_object* v_ext_1708_; lean_object* v_toEnvExtension_1709_; lean_object* v_asyncMode_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1705_ = lean_st_ref_get(v_a_1703_);
v_env_1706_ = lean_ctor_get(v___x_1705_, 0);
lean_inc_ref(v_env_1706_);
lean_dec(v___x_1705_);
v___x_1707_ = l_Lean_Meta_Monotonicity_monotoneExt;
v_ext_1708_ = lean_ctor_get(v___x_1707_, 1);
lean_inc_ref(v_ext_1708_);
v_toEnvExtension_1709_ = lean_ctor_get(v_ext_1708_, 0);
lean_inc_ref(v_toEnvExtension_1709_);
lean_dec_ref(v_ext_1708_);
v_asyncMode_1710_ = lean_ctor_get(v_toEnvExtension_1709_, 2);
lean_inc(v_asyncMode_1710_);
lean_dec_ref(v_toEnvExtension_1709_);
v___x_1711_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__3___closed__0);
v___x_1712_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1711_, v___x_1707_, v_env_1706_, v_asyncMode_1710_);
lean_dec(v_asyncMode_1710_);
v___x_1713_ = l_Lean_Meta_DiscrTree_getMatch___redArg(v___x_1712_, v_e_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_findMonoThms___boxed(lean_object* v_e_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_Lean_Meta_Monotonicity_findMonoThms(v_e_1714_, v_a_1715_, v_a_1716_, v_a_1717_, v_a_1718_);
return v_res_1720_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1722_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0___closed__0));
v___x_1723_ = l_Lean_stringToMessageData(v___x_1722_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0(lean_object* v_a_1724_, lean_object* v_a_1725_){
_start:
{
if (lean_obj_tag(v_a_1724_) == 0)
{
lean_object* v___x_1726_; 
v___x_1726_ = l_List_reverse___redArg(v_a_1725_);
return v___x_1726_;
}
else
{
lean_object* v_head_1727_; lean_object* v_tail_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1740_; 
v_head_1727_ = lean_ctor_get(v_a_1724_, 0);
v_tail_1728_ = lean_ctor_get(v_a_1724_, 1);
v_isSharedCheck_1740_ = !lean_is_exclusive(v_a_1724_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1730_ = v_a_1724_;
v_isShared_1731_ = v_isSharedCheck_1740_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_tail_1728_);
lean_inc(v_head_1727_);
lean_dec(v_a_1724_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1740_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1737_; 
v___x_1732_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0___closed__1, &l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0___closed__1);
v___x_1733_ = l_Lean_MessageData_ofName(v_head_1727_);
v___x_1734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1732_);
lean_ctor_set(v___x_1734_, 1, v___x_1733_);
v___x_1735_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1734_);
lean_ctor_set(v___x_1735_, 1, v___x_1732_);
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 1, v_a_1725_);
lean_ctor_set(v___x_1730_, 0, v___x_1735_);
v___x_1737_ = v___x_1730_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1735_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v_a_1725_);
v___x_1737_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
v_a_1724_ = v_tail_1728_;
v_a_1725_ = v___x_1737_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__1(void){
_start:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1742_ = ((lean_object*)(l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__0));
v___x_1743_ = l_Lean_stringToMessageData(v___x_1742_);
return v___x_1743_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__3(void){
_start:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = ((lean_object*)(l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__2));
v___x_1746_ = l_Lean_stringToMessageData(v___x_1745_);
return v___x_1746_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__5(void){
_start:
{
lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1748_ = ((lean_object*)(l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__4));
v___x_1749_ = l_Lean_stringToMessageData(v___x_1748_);
return v___x_1749_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__7(void){
_start:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1751_ = ((lean_object*)(l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__6));
v___x_1752_ = l_Lean_stringToMessageData(v___x_1751_);
return v___x_1752_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__9(void){
_start:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1754_ = ((lean_object*)(l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__8));
v___x_1755_ = l_Lean_stringToMessageData(v___x_1754_);
return v___x_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg(lean_object* v_f_1756_, lean_object* v_monoThms_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_, lean_object* v_a_1760_, lean_object* v_a_1761_){
_start:
{
lean_object* v___y_1764_; lean_object* v___x_1772_; lean_object* v___x_1773_; uint8_t v___x_1774_; 
v___x_1772_ = lean_array_get_size(v_monoThms_1757_);
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = lean_nat_dec_eq(v___x_1772_, v___x_1773_);
if (v___x_1774_ == 0)
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1775_ = lean_obj_once(&l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__5, &l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__5_once, _init_l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__5);
v___x_1776_ = lean_array_to_list(v_monoThms_1757_);
v___x_1777_ = lean_box(0);
v___x_1778_ = l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_defaultFailK_spec__0(v___x_1776_, v___x_1777_);
v___x_1779_ = l_Lean_MessageData_andList(v___x_1778_);
v___x_1780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1775_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
v___x_1781_ = lean_obj_once(&l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__7, &l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__7_once, _init_l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__7);
v___x_1782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1782_, 0, v___x_1780_);
lean_ctor_set(v___x_1782_, 1, v___x_1781_);
v___y_1764_ = v___x_1782_;
goto v___jp_1763_;
}
else
{
lean_object* v___x_1783_; 
lean_dec_ref(v_monoThms_1757_);
v___x_1783_ = lean_obj_once(&l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__9, &l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__9_once, _init_l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__9);
v___y_1764_ = v___x_1783_;
goto v___jp_1763_;
}
v___jp_1763_:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1765_ = lean_obj_once(&l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__1, &l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__1_once, _init_l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__1);
v___x_1766_ = l_Lean_indentExpr(v_f_1756_);
v___x_1767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1765_);
lean_ctor_set(v___x_1767_, 1, v___x_1766_);
v___x_1768_ = lean_obj_once(&l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__3, &l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__3_once, _init_l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__3);
v___x_1769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1767_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
v___x_1770_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1769_);
lean_ctor_set(v___x_1770_, 1, v___y_1764_);
v___x_1771_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v___x_1770_, v_a_1758_, v_a_1759_, v_a_1760_, v_a_1761_);
return v___x_1771_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_defaultFailK___redArg___boxed(lean_object* v_f_1784_, lean_object* v_monoThms_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_Lean_Meta_Monotonicity_defaultFailK___redArg(v_f_1784_, v_monoThms_1785_, v_a_1786_, v_a_1787_, v_a_1788_, v_a_1789_);
lean_dec(v_a_1789_);
lean_dec_ref(v_a_1788_);
lean_dec(v_a_1787_);
lean_dec_ref(v_a_1786_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_defaultFailK(lean_object* v_00_u03b1_1792_, lean_object* v_f_1793_, lean_object* v_monoThms_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Lean_Meta_Monotonicity_defaultFailK___redArg(v_f_1793_, v_monoThms_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_defaultFailK___boxed(lean_object* v_00_u03b1_1801_, lean_object* v_f_1802_, lean_object* v_monoThms_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lean_Meta_Monotonicity_defaultFailK(v_00_u03b1_1801_, v_f_1802_, v_monoThms_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_);
lean_dec(v_a_1807_);
lean_dec_ref(v_a_1806_);
lean_dec(v_a_1805_);
lean_dec_ref(v_a_1804_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___lam__0(lean_object* v___x_1810_, lean_object* v_e_1811_){
_start:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1812_ = l_Lean_indentD(v_e_1811_);
v___x_1813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1810_);
lean_ctor_set(v___x_1813_, 1, v___x_1812_);
return v___x_1813_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__1(void){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__0));
v___x_1816_ = l_Lean_stringToMessageData(v___x_1815_);
return v___x_1816_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__3(void){
_start:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__2));
v___x_1819_ = l_Lean_stringToMessageData(v___x_1818_);
return v___x_1819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst(lean_object* v_goal_1824_, lean_object* v_name_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_){
_start:
{
lean_object* v___x_1831_; uint8_t v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___f_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1831_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__1, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__1_once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__1);
v___x_1832_ = 0;
lean_inc(v_name_1825_);
v___x_1833_ = l_Lean_MessageData_ofConstName(v_name_1825_, v___x_1832_);
v___x_1834_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1831_);
lean_ctor_set(v___x_1834_, 1, v___x_1833_);
v___x_1835_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__3, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__3_once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__3);
v___x_1836_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1834_);
lean_ctor_set(v___x_1836_, 1, v___x_1835_);
v___f_1837_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___lam__0), 2, 1);
lean_closure_set(v___f_1837_, 0, v___x_1836_);
v___x_1838_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__4));
v___x_1839_ = lean_alloc_closure((void*)(l_Lean_MVarId_applyConst___boxed), 8, 3);
lean_closure_set(v___x_1839_, 0, v_goal_1824_);
lean_closure_set(v___x_1839_, 1, v_name_1825_);
lean_closure_set(v___x_1839_, 2, v___x_1838_);
v___x_1840_ = l_Lean_Meta_mapErrorImp___redArg(v___x_1839_, v___f_1837_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1840_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1840_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1856_; 
v_a_1849_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1851_ = v___x_1840_;
v_isShared_1852_ = v_isSharedCheck_1856_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1840_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___boxed(lean_object* v_goal_1857_, lean_object* v_name_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst(v_goal_1857_, v_name_1858_, v_a_1859_, v_a_1860_, v_a_1861_, v_a_1862_);
return v_res_1864_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__0(void){
_start:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = lean_unsigned_to_nat(0u);
v___x_1866_ = l_Lean_Expr_bvar___override(v___x_1865_);
return v___x_1866_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__4(void){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1873_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__3));
v___x_1874_ = l_Lean_stringToMessageData(v___x_1873_);
return v___x_1874_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__6(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__5));
v___x_1877_ = l_Lean_stringToMessageData(v___x_1876_);
return v___x_1877_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__8(void){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__7));
v___x_1880_ = l_Lean_stringToMessageData(v___x_1879_);
return v___x_1880_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__18(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__17));
v___x_1905_ = l_Lean_stringToMessageData(v___x_1904_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoCall(lean_object* v_00_u03b1_1916_, lean_object* v_inst___u03b1_1917_, lean_object* v_e_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_){
_start:
{
lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___y_1963_; lean_object* v___y_1981_; lean_object* v___y_1982_; lean_object* v___y_1983_; lean_object* v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_2003_; lean_object* v___y_2004_; lean_object* v___y_2005_; lean_object* v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v___y_2051_; lean_object* v___y_2052_; lean_object* v___y_2140_; lean_object* v___y_2141_; lean_object* v___y_2142_; lean_object* v___y_2143_; lean_object* v___y_2144_; lean_object* v___y_2162_; lean_object* v___y_2163_; lean_object* v___y_2164_; lean_object* v___y_2165_; lean_object* v___y_2166_; uint8_t v___y_2184_; uint8_t v___x_2311_; 
v___x_2311_ = l_Lean_Expr_isApp(v_e_1918_);
if (v___x_2311_ == 0)
{
v___y_2184_ = v___x_2311_;
goto v___jp_2183_;
}
else
{
lean_object* v___x_2312_; uint8_t v___x_2313_; 
v___x_2312_ = l_Lean_Expr_appArg_x21(v_e_1918_);
v___x_2313_ = l_Lean_Expr_hasLooseBVars(v___x_2312_);
lean_dec_ref(v___x_2312_);
if (v___x_2313_ == 0)
{
v___y_2184_ = v___x_2311_;
goto v___jp_2183_;
}
else
{
v___y_2049_ = v_a_1919_;
v___y_2050_ = v_a_1920_;
v___y_2051_ = v_a_1921_;
v___y_2052_ = v_a_1922_;
goto v___jp_2048_;
}
}
v___jp_1924_:
{
lean_object* v___x_1929_; uint8_t v___x_1930_; 
v___x_1929_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__0, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__0_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__0);
v___x_1930_ = lean_expr_eqv(v_e_1918_, v___x_1929_);
lean_dec_ref(v_e_1918_);
if (v___x_1930_ == 0)
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v___x_1931_ = lean_box(0);
v___x_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1931_);
return v___x_1932_;
}
else
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1933_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__2));
v___x_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1934_, 0, v_00_u03b1_1916_);
v___x_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1935_, 0, v_inst___u03b1_1917_);
v___x_1936_ = lean_unsigned_to_nat(2u);
v___x_1937_ = lean_mk_empty_array_with_capacity(v___x_1936_);
v___x_1938_ = lean_array_push(v___x_1937_, v___x_1934_);
v___x_1939_ = lean_array_push(v___x_1938_, v___x_1935_);
v___x_1940_ = l_Lean_Meta_mkAppOptM(v___x_1933_, v___x_1939_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_1949_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1943_ = v___x_1940_;
v_isShared_1944_ = v_isSharedCheck_1949_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_a_1941_);
lean_dec(v___x_1940_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_1949_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v___x_1945_; lean_object* v___x_1947_; 
v___x_1945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1945_, 0, v_a_1941_);
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 0, v___x_1945_);
v___x_1947_ = v___x_1943_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v___x_1945_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
v_a_1950_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1940_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1940_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
v___jp_1958_:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1964_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__4, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__4_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__4);
lean_inc_ref(v_e_1918_);
v___x_1965_ = l_Lean_MessageData_ofExpr(v_e_1918_);
v___x_1966_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1964_);
lean_ctor_set(v___x_1966_, 1, v___x_1965_);
v___x_1967_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__6, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__6_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__6);
v___x_1968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1966_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
v___x_1969_ = l_Lean_MessageData_ofExpr(v___y_1959_);
v___x_1970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1968_);
lean_ctor_set(v___x_1970_, 1, v___x_1969_);
v___x_1971_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v___x_1970_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_dec_ref(v___x_1971_);
v___y_1925_ = v___y_1960_;
v___y_1926_ = v___y_1961_;
v___y_1927_ = v___y_1962_;
v___y_1928_ = v___y_1963_;
goto v___jp_1924_;
}
else
{
lean_object* v_a_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1979_; 
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1974_ = v___x_1971_;
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_a_1972_);
lean_dec(v___x_1971_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1979_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___x_1977_; 
if (v_isShared_1975_ == 0)
{
v___x_1977_ = v___x_1974_;
goto v_reusejp_1976_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_a_1972_);
v___x_1977_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1976_;
}
v_reusejp_1976_:
{
return v___x_1977_;
}
}
}
}
v___jp_1980_:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1986_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__4, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__4_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__4);
lean_inc_ref(v_e_1918_);
v___x_1987_ = l_Lean_MessageData_ofExpr(v_e_1918_);
v___x_1988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1986_);
lean_ctor_set(v___x_1988_, 1, v___x_1987_);
v___x_1989_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__8, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__8_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__8);
v___x_1990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1990_, 0, v___x_1988_);
lean_ctor_set(v___x_1990_, 1, v___x_1989_);
v___x_1991_ = l_Lean_indentExpr(v___y_1981_);
v___x_1992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1990_);
lean_ctor_set(v___x_1992_, 1, v___x_1991_);
v___x_1993_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v___x_1992_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_dec_ref(v___x_1993_);
v___y_1925_ = v___y_1982_;
v___y_1926_ = v___y_1983_;
v___y_1927_ = v___y_1984_;
v___y_1928_ = v___y_1985_;
goto v___jp_1924_;
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
lean_dec(v___y_1985_);
lean_dec_ref(v___y_1984_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1993_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1993_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1994_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
v___jp_2002_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; 
v___x_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2013_, 0, v___y_2006_);
v___x_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2014_, 0, v___y_2007_);
v___x_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2015_, 0, v_00_u03b1_1916_);
v___x_2016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2016_, 0, v___y_2008_);
v___x_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2017_, 0, v___y_2005_);
v___x_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2018_, 0, v_inst___u03b1_1917_);
v___x_2019_ = lean_box(0);
v___x_2020_ = lean_unsigned_to_nat(8u);
v___x_2021_ = lean_mk_empty_array_with_capacity(v___x_2020_);
v___x_2022_ = lean_array_push(v___x_2021_, v___x_2013_);
v___x_2023_ = lean_array_push(v___x_2022_, v___x_2014_);
v___x_2024_ = lean_array_push(v___x_2023_, v___x_2015_);
v___x_2025_ = lean_array_push(v___x_2024_, v___x_2016_);
v___x_2026_ = lean_array_push(v___x_2025_, v___x_2017_);
v___x_2027_ = lean_array_push(v___x_2026_, v___x_2018_);
v___x_2028_ = lean_array_push(v___x_2027_, v___x_2019_);
v___x_2029_ = lean_array_push(v___x_2028_, v___y_2009_);
v___x_2030_ = l_Lean_Meta_mkAppOptM(v___y_2012_, v___x_2029_, v___y_2011_, v___y_2003_, v___y_2004_, v___y_2010_);
if (lean_obj_tag(v___x_2030_) == 0)
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2039_; 
v_a_2031_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2033_ = v___x_2030_;
v_isShared_2034_ = v_isSharedCheck_2039_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2030_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2039_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2035_, 0, v_a_2031_);
if (v_isShared_2034_ == 0)
{
lean_ctor_set(v___x_2033_, 0, v___x_2035_);
v___x_2037_ = v___x_2033_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2035_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2047_; 
v_a_2040_ = lean_ctor_get(v___x_2030_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2042_ = v___x_2030_;
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2030_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2045_; 
if (v_isShared_2043_ == 0)
{
v___x_2045_ = v___x_2042_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_a_2040_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
}
v___jp_2048_:
{
uint8_t v___x_2053_; 
v___x_2053_ = l_Lean_Expr_isProj(v_e_1918_);
if (v___x_2053_ == 0)
{
v___y_1925_ = v___y_2049_;
v___y_1926_ = v___y_2050_;
v___y_1927_ = v___y_2051_;
v___y_1928_ = v___y_2052_;
goto v___jp_1924_;
}
else
{
lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2054_ = l_Lean_Expr_projExpr_x21(v_e_1918_);
lean_inc(v___y_2052_);
lean_inc_ref(v___y_2051_);
lean_inc(v___y_2050_);
lean_inc_ref(v___y_2049_);
lean_inc_ref(v_inst___u03b1_1917_);
lean_inc_ref(v_00_u03b1_1916_);
v___x_2055_ = l_Lean_Meta_Monotonicity_solveMonoCall(v_00_u03b1_1916_, v_inst___u03b1_1917_, v___x_2054_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2055_) == 0)
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2138_; 
v_a_2056_ = lean_ctor_get(v___x_2055_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2058_ = v___x_2055_;
v_isShared_2059_ = v_isSharedCheck_2138_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2055_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2138_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
if (lean_obj_tag(v_a_2056_) == 1)
{
lean_object* v_val_2060_; lean_object* v___x_2061_; 
lean_del_object(v___x_2058_);
v_val_2060_ = lean_ctor_get(v_a_2056_, 0);
lean_inc(v___y_2052_);
lean_inc_ref(v___y_2051_);
lean_inc(v___y_2050_);
lean_inc_ref(v___y_2049_);
lean_inc(v_val_2060_);
v___x_2061_ = lean_infer_type(v_val_2060_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v_a_2062_; lean_object* v___x_2063_; uint8_t v___x_2064_; 
v_a_2062_ = lean_ctor_get(v___x_2061_, 0);
lean_inc(v_a_2062_);
lean_dec_ref(v___x_2061_);
lean_inc(v_a_2062_);
v___x_2063_ = l_Lean_Expr_cleanupAnnotations(v_a_2062_);
v___x_2064_ = l_Lean_Expr_isApp(v___x_2063_);
if (v___x_2064_ == 0)
{
lean_dec_ref(v___x_2063_);
lean_dec_ref(v_a_2056_);
v___y_1959_ = v_a_2062_;
v___y_1960_ = v___y_2049_;
v___y_1961_ = v___y_2050_;
v___y_1962_ = v___y_2051_;
v___y_1963_ = v___y_2052_;
goto v___jp_1958_;
}
else
{
lean_object* v___x_2065_; uint8_t v___x_2066_; 
v___x_2065_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2063_);
v___x_2066_ = l_Lean_Expr_isApp(v___x_2065_);
if (v___x_2066_ == 0)
{
lean_dec_ref(v___x_2065_);
lean_dec_ref(v_a_2056_);
v___y_1959_ = v_a_2062_;
v___y_1960_ = v___y_2049_;
v___y_1961_ = v___y_2050_;
v___y_1962_ = v___y_2051_;
v___y_1963_ = v___y_2052_;
goto v___jp_1958_;
}
else
{
lean_object* v_arg_2067_; lean_object* v___x_2068_; uint8_t v___x_2069_; 
v_arg_2067_ = lean_ctor_get(v___x_2065_, 1);
lean_inc_ref(v_arg_2067_);
v___x_2068_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2065_);
v___x_2069_ = l_Lean_Expr_isApp(v___x_2068_);
if (v___x_2069_ == 0)
{
lean_dec_ref(v___x_2068_);
lean_dec_ref(v_arg_2067_);
lean_dec_ref(v_a_2056_);
v___y_1959_ = v_a_2062_;
v___y_1960_ = v___y_2049_;
v___y_1961_ = v___y_2050_;
v___y_1962_ = v___y_2051_;
v___y_1963_ = v___y_2052_;
goto v___jp_1958_;
}
else
{
lean_object* v___x_2070_; uint8_t v___x_2071_; 
v___x_2070_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2068_);
v___x_2071_ = l_Lean_Expr_isApp(v___x_2070_);
if (v___x_2071_ == 0)
{
lean_dec_ref(v___x_2070_);
lean_dec_ref(v_arg_2067_);
lean_dec_ref(v_a_2056_);
v___y_1959_ = v_a_2062_;
v___y_1960_ = v___y_2049_;
v___y_1961_ = v___y_2050_;
v___y_1962_ = v___y_2051_;
v___y_1963_ = v___y_2052_;
goto v___jp_1958_;
}
else
{
lean_object* v___x_2072_; uint8_t v___x_2073_; 
v___x_2072_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2070_);
v___x_2073_ = l_Lean_Expr_isApp(v___x_2072_);
if (v___x_2073_ == 0)
{
lean_dec_ref(v___x_2072_);
lean_dec_ref(v_arg_2067_);
lean_dec_ref(v_a_2056_);
v___y_1959_ = v_a_2062_;
v___y_1960_ = v___y_2049_;
v___y_1961_ = v___y_2050_;
v___y_1962_ = v___y_2051_;
v___y_1963_ = v___y_2052_;
goto v___jp_1958_;
}
else
{
lean_object* v___x_2074_; lean_object* v___x_2075_; uint8_t v___x_2076_; 
v___x_2074_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2072_);
v___x_2075_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__9));
v___x_2076_ = l_Lean_Expr_isConstOf(v___x_2074_, v___x_2075_);
lean_dec_ref(v___x_2074_);
if (v___x_2076_ == 0)
{
lean_dec_ref(v_arg_2067_);
lean_dec_ref(v_a_2056_);
v___y_1959_ = v_a_2062_;
v___y_1960_ = v___y_2049_;
v___y_1961_ = v___y_2050_;
v___y_1962_ = v___y_2051_;
v___y_1963_ = v___y_2052_;
goto v___jp_1958_;
}
else
{
lean_object* v___x_2077_; lean_object* v___x_2078_; 
lean_dec(v_a_2062_);
v___x_2077_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__11));
lean_inc(v___y_2052_);
lean_inc_ref(v___y_2051_);
lean_inc(v___y_2050_);
lean_inc_ref(v___y_2049_);
lean_inc_ref(v_arg_2067_);
v___x_2078_ = l_Lean_Meta_whnfUntil(v_arg_2067_, v___x_2077_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2078_) == 0)
{
lean_object* v_a_2079_; 
v_a_2079_ = lean_ctor_get(v___x_2078_, 0);
lean_inc(v_a_2079_);
lean_dec_ref(v___x_2078_);
if (lean_obj_tag(v_a_2079_) == 1)
{
lean_object* v_val_2080_; lean_object* v___x_2081_; 
lean_dec_ref(v_arg_2067_);
v_val_2080_ = lean_ctor_get(v_a_2079_, 0);
lean_inc(v_val_2080_);
lean_dec_ref(v_a_2079_);
lean_inc(v_val_2080_);
v___x_2081_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_val_2080_, v___y_2050_);
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_object* v_a_2082_; lean_object* v___x_2083_; uint8_t v___x_2084_; 
v_a_2082_ = lean_ctor_get(v___x_2081_, 0);
lean_inc(v_a_2082_);
lean_dec_ref(v___x_2081_);
v___x_2083_ = l_Lean_Expr_cleanupAnnotations(v_a_2082_);
v___x_2084_ = l_Lean_Expr_isApp(v___x_2083_);
if (v___x_2084_ == 0)
{
lean_dec_ref(v___x_2083_);
lean_dec_ref(v_a_2056_);
v___y_1981_ = v_val_2080_;
v___y_1982_ = v___y_2049_;
v___y_1983_ = v___y_2050_;
v___y_1984_ = v___y_2051_;
v___y_1985_ = v___y_2052_;
goto v___jp_1980_;
}
else
{
lean_object* v_arg_2085_; lean_object* v___x_2086_; uint8_t v___x_2087_; 
v_arg_2085_ = lean_ctor_get(v___x_2083_, 1);
lean_inc_ref(v_arg_2085_);
v___x_2086_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2083_);
v___x_2087_ = l_Lean_Expr_isApp(v___x_2086_);
if (v___x_2087_ == 0)
{
lean_dec_ref(v___x_2086_);
lean_dec_ref(v_arg_2085_);
lean_dec_ref(v_a_2056_);
v___y_1981_ = v_val_2080_;
v___y_1982_ = v___y_2049_;
v___y_1983_ = v___y_2050_;
v___y_1984_ = v___y_2051_;
v___y_1985_ = v___y_2052_;
goto v___jp_1980_;
}
else
{
lean_object* v_arg_2088_; lean_object* v___x_2089_; uint8_t v___x_2090_; 
v_arg_2088_ = lean_ctor_get(v___x_2086_, 1);
lean_inc_ref(v_arg_2088_);
v___x_2089_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2086_);
v___x_2090_ = l_Lean_Expr_isApp(v___x_2089_);
if (v___x_2090_ == 0)
{
lean_dec_ref(v___x_2089_);
lean_dec_ref(v_arg_2088_);
lean_dec_ref(v_arg_2085_);
lean_dec_ref(v_a_2056_);
v___y_1981_ = v_val_2080_;
v___y_1982_ = v___y_2049_;
v___y_1983_ = v___y_2050_;
v___y_1984_ = v___y_2051_;
v___y_1985_ = v___y_2052_;
goto v___jp_1980_;
}
else
{
lean_object* v_arg_2091_; lean_object* v___x_2092_; uint8_t v___x_2093_; 
v_arg_2091_ = lean_ctor_get(v___x_2089_, 1);
lean_inc_ref(v_arg_2091_);
v___x_2092_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2089_);
v___x_2093_ = l_Lean_Expr_isApp(v___x_2092_);
if (v___x_2093_ == 0)
{
lean_dec_ref(v___x_2092_);
lean_dec_ref(v_arg_2091_);
lean_dec_ref(v_arg_2088_);
lean_dec_ref(v_arg_2085_);
lean_dec_ref(v_a_2056_);
v___y_1981_ = v_val_2080_;
v___y_1982_ = v___y_2049_;
v___y_1983_ = v___y_2050_;
v___y_1984_ = v___y_2051_;
v___y_1985_ = v___y_2052_;
goto v___jp_1980_;
}
else
{
lean_object* v_arg_2094_; lean_object* v___x_2095_; uint8_t v___x_2096_; 
v_arg_2094_ = lean_ctor_get(v___x_2092_, 1);
lean_inc_ref(v_arg_2094_);
v___x_2095_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2092_);
v___x_2096_ = l_Lean_Expr_isConstOf(v___x_2095_, v___x_2077_);
lean_dec_ref(v___x_2095_);
if (v___x_2096_ == 0)
{
lean_dec_ref(v_arg_2094_);
lean_dec_ref(v_arg_2091_);
lean_dec_ref(v_arg_2088_);
lean_dec_ref(v_arg_2085_);
lean_dec_ref(v_a_2056_);
v___y_1981_ = v_val_2080_;
v___y_1982_ = v___y_2049_;
v___y_1983_ = v___y_2050_;
v___y_1984_ = v___y_2051_;
v___y_1985_ = v___y_2052_;
goto v___jp_1980_;
}
else
{
lean_object* v___x_2097_; lean_object* v___x_2098_; uint8_t v___x_2099_; 
lean_dec(v_val_2080_);
v___x_2097_ = l_Lean_Expr_projIdx_x21(v_e_1918_);
lean_dec_ref(v_e_1918_);
v___x_2098_ = lean_unsigned_to_nat(0u);
v___x_2099_ = lean_nat_dec_eq(v___x_2097_, v___x_2098_);
lean_dec(v___x_2097_);
if (v___x_2099_ == 0)
{
lean_object* v___x_2100_; 
v___x_2100_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__14));
v___y_2003_ = v___y_2050_;
v___y_2004_ = v___y_2051_;
v___y_2005_ = v_arg_2085_;
v___y_2006_ = v_arg_2094_;
v___y_2007_ = v_arg_2091_;
v___y_2008_ = v_arg_2088_;
v___y_2009_ = v_a_2056_;
v___y_2010_ = v___y_2052_;
v___y_2011_ = v___y_2049_;
v___y_2012_ = v___x_2100_;
goto v___jp_2002_;
}
else
{
lean_object* v___x_2101_; 
v___x_2101_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__16));
v___y_2003_ = v___y_2050_;
v___y_2004_ = v___y_2051_;
v___y_2005_ = v_arg_2085_;
v___y_2006_ = v_arg_2094_;
v___y_2007_ = v_arg_2091_;
v___y_2008_ = v_arg_2088_;
v___y_2009_ = v_a_2056_;
v___y_2010_ = v___y_2052_;
v___y_2011_ = v___y_2049_;
v___y_2012_ = v___x_2101_;
goto v___jp_2002_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2109_; 
lean_dec(v_val_2080_);
lean_dec_ref(v_a_2056_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v_a_2102_ = lean_ctor_get(v___x_2081_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2104_ = v___x_2081_;
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2081_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2107_; 
if (v_isShared_2105_ == 0)
{
v___x_2107_ = v___x_2104_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_a_2102_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
else
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
lean_dec(v_a_2079_);
lean_dec_ref(v_a_2056_);
v___x_2110_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__4, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__4_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__4);
lean_inc_ref(v_e_1918_);
v___x_2111_ = l_Lean_MessageData_ofExpr(v_e_1918_);
v___x_2112_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2110_);
lean_ctor_set(v___x_2112_, 1, v___x_2111_);
v___x_2113_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__18, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__18_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__18);
v___x_2114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2112_);
lean_ctor_set(v___x_2114_, 1, v___x_2113_);
v___x_2115_ = l_Lean_MessageData_ofExpr(v_arg_2067_);
v___x_2116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2114_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v___x_2116_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_dec_ref(v___x_2117_);
v___y_1925_ = v___y_2049_;
v___y_1926_ = v___y_2050_;
v___y_1927_ = v___y_2051_;
v___y_1928_ = v___y_2052_;
goto v___jp_1924_;
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2125_; 
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2120_ = v___x_2117_;
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2117_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_a_2118_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
}
else
{
lean_dec_ref(v_arg_2067_);
lean_dec_ref(v_a_2056_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
return v___x_2078_;
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
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
lean_dec_ref(v_a_2056_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v_a_2126_ = lean_ctor_get(v___x_2061_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v___x_2061_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2061_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_a_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
else
{
lean_object* v___x_2134_; lean_object* v___x_2136_; 
lean_dec(v_a_2056_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v___x_2134_ = lean_box(0);
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 0, v___x_2134_);
v___x_2136_ = v___x_2058_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v___x_2134_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
else
{
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
return v___x_2055_;
}
}
}
v___jp_2139_:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v___x_2145_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__4, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__4_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__4);
lean_inc_ref(v_e_1918_);
v___x_2146_ = l_Lean_MessageData_ofExpr(v_e_1918_);
v___x_2147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2147_, 0, v___x_2145_);
lean_ctor_set(v___x_2147_, 1, v___x_2146_);
v___x_2148_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__6, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__6_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__6);
v___x_2149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2149_, 0, v___x_2147_);
lean_ctor_set(v___x_2149_, 1, v___x_2148_);
v___x_2150_ = l_Lean_MessageData_ofExpr(v___y_2140_);
v___x_2151_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2149_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v___x_2151_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_);
if (lean_obj_tag(v___x_2152_) == 0)
{
lean_dec_ref(v___x_2152_);
v___y_2049_ = v___y_2141_;
v___y_2050_ = v___y_2142_;
v___y_2051_ = v___y_2143_;
v___y_2052_ = v___y_2144_;
goto v___jp_2048_;
}
else
{
lean_object* v_a_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2160_; 
lean_dec(v___y_2144_);
lean_dec_ref(v___y_2143_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v_a_2153_ = lean_ctor_get(v___x_2152_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2155_ = v___x_2152_;
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_a_2153_);
lean_dec(v___x_2152_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2158_; 
if (v_isShared_2156_ == 0)
{
v___x_2158_ = v___x_2155_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_a_2153_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
v___jp_2161_:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2167_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__4, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__4_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__4);
lean_inc_ref(v_e_1918_);
v___x_2168_ = l_Lean_MessageData_ofExpr(v_e_1918_);
v___x_2169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2169_, 0, v___x_2167_);
lean_ctor_set(v___x_2169_, 1, v___x_2168_);
v___x_2170_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__8, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__8_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__8);
v___x_2171_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2169_);
lean_ctor_set(v___x_2171_, 1, v___x_2170_);
v___x_2172_ = l_Lean_indentExpr(v___y_2162_);
v___x_2173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2171_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v___x_2173_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_dec_ref(v___x_2174_);
v___y_2049_ = v___y_2163_;
v___y_2050_ = v___y_2164_;
v___y_2051_ = v___y_2165_;
v___y_2052_ = v___y_2166_;
goto v___jp_2048_;
}
else
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2182_; 
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
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
v___jp_2183_:
{
if (v___y_2184_ == 0)
{
v___y_2049_ = v_a_1919_;
v___y_2050_ = v_a_1920_;
v___y_2051_ = v_a_1921_;
v___y_2052_ = v_a_1922_;
goto v___jp_2048_;
}
else
{
lean_object* v___x_2185_; lean_object* v___x_2186_; 
v___x_2185_ = l_Lean_Expr_appFn_x21(v_e_1918_);
lean_inc(v_a_1922_);
lean_inc_ref(v_a_1921_);
lean_inc(v_a_1920_);
lean_inc_ref(v_a_1919_);
lean_inc_ref(v_inst___u03b1_1917_);
lean_inc_ref(v_00_u03b1_1916_);
v___x_2186_ = l_Lean_Meta_Monotonicity_solveMonoCall(v_00_u03b1_1916_, v_inst___u03b1_1917_, v___x_2185_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2310_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2189_ = v___x_2186_;
v_isShared_2190_ = v_isSharedCheck_2310_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v___x_2186_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2310_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
if (lean_obj_tag(v_a_2187_) == 1)
{
lean_object* v_val_2191_; lean_object* v___x_2192_; 
lean_del_object(v___x_2189_);
v_val_2191_ = lean_ctor_get(v_a_2187_, 0);
lean_inc(v_a_1922_);
lean_inc_ref(v_a_1921_);
lean_inc(v_a_1920_);
lean_inc_ref(v_a_1919_);
lean_inc(v_val_2191_);
v___x_2192_ = lean_infer_type(v_val_2191_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_);
if (lean_obj_tag(v___x_2192_) == 0)
{
lean_object* v_a_2193_; lean_object* v___x_2194_; uint8_t v___x_2195_; 
v_a_2193_ = lean_ctor_get(v___x_2192_, 0);
lean_inc(v_a_2193_);
lean_dec_ref(v___x_2192_);
lean_inc(v_a_2193_);
v___x_2194_ = l_Lean_Expr_cleanupAnnotations(v_a_2193_);
v___x_2195_ = l_Lean_Expr_isApp(v___x_2194_);
if (v___x_2195_ == 0)
{
lean_dec_ref(v___x_2194_);
lean_dec_ref(v_a_2187_);
v___y_2140_ = v_a_2193_;
v___y_2141_ = v_a_1919_;
v___y_2142_ = v_a_1920_;
v___y_2143_ = v_a_1921_;
v___y_2144_ = v_a_1922_;
goto v___jp_2139_;
}
else
{
lean_object* v___x_2196_; uint8_t v___x_2197_; 
v___x_2196_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2194_);
v___x_2197_ = l_Lean_Expr_isApp(v___x_2196_);
if (v___x_2197_ == 0)
{
lean_dec_ref(v___x_2196_);
lean_dec_ref(v_a_2187_);
v___y_2140_ = v_a_2193_;
v___y_2141_ = v_a_1919_;
v___y_2142_ = v_a_1920_;
v___y_2143_ = v_a_1921_;
v___y_2144_ = v_a_1922_;
goto v___jp_2139_;
}
else
{
lean_object* v_arg_2198_; lean_object* v___x_2199_; uint8_t v___x_2200_; 
v_arg_2198_ = lean_ctor_get(v___x_2196_, 1);
lean_inc_ref(v_arg_2198_);
v___x_2199_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2196_);
v___x_2200_ = l_Lean_Expr_isApp(v___x_2199_);
if (v___x_2200_ == 0)
{
lean_dec_ref(v___x_2199_);
lean_dec_ref(v_arg_2198_);
lean_dec_ref(v_a_2187_);
v___y_2140_ = v_a_2193_;
v___y_2141_ = v_a_1919_;
v___y_2142_ = v_a_1920_;
v___y_2143_ = v_a_1921_;
v___y_2144_ = v_a_1922_;
goto v___jp_2139_;
}
else
{
lean_object* v___x_2201_; uint8_t v___x_2202_; 
v___x_2201_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2199_);
v___x_2202_ = l_Lean_Expr_isApp(v___x_2201_);
if (v___x_2202_ == 0)
{
lean_dec_ref(v___x_2201_);
lean_dec_ref(v_arg_2198_);
lean_dec_ref(v_a_2187_);
v___y_2140_ = v_a_2193_;
v___y_2141_ = v_a_1919_;
v___y_2142_ = v_a_1920_;
v___y_2143_ = v_a_1921_;
v___y_2144_ = v_a_1922_;
goto v___jp_2139_;
}
else
{
lean_object* v___x_2203_; uint8_t v___x_2204_; 
v___x_2203_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2201_);
v___x_2204_ = l_Lean_Expr_isApp(v___x_2203_);
if (v___x_2204_ == 0)
{
lean_dec_ref(v___x_2203_);
lean_dec_ref(v_arg_2198_);
lean_dec_ref(v_a_2187_);
v___y_2140_ = v_a_2193_;
v___y_2141_ = v_a_1919_;
v___y_2142_ = v_a_1920_;
v___y_2143_ = v_a_1921_;
v___y_2144_ = v_a_1922_;
goto v___jp_2139_;
}
else
{
lean_object* v___x_2205_; lean_object* v___x_2206_; uint8_t v___x_2207_; 
v___x_2205_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2203_);
v___x_2206_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__9));
v___x_2207_ = l_Lean_Expr_isConstOf(v___x_2205_, v___x_2206_);
lean_dec_ref(v___x_2205_);
if (v___x_2207_ == 0)
{
lean_dec_ref(v_arg_2198_);
lean_dec_ref(v_a_2187_);
v___y_2140_ = v_a_2193_;
v___y_2141_ = v_a_1919_;
v___y_2142_ = v_a_1920_;
v___y_2143_ = v_a_1921_;
v___y_2144_ = v_a_1922_;
goto v___jp_2139_;
}
else
{
lean_object* v___x_2208_; lean_object* v___x_2209_; 
lean_dec(v_a_2193_);
v___x_2208_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__20));
lean_inc(v_a_1922_);
lean_inc_ref(v_a_1921_);
lean_inc(v_a_1920_);
lean_inc_ref(v_a_1919_);
lean_inc_ref(v_arg_2198_);
v___x_2209_ = l_Lean_Meta_whnfUntil(v_arg_2198_, v___x_2208_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2297_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2297_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2297_ == 0)
{
v___x_2212_ = v___x_2209_;
v_isShared_2213_ = v_isSharedCheck_2297_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2209_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2297_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
if (lean_obj_tag(v_a_2210_) == 1)
{
lean_object* v_val_2214_; lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2280_; 
lean_dec_ref(v_arg_2198_);
v_val_2214_ = lean_ctor_get(v_a_2210_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v_a_2210_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2216_ = v_a_2210_;
v_isShared_2217_ = v_isSharedCheck_2280_;
goto v_resetjp_2215_;
}
else
{
lean_inc(v_val_2214_);
lean_dec(v_a_2210_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2280_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2218_; 
lean_inc(v_val_2214_);
v___x_2218_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_val_2214_, v_a_1920_);
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v_a_2219_; lean_object* v___x_2220_; uint8_t v___x_2221_; 
v_a_2219_ = lean_ctor_get(v___x_2218_, 0);
lean_inc(v_a_2219_);
lean_dec_ref(v___x_2218_);
v___x_2220_ = l_Lean_Expr_cleanupAnnotations(v_a_2219_);
v___x_2221_ = l_Lean_Expr_isApp(v___x_2220_);
if (v___x_2221_ == 0)
{
lean_dec_ref(v___x_2220_);
lean_del_object(v___x_2216_);
lean_del_object(v___x_2212_);
lean_dec_ref(v_a_2187_);
v___y_2162_ = v_val_2214_;
v___y_2163_ = v_a_1919_;
v___y_2164_ = v_a_1920_;
v___y_2165_ = v_a_1921_;
v___y_2166_ = v_a_1922_;
goto v___jp_2161_;
}
else
{
lean_object* v_arg_2222_; lean_object* v___x_2223_; uint8_t v___x_2224_; 
v_arg_2222_ = lean_ctor_get(v___x_2220_, 1);
lean_inc_ref(v_arg_2222_);
v___x_2223_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2220_);
v___x_2224_ = l_Lean_Expr_isApp(v___x_2223_);
if (v___x_2224_ == 0)
{
lean_dec_ref(v___x_2223_);
lean_dec_ref(v_arg_2222_);
lean_del_object(v___x_2216_);
lean_del_object(v___x_2212_);
lean_dec_ref(v_a_2187_);
v___y_2162_ = v_val_2214_;
v___y_2163_ = v_a_1919_;
v___y_2164_ = v_a_1920_;
v___y_2165_ = v_a_1921_;
v___y_2166_ = v_a_1922_;
goto v___jp_2161_;
}
else
{
lean_object* v_arg_2225_; lean_object* v___x_2226_; uint8_t v___x_2227_; 
v_arg_2225_ = lean_ctor_get(v___x_2223_, 1);
lean_inc_ref(v_arg_2225_);
v___x_2226_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2223_);
v___x_2227_ = l_Lean_Expr_isApp(v___x_2226_);
if (v___x_2227_ == 0)
{
lean_dec_ref(v___x_2226_);
lean_dec_ref(v_arg_2225_);
lean_dec_ref(v_arg_2222_);
lean_del_object(v___x_2216_);
lean_del_object(v___x_2212_);
lean_dec_ref(v_a_2187_);
v___y_2162_ = v_val_2214_;
v___y_2163_ = v_a_1919_;
v___y_2164_ = v_a_1920_;
v___y_2165_ = v_a_1921_;
v___y_2166_ = v_a_1922_;
goto v___jp_2161_;
}
else
{
lean_object* v_arg_2228_; lean_object* v___x_2229_; uint8_t v___x_2230_; 
v_arg_2228_ = lean_ctor_get(v___x_2226_, 1);
lean_inc_ref(v_arg_2228_);
v___x_2229_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2226_);
v___x_2230_ = l_Lean_Expr_isConstOf(v___x_2229_, v___x_2208_);
lean_dec_ref(v___x_2229_);
if (v___x_2230_ == 0)
{
lean_dec_ref(v_arg_2228_);
lean_dec_ref(v_arg_2225_);
lean_dec_ref(v_arg_2222_);
lean_del_object(v___x_2216_);
lean_del_object(v___x_2212_);
lean_dec_ref(v_a_2187_);
v___y_2162_ = v_val_2214_;
v___y_2163_ = v_a_1919_;
v___y_2164_ = v_a_1920_;
v___y_2165_ = v_a_1921_;
v___y_2166_ = v_a_1922_;
goto v___jp_2161_;
}
else
{
lean_object* v___x_2231_; lean_object* v___x_2233_; 
lean_dec(v_val_2214_);
v___x_2231_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__22));
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 0, v_arg_2228_);
v___x_2233_ = v___x_2216_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_arg_2228_);
v___x_2233_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
lean_object* v___x_2235_; 
if (v_isShared_2213_ == 0)
{
lean_ctor_set_tag(v___x_2212_, 1);
lean_ctor_set(v___x_2212_, 0, v_arg_2225_);
v___x_2235_ = v___x_2212_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_arg_2225_);
v___x_2235_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2236_, 0, v_00_u03b1_1916_);
v___x_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2237_, 0, v_inst___u03b1_1917_);
v___x_2238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2238_, 0, v_arg_2222_);
v___x_2239_ = l_Lean_Expr_appArg_x21(v_e_1918_);
lean_dec_ref(v_e_1918_);
v___x_2240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2239_);
v___x_2241_ = lean_box(0);
v___x_2242_ = lean_unsigned_to_nat(8u);
v___x_2243_ = lean_mk_empty_array_with_capacity(v___x_2242_);
v___x_2244_ = lean_array_push(v___x_2243_, v___x_2233_);
v___x_2245_ = lean_array_push(v___x_2244_, v___x_2235_);
v___x_2246_ = lean_array_push(v___x_2245_, v___x_2236_);
v___x_2247_ = lean_array_push(v___x_2246_, v___x_2237_);
v___x_2248_ = lean_array_push(v___x_2247_, v___x_2238_);
v___x_2249_ = lean_array_push(v___x_2248_, v___x_2240_);
v___x_2250_ = lean_array_push(v___x_2249_, v___x_2241_);
v___x_2251_ = lean_array_push(v___x_2250_, v_a_2187_);
v___x_2252_ = l_Lean_Meta_mkAppOptM(v___x_2231_, v___x_2251_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2255_; uint8_t v_isShared_2256_; uint8_t v_isSharedCheck_2261_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2255_ = v___x_2252_;
v_isShared_2256_ = v_isSharedCheck_2261_;
goto v_resetjp_2254_;
}
else
{
lean_inc(v_a_2253_);
lean_dec(v___x_2252_);
v___x_2255_ = lean_box(0);
v_isShared_2256_ = v_isSharedCheck_2261_;
goto v_resetjp_2254_;
}
v_resetjp_2254_:
{
lean_object* v___x_2257_; lean_object* v___x_2259_; 
v___x_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2257_, 0, v_a_2253_);
if (v_isShared_2256_ == 0)
{
lean_ctor_set(v___x_2255_, 0, v___x_2257_);
v___x_2259_ = v___x_2255_;
goto v_reusejp_2258_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v___x_2257_);
v___x_2259_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2258_;
}
v_reusejp_2258_:
{
return v___x_2259_;
}
}
}
else
{
lean_object* v_a_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2269_; 
v_a_2262_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2264_ = v___x_2252_;
v_isShared_2265_ = v_isSharedCheck_2269_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_a_2262_);
lean_dec(v___x_2252_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2269_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2267_; 
if (v_isShared_2265_ == 0)
{
v___x_2267_ = v___x_2264_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_a_2262_);
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
}
}
else
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2279_; 
lean_del_object(v___x_2216_);
lean_dec(v_val_2214_);
lean_del_object(v___x_2212_);
lean_dec_ref(v_a_2187_);
lean_dec(v_a_1922_);
lean_dec_ref(v_a_1921_);
lean_dec(v_a_1920_);
lean_dec_ref(v_a_1919_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v_a_2272_ = lean_ctor_get(v___x_2218_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2274_ = v___x_2218_;
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2218_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2277_; 
if (v_isShared_2275_ == 0)
{
v___x_2277_ = v___x_2274_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_a_2272_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
}
}
}
else
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
lean_del_object(v___x_2212_);
lean_dec(v_a_2210_);
lean_dec_ref(v_a_2187_);
v___x_2281_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__4, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__4_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__4);
lean_inc_ref(v_e_1918_);
v___x_2282_ = l_Lean_MessageData_ofExpr(v_e_1918_);
v___x_2283_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2281_);
lean_ctor_set(v___x_2283_, 1, v___x_2282_);
v___x_2284_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoCall___closed__18, &l_Lean_Meta_Monotonicity_solveMonoCall___closed__18_once, _init_l_Lean_Meta_Monotonicity_solveMonoCall___closed__18);
v___x_2285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2283_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = l_Lean_MessageData_ofExpr(v_arg_2198_);
v___x_2287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2285_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
v___x_2288_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v___x_2287_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_dec_ref(v___x_2288_);
v___y_2049_ = v_a_1919_;
v___y_2050_ = v_a_1920_;
v___y_2051_ = v_a_1921_;
v___y_2052_ = v_a_1922_;
goto v___jp_2048_;
}
else
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
lean_dec(v_a_1922_);
lean_dec_ref(v_a_1921_);
lean_dec(v_a_1920_);
lean_dec_ref(v_a_1919_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v_a_2289_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2288_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2288_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_a_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_arg_2198_);
lean_dec_ref(v_a_2187_);
lean_dec(v_a_1922_);
lean_dec_ref(v_a_1921_);
lean_dec(v_a_1920_);
lean_dec_ref(v_a_1919_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
return v___x_2209_;
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
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
lean_dec_ref(v_a_2187_);
lean_dec(v_a_1922_);
lean_dec_ref(v_a_1921_);
lean_dec(v_a_1920_);
lean_dec_ref(v_a_1919_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v_a_2298_ = lean_ctor_get(v___x_2192_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2192_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2192_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
else
{
lean_object* v___x_2306_; lean_object* v___x_2308_; 
lean_dec(v_a_2187_);
lean_dec(v_a_1922_);
lean_dec_ref(v_a_1921_);
lean_dec(v_a_1920_);
lean_dec_ref(v_a_1919_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
v___x_2306_ = lean_box(0);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 0, v___x_2306_);
v___x_2308_ = v___x_2189_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v___x_2306_);
v___x_2308_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
return v___x_2308_;
}
}
}
}
else
{
lean_dec(v_a_1922_);
lean_dec_ref(v_a_1921_);
lean_dec(v_a_1920_);
lean_dec_ref(v_a_1919_);
lean_dec_ref(v_e_1918_);
lean_dec_ref(v_inst___u03b1_1917_);
lean_dec_ref(v_00_u03b1_1916_);
return v___x_2186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoCall___boxed(lean_object* v_00_u03b1_2314_, lean_object* v_inst___u03b1_2315_, lean_object* v_e_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_, lean_object* v_a_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_Lean_Meta_Monotonicity_solveMonoCall(v_00_u03b1_2314_, v_inst___u03b1_2315_, v_e_2316_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0___redArg(lean_object* v_e_2323_, lean_object* v___y_2324_){
_start:
{
uint8_t v___x_2326_; 
v___x_2326_ = l_Lean_Expr_hasMVar(v_e_2323_);
if (v___x_2326_ == 0)
{
lean_object* v___x_2327_; 
v___x_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2327_, 0, v_e_2323_);
return v___x_2327_;
}
else
{
lean_object* v___x_2328_; lean_object* v_mctx_2329_; lean_object* v___x_2330_; lean_object* v_fst_2331_; lean_object* v_snd_2332_; lean_object* v___x_2333_; lean_object* v_cache_2334_; lean_object* v_zetaDeltaFVarIds_2335_; lean_object* v_postponed_2336_; lean_object* v_diag_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2346_; 
v___x_2328_ = lean_st_ref_get(v___y_2324_);
v_mctx_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc_ref(v_mctx_2329_);
lean_dec(v___x_2328_);
v___x_2330_ = l_Lean_instantiateMVarsCore(v_mctx_2329_, v_e_2323_);
v_fst_2331_ = lean_ctor_get(v___x_2330_, 0);
lean_inc(v_fst_2331_);
v_snd_2332_ = lean_ctor_get(v___x_2330_, 1);
lean_inc(v_snd_2332_);
lean_dec_ref(v___x_2330_);
v___x_2333_ = lean_st_ref_take(v___y_2324_);
v_cache_2334_ = lean_ctor_get(v___x_2333_, 1);
v_zetaDeltaFVarIds_2335_ = lean_ctor_get(v___x_2333_, 2);
v_postponed_2336_ = lean_ctor_get(v___x_2333_, 3);
v_diag_2337_ = lean_ctor_get(v___x_2333_, 4);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2346_ == 0)
{
lean_object* v_unused_2347_; 
v_unused_2347_ = lean_ctor_get(v___x_2333_, 0);
lean_dec(v_unused_2347_);
v___x_2339_ = v___x_2333_;
v_isShared_2340_ = v_isSharedCheck_2346_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_diag_2337_);
lean_inc(v_postponed_2336_);
lean_inc(v_zetaDeltaFVarIds_2335_);
lean_inc(v_cache_2334_);
lean_dec(v___x_2333_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2346_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
lean_ctor_set(v___x_2339_, 0, v_snd_2332_);
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_snd_2332_);
lean_ctor_set(v_reuseFailAlloc_2345_, 1, v_cache_2334_);
lean_ctor_set(v_reuseFailAlloc_2345_, 2, v_zetaDeltaFVarIds_2335_);
lean_ctor_set(v_reuseFailAlloc_2345_, 3, v_postponed_2336_);
lean_ctor_set(v_reuseFailAlloc_2345_, 4, v_diag_2337_);
v___x_2342_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = lean_st_ref_set(v___y_2324_, v___x_2342_);
v___x_2344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2344_, 0, v_fst_2331_);
return v___x_2344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0___redArg___boxed(lean_object* v_e_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
lean_object* v_res_2351_; 
v_res_2351_ = l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0___redArg(v_e_2348_, v___y_2349_);
lean_dec(v___y_2349_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0(lean_object* v_e_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
lean_object* v___x_2358_; 
v___x_2358_ = l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0___redArg(v_e_2352_, v___y_2354_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0___boxed(lean_object* v_e_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0(v_e_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_);
lean_dec(v___y_2363_);
lean_dec_ref(v___y_2362_);
lean_dec(v___y_2361_);
lean_dec_ref(v___y_2360_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg(lean_object* v_cls_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v_options_2372_; uint8_t v_hasTrace_2373_; 
v_options_2372_ = lean_ctor_get(v___y_2370_, 2);
v_hasTrace_2373_ = lean_ctor_get_uint8(v_options_2372_, sizeof(void*)*1);
if (v_hasTrace_2373_ == 0)
{
lean_object* v___x_2374_; lean_object* v___x_2375_; 
lean_dec(v_cls_2369_);
v___x_2374_ = lean_box(v_hasTrace_2373_);
v___x_2375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
return v___x_2375_;
}
else
{
lean_object* v_inheritedTraceOptions_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; uint8_t v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v_inheritedTraceOptions_2376_ = lean_ctor_get(v___y_2370_, 13);
v___x_2377_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg___closed__1));
v___x_2378_ = l_Lean_Name_append(v___x_2377_, v_cls_2369_);
v___x_2379_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2376_, v_options_2372_, v___x_2378_);
lean_dec(v___x_2378_);
v___x_2380_ = lean_box(v___x_2379_);
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2380_);
return v___x_2381_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg___boxed(lean_object* v_cls_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_){
_start:
{
lean_object* v_res_2385_; 
v_res_2385_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg(v_cls_2382_, v___y_2383_);
lean_dec_ref(v___y_2383_);
return v_res_2385_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2(lean_object* v_cls_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_){
_start:
{
lean_object* v___x_2392_; 
v___x_2392_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg(v_cls_2386_, v___y_2389_);
return v___x_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___boxed(lean_object* v_cls_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2(v_cls_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg___lam__0(lean_object* v_k_2400_, lean_object* v_b_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
lean_object* v___x_2407_; 
v___x_2407_ = lean_apply_6(v_k_2400_, v_b_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, lean_box(0));
return v___x_2407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg___lam__0___boxed(lean_object* v_k_2408_, lean_object* v_b_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_){
_start:
{
lean_object* v_res_2415_; 
v_res_2415_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg___lam__0(v_k_2408_, v_b_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_);
return v_res_2415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg(lean_object* v_name_2416_, lean_object* v_type_2417_, lean_object* v_val_2418_, lean_object* v_k_2419_, uint8_t v_nondep_2420_, uint8_t v_kind_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
lean_object* v___f_2427_; lean_object* v___x_2428_; 
v___f_2427_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2427_, 0, v_k_2419_);
v___x_2428_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2416_, v_type_2417_, v_val_2418_, v___f_2427_, v_nondep_2420_, v_kind_2421_, v___y_2422_, v___y_2423_, v___y_2424_, v___y_2425_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2436_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2431_ = v___x_2428_;
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v___x_2428_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2434_; 
if (v_isShared_2432_ == 0)
{
v___x_2434_ = v___x_2431_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v_a_2429_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
else
{
lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2444_; 
v_a_2437_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2439_ = v___x_2428_;
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___x_2428_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2442_; 
if (v_isShared_2440_ == 0)
{
v___x_2442_ = v___x_2439_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_a_2437_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg___boxed(lean_object* v_name_2445_, lean_object* v_type_2446_, lean_object* v_val_2447_, lean_object* v_k_2448_, lean_object* v_nondep_2449_, lean_object* v_kind_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
uint8_t v_nondep_boxed_2456_; uint8_t v_kind_boxed_2457_; lean_object* v_res_2458_; 
v_nondep_boxed_2456_ = lean_unbox(v_nondep_2449_);
v_kind_boxed_2457_ = lean_unbox(v_kind_2450_);
v_res_2458_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg(v_name_2445_, v_type_2446_, v_val_2447_, v_k_2448_, v_nondep_boxed_2456_, v_kind_boxed_2457_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_);
return v_res_2458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9(lean_object* v_00_u03b1_2459_, lean_object* v_name_2460_, lean_object* v_type_2461_, lean_object* v_val_2462_, lean_object* v_k_2463_, uint8_t v_nondep_2464_, uint8_t v_kind_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v___x_2471_; 
v___x_2471_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg(v_name_2460_, v_type_2461_, v_val_2462_, v_k_2463_, v_nondep_2464_, v_kind_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___boxed(lean_object* v_00_u03b1_2472_, lean_object* v_name_2473_, lean_object* v_type_2474_, lean_object* v_val_2475_, lean_object* v_k_2476_, lean_object* v_nondep_2477_, lean_object* v_kind_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
uint8_t v_nondep_boxed_2484_; uint8_t v_kind_boxed_2485_; lean_object* v_res_2486_; 
v_nondep_boxed_2484_ = lean_unbox(v_nondep_2477_);
v_kind_boxed_2485_ = lean_unbox(v_kind_2478_);
v_res_2486_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9(v_00_u03b1_2472_, v_name_2473_, v_type_2474_, v_val_2475_, v_k_2476_, v_nondep_boxed_2484_, v_kind_boxed_2485_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10___redArg(lean_object* v_mvarId_2487_, lean_object* v_x_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_){
_start:
{
lean_object* v___x_2494_; 
v___x_2494_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2487_, v_x_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___x_2494_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2494_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
v_a_2503_ = lean_ctor_get(v___x_2494_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2494_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2494_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2494_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10___redArg___boxed(lean_object* v_mvarId_2511_, lean_object* v_x_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10___redArg(v_mvarId_2511_, v_x_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10(lean_object* v_00_u03b1_2519_, lean_object* v_mvarId_2520_, lean_object* v_x_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
lean_object* v___x_2527_; 
v___x_2527_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10___redArg(v_mvarId_2520_, v_x_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10___boxed(lean_object* v_00_u03b1_2528_, lean_object* v_mvarId_2529_, lean_object* v_x_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10(v_00_u03b1_2528_, v_mvarId_2529_, v_x_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13_spec__14___redArg(lean_object* v_x_2537_, lean_object* v_x_2538_, lean_object* v_x_2539_, lean_object* v_x_2540_){
_start:
{
lean_object* v_ks_2541_; lean_object* v_vs_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2566_; 
v_ks_2541_ = lean_ctor_get(v_x_2537_, 0);
v_vs_2542_ = lean_ctor_get(v_x_2537_, 1);
v_isSharedCheck_2566_ = !lean_is_exclusive(v_x_2537_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2544_ = v_x_2537_;
v_isShared_2545_ = v_isSharedCheck_2566_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_vs_2542_);
lean_inc(v_ks_2541_);
lean_dec(v_x_2537_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2566_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2546_; uint8_t v___x_2547_; 
v___x_2546_ = lean_array_get_size(v_ks_2541_);
v___x_2547_ = lean_nat_dec_lt(v_x_2538_, v___x_2546_);
if (v___x_2547_ == 0)
{
lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2551_; 
lean_dec(v_x_2538_);
v___x_2548_ = lean_array_push(v_ks_2541_, v_x_2539_);
v___x_2549_ = lean_array_push(v_vs_2542_, v_x_2540_);
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 1, v___x_2549_);
lean_ctor_set(v___x_2544_, 0, v___x_2548_);
v___x_2551_ = v___x_2544_;
goto v_reusejp_2550_;
}
else
{
lean_object* v_reuseFailAlloc_2552_; 
v_reuseFailAlloc_2552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2552_, 0, v___x_2548_);
lean_ctor_set(v_reuseFailAlloc_2552_, 1, v___x_2549_);
v___x_2551_ = v_reuseFailAlloc_2552_;
goto v_reusejp_2550_;
}
v_reusejp_2550_:
{
return v___x_2551_;
}
}
else
{
lean_object* v_k_x27_2553_; uint8_t v___x_2554_; 
v_k_x27_2553_ = lean_array_fget_borrowed(v_ks_2541_, v_x_2538_);
v___x_2554_ = l_Lean_instBEqMVarId_beq(v_x_2539_, v_k_x27_2553_);
if (v___x_2554_ == 0)
{
lean_object* v___x_2556_; 
if (v_isShared_2545_ == 0)
{
v___x_2556_ = v___x_2544_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v_ks_2541_);
lean_ctor_set(v_reuseFailAlloc_2560_, 1, v_vs_2542_);
v___x_2556_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2557_ = lean_unsigned_to_nat(1u);
v___x_2558_ = lean_nat_add(v_x_2538_, v___x_2557_);
lean_dec(v_x_2538_);
v_x_2537_ = v___x_2556_;
v_x_2538_ = v___x_2558_;
goto _start;
}
}
else
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2564_; 
v___x_2561_ = lean_array_fset(v_ks_2541_, v_x_2538_, v_x_2539_);
v___x_2562_ = lean_array_fset(v_vs_2542_, v_x_2538_, v_x_2540_);
lean_dec(v_x_2538_);
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 1, v___x_2562_);
lean_ctor_set(v___x_2544_, 0, v___x_2561_);
v___x_2564_ = v___x_2544_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v___x_2561_);
lean_ctor_set(v_reuseFailAlloc_2565_, 1, v___x_2562_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13___redArg(lean_object* v_n_2567_, lean_object* v_k_2568_, lean_object* v_v_2569_){
_start:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2570_ = lean_unsigned_to_nat(0u);
v___x_2571_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13_spec__14___redArg(v_n_2567_, v___x_2570_, v_k_2568_, v_v_2569_);
return v___x_2571_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_2572_; 
v___x_2572_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg(lean_object* v_x_2573_, size_t v_x_2574_, size_t v_x_2575_, lean_object* v_x_2576_, lean_object* v_x_2577_){
_start:
{
if (lean_obj_tag(v_x_2573_) == 0)
{
lean_object* v_es_2578_; size_t v___x_2579_; size_t v___x_2580_; size_t v___x_2581_; size_t v___x_2582_; lean_object* v_j_2583_; lean_object* v___x_2584_; uint8_t v___x_2585_; 
v_es_2578_ = lean_ctor_get(v_x_2573_, 0);
v___x_2579_ = ((size_t)5ULL);
v___x_2580_ = ((size_t)1ULL);
v___x_2581_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1);
v___x_2582_ = lean_usize_land(v_x_2574_, v___x_2581_);
v_j_2583_ = lean_usize_to_nat(v___x_2582_);
v___x_2584_ = lean_array_get_size(v_es_2578_);
v___x_2585_ = lean_nat_dec_lt(v_j_2583_, v___x_2584_);
if (v___x_2585_ == 0)
{
lean_dec(v_j_2583_);
lean_dec(v_x_2577_);
lean_dec(v_x_2576_);
return v_x_2573_;
}
else
{
lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2622_; 
lean_inc_ref(v_es_2578_);
v_isSharedCheck_2622_ = !lean_is_exclusive(v_x_2573_);
if (v_isSharedCheck_2622_ == 0)
{
lean_object* v_unused_2623_; 
v_unused_2623_ = lean_ctor_get(v_x_2573_, 0);
lean_dec(v_unused_2623_);
v___x_2587_ = v_x_2573_;
v_isShared_2588_ = v_isSharedCheck_2622_;
goto v_resetjp_2586_;
}
else
{
lean_dec(v_x_2573_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2622_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v_v_2589_; lean_object* v___x_2590_; lean_object* v_xs_x27_2591_; lean_object* v___y_2593_; 
v_v_2589_ = lean_array_fget(v_es_2578_, v_j_2583_);
v___x_2590_ = lean_box(0);
v_xs_x27_2591_ = lean_array_fset(v_es_2578_, v_j_2583_, v___x_2590_);
switch(lean_obj_tag(v_v_2589_))
{
case 0:
{
lean_object* v_key_2598_; lean_object* v_val_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2609_; 
v_key_2598_ = lean_ctor_get(v_v_2589_, 0);
v_val_2599_ = lean_ctor_get(v_v_2589_, 1);
v_isSharedCheck_2609_ = !lean_is_exclusive(v_v_2589_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2601_ = v_v_2589_;
v_isShared_2602_ = v_isSharedCheck_2609_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_val_2599_);
lean_inc(v_key_2598_);
lean_dec(v_v_2589_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2609_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
uint8_t v___x_2603_; 
v___x_2603_ = l_Lean_instBEqMVarId_beq(v_x_2576_, v_key_2598_);
if (v___x_2603_ == 0)
{
lean_object* v___x_2604_; lean_object* v___x_2605_; 
lean_del_object(v___x_2601_);
v___x_2604_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2598_, v_val_2599_, v_x_2576_, v_x_2577_);
v___x_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2605_, 0, v___x_2604_);
v___y_2593_ = v___x_2605_;
goto v___jp_2592_;
}
else
{
lean_object* v___x_2607_; 
lean_dec(v_val_2599_);
lean_dec(v_key_2598_);
if (v_isShared_2602_ == 0)
{
lean_ctor_set(v___x_2601_, 1, v_x_2577_);
lean_ctor_set(v___x_2601_, 0, v_x_2576_);
v___x_2607_ = v___x_2601_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_x_2576_);
lean_ctor_set(v_reuseFailAlloc_2608_, 1, v_x_2577_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
v___y_2593_ = v___x_2607_;
goto v___jp_2592_;
}
}
}
}
case 1:
{
lean_object* v_node_2610_; lean_object* v___x_2612_; uint8_t v_isShared_2613_; uint8_t v_isSharedCheck_2620_; 
v_node_2610_ = lean_ctor_get(v_v_2589_, 0);
v_isSharedCheck_2620_ = !lean_is_exclusive(v_v_2589_);
if (v_isSharedCheck_2620_ == 0)
{
v___x_2612_ = v_v_2589_;
v_isShared_2613_ = v_isSharedCheck_2620_;
goto v_resetjp_2611_;
}
else
{
lean_inc(v_node_2610_);
lean_dec(v_v_2589_);
v___x_2612_ = lean_box(0);
v_isShared_2613_ = v_isSharedCheck_2620_;
goto v_resetjp_2611_;
}
v_resetjp_2611_:
{
size_t v___x_2614_; size_t v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2618_; 
v___x_2614_ = lean_usize_shift_right(v_x_2574_, v___x_2579_);
v___x_2615_ = lean_usize_add(v_x_2575_, v___x_2580_);
v___x_2616_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg(v_node_2610_, v___x_2614_, v___x_2615_, v_x_2576_, v_x_2577_);
if (v_isShared_2613_ == 0)
{
lean_ctor_set(v___x_2612_, 0, v___x_2616_);
v___x_2618_ = v___x_2612_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v___x_2616_);
v___x_2618_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
v___y_2593_ = v___x_2618_;
goto v___jp_2592_;
}
}
}
default: 
{
lean_object* v___x_2621_; 
v___x_2621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2621_, 0, v_x_2576_);
lean_ctor_set(v___x_2621_, 1, v_x_2577_);
v___y_2593_ = v___x_2621_;
goto v___jp_2592_;
}
}
v___jp_2592_:
{
lean_object* v___x_2594_; lean_object* v___x_2596_; 
v___x_2594_ = lean_array_fset(v_xs_x27_2591_, v_j_2583_, v___y_2593_);
lean_dec(v_j_2583_);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 0, v___x_2594_);
v___x_2596_ = v___x_2587_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2594_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
}
}
else
{
lean_object* v_ks_2624_; lean_object* v_vs_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2645_; 
v_ks_2624_ = lean_ctor_get(v_x_2573_, 0);
v_vs_2625_ = lean_ctor_get(v_x_2573_, 1);
v_isSharedCheck_2645_ = !lean_is_exclusive(v_x_2573_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2627_ = v_x_2573_;
v_isShared_2628_ = v_isSharedCheck_2645_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_vs_2625_);
lean_inc(v_ks_2624_);
lean_dec(v_x_2573_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2645_;
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
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_ks_2624_);
lean_ctor_set(v_reuseFailAlloc_2644_, 1, v_vs_2625_);
v___x_2630_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
lean_object* v_newNode_2631_; uint8_t v___y_2633_; size_t v___x_2639_; uint8_t v___x_2640_; 
v_newNode_2631_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13___redArg(v___x_2630_, v_x_2576_, v_x_2577_);
v___x_2639_ = ((size_t)7ULL);
v___x_2640_ = lean_usize_dec_le(v___x_2639_, v_x_2575_);
if (v___x_2640_ == 0)
{
lean_object* v___x_2641_; lean_object* v___x_2642_; uint8_t v___x_2643_; 
v___x_2641_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2631_);
v___x_2642_ = lean_unsigned_to_nat(4u);
v___x_2643_ = lean_nat_dec_lt(v___x_2641_, v___x_2642_);
lean_dec(v___x_2641_);
v___y_2633_ = v___x_2643_;
goto v___jp_2632_;
}
else
{
v___y_2633_ = v___x_2640_;
goto v___jp_2632_;
}
v___jp_2632_:
{
if (v___y_2633_ == 0)
{
lean_object* v_ks_2634_; lean_object* v_vs_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v_ks_2634_ = lean_ctor_get(v_newNode_2631_, 0);
lean_inc_ref(v_ks_2634_);
v_vs_2635_ = lean_ctor_get(v_newNode_2631_, 1);
lean_inc_ref(v_vs_2635_);
lean_dec_ref(v_newNode_2631_);
v___x_2636_ = lean_unsigned_to_nat(0u);
v___x_2637_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg___closed__0);
v___x_2638_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14___redArg(v_x_2575_, v_ks_2634_, v_vs_2635_, v___x_2636_, v___x_2637_);
lean_dec_ref(v_vs_2635_);
lean_dec_ref(v_ks_2634_);
return v___x_2638_;
}
else
{
return v_newNode_2631_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14___redArg(size_t v_depth_2646_, lean_object* v_keys_2647_, lean_object* v_vals_2648_, lean_object* v_i_2649_, lean_object* v_entries_2650_){
_start:
{
lean_object* v___x_2651_; uint8_t v___x_2652_; 
v___x_2651_ = lean_array_get_size(v_keys_2647_);
v___x_2652_ = lean_nat_dec_lt(v_i_2649_, v___x_2651_);
if (v___x_2652_ == 0)
{
lean_dec(v_i_2649_);
return v_entries_2650_;
}
else
{
lean_object* v_k_2653_; lean_object* v_v_2654_; uint64_t v___x_2655_; size_t v_h_2656_; size_t v___x_2657_; lean_object* v___x_2658_; size_t v___x_2659_; size_t v___x_2660_; size_t v___x_2661_; size_t v_h_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v_k_2653_ = lean_array_fget_borrowed(v_keys_2647_, v_i_2649_);
v_v_2654_ = lean_array_fget_borrowed(v_vals_2648_, v_i_2649_);
v___x_2655_ = l_Lean_instHashableMVarId_hash(v_k_2653_);
v_h_2656_ = lean_uint64_to_usize(v___x_2655_);
v___x_2657_ = ((size_t)5ULL);
v___x_2658_ = lean_unsigned_to_nat(1u);
v___x_2659_ = ((size_t)1ULL);
v___x_2660_ = lean_usize_sub(v_depth_2646_, v___x_2659_);
v___x_2661_ = lean_usize_mul(v___x_2657_, v___x_2660_);
v_h_2662_ = lean_usize_shift_right(v_h_2656_, v___x_2661_);
v___x_2663_ = lean_nat_add(v_i_2649_, v___x_2658_);
lean_dec(v_i_2649_);
lean_inc(v_v_2654_);
lean_inc(v_k_2653_);
v___x_2664_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg(v_entries_2650_, v_h_2662_, v_depth_2646_, v_k_2653_, v_v_2654_);
v_i_2649_ = v___x_2663_;
v_entries_2650_ = v___x_2664_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14___redArg___boxed(lean_object* v_depth_2666_, lean_object* v_keys_2667_, lean_object* v_vals_2668_, lean_object* v_i_2669_, lean_object* v_entries_2670_){
_start:
{
size_t v_depth_boxed_2671_; lean_object* v_res_2672_; 
v_depth_boxed_2671_ = lean_unbox_usize(v_depth_2666_);
lean_dec(v_depth_2666_);
v_res_2672_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14___redArg(v_depth_boxed_2671_, v_keys_2667_, v_vals_2668_, v_i_2669_, v_entries_2670_);
lean_dec_ref(v_vals_2668_);
lean_dec_ref(v_keys_2667_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg___boxed(lean_object* v_x_2673_, lean_object* v_x_2674_, lean_object* v_x_2675_, lean_object* v_x_2676_, lean_object* v_x_2677_){
_start:
{
size_t v_x_41693__boxed_2678_; size_t v_x_41694__boxed_2679_; lean_object* v_res_2680_; 
v_x_41693__boxed_2678_ = lean_unbox_usize(v_x_2674_);
lean_dec(v_x_2674_);
v_x_41694__boxed_2679_ = lean_unbox_usize(v_x_2675_);
lean_dec(v_x_2675_);
v_res_2680_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg(v_x_2673_, v_x_41693__boxed_2678_, v_x_41694__boxed_2679_, v_x_2676_, v_x_2677_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1___redArg(lean_object* v_x_2681_, lean_object* v_x_2682_, lean_object* v_x_2683_){
_start:
{
uint64_t v___x_2684_; size_t v___x_2685_; size_t v___x_2686_; lean_object* v___x_2687_; 
v___x_2684_ = l_Lean_instHashableMVarId_hash(v_x_2682_);
v___x_2685_ = lean_uint64_to_usize(v___x_2684_);
v___x_2686_ = ((size_t)1ULL);
v___x_2687_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg(v_x_2681_, v___x_2685_, v___x_2686_, v_x_2682_, v_x_2683_);
return v___x_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___redArg(lean_object* v_mvarId_2688_, lean_object* v_val_2689_, lean_object* v___y_2690_){
_start:
{
lean_object* v___x_2692_; lean_object* v_mctx_2693_; lean_object* v_cache_2694_; lean_object* v_zetaDeltaFVarIds_2695_; lean_object* v_postponed_2696_; lean_object* v_diag_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2724_; 
v___x_2692_ = lean_st_ref_take(v___y_2690_);
v_mctx_2693_ = lean_ctor_get(v___x_2692_, 0);
v_cache_2694_ = lean_ctor_get(v___x_2692_, 1);
v_zetaDeltaFVarIds_2695_ = lean_ctor_get(v___x_2692_, 2);
v_postponed_2696_ = lean_ctor_get(v___x_2692_, 3);
v_diag_2697_ = lean_ctor_get(v___x_2692_, 4);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2692_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2699_ = v___x_2692_;
v_isShared_2700_ = v_isSharedCheck_2724_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_diag_2697_);
lean_inc(v_postponed_2696_);
lean_inc(v_zetaDeltaFVarIds_2695_);
lean_inc(v_cache_2694_);
lean_inc(v_mctx_2693_);
lean_dec(v___x_2692_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2724_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v_depth_2701_; lean_object* v_levelAssignDepth_2702_; lean_object* v_mvarCounter_2703_; lean_object* v_lDepth_2704_; lean_object* v_decls_2705_; lean_object* v_userNames_2706_; lean_object* v_lAssignment_2707_; lean_object* v_eAssignment_2708_; lean_object* v_dAssignment_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2723_; 
v_depth_2701_ = lean_ctor_get(v_mctx_2693_, 0);
v_levelAssignDepth_2702_ = lean_ctor_get(v_mctx_2693_, 1);
v_mvarCounter_2703_ = lean_ctor_get(v_mctx_2693_, 2);
v_lDepth_2704_ = lean_ctor_get(v_mctx_2693_, 3);
v_decls_2705_ = lean_ctor_get(v_mctx_2693_, 4);
v_userNames_2706_ = lean_ctor_get(v_mctx_2693_, 5);
v_lAssignment_2707_ = lean_ctor_get(v_mctx_2693_, 6);
v_eAssignment_2708_ = lean_ctor_get(v_mctx_2693_, 7);
v_dAssignment_2709_ = lean_ctor_get(v_mctx_2693_, 8);
v_isSharedCheck_2723_ = !lean_is_exclusive(v_mctx_2693_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2711_ = v_mctx_2693_;
v_isShared_2712_ = v_isSharedCheck_2723_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_dAssignment_2709_);
lean_inc(v_eAssignment_2708_);
lean_inc(v_lAssignment_2707_);
lean_inc(v_userNames_2706_);
lean_inc(v_decls_2705_);
lean_inc(v_lDepth_2704_);
lean_inc(v_mvarCounter_2703_);
lean_inc(v_levelAssignDepth_2702_);
lean_inc(v_depth_2701_);
lean_dec(v_mctx_2693_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2723_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2713_; lean_object* v___x_2715_; 
v___x_2713_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1___redArg(v_eAssignment_2708_, v_mvarId_2688_, v_val_2689_);
if (v_isShared_2712_ == 0)
{
lean_ctor_set(v___x_2711_, 7, v___x_2713_);
v___x_2715_ = v___x_2711_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_depth_2701_);
lean_ctor_set(v_reuseFailAlloc_2722_, 1, v_levelAssignDepth_2702_);
lean_ctor_set(v_reuseFailAlloc_2722_, 2, v_mvarCounter_2703_);
lean_ctor_set(v_reuseFailAlloc_2722_, 3, v_lDepth_2704_);
lean_ctor_set(v_reuseFailAlloc_2722_, 4, v_decls_2705_);
lean_ctor_set(v_reuseFailAlloc_2722_, 5, v_userNames_2706_);
lean_ctor_set(v_reuseFailAlloc_2722_, 6, v_lAssignment_2707_);
lean_ctor_set(v_reuseFailAlloc_2722_, 7, v___x_2713_);
lean_ctor_set(v_reuseFailAlloc_2722_, 8, v_dAssignment_2709_);
v___x_2715_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
lean_object* v___x_2717_; 
if (v_isShared_2700_ == 0)
{
lean_ctor_set(v___x_2699_, 0, v___x_2715_);
v___x_2717_ = v___x_2699_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v___x_2715_);
lean_ctor_set(v_reuseFailAlloc_2721_, 1, v_cache_2694_);
lean_ctor_set(v_reuseFailAlloc_2721_, 2, v_zetaDeltaFVarIds_2695_);
lean_ctor_set(v_reuseFailAlloc_2721_, 3, v_postponed_2696_);
lean_ctor_set(v_reuseFailAlloc_2721_, 4, v_diag_2697_);
v___x_2717_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2718_ = lean_st_ref_set(v___y_2690_, v___x_2717_);
v___x_2719_ = lean_box(0);
v___x_2720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
return v___x_2720_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___redArg___boxed(lean_object* v_mvarId_2725_, lean_object* v_val_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v_res_2729_; 
v_res_2729_ = l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___redArg(v_mvarId_2725_, v_val_2726_, v___y_2727_);
lean_dec(v___y_2727_);
return v_res_2729_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
v___x_2731_ = ((lean_object*)(l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__2));
v___x_2732_ = lean_unsigned_to_nat(20u);
v___x_2733_ = lean_unsigned_to_nat(1918u);
v___x_2734_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__0));
v___x_2735_ = ((lean_object*)(l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__1___closed__0));
v___x_2736_ = l_mkPanicMessageWithDecl(v___x_2735_, v___x_2734_, v___x_2733_, v___x_2732_, v___x_2731_);
return v___x_2736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__0(lean_object* v_a_2737_, uint8_t v___x_2738_, uint8_t v___x_2739_, lean_object* v_goal_2740_, lean_object* v___x_2741_, lean_object* v_body_2742_, lean_object* v_x_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_){
_start:
{
lean_object* v___y_2750_; 
if (lean_obj_tag(v___x_2741_) == 6)
{
lean_object* v_binderName_2771_; lean_object* v_binderType_2772_; lean_object* v_body_2773_; uint8_t v_binderInfo_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; uint8_t v___y_2778_; size_t v___x_2782_; size_t v___x_2783_; uint8_t v___x_2784_; 
v_binderName_2771_ = lean_ctor_get(v___x_2741_, 0);
v_binderType_2772_ = lean_ctor_get(v___x_2741_, 1);
v_body_2773_ = lean_ctor_get(v___x_2741_, 2);
v_binderInfo_2774_ = lean_ctor_get_uint8(v___x_2741_, sizeof(void*)*3 + 8);
v___x_2775_ = l_Lean_Expr_bindingDomain_x21(v___x_2741_);
v___x_2776_ = lean_expr_instantiate1(v_body_2742_, v_x_2743_);
v___x_2782_ = lean_ptr_addr(v_binderType_2772_);
v___x_2783_ = lean_ptr_addr(v___x_2775_);
v___x_2784_ = lean_usize_dec_eq(v___x_2782_, v___x_2783_);
if (v___x_2784_ == 0)
{
v___y_2778_ = v___x_2784_;
goto v___jp_2777_;
}
else
{
size_t v___x_2785_; size_t v___x_2786_; uint8_t v___x_2787_; 
v___x_2785_ = lean_ptr_addr(v_body_2773_);
v___x_2786_ = lean_ptr_addr(v___x_2776_);
v___x_2787_ = lean_usize_dec_eq(v___x_2785_, v___x_2786_);
v___y_2778_ = v___x_2787_;
goto v___jp_2777_;
}
v___jp_2777_:
{
if (v___y_2778_ == 0)
{
lean_object* v___x_2779_; 
lean_inc(v_binderName_2771_);
lean_dec_ref(v___x_2741_);
v___x_2779_ = l_Lean_Expr_lam___override(v_binderName_2771_, v___x_2775_, v___x_2776_, v_binderInfo_2774_);
v___y_2750_ = v___x_2779_;
goto v___jp_2749_;
}
else
{
uint8_t v___x_2780_; 
v___x_2780_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2774_, v_binderInfo_2774_);
if (v___x_2780_ == 0)
{
lean_object* v___x_2781_; 
lean_inc(v_binderName_2771_);
lean_dec_ref(v___x_2741_);
v___x_2781_ = l_Lean_Expr_lam___override(v_binderName_2771_, v___x_2775_, v___x_2776_, v_binderInfo_2774_);
v___y_2750_ = v___x_2781_;
goto v___jp_2749_;
}
else
{
lean_dec_ref(v___x_2776_);
lean_dec_ref(v___x_2775_);
v___y_2750_ = v___x_2741_;
goto v___jp_2749_;
}
}
}
}
else
{
lean_object* v___x_2788_; lean_object* v___x_2789_; 
lean_dec_ref(v___x_2741_);
v___x_2788_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1);
v___x_2789_ = l_panic___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__0(v___x_2788_);
v___y_2750_ = v___x_2789_;
goto v___jp_2749_;
}
v___jp_2749_:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; 
v___x_2751_ = l_Lean_Expr_appFn_x21(v_a_2737_);
v___x_2752_ = l_Lean_Expr_app___override(v___x_2751_, v___y_2750_);
v___x_2753_ = lean_box(0);
lean_inc_ref(v___y_2744_);
v___x_2754_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2752_, v___x_2753_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; uint8_t v___x_2759_; lean_object* v___x_2760_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
lean_inc(v_a_2755_);
lean_dec_ref(v___x_2754_);
v___x_2756_ = lean_unsigned_to_nat(1u);
v___x_2757_ = lean_mk_empty_array_with_capacity(v___x_2756_);
v___x_2758_ = lean_array_push(v___x_2757_, v_x_2743_);
v___x_2759_ = 1;
lean_inc(v_a_2755_);
v___x_2760_ = l_Lean_Meta_mkLetFVars(v___x_2758_, v_a_2755_, v___x_2738_, v___x_2739_, v___x_2759_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_);
lean_dec_ref(v___y_2744_);
lean_dec_ref(v___x_2758_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2769_; 
v_a_2761_ = lean_ctor_get(v___x_2760_, 0);
lean_inc(v_a_2761_);
lean_dec_ref(v___x_2760_);
v___x_2762_ = l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___redArg(v_goal_2740_, v_a_2761_, v___y_2745_);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2762_);
if (v_isSharedCheck_2769_ == 0)
{
lean_object* v_unused_2770_; 
v_unused_2770_ = lean_ctor_get(v___x_2762_, 0);
lean_dec(v_unused_2770_);
v___x_2764_ = v___x_2762_;
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
else
{
lean_dec(v___x_2762_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2767_; 
if (v_isShared_2765_ == 0)
{
lean_ctor_set(v___x_2764_, 0, v_a_2755_);
v___x_2767_ = v___x_2764_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_a_2755_);
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
lean_dec(v_a_2755_);
lean_dec(v_goal_2740_);
return v___x_2760_;
}
}
else
{
lean_dec_ref(v___y_2744_);
lean_dec_ref(v_x_2743_);
lean_dec(v_goal_2740_);
return v___x_2754_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___boxed(lean_object* v_a_2790_, lean_object* v___x_2791_, lean_object* v___x_2792_, lean_object* v_goal_2793_, lean_object* v___x_2794_, lean_object* v_body_2795_, lean_object* v_x_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_){
_start:
{
uint8_t v___x_41923__boxed_2802_; uint8_t v___x_41924__boxed_2803_; lean_object* v_res_2804_; 
v___x_41923__boxed_2802_ = lean_unbox(v___x_2791_);
v___x_41924__boxed_2803_ = lean_unbox(v___x_2792_);
v_res_2804_ = l_Lean_Meta_Monotonicity_solveMonoStep___lam__0(v_a_2790_, v___x_41923__boxed_2802_, v___x_41924__boxed_2803_, v_goal_2793_, v___x_2794_, v_body_2795_, v_x_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_);
lean_dec(v___y_2800_);
lean_dec_ref(v___y_2799_);
lean_dec(v___y_2798_);
lean_dec_ref(v_body_2795_);
lean_dec_ref(v_a_2790_);
return v_res_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__1(lean_object* v___x_2805_, lean_object* v_f_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2812_ = lean_expr_instantiate1(v___x_2805_, v_f_2806_);
v___x_2813_ = l_Lean_Meta_Monotonicity_findMonoThms(v___x_2812_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__1___boxed(lean_object* v___x_2814_, lean_object* v_f_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v_res_2821_; 
v_res_2821_ = l_Lean_Meta_Monotonicity_solveMonoStep___lam__1(v___x_2814_, v_f_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_);
lean_dec_ref(v_f_2815_);
lean_dec_ref(v___x_2814_);
return v_res_2821_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__7(uint8_t v___x_2822_, size_t v_sz_2823_, size_t v_i_2824_, lean_object* v_bs_2825_){
_start:
{
uint8_t v___x_2826_; 
v___x_2826_ = lean_usize_dec_lt(v_i_2824_, v_sz_2823_);
if (v___x_2826_ == 0)
{
return v_bs_2825_;
}
else
{
lean_object* v_v_2827_; lean_object* v___x_2828_; lean_object* v_bs_x27_2829_; lean_object* v___x_2830_; size_t v___x_2831_; size_t v___x_2832_; lean_object* v___x_2833_; 
v_v_2827_ = lean_array_uget(v_bs_2825_, v_i_2824_);
v___x_2828_ = lean_unsigned_to_nat(0u);
v_bs_x27_2829_ = lean_array_uset(v_bs_2825_, v_i_2824_, v___x_2828_);
v___x_2830_ = l_Lean_MessageData_ofConstName(v_v_2827_, v___x_2822_);
v___x_2831_ = ((size_t)1ULL);
v___x_2832_ = lean_usize_add(v_i_2824_, v___x_2831_);
v___x_2833_ = lean_array_uset(v_bs_x27_2829_, v_i_2824_, v___x_2830_);
v_i_2824_ = v___x_2832_;
v_bs_2825_ = v___x_2833_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__7___boxed(lean_object* v___x_2835_, lean_object* v_sz_2836_, lean_object* v_i_2837_, lean_object* v_bs_2838_){
_start:
{
uint8_t v___x_42067__boxed_2839_; size_t v_sz_boxed_2840_; size_t v_i_boxed_2841_; lean_object* v_res_2842_; 
v___x_42067__boxed_2839_ = lean_unbox(v___x_2835_);
v_sz_boxed_2840_ = lean_unbox_usize(v_sz_2836_);
lean_dec(v_sz_2836_);
v_i_boxed_2841_ = lean_unbox_usize(v_i_2837_);
lean_dec(v_i_2837_);
v_res_2842_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__7(v___x_42067__boxed_2839_, v_sz_boxed_2840_, v_i_boxed_2841_, v_bs_2838_);
return v_res_2842_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg(lean_object* v_upperBound_2846_, lean_object* v___x_2847_, uint8_t v___x_2848_, lean_object* v_a_2849_, lean_object* v_b_2850_){
_start:
{
uint8_t v___x_2852_; 
v___x_2852_ = lean_nat_dec_lt(v_a_2849_, v_upperBound_2846_);
if (v___x_2852_ == 0)
{
lean_object* v___x_2853_; 
lean_dec(v_a_2849_);
v___x_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2853_, 0, v_b_2850_);
return v___x_2853_;
}
else
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; uint8_t v___x_2857_; 
lean_dec_ref(v_b_2850_);
v___x_2854_ = lean_box(0);
v___x_2855_ = l_Lean_instInhabitedExpr;
v___x_2856_ = lean_array_get_borrowed(v___x_2855_, v___x_2847_, v_a_2849_);
v___x_2857_ = l_Lean_Expr_hasLooseBVars(v___x_2856_);
if (v___x_2857_ == 0)
{
lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; 
v___x_2858_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg___closed__0));
v___x_2859_ = lean_unsigned_to_nat(1u);
v___x_2860_ = lean_nat_add(v_a_2849_, v___x_2859_);
lean_dec(v_a_2849_);
v_a_2849_ = v___x_2860_;
v_b_2850_ = v___x_2858_;
goto _start;
}
else
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
lean_dec(v_a_2849_);
v___x_2862_ = lean_box(v___x_2848_);
v___x_2863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2863_, 0, v___x_2862_);
v___x_2864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2863_);
lean_ctor_set(v___x_2864_, 1, v___x_2854_);
v___x_2865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2865_, 0, v___x_2864_);
return v___x_2865_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg___boxed(lean_object* v_upperBound_2866_, lean_object* v___x_2867_, lean_object* v___x_2868_, lean_object* v_a_2869_, lean_object* v_b_2870_, lean_object* v___y_2871_){
_start:
{
uint8_t v___x_42092__boxed_2872_; lean_object* v_res_2873_; 
v___x_42092__boxed_2872_ = lean_unbox(v___x_2868_);
v_res_2873_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg(v_upperBound_2866_, v___x_2867_, v___x_42092__boxed_2872_, v_a_2869_, v_b_2870_);
lean_dec_ref(v___x_2867_);
lean_dec(v_upperBound_2866_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5___redArg(lean_object* v_name_2874_, uint8_t v_bi_2875_, lean_object* v_type_2876_, lean_object* v_k_2877_, uint8_t v_kind_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_){
_start:
{
lean_object* v___f_2884_; lean_object* v___x_2885_; 
v___f_2884_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2884_, 0, v_k_2877_);
v___x_2885_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2874_, v_bi_2875_, v_type_2876_, v___f_2884_, v_kind_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2893_; 
v_a_2886_ = lean_ctor_get(v___x_2885_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2888_ = v___x_2885_;
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v___x_2885_);
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
v_reuseFailAlloc_2892_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2901_; 
v_a_2894_ = lean_ctor_get(v___x_2885_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v___x_2885_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2896_ = v___x_2885_;
v_isShared_2897_ = v_isSharedCheck_2901_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_a_2894_);
lean_dec(v___x_2885_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2901_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v___x_2899_; 
if (v_isShared_2897_ == 0)
{
v___x_2899_ = v___x_2896_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2900_; 
v_reuseFailAlloc_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2900_, 0, v_a_2894_);
v___x_2899_ = v_reuseFailAlloc_2900_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
return v___x_2899_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5___redArg___boxed(lean_object* v_name_2902_, lean_object* v_bi_2903_, lean_object* v_type_2904_, lean_object* v_k_2905_, lean_object* v_kind_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
uint8_t v_bi_boxed_2912_; uint8_t v_kind_boxed_2913_; lean_object* v_res_2914_; 
v_bi_boxed_2912_ = lean_unbox(v_bi_2903_);
v_kind_boxed_2913_ = lean_unbox(v_kind_2906_);
v_res_2914_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5___redArg(v_name_2902_, v_bi_boxed_2912_, v_type_2904_, v_k_2905_, v_kind_boxed_2913_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
return v_res_2914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4___redArg(lean_object* v_name_2915_, lean_object* v_type_2916_, lean_object* v_k_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
uint8_t v___x_2923_; uint8_t v___x_2924_; lean_object* v___x_2925_; 
v___x_2923_ = 0;
v___x_2924_ = 0;
v___x_2925_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5___redArg(v_name_2915_, v___x_2923_, v_type_2916_, v_k_2917_, v___x_2924_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4___redArg___boxed(lean_object* v_name_2926_, lean_object* v_type_2927_, lean_object* v_k_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_){
_start:
{
lean_object* v_res_2934_; 
v_res_2934_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4___redArg(v_name_2926_, v_type_2927_, v_k_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_);
return v_res_2934_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___closed__0(void){
_start:
{
lean_object* v___x_2935_; double v___x_2936_; 
v___x_2935_ = lean_unsigned_to_nat(0u);
v___x_2936_ = lean_float_of_nat(v___x_2935_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3(lean_object* v_cls_2939_, lean_object* v_msg_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_){
_start:
{
lean_object* v_ref_2946_; lean_object* v___x_2947_; lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2992_; 
v_ref_2946_ = lean_ctor_get(v___y_2943_, 5);
v___x_2947_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0_spec__0(v_msg_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
v_a_2948_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2950_ = v___x_2947_;
v_isShared_2951_ = v_isSharedCheck_2992_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2947_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2992_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v___x_2952_; lean_object* v_traceState_2953_; lean_object* v_env_2954_; lean_object* v_nextMacroScope_2955_; lean_object* v_ngen_2956_; lean_object* v_auxDeclNGen_2957_; lean_object* v_cache_2958_; lean_object* v_messages_2959_; lean_object* v_infoState_2960_; lean_object* v_snapshotTasks_2961_; lean_object* v___x_2963_; uint8_t v_isShared_2964_; uint8_t v_isSharedCheck_2991_; 
v___x_2952_ = lean_st_ref_take(v___y_2944_);
v_traceState_2953_ = lean_ctor_get(v___x_2952_, 4);
v_env_2954_ = lean_ctor_get(v___x_2952_, 0);
v_nextMacroScope_2955_ = lean_ctor_get(v___x_2952_, 1);
v_ngen_2956_ = lean_ctor_get(v___x_2952_, 2);
v_auxDeclNGen_2957_ = lean_ctor_get(v___x_2952_, 3);
v_cache_2958_ = lean_ctor_get(v___x_2952_, 5);
v_messages_2959_ = lean_ctor_get(v___x_2952_, 6);
v_infoState_2960_ = lean_ctor_get(v___x_2952_, 7);
v_snapshotTasks_2961_ = lean_ctor_get(v___x_2952_, 8);
v_isSharedCheck_2991_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2991_ == 0)
{
v___x_2963_ = v___x_2952_;
v_isShared_2964_ = v_isSharedCheck_2991_;
goto v_resetjp_2962_;
}
else
{
lean_inc(v_snapshotTasks_2961_);
lean_inc(v_infoState_2960_);
lean_inc(v_messages_2959_);
lean_inc(v_cache_2958_);
lean_inc(v_traceState_2953_);
lean_inc(v_auxDeclNGen_2957_);
lean_inc(v_ngen_2956_);
lean_inc(v_nextMacroScope_2955_);
lean_inc(v_env_2954_);
lean_dec(v___x_2952_);
v___x_2963_ = lean_box(0);
v_isShared_2964_ = v_isSharedCheck_2991_;
goto v_resetjp_2962_;
}
v_resetjp_2962_:
{
uint64_t v_tid_2965_; lean_object* v_traces_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2990_; 
v_tid_2965_ = lean_ctor_get_uint64(v_traceState_2953_, sizeof(void*)*1);
v_traces_2966_ = lean_ctor_get(v_traceState_2953_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v_traceState_2953_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2968_ = v_traceState_2953_;
v_isShared_2969_ = v_isSharedCheck_2990_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_traces_2966_);
lean_dec(v_traceState_2953_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2990_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2970_; double v___x_2971_; uint8_t v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2980_; 
v___x_2970_ = lean_box(0);
v___x_2971_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___closed__0);
v___x_2972_ = 0;
v___x_2973_ = ((lean_object*)(l_Lean_Meta_Monotonicity_defaultFailK___redArg___closed__8));
v___x_2974_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2974_, 0, v_cls_2939_);
lean_ctor_set(v___x_2974_, 1, v___x_2970_);
lean_ctor_set(v___x_2974_, 2, v___x_2973_);
lean_ctor_set_float(v___x_2974_, sizeof(void*)*3, v___x_2971_);
lean_ctor_set_float(v___x_2974_, sizeof(void*)*3 + 8, v___x_2971_);
lean_ctor_set_uint8(v___x_2974_, sizeof(void*)*3 + 16, v___x_2972_);
v___x_2975_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___closed__1));
v___x_2976_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2976_, 0, v___x_2974_);
lean_ctor_set(v___x_2976_, 1, v_a_2948_);
lean_ctor_set(v___x_2976_, 2, v___x_2975_);
lean_inc(v_ref_2946_);
v___x_2977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2977_, 0, v_ref_2946_);
lean_ctor_set(v___x_2977_, 1, v___x_2976_);
v___x_2978_ = l_Lean_PersistentArray_push___redArg(v_traces_2966_, v___x_2977_);
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 0, v___x_2978_);
v___x_2980_ = v___x_2968_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v___x_2978_);
lean_ctor_set_uint64(v_reuseFailAlloc_2989_, sizeof(void*)*1, v_tid_2965_);
v___x_2980_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
lean_object* v___x_2982_; 
if (v_isShared_2964_ == 0)
{
lean_ctor_set(v___x_2963_, 4, v___x_2980_);
v___x_2982_ = v___x_2963_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_env_2954_);
lean_ctor_set(v_reuseFailAlloc_2988_, 1, v_nextMacroScope_2955_);
lean_ctor_set(v_reuseFailAlloc_2988_, 2, v_ngen_2956_);
lean_ctor_set(v_reuseFailAlloc_2988_, 3, v_auxDeclNGen_2957_);
lean_ctor_set(v_reuseFailAlloc_2988_, 4, v___x_2980_);
lean_ctor_set(v_reuseFailAlloc_2988_, 5, v_cache_2958_);
lean_ctor_set(v_reuseFailAlloc_2988_, 6, v_messages_2959_);
lean_ctor_set(v_reuseFailAlloc_2988_, 7, v_infoState_2960_);
lean_ctor_set(v_reuseFailAlloc_2988_, 8, v_snapshotTasks_2961_);
v___x_2982_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2986_; 
v___x_2983_ = lean_st_ref_set(v___y_2944_, v___x_2982_);
v___x_2984_ = lean_box(0);
if (v_isShared_2951_ == 0)
{
lean_ctor_set(v___x_2950_, 0, v___x_2984_);
v___x_2986_ = v___x_2950_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v___x_2984_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3___boxed(lean_object* v_cls_2993_, lean_object* v_msg_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_){
_start:
{
lean_object* v_res_3000_; 
v_res_3000_ = l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3(v_cls_2993_, v_msg_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_);
lean_dec(v___y_2998_);
lean_dec_ref(v___y_2997_);
lean_dec(v___y_2996_);
lean_dec_ref(v___y_2995_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___lam__0(lean_object* v_a_3001_, lean_object* v_____r_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_){
_start:
{
lean_object* v___x_3008_; lean_object* v___x_3009_; 
v___x_3008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3008_, 0, v_a_3001_);
v___x_3009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3009_, 0, v___x_3008_);
return v___x_3009_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___lam__0___boxed(lean_object* v_a_3010_, lean_object* v_____r_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_){
_start:
{
lean_object* v_res_3017_; 
v_res_3017_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___lam__0(v_a_3010_, v_____r_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_);
lean_dec(v___y_3015_);
lean_dec_ref(v___y_3014_);
lean_dec(v___y_3013_);
lean_dec_ref(v___y_3012_);
return v_res_3017_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__4(void){
_start:
{
lean_object* v___x_3027_; lean_object* v___x_3028_; 
v___x_3027_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__3));
v___x_3028_ = l_Lean_stringToMessageData(v___x_3027_);
return v___x_3028_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5(lean_object* v_goal_3029_, uint8_t v___x_3030_, lean_object* v_as_3031_, size_t v_sz_3032_, size_t v_i_3033_, lean_object* v_b_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_){
_start:
{
lean_object* v_a_3041_; uint8_t v___x_3045_; 
v___x_3045_ = lean_usize_dec_lt(v_i_3033_, v_sz_3032_);
if (v___x_3045_ == 0)
{
lean_object* v___x_3046_; 
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v_goal_3029_);
v___x_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3046_, 0, v_b_3034_);
return v___x_3046_;
}
else
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v_cls_3049_; lean_object* v___y_3051_; uint8_t v___y_3052_; lean_object* v_a_3076_; lean_object* v___y_3080_; lean_object* v_a_3091_; lean_object* v___x_3092_; 
lean_dec_ref(v_b_3034_);
v___x_3047_ = lean_box(0);
v___x_3048_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__0));
v_cls_3049_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__2));
v_a_3091_ = lean_array_uget_borrowed(v_as_3031_, v_i_3033_);
lean_inc(v___y_3038_);
lean_inc_ref(v___y_3037_);
lean_inc(v___y_3036_);
lean_inc_ref(v___y_3035_);
lean_inc(v_a_3091_);
lean_inc(v_goal_3029_);
v___x_3092_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst(v_goal_3029_, v_a_3091_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
if (lean_obj_tag(v___x_3092_) == 0)
{
lean_object* v_a_3093_; lean_object* v___x_3094_; 
v_a_3093_ = lean_ctor_get(v___x_3092_, 0);
lean_inc(v_a_3093_);
lean_dec_ref(v___x_3092_);
v___x_3094_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg(v_cls_3049_, v___y_3037_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v_a_3095_; uint8_t v___x_3096_; 
v_a_3095_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3095_);
lean_dec_ref(v___x_3094_);
v___x_3096_ = lean_unbox(v_a_3095_);
lean_dec(v_a_3095_);
if (v___x_3096_ == 0)
{
lean_object* v___x_3097_; 
v___x_3097_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___lam__0(v_a_3093_, v___x_3047_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
v___y_3080_ = v___x_3097_;
goto v___jp_3079_;
}
else
{
lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3098_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__4);
lean_inc(v_a_3091_);
v___x_3099_ = l_Lean_MessageData_ofConstName(v_a_3091_, v___x_3030_);
v___x_3100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3098_);
lean_ctor_set(v___x_3100_, 1, v___x_3099_);
v___x_3101_ = l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3(v_cls_3049_, v___x_3100_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
if (lean_obj_tag(v___x_3101_) == 0)
{
lean_object* v_a_3102_; lean_object* v___x_3103_; 
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_a_3102_);
lean_dec_ref(v___x_3101_);
v___x_3103_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___lam__0(v_a_3093_, v_a_3102_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
v___y_3080_ = v___x_3103_;
goto v___jp_3079_;
}
else
{
lean_object* v_a_3104_; 
lean_dec(v_a_3093_);
v_a_3104_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_a_3104_);
lean_dec_ref(v___x_3101_);
v_a_3076_ = v_a_3104_;
goto v___jp_3075_;
}
}
}
else
{
lean_object* v_a_3105_; 
lean_dec(v_a_3093_);
v_a_3105_ = lean_ctor_get(v___x_3094_, 0);
lean_inc(v_a_3105_);
lean_dec_ref(v___x_3094_);
v_a_3076_ = v_a_3105_;
goto v___jp_3075_;
}
}
else
{
lean_object* v_a_3106_; 
v_a_3106_ = lean_ctor_get(v___x_3092_, 0);
lean_inc(v_a_3106_);
lean_dec_ref(v___x_3092_);
v_a_3076_ = v_a_3106_;
goto v___jp_3075_;
}
v___jp_3050_:
{
if (v___y_3052_ == 0)
{
lean_object* v___x_3053_; 
v___x_3053_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg(v_cls_3049_, v___y_3037_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_a_3054_; uint8_t v___x_3055_; 
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
lean_inc(v_a_3054_);
lean_dec_ref(v___x_3053_);
v___x_3055_ = lean_unbox(v_a_3054_);
lean_dec(v_a_3054_);
if (v___x_3055_ == 0)
{
lean_dec_ref(v___y_3051_);
v_a_3041_ = v___x_3048_;
goto v___jp_3040_;
}
else
{
lean_object* v___x_3056_; lean_object* v___x_3057_; 
v___x_3056_ = l_Lean_Exception_toMessageData(v___y_3051_);
v___x_3057_ = l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3(v_cls_3049_, v___x_3056_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
if (lean_obj_tag(v___x_3057_) == 0)
{
lean_dec_ref(v___x_3057_);
v_a_3041_ = v___x_3048_;
goto v___jp_3040_;
}
else
{
lean_object* v_a_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3065_; 
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v_goal_3029_);
v_a_3058_ = lean_ctor_get(v___x_3057_, 0);
v_isSharedCheck_3065_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_3060_ = v___x_3057_;
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_a_3058_);
lean_dec(v___x_3057_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3065_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3063_; 
if (v_isShared_3061_ == 0)
{
v___x_3063_ = v___x_3060_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_a_3058_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
return v___x_3063_;
}
}
}
}
}
else
{
lean_object* v_a_3066_; lean_object* v___x_3068_; uint8_t v_isShared_3069_; uint8_t v_isSharedCheck_3073_; 
lean_dec_ref(v___y_3051_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v_goal_3029_);
v_a_3066_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3073_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3068_ = v___x_3053_;
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
else
{
lean_inc(v_a_3066_);
lean_dec(v___x_3053_);
v___x_3068_ = lean_box(0);
v_isShared_3069_ = v_isSharedCheck_3073_;
goto v_resetjp_3067_;
}
v_resetjp_3067_:
{
lean_object* v___x_3071_; 
if (v_isShared_3069_ == 0)
{
v___x_3071_ = v___x_3068_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_a_3066_);
v___x_3071_ = v_reuseFailAlloc_3072_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
return v___x_3071_;
}
}
}
}
else
{
lean_object* v___x_3074_; 
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v_goal_3029_);
v___x_3074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3074_, 0, v___y_3051_);
return v___x_3074_;
}
}
v___jp_3075_:
{
uint8_t v___x_3077_; 
v___x_3077_ = l_Lean_Exception_isInterrupt(v_a_3076_);
if (v___x_3077_ == 0)
{
uint8_t v___x_3078_; 
lean_inc_ref(v_a_3076_);
v___x_3078_ = l_Lean_Exception_isRuntime(v_a_3076_);
v___y_3051_ = v_a_3076_;
v___y_3052_ = v___x_3078_;
goto v___jp_3050_;
}
else
{
v___y_3051_ = v_a_3076_;
v___y_3052_ = v___x_3077_;
goto v___jp_3050_;
}
}
v___jp_3079_:
{
if (lean_obj_tag(v___y_3080_) == 0)
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3089_; 
v_a_3081_ = lean_ctor_get(v___y_3080_, 0);
v_isSharedCheck_3089_ = !lean_is_exclusive(v___y_3080_);
if (v_isSharedCheck_3089_ == 0)
{
v___x_3083_ = v___y_3080_;
v_isShared_3084_ = v_isSharedCheck_3089_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___y_3080_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3089_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
if (lean_obj_tag(v_a_3081_) == 1)
{
lean_object* v___x_3085_; lean_object* v___x_3087_; 
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v_goal_3029_);
v___x_3085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3085_, 0, v_a_3081_);
lean_ctor_set(v___x_3085_, 1, v___x_3047_);
if (v_isShared_3084_ == 0)
{
lean_ctor_set(v___x_3083_, 0, v___x_3085_);
v___x_3087_ = v___x_3083_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v___x_3085_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
else
{
lean_del_object(v___x_3083_);
lean_dec(v_a_3081_);
v_a_3041_ = v___x_3048_;
goto v___jp_3040_;
}
}
}
else
{
lean_object* v_a_3090_; 
v_a_3090_ = lean_ctor_get(v___y_3080_, 0);
lean_inc(v_a_3090_);
lean_dec_ref(v___y_3080_);
v_a_3076_ = v_a_3090_;
goto v___jp_3075_;
}
}
}
v___jp_3040_:
{
size_t v___x_3042_; size_t v___x_3043_; 
v___x_3042_ = ((size_t)1ULL);
v___x_3043_ = lean_usize_add(v_i_3033_, v___x_3042_);
v_i_3033_ = v___x_3043_;
v_b_3034_ = v_a_3041_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___boxed(lean_object* v_goal_3107_, lean_object* v___x_3108_, lean_object* v_as_3109_, lean_object* v_sz_3110_, lean_object* v_i_3111_, lean_object* v_b_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_){
_start:
{
uint8_t v___x_42353__boxed_3118_; size_t v_sz_boxed_3119_; size_t v_i_boxed_3120_; lean_object* v_res_3121_; 
v___x_42353__boxed_3118_ = lean_unbox(v___x_3108_);
v_sz_boxed_3119_ = lean_unbox_usize(v_sz_3110_);
lean_dec(v_sz_3110_);
v_i_boxed_3120_ = lean_unbox_usize(v_i_3111_);
lean_dec(v_i_3111_);
v_res_3121_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5(v_goal_3107_, v___x_42353__boxed_3118_, v_as_3109_, v_sz_boxed_3119_, v_i_boxed_3120_, v_b_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
lean_dec_ref(v_as_3109_);
return v_res_3121_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__8(lean_object* v_a_3122_, lean_object* v_a_3123_){
_start:
{
if (lean_obj_tag(v_a_3122_) == 0)
{
lean_object* v___x_3124_; 
v___x_3124_ = l_List_reverse___redArg(v_a_3123_);
return v___x_3124_;
}
else
{
lean_object* v_head_3125_; lean_object* v_tail_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3134_; 
v_head_3125_ = lean_ctor_get(v_a_3122_, 0);
v_tail_3126_ = lean_ctor_get(v_a_3122_, 1);
v_isSharedCheck_3134_ = !lean_is_exclusive(v_a_3122_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3128_ = v_a_3122_;
v_isShared_3129_ = v_isSharedCheck_3134_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_tail_3126_);
lean_inc(v_head_3125_);
lean_dec(v_a_3122_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3134_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
lean_ctor_set(v___x_3128_, 1, v_a_3123_);
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_head_3125_);
lean_ctor_set(v_reuseFailAlloc_3133_, 1, v_a_3123_);
v___x_3131_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
v_a_3122_ = v_tail_3126_;
v_a_3123_ = v___x_3131_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__1(void){
_start:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3136_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__0));
v___x_3137_ = l_Lean_stringToMessageData(v___x_3136_);
return v___x_3137_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__2(void){
_start:
{
lean_object* v___x_3138_; lean_object* v_dummy_3139_; 
v___x_3138_ = lean_box(0);
v_dummy_3139_ = l_Lean_Expr_sort___override(v___x_3138_);
return v_dummy_3139_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__4(void){
_start:
{
lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3141_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__3));
v___x_3142_ = l_Lean_stringToMessageData(v___x_3141_);
return v___x_3142_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__6(void){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3144_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__5));
v___x_3145_ = l_Lean_stringToMessageData(v___x_3144_);
return v___x_3145_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__8(void){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; 
v___x_3147_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__7));
v___x_3148_ = l_Lean_stringToMessageData(v___x_3147_);
return v___x_3148_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__10(void){
_start:
{
lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3150_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__9));
v___x_3151_ = l_Lean_stringToMessageData(v___x_3150_);
return v___x_3151_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__14(void){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__13));
v___x_3157_ = l_Lean_stringToMessageData(v___x_3156_);
return v___x_3157_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__16(void){
_start:
{
lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3159_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__15));
v___x_3160_ = l_Lean_stringToMessageData(v___x_3159_);
return v___x_3160_;
}
}
static lean_object* _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__20(void){
_start:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3164_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__19));
v___x_3165_ = l_Lean_stringToMessageData(v___x_3164_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2(lean_object* v_cls_3166_, lean_object* v_goal_3167_, lean_object* v_failK_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_){
_start:
{
lean_object* v___y_3175_; lean_object* v___y_3176_; lean_object* v___y_3177_; lean_object* v___y_3178_; uint8_t v___y_3184_; lean_object* v___y_3185_; lean_object* v___y_3186_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3191_; lean_object* v___y_3245_; lean_object* v___y_3246_; lean_object* v___y_3247_; lean_object* v___y_3248_; lean_object* v___y_3249_; lean_object* v___y_3261_; lean_object* v___y_3262_; lean_object* v___y_3263_; lean_object* v___y_3264_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3278_; lean_object* v___y_3279_; lean_object* v___y_3280_; lean_object* v___y_3281_; lean_object* v___y_3282_; lean_object* v___y_3283_; lean_object* v___y_3284_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3343_; lean_object* v___y_3344_; lean_object* v___y_3345_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3418_; lean_object* v___y_3419_; lean_object* v___y_3420_; uint8_t v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3430_; lean_object* v___y_3431_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3450_; lean_object* v___y_3451_; lean_object* v___y_3452_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; uint8_t v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; lean_object* v___y_3488_; uint8_t v___y_3489_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3497_; lean_object* v___y_3498_; lean_object* v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3517_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___y_3549_; lean_object* v___y_3550_; lean_object* v___y_3551_; uint8_t v___y_3552_; lean_object* v___y_3553_; lean_object* v___y_3554_; lean_object* v___y_3555_; lean_object* v___y_3556_; lean_object* v___y_3557_; lean_object* v___y_3558_; uint8_t v___y_3559_; lean_object* v___y_3564_; lean_object* v___y_3565_; lean_object* v___y_3566_; lean_object* v___y_3567_; lean_object* v___y_3568_; lean_object* v___y_3569_; lean_object* v___y_3570_; lean_object* v___y_3571_; lean_object* v___y_3572_; uint8_t v___y_3573_; lean_object* v___y_3574_; lean_object* v___y_3575_; lean_object* v___y_3576_; lean_object* v___y_3577_; uint8_t v___y_3578_; lean_object* v___y_3663_; uint8_t v___y_3664_; lean_object* v___y_3665_; uint8_t v___y_3666_; uint8_t v___y_3667_; lean_object* v___y_3668_; lean_object* v___y_3669_; lean_object* v___y_3670_; lean_object* v___y_3671_; lean_object* v_f_3672_; lean_object* v___y_3673_; lean_object* v___y_3674_; lean_object* v___y_3675_; lean_object* v___y_3676_; lean_object* v___y_3682_; lean_object* v___y_3683_; lean_object* v___y_3684_; lean_object* v___y_3685_; lean_object* v___x_3766_; lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3786_; 
lean_inc(v_cls_3166_);
v___x_3766_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg(v_cls_3166_, v___y_3171_);
v_a_3767_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3769_ = v___x_3766_;
v_isShared_3770_ = v_isSharedCheck_3786_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3766_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3786_;
goto v_resetjp_3768_;
}
v___jp_3174_:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3179_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__1, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__1_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__1);
v___x_3180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3180_, 0, v_goal_3167_);
v___x_3181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3179_);
lean_ctor_set(v___x_3181_, 1, v___x_3180_);
v___x_3182_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v___x_3181_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_);
lean_dec(v___y_3178_);
lean_dec_ref(v___y_3177_);
lean_dec(v___y_3176_);
lean_dec_ref(v___y_3175_);
return v___x_3182_;
}
v___jp_3183_:
{
lean_object* v___x_3192_; size_t v_sz_3193_; size_t v___x_3194_; lean_object* v___x_3195_; 
v___x_3192_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__0));
v_sz_3193_ = lean_array_size(v___y_3187_);
v___x_3194_ = ((size_t)0ULL);
lean_inc(v___y_3191_);
lean_inc_ref(v___y_3190_);
lean_inc(v___y_3189_);
lean_inc_ref(v___y_3188_);
lean_inc(v_goal_3167_);
v___x_3195_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5(v_goal_3167_, v___y_3184_, v___y_3187_, v_sz_3193_, v___x_3194_, v___x_3192_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_);
if (lean_obj_tag(v___x_3195_) == 0)
{
lean_object* v_a_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3235_; 
v_a_3196_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3198_ = v___x_3195_;
v_isShared_3199_ = v_isSharedCheck_3235_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_a_3196_);
lean_dec(v___x_3195_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3235_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v_fst_3200_; 
v_fst_3200_ = lean_ctor_get(v_a_3196_, 0);
lean_inc(v_fst_3200_);
lean_dec(v_a_3196_);
if (lean_obj_tag(v_fst_3200_) == 0)
{
lean_object* v___x_3201_; lean_object* v_env_3202_; lean_object* v___x_3203_; 
lean_del_object(v___x_3198_);
v___x_3201_ = lean_st_ref_get(v___y_3191_);
v_env_3202_ = lean_ctor_get(v___x_3201_, 0);
lean_inc_ref(v_env_3202_);
lean_dec(v___x_3201_);
v___x_3203_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_3202_, v___y_3185_);
if (lean_obj_tag(v___x_3203_) == 1)
{
lean_object* v_val_3204_; lean_object* v_numDiscrs_3205_; lean_object* v_nargs_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v_dummy_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; 
v_val_3204_ = lean_ctor_get(v___x_3203_, 0);
lean_inc(v_val_3204_);
lean_dec_ref(v___x_3203_);
v_numDiscrs_3205_ = lean_ctor_get(v_val_3204_, 1);
lean_inc(v_numDiscrs_3205_);
v_nargs_3206_ = l_Lean_Expr_getAppNumArgs(v___y_3185_);
v___x_3207_ = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(v_val_3204_);
lean_dec(v_val_3204_);
v___x_3208_ = lean_nat_add(v___x_3207_, v_numDiscrs_3205_);
lean_dec(v_numDiscrs_3205_);
v_dummy_3209_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__2, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__2_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__2);
lean_inc(v_nargs_3206_);
v___x_3210_ = lean_mk_array(v_nargs_3206_, v_dummy_3209_);
v___x_3211_ = lean_unsigned_to_nat(1u);
v___x_3212_ = lean_nat_sub(v_nargs_3206_, v___x_3211_);
lean_dec(v_nargs_3206_);
lean_inc_ref(v___y_3185_);
v___x_3213_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___y_3185_, v___x_3210_, v___x_3212_);
v___x_3214_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg(v___x_3208_, v___x_3213_, v___y_3184_, v___x_3207_, v___x_3192_);
lean_dec_ref(v___x_3213_);
lean_dec(v___x_3208_);
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v_a_3215_; lean_object* v_fst_3216_; 
v_a_3215_ = lean_ctor_get(v___x_3214_, 0);
lean_inc(v_a_3215_);
lean_dec_ref(v___x_3214_);
v_fst_3216_ = lean_ctor_get(v_a_3215_, 0);
lean_inc(v_fst_3216_);
lean_dec(v_a_3215_);
if (lean_obj_tag(v_fst_3216_) == 0)
{
lean_object* v___x_3217_; 
lean_dec_ref(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec_ref(v_failK_3168_);
v___x_3217_ = l_Lean_Meta_Split_splitMatch(v_goal_3167_, v___y_3185_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_);
return v___x_3217_;
}
else
{
lean_object* v_val_3218_; uint8_t v___x_3219_; 
v_val_3218_ = lean_ctor_get(v_fst_3216_, 0);
lean_inc(v_val_3218_);
lean_dec_ref(v_fst_3216_);
v___x_3219_ = lean_unbox(v_val_3218_);
lean_dec(v_val_3218_);
if (v___x_3219_ == 0)
{
lean_object* v___x_3220_; 
lean_dec_ref(v___y_3185_);
lean_dec(v_goal_3167_);
v___x_3220_ = lean_apply_8(v_failK_3168_, lean_box(0), v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, lean_box(0));
return v___x_3220_;
}
else
{
lean_object* v___x_3221_; 
lean_dec_ref(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec_ref(v_failK_3168_);
v___x_3221_ = l_Lean_Meta_Split_splitMatch(v_goal_3167_, v___y_3185_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_);
return v___x_3221_;
}
}
}
else
{
lean_object* v_a_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3229_; 
lean_dec(v___y_3191_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
lean_dec_ref(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec_ref(v___y_3185_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
v_a_3222_ = lean_ctor_get(v___x_3214_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3214_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3224_ = v___x_3214_;
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_a_3222_);
lean_dec(v___x_3214_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3229_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
lean_object* v___x_3227_; 
if (v_isShared_3225_ == 0)
{
v___x_3227_ = v___x_3224_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_a_3222_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
}
else
{
lean_object* v___x_3230_; 
lean_dec(v___x_3203_);
lean_dec_ref(v___y_3185_);
lean_dec(v_goal_3167_);
v___x_3230_ = lean_apply_8(v_failK_3168_, lean_box(0), v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, lean_box(0));
return v___x_3230_;
}
}
else
{
lean_object* v_val_3231_; lean_object* v___x_3233_; 
lean_dec(v___y_3191_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
lean_dec_ref(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec_ref(v___y_3185_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
v_val_3231_ = lean_ctor_get(v_fst_3200_, 0);
lean_inc(v_val_3231_);
lean_dec_ref(v_fst_3200_);
if (v_isShared_3199_ == 0)
{
lean_ctor_set(v___x_3198_, 0, v_val_3231_);
v___x_3233_ = v___x_3198_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_val_3231_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
}
else
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3243_; 
lean_dec(v___y_3191_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
lean_dec_ref(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec_ref(v___y_3185_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
v_a_3236_ = lean_ctor_get(v___x_3195_, 0);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3195_);
if (v_isSharedCheck_3243_ == 0)
{
v___x_3238_ = v___x_3195_;
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v___x_3195_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3243_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
return v___x_3241_;
}
}
}
}
v___jp_3244_:
{
lean_object* v___x_3250_; lean_object* v___x_3252_; uint8_t v_isShared_3253_; uint8_t v_isSharedCheck_3258_; 
lean_dec(v___y_3249_);
lean_dec_ref(v___y_3248_);
lean_dec_ref(v___y_3246_);
v___x_3250_ = l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___redArg(v_goal_3167_, v___y_3245_, v___y_3247_);
lean_dec(v___y_3247_);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3258_ == 0)
{
lean_object* v_unused_3259_; 
v_unused_3259_ = lean_ctor_get(v___x_3250_, 0);
lean_dec(v_unused_3259_);
v___x_3252_ = v___x_3250_;
v_isShared_3253_ = v_isSharedCheck_3258_;
goto v_resetjp_3251_;
}
else
{
lean_dec(v___x_3250_);
v___x_3252_ = lean_box(0);
v_isShared_3253_ = v_isSharedCheck_3258_;
goto v_resetjp_3251_;
}
v_resetjp_3251_:
{
lean_object* v___x_3254_; lean_object* v___x_3256_; 
v___x_3254_ = lean_box(0);
if (v_isShared_3253_ == 0)
{
lean_ctor_set(v___x_3252_, 0, v___x_3254_);
v___x_3256_ = v___x_3252_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v___x_3254_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
v___jp_3260_:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3267_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2__spec__0_spec__2___closed__0));
lean_inc(v___y_3266_);
lean_inc_ref(v___y_3265_);
lean_inc(v___y_3264_);
lean_inc_ref(v___y_3263_);
v___x_3268_ = lean_apply_8(v_failK_3168_, lean_box(0), v___y_3261_, v___x_3267_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, lean_box(0));
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_dec_ref(v___x_3268_);
v___y_3245_ = v___y_3262_;
v___y_3246_ = v___y_3263_;
v___y_3247_ = v___y_3264_;
v___y_3248_ = v___y_3265_;
v___y_3249_ = v___y_3266_;
goto v___jp_3244_;
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
lean_dec(v___y_3266_);
lean_dec_ref(v___y_3265_);
lean_dec(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec_ref(v___y_3262_);
lean_dec(v_goal_3167_);
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3268_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3268_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
v___jp_3277_:
{
lean_object* v___x_3285_; 
lean_inc(v___y_3284_);
lean_inc_ref(v___y_3283_);
lean_inc(v___y_3282_);
lean_inc_ref(v___y_3281_);
lean_inc_ref(v___y_3280_);
v___x_3285_ = lean_infer_type(v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_);
if (lean_obj_tag(v___x_3285_) == 0)
{
lean_object* v_a_3286_; lean_object* v___x_3287_; 
v_a_3286_ = lean_ctor_get(v___x_3285_, 0);
lean_inc(v_a_3286_);
lean_dec_ref(v___x_3285_);
lean_inc(v___y_3284_);
lean_inc_ref(v___y_3283_);
lean_inc(v___y_3282_);
lean_inc_ref(v___y_3281_);
v___x_3287_ = l_Lean_Meta_isExprDefEq(v_a_3286_, v___y_3279_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_);
if (lean_obj_tag(v___x_3287_) == 0)
{
lean_object* v_a_3288_; uint8_t v___x_3289_; 
v_a_3288_ = lean_ctor_get(v___x_3287_, 0);
lean_inc(v_a_3288_);
lean_dec_ref(v___x_3287_);
v___x_3289_ = lean_unbox(v_a_3288_);
lean_dec(v_a_3288_);
if (v___x_3289_ == 0)
{
lean_object* v___x_3290_; lean_object* v_a_3291_; uint8_t v___x_3292_; 
lean_inc(v_cls_3166_);
v___x_3290_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg(v_cls_3166_, v___y_3283_);
v_a_3291_ = lean_ctor_get(v___x_3290_, 0);
lean_inc(v_a_3291_);
lean_dec_ref(v___x_3290_);
v___x_3292_ = lean_unbox(v_a_3291_);
lean_dec(v_a_3291_);
if (v___x_3292_ == 0)
{
lean_dec(v_cls_3166_);
v___y_3261_ = v___y_3278_;
v___y_3262_ = v___y_3280_;
v___y_3263_ = v___y_3281_;
v___y_3264_ = v___y_3282_;
v___y_3265_ = v___y_3283_;
v___y_3266_ = v___y_3284_;
goto v___jp_3260_;
}
else
{
lean_object* v___x_3293_; 
lean_inc(v___y_3284_);
lean_inc_ref(v___y_3283_);
lean_inc(v___y_3282_);
lean_inc_ref(v___y_3281_);
lean_inc_ref(v___y_3280_);
v___x_3293_ = lean_infer_type(v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_);
if (lean_obj_tag(v___x_3293_) == 0)
{
lean_object* v_a_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; 
v_a_3294_ = lean_ctor_get(v___x_3293_, 0);
lean_inc(v_a_3294_);
lean_dec_ref(v___x_3293_);
v___x_3295_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__4, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__4_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__4);
lean_inc_ref(v___y_3280_);
v___x_3296_ = l_Lean_MessageData_ofExpr(v___y_3280_);
v___x_3297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3297_, 0, v___x_3295_);
lean_ctor_set(v___x_3297_, 1, v___x_3296_);
v___x_3298_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__6, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__6_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__6);
v___x_3299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3297_);
lean_ctor_set(v___x_3299_, 1, v___x_3298_);
v___x_3300_ = l_Lean_MessageData_ofExpr(v_a_3294_);
v___x_3301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3301_, 0, v___x_3299_);
lean_ctor_set(v___x_3301_, 1, v___x_3300_);
v___x_3302_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__8, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__8_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__8);
v___x_3303_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3301_);
lean_ctor_set(v___x_3303_, 1, v___x_3302_);
v___x_3304_ = l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3(v_cls_3166_, v___x_3303_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_);
if (lean_obj_tag(v___x_3304_) == 0)
{
lean_dec_ref(v___x_3304_);
v___y_3261_ = v___y_3278_;
v___y_3262_ = v___y_3280_;
v___y_3263_ = v___y_3281_;
v___y_3264_ = v___y_3282_;
v___y_3265_ = v___y_3283_;
v___y_3266_ = v___y_3284_;
goto v___jp_3260_;
}
else
{
lean_object* v_a_3305_; lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3312_; 
lean_dec(v___y_3284_);
lean_dec_ref(v___y_3283_);
lean_dec(v___y_3282_);
lean_dec_ref(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec_ref(v___y_3278_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
v_a_3305_ = lean_ctor_get(v___x_3304_, 0);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3304_);
if (v_isSharedCheck_3312_ == 0)
{
v___x_3307_ = v___x_3304_;
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
else
{
lean_inc(v_a_3305_);
lean_dec(v___x_3304_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3312_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
lean_object* v___x_3310_; 
if (v_isShared_3308_ == 0)
{
v___x_3310_ = v___x_3307_;
goto v_reusejp_3309_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v_a_3305_);
v___x_3310_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3309_;
}
v_reusejp_3309_:
{
return v___x_3310_;
}
}
}
}
else
{
lean_object* v_a_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3320_; 
lean_dec(v___y_3284_);
lean_dec_ref(v___y_3283_);
lean_dec(v___y_3282_);
lean_dec_ref(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec_ref(v___y_3278_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
lean_dec(v_cls_3166_);
v_a_3313_ = lean_ctor_get(v___x_3293_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3293_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3315_ = v___x_3293_;
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_a_3313_);
lean_dec(v___x_3293_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3320_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v___x_3318_; 
if (v_isShared_3316_ == 0)
{
v___x_3318_ = v___x_3315_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v_a_3313_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
return v___x_3318_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_3278_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___y_3245_ = v___y_3280_;
v___y_3246_ = v___y_3281_;
v___y_3247_ = v___y_3282_;
v___y_3248_ = v___y_3283_;
v___y_3249_ = v___y_3284_;
goto v___jp_3244_;
}
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
lean_dec(v___y_3284_);
lean_dec_ref(v___y_3283_);
lean_dec(v___y_3282_);
lean_dec_ref(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec_ref(v___y_3278_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
lean_dec(v_cls_3166_);
v_a_3321_ = lean_ctor_get(v___x_3287_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3287_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3287_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3287_);
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
else
{
lean_object* v_a_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3336_; 
lean_dec(v___y_3284_);
lean_dec_ref(v___y_3283_);
lean_dec(v___y_3282_);
lean_dec_ref(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
lean_dec(v_cls_3166_);
v_a_3329_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3331_ = v___x_3285_;
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_a_3329_);
lean_dec(v___x_3285_);
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
v___jp_3337_:
{
uint8_t v___x_3350_; 
v___x_3350_ = l_Lean_Expr_isBVar(v___y_3339_);
if (v___x_3350_ == 0)
{
lean_object* v___x_3351_; 
lean_dec_ref(v___y_3344_);
lean_dec_ref(v___y_3342_);
lean_inc(v___y_3349_);
lean_inc_ref(v___y_3348_);
lean_inc(v___y_3347_);
lean_inc_ref(v___y_3346_);
lean_inc_ref(v___y_3339_);
v___x_3351_ = l_Lean_Meta_Monotonicity_solveMonoCall(v___y_3343_, v___y_3338_, v___y_3339_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v_a_3352_; 
v_a_3352_ = lean_ctor_get(v___x_3351_, 0);
lean_inc(v_a_3352_);
lean_dec_ref(v___x_3351_);
if (lean_obj_tag(v_a_3352_) == 1)
{
lean_object* v_val_3353_; lean_object* v___x_3354_; lean_object* v_a_3355_; uint8_t v___x_3356_; 
lean_dec_ref(v___y_3341_);
v_val_3353_ = lean_ctor_get(v_a_3352_, 0);
lean_inc(v_val_3353_);
lean_dec_ref(v_a_3352_);
lean_inc(v_cls_3166_);
v___x_3354_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg(v_cls_3166_, v___y_3348_);
v_a_3355_ = lean_ctor_get(v___x_3354_, 0);
lean_inc(v_a_3355_);
lean_dec_ref(v___x_3354_);
v___x_3356_ = lean_unbox(v_a_3355_);
lean_dec(v_a_3355_);
if (v___x_3356_ == 0)
{
lean_dec_ref(v___y_3339_);
v___y_3278_ = v___y_3340_;
v___y_3279_ = v___y_3345_;
v___y_3280_ = v_val_3353_;
v___y_3281_ = v___y_3346_;
v___y_3282_ = v___y_3347_;
v___y_3283_ = v___y_3348_;
v___y_3284_ = v___y_3349_;
goto v___jp_3277_;
}
else
{
lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3357_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__10, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__10_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__10);
v___x_3358_ = l_Lean_MessageData_ofExpr(v___y_3339_);
v___x_3359_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3357_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__3, &l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__3_once, _init_l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst___closed__3);
v___x_3361_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3359_);
lean_ctor_set(v___x_3361_, 1, v___x_3360_);
lean_inc(v_val_3353_);
v___x_3362_ = l_Lean_indentExpr(v_val_3353_);
v___x_3363_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3363_, 0, v___x_3361_);
lean_ctor_set(v___x_3363_, 1, v___x_3362_);
lean_inc(v_cls_3166_);
v___x_3364_ = l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3(v_cls_3166_, v___x_3363_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_dec_ref(v___x_3364_);
v___y_3278_ = v___y_3340_;
v___y_3279_ = v___y_3345_;
v___y_3280_ = v_val_3353_;
v___y_3281_ = v___y_3346_;
v___y_3282_ = v___y_3347_;
v___y_3283_ = v___y_3348_;
v___y_3284_ = v___y_3349_;
goto v___jp_3277_;
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3372_; 
lean_dec(v_val_3353_);
lean_dec(v___y_3349_);
lean_dec_ref(v___y_3348_);
lean_dec(v___y_3347_);
lean_dec_ref(v___y_3346_);
lean_dec_ref(v___y_3345_);
lean_dec_ref(v___y_3340_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
lean_dec(v_cls_3166_);
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
v_isSharedCheck_3372_ = !lean_is_exclusive(v___x_3364_);
if (v_isSharedCheck_3372_ == 0)
{
v___x_3367_ = v___x_3364_;
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v___x_3364_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3368_ == 0)
{
v___x_3370_ = v___x_3367_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v_a_3365_);
v___x_3370_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
return v___x_3370_;
}
}
}
}
}
else
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
lean_dec(v_a_3352_);
lean_dec_ref(v___y_3345_);
v___x_3373_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__12));
v___x_3374_ = l_Lean_Expr_bindingDomain_x21(v___y_3340_);
lean_inc(v___y_3349_);
lean_inc_ref(v___y_3348_);
lean_inc(v___y_3347_);
lean_inc_ref(v___y_3346_);
v___x_3375_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4___redArg(v___x_3373_, v___x_3374_, v___y_3341_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v_a_3376_; lean_object* v___x_3377_; lean_object* v_a_3378_; uint8_t v___x_3379_; 
v_a_3376_ = lean_ctor_get(v___x_3375_, 0);
lean_inc(v_a_3376_);
lean_dec_ref(v___x_3375_);
lean_inc(v_cls_3166_);
v___x_3377_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__2___redArg(v_cls_3166_, v___y_3348_);
v_a_3378_ = lean_ctor_get(v___x_3377_, 0);
lean_inc(v_a_3378_);
lean_dec_ref(v___x_3377_);
v___x_3379_ = lean_unbox(v_a_3378_);
lean_dec(v_a_3378_);
if (v___x_3379_ == 0)
{
lean_dec(v_cls_3166_);
v___y_3184_ = v___x_3350_;
v___y_3185_ = v___y_3339_;
v___y_3186_ = v___y_3340_;
v___y_3187_ = v_a_3376_;
v___y_3188_ = v___y_3346_;
v___y_3189_ = v___y_3347_;
v___y_3190_ = v___y_3348_;
v___y_3191_ = v___y_3349_;
goto v___jp_3183_;
}
else
{
lean_object* v___x_3380_; size_t v_sz_3381_; size_t v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; 
v___x_3380_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__14, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__14_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__14);
v_sz_3381_ = lean_array_size(v_a_3376_);
v___x_3382_ = ((size_t)0ULL);
lean_inc(v_a_3376_);
v___x_3383_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__7(v___x_3350_, v_sz_3381_, v___x_3382_, v_a_3376_);
v___x_3384_ = lean_array_to_list(v___x_3383_);
v___x_3385_ = lean_box(0);
v___x_3386_ = l_List_mapTR_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__8(v___x_3384_, v___x_3385_);
v___x_3387_ = l_Lean_MessageData_ofList(v___x_3386_);
v___x_3388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3380_);
lean_ctor_set(v___x_3388_, 1, v___x_3387_);
v___x_3389_ = l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3(v_cls_3166_, v___x_3388_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
if (lean_obj_tag(v___x_3389_) == 0)
{
lean_dec_ref(v___x_3389_);
v___y_3184_ = v___x_3350_;
v___y_3185_ = v___y_3339_;
v___y_3186_ = v___y_3340_;
v___y_3187_ = v_a_3376_;
v___y_3188_ = v___y_3346_;
v___y_3189_ = v___y_3347_;
v___y_3190_ = v___y_3348_;
v___y_3191_ = v___y_3349_;
goto v___jp_3183_;
}
else
{
lean_object* v_a_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3397_; 
lean_dec(v_a_3376_);
lean_dec(v___y_3349_);
lean_dec_ref(v___y_3348_);
lean_dec(v___y_3347_);
lean_dec_ref(v___y_3346_);
lean_dec_ref(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
v_a_3390_ = lean_ctor_get(v___x_3389_, 0);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3392_ = v___x_3389_;
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_a_3390_);
lean_dec(v___x_3389_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3395_; 
if (v_isShared_3393_ == 0)
{
v___x_3395_ = v___x_3392_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_a_3390_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
}
}
}
else
{
lean_object* v_a_3398_; lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3405_; 
lean_dec(v___y_3349_);
lean_dec_ref(v___y_3348_);
lean_dec(v___y_3347_);
lean_dec_ref(v___y_3346_);
lean_dec_ref(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
lean_dec(v_cls_3166_);
v_a_3398_ = lean_ctor_get(v___x_3375_, 0);
v_isSharedCheck_3405_ = !lean_is_exclusive(v___x_3375_);
if (v_isSharedCheck_3405_ == 0)
{
v___x_3400_ = v___x_3375_;
v_isShared_3401_ = v_isSharedCheck_3405_;
goto v_resetjp_3399_;
}
else
{
lean_inc(v_a_3398_);
lean_dec(v___x_3375_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3405_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3403_; 
if (v_isShared_3401_ == 0)
{
v___x_3403_ = v___x_3400_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v_a_3398_);
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
lean_object* v_a_3406_; lean_object* v___x_3408_; uint8_t v_isShared_3409_; uint8_t v_isSharedCheck_3413_; 
lean_dec(v___y_3349_);
lean_dec_ref(v___y_3348_);
lean_dec(v___y_3347_);
lean_dec_ref(v___y_3346_);
lean_dec_ref(v___y_3345_);
lean_dec_ref(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
lean_dec(v_cls_3166_);
v_a_3406_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3413_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3413_ == 0)
{
v___x_3408_ = v___x_3351_;
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
else
{
lean_inc(v_a_3406_);
lean_dec(v___x_3351_);
v___x_3408_ = lean_box(0);
v_isShared_3409_ = v_isSharedCheck_3413_;
goto v_resetjp_3407_;
}
v_resetjp_3407_:
{
lean_object* v___x_3411_; 
if (v_isShared_3409_ == 0)
{
v___x_3411_ = v___x_3408_;
goto v_reusejp_3410_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_a_3406_);
v___x_3411_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3410_;
}
v_reusejp_3410_:
{
return v___x_3411_;
}
}
}
}
else
{
lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; 
lean_dec_ref(v___y_3345_);
lean_dec_ref(v___y_3343_);
lean_dec_ref(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec_ref(v___y_3338_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___x_3414_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__1));
v___x_3415_ = l_Lean_Name_mkStr3(v___y_3344_, v___y_3342_, v___x_3414_);
v___x_3416_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst(v_goal_3167_, v___x_3415_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
return v___x_3416_;
}
}
v___jp_3417_:
{
lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v_a_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3445_; 
lean_dec_ref(v___y_3427_);
lean_dec_ref(v___y_3426_);
lean_dec_ref(v___y_3425_);
lean_dec_ref(v___y_3424_);
lean_dec_ref(v___y_3422_);
lean_dec_ref(v___y_3420_);
lean_dec_ref(v___y_3419_);
lean_dec_ref(v___y_3418_);
v___x_3432_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__16, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__16_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__16);
v___x_3433_ = l_Lean_MessageData_ofConstName(v___y_3423_, v___y_3421_);
v___x_3434_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3434_, 0, v___x_3432_);
lean_ctor_set(v___x_3434_, 1, v___x_3433_);
v___x_3435_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__3_spec__4_spec__5_spec__8_spec__9_spec__10___redArg___closed__15);
v___x_3436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3434_);
lean_ctor_set(v___x_3436_, 1, v___x_3435_);
v___x_3437_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2__spec__0___redArg(v___x_3436_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_);
lean_dec(v___y_3431_);
lean_dec_ref(v___y_3430_);
lean_dec(v___y_3429_);
lean_dec_ref(v___y_3428_);
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
v_isSharedCheck_3445_ = !lean_is_exclusive(v___x_3437_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3440_ = v___x_3437_;
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_a_3438_);
lean_dec(v___x_3437_);
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
v___jp_3446_:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3453_ = l_Lean_Expr_appFn_x21(v___y_3451_);
lean_dec_ref(v___y_3451_);
v___x_3454_ = l_Lean_Expr_app___override(v___x_3453_, v___y_3452_);
v___x_3455_ = lean_box(0);
v___x_3456_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_3454_, v___x_3455_, v___y_3448_, v___y_3450_, v___y_3447_, v___y_3449_);
lean_dec(v___y_3449_);
lean_dec_ref(v___y_3447_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v_a_3457_; lean_object* v___x_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3468_; 
v_a_3457_ = lean_ctor_get(v___x_3456_, 0);
lean_inc(v_a_3457_);
lean_dec_ref(v___x_3456_);
lean_inc(v_a_3457_);
v___x_3458_ = l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___redArg(v_goal_3167_, v_a_3457_, v___y_3450_);
lean_dec(v___y_3450_);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3468_ == 0)
{
lean_object* v_unused_3469_; 
v_unused_3469_ = lean_ctor_get(v___x_3458_, 0);
lean_dec(v_unused_3469_);
v___x_3460_ = v___x_3458_;
v_isShared_3461_ = v_isSharedCheck_3468_;
goto v_resetjp_3459_;
}
else
{
lean_dec(v___x_3458_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3468_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3466_; 
v___x_3462_ = l_Lean_Expr_mvarId_x21(v_a_3457_);
lean_dec(v_a_3457_);
v___x_3463_ = lean_box(0);
v___x_3464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3462_);
lean_ctor_set(v___x_3464_, 1, v___x_3463_);
if (v_isShared_3461_ == 0)
{
lean_ctor_set(v___x_3460_, 0, v___x_3464_);
v___x_3466_ = v___x_3460_;
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
else
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3477_; 
lean_dec(v___y_3450_);
lean_dec(v_goal_3167_);
v_a_3470_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3472_ = v___x_3456_;
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3456_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3477_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
lean_object* v___x_3475_; 
if (v_isShared_3473_ == 0)
{
v___x_3475_ = v___x_3472_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_a_3470_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
}
v___jp_3478_:
{
if (v___y_3489_ == 0)
{
lean_object* v___x_3490_; 
lean_dec_ref(v___y_3483_);
v___x_3490_ = l_Lean_Expr_lam___override(v___y_3481_, v___y_3485_, v___y_3486_, v___y_3482_);
v___y_3447_ = v___y_3480_;
v___y_3448_ = v___y_3479_;
v___y_3449_ = v___y_3484_;
v___y_3450_ = v___y_3487_;
v___y_3451_ = v___y_3488_;
v___y_3452_ = v___x_3490_;
goto v___jp_3446_;
}
else
{
uint8_t v___x_3491_; 
v___x_3491_ = l_Lean_instBEqBinderInfo_beq(v___y_3482_, v___y_3482_);
if (v___x_3491_ == 0)
{
lean_object* v___x_3492_; 
lean_dec_ref(v___y_3483_);
v___x_3492_ = l_Lean_Expr_lam___override(v___y_3481_, v___y_3485_, v___y_3486_, v___y_3482_);
v___y_3447_ = v___y_3480_;
v___y_3448_ = v___y_3479_;
v___y_3449_ = v___y_3484_;
v___y_3450_ = v___y_3487_;
v___y_3451_ = v___y_3488_;
v___y_3452_ = v___x_3492_;
goto v___jp_3446_;
}
else
{
lean_dec_ref(v___y_3486_);
lean_dec_ref(v___y_3485_);
lean_dec(v___y_3481_);
v___y_3447_ = v___y_3480_;
v___y_3448_ = v___y_3479_;
v___y_3449_ = v___y_3484_;
v___y_3450_ = v___y_3487_;
v___y_3451_ = v___y_3488_;
v___y_3452_ = v___y_3483_;
goto v___jp_3446_;
}
}
}
v___jp_3493_:
{
if (lean_obj_tag(v___y_3498_) == 6)
{
lean_object* v_binderName_3502_; lean_object* v_binderType_3503_; lean_object* v_body_3504_; uint8_t v_binderInfo_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; size_t v___x_3508_; size_t v___x_3509_; uint8_t v___x_3510_; 
v_binderName_3502_ = lean_ctor_get(v___y_3498_, 0);
lean_inc(v_binderName_3502_);
v_binderType_3503_ = lean_ctor_get(v___y_3498_, 1);
v_body_3504_ = lean_ctor_get(v___y_3498_, 2);
v_binderInfo_3505_ = lean_ctor_get_uint8(v___y_3498_, sizeof(void*)*3 + 8);
v___x_3506_ = l_Lean_Expr_bindingDomain_x21(v___y_3498_);
v___x_3507_ = lean_expr_instantiate1(v___y_3497_, v___y_3496_);
lean_dec_ref(v___y_3496_);
lean_dec_ref(v___y_3497_);
v___x_3508_ = lean_ptr_addr(v_binderType_3503_);
v___x_3509_ = lean_ptr_addr(v___x_3506_);
v___x_3510_ = lean_usize_dec_eq(v___x_3508_, v___x_3509_);
if (v___x_3510_ == 0)
{
v___y_3479_ = v___y_3495_;
v___y_3480_ = v___y_3494_;
v___y_3481_ = v_binderName_3502_;
v___y_3482_ = v_binderInfo_3505_;
v___y_3483_ = v___y_3498_;
v___y_3484_ = v___y_3499_;
v___y_3485_ = v___x_3506_;
v___y_3486_ = v___x_3507_;
v___y_3487_ = v___y_3500_;
v___y_3488_ = v___y_3501_;
v___y_3489_ = v___x_3510_;
goto v___jp_3478_;
}
else
{
size_t v___x_3511_; size_t v___x_3512_; uint8_t v___x_3513_; 
v___x_3511_ = lean_ptr_addr(v_body_3504_);
v___x_3512_ = lean_ptr_addr(v___x_3507_);
v___x_3513_ = lean_usize_dec_eq(v___x_3511_, v___x_3512_);
v___y_3479_ = v___y_3495_;
v___y_3480_ = v___y_3494_;
v___y_3481_ = v_binderName_3502_;
v___y_3482_ = v_binderInfo_3505_;
v___y_3483_ = v___y_3498_;
v___y_3484_ = v___y_3499_;
v___y_3485_ = v___x_3506_;
v___y_3486_ = v___x_3507_;
v___y_3487_ = v___y_3500_;
v___y_3488_ = v___y_3501_;
v___y_3489_ = v___x_3513_;
goto v___jp_3478_;
}
}
else
{
lean_object* v___x_3514_; lean_object* v___x_3515_; 
lean_dec_ref(v___y_3498_);
lean_dec_ref(v___y_3497_);
lean_dec_ref(v___y_3496_);
v___x_3514_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1);
v___x_3515_ = l_panic___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__0(v___x_3514_);
v___y_3447_ = v___y_3494_;
v___y_3448_ = v___y_3495_;
v___y_3449_ = v___y_3499_;
v___y_3450_ = v___y_3500_;
v___y_3451_ = v___y_3501_;
v___y_3452_ = v___x_3515_;
goto v___jp_3446_;
}
}
v___jp_3516_:
{
lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3523_ = l_Lean_Expr_appFn_x21(v___y_3521_);
lean_dec_ref(v___y_3521_);
v___x_3524_ = l_Lean_Expr_app___override(v___x_3523_, v___y_3522_);
v___x_3525_ = lean_box(0);
v___x_3526_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_3524_, v___x_3525_, v___y_3518_, v___y_3520_, v___y_3517_, v___y_3519_);
lean_dec(v___y_3519_);
lean_dec_ref(v___y_3517_);
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v_a_3527_; lean_object* v___x_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3538_; 
v_a_3527_ = lean_ctor_get(v___x_3526_, 0);
lean_inc(v_a_3527_);
lean_dec_ref(v___x_3526_);
lean_inc(v_a_3527_);
v___x_3528_ = l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___redArg(v_goal_3167_, v_a_3527_, v___y_3520_);
lean_dec(v___y_3520_);
v_isSharedCheck_3538_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3538_ == 0)
{
lean_object* v_unused_3539_; 
v_unused_3539_ = lean_ctor_get(v___x_3528_, 0);
lean_dec(v_unused_3539_);
v___x_3530_ = v___x_3528_;
v_isShared_3531_ = v_isSharedCheck_3538_;
goto v_resetjp_3529_;
}
else
{
lean_dec(v___x_3528_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3538_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3536_; 
v___x_3532_ = l_Lean_Expr_mvarId_x21(v_a_3527_);
lean_dec(v_a_3527_);
v___x_3533_ = lean_box(0);
v___x_3534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3532_);
lean_ctor_set(v___x_3534_, 1, v___x_3533_);
if (v_isShared_3531_ == 0)
{
lean_ctor_set(v___x_3530_, 0, v___x_3534_);
v___x_3536_ = v___x_3530_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3534_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
return v___x_3536_;
}
}
}
else
{
lean_object* v_a_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3547_; 
lean_dec(v___y_3520_);
lean_dec(v_goal_3167_);
v_a_3540_ = lean_ctor_get(v___x_3526_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3542_ = v___x_3526_;
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_a_3540_);
lean_dec(v___x_3526_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v___x_3545_; 
if (v_isShared_3543_ == 0)
{
v___x_3545_ = v___x_3542_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v_a_3540_);
v___x_3545_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
return v___x_3545_;
}
}
}
}
v___jp_3548_:
{
if (v___y_3559_ == 0)
{
lean_object* v___x_3560_; 
lean_dec_ref(v___y_3551_);
v___x_3560_ = l_Lean_Expr_lam___override(v___y_3558_, v___y_3555_, v___y_3554_, v___y_3552_);
v___y_3517_ = v___y_3550_;
v___y_3518_ = v___y_3549_;
v___y_3519_ = v___y_3553_;
v___y_3520_ = v___y_3556_;
v___y_3521_ = v___y_3557_;
v___y_3522_ = v___x_3560_;
goto v___jp_3516_;
}
else
{
uint8_t v___x_3561_; 
v___x_3561_ = l_Lean_instBEqBinderInfo_beq(v___y_3552_, v___y_3552_);
if (v___x_3561_ == 0)
{
lean_object* v___x_3562_; 
lean_dec_ref(v___y_3551_);
v___x_3562_ = l_Lean_Expr_lam___override(v___y_3558_, v___y_3555_, v___y_3554_, v___y_3552_);
v___y_3517_ = v___y_3550_;
v___y_3518_ = v___y_3549_;
v___y_3519_ = v___y_3553_;
v___y_3520_ = v___y_3556_;
v___y_3521_ = v___y_3557_;
v___y_3522_ = v___x_3562_;
goto v___jp_3516_;
}
else
{
lean_dec(v___y_3558_);
lean_dec_ref(v___y_3555_);
lean_dec_ref(v___y_3554_);
v___y_3517_ = v___y_3550_;
v___y_3518_ = v___y_3549_;
v___y_3519_ = v___y_3553_;
v___y_3520_ = v___y_3556_;
v___y_3521_ = v___y_3557_;
v___y_3522_ = v___y_3551_;
goto v___jp_3516_;
}
}
}
v___jp_3563_:
{
if (v___y_3578_ == 0)
{
uint8_t v___x_3579_; 
v___x_3579_ = l_Lean_Expr_isMData(v___y_3577_);
if (v___x_3579_ == 0)
{
if (lean_obj_tag(v___y_3577_) == 8)
{
lean_object* v_declName_3580_; lean_object* v_type_3581_; lean_object* v_value_3582_; lean_object* v_body_3583_; uint8_t v_nondep_3584_; uint8_t v___x_3585_; 
lean_dec_ref(v___y_3576_);
lean_dec_ref(v___y_3571_);
lean_dec_ref(v___y_3570_);
lean_dec_ref(v___y_3566_);
lean_dec_ref(v___y_3565_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v_declName_3580_ = lean_ctor_get(v___y_3577_, 0);
lean_inc(v_declName_3580_);
v_type_3581_ = lean_ctor_get(v___y_3577_, 1);
lean_inc_ref(v_type_3581_);
v_value_3582_ = lean_ctor_get(v___y_3577_, 2);
lean_inc_ref(v_value_3582_);
v_body_3583_ = lean_ctor_get(v___y_3577_, 3);
lean_inc_ref(v_body_3583_);
v_nondep_3584_ = lean_ctor_get_uint8(v___y_3577_, sizeof(void*)*4 + 8);
lean_dec_ref(v___y_3577_);
v___x_3585_ = l_Lean_Expr_hasLooseBVars(v_type_3581_);
if (v___x_3585_ == 0)
{
uint8_t v___x_3586_; 
v___x_3586_ = l_Lean_Expr_hasLooseBVars(v_value_3582_);
if (v___x_3586_ == 0)
{
lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___f_3589_; uint8_t v___x_3590_; lean_object* v___x_3591_; 
lean_dec_ref(v___y_3574_);
v___x_3587_ = lean_box(v___y_3573_);
v___x_3588_ = lean_box(v___x_3586_);
v___f_3589_ = lean_alloc_closure((void*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___boxed), 12, 6);
lean_closure_set(v___f_3589_, 0, v___y_3569_);
lean_closure_set(v___f_3589_, 1, v___x_3587_);
lean_closure_set(v___f_3589_, 2, v___x_3588_);
lean_closure_set(v___f_3589_, 3, v_goal_3167_);
lean_closure_set(v___f_3589_, 4, v___y_3568_);
lean_closure_set(v___f_3589_, 5, v_body_3583_);
v___x_3590_ = 0;
v___x_3591_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__9___redArg(v_declName_3580_, v_type_3581_, v_value_3582_, v___f_3589_, v_nondep_3584_, v___x_3590_, v___y_3567_, v___y_3575_, v___y_3572_, v___y_3564_);
if (lean_obj_tag(v___x_3591_) == 0)
{
lean_object* v_a_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3602_; 
v_a_3592_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3594_ = v___x_3591_;
v_isShared_3595_ = v_isSharedCheck_3602_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_a_3592_);
lean_dec(v___x_3591_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3602_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3600_; 
v___x_3596_ = l_Lean_Expr_mvarId_x21(v_a_3592_);
lean_dec(v_a_3592_);
v___x_3597_ = lean_box(0);
v___x_3598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3596_);
lean_ctor_set(v___x_3598_, 1, v___x_3597_);
if (v_isShared_3595_ == 0)
{
lean_ctor_set(v___x_3594_, 0, v___x_3598_);
v___x_3600_ = v___x_3594_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v___x_3598_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
return v___x_3600_;
}
}
}
else
{
lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3610_; 
v_a_3603_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3610_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3610_ == 0)
{
v___x_3605_ = v___x_3591_;
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3591_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3608_; 
if (v_isShared_3606_ == 0)
{
v___x_3608_ = v___x_3605_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v_a_3603_);
v___x_3608_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
return v___x_3608_;
}
}
}
}
else
{
lean_dec_ref(v_type_3581_);
lean_dec(v_declName_3580_);
lean_dec_ref(v___y_3569_);
v___y_3494_ = v___y_3572_;
v___y_3495_ = v___y_3567_;
v___y_3496_ = v_value_3582_;
v___y_3497_ = v_body_3583_;
v___y_3498_ = v___y_3568_;
v___y_3499_ = v___y_3564_;
v___y_3500_ = v___y_3575_;
v___y_3501_ = v___y_3574_;
goto v___jp_3493_;
}
}
else
{
lean_dec_ref(v_type_3581_);
lean_dec(v_declName_3580_);
lean_dec_ref(v___y_3569_);
v___y_3494_ = v___y_3572_;
v___y_3495_ = v___y_3567_;
v___y_3496_ = v_value_3582_;
v___y_3497_ = v_body_3583_;
v___y_3498_ = v___y_3568_;
v___y_3499_ = v___y_3564_;
v___y_3500_ = v___y_3575_;
v___y_3501_ = v___y_3574_;
goto v___jp_3493_;
}
}
else
{
uint8_t v___x_3611_; 
lean_dec_ref(v___y_3569_);
v___x_3611_ = l_Lean_Expr_isLambda(v___y_3577_);
if (v___x_3611_ == 0)
{
v___y_3338_ = v___y_3566_;
v___y_3339_ = v___y_3577_;
v___y_3340_ = v___y_3568_;
v___y_3341_ = v___y_3576_;
v___y_3342_ = v___y_3570_;
v___y_3343_ = v___y_3571_;
v___y_3344_ = v___y_3565_;
v___y_3345_ = v___y_3574_;
v___y_3346_ = v___y_3567_;
v___y_3347_ = v___y_3575_;
v___y_3348_ = v___y_3572_;
v___y_3349_ = v___y_3564_;
goto v___jp_3337_;
}
else
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; 
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___x_3612_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__17));
lean_inc_ref(v___y_3570_);
lean_inc_ref(v___y_3565_);
v___x_3613_ = l_Lean_Name_mkStr3(v___y_3565_, v___y_3570_, v___x_3612_);
lean_inc(v___y_3564_);
lean_inc_ref(v___y_3572_);
lean_inc(v___y_3575_);
lean_inc_ref(v___y_3567_);
lean_inc(v___x_3613_);
v___x_3614_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst(v_goal_3167_, v___x_3613_, v___y_3567_, v___y_3575_, v___y_3572_, v___y_3564_);
if (lean_obj_tag(v___x_3614_) == 0)
{
lean_object* v_a_3615_; 
v_a_3615_ = lean_ctor_get(v___x_3614_, 0);
lean_inc(v_a_3615_);
lean_dec_ref(v___x_3614_);
if (lean_obj_tag(v_a_3615_) == 1)
{
lean_object* v_tail_3616_; 
v_tail_3616_ = lean_ctor_get(v_a_3615_, 1);
lean_inc(v_tail_3616_);
if (lean_obj_tag(v_tail_3616_) == 0)
{
lean_object* v_head_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3643_; 
lean_dec(v___x_3613_);
lean_dec_ref(v___y_3576_);
lean_dec_ref(v___y_3574_);
lean_dec_ref(v___y_3571_);
lean_dec_ref(v___y_3570_);
lean_dec_ref(v___y_3568_);
lean_dec_ref(v___y_3566_);
lean_dec_ref(v___y_3565_);
v_head_3617_ = lean_ctor_get(v_a_3615_, 0);
v_isSharedCheck_3643_ = !lean_is_exclusive(v_a_3615_);
if (v_isSharedCheck_3643_ == 0)
{
lean_object* v_unused_3644_; 
v_unused_3644_ = lean_ctor_get(v_a_3615_, 1);
lean_dec(v_unused_3644_);
v___x_3619_ = v_a_3615_;
v_isShared_3620_ = v_isSharedCheck_3643_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_head_3617_);
lean_dec(v_a_3615_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3643_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___x_3621_ = l_Lean_Expr_bindingName_x21(v___y_3577_);
lean_dec_ref(v___y_3577_);
v___x_3622_ = l_Lean_MVarId_intro(v_head_3617_, v___x_3621_, v___y_3567_, v___y_3575_, v___y_3572_, v___y_3564_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_object* v_a_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3634_; 
v_a_3623_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3625_ = v___x_3622_;
v_isShared_3626_ = v_isSharedCheck_3634_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_a_3623_);
lean_dec(v___x_3622_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3634_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v_snd_3627_; lean_object* v___x_3629_; 
v_snd_3627_ = lean_ctor_get(v_a_3623_, 1);
lean_inc(v_snd_3627_);
lean_dec(v_a_3623_);
if (v_isShared_3620_ == 0)
{
lean_ctor_set(v___x_3619_, 0, v_snd_3627_);
v___x_3629_ = v___x_3619_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_snd_3627_);
lean_ctor_set(v_reuseFailAlloc_3633_, 1, v_tail_3616_);
v___x_3629_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
lean_object* v___x_3631_; 
if (v_isShared_3626_ == 0)
{
lean_ctor_set(v___x_3625_, 0, v___x_3629_);
v___x_3631_ = v___x_3625_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v___x_3629_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
}
else
{
lean_object* v_a_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3642_; 
lean_del_object(v___x_3619_);
v_a_3635_ = lean_ctor_get(v___x_3622_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___x_3622_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3637_ = v___x_3622_;
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_a_3635_);
lean_dec(v___x_3622_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3640_; 
if (v_isShared_3638_ == 0)
{
v___x_3640_ = v___x_3637_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3635_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
}
else
{
lean_dec_ref(v_a_3615_);
lean_dec(v_tail_3616_);
v___y_3418_ = v___y_3566_;
v___y_3419_ = v___y_3577_;
v___y_3420_ = v___y_3568_;
v___y_3421_ = v___x_3579_;
v___y_3422_ = v___y_3576_;
v___y_3423_ = v___x_3613_;
v___y_3424_ = v___y_3570_;
v___y_3425_ = v___y_3571_;
v___y_3426_ = v___y_3565_;
v___y_3427_ = v___y_3574_;
v___y_3428_ = v___y_3567_;
v___y_3429_ = v___y_3575_;
v___y_3430_ = v___y_3572_;
v___y_3431_ = v___y_3564_;
goto v___jp_3417_;
}
}
else
{
lean_dec(v_a_3615_);
v___y_3418_ = v___y_3566_;
v___y_3419_ = v___y_3577_;
v___y_3420_ = v___y_3568_;
v___y_3421_ = v___x_3579_;
v___y_3422_ = v___y_3576_;
v___y_3423_ = v___x_3613_;
v___y_3424_ = v___y_3570_;
v___y_3425_ = v___y_3571_;
v___y_3426_ = v___y_3565_;
v___y_3427_ = v___y_3574_;
v___y_3428_ = v___y_3567_;
v___y_3429_ = v___y_3575_;
v___y_3430_ = v___y_3572_;
v___y_3431_ = v___y_3564_;
goto v___jp_3417_;
}
}
else
{
lean_dec(v___x_3613_);
lean_dec_ref(v___y_3577_);
lean_dec_ref(v___y_3576_);
lean_dec(v___y_3575_);
lean_dec_ref(v___y_3574_);
lean_dec_ref(v___y_3572_);
lean_dec_ref(v___y_3571_);
lean_dec_ref(v___y_3570_);
lean_dec_ref(v___y_3568_);
lean_dec_ref(v___y_3567_);
lean_dec_ref(v___y_3566_);
lean_dec_ref(v___y_3565_);
lean_dec(v___y_3564_);
return v___x_3614_;
}
}
}
}
else
{
lean_dec_ref(v___y_3576_);
lean_dec_ref(v___y_3571_);
lean_dec_ref(v___y_3570_);
lean_dec_ref(v___y_3569_);
lean_dec_ref(v___y_3566_);
lean_dec_ref(v___y_3565_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
if (lean_obj_tag(v___y_3568_) == 6)
{
lean_object* v_binderName_3645_; lean_object* v_binderType_3646_; lean_object* v_body_3647_; uint8_t v_binderInfo_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; size_t v___x_3651_; size_t v___x_3652_; uint8_t v___x_3653_; 
v_binderName_3645_ = lean_ctor_get(v___y_3568_, 0);
lean_inc(v_binderName_3645_);
v_binderType_3646_ = lean_ctor_get(v___y_3568_, 1);
v_body_3647_ = lean_ctor_get(v___y_3568_, 2);
v_binderInfo_3648_ = lean_ctor_get_uint8(v___y_3568_, sizeof(void*)*3 + 8);
v___x_3649_ = l_Lean_Expr_bindingDomain_x21(v___y_3568_);
v___x_3650_ = l_Lean_Expr_mdataExpr_x21(v___y_3577_);
lean_dec_ref(v___y_3577_);
v___x_3651_ = lean_ptr_addr(v_binderType_3646_);
v___x_3652_ = lean_ptr_addr(v___x_3649_);
v___x_3653_ = lean_usize_dec_eq(v___x_3651_, v___x_3652_);
if (v___x_3653_ == 0)
{
v___y_3549_ = v___y_3567_;
v___y_3550_ = v___y_3572_;
v___y_3551_ = v___y_3568_;
v___y_3552_ = v_binderInfo_3648_;
v___y_3553_ = v___y_3564_;
v___y_3554_ = v___x_3650_;
v___y_3555_ = v___x_3649_;
v___y_3556_ = v___y_3575_;
v___y_3557_ = v___y_3574_;
v___y_3558_ = v_binderName_3645_;
v___y_3559_ = v___x_3653_;
goto v___jp_3548_;
}
else
{
size_t v___x_3654_; size_t v___x_3655_; uint8_t v___x_3656_; 
v___x_3654_ = lean_ptr_addr(v_body_3647_);
v___x_3655_ = lean_ptr_addr(v___x_3650_);
v___x_3656_ = lean_usize_dec_eq(v___x_3654_, v___x_3655_);
v___y_3549_ = v___y_3567_;
v___y_3550_ = v___y_3572_;
v___y_3551_ = v___y_3568_;
v___y_3552_ = v_binderInfo_3648_;
v___y_3553_ = v___y_3564_;
v___y_3554_ = v___x_3650_;
v___y_3555_ = v___x_3649_;
v___y_3556_ = v___y_3575_;
v___y_3557_ = v___y_3574_;
v___y_3558_ = v_binderName_3645_;
v___y_3559_ = v___x_3656_;
goto v___jp_3548_;
}
}
else
{
lean_object* v___x_3657_; lean_object* v___x_3658_; 
lean_dec_ref(v___y_3577_);
lean_dec_ref(v___y_3568_);
v___x_3657_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__0___closed__1);
v___x_3658_ = l_panic___at___00Lean_Meta_Monotonicity_headBetaUnderLambda_spec__0(v___x_3657_);
v___y_3517_ = v___y_3572_;
v___y_3518_ = v___y_3567_;
v___y_3519_ = v___y_3564_;
v___y_3520_ = v___y_3575_;
v___y_3521_ = v___y_3574_;
v___y_3522_ = v___x_3658_;
goto v___jp_3516_;
}
}
}
else
{
lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
lean_dec_ref(v___y_3577_);
lean_dec_ref(v___y_3576_);
lean_dec_ref(v___y_3574_);
lean_dec_ref(v___y_3571_);
lean_dec_ref(v___y_3569_);
lean_dec_ref(v___y_3568_);
lean_dec_ref(v___y_3566_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___x_3659_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__18));
v___x_3660_ = l_Lean_Name_mkStr3(v___y_3565_, v___y_3570_, v___x_3659_);
v___x_3661_ = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_applyConst(v_goal_3167_, v___x_3660_, v___y_3567_, v___y_3575_, v___y_3572_, v___y_3564_);
return v___x_3661_;
}
}
v___jp_3662_:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___f_3679_; uint8_t v___x_3680_; 
v___x_3677_ = l_Lean_Meta_Monotonicity_headBetaUnderLambda(v_f_3672_);
v___x_3678_ = l_Lean_Expr_bindingBody_x21(v___x_3677_);
lean_inc_ref(v___x_3678_);
v___f_3679_ = lean_alloc_closure((void*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__1___boxed), 7, 1);
lean_closure_set(v___f_3679_, 0, v___x_3678_);
v___x_3680_ = l_Lean_Expr_hasLooseBVars(v___x_3678_);
if (v___x_3680_ == 0)
{
v___y_3564_ = v___y_3676_;
v___y_3565_ = v___y_3670_;
v___y_3566_ = v___y_3665_;
v___y_3567_ = v___y_3673_;
v___y_3568_ = v___x_3677_;
v___y_3569_ = v___y_3663_;
v___y_3570_ = v___y_3668_;
v___y_3571_ = v___y_3669_;
v___y_3572_ = v___y_3675_;
v___y_3573_ = v___y_3664_;
v___y_3574_ = v___y_3671_;
v___y_3575_ = v___y_3674_;
v___y_3576_ = v___f_3679_;
v___y_3577_ = v___x_3678_;
v___y_3578_ = v___y_3666_;
goto v___jp_3563_;
}
else
{
v___y_3564_ = v___y_3676_;
v___y_3565_ = v___y_3670_;
v___y_3566_ = v___y_3665_;
v___y_3567_ = v___y_3673_;
v___y_3568_ = v___x_3677_;
v___y_3569_ = v___y_3663_;
v___y_3570_ = v___y_3668_;
v___y_3571_ = v___y_3669_;
v___y_3572_ = v___y_3675_;
v___y_3573_ = v___y_3664_;
v___y_3574_ = v___y_3671_;
v___y_3575_ = v___y_3674_;
v___y_3576_ = v___f_3679_;
v___y_3577_ = v___x_3678_;
v___y_3578_ = v___y_3667_;
goto v___jp_3563_;
}
}
v___jp_3681_:
{
lean_object* v___x_3686_; 
lean_inc(v_goal_3167_);
v___x_3686_ = l_Lean_MVarId_getType(v_goal_3167_, v___y_3682_, v___y_3683_, v___y_3684_, v___y_3685_);
if (lean_obj_tag(v___x_3686_) == 0)
{
lean_object* v_a_3687_; uint8_t v___x_3688_; 
v_a_3687_ = lean_ctor_get(v___x_3686_, 0);
lean_inc(v_a_3687_);
lean_dec_ref(v___x_3686_);
v___x_3688_ = l_Lean_Expr_isForall(v_a_3687_);
if (v___x_3688_ == 0)
{
lean_object* v___x_3689_; 
lean_inc(v_a_3687_);
v___x_3689_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_a_3687_, v___y_3683_);
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v_a_3690_; lean_object* v___x_3691_; uint8_t v___x_3692_; 
v_a_3690_ = lean_ctor_get(v___x_3689_, 0);
lean_inc(v_a_3690_);
lean_dec_ref(v___x_3689_);
v___x_3691_ = l_Lean_Expr_cleanupAnnotations(v_a_3690_);
v___x_3692_ = l_Lean_Expr_isApp(v___x_3691_);
if (v___x_3692_ == 0)
{
lean_dec_ref(v___x_3691_);
lean_dec(v_a_3687_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___y_3175_ = v___y_3682_;
v___y_3176_ = v___y_3683_;
v___y_3177_ = v___y_3684_;
v___y_3178_ = v___y_3685_;
goto v___jp_3174_;
}
else
{
lean_object* v_arg_3693_; lean_object* v___x_3694_; uint8_t v___x_3695_; 
v_arg_3693_ = lean_ctor_get(v___x_3691_, 1);
lean_inc_ref(v_arg_3693_);
v___x_3694_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3691_);
v___x_3695_ = l_Lean_Expr_isApp(v___x_3694_);
if (v___x_3695_ == 0)
{
lean_dec_ref(v___x_3694_);
lean_dec_ref(v_arg_3693_);
lean_dec(v_a_3687_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___y_3175_ = v___y_3682_;
v___y_3176_ = v___y_3683_;
v___y_3177_ = v___y_3684_;
v___y_3178_ = v___y_3685_;
goto v___jp_3174_;
}
else
{
lean_object* v___x_3696_; uint8_t v___x_3697_; 
v___x_3696_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3694_);
v___x_3697_ = l_Lean_Expr_isApp(v___x_3696_);
if (v___x_3697_ == 0)
{
lean_dec_ref(v___x_3696_);
lean_dec_ref(v_arg_3693_);
lean_dec(v_a_3687_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___y_3175_ = v___y_3682_;
v___y_3176_ = v___y_3683_;
v___y_3177_ = v___y_3684_;
v___y_3178_ = v___y_3685_;
goto v___jp_3174_;
}
else
{
lean_object* v___x_3698_; uint8_t v___x_3699_; 
v___x_3698_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3696_);
v___x_3699_ = l_Lean_Expr_isApp(v___x_3698_);
if (v___x_3699_ == 0)
{
lean_dec_ref(v___x_3698_);
lean_dec_ref(v_arg_3693_);
lean_dec(v_a_3687_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___y_3175_ = v___y_3682_;
v___y_3176_ = v___y_3683_;
v___y_3177_ = v___y_3684_;
v___y_3178_ = v___y_3685_;
goto v___jp_3174_;
}
else
{
lean_object* v_arg_3700_; lean_object* v___x_3701_; uint8_t v___x_3702_; 
v_arg_3700_ = lean_ctor_get(v___x_3698_, 1);
lean_inc_ref(v_arg_3700_);
v___x_3701_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3698_);
v___x_3702_ = l_Lean_Expr_isApp(v___x_3701_);
if (v___x_3702_ == 0)
{
lean_dec_ref(v___x_3701_);
lean_dec_ref(v_arg_3700_);
lean_dec_ref(v_arg_3693_);
lean_dec(v_a_3687_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___y_3175_ = v___y_3682_;
v___y_3176_ = v___y_3683_;
v___y_3177_ = v___y_3684_;
v___y_3178_ = v___y_3685_;
goto v___jp_3174_;
}
else
{
lean_object* v_arg_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; uint8_t v___x_3708_; 
v_arg_3703_ = lean_ctor_get(v___x_3701_, 1);
lean_inc_ref(v_arg_3703_);
v___x_3704_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3701_);
v___x_3705_ = ((lean_object*)(l_Lean_Meta_Monotonicity_initFn___closed__3_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_));
v___x_3706_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___lam__0___closed__2_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_));
v___x_3707_ = ((lean_object*)(l_Lean_Meta_Monotonicity_solveMonoCall___closed__9));
v___x_3708_ = l_Lean_Expr_isConstOf(v___x_3704_, v___x_3707_);
lean_dec_ref(v___x_3704_);
if (v___x_3708_ == 0)
{
lean_dec_ref(v_arg_3703_);
lean_dec_ref(v_arg_3700_);
lean_dec_ref(v_arg_3693_);
lean_dec(v_a_3687_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___y_3175_ = v___y_3682_;
v___y_3176_ = v___y_3683_;
v___y_3177_ = v___y_3684_;
v___y_3178_ = v___y_3685_;
goto v___jp_3174_;
}
else
{
lean_object* v___x_3709_; lean_object* v_a_3710_; lean_object* v___x_3711_; uint8_t v___x_3712_; 
v___x_3709_ = l_Lean_instantiateMVars___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__0___redArg(v_arg_3693_, v___y_3683_);
v_a_3710_ = lean_ctor_get(v___x_3709_, 0);
lean_inc(v_a_3710_);
lean_dec_ref(v___x_3709_);
v___x_3711_ = l_Lean_Expr_headBeta(v_a_3710_);
v___x_3712_ = l_Lean_Expr_isLambda(v___x_3711_);
if (v___x_3712_ == 0)
{
lean_object* v___x_3713_; 
lean_inc(v___y_3685_);
lean_inc_ref(v___y_3684_);
lean_inc(v___y_3683_);
lean_inc_ref(v___y_3682_);
v___x_3713_ = l_Lean_Meta_etaExpand(v___x_3711_, v___y_3682_, v___y_3683_, v___y_3684_, v___y_3685_);
if (lean_obj_tag(v___x_3713_) == 0)
{
lean_object* v_a_3714_; 
v_a_3714_ = lean_ctor_get(v___x_3713_, 0);
lean_inc(v_a_3714_);
lean_dec_ref(v___x_3713_);
lean_inc(v_a_3687_);
v___y_3663_ = v_a_3687_;
v___y_3664_ = v___x_3708_;
v___y_3665_ = v_arg_3700_;
v___y_3666_ = v___x_3708_;
v___y_3667_ = v___x_3688_;
v___y_3668_ = v___x_3706_;
v___y_3669_ = v_arg_3703_;
v___y_3670_ = v___x_3705_;
v___y_3671_ = v_a_3687_;
v_f_3672_ = v_a_3714_;
v___y_3673_ = v___y_3682_;
v___y_3674_ = v___y_3683_;
v___y_3675_ = v___y_3684_;
v___y_3676_ = v___y_3685_;
goto v___jp_3662_;
}
else
{
lean_object* v_a_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3722_; 
lean_dec_ref(v_arg_3703_);
lean_dec_ref(v_arg_3700_);
lean_dec(v_a_3687_);
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
lean_dec(v_cls_3166_);
v_a_3715_ = lean_ctor_get(v___x_3713_, 0);
v_isSharedCheck_3722_ = !lean_is_exclusive(v___x_3713_);
if (v_isSharedCheck_3722_ == 0)
{
v___x_3717_ = v___x_3713_;
v_isShared_3718_ = v_isSharedCheck_3722_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_a_3715_);
lean_dec(v___x_3713_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3722_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
lean_object* v___x_3720_; 
if (v_isShared_3718_ == 0)
{
v___x_3720_ = v___x_3717_;
goto v_reusejp_3719_;
}
else
{
lean_object* v_reuseFailAlloc_3721_; 
v_reuseFailAlloc_3721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3721_, 0, v_a_3715_);
v___x_3720_ = v_reuseFailAlloc_3721_;
goto v_reusejp_3719_;
}
v_reusejp_3719_:
{
return v___x_3720_;
}
}
}
}
else
{
lean_inc(v_a_3687_);
v___y_3663_ = v_a_3687_;
v___y_3664_ = v___x_3708_;
v___y_3665_ = v_arg_3700_;
v___y_3666_ = v___x_3708_;
v___y_3667_ = v___x_3688_;
v___y_3668_ = v___x_3706_;
v___y_3669_ = v_arg_3703_;
v___y_3670_ = v___x_3705_;
v___y_3671_ = v_a_3687_;
v_f_3672_ = v___x_3711_;
v___y_3673_ = v___y_3682_;
v___y_3674_ = v___y_3683_;
v___y_3675_ = v___y_3684_;
v___y_3676_ = v___y_3685_;
goto v___jp_3662_;
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
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3730_; 
lean_dec(v_a_3687_);
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
lean_dec(v_cls_3166_);
v_a_3723_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3725_ = v___x_3689_;
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3689_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3728_; 
if (v_isShared_3726_ == 0)
{
v___x_3728_ = v___x_3725_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3723_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
}
else
{
lean_object* v___x_3731_; 
lean_dec(v_a_3687_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_cls_3166_);
v___x_3731_ = l_Lean_Meta_intro1Core(v_goal_3167_, v___x_3688_, v___y_3682_, v___y_3683_, v___y_3684_, v___y_3685_);
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3749_; 
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3734_ = v___x_3731_;
v_isShared_3735_ = v_isSharedCheck_3749_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3731_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3749_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v_snd_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3747_; 
v_snd_3736_ = lean_ctor_get(v_a_3732_, 1);
v_isSharedCheck_3747_ = !lean_is_exclusive(v_a_3732_);
if (v_isSharedCheck_3747_ == 0)
{
lean_object* v_unused_3748_; 
v_unused_3748_ = lean_ctor_get(v_a_3732_, 0);
lean_dec(v_unused_3748_);
v___x_3738_ = v_a_3732_;
v_isShared_3739_ = v_isSharedCheck_3747_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_snd_3736_);
lean_dec(v_a_3732_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3747_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3740_; lean_object* v___x_3742_; 
v___x_3740_ = lean_box(0);
if (v_isShared_3739_ == 0)
{
lean_ctor_set_tag(v___x_3738_, 1);
lean_ctor_set(v___x_3738_, 1, v___x_3740_);
lean_ctor_set(v___x_3738_, 0, v_snd_3736_);
v___x_3742_ = v___x_3738_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v_snd_3736_);
lean_ctor_set(v_reuseFailAlloc_3746_, 1, v___x_3740_);
v___x_3742_ = v_reuseFailAlloc_3746_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
lean_object* v___x_3744_; 
if (v_isShared_3735_ == 0)
{
lean_ctor_set(v___x_3734_, 0, v___x_3742_);
v___x_3744_ = v___x_3734_;
goto v_reusejp_3743_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v___x_3742_);
v___x_3744_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3743_;
}
v_reusejp_3743_:
{
return v___x_3744_;
}
}
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
v_a_3750_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3731_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3731_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
}
else
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
lean_dec(v_cls_3166_);
v_a_3758_ = lean_ctor_get(v___x_3686_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3686_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3686_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3686_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3763_; 
if (v_isShared_3761_ == 0)
{
v___x_3763_ = v___x_3760_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_a_3758_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
}
v_resetjp_3768_:
{
uint8_t v___x_3771_; 
v___x_3771_ = lean_unbox(v_a_3767_);
lean_dec(v_a_3767_);
if (v___x_3771_ == 0)
{
lean_del_object(v___x_3769_);
v___y_3682_ = v___y_3169_;
v___y_3683_ = v___y_3170_;
v___y_3684_ = v___y_3171_;
v___y_3685_ = v___y_3172_;
goto v___jp_3681_;
}
else
{
lean_object* v___x_3772_; lean_object* v___x_3774_; 
v___x_3772_ = lean_obj_once(&l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__20, &l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__20_once, _init_l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___closed__20);
lean_inc(v_goal_3167_);
if (v_isShared_3770_ == 0)
{
lean_ctor_set_tag(v___x_3769_, 1);
lean_ctor_set(v___x_3769_, 0, v_goal_3167_);
v___x_3774_ = v___x_3769_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v_goal_3167_);
v___x_3774_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3775_, 0, v___x_3772_);
lean_ctor_set(v___x_3775_, 1, v___x_3774_);
lean_inc(v_cls_3166_);
v___x_3776_ = l_Lean_addTrace___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__3(v_cls_3166_, v___x_3775_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_);
if (lean_obj_tag(v___x_3776_) == 0)
{
lean_dec_ref(v___x_3776_);
v___y_3682_ = v___y_3169_;
v___y_3683_ = v___y_3170_;
v___y_3684_ = v___y_3171_;
v___y_3685_ = v___y_3172_;
goto v___jp_3681_;
}
else
{
lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3784_; 
lean_dec(v___y_3172_);
lean_dec_ref(v___y_3171_);
lean_dec(v___y_3170_);
lean_dec_ref(v___y_3169_);
lean_dec_ref(v_failK_3168_);
lean_dec(v_goal_3167_);
lean_dec(v_cls_3166_);
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3779_ = v___x_3776_;
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3776_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3782_; 
if (v_isShared_3780_ == 0)
{
v___x_3782_ = v___x_3779_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_a_3777_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___boxed(lean_object* v_cls_3787_, lean_object* v_goal_3788_, lean_object* v_failK_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_){
_start:
{
lean_object* v_res_3795_; 
v_res_3795_ = l_Lean_Meta_Monotonicity_solveMonoStep___lam__2(v_cls_3787_, v_goal_3788_, v_failK_3789_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_);
return v_res_3795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep(lean_object* v_failK_3796_, lean_object* v_goal_3797_, lean_object* v_a_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_){
_start:
{
lean_object* v_cls_3803_; lean_object* v___f_3804_; lean_object* v___x_3805_; 
v_cls_3803_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__2));
lean_inc(v_goal_3797_);
v___f_3804_ = lean_alloc_closure((void*)(l_Lean_Meta_Monotonicity_solveMonoStep___lam__2___boxed), 8, 3);
lean_closure_set(v___f_3804_, 0, v_cls_3803_);
lean_closure_set(v___f_3804_, 1, v_goal_3797_);
lean_closure_set(v___f_3804_, 2, v_failK_3796_);
v___x_3805_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__10___redArg(v_goal_3797_, v___f_3804_, v_a_3798_, v_a_3799_, v_a_3800_, v_a_3801_);
return v___x_3805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMonoStep___boxed(lean_object* v_failK_3806_, lean_object* v_goal_3807_, lean_object* v_a_3808_, lean_object* v_a_3809_, lean_object* v_a_3810_, lean_object* v_a_3811_, lean_object* v_a_3812_){
_start:
{
lean_object* v_res_3813_; 
v_res_3813_ = l_Lean_Meta_Monotonicity_solveMonoStep(v_failK_3806_, v_goal_3807_, v_a_3808_, v_a_3809_, v_a_3810_, v_a_3811_);
return v_res_3813_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1(lean_object* v_mvarId_3814_, lean_object* v_val_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_){
_start:
{
lean_object* v___x_3821_; 
v___x_3821_ = l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___redArg(v_mvarId_3814_, v_val_3815_, v___y_3817_);
return v___x_3821_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1___boxed(lean_object* v_mvarId_3822_, lean_object* v_val_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l_Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1(v_mvarId_3822_, v_val_3823_, v___y_3824_, v___y_3825_, v___y_3826_, v___y_3827_);
lean_dec(v___y_3827_);
lean_dec_ref(v___y_3826_);
lean_dec(v___y_3825_);
lean_dec_ref(v___y_3824_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5(lean_object* v_00_u03b1_3830_, lean_object* v_name_3831_, uint8_t v_bi_3832_, lean_object* v_type_3833_, lean_object* v_k_3834_, uint8_t v_kind_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
lean_object* v___x_3841_; 
v___x_3841_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5___redArg(v_name_3831_, v_bi_3832_, v_type_3833_, v_k_3834_, v_kind_3835_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_);
return v___x_3841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5___boxed(lean_object* v_00_u03b1_3842_, lean_object* v_name_3843_, lean_object* v_bi_3844_, lean_object* v_type_3845_, lean_object* v_k_3846_, lean_object* v_kind_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_){
_start:
{
uint8_t v_bi_boxed_3853_; uint8_t v_kind_boxed_3854_; lean_object* v_res_3855_; 
v_bi_boxed_3853_ = lean_unbox(v_bi_3844_);
v_kind_boxed_3854_ = lean_unbox(v_kind_3847_);
v_res_3855_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4_spec__5(v_00_u03b1_3842_, v_name_3843_, v_bi_boxed_3853_, v_type_3845_, v_k_3846_, v_kind_boxed_3854_, v___y_3848_, v___y_3849_, v___y_3850_, v___y_3851_);
return v_res_3855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4(lean_object* v_00_u03b1_3856_, lean_object* v_name_3857_, lean_object* v_type_3858_, lean_object* v_k_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
lean_object* v___x_3865_; 
v___x_3865_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4___redArg(v_name_3857_, v_type_3858_, v_k_3859_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_);
return v___x_3865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4___boxed(lean_object* v_00_u03b1_3866_, lean_object* v_name_3867_, lean_object* v_type_3868_, lean_object* v_k_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_){
_start:
{
lean_object* v_res_3875_; 
v_res_3875_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__4(v_00_u03b1_3866_, v_name_3867_, v_type_3868_, v_k_3869_, v___y_3870_, v___y_3871_, v___y_3872_, v___y_3873_);
return v_res_3875_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6(lean_object* v_upperBound_3876_, lean_object* v___x_3877_, uint8_t v___x_3878_, lean_object* v_inst_3879_, lean_object* v_R_3880_, lean_object* v_a_3881_, lean_object* v_b_3882_, lean_object* v_c_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_){
_start:
{
lean_object* v___x_3889_; 
v___x_3889_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___redArg(v_upperBound_3876_, v___x_3877_, v___x_3878_, v_a_3881_, v_b_3882_);
return v___x_3889_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6___boxed(lean_object* v_upperBound_3890_, lean_object* v___x_3891_, lean_object* v___x_3892_, lean_object* v_inst_3893_, lean_object* v_R_3894_, lean_object* v_a_3895_, lean_object* v_b_3896_, lean_object* v_c_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_){
_start:
{
uint8_t v___x_44017__boxed_3903_; lean_object* v_res_3904_; 
v___x_44017__boxed_3903_ = lean_unbox(v___x_3892_);
v_res_3904_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__6(v_upperBound_3890_, v___x_3891_, v___x_44017__boxed_3903_, v_inst_3893_, v_R_3894_, v_a_3895_, v_b_3896_, v_c_3897_, v___y_3898_, v___y_3899_, v___y_3900_, v___y_3901_);
lean_dec(v___y_3901_);
lean_dec_ref(v___y_3900_);
lean_dec(v___y_3899_);
lean_dec_ref(v___y_3898_);
lean_dec_ref(v___x_3891_);
lean_dec(v_upperBound_3890_);
return v_res_3904_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1(lean_object* v_00_u03b2_3905_, lean_object* v_x_3906_, lean_object* v_x_3907_, lean_object* v_x_3908_){
_start:
{
lean_object* v___x_3909_; 
v___x_3909_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1___redArg(v_x_3906_, v_x_3907_, v_x_3908_);
return v___x_3909_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_3910_, lean_object* v_x_3911_, size_t v_x_3912_, size_t v_x_3913_, lean_object* v_x_3914_, lean_object* v_x_3915_){
_start:
{
lean_object* v___x_3916_; 
v___x_3916_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___redArg(v_x_3911_, v_x_3912_, v_x_3913_, v_x_3914_, v_x_3915_);
return v___x_3916_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5___boxed(lean_object* v_00_u03b2_3917_, lean_object* v_x_3918_, lean_object* v_x_3919_, lean_object* v_x_3920_, lean_object* v_x_3921_, lean_object* v_x_3922_){
_start:
{
size_t v_x_44053__boxed_3923_; size_t v_x_44054__boxed_3924_; lean_object* v_res_3925_; 
v_x_44053__boxed_3923_ = lean_unbox_usize(v_x_3919_);
lean_dec(v_x_3919_);
v_x_44054__boxed_3924_ = lean_unbox_usize(v_x_3920_);
lean_dec(v_x_3920_);
v_res_3925_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5(v_00_u03b2_3917_, v_x_3918_, v_x_44053__boxed_3923_, v_x_44054__boxed_3924_, v_x_3921_, v_x_3922_);
return v_res_3925_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13(lean_object* v_00_u03b2_3926_, lean_object* v_n_3927_, lean_object* v_k_3928_, lean_object* v_v_3929_){
_start:
{
lean_object* v___x_3930_; 
v___x_3930_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13___redArg(v_n_3927_, v_k_3928_, v_v_3929_);
return v___x_3930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14(lean_object* v_00_u03b2_3931_, size_t v_depth_3932_, lean_object* v_keys_3933_, lean_object* v_vals_3934_, lean_object* v_heq_3935_, lean_object* v_i_3936_, lean_object* v_entries_3937_){
_start:
{
lean_object* v___x_3938_; 
v___x_3938_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14___redArg(v_depth_3932_, v_keys_3933_, v_vals_3934_, v_i_3936_, v_entries_3937_);
return v___x_3938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14___boxed(lean_object* v_00_u03b2_3939_, lean_object* v_depth_3940_, lean_object* v_keys_3941_, lean_object* v_vals_3942_, lean_object* v_heq_3943_, lean_object* v_i_3944_, lean_object* v_entries_3945_){
_start:
{
size_t v_depth_boxed_3946_; lean_object* v_res_3947_; 
v_depth_boxed_3946_ = lean_unbox_usize(v_depth_3940_);
lean_dec(v_depth_3940_);
v_res_3947_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__14(v_00_u03b2_3939_, v_depth_boxed_3946_, v_keys_3941_, v_vals_3942_, v_heq_3943_, v_i_3944_, v_entries_3945_);
lean_dec_ref(v_vals_3942_);
lean_dec_ref(v_keys_3941_);
return v_res_3947_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13_spec__14(lean_object* v_00_u03b2_3948_, lean_object* v_x_3949_, lean_object* v_x_3950_, lean_object* v_x_3951_, lean_object* v_x_3952_){
_start:
{
lean_object* v___x_3953_; 
v___x_3953_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__1_spec__1_spec__5_spec__13_spec__14___redArg(v_x_3949_, v_x_3950_, v_x_3951_, v_x_3952_);
return v___x_3953_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Monotonicity_solveMono_spec__0(lean_object* v_failK_3954_, lean_object* v_as_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_){
_start:
{
if (lean_obj_tag(v_as_3955_) == 0)
{
lean_object* v___x_3961_; lean_object* v___x_3962_; 
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
lean_dec(v___y_3957_);
lean_dec_ref(v___y_3956_);
lean_dec_ref(v_failK_3954_);
v___x_3961_ = lean_box(0);
v___x_3962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3961_);
return v___x_3962_;
}
else
{
lean_object* v_head_3963_; lean_object* v_tail_3964_; lean_object* v___x_3965_; 
v_head_3963_ = lean_ctor_get(v_as_3955_, 0);
lean_inc(v_head_3963_);
v_tail_3964_ = lean_ctor_get(v_as_3955_, 1);
lean_inc(v_tail_3964_);
lean_dec_ref(v_as_3955_);
lean_inc(v___y_3959_);
lean_inc_ref(v___y_3958_);
lean_inc(v___y_3957_);
lean_inc_ref(v___y_3956_);
lean_inc_ref(v_failK_3954_);
v___x_3965_ = l_Lean_Meta_Monotonicity_solveMono(v_failK_3954_, v_head_3963_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_);
if (lean_obj_tag(v___x_3965_) == 0)
{
lean_dec_ref(v___x_3965_);
v_as_3955_ = v_tail_3964_;
goto _start;
}
else
{
lean_dec(v_tail_3964_);
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
lean_dec(v___y_3957_);
lean_dec_ref(v___y_3956_);
lean_dec_ref(v_failK_3954_);
return v___x_3965_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMono(lean_object* v_failK_3967_, lean_object* v_goal_3968_, lean_object* v_a_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_){
_start:
{
lean_object* v___x_3974_; 
lean_inc(v_a_3972_);
lean_inc_ref(v_a_3971_);
lean_inc(v_a_3970_);
lean_inc_ref(v_a_3969_);
lean_inc_ref(v_failK_3967_);
v___x_3974_ = l_Lean_Meta_Monotonicity_solveMonoStep(v_failK_3967_, v_goal_3968_, v_a_3969_, v_a_3970_, v_a_3971_, v_a_3972_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v_a_3975_; lean_object* v___x_3976_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
lean_inc(v_a_3975_);
lean_dec_ref(v___x_3974_);
v___x_3976_ = l_List_forM___at___00Lean_Meta_Monotonicity_solveMono_spec__0(v_failK_3967_, v_a_3975_, v_a_3969_, v_a_3970_, v_a_3971_, v_a_3972_);
return v___x_3976_;
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
lean_dec(v_a_3972_);
lean_dec_ref(v_a_3971_);
lean_dec(v_a_3970_);
lean_dec_ref(v_a_3969_);
lean_dec_ref(v_failK_3967_);
v_a_3977_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3974_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3974_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_solveMono___boxed(lean_object* v_failK_3985_, lean_object* v_goal_3986_, lean_object* v_a_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_){
_start:
{
lean_object* v_res_3992_; 
v_res_3992_ = l_Lean_Meta_Monotonicity_solveMono(v_failK_3985_, v_goal_3986_, v_a_3987_, v_a_3988_, v_a_3989_, v_a_3990_);
return v_res_3992_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Meta_Monotonicity_solveMono_spec__0___boxed(lean_object* v_failK_3993_, lean_object* v_as_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_){
_start:
{
lean_object* v_res_4000_; 
v_res_4000_ = l_List_forM___at___00Lean_Meta_Monotonicity_solveMono_spec__0(v_failK_3993_, v_as_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_);
return v_res_4000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___lam__0(lean_object* v___x_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_){
_start:
{
lean_object* v___x_4011_; 
v___x_4011_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_4003_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_);
if (lean_obj_tag(v___x_4011_) == 0)
{
lean_object* v_a_4012_; lean_object* v___x_4013_; 
v_a_4012_ = lean_ctor_get(v___x_4011_, 0);
lean_inc(v_a_4012_);
lean_dec_ref(v___x_4011_);
lean_inc(v___y_4009_);
lean_inc_ref(v___y_4008_);
lean_inc(v___y_4007_);
lean_inc_ref(v___y_4006_);
v___x_4013_ = l_Lean_Meta_Monotonicity_solveMonoStep(v___x_4001_, v_a_4012_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_);
if (lean_obj_tag(v___x_4013_) == 0)
{
lean_object* v_a_4014_; lean_object* v___x_4015_; 
v_a_4014_ = lean_ctor_get(v___x_4013_, 0);
lean_inc(v_a_4014_);
lean_dec_ref(v___x_4013_);
v___x_4015_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_4014_, v___y_4003_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_);
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
lean_dec(v___y_4007_);
lean_dec_ref(v___y_4006_);
if (lean_obj_tag(v___x_4015_) == 0)
{
lean_object* v___x_4017_; uint8_t v_isShared_4018_; uint8_t v_isSharedCheck_4023_; 
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_4015_);
if (v_isSharedCheck_4023_ == 0)
{
lean_object* v_unused_4024_; 
v_unused_4024_ = lean_ctor_get(v___x_4015_, 0);
lean_dec(v_unused_4024_);
v___x_4017_ = v___x_4015_;
v_isShared_4018_ = v_isSharedCheck_4023_;
goto v_resetjp_4016_;
}
else
{
lean_dec(v___x_4015_);
v___x_4017_ = lean_box(0);
v_isShared_4018_ = v_isSharedCheck_4023_;
goto v_resetjp_4016_;
}
v_resetjp_4016_:
{
lean_object* v___x_4019_; lean_object* v___x_4021_; 
v___x_4019_ = lean_box(0);
if (v_isShared_4018_ == 0)
{
lean_ctor_set(v___x_4017_, 0, v___x_4019_);
v___x_4021_ = v___x_4017_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v___x_4019_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
return v___x_4021_;
}
}
}
else
{
return v___x_4015_;
}
}
else
{
lean_object* v_a_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4032_; 
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
lean_dec(v___y_4007_);
lean_dec_ref(v___y_4006_);
v_a_4025_ = lean_ctor_get(v___x_4013_, 0);
v_isSharedCheck_4032_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4032_ == 0)
{
v___x_4027_ = v___x_4013_;
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_a_4025_);
lean_dec(v___x_4013_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4032_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v___x_4030_; 
if (v_isShared_4028_ == 0)
{
v___x_4030_ = v___x_4027_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v_a_4025_);
v___x_4030_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
return v___x_4030_;
}
}
}
}
else
{
lean_object* v_a_4033_; lean_object* v___x_4035_; uint8_t v_isShared_4036_; uint8_t v_isSharedCheck_4040_; 
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
lean_dec(v___y_4007_);
lean_dec_ref(v___y_4006_);
lean_dec_ref(v___x_4001_);
v_a_4033_ = lean_ctor_get(v___x_4011_, 0);
v_isSharedCheck_4040_ = !lean_is_exclusive(v___x_4011_);
if (v_isSharedCheck_4040_ == 0)
{
v___x_4035_ = v___x_4011_;
v_isShared_4036_ = v_isSharedCheck_4040_;
goto v_resetjp_4034_;
}
else
{
lean_inc(v_a_4033_);
lean_dec(v___x_4011_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___lam__0___boxed(lean_object* v___x_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___lam__0(v___x_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4044_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___redArg(lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_, lean_object* v_a_4062_){
_start:
{
lean_object* v___f_4064_; lean_object* v___x_4065_; 
v___f_4064_ = ((lean_object*)(l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___closed__1));
v___x_4065_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_4064_, v_a_4055_, v_a_4056_, v_a_4057_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_, v_a_4062_);
return v___x_4065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___redArg___boxed(lean_object* v_a_4066_, lean_object* v_a_4067_, lean_object* v_a_4068_, lean_object* v_a_4069_, lean_object* v_a_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_){
_start:
{
lean_object* v_res_4075_; 
v_res_4075_ = l_Lean_Meta_Monotonicity_evalMonotonicity___redArg(v_a_4066_, v_a_4067_, v_a_4068_, v_a_4069_, v_a_4070_, v_a_4071_, v_a_4072_, v_a_4073_);
return v_res_4075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity(lean_object* v___stx_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_, lean_object* v_a_4080_, lean_object* v_a_4081_, lean_object* v_a_4082_, lean_object* v_a_4083_, lean_object* v_a_4084_){
_start:
{
lean_object* v___x_4086_; 
v___x_4086_ = l_Lean_Meta_Monotonicity_evalMonotonicity___redArg(v_a_4077_, v_a_4078_, v_a_4079_, v_a_4080_, v_a_4081_, v_a_4082_, v_a_4083_, v_a_4084_);
return v___x_4086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___boxed(lean_object* v___stx_4087_, lean_object* v_a_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_){
_start:
{
lean_object* v_res_4097_; 
v_res_4097_ = l_Lean_Meta_Monotonicity_evalMonotonicity(v___stx_4087_, v_a_4088_, v_a_4089_, v_a_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_, v_a_4095_);
lean_dec(v___stx_4087_);
return v_res_4097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1(){
_start:
{
lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4109_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4110_ = ((lean_object*)(l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__0));
v___x_4111_ = ((lean_object*)(l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___closed__2));
v___x_4112_ = lean_alloc_closure((void*)(l_Lean_Meta_Monotonicity_evalMonotonicity___boxed), 10, 0);
v___x_4113_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4109_, v___x_4110_, v___x_4111_, v___x_4112_);
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1___boxed(lean_object* v_a_4114_){
_start:
{
lean_object* v_res_4115_; 
v_res_4115_ = l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1();
return v_res_4115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4147_; uint8_t v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; 
v___x_4147_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Monotonicity_solveMonoStep_spec__5___closed__2));
v___x_4148_ = 0;
v___x_4149_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Monotonicity_0__initFn___closed__9_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_));
v___x_4150_ = l_Lean_registerTraceClass(v___x_4147_, v___x_4148_, v___x_4149_);
return v___x_4150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Monotonicity_0__initFn_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2____boxed(lean_object* v_a_4151_){
_start:
{
lean_object* v_res_4152_; 
v_res_4152_ = l___private_Lean_Elab_Tactic_Monotonicity_0__initFn_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_();
return v_res_4152_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_RecAppSyntax(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Internal_Order(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Monotonicity(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_RecAppSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_4195581025____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Monotonicity_monotoneExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Monotonicity_monotoneExt);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn___regBuiltin___private_Lean_Elab_Tactic_Monotonicity_0__Lean_Meta_Monotonicity_initFn_docString__1_00___x40_Lean_Elab_Tactic_Monotonicity_1250514167____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_Monotonicity_evalMonotonicity___regBuiltin_Lean_Meta_Monotonicity_evalMonotonicity__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Monotonicity_0__initFn_00___x40_Lean_Elab_Tactic_Monotonicity_67824763____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Monotonicity(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* initialize_Lean_Elab_RecAppSyntax(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Init_Internal_Order(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Monotonicity(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_RecAppSyntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Internal_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Monotonicity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Monotonicity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Monotonicity(builtin);
}
#ifdef __cplusplus
}
#endif
