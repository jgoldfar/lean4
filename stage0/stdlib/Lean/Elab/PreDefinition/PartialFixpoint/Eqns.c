// Lean compiler output
// Module: Lean.Elab.PreDefinition.PartialFixpoint.Eqns
// Imports: public import Lean.Elab.PreDefinition.FixedParams import Init.Internal.Order.Basic import Lean.Meta.Tactic.Delta import Lean.Meta.Tactic.Refl
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
extern lean_object* l_Lean_Meta_smartUnfolding;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_deltaExpand(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
uint8_t l_Lean_Expr_isProj(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Expr_projExpr_x21(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bvar___override(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_ensureEqnReservedNamesAvailable(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ConstantInfo_hasValue(lean_object*, uint8_t);
lean_object* l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
extern lean_object* l_Lean_Meta_unfoldThmSuffix;
lean_object* l_Lean_Meta_mkEqLikeNameFor(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Meta_tactic_hygienic;
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_registerGetUnfoldEqnFn(lean_object*);
static const lean_string_object l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0 = (const lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1 = (const lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1_value;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2;
static const lean_array_object l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3 = (const lean_object*)&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3_value;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo;
LEAN_EXPORT uint8_t l_Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_PartialFixpoint_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_PartialFixpoint_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_PartialFixpoint_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "PartialFixpoint"};
static const lean_object* l_Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eqnInfoExt"};
static const lean_object* l_Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(125, 126, 228, 214, 96, 108, 195, 201)}};
static const lean_ctor_object l_Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(200, 154, 190, 235, 71, 53, 215, 0)}};
static const lean_object* l_Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 3}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_eqnInfoExt;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2;
static lean_once_cell_t l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "deltaLHSUntilFix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 223, 150, 107, 82, 172, 43, 154)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "equality expected"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__1_value),LEAN_SCALAR_PTR_LITERAL(18, 104, 23, 57, 110, 104, 99, 16)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lfp_monotone"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__3_value),LEAN_SCALAR_PTR_LITERAL(226, 115, 213, 20, 156, 86, 56, 31)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "rwFixUnder: unexpected expression "};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__7_value),LEAN_SCALAR_PTR_LITERAL(34, 153, 146, 175, 179, 220, 230, 134)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__9_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__13 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__13_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateProj!Impl"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__14 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__14_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proj expected"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__15 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__15_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrFun"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__17 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__17_value),LEAN_SCALAR_PTR_LITERAL(63, 110, 174, 29, 249, 91, 125, 152)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__18 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__18_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "lfp_monotone_fix"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__19 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__19_value),LEAN_SCALAR_PTR_LITERAL(178, 113, 187, 250, 69, 106, 19, 81)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fix_eq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__22 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__22_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__22_value),LEAN_SCALAR_PTR_LITERAL(83, 197, 58, 21, 58, 52, 66, 18)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lean.Elab.PreDefinition.PartialFixpoint.Eqns"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "_private.Lean.Elab.PreDefinition.PartialFixpoint.Eqns.0.Lean.Elab.PartialFixpoint.rwFixEq"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "mkUnfoldEq rfl succeeded"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "mkUnfoldEq after rwFixEq:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "mkUnfoldEq after deltaLHS:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "failed to generate unfold theorem for `"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__1;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "`:\n"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__3;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "partialFixpoint"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_PartialFixpoint_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(21, 214, 78, 192, 157, 92, 193, 45)}};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__6_value;
static const lean_string_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "mkUnfoldEq start:"};
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_9_ = l_Lean_Elab_instInhabitedFixedParamPerms_default;
v___x_10_ = ((lean_object*)(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__3));
v___x_11_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2, &l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2_once, _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__2);
v___x_12_ = lean_box(0);
v___x_13_ = lean_box(0);
v___x_14_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
lean_ctor_set(v___x_14_, 1, v___x_12_);
lean_ctor_set(v___x_14_, 2, v___x_11_);
lean_ctor_set(v___x_14_, 3, v___x_11_);
lean_ctor_set(v___x_14_, 4, v___x_10_);
lean_ctor_set(v___x_14_, 5, v___x_13_);
lean_ctor_set(v___x_14_, 6, v___x_9_);
lean_ctor_set(v___x_14_, 7, v___x_10_);
return v___x_14_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default(void){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4, &l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4_once, _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default___closed__4);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo(void){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default;
return v___x_16_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_(lean_object* v_env_17_, lean_object* v_n_18_, lean_object* v_x_19_){
_start:
{
uint8_t v___x_20_; lean_object* v___x_21_; uint8_t v___x_22_; lean_object* v___x_23_; 
v___x_20_ = 1;
v___x_21_ = l_Lean_Environment_setExporting(v_env_17_, v___x_20_);
v___x_22_ = 0;
v___x_23_ = l_Lean_Environment_find_x3f(v___x_21_, v_n_18_, v___x_22_);
if (lean_obj_tag(v___x_23_) == 0)
{
return v___x_22_;
}
else
{
lean_object* v_val_24_; uint8_t v___x_25_; 
v_val_24_ = lean_ctor_get(v___x_23_, 0);
lean_inc(v_val_24_);
lean_dec_ref(v___x_23_);
v___x_25_ = l_Lean_ConstantInfo_hasValue(v_val_24_, v___x_22_);
lean_dec(v_val_24_);
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2____boxed(lean_object* v_env_26_, lean_object* v_n_27_, lean_object* v_x_28_){
_start:
{
uint8_t v_res_29_; lean_object* v_r_30_; 
v_res_29_ = l_Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_(v_env_26_, v_n_27_, v_x_28_);
lean_dec_ref(v_x_28_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_init_31_, lean_object* v_x_32_){
_start:
{
if (lean_obj_tag(v_x_32_) == 0)
{
lean_object* v_k_33_; lean_object* v_v_34_; lean_object* v_l_35_; lean_object* v_r_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v_k_33_ = lean_ctor_get(v_x_32_, 1);
v_v_34_ = lean_ctor_get(v_x_32_, 2);
v_l_35_ = lean_ctor_get(v_x_32_, 3);
v_r_36_ = lean_ctor_get(v_x_32_, 4);
v___x_37_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0_spec__0(v_init_31_, v_l_35_);
lean_inc(v_v_34_);
lean_inc(v_k_33_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_k_33_);
lean_ctor_set(v___x_38_, 1, v_v_34_);
v___x_39_ = lean_array_push(v___x_37_, v___x_38_);
v_init_31_ = v___x_39_;
v_x_32_ = v_r_36_;
goto _start;
}
else
{
return v_init_31_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_init_41_, lean_object* v_x_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0_spec__0(v_init_41_, v_x_42_);
lean_dec(v_x_42_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_initFn___lam__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_(lean_object* v_env_46_, lean_object* v_s_47_){
_start:
{
lean_object* v___f_48_; lean_object* v___x_49_; lean_object* v_all_50_; lean_object* v___x_51_; lean_object* v_exported_52_; lean_object* v___x_53_; 
v___f_48_ = lean_alloc_closure((void*)(l_Lean_Elab_PartialFixpoint_initFn___lam__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2____boxed), 3, 1);
lean_closure_set(v___f_48_, 0, v_env_46_);
v___x_49_ = ((lean_object*)(l_Lean_Elab_PartialFixpoint_initFn___lam__1___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_));
v_all_50_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0_spec__0(v___x_49_, v_s_47_);
v___x_51_ = l_Std_DTreeMap_Internal_Impl_filter___at___00Lean_NameMap_filter_spec__0___redArg(v___f_48_, v_s_47_);
v_exported_52_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0_spec__0(v___x_49_, v___x_51_);
lean_dec(v___x_51_);
lean_inc_ref(v_exported_52_);
v___x_53_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_53_, 0, v_exported_52_);
lean_ctor_set(v___x_53_, 1, v_exported_52_);
lean_ctor_set(v___x_53_, 2, v_all_50_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v___f_67_ = ((lean_object*)(l_Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_));
v___x_68_ = ((lean_object*)(l_Lean_Elab_PartialFixpoint_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_));
v___x_69_ = ((lean_object*)(l_Lean_Elab_PartialFixpoint_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_));
v___x_70_ = l_Lean_mkMapDeclarationExtension___redArg(v___x_68_, v___x_69_, v___f_67_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2____boxed(lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_();
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0(lean_object* v_init_73_, lean_object* v_t_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0_spec__0(v_init_73_, v_t_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0___boxed(lean_object* v_init_76_, lean_object* v_t_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2__spec__0(v_init_76_, v_t_77_);
lean_dec(v_t_77_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(uint8_t v___x_79_, uint8_t v___x_80_, uint8_t v_____do__lift_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
if (v_____do__lift_81_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_box(v___x_79_);
v___x_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
else
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = lean_box(v___x_80_);
v___x_90_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
return v___x_90_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0___boxed(lean_object* v___x_91_, lean_object* v___x_92_, lean_object* v_____do__lift_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
uint8_t v___x_4038__boxed_99_; uint8_t v___x_4039__boxed_100_; uint8_t v_____do__lift_4040__boxed_101_; lean_object* v_res_102_; 
v___x_4038__boxed_99_ = lean_unbox(v___x_91_);
v___x_4039__boxed_100_ = lean_unbox(v___x_92_);
v_____do__lift_4040__boxed_101_ = lean_unbox(v_____do__lift_93_);
v_res_102_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(v___x_4038__boxed_99_, v___x_4039__boxed_100_, v_____do__lift_4040__boxed_101_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
lean_dec(v___y_95_);
lean_dec_ref(v___y_94_);
return v_res_102_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(lean_object* v_as_103_, size_t v_i_104_, size_t v_stop_105_){
_start:
{
uint8_t v___x_106_; 
v___x_106_ = lean_usize_dec_eq(v_i_104_, v_stop_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; uint8_t v_kind_108_; uint8_t v___x_109_; uint8_t v___x_110_; 
v___x_107_ = lean_array_uget_borrowed(v_as_103_, v_i_104_);
v_kind_108_ = lean_ctor_get_uint8(v___x_107_, sizeof(void*)*9);
v___x_109_ = 1;
v___x_110_ = l_Lean_Elab_DefKind_isTheorem(v_kind_108_);
if (v___x_110_ == 0)
{
return v___x_109_;
}
else
{
if (v___x_106_ == 0)
{
size_t v___x_111_; size_t v___x_112_; 
v___x_111_ = ((size_t)1ULL);
v___x_112_ = lean_usize_add(v_i_104_, v___x_111_);
v_i_104_ = v___x_112_;
goto _start;
}
else
{
return v___x_109_;
}
}
}
else
{
uint8_t v___x_114_; 
v___x_114_ = 0;
return v___x_114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2___boxed(lean_object* v_as_115_, lean_object* v_i_116_, lean_object* v_stop_117_){
_start:
{
size_t v_i_boxed_118_; size_t v_stop_boxed_119_; uint8_t v_res_120_; lean_object* v_r_121_; 
v_i_boxed_118_ = lean_unbox_usize(v_i_116_);
lean_dec(v_i_116_);
v_stop_boxed_119_ = lean_unbox_usize(v_stop_117_);
lean_dec(v_stop_117_);
v_res_120_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(v_as_115_, v_i_boxed_118_, v_stop_boxed_119_);
lean_dec_ref(v_as_115_);
v_r_121_ = lean_box(v_res_120_);
return v_r_121_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(lean_object* v___x_122_, lean_object* v_declNameNonRec_123_, lean_object* v_fixedParamPerms_124_, lean_object* v_fixpointType_125_, lean_object* v_as_126_, size_t v_i_127_, size_t v_stop_128_, lean_object* v_b_129_){
_start:
{
uint8_t v___x_130_; 
v___x_130_ = lean_usize_dec_eq(v_i_127_, v_stop_128_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; lean_object* v_levelParams_132_; lean_object* v_declName_133_; lean_object* v_type_134_; lean_object* v_value_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; size_t v___x_139_; size_t v___x_140_; 
v___x_131_ = lean_array_uget_borrowed(v_as_126_, v_i_127_);
v_levelParams_132_ = lean_ctor_get(v___x_131_, 1);
v_declName_133_ = lean_ctor_get(v___x_131_, 3);
v_type_134_ = lean_ctor_get(v___x_131_, 6);
v_value_135_ = lean_ctor_get(v___x_131_, 7);
v___x_136_ = l_Lean_Elab_PartialFixpoint_eqnInfoExt;
lean_inc_ref(v_fixpointType_125_);
lean_inc_ref(v_fixedParamPerms_124_);
lean_inc(v_declNameNonRec_123_);
lean_inc_ref(v___x_122_);
lean_inc_ref(v_value_135_);
lean_inc_ref(v_type_134_);
lean_inc(v_levelParams_132_);
lean_inc(v_declName_133_);
v___x_137_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_137_, 0, v_declName_133_);
lean_ctor_set(v___x_137_, 1, v_levelParams_132_);
lean_ctor_set(v___x_137_, 2, v_type_134_);
lean_ctor_set(v___x_137_, 3, v_value_135_);
lean_ctor_set(v___x_137_, 4, v___x_122_);
lean_ctor_set(v___x_137_, 5, v_declNameNonRec_123_);
lean_ctor_set(v___x_137_, 6, v_fixedParamPerms_124_);
lean_ctor_set(v___x_137_, 7, v_fixpointType_125_);
lean_inc(v_declName_133_);
v___x_138_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_136_, v_b_129_, v_declName_133_, v___x_137_);
v___x_139_ = ((size_t)1ULL);
v___x_140_ = lean_usize_add(v_i_127_, v___x_139_);
v_i_127_ = v___x_140_;
v_b_129_ = v___x_138_;
goto _start;
}
else
{
lean_dec_ref(v_fixpointType_125_);
lean_dec_ref(v_fixedParamPerms_124_);
lean_dec(v_declNameNonRec_123_);
lean_dec_ref(v___x_122_);
return v_b_129_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1___boxed(lean_object* v___x_142_, lean_object* v_declNameNonRec_143_, lean_object* v_fixedParamPerms_144_, lean_object* v_fixpointType_145_, lean_object* v_as_146_, lean_object* v_i_147_, lean_object* v_stop_148_, lean_object* v_b_149_){
_start:
{
size_t v_i_boxed_150_; size_t v_stop_boxed_151_; lean_object* v_res_152_; 
v_i_boxed_150_ = lean_unbox_usize(v_i_147_);
lean_dec(v_i_147_);
v_stop_boxed_151_ = lean_unbox_usize(v_stop_148_);
lean_dec(v_stop_148_);
v_res_152_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(v___x_142_, v_declNameNonRec_143_, v_fixedParamPerms_144_, v_fixpointType_145_, v_as_146_, v_i_boxed_150_, v_stop_boxed_151_, v_b_149_);
lean_dec_ref(v_as_146_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(size_t v_sz_153_, size_t v_i_154_, lean_object* v_bs_155_){
_start:
{
uint8_t v___x_156_; 
v___x_156_ = lean_usize_dec_lt(v_i_154_, v_sz_153_);
if (v___x_156_ == 0)
{
return v_bs_155_;
}
else
{
lean_object* v_v_157_; lean_object* v_declName_158_; lean_object* v___x_159_; lean_object* v_bs_x27_160_; size_t v___x_161_; size_t v___x_162_; lean_object* v___x_163_; 
v_v_157_ = lean_array_uget_borrowed(v_bs_155_, v_i_154_);
v_declName_158_ = lean_ctor_get(v_v_157_, 3);
lean_inc(v_declName_158_);
v___x_159_ = lean_unsigned_to_nat(0u);
v_bs_x27_160_ = lean_array_uset(v_bs_155_, v_i_154_, v___x_159_);
v___x_161_ = ((size_t)1ULL);
v___x_162_ = lean_usize_add(v_i_154_, v___x_161_);
v___x_163_ = lean_array_uset(v_bs_x27_160_, v_i_154_, v_declName_158_);
v_i_154_ = v___x_162_;
v_bs_155_ = v___x_163_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0___boxed(lean_object* v_sz_165_, lean_object* v_i_166_, lean_object* v_bs_167_){
_start:
{
size_t v_sz_boxed_168_; size_t v_i_boxed_169_; lean_object* v_res_170_; 
v_sz_boxed_168_ = lean_unbox_usize(v_sz_165_);
lean_dec(v_sz_165_);
v_i_boxed_169_ = lean_unbox_usize(v_i_166_);
lean_dec(v_i_166_);
v_res_170_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(v_sz_boxed_168_, v_i_boxed_169_, v_bs_167_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(lean_object* v_as_171_, size_t v_i_172_, size_t v_stop_173_, lean_object* v_b_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
uint8_t v___x_178_; 
v___x_178_ = lean_usize_dec_eq(v_i_172_, v_stop_173_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; lean_object* v_declName_180_; lean_object* v___x_181_; 
v___x_179_ = lean_array_uget_borrowed(v_as_171_, v_i_172_);
v_declName_180_ = lean_ctor_get(v___x_179_, 3);
lean_inc(v_declName_180_);
v___x_181_ = l_Lean_Meta_ensureEqnReservedNamesAvailable(v_declName_180_, v___y_175_, v___y_176_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; size_t v___x_183_; size_t v___x_184_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
lean_inc(v_a_182_);
lean_dec_ref(v___x_181_);
v___x_183_ = ((size_t)1ULL);
v___x_184_ = lean_usize_add(v_i_172_, v___x_183_);
v_i_172_ = v___x_184_;
v_b_174_ = v_a_182_;
goto _start;
}
else
{
return v___x_181_;
}
}
else
{
lean_object* v___x_186_; 
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v_b_174_);
return v___x_186_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg___boxed(lean_object* v_as_187_, lean_object* v_i_188_, lean_object* v_stop_189_, lean_object* v_b_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
size_t v_i_boxed_194_; size_t v_stop_boxed_195_; lean_object* v_res_196_; 
v_i_boxed_194_ = lean_unbox_usize(v_i_188_);
lean_dec(v_i_188_);
v_stop_boxed_195_ = lean_unbox_usize(v_stop_189_);
lean_dec(v_stop_189_);
v_res_196_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_as_187_, v_i_boxed_194_, v_stop_boxed_195_, v_b_190_, v___y_191_, v___y_192_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
lean_dec_ref(v_as_187_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(uint8_t v___x_197_, lean_object* v_as_198_, size_t v_i_199_, size_t v_stop_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
uint8_t v___x_210_; 
v___x_210_ = lean_usize_dec_eq(v_i_199_, v_stop_200_);
if (v___x_210_ == 0)
{
lean_object* v___x_211_; lean_object* v_type_212_; uint8_t v___x_213_; uint8_t v_a_215_; lean_object* v___x_218_; 
v___x_211_ = lean_array_uget_borrowed(v_as_198_, v_i_199_);
v_type_212_ = lean_ctor_get(v___x_211_, 6);
v___x_213_ = 1;
lean_inc_ref(v_type_212_);
v___x_218_ = l_Lean_Meta_isProp(v_type_212_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
if (lean_obj_tag(v___x_218_) == 0)
{
lean_object* v_a_219_; uint8_t v___x_220_; 
v_a_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_a_219_);
lean_dec_ref(v___x_218_);
v___x_220_ = lean_unbox(v_a_219_);
lean_dec(v_a_219_);
if (v___x_220_ == 0)
{
v_a_215_ = v___x_197_;
goto v___jp_214_;
}
else
{
goto v___jp_206_;
}
}
else
{
if (lean_obj_tag(v___x_218_) == 0)
{
lean_object* v_a_221_; uint8_t v___x_222_; 
v_a_221_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_a_221_);
lean_dec_ref(v___x_218_);
v___x_222_ = lean_unbox(v_a_221_);
lean_dec(v_a_221_);
v_a_215_ = v___x_222_;
goto v___jp_214_;
}
else
{
return v___x_218_;
}
}
v___jp_214_:
{
if (v_a_215_ == 0)
{
goto v___jp_206_;
}
else
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = lean_box(v___x_213_);
v___x_217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
return v___x_217_;
}
}
}
else
{
uint8_t v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_223_ = 0;
v___x_224_ = lean_box(v___x_223_);
v___x_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
return v___x_225_;
}
v___jp_206_:
{
size_t v___x_207_; size_t v___x_208_; 
v___x_207_ = ((size_t)1ULL);
v___x_208_ = lean_usize_add(v_i_199_, v___x_207_);
v_i_199_ = v___x_208_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3___boxed(lean_object* v___x_226_, lean_object* v_as_227_, lean_object* v_i_228_, lean_object* v_stop_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
uint8_t v___x_4143__boxed_235_; size_t v_i_boxed_236_; size_t v_stop_boxed_237_; lean_object* v_res_238_; 
v___x_4143__boxed_235_ = lean_unbox(v___x_226_);
v_i_boxed_236_ = lean_unbox_usize(v_i_228_);
lean_dec(v_i_228_);
v_stop_boxed_237_ = lean_unbox_usize(v_stop_229_);
lean_dec(v_stop_229_);
v_res_238_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(v___x_4143__boxed_235_, v_as_227_, v_i_boxed_236_, v_stop_boxed_237_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec_ref(v_as_227_);
return v_res_238_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0(void){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_239_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_240_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__0);
v___x_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
return v___x_241_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__1);
v___x_245_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
lean_ctor_set(v___x_245_, 2, v___x_244_);
lean_ctor_set(v___x_245_, 3, v___x_244_);
lean_ctor_set(v___x_245_, 4, v___x_244_);
lean_ctor_set(v___x_245_, 5, v___x_244_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo(lean_object* v_preDefs_246_, lean_object* v_declNameNonRec_247_, lean_object* v_fixedParamPerms_248_, lean_object* v_fixpointType_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_){
_start:
{
lean_object* v_nextMacroScope_259_; lean_object* v_ngen_260_; lean_object* v_auxDeclNGen_261_; lean_object* v_traceState_262_; lean_object* v_messages_263_; lean_object* v_infoState_264_; lean_object* v_snapshotTasks_265_; lean_object* v___y_266_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___y_293_; lean_object* v___y_334_; uint8_t v___x_335_; 
v___x_290_ = lean_unsigned_to_nat(0u);
v___x_291_ = lean_array_get_size(v_preDefs_246_);
v___x_335_ = lean_nat_dec_lt(v___x_290_, v___x_291_);
if (v___x_335_ == 0)
{
goto v___jp_322_;
}
else
{
lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_336_ = lean_box(0);
v___x_337_ = lean_nat_dec_le(v___x_291_, v___x_291_);
if (v___x_337_ == 0)
{
if (v___x_335_ == 0)
{
goto v___jp_322_;
}
else
{
size_t v___x_338_; size_t v___x_339_; lean_object* v___x_340_; 
v___x_338_ = ((size_t)0ULL);
v___x_339_ = lean_usize_of_nat(v___x_291_);
v___x_340_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_preDefs_246_, v___x_338_, v___x_339_, v___x_336_, v_a_252_, v_a_253_);
v___y_334_ = v___x_340_;
goto v___jp_333_;
}
}
else
{
size_t v___x_341_; size_t v___x_342_; lean_object* v___x_343_; 
v___x_341_ = ((size_t)0ULL);
v___x_342_ = lean_usize_of_nat(v___x_291_);
v___x_343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_preDefs_246_, v___x_341_, v___x_342_, v___x_336_, v_a_252_, v_a_253_);
v___y_334_ = v___x_343_;
goto v___jp_333_;
}
}
v___jp_255_:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_box(0);
v___x_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
return v___x_257_;
}
v___jp_258_:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v_mctx_271_; lean_object* v_zetaDeltaFVarIds_272_; lean_object* v_postponed_273_; lean_object* v_diag_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_285_; 
v___x_267_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2);
v___x_268_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_268_, 0, v___y_266_);
lean_ctor_set(v___x_268_, 1, v_nextMacroScope_259_);
lean_ctor_set(v___x_268_, 2, v_ngen_260_);
lean_ctor_set(v___x_268_, 3, v_auxDeclNGen_261_);
lean_ctor_set(v___x_268_, 4, v_traceState_262_);
lean_ctor_set(v___x_268_, 5, v___x_267_);
lean_ctor_set(v___x_268_, 6, v_messages_263_);
lean_ctor_set(v___x_268_, 7, v_infoState_264_);
lean_ctor_set(v___x_268_, 8, v_snapshotTasks_265_);
v___x_269_ = lean_st_ref_set(v_a_253_, v___x_268_);
v___x_270_ = lean_st_ref_take(v_a_251_);
v_mctx_271_ = lean_ctor_get(v___x_270_, 0);
v_zetaDeltaFVarIds_272_ = lean_ctor_get(v___x_270_, 2);
v_postponed_273_ = lean_ctor_get(v___x_270_, 3);
v_diag_274_ = lean_ctor_get(v___x_270_, 4);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_285_ == 0)
{
lean_object* v_unused_286_; 
v_unused_286_ = lean_ctor_get(v___x_270_, 1);
lean_dec(v_unused_286_);
v___x_276_ = v___x_270_;
v_isShared_277_ = v_isSharedCheck_285_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_diag_274_);
lean_inc(v_postponed_273_);
lean_inc(v_zetaDeltaFVarIds_272_);
lean_inc(v_mctx_271_);
lean_dec(v___x_270_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_285_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_278_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__3);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 1, v___x_278_);
v___x_280_ = v___x_276_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_mctx_271_);
lean_ctor_set(v_reuseFailAlloc_284_, 1, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_284_, 2, v_zetaDeltaFVarIds_272_);
lean_ctor_set(v_reuseFailAlloc_284_, 3, v_postponed_273_);
lean_ctor_set(v_reuseFailAlloc_284_, 4, v_diag_274_);
v___x_280_ = v_reuseFailAlloc_284_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = lean_st_ref_set(v_a_251_, v___x_280_);
v___x_282_ = lean_box(0);
v___x_283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
return v___x_283_;
}
}
}
v___jp_287_:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_box(0);
v___x_289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
return v___x_289_;
}
v___jp_292_:
{
if (lean_obj_tag(v___y_293_) == 0)
{
lean_object* v_a_294_; uint8_t v___x_295_; 
v_a_294_ = lean_ctor_get(v___y_293_, 0);
lean_inc(v_a_294_);
lean_dec_ref(v___y_293_);
v___x_295_ = lean_unbox(v_a_294_);
lean_dec(v_a_294_);
if (v___x_295_ == 0)
{
lean_object* v___x_296_; lean_object* v_env_297_; lean_object* v_nextMacroScope_298_; lean_object* v_ngen_299_; lean_object* v_auxDeclNGen_300_; lean_object* v_traceState_301_; lean_object* v_messages_302_; lean_object* v_infoState_303_; lean_object* v_snapshotTasks_304_; uint8_t v___x_305_; 
v___x_296_ = lean_st_ref_take(v_a_253_);
v_env_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc_ref(v_env_297_);
v_nextMacroScope_298_ = lean_ctor_get(v___x_296_, 1);
lean_inc(v_nextMacroScope_298_);
v_ngen_299_ = lean_ctor_get(v___x_296_, 2);
lean_inc_ref(v_ngen_299_);
v_auxDeclNGen_300_ = lean_ctor_get(v___x_296_, 3);
lean_inc_ref(v_auxDeclNGen_300_);
v_traceState_301_ = lean_ctor_get(v___x_296_, 4);
lean_inc_ref(v_traceState_301_);
v_messages_302_ = lean_ctor_get(v___x_296_, 6);
lean_inc_ref(v_messages_302_);
v_infoState_303_ = lean_ctor_get(v___x_296_, 7);
lean_inc_ref(v_infoState_303_);
v_snapshotTasks_304_ = lean_ctor_get(v___x_296_, 8);
lean_inc_ref(v_snapshotTasks_304_);
lean_dec(v___x_296_);
v___x_305_ = lean_nat_dec_lt(v___x_290_, v___x_291_);
if (v___x_305_ == 0)
{
lean_dec_ref(v_fixpointType_249_);
lean_dec_ref(v_fixedParamPerms_248_);
lean_dec(v_declNameNonRec_247_);
lean_dec_ref(v_preDefs_246_);
v_nextMacroScope_259_ = v_nextMacroScope_298_;
v_ngen_260_ = v_ngen_299_;
v_auxDeclNGen_261_ = v_auxDeclNGen_300_;
v_traceState_262_ = v_traceState_301_;
v_messages_263_ = v_messages_302_;
v_infoState_264_ = v_infoState_303_;
v_snapshotTasks_265_ = v_snapshotTasks_304_;
v___y_266_ = v_env_297_;
goto v___jp_258_;
}
else
{
size_t v_sz_306_; size_t v___x_307_; lean_object* v___x_308_; uint8_t v___x_309_; 
v_sz_306_ = lean_array_size(v_preDefs_246_);
v___x_307_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_246_);
v___x_308_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__0(v_sz_306_, v___x_307_, v_preDefs_246_);
v___x_309_ = lean_nat_dec_le(v___x_291_, v___x_291_);
if (v___x_309_ == 0)
{
if (v___x_305_ == 0)
{
lean_dec_ref(v___x_308_);
lean_dec_ref(v_fixpointType_249_);
lean_dec_ref(v_fixedParamPerms_248_);
lean_dec(v_declNameNonRec_247_);
lean_dec_ref(v_preDefs_246_);
v_nextMacroScope_259_ = v_nextMacroScope_298_;
v_ngen_260_ = v_ngen_299_;
v_auxDeclNGen_261_ = v_auxDeclNGen_300_;
v_traceState_262_ = v_traceState_301_;
v_messages_263_ = v_messages_302_;
v_infoState_264_ = v_infoState_303_;
v_snapshotTasks_265_ = v_snapshotTasks_304_;
v___y_266_ = v_env_297_;
goto v___jp_258_;
}
else
{
size_t v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_usize_of_nat(v___x_291_);
v___x_311_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(v___x_308_, v_declNameNonRec_247_, v_fixedParamPerms_248_, v_fixpointType_249_, v_preDefs_246_, v___x_307_, v___x_310_, v_env_297_);
lean_dec_ref(v_preDefs_246_);
v_nextMacroScope_259_ = v_nextMacroScope_298_;
v_ngen_260_ = v_ngen_299_;
v_auxDeclNGen_261_ = v_auxDeclNGen_300_;
v_traceState_262_ = v_traceState_301_;
v_messages_263_ = v_messages_302_;
v_infoState_264_ = v_infoState_303_;
v_snapshotTasks_265_ = v_snapshotTasks_304_;
v___y_266_ = v___x_311_;
goto v___jp_258_;
}
}
else
{
size_t v___x_312_; lean_object* v___x_313_; 
v___x_312_ = lean_usize_of_nat(v___x_291_);
v___x_313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__1(v___x_308_, v_declNameNonRec_247_, v_fixedParamPerms_248_, v_fixpointType_249_, v_preDefs_246_, v___x_307_, v___x_312_, v_env_297_);
lean_dec_ref(v_preDefs_246_);
v_nextMacroScope_259_ = v_nextMacroScope_298_;
v_ngen_260_ = v_ngen_299_;
v_auxDeclNGen_261_ = v_auxDeclNGen_300_;
v_traceState_262_ = v_traceState_301_;
v_messages_263_ = v_messages_302_;
v_infoState_264_ = v_infoState_303_;
v_snapshotTasks_265_ = v_snapshotTasks_304_;
v___y_266_ = v___x_313_;
goto v___jp_258_;
}
}
}
else
{
lean_dec_ref(v_fixpointType_249_);
lean_dec_ref(v_fixedParamPerms_248_);
lean_dec(v_declNameNonRec_247_);
lean_dec_ref(v_preDefs_246_);
goto v___jp_255_;
}
}
else
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec_ref(v_fixpointType_249_);
lean_dec_ref(v_fixedParamPerms_248_);
lean_dec(v_declNameNonRec_247_);
lean_dec_ref(v_preDefs_246_);
v_a_314_ = lean_ctor_get(v___y_293_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___y_293_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___y_293_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___y_293_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
v___jp_322_:
{
uint8_t v___x_323_; 
v___x_323_ = lean_nat_dec_lt(v___x_290_, v___x_291_);
if (v___x_323_ == 0)
{
lean_dec_ref(v_fixpointType_249_);
lean_dec_ref(v_fixedParamPerms_248_);
lean_dec(v_declNameNonRec_247_);
lean_dec_ref(v_preDefs_246_);
goto v___jp_287_;
}
else
{
if (v___x_323_ == 0)
{
lean_dec_ref(v_fixpointType_249_);
lean_dec_ref(v_fixedParamPerms_248_);
lean_dec(v_declNameNonRec_247_);
lean_dec_ref(v_preDefs_246_);
goto v___jp_287_;
}
else
{
size_t v___x_324_; size_t v___x_325_; uint8_t v___x_326_; 
v___x_324_ = ((size_t)0ULL);
v___x_325_ = lean_usize_of_nat(v___x_291_);
v___x_326_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__2(v_preDefs_246_, v___x_324_, v___x_325_);
if (v___x_326_ == 0)
{
lean_dec_ref(v_fixpointType_249_);
lean_dec_ref(v_fixedParamPerms_248_);
lean_dec(v_declNameNonRec_247_);
lean_dec_ref(v_preDefs_246_);
goto v___jp_287_;
}
else
{
uint8_t v___x_327_; 
v___x_327_ = 0;
if (v___x_323_ == 0)
{
lean_object* v___x_328_; 
v___x_328_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(v___x_326_, v___x_327_, v___x_327_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
v___y_293_ = v___x_328_;
goto v___jp_292_;
}
else
{
if (v___x_323_ == 0)
{
lean_dec_ref(v_fixpointType_249_);
lean_dec_ref(v_fixedParamPerms_248_);
lean_dec(v_declNameNonRec_247_);
lean_dec_ref(v_preDefs_246_);
goto v___jp_255_;
}
else
{
lean_object* v___x_329_; 
v___x_329_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__3(v___x_326_, v_preDefs_246_, v___x_324_, v___x_325_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; uint8_t v___x_331_; lean_object* v___x_332_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref(v___x_329_);
v___x_331_ = lean_unbox(v_a_330_);
lean_dec(v_a_330_);
v___x_332_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo___lam__0(v___x_326_, v___x_327_, v___x_331_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
v___y_293_ = v___x_332_;
goto v___jp_292_;
}
else
{
v___y_293_ = v___x_329_;
goto v___jp_292_;
}
}
}
}
}
}
}
v___jp_333_:
{
if (lean_obj_tag(v___y_334_) == 0)
{
lean_dec_ref(v___y_334_);
goto v___jp_322_;
}
else
{
lean_dec_ref(v_fixpointType_249_);
lean_dec_ref(v_fixedParamPerms_248_);
lean_dec(v_declNameNonRec_247_);
lean_dec_ref(v_preDefs_246_);
return v___y_334_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo___boxed(lean_object* v_preDefs_344_, lean_object* v_declNameNonRec_345_, lean_object* v_fixedParamPerms_346_, lean_object* v_fixpointType_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo(v_preDefs_344_, v_declNameNonRec_345_, v_fixedParamPerms_346_, v_fixpointType_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
lean_dec(v_a_351_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4(lean_object* v_as_354_, size_t v_i_355_, size_t v_stop_356_, lean_object* v_b_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___redArg(v_as_354_, v_i_355_, v_stop_356_, v_b_357_, v___y_360_, v___y_361_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4___boxed(lean_object* v_as_364_, lean_object* v_i_365_, lean_object* v_stop_366_, lean_object* v_b_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
size_t v_i_boxed_373_; size_t v_stop_boxed_374_; lean_object* v_res_375_; 
v_i_boxed_373_ = lean_unbox_usize(v_i_365_);
lean_dec(v_i_365_);
v_stop_boxed_374_ = lean_unbox_usize(v_stop_366_);
lean_dec(v_stop_366_);
v_res_375_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_PartialFixpoint_registerEqnsInfo_spec__4(v_as_364_, v_i_boxed_373_, v_stop_boxed_374_, v_b_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
lean_dec_ref(v_as_364_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(lean_object* v_mvarId_376_, lean_object* v_x_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_376_, v_x_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_a_384_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_383_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_383_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
v_a_392_ = lean_ctor_get(v___x_383_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_383_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_383_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg___boxed(lean_object* v_mvarId_400_, lean_object* v_x_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_400_, v_x_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0(lean_object* v_00_u03b1_408_, lean_object* v_mvarId_409_, lean_object* v_x_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_409_, v_x_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___boxed(lean_object* v_00_u03b1_417_, lean_object* v_mvarId_418_, lean_object* v_x_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0(v_00_u03b1_417_, v_mvarId_418_, v_x_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_425_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0(lean_object* v_declName_426_, lean_object* v_declNameNonRec_427_, lean_object* v_n_428_){
_start:
{
uint8_t v___x_429_; 
v___x_429_ = lean_name_eq(v_n_428_, v_declName_426_);
if (v___x_429_ == 0)
{
uint8_t v___x_430_; 
v___x_430_ = lean_name_eq(v_n_428_, v_declNameNonRec_427_);
return v___x_430_;
}
else
{
return v___x_429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0___boxed(lean_object* v_declName_431_, lean_object* v_declNameNonRec_432_, lean_object* v_n_433_){
_start:
{
uint8_t v_res_434_; lean_object* v_r_435_; 
v_res_434_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0(v_declName_431_, v_declNameNonRec_432_, v_n_433_);
lean_dec(v_n_433_);
lean_dec(v_declNameNonRec_432_);
lean_dec(v_declName_431_);
v_r_435_ = lean_box(v_res_434_);
return v_r_435_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__5));
v___x_446_ = l_Lean_MessageData_ofFormat(v___x_445_);
return v___x_446_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
v___x_447_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__6);
v___x_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1(lean_object* v_mvarId_449_, lean_object* v___f_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
lean_object* v___x_456_; 
lean_inc(v_mvarId_449_);
v___x_456_ = l_Lean_MVarId_getType_x27(v_mvarId_449_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref(v___x_456_);
v___x_458_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1));
v___x_459_ = lean_unsigned_to_nat(3u);
v___x_460_ = l_Lean_Expr_isAppOfArity(v_a_457_, v___x_458_, v___x_459_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
lean_dec(v_a_457_);
lean_dec_ref(v___f_450_);
v___x_461_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__3));
v___x_462_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__7);
v___x_463_ = l_Lean_Meta_throwTacticEx___redArg(v___x_461_, v_mvarId_449_, v___x_462_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
return v___x_463_;
}
else
{
lean_object* v___x_464_; lean_object* v___x_465_; uint8_t v___x_466_; lean_object* v___x_467_; 
v___x_464_ = l_Lean_Expr_appFn_x21(v_a_457_);
v___x_465_ = l_Lean_Expr_appArg_x21(v___x_464_);
lean_dec_ref(v___x_464_);
v___x_466_ = 0;
v___x_467_ = l_Lean_Meta_deltaExpand(v___x_465_, v___f_450_, v___x_466_, v___y_453_, v___y_454_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_a_468_);
lean_dec_ref(v___x_467_);
v___x_469_ = l_Lean_Expr_appArg_x21(v_a_457_);
lean_dec(v_a_457_);
v___x_470_ = l_Lean_Meta_mkEq(v_a_468_, v___x_469_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_472_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_471_);
lean_dec_ref(v___x_470_);
v___x_472_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_449_, v_a_471_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
return v___x_472_;
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_dec(v_mvarId_449_);
v_a_473_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_470_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_470_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
lean_dec(v_a_457_);
lean_dec(v_mvarId_449_);
v_a_481_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___x_467_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_467_);
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
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
lean_dec_ref(v___f_450_);
lean_dec(v_mvarId_449_);
v_a_489_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v___x_456_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_456_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___boxed(lean_object* v_mvarId_497_, lean_object* v___f_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1(v_mvarId_497_, v___f_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
lean_dec(v___y_502_);
lean_dec_ref(v___y_501_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(lean_object* v_declName_505_, lean_object* v_declNameNonRec_506_, lean_object* v_mvarId_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_){
_start:
{
lean_object* v___f_513_; lean_object* v___f_514_; lean_object* v___x_515_; 
v___f_513_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__0___boxed), 3, 2);
lean_closure_set(v___f_513_, 0, v_declName_505_);
lean_closure_set(v___f_513_, 1, v_declNameNonRec_506_);
lean_inc(v_mvarId_507_);
v___f_514_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___boxed), 7, 2);
lean_closure_set(v___f_514_, 0, v_mvarId_507_);
lean_closure_set(v___f_514_, 1, v___f_513_);
v___x_515_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_507_, v___f_514_, v_a_508_, v_a_509_, v_a_510_, v_a_511_);
return v___x_515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___boxed(lean_object* v_declName_516_, lean_object* v_declNameNonRec_517_, lean_object* v_mvarId_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(v_declName_516_, v_declNameNonRec_517_, v_mvarId_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_);
lean_dec(v_a_522_);
lean_dec_ref(v_a_521_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__1(lean_object* v_msg_525_){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = l_Lean_instInhabitedExpr;
v___x_527_ = lean_panic_fn_borrowed(v___x_526_, v_msg_525_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0(lean_object* v_msgData_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___x_534_; lean_object* v_env_535_; lean_object* v___x_536_; lean_object* v_mctx_537_; lean_object* v_lctx_538_; lean_object* v_options_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_534_ = lean_st_ref_get(v___y_532_);
v_env_535_ = lean_ctor_get(v___x_534_, 0);
lean_inc_ref(v_env_535_);
lean_dec(v___x_534_);
v___x_536_ = lean_st_ref_get(v___y_530_);
v_mctx_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc_ref(v_mctx_537_);
lean_dec(v___x_536_);
v_lctx_538_ = lean_ctor_get(v___y_529_, 2);
v_options_539_ = lean_ctor_get(v___y_531_, 2);
lean_inc_ref(v_options_539_);
lean_inc_ref(v_lctx_538_);
v___x_540_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_540_, 0, v_env_535_);
lean_ctor_set(v___x_540_, 1, v_mctx_537_);
lean_ctor_set(v___x_540_, 2, v_lctx_538_);
lean_ctor_set(v___x_540_, 3, v_options_539_);
v___x_541_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
lean_ctor_set(v___x_541_, 1, v_msgData_528_);
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0___boxed(lean_object* v_msgData_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0(v_msgData_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(lean_object* v_msg_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v_ref_556_; lean_object* v___x_557_; lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_566_; 
v_ref_556_ = lean_ctor_get(v___y_553_, 5);
v___x_557_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0(v_msg_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
v_a_558_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_566_ == 0)
{
v___x_560_ = v___x_557_;
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_557_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_566_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_562_; lean_object* v___x_564_; 
lean_inc(v_ref_556_);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v_ref_556_);
lean_ctor_set(v___x_562_, 1, v_a_558_);
if (v_isShared_561_ == 0)
{
lean_ctor_set_tag(v___x_560_, 1);
lean_ctor_set(v___x_560_, 0, v___x_562_);
v___x_564_ = v___x_560_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg___boxed(lean_object* v_msg_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(v_msg_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
return v_res_573_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__5));
v___x_587_ = l_Lean_stringToMessageData(v___x_586_);
return v___x_587_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11(void){
_start:
{
lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = l_Lean_Expr_bvar___override(v___x_594_);
return v___x_595_;
}
}
static size_t _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12(void){
_start:
{
lean_object* v___x_596_; size_t v___x_597_; 
v___x_596_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11);
v___x_597_ = lean_ptr_addr(v___x_596_);
return v___x_597_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_601_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__15));
v___x_602_ = lean_unsigned_to_nat(18u);
v___x_603_ = lean_unsigned_to_nat(1872u);
v___x_604_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__14));
v___x_605_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__13));
v___x_606_ = l_mkPanicMessageWithDecl(v___x_605_, v___x_604_, v___x_603_, v___x_602_, v___x_601_);
return v___x_606_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21(void){
_start:
{
lean_object* v___x_615_; lean_object* v_dummy_616_; 
v___x_615_ = lean_box(0);
v_dummy_616_ = l_Lean_Expr_sort___override(v___x_615_);
return v_dummy_616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(lean_object* v_lhs_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_628_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__2));
v___x_629_ = lean_unsigned_to_nat(4u);
v___x_630_ = l_Lean_Expr_isAppOfArity(v_lhs_622_, v___x_628_, v___x_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; uint8_t v___x_632_; 
v___x_631_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__4));
v___x_632_ = l_Lean_Expr_isAppOfArity(v_lhs_622_, v___x_631_, v___x_629_);
if (v___x_632_ == 0)
{
uint8_t v___x_633_; 
v___x_633_ = l_Lean_Expr_isApp(v_lhs_622_);
if (v___x_633_ == 0)
{
uint8_t v___x_634_; 
v___x_634_ = l_Lean_Expr_isProj(v_lhs_622_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_635_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__6);
v___x_636_ = l_Lean_MessageData_ofExpr(v_lhs_622_);
v___x_637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(v___x_637_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
return v___x_638_;
}
else
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = l_Lean_Expr_projExpr_x21(v_lhs_622_);
lean_inc(v_a_626_);
lean_inc_ref(v_a_625_);
lean_inc(v_a_624_);
lean_inc_ref(v_a_623_);
lean_inc_ref(v___x_639_);
v___x_640_ = lean_infer_type(v___x_639_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v___x_642_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
lean_dec_ref(v___x_640_);
v___x_642_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v___x_639_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_644_; uint8_t v___x_645_; lean_object* v___y_647_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref(v___x_642_);
v___x_644_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__8));
v___x_645_ = 0;
if (lean_obj_tag(v_lhs_622_) == 11)
{
lean_object* v_typeName_655_; lean_object* v_idx_656_; lean_object* v_struct_657_; lean_object* v___x_658_; size_t v___x_659_; size_t v___x_660_; uint8_t v___x_661_; 
v_typeName_655_ = lean_ctor_get(v_lhs_622_, 0);
v_idx_656_ = lean_ctor_get(v_lhs_622_, 1);
v_struct_657_ = lean_ctor_get(v_lhs_622_, 2);
v___x_658_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__11);
v___x_659_ = lean_ptr_addr(v_struct_657_);
v___x_660_ = lean_usize_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__12);
v___x_661_ = lean_usize_dec_eq(v___x_659_, v___x_660_);
if (v___x_661_ == 0)
{
lean_object* v___x_662_; 
lean_inc(v_idx_656_);
lean_inc(v_typeName_655_);
lean_dec_ref(v_lhs_622_);
v___x_662_ = l_Lean_Expr_proj___override(v_typeName_655_, v_idx_656_, v___x_658_);
v___y_647_ = v___x_662_;
goto v___jp_646_;
}
else
{
v___y_647_ = v_lhs_622_;
goto v___jp_646_;
}
}
else
{
lean_object* v___x_663_; lean_object* v___x_664_; 
lean_dec_ref(v_lhs_622_);
v___x_663_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__16);
v___x_664_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__1(v___x_663_);
v___y_647_ = v___x_664_;
goto v___jp_646_;
}
v___jp_646_:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_648_ = l_Lean_mkLambda(v___x_644_, v___x_645_, v_a_641_, v___y_647_);
v___x_649_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__10));
v___x_650_ = lean_unsigned_to_nat(2u);
v___x_651_ = lean_mk_empty_array_with_capacity(v___x_650_);
v___x_652_ = lean_array_push(v___x_651_, v___x_648_);
v___x_653_ = lean_array_push(v___x_652_, v_a_643_);
v___x_654_ = l_Lean_Meta_mkAppM(v___x_649_, v___x_653_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
return v___x_654_;
}
}
else
{
lean_dec(v_a_641_);
lean_dec_ref(v_lhs_622_);
return v___x_642_;
}
}
else
{
lean_dec_ref(v___x_639_);
lean_dec_ref(v_lhs_622_);
return v___x_640_;
}
}
}
else
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = l_Lean_Expr_appFn_x21(v_lhs_622_);
v___x_666_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v___x_665_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc(v_a_667_);
lean_dec_ref(v___x_666_);
v___x_668_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__18));
v___x_669_ = l_Lean_Expr_appArg_x21(v_lhs_622_);
lean_dec_ref(v_lhs_622_);
v___x_670_ = lean_unsigned_to_nat(2u);
v___x_671_ = lean_mk_empty_array_with_capacity(v___x_670_);
v___x_672_ = lean_array_push(v___x_671_, v_a_667_);
v___x_673_ = lean_array_push(v___x_672_, v___x_669_);
v___x_674_ = l_Lean_Meta_mkAppM(v___x_668_, v___x_673_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
return v___x_674_;
}
else
{
lean_dec_ref(v_lhs_622_);
return v___x_666_;
}
}
}
else
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v_dummy_679_; lean_object* v_nargs_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_675_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__20));
v___x_676_ = l_Lean_Expr_getAppFn(v_lhs_622_);
v___x_677_ = l_Lean_Expr_constLevels_x21(v___x_676_);
lean_dec_ref(v___x_676_);
v___x_678_ = l_Lean_mkConst(v___x_675_, v___x_677_);
v_dummy_679_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21);
v_nargs_680_ = l_Lean_Expr_getAppNumArgs(v_lhs_622_);
lean_inc(v_nargs_680_);
v___x_681_ = lean_mk_array(v_nargs_680_, v_dummy_679_);
v___x_682_ = lean_unsigned_to_nat(1u);
v___x_683_ = lean_nat_sub(v_nargs_680_, v___x_682_);
lean_dec(v_nargs_680_);
v___x_684_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_lhs_622_, v___x_681_, v___x_683_);
v___x_685_ = l_Lean_mkAppN(v___x_678_, v___x_684_);
lean_dec_ref(v___x_684_);
v___x_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
}
else
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v_dummy_691_; lean_object* v_nargs_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_687_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__23));
v___x_688_ = l_Lean_Expr_getAppFn(v_lhs_622_);
v___x_689_ = l_Lean_Expr_constLevels_x21(v___x_688_);
lean_dec_ref(v___x_688_);
v___x_690_ = l_Lean_mkConst(v___x_687_, v___x_689_);
v_dummy_691_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___closed__21);
v_nargs_692_ = l_Lean_Expr_getAppNumArgs(v_lhs_622_);
lean_inc(v_nargs_692_);
v___x_693_ = lean_mk_array(v_nargs_692_, v_dummy_691_);
v___x_694_ = lean_unsigned_to_nat(1u);
v___x_695_ = lean_nat_sub(v_nargs_692_, v___x_694_);
lean_dec(v_nargs_692_);
v___x_696_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_lhs_622_, v___x_693_, v___x_695_);
v___x_697_ = l_Lean_mkAppN(v___x_690_, v___x_696_);
lean_dec_ref(v___x_696_);
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder___boxed(lean_object* v_lhs_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v_lhs_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_);
lean_dec(v_a_703_);
lean_dec_ref(v_a_702_);
lean_dec(v_a_701_);
lean_dec_ref(v_a_700_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0(lean_object* v_00_u03b1_706_, lean_object* v_msg_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(v_msg_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___boxed(lean_object* v_00_u03b1_714_, lean_object* v_msg_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0(v_00_u03b1_714_, v_msg_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
lean_dec(v___y_717_);
lean_dec_ref(v___y_716_);
return v_res_721_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(lean_object* v_msg_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v___f_729_; lean_object* v___x_1534__overap_730_; lean_object* v___x_731_; 
v___f_729_ = ((lean_object*)(l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___closed__0));
v___x_1534__overap_730_ = lean_panic_fn_borrowed(v___f_729_, v_msg_723_);
lean_inc(v___y_727_);
lean_inc_ref(v___y_726_);
lean_inc(v___y_725_);
lean_inc_ref(v___y_724_);
v___x_731_ = lean_apply_5(v___x_1534__overap_730_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, lean_box(0));
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0___boxed(lean_object* v_msg_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v_msg_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_739_, lean_object* v_x_740_, lean_object* v_x_741_, lean_object* v_x_742_){
_start:
{
lean_object* v_ks_743_; lean_object* v_vs_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_768_; 
v_ks_743_ = lean_ctor_get(v_x_739_, 0);
v_vs_744_ = lean_ctor_get(v_x_739_, 1);
v_isSharedCheck_768_ = !lean_is_exclusive(v_x_739_);
if (v_isSharedCheck_768_ == 0)
{
v___x_746_ = v_x_739_;
v_isShared_747_ = v_isSharedCheck_768_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_vs_744_);
lean_inc(v_ks_743_);
lean_dec(v_x_739_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_768_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_748_ = lean_array_get_size(v_ks_743_);
v___x_749_ = lean_nat_dec_lt(v_x_740_, v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_753_; 
lean_dec(v_x_740_);
v___x_750_ = lean_array_push(v_ks_743_, v_x_741_);
v___x_751_ = lean_array_push(v_vs_744_, v_x_742_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 1, v___x_751_);
lean_ctor_set(v___x_746_, 0, v___x_750_);
v___x_753_ = v___x_746_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_750_);
lean_ctor_set(v_reuseFailAlloc_754_, 1, v___x_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
else
{
lean_object* v_k_x27_755_; uint8_t v___x_756_; 
v_k_x27_755_ = lean_array_fget_borrowed(v_ks_743_, v_x_740_);
v___x_756_ = l_Lean_instBEqMVarId_beq(v_x_741_, v_k_x27_755_);
if (v___x_756_ == 0)
{
lean_object* v___x_758_; 
if (v_isShared_747_ == 0)
{
v___x_758_ = v___x_746_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_ks_743_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v_vs_744_);
v___x_758_ = v_reuseFailAlloc_762_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_unsigned_to_nat(1u);
v___x_760_ = lean_nat_add(v_x_740_, v___x_759_);
lean_dec(v_x_740_);
v_x_739_ = v___x_758_;
v_x_740_ = v___x_760_;
goto _start;
}
}
else
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_766_; 
v___x_763_ = lean_array_fset(v_ks_743_, v_x_740_, v_x_741_);
v___x_764_ = lean_array_fset(v_vs_744_, v_x_740_, v_x_742_);
lean_dec(v_x_740_);
if (v_isShared_747_ == 0)
{
lean_ctor_set(v___x_746_, 1, v___x_764_);
lean_ctor_set(v___x_746_, 0, v___x_763_);
v___x_766_ = v___x_746_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v___x_763_);
lean_ctor_set(v_reuseFailAlloc_767_, 1, v___x_764_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(lean_object* v_n_769_, lean_object* v_k_770_, lean_object* v_v_771_){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = lean_unsigned_to_nat(0u);
v___x_773_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_n_769_, v___x_772_, v_k_770_, v_v_771_);
return v___x_773_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_774_; size_t v___x_775_; size_t v___x_776_; 
v___x_774_ = ((size_t)5ULL);
v___x_775_ = ((size_t)1ULL);
v___x_776_ = lean_usize_shift_left(v___x_775_, v___x_774_);
return v___x_776_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_777_; size_t v___x_778_; size_t v___x_779_; 
v___x_777_ = ((size_t)1ULL);
v___x_778_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__0);
v___x_779_ = lean_usize_sub(v___x_778_, v___x_777_);
return v___x_779_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(lean_object* v_x_781_, size_t v_x_782_, size_t v_x_783_, lean_object* v_x_784_, lean_object* v_x_785_){
_start:
{
if (lean_obj_tag(v_x_781_) == 0)
{
lean_object* v_es_786_; size_t v___x_787_; size_t v___x_788_; size_t v___x_789_; size_t v___x_790_; lean_object* v_j_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
v_es_786_ = lean_ctor_get(v_x_781_, 0);
v___x_787_ = ((size_t)5ULL);
v___x_788_ = ((size_t)1ULL);
v___x_789_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__1);
v___x_790_ = lean_usize_land(v_x_782_, v___x_789_);
v_j_791_ = lean_usize_to_nat(v___x_790_);
v___x_792_ = lean_array_get_size(v_es_786_);
v___x_793_ = lean_nat_dec_lt(v_j_791_, v___x_792_);
if (v___x_793_ == 0)
{
lean_dec(v_j_791_);
lean_dec(v_x_785_);
lean_dec(v_x_784_);
return v_x_781_;
}
else
{
lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_830_; 
lean_inc_ref(v_es_786_);
v_isSharedCheck_830_ = !lean_is_exclusive(v_x_781_);
if (v_isSharedCheck_830_ == 0)
{
lean_object* v_unused_831_; 
v_unused_831_ = lean_ctor_get(v_x_781_, 0);
lean_dec(v_unused_831_);
v___x_795_ = v_x_781_;
v_isShared_796_ = v_isSharedCheck_830_;
goto v_resetjp_794_;
}
else
{
lean_dec(v_x_781_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_830_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v_v_797_; lean_object* v___x_798_; lean_object* v_xs_x27_799_; lean_object* v___y_801_; 
v_v_797_ = lean_array_fget(v_es_786_, v_j_791_);
v___x_798_ = lean_box(0);
v_xs_x27_799_ = lean_array_fset(v_es_786_, v_j_791_, v___x_798_);
switch(lean_obj_tag(v_v_797_))
{
case 0:
{
lean_object* v_key_806_; lean_object* v_val_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_817_; 
v_key_806_ = lean_ctor_get(v_v_797_, 0);
v_val_807_ = lean_ctor_get(v_v_797_, 1);
v_isSharedCheck_817_ = !lean_is_exclusive(v_v_797_);
if (v_isSharedCheck_817_ == 0)
{
v___x_809_ = v_v_797_;
v_isShared_810_ = v_isSharedCheck_817_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_val_807_);
lean_inc(v_key_806_);
lean_dec(v_v_797_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_817_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
uint8_t v___x_811_; 
v___x_811_ = l_Lean_instBEqMVarId_beq(v_x_784_, v_key_806_);
if (v___x_811_ == 0)
{
lean_object* v___x_812_; lean_object* v___x_813_; 
lean_del_object(v___x_809_);
v___x_812_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_806_, v_val_807_, v_x_784_, v_x_785_);
v___x_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_813_, 0, v___x_812_);
v___y_801_ = v___x_813_;
goto v___jp_800_;
}
else
{
lean_object* v___x_815_; 
lean_dec(v_val_807_);
lean_dec(v_key_806_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 1, v_x_785_);
lean_ctor_set(v___x_809_, 0, v_x_784_);
v___x_815_ = v___x_809_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_x_784_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_x_785_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
v___y_801_ = v___x_815_;
goto v___jp_800_;
}
}
}
}
case 1:
{
lean_object* v_node_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_828_; 
v_node_818_ = lean_ctor_get(v_v_797_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v_v_797_);
if (v_isSharedCheck_828_ == 0)
{
v___x_820_ = v_v_797_;
v_isShared_821_ = v_isSharedCheck_828_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_node_818_);
lean_dec(v_v_797_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_828_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
size_t v___x_822_; size_t v___x_823_; lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_822_ = lean_usize_shift_right(v_x_782_, v___x_787_);
v___x_823_ = lean_usize_add(v_x_783_, v___x_788_);
v___x_824_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_node_818_, v___x_822_, v___x_823_, v_x_784_, v_x_785_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 0, v___x_824_);
v___x_826_ = v___x_820_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
v___y_801_ = v___x_826_;
goto v___jp_800_;
}
}
}
default: 
{
lean_object* v___x_829_; 
v___x_829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_829_, 0, v_x_784_);
lean_ctor_set(v___x_829_, 1, v_x_785_);
v___y_801_ = v___x_829_;
goto v___jp_800_;
}
}
v___jp_800_:
{
lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_802_ = lean_array_fset(v_xs_x27_799_, v_j_791_, v___y_801_);
lean_dec(v_j_791_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v___x_802_);
v___x_804_ = v___x_795_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_802_);
v___x_804_ = v_reuseFailAlloc_805_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
return v___x_804_;
}
}
}
}
}
else
{
lean_object* v_ks_832_; lean_object* v_vs_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_853_; 
v_ks_832_ = lean_ctor_get(v_x_781_, 0);
v_vs_833_ = lean_ctor_get(v_x_781_, 1);
v_isSharedCheck_853_ = !lean_is_exclusive(v_x_781_);
if (v_isSharedCheck_853_ == 0)
{
v___x_835_ = v_x_781_;
v_isShared_836_ = v_isSharedCheck_853_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_vs_833_);
lean_inc(v_ks_832_);
lean_dec(v_x_781_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_853_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_ks_832_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v_vs_833_);
v___x_838_ = v_reuseFailAlloc_852_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
lean_object* v_newNode_839_; uint8_t v___y_841_; size_t v___x_847_; uint8_t v___x_848_; 
v_newNode_839_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(v___x_838_, v_x_784_, v_x_785_);
v___x_847_ = ((size_t)7ULL);
v___x_848_ = lean_usize_dec_le(v___x_847_, v_x_783_);
if (v___x_848_ == 0)
{
lean_object* v___x_849_; lean_object* v___x_850_; uint8_t v___x_851_; 
v___x_849_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_839_);
v___x_850_ = lean_unsigned_to_nat(4u);
v___x_851_ = lean_nat_dec_lt(v___x_849_, v___x_850_);
lean_dec(v___x_849_);
v___y_841_ = v___x_851_;
goto v___jp_840_;
}
else
{
v___y_841_ = v___x_848_;
goto v___jp_840_;
}
v___jp_840_:
{
if (v___y_841_ == 0)
{
lean_object* v_ks_842_; lean_object* v_vs_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v_ks_842_ = lean_ctor_get(v_newNode_839_, 0);
lean_inc_ref(v_ks_842_);
v_vs_843_ = lean_ctor_get(v_newNode_839_, 1);
lean_inc_ref(v_vs_843_);
lean_dec_ref(v_newNode_839_);
v___x_844_ = lean_unsigned_to_nat(0u);
v___x_845_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___closed__2);
v___x_846_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(v_x_783_, v_ks_842_, v_vs_843_, v___x_844_, v___x_845_);
lean_dec_ref(v_vs_843_);
lean_dec_ref(v_ks_842_);
return v___x_846_;
}
else
{
return v_newNode_839_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(size_t v_depth_854_, lean_object* v_keys_855_, lean_object* v_vals_856_, lean_object* v_i_857_, lean_object* v_entries_858_){
_start:
{
lean_object* v___x_859_; uint8_t v___x_860_; 
v___x_859_ = lean_array_get_size(v_keys_855_);
v___x_860_ = lean_nat_dec_lt(v_i_857_, v___x_859_);
if (v___x_860_ == 0)
{
lean_dec(v_i_857_);
return v_entries_858_;
}
else
{
lean_object* v_k_861_; lean_object* v_v_862_; uint64_t v___x_863_; size_t v_h_864_; size_t v___x_865_; lean_object* v___x_866_; size_t v___x_867_; size_t v___x_868_; size_t v___x_869_; size_t v_h_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_k_861_ = lean_array_fget_borrowed(v_keys_855_, v_i_857_);
v_v_862_ = lean_array_fget_borrowed(v_vals_856_, v_i_857_);
v___x_863_ = l_Lean_instHashableMVarId_hash(v_k_861_);
v_h_864_ = lean_uint64_to_usize(v___x_863_);
v___x_865_ = ((size_t)5ULL);
v___x_866_ = lean_unsigned_to_nat(1u);
v___x_867_ = ((size_t)1ULL);
v___x_868_ = lean_usize_sub(v_depth_854_, v___x_867_);
v___x_869_ = lean_usize_mul(v___x_865_, v___x_868_);
v_h_870_ = lean_usize_shift_right(v_h_864_, v___x_869_);
v___x_871_ = lean_nat_add(v_i_857_, v___x_866_);
lean_dec(v_i_857_);
lean_inc(v_v_862_);
lean_inc(v_k_861_);
v___x_872_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_entries_858_, v_h_870_, v_depth_854_, v_k_861_, v_v_862_);
v_i_857_ = v___x_871_;
v_entries_858_ = v___x_872_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_depth_874_, lean_object* v_keys_875_, lean_object* v_vals_876_, lean_object* v_i_877_, lean_object* v_entries_878_){
_start:
{
size_t v_depth_boxed_879_; lean_object* v_res_880_; 
v_depth_boxed_879_ = lean_unbox_usize(v_depth_874_);
lean_dec(v_depth_874_);
v_res_880_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(v_depth_boxed_879_, v_keys_875_, v_vals_876_, v_i_877_, v_entries_878_);
lean_dec_ref(v_vals_876_);
lean_dec_ref(v_keys_875_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_881_, lean_object* v_x_882_, lean_object* v_x_883_, lean_object* v_x_884_, lean_object* v_x_885_){
_start:
{
size_t v_x_2119__boxed_886_; size_t v_x_2120__boxed_887_; lean_object* v_res_888_; 
v_x_2119__boxed_886_ = lean_unbox_usize(v_x_882_);
lean_dec(v_x_882_);
v_x_2120__boxed_887_ = lean_unbox_usize(v_x_883_);
lean_dec(v_x_883_);
v_res_888_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_x_881_, v_x_2119__boxed_886_, v_x_2120__boxed_887_, v_x_884_, v_x_885_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(lean_object* v_x_889_, lean_object* v_x_890_, lean_object* v_x_891_){
_start:
{
uint64_t v___x_892_; size_t v___x_893_; size_t v___x_894_; lean_object* v___x_895_; 
v___x_892_ = l_Lean_instHashableMVarId_hash(v_x_890_);
v___x_893_ = lean_uint64_to_usize(v___x_892_);
v___x_894_ = ((size_t)1ULL);
v___x_895_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_x_889_, v___x_893_, v___x_894_, v_x_890_, v_x_891_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(lean_object* v_mvarId_896_, lean_object* v_val_897_, lean_object* v___y_898_){
_start:
{
lean_object* v___x_900_; lean_object* v_mctx_901_; lean_object* v_cache_902_; lean_object* v_zetaDeltaFVarIds_903_; lean_object* v_postponed_904_; lean_object* v_diag_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_932_; 
v___x_900_ = lean_st_ref_take(v___y_898_);
v_mctx_901_ = lean_ctor_get(v___x_900_, 0);
v_cache_902_ = lean_ctor_get(v___x_900_, 1);
v_zetaDeltaFVarIds_903_ = lean_ctor_get(v___x_900_, 2);
v_postponed_904_ = lean_ctor_get(v___x_900_, 3);
v_diag_905_ = lean_ctor_get(v___x_900_, 4);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_932_ == 0)
{
v___x_907_ = v___x_900_;
v_isShared_908_ = v_isSharedCheck_932_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_diag_905_);
lean_inc(v_postponed_904_);
lean_inc(v_zetaDeltaFVarIds_903_);
lean_inc(v_cache_902_);
lean_inc(v_mctx_901_);
lean_dec(v___x_900_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_932_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v_depth_909_; lean_object* v_levelAssignDepth_910_; lean_object* v_mvarCounter_911_; lean_object* v_lDepth_912_; lean_object* v_decls_913_; lean_object* v_userNames_914_; lean_object* v_lAssignment_915_; lean_object* v_eAssignment_916_; lean_object* v_dAssignment_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_931_; 
v_depth_909_ = lean_ctor_get(v_mctx_901_, 0);
v_levelAssignDepth_910_ = lean_ctor_get(v_mctx_901_, 1);
v_mvarCounter_911_ = lean_ctor_get(v_mctx_901_, 2);
v_lDepth_912_ = lean_ctor_get(v_mctx_901_, 3);
v_decls_913_ = lean_ctor_get(v_mctx_901_, 4);
v_userNames_914_ = lean_ctor_get(v_mctx_901_, 5);
v_lAssignment_915_ = lean_ctor_get(v_mctx_901_, 6);
v_eAssignment_916_ = lean_ctor_get(v_mctx_901_, 7);
v_dAssignment_917_ = lean_ctor_get(v_mctx_901_, 8);
v_isSharedCheck_931_ = !lean_is_exclusive(v_mctx_901_);
if (v_isSharedCheck_931_ == 0)
{
v___x_919_ = v_mctx_901_;
v_isShared_920_ = v_isSharedCheck_931_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_dAssignment_917_);
lean_inc(v_eAssignment_916_);
lean_inc(v_lAssignment_915_);
lean_inc(v_userNames_914_);
lean_inc(v_decls_913_);
lean_inc(v_lDepth_912_);
lean_inc(v_mvarCounter_911_);
lean_inc(v_levelAssignDepth_910_);
lean_inc(v_depth_909_);
lean_dec(v_mctx_901_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_931_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_921_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(v_eAssignment_916_, v_mvarId_896_, v_val_897_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 7, v___x_921_);
v___x_923_ = v___x_919_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_depth_909_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v_levelAssignDepth_910_);
lean_ctor_set(v_reuseFailAlloc_930_, 2, v_mvarCounter_911_);
lean_ctor_set(v_reuseFailAlloc_930_, 3, v_lDepth_912_);
lean_ctor_set(v_reuseFailAlloc_930_, 4, v_decls_913_);
lean_ctor_set(v_reuseFailAlloc_930_, 5, v_userNames_914_);
lean_ctor_set(v_reuseFailAlloc_930_, 6, v_lAssignment_915_);
lean_ctor_set(v_reuseFailAlloc_930_, 7, v___x_921_);
lean_ctor_set(v_reuseFailAlloc_930_, 8, v_dAssignment_917_);
v___x_923_ = v_reuseFailAlloc_930_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
lean_object* v___x_925_; 
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 0, v___x_923_);
v___x_925_ = v___x_907_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_923_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v_cache_902_);
lean_ctor_set(v_reuseFailAlloc_929_, 2, v_zetaDeltaFVarIds_903_);
lean_ctor_set(v_reuseFailAlloc_929_, 3, v_postponed_904_);
lean_ctor_set(v_reuseFailAlloc_929_, 4, v_diag_905_);
v___x_925_ = v_reuseFailAlloc_929_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_926_ = lean_st_ref_set(v___y_898_, v___x_925_);
v___x_927_ = lean_box(0);
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
return v___x_928_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg___boxed(lean_object* v_mvarId_933_, lean_object* v_val_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(v_mvarId_933_, v_val_934_, v___y_935_);
lean_dec(v___y_935_);
return v_res_937_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3(void){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_941_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2));
v___x_942_ = lean_unsigned_to_nat(41u);
v___x_943_ = lean_unsigned_to_nat(70u);
v___x_944_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1));
v___x_945_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0));
v___x_946_ = l_mkPanicMessageWithDecl(v___x_945_, v___x_944_, v___x_943_, v___x_942_, v___x_941_);
return v___x_946_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_947_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__2));
v___x_948_ = lean_unsigned_to_nat(51u);
v___x_949_ = lean_unsigned_to_nat(72u);
v___x_950_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__1));
v___x_951_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__0));
v___x_952_ = l_mkPanicMessageWithDecl(v___x_951_, v___x_950_, v___x_949_, v___x_948_, v___x_947_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0(lean_object* v_mvarId_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_){
_start:
{
lean_object* v___x_959_; 
lean_inc(v_mvarId_953_);
v___x_959_ = l_Lean_MVarId_getType_x27(v_mvarId_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_961_; lean_object* v___x_962_; uint8_t v___x_963_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref(v___x_959_);
v___x_961_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix___lam__1___closed__1));
v___x_962_ = lean_unsigned_to_nat(3u);
v___x_963_ = l_Lean_Expr_isAppOfArity(v_a_960_, v___x_961_, v___x_962_);
if (v___x_963_ == 0)
{
lean_object* v___x_964_; lean_object* v___x_965_; 
lean_dec(v_a_960_);
lean_dec(v_mvarId_953_);
v___x_964_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__3);
v___x_965_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v___x_964_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
return v___x_965_;
}
else
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_966_ = l_Lean_Expr_appFn_x21(v_a_960_);
v___x_967_ = l_Lean_Expr_appArg_x21(v___x_966_);
lean_dec_ref(v___x_966_);
v___x_968_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder(v___x_967_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_970_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref(v___x_968_);
lean_inc(v___y_957_);
lean_inc_ref(v___y_956_);
lean_inc(v___y_955_);
lean_inc_ref(v___y_954_);
lean_inc(v_a_969_);
v___x_970_ = lean_infer_type(v_a_969_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; uint8_t v___x_972_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_a_971_);
lean_dec_ref(v___x_970_);
v___x_972_ = l_Lean_Expr_isAppOfArity(v_a_971_, v___x_961_, v___x_962_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; lean_object* v___x_974_; 
lean_dec(v_a_971_);
lean_dec(v_a_969_);
lean_dec(v_a_960_);
lean_dec(v_mvarId_953_);
v___x_973_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___closed__4);
v___x_974_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__0(v___x_973_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
return v___x_974_;
}
else
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_975_ = l_Lean_Expr_appArg_x21(v_a_960_);
lean_dec(v_a_960_);
v___x_976_ = l_Lean_Expr_appArg_x21(v_a_971_);
lean_dec(v_a_971_);
v___x_977_ = l_Lean_Meta_mkEq(v___x_976_, v___x_975_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_object* v_a_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v_a_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_a_978_);
lean_dec_ref(v___x_977_);
v___x_979_ = lean_box(0);
v___x_980_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_978_, v___x_979_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_982_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref(v___x_980_);
lean_inc(v_a_981_);
v___x_982_ = l_Lean_Meta_mkEqTrans(v_a_969_, v_a_981_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec_ref(v___y_954_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_992_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_983_);
lean_dec_ref(v___x_982_);
v___x_984_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(v_mvarId_953_, v_a_983_, v___y_955_);
lean_dec(v___y_955_);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_992_ == 0)
{
lean_object* v_unused_993_; 
v_unused_993_ = lean_ctor_get(v___x_984_, 0);
lean_dec(v_unused_993_);
v___x_986_ = v___x_984_;
v_isShared_987_ = v_isSharedCheck_992_;
goto v_resetjp_985_;
}
else
{
lean_dec(v___x_984_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_992_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_988_; lean_object* v___x_990_; 
v___x_988_ = l_Lean_Expr_mvarId_x21(v_a_981_);
lean_dec(v_a_981_);
if (v_isShared_987_ == 0)
{
lean_ctor_set(v___x_986_, 0, v___x_988_);
v___x_990_ = v___x_986_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
lean_dec(v_a_981_);
lean_dec(v___y_955_);
lean_dec(v_mvarId_953_);
v_a_994_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_982_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_982_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
lean_dec(v_a_969_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
lean_dec(v_mvarId_953_);
v_a_1002_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_980_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_980_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec(v_a_969_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
lean_dec(v_mvarId_953_);
v_a_1010_ = lean_ctor_get(v___x_977_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_977_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_977_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
}
else
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1025_; 
lean_dec(v_a_969_);
lean_dec(v_a_960_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
lean_dec(v_mvarId_953_);
v_a_1018_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1020_ = v___x_970_;
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_970_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1023_; 
if (v_isShared_1021_ == 0)
{
v___x_1023_ = v___x_1020_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_1018_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
else
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
lean_dec(v_a_960_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
lean_dec(v_mvarId_953_);
v_a_1026_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_968_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_968_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1026_);
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
else
{
lean_object* v_a_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1041_; 
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
lean_dec(v_mvarId_953_);
v_a_1034_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_1041_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_1041_ == 0)
{
v___x_1036_ = v___x_959_;
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_a_1034_);
lean_dec(v___x_959_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1041_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
lean_object* v___x_1039_; 
if (v_isShared_1037_ == 0)
{
v___x_1039_ = v___x_1036_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v_a_1034_);
v___x_1039_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
return v___x_1039_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___boxed(lean_object* v_mvarId_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0(v_mvarId_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(lean_object* v_mvarId_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v___f_1055_; lean_object* v___x_1056_; 
lean_inc(v_mvarId_1049_);
v___f_1055_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1055_, 0, v_mvarId_1049_);
v___x_1056_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix_spec__0___redArg(v_mvarId_1049_, v___f_1055_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq___boxed(lean_object* v_mvarId_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(v_mvarId_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_);
lean_dec(v_a_1061_);
lean_dec_ref(v_a_1060_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1(lean_object* v_mvarId_1064_, lean_object* v_val_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___redArg(v_mvarId_1064_, v_val_1065_, v___y_1067_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1___boxed(lean_object* v_mvarId_1072_, lean_object* v_val_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1(v_mvarId_1072_, v_val_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1(lean_object* v_00_u03b2_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_, lean_object* v_x_1083_){
_start:
{
lean_object* v___x_1084_; 
v___x_1084_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1___redArg(v_x_1081_, v_x_1082_, v_x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_1085_, lean_object* v_x_1086_, size_t v_x_1087_, size_t v_x_1088_, lean_object* v_x_1089_, lean_object* v_x_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___redArg(v_x_1086_, v_x_1087_, v_x_1088_, v_x_1089_, v_x_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1092_, lean_object* v_x_1093_, lean_object* v_x_1094_, lean_object* v_x_1095_, lean_object* v_x_1096_, lean_object* v_x_1097_){
_start:
{
size_t v_x_2605__boxed_1098_; size_t v_x_2606__boxed_1099_; lean_object* v_res_1100_; 
v_x_2605__boxed_1098_ = lean_unbox_usize(v_x_1094_);
lean_dec(v_x_1094_);
v_x_2606__boxed_1099_ = lean_unbox_usize(v_x_1095_);
lean_dec(v_x_1095_);
v_res_1100_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2(v_00_u03b2_1092_, v_x_1093_, v_x_2605__boxed_1098_, v_x_2606__boxed_1099_, v_x_1096_, v_x_1097_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1101_, lean_object* v_n_1102_, lean_object* v_k_1103_, lean_object* v_v_1104_){
_start:
{
lean_object* v___x_1105_; 
v___x_1105_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3___redArg(v_n_1102_, v_k_1103_, v_v_1104_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1106_, size_t v_depth_1107_, lean_object* v_keys_1108_, lean_object* v_vals_1109_, lean_object* v_heq_1110_, lean_object* v_i_1111_, lean_object* v_entries_1112_){
_start:
{
lean_object* v___x_1113_; 
v___x_1113_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___redArg(v_depth_1107_, v_keys_1108_, v_vals_1109_, v_i_1111_, v_entries_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1114_, lean_object* v_depth_1115_, lean_object* v_keys_1116_, lean_object* v_vals_1117_, lean_object* v_heq_1118_, lean_object* v_i_1119_, lean_object* v_entries_1120_){
_start:
{
size_t v_depth_boxed_1121_; lean_object* v_res_1122_; 
v_depth_boxed_1121_ = lean_unbox_usize(v_depth_1115_);
lean_dec(v_depth_1115_);
v_res_1122_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__4(v_00_u03b2_1114_, v_depth_boxed_1121_, v_keys_1116_, v_vals_1117_, v_heq_1118_, v_i_1119_, v_entries_1120_);
lean_dec_ref(v_vals_1117_);
lean_dec_ref(v_keys_1116_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1123_, lean_object* v_x_1124_, lean_object* v_x_1125_, lean_object* v_x_1126_, lean_object* v_x_1127_){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq_spec__1_spec__1_spec__2_spec__3_spec__4___redArg(v_x_1124_, v_x_1125_, v_x_1126_, v_x_1127_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(lean_object* v_cls_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v_options_1135_; uint8_t v_hasTrace_1136_; 
v_options_1135_ = lean_ctor_get(v___y_1133_, 2);
v_hasTrace_1136_ = lean_ctor_get_uint8(v_options_1135_, sizeof(void*)*1);
if (v_hasTrace_1136_ == 0)
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_dec(v_cls_1132_);
v___x_1137_ = lean_box(v_hasTrace_1136_);
v___x_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
return v___x_1138_;
}
else
{
lean_object* v_inheritedTraceOptions_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; uint8_t v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v_inheritedTraceOptions_1139_ = lean_ctor_get(v___y_1133_, 13);
v___x_1140_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___closed__1));
v___x_1141_ = l_Lean_Name_append(v___x_1140_, v_cls_1132_);
v___x_1142_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1139_, v_options_1135_, v___x_1141_);
lean_dec(v___x_1141_);
v___x_1143_ = lean_box(v___x_1142_);
v___x_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
return v___x_1144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___boxed(lean_object* v_cls_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v_cls_1145_, v___y_1146_);
lean_dec_ref(v___y_1146_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(lean_object* v_cls_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v___x_1155_; 
v___x_1155_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v_cls_1149_, v___y_1152_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___boxed(lean_object* v_cls_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1(v_cls_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1157_);
return v_res_1162_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(lean_object* v_opts_1163_, lean_object* v_opt_1164_){
_start:
{
lean_object* v_name_1165_; lean_object* v_defValue_1166_; lean_object* v_map_1167_; lean_object* v___x_1168_; 
v_name_1165_ = lean_ctor_get(v_opt_1164_, 0);
v_defValue_1166_ = lean_ctor_get(v_opt_1164_, 1);
v_map_1167_ = lean_ctor_get(v_opts_1163_, 0);
v___x_1168_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1167_, v_name_1165_);
if (lean_obj_tag(v___x_1168_) == 0)
{
uint8_t v___x_1169_; 
v___x_1169_ = lean_unbox(v_defValue_1166_);
return v___x_1169_;
}
else
{
lean_object* v_val_1170_; 
v_val_1170_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_val_1170_);
lean_dec_ref(v___x_1168_);
if (lean_obj_tag(v_val_1170_) == 1)
{
uint8_t v_v_1171_; 
v_v_1171_ = lean_ctor_get_uint8(v_val_1170_, 0);
lean_dec_ref(v_val_1170_);
return v_v_1171_;
}
else
{
uint8_t v___x_1172_; 
lean_dec(v_val_1170_);
v___x_1172_ = lean_unbox(v_defValue_1166_);
return v___x_1172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3___boxed(lean_object* v_opts_1173_, lean_object* v_opt_1174_){
_start:
{
uint8_t v_res_1175_; lean_object* v_r_1176_; 
v_res_1175_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(v_opts_1173_, v_opt_1174_);
lean_dec_ref(v_opt_1174_);
lean_dec_ref(v_opts_1173_);
v_r_1176_ = lean_box(v_res_1175_);
return v_r_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(lean_object* v_opts_1177_, lean_object* v_opt_1178_){
_start:
{
lean_object* v_name_1179_; lean_object* v_defValue_1180_; lean_object* v_map_1181_; lean_object* v___x_1182_; 
v_name_1179_ = lean_ctor_get(v_opt_1178_, 0);
v_defValue_1180_ = lean_ctor_get(v_opt_1178_, 1);
v_map_1181_ = lean_ctor_get(v_opts_1177_, 0);
v___x_1182_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1181_, v_name_1179_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_inc(v_defValue_1180_);
return v_defValue_1180_;
}
else
{
lean_object* v_val_1183_; 
v_val_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_val_1183_);
lean_dec_ref(v___x_1182_);
if (lean_obj_tag(v_val_1183_) == 3)
{
lean_object* v_v_1184_; 
v_v_1184_ = lean_ctor_get(v_val_1183_, 0);
lean_inc(v_v_1184_);
lean_dec_ref(v_val_1183_);
return v_v_1184_;
}
else
{
lean_dec(v_val_1183_);
lean_inc(v_defValue_1180_);
return v_defValue_1180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4___boxed(lean_object* v_opts_1185_, lean_object* v_opt_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(v_opts_1185_, v_opt_1186_);
lean_dec_ref(v_opt_1186_);
lean_dec_ref(v_opts_1185_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___redArg(lean_object* v_e_1188_, lean_object* v___y_1189_){
_start:
{
uint8_t v___x_1191_; 
v___x_1191_ = l_Lean_Expr_hasMVar(v_e_1188_);
if (v___x_1191_ == 0)
{
lean_object* v___x_1192_; 
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v_e_1188_);
return v___x_1192_;
}
else
{
lean_object* v___x_1193_; lean_object* v_mctx_1194_; lean_object* v___x_1195_; lean_object* v_fst_1196_; lean_object* v_snd_1197_; lean_object* v___x_1198_; lean_object* v_cache_1199_; lean_object* v_zetaDeltaFVarIds_1200_; lean_object* v_postponed_1201_; lean_object* v_diag_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1211_; 
v___x_1193_ = lean_st_ref_get(v___y_1189_);
v_mctx_1194_ = lean_ctor_get(v___x_1193_, 0);
lean_inc_ref(v_mctx_1194_);
lean_dec(v___x_1193_);
v___x_1195_ = l_Lean_instantiateMVarsCore(v_mctx_1194_, v_e_1188_);
v_fst_1196_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_fst_1196_);
v_snd_1197_ = lean_ctor_get(v___x_1195_, 1);
lean_inc(v_snd_1197_);
lean_dec_ref(v___x_1195_);
v___x_1198_ = lean_st_ref_take(v___y_1189_);
v_cache_1199_ = lean_ctor_get(v___x_1198_, 1);
v_zetaDeltaFVarIds_1200_ = lean_ctor_get(v___x_1198_, 2);
v_postponed_1201_ = lean_ctor_get(v___x_1198_, 3);
v_diag_1202_ = lean_ctor_get(v___x_1198_, 4);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1211_ == 0)
{
lean_object* v_unused_1212_; 
v_unused_1212_ = lean_ctor_get(v___x_1198_, 0);
lean_dec(v_unused_1212_);
v___x_1204_ = v___x_1198_;
v_isShared_1205_ = v_isSharedCheck_1211_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_diag_1202_);
lean_inc(v_postponed_1201_);
lean_inc(v_zetaDeltaFVarIds_1200_);
lean_inc(v_cache_1199_);
lean_dec(v___x_1198_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1211_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v_snd_1197_);
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_snd_1197_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v_cache_1199_);
lean_ctor_set(v_reuseFailAlloc_1210_, 2, v_zetaDeltaFVarIds_1200_);
lean_ctor_set(v_reuseFailAlloc_1210_, 3, v_postponed_1201_);
lean_ctor_set(v_reuseFailAlloc_1210_, 4, v_diag_1202_);
v___x_1207_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1208_ = lean_st_ref_set(v___y_1189_, v___x_1207_);
v___x_1209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1209_, 0, v_fst_1196_);
return v___x_1209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___redArg___boxed(lean_object* v_e_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___redArg(v_e_1213_, v___y_1214_);
lean_dec(v___y_1214_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5(lean_object* v_e_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___redArg(v_e_1217_, v___y_1219_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___boxed(lean_object* v_e_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5(v_e_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg(lean_object* v_k_1231_, uint8_t v_allowLevelAssignments_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v___x_1238_; 
v___x_1238_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1232_, v_k_1231_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1246_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1246_ == 0)
{
v___x_1241_ = v___x_1238_;
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_a_1239_);
lean_dec(v___x_1238_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1244_; 
if (v_isShared_1242_ == 0)
{
v___x_1244_ = v___x_1241_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v_a_1239_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
v_a_1247_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1238_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1238_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg___boxed(lean_object* v_k_1255_, lean_object* v_allowLevelAssignments_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1262_; lean_object* v_res_1263_; 
v_allowLevelAssignments_boxed_1262_ = lean_unbox(v_allowLevelAssignments_1256_);
v_res_1263_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg(v_k_1255_, v_allowLevelAssignments_boxed_1262_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7(lean_object* v_00_u03b1_1264_, lean_object* v_k_1265_, uint8_t v_allowLevelAssignments_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_){
_start:
{
lean_object* v___x_1272_; 
v___x_1272_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg(v_k_1265_, v_allowLevelAssignments_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___boxed(lean_object* v_00_u03b1_1273_, lean_object* v_k_1274_, lean_object* v_allowLevelAssignments_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1281_; lean_object* v_res_1282_; 
v_allowLevelAssignments_boxed_1281_ = lean_unbox(v_allowLevelAssignments_1275_);
v_res_1282_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7(v_00_u03b1_1273_, v_k_1274_, v_allowLevelAssignments_boxed_1281_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg(lean_object* v_thm_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v___x_1286_; lean_object* v_env_1287_; lean_object* v_toConstantVal_1288_; lean_object* v_value_1289_; lean_object* v_all_1290_; uint8_t v___y_1292_; lean_object* v_type_1300_; uint8_t v___x_1301_; 
v___x_1286_ = lean_st_ref_get(v___y_1284_);
v_env_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc_ref(v_env_1287_);
lean_dec(v___x_1286_);
v_toConstantVal_1288_ = lean_ctor_get(v_thm_1283_, 0);
v_value_1289_ = lean_ctor_get(v_thm_1283_, 1);
v_all_1290_ = lean_ctor_get(v_thm_1283_, 2);
v_type_1300_ = lean_ctor_get(v_toConstantVal_1288_, 2);
lean_inc_ref(v_env_1287_);
v___x_1301_ = l_Lean_Environment_hasUnsafe(v_env_1287_, v_type_1300_);
if (v___x_1301_ == 0)
{
uint8_t v___x_1302_; 
v___x_1302_ = l_Lean_Environment_hasUnsafe(v_env_1287_, v_value_1289_);
v___y_1292_ = v___x_1302_;
goto v___jp_1291_;
}
else
{
lean_dec_ref(v_env_1287_);
v___y_1292_ = v___x_1301_;
goto v___jp_1291_;
}
v___jp_1291_:
{
if (v___y_1292_ == 0)
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1293_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1293_, 0, v_thm_1283_);
v___x_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
return v___x_1294_;
}
else
{
lean_object* v___x_1295_; uint8_t v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
lean_inc(v_all_1290_);
lean_inc_ref(v_value_1289_);
lean_inc_ref(v_toConstantVal_1288_);
lean_dec_ref(v_thm_1283_);
v___x_1295_ = lean_box(0);
v___x_1296_ = 0;
v___x_1297_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1297_, 0, v_toConstantVal_1288_);
lean_ctor_set(v___x_1297_, 1, v_value_1289_);
lean_ctor_set(v___x_1297_, 2, v___x_1295_);
lean_ctor_set(v___x_1297_, 3, v_all_1290_);
lean_ctor_set_uint8(v___x_1297_, sizeof(void*)*4, v___x_1296_);
v___x_1298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
v___x_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1298_);
return v___x_1299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg___boxed(lean_object* v_thm_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg(v_thm_1303_, v___y_1304_);
lean_dec(v___y_1304_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8(lean_object* v_thm_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
lean_object* v___x_1313_; 
v___x_1313_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg(v_thm_1307_, v___y_1311_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___boxed(lean_object* v_thm_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8(v_thm_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg___lam__0(lean_object* v_k_1321_, lean_object* v_b_1322_, lean_object* v_c_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; 
lean_inc(v___y_1327_);
lean_inc_ref(v___y_1326_);
lean_inc(v___y_1325_);
lean_inc_ref(v___y_1324_);
v___x_1329_ = lean_apply_7(v_k_1321_, v_b_1322_, v_c_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, lean_box(0));
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg___lam__0___boxed(lean_object* v_k_1330_, lean_object* v_b_1331_, lean_object* v_c_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg___lam__0(v_k_1330_, v_b_1331_, v_c_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg(lean_object* v_e_1339_, lean_object* v_k_1340_, uint8_t v_cleanupAnnotations_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
lean_object* v___f_1347_; uint8_t v___x_1348_; uint8_t v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___f_1347_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1347_, 0, v_k_1340_);
v___x_1348_ = 1;
v___x_1349_ = 0;
v___x_1350_ = lean_box(0);
v___x_1351_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1339_, v___x_1348_, v___x_1349_, v___x_1348_, v___x_1349_, v___x_1350_, v___f_1347_, v_cleanupAnnotations_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
v_a_1352_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1354_ = v___x_1351_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1351_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1357_; 
if (v_isShared_1355_ == 0)
{
v___x_1357_ = v___x_1354_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1352_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
else
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
v_a_1360_ = lean_ctor_get(v___x_1351_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1351_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1351_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1351_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg___boxed(lean_object* v_e_1368_, lean_object* v_k_1369_, lean_object* v_cleanupAnnotations_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1376_; lean_object* v_res_1377_; 
v_cleanupAnnotations_boxed_1376_ = lean_unbox(v_cleanupAnnotations_1370_);
v_res_1377_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg(v_e_1368_, v_k_1369_, v_cleanupAnnotations_boxed_1376_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9(lean_object* v_00_u03b1_1378_, lean_object* v_e_1379_, lean_object* v_k_1380_, uint8_t v_cleanupAnnotations_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v___x_1387_; 
v___x_1387_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg(v_e_1379_, v_k_1380_, v_cleanupAnnotations_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_);
return v___x_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___boxed(lean_object* v_00_u03b1_1388_, lean_object* v_e_1389_, lean_object* v_k_1390_, lean_object* v_cleanupAnnotations_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1397_; lean_object* v_res_1398_; 
v_cleanupAnnotations_boxed_1397_ = lean_unbox(v_cleanupAnnotations_1391_);
v_res_1398_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9(v_00_u03b1_1388_, v_e_1389_, v_k_1390_, v_cleanupAnnotations_boxed_1397_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2_spec__2(lean_object* v_o_1399_, lean_object* v_k_1400_, uint8_t v_v_1401_){
_start:
{
lean_object* v_map_1402_; uint8_t v_hasTrace_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1417_; 
v_map_1402_ = lean_ctor_get(v_o_1399_, 0);
v_hasTrace_1403_ = lean_ctor_get_uint8(v_o_1399_, sizeof(void*)*1);
v_isSharedCheck_1417_ = !lean_is_exclusive(v_o_1399_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1405_ = v_o_1399_;
v_isShared_1406_ = v_isSharedCheck_1417_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_map_1402_);
lean_dec(v_o_1399_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1417_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1407_, 0, v_v_1401_);
lean_inc(v_k_1400_);
v___x_1408_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1400_, v___x_1407_, v_map_1402_);
if (v_hasTrace_1403_ == 0)
{
lean_object* v___x_1409_; uint8_t v___x_1410_; lean_object* v___x_1412_; 
v___x_1409_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg___closed__1));
v___x_1410_ = l_Lean_Name_isPrefixOf(v___x_1409_, v_k_1400_);
lean_dec(v_k_1400_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v___x_1408_);
v___x_1412_ = v___x_1405_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1408_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_ctor_set_uint8(v___x_1412_, sizeof(void*)*1, v___x_1410_);
return v___x_1412_;
}
}
else
{
lean_object* v___x_1415_; 
lean_dec(v_k_1400_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v___x_1408_);
v___x_1415_ = v___x_1405_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v___x_1408_);
lean_ctor_set_uint8(v_reuseFailAlloc_1416_, sizeof(void*)*1, v_hasTrace_1403_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2_spec__2___boxed(lean_object* v_o_1418_, lean_object* v_k_1419_, lean_object* v_v_1420_){
_start:
{
uint8_t v_v_boxed_1421_; lean_object* v_res_1422_; 
v_v_boxed_1421_ = lean_unbox(v_v_1420_);
v_res_1422_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2_spec__2(v_o_1418_, v_k_1419_, v_v_boxed_1421_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(lean_object* v_opts_1423_, lean_object* v_opt_1424_, uint8_t v_val_1425_){
_start:
{
lean_object* v_name_1426_; lean_object* v___x_1427_; 
v_name_1426_ = lean_ctor_get(v_opt_1424_, 0);
lean_inc(v_name_1426_);
lean_dec_ref(v_opt_1424_);
v___x_1427_ = l_Lean_Options_set___at___00Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2_spec__2(v_opts_1423_, v_name_1426_, v_val_1425_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2___boxed(lean_object* v_opts_1428_, lean_object* v_opt_1429_, lean_object* v_val_1430_){
_start:
{
uint8_t v_val_boxed_1431_; lean_object* v_res_1432_; 
v_val_boxed_1431_ = lean_unbox(v_val_1430_);
v_res_1432_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v_opts_1428_, v_opt_1429_, v_val_boxed_1431_);
return v_res_1432_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__0(void){
_start:
{
lean_object* v___x_1433_; double v___x_1434_; 
v___x_1433_ = lean_unsigned_to_nat(0u);
v___x_1434_ = lean_float_of_nat(v___x_1433_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6(lean_object* v_cls_1438_, lean_object* v_msg_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v_ref_1445_; lean_object* v___x_1446_; lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1491_; 
v_ref_1445_ = lean_ctor_get(v___y_1442_, 5);
v___x_1446_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0_spec__0(v_msg_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_);
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1449_ = v___x_1446_;
v_isShared_1450_ = v_isSharedCheck_1491_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1446_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1491_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v_traceState_1452_; lean_object* v_env_1453_; lean_object* v_nextMacroScope_1454_; lean_object* v_ngen_1455_; lean_object* v_auxDeclNGen_1456_; lean_object* v_cache_1457_; lean_object* v_messages_1458_; lean_object* v_infoState_1459_; lean_object* v_snapshotTasks_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1490_; 
v___x_1451_ = lean_st_ref_take(v___y_1443_);
v_traceState_1452_ = lean_ctor_get(v___x_1451_, 4);
v_env_1453_ = lean_ctor_get(v___x_1451_, 0);
v_nextMacroScope_1454_ = lean_ctor_get(v___x_1451_, 1);
v_ngen_1455_ = lean_ctor_get(v___x_1451_, 2);
v_auxDeclNGen_1456_ = lean_ctor_get(v___x_1451_, 3);
v_cache_1457_ = lean_ctor_get(v___x_1451_, 5);
v_messages_1458_ = lean_ctor_get(v___x_1451_, 6);
v_infoState_1459_ = lean_ctor_get(v___x_1451_, 7);
v_snapshotTasks_1460_ = lean_ctor_get(v___x_1451_, 8);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1462_ = v___x_1451_;
v_isShared_1463_ = v_isSharedCheck_1490_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_snapshotTasks_1460_);
lean_inc(v_infoState_1459_);
lean_inc(v_messages_1458_);
lean_inc(v_cache_1457_);
lean_inc(v_traceState_1452_);
lean_inc(v_auxDeclNGen_1456_);
lean_inc(v_ngen_1455_);
lean_inc(v_nextMacroScope_1454_);
lean_inc(v_env_1453_);
lean_dec(v___x_1451_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1490_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
uint64_t v_tid_1464_; lean_object* v_traces_1465_; lean_object* v___x_1467_; uint8_t v_isShared_1468_; uint8_t v_isSharedCheck_1489_; 
v_tid_1464_ = lean_ctor_get_uint64(v_traceState_1452_, sizeof(void*)*1);
v_traces_1465_ = lean_ctor_get(v_traceState_1452_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v_traceState_1452_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1467_ = v_traceState_1452_;
v_isShared_1468_ = v_isSharedCheck_1489_;
goto v_resetjp_1466_;
}
else
{
lean_inc(v_traces_1465_);
lean_dec(v_traceState_1452_);
v___x_1467_ = lean_box(0);
v_isShared_1468_ = v_isSharedCheck_1489_;
goto v_resetjp_1466_;
}
v_resetjp_1466_:
{
lean_object* v___x_1469_; double v___x_1470_; uint8_t v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1479_; 
v___x_1469_ = lean_box(0);
v___x_1470_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__0);
v___x_1471_ = 0;
v___x_1472_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__1));
v___x_1473_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1473_, 0, v_cls_1438_);
lean_ctor_set(v___x_1473_, 1, v___x_1469_);
lean_ctor_set(v___x_1473_, 2, v___x_1472_);
lean_ctor_set_float(v___x_1473_, sizeof(void*)*3, v___x_1470_);
lean_ctor_set_float(v___x_1473_, sizeof(void*)*3 + 8, v___x_1470_);
lean_ctor_set_uint8(v___x_1473_, sizeof(void*)*3 + 16, v___x_1471_);
v___x_1474_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___closed__2));
v___x_1475_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1475_, 0, v___x_1473_);
lean_ctor_set(v___x_1475_, 1, v_a_1447_);
lean_ctor_set(v___x_1475_, 2, v___x_1474_);
lean_inc(v_ref_1445_);
v___x_1476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1476_, 0, v_ref_1445_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
v___x_1477_ = l_Lean_PersistentArray_push___redArg(v_traces_1465_, v___x_1476_);
if (v_isShared_1468_ == 0)
{
lean_ctor_set(v___x_1467_, 0, v___x_1477_);
v___x_1479_ = v___x_1467_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___x_1477_);
lean_ctor_set_uint64(v_reuseFailAlloc_1488_, sizeof(void*)*1, v_tid_1464_);
v___x_1479_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
lean_object* v___x_1481_; 
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 4, v___x_1479_);
v___x_1481_ = v___x_1462_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_env_1453_);
lean_ctor_set(v_reuseFailAlloc_1487_, 1, v_nextMacroScope_1454_);
lean_ctor_set(v_reuseFailAlloc_1487_, 2, v_ngen_1455_);
lean_ctor_set(v_reuseFailAlloc_1487_, 3, v_auxDeclNGen_1456_);
lean_ctor_set(v_reuseFailAlloc_1487_, 4, v___x_1479_);
lean_ctor_set(v_reuseFailAlloc_1487_, 5, v_cache_1457_);
lean_ctor_set(v_reuseFailAlloc_1487_, 6, v_messages_1458_);
lean_ctor_set(v_reuseFailAlloc_1487_, 7, v_infoState_1459_);
lean_ctor_set(v_reuseFailAlloc_1487_, 8, v_snapshotTasks_1460_);
v___x_1481_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1485_; 
v___x_1482_ = lean_st_ref_set(v___y_1443_, v___x_1481_);
v___x_1483_ = lean_box(0);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 0, v___x_1483_);
v___x_1485_ = v___x_1449_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6___boxed(lean_object* v_cls_1492_, lean_object* v_msg_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6(v_cls_1492_, v_msg_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
return v_res_1499_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__0));
v___x_1502_ = l_Lean_stringToMessageData(v___x_1501_);
return v___x_1502_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1504_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__2));
v___x_1505_ = l_Lean_stringToMessageData(v___x_1504_);
return v___x_1505_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__4));
v___x_1508_ = l_Lean_stringToMessageData(v___x_1507_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(lean_object* v_declName_1509_, lean_object* v_declNameNonRec_1510_, lean_object* v___x_1511_, lean_object* v___x_1512_, lean_object* v_a_1513_, lean_object* v_____r_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v___y_1521_; lean_object* v___y_1522_; lean_object* v___y_1523_; uint8_t v___y_1524_; lean_object* v___y_1525_; uint8_t v___y_1526_; lean_object* v___y_1527_; lean_object* v___y_1528_; lean_object* v___y_1529_; lean_object* v_fileName_1530_; lean_object* v_fileMap_1531_; lean_object* v_currRecDepth_1532_; lean_object* v_ref_1533_; lean_object* v_currNamespace_1534_; lean_object* v_openDecls_1535_; lean_object* v_initHeartbeats_1536_; lean_object* v_maxHeartbeats_1537_; lean_object* v_quotContext_1538_; lean_object* v_currMacroScope_1539_; lean_object* v_cancelTk_x3f_1540_; uint8_t v_suppressElabErrors_1541_; lean_object* v_inheritedTraceOptions_1542_; lean_object* v___y_1543_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1574_; uint8_t v___y_1575_; lean_object* v___y_1576_; uint8_t v___y_1577_; lean_object* v___y_1578_; lean_object* v___y_1579_; lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1597_; lean_object* v___y_1598_; lean_object* v___y_1599_; uint8_t v___y_1600_; lean_object* v___y_1601_; uint8_t v___y_1602_; lean_object* v___y_1603_; lean_object* v___y_1604_; lean_object* v___y_1605_; uint8_t v___y_1606_; lean_object* v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; uint8_t v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; uint8_t v___y_1634_; lean_object* v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; lean_object* v___y_1705_; lean_object* v___y_1706_; lean_object* v___x_1712_; 
v___x_1712_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_deltaLHSUntilFix(v_declName_1509_, v_declNameNonRec_1510_, v___x_1511_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1712_) == 0)
{
lean_object* v_a_1713_; lean_object* v___y_1715_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v___x_1750_; lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1770_; 
v_a_1713_ = lean_ctor_get(v___x_1712_, 0);
lean_inc(v_a_1713_);
lean_dec_ref(v___x_1712_);
lean_inc(v___x_1512_);
v___x_1750_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v___x_1512_, v___y_1517_);
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1753_ = v___x_1750_;
v_isShared_1754_ = v_isSharedCheck_1770_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1750_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1770_;
goto v_resetjp_1752_;
}
v___jp_1714_:
{
lean_object* v___x_1719_; 
v___x_1719_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixEq(v_a_1713_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
if (lean_obj_tag(v___x_1719_) == 0)
{
lean_object* v_a_1720_; lean_object* v___x_1721_; lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1741_; 
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_a_1720_);
lean_dec_ref(v___x_1719_);
lean_inc(v___x_1512_);
v___x_1721_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v___x_1512_, v___y_1717_);
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1721_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1724_ = v___x_1721_;
v_isShared_1725_ = v_isSharedCheck_1741_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1721_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1741_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
uint8_t v___x_1726_; 
v___x_1726_ = lean_unbox(v_a_1722_);
lean_dec(v_a_1722_);
if (v___x_1726_ == 0)
{
lean_del_object(v___x_1724_);
v___y_1702_ = v_a_1720_;
v___y_1703_ = v___y_1715_;
v___y_1704_ = v___y_1716_;
v___y_1705_ = v___y_1717_;
v___y_1706_ = v___y_1718_;
goto v___jp_1701_;
}
else
{
lean_object* v___x_1727_; lean_object* v___x_1729_; 
v___x_1727_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__3);
lean_inc(v_a_1720_);
if (v_isShared_1725_ == 0)
{
lean_ctor_set_tag(v___x_1724_, 1);
lean_ctor_set(v___x_1724_, 0, v_a_1720_);
v___x_1729_ = v___x_1724_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_a_1720_);
v___x_1729_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1730_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1727_);
lean_ctor_set(v___x_1730_, 1, v___x_1729_);
lean_inc(v___x_1512_);
v___x_1731_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6(v___x_1512_, v___x_1730_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_dec_ref(v___x_1731_);
v___y_1702_ = v_a_1720_;
v___y_1703_ = v___y_1715_;
v___y_1704_ = v___y_1716_;
v___y_1705_ = v___y_1717_;
v___y_1706_ = v___y_1718_;
goto v___jp_1701_;
}
else
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
lean_dec(v_a_1720_);
lean_dec_ref(v_a_1513_);
lean_dec(v___x_1512_);
v_a_1732_ = lean_ctor_get(v___x_1731_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1734_ = v___x_1731_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1731_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1732_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1749_; 
lean_dec_ref(v_a_1513_);
lean_dec(v___x_1512_);
v_a_1742_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1744_ = v___x_1719_;
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_a_1742_);
lean_dec(v___x_1719_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1749_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1747_; 
if (v_isShared_1745_ == 0)
{
v___x_1747_ = v___x_1744_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
}
}
v_resetjp_1752_:
{
uint8_t v___x_1755_; 
v___x_1755_ = lean_unbox(v_a_1751_);
lean_dec(v_a_1751_);
if (v___x_1755_ == 0)
{
lean_del_object(v___x_1753_);
v___y_1715_ = v___y_1515_;
v___y_1716_ = v___y_1516_;
v___y_1717_ = v___y_1517_;
v___y_1718_ = v___y_1518_;
goto v___jp_1714_;
}
else
{
lean_object* v___x_1756_; lean_object* v___x_1758_; 
v___x_1756_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__5);
lean_inc(v_a_1713_);
if (v_isShared_1754_ == 0)
{
lean_ctor_set_tag(v___x_1753_, 1);
lean_ctor_set(v___x_1753_, 0, v_a_1713_);
v___x_1758_ = v___x_1753_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1713_);
v___x_1758_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1756_);
lean_ctor_set(v___x_1759_, 1, v___x_1758_);
lean_inc(v___x_1512_);
v___x_1760_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6(v___x_1512_, v___x_1759_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_dec_ref(v___x_1760_);
v___y_1715_ = v___y_1515_;
v___y_1716_ = v___y_1516_;
v___y_1717_ = v___y_1517_;
v___y_1718_ = v___y_1518_;
goto v___jp_1714_;
}
else
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1768_; 
lean_dec(v_a_1713_);
lean_dec_ref(v_a_1513_);
lean_dec(v___x_1512_);
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1763_ = v___x_1760_;
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1760_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec_ref(v_a_1513_);
lean_dec(v___x_1512_);
v_a_1771_ = lean_ctor_get(v___x_1712_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1712_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1712_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1712_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
v___jp_1520_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1544_ = l_Lean_maxRecDepth;
v___x_1545_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(v___y_1521_, v___x_1544_);
lean_inc_ref(v_inheritedTraceOptions_1542_);
lean_inc(v_cancelTk_x3f_1540_);
lean_inc(v_currMacroScope_1539_);
lean_inc(v_quotContext_1538_);
lean_inc(v_maxHeartbeats_1537_);
lean_inc(v_initHeartbeats_1536_);
lean_inc(v_openDecls_1535_);
lean_inc(v_currNamespace_1534_);
lean_inc(v_ref_1533_);
lean_inc(v_currRecDepth_1532_);
lean_inc_ref(v_fileMap_1531_);
lean_inc_ref(v_fileName_1530_);
v___x_1546_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1546_, 0, v_fileName_1530_);
lean_ctor_set(v___x_1546_, 1, v_fileMap_1531_);
lean_ctor_set(v___x_1546_, 2, v___y_1521_);
lean_ctor_set(v___x_1546_, 3, v_currRecDepth_1532_);
lean_ctor_set(v___x_1546_, 4, v___x_1545_);
lean_ctor_set(v___x_1546_, 5, v_ref_1533_);
lean_ctor_set(v___x_1546_, 6, v_currNamespace_1534_);
lean_ctor_set(v___x_1546_, 7, v_openDecls_1535_);
lean_ctor_set(v___x_1546_, 8, v_initHeartbeats_1536_);
lean_ctor_set(v___x_1546_, 9, v_maxHeartbeats_1537_);
lean_ctor_set(v___x_1546_, 10, v_quotContext_1538_);
lean_ctor_set(v___x_1546_, 11, v_currMacroScope_1539_);
lean_ctor_set(v___x_1546_, 12, v_cancelTk_x3f_1540_);
lean_ctor_set(v___x_1546_, 13, v_inheritedTraceOptions_1542_);
lean_ctor_set_uint8(v___x_1546_, sizeof(void*)*14, v___y_1524_);
lean_ctor_set_uint8(v___x_1546_, sizeof(void*)*14 + 1, v_suppressElabErrors_1541_);
v___x_1547_ = l_Lean_MVarId_refl(v___y_1525_, v___y_1526_, v___y_1527_, v___y_1523_, v___x_1546_, v___y_1543_);
lean_dec_ref(v___x_1546_);
lean_dec_ref(v___y_1527_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v___x_1548_; lean_object* v_a_1549_; uint8_t v___x_1550_; 
lean_dec_ref(v___x_1547_);
lean_inc(v___x_1512_);
v___x_1548_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v___x_1512_, v___y_1528_);
v_a_1549_ = lean_ctor_get(v___x_1548_, 0);
lean_inc(v_a_1549_);
lean_dec_ref(v___x_1548_);
v___x_1550_ = lean_unbox(v_a_1549_);
lean_dec(v_a_1549_);
if (v___x_1550_ == 0)
{
lean_object* v___x_1551_; 
lean_dec(v___x_1512_);
v___x_1551_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___redArg(v_a_1513_, v___y_1523_);
return v___x_1551_;
}
else
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1552_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___closed__1);
v___x_1553_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6(v___x_1512_, v___x_1552_, v___y_1522_, v___y_1523_, v___y_1528_, v___y_1529_);
if (lean_obj_tag(v___x_1553_) == 0)
{
lean_object* v___x_1554_; 
lean_dec_ref(v___x_1553_);
v___x_1554_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__5___redArg(v_a_1513_, v___y_1523_);
return v___x_1554_;
}
else
{
lean_object* v_a_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1562_; 
lean_dec_ref(v_a_1513_);
v_a_1555_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1562_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1562_ == 0)
{
v___x_1557_ = v___x_1553_;
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_a_1555_);
lean_dec(v___x_1553_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1562_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1561_; 
v_reuseFailAlloc_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1561_, 0, v_a_1555_);
v___x_1560_ = v_reuseFailAlloc_1561_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
return v___x_1560_;
}
}
}
}
}
else
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
lean_dec_ref(v_a_1513_);
lean_dec(v___x_1512_);
v_a_1563_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1547_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1547_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_a_1563_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
}
v___jp_1571_:
{
lean_object* v_fileName_1583_; lean_object* v_fileMap_1584_; lean_object* v_currRecDepth_1585_; lean_object* v_ref_1586_; lean_object* v_currNamespace_1587_; lean_object* v_openDecls_1588_; lean_object* v_initHeartbeats_1589_; lean_object* v_maxHeartbeats_1590_; lean_object* v_quotContext_1591_; lean_object* v_currMacroScope_1592_; lean_object* v_cancelTk_x3f_1593_; uint8_t v_suppressElabErrors_1594_; lean_object* v_inheritedTraceOptions_1595_; 
v_fileName_1583_ = lean_ctor_get(v___y_1581_, 0);
v_fileMap_1584_ = lean_ctor_get(v___y_1581_, 1);
v_currRecDepth_1585_ = lean_ctor_get(v___y_1581_, 3);
v_ref_1586_ = lean_ctor_get(v___y_1581_, 5);
v_currNamespace_1587_ = lean_ctor_get(v___y_1581_, 6);
v_openDecls_1588_ = lean_ctor_get(v___y_1581_, 7);
v_initHeartbeats_1589_ = lean_ctor_get(v___y_1581_, 8);
v_maxHeartbeats_1590_ = lean_ctor_get(v___y_1581_, 9);
v_quotContext_1591_ = lean_ctor_get(v___y_1581_, 10);
v_currMacroScope_1592_ = lean_ctor_get(v___y_1581_, 11);
v_cancelTk_x3f_1593_ = lean_ctor_get(v___y_1581_, 12);
v_suppressElabErrors_1594_ = lean_ctor_get_uint8(v___y_1581_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1595_ = lean_ctor_get(v___y_1581_, 13);
v___y_1521_ = v___y_1572_;
v___y_1522_ = v___y_1573_;
v___y_1523_ = v___y_1574_;
v___y_1524_ = v___y_1575_;
v___y_1525_ = v___y_1576_;
v___y_1526_ = v___y_1577_;
v___y_1527_ = v___y_1578_;
v___y_1528_ = v___y_1579_;
v___y_1529_ = v___y_1580_;
v_fileName_1530_ = v_fileName_1583_;
v_fileMap_1531_ = v_fileMap_1584_;
v_currRecDepth_1532_ = v_currRecDepth_1585_;
v_ref_1533_ = v_ref_1586_;
v_currNamespace_1534_ = v_currNamespace_1587_;
v_openDecls_1535_ = v_openDecls_1588_;
v_initHeartbeats_1536_ = v_initHeartbeats_1589_;
v_maxHeartbeats_1537_ = v_maxHeartbeats_1590_;
v_quotContext_1538_ = v_quotContext_1591_;
v_currMacroScope_1539_ = v_currMacroScope_1592_;
v_cancelTk_x3f_1540_ = v_cancelTk_x3f_1593_;
v_suppressElabErrors_1541_ = v_suppressElabErrors_1594_;
v_inheritedTraceOptions_1542_ = v_inheritedTraceOptions_1595_;
v___y_1543_ = v___y_1582_;
goto v___jp_1520_;
}
v___jp_1596_:
{
if (v___y_1606_ == 0)
{
lean_object* v___x_1607_; lean_object* v_env_1608_; lean_object* v_nextMacroScope_1609_; lean_object* v_ngen_1610_; lean_object* v_auxDeclNGen_1611_; lean_object* v_traceState_1612_; lean_object* v_messages_1613_; lean_object* v_infoState_1614_; lean_object* v_snapshotTasks_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1625_; 
v___x_1607_ = lean_st_ref_take(v___y_1605_);
v_env_1608_ = lean_ctor_get(v___x_1607_, 0);
v_nextMacroScope_1609_ = lean_ctor_get(v___x_1607_, 1);
v_ngen_1610_ = lean_ctor_get(v___x_1607_, 2);
v_auxDeclNGen_1611_ = lean_ctor_get(v___x_1607_, 3);
v_traceState_1612_ = lean_ctor_get(v___x_1607_, 4);
v_messages_1613_ = lean_ctor_get(v___x_1607_, 6);
v_infoState_1614_ = lean_ctor_get(v___x_1607_, 7);
v_snapshotTasks_1615_ = lean_ctor_get(v___x_1607_, 8);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1625_ == 0)
{
lean_object* v_unused_1626_; 
v_unused_1626_ = lean_ctor_get(v___x_1607_, 5);
lean_dec(v_unused_1626_);
v___x_1617_ = v___x_1607_;
v_isShared_1618_ = v_isSharedCheck_1625_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_snapshotTasks_1615_);
lean_inc(v_infoState_1614_);
lean_inc(v_messages_1613_);
lean_inc(v_traceState_1612_);
lean_inc(v_auxDeclNGen_1611_);
lean_inc(v_ngen_1610_);
lean_inc(v_nextMacroScope_1609_);
lean_inc(v_env_1608_);
lean_dec(v___x_1607_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1625_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1622_; 
v___x_1619_ = l_Lean_Kernel_enableDiag(v_env_1608_, v___y_1600_);
v___x_1620_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2);
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 5, v___x_1620_);
lean_ctor_set(v___x_1617_, 0, v___x_1619_);
v___x_1622_ = v___x_1617_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v___x_1619_);
lean_ctor_set(v_reuseFailAlloc_1624_, 1, v_nextMacroScope_1609_);
lean_ctor_set(v_reuseFailAlloc_1624_, 2, v_ngen_1610_);
lean_ctor_set(v_reuseFailAlloc_1624_, 3, v_auxDeclNGen_1611_);
lean_ctor_set(v_reuseFailAlloc_1624_, 4, v_traceState_1612_);
lean_ctor_set(v_reuseFailAlloc_1624_, 5, v___x_1620_);
lean_ctor_set(v_reuseFailAlloc_1624_, 6, v_messages_1613_);
lean_ctor_set(v_reuseFailAlloc_1624_, 7, v_infoState_1614_);
lean_ctor_set(v_reuseFailAlloc_1624_, 8, v_snapshotTasks_1615_);
v___x_1622_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
lean_object* v___x_1623_; 
v___x_1623_ = lean_st_ref_set(v___y_1605_, v___x_1622_);
v___y_1572_ = v___y_1597_;
v___y_1573_ = v___y_1599_;
v___y_1574_ = v___y_1598_;
v___y_1575_ = v___y_1600_;
v___y_1576_ = v___y_1601_;
v___y_1577_ = v___y_1602_;
v___y_1578_ = v___y_1603_;
v___y_1579_ = v___y_1604_;
v___y_1580_ = v___y_1605_;
v___y_1581_ = v___y_1604_;
v___y_1582_ = v___y_1605_;
goto v___jp_1571_;
}
}
}
else
{
v___y_1572_ = v___y_1597_;
v___y_1573_ = v___y_1599_;
v___y_1574_ = v___y_1598_;
v___y_1575_ = v___y_1600_;
v___y_1576_ = v___y_1601_;
v___y_1577_ = v___y_1602_;
v___y_1578_ = v___y_1603_;
v___y_1579_ = v___y_1604_;
v___y_1580_ = v___y_1605_;
v___y_1581_ = v___y_1604_;
v___y_1582_ = v___y_1605_;
goto v___jp_1571_;
}
}
v___jp_1627_:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; uint8_t v_foApprox_1637_; uint8_t v_ctxApprox_1638_; uint8_t v_quasiPatternApprox_1639_; uint8_t v_constApprox_1640_; uint8_t v_isDefEqStuckEx_1641_; uint8_t v_unificationHints_1642_; uint8_t v_proofIrrelevance_1643_; uint8_t v_assignSyntheticOpaque_1644_; uint8_t v_offsetCnstrs_1645_; uint8_t v_etaStruct_1646_; uint8_t v_univApprox_1647_; uint8_t v_iota_1648_; uint8_t v_beta_1649_; uint8_t v_proj_1650_; uint8_t v_zeta_1651_; uint8_t v_zetaDelta_1652_; uint8_t v_zetaUnused_1653_; uint8_t v_zetaHave_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1700_; 
v___x_1635_ = lean_st_ref_get(v___y_1633_);
v___x_1636_ = l_Lean_Meta_Context_config(v___y_1629_);
v_foApprox_1637_ = lean_ctor_get_uint8(v___x_1636_, 0);
v_ctxApprox_1638_ = lean_ctor_get_uint8(v___x_1636_, 1);
v_quasiPatternApprox_1639_ = lean_ctor_get_uint8(v___x_1636_, 2);
v_constApprox_1640_ = lean_ctor_get_uint8(v___x_1636_, 3);
v_isDefEqStuckEx_1641_ = lean_ctor_get_uint8(v___x_1636_, 4);
v_unificationHints_1642_ = lean_ctor_get_uint8(v___x_1636_, 5);
v_proofIrrelevance_1643_ = lean_ctor_get_uint8(v___x_1636_, 6);
v_assignSyntheticOpaque_1644_ = lean_ctor_get_uint8(v___x_1636_, 7);
v_offsetCnstrs_1645_ = lean_ctor_get_uint8(v___x_1636_, 8);
v_etaStruct_1646_ = lean_ctor_get_uint8(v___x_1636_, 10);
v_univApprox_1647_ = lean_ctor_get_uint8(v___x_1636_, 11);
v_iota_1648_ = lean_ctor_get_uint8(v___x_1636_, 12);
v_beta_1649_ = lean_ctor_get_uint8(v___x_1636_, 13);
v_proj_1650_ = lean_ctor_get_uint8(v___x_1636_, 14);
v_zeta_1651_ = lean_ctor_get_uint8(v___x_1636_, 15);
v_zetaDelta_1652_ = lean_ctor_get_uint8(v___x_1636_, 16);
v_zetaUnused_1653_ = lean_ctor_get_uint8(v___x_1636_, 17);
v_zetaHave_1654_ = lean_ctor_get_uint8(v___x_1636_, 18);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1656_ = v___x_1636_;
v_isShared_1657_ = v_isSharedCheck_1700_;
goto v_resetjp_1655_;
}
else
{
lean_dec(v___x_1636_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1700_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
uint8_t v_trackZetaDelta_1658_; lean_object* v_zetaDeltaSet_1659_; lean_object* v_lctx_1660_; lean_object* v_localInstances_1661_; lean_object* v_defEqCtx_x3f_1662_; lean_object* v_synthPendingDepth_1663_; lean_object* v_canUnfold_x3f_1664_; uint8_t v_univApprox_1665_; uint8_t v_inTypeClassResolution_1666_; uint8_t v_cacheInferType_1667_; lean_object* v_fileName_1668_; lean_object* v_fileMap_1669_; lean_object* v_options_1670_; lean_object* v_currRecDepth_1671_; lean_object* v_ref_1672_; lean_object* v_currNamespace_1673_; lean_object* v_openDecls_1674_; lean_object* v_initHeartbeats_1675_; lean_object* v_maxHeartbeats_1676_; lean_object* v_quotContext_1677_; lean_object* v_currMacroScope_1678_; lean_object* v_cancelTk_x3f_1679_; uint8_t v_suppressElabErrors_1680_; lean_object* v_inheritedTraceOptions_1681_; lean_object* v_env_1682_; lean_object* v_config_1684_; 
v_trackZetaDelta_1658_ = lean_ctor_get_uint8(v___y_1629_, sizeof(void*)*7);
v_zetaDeltaSet_1659_ = lean_ctor_get(v___y_1629_, 1);
v_lctx_1660_ = lean_ctor_get(v___y_1629_, 2);
v_localInstances_1661_ = lean_ctor_get(v___y_1629_, 3);
v_defEqCtx_x3f_1662_ = lean_ctor_get(v___y_1629_, 4);
v_synthPendingDepth_1663_ = lean_ctor_get(v___y_1629_, 5);
v_canUnfold_x3f_1664_ = lean_ctor_get(v___y_1629_, 6);
v_univApprox_1665_ = lean_ctor_get_uint8(v___y_1629_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1666_ = lean_ctor_get_uint8(v___y_1629_, sizeof(void*)*7 + 2);
v_cacheInferType_1667_ = lean_ctor_get_uint8(v___y_1629_, sizeof(void*)*7 + 3);
v_fileName_1668_ = lean_ctor_get(v___y_1632_, 0);
v_fileMap_1669_ = lean_ctor_get(v___y_1632_, 1);
v_options_1670_ = lean_ctor_get(v___y_1632_, 2);
v_currRecDepth_1671_ = lean_ctor_get(v___y_1632_, 3);
v_ref_1672_ = lean_ctor_get(v___y_1632_, 5);
v_currNamespace_1673_ = lean_ctor_get(v___y_1632_, 6);
v_openDecls_1674_ = lean_ctor_get(v___y_1632_, 7);
v_initHeartbeats_1675_ = lean_ctor_get(v___y_1632_, 8);
v_maxHeartbeats_1676_ = lean_ctor_get(v___y_1632_, 9);
v_quotContext_1677_ = lean_ctor_get(v___y_1632_, 10);
v_currMacroScope_1678_ = lean_ctor_get(v___y_1632_, 11);
v_cancelTk_x3f_1679_ = lean_ctor_get(v___y_1632_, 12);
v_suppressElabErrors_1680_ = lean_ctor_get_uint8(v___y_1632_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1681_ = lean_ctor_get(v___y_1632_, 13);
v_env_1682_ = lean_ctor_get(v___x_1635_, 0);
lean_inc_ref(v_env_1682_);
lean_dec(v___x_1635_);
if (v_isShared_1657_ == 0)
{
v_config_1684_ = v___x_1656_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 0, v_foApprox_1637_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 1, v_ctxApprox_1638_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 2, v_quasiPatternApprox_1639_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 3, v_constApprox_1640_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 4, v_isDefEqStuckEx_1641_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 5, v_unificationHints_1642_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 6, v_proofIrrelevance_1643_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 7, v_assignSyntheticOpaque_1644_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 8, v_offsetCnstrs_1645_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 10, v_etaStruct_1646_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 11, v_univApprox_1647_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 12, v_iota_1648_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 13, v_beta_1649_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 14, v_proj_1650_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 15, v_zeta_1651_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 16, v_zetaDelta_1652_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 17, v_zetaUnused_1653_);
lean_ctor_set_uint8(v_reuseFailAlloc_1699_, 18, v_zetaHave_1654_);
v_config_1684_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
uint64_t v___x_1685_; uint64_t v___x_1686_; uint64_t v___x_1687_; uint64_t v___x_1688_; uint64_t v___x_1689_; uint64_t v_key_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; uint8_t v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; uint8_t v___x_1697_; uint8_t v___x_1698_; 
lean_ctor_set_uint8(v_config_1684_, 9, v___y_1634_);
v___x_1685_ = l_Lean_Meta_Context_configKey(v___y_1629_);
v___x_1686_ = 2ULL;
v___x_1687_ = lean_uint64_shift_right(v___x_1685_, v___x_1686_);
v___x_1688_ = lean_uint64_shift_left(v___x_1687_, v___x_1686_);
v___x_1689_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_1634_);
v_key_1690_ = lean_uint64_lor(v___x_1688_, v___x_1689_);
v___x_1691_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1691_, 0, v_config_1684_);
lean_ctor_set_uint64(v___x_1691_, sizeof(void*)*1, v_key_1690_);
lean_inc(v_canUnfold_x3f_1664_);
lean_inc(v_synthPendingDepth_1663_);
lean_inc(v_defEqCtx_x3f_1662_);
lean_inc_ref(v_localInstances_1661_);
lean_inc_ref(v_lctx_1660_);
lean_inc(v_zetaDeltaSet_1659_);
v___x_1692_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1692_, 0, v___x_1691_);
lean_ctor_set(v___x_1692_, 1, v_zetaDeltaSet_1659_);
lean_ctor_set(v___x_1692_, 2, v_lctx_1660_);
lean_ctor_set(v___x_1692_, 3, v_localInstances_1661_);
lean_ctor_set(v___x_1692_, 4, v_defEqCtx_x3f_1662_);
lean_ctor_set(v___x_1692_, 5, v_synthPendingDepth_1663_);
lean_ctor_set(v___x_1692_, 6, v_canUnfold_x3f_1664_);
lean_ctor_set_uint8(v___x_1692_, sizeof(void*)*7, v_trackZetaDelta_1658_);
lean_ctor_set_uint8(v___x_1692_, sizeof(void*)*7 + 1, v_univApprox_1665_);
lean_ctor_set_uint8(v___x_1692_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1666_);
lean_ctor_set_uint8(v___x_1692_, sizeof(void*)*7 + 3, v_cacheInferType_1667_);
v___x_1693_ = l_Lean_Meta_smartUnfolding;
v___x_1694_ = 0;
lean_inc_ref(v_options_1670_);
v___x_1695_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v_options_1670_, v___x_1693_, v___x_1694_);
v___x_1696_ = l_Lean_diagnostics;
v___x_1697_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(v___x_1695_, v___x_1696_);
v___x_1698_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_1682_);
lean_dec_ref(v_env_1682_);
if (v___x_1698_ == 0)
{
if (v___x_1697_ == 0)
{
v___y_1521_ = v___x_1695_;
v___y_1522_ = v___y_1629_;
v___y_1523_ = v___y_1628_;
v___y_1524_ = v___x_1697_;
v___y_1525_ = v___y_1630_;
v___y_1526_ = v___y_1631_;
v___y_1527_ = v___x_1692_;
v___y_1528_ = v___y_1632_;
v___y_1529_ = v___y_1633_;
v_fileName_1530_ = v_fileName_1668_;
v_fileMap_1531_ = v_fileMap_1669_;
v_currRecDepth_1532_ = v_currRecDepth_1671_;
v_ref_1533_ = v_ref_1672_;
v_currNamespace_1534_ = v_currNamespace_1673_;
v_openDecls_1535_ = v_openDecls_1674_;
v_initHeartbeats_1536_ = v_initHeartbeats_1675_;
v_maxHeartbeats_1537_ = v_maxHeartbeats_1676_;
v_quotContext_1538_ = v_quotContext_1677_;
v_currMacroScope_1539_ = v_currMacroScope_1678_;
v_cancelTk_x3f_1540_ = v_cancelTk_x3f_1679_;
v_suppressElabErrors_1541_ = v_suppressElabErrors_1680_;
v_inheritedTraceOptions_1542_ = v_inheritedTraceOptions_1681_;
v___y_1543_ = v___y_1633_;
goto v___jp_1520_;
}
else
{
v___y_1597_ = v___x_1695_;
v___y_1598_ = v___y_1628_;
v___y_1599_ = v___y_1629_;
v___y_1600_ = v___x_1697_;
v___y_1601_ = v___y_1630_;
v___y_1602_ = v___y_1631_;
v___y_1603_ = v___x_1692_;
v___y_1604_ = v___y_1632_;
v___y_1605_ = v___y_1633_;
v___y_1606_ = v___x_1698_;
goto v___jp_1596_;
}
}
else
{
v___y_1597_ = v___x_1695_;
v___y_1598_ = v___y_1628_;
v___y_1599_ = v___y_1629_;
v___y_1600_ = v___x_1697_;
v___y_1601_ = v___y_1630_;
v___y_1602_ = v___y_1631_;
v___y_1603_ = v___x_1692_;
v___y_1604_ = v___y_1632_;
v___y_1605_ = v___y_1633_;
v___y_1606_ = v___x_1697_;
goto v___jp_1596_;
}
}
}
}
v___jp_1701_:
{
lean_object* v___x_1707_; uint8_t v_transparency_1708_; uint8_t v___x_1709_; uint8_t v___x_1710_; uint8_t v___x_1711_; 
v___x_1707_ = l_Lean_Meta_Context_config(v___y_1703_);
v_transparency_1708_ = lean_ctor_get_uint8(v___x_1707_, 9);
lean_dec_ref(v___x_1707_);
v___x_1709_ = 0;
v___x_1710_ = 1;
v___x_1711_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_1708_, v___x_1709_);
if (v___x_1711_ == 0)
{
v___y_1628_ = v___y_1704_;
v___y_1629_ = v___y_1703_;
v___y_1630_ = v___y_1702_;
v___y_1631_ = v___x_1710_;
v___y_1632_ = v___y_1705_;
v___y_1633_ = v___y_1706_;
v___y_1634_ = v_transparency_1708_;
goto v___jp_1627_;
}
else
{
v___y_1628_ = v___y_1704_;
v___y_1629_ = v___y_1703_;
v___y_1630_ = v___y_1702_;
v___y_1631_ = v___x_1710_;
v___y_1632_ = v___y_1705_;
v___y_1633_ = v___y_1706_;
v___y_1634_ = v___x_1709_;
goto v___jp_1627_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0___boxed(lean_object* v_declName_1779_, lean_object* v_declNameNonRec_1780_, lean_object* v___x_1781_, lean_object* v___x_1782_, lean_object* v_a_1783_, lean_object* v_____r_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(v_declName_1779_, v_declNameNonRec_1780_, v___x_1781_, v___x_1782_, v_a_1783_, v_____r_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
return v_res_1790_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__0));
v___x_1793_ = l_Lean_stringToMessageData(v___x_1792_);
return v___x_1793_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__2));
v___x_1796_ = l_Lean_stringToMessageData(v___x_1795_);
return v___x_1796_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__8(void){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__7));
v___x_1805_ = l_Lean_stringToMessageData(v___x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(lean_object* v_declName_1806_, lean_object* v_a_1807_, lean_object* v___x_1808_, lean_object* v_declNameNonRec_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
lean_object* v___y_1816_; lean_object* v___y_1817_; uint8_t v___y_1818_; lean_object* v___y_1828_; lean_object* v_a_1829_; lean_object* v___y_1833_; lean_object* v___x_1835_; 
v___x_1835_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1807_, v___x_1808_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v_a_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1863_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref(v___x_1835_);
v___x_1837_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__6));
v___x_1838_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__1___redArg(v___x_1837_, v___y_1812_);
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1841_ = v___x_1838_;
v_isShared_1842_ = v_isSharedCheck_1863_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_a_1839_);
lean_dec(v___x_1838_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1863_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1843_; uint8_t v___x_1844_; 
v___x_1843_ = l_Lean_Expr_mvarId_x21(v_a_1836_);
v___x_1844_ = lean_unbox(v_a_1839_);
lean_dec(v_a_1839_);
if (v___x_1844_ == 0)
{
lean_object* v___x_1845_; lean_object* v___x_1846_; 
lean_del_object(v___x_1841_);
v___x_1845_ = lean_box(0);
lean_inc(v_declName_1806_);
v___x_1846_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(v_declName_1806_, v_declNameNonRec_1809_, v___x_1843_, v___x_1837_, v_a_1836_, v___x_1845_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
v___y_1833_ = v___x_1846_;
goto v___jp_1832_;
}
else
{
lean_object* v___x_1847_; lean_object* v___x_1849_; 
v___x_1847_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__8, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__8);
lean_inc(v___x_1843_);
if (v_isShared_1842_ == 0)
{
lean_ctor_set_tag(v___x_1841_, 1);
lean_ctor_set(v___x_1841_, 0, v___x_1843_);
v___x_1849_ = v___x_1841_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1843_);
v___x_1849_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1847_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
v___x_1851_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__6(v___x_1837_, v___x_1850_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_object* v_a_1852_; lean_object* v___x_1853_; 
v_a_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_a_1852_);
lean_dec_ref(v___x_1851_);
lean_inc(v_declName_1806_);
v___x_1853_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__0(v_declName_1806_, v_declNameNonRec_1809_, v___x_1843_, v___x_1837_, v_a_1836_, v_a_1852_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
v___y_1833_ = v___x_1853_;
goto v___jp_1832_;
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
lean_dec(v___x_1843_);
lean_dec(v_a_1836_);
lean_dec(v_declNameNonRec_1809_);
v_a_1854_ = lean_ctor_get(v___x_1851_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1851_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1851_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1851_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
lean_inc(v_a_1854_);
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
v___y_1828_ = v___x_1859_;
v_a_1829_ = v_a_1854_;
goto v___jp_1827_;
}
}
}
}
}
}
}
else
{
lean_dec(v_declNameNonRec_1809_);
v___y_1833_ = v___x_1835_;
goto v___jp_1832_;
}
v___jp_1815_:
{
if (v___y_1818_ == 0)
{
lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
lean_dec_ref(v___y_1817_);
v___x_1819_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__1);
v___x_1820_ = l_Lean_MessageData_ofConstName(v_declName_1806_, v___y_1818_);
v___x_1821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1819_);
lean_ctor_set(v___x_1821_, 1, v___x_1820_);
v___x_1822_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___closed__3);
v___x_1823_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1821_);
lean_ctor_set(v___x_1823_, 1, v___x_1822_);
v___x_1824_ = l_Lean_Exception_toMessageData(v___y_1816_);
v___x_1825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1823_);
lean_ctor_set(v___x_1825_, 1, v___x_1824_);
v___x_1826_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_rwFixUnder_spec__0___redArg(v___x_1825_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_);
return v___x_1826_;
}
else
{
lean_dec_ref(v___y_1816_);
lean_dec(v_declName_1806_);
return v___y_1817_;
}
}
v___jp_1827_:
{
uint8_t v___x_1830_; 
v___x_1830_ = l_Lean_Exception_isInterrupt(v_a_1829_);
if (v___x_1830_ == 0)
{
uint8_t v___x_1831_; 
lean_inc_ref(v_a_1829_);
v___x_1831_ = l_Lean_Exception_isRuntime(v_a_1829_);
v___y_1816_ = v_a_1829_;
v___y_1817_ = v___y_1828_;
v___y_1818_ = v___x_1831_;
goto v___jp_1815_;
}
else
{
v___y_1816_ = v_a_1829_;
v___y_1817_ = v___y_1828_;
v___y_1818_ = v___x_1830_;
goto v___jp_1815_;
}
}
v___jp_1832_:
{
if (lean_obj_tag(v___y_1833_) == 0)
{
lean_dec(v_declName_1806_);
return v___y_1833_;
}
else
{
lean_object* v_a_1834_; 
v_a_1834_ = lean_ctor_get(v___y_1833_, 0);
lean_inc(v_a_1834_);
v___y_1828_ = v___y_1833_;
v_a_1829_ = v_a_1834_;
goto v___jp_1827_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___boxed(lean_object* v_declName_1864_, lean_object* v_a_1865_, lean_object* v___x_1866_, lean_object* v_declNameNonRec_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1(v_declName_1864_, v_a_1865_, v___x_1866_, v_declNameNonRec_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0(lean_object* v_a_1874_, lean_object* v_a_1875_){
_start:
{
if (lean_obj_tag(v_a_1874_) == 0)
{
lean_object* v___x_1876_; 
v___x_1876_ = l_List_reverse___redArg(v_a_1875_);
return v___x_1876_;
}
else
{
lean_object* v_head_1877_; lean_object* v_tail_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1887_; 
v_head_1877_ = lean_ctor_get(v_a_1874_, 0);
v_tail_1878_ = lean_ctor_get(v_a_1874_, 1);
v_isSharedCheck_1887_ = !lean_is_exclusive(v_a_1874_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1880_ = v_a_1874_;
v_isShared_1881_ = v_isSharedCheck_1887_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_tail_1878_);
lean_inc(v_head_1877_);
lean_dec(v_a_1874_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1887_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1882_; lean_object* v___x_1884_; 
v___x_1882_ = l_Lean_mkLevelParam(v_head_1877_);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 1, v_a_1875_);
lean_ctor_set(v___x_1880_, 0, v___x_1882_);
v___x_1884_ = v___x_1880_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v___x_1882_);
lean_ctor_set(v_reuseFailAlloc_1886_, 1, v_a_1875_);
v___x_1884_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
v_a_1874_ = v_tail_1878_;
v_a_1875_ = v___x_1884_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(lean_object* v_levelParams_1888_, lean_object* v_declName_1889_, lean_object* v_declNameNonRec_1890_, lean_object* v_name_1891_, lean_object* v_xs_1892_, lean_object* v_body_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v___x_1899_; lean_object* v_us_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1899_ = lean_box(0);
lean_inc(v_levelParams_1888_);
v_us_1900_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__0(v_levelParams_1888_, v___x_1899_);
lean_inc(v_declName_1889_);
v___x_1901_ = l_Lean_mkConst(v_declName_1889_, v_us_1900_);
v___x_1902_ = l_Lean_mkAppN(v___x_1901_, v_xs_1892_);
v___x_1903_ = l_Lean_Meta_mkEq(v___x_1902_, v_body_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1903_) == 0)
{
lean_object* v_a_1904_; lean_object* v___x_1905_; lean_object* v___f_1906_; uint8_t v___x_1907_; lean_object* v___x_1908_; 
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
lean_inc(v_a_1904_);
lean_dec_ref(v___x_1903_);
v___x_1905_ = lean_box(0);
lean_inc(v_a_1904_);
v___f_1906_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__1___boxed), 9, 4);
lean_closure_set(v___f_1906_, 0, v_declName_1889_);
lean_closure_set(v___f_1906_, 1, v_a_1904_);
lean_closure_set(v___f_1906_, 2, v___x_1905_);
lean_closure_set(v___f_1906_, 3, v_declNameNonRec_1890_);
v___x_1907_ = 0;
v___x_1908_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__7___redArg(v___f_1906_, v___x_1907_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; uint8_t v___x_1910_; uint8_t v___x_1911_; lean_object* v___x_1912_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc(v_a_1909_);
lean_dec_ref(v___x_1908_);
v___x_1910_ = 1;
v___x_1911_ = 1;
v___x_1912_ = l_Lean_Meta_mkForallFVars(v_xs_1892_, v_a_1904_, v___x_1907_, v___x_1910_, v___x_1910_, v___x_1911_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1914_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref(v___x_1912_);
v___x_1914_ = l_Lean_Meta_letToHave(v_a_1913_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1916_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref(v___x_1914_);
v___x_1916_ = l_Lean_Meta_mkLambdaFVars(v_xs_1892_, v_a_1909_, v___x_1907_, v___x_1910_, v___x_1907_, v___x_1910_, v___x_1911_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v_a_1922_; lean_object* v___x_1923_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref(v___x_1916_);
lean_inc(v_name_1891_);
v___x_1918_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1918_, 0, v_name_1891_);
lean_ctor_set(v___x_1918_, 1, v_levelParams_1888_);
lean_ctor_set(v___x_1918_, 2, v_a_1915_);
v___x_1919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1919_, 0, v_name_1891_);
lean_ctor_set(v___x_1919_, 1, v___x_1899_);
v___x_1920_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1920_, 0, v___x_1918_);
lean_ctor_set(v___x_1920_, 1, v_a_1917_);
lean_ctor_set(v___x_1920_, 2, v___x_1919_);
v___x_1921_ = l_Lean_mkThmOrUnsafeDef___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__8___redArg(v___x_1920_, v___y_1897_);
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
lean_dec_ref(v___x_1921_);
v___x_1923_ = l_Lean_addDecl(v_a_1922_, v___x_1907_, v___y_1896_, v___y_1897_);
return v___x_1923_;
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
lean_dec(v_a_1915_);
lean_dec(v_name_1891_);
lean_dec(v_levelParams_1888_);
v_a_1924_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1916_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1916_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
else
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1939_; 
lean_dec(v_a_1909_);
lean_dec(v_name_1891_);
lean_dec(v_levelParams_1888_);
v_a_1932_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1934_ = v___x_1914_;
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1914_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v_a_1932_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
lean_dec(v_a_1909_);
lean_dec(v_name_1891_);
lean_dec(v_levelParams_1888_);
v_a_1940_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v___x_1912_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1912_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1940_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec(v_a_1904_);
lean_dec(v_name_1891_);
lean_dec(v_levelParams_1888_);
v_a_1948_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1908_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1908_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
else
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1963_; 
lean_dec(v_name_1891_);
lean_dec(v_declNameNonRec_1890_);
lean_dec(v_declName_1889_);
lean_dec(v_levelParams_1888_);
v_a_1956_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1958_ = v___x_1903_;
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1903_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1961_; 
if (v_isShared_1959_ == 0)
{
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
return v___x_1961_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___boxed(lean_object* v_levelParams_1964_, lean_object* v_declName_1965_, lean_object* v_declNameNonRec_1966_, lean_object* v_name_1967_, lean_object* v_xs_1968_, lean_object* v_body_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2(v_levelParams_1964_, v_declName_1965_, v_declNameNonRec_1966_, v_name_1967_, v_xs_1968_, v_body_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec_ref(v_xs_1968_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize(lean_object* v_declName_1976_, lean_object* v_info_1977_, lean_object* v_name_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_){
_start:
{
lean_object* v___x_1984_; lean_object* v_levelParams_1985_; lean_object* v_value_1986_; lean_object* v_declNameNonRec_1987_; lean_object* v_fileName_1988_; lean_object* v_fileMap_1989_; lean_object* v_options_1990_; lean_object* v_currRecDepth_1991_; lean_object* v_ref_1992_; lean_object* v_currNamespace_1993_; lean_object* v_openDecls_1994_; lean_object* v_initHeartbeats_1995_; lean_object* v_maxHeartbeats_1996_; lean_object* v_quotContext_1997_; lean_object* v_currMacroScope_1998_; lean_object* v_cancelTk_x3f_1999_; uint8_t v_suppressElabErrors_2000_; lean_object* v_inheritedTraceOptions_2001_; lean_object* v_env_2002_; lean_object* v___f_2003_; uint8_t v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; uint8_t v___x_2008_; lean_object* v_fileName_2010_; lean_object* v_fileMap_2011_; lean_object* v_currRecDepth_2012_; lean_object* v_ref_2013_; lean_object* v_currNamespace_2014_; lean_object* v_openDecls_2015_; lean_object* v_initHeartbeats_2016_; lean_object* v_maxHeartbeats_2017_; lean_object* v_quotContext_2018_; lean_object* v_currMacroScope_2019_; lean_object* v_cancelTk_x3f_2020_; uint8_t v_suppressElabErrors_2021_; lean_object* v_inheritedTraceOptions_2022_; lean_object* v___y_2023_; uint8_t v___y_2029_; uint8_t v___x_2050_; 
v___x_1984_ = lean_st_ref_get(v_a_1982_);
v_levelParams_1985_ = lean_ctor_get(v_info_1977_, 1);
lean_inc(v_levelParams_1985_);
v_value_1986_ = lean_ctor_get(v_info_1977_, 3);
lean_inc_ref(v_value_1986_);
v_declNameNonRec_1987_ = lean_ctor_get(v_info_1977_, 5);
lean_inc(v_declNameNonRec_1987_);
lean_dec_ref(v_info_1977_);
v_fileName_1988_ = lean_ctor_get(v_a_1981_, 0);
v_fileMap_1989_ = lean_ctor_get(v_a_1981_, 1);
v_options_1990_ = lean_ctor_get(v_a_1981_, 2);
v_currRecDepth_1991_ = lean_ctor_get(v_a_1981_, 3);
v_ref_1992_ = lean_ctor_get(v_a_1981_, 5);
v_currNamespace_1993_ = lean_ctor_get(v_a_1981_, 6);
v_openDecls_1994_ = lean_ctor_get(v_a_1981_, 7);
v_initHeartbeats_1995_ = lean_ctor_get(v_a_1981_, 8);
v_maxHeartbeats_1996_ = lean_ctor_get(v_a_1981_, 9);
v_quotContext_1997_ = lean_ctor_get(v_a_1981_, 10);
v_currMacroScope_1998_ = lean_ctor_get(v_a_1981_, 11);
v_cancelTk_x3f_1999_ = lean_ctor_get(v_a_1981_, 12);
v_suppressElabErrors_2000_ = lean_ctor_get_uint8(v_a_1981_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2001_ = lean_ctor_get(v_a_1981_, 13);
v_env_2002_ = lean_ctor_get(v___x_1984_, 0);
lean_inc_ref(v_env_2002_);
lean_dec(v___x_1984_);
v___f_2003_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___lam__2___boxed), 11, 4);
lean_closure_set(v___f_2003_, 0, v_levelParams_1985_);
lean_closure_set(v___f_2003_, 1, v_declName_1976_);
lean_closure_set(v___f_2003_, 2, v_declNameNonRec_1987_);
lean_closure_set(v___f_2003_, 3, v_name_1978_);
v___x_2004_ = 0;
v___x_2005_ = l_Lean_Meta_tactic_hygienic;
lean_inc_ref(v_options_1990_);
v___x_2006_ = l_Lean_Option_set___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__2(v_options_1990_, v___x_2005_, v___x_2004_);
v___x_2007_ = l_Lean_diagnostics;
v___x_2008_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__3(v___x_2006_, v___x_2007_);
v___x_2050_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_2002_);
lean_dec_ref(v_env_2002_);
if (v___x_2050_ == 0)
{
if (v___x_2008_ == 0)
{
v_fileName_2010_ = v_fileName_1988_;
v_fileMap_2011_ = v_fileMap_1989_;
v_currRecDepth_2012_ = v_currRecDepth_1991_;
v_ref_2013_ = v_ref_1992_;
v_currNamespace_2014_ = v_currNamespace_1993_;
v_openDecls_2015_ = v_openDecls_1994_;
v_initHeartbeats_2016_ = v_initHeartbeats_1995_;
v_maxHeartbeats_2017_ = v_maxHeartbeats_1996_;
v_quotContext_2018_ = v_quotContext_1997_;
v_currMacroScope_2019_ = v_currMacroScope_1998_;
v_cancelTk_x3f_2020_ = v_cancelTk_x3f_1999_;
v_suppressElabErrors_2021_ = v_suppressElabErrors_2000_;
v_inheritedTraceOptions_2022_ = v_inheritedTraceOptions_2001_;
v___y_2023_ = v_a_1982_;
goto v___jp_2009_;
}
else
{
v___y_2029_ = v___x_2050_;
goto v___jp_2028_;
}
}
else
{
v___y_2029_ = v___x_2008_;
goto v___jp_2028_;
}
v___jp_2009_:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2024_ = l_Lean_maxRecDepth;
v___x_2025_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__4(v___x_2006_, v___x_2024_);
lean_inc_ref(v_inheritedTraceOptions_2022_);
lean_inc(v_cancelTk_x3f_2020_);
lean_inc(v_currMacroScope_2019_);
lean_inc(v_quotContext_2018_);
lean_inc(v_maxHeartbeats_2017_);
lean_inc(v_initHeartbeats_2016_);
lean_inc(v_openDecls_2015_);
lean_inc(v_currNamespace_2014_);
lean_inc(v_ref_2013_);
lean_inc(v_currRecDepth_2012_);
lean_inc_ref(v_fileMap_2011_);
lean_inc_ref(v_fileName_2010_);
v___x_2026_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_2026_, 0, v_fileName_2010_);
lean_ctor_set(v___x_2026_, 1, v_fileMap_2011_);
lean_ctor_set(v___x_2026_, 2, v___x_2006_);
lean_ctor_set(v___x_2026_, 3, v_currRecDepth_2012_);
lean_ctor_set(v___x_2026_, 4, v___x_2025_);
lean_ctor_set(v___x_2026_, 5, v_ref_2013_);
lean_ctor_set(v___x_2026_, 6, v_currNamespace_2014_);
lean_ctor_set(v___x_2026_, 7, v_openDecls_2015_);
lean_ctor_set(v___x_2026_, 8, v_initHeartbeats_2016_);
lean_ctor_set(v___x_2026_, 9, v_maxHeartbeats_2017_);
lean_ctor_set(v___x_2026_, 10, v_quotContext_2018_);
lean_ctor_set(v___x_2026_, 11, v_currMacroScope_2019_);
lean_ctor_set(v___x_2026_, 12, v_cancelTk_x3f_2020_);
lean_ctor_set(v___x_2026_, 13, v_inheritedTraceOptions_2022_);
lean_ctor_set_uint8(v___x_2026_, sizeof(void*)*14, v___x_2008_);
lean_ctor_set_uint8(v___x_2026_, sizeof(void*)*14 + 1, v_suppressElabErrors_2021_);
v___x_2027_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize_spec__9___redArg(v_value_1986_, v___f_2003_, v___x_2004_, v_a_1979_, v_a_1980_, v___x_2026_, v___y_2023_);
lean_dec_ref(v___x_2026_);
return v___x_2027_;
}
v___jp_2028_:
{
if (v___y_2029_ == 0)
{
lean_object* v___x_2030_; lean_object* v_env_2031_; lean_object* v_nextMacroScope_2032_; lean_object* v_ngen_2033_; lean_object* v_auxDeclNGen_2034_; lean_object* v_traceState_2035_; lean_object* v_messages_2036_; lean_object* v_infoState_2037_; lean_object* v_snapshotTasks_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2048_; 
v___x_2030_ = lean_st_ref_take(v_a_1982_);
v_env_2031_ = lean_ctor_get(v___x_2030_, 0);
v_nextMacroScope_2032_ = lean_ctor_get(v___x_2030_, 1);
v_ngen_2033_ = lean_ctor_get(v___x_2030_, 2);
v_auxDeclNGen_2034_ = lean_ctor_get(v___x_2030_, 3);
v_traceState_2035_ = lean_ctor_get(v___x_2030_, 4);
v_messages_2036_ = lean_ctor_get(v___x_2030_, 6);
v_infoState_2037_ = lean_ctor_get(v___x_2030_, 7);
v_snapshotTasks_2038_ = lean_ctor_get(v___x_2030_, 8);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2030_);
if (v_isSharedCheck_2048_ == 0)
{
lean_object* v_unused_2049_; 
v_unused_2049_ = lean_ctor_get(v___x_2030_, 5);
lean_dec(v_unused_2049_);
v___x_2040_ = v___x_2030_;
v_isShared_2041_ = v_isSharedCheck_2048_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_snapshotTasks_2038_);
lean_inc(v_infoState_2037_);
lean_inc(v_messages_2036_);
lean_inc(v_traceState_2035_);
lean_inc(v_auxDeclNGen_2034_);
lean_inc(v_ngen_2033_);
lean_inc(v_nextMacroScope_2032_);
lean_inc(v_env_2031_);
lean_dec(v___x_2030_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2048_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2045_; 
v___x_2042_ = l_Lean_Kernel_enableDiag(v_env_2031_, v___x_2008_);
v___x_2043_ = lean_obj_once(&l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2, &l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2_once, _init_l_Lean_Elab_PartialFixpoint_registerEqnsInfo___closed__2);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 5, v___x_2043_);
lean_ctor_set(v___x_2040_, 0, v___x_2042_);
v___x_2045_ = v___x_2040_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2047_, 1, v_nextMacroScope_2032_);
lean_ctor_set(v_reuseFailAlloc_2047_, 2, v_ngen_2033_);
lean_ctor_set(v_reuseFailAlloc_2047_, 3, v_auxDeclNGen_2034_);
lean_ctor_set(v_reuseFailAlloc_2047_, 4, v_traceState_2035_);
lean_ctor_set(v_reuseFailAlloc_2047_, 5, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2047_, 6, v_messages_2036_);
lean_ctor_set(v_reuseFailAlloc_2047_, 7, v_infoState_2037_);
lean_ctor_set(v_reuseFailAlloc_2047_, 8, v_snapshotTasks_2038_);
v___x_2045_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
lean_object* v___x_2046_; 
v___x_2046_ = lean_st_ref_set(v_a_1982_, v___x_2045_);
v_fileName_2010_ = v_fileName_1988_;
v_fileMap_2011_ = v_fileMap_1989_;
v_currRecDepth_2012_ = v_currRecDepth_1991_;
v_ref_2013_ = v_ref_1992_;
v_currNamespace_2014_ = v_currNamespace_1993_;
v_openDecls_2015_ = v_openDecls_1994_;
v_initHeartbeats_2016_ = v_initHeartbeats_1995_;
v_maxHeartbeats_2017_ = v_maxHeartbeats_1996_;
v_quotContext_2018_ = v_quotContext_1997_;
v_currMacroScope_2019_ = v_currMacroScope_1998_;
v_cancelTk_x3f_2020_ = v_cancelTk_x3f_1999_;
v_suppressElabErrors_2021_ = v_suppressElabErrors_2000_;
v_inheritedTraceOptions_2022_ = v_inheritedTraceOptions_2001_;
v___y_2023_ = v_a_1982_;
goto v___jp_2009_;
}
}
}
else
{
v_fileName_2010_ = v_fileName_1988_;
v_fileMap_2011_ = v_fileMap_1989_;
v_currRecDepth_2012_ = v_currRecDepth_1991_;
v_ref_2013_ = v_ref_1992_;
v_currNamespace_2014_ = v_currNamespace_1993_;
v_openDecls_2015_ = v_openDecls_1994_;
v_initHeartbeats_2016_ = v_initHeartbeats_1995_;
v_maxHeartbeats_2017_ = v_maxHeartbeats_1996_;
v_quotContext_2018_ = v_quotContext_1997_;
v_currMacroScope_2019_ = v_currMacroScope_1998_;
v_cancelTk_x3f_2020_ = v_cancelTk_x3f_1999_;
v_suppressElabErrors_2021_ = v_suppressElabErrors_2000_;
v_inheritedTraceOptions_2022_ = v_inheritedTraceOptions_2001_;
v___y_2023_ = v_a_1982_;
goto v___jp_2009_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___boxed(lean_object* v_declName_2051_, lean_object* v_info_2052_, lean_object* v_name_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_){
_start:
{
lean_object* v_res_2059_; 
v_res_2059_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize(v_declName_2051_, v_info_2052_, v_name_2053_, v_a_2054_, v_a_2055_, v_a_2056_, v_a_2057_);
lean_dec(v_a_2057_);
lean_dec_ref(v_a_2056_);
lean_dec(v_a_2055_);
lean_dec_ref(v_a_2054_);
return v_res_2059_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(lean_object* v_declName_2060_, lean_object* v_info_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_){
_start:
{
lean_object* v___x_2067_; lean_object* v_env_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2067_ = lean_st_ref_get(v_a_2065_);
v_env_2068_ = lean_ctor_get(v___x_2067_, 0);
lean_inc_ref(v_env_2068_);
lean_dec(v___x_2067_);
v___x_2069_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc(v_declName_2060_);
v___x_2070_ = l_Lean_Meta_mkEqLikeNameFor(v_env_2068_, v_declName_2060_, v___x_2069_);
lean_inc(v___x_2070_);
lean_inc(v_declName_2060_);
v___x_2071_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq_doRealize___boxed), 8, 3);
lean_closure_set(v___x_2071_, 0, v_declName_2060_);
lean_closure_set(v___x_2071_, 1, v_info_2061_);
lean_closure_set(v___x_2071_, 2, v___x_2070_);
lean_inc(v___x_2070_);
v___x_2072_ = l_Lean_Meta_realizeConst(v_declName_2060_, v___x_2070_, v___x_2071_, v_a_2062_, v_a_2063_, v_a_2064_, v_a_2065_);
if (lean_obj_tag(v___x_2072_) == 0)
{
lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2079_; 
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2079_ == 0)
{
lean_object* v_unused_2080_; 
v_unused_2080_ = lean_ctor_get(v___x_2072_, 0);
lean_dec(v_unused_2080_);
v___x_2074_ = v___x_2072_;
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
else
{
lean_dec(v___x_2072_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2079_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v___x_2077_; 
if (v_isShared_2075_ == 0)
{
lean_ctor_set(v___x_2074_, 0, v___x_2070_);
v___x_2077_ = v___x_2074_;
goto v_reusejp_2076_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2078_, 0, v___x_2070_);
v___x_2077_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2076_;
}
v_reusejp_2076_:
{
return v___x_2077_;
}
}
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
lean_dec(v___x_2070_);
v_a_2081_ = lean_ctor_get(v___x_2072_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2072_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_2072_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2072_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq___boxed(lean_object* v_declName_2089_, lean_object* v_info_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(v_declName_2089_, v_info_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_);
lean_dec(v_a_2094_);
lean_dec_ref(v_a_2093_);
lean_dec(v_a_2092_);
lean_dec_ref(v_a_2091_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f(lean_object* v_declName_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_){
_start:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v_env_2105_; lean_object* v_env_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; uint8_t v___x_2109_; uint8_t v___x_2110_; 
v___x_2103_ = lean_st_ref_get(v_a_2101_);
v___x_2104_ = lean_st_ref_get(v_a_2101_);
v_env_2105_ = lean_ctor_get(v___x_2103_, 0);
lean_inc_ref(v_env_2105_);
lean_dec(v___x_2103_);
v_env_2106_ = lean_ctor_get(v___x_2104_, 0);
lean_inc_ref(v_env_2106_);
lean_dec(v___x_2104_);
v___x_2107_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc(v_declName_2097_);
v___x_2108_ = l_Lean_Meta_mkEqLikeNameFor(v_env_2105_, v_declName_2097_, v___x_2107_);
v___x_2109_ = 1;
lean_inc(v___x_2108_);
lean_inc_ref(v_env_2106_);
v___x_2110_ = l_Lean_Environment_contains(v_env_2106_, v___x_2108_, v___x_2109_);
if (v___x_2110_ == 0)
{
lean_object* v___x_2111_; lean_object* v_toEnvExtension_2112_; lean_object* v_asyncMode_2113_; lean_object* v___x_2114_; uint8_t v___x_2115_; lean_object* v___x_2116_; 
lean_dec(v___x_2108_);
v___x_2111_ = l_Lean_Elab_PartialFixpoint_eqnInfoExt;
v_toEnvExtension_2112_ = lean_ctor_get(v___x_2111_, 0);
v_asyncMode_2113_ = lean_ctor_get(v_toEnvExtension_2112_, 2);
v___x_2114_ = l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default;
v___x_2115_ = 0;
lean_inc(v_declName_2097_);
v___x_2116_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_2114_, v___x_2111_, v_env_2106_, v_declName_2097_, v_asyncMode_2113_, v___x_2115_);
if (lean_obj_tag(v___x_2116_) == 1)
{
lean_object* v_val_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2141_; 
v_val_2117_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2119_ = v___x_2116_;
v_isShared_2120_ = v_isSharedCheck_2141_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_val_2117_);
lean_dec(v___x_2116_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2141_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v___x_2121_; 
v___x_2121_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_mkUnfoldEq(v_declName_2097_, v_val_2117_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_);
if (lean_obj_tag(v___x_2121_) == 0)
{
lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2132_; 
v_a_2122_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2124_ = v___x_2121_;
v_isShared_2125_ = v_isSharedCheck_2132_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_dec(v___x_2121_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2132_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2127_; 
if (v_isShared_2120_ == 0)
{
lean_ctor_set(v___x_2119_, 0, v_a_2122_);
v___x_2127_ = v___x_2119_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v_a_2122_);
v___x_2127_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
lean_object* v___x_2129_; 
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 0, v___x_2127_);
v___x_2129_ = v___x_2124_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v___x_2127_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2140_; 
lean_del_object(v___x_2119_);
v_a_2133_ = lean_ctor_get(v___x_2121_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v___x_2121_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2135_ = v___x_2121_;
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2121_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2138_; 
if (v_isShared_2136_ == 0)
{
v___x_2138_ = v___x_2135_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v_a_2133_);
v___x_2138_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
return v___x_2138_;
}
}
}
}
}
else
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
lean_dec(v___x_2116_);
lean_dec(v_declName_2097_);
v___x_2142_ = lean_box(0);
v___x_2143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2142_);
return v___x_2143_;
}
}
else
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
lean_dec_ref(v_env_2106_);
lean_dec(v_declName_2097_);
v___x_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2108_);
v___x_2145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2144_);
return v___x_2145_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f___boxed(lean_object* v_declName_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_getUnfoldFor_x3f(v_declName_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_);
lean_dec(v_a_2150_);
lean_dec_ref(v_a_2149_);
lean_dec(v_a_2148_);
lean_dec_ref(v_a_2147_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2155_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_));
v___x_2156_ = l_Lean_Meta_registerGetUnfoldEqnFn(v___x_2155_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2____boxed(lean_object* v_a_2157_){
_start:
{
lean_object* v_res_2158_; 
v_res_2158_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_();
return v_res_2158_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* runtime_initialize_Init_Internal_Order_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default = _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default();
lean_mark_persistent(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo_default);
l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo = _init_l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo();
lean_mark_persistent(l_Lean_Elab_PartialFixpoint_instInhabitedEqnInfo);
res = l_Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1195399529____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_PartialFixpoint_eqnInfoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_PartialFixpoint_eqnInfoExt);
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_0__Lean_Elab_PartialFixpoint_initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Eqns_1741434721____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin);
lean_object* initialize_Init_Internal_Order_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
}
#ifdef __cplusplus
}
#endif
