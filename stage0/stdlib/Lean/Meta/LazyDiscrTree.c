// Lean compiler output
// Module: Lean.Meta.LazyDiscrTree
// Imports: public import Lean.Meta.CompletionName public import Lean.Meta.DiscrTree import Init.Omega
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
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_hasNoindexAnnotation(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_reduceDT(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isStrictImplicit(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t l_Lean_Expr_isRawNatLit(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t lean_is_class(lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_mkNoindexAnnotation(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqLiteral_beq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t l_Lean_Literal_hash(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
uint8_t lean_get_reducibility_status(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isMatcherAppCore_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwIsDefEqStuck___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
uint8_t l_Lean_getDiag(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
extern lean_object* l_Lean_instInhabitedModuleData_default;
lean_object* l_Lean_ConstantInfo_name(lean_object*);
uint8_t l_Lean_ConstantInfo_isUnsafe(lean_object*);
uint8_t l_Lean_Meta_allowCompletion(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isInternalDetail(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Config_toConfigWithKey(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_diagnostics;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg___boxed(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_BaseIO_asTask___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_Name_reprPrec(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_instReprLiteral_repr(lean_object*, lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedKey_default___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instBEqKey___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.arrow"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.other"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__2_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.star"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__4_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lean.Meta.LazyDiscrTree.Key.const"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__6_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__7_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.fvar"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__11_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__12_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.LazyDiscrTree.Key.lit"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__14_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__15_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Meta.LazyDiscrTree.Key.proj"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__17_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__18_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instReprKey___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Key_hash___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_LazyDiscrTree_Key_hash___closed__0;
LEAN_EXPORT uint64_t l_Lean_Meta_LazyDiscrTree_Key_hash(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_hash___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_Key_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_Key_instHashable = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_Key_instHashable___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "_discr_tree_tmp"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 72, 223, 190, 190, 84, 146, 120)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId___closed__1_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__3_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__4_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__6_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0 = (const lean_object*)&l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__1_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__4_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(50, 34, 112, 179, 66, 45, 192, 92)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__3_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie(lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabited___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_initCapacity;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_patternPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_pushArgs___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_patternPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_targetPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_targetPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_runMatch___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_LazyDiscrTree_runMatch___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_evalNode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_evalNode___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_append___redArg___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0_value;
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new();
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "sorryAx"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 190, 164, 146, 38, 179, 69, 72)}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "noConfusionType"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2_value;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inj"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3_value;
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_blacklistInsertion(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6;
static const lean_array_object l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8;
static const lean_ctor_object l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_InitResults_append, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Processing failure with "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " in "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3;
static const lean_string_object l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ":\n  "};
static const lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "lazy discriminator import initialization"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "build module discriminator tree"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "lazy discriminator local search"};
static const lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
case 5:
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
default: 
{
lean_object* v___x_8_; 
v___x_8_ = lean_unsigned_to_nat(6u);
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorIdx___boxed(lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Meta_LazyDiscrTree_Key_ctorIdx(v_x_9_);
lean_dec(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
switch(lean_obj_tag(v_t_11_))
{
case 0:
{
lean_object* v_a_13_; lean_object* v_a_14_; lean_object* v___x_15_; 
v_a_13_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_a_13_);
v_a_14_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_a_14_);
lean_dec_ref(v_t_11_);
v___x_15_ = lean_apply_2(v_k_12_, v_a_13_, v_a_14_);
return v___x_15_;
}
case 1:
{
lean_object* v_a_16_; lean_object* v_a_17_; lean_object* v___x_18_; 
v_a_16_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_a_16_);
v_a_17_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_a_17_);
lean_dec_ref(v_t_11_);
v___x_18_ = lean_apply_2(v_k_12_, v_a_16_, v_a_17_);
return v___x_18_;
}
case 2:
{
lean_object* v_a_19_; lean_object* v___x_20_; 
v_a_19_ = lean_ctor_get(v_t_11_, 0);
lean_inc_ref(v_a_19_);
lean_dec_ref(v_t_11_);
v___x_20_ = lean_apply_1(v_k_12_, v_a_19_);
return v___x_20_;
}
case 6:
{
lean_object* v_a_21_; lean_object* v_a_22_; lean_object* v_a_23_; lean_object* v___x_24_; 
v_a_21_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_a_21_);
v_a_22_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_a_22_);
v_a_23_ = lean_ctor_get(v_t_11_, 2);
lean_inc(v_a_23_);
lean_dec_ref(v_t_11_);
v___x_24_ = lean_apply_3(v_k_12_, v_a_21_, v_a_22_, v_a_23_);
return v___x_24_;
}
default: 
{
lean_dec(v_t_11_);
return v_k_12_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim(lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_27_, v_k_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_ctorElim___boxed(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim(v_motive_31_, v_ctorIdx_32_, v_t_33_, v_h_34_, v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim___redArg(lean_object* v_t_37_, lean_object* v_const_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_37_, v_const_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_const_elim(lean_object* v_motive_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_const_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_41_, v_const_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim___redArg(lean_object* v_t_45_, lean_object* v_fvar_46_){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_45_, v_fvar_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_fvar_elim(lean_object* v_motive_48_, lean_object* v_t_49_, lean_object* v_h_50_, lean_object* v_fvar_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_49_, v_fvar_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim___redArg(lean_object* v_t_53_, lean_object* v_lit_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_53_, v_lit_54_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_lit_elim(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_lit_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_57_, v_lit_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim___redArg(lean_object* v_t_61_, lean_object* v_star_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_61_, v_star_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_star_elim(lean_object* v_motive_64_, lean_object* v_t_65_, lean_object* v_h_66_, lean_object* v_star_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_65_, v_star_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim___redArg(lean_object* v_t_69_, lean_object* v_other_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_69_, v_other_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_other_elim(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_other_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_73_, v_other_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim___redArg(lean_object* v_t_77_, lean_object* v_arrow_78_){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_77_, v_arrow_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_arrow_elim(lean_object* v_motive_80_, lean_object* v_t_81_, lean_object* v_h_82_, lean_object* v_arrow_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_81_, v_arrow_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim___redArg(lean_object* v_t_85_, lean_object* v_proj_86_){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_85_, v_proj_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_proj_elim(lean_object* v_motive_88_, lean_object* v_t_89_, lean_object* v_h_90_, lean_object* v_proj_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_Meta_LazyDiscrTree_Key_ctorElim___redArg(v_t_89_, v_proj_91_);
return v___x_92_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(lean_object* v_x_98_, lean_object* v_x_99_){
_start:
{
switch(lean_obj_tag(v_x_98_))
{
case 0:
{
if (lean_obj_tag(v_x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v_a_101_; lean_object* v_a_102_; lean_object* v_a_103_; uint8_t v___x_104_; 
v_a_100_ = lean_ctor_get(v_x_98_, 0);
v_a_101_ = lean_ctor_get(v_x_98_, 1);
v_a_102_ = lean_ctor_get(v_x_99_, 0);
v_a_103_ = lean_ctor_get(v_x_99_, 1);
v___x_104_ = lean_name_eq(v_a_100_, v_a_102_);
if (v___x_104_ == 0)
{
return v___x_104_;
}
else
{
uint8_t v___x_105_; 
v___x_105_ = lean_nat_dec_eq(v_a_101_, v_a_103_);
return v___x_105_;
}
}
else
{
uint8_t v___x_106_; 
v___x_106_ = 0;
return v___x_106_;
}
}
case 1:
{
if (lean_obj_tag(v_x_99_) == 1)
{
lean_object* v_a_107_; lean_object* v_a_108_; lean_object* v_a_109_; lean_object* v_a_110_; uint8_t v___x_111_; 
v_a_107_ = lean_ctor_get(v_x_98_, 0);
v_a_108_ = lean_ctor_get(v_x_98_, 1);
v_a_109_ = lean_ctor_get(v_x_99_, 0);
v_a_110_ = lean_ctor_get(v_x_99_, 1);
v___x_111_ = l_Lean_instBEqFVarId_beq(v_a_107_, v_a_109_);
if (v___x_111_ == 0)
{
return v___x_111_;
}
else
{
uint8_t v___x_112_; 
v___x_112_ = lean_nat_dec_eq(v_a_108_, v_a_110_);
return v___x_112_;
}
}
else
{
uint8_t v___x_113_; 
v___x_113_ = 0;
return v___x_113_;
}
}
case 2:
{
if (lean_obj_tag(v_x_99_) == 2)
{
lean_object* v_a_114_; lean_object* v_a_115_; uint8_t v___x_116_; 
v_a_114_ = lean_ctor_get(v_x_98_, 0);
v_a_115_ = lean_ctor_get(v_x_99_, 0);
v___x_116_ = l_Lean_instBEqLiteral_beq(v_a_114_, v_a_115_);
return v___x_116_;
}
else
{
uint8_t v___x_117_; 
v___x_117_ = 0;
return v___x_117_;
}
}
case 3:
{
if (lean_obj_tag(v_x_99_) == 3)
{
uint8_t v___x_118_; 
v___x_118_ = 1;
return v___x_118_;
}
else
{
uint8_t v___x_119_; 
v___x_119_ = 0;
return v___x_119_;
}
}
case 4:
{
if (lean_obj_tag(v_x_99_) == 4)
{
uint8_t v___x_120_; 
v___x_120_ = 1;
return v___x_120_;
}
else
{
uint8_t v___x_121_; 
v___x_121_ = 0;
return v___x_121_;
}
}
case 5:
{
if (lean_obj_tag(v_x_99_) == 5)
{
uint8_t v___x_122_; 
v___x_122_ = 1;
return v___x_122_;
}
else
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
default: 
{
if (lean_obj_tag(v_x_99_) == 6)
{
lean_object* v_a_124_; lean_object* v_a_125_; lean_object* v_a_126_; lean_object* v_a_127_; lean_object* v_a_128_; lean_object* v_a_129_; uint8_t v___x_130_; 
v_a_124_ = lean_ctor_get(v_x_98_, 0);
v_a_125_ = lean_ctor_get(v_x_98_, 1);
v_a_126_ = lean_ctor_get(v_x_98_, 2);
v_a_127_ = lean_ctor_get(v_x_99_, 0);
v_a_128_ = lean_ctor_get(v_x_99_, 1);
v_a_129_ = lean_ctor_get(v_x_99_, 2);
v___x_130_ = lean_name_eq(v_a_124_, v_a_127_);
if (v___x_130_ == 0)
{
return v___x_130_;
}
else
{
uint8_t v___x_131_; 
v___x_131_ = lean_nat_dec_eq(v_a_125_, v_a_128_);
if (v___x_131_ == 0)
{
return v___x_131_;
}
else
{
uint8_t v___x_132_; 
v___x_132_ = lean_nat_dec_eq(v_a_126_, v_a_129_);
return v___x_132_;
}
}
}
else
{
uint8_t v___x_133_; 
v___x_133_ = 0;
return v___x_133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instBEqKey_beq___boxed(lean_object* v_x_134_, lean_object* v_x_135_){
_start:
{
uint8_t v_res_136_; lean_object* v_r_137_; 
v_res_136_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_x_134_, v_x_135_);
lean_dec(v_x_135_);
lean_dec(v_x_134_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_unsigned_to_nat(2u);
v___x_156_ = lean_nat_to_int(v___x_155_);
return v___x_156_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(1u);
v___x_158_ = lean_nat_to_int(v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr(lean_object* v_x_177_, lean_object* v_prec_178_){
_start:
{
lean_object* v___y_180_; lean_object* v___y_187_; lean_object* v___y_194_; 
switch(lean_obj_tag(v_x_177_))
{
case 0:
{
lean_object* v_a_200_; lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_226_; 
v_a_200_ = lean_ctor_get(v_x_177_, 0);
v_a_201_ = lean_ctor_get(v_x_177_, 1);
v_isSharedCheck_226_ = !lean_is_exclusive(v_x_177_);
if (v_isSharedCheck_226_ == 0)
{
v___x_203_ = v_x_177_;
v_isShared_204_ = v_isSharedCheck_226_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_inc(v_a_200_);
lean_dec(v_x_177_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_226_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___y_206_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_222_ = lean_unsigned_to_nat(1024u);
v___x_223_ = lean_nat_dec_le(v___x_222_, v_prec_178_);
if (v___x_223_ == 0)
{
lean_object* v___x_224_; 
v___x_224_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_206_ = v___x_224_;
goto v___jp_205_;
}
else
{
lean_object* v___x_225_; 
v___x_225_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_206_ = v___x_225_;
goto v___jp_205_;
}
v___jp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_212_; 
v___x_207_ = lean_box(1);
v___x_208_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__8));
v___x_209_ = lean_unsigned_to_nat(1024u);
v___x_210_ = l_Lean_Name_reprPrec(v_a_200_, v___x_209_);
if (v_isShared_204_ == 0)
{
lean_ctor_set_tag(v___x_203_, 5);
lean_ctor_set(v___x_203_, 1, v___x_210_);
lean_ctor_set(v___x_203_, 0, v___x_208_);
v___x_212_ = v___x_203_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_208_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v___x_210_);
v___x_212_ = v_reuseFailAlloc_221_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_213_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
lean_ctor_set(v___x_213_, 1, v___x_207_);
v___x_214_ = l_Nat_reprFast(v_a_201_);
v___x_215_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
v___x_216_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_213_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
lean_inc(v___y_206_);
v___x_217_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_217_, 0, v___y_206_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = 0;
v___x_219_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set_uint8(v___x_219_, sizeof(void*)*1, v___x_218_);
v___x_220_ = l_Repr_addAppParen(v___x_219_, v_prec_178_);
return v___x_220_;
}
}
}
}
case 1:
{
lean_object* v_a_227_; lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_253_; 
v_a_227_ = lean_ctor_get(v_x_177_, 0);
v_a_228_ = lean_ctor_get(v_x_177_, 1);
v_isSharedCheck_253_ = !lean_is_exclusive(v_x_177_);
if (v_isSharedCheck_253_ == 0)
{
v___x_230_ = v_x_177_;
v_isShared_231_ = v_isSharedCheck_253_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_inc(v_a_227_);
lean_dec(v_x_177_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_253_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___y_233_; lean_object* v___x_249_; uint8_t v___x_250_; 
v___x_249_ = lean_unsigned_to_nat(1024u);
v___x_250_ = lean_nat_dec_le(v___x_249_, v_prec_178_);
if (v___x_250_ == 0)
{
lean_object* v___x_251_; 
v___x_251_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_233_ = v___x_251_;
goto v___jp_232_;
}
else
{
lean_object* v___x_252_; 
v___x_252_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_233_ = v___x_252_;
goto v___jp_232_;
}
v___jp_232_:
{
lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_239_; 
v___x_234_ = lean_box(1);
v___x_235_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__13));
v___x_236_ = lean_unsigned_to_nat(1024u);
v___x_237_ = l_Lean_Name_reprPrec(v_a_227_, v___x_236_);
if (v_isShared_231_ == 0)
{
lean_ctor_set_tag(v___x_230_, 5);
lean_ctor_set(v___x_230_, 1, v___x_237_);
lean_ctor_set(v___x_230_, 0, v___x_235_);
v___x_239_ = v___x_230_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_235_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v___x_237_);
v___x_239_ = v_reuseFailAlloc_248_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_240_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
lean_ctor_set(v___x_240_, 1, v___x_234_);
v___x_241_ = l_Nat_reprFast(v_a_228_);
v___x_242_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
v___x_243_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_240_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
lean_inc(v___y_233_);
v___x_244_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_244_, 0, v___y_233_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = 0;
v___x_246_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_246_, 0, v___x_244_);
lean_ctor_set_uint8(v___x_246_, sizeof(void*)*1, v___x_245_);
v___x_247_ = l_Repr_addAppParen(v___x_246_, v_prec_178_);
return v___x_247_;
}
}
}
}
case 2:
{
lean_object* v_a_254_; lean_object* v___y_256_; lean_object* v___x_265_; uint8_t v___x_266_; 
v_a_254_ = lean_ctor_get(v_x_177_, 0);
lean_inc_ref(v_a_254_);
lean_dec_ref(v_x_177_);
v___x_265_ = lean_unsigned_to_nat(1024u);
v___x_266_ = lean_nat_dec_le(v___x_265_, v_prec_178_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; 
v___x_267_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_256_ = v___x_267_;
goto v___jp_255_;
}
else
{
lean_object* v___x_268_; 
v___x_268_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_256_ = v___x_268_;
goto v___jp_255_;
}
v___jp_255_:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_257_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__16));
v___x_258_ = lean_unsigned_to_nat(1024u);
v___x_259_ = l_Lean_instReprLiteral_repr(v_a_254_, v___x_258_);
v___x_260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_257_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
lean_inc(v___y_256_);
v___x_261_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_261_, 0, v___y_256_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = 0;
v___x_263_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_263_, 0, v___x_261_);
lean_ctor_set_uint8(v___x_263_, sizeof(void*)*1, v___x_262_);
v___x_264_ = l_Repr_addAppParen(v___x_263_, v_prec_178_);
return v___x_264_;
}
}
case 3:
{
lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_269_ = lean_unsigned_to_nat(1024u);
v___x_270_ = lean_nat_dec_le(v___x_269_, v_prec_178_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; 
v___x_271_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_194_ = v___x_271_;
goto v___jp_193_;
}
else
{
lean_object* v___x_272_; 
v___x_272_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_194_ = v___x_272_;
goto v___jp_193_;
}
}
case 4:
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = lean_unsigned_to_nat(1024u);
v___x_274_ = lean_nat_dec_le(v___x_273_, v_prec_178_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; 
v___x_275_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_187_ = v___x_275_;
goto v___jp_186_;
}
else
{
lean_object* v___x_276_; 
v___x_276_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_187_ = v___x_276_;
goto v___jp_186_;
}
}
case 5:
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = lean_unsigned_to_nat(1024u);
v___x_278_ = lean_nat_dec_le(v___x_277_, v_prec_178_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; 
v___x_279_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_180_ = v___x_279_;
goto v___jp_179_;
}
else
{
lean_object* v___x_280_; 
v___x_280_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_180_ = v___x_280_;
goto v___jp_179_;
}
}
default: 
{
lean_object* v_a_281_; lean_object* v_a_282_; lean_object* v_a_283_; lean_object* v___y_285_; lean_object* v___x_303_; uint8_t v___x_304_; 
v_a_281_ = lean_ctor_get(v_x_177_, 0);
lean_inc(v_a_281_);
v_a_282_ = lean_ctor_get(v_x_177_, 1);
lean_inc(v_a_282_);
v_a_283_ = lean_ctor_get(v_x_177_, 2);
lean_inc(v_a_283_);
lean_dec_ref(v_x_177_);
v___x_303_ = lean_unsigned_to_nat(1024u);
v___x_304_ = lean_nat_dec_le(v___x_303_, v_prec_178_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; 
v___x_305_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__9);
v___y_285_ = v___x_305_;
goto v___jp_284_;
}
else
{
lean_object* v___x_306_; 
v___x_306_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10, &l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__10);
v___y_285_ = v___x_306_;
goto v___jp_284_;
}
v___jp_284_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; uint8_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_286_ = lean_box(1);
v___x_287_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__19));
v___x_288_ = lean_unsigned_to_nat(1024u);
v___x_289_ = l_Lean_Name_reprPrec(v_a_281_, v___x_288_);
v___x_290_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_287_);
lean_ctor_set(v___x_290_, 1, v___x_289_);
v___x_291_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set(v___x_291_, 1, v___x_286_);
v___x_292_ = l_Nat_reprFast(v_a_282_);
v___x_293_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_293_, 0, v___x_292_);
v___x_294_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_291_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v___x_286_);
v___x_296_ = l_Nat_reprFast(v_a_283_);
v___x_297_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
v___x_298_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_295_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
lean_inc(v___y_285_);
v___x_299_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_299_, 0, v___y_285_);
lean_ctor_set(v___x_299_, 1, v___x_298_);
v___x_300_ = 0;
v___x_301_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_301_, 0, v___x_299_);
lean_ctor_set_uint8(v___x_301_, sizeof(void*)*1, v___x_300_);
v___x_302_ = l_Repr_addAppParen(v___x_301_, v_prec_178_);
return v___x_302_;
}
}
}
v___jp_179_:
{
lean_object* v___x_181_; lean_object* v___x_182_; uint8_t v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_181_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__1));
lean_inc(v___y_180_);
v___x_182_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_182_, 0, v___y_180_);
lean_ctor_set(v___x_182_, 1, v___x_181_);
v___x_183_ = 0;
v___x_184_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_184_, 0, v___x_182_);
lean_ctor_set_uint8(v___x_184_, sizeof(void*)*1, v___x_183_);
v___x_185_ = l_Repr_addAppParen(v___x_184_, v_prec_178_);
return v___x_185_;
}
v___jp_186_:
{
lean_object* v___x_188_; lean_object* v___x_189_; uint8_t v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_188_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__3));
lean_inc(v___y_187_);
v___x_189_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_189_, 0, v___y_187_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
v___x_190_ = 0;
v___x_191_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_191_, 0, v___x_189_);
lean_ctor_set_uint8(v___x_191_, sizeof(void*)*1, v___x_190_);
v___x_192_ = l_Repr_addAppParen(v___x_191_, v_prec_178_);
return v___x_192_;
}
v___jp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_195_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instReprKey_repr___closed__5));
lean_inc(v___y_194_);
v___x_196_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_196_, 0, v___y_194_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
v___x_197_ = 0;
v___x_198_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set_uint8(v___x_198_, sizeof(void*)*1, v___x_197_);
v___x_199_ = l_Repr_addAppParen(v___x_198_, v_prec_178_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instReprKey_repr___boxed(lean_object* v_x_307_, lean_object* v_prec_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_Meta_LazyDiscrTree_instReprKey_repr(v_x_307_, v_prec_308_);
lean_dec(v_prec_308_);
return v_res_309_;
}
}
static uint64_t _init_l_Lean_Meta_LazyDiscrTree_Key_hash___closed__0(void){
_start:
{
lean_object* v___x_312_; uint64_t v___x_313_; 
v___x_312_ = lean_unsigned_to_nat(1723u);
v___x_313_ = lean_uint64_of_nat(v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_LazyDiscrTree_Key_hash(lean_object* v_x_314_){
_start:
{
switch(lean_obj_tag(v_x_314_))
{
case 0:
{
lean_object* v_a_315_; lean_object* v_a_316_; uint64_t v___x_317_; uint64_t v___y_319_; 
v_a_315_ = lean_ctor_get(v_x_314_, 0);
v_a_316_ = lean_ctor_get(v_x_314_, 1);
v___x_317_ = 5237ULL;
if (lean_obj_tag(v_a_315_) == 0)
{
uint64_t v___x_323_; 
v___x_323_ = lean_uint64_once(&l_Lean_Meta_LazyDiscrTree_Key_hash___closed__0, &l_Lean_Meta_LazyDiscrTree_Key_hash___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Key_hash___closed__0);
v___y_319_ = v___x_323_;
goto v___jp_318_;
}
else
{
uint64_t v_hash_324_; 
v_hash_324_ = lean_ctor_get_uint64(v_a_315_, sizeof(void*)*2);
v___y_319_ = v_hash_324_;
goto v___jp_318_;
}
v___jp_318_:
{
uint64_t v___x_320_; uint64_t v___x_321_; uint64_t v___x_322_; 
v___x_320_ = lean_uint64_of_nat(v_a_316_);
v___x_321_ = lean_uint64_mix_hash(v___y_319_, v___x_320_);
v___x_322_ = lean_uint64_mix_hash(v___x_317_, v___x_321_);
return v___x_322_;
}
}
case 1:
{
lean_object* v_a_325_; lean_object* v_a_326_; uint64_t v___x_327_; uint64_t v___x_328_; uint64_t v___x_329_; uint64_t v___x_330_; uint64_t v___x_331_; 
v_a_325_ = lean_ctor_get(v_x_314_, 0);
v_a_326_ = lean_ctor_get(v_x_314_, 1);
v___x_327_ = 3541ULL;
v___x_328_ = l_Lean_instHashableFVarId_hash(v_a_325_);
v___x_329_ = lean_uint64_of_nat(v_a_326_);
v___x_330_ = lean_uint64_mix_hash(v___x_328_, v___x_329_);
v___x_331_ = lean_uint64_mix_hash(v___x_327_, v___x_330_);
return v___x_331_;
}
case 2:
{
lean_object* v_a_332_; uint64_t v___x_333_; uint64_t v___x_334_; uint64_t v___x_335_; 
v_a_332_ = lean_ctor_get(v_x_314_, 0);
v___x_333_ = 1879ULL;
v___x_334_ = l_Lean_Literal_hash(v_a_332_);
v___x_335_ = lean_uint64_mix_hash(v___x_333_, v___x_334_);
return v___x_335_;
}
case 3:
{
uint64_t v___x_336_; 
v___x_336_ = 7883ULL;
return v___x_336_;
}
case 4:
{
uint64_t v___x_337_; 
v___x_337_ = 2411ULL;
return v___x_337_;
}
case 5:
{
uint64_t v___x_338_; 
v___x_338_ = 17ULL;
return v___x_338_;
}
default: 
{
lean_object* v_a_339_; lean_object* v_a_340_; lean_object* v_a_341_; uint64_t v___x_342_; uint64_t v___y_344_; 
v_a_339_ = lean_ctor_get(v_x_314_, 0);
v_a_340_ = lean_ctor_get(v_x_314_, 1);
v_a_341_ = lean_ctor_get(v_x_314_, 2);
v___x_342_ = lean_uint64_of_nat(v_a_341_);
if (lean_obj_tag(v_a_339_) == 0)
{
uint64_t v___x_348_; 
v___x_348_ = lean_uint64_once(&l_Lean_Meta_LazyDiscrTree_Key_hash___closed__0, &l_Lean_Meta_LazyDiscrTree_Key_hash___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Key_hash___closed__0);
v___y_344_ = v___x_348_;
goto v___jp_343_;
}
else
{
uint64_t v_hash_349_; 
v_hash_349_ = lean_ctor_get_uint64(v_a_339_, sizeof(void*)*2);
v___y_344_ = v_hash_349_;
goto v___jp_343_;
}
v___jp_343_:
{
uint64_t v___x_345_; uint64_t v___x_346_; uint64_t v___x_347_; 
v___x_345_ = lean_uint64_of_nat(v_a_340_);
v___x_346_ = lean_uint64_mix_hash(v___y_344_, v___x_345_);
v___x_347_ = lean_uint64_mix_hash(v___x_342_, v___x_346_);
return v___x_347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Key_hash___boxed(lean_object* v_x_350_){
_start:
{
uint64_t v_res_351_; lean_object* v_r_352_; 
v_res_351_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_x_350_);
lean_dec(v_x_350_);
v_r_352_ = lean_box_uint64(v_res_351_);
return v_r_352_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId));
v___x_360_ = l_Lean_mkMVar(v___x_359_);
return v___x_360_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar(void){
_start:
{
lean_object* v___x_361_; 
v___x_361_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0, &l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar___closed__0);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(lean_object* v_a_362_, lean_object* v_i_363_, lean_object* v_infos_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
lean_object* v___x_370_; uint8_t v___x_371_; 
v___x_370_ = lean_array_get_size(v_infos_364_);
v___x_371_ = lean_nat_dec_lt(v_i_363_, v___x_370_);
if (v___x_371_ == 0)
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_Meta_isProof(v_a_362_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
return v___x_372_;
}
else
{
lean_object* v_info_373_; uint8_t v_isInstance_374_; uint8_t v___y_376_; 
v_info_373_ = lean_array_fget_borrowed(v_infos_364_, v_i_363_);
v_isInstance_374_ = lean_ctor_get_uint8(v_info_373_, sizeof(void*)*1 + 4);
if (v_isInstance_374_ == 0)
{
uint8_t v___x_392_; 
v___x_392_ = l_Lean_Meta_ParamInfo_isImplicit(v_info_373_);
if (v___x_392_ == 0)
{
uint8_t v___x_393_; 
v___x_393_ = l_Lean_Meta_ParamInfo_isStrictImplicit(v_info_373_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_Meta_isProof(v_a_362_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
return v___x_394_;
}
else
{
v___y_376_ = v___x_393_;
goto v___jp_375_;
}
}
else
{
v___y_376_ = v___x_371_;
goto v___jp_375_;
}
}
else
{
lean_object* v___x_395_; lean_object* v___x_396_; 
lean_dec_ref(v_a_362_);
v___x_395_ = lean_box(v___x_371_);
v___x_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
return v___x_396_;
}
v___jp_375_:
{
lean_object* v___x_377_; 
v___x_377_ = l_Lean_Meta_isType(v_a_362_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
if (lean_obj_tag(v___x_377_) == 0)
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_391_; 
v_a_378_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_391_ == 0)
{
v___x_380_ = v___x_377_;
v_isShared_381_ = v_isSharedCheck_391_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_377_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_391_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
uint8_t v___x_382_; 
v___x_382_ = lean_unbox(v_a_378_);
lean_dec(v_a_378_);
if (v___x_382_ == 0)
{
lean_object* v___x_383_; lean_object* v___x_385_; 
v___x_383_ = lean_box(v___y_376_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 0, v___x_383_);
v___x_385_ = v___x_380_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v___x_383_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
else
{
lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_387_ = lean_box(v_isInstance_374_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 0, v___x_387_);
v___x_389_ = v___x_380_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_387_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
else
{
return v___x_377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg___boxed(lean_object* v_a_397_, lean_object* v_i_398_, lean_object* v_infos_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(v_a_397_, v_i_398_, v_infos_399_, v_a_400_, v_a_401_, v_a_402_, v_a_403_);
lean_dec(v_a_403_);
lean_dec_ref(v_a_402_);
lean_dec(v_a_401_);
lean_dec_ref(v_a_400_);
lean_dec_ref(v_infos_399_);
lean_dec(v_i_398_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(lean_object* v_infos_406_, lean_object* v_x_407_, lean_object* v_x_408_, lean_object* v_x_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
if (lean_obj_tag(v_x_408_) == 5)
{
lean_object* v_fn_415_; lean_object* v_arg_416_; lean_object* v___x_417_; 
v_fn_415_ = lean_ctor_get(v_x_408_, 0);
lean_inc_ref(v_fn_415_);
v_arg_416_ = lean_ctor_get(v_x_408_, 1);
lean_inc_ref_n(v_arg_416_, 2);
lean_dec_ref(v_x_408_);
v___x_417_ = l_Lean_Meta_LazyDiscrTree_MatchClone_ignoreArg(v_arg_416_, v_x_407_, v_infos_406_, v_a_410_, v_a_411_, v_a_412_, v_a_413_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; uint8_t v___x_419_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref(v___x_417_);
v___x_419_ = lean_unbox(v_a_418_);
lean_dec(v_a_418_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_420_ = lean_unsigned_to_nat(1u);
v___x_421_ = lean_nat_sub(v_x_407_, v___x_420_);
lean_dec(v_x_407_);
v___x_422_ = lean_array_push(v_x_409_, v_arg_416_);
v_x_407_ = v___x_421_;
v_x_408_ = v_fn_415_;
v_x_409_ = v___x_422_;
goto _start;
}
else
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
lean_dec_ref(v_arg_416_);
v___x_424_ = lean_unsigned_to_nat(1u);
v___x_425_ = lean_nat_sub(v_x_407_, v___x_424_);
lean_dec(v_x_407_);
v___x_426_ = l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar;
v___x_427_ = lean_array_push(v_x_409_, v___x_426_);
v_x_407_ = v___x_425_;
v_x_408_ = v_fn_415_;
v_x_409_ = v___x_427_;
goto _start;
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
lean_dec_ref(v_arg_416_);
lean_dec_ref(v_fn_415_);
lean_dec_ref(v_x_409_);
lean_dec(v_x_407_);
v_a_429_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_417_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_417_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
else
{
lean_object* v___x_437_; 
lean_dec_ref(v_x_408_);
lean_dec(v_x_407_);
v___x_437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_437_, 0, v_x_409_);
return v___x_437_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux___boxed(lean_object* v_infos_438_, lean_object* v_x_439_, lean_object* v_x_440_, lean_object* v_x_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(v_infos_438_, v_x_439_, v_x_440_, v_x_441_, v_a_442_, v_a_443_, v_a_444_, v_a_445_);
lean_dec(v_a_445_);
lean_dec_ref(v_a_444_);
lean_dec(v_a_443_);
lean_dec_ref(v_a_442_);
lean_dec_ref(v_infos_438_);
return v_res_447_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(lean_object* v_e_462_){
_start:
{
uint8_t v___x_463_; uint8_t v___x_464_; 
v___x_463_ = l_Lean_Expr_isRawNatLit(v_e_462_);
v___x_464_ = 1;
if (v___x_463_ == 0)
{
lean_object* v_f_465_; uint8_t v___x_466_; 
v_f_465_ = l_Lean_Expr_getAppFn(v_e_462_);
v___x_466_ = l_Lean_Expr_isConst(v_f_465_);
if (v___x_466_ == 0)
{
lean_dec_ref(v_f_465_);
lean_dec_ref(v_e_462_);
return v___x_463_;
}
else
{
if (v___x_463_ == 0)
{
lean_object* v_fName_467_; uint8_t v___y_469_; uint8_t v___y_482_; lean_object* v___x_490_; uint8_t v___x_491_; 
v_fName_467_ = l_Lean_Expr_constName_x21(v_f_465_);
lean_dec_ref(v_f_465_);
v___x_490_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_491_ = lean_name_eq(v_fName_467_, v___x_490_);
if (v___x_491_ == 0)
{
v___y_482_ = v___x_491_;
goto v___jp_481_;
}
else
{
lean_object* v___x_492_; lean_object* v___x_493_; uint8_t v___x_494_; 
v___x_492_ = l_Lean_Expr_getAppNumArgs(v_e_462_);
v___x_493_ = lean_unsigned_to_nat(1u);
v___x_494_ = lean_nat_dec_eq(v___x_492_, v___x_493_);
lean_dec(v___x_492_);
v___y_482_ = v___x_494_;
goto v___jp_481_;
}
v___jp_468_:
{
if (v___y_469_ == 0)
{
lean_object* v___x_470_; uint8_t v___x_471_; 
v___x_470_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2));
v___x_471_ = lean_name_eq(v_fName_467_, v___x_470_);
lean_dec(v_fName_467_);
if (v___x_471_ == 0)
{
lean_dec_ref(v_e_462_);
if (v___x_471_ == 0)
{
return v___x_471_;
}
else
{
return v___x_464_;
}
}
else
{
lean_object* v___x_472_; lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_472_ = l_Lean_Expr_getAppNumArgs(v_e_462_);
lean_dec_ref(v_e_462_);
v___x_473_ = lean_unsigned_to_nat(0u);
v___x_474_ = lean_nat_dec_eq(v___x_472_, v___x_473_);
lean_dec(v___x_472_);
if (v___x_474_ == 0)
{
return v___x_474_;
}
else
{
return v___x_464_;
}
}
}
else
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
lean_dec(v_fName_467_);
v___x_475_ = lean_unsigned_to_nat(1u);
v___x_476_ = l_Lean_Expr_getAppNumArgs(v_e_462_);
v___x_477_ = lean_nat_sub(v___x_476_, v___x_475_);
lean_dec(v___x_476_);
v___x_478_ = lean_nat_sub(v___x_477_, v___x_475_);
lean_dec(v___x_477_);
v___x_479_ = l_Lean_Expr_getRevArg_x21(v_e_462_, v___x_478_);
lean_dec_ref(v_e_462_);
v_e_462_ = v___x_479_;
goto _start;
}
}
v___jp_481_:
{
if (v___y_482_ == 0)
{
lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_483_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5));
v___x_484_ = lean_name_eq(v_fName_467_, v___x_483_);
if (v___x_484_ == 0)
{
v___y_469_ = v___x_484_;
goto v___jp_468_;
}
else
{
lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_485_ = l_Lean_Expr_getAppNumArgs(v_e_462_);
v___x_486_ = lean_unsigned_to_nat(3u);
v___x_487_ = lean_nat_dec_eq(v___x_485_, v___x_486_);
lean_dec(v___x_485_);
v___y_469_ = v___x_487_;
goto v___jp_468_;
}
}
else
{
lean_object* v___x_488_; 
lean_dec(v_fName_467_);
v___x_488_ = l_Lean_Expr_appArg_x21(v_e_462_);
lean_dec_ref(v_e_462_);
v_e_462_ = v___x_488_;
goto _start;
}
}
}
else
{
lean_dec_ref(v_f_465_);
lean_dec_ref(v_e_462_);
return v___x_463_;
}
}
}
else
{
lean_dec_ref(v_e_462_);
return v___x_464_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___boxed(lean_object* v_e_495_){
_start:
{
uint8_t v_res_496_; lean_object* v_r_497_; 
v_res_496_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v_e_495_);
v_r_497_ = lean_box(v_res_496_);
return v_r_497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(lean_object* v_e_500_){
_start:
{
uint8_t v___y_502_; lean_object* v_f_505_; 
v_f_505_ = l_Lean_Expr_getAppFn(v_e_500_);
switch(lean_obj_tag(v_f_505_))
{
case 9:
{
lean_object* v_a_506_; 
lean_dec_ref(v_e_500_);
v_a_506_ = lean_ctor_get(v_f_505_, 0);
lean_inc_ref(v_a_506_);
lean_dec_ref(v_f_505_);
if (lean_obj_tag(v_a_506_) == 0)
{
lean_object* v_val_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_514_; 
v_val_507_ = lean_ctor_get(v_a_506_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v_a_506_);
if (v_isSharedCheck_514_ == 0)
{
v___x_509_ = v_a_506_;
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_val_507_);
lean_dec(v_a_506_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_510_ == 0)
{
lean_ctor_set_tag(v___x_509_, 1);
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_val_507_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
else
{
lean_object* v___x_515_; 
lean_dec_ref(v_a_506_);
v___x_515_ = lean_box(0);
return v___x_515_;
}
}
case 4:
{
lean_object* v_declName_516_; uint8_t v___y_518_; uint8_t v___y_531_; lean_object* v___x_549_; uint8_t v___x_550_; 
v_declName_516_ = lean_ctor_get(v_f_505_, 0);
lean_inc(v_declName_516_);
lean_dec_ref(v_f_505_);
v___x_549_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_550_ = lean_name_eq(v_declName_516_, v___x_549_);
if (v___x_550_ == 0)
{
v___y_531_ = v___x_550_;
goto v___jp_530_;
}
else
{
lean_object* v___x_551_; lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_551_ = l_Lean_Expr_getAppNumArgs(v_e_500_);
v___x_552_ = lean_unsigned_to_nat(1u);
v___x_553_ = lean_nat_dec_eq(v___x_551_, v___x_552_);
lean_dec(v___x_551_);
v___y_531_ = v___x_553_;
goto v___jp_530_;
}
v___jp_517_:
{
if (v___y_518_ == 0)
{
lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_519_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__2));
v___x_520_ = lean_name_eq(v_declName_516_, v___x_519_);
lean_dec(v_declName_516_);
if (v___x_520_ == 0)
{
lean_dec_ref(v_e_500_);
v___y_502_ = v___x_520_;
goto v___jp_501_;
}
else
{
lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_521_ = l_Lean_Expr_getAppNumArgs(v_e_500_);
lean_dec_ref(v_e_500_);
v___x_522_ = lean_unsigned_to_nat(0u);
v___x_523_ = lean_nat_dec_eq(v___x_521_, v___x_522_);
lean_dec(v___x_521_);
v___y_502_ = v___x_523_;
goto v___jp_501_;
}
}
else
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
lean_dec(v_declName_516_);
v___x_524_ = lean_unsigned_to_nat(1u);
v___x_525_ = l_Lean_Expr_getAppNumArgs(v_e_500_);
v___x_526_ = lean_nat_sub(v___x_525_, v___x_524_);
lean_dec(v___x_525_);
v___x_527_ = lean_nat_sub(v___x_526_, v___x_524_);
lean_dec(v___x_526_);
v___x_528_ = l_Lean_Expr_getRevArg_x21(v_e_500_, v___x_527_);
lean_dec_ref(v_e_500_);
v_e_500_ = v___x_528_;
goto _start;
}
}
v___jp_530_:
{
if (v___y_531_ == 0)
{
lean_object* v___x_532_; uint8_t v___x_533_; 
v___x_532_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__5));
v___x_533_ = lean_name_eq(v_declName_516_, v___x_532_);
if (v___x_533_ == 0)
{
v___y_518_ = v___x_533_;
goto v___jp_517_;
}
else
{
lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v___x_534_ = l_Lean_Expr_getAppNumArgs(v_e_500_);
v___x_535_ = lean_unsigned_to_nat(3u);
v___x_536_ = lean_nat_dec_eq(v___x_534_, v___x_535_);
lean_dec(v___x_534_);
v___y_518_ = v___x_536_;
goto v___jp_517_;
}
}
else
{
lean_object* v___x_537_; lean_object* v___x_538_; 
lean_dec(v_declName_516_);
v___x_537_ = l_Lean_Expr_appArg_x21(v_e_500_);
lean_dec_ref(v_e_500_);
v___x_538_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(v___x_537_);
if (lean_obj_tag(v___x_538_) == 0)
{
return v___x_538_;
}
else
{
lean_object* v_val_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_548_; 
v_val_539_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_548_ == 0)
{
v___x_541_ = v___x_538_;
v_isShared_542_ = v_isSharedCheck_548_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_val_539_);
lean_dec(v___x_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_548_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_546_; 
v___x_543_ = lean_unsigned_to_nat(1u);
v___x_544_ = lean_nat_add(v_val_539_, v___x_543_);
lean_dec(v_val_539_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v___x_544_);
v___x_546_ = v___x_541_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
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
}
default: 
{
lean_object* v___x_554_; 
lean_dec_ref(v_f_505_);
lean_dec_ref(v_e_500_);
v___x_554_ = lean_box(0);
return v___x_554_;
}
}
v___jp_501_:
{
if (v___y_502_ == 0)
{
lean_object* v___x_503_; 
v___x_503_ = lean_box(0);
return v___x_503_;
}
else
{
lean_object* v___x_504_; 
v___x_504_ = ((lean_object*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop___closed__0));
return v___x_504_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(lean_object* v_e_555_){
_start:
{
uint8_t v___x_556_; 
lean_inc_ref(v_e_555_);
v___x_556_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v_e_555_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; 
lean_dec_ref(v_e_555_);
v___x_557_ = lean_box(0);
return v___x_557_;
}
else
{
lean_object* v___x_558_; 
v___x_558_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f_loop(v_e_555_);
if (lean_obj_tag(v___x_558_) == 1)
{
lean_object* v_val_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_567_; 
v_val_559_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_567_ == 0)
{
v___x_561_ = v___x_558_;
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_val_559_);
lean_dec(v___x_558_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_567_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v___x_565_; 
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v_val_559_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_563_);
v___x_565_ = v___x_561_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_563_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
else
{
lean_object* v___x_568_; 
lean_dec(v___x_558_);
v___x_568_ = lean_box(0);
return v___x_568_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(lean_object* v_e_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_){
_start:
{
lean_object* v___x_577_; 
lean_inc(v_a_575_);
lean_inc_ref(v_a_574_);
lean_inc(v_a_573_);
lean_inc_ref(v_a_572_);
v___x_577_ = lean_whnf(v_e_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_588_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_588_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_588_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_588_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_582_; uint8_t v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_582_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___closed__0));
v___x_583_ = l_Lean_Expr_isConstOf(v_a_578_, v___x_582_);
lean_dec(v_a_578_);
v___x_584_ = lean_box(v___x_583_);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 0, v___x_584_);
v___x_586_ = v___x_580_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
v_a_589_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_577_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_577_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType___boxed(lean_object* v_e_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v_e_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_);
lean_dec(v_a_601_);
lean_dec_ref(v_a_600_);
lean_dec(v_a_599_);
lean_dec_ref(v_a_598_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(lean_object* v_fName_617_, lean_object* v_e_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
uint8_t v___y_625_; uint8_t v___y_655_; uint8_t v___y_680_; lean_object* v___x_690_; uint8_t v___x_691_; 
v___x_690_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__6));
v___x_691_ = lean_name_eq(v_fName_617_, v___x_690_);
if (v___x_691_ == 0)
{
v___y_680_ = v___x_691_;
goto v___jp_679_;
}
else
{
lean_object* v___x_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_692_ = l_Lean_Expr_getAppNumArgs(v_e_618_);
v___x_693_ = lean_unsigned_to_nat(2u);
v___x_694_ = lean_nat_dec_eq(v___x_692_, v___x_693_);
lean_dec(v___x_692_);
v___y_680_ = v___x_694_;
goto v___jp_679_;
}
v___jp_624_:
{
if (v___y_625_ == 0)
{
lean_object* v___x_626_; uint8_t v___x_627_; 
v___x_626_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral___closed__7));
v___x_627_ = lean_name_eq(v_fName_617_, v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lean_box(v___x_627_);
v___x_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
return v___x_629_;
}
else
{
lean_object* v___x_630_; lean_object* v___x_631_; uint8_t v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_630_ = l_Lean_Expr_getAppNumArgs(v_e_618_);
v___x_631_ = lean_unsigned_to_nat(1u);
v___x_632_ = lean_nat_dec_eq(v___x_630_, v___x_631_);
lean_dec(v___x_630_);
v___x_633_ = lean_box(v___x_632_);
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v___x_633_);
return v___x_634_;
}
}
else
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_635_ = lean_unsigned_to_nat(1u);
v___x_636_ = l_Lean_Expr_getAppNumArgs(v_e_618_);
v___x_637_ = lean_nat_sub(v___x_636_, v___x_635_);
lean_dec(v___x_636_);
v___x_638_ = lean_nat_sub(v___x_637_, v___x_635_);
lean_dec(v___x_637_);
v___x_639_ = l_Lean_Expr_getRevArg_x21(v_e_618_, v___x_638_);
v___x_640_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v___x_639_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; uint8_t v___x_642_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
v___x_642_ = lean_unbox(v_a_641_);
lean_dec(v_a_641_);
if (v___x_642_ == 0)
{
return v___x_640_;
}
else
{
lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_652_; 
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_652_ == 0)
{
lean_object* v_unused_653_; 
v_unused_653_ = lean_ctor_get(v___x_640_, 0);
lean_dec(v_unused_653_);
v___x_644_ = v___x_640_;
v_isShared_645_ = v_isSharedCheck_652_;
goto v_resetjp_643_;
}
else
{
lean_dec(v___x_640_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_652_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_646_; uint8_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_646_ = l_Lean_Expr_appArg_x21(v_e_618_);
v___x_647_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v___x_646_);
v___x_648_ = lean_box(v___x_647_);
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 0, v___x_648_);
v___x_650_ = v___x_644_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_648_);
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
else
{
return v___x_640_;
}
}
}
v___jp_654_:
{
if (v___y_655_ == 0)
{
lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_656_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__2));
v___x_657_ = lean_name_eq(v_fName_617_, v___x_656_);
if (v___x_657_ == 0)
{
v___y_625_ = v___x_657_;
goto v___jp_624_;
}
else
{
lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_658_ = l_Lean_Expr_getAppNumArgs(v_e_618_);
v___x_659_ = lean_unsigned_to_nat(6u);
v___x_660_ = lean_nat_dec_eq(v___x_658_, v___x_659_);
lean_dec(v___x_658_);
v___y_625_ = v___x_660_;
goto v___jp_624_;
}
}
else
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_661_ = l_Lean_Expr_getAppNumArgs(v_e_618_);
v___x_662_ = lean_unsigned_to_nat(1u);
v___x_663_ = lean_nat_sub(v___x_661_, v___x_662_);
lean_dec(v___x_661_);
v___x_664_ = l_Lean_Expr_getRevArg_x21(v_e_618_, v___x_663_);
v___x_665_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatType(v___x_664_, v_a_619_, v_a_620_, v_a_621_, v_a_622_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; uint8_t v___x_667_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_a_666_);
v___x_667_ = lean_unbox(v_a_666_);
lean_dec(v_a_666_);
if (v___x_667_ == 0)
{
return v___x_665_;
}
else
{
lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_677_; 
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_677_ == 0)
{
lean_object* v_unused_678_; 
v_unused_678_ = lean_ctor_get(v___x_665_, 0);
lean_dec(v_unused_678_);
v___x_669_ = v___x_665_;
v_isShared_670_ = v_isSharedCheck_677_;
goto v_resetjp_668_;
}
else
{
lean_dec(v___x_665_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_677_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v___x_671_; uint8_t v___x_672_; lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_671_ = l_Lean_Expr_appArg_x21(v_e_618_);
v___x_672_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v___x_671_);
v___x_673_ = lean_box(v___x_672_);
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 0, v___x_673_);
v___x_675_ = v___x_669_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_673_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
else
{
return v___x_665_;
}
}
}
v___jp_679_:
{
if (v___y_680_ == 0)
{
lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_681_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___closed__5));
v___x_682_ = lean_name_eq(v_fName_617_, v___x_681_);
if (v___x_682_ == 0)
{
v___y_655_ = v___x_682_;
goto v___jp_654_;
}
else
{
lean_object* v___x_683_; lean_object* v___x_684_; uint8_t v___x_685_; 
v___x_683_ = l_Lean_Expr_getAppNumArgs(v_e_618_);
v___x_684_ = lean_unsigned_to_nat(4u);
v___x_685_ = lean_nat_dec_eq(v___x_683_, v___x_684_);
lean_dec(v___x_683_);
v___y_655_ = v___x_685_;
goto v___jp_654_;
}
}
else
{
lean_object* v___x_686_; uint8_t v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_686_ = l_Lean_Expr_appArg_x21(v_e_618_);
v___x_687_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNumeral(v___x_686_);
v___x_688_ = lean_box(v___x_687_);
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
return v___x_689_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset___boxed(lean_object* v_fName_695_, lean_object* v_e_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_fName_695_, v_e_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_);
lean_dec(v_a_700_);
lean_dec_ref(v_a_699_);
lean_dec(v_a_698_);
lean_dec_ref(v_a_697_);
lean_dec_ref(v_e_696_);
lean_dec(v_fName_695_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(lean_object* v_fName_703_, lean_object* v_e_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_fName_703_, v_e_704_, v_a_705_, v_a_706_, v_a_707_, v_a_708_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar___boxed(lean_object* v_fName_711_, lean_object* v_e_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lean_Meta_LazyDiscrTree_MatchClone_shouldAddAsStar(v_fName_711_, v_e_712_, v_a_713_, v_a_714_, v_a_715_, v_a_716_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
lean_dec(v_a_714_);
lean_dec_ref(v_a_713_);
lean_dec_ref(v_e_712_);
lean_dec(v_fName_711_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(lean_object* v_e_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
uint8_t v___x_725_; 
v___x_725_ = l_Lean_Expr_hasLooseBVars(v_e_721_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_726_, 0, v_e_721_);
v___x_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
return v___x_727_;
}
else
{
uint8_t v___x_728_; uint8_t v___x_729_; 
v___x_728_ = 0;
v___x_729_ = l_Lean_Expr_isHeadBetaTarget(v_e_721_, v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; lean_object* v___x_731_; 
lean_dec_ref(v_e_721_);
v___x_730_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___closed__0));
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_732_ = l_Lean_Expr_headBeta(v_e_721_);
v___x_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v___x_733_);
return v___x_734_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0___boxed(lean_object* v_e_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__0(v_e_735_, v___y_736_, v___y_737_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(lean_object* v_e_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_744_, 0, v_e_740_);
v___x_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1___boxed(lean_object* v_e_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___lam__1(v_e_746_, v___y_747_, v___y_748_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
return v_res_750_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_756_ = l_Lean_maxRecDepthErrorMessage;
v___x_757_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_757_, 0, v___x_756_);
return v___x_757_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_759_ = l_Lean_MessageData_ofFormat(v___x_758_);
return v___x_759_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_760_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_761_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__2));
v___x_762_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_761_);
lean_ctor_set(v___x_762_, 1, v___x_760_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_763_){
_start:
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_765_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v_ref_763_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_767_, 0, v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_768_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(lean_object* v_x_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v___y_777_; lean_object* v_fileName_786_; lean_object* v_fileMap_787_; lean_object* v_options_788_; lean_object* v_currRecDepth_789_; lean_object* v_maxRecDepth_790_; lean_object* v_ref_791_; lean_object* v_currNamespace_792_; lean_object* v_openDecls_793_; lean_object* v_initHeartbeats_794_; lean_object* v_maxHeartbeats_795_; lean_object* v_quotContext_796_; lean_object* v_currMacroScope_797_; uint8_t v_diag_798_; lean_object* v_cancelTk_x3f_799_; uint8_t v_suppressElabErrors_800_; lean_object* v_inheritedTraceOptions_801_; lean_object* v___x_807_; uint8_t v___x_808_; 
v_fileName_786_ = lean_ctor_get(v___y_773_, 0);
v_fileMap_787_ = lean_ctor_get(v___y_773_, 1);
v_options_788_ = lean_ctor_get(v___y_773_, 2);
v_currRecDepth_789_ = lean_ctor_get(v___y_773_, 3);
v_maxRecDepth_790_ = lean_ctor_get(v___y_773_, 4);
v_ref_791_ = lean_ctor_get(v___y_773_, 5);
v_currNamespace_792_ = lean_ctor_get(v___y_773_, 6);
v_openDecls_793_ = lean_ctor_get(v___y_773_, 7);
v_initHeartbeats_794_ = lean_ctor_get(v___y_773_, 8);
v_maxHeartbeats_795_ = lean_ctor_get(v___y_773_, 9);
v_quotContext_796_ = lean_ctor_get(v___y_773_, 10);
v_currMacroScope_797_ = lean_ctor_get(v___y_773_, 11);
v_diag_798_ = lean_ctor_get_uint8(v___y_773_, sizeof(void*)*14);
v_cancelTk_x3f_799_ = lean_ctor_get(v___y_773_, 12);
v_suppressElabErrors_800_ = lean_ctor_get_uint8(v___y_773_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_801_ = lean_ctor_get(v___y_773_, 13);
v___x_807_ = lean_unsigned_to_nat(0u);
v___x_808_ = lean_nat_dec_eq(v_maxRecDepth_790_, v___x_807_);
if (v___x_808_ == 0)
{
uint8_t v___x_809_; 
v___x_809_ = lean_nat_dec_eq(v_currRecDepth_789_, v_maxRecDepth_790_);
if (v___x_809_ == 0)
{
goto v___jp_802_;
}
else
{
lean_object* v___x_810_; 
lean_dec_ref(v_x_771_);
lean_inc(v_ref_791_);
v___x_810_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_791_);
v___y_777_ = v___x_810_;
goto v___jp_776_;
}
}
else
{
goto v___jp_802_;
}
v___jp_776_:
{
if (lean_obj_tag(v___y_777_) == 0)
{
return v___y_777_;
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
v_a_778_ = lean_ctor_get(v___y_777_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___y_777_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___y_777_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___y_777_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
v___jp_802_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_803_ = lean_unsigned_to_nat(1u);
v___x_804_ = lean_nat_add(v_currRecDepth_789_, v___x_803_);
lean_inc_ref(v_inheritedTraceOptions_801_);
lean_inc(v_cancelTk_x3f_799_);
lean_inc(v_currMacroScope_797_);
lean_inc(v_quotContext_796_);
lean_inc(v_maxHeartbeats_795_);
lean_inc(v_initHeartbeats_794_);
lean_inc(v_openDecls_793_);
lean_inc(v_currNamespace_792_);
lean_inc(v_ref_791_);
lean_inc(v_maxRecDepth_790_);
lean_inc_ref(v_options_788_);
lean_inc_ref(v_fileMap_787_);
lean_inc_ref(v_fileName_786_);
v___x_805_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_805_, 0, v_fileName_786_);
lean_ctor_set(v___x_805_, 1, v_fileMap_787_);
lean_ctor_set(v___x_805_, 2, v_options_788_);
lean_ctor_set(v___x_805_, 3, v___x_804_);
lean_ctor_set(v___x_805_, 4, v_maxRecDepth_790_);
lean_ctor_set(v___x_805_, 5, v_ref_791_);
lean_ctor_set(v___x_805_, 6, v_currNamespace_792_);
lean_ctor_set(v___x_805_, 7, v_openDecls_793_);
lean_ctor_set(v___x_805_, 8, v_initHeartbeats_794_);
lean_ctor_set(v___x_805_, 9, v_maxHeartbeats_795_);
lean_ctor_set(v___x_805_, 10, v_quotContext_796_);
lean_ctor_set(v___x_805_, 11, v_currMacroScope_797_);
lean_ctor_set(v___x_805_, 12, v_cancelTk_x3f_799_);
lean_ctor_set(v___x_805_, 13, v_inheritedTraceOptions_801_);
lean_ctor_set_uint8(v___x_805_, sizeof(void*)*14, v_diag_798_);
lean_ctor_set_uint8(v___x_805_, sizeof(void*)*14 + 1, v_suppressElabErrors_800_);
lean_inc(v___y_774_);
lean_inc(v___y_772_);
v___x_806_ = lean_apply_4(v_x_771_, v___y_772_, v___x_805_, v___y_774_, lean_box(0));
v___y_777_ = v___x_806_;
goto v___jp_776_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v_x_811_, v___y_812_, v___y_813_, v___y_814_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v___y_812_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_817_, lean_object* v_x_818_){
_start:
{
if (lean_obj_tag(v_x_818_) == 0)
{
lean_object* v___x_819_; 
v___x_819_ = lean_box(0);
return v___x_819_;
}
else
{
lean_object* v_key_820_; lean_object* v_value_821_; lean_object* v_tail_822_; uint8_t v___x_823_; 
v_key_820_ = lean_ctor_get(v_x_818_, 0);
v_value_821_ = lean_ctor_get(v_x_818_, 1);
v_tail_822_ = lean_ctor_get(v_x_818_, 2);
v___x_823_ = l_Lean_ExprStructEq_beq(v_key_820_, v_a_817_);
if (v___x_823_ == 0)
{
v_x_818_ = v_tail_822_;
goto _start;
}
else
{
lean_object* v___x_825_; 
lean_inc(v_value_821_);
v___x_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_825_, 0, v_value_821_);
return v___x_825_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_826_, lean_object* v_x_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(v_a_826_, v_x_827_);
lean_dec(v_x_827_);
lean_dec_ref(v_a_826_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(lean_object* v_m_829_, lean_object* v_a_830_){
_start:
{
lean_object* v_buckets_831_; lean_object* v___x_832_; uint64_t v___x_833_; uint64_t v___x_834_; uint64_t v___x_835_; uint64_t v_fold_836_; uint64_t v___x_837_; uint64_t v___x_838_; uint64_t v___x_839_; size_t v___x_840_; size_t v___x_841_; size_t v___x_842_; size_t v___x_843_; size_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v_buckets_831_ = lean_ctor_get(v_m_829_, 1);
v___x_832_ = lean_array_get_size(v_buckets_831_);
v___x_833_ = l_Lean_ExprStructEq_hash(v_a_830_);
v___x_834_ = 32ULL;
v___x_835_ = lean_uint64_shift_right(v___x_833_, v___x_834_);
v_fold_836_ = lean_uint64_xor(v___x_833_, v___x_835_);
v___x_837_ = 16ULL;
v___x_838_ = lean_uint64_shift_right(v_fold_836_, v___x_837_);
v___x_839_ = lean_uint64_xor(v_fold_836_, v___x_838_);
v___x_840_ = lean_uint64_to_usize(v___x_839_);
v___x_841_ = lean_usize_of_nat(v___x_832_);
v___x_842_ = ((size_t)1ULL);
v___x_843_ = lean_usize_sub(v___x_841_, v___x_842_);
v___x_844_ = lean_usize_land(v___x_840_, v___x_843_);
v___x_845_ = lean_array_uget_borrowed(v_buckets_831_, v___x_844_);
v___x_846_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(v_a_830_, v___x_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_847_, lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(v_m_847_, v_a_848_);
lean_dec_ref(v_a_848_);
lean_dec_ref(v_m_847_);
return v_res_849_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9___redArg(lean_object* v_a_850_, lean_object* v_x_851_){
_start:
{
if (lean_obj_tag(v_x_851_) == 0)
{
uint8_t v___x_852_; 
v___x_852_ = 0;
return v___x_852_;
}
else
{
lean_object* v_key_853_; lean_object* v_tail_854_; uint8_t v___x_855_; 
v_key_853_ = lean_ctor_get(v_x_851_, 0);
v_tail_854_ = lean_ctor_get(v_x_851_, 2);
v___x_855_ = l_Lean_ExprStructEq_beq(v_key_853_, v_a_850_);
if (v___x_855_ == 0)
{
v_x_851_ = v_tail_854_;
goto _start;
}
else
{
return v___x_855_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9___redArg___boxed(lean_object* v_a_857_, lean_object* v_x_858_){
_start:
{
uint8_t v_res_859_; lean_object* v_r_860_; 
v_res_859_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9___redArg(v_a_857_, v_x_858_);
lean_dec(v_x_858_);
lean_dec_ref(v_a_857_);
v_r_860_ = lean_box(v_res_859_);
return v_r_860_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(lean_object* v_x_861_, lean_object* v_x_862_){
_start:
{
if (lean_obj_tag(v_x_862_) == 0)
{
return v_x_861_;
}
else
{
lean_object* v_key_863_; lean_object* v_value_864_; lean_object* v_tail_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_888_; 
v_key_863_ = lean_ctor_get(v_x_862_, 0);
v_value_864_ = lean_ctor_get(v_x_862_, 1);
v_tail_865_ = lean_ctor_get(v_x_862_, 2);
v_isSharedCheck_888_ = !lean_is_exclusive(v_x_862_);
if (v_isSharedCheck_888_ == 0)
{
v___x_867_ = v_x_862_;
v_isShared_868_ = v_isSharedCheck_888_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_tail_865_);
lean_inc(v_value_864_);
lean_inc(v_key_863_);
lean_dec(v_x_862_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_888_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_869_; uint64_t v___x_870_; uint64_t v___x_871_; uint64_t v___x_872_; uint64_t v_fold_873_; uint64_t v___x_874_; uint64_t v___x_875_; uint64_t v___x_876_; size_t v___x_877_; size_t v___x_878_; size_t v___x_879_; size_t v___x_880_; size_t v___x_881_; lean_object* v___x_882_; lean_object* v___x_884_; 
v___x_869_ = lean_array_get_size(v_x_861_);
v___x_870_ = l_Lean_ExprStructEq_hash(v_key_863_);
v___x_871_ = 32ULL;
v___x_872_ = lean_uint64_shift_right(v___x_870_, v___x_871_);
v_fold_873_ = lean_uint64_xor(v___x_870_, v___x_872_);
v___x_874_ = 16ULL;
v___x_875_ = lean_uint64_shift_right(v_fold_873_, v___x_874_);
v___x_876_ = lean_uint64_xor(v_fold_873_, v___x_875_);
v___x_877_ = lean_uint64_to_usize(v___x_876_);
v___x_878_ = lean_usize_of_nat(v___x_869_);
v___x_879_ = ((size_t)1ULL);
v___x_880_ = lean_usize_sub(v___x_878_, v___x_879_);
v___x_881_ = lean_usize_land(v___x_877_, v___x_880_);
v___x_882_ = lean_array_uget_borrowed(v_x_861_, v___x_881_);
lean_inc(v___x_882_);
if (v_isShared_868_ == 0)
{
lean_ctor_set(v___x_867_, 2, v___x_882_);
v___x_884_ = v___x_867_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v_key_863_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_value_864_);
lean_ctor_set(v_reuseFailAlloc_887_, 2, v___x_882_);
v___x_884_ = v_reuseFailAlloc_887_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
lean_object* v___x_885_; 
v___x_885_ = lean_array_uset(v_x_861_, v___x_881_, v___x_884_);
v_x_861_ = v___x_885_;
v_x_862_ = v_tail_865_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(lean_object* v_i_889_, lean_object* v_source_890_, lean_object* v_target_891_){
_start:
{
lean_object* v___x_892_; uint8_t v___x_893_; 
v___x_892_ = lean_array_get_size(v_source_890_);
v___x_893_ = lean_nat_dec_lt(v_i_889_, v___x_892_);
if (v___x_893_ == 0)
{
lean_dec_ref(v_source_890_);
lean_dec(v_i_889_);
return v_target_891_;
}
else
{
lean_object* v_es_894_; lean_object* v___x_895_; lean_object* v_source_896_; lean_object* v_target_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v_es_894_ = lean_array_fget(v_source_890_, v_i_889_);
v___x_895_ = lean_box(0);
v_source_896_ = lean_array_fset(v_source_890_, v_i_889_, v___x_895_);
v_target_897_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(v_target_891_, v_es_894_);
v___x_898_ = lean_unsigned_to_nat(1u);
v___x_899_ = lean_nat_add(v_i_889_, v___x_898_);
lean_dec(v_i_889_);
v_i_889_ = v___x_899_;
v_source_890_ = v_source_896_;
v_target_891_ = v_target_897_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_data_901_){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v_nbuckets_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_902_ = lean_array_get_size(v_data_901_);
v___x_903_ = lean_unsigned_to_nat(2u);
v_nbuckets_904_ = lean_nat_mul(v___x_902_, v___x_903_);
v___x_905_ = lean_unsigned_to_nat(0u);
v___x_906_ = lean_box(0);
v___x_907_ = lean_mk_array(v_nbuckets_904_, v___x_906_);
v___x_908_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(v___x_905_, v_data_901_, v___x_907_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_a_909_, lean_object* v_b_910_, lean_object* v_x_911_){
_start:
{
if (lean_obj_tag(v_x_911_) == 0)
{
lean_dec(v_b_910_);
lean_dec_ref(v_a_909_);
return v_x_911_;
}
else
{
lean_object* v_key_912_; lean_object* v_value_913_; lean_object* v_tail_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_926_; 
v_key_912_ = lean_ctor_get(v_x_911_, 0);
v_value_913_ = lean_ctor_get(v_x_911_, 1);
v_tail_914_ = lean_ctor_get(v_x_911_, 2);
v_isSharedCheck_926_ = !lean_is_exclusive(v_x_911_);
if (v_isSharedCheck_926_ == 0)
{
v___x_916_ = v_x_911_;
v_isShared_917_ = v_isSharedCheck_926_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_tail_914_);
lean_inc(v_value_913_);
lean_inc(v_key_912_);
lean_dec(v_x_911_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_926_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
uint8_t v___x_918_; 
v___x_918_ = l_Lean_ExprStructEq_beq(v_key_912_, v_a_909_);
if (v___x_918_ == 0)
{
lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_919_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(v_a_909_, v_b_910_, v_tail_914_);
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 2, v___x_919_);
v___x_921_ = v___x_916_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_key_912_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v_value_913_);
lean_ctor_set(v_reuseFailAlloc_922_, 2, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
else
{
lean_object* v___x_924_; 
lean_dec(v_value_913_);
lean_dec(v_key_912_);
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 1, v_b_910_);
lean_ctor_set(v___x_916_, 0, v_a_909_);
v___x_924_ = v___x_916_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_a_909_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_b_910_);
lean_ctor_set(v_reuseFailAlloc_925_, 2, v_tail_914_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(lean_object* v_m_927_, lean_object* v_a_928_, lean_object* v_b_929_){
_start:
{
lean_object* v_size_930_; lean_object* v_buckets_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_974_; 
v_size_930_ = lean_ctor_get(v_m_927_, 0);
v_buckets_931_ = lean_ctor_get(v_m_927_, 1);
v_isSharedCheck_974_ = !lean_is_exclusive(v_m_927_);
if (v_isSharedCheck_974_ == 0)
{
v___x_933_ = v_m_927_;
v_isShared_934_ = v_isSharedCheck_974_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_buckets_931_);
lean_inc(v_size_930_);
lean_dec(v_m_927_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_974_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; uint64_t v___x_936_; uint64_t v___x_937_; uint64_t v___x_938_; uint64_t v_fold_939_; uint64_t v___x_940_; uint64_t v___x_941_; uint64_t v___x_942_; size_t v___x_943_; size_t v___x_944_; size_t v___x_945_; size_t v___x_946_; size_t v___x_947_; lean_object* v_bkt_948_; uint8_t v___x_949_; 
v___x_935_ = lean_array_get_size(v_buckets_931_);
v___x_936_ = l_Lean_ExprStructEq_hash(v_a_928_);
v___x_937_ = 32ULL;
v___x_938_ = lean_uint64_shift_right(v___x_936_, v___x_937_);
v_fold_939_ = lean_uint64_xor(v___x_936_, v___x_938_);
v___x_940_ = 16ULL;
v___x_941_ = lean_uint64_shift_right(v_fold_939_, v___x_940_);
v___x_942_ = lean_uint64_xor(v_fold_939_, v___x_941_);
v___x_943_ = lean_uint64_to_usize(v___x_942_);
v___x_944_ = lean_usize_of_nat(v___x_935_);
v___x_945_ = ((size_t)1ULL);
v___x_946_ = lean_usize_sub(v___x_944_, v___x_945_);
v___x_947_ = lean_usize_land(v___x_943_, v___x_946_);
v_bkt_948_ = lean_array_uget_borrowed(v_buckets_931_, v___x_947_);
v___x_949_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9___redArg(v_a_928_, v_bkt_948_);
if (v___x_949_ == 0)
{
lean_object* v___x_950_; lean_object* v_size_x27_951_; lean_object* v___x_952_; lean_object* v_buckets_x27_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_950_ = lean_unsigned_to_nat(1u);
v_size_x27_951_ = lean_nat_add(v_size_930_, v___x_950_);
lean_dec(v_size_930_);
lean_inc(v_bkt_948_);
v___x_952_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_952_, 0, v_a_928_);
lean_ctor_set(v___x_952_, 1, v_b_929_);
lean_ctor_set(v___x_952_, 2, v_bkt_948_);
v_buckets_x27_953_ = lean_array_uset(v_buckets_931_, v___x_947_, v___x_952_);
v___x_954_ = lean_unsigned_to_nat(4u);
v___x_955_ = lean_nat_mul(v_size_x27_951_, v___x_954_);
v___x_956_ = lean_unsigned_to_nat(3u);
v___x_957_ = lean_nat_div(v___x_955_, v___x_956_);
lean_dec(v___x_955_);
v___x_958_ = lean_array_get_size(v_buckets_x27_953_);
v___x_959_ = lean_nat_dec_le(v___x_957_, v___x_958_);
lean_dec(v___x_957_);
if (v___x_959_ == 0)
{
lean_object* v_val_960_; lean_object* v___x_962_; 
v_val_960_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_buckets_x27_953_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v_val_960_);
lean_ctor_set(v___x_933_, 0, v_size_x27_951_);
v___x_962_ = v___x_933_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_size_x27_951_);
lean_ctor_set(v_reuseFailAlloc_963_, 1, v_val_960_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
else
{
lean_object* v___x_965_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v_buckets_x27_953_);
lean_ctor_set(v___x_933_, 0, v_size_x27_951_);
v___x_965_ = v___x_933_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_size_x27_951_);
lean_ctor_set(v_reuseFailAlloc_966_, 1, v_buckets_x27_953_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
else
{
lean_object* v___x_967_; lean_object* v_buckets_x27_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_972_; 
lean_inc(v_bkt_948_);
v___x_967_ = lean_box(0);
v_buckets_x27_968_ = lean_array_uset(v_buckets_931_, v___x_947_, v___x_967_);
v___x_969_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(v_a_928_, v_b_929_, v_bkt_948_);
v___x_970_ = lean_array_uset(v_buckets_x27_968_, v___x_947_, v___x_969_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v___x_970_);
v___x_972_ = v___x_933_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_size_930_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v___x_970_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(lean_object* v_a_975_, lean_object* v_e_976_, lean_object* v_a_977_){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_979_ = lean_st_ref_take(v_a_975_);
v___x_980_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(v___x_979_, v_e_976_, v_a_977_);
v___x_981_ = lean_st_ref_set(v_a_975_, v___x_980_);
v___x_982_ = lean_box(0);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed(lean_object* v_a_983_, lean_object* v_e_984_, lean_object* v_a_985_, lean_object* v___y_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2(v_a_983_, v_e_984_, v_a_985_);
lean_dec(v_a_983_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_988_, lean_object* v_x_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_993_ = lean_apply_1(v_x_989_, lean_box(0));
v___x_994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_995_, lean_object* v_x_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(v_00_u03b1_995_, v_x_996_, v___y_997_, v___y_998_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
return v_res_1000_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1001_; lean_object* v_dummy_1002_; 
v___x_1001_ = lean_box(0);
v_dummy_1002_ = l_Lean_Expr_sort___override(v___x_1001_);
return v_dummy_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(lean_object* v_pre_1003_, lean_object* v_post_1004_, size_t v_sz_1005_, size_t v_i_1006_, lean_object* v_bs_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
uint8_t v___x_1012_; 
v___x_1012_ = lean_usize_dec_lt(v_i_1006_, v_sz_1005_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; 
lean_dec_ref(v_post_1004_);
lean_dec_ref(v_pre_1003_);
v___x_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1013_, 0, v_bs_1007_);
return v___x_1013_;
}
else
{
lean_object* v_v_1014_; lean_object* v___x_1015_; 
v_v_1014_ = lean_array_uget_borrowed(v_bs_1007_, v_i_1006_);
lean_inc(v_v_1014_);
lean_inc_ref(v_post_1004_);
lean_inc_ref(v_pre_1003_);
v___x_1015_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1003_, v_post_1004_, v_v_1014_, v___y_1008_, v___y_1009_, v___y_1010_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; lean_object* v___x_1017_; lean_object* v_bs_x27_1018_; size_t v___x_1019_; size_t v___x_1020_; lean_object* v___x_1021_; 
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
lean_inc(v_a_1016_);
lean_dec_ref(v___x_1015_);
v___x_1017_ = lean_unsigned_to_nat(0u);
v_bs_x27_1018_ = lean_array_uset(v_bs_1007_, v_i_1006_, v___x_1017_);
v___x_1019_ = ((size_t)1ULL);
v___x_1020_ = lean_usize_add(v_i_1006_, v___x_1019_);
v___x_1021_ = lean_array_uset(v_bs_x27_1018_, v_i_1006_, v_a_1016_);
v_i_1006_ = v___x_1020_;
v_bs_1007_ = v___x_1021_;
goto _start;
}
else
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
lean_dec_ref(v_bs_1007_);
lean_dec_ref(v_post_1004_);
lean_dec_ref(v_pre_1003_);
v_a_1023_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1025_ = v___x_1015_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1015_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_a_1023_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(lean_object* v_pre_1031_, lean_object* v_post_1032_, lean_object* v_x_1033_, lean_object* v_x_1034_, lean_object* v_x_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
if (lean_obj_tag(v_x_1033_) == 5)
{
lean_object* v_fn_1040_; lean_object* v_arg_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v_fn_1040_ = lean_ctor_get(v_x_1033_, 0);
lean_inc_ref(v_fn_1040_);
v_arg_1041_ = lean_ctor_get(v_x_1033_, 1);
lean_inc_ref(v_arg_1041_);
lean_dec_ref(v_x_1033_);
v___x_1042_ = lean_array_set(v_x_1034_, v_x_1035_, v_arg_1041_);
v___x_1043_ = lean_unsigned_to_nat(1u);
v___x_1044_ = lean_nat_sub(v_x_1035_, v___x_1043_);
lean_dec(v_x_1035_);
v_x_1033_ = v_fn_1040_;
v_x_1034_ = v___x_1042_;
v_x_1035_ = v___x_1044_;
goto _start;
}
else
{
lean_object* v___x_1046_; 
lean_dec(v_x_1035_);
lean_inc_ref(v_post_1032_);
lean_inc_ref(v_pre_1031_);
v___x_1046_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1031_, v_post_1032_, v_x_1033_, v___y_1036_, v___y_1037_, v___y_1038_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; size_t v_sz_1048_; size_t v___x_1049_; lean_object* v___x_1050_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
lean_inc(v_a_1047_);
lean_dec_ref(v___x_1046_);
v_sz_1048_ = lean_array_size(v_x_1034_);
v___x_1049_ = ((size_t)0ULL);
lean_inc_ref(v_post_1032_);
lean_inc_ref(v_pre_1031_);
v___x_1050_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(v_pre_1031_, v_post_1032_, v_sz_1048_, v___x_1049_, v_x_1034_, v___y_1036_, v___y_1037_, v___y_1038_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1051_);
lean_dec_ref(v___x_1050_);
v___x_1052_ = l_Lean_mkAppN(v_a_1047_, v_a_1051_);
lean_dec(v_a_1051_);
v___x_1053_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1031_, v_post_1032_, v___x_1052_, v___y_1036_, v___y_1037_, v___y_1038_);
return v___x_1053_;
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
lean_dec(v_a_1047_);
lean_dec_ref(v_post_1032_);
lean_dec_ref(v_pre_1031_);
v_a_1054_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1050_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1050_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
else
{
lean_dec_ref(v_x_1034_);
lean_dec_ref(v_post_1032_);
lean_dec_ref(v_pre_1031_);
return v___x_1046_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(lean_object* v_pre_1062_, lean_object* v_e_1063_, lean_object* v_post_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v___y_1070_; lean_object* v___y_1071_; uint8_t v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1074_; lean_object* v___y_1075_; lean_object* v___y_1076_; uint8_t v___y_1077_; lean_object* v___y_1087_; lean_object* v___y_1088_; uint8_t v___y_1089_; lean_object* v___y_1090_; lean_object* v___y_1091_; uint8_t v___y_1092_; lean_object* v___y_1100_; lean_object* v___y_1101_; lean_object* v___y_1102_; lean_object* v___y_1103_; uint8_t v___y_1104_; uint8_t v___y_1105_; lean_object* v___x_1112_; 
lean_inc_ref(v_pre_1062_);
lean_inc(v___y_1067_);
lean_inc_ref(v___y_1066_);
lean_inc_ref(v_e_1063_);
v___x_1112_ = lean_apply_4(v_pre_1062_, v_e_1063_, v___y_1066_, v___y_1067_, lean_box(0));
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1202_; 
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1115_ = v___x_1112_;
v_isShared_1116_ = v_isSharedCheck_1202_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___x_1112_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1202_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___y_1118_; 
switch(lean_obj_tag(v_a_1113_))
{
case 0:
{
lean_object* v_e_1192_; lean_object* v___x_1194_; 
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_e_1063_);
lean_dec_ref(v_pre_1062_);
v_e_1192_ = lean_ctor_get(v_a_1113_, 0);
lean_inc_ref(v_e_1192_);
lean_dec_ref(v_a_1113_);
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 0, v_e_1192_);
v___x_1194_ = v___x_1115_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v_e_1192_);
v___x_1194_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
return v___x_1194_;
}
}
case 1:
{
lean_object* v_e_1196_; lean_object* v___x_1197_; 
lean_del_object(v___x_1115_);
lean_dec_ref(v_e_1063_);
v_e_1196_ = lean_ctor_get(v_a_1113_, 0);
lean_inc_ref(v_e_1196_);
lean_dec_ref(v_a_1113_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1197_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_e_1196_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; lean_object* v___x_1199_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1198_);
lean_dec_ref(v___x_1197_);
v___x_1199_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v_a_1198_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1199_;
}
else
{
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1197_;
}
}
default: 
{
lean_object* v_e_x3f_1200_; 
lean_del_object(v___x_1115_);
v_e_x3f_1200_ = lean_ctor_get(v_a_1113_, 0);
lean_inc(v_e_x3f_1200_);
lean_dec_ref(v_a_1113_);
if (lean_obj_tag(v_e_x3f_1200_) == 0)
{
v___y_1118_ = v_e_1063_;
goto v___jp_1117_;
}
else
{
lean_object* v_val_1201_; 
lean_dec_ref(v_e_1063_);
v_val_1201_ = lean_ctor_get(v_e_x3f_1200_, 0);
lean_inc(v_val_1201_);
lean_dec_ref(v_e_x3f_1200_);
v___y_1118_ = v_val_1201_;
goto v___jp_1117_;
}
}
}
v___jp_1117_:
{
switch(lean_obj_tag(v___y_1118_))
{
case 7:
{
lean_object* v_binderName_1119_; lean_object* v_binderType_1120_; lean_object* v_body_1121_; uint8_t v_binderInfo_1122_; lean_object* v___x_1123_; 
v_binderName_1119_ = lean_ctor_get(v___y_1118_, 0);
lean_inc(v_binderName_1119_);
v_binderType_1120_ = lean_ctor_get(v___y_1118_, 1);
v_body_1121_ = lean_ctor_get(v___y_1118_, 2);
v_binderInfo_1122_ = lean_ctor_get_uint8(v___y_1118_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1120_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1123_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_binderType_1120_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1123_) == 0)
{
lean_object* v_a_1124_; lean_object* v___x_1125_; 
v_a_1124_ = lean_ctor_get(v___x_1123_, 0);
lean_inc(v_a_1124_);
lean_dec_ref(v___x_1123_);
lean_inc_ref(v_body_1121_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1125_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_body_1121_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1125_) == 0)
{
lean_object* v_a_1126_; size_t v___x_1127_; size_t v___x_1128_; uint8_t v___x_1129_; 
v_a_1126_ = lean_ctor_get(v___x_1125_, 0);
lean_inc(v_a_1126_);
lean_dec_ref(v___x_1125_);
v___x_1127_ = lean_ptr_addr(v_binderType_1120_);
v___x_1128_ = lean_ptr_addr(v_a_1124_);
v___x_1129_ = lean_usize_dec_eq(v___x_1127_, v___x_1128_);
if (v___x_1129_ == 0)
{
v___y_1100_ = v___y_1118_;
v___y_1101_ = v_binderName_1119_;
v___y_1102_ = v_a_1126_;
v___y_1103_ = v_a_1124_;
v___y_1104_ = v_binderInfo_1122_;
v___y_1105_ = v___x_1129_;
goto v___jp_1099_;
}
else
{
size_t v___x_1130_; size_t v___x_1131_; uint8_t v___x_1132_; 
v___x_1130_ = lean_ptr_addr(v_body_1121_);
v___x_1131_ = lean_ptr_addr(v_a_1126_);
v___x_1132_ = lean_usize_dec_eq(v___x_1130_, v___x_1131_);
v___y_1100_ = v___y_1118_;
v___y_1101_ = v_binderName_1119_;
v___y_1102_ = v_a_1126_;
v___y_1103_ = v_a_1124_;
v___y_1104_ = v_binderInfo_1122_;
v___y_1105_ = v___x_1132_;
goto v___jp_1099_;
}
}
else
{
lean_dec(v_a_1124_);
lean_dec_ref(v___y_1118_);
lean_dec(v_binderName_1119_);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1125_;
}
}
else
{
lean_dec_ref(v___y_1118_);
lean_dec(v_binderName_1119_);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1123_;
}
}
case 6:
{
lean_object* v_binderName_1133_; lean_object* v_binderType_1134_; lean_object* v_body_1135_; uint8_t v_binderInfo_1136_; lean_object* v___x_1137_; 
v_binderName_1133_ = lean_ctor_get(v___y_1118_, 0);
lean_inc(v_binderName_1133_);
v_binderType_1134_ = lean_ctor_get(v___y_1118_, 1);
v_body_1135_ = lean_ctor_get(v___y_1118_, 2);
v_binderInfo_1136_ = lean_ctor_get_uint8(v___y_1118_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1134_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1137_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_binderType_1134_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1137_) == 0)
{
lean_object* v_a_1138_; lean_object* v___x_1139_; 
v_a_1138_ = lean_ctor_get(v___x_1137_, 0);
lean_inc(v_a_1138_);
lean_dec_ref(v___x_1137_);
lean_inc_ref(v_body_1135_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1139_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_body_1135_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; size_t v___x_1141_; size_t v___x_1142_; uint8_t v___x_1143_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1140_);
lean_dec_ref(v___x_1139_);
v___x_1141_ = lean_ptr_addr(v_binderType_1134_);
v___x_1142_ = lean_ptr_addr(v_a_1138_);
v___x_1143_ = lean_usize_dec_eq(v___x_1141_, v___x_1142_);
if (v___x_1143_ == 0)
{
v___y_1087_ = v_binderName_1133_;
v___y_1088_ = v___y_1118_;
v___y_1089_ = v_binderInfo_1136_;
v___y_1090_ = v_a_1140_;
v___y_1091_ = v_a_1138_;
v___y_1092_ = v___x_1143_;
goto v___jp_1086_;
}
else
{
size_t v___x_1144_; size_t v___x_1145_; uint8_t v___x_1146_; 
v___x_1144_ = lean_ptr_addr(v_body_1135_);
v___x_1145_ = lean_ptr_addr(v_a_1140_);
v___x_1146_ = lean_usize_dec_eq(v___x_1144_, v___x_1145_);
v___y_1087_ = v_binderName_1133_;
v___y_1088_ = v___y_1118_;
v___y_1089_ = v_binderInfo_1136_;
v___y_1090_ = v_a_1140_;
v___y_1091_ = v_a_1138_;
v___y_1092_ = v___x_1146_;
goto v___jp_1086_;
}
}
else
{
lean_dec(v_a_1138_);
lean_dec(v_binderName_1133_);
lean_dec_ref(v___y_1118_);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1139_;
}
}
else
{
lean_dec(v_binderName_1133_);
lean_dec_ref(v___y_1118_);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1137_;
}
}
case 8:
{
lean_object* v_declName_1147_; lean_object* v_type_1148_; lean_object* v_value_1149_; lean_object* v_body_1150_; uint8_t v_nondep_1151_; lean_object* v___x_1152_; 
v_declName_1147_ = lean_ctor_get(v___y_1118_, 0);
lean_inc(v_declName_1147_);
v_type_1148_ = lean_ctor_get(v___y_1118_, 1);
v_value_1149_ = lean_ctor_get(v___y_1118_, 2);
v_body_1150_ = lean_ctor_get(v___y_1118_, 3);
lean_inc_ref(v_body_1150_);
v_nondep_1151_ = lean_ctor_get_uint8(v___y_1118_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1148_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1152_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_type_1148_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; lean_object* v___x_1154_; 
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_a_1153_);
lean_dec_ref(v___x_1152_);
lean_inc_ref(v_value_1149_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1154_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_value_1149_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v_a_1155_; lean_object* v___x_1156_; 
v_a_1155_ = lean_ctor_get(v___x_1154_, 0);
lean_inc(v_a_1155_);
lean_dec_ref(v___x_1154_);
lean_inc_ref(v_body_1150_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1156_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_body_1150_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; size_t v___x_1158_; size_t v___x_1159_; uint8_t v___x_1160_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
lean_inc(v_a_1157_);
lean_dec_ref(v___x_1156_);
v___x_1158_ = lean_ptr_addr(v_type_1148_);
v___x_1159_ = lean_ptr_addr(v_a_1153_);
v___x_1160_ = lean_usize_dec_eq(v___x_1158_, v___x_1159_);
if (v___x_1160_ == 0)
{
v___y_1070_ = v_declName_1147_;
v___y_1071_ = v___y_1118_;
v___y_1072_ = v_nondep_1151_;
v___y_1073_ = v_a_1155_;
v___y_1074_ = v_body_1150_;
v___y_1075_ = v_a_1157_;
v___y_1076_ = v_a_1153_;
v___y_1077_ = v___x_1160_;
goto v___jp_1069_;
}
else
{
size_t v___x_1161_; size_t v___x_1162_; uint8_t v___x_1163_; 
v___x_1161_ = lean_ptr_addr(v_value_1149_);
v___x_1162_ = lean_ptr_addr(v_a_1155_);
v___x_1163_ = lean_usize_dec_eq(v___x_1161_, v___x_1162_);
v___y_1070_ = v_declName_1147_;
v___y_1071_ = v___y_1118_;
v___y_1072_ = v_nondep_1151_;
v___y_1073_ = v_a_1155_;
v___y_1074_ = v_body_1150_;
v___y_1075_ = v_a_1157_;
v___y_1076_ = v_a_1153_;
v___y_1077_ = v___x_1163_;
goto v___jp_1069_;
}
}
else
{
lean_dec(v_a_1155_);
lean_dec(v_a_1153_);
lean_dec_ref(v_body_1150_);
lean_dec_ref(v___y_1118_);
lean_dec(v_declName_1147_);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1156_;
}
}
else
{
lean_dec(v_a_1153_);
lean_dec_ref(v_body_1150_);
lean_dec_ref(v___y_1118_);
lean_dec(v_declName_1147_);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1154_;
}
}
else
{
lean_dec_ref(v_body_1150_);
lean_dec_ref(v___y_1118_);
lean_dec(v_declName_1147_);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1152_;
}
}
case 5:
{
lean_object* v_dummy_1164_; lean_object* v_nargs_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v_dummy_1164_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0);
v_nargs_1165_ = l_Lean_Expr_getAppNumArgs(v___y_1118_);
lean_inc(v_nargs_1165_);
v___x_1166_ = lean_mk_array(v_nargs_1165_, v_dummy_1164_);
v___x_1167_ = lean_unsigned_to_nat(1u);
v___x_1168_ = lean_nat_sub(v_nargs_1165_, v___x_1167_);
lean_dec(v_nargs_1165_);
v___x_1169_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(v_pre_1062_, v_post_1064_, v___y_1118_, v___x_1166_, v___x_1168_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1169_;
}
case 10:
{
lean_object* v_data_1170_; lean_object* v_expr_1171_; lean_object* v___x_1172_; 
v_data_1170_ = lean_ctor_get(v___y_1118_, 0);
v_expr_1171_ = lean_ctor_get(v___y_1118_, 1);
lean_inc_ref(v_expr_1171_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1172_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_expr_1171_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; size_t v___x_1174_; size_t v___x_1175_; uint8_t v___x_1176_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref(v___x_1172_);
v___x_1174_ = lean_ptr_addr(v_expr_1171_);
v___x_1175_ = lean_ptr_addr(v_a_1173_);
v___x_1176_ = lean_usize_dec_eq(v___x_1174_, v___x_1175_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
lean_inc(v_data_1170_);
lean_dec_ref(v___y_1118_);
v___x_1177_ = l_Lean_Expr_mdata___override(v_data_1170_, v_a_1173_);
v___x_1178_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1177_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1178_;
}
else
{
lean_object* v___x_1179_; 
lean_dec(v_a_1173_);
v___x_1179_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1118_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1179_;
}
}
else
{
lean_dec_ref(v___y_1118_);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1172_;
}
}
case 11:
{
lean_object* v_typeName_1180_; lean_object* v_idx_1181_; lean_object* v_struct_1182_; lean_object* v___x_1183_; 
v_typeName_1180_ = lean_ctor_get(v___y_1118_, 0);
v_idx_1181_ = lean_ctor_get(v___y_1118_, 1);
v_struct_1182_ = lean_ctor_get(v___y_1118_, 2);
lean_inc_ref(v_struct_1182_);
lean_inc_ref(v_post_1064_);
lean_inc_ref(v_pre_1062_);
v___x_1183_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1062_, v_post_1064_, v_struct_1182_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v_a_1184_; size_t v___x_1185_; size_t v___x_1186_; uint8_t v___x_1187_; 
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
lean_inc(v_a_1184_);
lean_dec_ref(v___x_1183_);
v___x_1185_ = lean_ptr_addr(v_struct_1182_);
v___x_1186_ = lean_ptr_addr(v_a_1184_);
v___x_1187_ = lean_usize_dec_eq(v___x_1185_, v___x_1186_);
if (v___x_1187_ == 0)
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
lean_inc(v_idx_1181_);
lean_inc(v_typeName_1180_);
lean_dec_ref(v___y_1118_);
v___x_1188_ = l_Lean_Expr_proj___override(v_typeName_1180_, v_idx_1181_, v_a_1184_);
v___x_1189_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1188_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1189_;
}
else
{
lean_object* v___x_1190_; 
lean_dec(v_a_1184_);
v___x_1190_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1118_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1190_;
}
}
else
{
lean_dec_ref(v___y_1118_);
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_pre_1062_);
return v___x_1183_;
}
}
default: 
{
lean_object* v___x_1191_; 
v___x_1191_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1118_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1191_;
}
}
}
}
}
else
{
lean_object* v_a_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1210_; 
lean_dec_ref(v_post_1064_);
lean_dec_ref(v_e_1063_);
lean_dec_ref(v_pre_1062_);
v_a_1203_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1205_ = v___x_1112_;
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_a_1203_);
lean_dec(v___x_1112_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1206_ == 0)
{
v___x_1208_ = v___x_1205_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_a_1203_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
v___jp_1069_:
{
if (v___y_1077_ == 0)
{
lean_object* v___x_1078_; lean_object* v___x_1079_; 
lean_dec_ref(v___y_1074_);
lean_dec_ref(v___y_1071_);
v___x_1078_ = l_Lean_Expr_letE___override(v___y_1070_, v___y_1076_, v___y_1073_, v___y_1075_, v___y_1072_);
v___x_1079_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1078_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1079_;
}
else
{
size_t v___x_1080_; size_t v___x_1081_; uint8_t v___x_1082_; 
v___x_1080_ = lean_ptr_addr(v___y_1074_);
lean_dec_ref(v___y_1074_);
v___x_1081_ = lean_ptr_addr(v___y_1075_);
v___x_1082_ = lean_usize_dec_eq(v___x_1080_, v___x_1081_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_dec_ref(v___y_1071_);
v___x_1083_ = l_Lean_Expr_letE___override(v___y_1070_, v___y_1076_, v___y_1073_, v___y_1075_, v___y_1072_);
v___x_1084_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1083_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1084_;
}
else
{
lean_object* v___x_1085_; 
lean_dec_ref(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1070_);
v___x_1085_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1071_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1085_;
}
}
}
v___jp_1086_:
{
if (v___y_1092_ == 0)
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
lean_dec_ref(v___y_1088_);
v___x_1093_ = l_Lean_Expr_lam___override(v___y_1087_, v___y_1091_, v___y_1090_, v___y_1089_);
v___x_1094_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1093_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1094_;
}
else
{
uint8_t v___x_1095_; 
v___x_1095_ = l_Lean_instBEqBinderInfo_beq(v___y_1089_, v___y_1089_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
lean_dec_ref(v___y_1088_);
v___x_1096_ = l_Lean_Expr_lam___override(v___y_1087_, v___y_1091_, v___y_1090_, v___y_1089_);
v___x_1097_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1096_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1097_;
}
else
{
lean_object* v___x_1098_; 
lean_dec_ref(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1087_);
v___x_1098_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1088_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1098_;
}
}
}
v___jp_1099_:
{
if (v___y_1105_ == 0)
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
lean_dec_ref(v___y_1100_);
v___x_1106_ = l_Lean_Expr_forallE___override(v___y_1101_, v___y_1103_, v___y_1102_, v___y_1104_);
v___x_1107_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1106_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1107_;
}
else
{
uint8_t v___x_1108_; 
v___x_1108_ = l_Lean_instBEqBinderInfo_beq(v___y_1104_, v___y_1104_);
if (v___x_1108_ == 0)
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
lean_dec_ref(v___y_1100_);
v___x_1109_ = l_Lean_Expr_forallE___override(v___y_1101_, v___y_1103_, v___y_1102_, v___y_1104_);
v___x_1110_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___x_1109_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1110_;
}
else
{
lean_object* v___x_1111_; 
lean_dec_ref(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
v___x_1111_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1062_, v_post_1064_, v___y_1100_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed(lean_object* v_pre_1211_, lean_object* v_e_1212_, lean_object* v_post_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1(v_pre_1211_, v_e_1212_, v_post_1213_, v___y_1214_, v___y_1215_, v___y_1216_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v___y_1214_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(lean_object* v_pre_1219_, lean_object* v_post_1220_, lean_object* v_e_1221_, lean_object* v_a_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
lean_inc(v_a_1222_);
v___x_1226_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1226_, 0, lean_box(0));
lean_closure_set(v___x_1226_, 1, lean_box(0));
lean_closure_set(v___x_1226_, 2, v_a_1222_);
v___x_1227_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_box(0), v___x_1226_, v___y_1223_, v___y_1224_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1258_; 
v_a_1228_ = lean_ctor_get(v___x_1227_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1230_ = v___x_1227_;
v_isShared_1231_ = v_isSharedCheck_1258_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1227_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1258_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(v_a_1228_, v_e_1221_);
lean_dec(v_a_1228_);
if (lean_obj_tag(v___x_1232_) == 0)
{
lean_object* v___f_1233_; lean_object* v___x_1234_; 
lean_del_object(v___x_1230_);
lean_inc_ref(v_e_1221_);
v___f_1233_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___boxed), 7, 3);
lean_closure_set(v___f_1233_, 0, v_pre_1219_);
lean_closure_set(v___f_1233_, 1, v_e_1221_);
lean_closure_set(v___f_1233_, 2, v_post_1220_);
v___x_1234_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v___f_1233_, v_a_1222_, v___y_1223_, v___y_1224_);
if (lean_obj_tag(v___x_1234_) == 0)
{
lean_object* v_a_1235_; lean_object* v___f_1236_; lean_object* v___x_1237_; 
v_a_1235_ = lean_ctor_get(v___x_1234_, 0);
lean_inc_n(v_a_1235_, 2);
lean_dec_ref(v___x_1234_);
lean_inc(v_a_1222_);
v___f_1236_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1236_, 0, v_a_1222_);
lean_closure_set(v___f_1236_, 1, v_e_1221_);
lean_closure_set(v___f_1236_, 2, v_a_1235_);
v___x_1237_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__0(lean_box(0), v___f_1236_, v___y_1223_, v___y_1224_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1244_ == 0)
{
lean_object* v_unused_1245_; 
v_unused_1245_ = lean_ctor_get(v___x_1237_, 0);
lean_dec(v_unused_1245_);
v___x_1239_ = v___x_1237_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_dec(v___x_1237_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 0, v_a_1235_);
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_a_1235_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
else
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1253_; 
lean_dec(v_a_1235_);
v_a_1246_ = lean_ctor_get(v___x_1237_, 0);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1237_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1248_ = v___x_1237_;
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v___x_1237_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1251_; 
if (v_isShared_1249_ == 0)
{
v___x_1251_ = v___x_1248_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_a_1246_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
}
else
{
lean_dec_ref(v_e_1221_);
return v___x_1234_;
}
}
else
{
lean_object* v_val_1254_; lean_object* v___x_1256_; 
lean_dec_ref(v_e_1221_);
lean_dec_ref(v_post_1220_);
lean_dec_ref(v_pre_1219_);
v_val_1254_ = lean_ctor_get(v___x_1232_, 0);
lean_inc(v_val_1254_);
lean_dec_ref(v___x_1232_);
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 0, v_val_1254_);
v___x_1256_ = v___x_1230_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_val_1254_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
}
else
{
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
lean_dec_ref(v_e_1221_);
lean_dec_ref(v_post_1220_);
lean_dec_ref(v_pre_1219_);
v_a_1259_ = lean_ctor_get(v___x_1227_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1261_ = v___x_1227_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1227_);
v___x_1261_ = lean_box(0);
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
v_resetjp_1260_:
{
lean_object* v___x_1264_; 
if (v_isShared_1262_ == 0)
{
v___x_1264_ = v___x_1261_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v_a_1259_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(lean_object* v_pre_1267_, lean_object* v_post_1268_, lean_object* v_e_1269_, lean_object* v_a_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v___x_1274_; 
lean_inc_ref(v_post_1268_);
lean_inc(v___y_1272_);
lean_inc_ref(v___y_1271_);
lean_inc_ref(v_e_1269_);
v___x_1274_ = lean_apply_4(v_post_1268_, v_e_1269_, v___y_1271_, v___y_1272_, lean_box(0));
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1293_; 
v_a_1275_ = lean_ctor_get(v___x_1274_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1277_ = v___x_1274_;
v_isShared_1278_ = v_isSharedCheck_1293_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1274_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1293_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
switch(lean_obj_tag(v_a_1275_))
{
case 0:
{
lean_object* v_e_1279_; lean_object* v___x_1281_; 
lean_dec_ref(v_e_1269_);
lean_dec_ref(v_post_1268_);
lean_dec_ref(v_pre_1267_);
v_e_1279_ = lean_ctor_get(v_a_1275_, 0);
lean_inc_ref(v_e_1279_);
lean_dec_ref(v_a_1275_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 0, v_e_1279_);
v___x_1281_ = v___x_1277_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_e_1279_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
case 1:
{
lean_object* v_e_1283_; lean_object* v___x_1284_; 
lean_del_object(v___x_1277_);
lean_dec_ref(v_e_1269_);
v_e_1283_ = lean_ctor_get(v_a_1275_, 0);
lean_inc_ref(v_e_1283_);
lean_dec_ref(v_a_1275_);
v___x_1284_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1267_, v_post_1268_, v_e_1283_, v_a_1270_, v___y_1271_, v___y_1272_);
return v___x_1284_;
}
default: 
{
lean_object* v_e_x3f_1285_; 
lean_dec_ref(v_post_1268_);
lean_dec_ref(v_pre_1267_);
v_e_x3f_1285_ = lean_ctor_get(v_a_1275_, 0);
lean_inc(v_e_x3f_1285_);
lean_dec_ref(v_a_1275_);
if (lean_obj_tag(v_e_x3f_1285_) == 0)
{
lean_object* v___x_1287_; 
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 0, v_e_1269_);
v___x_1287_ = v___x_1277_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_e_1269_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
else
{
lean_object* v_val_1289_; lean_object* v___x_1291_; 
lean_dec_ref(v_e_1269_);
v_val_1289_ = lean_ctor_get(v_e_x3f_1285_, 0);
lean_inc(v_val_1289_);
lean_dec_ref(v_e_x3f_1285_);
if (v_isShared_1278_ == 0)
{
lean_ctor_set(v___x_1277_, 0, v_val_1289_);
v___x_1291_ = v___x_1277_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_val_1289_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
}
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
lean_dec_ref(v_e_1269_);
lean_dec_ref(v_post_1268_);
lean_dec_ref(v_pre_1267_);
v_a_1294_ = lean_ctor_get(v___x_1274_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1274_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1274_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_1302_, lean_object* v_post_1303_, lean_object* v_e_1304_, lean_object* v_a_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
lean_object* v_res_1309_; 
v_res_1309_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__2(v_pre_1302_, v_post_1303_, v_e_1304_, v_a_1305_, v___y_1306_, v___y_1307_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec(v_a_1305_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_1310_, lean_object* v_post_1311_, lean_object* v_sz_1312_, lean_object* v_i_1313_, lean_object* v_bs_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
size_t v_sz_boxed_1319_; size_t v_i_boxed_1320_; lean_object* v_res_1321_; 
v_sz_boxed_1319_ = lean_unbox_usize(v_sz_1312_);
lean_dec(v_sz_1312_);
v_i_boxed_1320_ = lean_unbox_usize(v_i_1313_);
lean_dec(v_i_1313_);
v_res_1321_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__1(v_pre_1310_, v_post_1311_, v_sz_boxed_1319_, v_i_boxed_1320_, v_bs_1314_, v___y_1315_, v___y_1316_, v___y_1317_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
lean_dec(v___y_1315_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_1322_, lean_object* v_post_1323_, lean_object* v_x_1324_, lean_object* v_x_1325_, lean_object* v_x_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__4(v_pre_1322_, v_post_1323_, v_x_1324_, v_x_1325_, v_x_1326_, v___y_1327_, v___y_1328_, v___y_1329_);
lean_dec(v___y_1329_);
lean_dec_ref(v___y_1328_);
lean_dec(v___y_1327_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___boxed(lean_object* v_pre_1332_, lean_object* v_post_1333_, lean_object* v_e_1334_, lean_object* v_a_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v_res_1339_; 
v_res_1339_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1332_, v_post_1333_, v_e_1334_, v_a_1335_, v___y_1336_, v___y_1337_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v_a_1335_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_object* v_00_u03b1_1340_, lean_object* v_x_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = lean_apply_1(v_x_1341_, lean_box(0));
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1347_, lean_object* v_x_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(v_00_u03b1_1347_, v_x_1348_, v___y_1349_, v___y_1350_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
return v_res_1352_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1353_ = lean_box(0);
v___x_1354_ = lean_unsigned_to_nat(16u);
v___x_1355_ = lean_mk_array(v___x_1354_, v___x_1353_);
return v___x_1355_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1356_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__0);
v___x_1357_ = lean_unsigned_to_nat(0u);
v___x_1358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1357_);
lean_ctor_set(v___x_1358_, 1, v___x_1356_);
return v___x_1358_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__1);
v___x_1360_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1360_, 0, lean_box(0));
lean_closure_set(v___x_1360_, 1, lean_box(0));
lean_closure_set(v___x_1360_, 2, v___x_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(lean_object* v_input_1361_, lean_object* v_pre_1362_, lean_object* v_post_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_){
_start:
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v_a_1369_; lean_object* v___x_1370_; 
v___x_1367_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___closed__2);
v___x_1368_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_box(0), v___x_1367_, v___y_1364_, v___y_1365_);
v_a_1369_ = lean_ctor_get(v___x_1368_, 0);
lean_inc(v_a_1369_);
lean_dec_ref(v___x_1368_);
v___x_1370_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0(v_pre_1362_, v_post_1363_, v_input_1361_, v_a_1369_, v___y_1364_, v___y_1365_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref(v___x_1370_);
v___x_1372_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1372_, 0, lean_box(0));
lean_closure_set(v___x_1372_, 1, lean_box(0));
lean_closure_set(v___x_1372_, 2, v_a_1369_);
v___x_1373_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___lam__0(lean_box(0), v___x_1372_, v___y_1364_, v___y_1365_);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1380_ == 0)
{
lean_object* v_unused_1381_; 
v_unused_1381_ = lean_ctor_get(v___x_1373_, 0);
lean_dec(v_unused_1381_);
v___x_1375_ = v___x_1373_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_dec(v___x_1373_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v_a_1371_);
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1371_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
else
{
lean_dec(v_a_1369_);
return v___x_1370_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0___boxed(lean_object* v_input_1382_, lean_object* v_pre_1383_, lean_object* v_post_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(v_input_1382_, v_pre_1383_, v_post_1384_, v___y_1385_, v___y_1386_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(lean_object* v_e_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_){
_start:
{
lean_object* v___f_1395_; lean_object* v___f_1396_; lean_object* v___x_1397_; 
v___f_1395_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__0));
v___f_1396_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___closed__1));
v___x_1397_ = l_Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0(v_e_1391_, v___f_1395_, v___f_1396_, v_a_1392_, v_a_1393_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta___boxed(lean_object* v_e_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_e_1398_, v_a_1399_, v_a_1400_);
lean_dec(v_a_1400_);
lean_dec_ref(v_a_1399_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1403_, lean_object* v_m_1404_, lean_object* v_a_1405_){
_start:
{
lean_object* v___x_1406_; 
v___x_1406_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___redArg(v_m_1404_, v_a_1405_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1407_, lean_object* v_m_1408_, lean_object* v_a_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3(v_00_u03b2_1407_, v_m_1408_, v_a_1409_);
lean_dec_ref(v_a_1409_);
lean_dec_ref(v_m_1408_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_1411_, lean_object* v_ref_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1412_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1417_, lean_object* v_ref_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_1417_, v_ref_1418_, v___y_1419_, v___y_1420_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_1423_, lean_object* v_x_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v___x_1429_; 
v___x_1429_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___redArg(v_x_1424_, v___y_1425_, v___y_1426_, v___y_1427_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1430_, lean_object* v_x_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__5(v_00_u03b1_1430_, v_x_1431_, v___y_1432_, v___y_1433_, v___y_1434_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec(v___y_1432_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_1437_, lean_object* v_m_1438_, lean_object* v_a_1439_, lean_object* v_b_1440_){
_start:
{
lean_object* v___x_1441_; 
v___x_1441_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6___redArg(v_m_1438_, v_a_1439_, v_b_1440_);
return v___x_1441_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1442_, lean_object* v_a_1443_, lean_object* v_x_1444_){
_start:
{
lean_object* v___x_1445_; 
v___x_1445_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1443_, v_x_1444_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1446_, lean_object* v_a_1447_, lean_object* v_x_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_1446_, v_a_1447_, v_x_1448_);
lean_dec(v_x_1448_);
lean_dec_ref(v_a_1447_);
return v_res_1449_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9(lean_object* v_00_u03b2_1450_, lean_object* v_a_1451_, lean_object* v_x_1452_){
_start:
{
uint8_t v___x_1453_; 
v___x_1453_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9___redArg(v_a_1451_, v_x_1452_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9___boxed(lean_object* v_00_u03b2_1454_, lean_object* v_a_1455_, lean_object* v_x_1456_){
_start:
{
uint8_t v_res_1457_; lean_object* v_r_1458_; 
v_res_1457_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__9(v_00_u03b2_1454_, v_a_1455_, v_x_1456_);
lean_dec(v_x_1456_);
lean_dec_ref(v_a_1455_);
v_r_1458_ = lean_box(v_res_1457_);
return v_r_1458_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_1459_, lean_object* v_data_1460_){
_start:
{
lean_object* v___x_1461_; 
v___x_1461_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10___redArg(v_data_1460_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_1462_, lean_object* v_a_1463_, lean_object* v_b_1464_, lean_object* v_x_1465_){
_start:
{
lean_object* v___x_1466_; 
v___x_1466_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__11___redArg(v_a_1463_, v_b_1464_, v_x_1465_);
return v___x_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11(lean_object* v_00_u03b2_1467_, lean_object* v_i_1468_, lean_object* v_source_1469_, lean_object* v_target_1470_){
_start:
{
lean_object* v___x_1471_; 
v___x_1471_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11___redArg(v_i_1468_, v_source_1469_, v_target_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12(lean_object* v_00_u03b2_1472_, lean_object* v_x_1473_, lean_object* v_x_1474_){
_start:
{
lean_object* v___x_1475_; 
v___x_1475_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0_spec__6_spec__10_spec__11_spec__12___redArg(v_x_1473_, v_x_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(lean_object* v_declName_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v___x_1479_; lean_object* v_env_1480_; uint8_t v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1479_ = lean_st_ref_get(v___y_1477_);
v_env_1480_ = lean_ctor_get(v___x_1479_, 0);
lean_inc_ref(v_env_1480_);
lean_dec(v___x_1479_);
v___x_1481_ = l_Lean_isRecCore(v_env_1480_, v_declName_1476_);
v___x_1482_ = lean_box(v___x_1481_);
v___x_1483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg___boxed(lean_object* v_declName_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1484_, v___y_1485_);
lean_dec(v___y_1485_);
return v_res_1487_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(lean_object* v_declName_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v___x_1494_; 
v___x_1494_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1488_, v___y_1492_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___boxed(lean_object* v_declName_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2(v_declName_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(lean_object* v_declName_1502_, lean_object* v___y_1503_){
_start:
{
lean_object* v___x_1505_; lean_object* v_env_1506_; uint8_t v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1505_ = lean_st_ref_get(v___y_1503_);
v_env_1506_ = lean_ctor_get(v___x_1505_, 0);
lean_inc_ref(v_env_1506_);
lean_dec(v___x_1505_);
v___x_1507_ = lean_get_reducibility_status(v_env_1506_, v_declName_1502_);
v___x_1508_ = lean_box(v___x_1507_);
v___x_1509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg___boxed(lean_object* v_declName_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1510_, v___y_1511_);
lean_dec(v___y_1511_);
return v_res_1513_;
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(lean_object* v_declName_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v___x_1520_; lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1536_; 
v___x_1520_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1514_, v___y_1518_);
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1523_ = v___x_1520_;
v_isShared_1524_ = v_isSharedCheck_1536_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1520_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1536_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
uint8_t v___x_1525_; 
v___x_1525_ = lean_unbox(v_a_1521_);
lean_dec(v_a_1521_);
if (v___x_1525_ == 0)
{
uint8_t v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1529_; 
v___x_1526_ = 1;
v___x_1527_ = lean_box(v___x_1526_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 0, v___x_1527_);
v___x_1529_ = v___x_1523_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v___x_1527_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
else
{
uint8_t v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1531_ = 0;
v___x_1532_ = lean_box(v___x_1531_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 0, v___x_1532_);
v___x_1534_ = v___x_1523_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0___boxed(lean_object* v_declName_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(v_declName_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(lean_object* v_a_1544_, lean_object* v_b_1545_){
_start:
{
lean_object* v_array_1547_; lean_object* v_start_1548_; lean_object* v_stop_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1566_; 
v_array_1547_ = lean_ctor_get(v_a_1544_, 0);
v_start_1548_ = lean_ctor_get(v_a_1544_, 1);
v_stop_1549_ = lean_ctor_get(v_a_1544_, 2);
v_isSharedCheck_1566_ = !lean_is_exclusive(v_a_1544_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1551_ = v_a_1544_;
v_isShared_1552_ = v_isSharedCheck_1566_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_stop_1549_);
lean_inc(v_start_1548_);
lean_inc(v_array_1547_);
lean_dec(v_a_1544_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1566_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
uint8_t v___x_1553_; 
v___x_1553_ = lean_nat_dec_lt(v_start_1548_, v_stop_1549_);
if (v___x_1553_ == 0)
{
lean_object* v___x_1554_; 
lean_del_object(v___x_1551_);
lean_dec(v_stop_1549_);
lean_dec(v_start_1548_);
lean_dec_ref(v_array_1547_);
v___x_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1554_, 0, v_b_1545_);
return v___x_1554_;
}
else
{
lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1559_; 
v___x_1555_ = lean_box(0);
v___x_1556_ = lean_unsigned_to_nat(1u);
v___x_1557_ = lean_nat_add(v_start_1548_, v___x_1556_);
lean_inc_ref(v_array_1547_);
if (v_isShared_1552_ == 0)
{
lean_ctor_set(v___x_1551_, 1, v___x_1557_);
v___x_1559_ = v___x_1551_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_array_1547_);
lean_ctor_set(v_reuseFailAlloc_1565_, 1, v___x_1557_);
lean_ctor_set(v_reuseFailAlloc_1565_, 2, v_stop_1549_);
v___x_1559_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
lean_object* v___x_1560_; uint8_t v___x_1561_; 
v___x_1560_ = lean_array_fget(v_array_1547_, v_start_1548_);
lean_dec(v_start_1548_);
lean_dec_ref(v_array_1547_);
v___x_1561_ = l_Lean_Expr_hasExprMVar(v___x_1560_);
lean_dec(v___x_1560_);
if (v___x_1561_ == 0)
{
v_a_1544_ = v___x_1559_;
v_b_1545_ = v___x_1555_;
goto _start;
}
else
{
lean_object* v___x_1563_; 
v___x_1563_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_dec_ref(v___x_1563_);
v_a_1544_ = v___x_1559_;
v_b_1545_ = v___x_1555_;
goto _start;
}
else
{
lean_dec_ref(v___x_1559_);
return v___x_1563_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg___boxed(lean_object* v_a_1567_, lean_object* v_b_1568_, lean_object* v___y_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v_a_1567_, v_b_1568_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(lean_object* v_e_1579_, uint8_t v_isMatch_1580_, uint8_t v_root_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_){
_start:
{
lean_object* v___y_1588_; lean_object* v_b_1589_; lean_object* v___x_1600_; 
v___x_1600_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_1579_, v_root_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_);
if (lean_obj_tag(v___x_1600_) == 0)
{
lean_object* v_a_1601_; lean_object* v___x_1603_; uint8_t v_isShared_1604_; uint8_t v_isSharedCheck_1763_; 
v_a_1601_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1763_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1763_ == 0)
{
v___x_1603_ = v___x_1600_;
v_isShared_1604_ = v_isSharedCheck_1763_;
goto v_resetjp_1602_;
}
else
{
lean_inc(v_a_1601_);
lean_dec(v___x_1600_);
v___x_1603_ = lean_box(0);
v_isShared_1604_ = v_isSharedCheck_1763_;
goto v_resetjp_1602_;
}
v_resetjp_1602_:
{
lean_object* v___y_1606_; lean_object* v___y_1616_; lean_object* v___y_1617_; lean_object* v___y_1618_; lean_object* v___y_1619_; 
if (v_root_1581_ == 0)
{
lean_object* v___x_1751_; 
lean_inc(v_a_1601_);
v___x_1751_ = l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(v_a_1601_);
if (lean_obj_tag(v___x_1751_) == 1)
{
lean_object* v_val_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1762_; 
lean_del_object(v___x_1603_);
lean_dec(v_a_1601_);
v_val_1752_ = lean_ctor_get(v___x_1751_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1751_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1754_ = v___x_1751_;
v_isShared_1755_ = v_isSharedCheck_1762_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_val_1752_);
lean_dec(v___x_1751_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1762_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
if (v_isShared_1755_ == 0)
{
lean_ctor_set_tag(v___x_1754_, 2);
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_val_1752_);
v___x_1757_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1758_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_1759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1757_);
lean_ctor_set(v___x_1759_, 1, v___x_1758_);
v___x_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1759_);
return v___x_1760_;
}
}
}
else
{
lean_dec(v___x_1751_);
v___y_1616_ = v_a_1582_;
v___y_1617_ = v_a_1583_;
v___y_1618_ = v_a_1584_;
v___y_1619_ = v_a_1585_;
goto v___jp_1615_;
}
}
else
{
v___y_1616_ = v_a_1582_;
v___y_1617_ = v_a_1583_;
v___y_1618_ = v_a_1584_;
v___y_1619_ = v_a_1585_;
goto v___jp_1615_;
}
v___jp_1605_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1613_; 
v___x_1607_ = l_Lean_Expr_getAppNumArgs(v_a_1601_);
lean_inc(v___x_1607_);
v___x_1608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___y_1606_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
v___x_1609_ = lean_mk_empty_array_with_capacity(v___x_1607_);
lean_dec(v___x_1607_);
v___x_1610_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1601_, v___x_1609_);
v___x_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1608_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
if (v_isShared_1604_ == 0)
{
lean_ctor_set(v___x_1603_, 0, v___x_1611_);
v___x_1613_ = v___x_1603_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v___x_1611_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
v___jp_1615_:
{
lean_object* v___x_1620_; 
v___x_1620_ = l_Lean_Expr_getAppFn(v_a_1601_);
switch(lean_obj_tag(v___x_1620_))
{
case 1:
{
lean_object* v_fvarId_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
lean_del_object(v___x_1603_);
v_fvarId_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_fvarId_1621_);
lean_dec_ref(v___x_1620_);
v___x_1622_ = l_Lean_Expr_getAppNumArgs(v_a_1601_);
lean_inc(v___x_1622_);
v___x_1623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1623_, 0, v_fvarId_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = lean_mk_empty_array_with_capacity(v___x_1622_);
lean_dec(v___x_1622_);
v___x_1625_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1601_, v___x_1624_);
v___x_1626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1626_, 0, v___x_1623_);
lean_ctor_set(v___x_1626_, 1, v___x_1625_);
v___x_1627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
return v___x_1627_;
}
case 2:
{
lean_del_object(v___x_1603_);
lean_dec(v_a_1601_);
if (v_isMatch_1580_ == 0)
{
lean_object* v_mvarId_1628_; lean_object* v___x_1629_; uint8_t v_isDefEqStuckEx_1630_; 
v_mvarId_1628_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_mvarId_1628_);
lean_dec_ref(v___x_1620_);
v___x_1629_ = l_Lean_Meta_Context_config(v___y_1616_);
v_isDefEqStuckEx_1630_ = lean_ctor_get_uint8(v___x_1629_, 4);
lean_dec_ref(v___x_1629_);
if (v_isDefEqStuckEx_1630_ == 0)
{
lean_object* v___x_1631_; 
v___x_1631_ = l_Lean_MVarId_isReadOnlyOrSyntheticOpaque(v_mvarId_1628_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1645_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1634_ = v___x_1631_;
v_isShared_1635_ = v_isSharedCheck_1645_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1631_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1645_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
uint8_t v___x_1636_; 
v___x_1636_ = lean_unbox(v_a_1632_);
lean_dec(v_a_1632_);
if (v___x_1636_ == 0)
{
lean_object* v___x_1637_; lean_object* v___x_1639_; 
v___x_1637_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2));
if (v_isShared_1635_ == 0)
{
lean_ctor_set(v___x_1634_, 0, v___x_1637_);
v___x_1639_ = v___x_1634_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1637_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
else
{
lean_object* v___x_1641_; lean_object* v___x_1643_; 
v___x_1641_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
if (v_isShared_1635_ == 0)
{
lean_ctor_set(v___x_1634_, 0, v___x_1641_);
v___x_1643_ = v___x_1634_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v___x_1641_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
else
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1653_; 
v_a_1646_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1648_ = v___x_1631_;
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v___x_1631_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_a_1646_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
else
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
lean_dec(v_mvarId_1628_);
v___x_1654_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__2));
v___x_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
return v___x_1655_;
}
}
else
{
lean_object* v___x_1656_; lean_object* v___x_1657_; 
lean_dec_ref(v___x_1620_);
v___x_1656_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
return v___x_1657_;
}
}
case 4:
{
lean_object* v_declName_1658_; lean_object* v___x_1659_; uint8_t v_isDefEqStuckEx_1660_; 
v_declName_1658_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_declName_1658_);
lean_dec_ref(v___x_1620_);
v___x_1659_ = l_Lean_Meta_Context_config(v___y_1616_);
v_isDefEqStuckEx_1660_ = lean_ctor_get_uint8(v___x_1659_, 4);
lean_dec_ref(v___x_1659_);
if (v_isDefEqStuckEx_1660_ == 0)
{
v___y_1606_ = v_declName_1658_;
goto v___jp_1605_;
}
else
{
uint8_t v___x_1661_; 
v___x_1661_ = l_Lean_Expr_hasExprMVar(v_a_1601_);
if (v___x_1661_ == 0)
{
v___y_1606_ = v_declName_1658_;
goto v___jp_1605_;
}
else
{
lean_object* v___x_1662_; 
lean_inc(v_declName_1658_);
v___x_1662_ = l_Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0(v_declName_1658_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; uint8_t v___x_1664_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref(v___x_1662_);
v___x_1664_ = lean_unbox(v_a_1663_);
lean_dec(v_a_1663_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; lean_object* v_env_1666_; lean_object* v___x_1667_; 
v___x_1665_ = lean_st_ref_get(v___y_1619_);
v_env_1666_ = lean_ctor_get(v___x_1665_, 0);
lean_inc_ref(v_env_1666_);
lean_dec(v___x_1665_);
v___x_1667_ = l_Lean_Meta_isMatcherAppCore_x3f(v_env_1666_, v_a_1601_);
if (lean_obj_tag(v___x_1667_) == 1)
{
lean_object* v_val_1668_; lean_object* v_numDiscrs_1669_; lean_object* v_nargs_1670_; lean_object* v_dummy_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v_val_1668_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_val_1668_);
lean_dec_ref(v___x_1667_);
v_numDiscrs_1669_ = lean_ctor_get(v_val_1668_, 1);
lean_inc(v_numDiscrs_1669_);
v_nargs_1670_ = l_Lean_Expr_getAppNumArgs(v_a_1601_);
v_dummy_1671_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta_spec__0_spec__0___lam__1___closed__0);
lean_inc(v_nargs_1670_);
v___x_1672_ = lean_mk_array(v_nargs_1670_, v_dummy_1671_);
v___x_1673_ = lean_unsigned_to_nat(1u);
v___x_1674_ = lean_nat_sub(v_nargs_1670_, v___x_1673_);
lean_dec(v_nargs_1670_);
lean_inc(v_a_1601_);
v___x_1675_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1601_, v___x_1672_, v___x_1674_);
v___x_1676_ = l_Lean_Meta_Match_MatcherInfo_getFirstDiscrPos(v_val_1668_);
lean_dec(v_val_1668_);
v___x_1677_ = lean_nat_add(v___x_1676_, v_numDiscrs_1669_);
lean_dec(v_numDiscrs_1669_);
v___x_1678_ = l_Array_toSubarray___redArg(v___x_1675_, v___x_1676_, v___x_1677_);
v___x_1679_ = lean_box(0);
v___x_1680_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v___x_1678_, v___x_1679_);
if (lean_obj_tag(v___x_1680_) == 0)
{
lean_dec_ref(v___x_1680_);
v___y_1606_ = v_declName_1658_;
goto v___jp_1605_;
}
else
{
lean_object* v_a_1681_; lean_object* v___x_1683_; uint8_t v_isShared_1684_; uint8_t v_isSharedCheck_1688_; 
lean_dec(v_declName_1658_);
lean_del_object(v___x_1603_);
lean_dec(v_a_1601_);
v_a_1681_ = lean_ctor_get(v___x_1680_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1680_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1683_ = v___x_1680_;
v_isShared_1684_ = v_isSharedCheck_1688_;
goto v_resetjp_1682_;
}
else
{
lean_inc(v_a_1681_);
lean_dec(v___x_1680_);
v___x_1683_ = lean_box(0);
v_isShared_1684_ = v_isSharedCheck_1688_;
goto v_resetjp_1682_;
}
v_resetjp_1682_:
{
lean_object* v___x_1686_; 
if (v_isShared_1684_ == 0)
{
v___x_1686_ = v___x_1683_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v_a_1681_);
v___x_1686_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
return v___x_1686_;
}
}
}
}
else
{
lean_object* v___x_1689_; lean_object* v_a_1690_; uint8_t v___x_1691_; 
lean_dec(v___x_1667_);
lean_inc(v_declName_1658_);
v___x_1689_ = l_Lean_isRec___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__2___redArg(v_declName_1658_, v___y_1619_);
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_a_1690_);
lean_dec_ref(v___x_1689_);
v___x_1691_ = lean_unbox(v_a_1690_);
lean_dec(v_a_1690_);
if (v___x_1691_ == 0)
{
v___y_1606_ = v_declName_1658_;
goto v___jp_1605_;
}
else
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1692_) == 0)
{
lean_dec_ref(v___x_1692_);
v___y_1606_ = v_declName_1658_;
goto v___jp_1605_;
}
else
{
lean_object* v_a_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1700_; 
lean_dec(v_declName_1658_);
lean_del_object(v___x_1603_);
lean_dec(v_a_1601_);
v_a_1693_ = lean_ctor_get(v___x_1692_, 0);
v_isSharedCheck_1700_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1700_ == 0)
{
v___x_1695_ = v___x_1692_;
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_a_1693_);
lean_dec(v___x_1692_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1700_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1698_; 
if (v_isShared_1696_ == 0)
{
v___x_1698_ = v___x_1695_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1699_; 
v_reuseFailAlloc_1699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1699_, 0, v_a_1693_);
v___x_1698_ = v_reuseFailAlloc_1699_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
return v___x_1698_;
}
}
}
}
}
}
else
{
lean_object* v___x_1701_; 
v___x_1701_ = l_Lean_Meta_throwIsDefEqStuck___redArg();
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_dec_ref(v___x_1701_);
v___y_1606_ = v_declName_1658_;
goto v___jp_1605_;
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
lean_dec(v_declName_1658_);
lean_del_object(v___x_1603_);
lean_dec(v_a_1601_);
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1701_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1701_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
lean_dec(v_declName_1658_);
lean_del_object(v___x_1603_);
lean_dec(v_a_1601_);
v_a_1710_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v___x_1662_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1662_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_a_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
}
}
}
case 7:
{
lean_object* v_binderType_1718_; lean_object* v_body_1719_; uint8_t v___x_1720_; 
lean_del_object(v___x_1603_);
lean_dec(v_a_1601_);
v_binderType_1718_ = lean_ctor_get(v___x_1620_, 1);
lean_inc_ref(v_binderType_1718_);
v_body_1719_ = lean_ctor_get(v___x_1620_, 2);
lean_inc_ref(v_body_1719_);
lean_dec_ref(v___x_1620_);
v___x_1720_ = l_Lean_Expr_hasLooseBVars(v_body_1719_);
if (v___x_1720_ == 0)
{
v___y_1588_ = v_binderType_1718_;
v_b_1589_ = v_body_1719_;
goto v___jp_1587_;
}
else
{
lean_object* v___x_1721_; 
v___x_1721_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_body_1719_, v___y_1618_, v___y_1619_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v_a_1722_; 
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_a_1722_);
lean_dec_ref(v___x_1721_);
v___y_1588_ = v_binderType_1718_;
v_b_1589_ = v_a_1722_;
goto v___jp_1587_;
}
else
{
lean_object* v_a_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1730_; 
lean_dec_ref(v_binderType_1718_);
v_a_1723_ = lean_ctor_get(v___x_1721_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1721_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1725_ = v___x_1721_;
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_a_1723_);
lean_dec(v___x_1721_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1730_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v_a_1723_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
}
}
}
case 9:
{
lean_object* v_a_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
lean_del_object(v___x_1603_);
lean_dec(v_a_1601_);
v_a_1731_ = lean_ctor_get(v___x_1620_, 0);
lean_inc_ref(v_a_1731_);
lean_dec_ref(v___x_1620_);
v___x_1732_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1732_, 0, v_a_1731_);
v___x_1733_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_1734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1732_);
lean_ctor_set(v___x_1734_, 1, v___x_1733_);
v___x_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1734_);
return v___x_1735_;
}
case 11:
{
lean_object* v_typeName_1736_; lean_object* v_idx_1737_; lean_object* v_struct_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
lean_del_object(v___x_1603_);
v_typeName_1736_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_typeName_1736_);
v_idx_1737_ = lean_ctor_get(v___x_1620_, 1);
lean_inc(v_idx_1737_);
v_struct_1738_ = lean_ctor_get(v___x_1620_, 2);
lean_inc_ref(v_struct_1738_);
lean_dec_ref(v___x_1620_);
v___x_1739_ = l_Lean_Expr_getAppNumArgs(v_a_1601_);
lean_inc(v___x_1739_);
v___x_1740_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_1740_, 0, v_typeName_1736_);
lean_ctor_set(v___x_1740_, 1, v_idx_1737_);
lean_ctor_set(v___x_1740_, 2, v___x_1739_);
v___x_1741_ = lean_unsigned_to_nat(1u);
v___x_1742_ = lean_mk_empty_array_with_capacity(v___x_1741_);
v___x_1743_ = lean_array_push(v___x_1742_, v_struct_1738_);
v___x_1744_ = lean_mk_empty_array_with_capacity(v___x_1739_);
lean_dec(v___x_1739_);
v___x_1745_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_a_1601_, v___x_1744_);
v___x_1746_ = l_Array_append___redArg(v___x_1743_, v___x_1745_);
lean_dec_ref(v___x_1745_);
v___x_1747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1740_);
lean_ctor_set(v___x_1747_, 1, v___x_1746_);
v___x_1748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1747_);
return v___x_1748_;
}
default: 
{
lean_object* v___x_1749_; lean_object* v___x_1750_; 
lean_dec_ref(v___x_1620_);
lean_del_object(v___x_1603_);
lean_dec(v_a_1601_);
v___x_1749_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
v___x_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1750_, 0, v___x_1749_);
return v___x_1750_;
}
}
}
}
}
else
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1771_; 
v_a_1764_ = lean_ctor_get(v___x_1600_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v___x_1600_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1766_ = v___x_1600_;
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v___x_1600_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1771_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
return v___x_1769_;
}
}
}
v___jp_1587_:
{
uint8_t v___x_1590_; 
v___x_1590_ = l_Lean_Expr_hasLooseBVars(v_b_1589_);
if (v___x_1590_ == 0)
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
v___x_1591_ = lean_box(5);
v___x_1592_ = lean_unsigned_to_nat(2u);
v___x_1593_ = lean_mk_empty_array_with_capacity(v___x_1592_);
v___x_1594_ = lean_array_push(v___x_1593_, v___y_1588_);
v___x_1595_ = lean_array_push(v___x_1594_, v_b_1589_);
v___x_1596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1591_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1596_);
return v___x_1597_;
}
else
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
lean_dec_ref(v_b_1589_);
lean_dec_ref(v___y_1588_);
v___x_1598_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__1));
v___x_1599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1599_, 0, v___x_1598_);
return v___x_1599_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___boxed(lean_object* v_e_1772_, lean_object* v_isMatch_1773_, lean_object* v_root_1774_, lean_object* v_a_1775_, lean_object* v_a_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_){
_start:
{
uint8_t v_isMatch_boxed_1780_; uint8_t v_root_boxed_1781_; lean_object* v_res_1782_; 
v_isMatch_boxed_1780_ = lean_unbox(v_isMatch_1773_);
v_root_boxed_1781_ = lean_unbox(v_root_1774_);
v_res_1782_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_1772_, v_isMatch_boxed_1780_, v_root_boxed_1781_, v_a_1775_, v_a_1776_, v_a_1777_, v_a_1778_);
lean_dec(v_a_1778_);
lean_dec_ref(v_a_1777_);
lean_dec(v_a_1776_);
lean_dec_ref(v_a_1775_);
return v_res_1782_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(lean_object* v_declName_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___redArg(v_declName_1783_, v___y_1787_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0___boxed(lean_object* v_declName_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Lean_getReducibilityStatus___at___00Lean_isReducible___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__0_spec__0(v_declName_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_);
lean_dec(v___y_1794_);
lean_dec_ref(v___y_1793_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(lean_object* v_inst_1797_, lean_object* v_R_1798_, lean_object* v_a_1799_, lean_object* v_b_1800_, lean_object* v_c_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
lean_object* v___x_1807_; 
v___x_1807_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___redArg(v_a_1799_, v_b_1800_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1___boxed(lean_object* v_inst_1808_, lean_object* v_R_1809_, lean_object* v_a_1810_, lean_object* v_b_1811_, lean_object* v_c_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs_spec__1(v_inst_1808_, v_R_1809_, v_a_1810_, v_b_1811_, v_c_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
lean_dec(v___y_1816_);
lean_dec_ref(v___y_1815_);
lean_dec(v___y_1814_);
lean_dec_ref(v___y_1813_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(lean_object* v_e_1819_, uint8_t v_root_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_){
_start:
{
uint8_t v___x_1826_; lean_object* v___x_1827_; 
v___x_1826_ = 1;
v___x_1827_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_1819_, v___x_1826_, v_root_1820_, v_a_1821_, v_a_1822_, v_a_1823_, v_a_1824_);
return v___x_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs___boxed(lean_object* v_e_1828_, lean_object* v_root_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_, lean_object* v_a_1833_, lean_object* v_a_1834_){
_start:
{
uint8_t v_root_boxed_1835_; lean_object* v_res_1836_; 
v_root_boxed_1835_ = lean_unbox(v_root_1829_);
v_res_1836_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getMatchKeyArgs(v_e_1828_, v_root_boxed_1835_, v_a_1830_, v_a_1831_, v_a_1832_, v_a_1833_);
lean_dec(v_a_1833_);
lean_dec_ref(v_a_1832_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
return v_res_1836_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__1(void){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1839_ = lean_box(0);
v___x_1840_ = lean_unsigned_to_nat(16u);
v___x_1841_ = lean_mk_array(v___x_1840_, v___x_1839_);
return v___x_1841_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2(void){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1842_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__1);
v___x_1843_ = lean_unsigned_to_nat(0u);
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
lean_ctor_set(v___x_1844_, 1, v___x_1842_);
return v___x_1844_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__3(void){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1845_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2);
v___x_1846_ = lean_unsigned_to_nat(0u);
v___x_1847_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0));
v___x_1848_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
lean_ctor_set(v___x_1848_, 1, v___x_1846_);
lean_ctor_set(v___x_1848_, 2, v___x_1845_);
lean_ctor_set(v___x_1848_, 3, v___x_1847_);
return v___x_1848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default(lean_object* v_a_1849_){
_start:
{
lean_object* v___x_1850_; 
v___x_1850_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__3, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__3);
return v___x_1850_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0(void){
_start:
{
lean_object* v___x_1851_; 
v___x_1851_ = l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default(lean_box(0));
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedTrie(lean_object* v_a_1852_){
_start:
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0);
return v___x_1853_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__1(void){
_start:
{
lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1856_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2);
v___x_1857_ = lean_unsigned_to_nat(0u);
v___x_1858_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v___x_1859_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
lean_ctor_set(v___x_1859_, 1, v___x_1857_);
lean_ctor_set(v___x_1859_, 2, v___x_1856_);
lean_ctor_set(v___x_1859_, 3, v___x_1858_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie(lean_object* v_00_u03b1_1860_){
_start:
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__1, &l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__1);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(lean_object* v_x_1862_, lean_object* v_x_1863_){
_start:
{
lean_object* v_values_1864_; lean_object* v_star_1865_; lean_object* v_children_1866_; lean_object* v_pending_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1875_; 
v_values_1864_ = lean_ctor_get(v_x_1862_, 0);
v_star_1865_ = lean_ctor_get(v_x_1862_, 1);
v_children_1866_ = lean_ctor_get(v_x_1862_, 2);
v_pending_1867_ = lean_ctor_get(v_x_1862_, 3);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_x_1862_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1869_ = v_x_1862_;
v_isShared_1870_ = v_isSharedCheck_1875_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_pending_1867_);
lean_inc(v_children_1866_);
lean_inc(v_star_1865_);
lean_inc(v_values_1864_);
lean_dec(v_x_1862_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1875_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1871_; lean_object* v___x_1873_; 
v___x_1871_ = lean_array_push(v_pending_1867_, v_x_1863_);
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 3, v___x_1871_);
v___x_1873_ = v___x_1869_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_values_1864_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v_star_1865_);
lean_ctor_set(v_reuseFailAlloc_1874_, 2, v_children_1866_);
lean_ctor_set(v_reuseFailAlloc_1874_, 3, v___x_1871_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Trie_pushPending(lean_object* v_00_u03b1_1876_, lean_object* v_x_1877_, lean_object* v_x_1878_){
_start:
{
lean_object* v___x_1879_; 
v___x_1879_ = l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(v_x_1877_, v_x_1878_);
return v___x_1879_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1880_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0);
v___x_1881_ = lean_unsigned_to_nat(1u);
v___x_1882_ = lean_mk_empty_array_with_capacity(v___x_1881_);
v___x_1883_ = lean_array_push(v___x_1882_, v___x_1880_);
return v___x_1883_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__1(void){
_start:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1884_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2);
v___x_1885_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0);
v___x_1886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1886_, 0, v___x_1885_);
lean_ctor_set(v___x_1886_, 1, v___x_1884_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabited(lean_object* v_00_u03b1_1887_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabited___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__1);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(lean_object* v_msgData_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
lean_object* v___x_1895_; lean_object* v_env_1896_; lean_object* v___x_1897_; lean_object* v_mctx_1898_; lean_object* v_lctx_1899_; lean_object* v_options_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1895_ = lean_st_ref_get(v___y_1893_);
v_env_1896_ = lean_ctor_get(v___x_1895_, 0);
lean_inc_ref(v_env_1896_);
lean_dec(v___x_1895_);
v___x_1897_ = lean_st_ref_get(v___y_1891_);
v_mctx_1898_ = lean_ctor_get(v___x_1897_, 0);
lean_inc_ref(v_mctx_1898_);
lean_dec(v___x_1897_);
v_lctx_1899_ = lean_ctor_get(v___y_1890_, 2);
v_options_1900_ = lean_ctor_get(v___y_1892_, 2);
lean_inc_ref(v_options_1900_);
lean_inc_ref(v_lctx_1899_);
v___x_1901_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1901_, 0, v_env_1896_);
lean_ctor_set(v___x_1901_, 1, v_mctx_1898_);
lean_ctor_set(v___x_1901_, 2, v_lctx_1899_);
lean_ctor_set(v___x_1901_, 3, v_options_1900_);
v___x_1902_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1901_);
lean_ctor_set(v___x_1902_, 1, v_msgData_1889_);
v___x_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0___boxed(lean_object* v_msgData_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v_msgData_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(lean_object* v_msg_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_){
_start:
{
lean_object* v_ref_1917_; lean_object* v___x_1918_; lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1927_; 
v_ref_1917_ = lean_ctor_get(v___y_1914_, 5);
v___x_1918_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v_msg_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_);
v_a_1919_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1921_ = v___x_1918_;
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1918_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1927_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1923_; lean_object* v___x_1925_; 
lean_inc(v_ref_1917_);
v___x_1923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1923_, 0, v_ref_1917_);
lean_ctor_set(v___x_1923_, 1, v_a_1919_);
if (v_isShared_1922_ == 0)
{
lean_ctor_set_tag(v___x_1921_, 1);
lean_ctor_set(v___x_1921_, 0, v___x_1923_);
v___x_1925_ = v___x_1921_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1923_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg___boxed(lean_object* v_msg_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_){
_start:
{
lean_object* v_res_1934_; 
v_res_1934_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v_msg_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
return v_res_1934_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_pushArgs___closed__0));
v___x_1937_ = l_Lean_stringToMessageData(v___x_1936_);
return v___x_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs(uint8_t v_root_1938_, lean_object* v_todo_1939_, lean_object* v_e_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_){
_start:
{
uint8_t v___x_1946_; 
v___x_1946_ = l_Lean_Meta_DiscrTree_hasNoindexAnnotation(v_e_1940_);
if (v___x_1946_ == 0)
{
lean_object* v___x_1947_; 
v___x_1947_ = l_Lean_Meta_DiscrTree_reduceDT(v_e_1940_, v_root_1938_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_2087_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_1950_ = v___x_1947_;
v_isShared_1951_ = v_isSharedCheck_2087_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1947_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_2087_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v_v_1953_; lean_object* v___x_1959_; lean_object* v_k_1961_; lean_object* v_nargs_1962_; lean_object* v_todo_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; 
v___x_1959_ = l_Lean_Expr_getAppFn(v_a_1948_);
switch(lean_obj_tag(v___x_1959_))
{
case 9:
{
lean_object* v_a_2006_; 
lean_dec(v_a_1948_);
v_a_2006_ = lean_ctor_get(v___x_1959_, 0);
lean_inc_ref(v_a_2006_);
lean_dec_ref(v___x_1959_);
v_v_1953_ = v_a_2006_;
goto v___jp_1952_;
}
case 4:
{
lean_object* v_declName_2007_; lean_object* v___y_2009_; lean_object* v___y_2010_; lean_object* v___y_2011_; lean_object* v___y_2012_; 
v_declName_2007_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_declName_2007_);
if (v_root_1938_ == 0)
{
lean_object* v___x_2015_; 
lean_inc(v_a_1948_);
v___x_2015_ = l_Lean_Meta_LazyDiscrTree_MatchClone_toNatLit_x3f(v_a_1948_);
if (lean_obj_tag(v___x_2015_) == 1)
{
lean_object* v_val_2016_; 
lean_dec(v_declName_2007_);
lean_dec_ref(v___x_1959_);
lean_dec(v_a_1948_);
v_val_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_val_2016_);
lean_dec_ref(v___x_2015_);
v_v_1953_ = v_val_2016_;
goto v___jp_1952_;
}
else
{
lean_object* v___x_2017_; 
lean_dec(v___x_2015_);
lean_del_object(v___x_1950_);
v___x_2017_ = l_Lean_Meta_LazyDiscrTree_MatchClone_isNatOffset(v_declName_2007_, v_a_1948_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_object* v_a_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2028_; 
v_a_2018_ = lean_ctor_get(v___x_2017_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2020_ = v___x_2017_;
v_isShared_2021_ = v_isSharedCheck_2028_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_a_2018_);
lean_dec(v___x_2017_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2028_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
uint8_t v___x_2022_; 
v___x_2022_ = lean_unbox(v_a_2018_);
lean_dec(v_a_2018_);
if (v___x_2022_ == 0)
{
lean_del_object(v___x_2020_);
v___y_2009_ = v_a_1941_;
v___y_2010_ = v_a_1942_;
v___y_2011_ = v_a_1943_;
v___y_2012_ = v_a_1944_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2026_; 
lean_dec(v_declName_2007_);
lean_dec_ref(v___x_1959_);
lean_dec(v_a_1948_);
v___x_2023_ = lean_box(3);
v___x_2024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2024_, 0, v___x_2023_);
lean_ctor_set(v___x_2024_, 1, v_todo_1939_);
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 0, v___x_2024_);
v___x_2026_ = v___x_2020_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v___x_2024_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
else
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2036_; 
lean_dec(v_declName_2007_);
lean_dec_ref(v___x_1959_);
lean_dec(v_a_1948_);
lean_dec_ref(v_todo_1939_);
v_a_2029_ = lean_ctor_get(v___x_2017_, 0);
v_isSharedCheck_2036_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2031_ = v___x_2017_;
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v___x_2017_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2036_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
if (v_isShared_2032_ == 0)
{
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_a_2029_);
v___x_2034_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
return v___x_2034_;
}
}
}
}
}
else
{
lean_del_object(v___x_1950_);
v___y_2009_ = v_a_1941_;
v___y_2010_ = v_a_1942_;
v___y_2011_ = v_a_1943_;
v___y_2012_ = v_a_1944_;
goto v___jp_2008_;
}
v___jp_2008_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2013_ = l_Lean_Expr_getAppNumArgs(v_a_1948_);
lean_inc(v___x_2013_);
v___x_2014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2014_, 0, v_declName_2007_);
lean_ctor_set(v___x_2014_, 1, v___x_2013_);
v_k_1961_ = v___x_2014_;
v_nargs_1962_ = v___x_2013_;
v_todo_1963_ = v_todo_1939_;
v___y_1964_ = v___y_2009_;
v___y_1965_ = v___y_2010_;
v___y_1966_ = v___y_2011_;
v___y_1967_ = v___y_2012_;
goto v___jp_1960_;
}
}
case 11:
{
lean_object* v_typeName_2037_; lean_object* v_idx_2038_; lean_object* v_struct_2039_; lean_object* v___x_2040_; lean_object* v___y_2042_; lean_object* v_env_2046_; uint8_t v___x_2047_; 
lean_del_object(v___x_1950_);
v_typeName_2037_ = lean_ctor_get(v___x_1959_, 0);
lean_inc_n(v_typeName_2037_, 2);
v_idx_2038_ = lean_ctor_get(v___x_1959_, 1);
lean_inc(v_idx_2038_);
v_struct_2039_ = lean_ctor_get(v___x_1959_, 2);
lean_inc_ref(v_struct_2039_);
v___x_2040_ = lean_st_ref_get(v_a_1944_);
v_env_2046_ = lean_ctor_get(v___x_2040_, 0);
lean_inc_ref(v_env_2046_);
lean_dec(v___x_2040_);
v___x_2047_ = lean_is_class(v_env_2046_, v_typeName_2037_);
if (v___x_2047_ == 0)
{
v___y_2042_ = v_struct_2039_;
goto v___jp_2041_;
}
else
{
lean_object* v___x_2048_; 
v___x_2048_ = l_Lean_Meta_DiscrTree_mkNoindexAnnotation(v_struct_2039_);
v___y_2042_ = v___x_2048_;
goto v___jp_2041_;
}
v___jp_2041_:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2043_ = l_Lean_Expr_getAppNumArgs(v_a_1948_);
lean_inc(v___x_2043_);
v___x_2044_ = lean_alloc_ctor(6, 3, 0);
lean_ctor_set(v___x_2044_, 0, v_typeName_2037_);
lean_ctor_set(v___x_2044_, 1, v_idx_2038_);
lean_ctor_set(v___x_2044_, 2, v___x_2043_);
v___x_2045_ = lean_array_push(v_todo_1939_, v___y_2042_);
v_k_1961_ = v___x_2044_;
v_nargs_1962_ = v___x_2043_;
v_todo_1963_ = v___x_2045_;
v___y_1964_ = v_a_1941_;
v___y_1965_ = v_a_1942_;
v___y_1966_ = v_a_1943_;
v___y_1967_ = v_a_1944_;
goto v___jp_1960_;
}
}
case 1:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
lean_dec_ref(v___x_1959_);
lean_del_object(v___x_1950_);
lean_dec(v_a_1948_);
v___x_2049_ = lean_box(3);
v___x_2050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2049_);
lean_ctor_set(v___x_2050_, 1, v_todo_1939_);
v___x_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2050_);
return v___x_2051_;
}
case 2:
{
lean_object* v_mvarId_2052_; lean_object* v___x_2053_; uint8_t v___x_2054_; 
lean_del_object(v___x_1950_);
lean_dec(v_a_1948_);
v_mvarId_2052_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_mvarId_2052_);
lean_dec_ref(v___x_1959_);
v___x_2053_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpMVarId));
v___x_2054_ = l_Lean_instBEqMVarId_beq(v_mvarId_2052_, v___x_2053_);
lean_dec(v_mvarId_2052_);
if (v___x_2054_ == 0)
{
lean_object* v___x_2055_; lean_object* v___x_2056_; 
lean_dec_ref(v_todo_1939_);
v___x_2055_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1, &l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_pushArgs___closed__1);
v___x_2056_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v___x_2055_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
return v___x_2056_;
}
else
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2057_ = lean_box(3);
v___x_2058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2057_);
lean_ctor_set(v___x_2058_, 1, v_todo_1939_);
v___x_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2058_);
return v___x_2059_;
}
}
case 7:
{
lean_object* v_binderType_2060_; lean_object* v_body_2061_; lean_object* v_b_2063_; uint8_t v___x_2073_; 
lean_del_object(v___x_1950_);
lean_dec(v_a_1948_);
v_binderType_2060_ = lean_ctor_get(v___x_1959_, 1);
lean_inc_ref(v_binderType_2060_);
v_body_2061_ = lean_ctor_get(v___x_1959_, 2);
lean_inc_ref(v_body_2061_);
lean_dec_ref(v___x_1959_);
v___x_2073_ = l_Lean_Expr_hasLooseBVars(v_body_2061_);
if (v___x_2073_ == 0)
{
v_b_2063_ = v_body_2061_;
goto v___jp_2062_;
}
else
{
lean_object* v___x_2074_; 
v___x_2074_ = l_Lean_Meta_LazyDiscrTree_MatchClone_elimLooseBVarsByBeta(v_body_2061_, v_a_1943_, v_a_1944_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_a_2075_; 
v_a_2075_ = lean_ctor_get(v___x_2074_, 0);
lean_inc(v_a_2075_);
lean_dec_ref(v___x_2074_);
v_b_2063_ = v_a_2075_;
goto v___jp_2062_;
}
else
{
lean_object* v_a_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2083_; 
lean_dec_ref(v_binderType_2060_);
lean_dec_ref(v_todo_1939_);
v_a_2076_ = lean_ctor_get(v___x_2074_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2078_ = v___x_2074_;
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_a_2076_);
lean_dec(v___x_2074_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2081_; 
if (v_isShared_2079_ == 0)
{
v___x_2081_ = v___x_2078_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_a_2076_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
}
v___jp_2062_:
{
uint8_t v___x_2064_; 
v___x_2064_ = l_Lean_Expr_hasLooseBVars(v_b_2063_);
if (v___x_2064_ == 0)
{
lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2065_ = lean_box(5);
v___x_2066_ = lean_array_push(v_todo_1939_, v_binderType_2060_);
v___x_2067_ = lean_array_push(v___x_2066_, v_b_2063_);
v___x_2068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2065_);
lean_ctor_set(v___x_2068_, 1, v___x_2067_);
v___x_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
return v___x_2069_;
}
else
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
lean_dec_ref(v_b_2063_);
lean_dec_ref(v_binderType_2060_);
v___x_2070_ = lean_box(4);
v___x_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2070_);
lean_ctor_set(v___x_2071_, 1, v_todo_1939_);
v___x_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2071_);
return v___x_2072_;
}
}
}
default: 
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
lean_dec_ref(v___x_1959_);
lean_del_object(v___x_1950_);
lean_dec(v_a_1948_);
v___x_2084_ = lean_box(4);
v___x_2085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2084_);
lean_ctor_set(v___x_2085_, 1, v_todo_1939_);
v___x_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2085_);
return v___x_2086_;
}
}
v___jp_1952_:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1957_; 
v___x_1954_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1954_, 0, v_v_1953_);
v___x_1955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1954_);
lean_ctor_set(v___x_1955_, 1, v_todo_1939_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v___x_1955_);
v___x_1957_ = v___x_1950_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v___x_1955_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
v___jp_1960_:
{
lean_object* v___x_1968_; 
lean_inc(v_nargs_1962_);
v___x_1968_ = l_Lean_Meta_getFunInfoNArgs(v___x_1959_, v_nargs_1962_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v_paramInfo_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_1996_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1969_);
lean_dec_ref(v___x_1968_);
v_paramInfo_1970_ = lean_ctor_get(v_a_1969_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v_a_1969_);
if (v_isSharedCheck_1996_ == 0)
{
lean_object* v_unused_1997_; 
v_unused_1997_ = lean_ctor_get(v_a_1969_, 1);
lean_dec(v_unused_1997_);
v___x_1972_ = v_a_1969_;
v_isShared_1973_ = v_isSharedCheck_1996_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_paramInfo_1970_);
lean_dec(v_a_1969_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_1996_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1974_ = lean_unsigned_to_nat(1u);
v___x_1975_ = lean_nat_sub(v_nargs_1962_, v___x_1974_);
lean_dec(v_nargs_1962_);
v___x_1976_ = l_Lean_Meta_LazyDiscrTree_MatchClone_pushArgsAux(v_paramInfo_1970_, v___x_1975_, v_a_1948_, v_todo_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
lean_dec_ref(v_paramInfo_1970_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1987_; 
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_1987_ == 0)
{
v___x_1979_ = v___x_1976_;
v_isShared_1980_ = v_isSharedCheck_1987_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v___x_1976_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1987_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
if (v_isShared_1973_ == 0)
{
lean_ctor_set(v___x_1972_, 1, v_a_1977_);
lean_ctor_set(v___x_1972_, 0, v_k_1961_);
v___x_1982_ = v___x_1972_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1986_; 
v_reuseFailAlloc_1986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1986_, 0, v_k_1961_);
lean_ctor_set(v_reuseFailAlloc_1986_, 1, v_a_1977_);
v___x_1982_ = v_reuseFailAlloc_1986_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
lean_object* v___x_1984_; 
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 0, v___x_1982_);
v___x_1984_ = v___x_1979_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v___x_1982_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
}
}
else
{
lean_object* v_a_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_1995_; 
lean_del_object(v___x_1972_);
lean_dec(v_k_1961_);
v_a_1988_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_1995_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1990_ = v___x_1976_;
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_a_1988_);
lean_dec(v___x_1976_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_1995_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1993_; 
if (v_isShared_1991_ == 0)
{
v___x_1993_ = v___x_1990_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_a_1988_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec_ref(v_todo_1963_);
lean_dec(v_nargs_1962_);
lean_dec(v_k_1961_);
lean_dec(v_a_1948_);
v_a_1998_ = lean_ctor_get(v___x_1968_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1968_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1968_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1968_);
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
else
{
lean_object* v_a_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2095_; 
lean_dec_ref(v_todo_1939_);
v_a_2088_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2090_ = v___x_1947_;
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_a_2088_);
lean_dec(v___x_1947_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2095_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2093_; 
if (v_isShared_2091_ == 0)
{
v___x_2093_ = v___x_2090_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_a_2088_);
v___x_2093_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
return v___x_2093_;
}
}
}
}
else
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
lean_dec_ref(v_e_1940_);
v___x_2096_ = lean_box(3);
v___x_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2096_);
lean_ctor_set(v___x_2097_, 1, v_todo_1939_);
v___x_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
return v___x_2098_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushArgs___boxed(lean_object* v_root_2099_, lean_object* v_todo_2100_, lean_object* v_e_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_){
_start:
{
uint8_t v_root_boxed_2107_; lean_object* v_res_2108_; 
v_root_boxed_2107_ = lean_unbox(v_root_2099_);
v_res_2108_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v_root_boxed_2107_, v_todo_2100_, v_e_2101_, v_a_2102_, v_a_2103_, v_a_2104_, v_a_2105_);
lean_dec(v_a_2105_);
lean_dec_ref(v_a_2104_);
lean_dec(v_a_2103_);
lean_dec_ref(v_a_2102_);
return v_res_2108_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(lean_object* v_00_u03b1_2109_, lean_object* v_msg_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v___x_2116_; 
v___x_2116_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___redArg(v_msg_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0___boxed(lean_object* v_00_u03b1_2117_, lean_object* v_msg_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_){
_start:
{
lean_object* v_res_2124_; 
v_res_2124_ = l_Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0(v_00_u03b1_2117_, v_msg_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
lean_dec(v___y_2120_);
lean_dec_ref(v___y_2119_);
return v_res_2124_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_initCapacity(void){
_start:
{
lean_object* v___x_2125_; 
v___x_2125_ = lean_unsigned_to_nat(8u);
return v___x_2125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey(lean_object* v_e_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_){
_start:
{
uint8_t v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2132_ = 1;
v___x_2133_ = lean_unsigned_to_nat(8u);
v___x_2134_ = lean_mk_empty_array_with_capacity(v___x_2133_);
v___x_2135_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v___x_2132_, v___x_2134_, v_e_2126_, v_a_2127_, v_a_2128_, v_a_2129_, v_a_2130_);
return v___x_2135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_rootKey___boxed(lean_object* v_e_2136_, lean_object* v_a_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Lean_Meta_LazyDiscrTree_rootKey(v_e_2136_, v_a_2137_, v_a_2138_, v_a_2139_, v_a_2140_);
lean_dec(v_a_2140_);
lean_dec_ref(v_a_2139_);
lean_dec(v_a_2138_);
lean_dec_ref(v_a_2137_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath(lean_object* v_op_2143_, uint8_t v_root_2144_, lean_object* v_todo_2145_, lean_object* v_keys_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; uint8_t v___x_2154_; 
v___x_2152_ = lean_array_get_size(v_todo_2145_);
v___x_2153_ = lean_unsigned_to_nat(0u);
v___x_2154_ = lean_nat_dec_eq(v___x_2152_, v___x_2153_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v_e_2158_; lean_object* v_todo_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2155_ = l_Lean_instInhabitedExpr;
v___x_2156_ = lean_unsigned_to_nat(1u);
v___x_2157_ = lean_nat_sub(v___x_2152_, v___x_2156_);
v_e_2158_ = lean_array_get(v___x_2155_, v_todo_2145_, v___x_2157_);
lean_dec(v___x_2157_);
v_todo_2159_ = lean_array_pop(v_todo_2145_);
v___x_2160_ = lean_box(v_root_2144_);
lean_inc_ref(v_op_2143_);
lean_inc(v_a_2150_);
lean_inc_ref(v_a_2149_);
lean_inc(v_a_2148_);
lean_inc_ref(v_a_2147_);
v___x_2161_ = lean_apply_8(v_op_2143_, v___x_2160_, v_todo_2159_, v_e_2158_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_, lean_box(0));
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v_fst_2163_; lean_object* v_snd_2164_; lean_object* v___x_2165_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref(v___x_2161_);
v_fst_2163_ = lean_ctor_get(v_a_2162_, 0);
lean_inc(v_fst_2163_);
v_snd_2164_ = lean_ctor_get(v_a_2162_, 1);
lean_inc(v_snd_2164_);
lean_dec(v_a_2162_);
v___x_2165_ = lean_array_push(v_keys_2146_, v_fst_2163_);
v_root_2144_ = v___x_2154_;
v_todo_2145_ = v_snd_2164_;
v_keys_2146_ = v___x_2165_;
goto _start;
}
else
{
lean_object* v_a_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2174_; 
lean_dec_ref(v_keys_2146_);
lean_dec_ref(v_op_2143_);
v_a_2167_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2169_ = v___x_2161_;
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_a_2167_);
lean_dec(v___x_2161_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2172_; 
if (v_isShared_2170_ == 0)
{
v___x_2172_ = v___x_2169_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_a_2167_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
}
else
{
lean_object* v___x_2175_; 
lean_dec_ref(v_todo_2145_);
lean_dec_ref(v_op_2143_);
v___x_2175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2175_, 0, v_keys_2146_);
return v___x_2175_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_buildPath___boxed(lean_object* v_op_2176_, lean_object* v_root_2177_, lean_object* v_todo_2178_, lean_object* v_keys_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_){
_start:
{
uint8_t v_root_boxed_2185_; lean_object* v_res_2186_; 
v_root_boxed_2185_ = lean_unbox(v_root_2177_);
v_res_2186_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2176_, v_root_boxed_2185_, v_todo_2178_, v_keys_2179_, v_a_2180_, v_a_2181_, v_a_2182_, v_a_2183_);
lean_dec(v_a_2183_);
lean_dec_ref(v_a_2182_);
lean_dec(v_a_2181_);
lean_dec_ref(v_a_2180_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath(lean_object* v_e_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_){
_start:
{
lean_object* v_op_2194_; lean_object* v___x_2195_; lean_object* v_todo_2196_; uint8_t v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v_op_2194_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_patternPath___closed__0));
v___x_2195_ = lean_unsigned_to_nat(8u);
v_todo_2196_ = lean_mk_empty_array_with_capacity(v___x_2195_);
v___x_2197_ = 1;
lean_inc_ref(v_todo_2196_);
v___x_2198_ = lean_array_push(v_todo_2196_, v_e_2188_);
v___x_2199_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2194_, v___x_2197_, v___x_2198_, v_todo_2196_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_);
return v___x_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_patternPath___boxed(lean_object* v_e_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l_Lean_Meta_LazyDiscrTree_patternPath(v_e_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_);
lean_dec(v_a_2204_);
lean_dec_ref(v_a_2203_);
lean_dec(v_a_2202_);
lean_dec_ref(v_a_2201_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(uint8_t v_root_2207_, lean_object* v_todo_2208_, lean_object* v_e_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_){
_start:
{
uint8_t v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = 1;
v___x_2216_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_2209_, v___x_2215_, v_root_2207_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2234_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2219_ = v___x_2216_;
v_isShared_2220_ = v_isSharedCheck_2234_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2216_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2234_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v_fst_2221_; lean_object* v_snd_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2233_; 
v_fst_2221_ = lean_ctor_get(v_a_2217_, 0);
v_snd_2222_ = lean_ctor_get(v_a_2217_, 1);
v_isSharedCheck_2233_ = !lean_is_exclusive(v_a_2217_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2224_ = v_a_2217_;
v_isShared_2225_ = v_isSharedCheck_2233_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_snd_2222_);
lean_inc(v_fst_2221_);
lean_dec(v_a_2217_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2233_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2226_; lean_object* v___x_2228_; 
v___x_2226_ = l_Array_append___redArg(v_todo_2208_, v_snd_2222_);
lean_dec(v_snd_2222_);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 1, v___x_2226_);
v___x_2228_ = v___x_2224_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_fst_2221_);
lean_ctor_set(v_reuseFailAlloc_2232_, 1, v___x_2226_);
v___x_2228_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
lean_object* v___x_2230_; 
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v___x_2228_);
v___x_2230_ = v___x_2219_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v___x_2228_);
v___x_2230_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
return v___x_2230_;
}
}
}
}
}
else
{
lean_dec_ref(v_todo_2208_);
return v___x_2216_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___lam__0___boxed(lean_object* v_root_2235_, lean_object* v_todo_2236_, lean_object* v_e_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_){
_start:
{
uint8_t v_root_boxed_2243_; lean_object* v_res_2244_; 
v_root_boxed_2243_ = lean_unbox(v_root_2235_);
v_res_2244_ = l_Lean_Meta_LazyDiscrTree_targetPath___lam__0(v_root_boxed_2243_, v_todo_2236_, v_e_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
lean_dec(v___y_2241_);
lean_dec_ref(v___y_2240_);
lean_dec(v___y_2239_);
lean_dec_ref(v___y_2238_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath(lean_object* v_e_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_){
_start:
{
lean_object* v_op_2252_; lean_object* v___x_2253_; lean_object* v_todo_2254_; uint8_t v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; 
v_op_2252_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_targetPath___closed__0));
v___x_2253_ = lean_unsigned_to_nat(8u);
v_todo_2254_ = lean_mk_empty_array_with_capacity(v___x_2253_);
v___x_2255_ = 1;
lean_inc_ref(v_todo_2254_);
v___x_2256_ = lean_array_push(v_todo_2254_, v_e_2246_);
v___x_2257_ = l_Lean_Meta_LazyDiscrTree_buildPath(v_op_2252_, v___x_2255_, v___x_2256_, v_todo_2254_, v_a_2247_, v_a_2248_, v_a_2249_, v_a_2250_);
return v___x_2257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_targetPath___boxed(lean_object* v_e_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_){
_start:
{
lean_object* v_res_2264_; 
v_res_2264_ = l_Lean_Meta_LazyDiscrTree_targetPath(v_e_2258_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_);
lean_dec(v_a_2262_);
lean_dec_ref(v_a_2261_);
lean_dec(v_a_2260_);
lean_dec_ref(v_a_2259_);
return v_res_2264_;
}
}
static uint64_t _init_l_Lean_Meta_LazyDiscrTree_runMatch___redArg___closed__0(void){
_start:
{
uint8_t v___x_2265_; uint64_t v___x_2266_; 
v___x_2265_ = 2;
v___x_2266_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_2265_);
return v___x_2266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg(lean_object* v_d_2267_, lean_object* v_m_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_){
_start:
{
lean_object* v_tries_2274_; lean_object* v_roots_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2347_; 
v_tries_2274_ = lean_ctor_get(v_d_2267_, 0);
v_roots_2275_ = lean_ctor_get(v_d_2267_, 1);
v_isSharedCheck_2347_ = !lean_is_exclusive(v_d_2267_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2277_ = v_d_2267_;
v_isShared_2278_ = v_isSharedCheck_2347_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_roots_2275_);
lean_inc(v_tries_2274_);
lean_dec(v_d_2267_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2347_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2279_; uint8_t v_foApprox_2280_; uint8_t v_ctxApprox_2281_; uint8_t v_quasiPatternApprox_2282_; uint8_t v_constApprox_2283_; uint8_t v_isDefEqStuckEx_2284_; uint8_t v_unificationHints_2285_; uint8_t v_proofIrrelevance_2286_; uint8_t v_assignSyntheticOpaque_2287_; uint8_t v_offsetCnstrs_2288_; uint8_t v_etaStruct_2289_; uint8_t v_univApprox_2290_; uint8_t v_iota_2291_; uint8_t v_beta_2292_; uint8_t v_proj_2293_; uint8_t v_zeta_2294_; uint8_t v_zetaDelta_2295_; uint8_t v_zetaUnused_2296_; uint8_t v_zetaHave_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2346_; 
v___x_2279_ = l_Lean_Meta_Context_config(v_a_2269_);
v_foApprox_2280_ = lean_ctor_get_uint8(v___x_2279_, 0);
v_ctxApprox_2281_ = lean_ctor_get_uint8(v___x_2279_, 1);
v_quasiPatternApprox_2282_ = lean_ctor_get_uint8(v___x_2279_, 2);
v_constApprox_2283_ = lean_ctor_get_uint8(v___x_2279_, 3);
v_isDefEqStuckEx_2284_ = lean_ctor_get_uint8(v___x_2279_, 4);
v_unificationHints_2285_ = lean_ctor_get_uint8(v___x_2279_, 5);
v_proofIrrelevance_2286_ = lean_ctor_get_uint8(v___x_2279_, 6);
v_assignSyntheticOpaque_2287_ = lean_ctor_get_uint8(v___x_2279_, 7);
v_offsetCnstrs_2288_ = lean_ctor_get_uint8(v___x_2279_, 8);
v_etaStruct_2289_ = lean_ctor_get_uint8(v___x_2279_, 10);
v_univApprox_2290_ = lean_ctor_get_uint8(v___x_2279_, 11);
v_iota_2291_ = lean_ctor_get_uint8(v___x_2279_, 12);
v_beta_2292_ = lean_ctor_get_uint8(v___x_2279_, 13);
v_proj_2293_ = lean_ctor_get_uint8(v___x_2279_, 14);
v_zeta_2294_ = lean_ctor_get_uint8(v___x_2279_, 15);
v_zetaDelta_2295_ = lean_ctor_get_uint8(v___x_2279_, 16);
v_zetaUnused_2296_ = lean_ctor_get_uint8(v___x_2279_, 17);
v_zetaHave_2297_ = lean_ctor_get_uint8(v___x_2279_, 18);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2299_ = v___x_2279_;
v_isShared_2300_ = v_isSharedCheck_2346_;
goto v_resetjp_2298_;
}
else
{
lean_dec(v___x_2279_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2346_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2301_; uint8_t v_trackZetaDelta_2302_; lean_object* v_zetaDeltaSet_2303_; lean_object* v_lctx_2304_; lean_object* v_localInstances_2305_; lean_object* v_defEqCtx_x3f_2306_; lean_object* v_synthPendingDepth_2307_; lean_object* v_canUnfold_x3f_2308_; uint8_t v_univApprox_2309_; uint8_t v_inTypeClassResolution_2310_; uint8_t v_cacheInferType_2311_; uint8_t v___x_2312_; lean_object* v_config_2314_; 
v___x_2301_ = lean_st_mk_ref(v_tries_2274_);
v_trackZetaDelta_2302_ = lean_ctor_get_uint8(v_a_2269_, sizeof(void*)*7);
v_zetaDeltaSet_2303_ = lean_ctor_get(v_a_2269_, 1);
v_lctx_2304_ = lean_ctor_get(v_a_2269_, 2);
v_localInstances_2305_ = lean_ctor_get(v_a_2269_, 3);
v_defEqCtx_x3f_2306_ = lean_ctor_get(v_a_2269_, 4);
v_synthPendingDepth_2307_ = lean_ctor_get(v_a_2269_, 5);
v_canUnfold_x3f_2308_ = lean_ctor_get(v_a_2269_, 6);
v_univApprox_2309_ = lean_ctor_get_uint8(v_a_2269_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2310_ = lean_ctor_get_uint8(v_a_2269_, sizeof(void*)*7 + 2);
v_cacheInferType_2311_ = lean_ctor_get_uint8(v_a_2269_, sizeof(void*)*7 + 3);
v___x_2312_ = 2;
if (v_isShared_2300_ == 0)
{
v_config_2314_ = v___x_2299_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 0, v_foApprox_2280_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 1, v_ctxApprox_2281_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 2, v_quasiPatternApprox_2282_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 3, v_constApprox_2283_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 4, v_isDefEqStuckEx_2284_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 5, v_unificationHints_2285_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 6, v_proofIrrelevance_2286_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 7, v_assignSyntheticOpaque_2287_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 8, v_offsetCnstrs_2288_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 10, v_etaStruct_2289_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 11, v_univApprox_2290_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 12, v_iota_2291_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 13, v_beta_2292_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 14, v_proj_2293_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 15, v_zeta_2294_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 16, v_zetaDelta_2295_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 17, v_zetaUnused_2296_);
lean_ctor_set_uint8(v_reuseFailAlloc_2345_, 18, v_zetaHave_2297_);
v_config_2314_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
uint64_t v___x_2315_; uint64_t v___x_2316_; uint64_t v___x_2317_; uint64_t v___x_2318_; uint64_t v___x_2319_; uint64_t v_key_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
lean_ctor_set_uint8(v_config_2314_, 9, v___x_2312_);
v___x_2315_ = l_Lean_Meta_Context_configKey(v_a_2269_);
v___x_2316_ = 2ULL;
v___x_2317_ = lean_uint64_shift_right(v___x_2315_, v___x_2316_);
v___x_2318_ = lean_uint64_shift_left(v___x_2317_, v___x_2316_);
v___x_2319_ = lean_uint64_once(&l_Lean_Meta_LazyDiscrTree_runMatch___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_runMatch___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_runMatch___redArg___closed__0);
v_key_2320_ = lean_uint64_lor(v___x_2318_, v___x_2319_);
v___x_2321_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2321_, 0, v_config_2314_);
lean_ctor_set_uint64(v___x_2321_, sizeof(void*)*1, v_key_2320_);
lean_inc(v_canUnfold_x3f_2308_);
lean_inc(v_synthPendingDepth_2307_);
lean_inc(v_defEqCtx_x3f_2306_);
lean_inc_ref(v_localInstances_2305_);
lean_inc_ref(v_lctx_2304_);
lean_inc(v_zetaDeltaSet_2303_);
v___x_2322_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
lean_ctor_set(v___x_2322_, 1, v_zetaDeltaSet_2303_);
lean_ctor_set(v___x_2322_, 2, v_lctx_2304_);
lean_ctor_set(v___x_2322_, 3, v_localInstances_2305_);
lean_ctor_set(v___x_2322_, 4, v_defEqCtx_x3f_2306_);
lean_ctor_set(v___x_2322_, 5, v_synthPendingDepth_2307_);
lean_ctor_set(v___x_2322_, 6, v_canUnfold_x3f_2308_);
lean_ctor_set_uint8(v___x_2322_, sizeof(void*)*7, v_trackZetaDelta_2302_);
lean_ctor_set_uint8(v___x_2322_, sizeof(void*)*7 + 1, v_univApprox_2309_);
lean_ctor_set_uint8(v___x_2322_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2310_);
lean_ctor_set_uint8(v___x_2322_, sizeof(void*)*7 + 3, v_cacheInferType_2311_);
lean_inc(v_a_2272_);
lean_inc_ref(v_a_2271_);
lean_inc(v_a_2270_);
lean_inc(v___x_2301_);
v___x_2323_ = lean_apply_6(v_m_2268_, v___x_2301_, v___x_2322_, v_a_2270_, v_a_2271_, v_a_2272_, lean_box(0));
if (lean_obj_tag(v___x_2323_) == 0)
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2336_; 
v_a_2324_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2326_ = v___x_2323_;
v_isShared_2327_ = v_isSharedCheck_2336_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2323_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2336_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2328_; lean_object* v___x_2330_; 
v___x_2328_ = lean_st_ref_get(v___x_2301_);
lean_dec(v___x_2301_);
if (v_isShared_2278_ == 0)
{
lean_ctor_set(v___x_2277_, 0, v___x_2328_);
v___x_2330_ = v___x_2277_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v___x_2328_);
lean_ctor_set(v_reuseFailAlloc_2335_, 1, v_roots_2275_);
v___x_2330_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
lean_object* v___x_2331_; lean_object* v___x_2333_; 
v___x_2331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2331_, 0, v_a_2324_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 0, v___x_2331_);
v___x_2333_ = v___x_2326_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2334_; 
v_reuseFailAlloc_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2334_, 0, v___x_2331_);
v___x_2333_ = v_reuseFailAlloc_2334_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
return v___x_2333_;
}
}
}
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2344_; 
lean_dec(v___x_2301_);
lean_del_object(v___x_2277_);
lean_dec_ref(v_roots_2275_);
v_a_2337_ = lean_ctor_get(v___x_2323_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2323_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2339_ = v___x_2323_;
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2323_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2337_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___redArg___boxed(lean_object* v_d_2348_, lean_object* v_m_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_2348_, v_m_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_);
lean_dec(v_a_2353_);
lean_dec_ref(v_a_2352_);
lean_dec(v_a_2351_);
lean_dec_ref(v_a_2350_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch(lean_object* v_00_u03b1_2356_, lean_object* v_00_u03b2_2357_, lean_object* v_d_2358_, lean_object* v_m_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_){
_start:
{
lean_object* v___x_2365_; 
v___x_2365_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_2358_, v_m_2359_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_runMatch___boxed(lean_object* v_00_u03b1_2366_, lean_object* v_00_u03b2_2367_, lean_object* v_d_2368_, lean_object* v_m_2369_, lean_object* v_a_2370_, lean_object* v_a_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_){
_start:
{
lean_object* v_res_2375_; 
v_res_2375_ = l_Lean_Meta_LazyDiscrTree_runMatch(v_00_u03b1_2366_, v_00_u03b2_2367_, v_d_2368_, v_m_2369_, v_a_2370_, v_a_2371_, v_a_2372_, v_a_2373_);
lean_dec(v_a_2373_);
lean_dec_ref(v_a_2372_);
lean_dec(v_a_2371_);
lean_dec_ref(v_a_2370_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg(lean_object* v_i_2376_, lean_object* v_v_2377_, lean_object* v_a_2378_){
_start:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2380_ = lean_st_ref_take(v_a_2378_);
v___x_2381_ = lean_array_set(v___x_2380_, v_i_2376_, v_v_2377_);
v___x_2382_ = lean_st_ref_set(v_a_2378_, v___x_2381_);
v___x_2383_ = lean_box(0);
v___x_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2383_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___redArg___boxed(lean_object* v_i_2385_, lean_object* v_v_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_i_2385_, v_v_2386_, v_a_2387_);
lean_dec(v_a_2387_);
lean_dec(v_i_2385_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie(lean_object* v_00_u03b1_2390_, lean_object* v_i_2391_, lean_object* v_v_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_i_2391_, v_v_2392_, v_a_2393_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_setTrie___boxed(lean_object* v_00_u03b1_2400_, lean_object* v_i_2401_, lean_object* v_v_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_){
_start:
{
lean_object* v_res_2409_; 
v_res_2409_ = l_Lean_Meta_LazyDiscrTree_setTrie(v_00_u03b1_2400_, v_i_2401_, v_v_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
lean_dec(v_a_2407_);
lean_dec_ref(v_a_2406_);
lean_dec(v_a_2405_);
lean_dec_ref(v_a_2404_);
lean_dec(v_a_2403_);
lean_dec(v_i_2401_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0(lean_object* v_e_2410_, lean_object* v_a_2411_){
_start:
{
lean_object* v_sz_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; 
v_sz_2412_ = lean_array_get_size(v_a_2411_);
v___x_2413_ = lean_unsigned_to_nat(0u);
v___x_2414_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v___x_2415_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2);
v___x_2416_ = lean_unsigned_to_nat(1u);
v___x_2417_ = lean_mk_empty_array_with_capacity(v___x_2416_);
v___x_2418_ = lean_array_push(v___x_2417_, v_e_2410_);
v___x_2419_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2414_);
lean_ctor_set(v___x_2419_, 1, v___x_2413_);
lean_ctor_set(v___x_2419_, 2, v___x_2415_);
lean_ctor_set(v___x_2419_, 3, v___x_2418_);
v___x_2420_ = lean_array_push(v_a_2411_, v___x_2419_);
v___x_2421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2421_, 0, v_sz_2412_);
lean_ctor_set(v___x_2421_, 1, v___x_2420_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___redArg(lean_object* v_inst_2422_, lean_object* v_e_2423_){
_start:
{
lean_object* v_modifyGet_2424_; lean_object* v___f_2425_; lean_object* v___x_2426_; 
v_modifyGet_2424_ = lean_ctor_get(v_inst_2422_, 2);
lean_inc(v_modifyGet_2424_);
lean_dec_ref(v_inst_2422_);
v___f_2425_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_newTrie___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2425_, 0, v_e_2423_);
v___x_2426_ = lean_apply_2(v_modifyGet_2424_, lean_box(0), v___f_2425_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie(lean_object* v_m_2427_, lean_object* v_00_u03b1_2428_, lean_object* v_inst_2429_, lean_object* v_inst_2430_, lean_object* v_e_2431_){
_start:
{
lean_object* v___x_2432_; 
v___x_2432_ = l_Lean_Meta_LazyDiscrTree_newTrie___redArg(v_inst_2430_, v_e_2431_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___boxed(lean_object* v_m_2433_, lean_object* v_00_u03b1_2434_, lean_object* v_inst_2435_, lean_object* v_inst_2436_, lean_object* v_e_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l_Lean_Meta_LazyDiscrTree_newTrie(v_m_2433_, v_00_u03b1_2434_, v_inst_2435_, v_inst_2436_, v_e_2437_);
lean_dec_ref(v_inst_2435_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(lean_object* v_i_2439_, lean_object* v_e_2440_, lean_object* v_a_2441_){
_start:
{
lean_object* v___x_2443_; lean_object* v_fst_2445_; lean_object* v_snd_2446_; lean_object* v___x_2449_; lean_object* v___x_2450_; uint8_t v___x_2451_; 
v___x_2443_ = lean_st_ref_take(v_a_2441_);
v___x_2449_ = lean_box(0);
v___x_2450_ = lean_array_get_size(v___x_2443_);
v___x_2451_ = lean_nat_dec_lt(v_i_2439_, v___x_2450_);
if (v___x_2451_ == 0)
{
lean_dec_ref(v_e_2440_);
v_fst_2445_ = v___x_2449_;
v_snd_2446_ = v___x_2443_;
goto v___jp_2444_;
}
else
{
lean_object* v_v_2452_; lean_object* v_xs_x27_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v_v_2452_ = lean_array_fget(v___x_2443_, v_i_2439_);
v_xs_x27_2453_ = lean_array_fset(v___x_2443_, v_i_2439_, v___x_2449_);
v___x_2454_ = l_Lean_Meta_LazyDiscrTree_Trie_pushPending___redArg(v_v_2452_, v_e_2440_);
v___x_2455_ = lean_array_fset(v_xs_x27_2453_, v_i_2439_, v___x_2454_);
v_fst_2445_ = v___x_2449_;
v_snd_2446_ = v___x_2455_;
goto v___jp_2444_;
}
v___jp_2444_:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2447_ = lean_st_ref_set(v_a_2441_, v_snd_2446_);
v___x_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2448_, 0, v_fst_2445_);
return v___x_2448_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg___boxed(lean_object* v_i_2456_, lean_object* v_e_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_i_2456_, v_e_2457_, v_a_2458_);
lean_dec(v_a_2458_);
lean_dec(v_i_2456_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(lean_object* v_00_u03b1_2461_, lean_object* v_i_2462_, lean_object* v_e_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_i_2462_, v_e_2463_, v_a_2464_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___boxed(lean_object* v_00_u03b1_2471_, lean_object* v_i_2472_, lean_object* v_e_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_){
_start:
{
lean_object* v_res_2480_; 
v_res_2480_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie(v_00_u03b1_2471_, v_i_2472_, v_e_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_, v_a_2478_);
lean_dec(v_a_2478_);
lean_dec_ref(v_a_2477_);
lean_dec(v_a_2476_);
lean_dec_ref(v_a_2475_);
lean_dec(v_a_2474_);
lean_dec(v_i_2472_);
return v_res_2480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(lean_object* v_x_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
lean_object* v___x_2488_; 
lean_inc(v___y_2482_);
v___x_2488_ = lean_apply_6(v_x_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, lean_box(0));
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed(lean_object* v_x_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
lean_object* v_res_2496_; 
v_res_2496_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0(v_x_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_);
lean_dec(v___y_2490_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(lean_object* v_lctx_2497_, lean_object* v_localInsts_2498_, lean_object* v_x_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_){
_start:
{
lean_object* v___f_2506_; lean_object* v___x_2507_; 
lean_inc(v___y_2500_);
v___f_2506_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2506_, 0, v_x_2499_);
lean_closure_set(v___f_2506_, 1, v___y_2500_);
v___x_2507_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_2497_, v_localInsts_2498_, v___f_2506_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_);
if (lean_obj_tag(v___x_2507_) == 0)
{
return v___x_2507_;
}
else
{
lean_object* v_a_2508_; lean_object* v___x_2510_; uint8_t v_isShared_2511_; uint8_t v_isSharedCheck_2515_; 
v_a_2508_ = lean_ctor_get(v___x_2507_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2507_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2510_ = v___x_2507_;
v_isShared_2511_ = v_isSharedCheck_2515_;
goto v_resetjp_2509_;
}
else
{
lean_inc(v_a_2508_);
lean_dec(v___x_2507_);
v___x_2510_ = lean_box(0);
v_isShared_2511_ = v_isSharedCheck_2515_;
goto v_resetjp_2509_;
}
v_resetjp_2509_:
{
lean_object* v___x_2513_; 
if (v_isShared_2511_ == 0)
{
v___x_2513_ = v___x_2510_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_a_2508_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg___boxed(lean_object* v_lctx_2516_, lean_object* v_localInsts_2517_, lean_object* v_x_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_lctx_2516_, v_localInsts_2517_, v_x_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_);
lean_dec(v___y_2523_);
lean_dec_ref(v___y_2522_);
lean_dec(v___y_2521_);
lean_dec_ref(v___y_2520_);
lean_dec(v___y_2519_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(lean_object* v_00_u03b1_2526_, lean_object* v_00_u03b1_2527_, lean_object* v_lctx_2528_, lean_object* v_localInsts_2529_, lean_object* v_x_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_){
_start:
{
lean_object* v___x_2537_; 
v___x_2537_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_lctx_2528_, v_localInsts_2529_, v_x_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_);
return v___x_2537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___boxed(lean_object* v_00_u03b1_2538_, lean_object* v_00_u03b1_2539_, lean_object* v_lctx_2540_, lean_object* v_localInsts_2541_, lean_object* v_x_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0(v_00_u03b1_2538_, v_00_u03b1_2539_, v_lctx_2540_, v_localInsts_2541_, v_x_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2543_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(lean_object* v_e_2550_, lean_object* v___y_2551_){
_start:
{
lean_object* v___x_2553_; lean_object* v_sz_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2553_ = lean_st_ref_take(v___y_2551_);
v_sz_2554_ = lean_array_get_size(v___x_2553_);
v___x_2555_ = lean_unsigned_to_nat(0u);
v___x_2556_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v___x_2557_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2);
v___x_2558_ = lean_unsigned_to_nat(1u);
v___x_2559_ = lean_mk_empty_array_with_capacity(v___x_2558_);
v___x_2560_ = lean_array_push(v___x_2559_, v_e_2550_);
v___x_2561_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2556_);
lean_ctor_set(v___x_2561_, 1, v___x_2555_);
lean_ctor_set(v___x_2561_, 2, v___x_2557_);
lean_ctor_set(v___x_2561_, 3, v___x_2560_);
v___x_2562_ = lean_array_push(v___x_2553_, v___x_2561_);
v___x_2563_ = lean_st_ref_set(v___y_2551_, v___x_2562_);
v___x_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2564_, 0, v_sz_2554_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg___boxed(lean_object* v_e_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v_e_2565_, v___y_2566_);
lean_dec(v___y_2566_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(lean_object* v_00_u03b1_2569_, lean_object* v_e_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v___x_2577_; 
v___x_2577_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v_e_2570_, v___y_2571_);
return v___x_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___boxed(lean_object* v_00_u03b1_2578_, lean_object* v_e_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2(v_00_u03b1_2578_, v_e_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
lean_dec(v___y_2584_);
lean_dec_ref(v___y_2583_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
lean_dec(v___y_2580_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(uint8_t v___x_2587_, lean_object* v_todo_2588_, lean_object* v_e_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = l_Lean_Meta_LazyDiscrTree_pushArgs(v___x_2587_, v_todo_2588_, v_e_2589_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_);
return v___x_2596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed(lean_object* v___x_2597_, lean_object* v_todo_2598_, lean_object* v_e_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_){
_start:
{
uint8_t v___x_4063__boxed_2606_; lean_object* v_res_2607_; 
v___x_4063__boxed_2606_ = lean_unbox(v___x_2597_);
v_res_2607_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0(v___x_4063__boxed_2606_, v_todo_2598_, v_e_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
lean_dec_ref(v___y_2601_);
lean_dec(v___y_2600_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(lean_object* v_a_2608_, lean_object* v_b_2609_, lean_object* v_x_2610_){
_start:
{
if (lean_obj_tag(v_x_2610_) == 0)
{
lean_dec(v_b_2609_);
lean_dec(v_a_2608_);
return v_x_2610_;
}
else
{
lean_object* v_key_2611_; lean_object* v_value_2612_; lean_object* v_tail_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2625_; 
v_key_2611_ = lean_ctor_get(v_x_2610_, 0);
v_value_2612_ = lean_ctor_get(v_x_2610_, 1);
v_tail_2613_ = lean_ctor_get(v_x_2610_, 2);
v_isSharedCheck_2625_ = !lean_is_exclusive(v_x_2610_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2615_ = v_x_2610_;
v_isShared_2616_ = v_isSharedCheck_2625_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_tail_2613_);
lean_inc(v_value_2612_);
lean_inc(v_key_2611_);
lean_dec(v_x_2610_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2625_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
uint8_t v___x_2617_; 
v___x_2617_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2611_, v_a_2608_);
if (v___x_2617_ == 0)
{
lean_object* v___x_2618_; lean_object* v___x_2620_; 
v___x_2618_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_2608_, v_b_2609_, v_tail_2613_);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 2, v___x_2618_);
v___x_2620_ = v___x_2615_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_key_2611_);
lean_ctor_set(v_reuseFailAlloc_2621_, 1, v_value_2612_);
lean_ctor_set(v_reuseFailAlloc_2621_, 2, v___x_2618_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
else
{
lean_object* v___x_2623_; 
lean_dec(v_value_2612_);
lean_dec(v_key_2611_);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 1, v_b_2609_);
lean_ctor_set(v___x_2615_, 0, v_a_2608_);
v___x_2623_ = v___x_2615_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_a_2608_);
lean_ctor_set(v_reuseFailAlloc_2624_, 1, v_b_2609_);
lean_ctor_set(v_reuseFailAlloc_2624_, 2, v_tail_2613_);
v___x_2623_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
return v___x_2623_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(lean_object* v_a_2626_, lean_object* v_x_2627_){
_start:
{
if (lean_obj_tag(v_x_2627_) == 0)
{
uint8_t v___x_2628_; 
v___x_2628_ = 0;
return v___x_2628_;
}
else
{
lean_object* v_key_2629_; lean_object* v_tail_2630_; uint8_t v___x_2631_; 
v_key_2629_ = lean_ctor_get(v_x_2627_, 0);
v_tail_2630_ = lean_ctor_get(v_x_2627_, 2);
v___x_2631_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2629_, v_a_2626_);
if (v___x_2631_ == 0)
{
v_x_2627_ = v_tail_2630_;
goto _start;
}
else
{
return v___x_2631_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg___boxed(lean_object* v_a_2633_, lean_object* v_x_2634_){
_start:
{
uint8_t v_res_2635_; lean_object* v_r_2636_; 
v_res_2635_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_2633_, v_x_2634_);
lean_dec(v_x_2634_);
lean_dec(v_a_2633_);
v_r_2636_ = lean_box(v_res_2635_);
return v_r_2636_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(lean_object* v_x_2637_, lean_object* v_x_2638_){
_start:
{
if (lean_obj_tag(v_x_2638_) == 0)
{
return v_x_2637_;
}
else
{
lean_object* v_key_2639_; lean_object* v_value_2640_; lean_object* v_tail_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2664_; 
v_key_2639_ = lean_ctor_get(v_x_2638_, 0);
v_value_2640_ = lean_ctor_get(v_x_2638_, 1);
v_tail_2641_ = lean_ctor_get(v_x_2638_, 2);
v_isSharedCheck_2664_ = !lean_is_exclusive(v_x_2638_);
if (v_isSharedCheck_2664_ == 0)
{
v___x_2643_ = v_x_2638_;
v_isShared_2644_ = v_isSharedCheck_2664_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_tail_2641_);
lean_inc(v_value_2640_);
lean_inc(v_key_2639_);
lean_dec(v_x_2638_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2664_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2645_; uint64_t v___x_2646_; uint64_t v___x_2647_; uint64_t v___x_2648_; uint64_t v_fold_2649_; uint64_t v___x_2650_; uint64_t v___x_2651_; uint64_t v___x_2652_; size_t v___x_2653_; size_t v___x_2654_; size_t v___x_2655_; size_t v___x_2656_; size_t v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2660_; 
v___x_2645_ = lean_array_get_size(v_x_2637_);
v___x_2646_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_key_2639_);
v___x_2647_ = 32ULL;
v___x_2648_ = lean_uint64_shift_right(v___x_2646_, v___x_2647_);
v_fold_2649_ = lean_uint64_xor(v___x_2646_, v___x_2648_);
v___x_2650_ = 16ULL;
v___x_2651_ = lean_uint64_shift_right(v_fold_2649_, v___x_2650_);
v___x_2652_ = lean_uint64_xor(v_fold_2649_, v___x_2651_);
v___x_2653_ = lean_uint64_to_usize(v___x_2652_);
v___x_2654_ = lean_usize_of_nat(v___x_2645_);
v___x_2655_ = ((size_t)1ULL);
v___x_2656_ = lean_usize_sub(v___x_2654_, v___x_2655_);
v___x_2657_ = lean_usize_land(v___x_2653_, v___x_2656_);
v___x_2658_ = lean_array_uget_borrowed(v_x_2637_, v___x_2657_);
lean_inc(v___x_2658_);
if (v_isShared_2644_ == 0)
{
lean_ctor_set(v___x_2643_, 2, v___x_2658_);
v___x_2660_ = v___x_2643_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2663_; 
v_reuseFailAlloc_2663_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2663_, 0, v_key_2639_);
lean_ctor_set(v_reuseFailAlloc_2663_, 1, v_value_2640_);
lean_ctor_set(v_reuseFailAlloc_2663_, 2, v___x_2658_);
v___x_2660_ = v_reuseFailAlloc_2663_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
lean_object* v___x_2661_; 
v___x_2661_ = lean_array_uset(v_x_2637_, v___x_2657_, v___x_2660_);
v_x_2637_ = v___x_2661_;
v_x_2638_ = v_tail_2641_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(lean_object* v_i_2665_, lean_object* v_source_2666_, lean_object* v_target_2667_){
_start:
{
lean_object* v___x_2668_; uint8_t v___x_2669_; 
v___x_2668_ = lean_array_get_size(v_source_2666_);
v___x_2669_ = lean_nat_dec_lt(v_i_2665_, v___x_2668_);
if (v___x_2669_ == 0)
{
lean_dec_ref(v_source_2666_);
lean_dec(v_i_2665_);
return v_target_2667_;
}
else
{
lean_object* v_es_2670_; lean_object* v___x_2671_; lean_object* v_source_2672_; lean_object* v_target_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v_es_2670_ = lean_array_fget(v_source_2666_, v_i_2665_);
v___x_2671_ = lean_box(0);
v_source_2672_ = lean_array_fset(v_source_2666_, v_i_2665_, v___x_2671_);
v_target_2673_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(v_target_2667_, v_es_2670_);
v___x_2674_ = lean_unsigned_to_nat(1u);
v___x_2675_ = lean_nat_add(v_i_2665_, v___x_2674_);
lean_dec(v_i_2665_);
v_i_2665_ = v___x_2675_;
v_source_2666_ = v_source_2672_;
v_target_2667_ = v_target_2673_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(lean_object* v_data_2677_){
_start:
{
lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v_nbuckets_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; 
v___x_2678_ = lean_array_get_size(v_data_2677_);
v___x_2679_ = lean_unsigned_to_nat(2u);
v_nbuckets_2680_ = lean_nat_mul(v___x_2678_, v___x_2679_);
v___x_2681_ = lean_unsigned_to_nat(0u);
v___x_2682_ = lean_box(0);
v___x_2683_ = lean_mk_array(v_nbuckets_2680_, v___x_2682_);
v___x_2684_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(v___x_2681_, v_data_2677_, v___x_2683_);
return v___x_2684_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(lean_object* v_m_2685_, lean_object* v_a_2686_, lean_object* v_b_2687_){
_start:
{
lean_object* v_size_2688_; lean_object* v_buckets_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2732_; 
v_size_2688_ = lean_ctor_get(v_m_2685_, 0);
v_buckets_2689_ = lean_ctor_get(v_m_2685_, 1);
v_isSharedCheck_2732_ = !lean_is_exclusive(v_m_2685_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2691_ = v_m_2685_;
v_isShared_2692_ = v_isSharedCheck_2732_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_buckets_2689_);
lean_inc(v_size_2688_);
lean_dec(v_m_2685_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2732_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2693_; uint64_t v___x_2694_; uint64_t v___x_2695_; uint64_t v___x_2696_; uint64_t v_fold_2697_; uint64_t v___x_2698_; uint64_t v___x_2699_; uint64_t v___x_2700_; size_t v___x_2701_; size_t v___x_2702_; size_t v___x_2703_; size_t v___x_2704_; size_t v___x_2705_; lean_object* v_bkt_2706_; uint8_t v___x_2707_; 
v___x_2693_ = lean_array_get_size(v_buckets_2689_);
v___x_2694_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_2686_);
v___x_2695_ = 32ULL;
v___x_2696_ = lean_uint64_shift_right(v___x_2694_, v___x_2695_);
v_fold_2697_ = lean_uint64_xor(v___x_2694_, v___x_2696_);
v___x_2698_ = 16ULL;
v___x_2699_ = lean_uint64_shift_right(v_fold_2697_, v___x_2698_);
v___x_2700_ = lean_uint64_xor(v_fold_2697_, v___x_2699_);
v___x_2701_ = lean_uint64_to_usize(v___x_2700_);
v___x_2702_ = lean_usize_of_nat(v___x_2693_);
v___x_2703_ = ((size_t)1ULL);
v___x_2704_ = lean_usize_sub(v___x_2702_, v___x_2703_);
v___x_2705_ = lean_usize_land(v___x_2701_, v___x_2704_);
v_bkt_2706_ = lean_array_uget_borrowed(v_buckets_2689_, v___x_2705_);
v___x_2707_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_2686_, v_bkt_2706_);
if (v___x_2707_ == 0)
{
lean_object* v___x_2708_; lean_object* v_size_x27_2709_; lean_object* v___x_2710_; lean_object* v_buckets_x27_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; uint8_t v___x_2717_; 
v___x_2708_ = lean_unsigned_to_nat(1u);
v_size_x27_2709_ = lean_nat_add(v_size_2688_, v___x_2708_);
lean_dec(v_size_2688_);
lean_inc(v_bkt_2706_);
v___x_2710_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2710_, 0, v_a_2686_);
lean_ctor_set(v___x_2710_, 1, v_b_2687_);
lean_ctor_set(v___x_2710_, 2, v_bkt_2706_);
v_buckets_x27_2711_ = lean_array_uset(v_buckets_2689_, v___x_2705_, v___x_2710_);
v___x_2712_ = lean_unsigned_to_nat(4u);
v___x_2713_ = lean_nat_mul(v_size_x27_2709_, v___x_2712_);
v___x_2714_ = lean_unsigned_to_nat(3u);
v___x_2715_ = lean_nat_div(v___x_2713_, v___x_2714_);
lean_dec(v___x_2713_);
v___x_2716_ = lean_array_get_size(v_buckets_x27_2711_);
v___x_2717_ = lean_nat_dec_le(v___x_2715_, v___x_2716_);
lean_dec(v___x_2715_);
if (v___x_2717_ == 0)
{
lean_object* v_val_2718_; lean_object* v___x_2720_; 
v_val_2718_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(v_buckets_x27_2711_);
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 1, v_val_2718_);
lean_ctor_set(v___x_2691_, 0, v_size_x27_2709_);
v___x_2720_ = v___x_2691_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2721_; 
v_reuseFailAlloc_2721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2721_, 0, v_size_x27_2709_);
lean_ctor_set(v_reuseFailAlloc_2721_, 1, v_val_2718_);
v___x_2720_ = v_reuseFailAlloc_2721_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
return v___x_2720_;
}
}
else
{
lean_object* v___x_2723_; 
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 1, v_buckets_x27_2711_);
lean_ctor_set(v___x_2691_, 0, v_size_x27_2709_);
v___x_2723_ = v___x_2691_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_size_x27_2709_);
lean_ctor_set(v_reuseFailAlloc_2724_, 1, v_buckets_x27_2711_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
else
{
lean_object* v___x_2725_; lean_object* v_buckets_x27_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2730_; 
lean_inc(v_bkt_2706_);
v___x_2725_ = lean_box(0);
v_buckets_x27_2726_ = lean_array_uset(v_buckets_2689_, v___x_2705_, v___x_2725_);
v___x_2727_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_2686_, v_b_2687_, v_bkt_2706_);
v___x_2728_ = lean_array_uset(v_buckets_x27_2726_, v___x_2705_, v___x_2727_);
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 1, v___x_2728_);
v___x_2730_ = v___x_2691_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_size_2688_);
lean_ctor_set(v_reuseFailAlloc_2731_, 1, v___x_2728_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(lean_object* v_a_2733_, lean_object* v_x_2734_){
_start:
{
if (lean_obj_tag(v_x_2734_) == 0)
{
lean_object* v___x_2735_; 
v___x_2735_ = lean_box(0);
return v___x_2735_;
}
else
{
lean_object* v_key_2736_; lean_object* v_value_2737_; lean_object* v_tail_2738_; uint8_t v___x_2739_; 
v_key_2736_ = lean_ctor_get(v_x_2734_, 0);
v_value_2737_ = lean_ctor_get(v_x_2734_, 1);
v_tail_2738_ = lean_ctor_get(v_x_2734_, 2);
v___x_2739_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_2736_, v_a_2733_);
if (v___x_2739_ == 0)
{
v_x_2734_ = v_tail_2738_;
goto _start;
}
else
{
lean_object* v___x_2741_; 
lean_inc(v_value_2737_);
v___x_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2741_, 0, v_value_2737_);
return v___x_2741_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg___boxed(lean_object* v_a_2742_, lean_object* v_x_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2742_, v_x_2743_);
lean_dec(v_x_2743_);
lean_dec(v_a_2742_);
return v_res_2744_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(lean_object* v_m_2745_, lean_object* v_a_2746_){
_start:
{
lean_object* v_buckets_2747_; lean_object* v___x_2748_; uint64_t v___x_2749_; uint64_t v___x_2750_; uint64_t v___x_2751_; uint64_t v_fold_2752_; uint64_t v___x_2753_; uint64_t v___x_2754_; uint64_t v___x_2755_; size_t v___x_2756_; size_t v___x_2757_; size_t v___x_2758_; size_t v___x_2759_; size_t v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; 
v_buckets_2747_ = lean_ctor_get(v_m_2745_, 1);
v___x_2748_ = lean_array_get_size(v_buckets_2747_);
v___x_2749_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_2746_);
v___x_2750_ = 32ULL;
v___x_2751_ = lean_uint64_shift_right(v___x_2749_, v___x_2750_);
v_fold_2752_ = lean_uint64_xor(v___x_2749_, v___x_2751_);
v___x_2753_ = 16ULL;
v___x_2754_ = lean_uint64_shift_right(v_fold_2752_, v___x_2753_);
v___x_2755_ = lean_uint64_xor(v_fold_2752_, v___x_2754_);
v___x_2756_ = lean_uint64_to_usize(v___x_2755_);
v___x_2757_ = lean_usize_of_nat(v___x_2748_);
v___x_2758_ = ((size_t)1ULL);
v___x_2759_ = lean_usize_sub(v___x_2757_, v___x_2758_);
v___x_2760_ = lean_usize_land(v___x_2756_, v___x_2759_);
v___x_2761_ = lean_array_uget_borrowed(v_buckets_2747_, v___x_2760_);
v___x_2762_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2746_, v___x_2761_);
return v___x_2762_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg___boxed(lean_object* v_m_2763_, lean_object* v_a_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_m_2763_, v_a_2764_);
lean_dec(v_a_2764_);
lean_dec_ref(v_m_2763_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(lean_object* v_p_2766_, lean_object* v_entry_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_){
_start:
{
lean_object* v_snd_2774_; lean_object* v_snd_2775_; lean_object* v_fst_2776_; lean_object* v_fst_2777_; lean_object* v_snd_2778_; lean_object* v_fst_2779_; lean_object* v_fst_2780_; lean_object* v_snd_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; uint8_t v___x_2784_; 
v_snd_2774_ = lean_ctor_get(v_p_2766_, 1);
v_snd_2775_ = lean_ctor_get(v_entry_2767_, 1);
lean_inc(v_snd_2775_);
v_fst_2776_ = lean_ctor_get(v_p_2766_, 0);
v_fst_2777_ = lean_ctor_get(v_snd_2774_, 0);
v_snd_2778_ = lean_ctor_get(v_snd_2774_, 1);
v_fst_2779_ = lean_ctor_get(v_entry_2767_, 0);
lean_inc(v_fst_2779_);
lean_dec_ref(v_entry_2767_);
v_fst_2780_ = lean_ctor_get(v_snd_2775_, 0);
lean_inc(v_fst_2780_);
v_snd_2781_ = lean_ctor_get(v_snd_2775_, 1);
v___x_2782_ = lean_array_get_size(v_fst_2779_);
v___x_2783_ = lean_unsigned_to_nat(0u);
v___x_2784_ = lean_nat_dec_eq(v___x_2782_, v___x_2783_);
if (v___x_2784_ == 0)
{
lean_object* v_fst_2785_; lean_object* v_snd_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2891_; 
v_fst_2785_ = lean_ctor_get(v_fst_2780_, 0);
v_snd_2786_ = lean_ctor_get(v_fst_2780_, 1);
v_isSharedCheck_2891_ = !lean_is_exclusive(v_fst_2780_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2788_ = v_fst_2780_;
v_isShared_2789_ = v_isSharedCheck_2891_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_snd_2786_);
lean_inc(v_fst_2785_);
lean_dec(v_fst_2780_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2891_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v_e_2793_; lean_object* v_todo_2794_; lean_object* v___x_2795_; lean_object* v___f_2796_; lean_object* v___x_2797_; 
v___x_2790_ = l_Lean_instInhabitedExpr;
v___x_2791_ = lean_unsigned_to_nat(1u);
v___x_2792_ = lean_nat_sub(v___x_2782_, v___x_2791_);
v_e_2793_ = lean_array_get(v___x_2790_, v_fst_2779_, v___x_2792_);
lean_dec(v___x_2792_);
v_todo_2794_ = lean_array_pop(v_fst_2779_);
v___x_2795_ = lean_box(v___x_2784_);
v___f_2796_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2796_, 0, v___x_2795_);
lean_closure_set(v___f_2796_, 1, v_todo_2794_);
lean_closure_set(v___f_2796_, 2, v_e_2793_);
v___x_2797_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__0___redArg(v_fst_2785_, v_snd_2786_, v___f_2796_, v_a_2768_, v_a_2769_, v_a_2770_, v_a_2771_, v_a_2772_);
if (lean_obj_tag(v___x_2797_) == 0)
{
lean_object* v_a_2798_; lean_object* v_fst_2799_; lean_object* v_snd_2800_; lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2882_; 
v_a_2798_ = lean_ctor_get(v___x_2797_, 0);
lean_inc(v_a_2798_);
lean_dec_ref(v___x_2797_);
v_fst_2799_ = lean_ctor_get(v_a_2798_, 0);
v_snd_2800_ = lean_ctor_get(v_a_2798_, 1);
v_isSharedCheck_2882_ = !lean_is_exclusive(v_a_2798_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2802_ = v_a_2798_;
v_isShared_2803_ = v_isSharedCheck_2882_;
goto v_resetjp_2801_;
}
else
{
lean_inc(v_snd_2800_);
lean_inc(v_fst_2799_);
lean_dec(v_a_2798_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2882_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2804_; uint8_t v___x_2805_; 
v___x_2804_ = lean_box(3);
v___x_2805_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_fst_2799_, v___x_2804_);
if (v___x_2805_ == 0)
{
lean_object* v___x_2806_; 
v___x_2806_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_snd_2778_, v_fst_2799_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v___x_2808_; 
lean_inc(v_snd_2778_);
lean_inc(v_fst_2777_);
lean_inc(v_fst_2776_);
lean_dec_ref(v_p_2766_);
lean_inc(v_snd_2775_);
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 1, v_snd_2775_);
lean_ctor_set(v___x_2802_, 0, v_snd_2800_);
v___x_2808_ = v___x_2802_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_snd_2800_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v_snd_2775_);
v___x_2808_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2828_; 
v_isSharedCheck_2828_ = !lean_is_exclusive(v_snd_2775_);
if (v_isSharedCheck_2828_ == 0)
{
lean_object* v_unused_2829_; lean_object* v_unused_2830_; 
v_unused_2829_ = lean_ctor_get(v_snd_2775_, 1);
lean_dec(v_unused_2829_);
v_unused_2830_ = lean_ctor_get(v_snd_2775_, 0);
lean_dec(v_unused_2830_);
v___x_2810_ = v_snd_2775_;
v_isShared_2811_ = v_isSharedCheck_2828_;
goto v_resetjp_2809_;
}
else
{
lean_dec(v_snd_2775_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2828_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v___x_2812_; lean_object* v_a_2813_; lean_object* v___x_2815_; uint8_t v_isShared_2816_; uint8_t v_isSharedCheck_2827_; 
v___x_2812_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v___x_2808_, v_a_2768_);
v_a_2813_ = lean_ctor_get(v___x_2812_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2812_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2815_ = v___x_2812_;
v_isShared_2816_ = v_isSharedCheck_2827_;
goto v_resetjp_2814_;
}
else
{
lean_inc(v_a_2813_);
lean_dec(v___x_2812_);
v___x_2815_ = lean_box(0);
v_isShared_2816_ = v_isSharedCheck_2827_;
goto v_resetjp_2814_;
}
v_resetjp_2814_:
{
lean_object* v___x_2817_; lean_object* v___x_2819_; 
v___x_2817_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_snd_2778_, v_fst_2799_, v_a_2813_);
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 1, v___x_2817_);
lean_ctor_set(v___x_2788_, 0, v_fst_2777_);
v___x_2819_ = v___x_2788_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_fst_2777_);
lean_ctor_set(v_reuseFailAlloc_2826_, 1, v___x_2817_);
v___x_2819_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
lean_object* v___x_2821_; 
if (v_isShared_2811_ == 0)
{
lean_ctor_set(v___x_2810_, 1, v___x_2819_);
lean_ctor_set(v___x_2810_, 0, v_fst_2776_);
v___x_2821_ = v___x_2810_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_fst_2776_);
lean_ctor_set(v_reuseFailAlloc_2825_, 1, v___x_2819_);
v___x_2821_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
lean_object* v___x_2823_; 
if (v_isShared_2816_ == 0)
{
lean_ctor_set(v___x_2815_, 0, v___x_2821_);
v___x_2823_ = v___x_2815_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v___x_2821_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
}
}
}
}
else
{
lean_object* v_val_2832_; lean_object* v___x_2834_; 
lean_dec(v_fst_2799_);
lean_del_object(v___x_2788_);
v_val_2832_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_val_2832_);
lean_dec_ref(v___x_2806_);
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 1, v_snd_2775_);
lean_ctor_set(v___x_2802_, 0, v_snd_2800_);
v___x_2834_ = v___x_2802_;
goto v_reusejp_2833_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_snd_2800_);
lean_ctor_set(v_reuseFailAlloc_2844_, 1, v_snd_2775_);
v___x_2834_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2833_;
}
v_reusejp_2833_:
{
lean_object* v___x_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
v___x_2835_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_val_2832_, v___x_2834_, v_a_2768_);
lean_dec(v_val_2832_);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2842_ == 0)
{
lean_object* v_unused_2843_; 
v_unused_2843_ = lean_ctor_get(v___x_2835_, 0);
lean_dec(v_unused_2843_);
v___x_2837_ = v___x_2835_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_dec(v___x_2835_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 0, v_p_2766_);
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_p_2766_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
}
else
{
uint8_t v___x_2845_; 
lean_dec(v_fst_2799_);
v___x_2845_ = lean_nat_dec_eq(v_fst_2777_, v___x_2783_);
if (v___x_2845_ == 0)
{
lean_object* v___x_2847_; 
lean_del_object(v___x_2788_);
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 1, v_snd_2775_);
lean_ctor_set(v___x_2802_, 0, v_snd_2800_);
v___x_2847_ = v___x_2802_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_snd_2800_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v_snd_2775_);
v___x_2847_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
lean_object* v___x_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
v___x_2848_ = l_Lean_Meta_LazyDiscrTree_addLazyEntryToTrie___redArg(v_fst_2777_, v___x_2847_, v_a_2768_);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2855_ == 0)
{
lean_object* v_unused_2856_; 
v_unused_2856_ = lean_ctor_get(v___x_2848_, 0);
lean_dec(v_unused_2856_);
v___x_2850_ = v___x_2848_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_dec(v___x_2848_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
lean_ctor_set(v___x_2850_, 0, v_p_2766_);
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_p_2766_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
}
}
else
{
lean_object* v___x_2859_; 
lean_inc(v_snd_2778_);
lean_inc(v_fst_2776_);
lean_dec_ref(v_p_2766_);
lean_inc(v_snd_2775_);
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 1, v_snd_2775_);
lean_ctor_set(v___x_2802_, 0, v_snd_2800_);
v___x_2859_ = v___x_2802_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_snd_2800_);
lean_ctor_set(v_reuseFailAlloc_2881_, 1, v_snd_2775_);
v___x_2859_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2878_; 
v_isSharedCheck_2878_ = !lean_is_exclusive(v_snd_2775_);
if (v_isSharedCheck_2878_ == 0)
{
lean_object* v_unused_2879_; lean_object* v_unused_2880_; 
v_unused_2879_ = lean_ctor_get(v_snd_2775_, 1);
lean_dec(v_unused_2879_);
v_unused_2880_ = lean_ctor_get(v_snd_2775_, 0);
lean_dec(v_unused_2880_);
v___x_2861_ = v_snd_2775_;
v_isShared_2862_ = v_isSharedCheck_2878_;
goto v_resetjp_2860_;
}
else
{
lean_dec(v_snd_2775_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2878_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2863_; lean_object* v_a_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2877_; 
v___x_2863_ = l_Lean_Meta_LazyDiscrTree_newTrie___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__2___redArg(v___x_2859_, v_a_2768_);
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2877_ == 0)
{
v___x_2866_ = v___x_2863_;
v_isShared_2867_ = v_isSharedCheck_2877_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_a_2864_);
lean_dec(v___x_2863_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2877_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2869_; 
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 1, v_snd_2778_);
lean_ctor_set(v___x_2788_, 0, v_a_2864_);
v___x_2869_ = v___x_2788_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_a_2864_);
lean_ctor_set(v_reuseFailAlloc_2876_, 1, v_snd_2778_);
v___x_2869_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
lean_object* v___x_2871_; 
if (v_isShared_2862_ == 0)
{
lean_ctor_set(v___x_2861_, 1, v___x_2869_);
lean_ctor_set(v___x_2861_, 0, v_fst_2776_);
v___x_2871_ = v___x_2861_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_fst_2776_);
lean_ctor_set(v_reuseFailAlloc_2875_, 1, v___x_2869_);
v___x_2871_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
lean_object* v___x_2873_; 
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 0, v___x_2871_);
v___x_2873_ = v___x_2866_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v___x_2871_);
v___x_2873_ = v_reuseFailAlloc_2874_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
return v___x_2873_;
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
lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2890_; 
lean_del_object(v___x_2788_);
lean_dec(v_snd_2775_);
lean_dec_ref(v_p_2766_);
v_a_2883_ = lean_ctor_get(v___x_2797_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2885_ = v___x_2797_;
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_dec(v___x_2797_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2888_; 
if (v_isShared_2886_ == 0)
{
v___x_2888_ = v___x_2885_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_a_2883_);
v___x_2888_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
return v___x_2888_;
}
}
}
}
}
else
{
lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2900_; 
lean_inc(v_snd_2781_);
lean_inc(v_fst_2776_);
lean_inc(v_snd_2774_);
lean_dec(v_fst_2780_);
lean_dec(v_fst_2779_);
lean_dec_ref(v_p_2766_);
v_isSharedCheck_2900_ = !lean_is_exclusive(v_snd_2775_);
if (v_isSharedCheck_2900_ == 0)
{
lean_object* v_unused_2901_; lean_object* v_unused_2902_; 
v_unused_2901_ = lean_ctor_get(v_snd_2775_, 1);
lean_dec(v_unused_2901_);
v_unused_2902_ = lean_ctor_get(v_snd_2775_, 0);
lean_dec(v_unused_2902_);
v___x_2893_ = v_snd_2775_;
v_isShared_2894_ = v_isSharedCheck_2900_;
goto v_resetjp_2892_;
}
else
{
lean_dec(v_snd_2775_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2900_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v_values_2895_; lean_object* v___x_2897_; 
v_values_2895_ = lean_array_push(v_fst_2776_, v_snd_2781_);
if (v_isShared_2894_ == 0)
{
lean_ctor_set(v___x_2893_, 1, v_snd_2774_);
lean_ctor_set(v___x_2893_, 0, v_values_2895_);
v___x_2897_ = v___x_2893_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_values_2895_);
lean_ctor_set(v_reuseFailAlloc_2899_, 1, v_snd_2774_);
v___x_2897_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
lean_object* v___x_2898_; 
v___x_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2897_);
return v___x_2898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg___boxed(lean_object* v_p_2903_, lean_object* v_entry_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_, lean_object* v_a_2910_){
_start:
{
lean_object* v_res_2911_; 
v_res_2911_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_p_2903_, v_entry_2904_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_, v_a_2909_);
lean_dec(v_a_2909_);
lean_dec_ref(v_a_2908_);
lean_dec(v_a_2907_);
lean_dec_ref(v_a_2906_);
lean_dec(v_a_2905_);
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry(lean_object* v_00_u03b1_2912_, lean_object* v_p_2913_, lean_object* v_entry_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_){
_start:
{
lean_object* v___x_2921_; 
v___x_2921_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_p_2913_, v_entry_2914_, v_a_2915_, v_a_2916_, v_a_2917_, v_a_2918_, v_a_2919_);
return v___x_2921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntry___boxed(lean_object* v_00_u03b1_2922_, lean_object* v_p_2923_, lean_object* v_entry_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_, lean_object* v_a_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry(v_00_u03b1_2922_, v_p_2923_, v_entry_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_, v_a_2929_);
lean_dec(v_a_2929_);
lean_dec_ref(v_a_2928_);
lean_dec(v_a_2927_);
lean_dec_ref(v_a_2926_);
lean_dec(v_a_2925_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(lean_object* v_00_u03b2_2932_, lean_object* v_m_2933_, lean_object* v_a_2934_){
_start:
{
lean_object* v___x_2935_; 
v___x_2935_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_m_2933_, v_a_2934_);
return v___x_2935_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___boxed(lean_object* v_00_u03b2_2936_, lean_object* v_m_2937_, lean_object* v_a_2938_){
_start:
{
lean_object* v_res_2939_; 
v_res_2939_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1(v_00_u03b2_2936_, v_m_2937_, v_a_2938_);
lean_dec(v_a_2938_);
lean_dec_ref(v_m_2937_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3(lean_object* v_00_u03b2_2940_, lean_object* v_m_2941_, lean_object* v_a_2942_, lean_object* v_b_2943_){
_start:
{
lean_object* v___x_2944_; 
v___x_2944_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_m_2941_, v_a_2942_, v_b_2943_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(lean_object* v_00_u03b2_2945_, lean_object* v_a_2946_, lean_object* v_x_2947_){
_start:
{
lean_object* v___x_2948_; 
v___x_2948_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___redArg(v_a_2946_, v_x_2947_);
return v___x_2948_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2949_, lean_object* v_a_2950_, lean_object* v_x_2951_){
_start:
{
lean_object* v_res_2952_; 
v_res_2952_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1_spec__1(v_00_u03b2_2949_, v_a_2950_, v_x_2951_);
lean_dec(v_x_2951_);
lean_dec(v_a_2950_);
return v_res_2952_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(lean_object* v_00_u03b2_2953_, lean_object* v_a_2954_, lean_object* v_x_2955_){
_start:
{
uint8_t v___x_2956_; 
v___x_2956_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___redArg(v_a_2954_, v_x_2955_);
return v___x_2956_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4___boxed(lean_object* v_00_u03b2_2957_, lean_object* v_a_2958_, lean_object* v_x_2959_){
_start:
{
uint8_t v_res_2960_; lean_object* v_r_2961_; 
v_res_2960_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__4(v_00_u03b2_2957_, v_a_2958_, v_x_2959_);
lean_dec(v_x_2959_);
lean_dec(v_a_2958_);
v_r_2961_ = lean_box(v_res_2960_);
return v_r_2961_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5(lean_object* v_00_u03b2_2962_, lean_object* v_data_2963_){
_start:
{
lean_object* v___x_2964_; 
v___x_2964_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5___redArg(v_data_2963_);
return v___x_2964_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6(lean_object* v_00_u03b2_2965_, lean_object* v_a_2966_, lean_object* v_b_2967_, lean_object* v_x_2968_){
_start:
{
lean_object* v___x_2969_; 
v___x_2969_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__6___redArg(v_a_2966_, v_b_2967_, v_x_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_2970_, lean_object* v_i_2971_, lean_object* v_source_2972_, lean_object* v_target_2973_){
_start:
{
lean_object* v___x_2974_; 
v___x_2974_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6___redArg(v_i_2971_, v_source_2972_, v_target_2973_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_2975_, lean_object* v_x_2976_, lean_object* v_x_2977_){
_start:
{
lean_object* v___x_2978_; 
v___x_2978_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3_spec__5_spec__6_spec__7___redArg(v_x_2976_, v_x_2977_);
return v___x_2978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(lean_object* v_as_2979_, size_t v_i_2980_, size_t v_stop_2981_, lean_object* v_b_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_){
_start:
{
uint8_t v___x_2989_; 
v___x_2989_ = lean_usize_dec_eq(v_i_2980_, v_stop_2981_);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; lean_object* v___x_2991_; 
v___x_2990_ = lean_array_uget_borrowed(v_as_2979_, v_i_2980_);
lean_inc(v___x_2990_);
v___x_2991_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntry___redArg(v_b_2982_, v___x_2990_, v___y_2983_, v___y_2984_, v___y_2985_, v___y_2986_, v___y_2987_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; size_t v___x_2993_; size_t v___x_2994_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref(v___x_2991_);
v___x_2993_ = ((size_t)1ULL);
v___x_2994_ = lean_usize_add(v_i_2980_, v___x_2993_);
v_i_2980_ = v___x_2994_;
v_b_2982_ = v_a_2992_;
goto _start;
}
else
{
return v___x_2991_;
}
}
else
{
lean_object* v___x_2996_; 
v___x_2996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2996_, 0, v_b_2982_);
return v___x_2996_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg___boxed(lean_object* v_as_2997_, lean_object* v_i_2998_, lean_object* v_stop_2999_, lean_object* v_b_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_){
_start:
{
size_t v_i_boxed_3007_; size_t v_stop_boxed_3008_; lean_object* v_res_3009_; 
v_i_boxed_3007_ = lean_unbox_usize(v_i_2998_);
lean_dec(v_i_2998_);
v_stop_boxed_3008_ = lean_unbox_usize(v_stop_2999_);
lean_dec(v_stop_2999_);
v_res_3009_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_as_2997_, v_i_boxed_3007_, v_stop_boxed_3008_, v_b_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_);
lean_dec(v___y_3005_);
lean_dec_ref(v___y_3004_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec_ref(v_as_2997_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(lean_object* v_values_3010_, lean_object* v_starIdx_3011_, lean_object* v_children_3012_, lean_object* v_entries_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_){
_start:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; uint8_t v___x_3024_; 
v___x_3020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3020_, 0, v_starIdx_3011_);
lean_ctor_set(v___x_3020_, 1, v_children_3012_);
v___x_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3021_, 0, v_values_3010_);
lean_ctor_set(v___x_3021_, 1, v___x_3020_);
v___x_3022_ = lean_unsigned_to_nat(0u);
v___x_3023_ = lean_array_get_size(v_entries_3013_);
v___x_3024_ = lean_nat_dec_lt(v___x_3022_, v___x_3023_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; 
v___x_3025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3021_);
return v___x_3025_;
}
else
{
uint8_t v___x_3026_; 
v___x_3026_ = lean_nat_dec_le(v___x_3023_, v___x_3023_);
if (v___x_3026_ == 0)
{
if (v___x_3024_ == 0)
{
lean_object* v___x_3027_; 
v___x_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3021_);
return v___x_3027_;
}
else
{
size_t v___x_3028_; size_t v___x_3029_; lean_object* v___x_3030_; 
v___x_3028_ = ((size_t)0ULL);
v___x_3029_ = lean_usize_of_nat(v___x_3023_);
v___x_3030_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_entries_3013_, v___x_3028_, v___x_3029_, v___x_3021_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
return v___x_3030_;
}
}
else
{
size_t v___x_3031_; size_t v___x_3032_; lean_object* v___x_3033_; 
v___x_3031_ = ((size_t)0ULL);
v___x_3032_ = lean_usize_of_nat(v___x_3023_);
v___x_3033_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_entries_3013_, v___x_3031_, v___x_3032_, v___x_3021_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_);
return v___x_3033_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg___boxed(lean_object* v_values_3034_, lean_object* v_starIdx_3035_, lean_object* v_children_3036_, lean_object* v_entries_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_){
_start:
{
lean_object* v_res_3044_; 
v_res_3044_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3034_, v_starIdx_3035_, v_children_3036_, v_entries_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_);
lean_dec(v_a_3042_);
lean_dec_ref(v_a_3041_);
lean_dec(v_a_3040_);
lean_dec_ref(v_a_3039_);
lean_dec(v_a_3038_);
lean_dec_ref(v_entries_3037_);
return v_res_3044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries(lean_object* v_00_u03b1_3045_, lean_object* v_values_3046_, lean_object* v_starIdx_3047_, lean_object* v_children_3048_, lean_object* v_entries_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_){
_start:
{
lean_object* v___x_3056_; 
v___x_3056_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3046_, v_starIdx_3047_, v_children_3048_, v_entries_3049_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_);
return v___x_3056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalLazyEntries___boxed(lean_object* v_00_u03b1_3057_, lean_object* v_values_3058_, lean_object* v_starIdx_3059_, lean_object* v_children_3060_, lean_object* v_entries_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_){
_start:
{
lean_object* v_res_3068_; 
v_res_3068_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries(v_00_u03b1_3057_, v_values_3058_, v_starIdx_3059_, v_children_3060_, v_entries_3061_, v_a_3062_, v_a_3063_, v_a_3064_, v_a_3065_, v_a_3066_);
lean_dec(v_a_3066_);
lean_dec_ref(v_a_3065_);
lean_dec(v_a_3064_);
lean_dec_ref(v_a_3063_);
lean_dec(v_a_3062_);
lean_dec_ref(v_entries_3061_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(lean_object* v_00_u03b1_3069_, lean_object* v_as_3070_, size_t v_i_3071_, size_t v_stop_3072_, lean_object* v_b_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_){
_start:
{
lean_object* v___x_3080_; 
v___x_3080_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___redArg(v_as_3070_, v_i_3071_, v_stop_3072_, v_b_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_);
return v___x_3080_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0___boxed(lean_object* v_00_u03b1_3081_, lean_object* v_as_3082_, lean_object* v_i_3083_, lean_object* v_stop_3084_, lean_object* v_b_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_){
_start:
{
size_t v_i_boxed_3092_; size_t v_stop_boxed_3093_; lean_object* v_res_3094_; 
v_i_boxed_3092_ = lean_unbox_usize(v_i_3083_);
lean_dec(v_i_3083_);
v_stop_boxed_3093_ = lean_unbox_usize(v_stop_3084_);
lean_dec(v_stop_3084_);
v_res_3094_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_evalLazyEntries_spec__0(v_00_u03b1_3081_, v_as_3082_, v_i_boxed_3092_, v_stop_boxed_3093_, v_b_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_, v___y_3090_);
lean_dec(v___y_3090_);
lean_dec_ref(v___y_3089_);
lean_dec(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec(v___y_3086_);
lean_dec_ref(v_as_3082_);
return v_res_3094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg(lean_object* v_c_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_){
_start:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v_values_3107_; lean_object* v_star_3108_; lean_object* v_children_3109_; lean_object* v_pending_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3140_; 
v___x_3104_ = lean_st_ref_get(v_a_3098_);
v___x_3105_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie___closed__0);
v___x_3106_ = lean_array_get(v___x_3105_, v___x_3104_, v_c_3097_);
lean_dec(v___x_3104_);
v_values_3107_ = lean_ctor_get(v___x_3106_, 0);
v_star_3108_ = lean_ctor_get(v___x_3106_, 1);
v_children_3109_ = lean_ctor_get(v___x_3106_, 2);
v_pending_3110_ = lean_ctor_get(v___x_3106_, 3);
v_isSharedCheck_3140_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3112_ = v___x_3106_;
v_isShared_3113_ = v_isSharedCheck_3140_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_pending_3110_);
lean_inc(v_children_3109_);
lean_inc(v_star_3108_);
lean_inc(v_values_3107_);
lean_dec(v___x_3106_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3140_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; uint8_t v___x_3116_; 
v___x_3114_ = lean_array_get_size(v_pending_3110_);
v___x_3115_ = lean_unsigned_to_nat(0u);
v___x_3116_ = lean_nat_dec_eq(v___x_3114_, v___x_3115_);
if (v___x_3116_ == 0)
{
lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3117_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_c_3097_, v___x_3105_, v_a_3098_);
lean_dec_ref(v___x_3117_);
v___x_3118_ = l_Lean_Meta_LazyDiscrTree_evalLazyEntries___redArg(v_values_3107_, v_star_3108_, v_children_3109_, v_pending_3110_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_, v_a_3102_);
lean_dec_ref(v_pending_3110_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v_a_3119_; lean_object* v_snd_3120_; lean_object* v_fst_3121_; lean_object* v_fst_3122_; lean_object* v_snd_3123_; lean_object* v___x_3124_; lean_object* v___x_3126_; 
v_a_3119_ = lean_ctor_get(v___x_3118_, 0);
lean_inc(v_a_3119_);
lean_dec_ref(v___x_3118_);
v_snd_3120_ = lean_ctor_get(v_a_3119_, 1);
v_fst_3121_ = lean_ctor_get(v_a_3119_, 0);
v_fst_3122_ = lean_ctor_get(v_snd_3120_, 0);
v_snd_3123_ = lean_ctor_get(v_snd_3120_, 1);
v___x_3124_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_evalNode___redArg___closed__0));
lean_inc(v_snd_3123_);
lean_inc(v_fst_3122_);
lean_inc(v_fst_3121_);
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 3, v___x_3124_);
lean_ctor_set(v___x_3112_, 2, v_snd_3123_);
lean_ctor_set(v___x_3112_, 1, v_fst_3122_);
lean_ctor_set(v___x_3112_, 0, v_fst_3121_);
v___x_3126_ = v___x_3112_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_fst_3121_);
lean_ctor_set(v_reuseFailAlloc_3136_, 1, v_fst_3122_);
lean_ctor_set(v_reuseFailAlloc_3136_, 2, v_snd_3123_);
lean_ctor_set(v_reuseFailAlloc_3136_, 3, v___x_3124_);
v___x_3126_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
lean_object* v___x_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3134_; 
v___x_3127_ = l_Lean_Meta_LazyDiscrTree_setTrie___redArg(v_c_3097_, v___x_3126_, v_a_3098_);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_3127_);
if (v_isSharedCheck_3134_ == 0)
{
lean_object* v_unused_3135_; 
v_unused_3135_ = lean_ctor_get(v___x_3127_, 0);
lean_dec(v_unused_3135_);
v___x_3129_ = v___x_3127_;
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
else
{
lean_dec(v___x_3127_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3132_; 
if (v_isShared_3130_ == 0)
{
lean_ctor_set(v___x_3129_, 0, v_a_3119_);
v___x_3132_ = v___x_3129_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_a_3119_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
}
}
else
{
lean_del_object(v___x_3112_);
return v___x_3118_;
}
}
else
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
lean_del_object(v___x_3112_);
lean_dec_ref(v_pending_3110_);
v___x_3137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3137_, 0, v_star_3108_);
lean_ctor_set(v___x_3137_, 1, v_children_3109_);
v___x_3138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3138_, 0, v_values_3107_);
lean_ctor_set(v___x_3138_, 1, v___x_3137_);
v___x_3139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3138_);
return v___x_3139_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___redArg___boxed(lean_object* v_c_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3141_, v_a_3142_, v_a_3143_, v_a_3144_, v_a_3145_, v_a_3146_);
lean_dec(v_a_3146_);
lean_dec_ref(v_a_3145_);
lean_dec(v_a_3144_);
lean_dec_ref(v_a_3143_);
lean_dec(v_a_3142_);
lean_dec(v_c_3141_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode(lean_object* v_00_u03b1_3149_, lean_object* v_c_3150_, lean_object* v_a_3151_, lean_object* v_a_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_, lean_object* v_a_3155_){
_start:
{
lean_object* v___x_3157_; 
v___x_3157_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3150_, v_a_3151_, v_a_3152_, v_a_3153_, v_a_3154_, v_a_3155_);
return v___x_3157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_evalNode___boxed(lean_object* v_00_u03b1_3158_, lean_object* v_c_3159_, lean_object* v_a_3160_, lean_object* v_a_3161_, lean_object* v_a_3162_, lean_object* v_a_3163_, lean_object* v_a_3164_, lean_object* v_a_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = l_Lean_Meta_LazyDiscrTree_evalNode(v_00_u03b1_3158_, v_c_3159_, v_a_3160_, v_a_3161_, v_a_3162_, v_a_3163_, v_a_3164_);
lean_dec(v_a_3164_);
lean_dec_ref(v_a_3163_);
lean_dec(v_a_3162_);
lean_dec_ref(v_a_3161_);
lean_dec(v_a_3160_);
lean_dec(v_c_3159_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(lean_object* v_a_3167_, lean_object* v_fallback_3168_, lean_object* v_x_3169_){
_start:
{
if (lean_obj_tag(v_x_3169_) == 0)
{
lean_inc(v_fallback_3168_);
return v_fallback_3168_;
}
else
{
lean_object* v_key_3170_; lean_object* v_value_3171_; lean_object* v_tail_3172_; uint8_t v___x_3173_; 
v_key_3170_ = lean_ctor_get(v_x_3169_, 0);
v_value_3171_ = lean_ctor_get(v_x_3169_, 1);
v_tail_3172_ = lean_ctor_get(v_x_3169_, 2);
v___x_3173_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_key_3170_, v_a_3167_);
if (v___x_3173_ == 0)
{
v_x_3169_ = v_tail_3172_;
goto _start;
}
else
{
lean_inc(v_value_3171_);
return v_value_3171_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg___boxed(lean_object* v_a_3175_, lean_object* v_fallback_3176_, lean_object* v_x_3177_){
_start:
{
lean_object* v_res_3178_; 
v_res_3178_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3175_, v_fallback_3176_, v_x_3177_);
lean_dec(v_x_3177_);
lean_dec(v_fallback_3176_);
lean_dec(v_a_3175_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(lean_object* v_m_3179_, lean_object* v_a_3180_, lean_object* v_fallback_3181_){
_start:
{
lean_object* v_buckets_3182_; lean_object* v___x_3183_; uint64_t v___x_3184_; uint64_t v___x_3185_; uint64_t v___x_3186_; uint64_t v_fold_3187_; uint64_t v___x_3188_; uint64_t v___x_3189_; uint64_t v___x_3190_; size_t v___x_3191_; size_t v___x_3192_; size_t v___x_3193_; size_t v___x_3194_; size_t v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; 
v_buckets_3182_ = lean_ctor_get(v_m_3179_, 1);
v___x_3183_ = lean_array_get_size(v_buckets_3182_);
v___x_3184_ = l_Lean_Meta_LazyDiscrTree_Key_hash(v_a_3180_);
v___x_3185_ = 32ULL;
v___x_3186_ = lean_uint64_shift_right(v___x_3184_, v___x_3185_);
v_fold_3187_ = lean_uint64_xor(v___x_3184_, v___x_3186_);
v___x_3188_ = 16ULL;
v___x_3189_ = lean_uint64_shift_right(v_fold_3187_, v___x_3188_);
v___x_3190_ = lean_uint64_xor(v_fold_3187_, v___x_3189_);
v___x_3191_ = lean_uint64_to_usize(v___x_3190_);
v___x_3192_ = lean_usize_of_nat(v___x_3183_);
v___x_3193_ = ((size_t)1ULL);
v___x_3194_ = lean_usize_sub(v___x_3192_, v___x_3193_);
v___x_3195_ = lean_usize_land(v___x_3191_, v___x_3194_);
v___x_3196_ = lean_array_uget_borrowed(v_buckets_3182_, v___x_3195_);
v___x_3197_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3180_, v_fallback_3181_, v___x_3196_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg___boxed(lean_object* v_m_3198_, lean_object* v_a_3199_, lean_object* v_fallback_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_m_3198_, v_a_3199_, v_fallback_3200_);
lean_dec(v_fallback_3200_);
lean_dec(v_a_3199_);
lean_dec_ref(v_m_3198_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(lean_object* v_next_3202_, lean_object* v_rest_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_){
_start:
{
lean_object* v___x_3210_; uint8_t v___x_3211_; 
v___x_3210_ = lean_unsigned_to_nat(0u);
v___x_3211_ = lean_nat_dec_eq(v_next_3202_, v___x_3210_);
if (v___x_3211_ == 0)
{
lean_object* v___x_3212_; 
v___x_3212_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_3202_, v_a_3204_, v_a_3205_, v_a_3206_, v_a_3207_, v_a_3208_);
if (lean_obj_tag(v___x_3212_) == 0)
{
lean_object* v_a_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3238_; 
v_a_3213_ = lean_ctor_get(v___x_3212_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v___x_3212_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3215_ = v___x_3212_;
v_isShared_3216_ = v_isSharedCheck_3238_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_a_3213_);
lean_dec(v___x_3212_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3238_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v_snd_3217_; 
v_snd_3217_ = lean_ctor_get(v_a_3213_, 1);
lean_inc(v_snd_3217_);
lean_dec(v_a_3213_);
if (lean_obj_tag(v_rest_3203_) == 0)
{
lean_object* v_fst_3218_; lean_object* v_snd_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3227_; 
v_fst_3218_ = lean_ctor_get(v_snd_3217_, 0);
lean_inc(v_fst_3218_);
v_snd_3219_ = lean_ctor_get(v_snd_3217_, 1);
lean_inc(v_snd_3219_);
lean_dec(v_snd_3217_);
v___x_3220_ = lean_st_ref_take(v_a_3204_);
v___x_3221_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v___x_3222_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
lean_ctor_set(v___x_3222_, 1, v_fst_3218_);
lean_ctor_set(v___x_3222_, 2, v_snd_3219_);
lean_ctor_set(v___x_3222_, 3, v___x_3221_);
v___x_3223_ = lean_array_set(v___x_3220_, v_next_3202_, v___x_3222_);
lean_dec(v_next_3202_);
v___x_3224_ = lean_st_ref_set(v_a_3204_, v___x_3223_);
v___x_3225_ = lean_box(0);
if (v_isShared_3216_ == 0)
{
lean_ctor_set(v___x_3215_, 0, v___x_3225_);
v___x_3227_ = v___x_3215_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v___x_3225_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
else
{
lean_object* v_fst_3229_; lean_object* v_snd_3230_; lean_object* v_head_3231_; lean_object* v_tail_3232_; lean_object* v___x_3233_; uint8_t v___x_3234_; 
lean_del_object(v___x_3215_);
lean_dec(v_next_3202_);
v_fst_3229_ = lean_ctor_get(v_snd_3217_, 0);
lean_inc(v_fst_3229_);
v_snd_3230_ = lean_ctor_get(v_snd_3217_, 1);
lean_inc(v_snd_3230_);
lean_dec(v_snd_3217_);
v_head_3231_ = lean_ctor_get(v_rest_3203_, 0);
v_tail_3232_ = lean_ctor_get(v_rest_3203_, 1);
v___x_3233_ = lean_box(3);
v___x_3234_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_head_3231_, v___x_3233_);
if (v___x_3234_ == 0)
{
lean_object* v___x_3235_; 
lean_dec(v_fst_3229_);
v___x_3235_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_snd_3230_, v_head_3231_, v___x_3210_);
lean_dec(v_snd_3230_);
v_next_3202_ = v___x_3235_;
v_rest_3203_ = v_tail_3232_;
goto _start;
}
else
{
lean_dec(v_snd_3230_);
v_next_3202_ = v_fst_3229_;
v_rest_3203_ = v_tail_3232_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3246_; 
lean_dec(v_next_3202_);
v_a_3239_ = lean_ctor_get(v___x_3212_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3212_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3241_ = v___x_3212_;
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3212_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v___x_3244_; 
if (v_isShared_3242_ == 0)
{
v___x_3244_ = v___x_3241_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_a_3239_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
}
else
{
lean_object* v___x_3247_; lean_object* v___x_3248_; 
lean_dec(v_next_3202_);
v___x_3247_ = lean_box(0);
v___x_3248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3247_);
return v___x_3248_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg___boxed(lean_object* v_next_3249_, lean_object* v_rest_3250_, lean_object* v_a_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_){
_start:
{
lean_object* v_res_3257_; 
v_res_3257_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(v_next_3249_, v_rest_3250_, v_a_3251_, v_a_3252_, v_a_3253_, v_a_3254_, v_a_3255_);
lean_dec(v_a_3255_);
lean_dec_ref(v_a_3254_);
lean_dec(v_a_3253_);
lean_dec_ref(v_a_3252_);
lean_dec(v_a_3251_);
lean_dec(v_rest_3250_);
return v_res_3257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux(lean_object* v_00_u03b1_3258_, lean_object* v_next_3259_, lean_object* v_rest_3260_, lean_object* v_a_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_){
_start:
{
lean_object* v___x_3267_; 
v___x_3267_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux___redArg(v_next_3259_, v_rest_3260_, v_a_3261_, v_a_3262_, v_a_3263_, v_a_3264_, v_a_3265_);
return v___x_3267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed(lean_object* v_00_u03b1_3268_, lean_object* v_next_3269_, lean_object* v_rest_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = l_Lean_Meta_LazyDiscrTree_dropKeyAux(v_00_u03b1_3268_, v_next_3269_, v_rest_3270_, v_a_3271_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_);
lean_dec(v_a_3275_);
lean_dec_ref(v_a_3274_);
lean_dec(v_a_3273_);
lean_dec_ref(v_a_3272_);
lean_dec(v_a_3271_);
lean_dec(v_rest_3270_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(lean_object* v_00_u03b2_3278_, lean_object* v_m_3279_, lean_object* v_a_3280_, lean_object* v_fallback_3281_){
_start:
{
lean_object* v___x_3282_; 
v___x_3282_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_m_3279_, v_a_3280_, v_fallback_3281_);
return v___x_3282_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___boxed(lean_object* v_00_u03b2_3283_, lean_object* v_m_3284_, lean_object* v_a_3285_, lean_object* v_fallback_3286_){
_start:
{
lean_object* v_res_3287_; 
v_res_3287_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0(v_00_u03b2_3283_, v_m_3284_, v_a_3285_, v_fallback_3286_);
lean_dec(v_fallback_3286_);
lean_dec(v_a_3285_);
lean_dec_ref(v_m_3284_);
return v_res_3287_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(lean_object* v_00_u03b2_3288_, lean_object* v_a_3289_, lean_object* v_fallback_3290_, lean_object* v_x_3291_){
_start:
{
lean_object* v___x_3292_; 
v___x_3292_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___redArg(v_a_3289_, v_fallback_3290_, v_x_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3293_, lean_object* v_a_3294_, lean_object* v_fallback_3295_, lean_object* v_x_3296_){
_start:
{
lean_object* v_res_3297_; 
v_res_3297_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0_spec__0(v_00_u03b2_3293_, v_a_3294_, v_fallback_3295_, v_x_3296_);
lean_dec(v_x_3296_);
lean_dec(v_fallback_3295_);
lean_dec(v_a_3294_);
return v_res_3297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg(lean_object* v_t_3298_, lean_object* v_path_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_){
_start:
{
if (lean_obj_tag(v_path_3299_) == 0)
{
lean_object* v___x_3305_; 
v___x_3305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3305_, 0, v_t_3298_);
return v___x_3305_;
}
else
{
lean_object* v_head_3306_; lean_object* v_tail_3307_; lean_object* v_roots_3308_; lean_object* v___x_3309_; lean_object* v_idx_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; 
v_head_3306_ = lean_ctor_get(v_path_3299_, 0);
lean_inc(v_head_3306_);
v_tail_3307_ = lean_ctor_get(v_path_3299_, 1);
lean_inc(v_tail_3307_);
lean_dec_ref(v_path_3299_);
v_roots_3308_ = lean_ctor_get(v_t_3298_, 1);
v___x_3309_ = lean_unsigned_to_nat(0u);
v_idx_3310_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_roots_3308_, v_head_3306_, v___x_3309_);
lean_dec(v_head_3306_);
v___x_3311_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_dropKeyAux___boxed), 9, 3);
lean_closure_set(v___x_3311_, 0, lean_box(0));
lean_closure_set(v___x_3311_, 1, v_idx_3310_);
lean_closure_set(v___x_3311_, 2, v_tail_3307_);
v___x_3312_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_t_3298_, v___x_3311_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_);
if (lean_obj_tag(v___x_3312_) == 0)
{
lean_object* v_a_3313_; lean_object* v___x_3315_; uint8_t v_isShared_3316_; uint8_t v_isSharedCheck_3321_; 
v_a_3313_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3315_ = v___x_3312_;
v_isShared_3316_ = v_isSharedCheck_3321_;
goto v_resetjp_3314_;
}
else
{
lean_inc(v_a_3313_);
lean_dec(v___x_3312_);
v___x_3315_ = lean_box(0);
v_isShared_3316_ = v_isSharedCheck_3321_;
goto v_resetjp_3314_;
}
v_resetjp_3314_:
{
lean_object* v_snd_3317_; lean_object* v___x_3319_; 
v_snd_3317_ = lean_ctor_get(v_a_3313_, 1);
lean_inc(v_snd_3317_);
lean_dec(v_a_3313_);
if (v_isShared_3316_ == 0)
{
lean_ctor_set(v___x_3315_, 0, v_snd_3317_);
v___x_3319_ = v___x_3315_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_snd_3317_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
return v___x_3319_;
}
}
}
else
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3329_; 
v_a_3322_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3324_ = v___x_3312_;
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3312_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3327_; 
if (v_isShared_3325_ == 0)
{
v___x_3327_ = v___x_3324_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_a_3322_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___redArg___boxed(lean_object* v_t_3330_, lean_object* v_path_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_){
_start:
{
lean_object* v_res_3337_; 
v_res_3337_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_t_3330_, v_path_3331_, v_a_3332_, v_a_3333_, v_a_3334_, v_a_3335_);
lean_dec(v_a_3335_);
lean_dec_ref(v_a_3334_);
lean_dec(v_a_3333_);
lean_dec_ref(v_a_3332_);
return v_res_3337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey(lean_object* v_00_u03b1_3338_, lean_object* v_t_3339_, lean_object* v_path_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_){
_start:
{
lean_object* v___x_3346_; 
v___x_3346_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_t_3339_, v_path_3340_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_);
return v___x_3346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKey___boxed(lean_object* v_00_u03b1_3347_, lean_object* v_t_3348_, lean_object* v_path_3349_, lean_object* v_a_3350_, lean_object* v_a_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_){
_start:
{
lean_object* v_res_3355_; 
v_res_3355_ = l_Lean_Meta_LazyDiscrTree_dropKey(v_00_u03b1_3347_, v_t_3348_, v_path_3349_, v_a_3350_, v_a_3351_, v_a_3352_, v_a_3353_);
lean_dec(v_a_3353_);
lean_dec_ref(v_a_3352_);
lean_dec(v_a_3351_);
lean_dec_ref(v_a_3350_);
return v_res_3355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(lean_object* v_score_3358_, lean_object* v_e_3359_, lean_object* v_a_3360_){
_start:
{
lean_object* v___x_3361_; uint8_t v___x_3362_; 
v___x_3361_ = lean_array_get_size(v_a_3360_);
v___x_3362_ = lean_nat_dec_lt(v___x_3361_, v_score_3358_);
if (v___x_3362_ == 0)
{
lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3363_ = lean_unsigned_to_nat(1u);
v___x_3364_ = lean_mk_empty_array_with_capacity(v___x_3363_);
v___x_3365_ = lean_array_push(v___x_3364_, v_e_3359_);
v___x_3366_ = lean_array_push(v_a_3360_, v___x_3365_);
return v___x_3366_;
}
else
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3367_ = ((lean_object*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___closed__0));
v___x_3368_ = lean_array_push(v_a_3360_, v___x_3367_);
v_a_3360_ = v___x_3368_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg___boxed(lean_object* v_score_3370_, lean_object* v_e_3371_, lean_object* v_a_3372_){
_start:
{
lean_object* v_res_3373_; 
v_res_3373_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3370_, v_e_3371_, v_a_3372_);
lean_dec(v_score_3370_);
return v_res_3373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(lean_object* v_00_u03b1_3374_, lean_object* v_score_3375_, lean_object* v_e_3376_, lean_object* v_a_3377_){
_start:
{
lean_object* v___x_3378_; 
v___x_3378_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3375_, v_e_3376_, v_a_3377_);
return v___x_3378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___boxed(lean_object* v_00_u03b1_3379_, lean_object* v_score_3380_, lean_object* v_e_3381_, lean_object* v_a_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop(v_00_u03b1_3379_, v_score_3380_, v_e_3381_, v_a_3382_);
lean_dec(v_score_3380_);
return v_res_3383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(lean_object* v_r_3384_, lean_object* v_score_3385_, lean_object* v_e_3386_){
_start:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; uint8_t v___x_3389_; 
v___x_3387_ = lean_array_get_size(v_e_3386_);
v___x_3388_ = lean_unsigned_to_nat(0u);
v___x_3389_ = lean_nat_dec_eq(v___x_3387_, v___x_3388_);
if (v___x_3389_ == 0)
{
lean_object* v___x_3390_; uint8_t v___x_3391_; 
v___x_3390_ = lean_array_get_size(v_r_3384_);
v___x_3391_ = lean_nat_dec_lt(v_score_3385_, v___x_3390_);
if (v___x_3391_ == 0)
{
lean_object* v___x_3392_; 
v___x_3392_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_MatchResult_push_loop___redArg(v_score_3385_, v_e_3386_, v_r_3384_);
return v___x_3392_;
}
else
{
if (v___x_3391_ == 0)
{
lean_dec_ref(v_e_3386_);
return v_r_3384_;
}
else
{
lean_object* v_v_3393_; lean_object* v___x_3394_; lean_object* v_xs_x27_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
v_v_3393_ = lean_array_fget(v_r_3384_, v_score_3385_);
v___x_3394_ = lean_box(0);
v_xs_x27_3395_ = lean_array_fset(v_r_3384_, v_score_3385_, v___x_3394_);
v___x_3396_ = lean_array_push(v_v_3393_, v_e_3386_);
v___x_3397_ = lean_array_fset(v_xs_x27_3395_, v_score_3385_, v___x_3396_);
return v___x_3397_;
}
}
}
else
{
lean_dec_ref(v_e_3386_);
return v_r_3384_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg___boxed(lean_object* v_r_3398_, lean_object* v_score_3399_, lean_object* v_e_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_r_3398_, v_score_3399_, v_e_3400_);
lean_dec(v_score_3399_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push(lean_object* v_00_u03b1_3402_, lean_object* v_r_3403_, lean_object* v_score_3404_, lean_object* v_e_3405_){
_start:
{
lean_object* v___x_3406_; 
v___x_3406_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_r_3403_, v_score_3404_, v_e_3405_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_push___boxed(lean_object* v_00_u03b1_3407_, lean_object* v_r_3408_, lean_object* v_score_3409_, lean_object* v_e_3410_){
_start:
{
lean_object* v_res_3411_; 
v_res_3411_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push(v_00_u03b1_3407_, v_r_3408_, v_score_3409_, v_e_3410_);
lean_dec(v_score_3409_);
return v_res_3411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(lean_object* v_as_3412_, size_t v_i_3413_, size_t v_stop_3414_, lean_object* v_b_3415_){
_start:
{
uint8_t v___x_3416_; 
v___x_3416_ = lean_usize_dec_eq(v_i_3413_, v_stop_3414_);
if (v___x_3416_ == 0)
{
lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; size_t v___x_3420_; size_t v___x_3421_; 
v___x_3417_ = lean_array_uget_borrowed(v_as_3412_, v_i_3413_);
v___x_3418_ = lean_array_get_size(v___x_3417_);
v___x_3419_ = lean_nat_add(v_b_3415_, v___x_3418_);
lean_dec(v_b_3415_);
v___x_3420_ = ((size_t)1ULL);
v___x_3421_ = lean_usize_add(v_i_3413_, v___x_3420_);
v_i_3413_ = v___x_3421_;
v_b_3415_ = v___x_3419_;
goto _start;
}
else
{
return v_b_3415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg___boxed(lean_object* v_as_3423_, lean_object* v_i_3424_, lean_object* v_stop_3425_, lean_object* v_b_3426_){
_start:
{
size_t v_i_boxed_3427_; size_t v_stop_boxed_3428_; lean_object* v_res_3429_; 
v_i_boxed_3427_ = lean_unbox_usize(v_i_3424_);
lean_dec(v_i_3424_);
v_stop_boxed_3428_ = lean_unbox_usize(v_stop_3425_);
lean_dec(v_stop_3425_);
v_res_3429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v_as_3423_, v_i_boxed_3427_, v_stop_boxed_3428_, v_b_3426_);
lean_dec_ref(v_as_3423_);
return v_res_3429_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(lean_object* v_as_3430_, size_t v_i_3431_, size_t v_stop_3432_, lean_object* v_b_3433_){
_start:
{
lean_object* v___y_3435_; uint8_t v___x_3439_; 
v___x_3439_ = lean_usize_dec_eq(v_i_3431_, v_stop_3432_);
if (v___x_3439_ == 0)
{
lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; uint8_t v___x_3443_; 
v___x_3440_ = lean_array_uget_borrowed(v_as_3430_, v_i_3431_);
v___x_3441_ = lean_unsigned_to_nat(0u);
v___x_3442_ = lean_array_get_size(v___x_3440_);
v___x_3443_ = lean_nat_dec_lt(v___x_3441_, v___x_3442_);
if (v___x_3443_ == 0)
{
v___y_3435_ = v_b_3433_;
goto v___jp_3434_;
}
else
{
uint8_t v___x_3444_; 
v___x_3444_ = lean_nat_dec_le(v___x_3442_, v___x_3442_);
if (v___x_3444_ == 0)
{
if (v___x_3443_ == 0)
{
v___y_3435_ = v_b_3433_;
goto v___jp_3434_;
}
else
{
size_t v___x_3445_; size_t v___x_3446_; lean_object* v___x_3447_; 
v___x_3445_ = ((size_t)0ULL);
v___x_3446_ = lean_usize_of_nat(v___x_3442_);
v___x_3447_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v___x_3440_, v___x_3445_, v___x_3446_, v_b_3433_);
v___y_3435_ = v___x_3447_;
goto v___jp_3434_;
}
}
else
{
size_t v___x_3448_; size_t v___x_3449_; lean_object* v___x_3450_; 
v___x_3448_ = ((size_t)0ULL);
v___x_3449_ = lean_usize_of_nat(v___x_3442_);
v___x_3450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v___x_3440_, v___x_3448_, v___x_3449_, v_b_3433_);
v___y_3435_ = v___x_3450_;
goto v___jp_3434_;
}
}
}
else
{
return v_b_3433_;
}
v___jp_3434_:
{
size_t v___x_3436_; size_t v___x_3437_; 
v___x_3436_ = ((size_t)1ULL);
v___x_3437_ = lean_usize_add(v_i_3431_, v___x_3436_);
v_i_3431_ = v___x_3437_;
v_b_3433_ = v___y_3435_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg___boxed(lean_object* v_as_3451_, lean_object* v_i_3452_, lean_object* v_stop_3453_, lean_object* v_b_3454_){
_start:
{
size_t v_i_boxed_3455_; size_t v_stop_boxed_3456_; lean_object* v_res_3457_; 
v_i_boxed_3455_ = lean_unbox_usize(v_i_3452_);
lean_dec(v_i_3452_);
v_stop_boxed_3456_ = lean_unbox_usize(v_stop_3453_);
lean_dec(v_stop_3453_);
v_res_3457_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_as_3451_, v_i_boxed_3455_, v_stop_boxed_3456_, v_b_3454_);
lean_dec_ref(v_as_3451_);
return v_res_3457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(lean_object* v_mr_3458_){
_start:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; uint8_t v___x_3461_; 
v___x_3459_ = lean_unsigned_to_nat(0u);
v___x_3460_ = lean_array_get_size(v_mr_3458_);
v___x_3461_ = lean_nat_dec_lt(v___x_3459_, v___x_3460_);
if (v___x_3461_ == 0)
{
return v___x_3459_;
}
else
{
uint8_t v___x_3462_; 
v___x_3462_ = lean_nat_dec_le(v___x_3460_, v___x_3460_);
if (v___x_3462_ == 0)
{
if (v___x_3461_ == 0)
{
return v___x_3459_;
}
else
{
size_t v___x_3463_; size_t v___x_3464_; lean_object* v___x_3465_; 
v___x_3463_ = ((size_t)0ULL);
v___x_3464_ = lean_usize_of_nat(v___x_3460_);
v___x_3465_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_mr_3458_, v___x_3463_, v___x_3464_, v___x_3459_);
return v___x_3465_;
}
}
else
{
size_t v___x_3466_; size_t v___x_3467_; lean_object* v___x_3468_; 
v___x_3466_ = ((size_t)0ULL);
v___x_3467_ = lean_usize_of_nat(v___x_3460_);
v___x_3468_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_mr_3458_, v___x_3466_, v___x_3467_, v___x_3459_);
return v___x_3468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg___boxed(lean_object* v_mr_3469_){
_start:
{
lean_object* v_res_3470_; 
v_res_3470_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_mr_3469_);
lean_dec_ref(v_mr_3469_);
return v_res_3470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size(lean_object* v_00_u03b1_3471_, lean_object* v_mr_3472_){
_start:
{
lean_object* v___x_3473_; 
v___x_3473_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_mr_3472_);
return v___x_3473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_size___boxed(lean_object* v_00_u03b1_3474_, lean_object* v_mr_3475_){
_start:
{
lean_object* v_res_3476_; 
v_res_3476_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size(v_00_u03b1_3474_, v_mr_3475_);
lean_dec_ref(v_mr_3475_);
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(lean_object* v_00_u03b1_3477_, lean_object* v_as_3478_, size_t v_i_3479_, size_t v_stop_3480_, lean_object* v_b_3481_){
_start:
{
lean_object* v___x_3482_; 
v___x_3482_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___redArg(v_as_3478_, v_i_3479_, v_stop_3480_, v_b_3481_);
return v___x_3482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0___boxed(lean_object* v_00_u03b1_3483_, lean_object* v_as_3484_, lean_object* v_i_3485_, lean_object* v_stop_3486_, lean_object* v_b_3487_){
_start:
{
size_t v_i_boxed_3488_; size_t v_stop_boxed_3489_; lean_object* v_res_3490_; 
v_i_boxed_3488_ = lean_unbox_usize(v_i_3485_);
lean_dec(v_i_3485_);
v_stop_boxed_3489_ = lean_unbox_usize(v_stop_3486_);
lean_dec(v_stop_3486_);
v_res_3490_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__0(v_00_u03b1_3483_, v_as_3484_, v_i_boxed_3488_, v_stop_boxed_3489_, v_b_3487_);
lean_dec_ref(v_as_3484_);
return v_res_3490_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(lean_object* v_00_u03b1_3491_, lean_object* v_as_3492_, size_t v_i_3493_, size_t v_stop_3494_, lean_object* v_b_3495_){
_start:
{
lean_object* v___x_3496_; 
v___x_3496_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___redArg(v_as_3492_, v_i_3493_, v_stop_3494_, v_b_3495_);
return v___x_3496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1___boxed(lean_object* v_00_u03b1_3497_, lean_object* v_as_3498_, lean_object* v_i_3499_, lean_object* v_stop_3500_, lean_object* v_b_3501_){
_start:
{
size_t v_i_boxed_3502_; size_t v_stop_boxed_3503_; lean_object* v_res_3504_; 
v_i_boxed_3502_ = lean_unbox_usize(v_i_3499_);
lean_dec(v_i_3499_);
v_stop_boxed_3503_ = lean_unbox_usize(v_stop_3500_);
lean_dec(v_stop_3500_);
v_res_3504_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_size_spec__1(v_00_u03b1_3497_, v_as_3498_, v_i_boxed_3502_, v_stop_boxed_3503_, v_b_3501_);
lean_dec_ref(v_as_3498_);
return v_res_3504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0(lean_object* v_f_3505_, lean_object* v_j_3506_, lean_object* v_x_3507_){
_start:
{
lean_object* v___x_3508_; 
v___x_3508_ = lean_apply_2(v_f_3505_, v_j_3506_, v_x_3507_);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1(lean_object* v___f_3528_, lean_object* v_x1_3529_, lean_object* v_x2_3530_){
_start:
{
lean_object* v___x_3531_; size_t v_sz_3532_; size_t v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
v___x_3531_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v_sz_3532_ = lean_array_size(v_x2_3530_);
v___x_3533_ = ((size_t)0ULL);
v___x_3534_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3531_, v___f_3528_, v_sz_3532_, v___x_3533_, v_x2_3530_);
v___x_3535_ = l_Array_append___redArg(v_x1_3529_, v___x_3534_);
lean_dec(v___x_3534_);
return v___x_3535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(lean_object* v_n_3536_, lean_object* v_mr_3537_, lean_object* v_f_3538_, lean_object* v_i_3539_, lean_object* v_x_3540_, lean_object* v_r_3541_){
_start:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v_j_3544_; lean_object* v_b_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; uint8_t v___x_3549_; 
v___x_3542_ = lean_unsigned_to_nat(1u);
v___x_3543_ = lean_nat_sub(v_n_3536_, v___x_3542_);
v_j_3544_ = lean_nat_sub(v___x_3543_, v_i_3539_);
lean_dec(v___x_3543_);
v_b_3545_ = lean_array_fget_borrowed(v_mr_3537_, v_j_3544_);
v___x_3546_ = lean_unsigned_to_nat(0u);
v___x_3547_ = lean_array_get_size(v_b_3545_);
v___x_3548_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v___x_3549_ = lean_nat_dec_lt(v___x_3546_, v___x_3547_);
if (v___x_3549_ == 0)
{
lean_dec(v_j_3544_);
lean_dec(v_f_3538_);
return v_r_3541_;
}
else
{
lean_object* v___f_3550_; lean_object* v___f_3551_; uint8_t v___x_3552_; 
v___f_3550_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__0), 3, 2);
lean_closure_set(v___f_3550_, 0, v_f_3538_);
lean_closure_set(v___f_3550_, 1, v_j_3544_);
v___f_3551_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1), 3, 1);
lean_closure_set(v___f_3551_, 0, v___f_3550_);
v___x_3552_ = lean_nat_dec_le(v___x_3547_, v___x_3547_);
if (v___x_3552_ == 0)
{
if (v___x_3549_ == 0)
{
lean_dec_ref(v___f_3551_);
return v_r_3541_;
}
else
{
size_t v___x_3553_; size_t v___x_3554_; lean_object* v___x_3555_; 
v___x_3553_ = ((size_t)0ULL);
v___x_3554_ = lean_usize_of_nat(v___x_3547_);
lean_inc(v_b_3545_);
v___x_3555_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3548_, v___f_3551_, v_b_3545_, v___x_3553_, v___x_3554_, v_r_3541_);
return v___x_3555_;
}
}
else
{
size_t v___x_3556_; size_t v___x_3557_; lean_object* v___x_3558_; 
v___x_3556_ = ((size_t)0ULL);
v___x_3557_ = lean_usize_of_nat(v___x_3547_);
lean_inc(v_b_3545_);
v___x_3558_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3548_, v___f_3551_, v_b_3545_, v___x_3556_, v___x_3557_, v_r_3541_);
return v___x_3558_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed(lean_object* v_n_3559_, lean_object* v_mr_3560_, lean_object* v_f_3561_, lean_object* v_i_3562_, lean_object* v_x_3563_, lean_object* v_r_3564_){
_start:
{
lean_object* v_res_3565_; 
v_res_3565_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2(v_n_3559_, v_mr_3560_, v_f_3561_, v_i_3562_, v_x_3563_, v_r_3564_);
lean_dec(v_i_3562_);
lean_dec_ref(v_mr_3560_);
lean_dec(v_n_3559_);
return v_res_3565_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(lean_object* v_mr_3566_, lean_object* v_a_3567_, lean_object* v_f_3568_){
_start:
{
lean_object* v_n_3569_; lean_object* v___f_3570_; lean_object* v___x_3571_; 
v_n_3569_ = lean_array_get_size(v_mr_3566_);
v___f_3570_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_3570_, 0, v_n_3569_);
lean_closure_set(v___f_3570_, 1, v_mr_3566_);
lean_closure_set(v___f_3570_, 2, v_f_3568_);
v___x_3571_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop(lean_box(0), v_n_3569_, v___f_3570_, v_n_3569_, lean_box(0), v_a_3567_);
return v___x_3571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux(lean_object* v_00_u03b1_3572_, lean_object* v_00_u03b2_3573_, lean_object* v_mr_3574_, lean_object* v_a_3575_, lean_object* v_f_3576_){
_start:
{
lean_object* v___x_3577_; 
v___x_3577_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg(v_mr_3574_, v_a_3575_, v_f_3576_);
return v___x_3577_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(size_t v_sz_3578_, size_t v_i_3579_, lean_object* v_bs_3580_){
_start:
{
uint8_t v___x_3581_; 
v___x_3581_ = lean_usize_dec_lt(v_i_3579_, v_sz_3578_);
if (v___x_3581_ == 0)
{
return v_bs_3580_;
}
else
{
lean_object* v_v_3582_; lean_object* v___x_3583_; lean_object* v_bs_x27_3584_; size_t v___x_3585_; size_t v___x_3586_; lean_object* v___x_3587_; 
v_v_3582_ = lean_array_uget(v_bs_3580_, v_i_3579_);
v___x_3583_ = lean_unsigned_to_nat(0u);
v_bs_x27_3584_ = lean_array_uset(v_bs_3580_, v_i_3579_, v___x_3583_);
v___x_3585_ = ((size_t)1ULL);
v___x_3586_ = lean_usize_add(v_i_3579_, v___x_3585_);
v___x_3587_ = lean_array_uset(v_bs_x27_3584_, v_i_3579_, v_v_3582_);
v_i_3579_ = v___x_3586_;
v_bs_3580_ = v___x_3587_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg___boxed(lean_object* v_sz_3589_, lean_object* v_i_3590_, lean_object* v_bs_3591_){
_start:
{
size_t v_sz_boxed_3592_; size_t v_i_boxed_3593_; lean_object* v_res_3594_; 
v_sz_boxed_3592_ = lean_unbox_usize(v_sz_3589_);
lean_dec(v_sz_3589_);
v_i_boxed_3593_ = lean_unbox_usize(v_i_3590_);
lean_dec(v_i_3590_);
v_res_3594_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_boxed_3592_, v_i_boxed_3593_, v_bs_3591_);
return v_res_3594_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(lean_object* v_as_3595_, size_t v_i_3596_, size_t v_stop_3597_, lean_object* v_b_3598_){
_start:
{
uint8_t v___x_3599_; 
v___x_3599_ = lean_usize_dec_eq(v_i_3596_, v_stop_3597_);
if (v___x_3599_ == 0)
{
lean_object* v___x_3600_; size_t v_sz_3601_; size_t v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; size_t v___x_3605_; size_t v___x_3606_; 
v___x_3600_ = lean_array_uget_borrowed(v_as_3595_, v_i_3596_);
v_sz_3601_ = lean_array_size(v___x_3600_);
v___x_3602_ = ((size_t)0ULL);
lean_inc(v___x_3600_);
v___x_3603_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_3601_, v___x_3602_, v___x_3600_);
v___x_3604_ = l_Array_append___redArg(v_b_3598_, v___x_3603_);
lean_dec_ref(v___x_3603_);
v___x_3605_ = ((size_t)1ULL);
v___x_3606_ = lean_usize_add(v_i_3596_, v___x_3605_);
v_i_3596_ = v___x_3606_;
v_b_3598_ = v___x_3604_;
goto _start;
}
else
{
return v_b_3598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg___boxed(lean_object* v_as_3608_, lean_object* v_i_3609_, lean_object* v_stop_3610_, lean_object* v_b_3611_){
_start:
{
size_t v_i_boxed_3612_; size_t v_stop_boxed_3613_; lean_object* v_res_3614_; 
v_i_boxed_3612_ = lean_unbox_usize(v_i_3609_);
lean_dec(v_i_3609_);
v_stop_boxed_3613_ = lean_unbox_usize(v_stop_3610_);
lean_dec(v_stop_3610_);
v_res_3614_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_as_3608_, v_i_boxed_3612_, v_stop_boxed_3613_, v_b_3611_);
lean_dec_ref(v_as_3608_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(lean_object* v_n_3615_, lean_object* v_aa_3616_, lean_object* v_n_3617_, lean_object* v_j_3618_, lean_object* v_a_3619_){
_start:
{
lean_object* v_zero_3620_; uint8_t v_isZero_3621_; 
v_zero_3620_ = lean_unsigned_to_nat(0u);
v_isZero_3621_ = lean_nat_dec_eq(v_j_3618_, v_zero_3620_);
if (v_isZero_3621_ == 1)
{
lean_dec(v_j_3618_);
return v_a_3619_;
}
else
{
lean_object* v_one_3622_; lean_object* v_n_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v_j_3626_; lean_object* v_b_3627_; lean_object* v___x_3628_; uint8_t v___x_3629_; 
v_one_3622_ = lean_unsigned_to_nat(1u);
v_n_3623_ = lean_nat_sub(v_j_3618_, v_one_3622_);
v___x_3624_ = lean_nat_sub(v_n_3617_, v_j_3618_);
lean_dec(v_j_3618_);
v___x_3625_ = lean_nat_sub(v_n_3615_, v_one_3622_);
v_j_3626_ = lean_nat_sub(v___x_3625_, v___x_3624_);
lean_dec(v___x_3624_);
lean_dec(v___x_3625_);
v_b_3627_ = lean_array_fget_borrowed(v_aa_3616_, v_j_3626_);
lean_dec(v_j_3626_);
v___x_3628_ = lean_array_get_size(v_b_3627_);
v___x_3629_ = lean_nat_dec_lt(v_zero_3620_, v___x_3628_);
if (v___x_3629_ == 0)
{
v_j_3618_ = v_n_3623_;
goto _start;
}
else
{
uint8_t v___x_3631_; 
v___x_3631_ = lean_nat_dec_le(v___x_3628_, v___x_3628_);
if (v___x_3631_ == 0)
{
if (v___x_3629_ == 0)
{
v_j_3618_ = v_n_3623_;
goto _start;
}
else
{
size_t v___x_3633_; size_t v___x_3634_; lean_object* v___x_3635_; 
v___x_3633_ = ((size_t)0ULL);
v___x_3634_ = lean_usize_of_nat(v___x_3628_);
v___x_3635_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_b_3627_, v___x_3633_, v___x_3634_, v_a_3619_);
v_j_3618_ = v_n_3623_;
v_a_3619_ = v___x_3635_;
goto _start;
}
}
else
{
size_t v___x_3637_; size_t v___x_3638_; lean_object* v___x_3639_; 
v___x_3637_ = ((size_t)0ULL);
v___x_3638_ = lean_usize_of_nat(v___x_3628_);
v___x_3639_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_b_3627_, v___x_3637_, v___x_3638_, v_a_3619_);
v_j_3618_ = v_n_3623_;
v_a_3619_ = v___x_3639_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg___boxed(lean_object* v_n_3641_, lean_object* v_aa_3642_, lean_object* v_n_3643_, lean_object* v_j_3644_, lean_object* v_a_3645_){
_start:
{
lean_object* v_res_3646_; 
v_res_3646_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3641_, v_aa_3642_, v_n_3643_, v_j_3644_, v_a_3645_);
lean_dec(v_n_3643_);
lean_dec_ref(v_aa_3642_);
lean_dec(v_n_3641_);
return v_res_3646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(lean_object* v_mr_3647_, lean_object* v_a_3648_){
_start:
{
lean_object* v_n_3649_; lean_object* v___x_3650_; 
v_n_3649_ = lean_array_get_size(v_mr_3647_);
v___x_3650_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3649_, v_mr_3647_, v_n_3649_, v_n_3649_, v_a_3648_);
return v___x_3650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg___boxed(lean_object* v_mr_3651_, lean_object* v_a_3652_){
_start:
{
lean_object* v_res_3653_; 
v_res_3653_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3651_, v_a_3652_);
lean_dec_ref(v_mr_3651_);
return v_res_3653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(lean_object* v_mr_3654_, lean_object* v_a_3655_){
_start:
{
lean_object* v___x_3656_; 
v___x_3656_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3654_, v_a_3655_);
return v___x_3656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg___boxed(lean_object* v_mr_3657_, lean_object* v_a_3658_){
_start:
{
lean_object* v_res_3659_; 
v_res_3659_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___redArg(v_mr_3657_, v_a_3658_);
lean_dec_ref(v_mr_3657_);
return v_res_3659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(lean_object* v_00_u03b1_3660_, lean_object* v_mr_3661_, lean_object* v_a_3662_){
_start:
{
lean_object* v___x_3663_; 
v___x_3663_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3661_, v_a_3662_);
return v___x_3663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults___boxed(lean_object* v_00_u03b1_3664_, lean_object* v_mr_3665_, lean_object* v_a_3666_){
_start:
{
lean_object* v_res_3667_; 
v_res_3667_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResults(v_00_u03b1_3664_, v_mr_3665_, v_a_3666_);
lean_dec_ref(v_mr_3665_);
return v_res_3667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(lean_object* v_00_u03b1_3668_, lean_object* v_mr_3669_, lean_object* v_a_3670_){
_start:
{
lean_object* v___x_3671_; 
v___x_3671_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___redArg(v_mr_3669_, v_a_3670_);
return v___x_3671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0___boxed(lean_object* v_00_u03b1_3672_, lean_object* v_mr_3673_, lean_object* v_a_3674_){
_start:
{
lean_object* v_res_3675_; 
v_res_3675_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0(v_00_u03b1_3672_, v_mr_3673_, v_a_3674_);
lean_dec_ref(v_mr_3673_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(lean_object* v_00_u03b1_3676_, size_t v_sz_3677_, size_t v_i_3678_, lean_object* v_bs_3679_){
_start:
{
lean_object* v___x_3680_; 
v___x_3680_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___redArg(v_sz_3677_, v_i_3678_, v_bs_3679_);
return v___x_3680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3681_, lean_object* v_sz_3682_, lean_object* v_i_3683_, lean_object* v_bs_3684_){
_start:
{
size_t v_sz_boxed_3685_; size_t v_i_boxed_3686_; lean_object* v_res_3687_; 
v_sz_boxed_3685_ = lean_unbox_usize(v_sz_3682_);
lean_dec(v_sz_3682_);
v_i_boxed_3686_ = lean_unbox_usize(v_i_3683_);
lean_dec(v_i_3683_);
v_res_3687_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__0(v_00_u03b1_3681_, v_sz_boxed_3685_, v_i_boxed_3686_, v_bs_3684_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(lean_object* v_00_u03b1_3688_, lean_object* v_as_3689_, size_t v_i_3690_, size_t v_stop_3691_, lean_object* v_b_3692_){
_start:
{
lean_object* v___x_3693_; 
v___x_3693_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___redArg(v_as_3689_, v_i_3690_, v_stop_3691_, v_b_3692_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3694_, lean_object* v_as_3695_, lean_object* v_i_3696_, lean_object* v_stop_3697_, lean_object* v_b_3698_){
_start:
{
size_t v_i_boxed_3699_; size_t v_stop_boxed_3700_; lean_object* v_res_3701_; 
v_i_boxed_3699_ = lean_unbox_usize(v_i_3696_);
lean_dec(v_i_3696_);
v_stop_boxed_3700_ = lean_unbox_usize(v_stop_3697_);
lean_dec(v_stop_3697_);
v_res_3701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__1(v_00_u03b1_3694_, v_as_3695_, v_i_boxed_3699_, v_stop_boxed_3700_, v_b_3698_);
lean_dec_ref(v_as_3695_);
return v_res_3701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(lean_object* v_00_u03b1_3702_, lean_object* v_n_3703_, lean_object* v_aa_3704_, lean_object* v_n_3705_, lean_object* v_j_3706_, lean_object* v_a_3707_, lean_object* v_a_3708_){
_start:
{
lean_object* v___x_3709_; 
v___x_3709_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___redArg(v_n_3703_, v_aa_3704_, v_n_3705_, v_j_3706_, v_a_3708_);
return v___x_3709_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3710_, lean_object* v_n_3711_, lean_object* v_aa_3712_, lean_object* v_n_3713_, lean_object* v_j_3714_, lean_object* v_a_3715_, lean_object* v_a_3716_){
_start:
{
lean_object* v_res_3717_; 
v_res_3717_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResults_spec__0_spec__2(v_00_u03b1_3710_, v_n_3711_, v_aa_3712_, v_n_3713_, v_j_3714_, v_a_3715_, v_a_3716_);
lean_dec(v_n_3713_);
lean_dec_ref(v_aa_3712_);
lean_dec(v_n_3711_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(lean_object* v_snd_3725_, lean_object* v___x_3726_, lean_object* v_score_3727_, lean_object* v___x_3728_, lean_object* v_k_3729_, lean_object* v_args_3730_, lean_object* v_cases_3731_){
_start:
{
lean_object* v___x_3732_; 
v___x_3732_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_snd_3725_, v_k_3729_);
if (lean_obj_tag(v___x_3732_) == 0)
{
lean_dec_ref(v___x_3726_);
return v_cases_3731_;
}
else
{
lean_object* v_val_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; 
v_val_3733_ = lean_ctor_get(v___x_3732_, 0);
lean_inc(v_val_3733_);
lean_dec_ref(v___x_3732_);
v___x_3734_ = l_Array_append___redArg(v___x_3726_, v_args_3730_);
v___x_3735_ = lean_nat_add(v_score_3727_, v___x_3728_);
v___x_3736_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3734_);
lean_ctor_set(v___x_3736_, 1, v___x_3735_);
lean_ctor_set(v___x_3736_, 2, v_val_3733_);
v___x_3737_ = lean_array_push(v_cases_3731_, v___x_3736_);
return v___x_3737_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed(lean_object* v_snd_3738_, lean_object* v___x_3739_, lean_object* v_score_3740_, lean_object* v___x_3741_, lean_object* v_k_3742_, lean_object* v_args_3743_, lean_object* v_cases_3744_){
_start:
{
lean_object* v_res_3745_; 
v_res_3745_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0(v_snd_3738_, v___x_3739_, v_score_3740_, v___x_3741_, v_k_3742_, v_args_3743_, v_cases_3744_);
lean_dec_ref(v_args_3743_);
lean_dec(v_k_3742_);
lean_dec(v___x_3741_);
lean_dec(v_score_3740_);
lean_dec_ref(v_snd_3738_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(lean_object* v_cases_3746_, lean_object* v_result_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_, lean_object* v_a_3751_, lean_object* v_a_3752_){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; uint8_t v___x_3756_; 
v___x_3754_ = lean_array_get_size(v_cases_3746_);
v___x_3755_ = lean_unsigned_to_nat(0u);
v___x_3756_ = lean_nat_dec_eq(v___x_3754_, v___x_3755_);
if (v___x_3756_ == 0)
{
lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v_ca_3760_; lean_object* v_todo_3761_; lean_object* v_score_3762_; lean_object* v_c_3763_; lean_object* v___x_3765_; uint8_t v_isShared_3766_; uint8_t v_isSharedCheck_3829_; 
v___x_3757_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPartialMatch_default));
v___x_3758_ = lean_unsigned_to_nat(1u);
v___x_3759_ = lean_nat_sub(v___x_3754_, v___x_3758_);
v_ca_3760_ = lean_array_get(v___x_3757_, v_cases_3746_, v___x_3759_);
lean_dec(v___x_3759_);
v_todo_3761_ = lean_ctor_get(v_ca_3760_, 0);
v_score_3762_ = lean_ctor_get(v_ca_3760_, 1);
v_c_3763_ = lean_ctor_get(v_ca_3760_, 2);
v_isSharedCheck_3829_ = !lean_is_exclusive(v_ca_3760_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3765_ = v_ca_3760_;
v_isShared_3766_ = v_isSharedCheck_3829_;
goto v_resetjp_3764_;
}
else
{
lean_inc(v_c_3763_);
lean_inc(v_score_3762_);
lean_inc(v_todo_3761_);
lean_dec(v_ca_3760_);
v___x_3765_ = lean_box(0);
v_isShared_3766_ = v_isSharedCheck_3829_;
goto v_resetjp_3764_;
}
v_resetjp_3764_:
{
lean_object* v___x_3767_; 
v___x_3767_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_c_3763_, v_a_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
lean_dec(v_c_3763_);
if (lean_obj_tag(v___x_3767_) == 0)
{
lean_object* v_a_3768_; uint8_t v___y_3770_; lean_object* v___y_3771_; lean_object* v___y_3772_; lean_object* v___y_3773_; lean_object* v_snd_3796_; lean_object* v_fst_3797_; lean_object* v_fst_3798_; lean_object* v_snd_3799_; lean_object* v_cases_3800_; lean_object* v___x_3801_; uint8_t v___y_3803_; uint8_t v___x_3815_; 
v_a_3768_ = lean_ctor_get(v___x_3767_, 0);
lean_inc(v_a_3768_);
lean_dec_ref(v___x_3767_);
v_snd_3796_ = lean_ctor_get(v_a_3768_, 1);
lean_inc(v_snd_3796_);
v_fst_3797_ = lean_ctor_get(v_a_3768_, 0);
lean_inc(v_fst_3797_);
lean_dec(v_a_3768_);
v_fst_3798_ = lean_ctor_get(v_snd_3796_, 0);
lean_inc(v_fst_3798_);
v_snd_3799_ = lean_ctor_get(v_snd_3796_, 1);
lean_inc(v_snd_3799_);
lean_dec(v_snd_3796_);
v_cases_3800_ = lean_array_pop(v_cases_3746_);
v___x_3801_ = lean_array_get_size(v_todo_3761_);
v___x_3815_ = lean_nat_dec_eq(v___x_3801_, v___x_3755_);
if (v___x_3815_ == 0)
{
uint8_t v___x_3816_; 
lean_dec(v_fst_3797_);
v___x_3816_ = lean_nat_dec_eq(v_fst_3798_, v___x_3755_);
if (v___x_3816_ == 0)
{
v___y_3803_ = v___x_3816_;
goto v___jp_3802_;
}
else
{
lean_object* v_size_3817_; uint8_t v___x_3818_; 
v_size_3817_ = lean_ctor_get(v_snd_3799_, 0);
v___x_3818_ = lean_nat_dec_eq(v_size_3817_, v___x_3755_);
v___y_3803_ = v___x_3818_;
goto v___jp_3802_;
}
}
else
{
lean_object* v___x_3819_; 
lean_dec(v_snd_3799_);
lean_dec(v_fst_3798_);
lean_del_object(v___x_3765_);
lean_dec_ref(v_todo_3761_);
v___x_3819_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v_result_3747_, v_score_3762_, v_fst_3797_);
lean_dec(v_score_3762_);
v_cases_3746_ = v_cases_3800_;
v_result_3747_ = v___x_3819_;
goto _start;
}
v___jp_3769_:
{
uint8_t v___x_3774_; lean_object* v___x_3775_; 
v___x_3774_ = 1;
v___x_3775_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v___y_3771_, v___x_3774_, v___y_3770_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_);
if (lean_obj_tag(v___x_3775_) == 0)
{
lean_object* v_a_3776_; lean_object* v_fst_3777_; 
v_a_3776_ = lean_ctor_get(v___x_3775_, 0);
lean_inc(v_a_3776_);
lean_dec_ref(v___x_3775_);
v_fst_3777_ = lean_ctor_get(v_a_3776_, 0);
lean_inc(v_fst_3777_);
switch(lean_obj_tag(v_fst_3777_))
{
case 3:
{
lean_dec(v_a_3776_);
lean_dec_ref(v___y_3772_);
v_cases_3746_ = v___y_3773_;
goto _start;
}
case 5:
{
lean_object* v_snd_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; 
v_snd_3779_ = lean_ctor_get(v_a_3776_, 1);
lean_inc(v_snd_3779_);
lean_dec(v_a_3776_);
v___x_3780_ = lean_box(4);
v___x_3781_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
lean_inc_ref(v___y_3772_);
v___x_3782_ = lean_apply_3(v___y_3772_, v___x_3780_, v___x_3781_, v___y_3773_);
v___x_3783_ = lean_apply_3(v___y_3772_, v_fst_3777_, v_snd_3779_, v___x_3782_);
v_cases_3746_ = v___x_3783_;
goto _start;
}
default: 
{
lean_object* v_snd_3785_; lean_object* v___x_3786_; 
v_snd_3785_ = lean_ctor_get(v_a_3776_, 1);
lean_inc(v_snd_3785_);
lean_dec(v_a_3776_);
v___x_3786_ = lean_apply_3(v___y_3772_, v_fst_3777_, v_snd_3785_, v___y_3773_);
v_cases_3746_ = v___x_3786_;
goto _start;
}
}
}
else
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3795_; 
lean_dec_ref(v___y_3773_);
lean_dec_ref(v___y_3772_);
lean_dec_ref(v_result_3747_);
v_a_3788_ = lean_ctor_get(v___x_3775_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3775_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3790_ = v___x_3775_;
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3775_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3793_; 
if (v_isShared_3791_ == 0)
{
v___x_3793_ = v___x_3790_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_a_3788_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
}
v___jp_3802_:
{
if (v___y_3803_ == 0)
{
lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___f_3808_; uint8_t v___x_3809_; 
v___x_3804_ = l_Lean_instInhabitedExpr;
v___x_3805_ = lean_nat_sub(v___x_3801_, v___x_3758_);
v___x_3806_ = lean_array_get(v___x_3804_, v_todo_3761_, v___x_3805_);
lean_dec(v___x_3805_);
v___x_3807_ = lean_array_pop(v_todo_3761_);
lean_inc(v_score_3762_);
lean_inc_ref(v___x_3807_);
v___f_3808_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___lam__0___boxed), 7, 4);
lean_closure_set(v___f_3808_, 0, v_snd_3799_);
lean_closure_set(v___f_3808_, 1, v___x_3807_);
lean_closure_set(v___f_3808_, 2, v_score_3762_);
lean_closure_set(v___f_3808_, 3, v___x_3758_);
v___x_3809_ = lean_nat_dec_eq(v_fst_3798_, v___x_3755_);
if (v___x_3809_ == 0)
{
lean_object* v___x_3811_; 
if (v_isShared_3766_ == 0)
{
lean_ctor_set(v___x_3765_, 2, v_fst_3798_);
lean_ctor_set(v___x_3765_, 0, v___x_3807_);
v___x_3811_ = v___x_3765_;
goto v_reusejp_3810_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v___x_3807_);
lean_ctor_set(v_reuseFailAlloc_3813_, 1, v_score_3762_);
lean_ctor_set(v_reuseFailAlloc_3813_, 2, v_fst_3798_);
v___x_3811_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3810_;
}
v_reusejp_3810_:
{
lean_object* v___x_3812_; 
v___x_3812_ = lean_array_push(v_cases_3800_, v___x_3811_);
v___y_3770_ = v___y_3803_;
v___y_3771_ = v___x_3806_;
v___y_3772_ = v___f_3808_;
v___y_3773_ = v___x_3812_;
goto v___jp_3769_;
}
}
else
{
lean_dec_ref(v___x_3807_);
lean_dec(v_fst_3798_);
lean_del_object(v___x_3765_);
lean_dec(v_score_3762_);
v___y_3770_ = v___y_3803_;
v___y_3771_ = v___x_3806_;
v___y_3772_ = v___f_3808_;
v___y_3773_ = v_cases_3800_;
goto v___jp_3769_;
}
}
else
{
lean_dec(v_snd_3799_);
lean_dec(v_fst_3798_);
lean_del_object(v___x_3765_);
lean_dec(v_score_3762_);
lean_dec_ref(v_todo_3761_);
v_cases_3746_ = v_cases_3800_;
goto _start;
}
}
}
else
{
lean_object* v_a_3821_; lean_object* v___x_3823_; uint8_t v_isShared_3824_; uint8_t v_isSharedCheck_3828_; 
lean_del_object(v___x_3765_);
lean_dec(v_score_3762_);
lean_dec_ref(v_todo_3761_);
lean_dec_ref(v_result_3747_);
lean_dec_ref(v_cases_3746_);
v_a_3821_ = lean_ctor_get(v___x_3767_, 0);
v_isSharedCheck_3828_ = !lean_is_exclusive(v___x_3767_);
if (v_isSharedCheck_3828_ == 0)
{
v___x_3823_ = v___x_3767_;
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
else
{
lean_inc(v_a_3821_);
lean_dec(v___x_3767_);
v___x_3823_ = lean_box(0);
v_isShared_3824_ = v_isSharedCheck_3828_;
goto v_resetjp_3822_;
}
v_resetjp_3822_:
{
lean_object* v___x_3826_; 
if (v_isShared_3824_ == 0)
{
v___x_3826_ = v___x_3823_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3827_; 
v_reuseFailAlloc_3827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3827_, 0, v_a_3821_);
v___x_3826_ = v_reuseFailAlloc_3827_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
return v___x_3826_;
}
}
}
}
}
else
{
lean_object* v___x_3830_; 
lean_dec_ref(v_cases_3746_);
v___x_3830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3830_, 0, v_result_3747_);
return v___x_3830_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg___boxed(lean_object* v_cases_3831_, lean_object* v_result_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_){
_start:
{
lean_object* v_res_3839_; 
v_res_3839_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v_cases_3831_, v_result_3832_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_, v_a_3837_);
lean_dec(v_a_3837_);
lean_dec_ref(v_a_3836_);
lean_dec(v_a_3835_);
lean_dec_ref(v_a_3834_);
lean_dec(v_a_3833_);
return v_res_3839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop(lean_object* v_00_u03b1_3840_, lean_object* v_cases_3841_, lean_object* v_result_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_, lean_object* v_a_3846_, lean_object* v_a_3847_){
_start:
{
lean_object* v___x_3849_; 
v___x_3849_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v_cases_3841_, v_result_3842_, v_a_3843_, v_a_3844_, v_a_3845_, v_a_3846_, v_a_3847_);
return v___x_3849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchLoop___boxed(lean_object* v_00_u03b1_3850_, lean_object* v_cases_3851_, lean_object* v_result_3852_, lean_object* v_a_3853_, lean_object* v_a_3854_, lean_object* v_a_3855_, lean_object* v_a_3856_, lean_object* v_a_3857_, lean_object* v_a_3858_){
_start:
{
lean_object* v_res_3859_; 
v_res_3859_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop(v_00_u03b1_3850_, v_cases_3851_, v_result_3852_, v_a_3853_, v_a_3854_, v_a_3855_, v_a_3856_, v_a_3857_);
lean_dec(v_a_3857_);
lean_dec_ref(v_a_3856_);
lean_dec(v_a_3855_);
lean_dec_ref(v_a_3854_);
lean_dec(v_a_3853_);
return v_res_3859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(lean_object* v_root_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_, lean_object* v_a_3865_, lean_object* v_a_3866_, lean_object* v_a_3867_){
_start:
{
lean_object* v___x_3869_; lean_object* v___x_3870_; 
v___x_3869_ = lean_box(3);
v___x_3870_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_root_3862_, v___x_3869_);
if (lean_obj_tag(v___x_3870_) == 0)
{
lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3871_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0));
v___x_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3872_, 0, v___x_3871_);
return v___x_3872_;
}
else
{
lean_object* v_val_3873_; lean_object* v___x_3874_; 
v_val_3873_ = lean_ctor_get(v___x_3870_, 0);
lean_inc(v_val_3873_);
lean_dec_ref(v___x_3870_);
v___x_3874_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_val_3873_, v_a_3863_, v_a_3864_, v_a_3865_, v_a_3866_, v_a_3867_);
lean_dec(v_val_3873_);
if (lean_obj_tag(v___x_3874_) == 0)
{
lean_object* v_a_3875_; lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3886_; 
v_a_3875_ = lean_ctor_get(v___x_3874_, 0);
v_isSharedCheck_3886_ = !lean_is_exclusive(v___x_3874_);
if (v_isSharedCheck_3886_ == 0)
{
v___x_3877_ = v___x_3874_;
v_isShared_3878_ = v_isSharedCheck_3886_;
goto v_resetjp_3876_;
}
else
{
lean_inc(v_a_3875_);
lean_dec(v___x_3874_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3886_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v_fst_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3884_; 
v_fst_3879_ = lean_ctor_get(v_a_3875_, 0);
lean_inc(v_fst_3879_);
lean_dec(v_a_3875_);
v___x_3880_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___closed__0));
v___x_3881_ = lean_unsigned_to_nat(1u);
v___x_3882_ = l_Lean_Meta_LazyDiscrTree_MatchResult_push___redArg(v___x_3880_, v___x_3881_, v_fst_3879_);
if (v_isShared_3878_ == 0)
{
lean_ctor_set(v___x_3877_, 0, v___x_3882_);
v___x_3884_ = v___x_3877_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v___x_3882_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
return v___x_3884_;
}
}
}
else
{
lean_object* v_a_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3894_; 
v_a_3887_ = lean_ctor_get(v___x_3874_, 0);
v_isSharedCheck_3894_ = !lean_is_exclusive(v___x_3874_);
if (v_isSharedCheck_3894_ == 0)
{
v___x_3889_ = v___x_3874_;
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_a_3887_);
lean_dec(v___x_3874_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3894_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3892_; 
if (v_isShared_3890_ == 0)
{
v___x_3892_ = v___x_3889_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v_a_3887_);
v___x_3892_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
return v___x_3892_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___redArg___boxed(lean_object* v_root_3895_, lean_object* v_a_3896_, lean_object* v_a_3897_, lean_object* v_a_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_){
_start:
{
lean_object* v_res_3902_; 
v_res_3902_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3895_, v_a_3896_, v_a_3897_, v_a_3898_, v_a_3899_, v_a_3900_);
lean_dec(v_a_3900_);
lean_dec_ref(v_a_3899_);
lean_dec(v_a_3898_);
lean_dec_ref(v_a_3897_);
lean_dec(v_a_3896_);
lean_dec_ref(v_root_3895_);
return v_res_3902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult(lean_object* v_00_u03b1_3903_, lean_object* v_root_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_){
_start:
{
lean_object* v___x_3911_; 
v___x_3911_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3904_, v_a_3905_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_);
return v___x_3911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getStarResult___boxed(lean_object* v_00_u03b1_3912_, lean_object* v_root_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_, lean_object* v_a_3919_){
_start:
{
lean_object* v_res_3920_; 
v_res_3920_ = l_Lean_Meta_LazyDiscrTree_getStarResult(v_00_u03b1_3912_, v_root_3913_, v_a_3914_, v_a_3915_, v_a_3916_, v_a_3917_, v_a_3918_);
lean_dec(v_a_3918_);
lean_dec_ref(v_a_3917_);
lean_dec(v_a_3916_);
lean_dec_ref(v_a_3915_);
lean_dec(v_a_3914_);
lean_dec_ref(v_root_3913_);
return v_res_3920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase(lean_object* v_r_3921_, lean_object* v_k_3922_, lean_object* v_args_3923_, lean_object* v_cases_3924_){
_start:
{
lean_object* v___x_3925_; 
v___x_3925_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_r_3921_, v_k_3922_);
if (lean_obj_tag(v___x_3925_) == 0)
{
lean_dec_ref(v_args_3923_);
return v_cases_3924_;
}
else
{
lean_object* v_val_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; 
v_val_3926_ = lean_ctor_get(v___x_3925_, 0);
lean_inc(v_val_3926_);
lean_dec_ref(v___x_3925_);
v___x_3927_ = lean_unsigned_to_nat(1u);
v___x_3928_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3928_, 0, v_args_3923_);
lean_ctor_set(v___x_3928_, 1, v___x_3927_);
lean_ctor_set(v___x_3928_, 2, v_val_3926_);
v___x_3929_ = lean_array_push(v_cases_3924_, v___x_3928_);
return v___x_3929_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_pushRootCase___boxed(lean_object* v_r_3930_, lean_object* v_k_3931_, lean_object* v_args_3932_, lean_object* v_cases_3933_){
_start:
{
lean_object* v_res_3934_; 
v_res_3934_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_r_3930_, v_k_3931_, v_args_3932_, v_cases_3933_);
lean_dec(v_k_3931_);
lean_dec_ref(v_r_3930_);
return v_res_3934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(lean_object* v_root_3937_, lean_object* v_e_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_, lean_object* v_a_3942_, lean_object* v_a_3943_){
_start:
{
lean_object* v___x_3945_; 
v___x_3945_ = l_Lean_Meta_LazyDiscrTree_getStarResult___redArg(v_root_3937_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_, v_a_3943_);
if (lean_obj_tag(v___x_3945_) == 0)
{
lean_object* v_a_3946_; uint8_t v___x_3947_; lean_object* v___x_3948_; 
v_a_3946_ = lean_ctor_get(v___x_3945_, 0);
lean_inc(v_a_3946_);
lean_dec_ref(v___x_3945_);
v___x_3947_ = 1;
v___x_3948_ = l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs(v_e_3938_, v___x_3947_, v___x_3947_, v_a_3940_, v_a_3941_, v_a_3942_, v_a_3943_);
if (lean_obj_tag(v___x_3948_) == 0)
{
lean_object* v_a_3949_; lean_object* v_fst_3950_; 
v_a_3949_ = lean_ctor_get(v___x_3948_, 0);
lean_inc(v_a_3949_);
lean_dec_ref(v___x_3948_);
v_fst_3950_ = lean_ctor_get(v_a_3949_, 0);
lean_inc(v_fst_3950_);
switch(lean_obj_tag(v_fst_3950_))
{
case 3:
{
lean_object* v___x_3951_; lean_object* v___x_3952_; 
lean_dec(v_a_3949_);
v___x_3951_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0));
v___x_3952_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_3951_, v_a_3946_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_, v_a_3943_);
return v___x_3952_;
}
case 5:
{
lean_object* v_snd_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; 
v_snd_3953_ = lean_ctor_get(v_a_3949_, 1);
lean_inc(v_snd_3953_);
lean_dec(v_a_3949_);
v___x_3954_ = lean_box(4);
v___x_3955_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchClone_getKeyArgs___closed__0));
v___x_3956_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_3937_, v___x_3954_, v___x_3955_, v___x_3955_);
v___x_3957_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_3937_, v_fst_3950_, v_snd_3953_, v___x_3956_);
v___x_3958_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_3957_, v_a_3946_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_, v_a_3943_);
return v___x_3958_;
}
default: 
{
lean_object* v_snd_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; 
v_snd_3959_ = lean_ctor_get(v_a_3949_, 1);
lean_inc(v_snd_3959_);
lean_dec(v_a_3949_);
v___x_3960_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___closed__0));
v___x_3961_ = l_Lean_Meta_LazyDiscrTree_pushRootCase(v_root_3937_, v_fst_3950_, v_snd_3959_, v___x_3960_);
lean_dec(v_fst_3950_);
v___x_3962_ = l_Lean_Meta_LazyDiscrTree_getMatchLoop___redArg(v___x_3961_, v_a_3946_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_, v_a_3943_);
return v___x_3962_;
}
}
}
else
{
lean_object* v_a_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_3970_; 
lean_dec(v_a_3946_);
v_a_3963_ = lean_ctor_get(v___x_3948_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v___x_3948_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3965_ = v___x_3948_;
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_a_3963_);
lean_dec(v___x_3948_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v___x_3968_; 
if (v_isShared_3966_ == 0)
{
v___x_3968_ = v___x_3965_;
goto v_reusejp_3967_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_a_3963_);
v___x_3968_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3967_;
}
v_reusejp_3967_:
{
return v___x_3968_;
}
}
}
}
else
{
lean_dec_ref(v_e_3938_);
return v___x_3945_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg___boxed(lean_object* v_root_3971_, lean_object* v_e_3972_, lean_object* v_a_3973_, lean_object* v_a_3974_, lean_object* v_a_3975_, lean_object* v_a_3976_, lean_object* v_a_3977_, lean_object* v_a_3978_){
_start:
{
lean_object* v_res_3979_; 
v_res_3979_ = l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(v_root_3971_, v_e_3972_, v_a_3973_, v_a_3974_, v_a_3975_, v_a_3976_, v_a_3977_);
lean_dec(v_a_3977_);
lean_dec_ref(v_a_3976_);
lean_dec(v_a_3975_);
lean_dec_ref(v_a_3974_);
lean_dec(v_a_3973_);
lean_dec_ref(v_root_3971_);
return v_res_3979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore(lean_object* v_00_u03b1_3980_, lean_object* v_root_3981_, lean_object* v_e_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_){
_start:
{
lean_object* v___x_3989_; 
v___x_3989_ = l_Lean_Meta_LazyDiscrTree_getMatchCore___redArg(v_root_3981_, v_e_3982_, v_a_3983_, v_a_3984_, v_a_3985_, v_a_3986_, v_a_3987_);
return v___x_3989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed(lean_object* v_00_u03b1_3990_, lean_object* v_root_3991_, lean_object* v_e_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_, lean_object* v_a_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l_Lean_Meta_LazyDiscrTree_getMatchCore(v_00_u03b1_3990_, v_root_3991_, v_e_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_);
lean_dec(v_a_3997_);
lean_dec_ref(v_a_3996_);
lean_dec(v_a_3995_);
lean_dec_ref(v_a_3994_);
lean_dec(v_a_3993_);
lean_dec_ref(v_root_3991_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg(lean_object* v_d_4000_, lean_object* v_e_4001_, lean_object* v_a_4002_, lean_object* v_a_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_){
_start:
{
lean_object* v_roots_4007_; lean_object* v___x_4008_; uint8_t v_foApprox_4009_; uint8_t v_ctxApprox_4010_; uint8_t v_quasiPatternApprox_4011_; uint8_t v_constApprox_4012_; uint8_t v_isDefEqStuckEx_4013_; uint8_t v_unificationHints_4014_; uint8_t v_proofIrrelevance_4015_; uint8_t v_assignSyntheticOpaque_4016_; uint8_t v_offsetCnstrs_4017_; uint8_t v_etaStruct_4018_; uint8_t v_univApprox_4019_; uint8_t v_iota_4020_; uint8_t v_beta_4021_; uint8_t v_proj_4022_; uint8_t v_zeta_4023_; uint8_t v_zetaDelta_4024_; uint8_t v_zetaUnused_4025_; uint8_t v_zetaHave_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4054_; 
v_roots_4007_ = lean_ctor_get(v_d_4000_, 1);
v___x_4008_ = l_Lean_Meta_Context_config(v_a_4002_);
v_foApprox_4009_ = lean_ctor_get_uint8(v___x_4008_, 0);
v_ctxApprox_4010_ = lean_ctor_get_uint8(v___x_4008_, 1);
v_quasiPatternApprox_4011_ = lean_ctor_get_uint8(v___x_4008_, 2);
v_constApprox_4012_ = lean_ctor_get_uint8(v___x_4008_, 3);
v_isDefEqStuckEx_4013_ = lean_ctor_get_uint8(v___x_4008_, 4);
v_unificationHints_4014_ = lean_ctor_get_uint8(v___x_4008_, 5);
v_proofIrrelevance_4015_ = lean_ctor_get_uint8(v___x_4008_, 6);
v_assignSyntheticOpaque_4016_ = lean_ctor_get_uint8(v___x_4008_, 7);
v_offsetCnstrs_4017_ = lean_ctor_get_uint8(v___x_4008_, 8);
v_etaStruct_4018_ = lean_ctor_get_uint8(v___x_4008_, 10);
v_univApprox_4019_ = lean_ctor_get_uint8(v___x_4008_, 11);
v_iota_4020_ = lean_ctor_get_uint8(v___x_4008_, 12);
v_beta_4021_ = lean_ctor_get_uint8(v___x_4008_, 13);
v_proj_4022_ = lean_ctor_get_uint8(v___x_4008_, 14);
v_zeta_4023_ = lean_ctor_get_uint8(v___x_4008_, 15);
v_zetaDelta_4024_ = lean_ctor_get_uint8(v___x_4008_, 16);
v_zetaUnused_4025_ = lean_ctor_get_uint8(v___x_4008_, 17);
v_zetaHave_4026_ = lean_ctor_get_uint8(v___x_4008_, 18);
v_isSharedCheck_4054_ = !lean_is_exclusive(v___x_4008_);
if (v_isSharedCheck_4054_ == 0)
{
v___x_4028_ = v___x_4008_;
v_isShared_4029_ = v_isSharedCheck_4054_;
goto v_resetjp_4027_;
}
else
{
lean_dec(v___x_4008_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4054_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
uint8_t v_trackZetaDelta_4030_; lean_object* v_zetaDeltaSet_4031_; lean_object* v_lctx_4032_; lean_object* v_localInstances_4033_; lean_object* v_defEqCtx_x3f_4034_; lean_object* v_synthPendingDepth_4035_; lean_object* v_canUnfold_x3f_4036_; uint8_t v_univApprox_4037_; uint8_t v_inTypeClassResolution_4038_; uint8_t v_cacheInferType_4039_; uint8_t v___x_4040_; lean_object* v_config_4042_; 
v_trackZetaDelta_4030_ = lean_ctor_get_uint8(v_a_4002_, sizeof(void*)*7);
v_zetaDeltaSet_4031_ = lean_ctor_get(v_a_4002_, 1);
v_lctx_4032_ = lean_ctor_get(v_a_4002_, 2);
v_localInstances_4033_ = lean_ctor_get(v_a_4002_, 3);
v_defEqCtx_x3f_4034_ = lean_ctor_get(v_a_4002_, 4);
v_synthPendingDepth_4035_ = lean_ctor_get(v_a_4002_, 5);
v_canUnfold_x3f_4036_ = lean_ctor_get(v_a_4002_, 6);
v_univApprox_4037_ = lean_ctor_get_uint8(v_a_4002_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4038_ = lean_ctor_get_uint8(v_a_4002_, sizeof(void*)*7 + 2);
v_cacheInferType_4039_ = lean_ctor_get_uint8(v_a_4002_, sizeof(void*)*7 + 3);
v___x_4040_ = 2;
if (v_isShared_4029_ == 0)
{
v_config_4042_ = v___x_4028_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4053_; 
v_reuseFailAlloc_4053_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 0, v_foApprox_4009_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 1, v_ctxApprox_4010_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 2, v_quasiPatternApprox_4011_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 3, v_constApprox_4012_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 4, v_isDefEqStuckEx_4013_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 5, v_unificationHints_4014_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 6, v_proofIrrelevance_4015_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 7, v_assignSyntheticOpaque_4016_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 8, v_offsetCnstrs_4017_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 10, v_etaStruct_4018_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 11, v_univApprox_4019_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 12, v_iota_4020_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 13, v_beta_4021_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 14, v_proj_4022_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 15, v_zeta_4023_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 16, v_zetaDelta_4024_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 17, v_zetaUnused_4025_);
lean_ctor_set_uint8(v_reuseFailAlloc_4053_, 18, v_zetaHave_4026_);
v_config_4042_ = v_reuseFailAlloc_4053_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
uint64_t v___x_4043_; uint64_t v___x_4044_; uint64_t v___x_4045_; lean_object* v___x_4046_; uint64_t v___x_4047_; uint64_t v___x_4048_; uint64_t v_key_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; 
lean_ctor_set_uint8(v_config_4042_, 9, v___x_4040_);
v___x_4043_ = l_Lean_Meta_Context_configKey(v_a_4002_);
v___x_4044_ = 2ULL;
v___x_4045_ = lean_uint64_shift_right(v___x_4043_, v___x_4044_);
lean_inc_ref(v_roots_4007_);
v___x_4046_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getMatchCore___boxed), 9, 3);
lean_closure_set(v___x_4046_, 0, lean_box(0));
lean_closure_set(v___x_4046_, 1, v_roots_4007_);
lean_closure_set(v___x_4046_, 2, v_e_4001_);
v___x_4047_ = lean_uint64_shift_left(v___x_4045_, v___x_4044_);
v___x_4048_ = lean_uint64_once(&l_Lean_Meta_LazyDiscrTree_runMatch___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_runMatch___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_runMatch___redArg___closed__0);
v_key_4049_ = lean_uint64_lor(v___x_4047_, v___x_4048_);
v___x_4050_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4050_, 0, v_config_4042_);
lean_ctor_set_uint64(v___x_4050_, sizeof(void*)*1, v_key_4049_);
lean_inc(v_canUnfold_x3f_4036_);
lean_inc(v_synthPendingDepth_4035_);
lean_inc(v_defEqCtx_x3f_4034_);
lean_inc_ref(v_localInstances_4033_);
lean_inc_ref(v_lctx_4032_);
lean_inc(v_zetaDeltaSet_4031_);
v___x_4051_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4051_, 0, v___x_4050_);
lean_ctor_set(v___x_4051_, 1, v_zetaDeltaSet_4031_);
lean_ctor_set(v___x_4051_, 2, v_lctx_4032_);
lean_ctor_set(v___x_4051_, 3, v_localInstances_4033_);
lean_ctor_set(v___x_4051_, 4, v_defEqCtx_x3f_4034_);
lean_ctor_set(v___x_4051_, 5, v_synthPendingDepth_4035_);
lean_ctor_set(v___x_4051_, 6, v_canUnfold_x3f_4036_);
lean_ctor_set_uint8(v___x_4051_, sizeof(void*)*7, v_trackZetaDelta_4030_);
lean_ctor_set_uint8(v___x_4051_, sizeof(void*)*7 + 1, v_univApprox_4037_);
lean_ctor_set_uint8(v___x_4051_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4038_);
lean_ctor_set_uint8(v___x_4051_, sizeof(void*)*7 + 3, v_cacheInferType_4039_);
v___x_4052_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_d_4000_, v___x_4046_, v___x_4051_, v_a_4003_, v_a_4004_, v_a_4005_);
lean_dec_ref(v___x_4051_);
return v___x_4052_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___redArg___boxed(lean_object* v_d_4055_, lean_object* v_e_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_){
_start:
{
lean_object* v_res_4062_; 
v_res_4062_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_d_4055_, v_e_4056_, v_a_4057_, v_a_4058_, v_a_4059_, v_a_4060_);
lean_dec(v_a_4060_);
lean_dec_ref(v_a_4059_);
lean_dec(v_a_4058_);
lean_dec_ref(v_a_4057_);
return v_res_4062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch(lean_object* v_00_u03b1_4063_, lean_object* v_d_4064_, lean_object* v_e_4065_, lean_object* v_a_4066_, lean_object* v_a_4067_, lean_object* v_a_4068_, lean_object* v_a_4069_){
_start:
{
lean_object* v___x_4071_; 
v___x_4071_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_d_4064_, v_e_4065_, v_a_4066_, v_a_4067_, v_a_4068_, v_a_4069_);
return v___x_4071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getMatch___boxed(lean_object* v_00_u03b1_4072_, lean_object* v_d_4073_, lean_object* v_e_4074_, lean_object* v_a_4075_, lean_object* v_a_4076_, lean_object* v_a_4077_, lean_object* v_a_4078_, lean_object* v_a_4079_){
_start:
{
lean_object* v_res_4080_; 
v_res_4080_ = l_Lean_Meta_LazyDiscrTree_getMatch(v_00_u03b1_4072_, v_d_4073_, v_e_4074_, v_a_4075_, v_a_4076_, v_a_4077_, v_a_4078_);
lean_dec(v_a_4078_);
lean_dec_ref(v_a_4077_);
lean_dec(v_a_4076_);
lean_dec_ref(v_a_4075_);
return v_res_4080_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__1(void){
_start:
{
lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; 
v___x_4083_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__0));
v___x_4084_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2);
v___x_4085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4085_, 0, v___x_4084_);
lean_ctor_set(v___x_4085_, 1, v___x_4083_);
return v___x_4085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default(lean_object* v_a_4086_){
_start:
{
lean_object* v___x_4087_; 
v___x_4087_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default___closed__1);
return v___x_4087_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___closed__0(void){
_start:
{
lean_object* v___x_4088_; 
v___x_4088_ = l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree_default(lean_box(0));
return v___x_4088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree(lean_object* v_a_4089_){
_start:
{
lean_object* v___x_4090_; 
v___x_4090_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedPreDiscrTree___closed__0);
return v___x_4090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(lean_object* v_d_4091_, lean_object* v_k_4092_, lean_object* v_f_4093_){
_start:
{
lean_object* v_roots_4094_; lean_object* v_tries_4095_; lean_object* v___x_4096_; 
v_roots_4094_ = lean_ctor_get(v_d_4091_, 0);
v_tries_4095_ = lean_ctor_get(v_d_4091_, 1);
v___x_4096_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__1___redArg(v_roots_4094_, v_k_4092_);
if (lean_obj_tag(v___x_4096_) == 0)
{
lean_object* v___x_4098_; uint8_t v_isShared_4099_; uint8_t v_isSharedCheck_4108_; 
lean_inc_ref(v_tries_4095_);
lean_inc_ref(v_roots_4094_);
v_isSharedCheck_4108_ = !lean_is_exclusive(v_d_4091_);
if (v_isSharedCheck_4108_ == 0)
{
lean_object* v_unused_4109_; lean_object* v_unused_4110_; 
v_unused_4109_ = lean_ctor_get(v_d_4091_, 1);
lean_dec(v_unused_4109_);
v_unused_4110_ = lean_ctor_get(v_d_4091_, 0);
lean_dec(v_unused_4110_);
v___x_4098_ = v_d_4091_;
v_isShared_4099_ = v_isSharedCheck_4108_;
goto v_resetjp_4097_;
}
else
{
lean_dec(v_d_4091_);
v___x_4098_ = lean_box(0);
v_isShared_4099_ = v_isSharedCheck_4108_;
goto v_resetjp_4097_;
}
v_resetjp_4097_:
{
lean_object* v___x_4100_; lean_object* v_roots_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4106_; 
v___x_4100_ = lean_array_get_size(v_tries_4095_);
v_roots_4101_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_roots_4094_, v_k_4092_, v___x_4100_);
v___x_4102_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_evalNode___redArg___closed__0));
v___x_4103_ = lean_apply_1(v_f_4093_, v___x_4102_);
v___x_4104_ = lean_array_push(v_tries_4095_, v___x_4103_);
if (v_isShared_4099_ == 0)
{
lean_ctor_set(v___x_4098_, 1, v___x_4104_);
lean_ctor_set(v___x_4098_, 0, v_roots_4101_);
v___x_4106_ = v___x_4098_;
goto v_reusejp_4105_;
}
else
{
lean_object* v_reuseFailAlloc_4107_; 
v_reuseFailAlloc_4107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4107_, 0, v_roots_4101_);
lean_ctor_set(v_reuseFailAlloc_4107_, 1, v___x_4104_);
v___x_4106_ = v_reuseFailAlloc_4107_;
goto v_reusejp_4105_;
}
v_reusejp_4105_:
{
return v___x_4106_;
}
}
}
else
{
lean_object* v_val_4111_; lean_object* v___x_4112_; uint8_t v___x_4113_; 
lean_dec(v_k_4092_);
v_val_4111_ = lean_ctor_get(v___x_4096_, 0);
lean_inc(v_val_4111_);
lean_dec_ref(v___x_4096_);
v___x_4112_ = lean_array_get_size(v_tries_4095_);
v___x_4113_ = lean_nat_dec_lt(v_val_4111_, v___x_4112_);
if (v___x_4113_ == 0)
{
lean_dec(v_val_4111_);
lean_dec_ref(v_f_4093_);
return v_d_4091_;
}
else
{
lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4125_; 
lean_inc_ref(v_tries_4095_);
lean_inc_ref(v_roots_4094_);
v_isSharedCheck_4125_ = !lean_is_exclusive(v_d_4091_);
if (v_isSharedCheck_4125_ == 0)
{
lean_object* v_unused_4126_; lean_object* v_unused_4127_; 
v_unused_4126_ = lean_ctor_get(v_d_4091_, 1);
lean_dec(v_unused_4126_);
v_unused_4127_ = lean_ctor_get(v_d_4091_, 0);
lean_dec(v_unused_4127_);
v___x_4115_ = v_d_4091_;
v_isShared_4116_ = v_isSharedCheck_4125_;
goto v_resetjp_4114_;
}
else
{
lean_dec(v_d_4091_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4125_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
lean_object* v_v_4117_; lean_object* v___x_4118_; lean_object* v_xs_x27_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4123_; 
v_v_4117_ = lean_array_fget(v_tries_4095_, v_val_4111_);
v___x_4118_ = lean_box(0);
v_xs_x27_4119_ = lean_array_fset(v_tries_4095_, v_val_4111_, v___x_4118_);
v___x_4120_ = lean_apply_1(v_f_4093_, v_v_4117_);
v___x_4121_ = lean_array_fset(v_xs_x27_4119_, v_val_4111_, v___x_4120_);
lean_dec(v_val_4111_);
if (v_isShared_4116_ == 0)
{
lean_ctor_set(v___x_4115_, 1, v___x_4121_);
v___x_4123_ = v___x_4115_;
goto v_reusejp_4122_;
}
else
{
lean_object* v_reuseFailAlloc_4124_; 
v_reuseFailAlloc_4124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4124_, 0, v_roots_4094_);
lean_ctor_set(v_reuseFailAlloc_4124_, 1, v___x_4121_);
v___x_4123_ = v_reuseFailAlloc_4124_;
goto v_reusejp_4122_;
}
v_reusejp_4122_:
{
return v___x_4123_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt(lean_object* v_00_u03b1_4128_, lean_object* v_d_4129_, lean_object* v_k_4130_, lean_object* v_f_4131_){
_start:
{
lean_object* v___x_4132_; 
v___x_4132_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_d_4129_, v_k_4130_, v_f_4131_);
return v___x_4132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0(lean_object* v_e_4133_, lean_object* v_x_4134_){
_start:
{
lean_object* v___x_4135_; 
v___x_4135_ = lean_array_push(v_x_4134_, v_e_4133_);
return v___x_4135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(lean_object* v_d_4136_, lean_object* v_k_4137_, lean_object* v_e_4138_){
_start:
{
lean_object* v___f_4139_; lean_object* v___x_4140_; 
v___f_4139_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4139_, 0, v_e_4138_);
v___x_4140_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_d_4136_, v_k_4137_, v___f_4139_);
return v___x_4140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push(lean_object* v_00_u03b1_4141_, lean_object* v_d_4142_, lean_object* v_k_4143_, lean_object* v_e_4144_){
_start:
{
lean_object* v___x_4145_; 
v___x_4145_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(v_d_4142_, v_k_4143_, v_e_4144_);
return v___x_4145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(size_t v_sz_4146_, size_t v_i_4147_, lean_object* v_bs_4148_){
_start:
{
uint8_t v___x_4149_; 
v___x_4149_ = lean_usize_dec_lt(v_i_4147_, v_sz_4146_);
if (v___x_4149_ == 0)
{
return v_bs_4148_;
}
else
{
lean_object* v_v_4150_; lean_object* v___x_4151_; lean_object* v_bs_x27_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; size_t v___x_4156_; size_t v___x_4157_; lean_object* v___x_4158_; 
v_v_4150_ = lean_array_uget(v_bs_4148_, v_i_4147_);
v___x_4151_ = lean_unsigned_to_nat(0u);
v_bs_x27_4152_ = lean_array_uset(v_bs_4148_, v_i_4147_, v___x_4151_);
v___x_4153_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__0));
v___x_4154_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2);
v___x_4155_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4153_);
lean_ctor_set(v___x_4155_, 1, v___x_4151_);
lean_ctor_set(v___x_4155_, 2, v___x_4154_);
lean_ctor_set(v___x_4155_, 3, v_v_4150_);
v___x_4156_ = ((size_t)1ULL);
v___x_4157_ = lean_usize_add(v_i_4147_, v___x_4156_);
v___x_4158_ = lean_array_uset(v_bs_x27_4152_, v_i_4147_, v___x_4155_);
v_i_4147_ = v___x_4157_;
v_bs_4148_ = v___x_4158_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg___boxed(lean_object* v_sz_4160_, lean_object* v_i_4161_, lean_object* v_bs_4162_){
_start:
{
size_t v_sz_boxed_4163_; size_t v_i_boxed_4164_; lean_object* v_res_4165_; 
v_sz_boxed_4163_ = lean_unbox_usize(v_sz_4160_);
lean_dec(v_sz_4160_);
v_i_boxed_4164_ = lean_unbox_usize(v_i_4161_);
lean_dec(v_i_4161_);
v_res_4165_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_boxed_4163_, v_i_boxed_4164_, v_bs_4162_);
return v_res_4165_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(lean_object* v_x_4166_, lean_object* v_x_4167_){
_start:
{
if (lean_obj_tag(v_x_4167_) == 0)
{
return v_x_4166_;
}
else
{
lean_object* v_key_4168_; lean_object* v_value_4169_; lean_object* v_tail_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
v_key_4168_ = lean_ctor_get(v_x_4167_, 0);
lean_inc(v_key_4168_);
v_value_4169_ = lean_ctor_get(v_x_4167_, 1);
lean_inc(v_value_4169_);
v_tail_4170_ = lean_ctor_get(v_x_4167_, 2);
lean_inc(v_tail_4170_);
lean_dec_ref(v_x_4167_);
v___x_4171_ = lean_unsigned_to_nat(1u);
v___x_4172_ = lean_nat_add(v_value_4169_, v___x_4171_);
lean_dec(v_value_4169_);
v___x_4173_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_LazyDiscrTree_evalLazyEntry_spec__3___redArg(v_x_4166_, v_key_4168_, v___x_4172_);
v_x_4166_ = v___x_4173_;
v_x_4167_ = v_tail_4170_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(lean_object* v_as_4175_, size_t v_i_4176_, size_t v_stop_4177_, lean_object* v_b_4178_){
_start:
{
uint8_t v___x_4179_; 
v___x_4179_ = lean_usize_dec_eq(v_i_4176_, v_stop_4177_);
if (v___x_4179_ == 0)
{
lean_object* v___x_4180_; lean_object* v___x_4181_; size_t v___x_4182_; size_t v___x_4183_; 
v___x_4180_ = lean_array_uget_borrowed(v_as_4175_, v_i_4176_);
lean_inc(v___x_4180_);
v___x_4181_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__1(v_b_4178_, v___x_4180_);
v___x_4182_ = ((size_t)1ULL);
v___x_4183_ = lean_usize_add(v_i_4176_, v___x_4182_);
v_i_4176_ = v___x_4183_;
v_b_4178_ = v___x_4181_;
goto _start;
}
else
{
return v_b_4178_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2___boxed(lean_object* v_as_4185_, lean_object* v_i_4186_, lean_object* v_stop_4187_, lean_object* v_b_4188_){
_start:
{
size_t v_i_boxed_4189_; size_t v_stop_boxed_4190_; lean_object* v_res_4191_; 
v_i_boxed_4189_ = lean_unbox_usize(v_i_4186_);
lean_dec(v_i_4186_);
v_stop_boxed_4190_ = lean_unbox_usize(v_stop_4187_);
lean_dec(v_stop_4187_);
v_res_4191_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(v_as_4185_, v_i_boxed_4189_, v_stop_boxed_4190_, v_b_4188_);
lean_dec_ref(v_as_4185_);
return v_res_4191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(lean_object* v_d_4192_){
_start:
{
lean_object* v_roots_4193_; lean_object* v_tries_4194_; lean_object* v___x_4196_; uint8_t v_isShared_4197_; uint8_t v_isSharedCheck_4221_; 
v_roots_4193_ = lean_ctor_get(v_d_4192_, 0);
v_tries_4194_ = lean_ctor_get(v_d_4192_, 1);
v_isSharedCheck_4221_ = !lean_is_exclusive(v_d_4192_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4196_ = v_d_4192_;
v_isShared_4197_ = v_isSharedCheck_4221_;
goto v_resetjp_4195_;
}
else
{
lean_inc(v_tries_4194_);
lean_inc(v_roots_4193_);
lean_dec(v_d_4192_);
v___x_4196_ = lean_box(0);
v_isShared_4197_ = v_isSharedCheck_4221_;
goto v_resetjp_4195_;
}
v_resetjp_4195_:
{
lean_object* v___y_4199_; lean_object* v_buckets_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; uint8_t v___x_4213_; 
v_buckets_4210_ = lean_ctor_get(v_roots_4193_, 1);
v___x_4211_ = lean_unsigned_to_nat(0u);
v___x_4212_ = lean_array_get_size(v_buckets_4210_);
v___x_4213_ = lean_nat_dec_lt(v___x_4211_, v___x_4212_);
if (v___x_4213_ == 0)
{
v___y_4199_ = v_roots_4193_;
goto v___jp_4198_;
}
else
{
uint8_t v___x_4214_; 
v___x_4214_ = lean_nat_dec_le(v___x_4212_, v___x_4212_);
if (v___x_4214_ == 0)
{
if (v___x_4213_ == 0)
{
v___y_4199_ = v_roots_4193_;
goto v___jp_4198_;
}
else
{
size_t v___x_4215_; size_t v___x_4216_; lean_object* v___x_4217_; 
lean_inc_ref(v_buckets_4210_);
v___x_4215_ = ((size_t)0ULL);
v___x_4216_ = lean_usize_of_nat(v___x_4212_);
v___x_4217_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(v_buckets_4210_, v___x_4215_, v___x_4216_, v_roots_4193_);
lean_dec_ref(v_buckets_4210_);
v___y_4199_ = v___x_4217_;
goto v___jp_4198_;
}
}
else
{
size_t v___x_4218_; size_t v___x_4219_; lean_object* v___x_4220_; 
lean_inc_ref(v_buckets_4210_);
v___x_4218_ = ((size_t)0ULL);
v___x_4219_ = lean_usize_of_nat(v___x_4212_);
v___x_4220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__2(v_buckets_4210_, v___x_4218_, v___x_4219_, v_roots_4193_);
lean_dec_ref(v_buckets_4210_);
v___y_4199_ = v___x_4220_;
goto v___jp_4198_;
}
}
v___jp_4198_:
{
lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; size_t v_sz_4203_; size_t v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4208_; 
v___x_4200_ = lean_unsigned_to_nat(1u);
v___x_4201_ = lean_mk_empty_array_with_capacity(v___x_4200_);
lean_dec_ref(v___x_4201_);
v___x_4202_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0, &l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabited___closed__0);
v_sz_4203_ = lean_array_size(v_tries_4194_);
v___x_4204_ = ((size_t)0ULL);
v___x_4205_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_4203_, v___x_4204_, v_tries_4194_);
v___x_4206_ = l_Array_append___redArg(v___x_4202_, v___x_4205_);
lean_dec_ref(v___x_4205_);
if (v_isShared_4197_ == 0)
{
lean_ctor_set(v___x_4196_, 1, v___y_4199_);
lean_ctor_set(v___x_4196_, 0, v___x_4206_);
v___x_4208_ = v___x_4196_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v___x_4206_);
lean_ctor_set(v_reuseFailAlloc_4209_, 1, v___y_4199_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
return v___x_4208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy(lean_object* v_00_u03b1_4222_, lean_object* v_d_4223_){
_start:
{
lean_object* v___x_4224_; 
v___x_4224_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_d_4223_);
return v___x_4224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(lean_object* v_00_u03b1_4225_, size_t v_sz_4226_, size_t v_i_4227_, lean_object* v_bs_4228_){
_start:
{
lean_object* v___x_4229_; 
v___x_4229_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___redArg(v_sz_4226_, v_i_4227_, v_bs_4228_);
return v___x_4229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0___boxed(lean_object* v_00_u03b1_4230_, lean_object* v_sz_4231_, lean_object* v_i_4232_, lean_object* v_bs_4233_){
_start:
{
size_t v_sz_boxed_4234_; size_t v_i_boxed_4235_; lean_object* v_res_4236_; 
v_sz_boxed_4234_ = lean_unbox_usize(v_sz_4231_);
lean_dec(v_sz_4231_);
v_i_boxed_4235_ = lean_unbox_usize(v_i_4232_);
lean_dec(v_i_4232_);
v_res_4236_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy_spec__0(v_00_u03b1_4230_, v_sz_boxed_4234_, v_i_boxed_4235_, v_bs_4233_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(lean_object* v_y_4237_, lean_object* v_x_4238_){
_start:
{
lean_object* v___x_4239_; 
v___x_4239_ = l_Array_append___redArg(v_x_4238_, v_y_4237_);
return v___x_4239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0___boxed(lean_object* v_y_4240_, lean_object* v_x_4241_){
_start:
{
lean_object* v_res_4242_; 
v_res_4242_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___lam__0(v_y_4240_, v_x_4241_);
lean_dec_ref(v_y_4240_);
return v_res_4242_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4243_; 
v___x_4243_ = l_Array_instInhabited(lean_box(0));
return v___x_4243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(lean_object* v_tries_4244_, lean_object* v_snd_4245_, lean_object* v_x_4246_, lean_object* v_x_4247_){
_start:
{
if (lean_obj_tag(v_x_4247_) == 0)
{
lean_dec_ref(v_snd_4245_);
return v_x_4246_;
}
else
{
lean_object* v_key_4248_; lean_object* v_value_4249_; lean_object* v_tail_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; 
v_key_4248_ = lean_ctor_get(v_x_4247_, 0);
lean_inc(v_key_4248_);
v_value_4249_ = lean_ctor_get(v_x_4247_, 1);
lean_inc(v_value_4249_);
v_tail_4250_ = lean_ctor_get(v_x_4247_, 2);
lean_inc(v_tail_4250_);
lean_dec_ref(v_x_4247_);
v___x_4251_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___closed__0);
v___x_4252_ = lean_array_get_borrowed(v___x_4251_, v_tries_4244_, v_value_4249_);
lean_dec(v_value_4249_);
lean_inc_ref(v_snd_4245_);
lean_inc(v___x_4252_);
v___x_4253_ = lean_apply_1(v_snd_4245_, v___x_4252_);
v___x_4254_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_modifyAt___redArg(v_x_4246_, v_key_4248_, v___x_4253_);
v_x_4246_ = v___x_4254_;
v_x_4247_ = v_tail_4250_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg___boxed(lean_object* v_tries_4256_, lean_object* v_snd_4257_, lean_object* v_x_4258_, lean_object* v_x_4259_){
_start:
{
lean_object* v_res_4260_; 
v_res_4260_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4256_, v_snd_4257_, v_x_4258_, v_x_4259_);
lean_dec_ref(v_tries_4256_);
return v_res_4260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(lean_object* v_tries_4261_, lean_object* v_snd_4262_, lean_object* v_as_4263_, size_t v_i_4264_, size_t v_stop_4265_, lean_object* v_b_4266_){
_start:
{
uint8_t v___x_4267_; 
v___x_4267_ = lean_usize_dec_eq(v_i_4264_, v_stop_4265_);
if (v___x_4267_ == 0)
{
lean_object* v___x_4268_; lean_object* v___x_4269_; size_t v___x_4270_; size_t v___x_4271_; 
v___x_4268_ = lean_array_uget_borrowed(v_as_4263_, v_i_4264_);
lean_inc(v___x_4268_);
lean_inc_ref(v_snd_4262_);
v___x_4269_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4261_, v_snd_4262_, v_b_4266_, v___x_4268_);
v___x_4270_ = ((size_t)1ULL);
v___x_4271_ = lean_usize_add(v_i_4264_, v___x_4270_);
v_i_4264_ = v___x_4271_;
v_b_4266_ = v___x_4269_;
goto _start;
}
else
{
lean_dec_ref(v_snd_4262_);
return v_b_4266_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg___boxed(lean_object* v_tries_4273_, lean_object* v_snd_4274_, lean_object* v_as_4275_, lean_object* v_i_4276_, lean_object* v_stop_4277_, lean_object* v_b_4278_){
_start:
{
size_t v_i_boxed_4279_; size_t v_stop_boxed_4280_; lean_object* v_res_4281_; 
v_i_boxed_4279_ = lean_unbox_usize(v_i_4276_);
lean_dec(v_i_4276_);
v_stop_boxed_4280_ = lean_unbox_usize(v_stop_4277_);
lean_dec(v_stop_4277_);
v_res_4281_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4273_, v_snd_4274_, v_as_4275_, v_i_boxed_4279_, v_stop_boxed_4280_, v_b_4278_);
lean_dec_ref(v_as_4275_);
lean_dec_ref(v_tries_4273_);
return v_res_4281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(lean_object* v_x_4284_, lean_object* v_y_4285_){
_start:
{
lean_object* v_fst_4287_; lean_object* v_buckets_4288_; lean_object* v_tries_4289_; lean_object* v_snd_4290_; lean_object* v_roots_4301_; lean_object* v_roots_4302_; lean_object* v_tries_4303_; lean_object* v_size_4304_; lean_object* v_buckets_4305_; lean_object* v_tries_4306_; lean_object* v_size_4307_; lean_object* v_buckets_4308_; uint8_t v___x_4309_; 
v_roots_4301_ = lean_ctor_get(v_y_4285_, 0);
v_roots_4302_ = lean_ctor_get(v_x_4284_, 0);
v_tries_4303_ = lean_ctor_get(v_y_4285_, 1);
v_size_4304_ = lean_ctor_get(v_roots_4301_, 0);
v_buckets_4305_ = lean_ctor_get(v_roots_4301_, 1);
v_tries_4306_ = lean_ctor_get(v_x_4284_, 1);
v_size_4307_ = lean_ctor_get(v_roots_4302_, 0);
v_buckets_4308_ = lean_ctor_get(v_roots_4302_, 1);
v___x_4309_ = lean_nat_dec_le(v_size_4304_, v_size_4307_);
if (v___x_4309_ == 0)
{
lean_object* v___f_4310_; 
lean_inc_ref(v_buckets_4308_);
lean_inc_ref(v_tries_4306_);
lean_dec_ref(v_x_4284_);
v___f_4310_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__0));
v_fst_4287_ = v_y_4285_;
v_buckets_4288_ = v_buckets_4308_;
v_tries_4289_ = v_tries_4306_;
v_snd_4290_ = v___f_4310_;
goto v___jp_4286_;
}
else
{
lean_object* v___f_4311_; 
lean_inc_ref(v_buckets_4305_);
lean_inc_ref(v_tries_4303_);
lean_dec_ref(v_y_4285_);
v___f_4311_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg___closed__1));
v_fst_4287_ = v_x_4284_;
v_buckets_4288_ = v_buckets_4305_;
v_tries_4289_ = v_tries_4303_;
v_snd_4290_ = v___f_4311_;
goto v___jp_4286_;
}
v___jp_4286_:
{
lean_object* v___x_4291_; lean_object* v___x_4292_; uint8_t v___x_4293_; 
v___x_4291_ = lean_unsigned_to_nat(0u);
v___x_4292_ = lean_array_get_size(v_buckets_4288_);
v___x_4293_ = lean_nat_dec_lt(v___x_4291_, v___x_4292_);
if (v___x_4293_ == 0)
{
lean_dec_ref(v_tries_4289_);
lean_dec_ref(v_buckets_4288_);
return v_fst_4287_;
}
else
{
uint8_t v___x_4294_; 
v___x_4294_ = lean_nat_dec_le(v___x_4292_, v___x_4292_);
if (v___x_4294_ == 0)
{
if (v___x_4293_ == 0)
{
lean_dec_ref(v_tries_4289_);
lean_dec_ref(v_buckets_4288_);
return v_fst_4287_;
}
else
{
size_t v___x_4295_; size_t v___x_4296_; lean_object* v___x_4297_; 
v___x_4295_ = ((size_t)0ULL);
v___x_4296_ = lean_usize_of_nat(v___x_4292_);
lean_inc_ref(v_snd_4290_);
v___x_4297_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4289_, v_snd_4290_, v_buckets_4288_, v___x_4295_, v___x_4296_, v_fst_4287_);
lean_dec_ref(v_buckets_4288_);
lean_dec_ref(v_tries_4289_);
return v___x_4297_;
}
}
else
{
size_t v___x_4298_; size_t v___x_4299_; lean_object* v___x_4300_; 
v___x_4298_ = ((size_t)0ULL);
v___x_4299_ = lean_usize_of_nat(v___x_4292_);
lean_inc_ref(v_snd_4290_);
v___x_4300_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4289_, v_snd_4290_, v_buckets_4288_, v___x_4298_, v___x_4299_, v_fst_4287_);
lean_dec_ref(v_buckets_4288_);
lean_dec_ref(v_tries_4289_);
return v___x_4300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append(lean_object* v_00_u03b1_4312_, lean_object* v_x_4313_, lean_object* v_y_4314_){
_start:
{
lean_object* v___x_4315_; 
v___x_4315_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(v_x_4313_, v_y_4314_);
return v___x_4315_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(lean_object* v_00_u03b1_4316_, lean_object* v_tries_4317_, lean_object* v_snd_4318_, lean_object* v_x_4319_, lean_object* v_x_4320_){
_start:
{
lean_object* v___x_4321_; 
v___x_4321_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___redArg(v_tries_4317_, v_snd_4318_, v_x_4319_, v_x_4320_);
return v___x_4321_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0___boxed(lean_object* v_00_u03b1_4322_, lean_object* v_tries_4323_, lean_object* v_snd_4324_, lean_object* v_x_4325_, lean_object* v_x_4326_){
_start:
{
lean_object* v_res_4327_; 
v_res_4327_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__0(v_00_u03b1_4322_, v_tries_4323_, v_snd_4324_, v_x_4325_, v_x_4326_);
lean_dec_ref(v_tries_4323_);
return v_res_4327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(lean_object* v_00_u03b1_4328_, lean_object* v_tries_4329_, lean_object* v_snd_4330_, lean_object* v_as_4331_, size_t v_i_4332_, size_t v_stop_4333_, lean_object* v_b_4334_){
_start:
{
lean_object* v___x_4335_; 
v___x_4335_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___redArg(v_tries_4329_, v_snd_4330_, v_as_4331_, v_i_4332_, v_stop_4333_, v_b_4334_);
return v___x_4335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1___boxed(lean_object* v_00_u03b1_4336_, lean_object* v_tries_4337_, lean_object* v_snd_4338_, lean_object* v_as_4339_, lean_object* v_i_4340_, lean_object* v_stop_4341_, lean_object* v_b_4342_){
_start:
{
size_t v_i_boxed_4343_; size_t v_stop_boxed_4344_; lean_object* v_res_4345_; 
v_i_boxed_4343_ = lean_unbox_usize(v_i_4340_);
lean_dec(v_i_4340_);
v_stop_boxed_4344_ = lean_unbox_usize(v_stop_4341_);
lean_dec(v_stop_4341_);
v_res_4345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_PreDiscrTree_append_spec__1(v_00_u03b1_4336_, v_tries_4337_, v_snd_4338_, v_as_4339_, v_i_boxed_4343_, v_stop_boxed_4344_, v_b_4342_);
lean_dec_ref(v_as_4339_);
lean_dec_ref(v_tries_4337_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend(lean_object* v_00_u03b1_4347_){
_start:
{
lean_object* v___x_4348_; 
v___x_4348_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_PreDiscrTree_instAppend___closed__0));
return v___x_4348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(lean_object* v_expr_4349_, lean_object* v_value_4350_, lean_object* v_a_4351_, lean_object* v_a_4352_, lean_object* v_a_4353_, lean_object* v_a_4354_){
_start:
{
lean_object* v___x_4356_; 
v___x_4356_ = l_Lean_Meta_LazyDiscrTree_rootKey(v_expr_4349_, v_a_4351_, v_a_4352_, v_a_4353_, v_a_4354_);
if (lean_obj_tag(v___x_4356_) == 0)
{
lean_object* v_a_4357_; lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4378_; 
v_a_4357_ = lean_ctor_get(v___x_4356_, 0);
v_isSharedCheck_4378_ = !lean_is_exclusive(v___x_4356_);
if (v_isSharedCheck_4378_ == 0)
{
v___x_4359_ = v___x_4356_;
v_isShared_4360_ = v_isSharedCheck_4378_;
goto v_resetjp_4358_;
}
else
{
lean_inc(v_a_4357_);
lean_dec(v___x_4356_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4378_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v_fst_4361_; lean_object* v_snd_4362_; lean_object* v___x_4364_; uint8_t v_isShared_4365_; uint8_t v_isSharedCheck_4377_; 
v_fst_4361_ = lean_ctor_get(v_a_4357_, 0);
v_snd_4362_ = lean_ctor_get(v_a_4357_, 1);
v_isSharedCheck_4377_ = !lean_is_exclusive(v_a_4357_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4364_ = v_a_4357_;
v_isShared_4365_ = v_isSharedCheck_4377_;
goto v_resetjp_4363_;
}
else
{
lean_inc(v_snd_4362_);
lean_inc(v_fst_4361_);
lean_dec(v_a_4357_);
v___x_4364_ = lean_box(0);
v_isShared_4365_ = v_isSharedCheck_4377_;
goto v_resetjp_4363_;
}
v_resetjp_4363_:
{
lean_object* v_lctx_4366_; lean_object* v_localInstances_4367_; lean_object* v___x_4369_; 
v_lctx_4366_ = lean_ctor_get(v_a_4351_, 2);
v_localInstances_4367_ = lean_ctor_get(v_a_4351_, 3);
lean_inc_ref(v_localInstances_4367_);
lean_inc_ref(v_lctx_4366_);
if (v_isShared_4365_ == 0)
{
lean_ctor_set(v___x_4364_, 1, v_localInstances_4367_);
lean_ctor_set(v___x_4364_, 0, v_lctx_4366_);
v___x_4369_ = v___x_4364_;
goto v_reusejp_4368_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v_lctx_4366_);
lean_ctor_set(v_reuseFailAlloc_4376_, 1, v_localInstances_4367_);
v___x_4369_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4368_;
}
v_reusejp_4368_:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4374_; 
v___x_4370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4370_, 0, v___x_4369_);
lean_ctor_set(v___x_4370_, 1, v_value_4350_);
v___x_4371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4371_, 0, v_snd_4362_);
lean_ctor_set(v___x_4371_, 1, v___x_4370_);
v___x_4372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4372_, 0, v_fst_4361_);
lean_ctor_set(v___x_4372_, 1, v___x_4371_);
if (v_isShared_4360_ == 0)
{
lean_ctor_set(v___x_4359_, 0, v___x_4372_);
v___x_4374_ = v___x_4359_;
goto v_reusejp_4373_;
}
else
{
lean_object* v_reuseFailAlloc_4375_; 
v_reuseFailAlloc_4375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4375_, 0, v___x_4372_);
v___x_4374_ = v_reuseFailAlloc_4375_;
goto v_reusejp_4373_;
}
v_reusejp_4373_:
{
return v___x_4374_;
}
}
}
}
}
else
{
lean_object* v_a_4379_; lean_object* v___x_4381_; uint8_t v_isShared_4382_; uint8_t v_isSharedCheck_4386_; 
lean_dec(v_value_4350_);
v_a_4379_ = lean_ctor_get(v___x_4356_, 0);
v_isSharedCheck_4386_ = !lean_is_exclusive(v___x_4356_);
if (v_isSharedCheck_4386_ == 0)
{
v___x_4381_ = v___x_4356_;
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
else
{
lean_inc(v_a_4379_);
lean_dec(v___x_4356_);
v___x_4381_ = lean_box(0);
v_isShared_4382_ = v_isSharedCheck_4386_;
goto v_resetjp_4380_;
}
v_resetjp_4380_:
{
lean_object* v___x_4384_; 
if (v_isShared_4382_ == 0)
{
v___x_4384_ = v___x_4381_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v_a_4379_);
v___x_4384_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
return v___x_4384_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg___boxed(lean_object* v_expr_4387_, lean_object* v_value_4388_, lean_object* v_a_4389_, lean_object* v_a_4390_, lean_object* v_a_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_){
_start:
{
lean_object* v_res_4394_; 
v_res_4394_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v_expr_4387_, v_value_4388_, v_a_4389_, v_a_4390_, v_a_4391_, v_a_4392_);
lean_dec(v_a_4392_);
lean_dec_ref(v_a_4391_);
lean_dec(v_a_4390_);
lean_dec_ref(v_a_4389_);
return v_res_4394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(lean_object* v_00_u03b1_4395_, lean_object* v_expr_4396_, lean_object* v_value_4397_, lean_object* v_a_4398_, lean_object* v_a_4399_, lean_object* v_a_4400_, lean_object* v_a_4401_){
_start:
{
lean_object* v___x_4403_; 
v___x_4403_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___redArg(v_expr_4396_, v_value_4397_, v_a_4398_, v_a_4399_, v_a_4400_, v_a_4401_);
return v___x_4403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr___boxed(lean_object* v_00_u03b1_4404_, lean_object* v_expr_4405_, lean_object* v_value_4406_, lean_object* v_a_4407_, lean_object* v_a_4408_, lean_object* v_a_4409_, lean_object* v_a_4410_, lean_object* v_a_4411_){
_start:
{
lean_object* v_res_4412_; 
v_res_4412_ = l_Lean_Meta_LazyDiscrTree_InitEntry_fromExpr(v_00_u03b1_4404_, v_expr_4405_, v_value_4406_, v_a_4407_, v_a_4408_, v_a_4409_, v_a_4410_);
lean_dec(v_a_4410_);
lean_dec_ref(v_a_4409_);
lean_dec(v_a_4408_);
lean_dec_ref(v_a_4407_);
return v_res_4412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(lean_object* v_e_4413_, lean_object* v_idx_4414_, lean_object* v_value_4415_, lean_object* v_a_4416_, lean_object* v_a_4417_, lean_object* v_a_4418_, lean_object* v_a_4419_){
_start:
{
lean_object* v_entry_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4467_; 
v_entry_4421_ = lean_ctor_get(v_e_4413_, 1);
v_isSharedCheck_4467_ = !lean_is_exclusive(v_e_4413_);
if (v_isSharedCheck_4467_ == 0)
{
lean_object* v_unused_4468_; 
v_unused_4468_ = lean_ctor_get(v_e_4413_, 0);
lean_dec(v_unused_4468_);
v___x_4423_ = v_e_4413_;
v_isShared_4424_ = v_isSharedCheck_4467_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_entry_4421_);
lean_dec(v_e_4413_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4467_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
lean_object* v_snd_4425_; lean_object* v_fst_4426_; lean_object* v_fst_4427_; lean_object* v___x_4429_; uint8_t v_isShared_4430_; uint8_t v_isSharedCheck_4465_; 
v_snd_4425_ = lean_ctor_get(v_entry_4421_, 1);
lean_inc(v_snd_4425_);
v_fst_4426_ = lean_ctor_get(v_entry_4421_, 0);
lean_inc(v_fst_4426_);
lean_dec_ref(v_entry_4421_);
v_fst_4427_ = lean_ctor_get(v_snd_4425_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v_snd_4425_);
if (v_isSharedCheck_4465_ == 0)
{
lean_object* v_unused_4466_; 
v_unused_4466_ = lean_ctor_get(v_snd_4425_, 1);
lean_dec(v_unused_4466_);
v___x_4429_ = v_snd_4425_;
v_isShared_4430_ = v_isSharedCheck_4465_;
goto v_resetjp_4428_;
}
else
{
lean_inc(v_fst_4427_);
lean_dec(v_snd_4425_);
v___x_4429_ = lean_box(0);
v_isShared_4430_ = v_isSharedCheck_4465_;
goto v_resetjp_4428_;
}
v_resetjp_4428_:
{
lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; 
v___x_4431_ = l_Lean_instInhabitedExpr;
v___x_4432_ = lean_array_get(v___x_4431_, v_fst_4426_, v_idx_4414_);
lean_dec(v_fst_4426_);
v___x_4433_ = l_Lean_Meta_LazyDiscrTree_rootKey(v___x_4432_, v_a_4416_, v_a_4417_, v_a_4418_, v_a_4419_);
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v_a_4434_; lean_object* v___x_4436_; uint8_t v_isShared_4437_; uint8_t v_isSharedCheck_4456_; 
v_a_4434_ = lean_ctor_get(v___x_4433_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4436_ = v___x_4433_;
v_isShared_4437_ = v_isSharedCheck_4456_;
goto v_resetjp_4435_;
}
else
{
lean_inc(v_a_4434_);
lean_dec(v___x_4433_);
v___x_4436_ = lean_box(0);
v_isShared_4437_ = v_isSharedCheck_4456_;
goto v_resetjp_4435_;
}
v_resetjp_4435_:
{
lean_object* v_fst_4438_; lean_object* v_snd_4439_; lean_object* v___x_4441_; uint8_t v_isShared_4442_; uint8_t v_isSharedCheck_4455_; 
v_fst_4438_ = lean_ctor_get(v_a_4434_, 0);
v_snd_4439_ = lean_ctor_get(v_a_4434_, 1);
v_isSharedCheck_4455_ = !lean_is_exclusive(v_a_4434_);
if (v_isSharedCheck_4455_ == 0)
{
v___x_4441_ = v_a_4434_;
v_isShared_4442_ = v_isSharedCheck_4455_;
goto v_resetjp_4440_;
}
else
{
lean_inc(v_snd_4439_);
lean_inc(v_fst_4438_);
lean_dec(v_a_4434_);
v___x_4441_ = lean_box(0);
v_isShared_4442_ = v_isSharedCheck_4455_;
goto v_resetjp_4440_;
}
v_resetjp_4440_:
{
lean_object* v___x_4444_; 
if (v_isShared_4442_ == 0)
{
lean_ctor_set(v___x_4441_, 1, v_value_4415_);
lean_ctor_set(v___x_4441_, 0, v_fst_4427_);
v___x_4444_ = v___x_4441_;
goto v_reusejp_4443_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v_fst_4427_);
lean_ctor_set(v_reuseFailAlloc_4454_, 1, v_value_4415_);
v___x_4444_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4443_;
}
v_reusejp_4443_:
{
lean_object* v___x_4446_; 
if (v_isShared_4430_ == 0)
{
lean_ctor_set(v___x_4429_, 1, v___x_4444_);
lean_ctor_set(v___x_4429_, 0, v_snd_4439_);
v___x_4446_ = v___x_4429_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4453_; 
v_reuseFailAlloc_4453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4453_, 0, v_snd_4439_);
lean_ctor_set(v_reuseFailAlloc_4453_, 1, v___x_4444_);
v___x_4446_ = v_reuseFailAlloc_4453_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
lean_object* v___x_4448_; 
if (v_isShared_4424_ == 0)
{
lean_ctor_set(v___x_4423_, 1, v___x_4446_);
lean_ctor_set(v___x_4423_, 0, v_fst_4438_);
v___x_4448_ = v___x_4423_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v_fst_4438_);
lean_ctor_set(v_reuseFailAlloc_4452_, 1, v___x_4446_);
v___x_4448_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
lean_object* v___x_4450_; 
if (v_isShared_4437_ == 0)
{
lean_ctor_set(v___x_4436_, 0, v___x_4448_);
v___x_4450_ = v___x_4436_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v___x_4448_);
v___x_4450_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
return v___x_4450_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4464_; 
lean_del_object(v___x_4429_);
lean_dec(v_fst_4427_);
lean_del_object(v___x_4423_);
lean_dec(v_value_4415_);
v_a_4457_ = lean_ctor_get(v___x_4433_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4459_ = v___x_4433_;
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4433_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4462_; 
if (v_isShared_4460_ == 0)
{
v___x_4462_ = v___x_4459_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4463_; 
v_reuseFailAlloc_4463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4463_, 0, v_a_4457_);
v___x_4462_ = v_reuseFailAlloc_4463_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
return v___x_4462_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg___boxed(lean_object* v_e_4469_, lean_object* v_idx_4470_, lean_object* v_value_4471_, lean_object* v_a_4472_, lean_object* v_a_4473_, lean_object* v_a_4474_, lean_object* v_a_4475_, lean_object* v_a_4476_){
_start:
{
lean_object* v_res_4477_; 
v_res_4477_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_e_4469_, v_idx_4470_, v_value_4471_, v_a_4472_, v_a_4473_, v_a_4474_, v_a_4475_);
lean_dec(v_a_4475_);
lean_dec_ref(v_a_4474_);
lean_dec(v_a_4473_);
lean_dec_ref(v_a_4472_);
lean_dec(v_idx_4470_);
return v_res_4477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(lean_object* v_00_u03b1_4478_, lean_object* v_e_4479_, lean_object* v_idx_4480_, lean_object* v_value_4481_, lean_object* v_a_4482_, lean_object* v_a_4483_, lean_object* v_a_4484_, lean_object* v_a_4485_){
_start:
{
lean_object* v___x_4487_; 
v___x_4487_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___redArg(v_e_4479_, v_idx_4480_, v_value_4481_, v_a_4482_, v_a_4483_, v_a_4484_, v_a_4485_);
return v___x_4487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry___boxed(lean_object* v_00_u03b1_4488_, lean_object* v_e_4489_, lean_object* v_idx_4490_, lean_object* v_value_4491_, lean_object* v_a_4492_, lean_object* v_a_4493_, lean_object* v_a_4494_, lean_object* v_a_4495_, lean_object* v_a_4496_){
_start:
{
lean_object* v_res_4497_; 
v_res_4497_ = l_Lean_Meta_LazyDiscrTree_InitEntry_mkSubEntry(v_00_u03b1_4488_, v_e_4489_, v_idx_4490_, v_value_4491_, v_a_4492_, v_a_4493_, v_a_4494_, v_a_4495_);
lean_dec(v_a_4495_);
lean_dec_ref(v_a_4494_);
lean_dec(v_a_4493_);
lean_dec_ref(v_a_4492_);
lean_dec(v_idx_4490_);
return v_res_4497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new(){
_start:
{
lean_object* v___x_4501_; lean_object* v___x_4502_; 
v___x_4501_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0));
v___x_4502_ = lean_st_mk_ref(v___x_4501_);
return v___x_4502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_ImportData_new___boxed(lean_object* v_a_4503_){
_start:
{
lean_object* v_res_4504_; 
v_res_4504_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
return v_res_4504_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0(void){
_start:
{
lean_object* v___x_4505_; 
v___x_4505_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4505_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1(void){
_start:
{
lean_object* v___x_4506_; lean_object* v___x_4507_; 
v___x_4506_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__0);
v___x_4507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4507_, 0, v___x_4506_);
return v___x_4507_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2(void){
_start:
{
lean_object* v___x_4508_; lean_object* v___x_4509_; 
v___x_4508_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1);
v___x_4509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4509_, 0, v___x_4508_);
lean_ctor_set(v___x_4509_, 1, v___x_4508_);
return v___x_4509_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3(void){
_start:
{
lean_object* v___x_4510_; lean_object* v___x_4511_; 
v___x_4510_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__1);
v___x_4511_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4511_, 0, v___x_4510_);
lean_ctor_set(v___x_4511_, 1, v___x_4510_);
lean_ctor_set(v___x_4511_, 2, v___x_4510_);
lean_ctor_set(v___x_4511_, 3, v___x_4510_);
lean_ctor_set(v___x_4511_, 4, v___x_4510_);
lean_ctor_set(v___x_4511_, 5, v___x_4510_);
return v___x_4511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_Cache_empty(lean_object* v_ngen_4512_){
_start:
{
lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; 
v___x_4513_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__2);
v___x_4514_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3, &l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_Cache_empty___closed__3);
v___x_4515_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4515_, 0, v_ngen_4512_);
lean_ctor_set(v___x_4515_, 1, v___x_4513_);
lean_ctor_set(v___x_4515_, 2, v___x_4514_);
return v___x_4515_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(lean_object* v_env_4516_, lean_object* v_declName_4517_){
_start:
{
uint8_t v___x_4518_; 
v___x_4518_ = l_Lean_isPrivateName(v_declName_4517_);
if (v___x_4518_ == 0)
{
return v___x_4518_;
}
else
{
lean_object* v___x_4519_; 
v___x_4519_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4516_, v_declName_4517_);
if (lean_obj_tag(v___x_4519_) == 0)
{
return v___x_4518_;
}
else
{
lean_object* v_val_4520_; lean_object* v___x_4521_; uint8_t v_isModule_4522_; 
v_val_4520_ = lean_ctor_get(v___x_4519_, 0);
lean_inc(v_val_4520_);
lean_dec_ref(v___x_4519_);
v___x_4521_ = l_Lean_Environment_header(v_env_4516_);
v_isModule_4522_ = lean_ctor_get_uint8(v___x_4521_, sizeof(void*)*7 + 4);
if (v_isModule_4522_ == 0)
{
lean_dec_ref(v___x_4521_);
lean_dec(v_val_4520_);
return v_isModule_4522_;
}
else
{
lean_object* v_modules_4523_; lean_object* v___x_4524_; uint8_t v___x_4525_; 
v_modules_4523_ = lean_ctor_get(v___x_4521_, 3);
lean_inc_ref(v_modules_4523_);
lean_dec_ref(v___x_4521_);
v___x_4524_ = lean_array_get_size(v_modules_4523_);
v___x_4525_ = lean_nat_dec_lt(v_val_4520_, v___x_4524_);
if (v___x_4525_ == 0)
{
lean_dec_ref(v_modules_4523_);
lean_dec(v_val_4520_);
return v___x_4525_;
}
else
{
lean_object* v___x_4526_; lean_object* v_toImport_4527_; uint8_t v_importAll_4528_; 
v___x_4526_ = lean_array_fget(v_modules_4523_, v_val_4520_);
lean_dec(v_val_4520_);
lean_dec_ref(v_modules_4523_);
v_toImport_4527_ = lean_ctor_get(v___x_4526_, 0);
lean_inc_ref(v_toImport_4527_);
lean_dec(v___x_4526_);
v_importAll_4528_ = lean_ctor_get_uint8(v_toImport_4527_, sizeof(void*)*1);
lean_dec_ref(v_toImport_4527_);
return v_importAll_4528_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName___boxed(lean_object* v_env_4529_, lean_object* v_declName_4530_){
_start:
{
uint8_t v_res_4531_; lean_object* v_r_4532_; 
v_res_4531_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(v_env_4529_, v_declName_4530_);
lean_dec(v_declName_4530_);
lean_dec_ref(v_env_4529_);
v_r_4532_ = lean_box(v_res_4531_);
return v_r_4532_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_LazyDiscrTree_blacklistInsertion(lean_object* v_env_4538_, lean_object* v_declName_4539_){
_start:
{
uint8_t v___x_4540_; 
lean_inc(v_declName_4539_);
lean_inc_ref(v_env_4538_);
v___x_4540_ = l_Lean_Meta_allowCompletion(v_env_4538_, v_declName_4539_);
if (v___x_4540_ == 0)
{
uint8_t v___x_4541_; 
lean_dec(v_declName_4539_);
lean_dec_ref(v_env_4538_);
v___x_4541_ = 1;
return v___x_4541_;
}
else
{
lean_object* v___x_4542_; uint8_t v___x_4543_; uint8_t v___y_4553_; 
v___x_4542_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__1));
v___x_4543_ = lean_name_eq(v_declName_4539_, v___x_4542_);
if (v___x_4543_ == 0)
{
uint8_t v___x_4554_; 
lean_inc(v_declName_4539_);
v___x_4554_ = l_Lean_Name_isInternalDetail(v_declName_4539_);
if (v___x_4554_ == 0)
{
lean_dec_ref(v_env_4538_);
v___y_4553_ = v___x_4554_;
goto v___jp_4552_;
}
else
{
uint8_t v___x_4555_; 
v___x_4555_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_isAccessiblePrivateName(v_env_4538_, v_declName_4539_);
lean_dec_ref(v_env_4538_);
if (v___x_4555_ == 0)
{
v___y_4553_ = v___x_4554_;
goto v___jp_4552_;
}
else
{
goto v___jp_4548_;
}
}
}
else
{
lean_dec(v_declName_4539_);
lean_dec_ref(v_env_4538_);
return v___x_4543_;
}
v___jp_4544_:
{
if (lean_obj_tag(v_declName_4539_) == 1)
{
lean_object* v_str_4545_; lean_object* v___x_4546_; uint8_t v___x_4547_; 
v_str_4545_ = lean_ctor_get(v_declName_4539_, 1);
lean_inc_ref(v_str_4545_);
lean_dec_ref(v_declName_4539_);
v___x_4546_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__2));
v___x_4547_ = lean_string_dec_eq(v_str_4545_, v___x_4546_);
lean_dec_ref(v_str_4545_);
if (v___x_4547_ == 0)
{
return v___x_4543_;
}
else
{
return v___x_4540_;
}
}
else
{
lean_dec(v_declName_4539_);
return v___x_4543_;
}
}
v___jp_4548_:
{
if (lean_obj_tag(v_declName_4539_) == 1)
{
lean_object* v_str_4549_; lean_object* v___x_4550_; uint8_t v___x_4551_; 
v_str_4549_ = lean_ctor_get(v_declName_4539_, 1);
v___x_4550_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_blacklistInsertion___closed__3));
v___x_4551_ = lean_string_dec_eq(v_str_4549_, v___x_4550_);
if (v___x_4551_ == 0)
{
goto v___jp_4544_;
}
else
{
lean_dec_ref(v_declName_4539_);
return v___x_4540_;
}
}
else
{
goto v___jp_4544_;
}
}
v___jp_4552_:
{
if (v___y_4553_ == 0)
{
goto v___jp_4548_;
}
else
{
lean_dec(v_declName_4539_);
return v___y_4553_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_blacklistInsertion___boxed(lean_object* v_env_4556_, lean_object* v_declName_4557_){
_start:
{
uint8_t v_res_4558_; lean_object* v_r_4559_; 
v_res_4558_ = l_Lean_Meta_LazyDiscrTree_blacklistInsertion(v_env_4556_, v_declName_4557_);
v_r_4559_ = lean_box(v_res_4558_);
return v_r_4559_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(lean_object* v_opts_4560_, lean_object* v_opt_4561_){
_start:
{
lean_object* v_name_4562_; lean_object* v_defValue_4563_; lean_object* v_map_4564_; lean_object* v___x_4565_; 
v_name_4562_ = lean_ctor_get(v_opt_4561_, 0);
v_defValue_4563_ = lean_ctor_get(v_opt_4561_, 1);
v_map_4564_ = lean_ctor_get(v_opts_4560_, 0);
v___x_4565_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4564_, v_name_4562_);
if (lean_obj_tag(v___x_4565_) == 0)
{
uint8_t v___x_4566_; 
v___x_4566_ = lean_unbox(v_defValue_4563_);
return v___x_4566_;
}
else
{
lean_object* v_val_4567_; 
v_val_4567_ = lean_ctor_get(v___x_4565_, 0);
lean_inc(v_val_4567_);
lean_dec_ref(v___x_4565_);
if (lean_obj_tag(v_val_4567_) == 1)
{
uint8_t v_v_4568_; 
v_v_4568_ = lean_ctor_get_uint8(v_val_4567_, 0);
lean_dec_ref(v_val_4567_);
return v_v_4568_;
}
else
{
uint8_t v___x_4569_; 
lean_dec(v_val_4567_);
v___x_4569_ = lean_unbox(v_defValue_4563_);
return v___x_4569_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0___boxed(lean_object* v_opts_4570_, lean_object* v_opt_4571_){
_start:
{
uint8_t v_res_4572_; lean_object* v_r_4573_; 
v_res_4572_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v_opts_4570_, v_opt_4571_);
lean_dec_ref(v_opt_4571_);
lean_dec_ref(v_opts_4570_);
v_r_4573_ = lean_box(v_res_4572_);
return v_r_4573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(lean_object* v_opts_4574_, lean_object* v_opt_4575_){
_start:
{
lean_object* v_name_4576_; lean_object* v_defValue_4577_; lean_object* v_map_4578_; lean_object* v___x_4579_; 
v_name_4576_ = lean_ctor_get(v_opt_4575_, 0);
v_defValue_4577_ = lean_ctor_get(v_opt_4575_, 1);
v_map_4578_ = lean_ctor_get(v_opts_4574_, 0);
v___x_4579_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4578_, v_name_4576_);
if (lean_obj_tag(v___x_4579_) == 0)
{
lean_inc(v_defValue_4577_);
return v_defValue_4577_;
}
else
{
lean_object* v_val_4580_; 
v_val_4580_ = lean_ctor_get(v___x_4579_, 0);
lean_inc(v_val_4580_);
lean_dec_ref(v___x_4579_);
if (lean_obj_tag(v_val_4580_) == 3)
{
lean_object* v_v_4581_; 
v_v_4581_ = lean_ctor_get(v_val_4580_, 0);
lean_inc(v_v_4581_);
lean_dec_ref(v_val_4580_);
return v_v_4581_;
}
else
{
lean_dec(v_val_4580_);
lean_inc(v_defValue_4577_);
return v_defValue_4577_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1___boxed(lean_object* v_opts_4582_, lean_object* v_opt_4583_){
_start:
{
lean_object* v_res_4584_; 
v_res_4584_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(v_opts_4582_, v_opt_4583_);
lean_dec_ref(v_opt_4583_);
lean_dec_ref(v_opts_4582_);
return v_res_4584_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(lean_object* v_as_4585_, size_t v_i_4586_, size_t v_stop_4587_, lean_object* v_b_4588_){
_start:
{
uint8_t v___x_4589_; 
v___x_4589_ = lean_usize_dec_eq(v_i_4586_, v_stop_4587_);
if (v___x_4589_ == 0)
{
lean_object* v___x_4590_; lean_object* v_key_4591_; lean_object* v_entry_4592_; lean_object* v___x_4593_; size_t v___x_4594_; size_t v___x_4595_; 
v___x_4590_ = lean_array_uget_borrowed(v_as_4585_, v_i_4586_);
v_key_4591_ = lean_ctor_get(v___x_4590_, 0);
v_entry_4592_ = lean_ctor_get(v___x_4590_, 1);
lean_inc_ref(v_entry_4592_);
lean_inc(v_key_4591_);
v___x_4593_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_push___redArg(v_b_4588_, v_key_4591_, v_entry_4592_);
v___x_4594_ = ((size_t)1ULL);
v___x_4595_ = lean_usize_add(v_i_4586_, v___x_4594_);
v_i_4586_ = v___x_4595_;
v_b_4588_ = v___x_4593_;
goto _start;
}
else
{
return v_b_4588_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg___boxed(lean_object* v_as_4597_, lean_object* v_i_4598_, lean_object* v_stop_4599_, lean_object* v_b_4600_){
_start:
{
size_t v_i_boxed_4601_; size_t v_stop_boxed_4602_; lean_object* v_res_4603_; 
v_i_boxed_4601_ = lean_unbox_usize(v_i_4598_);
lean_dec(v_i_4598_);
v_stop_boxed_4602_ = lean_unbox_usize(v_stop_4599_);
lean_dec(v_stop_4599_);
v_res_4603_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(v_as_4597_, v_i_boxed_4601_, v_stop_boxed_4602_, v_b_4600_);
lean_dec_ref(v_as_4597_);
return v_res_4603_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0(void){
_start:
{
lean_object* v___x_4604_; 
v___x_4604_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4604_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1(void){
_start:
{
lean_object* v___x_4605_; lean_object* v___x_4606_; 
v___x_4605_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__0);
v___x_4606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4606_, 0, v___x_4605_);
return v___x_4606_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2(void){
_start:
{
lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; 
v___x_4607_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_4608_ = lean_unsigned_to_nat(0u);
v___x_4609_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4609_, 0, v___x_4608_);
lean_ctor_set(v___x_4609_, 1, v___x_4608_);
lean_ctor_set(v___x_4609_, 2, v___x_4608_);
lean_ctor_set(v___x_4609_, 3, v___x_4607_);
lean_ctor_set(v___x_4609_, 4, v___x_4607_);
lean_ctor_set(v___x_4609_, 5, v___x_4607_);
lean_ctor_set(v___x_4609_, 6, v___x_4607_);
lean_ctor_set(v___x_4609_, 7, v___x_4607_);
lean_ctor_set(v___x_4609_, 8, v___x_4607_);
return v___x_4609_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3(void){
_start:
{
lean_object* v___x_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; 
v___x_4610_ = lean_unsigned_to_nat(32u);
v___x_4611_ = lean_mk_empty_array_with_capacity(v___x_4610_);
v___x_4612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4612_, 0, v___x_4611_);
return v___x_4612_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4(void){
_start:
{
size_t v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; 
v___x_4613_ = ((size_t)5ULL);
v___x_4614_ = lean_unsigned_to_nat(0u);
v___x_4615_ = lean_unsigned_to_nat(32u);
v___x_4616_ = lean_mk_empty_array_with_capacity(v___x_4615_);
v___x_4617_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__3);
v___x_4618_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4618_, 0, v___x_4617_);
lean_ctor_set(v___x_4618_, 1, v___x_4616_);
lean_ctor_set(v___x_4618_, 2, v___x_4614_);
lean_ctor_set(v___x_4618_, 3, v___x_4614_);
lean_ctor_set_usize(v___x_4618_, 4, v___x_4613_);
return v___x_4618_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5(void){
_start:
{
lean_object* v___x_4619_; lean_object* v___x_4620_; 
v___x_4619_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_4620_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4620_, 0, v___x_4619_);
lean_ctor_set(v___x_4620_, 1, v___x_4619_);
lean_ctor_set(v___x_4620_, 2, v___x_4619_);
lean_ctor_set(v___x_4620_, 3, v___x_4619_);
lean_ctor_set(v___x_4620_, 4, v___x_4619_);
return v___x_4620_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6(void){
_start:
{
lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; 
v___x_4621_ = lean_box(1);
v___x_4622_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4);
v___x_4623_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_4624_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4624_, 0, v___x_4623_);
lean_ctor_set(v___x_4624_, 1, v___x_4622_);
lean_ctor_set(v___x_4624_, 2, v___x_4621_);
return v___x_4624_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8(void){
_start:
{
lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4627_ = lean_unsigned_to_nat(1u);
v___x_4628_ = l_Lean_firstFrontendMacroScope;
v___x_4629_ = lean_nat_add(v___x_4628_, v___x_4627_);
return v___x_4629_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10(void){
_start:
{
lean_object* v___x_4634_; uint64_t v___x_4635_; lean_object* v___x_4636_; 
v___x_4634_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4);
v___x_4635_ = 0ULL;
v___x_4636_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4636_, 0, v___x_4634_);
lean_ctor_set_uint64(v___x_4636_, sizeof(void*)*1, v___x_4635_);
return v___x_4636_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11(void){
_start:
{
lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; 
v___x_4637_ = l_Lean_NameSet_empty;
v___x_4638_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4);
v___x_4639_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4639_, 0, v___x_4638_);
lean_ctor_set(v___x_4639_, 1, v___x_4638_);
lean_ctor_set(v___x_4639_, 2, v___x_4637_);
return v___x_4639_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12(void){
_start:
{
lean_object* v___x_4640_; lean_object* v___x_4641_; uint8_t v___x_4642_; lean_object* v___x_4643_; 
v___x_4640_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4);
v___x_4641_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_4642_ = 1;
v___x_4643_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4643_, 0, v___x_4641_);
lean_ctor_set(v___x_4643_, 1, v___x_4641_);
lean_ctor_set(v___x_4643_, 2, v___x_4640_);
lean_ctor_set_uint8(v___x_4643_, sizeof(void*)*3, v___x_4642_);
return v___x_4643_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13(void){
_start:
{
lean_object* v___x_4644_; lean_object* v___x_4645_; 
v___x_4644_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_4645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4645_, 0, v___x_4644_);
lean_ctor_set(v___x_4645_, 1, v___x_4644_);
return v___x_4645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(lean_object* v_cctx_4646_, lean_object* v_env_4647_, lean_object* v_modName_4648_, lean_object* v_d_4649_, lean_object* v_cacheRef_4650_, lean_object* v_tree_4651_, lean_object* v_act_4652_, lean_object* v_name_4653_, lean_object* v_constInfo_4654_){
_start:
{
uint8_t v___x_4656_; 
v___x_4656_ = l_Lean_ConstantInfo_isUnsafe(v_constInfo_4654_);
if (v___x_4656_ == 0)
{
uint8_t v___x_4657_; 
lean_inc(v_name_4653_);
lean_inc_ref(v_env_4647_);
v___x_4657_ = l_Lean_Meta_LazyDiscrTree_blacklistInsertion(v_env_4647_, v_name_4653_);
if (v___x_4657_ == 0)
{
lean_object* v___x_4658_; lean_object* v_ngen_4659_; lean_object* v_core_4660_; lean_object* v_meta_4661_; lean_object* v___x_4663_; uint8_t v_isShared_4664_; uint8_t v_isSharedCheck_4795_; 
v___x_4658_ = lean_st_ref_get(v_cacheRef_4650_);
v_ngen_4659_ = lean_ctor_get(v___x_4658_, 0);
v_core_4660_ = lean_ctor_get(v___x_4658_, 1);
v_meta_4661_ = lean_ctor_get(v___x_4658_, 2);
v_isSharedCheck_4795_ = !lean_is_exclusive(v___x_4658_);
if (v_isSharedCheck_4795_ == 0)
{
v___x_4663_ = v___x_4658_;
v_isShared_4664_ = v_isSharedCheck_4795_;
goto v_resetjp_4662_;
}
else
{
lean_inc(v_meta_4661_);
lean_inc(v_core_4660_);
lean_inc(v_ngen_4659_);
lean_dec(v___x_4658_);
v___x_4663_ = lean_box(0);
v_isShared_4664_ = v_isSharedCheck_4795_;
goto v_resetjp_4662_;
}
v_resetjp_4662_:
{
lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; uint8_t v___x_4672_; lean_object* v___x_4673_; uint8_t v___x_4674_; uint8_t v___x_4675_; uint8_t v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v_fileName_4693_; lean_object* v_fileMap_4694_; lean_object* v_options_4695_; lean_object* v_currRecDepth_4696_; lean_object* v_maxRecDepth_4697_; lean_object* v_ref_4698_; lean_object* v_currNamespace_4699_; lean_object* v_openDecls_4700_; lean_object* v_initHeartbeats_4701_; lean_object* v_maxHeartbeats_4702_; lean_object* v_quotContext_4703_; lean_object* v_currMacroScope_4704_; uint8_t v_diag_4705_; lean_object* v_cancelTk_x3f_4706_; uint8_t v_suppressElabErrors_4707_; lean_object* v___x_4709_; uint8_t v_isShared_4710_; uint8_t v_isSharedCheck_4793_; 
v___x_4665_ = lean_unsigned_to_nat(0u);
v___x_4666_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2);
v___x_4667_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__4);
v___x_4668_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__5);
lean_inc_ref(v_ngen_4659_);
v___x_4669_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_4659_);
v___x_4670_ = lean_st_ref_set(v_cacheRef_4650_, v___x_4669_);
v___x_4671_ = lean_box(1);
v___x_4672_ = 1;
v___x_4673_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4673_, 0, v___x_4666_);
lean_ctor_set(v___x_4673_, 1, v_meta_4661_);
lean_ctor_set(v___x_4673_, 2, v___x_4671_);
lean_ctor_set(v___x_4673_, 3, v___x_4667_);
lean_ctor_set(v___x_4673_, 4, v___x_4668_);
v___x_4674_ = 2;
v___x_4675_ = 0;
v___x_4676_ = 2;
v___x_4677_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v___x_4677_, 0, v___x_4657_);
lean_ctor_set_uint8(v___x_4677_, 1, v___x_4657_);
lean_ctor_set_uint8(v___x_4677_, 2, v___x_4657_);
lean_ctor_set_uint8(v___x_4677_, 3, v___x_4657_);
lean_ctor_set_uint8(v___x_4677_, 4, v___x_4657_);
lean_ctor_set_uint8(v___x_4677_, 5, v___x_4672_);
lean_ctor_set_uint8(v___x_4677_, 6, v___x_4672_);
lean_ctor_set_uint8(v___x_4677_, 7, v___x_4657_);
lean_ctor_set_uint8(v___x_4677_, 8, v___x_4672_);
lean_ctor_set_uint8(v___x_4677_, 9, v___x_4674_);
lean_ctor_set_uint8(v___x_4677_, 10, v___x_4675_);
lean_ctor_set_uint8(v___x_4677_, 11, v___x_4672_);
lean_ctor_set_uint8(v___x_4677_, 12, v___x_4672_);
lean_ctor_set_uint8(v___x_4677_, 13, v___x_4672_);
lean_ctor_set_uint8(v___x_4677_, 14, v___x_4676_);
lean_ctor_set_uint8(v___x_4677_, 15, v___x_4672_);
lean_ctor_set_uint8(v___x_4677_, 16, v___x_4672_);
lean_ctor_set_uint8(v___x_4677_, 17, v___x_4672_);
lean_ctor_set_uint8(v___x_4677_, 18, v___x_4672_);
v___x_4678_ = l_Lean_Meta_Config_toConfigWithKey(v___x_4677_);
v___x_4679_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__6);
v___x_4680_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__7));
v___x_4681_ = lean_box(0);
v___x_4682_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4682_, 0, v___x_4678_);
lean_ctor_set(v___x_4682_, 1, v___x_4671_);
lean_ctor_set(v___x_4682_, 2, v___x_4679_);
lean_ctor_set(v___x_4682_, 3, v___x_4680_);
lean_ctor_set(v___x_4682_, 4, v___x_4681_);
lean_ctor_set(v___x_4682_, 5, v___x_4665_);
lean_ctor_set(v___x_4682_, 6, v___x_4681_);
lean_ctor_set_uint8(v___x_4682_, sizeof(void*)*7, v___x_4657_);
lean_ctor_set_uint8(v___x_4682_, sizeof(void*)*7 + 1, v___x_4657_);
lean_ctor_set_uint8(v___x_4682_, sizeof(void*)*7 + 2, v___x_4657_);
lean_ctor_set_uint8(v___x_4682_, sizeof(void*)*7 + 3, v___x_4672_);
v___x_4683_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__8);
v___x_4684_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__9));
v___x_4685_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__10);
v___x_4686_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__11);
v___x_4687_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__12);
v___x_4688_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_4688_, 0, v_env_4647_);
lean_ctor_set(v___x_4688_, 1, v___x_4683_);
lean_ctor_set(v___x_4688_, 2, v_ngen_4659_);
lean_ctor_set(v___x_4688_, 3, v___x_4684_);
lean_ctor_set(v___x_4688_, 4, v___x_4685_);
lean_ctor_set(v___x_4688_, 5, v_core_4660_);
lean_ctor_set(v___x_4688_, 6, v___x_4686_);
lean_ctor_set(v___x_4688_, 7, v___x_4687_);
lean_ctor_set(v___x_4688_, 8, v___x_4680_);
v___x_4689_ = lean_st_mk_ref(v___x_4688_);
v___x_4690_ = l_Lean_inheritedTraceOptions;
v___x_4691_ = lean_st_ref_get(v___x_4690_);
v___x_4692_ = lean_st_ref_get(v___x_4689_);
v_fileName_4693_ = lean_ctor_get(v_cctx_4646_, 0);
v_fileMap_4694_ = lean_ctor_get(v_cctx_4646_, 1);
v_options_4695_ = lean_ctor_get(v_cctx_4646_, 2);
v_currRecDepth_4696_ = lean_ctor_get(v_cctx_4646_, 3);
v_maxRecDepth_4697_ = lean_ctor_get(v_cctx_4646_, 4);
v_ref_4698_ = lean_ctor_get(v_cctx_4646_, 5);
v_currNamespace_4699_ = lean_ctor_get(v_cctx_4646_, 6);
v_openDecls_4700_ = lean_ctor_get(v_cctx_4646_, 7);
v_initHeartbeats_4701_ = lean_ctor_get(v_cctx_4646_, 8);
v_maxHeartbeats_4702_ = lean_ctor_get(v_cctx_4646_, 9);
v_quotContext_4703_ = lean_ctor_get(v_cctx_4646_, 10);
v_currMacroScope_4704_ = lean_ctor_get(v_cctx_4646_, 11);
v_diag_4705_ = lean_ctor_get_uint8(v_cctx_4646_, sizeof(void*)*14);
v_cancelTk_x3f_4706_ = lean_ctor_get(v_cctx_4646_, 12);
v_suppressElabErrors_4707_ = lean_ctor_get_uint8(v_cctx_4646_, sizeof(void*)*14 + 1);
v_isSharedCheck_4793_ = !lean_is_exclusive(v_cctx_4646_);
if (v_isSharedCheck_4793_ == 0)
{
lean_object* v_unused_4794_; 
v_unused_4794_ = lean_ctor_get(v_cctx_4646_, 13);
lean_dec(v_unused_4794_);
v___x_4709_ = v_cctx_4646_;
v_isShared_4710_ = v_isSharedCheck_4793_;
goto v_resetjp_4708_;
}
else
{
lean_inc(v_cancelTk_x3f_4706_);
lean_inc(v_currMacroScope_4704_);
lean_inc(v_quotContext_4703_);
lean_inc(v_maxHeartbeats_4702_);
lean_inc(v_initHeartbeats_4701_);
lean_inc(v_openDecls_4700_);
lean_inc(v_currNamespace_4699_);
lean_inc(v_ref_4698_);
lean_inc(v_maxRecDepth_4697_);
lean_inc(v_currRecDepth_4696_);
lean_inc(v_options_4695_);
lean_inc(v_fileMap_4694_);
lean_inc(v_fileName_4693_);
lean_dec(v_cctx_4646_);
v___x_4709_ = lean_box(0);
v_isShared_4710_ = v_isSharedCheck_4793_;
goto v_resetjp_4708_;
}
v_resetjp_4708_:
{
lean_object* v_env_4711_; lean_object* v___x_4713_; 
v_env_4711_ = lean_ctor_get(v___x_4692_, 0);
lean_inc_ref(v_env_4711_);
lean_dec(v___x_4692_);
lean_inc_ref(v_options_4695_);
if (v_isShared_4710_ == 0)
{
lean_ctor_set(v___x_4709_, 13, v___x_4691_);
v___x_4713_ = v___x_4709_;
goto v_reusejp_4712_;
}
else
{
lean_object* v_reuseFailAlloc_4792_; 
v_reuseFailAlloc_4792_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_4792_, 0, v_fileName_4693_);
lean_ctor_set(v_reuseFailAlloc_4792_, 1, v_fileMap_4694_);
lean_ctor_set(v_reuseFailAlloc_4792_, 2, v_options_4695_);
lean_ctor_set(v_reuseFailAlloc_4792_, 3, v_currRecDepth_4696_);
lean_ctor_set(v_reuseFailAlloc_4792_, 4, v_maxRecDepth_4697_);
lean_ctor_set(v_reuseFailAlloc_4792_, 5, v_ref_4698_);
lean_ctor_set(v_reuseFailAlloc_4792_, 6, v_currNamespace_4699_);
lean_ctor_set(v_reuseFailAlloc_4792_, 7, v_openDecls_4700_);
lean_ctor_set(v_reuseFailAlloc_4792_, 8, v_initHeartbeats_4701_);
lean_ctor_set(v_reuseFailAlloc_4792_, 9, v_maxHeartbeats_4702_);
lean_ctor_set(v_reuseFailAlloc_4792_, 10, v_quotContext_4703_);
lean_ctor_set(v_reuseFailAlloc_4792_, 11, v_currMacroScope_4704_);
lean_ctor_set(v_reuseFailAlloc_4792_, 12, v_cancelTk_x3f_4706_);
lean_ctor_set(v_reuseFailAlloc_4792_, 13, v___x_4691_);
lean_ctor_set_uint8(v_reuseFailAlloc_4792_, sizeof(void*)*14, v_diag_4705_);
lean_ctor_set_uint8(v_reuseFailAlloc_4792_, sizeof(void*)*14 + 1, v_suppressElabErrors_4707_);
v___x_4713_ = v_reuseFailAlloc_4792_;
goto v_reusejp_4712_;
}
v_reusejp_4712_:
{
lean_object* v___x_4714_; uint8_t v___x_4715_; lean_object* v___y_4717_; lean_object* v___y_4718_; uint8_t v___y_4770_; uint8_t v___x_4791_; 
v___x_4714_ = l_Lean_diagnostics;
v___x_4715_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v_options_4695_, v___x_4714_);
v___x_4791_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4711_);
lean_dec_ref(v_env_4711_);
if (v___x_4791_ == 0)
{
if (v___x_4715_ == 0)
{
lean_inc(v___x_4689_);
v___y_4717_ = v___x_4713_;
v___y_4718_ = v___x_4689_;
goto v___jp_4716_;
}
else
{
v___y_4770_ = v___x_4791_;
goto v___jp_4769_;
}
}
else
{
v___y_4770_ = v___x_4715_;
goto v___jp_4769_;
}
v___jp_4716_:
{
lean_object* v___x_4719_; lean_object* v_fileName_4720_; lean_object* v_fileMap_4721_; lean_object* v_currRecDepth_4722_; lean_object* v_ref_4723_; lean_object* v_currNamespace_4724_; lean_object* v_openDecls_4725_; lean_object* v_initHeartbeats_4726_; lean_object* v_maxHeartbeats_4727_; lean_object* v_quotContext_4728_; lean_object* v_currMacroScope_4729_; lean_object* v_cancelTk_x3f_4730_; uint8_t v_suppressElabErrors_4731_; lean_object* v_inheritedTraceOptions_4732_; lean_object* v___x_4734_; uint8_t v_isShared_4735_; uint8_t v_isSharedCheck_4766_; 
v___x_4719_ = lean_st_mk_ref(v___x_4673_);
v_fileName_4720_ = lean_ctor_get(v___y_4717_, 0);
v_fileMap_4721_ = lean_ctor_get(v___y_4717_, 1);
v_currRecDepth_4722_ = lean_ctor_get(v___y_4717_, 3);
v_ref_4723_ = lean_ctor_get(v___y_4717_, 5);
v_currNamespace_4724_ = lean_ctor_get(v___y_4717_, 6);
v_openDecls_4725_ = lean_ctor_get(v___y_4717_, 7);
v_initHeartbeats_4726_ = lean_ctor_get(v___y_4717_, 8);
v_maxHeartbeats_4727_ = lean_ctor_get(v___y_4717_, 9);
v_quotContext_4728_ = lean_ctor_get(v___y_4717_, 10);
v_currMacroScope_4729_ = lean_ctor_get(v___y_4717_, 11);
v_cancelTk_x3f_4730_ = lean_ctor_get(v___y_4717_, 12);
v_suppressElabErrors_4731_ = lean_ctor_get_uint8(v___y_4717_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_4732_ = lean_ctor_get(v___y_4717_, 13);
v_isSharedCheck_4766_ = !lean_is_exclusive(v___y_4717_);
if (v_isSharedCheck_4766_ == 0)
{
lean_object* v_unused_4767_; lean_object* v_unused_4768_; 
v_unused_4767_ = lean_ctor_get(v___y_4717_, 4);
lean_dec(v_unused_4767_);
v_unused_4768_ = lean_ctor_get(v___y_4717_, 2);
lean_dec(v_unused_4768_);
v___x_4734_ = v___y_4717_;
v_isShared_4735_ = v_isSharedCheck_4766_;
goto v_resetjp_4733_;
}
else
{
lean_inc(v_inheritedTraceOptions_4732_);
lean_inc(v_cancelTk_x3f_4730_);
lean_inc(v_currMacroScope_4729_);
lean_inc(v_quotContext_4728_);
lean_inc(v_maxHeartbeats_4727_);
lean_inc(v_initHeartbeats_4726_);
lean_inc(v_openDecls_4725_);
lean_inc(v_currNamespace_4724_);
lean_inc(v_ref_4723_);
lean_inc(v_currRecDepth_4722_);
lean_inc(v_fileMap_4721_);
lean_inc(v_fileName_4720_);
lean_dec(v___y_4717_);
v___x_4734_ = lean_box(0);
v_isShared_4735_ = v_isSharedCheck_4766_;
goto v_resetjp_4733_;
}
v_resetjp_4733_:
{
lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4739_; 
v___x_4736_ = l_Lean_maxRecDepth;
v___x_4737_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__1(v_options_4695_, v___x_4736_);
if (v_isShared_4735_ == 0)
{
lean_ctor_set(v___x_4734_, 4, v___x_4737_);
lean_ctor_set(v___x_4734_, 2, v_options_4695_);
v___x_4739_ = v___x_4734_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4765_; 
v_reuseFailAlloc_4765_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_4765_, 0, v_fileName_4720_);
lean_ctor_set(v_reuseFailAlloc_4765_, 1, v_fileMap_4721_);
lean_ctor_set(v_reuseFailAlloc_4765_, 2, v_options_4695_);
lean_ctor_set(v_reuseFailAlloc_4765_, 3, v_currRecDepth_4722_);
lean_ctor_set(v_reuseFailAlloc_4765_, 4, v___x_4737_);
lean_ctor_set(v_reuseFailAlloc_4765_, 5, v_ref_4723_);
lean_ctor_set(v_reuseFailAlloc_4765_, 6, v_currNamespace_4724_);
lean_ctor_set(v_reuseFailAlloc_4765_, 7, v_openDecls_4725_);
lean_ctor_set(v_reuseFailAlloc_4765_, 8, v_initHeartbeats_4726_);
lean_ctor_set(v_reuseFailAlloc_4765_, 9, v_maxHeartbeats_4727_);
lean_ctor_set(v_reuseFailAlloc_4765_, 10, v_quotContext_4728_);
lean_ctor_set(v_reuseFailAlloc_4765_, 11, v_currMacroScope_4729_);
lean_ctor_set(v_reuseFailAlloc_4765_, 12, v_cancelTk_x3f_4730_);
lean_ctor_set(v_reuseFailAlloc_4765_, 13, v_inheritedTraceOptions_4732_);
lean_ctor_set_uint8(v_reuseFailAlloc_4765_, sizeof(void*)*14 + 1, v_suppressElabErrors_4731_);
v___x_4739_ = v_reuseFailAlloc_4765_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
lean_object* v___x_4740_; 
lean_ctor_set_uint8(v___x_4739_, sizeof(void*)*14, v___x_4715_);
lean_inc(v___x_4719_);
lean_inc(v_name_4653_);
v___x_4740_ = lean_apply_7(v_act_4652_, v_name_4653_, v_constInfo_4654_, v___x_4682_, v___x_4719_, v___x_4739_, v___y_4718_, lean_box(0));
if (lean_obj_tag(v___x_4740_) == 0)
{
lean_object* v_a_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v_ngen_4744_; lean_object* v_cache_4745_; lean_object* v_cache_4746_; lean_object* v___x_4748_; 
lean_dec(v_name_4653_);
lean_dec(v_modName_4648_);
v_a_4741_ = lean_ctor_get(v___x_4740_, 0);
lean_inc(v_a_4741_);
lean_dec_ref(v___x_4740_);
v___x_4742_ = lean_st_ref_get(v___x_4719_);
lean_dec(v___x_4719_);
v___x_4743_ = lean_st_ref_get(v___x_4689_);
lean_dec(v___x_4689_);
v_ngen_4744_ = lean_ctor_get(v___x_4743_, 2);
lean_inc_ref(v_ngen_4744_);
v_cache_4745_ = lean_ctor_get(v___x_4743_, 5);
lean_inc_ref(v_cache_4745_);
lean_dec(v___x_4743_);
v_cache_4746_ = lean_ctor_get(v___x_4742_, 1);
lean_inc_ref(v_cache_4746_);
lean_dec(v___x_4742_);
if (v_isShared_4664_ == 0)
{
lean_ctor_set(v___x_4663_, 2, v_cache_4746_);
lean_ctor_set(v___x_4663_, 1, v_cache_4745_);
lean_ctor_set(v___x_4663_, 0, v_ngen_4744_);
v___x_4748_ = v___x_4663_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4759_; 
v_reuseFailAlloc_4759_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4759_, 0, v_ngen_4744_);
lean_ctor_set(v_reuseFailAlloc_4759_, 1, v_cache_4745_);
lean_ctor_set(v_reuseFailAlloc_4759_, 2, v_cache_4746_);
v___x_4748_ = v_reuseFailAlloc_4759_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
lean_object* v___x_4749_; lean_object* v___x_4750_; uint8_t v___x_4751_; 
v___x_4749_ = lean_st_ref_set(v_cacheRef_4650_, v___x_4748_);
v___x_4750_ = lean_array_get_size(v_a_4741_);
v___x_4751_ = lean_nat_dec_lt(v___x_4665_, v___x_4750_);
if (v___x_4751_ == 0)
{
lean_dec(v_a_4741_);
return v_tree_4651_;
}
else
{
uint8_t v___x_4752_; 
v___x_4752_ = lean_nat_dec_le(v___x_4750_, v___x_4750_);
if (v___x_4752_ == 0)
{
if (v___x_4751_ == 0)
{
lean_dec(v_a_4741_);
return v_tree_4651_;
}
else
{
size_t v___x_4753_; size_t v___x_4754_; lean_object* v___x_4755_; 
v___x_4753_ = ((size_t)0ULL);
v___x_4754_ = lean_usize_of_nat(v___x_4750_);
v___x_4755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(v_a_4741_, v___x_4753_, v___x_4754_, v_tree_4651_);
lean_dec(v_a_4741_);
return v___x_4755_;
}
}
else
{
size_t v___x_4756_; size_t v___x_4757_; lean_object* v___x_4758_; 
v___x_4756_ = ((size_t)0ULL);
v___x_4757_ = lean_usize_of_nat(v___x_4750_);
v___x_4758_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(v_a_4741_, v___x_4756_, v___x_4757_, v_tree_4651_);
lean_dec(v_a_4741_);
return v___x_4758_;
}
}
}
}
else
{
lean_object* v_a_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; 
lean_dec(v___x_4719_);
lean_dec(v___x_4689_);
lean_del_object(v___x_4663_);
v_a_4760_ = lean_ctor_get(v___x_4740_, 0);
lean_inc(v_a_4760_);
lean_dec_ref(v___x_4740_);
v___x_4761_ = lean_st_ref_take(v_d_4649_);
v___x_4762_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4762_, 0, v_modName_4648_);
lean_ctor_set(v___x_4762_, 1, v_name_4653_);
lean_ctor_set(v___x_4762_, 2, v_a_4760_);
v___x_4763_ = lean_array_push(v___x_4761_, v___x_4762_);
v___x_4764_ = lean_st_ref_set(v_d_4649_, v___x_4763_);
return v_tree_4651_;
}
}
}
}
v___jp_4769_:
{
if (v___y_4770_ == 0)
{
lean_object* v___x_4771_; lean_object* v_env_4772_; lean_object* v_nextMacroScope_4773_; lean_object* v_ngen_4774_; lean_object* v_auxDeclNGen_4775_; lean_object* v_traceState_4776_; lean_object* v_messages_4777_; lean_object* v_infoState_4778_; lean_object* v_snapshotTasks_4779_; lean_object* v___x_4781_; uint8_t v_isShared_4782_; uint8_t v_isSharedCheck_4789_; 
v___x_4771_ = lean_st_ref_take(v___x_4689_);
v_env_4772_ = lean_ctor_get(v___x_4771_, 0);
v_nextMacroScope_4773_ = lean_ctor_get(v___x_4771_, 1);
v_ngen_4774_ = lean_ctor_get(v___x_4771_, 2);
v_auxDeclNGen_4775_ = lean_ctor_get(v___x_4771_, 3);
v_traceState_4776_ = lean_ctor_get(v___x_4771_, 4);
v_messages_4777_ = lean_ctor_get(v___x_4771_, 6);
v_infoState_4778_ = lean_ctor_get(v___x_4771_, 7);
v_snapshotTasks_4779_ = lean_ctor_get(v___x_4771_, 8);
v_isSharedCheck_4789_ = !lean_is_exclusive(v___x_4771_);
if (v_isSharedCheck_4789_ == 0)
{
lean_object* v_unused_4790_; 
v_unused_4790_ = lean_ctor_get(v___x_4771_, 5);
lean_dec(v_unused_4790_);
v___x_4781_ = v___x_4771_;
v_isShared_4782_ = v_isSharedCheck_4789_;
goto v_resetjp_4780_;
}
else
{
lean_inc(v_snapshotTasks_4779_);
lean_inc(v_infoState_4778_);
lean_inc(v_messages_4777_);
lean_inc(v_traceState_4776_);
lean_inc(v_auxDeclNGen_4775_);
lean_inc(v_ngen_4774_);
lean_inc(v_nextMacroScope_4773_);
lean_inc(v_env_4772_);
lean_dec(v___x_4771_);
v___x_4781_ = lean_box(0);
v_isShared_4782_ = v_isSharedCheck_4789_;
goto v_resetjp_4780_;
}
v_resetjp_4780_:
{
lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4786_; 
v___x_4783_ = l_Lean_Kernel_enableDiag(v_env_4772_, v___x_4715_);
v___x_4784_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__13);
if (v_isShared_4782_ == 0)
{
lean_ctor_set(v___x_4781_, 5, v___x_4784_);
lean_ctor_set(v___x_4781_, 0, v___x_4783_);
v___x_4786_ = v___x_4781_;
goto v_reusejp_4785_;
}
else
{
lean_object* v_reuseFailAlloc_4788_; 
v_reuseFailAlloc_4788_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4788_, 0, v___x_4783_);
lean_ctor_set(v_reuseFailAlloc_4788_, 1, v_nextMacroScope_4773_);
lean_ctor_set(v_reuseFailAlloc_4788_, 2, v_ngen_4774_);
lean_ctor_set(v_reuseFailAlloc_4788_, 3, v_auxDeclNGen_4775_);
lean_ctor_set(v_reuseFailAlloc_4788_, 4, v_traceState_4776_);
lean_ctor_set(v_reuseFailAlloc_4788_, 5, v___x_4784_);
lean_ctor_set(v_reuseFailAlloc_4788_, 6, v_messages_4777_);
lean_ctor_set(v_reuseFailAlloc_4788_, 7, v_infoState_4778_);
lean_ctor_set(v_reuseFailAlloc_4788_, 8, v_snapshotTasks_4779_);
v___x_4786_ = v_reuseFailAlloc_4788_;
goto v_reusejp_4785_;
}
v_reusejp_4785_:
{
lean_object* v___x_4787_; 
v___x_4787_ = lean_st_ref_set(v___x_4689_, v___x_4786_);
lean_inc(v___x_4689_);
v___y_4717_ = v___x_4713_;
v___y_4718_ = v___x_4689_;
goto v___jp_4716_;
}
}
}
else
{
lean_inc(v___x_4689_);
v___y_4717_ = v___x_4713_;
v___y_4718_ = v___x_4689_;
goto v___jp_4716_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_constInfo_4654_);
lean_dec(v_name_4653_);
lean_dec_ref(v_act_4652_);
lean_dec(v_modName_4648_);
lean_dec_ref(v_env_4647_);
lean_dec_ref(v_cctx_4646_);
return v_tree_4651_;
}
}
else
{
lean_dec_ref(v_constInfo_4654_);
lean_dec(v_name_4653_);
lean_dec_ref(v_act_4652_);
lean_dec(v_modName_4648_);
lean_dec_ref(v_env_4647_);
lean_dec_ref(v_cctx_4646_);
return v_tree_4651_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___boxed(lean_object* v_cctx_4796_, lean_object* v_env_4797_, lean_object* v_modName_4798_, lean_object* v_d_4799_, lean_object* v_cacheRef_4800_, lean_object* v_tree_4801_, lean_object* v_act_4802_, lean_object* v_name_4803_, lean_object* v_constInfo_4804_, lean_object* v_a_4805_){
_start:
{
lean_object* v_res_4806_; 
v_res_4806_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4796_, v_env_4797_, v_modName_4798_, v_d_4799_, v_cacheRef_4800_, v_tree_4801_, v_act_4802_, v_name_4803_, v_constInfo_4804_);
lean_dec(v_cacheRef_4800_);
lean_dec(v_d_4799_);
return v_res_4806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData(lean_object* v_00_u03b1_4807_, lean_object* v_cctx_4808_, lean_object* v_env_4809_, lean_object* v_modName_4810_, lean_object* v_d_4811_, lean_object* v_cacheRef_4812_, lean_object* v_tree_4813_, lean_object* v_act_4814_, lean_object* v_name_4815_, lean_object* v_constInfo_4816_){
_start:
{
lean_object* v___x_4818_; 
v___x_4818_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4808_, v_env_4809_, v_modName_4810_, v_d_4811_, v_cacheRef_4812_, v_tree_4813_, v_act_4814_, v_name_4815_, v_constInfo_4816_);
return v___x_4818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_addConstImportData___boxed(lean_object* v_00_u03b1_4819_, lean_object* v_cctx_4820_, lean_object* v_env_4821_, lean_object* v_modName_4822_, lean_object* v_d_4823_, lean_object* v_cacheRef_4824_, lean_object* v_tree_4825_, lean_object* v_act_4826_, lean_object* v_name_4827_, lean_object* v_constInfo_4828_, lean_object* v_a_4829_){
_start:
{
lean_object* v_res_4830_; 
v_res_4830_ = l_Lean_Meta_LazyDiscrTree_addConstImportData(v_00_u03b1_4819_, v_cctx_4820_, v_env_4821_, v_modName_4822_, v_d_4823_, v_cacheRef_4824_, v_tree_4825_, v_act_4826_, v_name_4827_, v_constInfo_4828_);
lean_dec(v_cacheRef_4824_);
lean_dec(v_d_4823_);
return v_res_4830_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2(lean_object* v_00_u03b1_4831_, lean_object* v_as_4832_, size_t v_i_4833_, size_t v_stop_4834_, lean_object* v_b_4835_){
_start:
{
lean_object* v___x_4836_; 
v___x_4836_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___redArg(v_as_4832_, v_i_4833_, v_stop_4834_, v_b_4835_);
return v___x_4836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2___boxed(lean_object* v_00_u03b1_4837_, lean_object* v_as_4838_, lean_object* v_i_4839_, lean_object* v_stop_4840_, lean_object* v_b_4841_){
_start:
{
size_t v_i_boxed_4842_; size_t v_stop_boxed_4843_; lean_object* v_res_4844_; 
v_i_boxed_4842_ = lean_unbox_usize(v_i_4839_);
lean_dec(v_i_4839_);
v_stop_boxed_4843_ = lean_unbox_usize(v_stop_4840_);
lean_dec(v_stop_4840_);
v_res_4844_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__2(v_00_u03b1_4837_, v_as_4838_, v_i_boxed_4842_, v_stop_boxed_4843_, v_b_4841_);
lean_dec_ref(v_as_4838_);
return v_res_4844_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1(void){
_start:
{
lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; 
v___x_4847_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0));
v___x_4848_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2);
v___x_4849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4849_, 0, v___x_4848_);
lean_ctor_set(v___x_4849_, 1, v___x_4847_);
return v___x_4849_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__2(void){
_start:
{
lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; 
v___x_4850_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__0));
v___x_4851_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1);
v___x_4852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4852_, 0, v___x_4851_);
lean_ctor_set(v___x_4852_, 1, v___x_4850_);
return v___x_4852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults(lean_object* v_00_u03b1_4853_){
_start:
{
lean_object* v___x_4854_; 
v___x_4854_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__2);
return v___x_4854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(lean_object* v_x_4855_, lean_object* v_y_4856_){
_start:
{
lean_object* v_tree_4857_; lean_object* v_errors_4858_; lean_object* v_tree_4859_; lean_object* v_errors_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4869_; 
v_tree_4857_ = lean_ctor_get(v_x_4855_, 0);
lean_inc_ref(v_tree_4857_);
v_errors_4858_ = lean_ctor_get(v_x_4855_, 1);
lean_inc_ref(v_errors_4858_);
lean_dec_ref(v_x_4855_);
v_tree_4859_ = lean_ctor_get(v_y_4856_, 0);
v_errors_4860_ = lean_ctor_get(v_y_4856_, 1);
v_isSharedCheck_4869_ = !lean_is_exclusive(v_y_4856_);
if (v_isSharedCheck_4869_ == 0)
{
v___x_4862_ = v_y_4856_;
v_isShared_4863_ = v_isSharedCheck_4869_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_errors_4860_);
lean_inc(v_tree_4859_);
lean_dec(v_y_4856_);
v___x_4862_ = lean_box(0);
v_isShared_4863_ = v_isSharedCheck_4869_;
goto v_resetjp_4861_;
}
v_resetjp_4861_:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4867_; 
v___x_4864_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_append___redArg(v_tree_4857_, v_tree_4859_);
v___x_4865_ = l_Array_append___redArg(v_errors_4858_, v_errors_4860_);
lean_dec_ref(v_errors_4860_);
if (v_isShared_4863_ == 0)
{
lean_ctor_set(v___x_4862_, 1, v___x_4865_);
lean_ctor_set(v___x_4862_, 0, v___x_4864_);
v___x_4867_ = v___x_4862_;
goto v_reusejp_4866_;
}
else
{
lean_object* v_reuseFailAlloc_4868_; 
v_reuseFailAlloc_4868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4868_, 0, v___x_4864_);
lean_ctor_set(v_reuseFailAlloc_4868_, 1, v___x_4865_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_append(lean_object* v_00_u03b1_4870_, lean_object* v_x_4871_, lean_object* v_y_4872_){
_start:
{
lean_object* v___x_4873_; 
v___x_4873_ = l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(v_x_4871_, v_y_4872_);
return v___x_4873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_InitResults_instAppend(lean_object* v_00_u03b1_4875_){
_start:
{
lean_object* v___x_4876_; 
v___x_4876_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___closed__0));
return v___x_4876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg(lean_object* v_d_4877_, lean_object* v_tree_4878_){
_start:
{
lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; 
v___x_4880_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_ImportData_new___closed__0));
v___x_4881_ = lean_st_ref_swap(v_d_4877_, v___x_4880_);
v___x_4882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4882_, 0, v_tree_4878_);
lean_ctor_set(v___x_4882_, 1, v___x_4881_);
return v___x_4882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___redArg___boxed(lean_object* v_d_4883_, lean_object* v_tree_4884_, lean_object* v_a_4885_){
_start:
{
lean_object* v_res_4886_; 
v_res_4886_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4883_, v_tree_4884_);
lean_dec(v_d_4883_);
return v_res_4886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat(lean_object* v_00_u03b1_4887_, lean_object* v_d_4888_, lean_object* v_tree_4889_){
_start:
{
lean_object* v___x_4891_; 
v___x_4891_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4888_, v_tree_4889_);
return v___x_4891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_toFlat___boxed(lean_object* v_00_u03b1_4892_, lean_object* v_d_4893_, lean_object* v_tree_4894_, lean_object* v_a_4895_){
_start:
{
lean_object* v_res_4896_; 
v_res_4896_ = l_Lean_Meta_LazyDiscrTree_toFlat(v_00_u03b1_4892_, v_d_4893_, v_tree_4894_);
lean_dec(v_d_4893_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(lean_object* v_cctx_4897_, lean_object* v_env_4898_, lean_object* v_act_4899_, lean_object* v_d_4900_, lean_object* v_cacheRef_4901_, lean_object* v_tree_4902_, lean_object* v_mname_4903_, lean_object* v_mdata_4904_, lean_object* v_i_4905_){
_start:
{
lean_object* v_constants_4907_; lean_object* v___x_4908_; uint8_t v___x_4909_; 
v_constants_4907_ = lean_ctor_get(v_mdata_4904_, 2);
v___x_4908_ = lean_array_get_size(v_constants_4907_);
v___x_4909_ = lean_nat_dec_lt(v_i_4905_, v___x_4908_);
if (v___x_4909_ == 0)
{
lean_dec(v_i_4905_);
lean_dec(v_mname_4903_);
lean_dec_ref(v_act_4899_);
lean_dec_ref(v_env_4898_);
lean_dec_ref(v_cctx_4897_);
return v_tree_4902_;
}
else
{
lean_object* v_constInfo_4910_; lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; lean_object* v___x_4914_; 
v_constInfo_4910_ = lean_array_fget_borrowed(v_constants_4907_, v_i_4905_);
v___x_4911_ = l_Lean_ConstantInfo_name(v_constInfo_4910_);
lean_inc(v_constInfo_4910_);
lean_inc_ref(v_act_4899_);
lean_inc(v_mname_4903_);
lean_inc_ref(v_env_4898_);
lean_inc_ref(v_cctx_4897_);
v___x_4912_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_4897_, v_env_4898_, v_mname_4903_, v_d_4900_, v_cacheRef_4901_, v_tree_4902_, v_act_4899_, v___x_4911_, v_constInfo_4910_);
v___x_4913_ = lean_unsigned_to_nat(1u);
v___x_4914_ = lean_nat_add(v_i_4905_, v___x_4913_);
lean_dec(v_i_4905_);
v_tree_4902_ = v___x_4912_;
v_i_4905_ = v___x_4914_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg___boxed(lean_object* v_cctx_4916_, lean_object* v_env_4917_, lean_object* v_act_4918_, lean_object* v_d_4919_, lean_object* v_cacheRef_4920_, lean_object* v_tree_4921_, lean_object* v_mname_4922_, lean_object* v_mdata_4923_, lean_object* v_i_4924_, lean_object* v_a_4925_){
_start:
{
lean_object* v_res_4926_; 
v_res_4926_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4916_, v_env_4917_, v_act_4918_, v_d_4919_, v_cacheRef_4920_, v_tree_4921_, v_mname_4922_, v_mdata_4923_, v_i_4924_);
lean_dec_ref(v_mdata_4923_);
lean_dec(v_cacheRef_4920_);
lean_dec(v_d_4919_);
return v_res_4926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule(lean_object* v_00_u03b1_4927_, lean_object* v_cctx_4928_, lean_object* v_env_4929_, lean_object* v_act_4930_, lean_object* v_d_4931_, lean_object* v_cacheRef_4932_, lean_object* v_tree_4933_, lean_object* v_mname_4934_, lean_object* v_mdata_4935_, lean_object* v_i_4936_){
_start:
{
lean_object* v___x_4938_; 
v___x_4938_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4928_, v_env_4929_, v_act_4930_, v_d_4931_, v_cacheRef_4932_, v_tree_4933_, v_mname_4934_, v_mdata_4935_, v_i_4936_);
return v___x_4938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_loadImportedModule___boxed(lean_object* v_00_u03b1_4939_, lean_object* v_cctx_4940_, lean_object* v_env_4941_, lean_object* v_act_4942_, lean_object* v_d_4943_, lean_object* v_cacheRef_4944_, lean_object* v_tree_4945_, lean_object* v_mname_4946_, lean_object* v_mdata_4947_, lean_object* v_i_4948_, lean_object* v_a_4949_){
_start:
{
lean_object* v_res_4950_; 
v_res_4950_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule(v_00_u03b1_4939_, v_cctx_4940_, v_env_4941_, v_act_4942_, v_d_4943_, v_cacheRef_4944_, v_tree_4945_, v_mname_4946_, v_mdata_4947_, v_i_4948_);
lean_dec_ref(v_mdata_4947_);
lean_dec(v_cacheRef_4944_);
lean_dec(v_d_4943_);
return v_res_4950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(lean_object* v_cctx_4951_, lean_object* v_env_4952_, lean_object* v_act_4953_, lean_object* v_d_4954_, lean_object* v_cacheRef_4955_, lean_object* v_tree_4956_, lean_object* v_start_4957_, lean_object* v_stop_4958_){
_start:
{
uint8_t v___x_4960_; 
v___x_4960_ = lean_nat_dec_lt(v_start_4957_, v_stop_4958_);
if (v___x_4960_ == 0)
{
lean_object* v___x_4961_; 
lean_dec(v_start_4957_);
lean_dec_ref(v_act_4953_);
lean_dec_ref(v_env_4952_);
lean_dec_ref(v_cctx_4951_);
v___x_4961_ = l_Lean_Meta_LazyDiscrTree_toFlat___redArg(v_d_4954_, v_tree_4956_);
return v___x_4961_;
}
else
{
lean_object* v___x_4962_; lean_object* v_moduleData_4963_; lean_object* v___x_4964_; lean_object* v___x_4965_; lean_object* v_mname_4966_; lean_object* v___x_4967_; lean_object* v_mdata_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; 
v___x_4962_ = l_Lean_Environment_header(v_env_4952_);
v_moduleData_4963_ = lean_ctor_get(v___x_4962_, 6);
lean_inc_ref(v_moduleData_4963_);
v___x_4964_ = lean_box(0);
v___x_4965_ = l_Lean_EnvironmentHeader_moduleNames(v___x_4962_);
v_mname_4966_ = lean_array_get(v___x_4964_, v___x_4965_, v_start_4957_);
lean_dec_ref(v___x_4965_);
v___x_4967_ = l_Lean_instInhabitedModuleData_default;
v_mdata_4968_ = lean_array_get(v___x_4967_, v_moduleData_4963_, v_start_4957_);
lean_dec_ref(v_moduleData_4963_);
v___x_4969_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_act_4953_);
lean_inc_ref(v_env_4952_);
lean_inc_ref(v_cctx_4951_);
v___x_4970_ = l_Lean_Meta_LazyDiscrTree_loadImportedModule___redArg(v_cctx_4951_, v_env_4952_, v_act_4953_, v_d_4954_, v_cacheRef_4955_, v_tree_4956_, v_mname_4966_, v_mdata_4968_, v___x_4969_);
lean_dec(v_mdata_4968_);
v___x_4971_ = lean_unsigned_to_nat(1u);
v___x_4972_ = lean_nat_add(v_start_4957_, v___x_4971_);
lean_dec(v_start_4957_);
v_tree_4956_ = v___x_4970_;
v_start_4957_ = v___x_4972_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg___boxed(lean_object* v_cctx_4974_, lean_object* v_env_4975_, lean_object* v_act_4976_, lean_object* v_d_4977_, lean_object* v_cacheRef_4978_, lean_object* v_tree_4979_, lean_object* v_start_4980_, lean_object* v_stop_4981_, lean_object* v_a_4982_){
_start:
{
lean_object* v_res_4983_; 
v_res_4983_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_4974_, v_env_4975_, v_act_4976_, v_d_4977_, v_cacheRef_4978_, v_tree_4979_, v_start_4980_, v_stop_4981_);
lean_dec(v_stop_4981_);
lean_dec(v_cacheRef_4978_);
lean_dec(v_d_4977_);
return v_res_4983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(lean_object* v_00_u03b1_4984_, lean_object* v_cctx_4985_, lean_object* v_env_4986_, lean_object* v_act_4987_, lean_object* v_d_4988_, lean_object* v_cacheRef_4989_, lean_object* v_tree_4990_, lean_object* v_start_4991_, lean_object* v_stop_4992_){
_start:
{
lean_object* v___x_4994_; 
v___x_4994_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_4985_, v_env_4986_, v_act_4987_, v_d_4988_, v_cacheRef_4989_, v_tree_4990_, v_start_4991_, v_stop_4992_);
return v___x_4994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___boxed(lean_object* v_00_u03b1_4995_, lean_object* v_cctx_4996_, lean_object* v_env_4997_, lean_object* v_act_4998_, lean_object* v_d_4999_, lean_object* v_cacheRef_5000_, lean_object* v_tree_5001_, lean_object* v_start_5002_, lean_object* v_stop_5003_, lean_object* v_a_5004_){
_start:
{
lean_object* v_res_5005_; 
v_res_5005_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go(v_00_u03b1_4995_, v_cctx_4996_, v_env_4997_, v_act_4998_, v_d_4999_, v_cacheRef_5000_, v_tree_5001_, v_start_5002_, v_stop_5003_);
lean_dec(v_stop_5003_);
lean_dec(v_cacheRef_5000_);
lean_dec(v_d_4999_);
return v_res_5005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(lean_object* v_cctx_5006_, lean_object* v_ngen_5007_, lean_object* v_env_5008_, lean_object* v_act_5009_, lean_object* v_start_5010_, lean_object* v_stop_5011_){
_start:
{
lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; 
v___x_5013_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_5007_);
v___x_5014_ = lean_st_mk_ref(v___x_5013_);
v___x_5015_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
v___x_5016_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1);
v___x_5017_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq_go___redArg(v_cctx_5006_, v_env_5008_, v_act_5009_, v___x_5015_, v___x_5014_, v___x_5016_, v_start_5010_, v_stop_5011_);
lean_dec(v___x_5014_);
lean_dec(v___x_5015_);
return v___x_5017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg___boxed(lean_object* v_cctx_5018_, lean_object* v_ngen_5019_, lean_object* v_env_5020_, lean_object* v_act_5021_, lean_object* v_start_5022_, lean_object* v_stop_5023_, lean_object* v_a_5024_){
_start:
{
lean_object* v_res_5025_; 
v_res_5025_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(v_cctx_5018_, v_ngen_5019_, v_env_5020_, v_act_5021_, v_start_5022_, v_stop_5023_);
lean_dec(v_stop_5023_);
return v_res_5025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(lean_object* v_00_u03b1_5026_, lean_object* v_cctx_5027_, lean_object* v_ngen_5028_, lean_object* v_env_5029_, lean_object* v_act_5030_, lean_object* v_start_5031_, lean_object* v_stop_5032_){
_start:
{
lean_object* v___x_5034_; 
v___x_5034_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___redArg(v_cctx_5027_, v_ngen_5028_, v_env_5029_, v_act_5030_, v_start_5031_, v_stop_5032_);
return v___x_5034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed(lean_object* v_00_u03b1_5035_, lean_object* v_cctx_5036_, lean_object* v_ngen_5037_, lean_object* v_env_5038_, lean_object* v_act_5039_, lean_object* v_start_5040_, lean_object* v_stop_5041_, lean_object* v_a_5042_){
_start:
{
lean_object* v_res_5043_; 
v_res_5043_ = l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq(v_00_u03b1_5035_, v_cctx_5036_, v_ngen_5037_, v_env_5038_, v_act_5039_, v_start_5040_, v_stop_5041_);
lean_dec(v_stop_5041_);
return v_res_5043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0(lean_object* v_inst_5044_, lean_object* v_x1_5045_, lean_object* v_x2_5046_){
_start:
{
lean_object* v___x_5047_; lean_object* v___x_5048_; 
v___x_5047_ = lean_task_get_own(v_x2_5046_);
v___x_5048_ = lean_apply_2(v_inst_5044_, v_x1_5045_, v___x_5047_);
return v___x_5048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___redArg(lean_object* v_inst_5049_, lean_object* v_z_5050_, lean_object* v_tasks_5051_){
_start:
{
lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; uint8_t v___x_5055_; 
v___x_5052_ = lean_unsigned_to_nat(0u);
v___x_5053_ = lean_array_get_size(v_tasks_5051_);
v___x_5054_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___redArg___lam__1___closed__9));
v___x_5055_ = lean_nat_dec_lt(v___x_5052_, v___x_5053_);
if (v___x_5055_ == 0)
{
lean_dec_ref(v_tasks_5051_);
lean_dec(v_inst_5049_);
return v_z_5050_;
}
else
{
lean_object* v___f_5056_; uint8_t v___x_5057_; 
v___f_5056_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_combineGet___redArg___lam__0), 3, 1);
lean_closure_set(v___f_5056_, 0, v_inst_5049_);
v___x_5057_ = lean_nat_dec_le(v___x_5053_, v___x_5053_);
if (v___x_5057_ == 0)
{
if (v___x_5055_ == 0)
{
lean_dec_ref(v___f_5056_);
lean_dec_ref(v_tasks_5051_);
return v_z_5050_;
}
else
{
size_t v___x_5058_; size_t v___x_5059_; lean_object* v___x_5060_; 
v___x_5058_ = ((size_t)0ULL);
v___x_5059_ = lean_usize_of_nat(v___x_5053_);
v___x_5060_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_5054_, v___f_5056_, v_tasks_5051_, v___x_5058_, v___x_5059_, v_z_5050_);
return v___x_5060_;
}
}
else
{
size_t v___x_5061_; size_t v___x_5062_; lean_object* v___x_5063_; 
v___x_5061_ = ((size_t)0ULL);
v___x_5062_ = lean_usize_of_nat(v___x_5053_);
v___x_5063_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_5054_, v___f_5056_, v_tasks_5051_, v___x_5061_, v___x_5062_, v_z_5050_);
return v___x_5063_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet(lean_object* v_00_u03b1_5064_, lean_object* v_inst_5065_, lean_object* v_z_5066_, lean_object* v_tasks_5067_){
_start:
{
lean_object* v___x_5068_; 
v___x_5068_ = l_Lean_Meta_LazyDiscrTree_combineGet___redArg(v_inst_5065_, v_z_5066_, v_tasks_5067_);
return v___x_5068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0(lean_object* v_toPure_5069_, lean_object* v___x_5070_, lean_object* v_____r_5071_){
_start:
{
lean_object* v___x_5072_; 
v___x_5072_ = lean_apply_2(v_toPure_5069_, lean_box(0), v___x_5070_);
return v___x_5072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1(lean_object* v_toPure_5073_, lean_object* v_setNGen_5074_, lean_object* v_toBind_5075_, lean_object* v_ngen_5076_){
_start:
{
lean_object* v_namePrefix_5077_; lean_object* v_idx_5078_; lean_object* v___x_5080_; uint8_t v_isShared_5081_; uint8_t v_isSharedCheck_5092_; 
v_namePrefix_5077_ = lean_ctor_get(v_ngen_5076_, 0);
v_idx_5078_ = lean_ctor_get(v_ngen_5076_, 1);
v_isSharedCheck_5092_ = !lean_is_exclusive(v_ngen_5076_);
if (v_isSharedCheck_5092_ == 0)
{
v___x_5080_ = v_ngen_5076_;
v_isShared_5081_ = v_isSharedCheck_5092_;
goto v_resetjp_5079_;
}
else
{
lean_inc(v_idx_5078_);
lean_inc(v_namePrefix_5077_);
lean_dec(v_ngen_5076_);
v___x_5080_ = lean_box(0);
v_isShared_5081_ = v_isSharedCheck_5092_;
goto v_resetjp_5079_;
}
v_resetjp_5079_:
{
lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5085_; 
lean_inc(v_idx_5078_);
lean_inc(v_namePrefix_5077_);
v___x_5082_ = l_Lean_Name_num___override(v_namePrefix_5077_, v_idx_5078_);
v___x_5083_ = lean_unsigned_to_nat(1u);
if (v_isShared_5081_ == 0)
{
lean_ctor_set(v___x_5080_, 1, v___x_5083_);
lean_ctor_set(v___x_5080_, 0, v___x_5082_);
v___x_5085_ = v___x_5080_;
goto v_reusejp_5084_;
}
else
{
lean_object* v_reuseFailAlloc_5091_; 
v_reuseFailAlloc_5091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5091_, 0, v___x_5082_);
lean_ctor_set(v_reuseFailAlloc_5091_, 1, v___x_5083_);
v___x_5085_ = v_reuseFailAlloc_5091_;
goto v_reusejp_5084_;
}
v_reusejp_5084_:
{
lean_object* v___f_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; 
v___f_5086_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5086_, 0, v_toPure_5073_);
lean_closure_set(v___f_5086_, 1, v___x_5085_);
v___x_5087_ = lean_nat_add(v_idx_5078_, v___x_5083_);
lean_dec(v_idx_5078_);
v___x_5088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5088_, 0, v_namePrefix_5077_);
lean_ctor_set(v___x_5088_, 1, v___x_5087_);
v___x_5089_ = lean_apply_1(v_setNGen_5074_, v___x_5088_);
v___x_5090_ = lean_apply_4(v_toBind_5075_, lean_box(0), lean_box(0), v___x_5089_, v___f_5086_);
return v___x_5090_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(lean_object* v_inst_5093_, lean_object* v_inst_5094_){
_start:
{
lean_object* v_toApplicative_5095_; lean_object* v_toBind_5096_; lean_object* v_getNGen_5097_; lean_object* v_setNGen_5098_; lean_object* v_toPure_5099_; lean_object* v___f_5100_; lean_object* v___x_5101_; 
v_toApplicative_5095_ = lean_ctor_get(v_inst_5093_, 0);
lean_inc_ref(v_toApplicative_5095_);
v_toBind_5096_ = lean_ctor_get(v_inst_5093_, 1);
lean_inc_n(v_toBind_5096_, 2);
lean_dec_ref(v_inst_5093_);
v_getNGen_5097_ = lean_ctor_get(v_inst_5094_, 0);
lean_inc(v_getNGen_5097_);
v_setNGen_5098_ = lean_ctor_get(v_inst_5094_, 1);
lean_inc(v_setNGen_5098_);
lean_dec_ref(v_inst_5094_);
v_toPure_5099_ = lean_ctor_get(v_toApplicative_5095_, 1);
lean_inc(v_toPure_5099_);
lean_dec_ref(v_toApplicative_5095_);
v___f_5100_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg___lam__1), 4, 3);
lean_closure_set(v___f_5100_, 0, v_toPure_5099_);
lean_closure_set(v___f_5100_, 1, v_setNGen_5098_);
lean_closure_set(v___f_5100_, 2, v_toBind_5096_);
v___x_5101_ = lean_apply_4(v_toBind_5096_, lean_box(0), lean_box(0), v_getNGen_5097_, v___f_5100_);
return v___x_5101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen(lean_object* v_M_5102_, lean_object* v_inst_5103_, lean_object* v_inst_5104_){
_start:
{
lean_object* v___x_5105_; 
v___x_5105_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___redArg(v_inst_5103_, v_inst_5104_);
return v___x_5105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___lam__0(lean_object* v_cctx_5106_, lean_object* v_env_5107_, lean_object* v_mainModule_5108_, lean_object* v_d_5109_, lean_object* v_val_5110_, lean_object* v_act_5111_, lean_object* v_t_5112_, lean_object* v_n_5113_, lean_object* v_c_5114_){
_start:
{
lean_object* v___x_5116_; 
v___x_5116_ = l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg(v_cctx_5106_, v_env_5107_, v_mainModule_5108_, v_d_5109_, v_val_5110_, v_t_5112_, v_act_5111_, v_n_5113_, v_c_5114_);
return v___x_5116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___lam__0___boxed(lean_object* v_cctx_5117_, lean_object* v_env_5118_, lean_object* v_mainModule_5119_, lean_object* v_d_5120_, lean_object* v_val_5121_, lean_object* v_act_5122_, lean_object* v_t_5123_, lean_object* v_n_5124_, lean_object* v_c_5125_, lean_object* v___y_5126_){
_start:
{
lean_object* v_res_5127_; 
v_res_5127_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___lam__0(v_cctx_5117_, v_env_5118_, v_mainModule_5119_, v_d_5120_, v_val_5121_, v_act_5122_, v_t_5123_, v_n_5124_, v_c_5125_);
lean_dec(v_val_5121_);
lean_dec(v_d_5120_);
return v_res_5127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2___redArg(lean_object* v_f_5128_, lean_object* v_keys_5129_, lean_object* v_vals_5130_, lean_object* v_i_5131_, lean_object* v_acc_5132_){
_start:
{
lean_object* v___x_5134_; uint8_t v___x_5135_; 
v___x_5134_ = lean_array_get_size(v_keys_5129_);
v___x_5135_ = lean_nat_dec_lt(v_i_5131_, v___x_5134_);
if (v___x_5135_ == 0)
{
lean_dec(v_i_5131_);
lean_dec_ref(v_f_5128_);
return v_acc_5132_;
}
else
{
lean_object* v_k_5136_; lean_object* v_v_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; 
v_k_5136_ = lean_array_fget_borrowed(v_keys_5129_, v_i_5131_);
v_v_5137_ = lean_array_fget_borrowed(v_vals_5130_, v_i_5131_);
lean_inc_ref(v_f_5128_);
lean_inc(v_v_5137_);
lean_inc(v_k_5136_);
v___x_5138_ = lean_apply_4(v_f_5128_, v_acc_5132_, v_k_5136_, v_v_5137_, lean_box(0));
v___x_5139_ = lean_unsigned_to_nat(1u);
v___x_5140_ = lean_nat_add(v_i_5131_, v___x_5139_);
lean_dec(v_i_5131_);
v_i_5131_ = v___x_5140_;
v_acc_5132_ = v___x_5138_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_f_5142_, lean_object* v_keys_5143_, lean_object* v_vals_5144_, lean_object* v_i_5145_, lean_object* v_acc_5146_, lean_object* v___y_5147_){
_start:
{
lean_object* v_res_5148_; 
v_res_5148_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2___redArg(v_f_5142_, v_keys_5143_, v_vals_5144_, v_i_5145_, v_acc_5146_);
lean_dec_ref(v_vals_5144_);
lean_dec_ref(v_keys_5143_);
return v_res_5148_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___redArg(lean_object* v_f_5149_, lean_object* v_x_5150_, lean_object* v_x_5151_){
_start:
{
if (lean_obj_tag(v_x_5150_) == 0)
{
lean_object* v_es_5153_; lean_object* v___x_5154_; lean_object* v___x_5155_; uint8_t v___x_5156_; 
v_es_5153_ = lean_ctor_get(v_x_5150_, 0);
v___x_5154_ = lean_unsigned_to_nat(0u);
v___x_5155_ = lean_array_get_size(v_es_5153_);
v___x_5156_ = lean_nat_dec_lt(v___x_5154_, v___x_5155_);
if (v___x_5156_ == 0)
{
lean_dec_ref(v_f_5149_);
return v_x_5151_;
}
else
{
uint8_t v___x_5157_; 
v___x_5157_ = lean_nat_dec_le(v___x_5155_, v___x_5155_);
if (v___x_5157_ == 0)
{
if (v___x_5156_ == 0)
{
lean_dec_ref(v_f_5149_);
return v_x_5151_;
}
else
{
size_t v___x_5158_; size_t v___x_5159_; lean_object* v___x_5160_; 
v___x_5158_ = ((size_t)0ULL);
v___x_5159_ = lean_usize_of_nat(v___x_5155_);
v___x_5160_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1___redArg(v_f_5149_, v_es_5153_, v___x_5158_, v___x_5159_, v_x_5151_);
return v___x_5160_;
}
}
else
{
size_t v___x_5161_; size_t v___x_5162_; lean_object* v___x_5163_; 
v___x_5161_ = ((size_t)0ULL);
v___x_5162_ = lean_usize_of_nat(v___x_5155_);
v___x_5163_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1___redArg(v_f_5149_, v_es_5153_, v___x_5161_, v___x_5162_, v_x_5151_);
return v___x_5163_;
}
}
}
else
{
lean_object* v_ks_5164_; lean_object* v_vs_5165_; lean_object* v___x_5166_; lean_object* v___x_5167_; 
v_ks_5164_ = lean_ctor_get(v_x_5150_, 0);
v_vs_5165_ = lean_ctor_get(v_x_5150_, 1);
v___x_5166_ = lean_unsigned_to_nat(0u);
v___x_5167_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2___redArg(v_f_5149_, v_ks_5164_, v_vs_5165_, v___x_5166_, v_x_5151_);
return v___x_5167_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1___redArg(lean_object* v_f_5168_, lean_object* v_as_5169_, size_t v_i_5170_, size_t v_stop_5171_, lean_object* v_b_5172_){
_start:
{
lean_object* v_val_5175_; lean_object* v___y_5180_; uint8_t v___x_5181_; 
v___x_5181_ = lean_usize_dec_eq(v_i_5170_, v_stop_5171_);
if (v___x_5181_ == 0)
{
lean_object* v___x_5182_; 
v___x_5182_ = lean_array_uget_borrowed(v_as_5169_, v_i_5170_);
switch(lean_obj_tag(v___x_5182_))
{
case 0:
{
lean_object* v_key_5183_; lean_object* v_val_5184_; lean_object* v___x_5185_; 
v_key_5183_ = lean_ctor_get(v___x_5182_, 0);
v_val_5184_ = lean_ctor_get(v___x_5182_, 1);
lean_inc_ref(v_f_5168_);
lean_inc(v_val_5184_);
lean_inc(v_key_5183_);
v___x_5185_ = lean_apply_4(v_f_5168_, v_b_5172_, v_key_5183_, v_val_5184_, lean_box(0));
v___y_5180_ = v___x_5185_;
goto v___jp_5179_;
}
case 1:
{
lean_object* v_node_5186_; lean_object* v___x_5187_; 
v_node_5186_ = lean_ctor_get(v___x_5182_, 0);
lean_inc_ref(v_f_5168_);
v___x_5187_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___redArg(v_f_5168_, v_node_5186_, v_b_5172_);
v___y_5180_ = v___x_5187_;
goto v___jp_5179_;
}
default: 
{
v_val_5175_ = v_b_5172_;
goto v___jp_5174_;
}
}
}
else
{
lean_dec_ref(v_f_5168_);
return v_b_5172_;
}
v___jp_5174_:
{
size_t v___x_5176_; size_t v___x_5177_; 
v___x_5176_ = ((size_t)1ULL);
v___x_5177_ = lean_usize_add(v_i_5170_, v___x_5176_);
v_i_5170_ = v___x_5177_;
v_b_5172_ = v_val_5175_;
goto _start;
}
v___jp_5179_:
{
v_val_5175_ = v___y_5180_;
goto v___jp_5174_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_5188_, lean_object* v_as_5189_, lean_object* v_i_5190_, lean_object* v_stop_5191_, lean_object* v_b_5192_, lean_object* v___y_5193_){
_start:
{
size_t v_i_boxed_5194_; size_t v_stop_boxed_5195_; lean_object* v_res_5196_; 
v_i_boxed_5194_ = lean_unbox_usize(v_i_5190_);
lean_dec(v_i_5190_);
v_stop_boxed_5195_ = lean_unbox_usize(v_stop_5191_);
lean_dec(v_stop_5191_);
v_res_5196_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1___redArg(v_f_5188_, v_as_5189_, v_i_boxed_5194_, v_stop_boxed_5195_, v_b_5192_);
lean_dec_ref(v_as_5189_);
return v_res_5196_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___redArg___boxed(lean_object* v_f_5197_, lean_object* v_x_5198_, lean_object* v_x_5199_, lean_object* v___y_5200_){
_start:
{
lean_object* v_res_5201_; 
v_res_5201_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___redArg(v_f_5197_, v_x_5198_, v_x_5199_);
lean_dec_ref(v_x_5198_);
return v_res_5201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(lean_object* v_cctx_5202_, lean_object* v_ngen_5203_, lean_object* v_env_5204_, lean_object* v_d_5205_, lean_object* v_act_5206_){
_start:
{
lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v_mainModule_5211_; lean_object* v___x_5212_; lean_object* v_map_u2082_5213_; lean_object* v___f_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; 
v___x_5208_ = l_Lean_Meta_LazyDiscrTree_Cache_empty(v_ngen_5203_);
v___x_5209_ = lean_st_mk_ref(v___x_5208_);
v___x_5210_ = l_Lean_Environment_header(v_env_5204_);
v_mainModule_5211_ = lean_ctor_get(v___x_5210_, 0);
lean_inc(v_mainModule_5211_);
lean_dec_ref(v___x_5210_);
lean_inc_ref(v_env_5204_);
v___x_5212_ = l_Lean_Environment_constants(v_env_5204_);
v_map_u2082_5213_ = lean_ctor_get(v___x_5212_, 1);
lean_inc_ref(v_map_u2082_5213_);
lean_dec_ref(v___x_5212_);
v___f_5214_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___lam__0___boxed), 10, 6);
lean_closure_set(v___f_5214_, 0, v_cctx_5202_);
lean_closure_set(v___f_5214_, 1, v_env_5204_);
lean_closure_set(v___f_5214_, 2, v_mainModule_5211_);
lean_closure_set(v___f_5214_, 3, v_d_5205_);
lean_closure_set(v___f_5214_, 4, v___x_5209_);
lean_closure_set(v___f_5214_, 5, v_act_5206_);
v___x_5215_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedInitResults___closed__1);
v___x_5216_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___redArg(v___f_5214_, v_map_u2082_5213_, v___x_5215_);
lean_dec_ref(v_map_u2082_5213_);
return v___x_5216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg___boxed(lean_object* v_cctx_5217_, lean_object* v_ngen_5218_, lean_object* v_env_5219_, lean_object* v_d_5220_, lean_object* v_act_5221_, lean_object* v_a_5222_){
_start:
{
lean_object* v_res_5223_; 
v_res_5223_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_cctx_5217_, v_ngen_5218_, v_env_5219_, v_d_5220_, v_act_5221_);
return v_res_5223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(lean_object* v_00_u03b1_5224_, lean_object* v_cctx_5225_, lean_object* v_ngen_5226_, lean_object* v_env_5227_, lean_object* v_d_5228_, lean_object* v_act_5229_){
_start:
{
lean_object* v___x_5231_; 
v___x_5231_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_cctx_5225_, v_ngen_5226_, v_env_5227_, v_d_5228_, v_act_5229_);
return v___x_5231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___boxed(lean_object* v_00_u03b1_5232_, lean_object* v_cctx_5233_, lean_object* v_ngen_5234_, lean_object* v_env_5235_, lean_object* v_d_5236_, lean_object* v_act_5237_, lean_object* v_a_5238_){
_start:
{
lean_object* v_res_5239_; 
v_res_5239_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree(v_00_u03b1_5232_, v_cctx_5233_, v_ngen_5234_, v_env_5235_, v_d_5236_, v_act_5237_);
return v_res_5239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(lean_object* v_map_5240_, lean_object* v_f_5241_, lean_object* v_init_5242_){
_start:
{
lean_object* v___x_5244_; 
v___x_5244_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___redArg(v_f_5241_, v_map_5240_, v_init_5242_);
return v___x_5244_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg___boxed(lean_object* v_map_5245_, lean_object* v_f_5246_, lean_object* v_init_5247_, lean_object* v___y_5248_){
_start:
{
lean_object* v_res_5249_; 
v_res_5249_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___redArg(v_map_5245_, v_f_5246_, v_init_5247_);
lean_dec_ref(v_map_5245_);
return v_res_5249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(lean_object* v_00_u03c3_5250_, lean_object* v_00_u03b2_5251_, lean_object* v_map_5252_, lean_object* v_f_5253_, lean_object* v_init_5254_){
_start:
{
lean_object* v___x_5256_; 
v___x_5256_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___redArg(v_f_5253_, v_map_5252_, v_init_5254_);
return v___x_5256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0___boxed(lean_object* v_00_u03c3_5257_, lean_object* v_00_u03b2_5258_, lean_object* v_map_5259_, lean_object* v_f_5260_, lean_object* v_init_5261_, lean_object* v___y_5262_){
_start:
{
lean_object* v_res_5263_; 
v_res_5263_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0(v_00_u03c3_5257_, v_00_u03b2_5258_, v_map_5259_, v_f_5260_, v_init_5261_);
lean_dec_ref(v_map_5259_);
return v_res_5263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0(lean_object* v_00_u03c3_5264_, lean_object* v_00_u03b1_5265_, lean_object* v_00_u03b2_5266_, lean_object* v_f_5267_, lean_object* v_x_5268_, lean_object* v_x_5269_){
_start:
{
lean_object* v___x_5271_; 
v___x_5271_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___redArg(v_f_5267_, v_x_5268_, v_x_5269_);
return v___x_5271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0___boxed(lean_object* v_00_u03c3_5272_, lean_object* v_00_u03b1_5273_, lean_object* v_00_u03b2_5274_, lean_object* v_f_5275_, lean_object* v_x_5276_, lean_object* v_x_5277_, lean_object* v___y_5278_){
_start:
{
lean_object* v_res_5279_; 
v_res_5279_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0(v_00_u03c3_5272_, v_00_u03b1_5273_, v_00_u03b2_5274_, v_f_5275_, v_x_5276_, v_x_5277_);
lean_dec_ref(v_x_5276_);
return v_res_5279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_5280_, lean_object* v_00_u03b2_5281_, lean_object* v_00_u03c3_5282_, lean_object* v_f_5283_, lean_object* v_as_5284_, size_t v_i_5285_, size_t v_stop_5286_, lean_object* v_b_5287_){
_start:
{
lean_object* v___x_5289_; 
v___x_5289_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1___redArg(v_f_5283_, v_as_5284_, v_i_5285_, v_stop_5286_, v_b_5287_);
return v___x_5289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_5290_, lean_object* v_00_u03b2_5291_, lean_object* v_00_u03c3_5292_, lean_object* v_f_5293_, lean_object* v_as_5294_, lean_object* v_i_5295_, lean_object* v_stop_5296_, lean_object* v_b_5297_, lean_object* v___y_5298_){
_start:
{
size_t v_i_boxed_5299_; size_t v_stop_boxed_5300_; lean_object* v_res_5301_; 
v_i_boxed_5299_ = lean_unbox_usize(v_i_5295_);
lean_dec(v_i_5295_);
v_stop_boxed_5300_ = lean_unbox_usize(v_stop_5296_);
lean_dec(v_stop_5296_);
v_res_5301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__1(v_00_u03b1_5290_, v_00_u03b2_5291_, v_00_u03c3_5292_, v_f_5293_, v_as_5294_, v_i_boxed_5299_, v_stop_boxed_5300_, v_b_5297_);
lean_dec_ref(v_as_5294_);
return v_res_5301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2(lean_object* v_00_u03c3_5302_, lean_object* v_00_u03b1_5303_, lean_object* v_00_u03b2_5304_, lean_object* v_f_5305_, lean_object* v_keys_5306_, lean_object* v_vals_5307_, lean_object* v_heq_5308_, lean_object* v_i_5309_, lean_object* v_acc_5310_){
_start:
{
lean_object* v___x_5312_; 
v___x_5312_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2___redArg(v_f_5305_, v_keys_5306_, v_vals_5307_, v_i_5309_, v_acc_5310_);
return v___x_5312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03c3_5313_, lean_object* v_00_u03b1_5314_, lean_object* v_00_u03b2_5315_, lean_object* v_f_5316_, lean_object* v_keys_5317_, lean_object* v_vals_5318_, lean_object* v_heq_5319_, lean_object* v_i_5320_, lean_object* v_acc_5321_, lean_object* v___y_5322_){
_start:
{
lean_object* v_res_5323_; 
v_res_5323_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree_spec__0_spec__0_spec__2(v_00_u03c3_5313_, v_00_u03b1_5314_, v_00_u03b2_5315_, v_f_5316_, v_keys_5317_, v_vals_5318_, v_heq_5319_, v_i_5320_, v_acc_5321_);
lean_dec_ref(v_vals_5318_);
lean_dec_ref(v_keys_5317_);
return v_res_5323_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(lean_object* v_x_5324_, lean_object* v_x_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_){
_start:
{
if (lean_obj_tag(v_x_5325_) == 0)
{
lean_object* v___x_5331_; 
v___x_5331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5331_, 0, v_x_5324_);
return v___x_5331_;
}
else
{
lean_object* v_head_5332_; lean_object* v_tail_5333_; lean_object* v___x_5334_; 
v_head_5332_ = lean_ctor_get(v_x_5325_, 0);
lean_inc(v_head_5332_);
v_tail_5333_ = lean_ctor_get(v_x_5325_, 1);
lean_inc(v_tail_5333_);
lean_dec_ref(v_x_5325_);
v___x_5334_ = l_Lean_Meta_LazyDiscrTree_dropKey___redArg(v_x_5324_, v_head_5332_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_);
if (lean_obj_tag(v___x_5334_) == 0)
{
lean_object* v_a_5335_; 
v_a_5335_ = lean_ctor_get(v___x_5334_, 0);
lean_inc(v_a_5335_);
lean_dec_ref(v___x_5334_);
v_x_5324_ = v_a_5335_;
v_x_5325_ = v_tail_5333_;
goto _start;
}
else
{
lean_dec(v_tail_5333_);
return v___x_5334_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg___boxed(lean_object* v_x_5337_, lean_object* v_x_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_){
_start:
{
lean_object* v_res_5344_; 
v_res_5344_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_x_5337_, v_x_5338_, v___y_5339_, v___y_5340_, v___y_5341_, v___y_5342_);
lean_dec(v___y_5342_);
lean_dec_ref(v___y_5341_);
lean_dec(v___y_5340_);
lean_dec_ref(v___y_5339_);
return v_res_5344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(lean_object* v_t_5345_, lean_object* v_keys_5346_, lean_object* v_a_5347_, lean_object* v_a_5348_, lean_object* v_a_5349_, lean_object* v_a_5350_){
_start:
{
lean_object* v___x_5352_; 
v___x_5352_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_t_5345_, v_keys_5346_, v_a_5347_, v_a_5348_, v_a_5349_, v_a_5350_);
return v___x_5352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___redArg___boxed(lean_object* v_t_5353_, lean_object* v_keys_5354_, lean_object* v_a_5355_, lean_object* v_a_5356_, lean_object* v_a_5357_, lean_object* v_a_5358_, lean_object* v_a_5359_){
_start:
{
lean_object* v_res_5360_; 
v_res_5360_ = l_Lean_Meta_LazyDiscrTree_dropKeys___redArg(v_t_5353_, v_keys_5354_, v_a_5355_, v_a_5356_, v_a_5357_, v_a_5358_);
lean_dec(v_a_5358_);
lean_dec_ref(v_a_5357_);
lean_dec(v_a_5356_);
lean_dec_ref(v_a_5355_);
return v_res_5360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys(lean_object* v_00_u03b1_5361_, lean_object* v_t_5362_, lean_object* v_keys_5363_, lean_object* v_a_5364_, lean_object* v_a_5365_, lean_object* v_a_5366_, lean_object* v_a_5367_){
_start:
{
lean_object* v___x_5369_; 
v___x_5369_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_t_5362_, v_keys_5363_, v_a_5364_, v_a_5365_, v_a_5366_, v_a_5367_);
return v___x_5369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_dropKeys___boxed(lean_object* v_00_u03b1_5370_, lean_object* v_t_5371_, lean_object* v_keys_5372_, lean_object* v_a_5373_, lean_object* v_a_5374_, lean_object* v_a_5375_, lean_object* v_a_5376_, lean_object* v_a_5377_){
_start:
{
lean_object* v_res_5378_; 
v_res_5378_ = l_Lean_Meta_LazyDiscrTree_dropKeys(v_00_u03b1_5370_, v_t_5371_, v_keys_5372_, v_a_5373_, v_a_5374_, v_a_5375_, v_a_5376_);
lean_dec(v_a_5376_);
lean_dec_ref(v_a_5375_);
lean_dec(v_a_5374_);
lean_dec_ref(v_a_5373_);
return v_res_5378_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(lean_object* v_00_u03b1_5379_, lean_object* v_x_5380_, lean_object* v_x_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_){
_start:
{
lean_object* v___x_5387_; 
v___x_5387_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_x_5380_, v_x_5381_, v___y_5382_, v___y_5383_, v___y_5384_, v___y_5385_);
return v___x_5387_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___boxed(lean_object* v_00_u03b1_5388_, lean_object* v_x_5389_, lean_object* v_x_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_){
_start:
{
lean_object* v_res_5396_; 
v_res_5396_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0(v_00_u03b1_5388_, v_x_5389_, v_x_5390_, v___y_5391_, v___y_5392_, v___y_5393_, v___y_5394_);
lean_dec(v___y_5394_);
lean_dec_ref(v___y_5393_);
lean_dec(v___y_5392_);
lean_dec_ref(v___y_5391_);
return v_res_5396_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(lean_object* v_as_5397_, size_t v_sz_5398_, size_t v_i_5399_, lean_object* v_b_5400_, lean_object* v___y_5401_, lean_object* v___y_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_){
_start:
{
uint8_t v___x_5407_; 
v___x_5407_ = lean_usize_dec_lt(v_i_5399_, v_sz_5398_);
if (v___x_5407_ == 0)
{
lean_object* v___x_5408_; 
v___x_5408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5408_, 0, v_b_5400_);
return v___x_5408_;
}
else
{
lean_object* v_a_5409_; lean_object* v___x_5410_; 
v_a_5409_ = lean_array_uget_borrowed(v_as_5397_, v_i_5399_);
v___x_5410_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5409_, v_b_5400_, v___y_5401_, v___y_5402_, v___y_5403_, v___y_5404_, v___y_5405_);
if (lean_obj_tag(v___x_5410_) == 0)
{
lean_object* v_a_5411_; lean_object* v___x_5413_; uint8_t v_isShared_5414_; uint8_t v_isSharedCheck_5423_; 
v_a_5411_ = lean_ctor_get(v___x_5410_, 0);
v_isSharedCheck_5423_ = !lean_is_exclusive(v___x_5410_);
if (v_isSharedCheck_5423_ == 0)
{
v___x_5413_ = v___x_5410_;
v_isShared_5414_ = v_isSharedCheck_5423_;
goto v_resetjp_5412_;
}
else
{
lean_inc(v_a_5411_);
lean_dec(v___x_5410_);
v___x_5413_ = lean_box(0);
v_isShared_5414_ = v_isSharedCheck_5423_;
goto v_resetjp_5412_;
}
v_resetjp_5412_:
{
if (lean_obj_tag(v_a_5411_) == 0)
{
lean_object* v_a_5415_; lean_object* v___x_5417_; 
v_a_5415_ = lean_ctor_get(v_a_5411_, 0);
lean_inc(v_a_5415_);
lean_dec_ref(v_a_5411_);
if (v_isShared_5414_ == 0)
{
lean_ctor_set(v___x_5413_, 0, v_a_5415_);
v___x_5417_ = v___x_5413_;
goto v_reusejp_5416_;
}
else
{
lean_object* v_reuseFailAlloc_5418_; 
v_reuseFailAlloc_5418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5418_, 0, v_a_5415_);
v___x_5417_ = v_reuseFailAlloc_5418_;
goto v_reusejp_5416_;
}
v_reusejp_5416_:
{
return v___x_5417_;
}
}
else
{
lean_object* v_a_5419_; size_t v___x_5420_; size_t v___x_5421_; 
lean_del_object(v___x_5413_);
v_a_5419_ = lean_ctor_get(v_a_5411_, 0);
lean_inc(v_a_5419_);
lean_dec_ref(v_a_5411_);
v___x_5420_ = ((size_t)1ULL);
v___x_5421_ = lean_usize_add(v_i_5399_, v___x_5420_);
v_i_5399_ = v___x_5421_;
v_b_5400_ = v_a_5419_;
goto _start;
}
}
}
else
{
lean_object* v_a_5424_; lean_object* v___x_5426_; uint8_t v_isShared_5427_; uint8_t v_isSharedCheck_5431_; 
v_a_5424_ = lean_ctor_get(v___x_5410_, 0);
v_isSharedCheck_5431_ = !lean_is_exclusive(v___x_5410_);
if (v_isSharedCheck_5431_ == 0)
{
v___x_5426_ = v___x_5410_;
v_isShared_5427_ = v_isSharedCheck_5431_;
goto v_resetjp_5425_;
}
else
{
lean_inc(v_a_5424_);
lean_dec(v___x_5410_);
v___x_5426_ = lean_box(0);
v_isShared_5427_ = v_isSharedCheck_5431_;
goto v_resetjp_5425_;
}
v_resetjp_5425_:
{
lean_object* v___x_5429_; 
if (v_isShared_5427_ == 0)
{
v___x_5429_ = v___x_5426_;
goto v_reusejp_5428_;
}
else
{
lean_object* v_reuseFailAlloc_5430_; 
v_reuseFailAlloc_5430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5430_, 0, v_a_5424_);
v___x_5429_ = v_reuseFailAlloc_5430_;
goto v_reusejp_5428_;
}
v_reusejp_5428_:
{
return v___x_5429_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(lean_object* v_next_5432_, lean_object* v_a_5433_, lean_object* v_a_5434_, lean_object* v_a_5435_, lean_object* v_a_5436_, lean_object* v_a_5437_){
_start:
{
lean_object* v___x_5439_; uint8_t v___x_5440_; 
v___x_5439_ = lean_unsigned_to_nat(0u);
v___x_5440_ = lean_nat_dec_eq(v_next_5432_, v___x_5439_);
if (v___x_5440_ == 0)
{
lean_object* v___x_5441_; 
v___x_5441_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_5432_, v_a_5433_, v_a_5434_, v_a_5435_, v_a_5436_, v_a_5437_);
if (lean_obj_tag(v___x_5441_) == 0)
{
lean_object* v_a_5442_; lean_object* v_snd_5443_; lean_object* v_fst_5444_; lean_object* v_fst_5445_; lean_object* v_snd_5446_; lean_object* v___x_5447_; 
v_a_5442_ = lean_ctor_get(v___x_5441_, 0);
lean_inc(v_a_5442_);
lean_dec_ref(v___x_5441_);
v_snd_5443_ = lean_ctor_get(v_a_5442_, 1);
lean_inc(v_snd_5443_);
v_fst_5444_ = lean_ctor_get(v_a_5442_, 0);
lean_inc(v_fst_5444_);
lean_dec(v_a_5442_);
v_fst_5445_ = lean_ctor_get(v_snd_5443_, 0);
lean_inc(v_fst_5445_);
v_snd_5446_ = lean_ctor_get(v_snd_5443_, 1);
lean_inc(v_snd_5446_);
lean_dec(v_snd_5443_);
v___x_5447_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_fst_5445_, v_a_5433_, v_a_5434_, v_a_5435_, v_a_5436_, v_a_5437_);
if (lean_obj_tag(v___x_5447_) == 0)
{
lean_object* v_a_5448_; lean_object* v_buckets_5449_; lean_object* v___x_5450_; size_t v_sz_5451_; size_t v___x_5452_; lean_object* v___x_5453_; 
v_a_5448_ = lean_ctor_get(v___x_5447_, 0);
lean_inc(v_a_5448_);
lean_dec_ref(v___x_5447_);
v_buckets_5449_ = lean_ctor_get(v_snd_5446_, 1);
v___x_5450_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v_sz_5451_ = lean_array_size(v_buckets_5449_);
v___x_5452_ = ((size_t)0ULL);
v___x_5453_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_buckets_5449_, v_sz_5451_, v___x_5452_, v___x_5450_, v_a_5433_, v_a_5434_, v_a_5435_, v_a_5436_, v_a_5437_);
if (lean_obj_tag(v___x_5453_) == 0)
{
lean_object* v_a_5454_; lean_object* v___x_5456_; uint8_t v_isShared_5457_; uint8_t v_isSharedCheck_5467_; 
v_a_5454_ = lean_ctor_get(v___x_5453_, 0);
v_isSharedCheck_5467_ = !lean_is_exclusive(v___x_5453_);
if (v_isSharedCheck_5467_ == 0)
{
v___x_5456_ = v___x_5453_;
v_isShared_5457_ = v_isSharedCheck_5467_;
goto v_resetjp_5455_;
}
else
{
lean_inc(v_a_5454_);
lean_dec(v___x_5453_);
v___x_5456_ = lean_box(0);
v_isShared_5457_ = v_isSharedCheck_5467_;
goto v_resetjp_5455_;
}
v_resetjp_5455_:
{
lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5465_; 
v___x_5458_ = lean_st_ref_take(v_a_5433_);
v___x_5459_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5459_, 0, v___x_5450_);
lean_ctor_set(v___x_5459_, 1, v_fst_5445_);
lean_ctor_set(v___x_5459_, 2, v_snd_5446_);
lean_ctor_set(v___x_5459_, 3, v___x_5450_);
v___x_5460_ = lean_array_set(v___x_5458_, v_next_5432_, v___x_5459_);
v___x_5461_ = lean_st_ref_set(v_a_5433_, v___x_5460_);
v___x_5462_ = l_Array_append___redArg(v_fst_5444_, v_a_5448_);
lean_dec(v_a_5448_);
v___x_5463_ = l_Array_append___redArg(v___x_5462_, v_a_5454_);
lean_dec(v_a_5454_);
if (v_isShared_5457_ == 0)
{
lean_ctor_set(v___x_5456_, 0, v___x_5463_);
v___x_5465_ = v___x_5456_;
goto v_reusejp_5464_;
}
else
{
lean_object* v_reuseFailAlloc_5466_; 
v_reuseFailAlloc_5466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5466_, 0, v___x_5463_);
v___x_5465_ = v_reuseFailAlloc_5466_;
goto v_reusejp_5464_;
}
v_reusejp_5464_:
{
return v___x_5465_;
}
}
}
else
{
lean_dec(v_a_5448_);
lean_dec(v_snd_5446_);
lean_dec(v_fst_5445_);
lean_dec(v_fst_5444_);
return v___x_5453_;
}
}
else
{
lean_dec(v_snd_5446_);
lean_dec(v_fst_5445_);
lean_dec(v_fst_5444_);
return v___x_5447_;
}
}
else
{
lean_object* v_a_5468_; lean_object* v___x_5470_; uint8_t v_isShared_5471_; uint8_t v_isSharedCheck_5475_; 
v_a_5468_ = lean_ctor_get(v___x_5441_, 0);
v_isSharedCheck_5475_ = !lean_is_exclusive(v___x_5441_);
if (v_isSharedCheck_5475_ == 0)
{
v___x_5470_ = v___x_5441_;
v_isShared_5471_ = v_isSharedCheck_5475_;
goto v_resetjp_5469_;
}
else
{
lean_inc(v_a_5468_);
lean_dec(v___x_5441_);
v___x_5470_ = lean_box(0);
v_isShared_5471_ = v_isSharedCheck_5475_;
goto v_resetjp_5469_;
}
v_resetjp_5469_:
{
lean_object* v___x_5473_; 
if (v_isShared_5471_ == 0)
{
v___x_5473_ = v___x_5470_;
goto v_reusejp_5472_;
}
else
{
lean_object* v_reuseFailAlloc_5474_; 
v_reuseFailAlloc_5474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5474_, 0, v_a_5468_);
v___x_5473_ = v_reuseFailAlloc_5474_;
goto v_reusejp_5472_;
}
v_reusejp_5472_:
{
return v___x_5473_;
}
}
}
}
else
{
lean_object* v___x_5476_; lean_object* v___x_5477_; 
v___x_5476_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v___x_5477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5477_, 0, v___x_5476_);
return v___x_5477_;
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(lean_object* v_a_5478_, lean_object* v_a_5479_, lean_object* v___y_5480_, lean_object* v___y_5481_, lean_object* v___y_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_){
_start:
{
if (lean_obj_tag(v_a_5478_) == 0)
{
lean_object* v___x_5486_; lean_object* v___x_5487_; 
v___x_5486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5486_, 0, v_a_5479_);
v___x_5487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5487_, 0, v___x_5486_);
return v___x_5487_;
}
else
{
lean_object* v_value_5488_; lean_object* v_tail_5489_; lean_object* v___x_5490_; 
v_value_5488_ = lean_ctor_get(v_a_5478_, 1);
v_tail_5489_ = lean_ctor_get(v_a_5478_, 2);
v___x_5490_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_value_5488_, v___y_5480_, v___y_5481_, v___y_5482_, v___y_5483_, v___y_5484_);
if (lean_obj_tag(v___x_5490_) == 0)
{
lean_object* v_a_5491_; lean_object* v___x_5492_; 
v_a_5491_ = lean_ctor_get(v___x_5490_, 0);
lean_inc(v_a_5491_);
lean_dec_ref(v___x_5490_);
v___x_5492_ = l_Array_append___redArg(v_a_5479_, v_a_5491_);
lean_dec(v_a_5491_);
v_a_5478_ = v_tail_5489_;
v_a_5479_ = v___x_5492_;
goto _start;
}
else
{
lean_object* v_a_5494_; lean_object* v___x_5496_; uint8_t v_isShared_5497_; uint8_t v_isSharedCheck_5501_; 
lean_dec_ref(v_a_5479_);
v_a_5494_ = lean_ctor_get(v___x_5490_, 0);
v_isSharedCheck_5501_ = !lean_is_exclusive(v___x_5490_);
if (v_isSharedCheck_5501_ == 0)
{
v___x_5496_ = v___x_5490_;
v_isShared_5497_ = v_isSharedCheck_5501_;
goto v_resetjp_5495_;
}
else
{
lean_inc(v_a_5494_);
lean_dec(v___x_5490_);
v___x_5496_ = lean_box(0);
v_isShared_5497_ = v_isSharedCheck_5501_;
goto v_resetjp_5495_;
}
v_resetjp_5495_:
{
lean_object* v___x_5499_; 
if (v_isShared_5497_ == 0)
{
v___x_5499_ = v___x_5496_;
goto v_reusejp_5498_;
}
else
{
lean_object* v_reuseFailAlloc_5500_; 
v_reuseFailAlloc_5500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5500_, 0, v_a_5494_);
v___x_5499_ = v_reuseFailAlloc_5500_;
goto v_reusejp_5498_;
}
v_reusejp_5498_:
{
return v___x_5499_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg___boxed(lean_object* v_a_5502_, lean_object* v_a_5503_, lean_object* v___y_5504_, lean_object* v___y_5505_, lean_object* v___y_5506_, lean_object* v___y_5507_, lean_object* v___y_5508_, lean_object* v___y_5509_){
_start:
{
lean_object* v_res_5510_; 
v_res_5510_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5502_, v_a_5503_, v___y_5504_, v___y_5505_, v___y_5506_, v___y_5507_, v___y_5508_);
lean_dec(v___y_5508_);
lean_dec_ref(v___y_5507_);
lean_dec(v___y_5506_);
lean_dec_ref(v___y_5505_);
lean_dec(v___y_5504_);
lean_dec(v_a_5502_);
return v_res_5510_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg___boxed(lean_object* v_as_5511_, lean_object* v_sz_5512_, lean_object* v_i_5513_, lean_object* v_b_5514_, lean_object* v___y_5515_, lean_object* v___y_5516_, lean_object* v___y_5517_, lean_object* v___y_5518_, lean_object* v___y_5519_, lean_object* v___y_5520_){
_start:
{
size_t v_sz_boxed_5521_; size_t v_i_boxed_5522_; lean_object* v_res_5523_; 
v_sz_boxed_5521_ = lean_unbox_usize(v_sz_5512_);
lean_dec(v_sz_5512_);
v_i_boxed_5522_ = lean_unbox_usize(v_i_5513_);
lean_dec(v_i_5513_);
v_res_5523_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_as_5511_, v_sz_boxed_5521_, v_i_boxed_5522_, v_b_5514_, v___y_5515_, v___y_5516_, v___y_5517_, v___y_5518_, v___y_5519_);
lean_dec(v___y_5519_);
lean_dec_ref(v___y_5518_);
lean_dec(v___y_5517_);
lean_dec_ref(v___y_5516_);
lean_dec(v___y_5515_);
lean_dec_ref(v_as_5511_);
return v_res_5523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg___boxed(lean_object* v_next_5524_, lean_object* v_a_5525_, lean_object* v_a_5526_, lean_object* v_a_5527_, lean_object* v_a_5528_, lean_object* v_a_5529_, lean_object* v_a_5530_){
_start:
{
lean_object* v_res_5531_; 
v_res_5531_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5524_, v_a_5525_, v_a_5526_, v_a_5527_, v_a_5528_, v_a_5529_);
lean_dec(v_a_5529_);
lean_dec_ref(v_a_5528_);
lean_dec(v_a_5527_);
lean_dec_ref(v_a_5526_);
lean_dec(v_a_5525_);
lean_dec(v_next_5524_);
return v_res_5531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(lean_object* v_00_u03b1_5532_, lean_object* v_next_5533_, lean_object* v_a_5534_, lean_object* v_a_5535_, lean_object* v_a_5536_, lean_object* v_a_5537_, lean_object* v_a_5538_){
_start:
{
lean_object* v___x_5540_; 
v___x_5540_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5533_, v_a_5534_, v_a_5535_, v_a_5536_, v_a_5537_, v_a_5538_);
return v___x_5540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___boxed(lean_object* v_00_u03b1_5541_, lean_object* v_next_5542_, lean_object* v_a_5543_, lean_object* v_a_5544_, lean_object* v_a_5545_, lean_object* v_a_5546_, lean_object* v_a_5547_, lean_object* v_a_5548_){
_start:
{
lean_object* v_res_5549_; 
v_res_5549_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux(v_00_u03b1_5541_, v_next_5542_, v_a_5543_, v_a_5544_, v_a_5545_, v_a_5546_, v_a_5547_);
lean_dec(v_a_5547_);
lean_dec_ref(v_a_5546_);
lean_dec(v_a_5545_);
lean_dec_ref(v_a_5544_);
lean_dec(v_a_5543_);
lean_dec(v_next_5542_);
return v_res_5549_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(lean_object* v_00_u03b1_5550_, lean_object* v_a_5551_, lean_object* v_a_5552_, lean_object* v___y_5553_, lean_object* v___y_5554_, lean_object* v___y_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_){
_start:
{
lean_object* v___x_5559_; 
v___x_5559_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___redArg(v_a_5551_, v_a_5552_, v___y_5553_, v___y_5554_, v___y_5555_, v___y_5556_, v___y_5557_);
return v___x_5559_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0___boxed(lean_object* v_00_u03b1_5560_, lean_object* v_a_5561_, lean_object* v_a_5562_, lean_object* v___y_5563_, lean_object* v___y_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_, lean_object* v___y_5567_, lean_object* v___y_5568_){
_start:
{
lean_object* v_res_5569_; 
v_res_5569_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__0(v_00_u03b1_5560_, v_a_5561_, v_a_5562_, v___y_5563_, v___y_5564_, v___y_5565_, v___y_5566_, v___y_5567_);
lean_dec(v___y_5567_);
lean_dec_ref(v___y_5566_);
lean_dec(v___y_5565_);
lean_dec_ref(v___y_5564_);
lean_dec(v___y_5563_);
lean_dec(v_a_5561_);
return v_res_5569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(lean_object* v_00_u03b1_5570_, lean_object* v_as_5571_, size_t v_sz_5572_, size_t v_i_5573_, lean_object* v_b_5574_, lean_object* v___y_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_, lean_object* v___y_5579_){
_start:
{
lean_object* v___x_5581_; 
v___x_5581_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___redArg(v_as_5571_, v_sz_5572_, v_i_5573_, v_b_5574_, v___y_5575_, v___y_5576_, v___y_5577_, v___y_5578_, v___y_5579_);
return v___x_5581_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1___boxed(lean_object* v_00_u03b1_5582_, lean_object* v_as_5583_, lean_object* v_sz_5584_, lean_object* v_i_5585_, lean_object* v_b_5586_, lean_object* v___y_5587_, lean_object* v___y_5588_, lean_object* v___y_5589_, lean_object* v___y_5590_, lean_object* v___y_5591_, lean_object* v___y_5592_){
_start:
{
size_t v_sz_boxed_5593_; size_t v_i_boxed_5594_; lean_object* v_res_5595_; 
v_sz_boxed_5593_ = lean_unbox_usize(v_sz_5584_);
lean_dec(v_sz_5584_);
v_i_boxed_5594_ = lean_unbox_usize(v_i_5585_);
lean_dec(v_i_5585_);
v_res_5595_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_LazyDiscrTree_collectSubtreeAux_spec__1(v_00_u03b1_5582_, v_as_5583_, v_sz_boxed_5593_, v_i_boxed_5594_, v_b_5586_, v___y_5587_, v___y_5588_, v___y_5589_, v___y_5590_, v___y_5591_);
lean_dec(v___y_5591_);
lean_dec_ref(v___y_5590_);
lean_dec(v___y_5589_);
lean_dec_ref(v___y_5588_);
lean_dec(v___y_5587_);
lean_dec_ref(v_as_5583_);
return v_res_5595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(lean_object* v_next_5596_, lean_object* v_rest_5597_, lean_object* v_a_5598_, lean_object* v_a_5599_, lean_object* v_a_5600_, lean_object* v_a_5601_, lean_object* v_a_5602_){
_start:
{
lean_object* v___x_5604_; uint8_t v___x_5605_; 
v___x_5604_ = lean_unsigned_to_nat(0u);
v___x_5605_ = lean_nat_dec_eq(v_next_5596_, v___x_5604_);
if (v___x_5605_ == 0)
{
lean_object* v___x_5606_; 
v___x_5606_ = l_Lean_Meta_LazyDiscrTree_evalNode___redArg(v_next_5596_, v_a_5598_, v_a_5599_, v_a_5600_, v_a_5601_, v_a_5602_);
if (lean_obj_tag(v___x_5606_) == 0)
{
lean_object* v_a_5607_; lean_object* v_snd_5608_; 
v_a_5607_ = lean_ctor_get(v___x_5606_, 0);
lean_inc(v_a_5607_);
lean_dec_ref(v___x_5606_);
v_snd_5608_ = lean_ctor_get(v_a_5607_, 1);
lean_inc(v_snd_5608_);
lean_dec(v_a_5607_);
if (lean_obj_tag(v_rest_5597_) == 0)
{
lean_object* v___x_5609_; 
lean_dec(v_snd_5608_);
v___x_5609_ = l_Lean_Meta_LazyDiscrTree_collectSubtreeAux___redArg(v_next_5596_, v_a_5598_, v_a_5599_, v_a_5600_, v_a_5601_, v_a_5602_);
lean_dec(v_next_5596_);
return v___x_5609_;
}
else
{
lean_object* v_fst_5610_; lean_object* v_snd_5611_; lean_object* v_head_5612_; lean_object* v_tail_5613_; lean_object* v___x_5614_; uint8_t v___x_5615_; 
lean_dec(v_next_5596_);
v_fst_5610_ = lean_ctor_get(v_snd_5608_, 0);
lean_inc(v_fst_5610_);
v_snd_5611_ = lean_ctor_get(v_snd_5608_, 1);
lean_inc(v_snd_5611_);
lean_dec(v_snd_5608_);
v_head_5612_ = lean_ctor_get(v_rest_5597_, 0);
v_tail_5613_ = lean_ctor_get(v_rest_5597_, 1);
v___x_5614_ = lean_box(3);
v___x_5615_ = l_Lean_Meta_LazyDiscrTree_instBEqKey_beq(v_head_5612_, v___x_5614_);
if (v___x_5615_ == 0)
{
lean_object* v___x_5616_; 
lean_dec(v_fst_5610_);
v___x_5616_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_snd_5611_, v_head_5612_, v___x_5604_);
lean_dec(v_snd_5611_);
v_next_5596_ = v___x_5616_;
v_rest_5597_ = v_tail_5613_;
goto _start;
}
else
{
lean_dec(v_snd_5611_);
v_next_5596_ = v_fst_5610_;
v_rest_5597_ = v_tail_5613_;
goto _start;
}
}
}
else
{
lean_object* v_a_5619_; lean_object* v___x_5621_; uint8_t v_isShared_5622_; uint8_t v_isSharedCheck_5626_; 
lean_dec(v_next_5596_);
v_a_5619_ = lean_ctor_get(v___x_5606_, 0);
v_isSharedCheck_5626_ = !lean_is_exclusive(v___x_5606_);
if (v_isSharedCheck_5626_ == 0)
{
v___x_5621_ = v___x_5606_;
v_isShared_5622_ = v_isSharedCheck_5626_;
goto v_resetjp_5620_;
}
else
{
lean_inc(v_a_5619_);
lean_dec(v___x_5606_);
v___x_5621_ = lean_box(0);
v_isShared_5622_ = v_isSharedCheck_5626_;
goto v_resetjp_5620_;
}
v_resetjp_5620_:
{
lean_object* v___x_5624_; 
if (v_isShared_5622_ == 0)
{
v___x_5624_ = v___x_5621_;
goto v_reusejp_5623_;
}
else
{
lean_object* v_reuseFailAlloc_5625_; 
v_reuseFailAlloc_5625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5625_, 0, v_a_5619_);
v___x_5624_ = v_reuseFailAlloc_5625_;
goto v_reusejp_5623_;
}
v_reusejp_5623_:
{
return v___x_5624_;
}
}
}
}
else
{
lean_object* v___x_5627_; lean_object* v___x_5628_; 
lean_dec(v_next_5596_);
v___x_5627_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v___x_5628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5628_, 0, v___x_5627_);
return v___x_5628_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg___boxed(lean_object* v_next_5629_, lean_object* v_rest_5630_, lean_object* v_a_5631_, lean_object* v_a_5632_, lean_object* v_a_5633_, lean_object* v_a_5634_, lean_object* v_a_5635_, lean_object* v_a_5636_){
_start:
{
lean_object* v_res_5637_; 
v_res_5637_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(v_next_5629_, v_rest_5630_, v_a_5631_, v_a_5632_, v_a_5633_, v_a_5634_, v_a_5635_);
lean_dec(v_a_5635_);
lean_dec_ref(v_a_5634_);
lean_dec(v_a_5633_);
lean_dec_ref(v_a_5632_);
lean_dec(v_a_5631_);
lean_dec(v_rest_5630_);
return v_res_5637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux(lean_object* v_00_u03b1_5638_, lean_object* v_next_5639_, lean_object* v_rest_5640_, lean_object* v_a_5641_, lean_object* v_a_5642_, lean_object* v_a_5643_, lean_object* v_a_5644_, lean_object* v_a_5645_){
_start:
{
lean_object* v___x_5647_; 
v___x_5647_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux___redArg(v_next_5639_, v_rest_5640_, v_a_5641_, v_a_5642_, v_a_5643_, v_a_5644_, v_a_5645_);
return v___x_5647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed(lean_object* v_00_u03b1_5648_, lean_object* v_next_5649_, lean_object* v_rest_5650_, lean_object* v_a_5651_, lean_object* v_a_5652_, lean_object* v_a_5653_, lean_object* v_a_5654_, lean_object* v_a_5655_, lean_object* v_a_5656_){
_start:
{
lean_object* v_res_5657_; 
v_res_5657_ = l_Lean_Meta_LazyDiscrTree_extractKeyAux(v_00_u03b1_5648_, v_next_5649_, v_rest_5650_, v_a_5651_, v_a_5652_, v_a_5653_, v_a_5654_, v_a_5655_);
lean_dec(v_a_5655_);
lean_dec_ref(v_a_5654_);
lean_dec(v_a_5653_);
lean_dec_ref(v_a_5652_);
lean_dec(v_a_5651_);
lean_dec(v_rest_5650_);
return v_res_5657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg(lean_object* v_t_5658_, lean_object* v_path_5659_, lean_object* v_a_5660_, lean_object* v_a_5661_, lean_object* v_a_5662_, lean_object* v_a_5663_){
_start:
{
if (lean_obj_tag(v_path_5659_) == 0)
{
lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; 
v___x_5665_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v___x_5666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5666_, 0, v___x_5665_);
lean_ctor_set(v___x_5666_, 1, v_t_5658_);
v___x_5667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5667_, 0, v___x_5666_);
return v___x_5667_;
}
else
{
lean_object* v_head_5668_; lean_object* v_tail_5669_; lean_object* v_roots_5670_; lean_object* v___x_5671_; lean_object* v_idx_5672_; lean_object* v___x_5673_; lean_object* v___x_5674_; 
v_head_5668_ = lean_ctor_get(v_path_5659_, 0);
lean_inc(v_head_5668_);
v_tail_5669_ = lean_ctor_get(v_path_5659_, 1);
lean_inc(v_tail_5669_);
lean_dec_ref(v_path_5659_);
v_roots_5670_ = lean_ctor_get(v_t_5658_, 1);
v___x_5671_ = lean_unsigned_to_nat(0u);
v_idx_5672_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00Lean_Meta_LazyDiscrTree_dropKeyAux_spec__0___redArg(v_roots_5670_, v_head_5668_, v___x_5671_);
lean_dec(v_head_5668_);
v___x_5673_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_extractKeyAux___boxed), 9, 3);
lean_closure_set(v___x_5673_, 0, lean_box(0));
lean_closure_set(v___x_5673_, 1, v_idx_5672_);
lean_closure_set(v___x_5673_, 2, v_tail_5669_);
v___x_5674_ = l_Lean_Meta_LazyDiscrTree_runMatch___redArg(v_t_5658_, v___x_5673_, v_a_5660_, v_a_5661_, v_a_5662_, v_a_5663_);
return v___x_5674_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___redArg___boxed(lean_object* v_t_5675_, lean_object* v_path_5676_, lean_object* v_a_5677_, lean_object* v_a_5678_, lean_object* v_a_5679_, lean_object* v_a_5680_, lean_object* v_a_5681_){
_start:
{
lean_object* v_res_5682_; 
v_res_5682_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_t_5675_, v_path_5676_, v_a_5677_, v_a_5678_, v_a_5679_, v_a_5680_);
lean_dec(v_a_5680_);
lean_dec_ref(v_a_5679_);
lean_dec(v_a_5678_);
lean_dec_ref(v_a_5677_);
return v_res_5682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey(lean_object* v_00_u03b1_5683_, lean_object* v_t_5684_, lean_object* v_path_5685_, lean_object* v_a_5686_, lean_object* v_a_5687_, lean_object* v_a_5688_, lean_object* v_a_5689_){
_start:
{
lean_object* v___x_5691_; 
v___x_5691_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_t_5684_, v_path_5685_, v_a_5686_, v_a_5687_, v_a_5688_, v_a_5689_);
return v___x_5691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKey___boxed(lean_object* v_00_u03b1_5692_, lean_object* v_t_5693_, lean_object* v_path_5694_, lean_object* v_a_5695_, lean_object* v_a_5696_, lean_object* v_a_5697_, lean_object* v_a_5698_, lean_object* v_a_5699_){
_start:
{
lean_object* v_res_5700_; 
v_res_5700_ = l_Lean_Meta_LazyDiscrTree_extractKey(v_00_u03b1_5692_, v_t_5693_, v_path_5694_, v_a_5695_, v_a_5696_, v_a_5697_, v_a_5698_);
lean_dec(v_a_5698_);
lean_dec_ref(v_a_5697_);
lean_dec(v_a_5696_);
lean_dec_ref(v_a_5695_);
return v_res_5700_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(lean_object* v_as_x27_5701_, lean_object* v_b_5702_, lean_object* v___y_5703_, lean_object* v___y_5704_, lean_object* v___y_5705_, lean_object* v___y_5706_){
_start:
{
if (lean_obj_tag(v_as_x27_5701_) == 0)
{
lean_object* v___x_5708_; 
v___x_5708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5708_, 0, v_b_5702_);
return v___x_5708_;
}
else
{
lean_object* v_head_5709_; lean_object* v_tail_5710_; lean_object* v_fst_5711_; lean_object* v_snd_5712_; lean_object* v___x_5713_; 
v_head_5709_ = lean_ctor_get(v_as_x27_5701_, 0);
lean_inc(v_head_5709_);
v_tail_5710_ = lean_ctor_get(v_as_x27_5701_, 1);
lean_inc(v_tail_5710_);
lean_dec_ref(v_as_x27_5701_);
v_fst_5711_ = lean_ctor_get(v_b_5702_, 0);
lean_inc(v_fst_5711_);
v_snd_5712_ = lean_ctor_get(v_b_5702_, 1);
lean_inc(v_snd_5712_);
lean_dec_ref(v_b_5702_);
v___x_5713_ = l_Lean_Meta_LazyDiscrTree_extractKey___redArg(v_snd_5712_, v_head_5709_, v___y_5703_, v___y_5704_, v___y_5705_, v___y_5706_);
if (lean_obj_tag(v___x_5713_) == 0)
{
lean_object* v_a_5714_; lean_object* v_fst_5715_; lean_object* v_snd_5716_; lean_object* v___x_5718_; uint8_t v_isShared_5719_; uint8_t v_isSharedCheck_5725_; 
v_a_5714_ = lean_ctor_get(v___x_5713_, 0);
lean_inc(v_a_5714_);
lean_dec_ref(v___x_5713_);
v_fst_5715_ = lean_ctor_get(v_a_5714_, 0);
v_snd_5716_ = lean_ctor_get(v_a_5714_, 1);
v_isSharedCheck_5725_ = !lean_is_exclusive(v_a_5714_);
if (v_isSharedCheck_5725_ == 0)
{
v___x_5718_ = v_a_5714_;
v_isShared_5719_ = v_isSharedCheck_5725_;
goto v_resetjp_5717_;
}
else
{
lean_inc(v_snd_5716_);
lean_inc(v_fst_5715_);
lean_dec(v_a_5714_);
v___x_5718_ = lean_box(0);
v_isShared_5719_ = v_isSharedCheck_5725_;
goto v_resetjp_5717_;
}
v_resetjp_5717_:
{
lean_object* v___x_5720_; lean_object* v___x_5722_; 
v___x_5720_ = l_Array_append___redArg(v_fst_5711_, v_fst_5715_);
lean_dec(v_fst_5715_);
if (v_isShared_5719_ == 0)
{
lean_ctor_set(v___x_5718_, 0, v___x_5720_);
v___x_5722_ = v___x_5718_;
goto v_reusejp_5721_;
}
else
{
lean_object* v_reuseFailAlloc_5724_; 
v_reuseFailAlloc_5724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5724_, 0, v___x_5720_);
lean_ctor_set(v_reuseFailAlloc_5724_, 1, v_snd_5716_);
v___x_5722_ = v_reuseFailAlloc_5724_;
goto v_reusejp_5721_;
}
v_reusejp_5721_:
{
v_as_x27_5701_ = v_tail_5710_;
v_b_5702_ = v___x_5722_;
goto _start;
}
}
}
else
{
lean_dec(v_fst_5711_);
lean_dec(v_tail_5710_);
return v___x_5713_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg___boxed(lean_object* v_as_x27_5726_, lean_object* v_b_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_, lean_object* v___y_5730_, lean_object* v___y_5731_, lean_object* v___y_5732_){
_start:
{
lean_object* v_res_5733_; 
v_res_5733_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_as_x27_5726_, v_b_5727_, v___y_5728_, v___y_5729_, v___y_5730_, v___y_5731_);
lean_dec(v___y_5731_);
lean_dec_ref(v___y_5730_);
lean_dec(v___y_5729_);
lean_dec_ref(v___y_5728_);
return v_res_5733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(lean_object* v_t_5734_, lean_object* v_keys_5735_, lean_object* v_a_5736_, lean_object* v_a_5737_, lean_object* v_a_5738_, lean_object* v_a_5739_){
_start:
{
lean_object* v_allExtracted_5741_; lean_object* v___x_5742_; lean_object* v___x_5743_; 
v_allExtracted_5741_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v___x_5742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5742_, 0, v_allExtracted_5741_);
lean_ctor_set(v___x_5742_, 1, v_t_5734_);
v___x_5743_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_keys_5735_, v___x_5742_, v_a_5736_, v_a_5737_, v_a_5738_, v_a_5739_);
if (lean_obj_tag(v___x_5743_) == 0)
{
lean_object* v_a_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5760_; 
v_a_5744_ = lean_ctor_get(v___x_5743_, 0);
v_isSharedCheck_5760_ = !lean_is_exclusive(v___x_5743_);
if (v_isSharedCheck_5760_ == 0)
{
v___x_5746_ = v___x_5743_;
v_isShared_5747_ = v_isSharedCheck_5760_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_a_5744_);
lean_dec(v___x_5743_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5760_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
lean_object* v_fst_5748_; lean_object* v_snd_5749_; lean_object* v___x_5751_; uint8_t v_isShared_5752_; uint8_t v_isSharedCheck_5759_; 
v_fst_5748_ = lean_ctor_get(v_a_5744_, 0);
v_snd_5749_ = lean_ctor_get(v_a_5744_, 1);
v_isSharedCheck_5759_ = !lean_is_exclusive(v_a_5744_);
if (v_isSharedCheck_5759_ == 0)
{
v___x_5751_ = v_a_5744_;
v_isShared_5752_ = v_isSharedCheck_5759_;
goto v_resetjp_5750_;
}
else
{
lean_inc(v_snd_5749_);
lean_inc(v_fst_5748_);
lean_dec(v_a_5744_);
v___x_5751_ = lean_box(0);
v_isShared_5752_ = v_isSharedCheck_5759_;
goto v_resetjp_5750_;
}
v_resetjp_5750_:
{
lean_object* v___x_5754_; 
if (v_isShared_5752_ == 0)
{
v___x_5754_ = v___x_5751_;
goto v_reusejp_5753_;
}
else
{
lean_object* v_reuseFailAlloc_5758_; 
v_reuseFailAlloc_5758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5758_, 0, v_fst_5748_);
lean_ctor_set(v_reuseFailAlloc_5758_, 1, v_snd_5749_);
v___x_5754_ = v_reuseFailAlloc_5758_;
goto v_reusejp_5753_;
}
v_reusejp_5753_:
{
lean_object* v___x_5756_; 
if (v_isShared_5747_ == 0)
{
lean_ctor_set(v___x_5746_, 0, v___x_5754_);
v___x_5756_ = v___x_5746_;
goto v_reusejp_5755_;
}
else
{
lean_object* v_reuseFailAlloc_5757_; 
v_reuseFailAlloc_5757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5757_, 0, v___x_5754_);
v___x_5756_ = v_reuseFailAlloc_5757_;
goto v_reusejp_5755_;
}
v_reusejp_5755_:
{
return v___x_5756_;
}
}
}
}
}
else
{
return v___x_5743_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___redArg___boxed(lean_object* v_t_5761_, lean_object* v_keys_5762_, lean_object* v_a_5763_, lean_object* v_a_5764_, lean_object* v_a_5765_, lean_object* v_a_5766_, lean_object* v_a_5767_){
_start:
{
lean_object* v_res_5768_; 
v_res_5768_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_t_5761_, v_keys_5762_, v_a_5763_, v_a_5764_, v_a_5765_, v_a_5766_);
lean_dec(v_a_5766_);
lean_dec_ref(v_a_5765_);
lean_dec(v_a_5764_);
lean_dec_ref(v_a_5763_);
return v_res_5768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys(lean_object* v_00_u03b1_5769_, lean_object* v_t_5770_, lean_object* v_keys_5771_, lean_object* v_a_5772_, lean_object* v_a_5773_, lean_object* v_a_5774_, lean_object* v_a_5775_){
_start:
{
lean_object* v___x_5777_; 
v___x_5777_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_t_5770_, v_keys_5771_, v_a_5772_, v_a_5773_, v_a_5774_, v_a_5775_);
return v___x_5777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_extractKeys___boxed(lean_object* v_00_u03b1_5778_, lean_object* v_t_5779_, lean_object* v_keys_5780_, lean_object* v_a_5781_, lean_object* v_a_5782_, lean_object* v_a_5783_, lean_object* v_a_5784_, lean_object* v_a_5785_){
_start:
{
lean_object* v_res_5786_; 
v_res_5786_ = l_Lean_Meta_LazyDiscrTree_extractKeys(v_00_u03b1_5778_, v_t_5779_, v_keys_5780_, v_a_5781_, v_a_5782_, v_a_5783_, v_a_5784_);
lean_dec(v_a_5784_);
lean_dec_ref(v_a_5783_);
lean_dec(v_a_5782_);
lean_dec_ref(v_a_5781_);
return v_res_5786_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(lean_object* v_00_u03b1_5787_, lean_object* v_as_5788_, lean_object* v_as_x27_5789_, lean_object* v_b_5790_, lean_object* v_a_5791_, lean_object* v___y_5792_, lean_object* v___y_5793_, lean_object* v___y_5794_, lean_object* v___y_5795_){
_start:
{
lean_object* v___x_5797_; 
v___x_5797_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___redArg(v_as_x27_5789_, v_b_5790_, v___y_5792_, v___y_5793_, v___y_5794_, v___y_5795_);
return v___x_5797_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0___boxed(lean_object* v_00_u03b1_5798_, lean_object* v_as_5799_, lean_object* v_as_x27_5800_, lean_object* v_b_5801_, lean_object* v_a_5802_, lean_object* v___y_5803_, lean_object* v___y_5804_, lean_object* v___y_5805_, lean_object* v___y_5806_, lean_object* v___y_5807_){
_start:
{
lean_object* v_res_5808_; 
v_res_5808_ = l_List_forIn_x27_loop___at___00Lean_Meta_LazyDiscrTree_extractKeys_spec__0(v_00_u03b1_5798_, v_as_5799_, v_as_x27_5800_, v_b_5801_, v_a_5802_, v___y_5803_, v___y_5804_, v___y_5805_, v___y_5806_);
lean_dec(v___y_5806_);
lean_dec_ref(v___y_5805_);
lean_dec(v___y_5804_);
lean_dec_ref(v___y_5803_);
lean_dec(v_as_5799_);
return v_res_5808_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1(void){
_start:
{
lean_object* v___x_5810_; lean_object* v___x_5811_; 
v___x_5810_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__0));
v___x_5811_ = l_Lean_stringToMessageData(v___x_5810_);
return v___x_5811_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3(void){
_start:
{
lean_object* v___x_5813_; lean_object* v___x_5814_; 
v___x_5813_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__2));
v___x_5814_ = l_Lean_stringToMessageData(v___x_5813_);
return v___x_5814_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5(void){
_start:
{
lean_object* v___x_5816_; lean_object* v___x_5817_; 
v___x_5816_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__4));
v___x_5817_ = l_Lean_stringToMessageData(v___x_5816_);
return v___x_5817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(lean_object* v_inst_5818_, lean_object* v_inst_5819_, lean_object* v_inst_5820_, lean_object* v_inst_5821_, lean_object* v_f_5822_){
_start:
{
lean_object* v_module_5823_; lean_object* v_const_5824_; lean_object* v_exception_5825_; lean_object* v___x_5826_; lean_object* v___x_5827_; lean_object* v___x_5828_; lean_object* v___x_5829_; lean_object* v___x_5830_; lean_object* v___x_5831_; lean_object* v___x_5832_; lean_object* v___x_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; 
v_module_5823_ = lean_ctor_get(v_f_5822_, 0);
lean_inc(v_module_5823_);
v_const_5824_ = lean_ctor_get(v_f_5822_, 1);
lean_inc(v_const_5824_);
v_exception_5825_ = lean_ctor_get(v_f_5822_, 2);
lean_inc_ref(v_exception_5825_);
lean_dec_ref(v_f_5822_);
v___x_5826_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_5827_ = l_Lean_MessageData_ofName(v_const_5824_);
v___x_5828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5828_, 0, v___x_5826_);
lean_ctor_set(v___x_5828_, 1, v___x_5827_);
v___x_5829_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_5830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5830_, 0, v___x_5828_);
lean_ctor_set(v___x_5830_, 1, v___x_5829_);
v___x_5831_ = l_Lean_MessageData_ofName(v_module_5823_);
v___x_5832_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5832_, 0, v___x_5830_);
lean_ctor_set(v___x_5832_, 1, v___x_5831_);
v___x_5833_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_5834_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5834_, 0, v___x_5832_);
lean_ctor_set(v___x_5834_, 1, v___x_5833_);
v___x_5835_ = l_Lean_Exception_toMessageData(v_exception_5825_);
v___x_5836_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5836_, 0, v___x_5834_);
lean_ctor_set(v___x_5836_, 1, v___x_5835_);
v___x_5837_ = l_Lean_logError___redArg(v_inst_5818_, v_inst_5819_, v_inst_5820_, v_inst_5821_, v___x_5836_);
return v___x_5837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure(lean_object* v_m_5838_, lean_object* v_inst_5839_, lean_object* v_inst_5840_, lean_object* v_inst_5841_, lean_object* v_inst_5842_, lean_object* v_f_5843_){
_start:
{
lean_object* v___x_5844_; 
v___x_5844_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(v_inst_5839_, v_inst_5840_, v_inst_5841_, v_inst_5842_, v_f_5843_);
return v___x_5844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0(lean_object* v_toApplicative_5845_, lean_object* v_tasks_5846_, lean_object* v_t_5847_){
_start:
{
lean_object* v_toPure_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; 
v_toPure_5848_ = lean_ctor_get(v_toApplicative_5845_, 1);
lean_inc(v_toPure_5848_);
lean_dec_ref(v_toApplicative_5845_);
v___x_5849_ = lean_array_push(v_tasks_5846_, v_t_5847_);
v___x_5850_ = lean_apply_2(v_toPure_5848_, lean_box(0), v___x_5849_);
return v___x_5850_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(lean_object* v_inst_5851_, lean_object* v_inst_5852_, lean_object* v_cctx_5853_, lean_object* v_env_5854_, lean_object* v_act_5855_, lean_object* v_constantsPerTask_5856_, lean_object* v_n_5857_, lean_object* v_ngen_5858_, lean_object* v_tasks_5859_, lean_object* v_start_5860_, lean_object* v_cnt_5861_, lean_object* v_idx_5862_){
_start:
{
lean_object* v___x_5863_; lean_object* v_moduleData_5864_; lean_object* v___x_5865_; uint8_t v___x_5866_; 
v___x_5863_ = l_Lean_Environment_header(v_env_5854_);
v_moduleData_5864_ = lean_ctor_get(v___x_5863_, 6);
lean_inc_ref(v_moduleData_5864_);
lean_dec_ref(v___x_5863_);
v___x_5865_ = lean_array_get_size(v_moduleData_5864_);
v___x_5866_ = lean_nat_dec_lt(v_idx_5862_, v___x_5865_);
if (v___x_5866_ == 0)
{
uint8_t v___x_5867_; 
lean_dec_ref(v_moduleData_5864_);
lean_dec(v_idx_5862_);
lean_dec(v_cnt_5861_);
lean_dec(v_constantsPerTask_5856_);
v___x_5867_ = lean_nat_dec_lt(v_start_5860_, v_n_5857_);
if (v___x_5867_ == 0)
{
lean_object* v_toApplicative_5868_; lean_object* v_toPure_5869_; lean_object* v___x_5870_; 
lean_dec(v_start_5860_);
lean_dec_ref(v_ngen_5858_);
lean_dec(v_n_5857_);
lean_dec_ref(v_act_5855_);
lean_dec_ref(v_env_5854_);
lean_dec_ref(v_cctx_5853_);
lean_dec(v_inst_5852_);
v_toApplicative_5868_ = lean_ctor_get(v_inst_5851_, 0);
lean_inc_ref(v_toApplicative_5868_);
lean_dec_ref(v_inst_5851_);
v_toPure_5869_ = lean_ctor_get(v_toApplicative_5868_, 1);
lean_inc(v_toPure_5869_);
lean_dec_ref(v_toApplicative_5868_);
v___x_5870_ = lean_apply_2(v_toPure_5869_, lean_box(0), v_tasks_5859_);
return v___x_5870_;
}
else
{
lean_object* v_namePrefix_5871_; lean_object* v_idx_5872_; lean_object* v___x_5874_; uint8_t v_isShared_5875_; uint8_t v_isSharedCheck_5889_; 
v_namePrefix_5871_ = lean_ctor_get(v_ngen_5858_, 0);
v_idx_5872_ = lean_ctor_get(v_ngen_5858_, 1);
v_isSharedCheck_5889_ = !lean_is_exclusive(v_ngen_5858_);
if (v_isSharedCheck_5889_ == 0)
{
v___x_5874_ = v_ngen_5858_;
v_isShared_5875_ = v_isSharedCheck_5889_;
goto v_resetjp_5873_;
}
else
{
lean_inc(v_idx_5872_);
lean_inc(v_namePrefix_5871_);
lean_dec(v_ngen_5858_);
v___x_5874_ = lean_box(0);
v_isShared_5875_ = v_isSharedCheck_5889_;
goto v_resetjp_5873_;
}
v_resetjp_5873_:
{
lean_object* v_toApplicative_5876_; lean_object* v_toBind_5877_; lean_object* v___f_5878_; lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5882_; 
v_toApplicative_5876_ = lean_ctor_get(v_inst_5851_, 0);
lean_inc_ref(v_toApplicative_5876_);
v_toBind_5877_ = lean_ctor_get(v_inst_5851_, 1);
lean_inc(v_toBind_5877_);
lean_dec_ref(v_inst_5851_);
v___f_5878_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__0), 3, 2);
lean_closure_set(v___f_5878_, 0, v_toApplicative_5876_);
lean_closure_set(v___f_5878_, 1, v_tasks_5859_);
v___x_5879_ = l_Lean_Name_num___override(v_namePrefix_5871_, v_idx_5872_);
v___x_5880_ = lean_unsigned_to_nat(1u);
if (v_isShared_5875_ == 0)
{
lean_ctor_set(v___x_5874_, 1, v___x_5880_);
lean_ctor_set(v___x_5874_, 0, v___x_5879_);
v___x_5882_ = v___x_5874_;
goto v_reusejp_5881_;
}
else
{
lean_object* v_reuseFailAlloc_5888_; 
v_reuseFailAlloc_5888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5888_, 0, v___x_5879_);
lean_ctor_set(v_reuseFailAlloc_5888_, 1, v___x_5880_);
v___x_5882_ = v_reuseFailAlloc_5888_;
goto v_reusejp_5881_;
}
v_reusejp_5881_:
{
lean_object* v___x_5883_; lean_object* v___x_5884_; lean_object* v___x_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; 
v___x_5883_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_5883_, 0, lean_box(0));
lean_closure_set(v___x_5883_, 1, v_cctx_5853_);
lean_closure_set(v___x_5883_, 2, v___x_5882_);
lean_closure_set(v___x_5883_, 3, v_env_5854_);
lean_closure_set(v___x_5883_, 4, v_act_5855_);
lean_closure_set(v___x_5883_, 5, v_start_5860_);
lean_closure_set(v___x_5883_, 6, v_n_5857_);
v___x_5884_ = lean_unsigned_to_nat(0u);
v___x_5885_ = lean_alloc_closure((void*)(l_BaseIO_asTask___boxed), 4, 3);
lean_closure_set(v___x_5885_, 0, lean_box(0));
lean_closure_set(v___x_5885_, 1, v___x_5883_);
lean_closure_set(v___x_5885_, 2, v___x_5884_);
v___x_5886_ = lean_apply_2(v_inst_5852_, lean_box(0), v___x_5885_);
v___x_5887_ = lean_apply_4(v_toBind_5877_, lean_box(0), lean_box(0), v___x_5886_, v___f_5878_);
return v___x_5887_;
}
}
}
}
else
{
lean_object* v_mdata_5890_; lean_object* v_constants_5891_; lean_object* v___x_5892_; lean_object* v_cnt_5893_; uint8_t v___x_5894_; 
v_mdata_5890_ = lean_array_fget(v_moduleData_5864_, v_idx_5862_);
lean_dec_ref(v_moduleData_5864_);
v_constants_5891_ = lean_ctor_get(v_mdata_5890_, 2);
lean_inc_ref(v_constants_5891_);
lean_dec(v_mdata_5890_);
v___x_5892_ = lean_array_get_size(v_constants_5891_);
lean_dec_ref(v_constants_5891_);
v_cnt_5893_ = lean_nat_add(v_cnt_5861_, v___x_5892_);
lean_dec(v_cnt_5861_);
v___x_5894_ = lean_nat_dec_lt(v_constantsPerTask_5856_, v_cnt_5893_);
if (v___x_5894_ == 0)
{
lean_object* v___x_5895_; lean_object* v___x_5896_; 
v___x_5895_ = lean_unsigned_to_nat(1u);
v___x_5896_ = lean_nat_add(v_idx_5862_, v___x_5895_);
lean_dec(v_idx_5862_);
v_cnt_5861_ = v_cnt_5893_;
v_idx_5862_ = v___x_5896_;
goto _start;
}
else
{
lean_object* v_namePrefix_5898_; lean_object* v_idx_5899_; lean_object* v___x_5901_; uint8_t v_isShared_5902_; uint8_t v_isSharedCheck_5918_; 
lean_dec(v_cnt_5893_);
v_namePrefix_5898_ = lean_ctor_get(v_ngen_5858_, 0);
v_idx_5899_ = lean_ctor_get(v_ngen_5858_, 1);
v_isSharedCheck_5918_ = !lean_is_exclusive(v_ngen_5858_);
if (v_isSharedCheck_5918_ == 0)
{
v___x_5901_ = v_ngen_5858_;
v_isShared_5902_ = v_isSharedCheck_5918_;
goto v_resetjp_5900_;
}
else
{
lean_inc(v_idx_5899_);
lean_inc(v_namePrefix_5898_);
lean_dec(v_ngen_5858_);
v___x_5901_ = lean_box(0);
v_isShared_5902_ = v_isSharedCheck_5918_;
goto v_resetjp_5900_;
}
v_resetjp_5900_:
{
lean_object* v_toBind_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5907_; 
v_toBind_5903_ = lean_ctor_get(v_inst_5851_, 1);
lean_inc(v_toBind_5903_);
lean_inc(v_idx_5899_);
lean_inc(v_namePrefix_5898_);
v___x_5904_ = l_Lean_Name_num___override(v_namePrefix_5898_, v_idx_5899_);
v___x_5905_ = lean_unsigned_to_nat(1u);
if (v_isShared_5902_ == 0)
{
lean_ctor_set(v___x_5901_, 1, v___x_5905_);
lean_ctor_set(v___x_5901_, 0, v___x_5904_);
v___x_5907_ = v___x_5901_;
goto v_reusejp_5906_;
}
else
{
lean_object* v_reuseFailAlloc_5917_; 
v_reuseFailAlloc_5917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5917_, 0, v___x_5904_);
lean_ctor_set(v_reuseFailAlloc_5917_, 1, v___x_5905_);
v___x_5907_ = v_reuseFailAlloc_5917_;
goto v_reusejp_5906_;
}
v_reusejp_5906_:
{
lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___f_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; lean_object* v___x_5914_; lean_object* v___x_5915_; lean_object* v___x_5916_; 
v___x_5908_ = lean_nat_add(v_idx_5899_, v___x_5905_);
lean_dec(v_idx_5899_);
v___x_5909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5909_, 0, v_namePrefix_5898_);
lean_ctor_set(v___x_5909_, 1, v___x_5908_);
v___x_5910_ = lean_nat_add(v_idx_5862_, v___x_5905_);
lean_dec(v_idx_5862_);
lean_inc(v___x_5910_);
lean_inc_ref(v_act_5855_);
lean_inc_ref(v_env_5854_);
lean_inc_ref(v_cctx_5853_);
lean_inc(v_inst_5852_);
v___f_5911_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1), 11, 10);
lean_closure_set(v___f_5911_, 0, v_tasks_5859_);
lean_closure_set(v___f_5911_, 1, v_inst_5851_);
lean_closure_set(v___f_5911_, 2, v_inst_5852_);
lean_closure_set(v___f_5911_, 3, v_cctx_5853_);
lean_closure_set(v___f_5911_, 4, v_env_5854_);
lean_closure_set(v___f_5911_, 5, v_act_5855_);
lean_closure_set(v___f_5911_, 6, v_constantsPerTask_5856_);
lean_closure_set(v___f_5911_, 7, v_n_5857_);
lean_closure_set(v___f_5911_, 8, v___x_5909_);
lean_closure_set(v___f_5911_, 9, v___x_5910_);
v___x_5912_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_5912_, 0, lean_box(0));
lean_closure_set(v___x_5912_, 1, v_cctx_5853_);
lean_closure_set(v___x_5912_, 2, v___x_5907_);
lean_closure_set(v___x_5912_, 3, v_env_5854_);
lean_closure_set(v___x_5912_, 4, v_act_5855_);
lean_closure_set(v___x_5912_, 5, v_start_5860_);
lean_closure_set(v___x_5912_, 6, v___x_5910_);
v___x_5913_ = lean_unsigned_to_nat(0u);
v___x_5914_ = lean_alloc_closure((void*)(l_BaseIO_asTask___boxed), 4, 3);
lean_closure_set(v___x_5914_, 0, lean_box(0));
lean_closure_set(v___x_5914_, 1, v___x_5912_);
lean_closure_set(v___x_5914_, 2, v___x_5913_);
v___x_5915_ = lean_apply_2(v_inst_5852_, lean_box(0), v___x_5914_);
v___x_5916_ = lean_apply_4(v_toBind_5903_, lean_box(0), lean_box(0), v___x_5915_, v___f_5911_);
return v___x_5916_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg___lam__1(lean_object* v_tasks_5919_, lean_object* v_inst_5920_, lean_object* v_inst_5921_, lean_object* v_cctx_5922_, lean_object* v_env_5923_, lean_object* v_act_5924_, lean_object* v_constantsPerTask_5925_, lean_object* v_n_5926_, lean_object* v___x_5927_, lean_object* v___x_5928_, lean_object* v_t_5929_){
_start:
{
lean_object* v___x_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; 
v___x_5930_ = lean_array_push(v_tasks_5919_, v_t_5929_);
v___x_5931_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_5928_);
v___x_5932_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5920_, v_inst_5921_, v_cctx_5922_, v_env_5923_, v_act_5924_, v_constantsPerTask_5925_, v_n_5926_, v___x_5927_, v___x_5930_, v___x_5928_, v___x_5931_, v___x_5928_);
return v___x_5932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go(lean_object* v_m_5933_, lean_object* v_00_u03b1_5934_, lean_object* v_inst_5935_, lean_object* v_inst_5936_, lean_object* v_cctx_5937_, lean_object* v_env_5938_, lean_object* v_act_5939_, lean_object* v_constantsPerTask_5940_, lean_object* v_n_5941_, lean_object* v_ngen_5942_, lean_object* v_tasks_5943_, lean_object* v_start_5944_, lean_object* v_cnt_5945_, lean_object* v_idx_5946_){
_start:
{
lean_object* v___x_5947_; 
v___x_5947_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_5935_, v_inst_5936_, v_cctx_5937_, v_env_5938_, v_act_5939_, v_constantsPerTask_5940_, v_n_5941_, v_ngen_5942_, v_tasks_5943_, v_start_5944_, v_cnt_5945_, v_idx_5946_);
return v___x_5947_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter___redArg(lean_object* v_x_5948_, lean_object* v_h__1_5949_){
_start:
{
lean_object* v_fst_5950_; lean_object* v_snd_5951_; lean_object* v___x_5952_; 
v_fst_5950_ = lean_ctor_get(v_x_5948_, 0);
lean_inc(v_fst_5950_);
v_snd_5951_ = lean_ctor_get(v_x_5948_, 1);
lean_inc(v_snd_5951_);
lean_dec_ref(v_x_5948_);
v___x_5952_ = lean_apply_2(v_h__1_5949_, v_fst_5950_, v_snd_5951_);
return v___x_5952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_getChildNgen_match__1_splitter(lean_object* v_motive_5953_, lean_object* v_x_5954_, lean_object* v_h__1_5955_){
_start:
{
lean_object* v_fst_5956_; lean_object* v_snd_5957_; lean_object* v___x_5958_; 
v_fst_5956_ = lean_ctor_get(v_x_5954_, 0);
lean_inc(v_fst_5956_);
v_snd_5957_ = lean_ctor_get(v_x_5954_, 1);
lean_inc(v_snd_5957_);
lean_dec_ref(v_x_5954_);
v___x_5958_ = lean_apply_2(v_h__1_5955_, v_fst_5956_, v_snd_5957_);
return v___x_5958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0(lean_object* v_inst_5959_, lean_object* v_inst_5960_, lean_object* v_inst_5961_, lean_object* v_inst_5962_, lean_object* v_x_5963_, lean_object* v___y_5964_){
_start:
{
lean_object* v___x_5965_; 
v___x_5965_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg(v_inst_5959_, v_inst_5960_, v_inst_5961_, v_inst_5962_, v___y_5964_);
return v___x_5965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1(lean_object* v_r_5966_, lean_object* v_toPure_5967_, lean_object* v_____r_5968_){
_start:
{
lean_object* v_tree_5969_; lean_object* v___x_5970_; lean_object* v___x_5971_; 
v_tree_5969_ = lean_ctor_get(v_r_5966_, 0);
lean_inc_ref(v_tree_5969_);
lean_dec_ref(v_r_5966_);
v___x_5970_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_5969_);
v___x_5971_ = lean_apply_2(v_toPure_5967_, lean_box(0), v___x_5970_);
return v___x_5971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2(lean_object* v___x_5972_, lean_object* v___x_5973_, lean_object* v_toPure_5974_, lean_object* v_toBind_5975_, lean_object* v_inst_5976_, lean_object* v___f_5977_, lean_object* v_tasks_5978_){
_start:
{
lean_object* v___x_5979_; lean_object* v___x_5980_; lean_object* v___x_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v_r_5984_; lean_object* v_errors_5985_; lean_object* v___f_5986_; lean_object* v___x_5987_; lean_object* v___x_5988_; uint8_t v___x_5989_; 
v___x_5979_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__1, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__1);
lean_inc(v___x_5972_);
v___x_5980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5980_, 0, v___x_5972_);
lean_ctor_set(v___x_5980_, 1, v___x_5979_);
v___x_5981_ = lean_mk_empty_array_with_capacity(v___x_5972_);
lean_inc_ref(v___x_5981_);
v___x_5982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5982_, 0, v___x_5980_);
lean_ctor_set(v___x_5982_, 1, v___x_5981_);
v___x_5983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5983_, 0, v___x_5982_);
lean_ctor_set(v___x_5983_, 1, v___x_5981_);
v_r_5984_ = l_Lean_Meta_LazyDiscrTree_combineGet___redArg(v___x_5973_, v___x_5983_, v_tasks_5978_);
v_errors_5985_ = lean_ctor_get(v_r_5984_, 1);
lean_inc_ref(v_errors_5985_);
lean_inc(v_toPure_5974_);
v___f_5986_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__1), 3, 2);
lean_closure_set(v___f_5986_, 0, v_r_5984_);
lean_closure_set(v___f_5986_, 1, v_toPure_5974_);
v___x_5987_ = lean_array_get_size(v_errors_5985_);
v___x_5988_ = lean_box(0);
v___x_5989_ = lean_nat_dec_lt(v___x_5972_, v___x_5987_);
lean_dec(v___x_5972_);
if (v___x_5989_ == 0)
{
lean_object* v___x_5990_; lean_object* v___x_5991_; 
lean_dec_ref(v_errors_5985_);
lean_dec(v___f_5977_);
lean_dec_ref(v_inst_5976_);
v___x_5990_ = lean_apply_2(v_toPure_5974_, lean_box(0), v___x_5988_);
v___x_5991_ = lean_apply_4(v_toBind_5975_, lean_box(0), lean_box(0), v___x_5990_, v___f_5986_);
return v___x_5991_;
}
else
{
uint8_t v___x_5992_; 
v___x_5992_ = lean_nat_dec_le(v___x_5987_, v___x_5987_);
if (v___x_5992_ == 0)
{
if (v___x_5989_ == 0)
{
lean_object* v___x_5993_; lean_object* v___x_5994_; 
lean_dec_ref(v_errors_5985_);
lean_dec(v___f_5977_);
lean_dec_ref(v_inst_5976_);
v___x_5993_ = lean_apply_2(v_toPure_5974_, lean_box(0), v___x_5988_);
v___x_5994_ = lean_apply_4(v_toBind_5975_, lean_box(0), lean_box(0), v___x_5993_, v___f_5986_);
return v___x_5994_;
}
else
{
size_t v___x_5995_; size_t v___x_5996_; lean_object* v___x_5997_; lean_object* v___x_5998_; 
lean_dec(v_toPure_5974_);
v___x_5995_ = ((size_t)0ULL);
v___x_5996_ = lean_usize_of_nat(v___x_5987_);
v___x_5997_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_5976_, v___f_5977_, v_errors_5985_, v___x_5995_, v___x_5996_, v___x_5988_);
v___x_5998_ = lean_apply_4(v_toBind_5975_, lean_box(0), lean_box(0), v___x_5997_, v___f_5986_);
return v___x_5998_;
}
}
else
{
size_t v___x_5999_; size_t v___x_6000_; lean_object* v___x_6001_; lean_object* v___x_6002_; 
lean_dec(v_toPure_5974_);
v___x_5999_ = ((size_t)0ULL);
v___x_6000_ = lean_usize_of_nat(v___x_5987_);
v___x_6001_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_5976_, v___f_5977_, v_errors_5985_, v___x_5999_, v___x_6000_, v___x_5988_);
v___x_6002_ = lean_apply_4(v_toBind_5975_, lean_box(0), lean_box(0), v___x_6001_, v___f_5986_);
return v___x_6002_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(lean_object* v_inst_6005_, lean_object* v_inst_6006_, lean_object* v_inst_6007_, lean_object* v_inst_6008_, lean_object* v_inst_6009_, lean_object* v_cctx_6010_, lean_object* v_ngen_6011_, lean_object* v_env_6012_, lean_object* v_act_6013_, lean_object* v_constantsPerTask_6014_){
_start:
{
lean_object* v___x_6015_; lean_object* v_moduleData_6016_; lean_object* v_toApplicative_6017_; lean_object* v_toBind_6018_; lean_object* v_n_6019_; lean_object* v___x_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; lean_object* v_toPure_6023_; lean_object* v___f_6024_; lean_object* v___x_6025_; lean_object* v___f_6026_; lean_object* v___x_6027_; 
v___x_6015_ = l_Lean_Environment_header(v_env_6012_);
v_moduleData_6016_ = lean_ctor_get(v___x_6015_, 6);
lean_inc_ref(v_moduleData_6016_);
lean_dec_ref(v___x_6015_);
v_toApplicative_6017_ = lean_ctor_get(v_inst_6005_, 0);
v_toBind_6018_ = lean_ctor_get(v_inst_6005_, 1);
lean_inc_n(v_toBind_6018_, 2);
v_n_6019_ = lean_array_get_size(v_moduleData_6016_);
lean_dec_ref(v_moduleData_6016_);
v___x_6020_ = lean_unsigned_to_nat(0u);
v___x_6021_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
lean_inc_ref_n(v_inst_6005_, 2);
v___x_6022_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___redArg(v_inst_6005_, v_inst_6009_, v_cctx_6010_, v_env_6012_, v_act_6013_, v_constantsPerTask_6014_, v_n_6019_, v_ngen_6011_, v___x_6021_, v___x_6020_, v___x_6020_, v___x_6020_);
v_toPure_6023_ = lean_ctor_get(v_toApplicative_6017_, 1);
lean_inc(v_toPure_6023_);
v___f_6024_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__0), 6, 4);
lean_closure_set(v___f_6024_, 0, v_inst_6005_);
lean_closure_set(v___f_6024_, 1, v_inst_6006_);
lean_closure_set(v___f_6024_, 2, v_inst_6007_);
lean_closure_set(v___f_6024_, 3, v_inst_6008_);
v___x_6025_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_InitResults_instAppend___closed__0));
v___f_6026_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___lam__2), 7, 6);
lean_closure_set(v___f_6026_, 0, v___x_6020_);
lean_closure_set(v___f_6026_, 1, v___x_6025_);
lean_closure_set(v___f_6026_, 2, v_toPure_6023_);
lean_closure_set(v___f_6026_, 3, v_toBind_6018_);
lean_closure_set(v___f_6026_, 4, v_inst_6005_);
lean_closure_set(v___f_6026_, 5, v___f_6024_);
v___x_6027_ = lean_apply_4(v_toBind_6018_, lean_box(0), lean_box(0), v___x_6022_, v___f_6026_);
return v___x_6027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree(lean_object* v_m_6028_, lean_object* v_00_u03b1_6029_, lean_object* v_inst_6030_, lean_object* v_inst_6031_, lean_object* v_inst_6032_, lean_object* v_inst_6033_, lean_object* v_inst_6034_, lean_object* v_cctx_6035_, lean_object* v_ngen_6036_, lean_object* v_env_6037_, lean_object* v_act_6038_, lean_object* v_constantsPerTask_6039_){
_start:
{
lean_object* v___x_6040_; 
v___x_6040_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg(v_inst_6030_, v_inst_6031_, v_inst_6032_, v_inst_6033_, v_inst_6034_, v_cctx_6035_, v_ngen_6036_, v_env_6037_, v_act_6038_, v_constantsPerTask_6039_);
return v___x_6040_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0(void){
_start:
{
lean_object* v___x_6041_; lean_object* v___x_6042_; lean_object* v___x_6043_; 
v___x_6041_ = lean_box(0);
v___x_6042_ = lean_unsigned_to_nat(16u);
v___x_6043_ = lean_mk_array(v___x_6042_, v___x_6041_);
return v___x_6043_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1(void){
_start:
{
lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6046_; 
v___x_6044_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0, &l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__0);
v___x_6045_ = lean_unsigned_to_nat(0u);
v___x_6046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6046_, 0, v___x_6045_);
lean_ctor_set(v___x_6046_, 1, v___x_6044_);
return v___x_6046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createTreeCtx(lean_object* v_ctx_6047_){
_start:
{
lean_object* v_fileName_6048_; lean_object* v_fileMap_6049_; lean_object* v_options_6050_; lean_object* v_maxRecDepth_6051_; lean_object* v_ref_6052_; lean_object* v___x_6054_; uint8_t v_isShared_6055_; uint8_t v_isSharedCheck_6067_; 
v_fileName_6048_ = lean_ctor_get(v_ctx_6047_, 0);
v_fileMap_6049_ = lean_ctor_get(v_ctx_6047_, 1);
v_options_6050_ = lean_ctor_get(v_ctx_6047_, 2);
v_maxRecDepth_6051_ = lean_ctor_get(v_ctx_6047_, 4);
v_ref_6052_ = lean_ctor_get(v_ctx_6047_, 5);
v_isSharedCheck_6067_ = !lean_is_exclusive(v_ctx_6047_);
if (v_isSharedCheck_6067_ == 0)
{
lean_object* v_unused_6068_; lean_object* v_unused_6069_; lean_object* v_unused_6070_; lean_object* v_unused_6071_; lean_object* v_unused_6072_; lean_object* v_unused_6073_; lean_object* v_unused_6074_; lean_object* v_unused_6075_; lean_object* v_unused_6076_; 
v_unused_6068_ = lean_ctor_get(v_ctx_6047_, 13);
lean_dec(v_unused_6068_);
v_unused_6069_ = lean_ctor_get(v_ctx_6047_, 12);
lean_dec(v_unused_6069_);
v_unused_6070_ = lean_ctor_get(v_ctx_6047_, 11);
lean_dec(v_unused_6070_);
v_unused_6071_ = lean_ctor_get(v_ctx_6047_, 10);
lean_dec(v_unused_6071_);
v_unused_6072_ = lean_ctor_get(v_ctx_6047_, 9);
lean_dec(v_unused_6072_);
v_unused_6073_ = lean_ctor_get(v_ctx_6047_, 8);
lean_dec(v_unused_6073_);
v_unused_6074_ = lean_ctor_get(v_ctx_6047_, 7);
lean_dec(v_unused_6074_);
v_unused_6075_ = lean_ctor_get(v_ctx_6047_, 6);
lean_dec(v_unused_6075_);
v_unused_6076_ = lean_ctor_get(v_ctx_6047_, 3);
lean_dec(v_unused_6076_);
v___x_6054_ = v_ctx_6047_;
v_isShared_6055_ = v_isSharedCheck_6067_;
goto v_resetjp_6053_;
}
else
{
lean_inc(v_ref_6052_);
lean_inc(v_maxRecDepth_6051_);
lean_inc(v_options_6050_);
lean_inc(v_fileMap_6049_);
lean_inc(v_fileName_6048_);
lean_dec(v_ctx_6047_);
v___x_6054_ = lean_box(0);
v_isShared_6055_ = v_isSharedCheck_6067_;
goto v_resetjp_6053_;
}
v_resetjp_6053_:
{
lean_object* v___x_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; uint8_t v___x_6060_; lean_object* v___x_6061_; uint8_t v___x_6062_; lean_object* v___x_6063_; lean_object* v___x_6065_; 
v___x_6056_ = lean_unsigned_to_nat(0u);
v___x_6057_ = lean_box(0);
v___x_6058_ = lean_box(0);
v___x_6059_ = l_Lean_firstFrontendMacroScope;
v___x_6060_ = l_Lean_getDiag(v_options_6050_);
v___x_6061_ = lean_box(0);
v___x_6062_ = 0;
v___x_6063_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1, &l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_createTreeCtx___closed__1);
if (v_isShared_6055_ == 0)
{
lean_ctor_set(v___x_6054_, 13, v___x_6063_);
lean_ctor_set(v___x_6054_, 12, v___x_6061_);
lean_ctor_set(v___x_6054_, 11, v___x_6059_);
lean_ctor_set(v___x_6054_, 10, v___x_6057_);
lean_ctor_set(v___x_6054_, 9, v___x_6056_);
lean_ctor_set(v___x_6054_, 8, v___x_6056_);
lean_ctor_set(v___x_6054_, 7, v___x_6058_);
lean_ctor_set(v___x_6054_, 6, v___x_6057_);
lean_ctor_set(v___x_6054_, 3, v___x_6056_);
v___x_6065_ = v___x_6054_;
goto v_reusejp_6064_;
}
else
{
lean_object* v_reuseFailAlloc_6066_; 
v_reuseFailAlloc_6066_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_6066_, 0, v_fileName_6048_);
lean_ctor_set(v_reuseFailAlloc_6066_, 1, v_fileMap_6049_);
lean_ctor_set(v_reuseFailAlloc_6066_, 2, v_options_6050_);
lean_ctor_set(v_reuseFailAlloc_6066_, 3, v___x_6056_);
lean_ctor_set(v_reuseFailAlloc_6066_, 4, v_maxRecDepth_6051_);
lean_ctor_set(v_reuseFailAlloc_6066_, 5, v_ref_6052_);
lean_ctor_set(v_reuseFailAlloc_6066_, 6, v___x_6057_);
lean_ctor_set(v_reuseFailAlloc_6066_, 7, v___x_6058_);
lean_ctor_set(v_reuseFailAlloc_6066_, 8, v___x_6056_);
lean_ctor_set(v_reuseFailAlloc_6066_, 9, v___x_6056_);
lean_ctor_set(v_reuseFailAlloc_6066_, 10, v___x_6057_);
lean_ctor_set(v_reuseFailAlloc_6066_, 11, v___x_6059_);
lean_ctor_set(v_reuseFailAlloc_6066_, 12, v___x_6061_);
lean_ctor_set(v_reuseFailAlloc_6066_, 13, v___x_6063_);
v___x_6065_ = v_reuseFailAlloc_6066_;
goto v_reusejp_6064_;
}
v_reusejp_6064_:
{
lean_ctor_set_uint8(v___x_6065_, sizeof(void*)*14, v___x_6060_);
lean_ctor_set_uint8(v___x_6065_, sizeof(void*)*14 + 1, v___x_6062_);
return v___x_6065_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(lean_object* v_category_6077_, lean_object* v_opts_6078_, lean_object* v_act_6079_, lean_object* v_decl_6080_, lean_object* v___y_6081_, lean_object* v___y_6082_, lean_object* v___y_6083_, lean_object* v___y_6084_){
_start:
{
lean_object* v___x_6086_; lean_object* v___x_6087_; 
lean_inc(v___y_6084_);
lean_inc_ref(v___y_6083_);
lean_inc(v___y_6082_);
lean_inc_ref(v___y_6081_);
v___x_6086_ = lean_apply_4(v_act_6079_, v___y_6081_, v___y_6082_, v___y_6083_, v___y_6084_);
v___x_6087_ = l_Lean_profileitIOUnsafe___redArg(v_category_6077_, v_opts_6078_, v___x_6086_, v_decl_6080_);
return v___x_6087_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg___boxed(lean_object* v_category_6088_, lean_object* v_opts_6089_, lean_object* v_act_6090_, lean_object* v_decl_6091_, lean_object* v___y_6092_, lean_object* v___y_6093_, lean_object* v___y_6094_, lean_object* v___y_6095_, lean_object* v___y_6096_){
_start:
{
lean_object* v_res_6097_; 
v_res_6097_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v_category_6088_, v_opts_6089_, v_act_6090_, v_decl_6091_, v___y_6092_, v___y_6093_, v___y_6094_, v___y_6095_);
lean_dec(v___y_6095_);
lean_dec_ref(v___y_6094_);
lean_dec(v___y_6093_);
lean_dec_ref(v___y_6092_);
lean_dec_ref(v_opts_6089_);
lean_dec_ref(v_category_6088_);
return v_res_6097_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(lean_object* v_00_u03b1_6098_, lean_object* v_category_6099_, lean_object* v_opts_6100_, lean_object* v_act_6101_, lean_object* v_decl_6102_, lean_object* v___y_6103_, lean_object* v___y_6104_, lean_object* v___y_6105_, lean_object* v___y_6106_){
_start:
{
lean_object* v___x_6108_; 
v___x_6108_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v_category_6099_, v_opts_6100_, v_act_6101_, v_decl_6102_, v___y_6103_, v___y_6104_, v___y_6105_, v___y_6106_);
return v___x_6108_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___boxed(lean_object* v_00_u03b1_6109_, lean_object* v_category_6110_, lean_object* v_opts_6111_, lean_object* v_act_6112_, lean_object* v_decl_6113_, lean_object* v___y_6114_, lean_object* v___y_6115_, lean_object* v___y_6116_, lean_object* v___y_6117_, lean_object* v___y_6118_){
_start:
{
lean_object* v_res_6119_; 
v_res_6119_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1(v_00_u03b1_6109_, v_category_6110_, v_opts_6111_, v_act_6112_, v_decl_6113_, v___y_6114_, v___y_6115_, v___y_6116_, v___y_6117_);
lean_dec(v___y_6117_);
lean_dec_ref(v___y_6116_);
lean_dec(v___y_6115_);
lean_dec_ref(v___y_6114_);
lean_dec_ref(v_opts_6111_);
lean_dec_ref(v_category_6110_);
return v_res_6119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(lean_object* v_cctx_6120_, lean_object* v_env_6121_, lean_object* v_act_6122_, lean_object* v_constantsPerTask_6123_, lean_object* v_n_6124_, lean_object* v_ngen_6125_, lean_object* v_tasks_6126_, lean_object* v_start_6127_, lean_object* v_cnt_6128_, lean_object* v_idx_6129_){
_start:
{
lean_object* v___x_6131_; lean_object* v_moduleData_6132_; lean_object* v___x_6133_; uint8_t v___x_6134_; 
v___x_6131_ = l_Lean_Environment_header(v_env_6121_);
v_moduleData_6132_ = lean_ctor_get(v___x_6131_, 6);
lean_inc_ref(v_moduleData_6132_);
lean_dec_ref(v___x_6131_);
v___x_6133_ = lean_array_get_size(v_moduleData_6132_);
v___x_6134_ = lean_nat_dec_lt(v_idx_6129_, v___x_6133_);
if (v___x_6134_ == 0)
{
uint8_t v___x_6135_; 
lean_dec_ref(v_moduleData_6132_);
lean_dec(v_idx_6129_);
lean_dec(v_cnt_6128_);
v___x_6135_ = lean_nat_dec_lt(v_start_6127_, v_n_6124_);
if (v___x_6135_ == 0)
{
lean_object* v___x_6136_; 
lean_dec(v_start_6127_);
lean_dec_ref(v_ngen_6125_);
lean_dec(v_n_6124_);
lean_dec_ref(v_act_6122_);
lean_dec_ref(v_env_6121_);
lean_dec_ref(v_cctx_6120_);
v___x_6136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6136_, 0, v_tasks_6126_);
return v___x_6136_;
}
else
{
lean_object* v_namePrefix_6137_; lean_object* v_idx_6138_; lean_object* v___x_6140_; uint8_t v_isShared_6141_; uint8_t v_isSharedCheck_6152_; 
v_namePrefix_6137_ = lean_ctor_get(v_ngen_6125_, 0);
v_idx_6138_ = lean_ctor_get(v_ngen_6125_, 1);
v_isSharedCheck_6152_ = !lean_is_exclusive(v_ngen_6125_);
if (v_isSharedCheck_6152_ == 0)
{
v___x_6140_ = v_ngen_6125_;
v_isShared_6141_ = v_isSharedCheck_6152_;
goto v_resetjp_6139_;
}
else
{
lean_inc(v_idx_6138_);
lean_inc(v_namePrefix_6137_);
lean_dec(v_ngen_6125_);
v___x_6140_ = lean_box(0);
v_isShared_6141_ = v_isSharedCheck_6152_;
goto v_resetjp_6139_;
}
v_resetjp_6139_:
{
lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v___x_6145_; 
v___x_6142_ = l_Lean_Name_num___override(v_namePrefix_6137_, v_idx_6138_);
v___x_6143_ = lean_unsigned_to_nat(1u);
if (v_isShared_6141_ == 0)
{
lean_ctor_set(v___x_6140_, 1, v___x_6143_);
lean_ctor_set(v___x_6140_, 0, v___x_6142_);
v___x_6145_ = v___x_6140_;
goto v_reusejp_6144_;
}
else
{
lean_object* v_reuseFailAlloc_6151_; 
v_reuseFailAlloc_6151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6151_, 0, v___x_6142_);
lean_ctor_set(v_reuseFailAlloc_6151_, 1, v___x_6143_);
v___x_6145_ = v_reuseFailAlloc_6151_;
goto v_reusejp_6144_;
}
v_reusejp_6144_:
{
lean_object* v___x_6146_; lean_object* v___x_6147_; lean_object* v___x_6148_; lean_object* v___x_6149_; lean_object* v___x_6150_; 
v___x_6146_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_6146_, 0, lean_box(0));
lean_closure_set(v___x_6146_, 1, v_cctx_6120_);
lean_closure_set(v___x_6146_, 2, v___x_6145_);
lean_closure_set(v___x_6146_, 3, v_env_6121_);
lean_closure_set(v___x_6146_, 4, v_act_6122_);
lean_closure_set(v___x_6146_, 5, v_start_6127_);
lean_closure_set(v___x_6146_, 6, v_n_6124_);
v___x_6147_ = lean_unsigned_to_nat(0u);
v___x_6148_ = lean_io_as_task(v___x_6146_, v___x_6147_);
v___x_6149_ = lean_array_push(v_tasks_6126_, v___x_6148_);
v___x_6150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6150_, 0, v___x_6149_);
return v___x_6150_;
}
}
}
}
else
{
lean_object* v_mdata_6153_; lean_object* v_constants_6154_; lean_object* v___x_6155_; lean_object* v_cnt_6156_; uint8_t v___x_6157_; 
v_mdata_6153_ = lean_array_fget(v_moduleData_6132_, v_idx_6129_);
lean_dec_ref(v_moduleData_6132_);
v_constants_6154_ = lean_ctor_get(v_mdata_6153_, 2);
lean_inc_ref(v_constants_6154_);
lean_dec(v_mdata_6153_);
v___x_6155_ = lean_array_get_size(v_constants_6154_);
lean_dec_ref(v_constants_6154_);
v_cnt_6156_ = lean_nat_add(v_cnt_6128_, v___x_6155_);
lean_dec(v_cnt_6128_);
v___x_6157_ = lean_nat_dec_lt(v_constantsPerTask_6123_, v_cnt_6156_);
if (v___x_6157_ == 0)
{
lean_object* v___x_6158_; lean_object* v___x_6159_; 
v___x_6158_ = lean_unsigned_to_nat(1u);
v___x_6159_ = lean_nat_add(v_idx_6129_, v___x_6158_);
lean_dec(v_idx_6129_);
v_cnt_6128_ = v_cnt_6156_;
v_idx_6129_ = v___x_6159_;
goto _start;
}
else
{
lean_object* v_namePrefix_6161_; lean_object* v_idx_6162_; lean_object* v___x_6164_; uint8_t v_isShared_6165_; uint8_t v_isSharedCheck_6179_; 
lean_dec(v_cnt_6156_);
v_namePrefix_6161_ = lean_ctor_get(v_ngen_6125_, 0);
v_idx_6162_ = lean_ctor_get(v_ngen_6125_, 1);
v_isSharedCheck_6179_ = !lean_is_exclusive(v_ngen_6125_);
if (v_isSharedCheck_6179_ == 0)
{
v___x_6164_ = v_ngen_6125_;
v_isShared_6165_ = v_isSharedCheck_6179_;
goto v_resetjp_6163_;
}
else
{
lean_inc(v_idx_6162_);
lean_inc(v_namePrefix_6161_);
lean_dec(v_ngen_6125_);
v___x_6164_ = lean_box(0);
v_isShared_6165_ = v_isSharedCheck_6179_;
goto v_resetjp_6163_;
}
v_resetjp_6163_:
{
lean_object* v___x_6166_; lean_object* v___x_6167_; lean_object* v___x_6169_; 
lean_inc(v_idx_6162_);
lean_inc(v_namePrefix_6161_);
v___x_6166_ = l_Lean_Name_num___override(v_namePrefix_6161_, v_idx_6162_);
v___x_6167_ = lean_unsigned_to_nat(1u);
if (v_isShared_6165_ == 0)
{
lean_ctor_set(v___x_6164_, 1, v___x_6167_);
lean_ctor_set(v___x_6164_, 0, v___x_6166_);
v___x_6169_ = v___x_6164_;
goto v_reusejp_6168_;
}
else
{
lean_object* v_reuseFailAlloc_6178_; 
v_reuseFailAlloc_6178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6178_, 0, v___x_6166_);
lean_ctor_set(v_reuseFailAlloc_6178_, 1, v___x_6167_);
v___x_6169_ = v_reuseFailAlloc_6178_;
goto v_reusejp_6168_;
}
v_reusejp_6168_:
{
lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; 
v___x_6170_ = lean_nat_add(v_idx_6129_, v___x_6167_);
lean_dec(v_idx_6129_);
lean_inc_n(v___x_6170_, 2);
lean_inc_ref(v_act_6122_);
lean_inc_ref(v_env_6121_);
lean_inc_ref(v_cctx_6120_);
v___x_6171_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createImportedEnvironmentSeq___boxed), 8, 7);
lean_closure_set(v___x_6171_, 0, lean_box(0));
lean_closure_set(v___x_6171_, 1, v_cctx_6120_);
lean_closure_set(v___x_6171_, 2, v___x_6169_);
lean_closure_set(v___x_6171_, 3, v_env_6121_);
lean_closure_set(v___x_6171_, 4, v_act_6122_);
lean_closure_set(v___x_6171_, 5, v_start_6127_);
lean_closure_set(v___x_6171_, 6, v___x_6170_);
v___x_6172_ = lean_unsigned_to_nat(0u);
v___x_6173_ = lean_io_as_task(v___x_6171_, v___x_6172_);
v___x_6174_ = lean_nat_add(v_idx_6162_, v___x_6167_);
lean_dec(v_idx_6162_);
v___x_6175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6175_, 0, v_namePrefix_6161_);
lean_ctor_set(v___x_6175_, 1, v___x_6174_);
v___x_6176_ = lean_array_push(v_tasks_6126_, v___x_6173_);
v_ngen_6125_ = v___x_6175_;
v_tasks_6126_ = v___x_6176_;
v_start_6127_ = v___x_6170_;
v_cnt_6128_ = v___x_6172_;
v_idx_6129_ = v___x_6170_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg___boxed(lean_object* v_cctx_6180_, lean_object* v_env_6181_, lean_object* v_act_6182_, lean_object* v_constantsPerTask_6183_, lean_object* v_n_6184_, lean_object* v_ngen_6185_, lean_object* v_tasks_6186_, lean_object* v_start_6187_, lean_object* v_cnt_6188_, lean_object* v_idx_6189_, lean_object* v___y_6190_){
_start:
{
lean_object* v_res_6191_; 
v_res_6191_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6180_, v_env_6181_, v_act_6182_, v_constantsPerTask_6183_, v_n_6184_, v_ngen_6185_, v_tasks_6186_, v_start_6187_, v_cnt_6188_, v_idx_6189_);
lean_dec(v_constantsPerTask_6183_);
return v_res_6191_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(uint8_t v___y_6200_, uint8_t v_suppressElabErrors_6201_, lean_object* v_x_6202_){
_start:
{
if (lean_obj_tag(v_x_6202_) == 1)
{
lean_object* v_pre_6203_; 
v_pre_6203_ = lean_ctor_get(v_x_6202_, 0);
switch(lean_obj_tag(v_pre_6203_))
{
case 1:
{
lean_object* v_pre_6204_; 
v_pre_6204_ = lean_ctor_get(v_pre_6203_, 0);
switch(lean_obj_tag(v_pre_6204_))
{
case 0:
{
lean_object* v_str_6205_; lean_object* v_str_6206_; lean_object* v___x_6207_; uint8_t v___x_6208_; 
v_str_6205_ = lean_ctor_get(v_x_6202_, 1);
v_str_6206_ = lean_ctor_get(v_pre_6203_, 1);
v___x_6207_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__0));
v___x_6208_ = lean_string_dec_eq(v_str_6206_, v___x_6207_);
if (v___x_6208_ == 0)
{
lean_object* v___x_6209_; uint8_t v___x_6210_; 
v___x_6209_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__1));
v___x_6210_ = lean_string_dec_eq(v_str_6206_, v___x_6209_);
if (v___x_6210_ == 0)
{
return v___y_6200_;
}
else
{
lean_object* v___x_6211_; uint8_t v___x_6212_; 
v___x_6211_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__2));
v___x_6212_ = lean_string_dec_eq(v_str_6205_, v___x_6211_);
if (v___x_6212_ == 0)
{
return v___y_6200_;
}
else
{
return v_suppressElabErrors_6201_;
}
}
}
else
{
lean_object* v___x_6213_; uint8_t v___x_6214_; 
v___x_6213_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__3));
v___x_6214_ = lean_string_dec_eq(v_str_6205_, v___x_6213_);
if (v___x_6214_ == 0)
{
return v___y_6200_;
}
else
{
return v_suppressElabErrors_6201_;
}
}
}
case 1:
{
lean_object* v_pre_6215_; 
v_pre_6215_ = lean_ctor_get(v_pre_6204_, 0);
if (lean_obj_tag(v_pre_6215_) == 0)
{
lean_object* v_str_6216_; lean_object* v_str_6217_; lean_object* v_str_6218_; lean_object* v___x_6219_; uint8_t v___x_6220_; 
v_str_6216_ = lean_ctor_get(v_x_6202_, 1);
v_str_6217_ = lean_ctor_get(v_pre_6203_, 1);
v_str_6218_ = lean_ctor_get(v_pre_6204_, 1);
v___x_6219_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__4));
v___x_6220_ = lean_string_dec_eq(v_str_6218_, v___x_6219_);
if (v___x_6220_ == 0)
{
return v___y_6200_;
}
else
{
lean_object* v___x_6221_; uint8_t v___x_6222_; 
v___x_6221_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__5));
v___x_6222_ = lean_string_dec_eq(v_str_6217_, v___x_6221_);
if (v___x_6222_ == 0)
{
return v___y_6200_;
}
else
{
lean_object* v___x_6223_; uint8_t v___x_6224_; 
v___x_6223_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__6));
v___x_6224_ = lean_string_dec_eq(v_str_6216_, v___x_6223_);
if (v___x_6224_ == 0)
{
return v___y_6200_;
}
else
{
return v_suppressElabErrors_6201_;
}
}
}
}
else
{
return v___y_6200_;
}
}
default: 
{
return v___y_6200_;
}
}
}
case 0:
{
lean_object* v_str_6225_; lean_object* v___x_6226_; uint8_t v___x_6227_; 
v_str_6225_ = lean_ctor_get(v_x_6202_, 1);
v___x_6226_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___closed__7));
v___x_6227_ = lean_string_dec_eq(v_str_6225_, v___x_6226_);
if (v___x_6227_ == 0)
{
return v___y_6200_;
}
else
{
return v_suppressElabErrors_6201_;
}
}
default: 
{
return v___y_6200_;
}
}
}
else
{
return v___y_6200_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed(lean_object* v___y_6228_, lean_object* v_suppressElabErrors_6229_, lean_object* v_x_6230_){
_start:
{
uint8_t v___y_8412__boxed_6231_; uint8_t v_suppressElabErrors_boxed_6232_; uint8_t v_res_6233_; lean_object* v_r_6234_; 
v___y_8412__boxed_6231_ = lean_unbox(v___y_6228_);
v_suppressElabErrors_boxed_6232_ = lean_unbox(v_suppressElabErrors_6229_);
v_res_6233_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0(v___y_8412__boxed_6231_, v_suppressElabErrors_boxed_6232_, v_x_6230_);
lean_dec(v_x_6230_);
v_r_6234_ = lean_box(v_res_6233_);
return v_r_6234_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(lean_object* v_ref_6236_, lean_object* v_msgData_6237_, uint8_t v_severity_6238_, uint8_t v_isSilent_6239_, lean_object* v___y_6240_, lean_object* v___y_6241_, lean_object* v___y_6242_, lean_object* v___y_6243_){
_start:
{
lean_object* v___y_6246_; lean_object* v___y_6247_; uint8_t v___y_6248_; lean_object* v___y_6249_; uint8_t v___y_6250_; lean_object* v___y_6251_; lean_object* v___y_6252_; lean_object* v___y_6253_; lean_object* v___y_6254_; lean_object* v___y_6282_; lean_object* v___y_6283_; lean_object* v___y_6284_; uint8_t v___y_6285_; lean_object* v___y_6286_; uint8_t v___y_6287_; uint8_t v___y_6288_; lean_object* v___y_6289_; lean_object* v___y_6307_; lean_object* v___y_6308_; lean_object* v___y_6309_; uint8_t v___y_6310_; uint8_t v___y_6311_; uint8_t v___y_6312_; lean_object* v___y_6313_; lean_object* v___y_6314_; lean_object* v___y_6318_; lean_object* v___y_6319_; lean_object* v___y_6320_; uint8_t v___y_6321_; lean_object* v___y_6322_; uint8_t v___y_6323_; uint8_t v___y_6324_; uint8_t v___x_6329_; lean_object* v___y_6331_; lean_object* v___y_6332_; lean_object* v___y_6333_; lean_object* v___y_6334_; uint8_t v___y_6335_; uint8_t v___y_6336_; uint8_t v___y_6337_; uint8_t v___y_6339_; uint8_t v___x_6354_; 
v___x_6329_ = 2;
v___x_6354_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6238_, v___x_6329_);
if (v___x_6354_ == 0)
{
v___y_6339_ = v___x_6354_;
goto v___jp_6338_;
}
else
{
uint8_t v___x_6355_; 
lean_inc_ref(v_msgData_6237_);
v___x_6355_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_6237_);
v___y_6339_ = v___x_6355_;
goto v___jp_6338_;
}
v___jp_6245_:
{
lean_object* v___x_6255_; lean_object* v_currNamespace_6256_; lean_object* v_openDecls_6257_; lean_object* v_env_6258_; lean_object* v_nextMacroScope_6259_; lean_object* v_ngen_6260_; lean_object* v_auxDeclNGen_6261_; lean_object* v_traceState_6262_; lean_object* v_cache_6263_; lean_object* v_messages_6264_; lean_object* v_infoState_6265_; lean_object* v_snapshotTasks_6266_; lean_object* v___x_6268_; uint8_t v_isShared_6269_; uint8_t v_isSharedCheck_6280_; 
v___x_6255_ = lean_st_ref_take(v___y_6254_);
v_currNamespace_6256_ = lean_ctor_get(v___y_6253_, 6);
v_openDecls_6257_ = lean_ctor_get(v___y_6253_, 7);
v_env_6258_ = lean_ctor_get(v___x_6255_, 0);
v_nextMacroScope_6259_ = lean_ctor_get(v___x_6255_, 1);
v_ngen_6260_ = lean_ctor_get(v___x_6255_, 2);
v_auxDeclNGen_6261_ = lean_ctor_get(v___x_6255_, 3);
v_traceState_6262_ = lean_ctor_get(v___x_6255_, 4);
v_cache_6263_ = lean_ctor_get(v___x_6255_, 5);
v_messages_6264_ = lean_ctor_get(v___x_6255_, 6);
v_infoState_6265_ = lean_ctor_get(v___x_6255_, 7);
v_snapshotTasks_6266_ = lean_ctor_get(v___x_6255_, 8);
v_isSharedCheck_6280_ = !lean_is_exclusive(v___x_6255_);
if (v_isSharedCheck_6280_ == 0)
{
v___x_6268_ = v___x_6255_;
v_isShared_6269_ = v_isSharedCheck_6280_;
goto v_resetjp_6267_;
}
else
{
lean_inc(v_snapshotTasks_6266_);
lean_inc(v_infoState_6265_);
lean_inc(v_messages_6264_);
lean_inc(v_cache_6263_);
lean_inc(v_traceState_6262_);
lean_inc(v_auxDeclNGen_6261_);
lean_inc(v_ngen_6260_);
lean_inc(v_nextMacroScope_6259_);
lean_inc(v_env_6258_);
lean_dec(v___x_6255_);
v___x_6268_ = lean_box(0);
v_isShared_6269_ = v_isSharedCheck_6280_;
goto v_resetjp_6267_;
}
v_resetjp_6267_:
{
lean_object* v___x_6270_; lean_object* v___x_6271_; lean_object* v___x_6272_; lean_object* v___x_6273_; lean_object* v___x_6275_; 
lean_inc(v_openDecls_6257_);
lean_inc(v_currNamespace_6256_);
v___x_6270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6270_, 0, v_currNamespace_6256_);
lean_ctor_set(v___x_6270_, 1, v_openDecls_6257_);
v___x_6271_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6271_, 0, v___x_6270_);
lean_ctor_set(v___x_6271_, 1, v___y_6251_);
lean_inc_ref(v___y_6249_);
lean_inc_ref(v___y_6246_);
v___x_6272_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_6272_, 0, v___y_6246_);
lean_ctor_set(v___x_6272_, 1, v___y_6247_);
lean_ctor_set(v___x_6272_, 2, v___y_6252_);
lean_ctor_set(v___x_6272_, 3, v___y_6249_);
lean_ctor_set(v___x_6272_, 4, v___x_6271_);
lean_ctor_set_uint8(v___x_6272_, sizeof(void*)*5, v___y_6248_);
lean_ctor_set_uint8(v___x_6272_, sizeof(void*)*5 + 1, v___y_6250_);
lean_ctor_set_uint8(v___x_6272_, sizeof(void*)*5 + 2, v_isSilent_6239_);
v___x_6273_ = l_Lean_MessageLog_add(v___x_6272_, v_messages_6264_);
if (v_isShared_6269_ == 0)
{
lean_ctor_set(v___x_6268_, 6, v___x_6273_);
v___x_6275_ = v___x_6268_;
goto v_reusejp_6274_;
}
else
{
lean_object* v_reuseFailAlloc_6279_; 
v_reuseFailAlloc_6279_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6279_, 0, v_env_6258_);
lean_ctor_set(v_reuseFailAlloc_6279_, 1, v_nextMacroScope_6259_);
lean_ctor_set(v_reuseFailAlloc_6279_, 2, v_ngen_6260_);
lean_ctor_set(v_reuseFailAlloc_6279_, 3, v_auxDeclNGen_6261_);
lean_ctor_set(v_reuseFailAlloc_6279_, 4, v_traceState_6262_);
lean_ctor_set(v_reuseFailAlloc_6279_, 5, v_cache_6263_);
lean_ctor_set(v_reuseFailAlloc_6279_, 6, v___x_6273_);
lean_ctor_set(v_reuseFailAlloc_6279_, 7, v_infoState_6265_);
lean_ctor_set(v_reuseFailAlloc_6279_, 8, v_snapshotTasks_6266_);
v___x_6275_ = v_reuseFailAlloc_6279_;
goto v_reusejp_6274_;
}
v_reusejp_6274_:
{
lean_object* v___x_6276_; lean_object* v___x_6277_; lean_object* v___x_6278_; 
v___x_6276_ = lean_st_ref_set(v___y_6254_, v___x_6275_);
v___x_6277_ = lean_box(0);
v___x_6278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6278_, 0, v___x_6277_);
return v___x_6278_;
}
}
}
v___jp_6281_:
{
lean_object* v___x_6290_; lean_object* v___x_6291_; lean_object* v_a_6292_; lean_object* v___x_6294_; uint8_t v_isShared_6295_; uint8_t v_isSharedCheck_6305_; 
v___x_6290_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_6237_);
v___x_6291_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_LazyDiscrTree_pushArgs_spec__0_spec__0(v___x_6290_, v___y_6240_, v___y_6241_, v___y_6242_, v___y_6243_);
v_a_6292_ = lean_ctor_get(v___x_6291_, 0);
v_isSharedCheck_6305_ = !lean_is_exclusive(v___x_6291_);
if (v_isSharedCheck_6305_ == 0)
{
v___x_6294_ = v___x_6291_;
v_isShared_6295_ = v_isSharedCheck_6305_;
goto v_resetjp_6293_;
}
else
{
lean_inc(v_a_6292_);
lean_dec(v___x_6291_);
v___x_6294_ = lean_box(0);
v_isShared_6295_ = v_isSharedCheck_6305_;
goto v_resetjp_6293_;
}
v_resetjp_6293_:
{
lean_object* v___x_6296_; lean_object* v___x_6297_; lean_object* v___x_6298_; lean_object* v___x_6299_; 
lean_inc_ref_n(v___y_6286_, 2);
v___x_6296_ = l_Lean_FileMap_toPosition(v___y_6286_, v___y_6284_);
lean_dec(v___y_6284_);
v___x_6297_ = l_Lean_FileMap_toPosition(v___y_6286_, v___y_6289_);
lean_dec(v___y_6289_);
v___x_6298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6298_, 0, v___x_6297_);
v___x_6299_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0));
if (v___y_6287_ == 0)
{
lean_del_object(v___x_6294_);
lean_dec_ref(v___y_6282_);
v___y_6246_ = v___y_6283_;
v___y_6247_ = v___x_6296_;
v___y_6248_ = v___y_6285_;
v___y_6249_ = v___x_6299_;
v___y_6250_ = v___y_6288_;
v___y_6251_ = v_a_6292_;
v___y_6252_ = v___x_6298_;
v___y_6253_ = v___y_6242_;
v___y_6254_ = v___y_6243_;
goto v___jp_6245_;
}
else
{
uint8_t v___x_6300_; 
lean_inc(v_a_6292_);
v___x_6300_ = l_Lean_MessageData_hasTag(v___y_6282_, v_a_6292_);
if (v___x_6300_ == 0)
{
lean_object* v___x_6301_; lean_object* v___x_6303_; 
lean_dec_ref(v___x_6298_);
lean_dec_ref(v___x_6296_);
lean_dec(v_a_6292_);
v___x_6301_ = lean_box(0);
if (v_isShared_6295_ == 0)
{
lean_ctor_set(v___x_6294_, 0, v___x_6301_);
v___x_6303_ = v___x_6294_;
goto v_reusejp_6302_;
}
else
{
lean_object* v_reuseFailAlloc_6304_; 
v_reuseFailAlloc_6304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6304_, 0, v___x_6301_);
v___x_6303_ = v_reuseFailAlloc_6304_;
goto v_reusejp_6302_;
}
v_reusejp_6302_:
{
return v___x_6303_;
}
}
else
{
lean_del_object(v___x_6294_);
v___y_6246_ = v___y_6283_;
v___y_6247_ = v___x_6296_;
v___y_6248_ = v___y_6285_;
v___y_6249_ = v___x_6299_;
v___y_6250_ = v___y_6288_;
v___y_6251_ = v_a_6292_;
v___y_6252_ = v___x_6298_;
v___y_6253_ = v___y_6242_;
v___y_6254_ = v___y_6243_;
goto v___jp_6245_;
}
}
}
}
v___jp_6306_:
{
lean_object* v___x_6315_; 
v___x_6315_ = l_Lean_Syntax_getTailPos_x3f(v___y_6313_, v___y_6310_);
lean_dec(v___y_6313_);
if (lean_obj_tag(v___x_6315_) == 0)
{
lean_inc(v___y_6314_);
v___y_6282_ = v___y_6307_;
v___y_6283_ = v___y_6308_;
v___y_6284_ = v___y_6314_;
v___y_6285_ = v___y_6310_;
v___y_6286_ = v___y_6309_;
v___y_6287_ = v___y_6311_;
v___y_6288_ = v___y_6312_;
v___y_6289_ = v___y_6314_;
goto v___jp_6281_;
}
else
{
lean_object* v_val_6316_; 
v_val_6316_ = lean_ctor_get(v___x_6315_, 0);
lean_inc(v_val_6316_);
lean_dec_ref(v___x_6315_);
v___y_6282_ = v___y_6307_;
v___y_6283_ = v___y_6308_;
v___y_6284_ = v___y_6314_;
v___y_6285_ = v___y_6310_;
v___y_6286_ = v___y_6309_;
v___y_6287_ = v___y_6311_;
v___y_6288_ = v___y_6312_;
v___y_6289_ = v_val_6316_;
goto v___jp_6281_;
}
}
v___jp_6317_:
{
lean_object* v_ref_6325_; lean_object* v___x_6326_; 
v_ref_6325_ = l_Lean_replaceRef(v_ref_6236_, v___y_6320_);
v___x_6326_ = l_Lean_Syntax_getPos_x3f(v_ref_6325_, v___y_6321_);
if (lean_obj_tag(v___x_6326_) == 0)
{
lean_object* v___x_6327_; 
v___x_6327_ = lean_unsigned_to_nat(0u);
v___y_6307_ = v___y_6318_;
v___y_6308_ = v___y_6319_;
v___y_6309_ = v___y_6322_;
v___y_6310_ = v___y_6321_;
v___y_6311_ = v___y_6323_;
v___y_6312_ = v___y_6324_;
v___y_6313_ = v_ref_6325_;
v___y_6314_ = v___x_6327_;
goto v___jp_6306_;
}
else
{
lean_object* v_val_6328_; 
v_val_6328_ = lean_ctor_get(v___x_6326_, 0);
lean_inc(v_val_6328_);
lean_dec_ref(v___x_6326_);
v___y_6307_ = v___y_6318_;
v___y_6308_ = v___y_6319_;
v___y_6309_ = v___y_6322_;
v___y_6310_ = v___y_6321_;
v___y_6311_ = v___y_6323_;
v___y_6312_ = v___y_6324_;
v___y_6313_ = v_ref_6325_;
v___y_6314_ = v_val_6328_;
goto v___jp_6306_;
}
}
v___jp_6330_:
{
if (v___y_6337_ == 0)
{
v___y_6318_ = v___y_6331_;
v___y_6319_ = v___y_6332_;
v___y_6320_ = v___y_6333_;
v___y_6321_ = v___y_6336_;
v___y_6322_ = v___y_6334_;
v___y_6323_ = v___y_6335_;
v___y_6324_ = v_severity_6238_;
goto v___jp_6317_;
}
else
{
v___y_6318_ = v___y_6331_;
v___y_6319_ = v___y_6332_;
v___y_6320_ = v___y_6333_;
v___y_6321_ = v___y_6336_;
v___y_6322_ = v___y_6334_;
v___y_6323_ = v___y_6335_;
v___y_6324_ = v___x_6329_;
goto v___jp_6317_;
}
}
v___jp_6338_:
{
if (v___y_6339_ == 0)
{
lean_object* v_fileName_6340_; lean_object* v_fileMap_6341_; lean_object* v_options_6342_; lean_object* v_ref_6343_; uint8_t v_suppressElabErrors_6344_; lean_object* v___x_6345_; lean_object* v___x_6346_; lean_object* v___f_6347_; uint8_t v___x_6348_; uint8_t v___x_6349_; 
v_fileName_6340_ = lean_ctor_get(v___y_6242_, 0);
v_fileMap_6341_ = lean_ctor_get(v___y_6242_, 1);
v_options_6342_ = lean_ctor_get(v___y_6242_, 2);
v_ref_6343_ = lean_ctor_get(v___y_6242_, 5);
v_suppressElabErrors_6344_ = lean_ctor_get_uint8(v___y_6242_, sizeof(void*)*14 + 1);
v___x_6345_ = lean_box(v___y_6339_);
v___x_6346_ = lean_box(v_suppressElabErrors_6344_);
v___f_6347_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_6347_, 0, v___x_6345_);
lean_closure_set(v___f_6347_, 1, v___x_6346_);
v___x_6348_ = 1;
v___x_6349_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6238_, v___x_6348_);
if (v___x_6349_ == 0)
{
v___y_6331_ = v___f_6347_;
v___y_6332_ = v_fileName_6340_;
v___y_6333_ = v_ref_6343_;
v___y_6334_ = v_fileMap_6341_;
v___y_6335_ = v_suppressElabErrors_6344_;
v___y_6336_ = v___y_6339_;
v___y_6337_ = v___x_6349_;
goto v___jp_6330_;
}
else
{
lean_object* v___x_6350_; uint8_t v___x_6351_; 
v___x_6350_ = l_Lean_warningAsError;
v___x_6351_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v_options_6342_, v___x_6350_);
v___y_6331_ = v___f_6347_;
v___y_6332_ = v_fileName_6340_;
v___y_6333_ = v_ref_6343_;
v___y_6334_ = v_fileMap_6341_;
v___y_6335_ = v_suppressElabErrors_6344_;
v___y_6336_ = v___y_6339_;
v___y_6337_ = v___x_6351_;
goto v___jp_6330_;
}
}
else
{
lean_object* v___x_6352_; lean_object* v___x_6353_; 
lean_dec_ref(v_msgData_6237_);
v___x_6352_ = lean_box(0);
v___x_6353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6353_, 0, v___x_6352_);
return v___x_6353_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___boxed(lean_object* v_ref_6356_, lean_object* v_msgData_6357_, lean_object* v_severity_6358_, lean_object* v_isSilent_6359_, lean_object* v___y_6360_, lean_object* v___y_6361_, lean_object* v___y_6362_, lean_object* v___y_6363_, lean_object* v___y_6364_){
_start:
{
uint8_t v_severity_boxed_6365_; uint8_t v_isSilent_boxed_6366_; lean_object* v_res_6367_; 
v_severity_boxed_6365_ = lean_unbox(v_severity_6358_);
v_isSilent_boxed_6366_ = lean_unbox(v_isSilent_6359_);
v_res_6367_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(v_ref_6356_, v_msgData_6357_, v_severity_boxed_6365_, v_isSilent_boxed_6366_, v___y_6360_, v___y_6361_, v___y_6362_, v___y_6363_);
lean_dec(v___y_6363_);
lean_dec_ref(v___y_6362_);
lean_dec(v___y_6361_);
lean_dec_ref(v___y_6360_);
lean_dec(v_ref_6356_);
return v_res_6367_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(lean_object* v_msgData_6368_, uint8_t v_severity_6369_, uint8_t v_isSilent_6370_, lean_object* v___y_6371_, lean_object* v___y_6372_, lean_object* v___y_6373_, lean_object* v___y_6374_){
_start:
{
lean_object* v_ref_6376_; lean_object* v___x_6377_; 
v_ref_6376_ = lean_ctor_get(v___y_6373_, 5);
v___x_6377_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7(v_ref_6376_, v_msgData_6368_, v_severity_6369_, v_isSilent_6370_, v___y_6371_, v___y_6372_, v___y_6373_, v___y_6374_);
return v___x_6377_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_msgData_6378_, lean_object* v_severity_6379_, lean_object* v_isSilent_6380_, lean_object* v___y_6381_, lean_object* v___y_6382_, lean_object* v___y_6383_, lean_object* v___y_6384_, lean_object* v___y_6385_){
_start:
{
uint8_t v_severity_boxed_6386_; uint8_t v_isSilent_boxed_6387_; lean_object* v_res_6388_; 
v_severity_boxed_6386_ = lean_unbox(v_severity_6379_);
v_isSilent_boxed_6387_ = lean_unbox(v_isSilent_6380_);
v_res_6388_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(v_msgData_6378_, v_severity_boxed_6386_, v_isSilent_boxed_6387_, v___y_6381_, v___y_6382_, v___y_6383_, v___y_6384_);
lean_dec(v___y_6384_);
lean_dec_ref(v___y_6383_);
lean_dec(v___y_6382_);
lean_dec_ref(v___y_6381_);
return v_res_6388_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(lean_object* v_msgData_6389_, lean_object* v___y_6390_, lean_object* v___y_6391_, lean_object* v___y_6392_, lean_object* v___y_6393_){
_start:
{
uint8_t v___x_6395_; uint8_t v___x_6396_; lean_object* v___x_6397_; 
v___x_6395_ = 2;
v___x_6396_ = 0;
v___x_6397_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3(v_msgData_6389_, v___x_6395_, v___x_6396_, v___y_6390_, v___y_6391_, v___y_6392_, v___y_6393_);
return v___x_6397_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_6398_, lean_object* v___y_6399_, lean_object* v___y_6400_, lean_object* v___y_6401_, lean_object* v___y_6402_, lean_object* v___y_6403_){
_start:
{
lean_object* v_res_6404_; 
v_res_6404_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(v_msgData_6398_, v___y_6399_, v___y_6400_, v___y_6401_, v___y_6402_);
lean_dec(v___y_6402_);
lean_dec_ref(v___y_6401_);
lean_dec(v___y_6400_);
lean_dec_ref(v___y_6399_);
return v_res_6404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(lean_object* v_f_6405_, lean_object* v___y_6406_, lean_object* v___y_6407_, lean_object* v___y_6408_, lean_object* v___y_6409_){
_start:
{
lean_object* v_module_6411_; lean_object* v_const_6412_; lean_object* v_exception_6413_; lean_object* v___x_6414_; lean_object* v___x_6415_; lean_object* v___x_6416_; lean_object* v___x_6417_; lean_object* v___x_6418_; lean_object* v___x_6419_; lean_object* v___x_6420_; lean_object* v___x_6421_; lean_object* v___x_6422_; lean_object* v___x_6423_; lean_object* v___x_6424_; lean_object* v___x_6425_; 
v_module_6411_ = lean_ctor_get(v_f_6405_, 0);
lean_inc(v_module_6411_);
v_const_6412_ = lean_ctor_get(v_f_6405_, 1);
lean_inc(v_const_6412_);
v_exception_6413_ = lean_ctor_get(v_f_6405_, 2);
lean_inc_ref(v_exception_6413_);
lean_dec_ref(v_f_6405_);
v___x_6414_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_6415_ = l_Lean_MessageData_ofName(v_const_6412_);
v___x_6416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6416_, 0, v___x_6414_);
lean_ctor_set(v___x_6416_, 1, v___x_6415_);
v___x_6417_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_6418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6418_, 0, v___x_6416_);
lean_ctor_set(v___x_6418_, 1, v___x_6417_);
v___x_6419_ = l_Lean_MessageData_ofName(v_module_6411_);
v___x_6420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6420_, 0, v___x_6418_);
lean_ctor_set(v___x_6420_, 1, v___x_6419_);
v___x_6421_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_6422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6422_, 0, v___x_6420_);
lean_ctor_set(v___x_6422_, 1, v___x_6421_);
v___x_6423_ = l_Lean_Exception_toMessageData(v_exception_6413_);
v___x_6424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6424_, 0, v___x_6422_);
lean_ctor_set(v___x_6424_, 1, v___x_6423_);
v___x_6425_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2(v___x_6424_, v___y_6406_, v___y_6407_, v___y_6408_, v___y_6409_);
return v___x_6425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0___boxed(lean_object* v_f_6426_, lean_object* v___y_6427_, lean_object* v___y_6428_, lean_object* v___y_6429_, lean_object* v___y_6430_, lean_object* v___y_6431_){
_start:
{
lean_object* v_res_6432_; 
v_res_6432_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(v_f_6426_, v___y_6427_, v___y_6428_, v___y_6429_, v___y_6430_);
lean_dec(v___y_6430_);
lean_dec_ref(v___y_6429_);
lean_dec(v___y_6428_);
lean_dec_ref(v___y_6427_);
return v_res_6432_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(lean_object* v_as_6433_, size_t v_i_6434_, size_t v_stop_6435_, lean_object* v_b_6436_, lean_object* v___y_6437_, lean_object* v___y_6438_, lean_object* v___y_6439_, lean_object* v___y_6440_){
_start:
{
uint8_t v___x_6442_; 
v___x_6442_ = lean_usize_dec_eq(v_i_6434_, v_stop_6435_);
if (v___x_6442_ == 0)
{
lean_object* v___x_6443_; lean_object* v___x_6444_; 
v___x_6443_ = lean_array_uget_borrowed(v_as_6433_, v_i_6434_);
lean_inc(v___x_6443_);
v___x_6444_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0(v___x_6443_, v___y_6437_, v___y_6438_, v___y_6439_, v___y_6440_);
if (lean_obj_tag(v___x_6444_) == 0)
{
lean_object* v_a_6445_; size_t v___x_6446_; size_t v___x_6447_; 
v_a_6445_ = lean_ctor_get(v___x_6444_, 0);
lean_inc(v_a_6445_);
lean_dec_ref(v___x_6444_);
v___x_6446_ = ((size_t)1ULL);
v___x_6447_ = lean_usize_add(v_i_6434_, v___x_6446_);
v_i_6434_ = v___x_6447_;
v_b_6436_ = v_a_6445_;
goto _start;
}
else
{
return v___x_6444_;
}
}
else
{
lean_object* v___x_6449_; 
v___x_6449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6449_, 0, v_b_6436_);
return v___x_6449_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3___boxed(lean_object* v_as_6450_, lean_object* v_i_6451_, lean_object* v_stop_6452_, lean_object* v_b_6453_, lean_object* v___y_6454_, lean_object* v___y_6455_, lean_object* v___y_6456_, lean_object* v___y_6457_, lean_object* v___y_6458_){
_start:
{
size_t v_i_boxed_6459_; size_t v_stop_boxed_6460_; lean_object* v_res_6461_; 
v_i_boxed_6459_ = lean_unbox_usize(v_i_6451_);
lean_dec(v_i_6451_);
v_stop_boxed_6460_ = lean_unbox_usize(v_stop_6452_);
lean_dec(v_stop_6452_);
v_res_6461_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(v_as_6450_, v_i_boxed_6459_, v_stop_boxed_6460_, v_b_6453_, v___y_6454_, v___y_6455_, v___y_6456_, v___y_6457_);
lean_dec(v___y_6457_);
lean_dec_ref(v___y_6456_);
lean_dec(v___y_6455_);
lean_dec_ref(v___y_6454_);
lean_dec_ref(v_as_6450_);
return v_res_6461_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(lean_object* v_as_6462_, size_t v_i_6463_, size_t v_stop_6464_, lean_object* v_b_6465_){
_start:
{
uint8_t v___x_6466_; 
v___x_6466_ = lean_usize_dec_eq(v_i_6463_, v_stop_6464_);
if (v___x_6466_ == 0)
{
lean_object* v___x_6467_; lean_object* v___x_6468_; lean_object* v___x_6469_; size_t v___x_6470_; size_t v___x_6471_; 
v___x_6467_ = lean_array_uget_borrowed(v_as_6462_, v_i_6463_);
lean_inc(v___x_6467_);
v___x_6468_ = lean_task_get_own(v___x_6467_);
v___x_6469_ = l_Lean_Meta_LazyDiscrTree_InitResults_append___redArg(v_b_6465_, v___x_6468_);
v___x_6470_ = ((size_t)1ULL);
v___x_6471_ = lean_usize_add(v_i_6463_, v___x_6470_);
v_i_6463_ = v___x_6471_;
v_b_6465_ = v___x_6469_;
goto _start;
}
else
{
return v_b_6465_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_as_6473_, lean_object* v_i_6474_, lean_object* v_stop_6475_, lean_object* v_b_6476_){
_start:
{
size_t v_i_boxed_6477_; size_t v_stop_boxed_6478_; lean_object* v_res_6479_; 
v_i_boxed_6477_ = lean_unbox_usize(v_i_6474_);
lean_dec(v_i_6474_);
v_stop_boxed_6478_ = lean_unbox_usize(v_stop_6475_);
lean_dec(v_stop_6475_);
v_res_6479_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_as_6473_, v_i_boxed_6477_, v_stop_boxed_6478_, v_b_6476_);
lean_dec_ref(v_as_6473_);
return v_res_6479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(lean_object* v_z_6480_, lean_object* v_tasks_6481_){
_start:
{
lean_object* v___x_6482_; lean_object* v___x_6483_; uint8_t v___x_6484_; 
v___x_6482_ = lean_unsigned_to_nat(0u);
v___x_6483_ = lean_array_get_size(v_tasks_6481_);
v___x_6484_ = lean_nat_dec_lt(v___x_6482_, v___x_6483_);
if (v___x_6484_ == 0)
{
return v_z_6480_;
}
else
{
uint8_t v___x_6485_; 
v___x_6485_ = lean_nat_dec_le(v___x_6483_, v___x_6483_);
if (v___x_6485_ == 0)
{
if (v___x_6484_ == 0)
{
return v_z_6480_;
}
else
{
size_t v___x_6486_; size_t v___x_6487_; lean_object* v___x_6488_; 
v___x_6486_ = ((size_t)0ULL);
v___x_6487_ = lean_usize_of_nat(v___x_6483_);
v___x_6488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_tasks_6481_, v___x_6486_, v___x_6487_, v_z_6480_);
return v___x_6488_;
}
}
else
{
size_t v___x_6489_; size_t v___x_6490_; lean_object* v___x_6491_; 
v___x_6489_ = ((size_t)0ULL);
v___x_6490_ = lean_usize_of_nat(v___x_6483_);
v___x_6491_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_tasks_6481_, v___x_6489_, v___x_6490_, v_z_6480_);
return v___x_6491_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg___boxed(lean_object* v_z_6492_, lean_object* v_tasks_6493_){
_start:
{
lean_object* v_res_6494_; 
v_res_6494_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v_z_6492_, v_tasks_6493_);
lean_dec_ref(v_tasks_6493_);
return v_res_6494_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_6495_; lean_object* v___x_6496_; lean_object* v___x_6497_; 
v___x_6495_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6496_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2, &l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_instInhabitedTrie_default___closed__2);
v___x_6497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6497_, 0, v___x_6496_);
lean_ctor_set(v___x_6497_, 1, v___x_6495_);
return v___x_6497_;
}
}
static lean_object* _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_6498_; lean_object* v___x_6499_; lean_object* v___x_6500_; 
v___x_6498_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6499_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0, &l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0_once, _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__0);
v___x_6500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6500_, 0, v___x_6499_);
lean_ctor_set(v___x_6500_, 1, v___x_6498_);
return v___x_6500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(lean_object* v_cctx_6501_, lean_object* v_ngen_6502_, lean_object* v_env_6503_, lean_object* v_act_6504_, lean_object* v_constantsPerTask_6505_, lean_object* v___y_6506_, lean_object* v___y_6507_, lean_object* v___y_6508_, lean_object* v___y_6509_){
_start:
{
lean_object* v___x_6511_; lean_object* v_moduleData_6512_; lean_object* v_n_6513_; lean_object* v___x_6514_; lean_object* v___x_6515_; lean_object* v___x_6516_; lean_object* v_a_6517_; lean_object* v___x_6519_; uint8_t v_isShared_6520_; uint8_t v_isSharedCheck_6559_; 
v___x_6511_ = l_Lean_Environment_header(v_env_6503_);
v_moduleData_6512_ = lean_ctor_get(v___x_6511_, 6);
lean_inc_ref(v_moduleData_6512_);
lean_dec_ref(v___x_6511_);
v_n_6513_ = lean_array_get_size(v_moduleData_6512_);
lean_dec_ref(v_moduleData_6512_);
v___x_6514_ = lean_unsigned_to_nat(0u);
v___x_6515_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___redArg___closed__0));
v___x_6516_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6501_, v_env_6503_, v_act_6504_, v_constantsPerTask_6505_, v_n_6513_, v_ngen_6502_, v___x_6515_, v___x_6514_, v___x_6514_, v___x_6514_);
v_a_6517_ = lean_ctor_get(v___x_6516_, 0);
v_isSharedCheck_6559_ = !lean_is_exclusive(v___x_6516_);
if (v_isSharedCheck_6559_ == 0)
{
v___x_6519_ = v___x_6516_;
v_isShared_6520_ = v_isSharedCheck_6559_;
goto v_resetjp_6518_;
}
else
{
lean_inc(v_a_6517_);
lean_dec(v___x_6516_);
v___x_6519_ = lean_box(0);
v_isShared_6520_ = v_isSharedCheck_6559_;
goto v_resetjp_6518_;
}
v_resetjp_6518_:
{
lean_object* v___x_6521_; lean_object* v_r_6522_; lean_object* v_tree_6529_; lean_object* v_errors_6530_; lean_object* v___x_6531_; uint8_t v___x_6532_; 
v___x_6521_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___closed__1);
v_r_6522_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v___x_6521_, v_a_6517_);
lean_dec(v_a_6517_);
v_tree_6529_ = lean_ctor_get(v_r_6522_, 0);
lean_inc_ref(v_tree_6529_);
v_errors_6530_ = lean_ctor_get(v_r_6522_, 1);
lean_inc_ref(v_errors_6530_);
v___x_6531_ = lean_array_get_size(v_errors_6530_);
v___x_6532_ = lean_nat_dec_lt(v___x_6514_, v___x_6531_);
if (v___x_6532_ == 0)
{
lean_object* v___x_6533_; lean_object* v___x_6534_; 
lean_dec_ref(v_errors_6530_);
lean_dec_ref(v_r_6522_);
lean_del_object(v___x_6519_);
v___x_6533_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_6529_);
v___x_6534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6534_, 0, v___x_6533_);
return v___x_6534_;
}
else
{
lean_object* v___x_6535_; uint8_t v___x_6536_; 
lean_dec_ref(v_tree_6529_);
v___x_6535_ = lean_box(0);
v___x_6536_ = lean_nat_dec_le(v___x_6531_, v___x_6531_);
if (v___x_6536_ == 0)
{
if (v___x_6532_ == 0)
{
lean_dec_ref(v_errors_6530_);
goto v___jp_6523_;
}
else
{
size_t v___x_6537_; size_t v___x_6538_; lean_object* v___x_6539_; 
v___x_6537_ = ((size_t)0ULL);
v___x_6538_ = lean_usize_of_nat(v___x_6531_);
v___x_6539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(v_errors_6530_, v___x_6537_, v___x_6538_, v___x_6535_, v___y_6506_, v___y_6507_, v___y_6508_, v___y_6509_);
lean_dec_ref(v_errors_6530_);
if (lean_obj_tag(v___x_6539_) == 0)
{
lean_dec_ref(v___x_6539_);
goto v___jp_6523_;
}
else
{
lean_object* v_a_6540_; lean_object* v___x_6542_; uint8_t v_isShared_6543_; uint8_t v_isSharedCheck_6547_; 
lean_dec_ref(v_r_6522_);
lean_del_object(v___x_6519_);
v_a_6540_ = lean_ctor_get(v___x_6539_, 0);
v_isSharedCheck_6547_ = !lean_is_exclusive(v___x_6539_);
if (v_isSharedCheck_6547_ == 0)
{
v___x_6542_ = v___x_6539_;
v_isShared_6543_ = v_isSharedCheck_6547_;
goto v_resetjp_6541_;
}
else
{
lean_inc(v_a_6540_);
lean_dec(v___x_6539_);
v___x_6542_ = lean_box(0);
v_isShared_6543_ = v_isSharedCheck_6547_;
goto v_resetjp_6541_;
}
v_resetjp_6541_:
{
lean_object* v___x_6545_; 
if (v_isShared_6543_ == 0)
{
v___x_6545_ = v___x_6542_;
goto v_reusejp_6544_;
}
else
{
lean_object* v_reuseFailAlloc_6546_; 
v_reuseFailAlloc_6546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6546_, 0, v_a_6540_);
v___x_6545_ = v_reuseFailAlloc_6546_;
goto v_reusejp_6544_;
}
v_reusejp_6544_:
{
return v___x_6545_;
}
}
}
}
}
else
{
size_t v___x_6548_; size_t v___x_6549_; lean_object* v___x_6550_; 
v___x_6548_ = ((size_t)0ULL);
v___x_6549_ = lean_usize_of_nat(v___x_6531_);
v___x_6550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__3(v_errors_6530_, v___x_6548_, v___x_6549_, v___x_6535_, v___y_6506_, v___y_6507_, v___y_6508_, v___y_6509_);
lean_dec_ref(v_errors_6530_);
if (lean_obj_tag(v___x_6550_) == 0)
{
lean_dec_ref(v___x_6550_);
goto v___jp_6523_;
}
else
{
lean_object* v_a_6551_; lean_object* v___x_6553_; uint8_t v_isShared_6554_; uint8_t v_isSharedCheck_6558_; 
lean_dec_ref(v_r_6522_);
lean_del_object(v___x_6519_);
v_a_6551_ = lean_ctor_get(v___x_6550_, 0);
v_isSharedCheck_6558_ = !lean_is_exclusive(v___x_6550_);
if (v_isSharedCheck_6558_ == 0)
{
v___x_6553_ = v___x_6550_;
v_isShared_6554_ = v_isSharedCheck_6558_;
goto v_resetjp_6552_;
}
else
{
lean_inc(v_a_6551_);
lean_dec(v___x_6550_);
v___x_6553_ = lean_box(0);
v_isShared_6554_ = v_isSharedCheck_6558_;
goto v_resetjp_6552_;
}
v_resetjp_6552_:
{
lean_object* v___x_6556_; 
if (v_isShared_6554_ == 0)
{
v___x_6556_ = v___x_6553_;
goto v_reusejp_6555_;
}
else
{
lean_object* v_reuseFailAlloc_6557_; 
v_reuseFailAlloc_6557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6557_, 0, v_a_6551_);
v___x_6556_ = v_reuseFailAlloc_6557_;
goto v_reusejp_6555_;
}
v_reusejp_6555_:
{
return v___x_6556_;
}
}
}
}
}
v___jp_6523_:
{
lean_object* v_tree_6524_; lean_object* v___x_6525_; lean_object* v___x_6527_; 
v_tree_6524_ = lean_ctor_get(v_r_6522_, 0);
lean_inc_ref(v_tree_6524_);
lean_dec_ref(v_r_6522_);
v___x_6525_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v_tree_6524_);
if (v_isShared_6520_ == 0)
{
lean_ctor_set(v___x_6519_, 0, v___x_6525_);
v___x_6527_ = v___x_6519_;
goto v_reusejp_6526_;
}
else
{
lean_object* v_reuseFailAlloc_6528_; 
v_reuseFailAlloc_6528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6528_, 0, v___x_6525_);
v___x_6527_ = v_reuseFailAlloc_6528_;
goto v_reusejp_6526_;
}
v_reusejp_6526_:
{
return v___x_6527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg___boxed(lean_object* v_cctx_6560_, lean_object* v_ngen_6561_, lean_object* v_env_6562_, lean_object* v_act_6563_, lean_object* v_constantsPerTask_6564_, lean_object* v___y_6565_, lean_object* v___y_6566_, lean_object* v___y_6567_, lean_object* v___y_6568_, lean_object* v___y_6569_){
_start:
{
lean_object* v_res_6570_; 
v_res_6570_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v_cctx_6560_, v_ngen_6561_, v_env_6562_, v_act_6563_, v_constantsPerTask_6564_, v___y_6565_, v___y_6566_, v___y_6567_, v___y_6568_);
lean_dec(v___y_6568_);
lean_dec_ref(v___y_6567_);
lean_dec(v___y_6566_);
lean_dec_ref(v___y_6565_);
lean_dec(v_constantsPerTask_6564_);
return v_res_6570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(lean_object* v_a_6571_, lean_object* v___x_6572_, lean_object* v_addEntry_6573_, lean_object* v_constantsPerTask_6574_, lean_object* v_droppedEntriesRef_6575_, lean_object* v_droppedKeys_6576_, lean_object* v___y_6577_, lean_object* v___y_6578_, lean_object* v___y_6579_, lean_object* v___y_6580_){
_start:
{
lean_object* v___x_6582_; lean_object* v_env_6583_; lean_object* v___x_6584_; lean_object* v___x_6585_; 
v___x_6582_ = lean_st_ref_get(v___y_6580_);
v_env_6583_ = lean_ctor_get(v___x_6582_, 0);
lean_inc_ref(v_env_6583_);
lean_dec(v___x_6582_);
lean_inc_ref(v_a_6571_);
v___x_6584_ = l_Lean_Meta_LazyDiscrTree_createTreeCtx(v_a_6571_);
v___x_6585_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v___x_6584_, v___x_6572_, v_env_6583_, v_addEntry_6573_, v_constantsPerTask_6574_, v___y_6577_, v___y_6578_, v___y_6579_, v___y_6580_);
if (lean_obj_tag(v___x_6585_) == 0)
{
if (lean_obj_tag(v_droppedEntriesRef_6575_) == 1)
{
lean_object* v_a_6586_; lean_object* v_val_6587_; lean_object* v___x_6589_; uint8_t v_isShared_6590_; uint8_t v_isSharedCheck_6620_; 
v_a_6586_ = lean_ctor_get(v___x_6585_, 0);
lean_inc(v_a_6586_);
lean_dec_ref(v___x_6585_);
v_val_6587_ = lean_ctor_get(v_droppedEntriesRef_6575_, 0);
v_isSharedCheck_6620_ = !lean_is_exclusive(v_droppedEntriesRef_6575_);
if (v_isSharedCheck_6620_ == 0)
{
v___x_6589_ = v_droppedEntriesRef_6575_;
v_isShared_6590_ = v_isSharedCheck_6620_;
goto v_resetjp_6588_;
}
else
{
lean_inc(v_val_6587_);
lean_dec(v_droppedEntriesRef_6575_);
v___x_6589_ = lean_box(0);
v_isShared_6590_ = v_isSharedCheck_6620_;
goto v_resetjp_6588_;
}
v_resetjp_6588_:
{
lean_object* v___x_6591_; 
v___x_6591_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_a_6586_, v_droppedKeys_6576_, v___y_6577_, v___y_6578_, v___y_6579_, v___y_6580_);
if (lean_obj_tag(v___x_6591_) == 0)
{
lean_object* v_a_6592_; lean_object* v___x_6594_; uint8_t v_isShared_6595_; uint8_t v_isSharedCheck_6611_; 
v_a_6592_ = lean_ctor_get(v___x_6591_, 0);
v_isSharedCheck_6611_ = !lean_is_exclusive(v___x_6591_);
if (v_isSharedCheck_6611_ == 0)
{
v___x_6594_ = v___x_6591_;
v_isShared_6595_ = v_isSharedCheck_6611_;
goto v_resetjp_6593_;
}
else
{
lean_inc(v_a_6592_);
lean_dec(v___x_6591_);
v___x_6594_ = lean_box(0);
v_isShared_6595_ = v_isSharedCheck_6611_;
goto v_resetjp_6593_;
}
v_resetjp_6593_:
{
lean_object* v_fst_6596_; lean_object* v_snd_6597_; lean_object* v___x_6598_; lean_object* v___y_6600_; 
v_fst_6596_ = lean_ctor_get(v_a_6592_, 0);
lean_inc(v_fst_6596_);
v_snd_6597_ = lean_ctor_get(v_a_6592_, 1);
lean_inc(v_snd_6597_);
lean_dec(v_a_6592_);
v___x_6598_ = lean_st_ref_get(v_val_6587_);
if (lean_obj_tag(v___x_6598_) == 0)
{
lean_object* v___x_6609_; 
v___x_6609_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v___y_6600_ = v___x_6609_;
goto v___jp_6599_;
}
else
{
lean_object* v_val_6610_; 
v_val_6610_ = lean_ctor_get(v___x_6598_, 0);
lean_inc(v_val_6610_);
lean_dec_ref(v___x_6598_);
v___y_6600_ = v_val_6610_;
goto v___jp_6599_;
}
v___jp_6599_:
{
lean_object* v___x_6601_; lean_object* v___x_6603_; 
v___x_6601_ = l_Array_append___redArg(v___y_6600_, v_fst_6596_);
lean_dec(v_fst_6596_);
if (v_isShared_6590_ == 0)
{
lean_ctor_set(v___x_6589_, 0, v___x_6601_);
v___x_6603_ = v___x_6589_;
goto v_reusejp_6602_;
}
else
{
lean_object* v_reuseFailAlloc_6608_; 
v_reuseFailAlloc_6608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6608_, 0, v___x_6601_);
v___x_6603_ = v_reuseFailAlloc_6608_;
goto v_reusejp_6602_;
}
v_reusejp_6602_:
{
lean_object* v___x_6604_; lean_object* v___x_6606_; 
v___x_6604_ = lean_st_ref_set(v_val_6587_, v___x_6603_);
lean_dec(v_val_6587_);
if (v_isShared_6595_ == 0)
{
lean_ctor_set(v___x_6594_, 0, v_snd_6597_);
v___x_6606_ = v___x_6594_;
goto v_reusejp_6605_;
}
else
{
lean_object* v_reuseFailAlloc_6607_; 
v_reuseFailAlloc_6607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6607_, 0, v_snd_6597_);
v___x_6606_ = v_reuseFailAlloc_6607_;
goto v_reusejp_6605_;
}
v_reusejp_6605_:
{
return v___x_6606_;
}
}
}
}
}
else
{
lean_object* v_a_6612_; lean_object* v___x_6614_; uint8_t v_isShared_6615_; uint8_t v_isSharedCheck_6619_; 
lean_del_object(v___x_6589_);
lean_dec(v_val_6587_);
v_a_6612_ = lean_ctor_get(v___x_6591_, 0);
v_isSharedCheck_6619_ = !lean_is_exclusive(v___x_6591_);
if (v_isSharedCheck_6619_ == 0)
{
v___x_6614_ = v___x_6591_;
v_isShared_6615_ = v_isSharedCheck_6619_;
goto v_resetjp_6613_;
}
else
{
lean_inc(v_a_6612_);
lean_dec(v___x_6591_);
v___x_6614_ = lean_box(0);
v_isShared_6615_ = v_isSharedCheck_6619_;
goto v_resetjp_6613_;
}
v_resetjp_6613_:
{
lean_object* v___x_6617_; 
if (v_isShared_6615_ == 0)
{
v___x_6617_ = v___x_6614_;
goto v_reusejp_6616_;
}
else
{
lean_object* v_reuseFailAlloc_6618_; 
v_reuseFailAlloc_6618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6618_, 0, v_a_6612_);
v___x_6617_ = v_reuseFailAlloc_6618_;
goto v_reusejp_6616_;
}
v_reusejp_6616_:
{
return v___x_6617_;
}
}
}
}
}
else
{
lean_object* v_a_6621_; lean_object* v___x_6622_; 
lean_dec(v_droppedEntriesRef_6575_);
v_a_6621_ = lean_ctor_get(v___x_6585_, 0);
lean_inc(v_a_6621_);
lean_dec_ref(v___x_6585_);
v___x_6622_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_a_6621_, v_droppedKeys_6576_, v___y_6577_, v___y_6578_, v___y_6579_, v___y_6580_);
return v___x_6622_;
}
}
else
{
lean_dec(v_droppedKeys_6576_);
lean_dec(v_droppedEntriesRef_6575_);
return v___x_6585_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed(lean_object* v_a_6623_, lean_object* v___x_6624_, lean_object* v_addEntry_6625_, lean_object* v_constantsPerTask_6626_, lean_object* v_droppedEntriesRef_6627_, lean_object* v_droppedKeys_6628_, lean_object* v___y_6629_, lean_object* v___y_6630_, lean_object* v___y_6631_, lean_object* v___y_6632_, lean_object* v___y_6633_){
_start:
{
lean_object* v_res_6634_; 
v_res_6634_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0(v_a_6623_, v___x_6624_, v_addEntry_6625_, v_constantsPerTask_6626_, v_droppedEntriesRef_6627_, v_droppedKeys_6628_, v___y_6629_, v___y_6630_, v___y_6631_, v___y_6632_);
lean_dec(v___y_6632_);
lean_dec_ref(v___y_6631_);
lean_dec(v___y_6630_);
lean_dec_ref(v___y_6629_);
lean_dec(v_constantsPerTask_6626_);
lean_dec_ref(v_a_6623_);
return v_res_6634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(lean_object* v_ext_6636_, lean_object* v_addEntry_6637_, lean_object* v_droppedKeys_6638_, lean_object* v_constantsPerTask_6639_, lean_object* v_droppedEntriesRef_6640_, lean_object* v_ty_6641_, lean_object* v_a_6642_, lean_object* v_a_6643_, lean_object* v_a_6644_, lean_object* v_a_6645_){
_start:
{
lean_object* v___x_6647_; lean_object* v_ngen_6648_; lean_object* v_namePrefix_6649_; lean_object* v_idx_6650_; lean_object* v___x_6652_; uint8_t v_isShared_6653_; uint8_t v_isSharedCheck_6724_; 
v___x_6647_ = lean_st_ref_get(v_a_6645_);
v_ngen_6648_ = lean_ctor_get(v___x_6647_, 2);
lean_inc_ref(v_ngen_6648_);
lean_dec(v___x_6647_);
v_namePrefix_6649_ = lean_ctor_get(v_ngen_6648_, 0);
v_idx_6650_ = lean_ctor_get(v_ngen_6648_, 1);
v_isSharedCheck_6724_ = !lean_is_exclusive(v_ngen_6648_);
if (v_isSharedCheck_6724_ == 0)
{
v___x_6652_ = v_ngen_6648_;
v_isShared_6653_ = v_isSharedCheck_6724_;
goto v_resetjp_6651_;
}
else
{
lean_inc(v_idx_6650_);
lean_inc(v_namePrefix_6649_);
lean_dec(v_ngen_6648_);
v___x_6652_ = lean_box(0);
v_isShared_6653_ = v_isSharedCheck_6724_;
goto v_resetjp_6651_;
}
v_resetjp_6651_:
{
lean_object* v___x_6654_; lean_object* v_env_6655_; lean_object* v_nextMacroScope_6656_; lean_object* v_auxDeclNGen_6657_; lean_object* v_traceState_6658_; lean_object* v_cache_6659_; lean_object* v_messages_6660_; lean_object* v_infoState_6661_; lean_object* v_snapshotTasks_6662_; lean_object* v___x_6664_; uint8_t v_isShared_6665_; uint8_t v_isSharedCheck_6722_; 
v___x_6654_ = lean_st_ref_take(v_a_6645_);
v_env_6655_ = lean_ctor_get(v___x_6654_, 0);
v_nextMacroScope_6656_ = lean_ctor_get(v___x_6654_, 1);
v_auxDeclNGen_6657_ = lean_ctor_get(v___x_6654_, 3);
v_traceState_6658_ = lean_ctor_get(v___x_6654_, 4);
v_cache_6659_ = lean_ctor_get(v___x_6654_, 5);
v_messages_6660_ = lean_ctor_get(v___x_6654_, 6);
v_infoState_6661_ = lean_ctor_get(v___x_6654_, 7);
v_snapshotTasks_6662_ = lean_ctor_get(v___x_6654_, 8);
v_isSharedCheck_6722_ = !lean_is_exclusive(v___x_6654_);
if (v_isSharedCheck_6722_ == 0)
{
lean_object* v_unused_6723_; 
v_unused_6723_ = lean_ctor_get(v___x_6654_, 2);
lean_dec(v_unused_6723_);
v___x_6664_ = v___x_6654_;
v_isShared_6665_ = v_isSharedCheck_6722_;
goto v_resetjp_6663_;
}
else
{
lean_inc(v_snapshotTasks_6662_);
lean_inc(v_infoState_6661_);
lean_inc(v_messages_6660_);
lean_inc(v_cache_6659_);
lean_inc(v_traceState_6658_);
lean_inc(v_auxDeclNGen_6657_);
lean_inc(v_nextMacroScope_6656_);
lean_inc(v_env_6655_);
lean_dec(v___x_6654_);
v___x_6664_ = lean_box(0);
v_isShared_6665_ = v_isSharedCheck_6722_;
goto v_resetjp_6663_;
}
v_resetjp_6663_:
{
lean_object* v___x_6666_; lean_object* v___x_6667_; lean_object* v___x_6668_; lean_object* v___x_6670_; 
lean_inc(v_idx_6650_);
lean_inc(v_namePrefix_6649_);
v___x_6666_ = l_Lean_Name_num___override(v_namePrefix_6649_, v_idx_6650_);
v___x_6667_ = lean_unsigned_to_nat(1u);
v___x_6668_ = lean_nat_add(v_idx_6650_, v___x_6667_);
lean_dec(v_idx_6650_);
if (v_isShared_6653_ == 0)
{
lean_ctor_set(v___x_6652_, 1, v___x_6668_);
v___x_6670_ = v___x_6652_;
goto v_reusejp_6669_;
}
else
{
lean_object* v_reuseFailAlloc_6721_; 
v_reuseFailAlloc_6721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6721_, 0, v_namePrefix_6649_);
lean_ctor_set(v_reuseFailAlloc_6721_, 1, v___x_6668_);
v___x_6670_ = v_reuseFailAlloc_6721_;
goto v_reusejp_6669_;
}
v_reusejp_6669_:
{
lean_object* v___x_6672_; 
if (v_isShared_6665_ == 0)
{
lean_ctor_set(v___x_6664_, 2, v___x_6670_);
v___x_6672_ = v___x_6664_;
goto v_reusejp_6671_;
}
else
{
lean_object* v_reuseFailAlloc_6720_; 
v_reuseFailAlloc_6720_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6720_, 0, v_env_6655_);
lean_ctor_set(v_reuseFailAlloc_6720_, 1, v_nextMacroScope_6656_);
lean_ctor_set(v_reuseFailAlloc_6720_, 2, v___x_6670_);
lean_ctor_set(v_reuseFailAlloc_6720_, 3, v_auxDeclNGen_6657_);
lean_ctor_set(v_reuseFailAlloc_6720_, 4, v_traceState_6658_);
lean_ctor_set(v_reuseFailAlloc_6720_, 5, v_cache_6659_);
lean_ctor_set(v_reuseFailAlloc_6720_, 6, v_messages_6660_);
lean_ctor_set(v_reuseFailAlloc_6720_, 7, v_infoState_6661_);
lean_ctor_set(v_reuseFailAlloc_6720_, 8, v_snapshotTasks_6662_);
v___x_6672_ = v_reuseFailAlloc_6720_;
goto v_reusejp_6671_;
}
v_reusejp_6671_:
{
lean_object* v___x_6673_; lean_object* v___x_6674_; lean_object* v___x_6675_; lean_object* v___x_6676_; lean_object* v_env_6677_; lean_object* v_asyncMode_6678_; lean_object* v___x_6679_; lean_object* v___x_6680_; lean_object* v_a_6682_; lean_object* v___x_6704_; 
v___x_6673_ = lean_st_ref_set(v_a_6645_, v___x_6672_);
v___x_6674_ = lean_box(0);
v___x_6675_ = lean_st_mk_ref(v___x_6674_);
v___x_6676_ = lean_st_ref_get(v_a_6645_);
v_env_6677_ = lean_ctor_get(v___x_6676_, 0);
lean_inc_ref(v_env_6677_);
lean_dec(v___x_6676_);
v_asyncMode_6678_ = lean_ctor_get(v_ext_6636_, 2);
v___x_6679_ = lean_box(0);
v___x_6680_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_6675_, v_ext_6636_, v_env_6677_, v_asyncMode_6678_, v___x_6679_);
lean_dec(v___x_6675_);
v___x_6704_ = lean_st_ref_get(v___x_6680_);
if (lean_obj_tag(v___x_6704_) == 0)
{
lean_object* v_options_6705_; lean_object* v___x_6706_; lean_object* v___f_6707_; lean_object* v___x_6708_; lean_object* v___x_6709_; 
v_options_6705_ = lean_ctor_get(v_a_6644_, 2);
v___x_6706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6706_, 0, v___x_6666_);
lean_ctor_set(v___x_6706_, 1, v___x_6667_);
lean_inc_ref(v_a_6644_);
v___f_6707_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_6707_, 0, v_a_6644_);
lean_closure_set(v___f_6707_, 1, v___x_6706_);
lean_closure_set(v___f_6707_, 2, v_addEntry_6637_);
lean_closure_set(v___f_6707_, 3, v_constantsPerTask_6639_);
lean_closure_set(v___f_6707_, 4, v_droppedEntriesRef_6640_);
lean_closure_set(v___f_6707_, 5, v_droppedKeys_6638_);
v___x_6708_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___closed__0));
v___x_6709_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_6708_, v_options_6705_, v___f_6707_, v___x_6679_, v_a_6642_, v_a_6643_, v_a_6644_, v_a_6645_);
if (lean_obj_tag(v___x_6709_) == 0)
{
lean_object* v_a_6710_; 
v_a_6710_ = lean_ctor_get(v___x_6709_, 0);
lean_inc(v_a_6710_);
lean_dec_ref(v___x_6709_);
v_a_6682_ = v_a_6710_;
goto v___jp_6681_;
}
else
{
lean_object* v_a_6711_; lean_object* v___x_6713_; uint8_t v_isShared_6714_; uint8_t v_isSharedCheck_6718_; 
lean_dec(v___x_6680_);
lean_dec_ref(v_ty_6641_);
v_a_6711_ = lean_ctor_get(v___x_6709_, 0);
v_isSharedCheck_6718_ = !lean_is_exclusive(v___x_6709_);
if (v_isSharedCheck_6718_ == 0)
{
v___x_6713_ = v___x_6709_;
v_isShared_6714_ = v_isSharedCheck_6718_;
goto v_resetjp_6712_;
}
else
{
lean_inc(v_a_6711_);
lean_dec(v___x_6709_);
v___x_6713_ = lean_box(0);
v_isShared_6714_ = v_isSharedCheck_6718_;
goto v_resetjp_6712_;
}
v_resetjp_6712_:
{
lean_object* v___x_6716_; 
if (v_isShared_6714_ == 0)
{
v___x_6716_ = v___x_6713_;
goto v_reusejp_6715_;
}
else
{
lean_object* v_reuseFailAlloc_6717_; 
v_reuseFailAlloc_6717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6717_, 0, v_a_6711_);
v___x_6716_ = v_reuseFailAlloc_6717_;
goto v_reusejp_6715_;
}
v_reusejp_6715_:
{
return v___x_6716_;
}
}
}
}
else
{
lean_object* v_val_6719_; 
lean_dec(v___x_6666_);
lean_dec(v_droppedEntriesRef_6640_);
lean_dec(v_constantsPerTask_6639_);
lean_dec(v_droppedKeys_6638_);
lean_dec_ref(v_addEntry_6637_);
v_val_6719_ = lean_ctor_get(v___x_6704_, 0);
lean_inc(v_val_6719_);
lean_dec_ref(v___x_6704_);
v_a_6682_ = v_val_6719_;
goto v___jp_6681_;
}
v___jp_6681_:
{
lean_object* v___x_6683_; 
v___x_6683_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v_a_6682_, v_ty_6641_, v_a_6642_, v_a_6643_, v_a_6644_, v_a_6645_);
if (lean_obj_tag(v___x_6683_) == 0)
{
lean_object* v_a_6684_; lean_object* v___x_6686_; uint8_t v_isShared_6687_; uint8_t v_isSharedCheck_6695_; 
v_a_6684_ = lean_ctor_get(v___x_6683_, 0);
v_isSharedCheck_6695_ = !lean_is_exclusive(v___x_6683_);
if (v_isSharedCheck_6695_ == 0)
{
v___x_6686_ = v___x_6683_;
v_isShared_6687_ = v_isSharedCheck_6695_;
goto v_resetjp_6685_;
}
else
{
lean_inc(v_a_6684_);
lean_dec(v___x_6683_);
v___x_6686_ = lean_box(0);
v_isShared_6687_ = v_isSharedCheck_6695_;
goto v_resetjp_6685_;
}
v_resetjp_6685_:
{
lean_object* v_fst_6688_; lean_object* v_snd_6689_; lean_object* v___x_6690_; lean_object* v___x_6691_; lean_object* v___x_6693_; 
v_fst_6688_ = lean_ctor_get(v_a_6684_, 0);
lean_inc(v_fst_6688_);
v_snd_6689_ = lean_ctor_get(v_a_6684_, 1);
lean_inc(v_snd_6689_);
lean_dec(v_a_6684_);
v___x_6690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6690_, 0, v_snd_6689_);
v___x_6691_ = lean_st_ref_set(v___x_6680_, v___x_6690_);
lean_dec(v___x_6680_);
if (v_isShared_6687_ == 0)
{
lean_ctor_set(v___x_6686_, 0, v_fst_6688_);
v___x_6693_ = v___x_6686_;
goto v_reusejp_6692_;
}
else
{
lean_object* v_reuseFailAlloc_6694_; 
v_reuseFailAlloc_6694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6694_, 0, v_fst_6688_);
v___x_6693_ = v_reuseFailAlloc_6694_;
goto v_reusejp_6692_;
}
v_reusejp_6692_:
{
return v___x_6693_;
}
}
}
else
{
lean_object* v_a_6696_; lean_object* v___x_6698_; uint8_t v_isShared_6699_; uint8_t v_isSharedCheck_6703_; 
lean_dec(v___x_6680_);
v_a_6696_ = lean_ctor_get(v___x_6683_, 0);
v_isSharedCheck_6703_ = !lean_is_exclusive(v___x_6683_);
if (v_isSharedCheck_6703_ == 0)
{
v___x_6698_ = v___x_6683_;
v_isShared_6699_ = v_isSharedCheck_6703_;
goto v_resetjp_6697_;
}
else
{
lean_inc(v_a_6696_);
lean_dec(v___x_6683_);
v___x_6698_ = lean_box(0);
v_isShared_6699_ = v_isSharedCheck_6703_;
goto v_resetjp_6697_;
}
v_resetjp_6697_:
{
lean_object* v___x_6701_; 
if (v_isShared_6699_ == 0)
{
v___x_6701_ = v___x_6698_;
goto v_reusejp_6700_;
}
else
{
lean_object* v_reuseFailAlloc_6702_; 
v_reuseFailAlloc_6702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6702_, 0, v_a_6696_);
v___x_6701_ = v_reuseFailAlloc_6702_;
goto v_reusejp_6700_;
}
v_reusejp_6700_:
{
return v___x_6701_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg___boxed(lean_object* v_ext_6725_, lean_object* v_addEntry_6726_, lean_object* v_droppedKeys_6727_, lean_object* v_constantsPerTask_6728_, lean_object* v_droppedEntriesRef_6729_, lean_object* v_ty_6730_, lean_object* v_a_6731_, lean_object* v_a_6732_, lean_object* v_a_6733_, lean_object* v_a_6734_, lean_object* v_a_6735_){
_start:
{
lean_object* v_res_6736_; 
v_res_6736_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ext_6725_, v_addEntry_6726_, v_droppedKeys_6727_, v_constantsPerTask_6728_, v_droppedEntriesRef_6729_, v_ty_6730_, v_a_6731_, v_a_6732_, v_a_6733_, v_a_6734_);
lean_dec(v_a_6734_);
lean_dec_ref(v_a_6733_);
lean_dec(v_a_6732_);
lean_dec_ref(v_a_6731_);
lean_dec_ref(v_ext_6725_);
return v_res_6736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches(lean_object* v_00_u03b1_6737_, lean_object* v_ext_6738_, lean_object* v_addEntry_6739_, lean_object* v_droppedKeys_6740_, lean_object* v_constantsPerTask_6741_, lean_object* v_droppedEntriesRef_6742_, lean_object* v_ty_6743_, lean_object* v_a_6744_, lean_object* v_a_6745_, lean_object* v_a_6746_, lean_object* v_a_6747_){
_start:
{
lean_object* v___x_6749_; 
v___x_6749_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ext_6738_, v_addEntry_6739_, v_droppedKeys_6740_, v_constantsPerTask_6741_, v_droppedEntriesRef_6742_, v_ty_6743_, v_a_6744_, v_a_6745_, v_a_6746_, v_a_6747_);
return v___x_6749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findImportMatches___boxed(lean_object* v_00_u03b1_6750_, lean_object* v_ext_6751_, lean_object* v_addEntry_6752_, lean_object* v_droppedKeys_6753_, lean_object* v_constantsPerTask_6754_, lean_object* v_droppedEntriesRef_6755_, lean_object* v_ty_6756_, lean_object* v_a_6757_, lean_object* v_a_6758_, lean_object* v_a_6759_, lean_object* v_a_6760_, lean_object* v_a_6761_){
_start:
{
lean_object* v_res_6762_; 
v_res_6762_ = l_Lean_Meta_LazyDiscrTree_findImportMatches(v_00_u03b1_6750_, v_ext_6751_, v_addEntry_6752_, v_droppedKeys_6753_, v_constantsPerTask_6754_, v_droppedEntriesRef_6755_, v_ty_6756_, v_a_6757_, v_a_6758_, v_a_6759_, v_a_6760_);
lean_dec(v_a_6760_);
lean_dec_ref(v_a_6759_);
lean_dec(v_a_6758_);
lean_dec_ref(v_a_6757_);
lean_dec_ref(v_ext_6751_);
return v_res_6762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(lean_object* v_00_u03b1_6763_, lean_object* v_cctx_6764_, lean_object* v_ngen_6765_, lean_object* v_env_6766_, lean_object* v_act_6767_, lean_object* v_constantsPerTask_6768_, lean_object* v___y_6769_, lean_object* v___y_6770_, lean_object* v___y_6771_, lean_object* v___y_6772_){
_start:
{
lean_object* v___x_6774_; 
v___x_6774_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___redArg(v_cctx_6764_, v_ngen_6765_, v_env_6766_, v_act_6767_, v_constantsPerTask_6768_, v___y_6769_, v___y_6770_, v___y_6771_, v___y_6772_);
return v___x_6774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0___boxed(lean_object* v_00_u03b1_6775_, lean_object* v_cctx_6776_, lean_object* v_ngen_6777_, lean_object* v_env_6778_, lean_object* v_act_6779_, lean_object* v_constantsPerTask_6780_, lean_object* v___y_6781_, lean_object* v___y_6782_, lean_object* v___y_6783_, lean_object* v___y_6784_, lean_object* v___y_6785_){
_start:
{
lean_object* v_res_6786_; 
v_res_6786_ = l_Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0(v_00_u03b1_6775_, v_cctx_6776_, v_ngen_6777_, v_env_6778_, v_act_6779_, v_constantsPerTask_6780_, v___y_6781_, v___y_6782_, v___y_6783_, v___y_6784_);
lean_dec(v___y_6784_);
lean_dec_ref(v___y_6783_);
lean_dec(v___y_6782_);
lean_dec_ref(v___y_6781_);
lean_dec(v_constantsPerTask_6780_);
return v_res_6786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(lean_object* v_00_u03b1_6787_, lean_object* v_cctx_6788_, lean_object* v_env_6789_, lean_object* v_act_6790_, lean_object* v_constantsPerTask_6791_, lean_object* v_n_6792_, lean_object* v_ngen_6793_, lean_object* v_tasks_6794_, lean_object* v_start_6795_, lean_object* v_cnt_6796_, lean_object* v_idx_6797_, lean_object* v___y_6798_, lean_object* v___y_6799_, lean_object* v___y_6800_, lean_object* v___y_6801_){
_start:
{
lean_object* v___x_6803_; 
v___x_6803_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___redArg(v_cctx_6788_, v_env_6789_, v_act_6790_, v_constantsPerTask_6791_, v_n_6792_, v_ngen_6793_, v_tasks_6794_, v_start_6795_, v_cnt_6796_, v_idx_6797_);
return v___x_6803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1___boxed(lean_object* v_00_u03b1_6804_, lean_object* v_cctx_6805_, lean_object* v_env_6806_, lean_object* v_act_6807_, lean_object* v_constantsPerTask_6808_, lean_object* v_n_6809_, lean_object* v_ngen_6810_, lean_object* v_tasks_6811_, lean_object* v_start_6812_, lean_object* v_cnt_6813_, lean_object* v_idx_6814_, lean_object* v___y_6815_, lean_object* v___y_6816_, lean_object* v___y_6817_, lean_object* v___y_6818_, lean_object* v___y_6819_){
_start:
{
lean_object* v_res_6820_; 
v_res_6820_ = l___private_Lean_Meta_LazyDiscrTree_0__Lean_Meta_LazyDiscrTree_createImportedDiscrTree_go___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__1(v_00_u03b1_6804_, v_cctx_6805_, v_env_6806_, v_act_6807_, v_constantsPerTask_6808_, v_n_6809_, v_ngen_6810_, v_tasks_6811_, v_start_6812_, v_cnt_6813_, v_idx_6814_, v___y_6815_, v___y_6816_, v___y_6817_, v___y_6818_);
lean_dec(v___y_6818_);
lean_dec_ref(v___y_6817_);
lean_dec(v___y_6816_);
lean_dec_ref(v___y_6815_);
lean_dec(v_constantsPerTask_6808_);
return v_res_6820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(lean_object* v_00_u03b1_6821_, lean_object* v_z_6822_, lean_object* v_tasks_6823_){
_start:
{
lean_object* v___x_6824_; 
v___x_6824_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___redArg(v_z_6822_, v_tasks_6823_);
return v___x_6824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2___boxed(lean_object* v_00_u03b1_6825_, lean_object* v_z_6826_, lean_object* v_tasks_6827_){
_start:
{
lean_object* v_res_6828_; 
v_res_6828_ = l_Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2(v_00_u03b1_6825_, v_z_6826_, v_tasks_6827_);
lean_dec_ref(v_tasks_6827_);
return v_res_6828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(lean_object* v_00_u03b1_6829_, lean_object* v_as_6830_, size_t v_i_6831_, size_t v_stop_6832_, lean_object* v_b_6833_){
_start:
{
lean_object* v___x_6834_; 
v___x_6834_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___redArg(v_as_6830_, v_i_6831_, v_stop_6832_, v_b_6833_);
return v___x_6834_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b1_6835_, lean_object* v_as_6836_, lean_object* v_i_6837_, lean_object* v_stop_6838_, lean_object* v_b_6839_){
_start:
{
size_t v_i_boxed_6840_; size_t v_stop_boxed_6841_; lean_object* v_res_6842_; 
v_i_boxed_6840_ = lean_unbox_usize(v_i_6837_);
lean_dec(v_i_6837_);
v_stop_boxed_6841_ = lean_unbox_usize(v_stop_6838_);
lean_dec(v_stop_6838_);
v_res_6842_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_combineGet___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__2_spec__5(v_00_u03b1_6835_, v_as_6836_, v_i_boxed_6840_, v_stop_boxed_6841_, v_b_6839_);
lean_dec_ref(v_as_6836_);
return v_res_6842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(lean_object* v___y_6843_){
_start:
{
lean_object* v___x_6845_; lean_object* v_ngen_6846_; lean_object* v_namePrefix_6847_; lean_object* v_idx_6848_; lean_object* v___x_6850_; uint8_t v_isShared_6851_; uint8_t v_isSharedCheck_6878_; 
v___x_6845_ = lean_st_ref_get(v___y_6843_);
v_ngen_6846_ = lean_ctor_get(v___x_6845_, 2);
lean_inc_ref(v_ngen_6846_);
lean_dec(v___x_6845_);
v_namePrefix_6847_ = lean_ctor_get(v_ngen_6846_, 0);
v_idx_6848_ = lean_ctor_get(v_ngen_6846_, 1);
v_isSharedCheck_6878_ = !lean_is_exclusive(v_ngen_6846_);
if (v_isSharedCheck_6878_ == 0)
{
v___x_6850_ = v_ngen_6846_;
v_isShared_6851_ = v_isSharedCheck_6878_;
goto v_resetjp_6849_;
}
else
{
lean_inc(v_idx_6848_);
lean_inc(v_namePrefix_6847_);
lean_dec(v_ngen_6846_);
v___x_6850_ = lean_box(0);
v_isShared_6851_ = v_isSharedCheck_6878_;
goto v_resetjp_6849_;
}
v_resetjp_6849_:
{
lean_object* v___x_6852_; lean_object* v_env_6853_; lean_object* v_nextMacroScope_6854_; lean_object* v_auxDeclNGen_6855_; lean_object* v_traceState_6856_; lean_object* v_cache_6857_; lean_object* v_messages_6858_; lean_object* v_infoState_6859_; lean_object* v_snapshotTasks_6860_; lean_object* v___x_6862_; uint8_t v_isShared_6863_; uint8_t v_isSharedCheck_6876_; 
v___x_6852_ = lean_st_ref_take(v___y_6843_);
v_env_6853_ = lean_ctor_get(v___x_6852_, 0);
v_nextMacroScope_6854_ = lean_ctor_get(v___x_6852_, 1);
v_auxDeclNGen_6855_ = lean_ctor_get(v___x_6852_, 3);
v_traceState_6856_ = lean_ctor_get(v___x_6852_, 4);
v_cache_6857_ = lean_ctor_get(v___x_6852_, 5);
v_messages_6858_ = lean_ctor_get(v___x_6852_, 6);
v_infoState_6859_ = lean_ctor_get(v___x_6852_, 7);
v_snapshotTasks_6860_ = lean_ctor_get(v___x_6852_, 8);
v_isSharedCheck_6876_ = !lean_is_exclusive(v___x_6852_);
if (v_isSharedCheck_6876_ == 0)
{
lean_object* v_unused_6877_; 
v_unused_6877_ = lean_ctor_get(v___x_6852_, 2);
lean_dec(v_unused_6877_);
v___x_6862_ = v___x_6852_;
v_isShared_6863_ = v_isSharedCheck_6876_;
goto v_resetjp_6861_;
}
else
{
lean_inc(v_snapshotTasks_6860_);
lean_inc(v_infoState_6859_);
lean_inc(v_messages_6858_);
lean_inc(v_cache_6857_);
lean_inc(v_traceState_6856_);
lean_inc(v_auxDeclNGen_6855_);
lean_inc(v_nextMacroScope_6854_);
lean_inc(v_env_6853_);
lean_dec(v___x_6852_);
v___x_6862_ = lean_box(0);
v_isShared_6863_ = v_isSharedCheck_6876_;
goto v_resetjp_6861_;
}
v_resetjp_6861_:
{
lean_object* v___x_6864_; lean_object* v___x_6865_; lean_object* v___x_6866_; lean_object* v___x_6868_; 
lean_inc(v_idx_6848_);
lean_inc(v_namePrefix_6847_);
v___x_6864_ = l_Lean_Name_num___override(v_namePrefix_6847_, v_idx_6848_);
v___x_6865_ = lean_unsigned_to_nat(1u);
v___x_6866_ = lean_nat_add(v_idx_6848_, v___x_6865_);
lean_dec(v_idx_6848_);
if (v_isShared_6851_ == 0)
{
lean_ctor_set(v___x_6850_, 1, v___x_6866_);
v___x_6868_ = v___x_6850_;
goto v_reusejp_6867_;
}
else
{
lean_object* v_reuseFailAlloc_6875_; 
v_reuseFailAlloc_6875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6875_, 0, v_namePrefix_6847_);
lean_ctor_set(v_reuseFailAlloc_6875_, 1, v___x_6866_);
v___x_6868_ = v_reuseFailAlloc_6875_;
goto v_reusejp_6867_;
}
v_reusejp_6867_:
{
lean_object* v___x_6870_; 
if (v_isShared_6863_ == 0)
{
lean_ctor_set(v___x_6862_, 2, v___x_6868_);
v___x_6870_ = v___x_6862_;
goto v_reusejp_6869_;
}
else
{
lean_object* v_reuseFailAlloc_6874_; 
v_reuseFailAlloc_6874_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6874_, 0, v_env_6853_);
lean_ctor_set(v_reuseFailAlloc_6874_, 1, v_nextMacroScope_6854_);
lean_ctor_set(v_reuseFailAlloc_6874_, 2, v___x_6868_);
lean_ctor_set(v_reuseFailAlloc_6874_, 3, v_auxDeclNGen_6855_);
lean_ctor_set(v_reuseFailAlloc_6874_, 4, v_traceState_6856_);
lean_ctor_set(v_reuseFailAlloc_6874_, 5, v_cache_6857_);
lean_ctor_set(v_reuseFailAlloc_6874_, 6, v_messages_6858_);
lean_ctor_set(v_reuseFailAlloc_6874_, 7, v_infoState_6859_);
lean_ctor_set(v_reuseFailAlloc_6874_, 8, v_snapshotTasks_6860_);
v___x_6870_ = v_reuseFailAlloc_6874_;
goto v_reusejp_6869_;
}
v_reusejp_6869_:
{
lean_object* v___x_6871_; lean_object* v___x_6872_; lean_object* v___x_6873_; 
v___x_6871_ = lean_st_ref_set(v___y_6843_, v___x_6870_);
v___x_6872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6872_, 0, v___x_6864_);
lean_ctor_set(v___x_6872_, 1, v___x_6865_);
v___x_6873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6873_, 0, v___x_6872_);
return v___x_6873_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg___boxed(lean_object* v___y_6879_, lean_object* v___y_6880_){
_start:
{
lean_object* v_res_6881_; 
v_res_6881_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v___y_6879_);
lean_dec(v___y_6879_);
return v_res_6881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(lean_object* v___y_6882_, lean_object* v___y_6883_){
_start:
{
lean_object* v___x_6885_; 
v___x_6885_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v___y_6883_);
return v___x_6885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___boxed(lean_object* v___y_6886_, lean_object* v___y_6887_, lean_object* v___y_6888_){
_start:
{
lean_object* v_res_6889_; 
v_res_6889_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1(v___y_6886_, v___y_6887_);
lean_dec(v___y_6887_);
lean_dec_ref(v___y_6886_);
return v_res_6889_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_6890_; lean_object* v___x_6891_; lean_object* v___x_6892_; 
v___x_6890_ = lean_unsigned_to_nat(32u);
v___x_6891_ = lean_mk_empty_array_with_capacity(v___x_6890_);
v___x_6892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6892_, 0, v___x_6891_);
return v___x_6892_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1(void){
_start:
{
size_t v___x_6893_; lean_object* v___x_6894_; lean_object* v___x_6895_; lean_object* v___x_6896_; lean_object* v___x_6897_; lean_object* v___x_6898_; 
v___x_6893_ = ((size_t)5ULL);
v___x_6894_ = lean_unsigned_to_nat(0u);
v___x_6895_ = lean_unsigned_to_nat(32u);
v___x_6896_ = lean_mk_empty_array_with_capacity(v___x_6895_);
v___x_6897_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__0);
v___x_6898_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_6898_, 0, v___x_6897_);
lean_ctor_set(v___x_6898_, 1, v___x_6896_);
lean_ctor_set(v___x_6898_, 2, v___x_6894_);
lean_ctor_set(v___x_6898_, 3, v___x_6894_);
lean_ctor_set_usize(v___x_6898_, 4, v___x_6893_);
return v___x_6898_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2(void){
_start:
{
lean_object* v___x_6899_; lean_object* v___x_6900_; lean_object* v___x_6901_; lean_object* v___x_6902_; 
v___x_6899_ = lean_box(1);
v___x_6900_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__1);
v___x_6901_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__1);
v___x_6902_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_6902_, 0, v___x_6901_);
lean_ctor_set(v___x_6902_, 1, v___x_6900_);
lean_ctor_set(v___x_6902_, 2, v___x_6899_);
return v___x_6902_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_msgData_6903_, lean_object* v___y_6904_, lean_object* v___y_6905_){
_start:
{
lean_object* v___x_6907_; lean_object* v_env_6908_; lean_object* v_options_6909_; lean_object* v___x_6910_; lean_object* v___x_6911_; lean_object* v___x_6912_; lean_object* v___x_6913_; lean_object* v___x_6914_; 
v___x_6907_ = lean_st_ref_get(v___y_6905_);
v_env_6908_ = lean_ctor_get(v___x_6907_, 0);
lean_inc_ref(v_env_6908_);
lean_dec(v___x_6907_);
v_options_6909_ = lean_ctor_get(v___y_6904_, 2);
v___x_6910_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2, &l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2_once, _init_l_Lean_Meta_LazyDiscrTree_addConstImportData___redArg___closed__2);
v___x_6911_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___closed__2);
lean_inc_ref(v_options_6909_);
v___x_6912_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6912_, 0, v_env_6908_);
lean_ctor_set(v___x_6912_, 1, v___x_6910_);
lean_ctor_set(v___x_6912_, 2, v___x_6911_);
lean_ctor_set(v___x_6912_, 3, v_options_6909_);
v___x_6913_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_6913_, 0, v___x_6912_);
lean_ctor_set(v___x_6913_, 1, v_msgData_6903_);
v___x_6914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6914_, 0, v___x_6913_);
return v___x_6914_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5___boxed(lean_object* v_msgData_6915_, lean_object* v___y_6916_, lean_object* v___y_6917_, lean_object* v___y_6918_){
_start:
{
lean_object* v_res_6919_; 
v_res_6919_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(v_msgData_6915_, v___y_6916_, v___y_6917_);
lean_dec(v___y_6917_);
lean_dec_ref(v___y_6916_);
return v_res_6919_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(lean_object* v_ref_6920_, lean_object* v_msgData_6921_, uint8_t v_severity_6922_, uint8_t v_isSilent_6923_, lean_object* v___y_6924_, lean_object* v___y_6925_){
_start:
{
uint8_t v___y_6928_; lean_object* v___y_6929_; lean_object* v___y_6930_; lean_object* v___y_6931_; uint8_t v___y_6932_; lean_object* v___y_6933_; lean_object* v___y_6934_; lean_object* v___y_6935_; lean_object* v___y_6936_; lean_object* v___y_6964_; uint8_t v___y_6965_; uint8_t v___y_6966_; uint8_t v___y_6967_; lean_object* v___y_6968_; lean_object* v___y_6969_; lean_object* v___y_6970_; lean_object* v___y_6971_; lean_object* v___y_6989_; uint8_t v___y_6990_; uint8_t v___y_6991_; lean_object* v___y_6992_; uint8_t v___y_6993_; lean_object* v___y_6994_; lean_object* v___y_6995_; lean_object* v___y_6996_; lean_object* v___y_7000_; uint8_t v___y_7001_; uint8_t v___y_7002_; lean_object* v___y_7003_; lean_object* v___y_7004_; lean_object* v___y_7005_; uint8_t v___y_7006_; uint8_t v___x_7011_; uint8_t v___y_7013_; lean_object* v___y_7014_; lean_object* v___y_7015_; lean_object* v___y_7016_; lean_object* v___y_7017_; uint8_t v___y_7018_; uint8_t v___y_7019_; uint8_t v___y_7021_; uint8_t v___x_7036_; 
v___x_7011_ = 2;
v___x_7036_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6922_, v___x_7011_);
if (v___x_7036_ == 0)
{
v___y_7021_ = v___x_7036_;
goto v___jp_7020_;
}
else
{
uint8_t v___x_7037_; 
lean_inc_ref(v_msgData_6921_);
v___x_7037_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_6921_);
v___y_7021_ = v___x_7037_;
goto v___jp_7020_;
}
v___jp_6927_:
{
lean_object* v___x_6937_; lean_object* v_currNamespace_6938_; lean_object* v_openDecls_6939_; lean_object* v_env_6940_; lean_object* v_nextMacroScope_6941_; lean_object* v_ngen_6942_; lean_object* v_auxDeclNGen_6943_; lean_object* v_traceState_6944_; lean_object* v_cache_6945_; lean_object* v_messages_6946_; lean_object* v_infoState_6947_; lean_object* v_snapshotTasks_6948_; lean_object* v___x_6950_; uint8_t v_isShared_6951_; uint8_t v_isSharedCheck_6962_; 
v___x_6937_ = lean_st_ref_take(v___y_6936_);
v_currNamespace_6938_ = lean_ctor_get(v___y_6935_, 6);
v_openDecls_6939_ = lean_ctor_get(v___y_6935_, 7);
v_env_6940_ = lean_ctor_get(v___x_6937_, 0);
v_nextMacroScope_6941_ = lean_ctor_get(v___x_6937_, 1);
v_ngen_6942_ = lean_ctor_get(v___x_6937_, 2);
v_auxDeclNGen_6943_ = lean_ctor_get(v___x_6937_, 3);
v_traceState_6944_ = lean_ctor_get(v___x_6937_, 4);
v_cache_6945_ = lean_ctor_get(v___x_6937_, 5);
v_messages_6946_ = lean_ctor_get(v___x_6937_, 6);
v_infoState_6947_ = lean_ctor_get(v___x_6937_, 7);
v_snapshotTasks_6948_ = lean_ctor_get(v___x_6937_, 8);
v_isSharedCheck_6962_ = !lean_is_exclusive(v___x_6937_);
if (v_isSharedCheck_6962_ == 0)
{
v___x_6950_ = v___x_6937_;
v_isShared_6951_ = v_isSharedCheck_6962_;
goto v_resetjp_6949_;
}
else
{
lean_inc(v_snapshotTasks_6948_);
lean_inc(v_infoState_6947_);
lean_inc(v_messages_6946_);
lean_inc(v_cache_6945_);
lean_inc(v_traceState_6944_);
lean_inc(v_auxDeclNGen_6943_);
lean_inc(v_ngen_6942_);
lean_inc(v_nextMacroScope_6941_);
lean_inc(v_env_6940_);
lean_dec(v___x_6937_);
v___x_6950_ = lean_box(0);
v_isShared_6951_ = v_isSharedCheck_6962_;
goto v_resetjp_6949_;
}
v_resetjp_6949_:
{
lean_object* v___x_6952_; lean_object* v___x_6953_; lean_object* v___x_6954_; lean_object* v___x_6955_; lean_object* v___x_6957_; 
lean_inc(v_openDecls_6939_);
lean_inc(v_currNamespace_6938_);
v___x_6952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6952_, 0, v_currNamespace_6938_);
lean_ctor_set(v___x_6952_, 1, v_openDecls_6939_);
v___x_6953_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_6953_, 0, v___x_6952_);
lean_ctor_set(v___x_6953_, 1, v___y_6931_);
lean_inc_ref(v___y_6930_);
lean_inc_ref(v___y_6933_);
v___x_6954_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_6954_, 0, v___y_6933_);
lean_ctor_set(v___x_6954_, 1, v___y_6934_);
lean_ctor_set(v___x_6954_, 2, v___y_6929_);
lean_ctor_set(v___x_6954_, 3, v___y_6930_);
lean_ctor_set(v___x_6954_, 4, v___x_6953_);
lean_ctor_set_uint8(v___x_6954_, sizeof(void*)*5, v___y_6928_);
lean_ctor_set_uint8(v___x_6954_, sizeof(void*)*5 + 1, v___y_6932_);
lean_ctor_set_uint8(v___x_6954_, sizeof(void*)*5 + 2, v_isSilent_6923_);
v___x_6955_ = l_Lean_MessageLog_add(v___x_6954_, v_messages_6946_);
if (v_isShared_6951_ == 0)
{
lean_ctor_set(v___x_6950_, 6, v___x_6955_);
v___x_6957_ = v___x_6950_;
goto v_reusejp_6956_;
}
else
{
lean_object* v_reuseFailAlloc_6961_; 
v_reuseFailAlloc_6961_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6961_, 0, v_env_6940_);
lean_ctor_set(v_reuseFailAlloc_6961_, 1, v_nextMacroScope_6941_);
lean_ctor_set(v_reuseFailAlloc_6961_, 2, v_ngen_6942_);
lean_ctor_set(v_reuseFailAlloc_6961_, 3, v_auxDeclNGen_6943_);
lean_ctor_set(v_reuseFailAlloc_6961_, 4, v_traceState_6944_);
lean_ctor_set(v_reuseFailAlloc_6961_, 5, v_cache_6945_);
lean_ctor_set(v_reuseFailAlloc_6961_, 6, v___x_6955_);
lean_ctor_set(v_reuseFailAlloc_6961_, 7, v_infoState_6947_);
lean_ctor_set(v_reuseFailAlloc_6961_, 8, v_snapshotTasks_6948_);
v___x_6957_ = v_reuseFailAlloc_6961_;
goto v_reusejp_6956_;
}
v_reusejp_6956_:
{
lean_object* v___x_6958_; lean_object* v___x_6959_; lean_object* v___x_6960_; 
v___x_6958_ = lean_st_ref_set(v___y_6936_, v___x_6957_);
v___x_6959_ = lean_box(0);
v___x_6960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6960_, 0, v___x_6959_);
return v___x_6960_;
}
}
}
v___jp_6963_:
{
lean_object* v___x_6972_; lean_object* v___x_6973_; lean_object* v_a_6974_; lean_object* v___x_6976_; uint8_t v_isShared_6977_; uint8_t v_isSharedCheck_6987_; 
v___x_6972_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_6921_);
v___x_6973_ = l_Lean_addMessageContextPartial___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4_spec__5(v___x_6972_, v___y_6924_, v___y_6925_);
v_a_6974_ = lean_ctor_get(v___x_6973_, 0);
v_isSharedCheck_6987_ = !lean_is_exclusive(v___x_6973_);
if (v_isSharedCheck_6987_ == 0)
{
v___x_6976_ = v___x_6973_;
v_isShared_6977_ = v_isSharedCheck_6987_;
goto v_resetjp_6975_;
}
else
{
lean_inc(v_a_6974_);
lean_dec(v___x_6973_);
v___x_6976_ = lean_box(0);
v_isShared_6977_ = v_isSharedCheck_6987_;
goto v_resetjp_6975_;
}
v_resetjp_6975_:
{
lean_object* v___x_6978_; lean_object* v___x_6979_; lean_object* v___x_6980_; lean_object* v___x_6981_; 
lean_inc_ref_n(v___y_6968_, 2);
v___x_6978_ = l_Lean_FileMap_toPosition(v___y_6968_, v___y_6970_);
lean_dec(v___y_6970_);
v___x_6979_ = l_Lean_FileMap_toPosition(v___y_6968_, v___y_6971_);
lean_dec(v___y_6971_);
v___x_6980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6980_, 0, v___x_6979_);
v___x_6981_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___closed__0));
if (v___y_6965_ == 0)
{
lean_del_object(v___x_6976_);
lean_dec_ref(v___y_6964_);
v___y_6928_ = v___y_6966_;
v___y_6929_ = v___x_6980_;
v___y_6930_ = v___x_6981_;
v___y_6931_ = v_a_6974_;
v___y_6932_ = v___y_6967_;
v___y_6933_ = v___y_6969_;
v___y_6934_ = v___x_6978_;
v___y_6935_ = v___y_6924_;
v___y_6936_ = v___y_6925_;
goto v___jp_6927_;
}
else
{
uint8_t v___x_6982_; 
lean_inc(v_a_6974_);
v___x_6982_ = l_Lean_MessageData_hasTag(v___y_6964_, v_a_6974_);
if (v___x_6982_ == 0)
{
lean_object* v___x_6983_; lean_object* v___x_6985_; 
lean_dec_ref(v___x_6980_);
lean_dec_ref(v___x_6978_);
lean_dec(v_a_6974_);
v___x_6983_ = lean_box(0);
if (v_isShared_6977_ == 0)
{
lean_ctor_set(v___x_6976_, 0, v___x_6983_);
v___x_6985_ = v___x_6976_;
goto v_reusejp_6984_;
}
else
{
lean_object* v_reuseFailAlloc_6986_; 
v_reuseFailAlloc_6986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6986_, 0, v___x_6983_);
v___x_6985_ = v_reuseFailAlloc_6986_;
goto v_reusejp_6984_;
}
v_reusejp_6984_:
{
return v___x_6985_;
}
}
else
{
lean_del_object(v___x_6976_);
v___y_6928_ = v___y_6966_;
v___y_6929_ = v___x_6980_;
v___y_6930_ = v___x_6981_;
v___y_6931_ = v_a_6974_;
v___y_6932_ = v___y_6967_;
v___y_6933_ = v___y_6969_;
v___y_6934_ = v___x_6978_;
v___y_6935_ = v___y_6924_;
v___y_6936_ = v___y_6925_;
goto v___jp_6927_;
}
}
}
}
v___jp_6988_:
{
lean_object* v___x_6997_; 
v___x_6997_ = l_Lean_Syntax_getTailPos_x3f(v___y_6995_, v___y_6990_);
lean_dec(v___y_6995_);
if (lean_obj_tag(v___x_6997_) == 0)
{
lean_inc(v___y_6996_);
v___y_6964_ = v___y_6989_;
v___y_6965_ = v___y_6991_;
v___y_6966_ = v___y_6990_;
v___y_6967_ = v___y_6993_;
v___y_6968_ = v___y_6992_;
v___y_6969_ = v___y_6994_;
v___y_6970_ = v___y_6996_;
v___y_6971_ = v___y_6996_;
goto v___jp_6963_;
}
else
{
lean_object* v_val_6998_; 
v_val_6998_ = lean_ctor_get(v___x_6997_, 0);
lean_inc(v_val_6998_);
lean_dec_ref(v___x_6997_);
v___y_6964_ = v___y_6989_;
v___y_6965_ = v___y_6991_;
v___y_6966_ = v___y_6990_;
v___y_6967_ = v___y_6993_;
v___y_6968_ = v___y_6992_;
v___y_6969_ = v___y_6994_;
v___y_6970_ = v___y_6996_;
v___y_6971_ = v_val_6998_;
goto v___jp_6963_;
}
}
v___jp_6999_:
{
lean_object* v_ref_7007_; lean_object* v___x_7008_; 
v_ref_7007_ = l_Lean_replaceRef(v_ref_6920_, v___y_7005_);
v___x_7008_ = l_Lean_Syntax_getPos_x3f(v_ref_7007_, v___y_7002_);
if (lean_obj_tag(v___x_7008_) == 0)
{
lean_object* v___x_7009_; 
v___x_7009_ = lean_unsigned_to_nat(0u);
v___y_6989_ = v___y_7000_;
v___y_6990_ = v___y_7002_;
v___y_6991_ = v___y_7001_;
v___y_6992_ = v___y_7003_;
v___y_6993_ = v___y_7006_;
v___y_6994_ = v___y_7004_;
v___y_6995_ = v_ref_7007_;
v___y_6996_ = v___x_7009_;
goto v___jp_6988_;
}
else
{
lean_object* v_val_7010_; 
v_val_7010_ = lean_ctor_get(v___x_7008_, 0);
lean_inc(v_val_7010_);
lean_dec_ref(v___x_7008_);
v___y_6989_ = v___y_7000_;
v___y_6990_ = v___y_7002_;
v___y_6991_ = v___y_7001_;
v___y_6992_ = v___y_7003_;
v___y_6993_ = v___y_7006_;
v___y_6994_ = v___y_7004_;
v___y_6995_ = v_ref_7007_;
v___y_6996_ = v_val_7010_;
goto v___jp_6988_;
}
}
v___jp_7012_:
{
if (v___y_7019_ == 0)
{
v___y_7000_ = v___y_7017_;
v___y_7001_ = v___y_7013_;
v___y_7002_ = v___y_7018_;
v___y_7003_ = v___y_7014_;
v___y_7004_ = v___y_7016_;
v___y_7005_ = v___y_7015_;
v___y_7006_ = v_severity_6922_;
goto v___jp_6999_;
}
else
{
v___y_7000_ = v___y_7017_;
v___y_7001_ = v___y_7013_;
v___y_7002_ = v___y_7018_;
v___y_7003_ = v___y_7014_;
v___y_7004_ = v___y_7016_;
v___y_7005_ = v___y_7015_;
v___y_7006_ = v___x_7011_;
goto v___jp_6999_;
}
}
v___jp_7020_:
{
if (v___y_7021_ == 0)
{
lean_object* v_fileName_7022_; lean_object* v_fileMap_7023_; lean_object* v_options_7024_; lean_object* v_ref_7025_; uint8_t v_suppressElabErrors_7026_; lean_object* v___x_7027_; lean_object* v___x_7028_; lean_object* v___f_7029_; uint8_t v___x_7030_; uint8_t v___x_7031_; 
v_fileName_7022_ = lean_ctor_get(v___y_6924_, 0);
v_fileMap_7023_ = lean_ctor_get(v___y_6924_, 1);
v_options_7024_ = lean_ctor_get(v___y_6924_, 2);
v_ref_7025_ = lean_ctor_get(v___y_6924_, 5);
v_suppressElabErrors_7026_ = lean_ctor_get_uint8(v___y_6924_, sizeof(void*)*14 + 1);
v___x_7027_ = lean_box(v___y_7021_);
v___x_7028_ = lean_box(v_suppressElabErrors_7026_);
v___f_7029_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createImportedDiscrTree___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__0_spec__0_spec__2_spec__3_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_7029_, 0, v___x_7027_);
lean_closure_set(v___f_7029_, 1, v___x_7028_);
v___x_7030_ = 1;
v___x_7031_ = l_Lean_instBEqMessageSeverity_beq(v_severity_6922_, v___x_7030_);
if (v___x_7031_ == 0)
{
v___y_7013_ = v_suppressElabErrors_7026_;
v___y_7014_ = v_fileMap_7023_;
v___y_7015_ = v_ref_7025_;
v___y_7016_ = v_fileName_7022_;
v___y_7017_ = v___f_7029_;
v___y_7018_ = v___y_7021_;
v___y_7019_ = v___x_7031_;
goto v___jp_7012_;
}
else
{
lean_object* v___x_7032_; uint8_t v___x_7033_; 
v___x_7032_ = l_Lean_warningAsError;
v___x_7033_ = l_Lean_Option_get___at___00Lean_Meta_LazyDiscrTree_addConstImportData_spec__0(v_options_7024_, v___x_7032_);
v___y_7013_ = v_suppressElabErrors_7026_;
v___y_7014_ = v_fileMap_7023_;
v___y_7015_ = v_ref_7025_;
v___y_7016_ = v_fileName_7022_;
v___y_7017_ = v___f_7029_;
v___y_7018_ = v___y_7021_;
v___y_7019_ = v___x_7033_;
goto v___jp_7012_;
}
}
else
{
lean_object* v___x_7034_; lean_object* v___x_7035_; 
lean_dec_ref(v_msgData_6921_);
v___x_7034_ = lean_box(0);
v___x_7035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7035_, 0, v___x_7034_);
return v___x_7035_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_ref_7038_, lean_object* v_msgData_7039_, lean_object* v_severity_7040_, lean_object* v_isSilent_7041_, lean_object* v___y_7042_, lean_object* v___y_7043_, lean_object* v___y_7044_){
_start:
{
uint8_t v_severity_boxed_7045_; uint8_t v_isSilent_boxed_7046_; lean_object* v_res_7047_; 
v_severity_boxed_7045_ = lean_unbox(v_severity_7040_);
v_isSilent_boxed_7046_ = lean_unbox(v_isSilent_7041_);
v_res_7047_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(v_ref_7038_, v_msgData_7039_, v_severity_boxed_7045_, v_isSilent_boxed_7046_, v___y_7042_, v___y_7043_);
lean_dec(v___y_7043_);
lean_dec_ref(v___y_7042_);
lean_dec(v_ref_7038_);
return v_res_7047_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(lean_object* v_msgData_7048_, uint8_t v_severity_7049_, uint8_t v_isSilent_7050_, lean_object* v___y_7051_, lean_object* v___y_7052_){
_start:
{
lean_object* v_ref_7054_; lean_object* v___x_7055_; 
v_ref_7054_ = lean_ctor_get(v___y_7051_, 5);
v___x_7055_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2_spec__4(v_ref_7054_, v_msgData_7048_, v_severity_7049_, v_isSilent_7050_, v___y_7051_, v___y_7052_);
return v___x_7055_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_7056_, lean_object* v_severity_7057_, lean_object* v_isSilent_7058_, lean_object* v___y_7059_, lean_object* v___y_7060_, lean_object* v___y_7061_){
_start:
{
uint8_t v_severity_boxed_7062_; uint8_t v_isSilent_boxed_7063_; lean_object* v_res_7064_; 
v_severity_boxed_7062_ = lean_unbox(v_severity_7057_);
v_isSilent_boxed_7063_ = lean_unbox(v_isSilent_7058_);
v_res_7064_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(v_msgData_7056_, v_severity_boxed_7062_, v_isSilent_boxed_7063_, v___y_7059_, v___y_7060_);
lean_dec(v___y_7060_);
lean_dec_ref(v___y_7059_);
return v_res_7064_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(lean_object* v_msgData_7065_, lean_object* v___y_7066_, lean_object* v___y_7067_){
_start:
{
uint8_t v___x_7069_; uint8_t v___x_7070_; lean_object* v___x_7071_; 
v___x_7069_ = 2;
v___x_7070_ = 0;
v___x_7071_ = l_Lean_log___at___00Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0_spec__2(v_msgData_7065_, v___x_7069_, v___x_7070_, v___y_7066_, v___y_7067_);
return v___x_7071_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0___boxed(lean_object* v_msgData_7072_, lean_object* v___y_7073_, lean_object* v___y_7074_, lean_object* v___y_7075_){
_start:
{
lean_object* v_res_7076_; 
v_res_7076_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(v_msgData_7072_, v___y_7073_, v___y_7074_);
lean_dec(v___y_7074_);
lean_dec_ref(v___y_7073_);
return v_res_7076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(lean_object* v_f_7077_, lean_object* v___y_7078_, lean_object* v___y_7079_){
_start:
{
lean_object* v_module_7081_; lean_object* v_const_7082_; lean_object* v_exception_7083_; lean_object* v___x_7084_; lean_object* v___x_7085_; lean_object* v___x_7086_; lean_object* v___x_7087_; lean_object* v___x_7088_; lean_object* v___x_7089_; lean_object* v___x_7090_; lean_object* v___x_7091_; lean_object* v___x_7092_; lean_object* v___x_7093_; lean_object* v___x_7094_; lean_object* v___x_7095_; 
v_module_7081_ = lean_ctor_get(v_f_7077_, 0);
lean_inc(v_module_7081_);
v_const_7082_ = lean_ctor_get(v_f_7077_, 1);
lean_inc(v_const_7082_);
v_exception_7083_ = lean_ctor_get(v_f_7077_, 2);
lean_inc_ref(v_exception_7083_);
lean_dec_ref(v_f_7077_);
v___x_7084_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__1);
v___x_7085_ = l_Lean_MessageData_ofName(v_const_7082_);
v___x_7086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7086_, 0, v___x_7084_);
lean_ctor_set(v___x_7086_, 1, v___x_7085_);
v___x_7087_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__3);
v___x_7088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7088_, 0, v___x_7086_);
lean_ctor_set(v___x_7088_, 1, v___x_7087_);
v___x_7089_ = l_Lean_MessageData_ofName(v_module_7081_);
v___x_7090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7090_, 0, v___x_7088_);
lean_ctor_set(v___x_7090_, 1, v___x_7089_);
v___x_7091_ = lean_obj_once(&l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5, &l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5_once, _init_l_Lean_Meta_LazyDiscrTree_logImportFailure___redArg___closed__5);
v___x_7092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7092_, 0, v___x_7090_);
lean_ctor_set(v___x_7092_, 1, v___x_7091_);
v___x_7093_ = l_Lean_Exception_toMessageData(v_exception_7083_);
v___x_7094_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_7094_, 0, v___x_7092_);
lean_ctor_set(v___x_7094_, 1, v___x_7093_);
v___x_7095_ = l_Lean_logError___at___00Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0_spec__0(v___x_7094_, v___y_7078_, v___y_7079_);
return v___x_7095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0___boxed(lean_object* v_f_7096_, lean_object* v___y_7097_, lean_object* v___y_7098_, lean_object* v___y_7099_){
_start:
{
lean_object* v_res_7100_; 
v_res_7100_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(v_f_7096_, v___y_7097_, v___y_7098_);
lean_dec(v___y_7098_);
lean_dec_ref(v___y_7097_);
return v_res_7100_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(lean_object* v_as_7101_, size_t v_i_7102_, size_t v_stop_7103_, lean_object* v_b_7104_, lean_object* v___y_7105_, lean_object* v___y_7106_){
_start:
{
uint8_t v___x_7108_; 
v___x_7108_ = lean_usize_dec_eq(v_i_7102_, v_stop_7103_);
if (v___x_7108_ == 0)
{
lean_object* v___x_7109_; lean_object* v___x_7110_; 
v___x_7109_ = lean_array_uget_borrowed(v_as_7101_, v_i_7102_);
lean_inc(v___x_7109_);
v___x_7110_ = l_Lean_Meta_LazyDiscrTree_logImportFailure___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__0(v___x_7109_, v___y_7105_, v___y_7106_);
if (lean_obj_tag(v___x_7110_) == 0)
{
lean_object* v_a_7111_; size_t v___x_7112_; size_t v___x_7113_; 
v_a_7111_ = lean_ctor_get(v___x_7110_, 0);
lean_inc(v_a_7111_);
lean_dec_ref(v___x_7110_);
v___x_7112_ = ((size_t)1ULL);
v___x_7113_ = lean_usize_add(v_i_7102_, v___x_7112_);
v_i_7102_ = v___x_7113_;
v_b_7104_ = v_a_7111_;
goto _start;
}
else
{
return v___x_7110_;
}
}
else
{
lean_object* v___x_7115_; 
v___x_7115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7115_, 0, v_b_7104_);
return v___x_7115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2___boxed(lean_object* v_as_7116_, lean_object* v_i_7117_, lean_object* v_stop_7118_, lean_object* v_b_7119_, lean_object* v___y_7120_, lean_object* v___y_7121_, lean_object* v___y_7122_){
_start:
{
size_t v_i_boxed_7123_; size_t v_stop_boxed_7124_; lean_object* v_res_7125_; 
v_i_boxed_7123_ = lean_unbox_usize(v_i_7117_);
lean_dec(v_i_7117_);
v_stop_boxed_7124_ = lean_unbox_usize(v_stop_7118_);
lean_dec(v_stop_7118_);
v_res_7125_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(v_as_7116_, v_i_boxed_7123_, v_stop_boxed_7124_, v_b_7119_, v___y_7120_, v___y_7121_);
lean_dec(v___y_7121_);
lean_dec_ref(v___y_7120_);
lean_dec_ref(v_as_7116_);
return v_res_7125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(lean_object* v_entriesForConst_7126_, lean_object* v_a_7127_, lean_object* v_a_7128_){
_start:
{
lean_object* v___x_7130_; lean_object* v___x_7131_; lean_object* v_a_7132_; lean_object* v___x_7134_; uint8_t v_isShared_7135_; uint8_t v_isSharedCheck_7166_; 
v___x_7130_ = lean_st_ref_get(v_a_7128_);
v___x_7131_ = l_Lean_Meta_LazyDiscrTree_getChildNgen___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__1___redArg(v_a_7128_);
v_a_7132_ = lean_ctor_get(v___x_7131_, 0);
v_isSharedCheck_7166_ = !lean_is_exclusive(v___x_7131_);
if (v_isSharedCheck_7166_ == 0)
{
v___x_7134_ = v___x_7131_;
v_isShared_7135_ = v_isSharedCheck_7166_;
goto v_resetjp_7133_;
}
else
{
lean_inc(v_a_7132_);
lean_dec(v___x_7131_);
v___x_7134_ = lean_box(0);
v_isShared_7135_ = v_isSharedCheck_7166_;
goto v_resetjp_7133_;
}
v_resetjp_7133_:
{
lean_object* v___x_7136_; lean_object* v_env_7137_; lean_object* v___x_7138_; lean_object* v___y_7145_; lean_object* v___x_7154_; lean_object* v___x_7155_; lean_object* v___x_7156_; uint8_t v___x_7157_; 
v___x_7136_ = l_Lean_Meta_LazyDiscrTree_ImportData_new();
v_env_7137_ = lean_ctor_get(v___x_7130_, 0);
lean_inc_ref(v_env_7137_);
lean_dec(v___x_7130_);
lean_inc(v___x_7136_);
lean_inc_ref(v_a_7127_);
v___x_7138_ = l_Lean_Meta_LazyDiscrTree_createLocalPreDiscrTree___redArg(v_a_7127_, v_a_7132_, v_env_7137_, v___x_7136_, v_entriesForConst_7126_);
v___x_7154_ = lean_st_ref_get(v___x_7136_);
lean_dec(v___x_7136_);
v___x_7155_ = lean_unsigned_to_nat(0u);
v___x_7156_ = lean_array_get_size(v___x_7154_);
v___x_7157_ = lean_nat_dec_lt(v___x_7155_, v___x_7156_);
if (v___x_7157_ == 0)
{
lean_dec(v___x_7154_);
goto v___jp_7139_;
}
else
{
lean_object* v___x_7158_; uint8_t v___x_7159_; 
v___x_7158_ = lean_box(0);
v___x_7159_ = lean_nat_dec_le(v___x_7156_, v___x_7156_);
if (v___x_7159_ == 0)
{
if (v___x_7157_ == 0)
{
lean_dec(v___x_7154_);
goto v___jp_7139_;
}
else
{
size_t v___x_7160_; size_t v___x_7161_; lean_object* v___x_7162_; 
v___x_7160_ = ((size_t)0ULL);
v___x_7161_ = lean_usize_of_nat(v___x_7156_);
v___x_7162_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(v___x_7154_, v___x_7160_, v___x_7161_, v___x_7158_, v_a_7127_, v_a_7128_);
lean_dec(v___x_7154_);
v___y_7145_ = v___x_7162_;
goto v___jp_7144_;
}
}
else
{
size_t v___x_7163_; size_t v___x_7164_; lean_object* v___x_7165_; 
v___x_7163_ = ((size_t)0ULL);
v___x_7164_ = lean_usize_of_nat(v___x_7156_);
v___x_7165_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_createModuleDiscrTree_spec__2(v___x_7154_, v___x_7163_, v___x_7164_, v___x_7158_, v_a_7127_, v_a_7128_);
lean_dec(v___x_7154_);
v___y_7145_ = v___x_7165_;
goto v___jp_7144_;
}
}
v___jp_7139_:
{
lean_object* v___x_7140_; lean_object* v___x_7142_; 
v___x_7140_ = l_Lean_Meta_LazyDiscrTree_PreDiscrTree_toLazy___redArg(v___x_7138_);
if (v_isShared_7135_ == 0)
{
lean_ctor_set(v___x_7134_, 0, v___x_7140_);
v___x_7142_ = v___x_7134_;
goto v_reusejp_7141_;
}
else
{
lean_object* v_reuseFailAlloc_7143_; 
v_reuseFailAlloc_7143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7143_, 0, v___x_7140_);
v___x_7142_ = v_reuseFailAlloc_7143_;
goto v_reusejp_7141_;
}
v_reusejp_7141_:
{
return v___x_7142_;
}
}
v___jp_7144_:
{
if (lean_obj_tag(v___y_7145_) == 0)
{
lean_dec_ref(v___y_7145_);
goto v___jp_7139_;
}
else
{
lean_object* v_a_7146_; lean_object* v___x_7148_; uint8_t v_isShared_7149_; uint8_t v_isSharedCheck_7153_; 
lean_dec_ref(v___x_7138_);
lean_del_object(v___x_7134_);
v_a_7146_ = lean_ctor_get(v___y_7145_, 0);
v_isSharedCheck_7153_ = !lean_is_exclusive(v___y_7145_);
if (v_isSharedCheck_7153_ == 0)
{
v___x_7148_ = v___y_7145_;
v_isShared_7149_ = v_isSharedCheck_7153_;
goto v_resetjp_7147_;
}
else
{
lean_inc(v_a_7146_);
lean_dec(v___y_7145_);
v___x_7148_ = lean_box(0);
v_isShared_7149_ = v_isSharedCheck_7153_;
goto v_resetjp_7147_;
}
v_resetjp_7147_:
{
lean_object* v___x_7151_; 
if (v_isShared_7149_ == 0)
{
v___x_7151_ = v___x_7148_;
goto v_reusejp_7150_;
}
else
{
lean_object* v_reuseFailAlloc_7152_; 
v_reuseFailAlloc_7152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7152_, 0, v_a_7146_);
v___x_7151_ = v_reuseFailAlloc_7152_;
goto v_reusejp_7150_;
}
v_reusejp_7150_:
{
return v___x_7151_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg___boxed(lean_object* v_entriesForConst_7167_, lean_object* v_a_7168_, lean_object* v_a_7169_, lean_object* v_a_7170_){
_start:
{
lean_object* v_res_7171_; 
v_res_7171_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7167_, v_a_7168_, v_a_7169_);
lean_dec(v_a_7169_);
lean_dec_ref(v_a_7168_);
return v_res_7171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(lean_object* v_00_u03b1_7172_, lean_object* v_entriesForConst_7173_, lean_object* v_a_7174_, lean_object* v_a_7175_){
_start:
{
lean_object* v___x_7177_; 
v___x_7177_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7173_, v_a_7174_, v_a_7175_);
return v___x_7177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___boxed(lean_object* v_00_u03b1_7178_, lean_object* v_entriesForConst_7179_, lean_object* v_a_7180_, lean_object* v_a_7181_, lean_object* v_a_7182_){
_start:
{
lean_object* v_res_7183_; 
v_res_7183_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree(v_00_u03b1_7178_, v_entriesForConst_7179_, v_a_7180_, v_a_7181_);
lean_dec(v_a_7181_);
lean_dec_ref(v_a_7180_);
return v_res_7183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(lean_object* v_entriesForConst_7184_, lean_object* v_droppedEntriesRef_7185_, lean_object* v_droppedKeys_7186_, lean_object* v___y_7187_, lean_object* v___y_7188_, lean_object* v___y_7189_, lean_object* v___y_7190_){
_start:
{
lean_object* v_t_7193_; lean_object* v___x_7196_; 
v___x_7196_ = l_Lean_Meta_LazyDiscrTree_createModuleDiscrTree___redArg(v_entriesForConst_7184_, v___y_7189_, v___y_7190_);
if (lean_obj_tag(v___x_7196_) == 0)
{
if (lean_obj_tag(v_droppedEntriesRef_7185_) == 1)
{
lean_object* v_a_7197_; lean_object* v_val_7198_; lean_object* v___x_7200_; uint8_t v_isShared_7201_; uint8_t v_isSharedCheck_7224_; 
v_a_7197_ = lean_ctor_get(v___x_7196_, 0);
lean_inc(v_a_7197_);
lean_dec_ref(v___x_7196_);
v_val_7198_ = lean_ctor_get(v_droppedEntriesRef_7185_, 0);
v_isSharedCheck_7224_ = !lean_is_exclusive(v_droppedEntriesRef_7185_);
if (v_isSharedCheck_7224_ == 0)
{
v___x_7200_ = v_droppedEntriesRef_7185_;
v_isShared_7201_ = v_isSharedCheck_7224_;
goto v_resetjp_7199_;
}
else
{
lean_inc(v_val_7198_);
lean_dec(v_droppedEntriesRef_7185_);
v___x_7200_ = lean_box(0);
v_isShared_7201_ = v_isSharedCheck_7224_;
goto v_resetjp_7199_;
}
v_resetjp_7199_:
{
lean_object* v___x_7202_; 
v___x_7202_ = l_Lean_Meta_LazyDiscrTree_extractKeys___redArg(v_a_7197_, v_droppedKeys_7186_, v___y_7187_, v___y_7188_, v___y_7189_, v___y_7190_);
if (lean_obj_tag(v___x_7202_) == 0)
{
lean_object* v_a_7203_; lean_object* v_fst_7204_; lean_object* v_snd_7205_; lean_object* v___x_7206_; lean_object* v___y_7208_; 
v_a_7203_ = lean_ctor_get(v___x_7202_, 0);
lean_inc(v_a_7203_);
lean_dec_ref(v___x_7202_);
v_fst_7204_ = lean_ctor_get(v_a_7203_, 0);
lean_inc(v_fst_7204_);
v_snd_7205_ = lean_ctor_get(v_a_7203_, 1);
lean_inc(v_snd_7205_);
lean_dec(v_a_7203_);
v___x_7206_ = lean_st_ref_get(v_val_7198_);
if (lean_obj_tag(v___x_7206_) == 0)
{
lean_object* v___x_7214_; 
v___x_7214_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_instEmptyCollectionTrie___closed__0));
v___y_7208_ = v___x_7214_;
goto v___jp_7207_;
}
else
{
lean_object* v_val_7215_; 
v_val_7215_ = lean_ctor_get(v___x_7206_, 0);
lean_inc(v_val_7215_);
lean_dec_ref(v___x_7206_);
v___y_7208_ = v_val_7215_;
goto v___jp_7207_;
}
v___jp_7207_:
{
lean_object* v___x_7209_; lean_object* v___x_7211_; 
v___x_7209_ = l_Array_append___redArg(v___y_7208_, v_fst_7204_);
lean_dec(v_fst_7204_);
if (v_isShared_7201_ == 0)
{
lean_ctor_set(v___x_7200_, 0, v___x_7209_);
v___x_7211_ = v___x_7200_;
goto v_reusejp_7210_;
}
else
{
lean_object* v_reuseFailAlloc_7213_; 
v_reuseFailAlloc_7213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7213_, 0, v___x_7209_);
v___x_7211_ = v_reuseFailAlloc_7213_;
goto v_reusejp_7210_;
}
v_reusejp_7210_:
{
lean_object* v___x_7212_; 
v___x_7212_ = lean_st_ref_set(v_val_7198_, v___x_7211_);
lean_dec(v_val_7198_);
v_t_7193_ = v_snd_7205_;
goto v___jp_7192_;
}
}
}
else
{
lean_object* v_a_7216_; lean_object* v___x_7218_; uint8_t v_isShared_7219_; uint8_t v_isSharedCheck_7223_; 
lean_del_object(v___x_7200_);
lean_dec(v_val_7198_);
v_a_7216_ = lean_ctor_get(v___x_7202_, 0);
v_isSharedCheck_7223_ = !lean_is_exclusive(v___x_7202_);
if (v_isSharedCheck_7223_ == 0)
{
v___x_7218_ = v___x_7202_;
v_isShared_7219_ = v_isSharedCheck_7223_;
goto v_resetjp_7217_;
}
else
{
lean_inc(v_a_7216_);
lean_dec(v___x_7202_);
v___x_7218_ = lean_box(0);
v_isShared_7219_ = v_isSharedCheck_7223_;
goto v_resetjp_7217_;
}
v_resetjp_7217_:
{
lean_object* v___x_7221_; 
if (v_isShared_7219_ == 0)
{
v___x_7221_ = v___x_7218_;
goto v_reusejp_7220_;
}
else
{
lean_object* v_reuseFailAlloc_7222_; 
v_reuseFailAlloc_7222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7222_, 0, v_a_7216_);
v___x_7221_ = v_reuseFailAlloc_7222_;
goto v_reusejp_7220_;
}
v_reusejp_7220_:
{
return v___x_7221_;
}
}
}
}
}
else
{
lean_object* v_a_7225_; lean_object* v___x_7226_; 
lean_dec(v_droppedEntriesRef_7185_);
v_a_7225_ = lean_ctor_get(v___x_7196_, 0);
lean_inc(v_a_7225_);
lean_dec_ref(v___x_7196_);
v___x_7226_ = l_List_foldlM___at___00Lean_Meta_LazyDiscrTree_dropKeys_spec__0___redArg(v_a_7225_, v_droppedKeys_7186_, v___y_7187_, v___y_7188_, v___y_7189_, v___y_7190_);
if (lean_obj_tag(v___x_7226_) == 0)
{
lean_object* v_a_7227_; 
v_a_7227_ = lean_ctor_get(v___x_7226_, 0);
lean_inc(v_a_7227_);
lean_dec_ref(v___x_7226_);
v_t_7193_ = v_a_7227_;
goto v___jp_7192_;
}
else
{
lean_object* v_a_7228_; lean_object* v___x_7230_; uint8_t v_isShared_7231_; uint8_t v_isSharedCheck_7235_; 
v_a_7228_ = lean_ctor_get(v___x_7226_, 0);
v_isSharedCheck_7235_ = !lean_is_exclusive(v___x_7226_);
if (v_isSharedCheck_7235_ == 0)
{
v___x_7230_ = v___x_7226_;
v_isShared_7231_ = v_isSharedCheck_7235_;
goto v_resetjp_7229_;
}
else
{
lean_inc(v_a_7228_);
lean_dec(v___x_7226_);
v___x_7230_ = lean_box(0);
v_isShared_7231_ = v_isSharedCheck_7235_;
goto v_resetjp_7229_;
}
v_resetjp_7229_:
{
lean_object* v___x_7233_; 
if (v_isShared_7231_ == 0)
{
v___x_7233_ = v___x_7230_;
goto v_reusejp_7232_;
}
else
{
lean_object* v_reuseFailAlloc_7234_; 
v_reuseFailAlloc_7234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7234_, 0, v_a_7228_);
v___x_7233_ = v_reuseFailAlloc_7234_;
goto v_reusejp_7232_;
}
v_reusejp_7232_:
{
return v___x_7233_;
}
}
}
}
}
else
{
lean_object* v_a_7236_; lean_object* v___x_7238_; uint8_t v_isShared_7239_; uint8_t v_isSharedCheck_7243_; 
lean_dec(v_droppedKeys_7186_);
lean_dec(v_droppedEntriesRef_7185_);
v_a_7236_ = lean_ctor_get(v___x_7196_, 0);
v_isSharedCheck_7243_ = !lean_is_exclusive(v___x_7196_);
if (v_isSharedCheck_7243_ == 0)
{
v___x_7238_ = v___x_7196_;
v_isShared_7239_ = v_isSharedCheck_7243_;
goto v_resetjp_7237_;
}
else
{
lean_inc(v_a_7236_);
lean_dec(v___x_7196_);
v___x_7238_ = lean_box(0);
v_isShared_7239_ = v_isSharedCheck_7243_;
goto v_resetjp_7237_;
}
v_resetjp_7237_:
{
lean_object* v___x_7241_; 
if (v_isShared_7239_ == 0)
{
v___x_7241_ = v___x_7238_;
goto v_reusejp_7240_;
}
else
{
lean_object* v_reuseFailAlloc_7242_; 
v_reuseFailAlloc_7242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7242_, 0, v_a_7236_);
v___x_7241_ = v_reuseFailAlloc_7242_;
goto v_reusejp_7240_;
}
v_reusejp_7240_:
{
return v___x_7241_;
}
}
}
v___jp_7192_:
{
lean_object* v___x_7194_; lean_object* v___x_7195_; 
v___x_7194_ = lean_st_mk_ref(v_t_7193_);
v___x_7195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7195_, 0, v___x_7194_);
return v___x_7195_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed(lean_object* v_entriesForConst_7244_, lean_object* v_droppedEntriesRef_7245_, lean_object* v_droppedKeys_7246_, lean_object* v___y_7247_, lean_object* v___y_7248_, lean_object* v___y_7249_, lean_object* v___y_7250_, lean_object* v___y_7251_){
_start:
{
lean_object* v_res_7252_; 
v_res_7252_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0(v_entriesForConst_7244_, v_droppedEntriesRef_7245_, v_droppedKeys_7246_, v___y_7247_, v___y_7248_, v___y_7249_, v___y_7250_);
lean_dec(v___y_7250_);
lean_dec_ref(v___y_7249_);
lean_dec(v___y_7248_);
lean_dec_ref(v___y_7247_);
return v_res_7252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(lean_object* v_entriesForConst_7254_, lean_object* v_droppedKeys_7255_, lean_object* v_droppedEntriesRef_7256_, lean_object* v_a_7257_, lean_object* v_a_7258_, lean_object* v_a_7259_, lean_object* v_a_7260_){
_start:
{
lean_object* v_options_7262_; lean_object* v___f_7263_; lean_object* v___x_7264_; lean_object* v___x_7265_; lean_object* v___x_7266_; 
v_options_7262_ = lean_ctor_get(v_a_7259_, 2);
v___f_7263_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_7263_, 0, v_entriesForConst_7254_);
lean_closure_set(v___f_7263_, 1, v_droppedEntriesRef_7256_);
lean_closure_set(v___f_7263_, 2, v_droppedKeys_7255_);
v___x_7264_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___closed__0));
v___x_7265_ = lean_box(0);
v___x_7266_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_7264_, v_options_7262_, v___f_7263_, v___x_7265_, v_a_7257_, v_a_7258_, v_a_7259_, v_a_7260_);
return v___x_7266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg___boxed(lean_object* v_entriesForConst_7267_, lean_object* v_droppedKeys_7268_, lean_object* v_droppedEntriesRef_7269_, lean_object* v_a_7270_, lean_object* v_a_7271_, lean_object* v_a_7272_, lean_object* v_a_7273_, lean_object* v_a_7274_){
_start:
{
lean_object* v_res_7275_; 
v_res_7275_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_entriesForConst_7267_, v_droppedKeys_7268_, v_droppedEntriesRef_7269_, v_a_7270_, v_a_7271_, v_a_7272_, v_a_7273_);
lean_dec(v_a_7273_);
lean_dec_ref(v_a_7272_);
lean_dec(v_a_7271_);
lean_dec_ref(v_a_7270_);
return v_res_7275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(lean_object* v_00_u03b1_7276_, lean_object* v_entriesForConst_7277_, lean_object* v_droppedKeys_7278_, lean_object* v_droppedEntriesRef_7279_, lean_object* v_a_7280_, lean_object* v_a_7281_, lean_object* v_a_7282_, lean_object* v_a_7283_){
_start:
{
lean_object* v___x_7285_; 
v___x_7285_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_entriesForConst_7277_, v_droppedKeys_7278_, v_droppedEntriesRef_7279_, v_a_7280_, v_a_7281_, v_a_7282_, v_a_7283_);
return v___x_7285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___boxed(lean_object* v_00_u03b1_7286_, lean_object* v_entriesForConst_7287_, lean_object* v_droppedKeys_7288_, lean_object* v_droppedEntriesRef_7289_, lean_object* v_a_7290_, lean_object* v_a_7291_, lean_object* v_a_7292_, lean_object* v_a_7293_, lean_object* v_a_7294_){
_start:
{
lean_object* v_res_7295_; 
v_res_7295_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef(v_00_u03b1_7286_, v_entriesForConst_7287_, v_droppedKeys_7288_, v_droppedEntriesRef_7289_, v_a_7290_, v_a_7291_, v_a_7292_, v_a_7293_);
lean_dec(v_a_7293_);
lean_dec_ref(v_a_7292_);
lean_dec(v_a_7291_);
lean_dec_ref(v_a_7290_);
return v_res_7295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(lean_object* v_moduleRef_7296_, lean_object* v_ty_7297_, lean_object* v___y_7298_, lean_object* v___y_7299_, lean_object* v___y_7300_, lean_object* v___y_7301_){
_start:
{
lean_object* v___x_7303_; lean_object* v___x_7304_; 
v___x_7303_ = lean_st_ref_get(v_moduleRef_7296_);
v___x_7304_ = l_Lean_Meta_LazyDiscrTree_getMatch___redArg(v___x_7303_, v_ty_7297_, v___y_7298_, v___y_7299_, v___y_7300_, v___y_7301_);
if (lean_obj_tag(v___x_7304_) == 0)
{
lean_object* v_a_7305_; lean_object* v___x_7307_; uint8_t v_isShared_7308_; uint8_t v_isSharedCheck_7315_; 
v_a_7305_ = lean_ctor_get(v___x_7304_, 0);
v_isSharedCheck_7315_ = !lean_is_exclusive(v___x_7304_);
if (v_isSharedCheck_7315_ == 0)
{
v___x_7307_ = v___x_7304_;
v_isShared_7308_ = v_isSharedCheck_7315_;
goto v_resetjp_7306_;
}
else
{
lean_inc(v_a_7305_);
lean_dec(v___x_7304_);
v___x_7307_ = lean_box(0);
v_isShared_7308_ = v_isSharedCheck_7315_;
goto v_resetjp_7306_;
}
v_resetjp_7306_:
{
lean_object* v_fst_7309_; lean_object* v_snd_7310_; lean_object* v___x_7311_; lean_object* v___x_7313_; 
v_fst_7309_ = lean_ctor_get(v_a_7305_, 0);
lean_inc(v_fst_7309_);
v_snd_7310_ = lean_ctor_get(v_a_7305_, 1);
lean_inc(v_snd_7310_);
lean_dec(v_a_7305_);
v___x_7311_ = lean_st_ref_set(v_moduleRef_7296_, v_snd_7310_);
if (v_isShared_7308_ == 0)
{
lean_ctor_set(v___x_7307_, 0, v_fst_7309_);
v___x_7313_ = v___x_7307_;
goto v_reusejp_7312_;
}
else
{
lean_object* v_reuseFailAlloc_7314_; 
v_reuseFailAlloc_7314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7314_, 0, v_fst_7309_);
v___x_7313_ = v_reuseFailAlloc_7314_;
goto v_reusejp_7312_;
}
v_reusejp_7312_:
{
return v___x_7313_;
}
}
}
else
{
lean_object* v_a_7316_; lean_object* v___x_7318_; uint8_t v_isShared_7319_; uint8_t v_isSharedCheck_7323_; 
v_a_7316_ = lean_ctor_get(v___x_7304_, 0);
v_isSharedCheck_7323_ = !lean_is_exclusive(v___x_7304_);
if (v_isSharedCheck_7323_ == 0)
{
v___x_7318_ = v___x_7304_;
v_isShared_7319_ = v_isSharedCheck_7323_;
goto v_resetjp_7317_;
}
else
{
lean_inc(v_a_7316_);
lean_dec(v___x_7304_);
v___x_7318_ = lean_box(0);
v_isShared_7319_ = v_isSharedCheck_7323_;
goto v_resetjp_7317_;
}
v_resetjp_7317_:
{
lean_object* v___x_7321_; 
if (v_isShared_7319_ == 0)
{
v___x_7321_ = v___x_7318_;
goto v_reusejp_7320_;
}
else
{
lean_object* v_reuseFailAlloc_7322_; 
v_reuseFailAlloc_7322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7322_, 0, v_a_7316_);
v___x_7321_ = v_reuseFailAlloc_7322_;
goto v_reusejp_7320_;
}
v_reusejp_7320_:
{
return v___x_7321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed(lean_object* v_moduleRef_7324_, lean_object* v_ty_7325_, lean_object* v___y_7326_, lean_object* v___y_7327_, lean_object* v___y_7328_, lean_object* v___y_7329_, lean_object* v___y_7330_){
_start:
{
lean_object* v_res_7331_; 
v_res_7331_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0(v_moduleRef_7324_, v_ty_7325_, v___y_7326_, v___y_7327_, v___y_7328_, v___y_7329_);
lean_dec(v___y_7329_);
lean_dec_ref(v___y_7328_);
lean_dec(v___y_7327_);
lean_dec_ref(v___y_7326_);
lean_dec(v_moduleRef_7324_);
return v_res_7331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(lean_object* v_moduleRef_7333_, lean_object* v_ty_7334_, lean_object* v_a_7335_, lean_object* v_a_7336_, lean_object* v_a_7337_, lean_object* v_a_7338_){
_start:
{
lean_object* v_options_7340_; lean_object* v___f_7341_; lean_object* v___x_7342_; lean_object* v___x_7343_; lean_object* v___x_7344_; 
v_options_7340_ = lean_ctor_get(v_a_7337_, 2);
v___f_7341_ = lean_alloc_closure((void*)(l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_7341_, 0, v_moduleRef_7333_);
lean_closure_set(v___f_7341_, 1, v_ty_7334_);
v___x_7342_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___closed__0));
v___x_7343_ = lean_box(0);
v___x_7344_ = l_Lean_profileitM___at___00Lean_Meta_LazyDiscrTree_findImportMatches_spec__1___redArg(v___x_7342_, v_options_7340_, v___f_7341_, v___x_7343_, v_a_7335_, v_a_7336_, v_a_7337_, v_a_7338_);
return v___x_7344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg___boxed(lean_object* v_moduleRef_7345_, lean_object* v_ty_7346_, lean_object* v_a_7347_, lean_object* v_a_7348_, lean_object* v_a_7349_, lean_object* v_a_7350_, lean_object* v_a_7351_){
_start:
{
lean_object* v_res_7352_; 
v_res_7352_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleRef_7345_, v_ty_7346_, v_a_7347_, v_a_7348_, v_a_7349_, v_a_7350_);
lean_dec(v_a_7350_);
lean_dec_ref(v_a_7349_);
lean_dec(v_a_7348_);
lean_dec_ref(v_a_7347_);
return v_res_7352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches(lean_object* v_00_u03b1_7353_, lean_object* v_moduleRef_7354_, lean_object* v_ty_7355_, lean_object* v_a_7356_, lean_object* v_a_7357_, lean_object* v_a_7358_, lean_object* v_a_7359_){
_start:
{
lean_object* v___x_7361_; 
v___x_7361_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleRef_7354_, v_ty_7355_, v_a_7356_, v_a_7357_, v_a_7358_, v_a_7359_);
return v___x_7361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findModuleMatches___boxed(lean_object* v_00_u03b1_7362_, lean_object* v_moduleRef_7363_, lean_object* v_ty_7364_, lean_object* v_a_7365_, lean_object* v_a_7366_, lean_object* v_a_7367_, lean_object* v_a_7368_, lean_object* v_a_7369_){
_start:
{
lean_object* v_res_7370_; 
v_res_7370_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches(v_00_u03b1_7362_, v_moduleRef_7363_, v_ty_7364_, v_a_7365_, v_a_7366_, v_a_7367_, v_a_7368_);
lean_dec(v_a_7368_);
lean_dec_ref(v_a_7367_);
lean_dec(v_a_7366_);
lean_dec_ref(v_a_7365_);
return v_res_7370_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(lean_object* v_adjustResult_7371_, lean_object* v_j_7372_, size_t v_sz_7373_, size_t v_i_7374_, lean_object* v_bs_7375_){
_start:
{
uint8_t v___x_7376_; 
v___x_7376_ = lean_usize_dec_lt(v_i_7374_, v_sz_7373_);
if (v___x_7376_ == 0)
{
lean_dec(v_j_7372_);
lean_dec(v_adjustResult_7371_);
return v_bs_7375_;
}
else
{
lean_object* v_v_7377_; lean_object* v___x_7378_; lean_object* v_bs_x27_7379_; lean_object* v___x_7380_; size_t v___x_7381_; size_t v___x_7382_; lean_object* v___x_7383_; 
v_v_7377_ = lean_array_uget(v_bs_7375_, v_i_7374_);
v___x_7378_ = lean_unsigned_to_nat(0u);
v_bs_x27_7379_ = lean_array_uset(v_bs_7375_, v_i_7374_, v___x_7378_);
lean_inc(v_adjustResult_7371_);
lean_inc(v_j_7372_);
v___x_7380_ = lean_apply_2(v_adjustResult_7371_, v_j_7372_, v_v_7377_);
v___x_7381_ = ((size_t)1ULL);
v___x_7382_ = lean_usize_add(v_i_7374_, v___x_7381_);
v___x_7383_ = lean_array_uset(v_bs_x27_7379_, v_i_7374_, v___x_7380_);
v_i_7374_ = v___x_7382_;
v_bs_7375_ = v___x_7383_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg___boxed(lean_object* v_adjustResult_7385_, lean_object* v_j_7386_, lean_object* v_sz_7387_, lean_object* v_i_7388_, lean_object* v_bs_7389_){
_start:
{
size_t v_sz_boxed_7390_; size_t v_i_boxed_7391_; lean_object* v_res_7392_; 
v_sz_boxed_7390_ = lean_unbox_usize(v_sz_7387_);
lean_dec(v_sz_7387_);
v_i_boxed_7391_ = lean_unbox_usize(v_i_7388_);
lean_dec(v_i_7388_);
v_res_7392_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7385_, v_j_7386_, v_sz_boxed_7390_, v_i_boxed_7391_, v_bs_7389_);
return v_res_7392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(lean_object* v_adjustResult_7393_, lean_object* v_j_7394_, lean_object* v_as_7395_, size_t v_i_7396_, size_t v_stop_7397_, lean_object* v_b_7398_){
_start:
{
uint8_t v___x_7399_; 
v___x_7399_ = lean_usize_dec_eq(v_i_7396_, v_stop_7397_);
if (v___x_7399_ == 0)
{
lean_object* v___x_7400_; size_t v_sz_7401_; size_t v___x_7402_; lean_object* v___x_7403_; lean_object* v___x_7404_; size_t v___x_7405_; size_t v___x_7406_; 
v___x_7400_ = lean_array_uget_borrowed(v_as_7395_, v_i_7396_);
v_sz_7401_ = lean_array_size(v___x_7400_);
v___x_7402_ = ((size_t)0ULL);
lean_inc(v___x_7400_);
lean_inc(v_j_7394_);
lean_inc(v_adjustResult_7393_);
v___x_7403_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7393_, v_j_7394_, v_sz_7401_, v___x_7402_, v___x_7400_);
v___x_7404_ = l_Array_append___redArg(v_b_7398_, v___x_7403_);
lean_dec_ref(v___x_7403_);
v___x_7405_ = ((size_t)1ULL);
v___x_7406_ = lean_usize_add(v_i_7396_, v___x_7405_);
v_i_7396_ = v___x_7406_;
v_b_7398_ = v___x_7404_;
goto _start;
}
else
{
lean_dec(v_j_7394_);
lean_dec(v_adjustResult_7393_);
return v_b_7398_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg___boxed(lean_object* v_adjustResult_7408_, lean_object* v_j_7409_, lean_object* v_as_7410_, lean_object* v_i_7411_, lean_object* v_stop_7412_, lean_object* v_b_7413_){
_start:
{
size_t v_i_boxed_7414_; size_t v_stop_boxed_7415_; lean_object* v_res_7416_; 
v_i_boxed_7414_ = lean_unbox_usize(v_i_7411_);
lean_dec(v_i_7411_);
v_stop_boxed_7415_ = lean_unbox_usize(v_stop_7412_);
lean_dec(v_stop_7412_);
v_res_7416_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7408_, v_j_7409_, v_as_7410_, v_i_boxed_7414_, v_stop_boxed_7415_, v_b_7413_);
lean_dec_ref(v_as_7410_);
return v_res_7416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(lean_object* v_n_7417_, lean_object* v_aa_7418_, lean_object* v_adjustResult_7419_, lean_object* v_n_7420_, lean_object* v_j_7421_, lean_object* v_a_7422_){
_start:
{
lean_object* v_zero_7423_; uint8_t v_isZero_7424_; 
v_zero_7423_ = lean_unsigned_to_nat(0u);
v_isZero_7424_ = lean_nat_dec_eq(v_j_7421_, v_zero_7423_);
if (v_isZero_7424_ == 1)
{
lean_dec(v_j_7421_);
lean_dec(v_adjustResult_7419_);
return v_a_7422_;
}
else
{
lean_object* v_one_7425_; lean_object* v_n_7426_; lean_object* v___x_7427_; lean_object* v___x_7428_; lean_object* v_j_7429_; lean_object* v_b_7430_; lean_object* v___x_7431_; uint8_t v___x_7432_; 
v_one_7425_ = lean_unsigned_to_nat(1u);
v_n_7426_ = lean_nat_sub(v_j_7421_, v_one_7425_);
v___x_7427_ = lean_nat_sub(v_n_7420_, v_j_7421_);
lean_dec(v_j_7421_);
v___x_7428_ = lean_nat_sub(v_n_7417_, v_one_7425_);
v_j_7429_ = lean_nat_sub(v___x_7428_, v___x_7427_);
lean_dec(v___x_7427_);
lean_dec(v___x_7428_);
v_b_7430_ = lean_array_fget_borrowed(v_aa_7418_, v_j_7429_);
v___x_7431_ = lean_array_get_size(v_b_7430_);
v___x_7432_ = lean_nat_dec_lt(v_zero_7423_, v___x_7431_);
if (v___x_7432_ == 0)
{
lean_dec(v_j_7429_);
v_j_7421_ = v_n_7426_;
goto _start;
}
else
{
uint8_t v___x_7434_; 
v___x_7434_ = lean_nat_dec_le(v___x_7431_, v___x_7431_);
if (v___x_7434_ == 0)
{
if (v___x_7432_ == 0)
{
lean_dec(v_j_7429_);
v_j_7421_ = v_n_7426_;
goto _start;
}
else
{
size_t v___x_7436_; size_t v___x_7437_; lean_object* v___x_7438_; 
v___x_7436_ = ((size_t)0ULL);
v___x_7437_ = lean_usize_of_nat(v___x_7431_);
lean_inc(v_adjustResult_7419_);
v___x_7438_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7419_, v_j_7429_, v_b_7430_, v___x_7436_, v___x_7437_, v_a_7422_);
v_j_7421_ = v_n_7426_;
v_a_7422_ = v___x_7438_;
goto _start;
}
}
else
{
size_t v___x_7440_; size_t v___x_7441_; lean_object* v___x_7442_; 
v___x_7440_ = ((size_t)0ULL);
v___x_7441_ = lean_usize_of_nat(v___x_7431_);
lean_inc(v_adjustResult_7419_);
v___x_7442_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7419_, v_j_7429_, v_b_7430_, v___x_7440_, v___x_7441_, v_a_7422_);
v_j_7421_ = v_n_7426_;
v_a_7422_ = v___x_7442_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_n_7444_, lean_object* v_aa_7445_, lean_object* v_adjustResult_7446_, lean_object* v_n_7447_, lean_object* v_j_7448_, lean_object* v_a_7449_){
_start:
{
lean_object* v_res_7450_; 
v_res_7450_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7444_, v_aa_7445_, v_adjustResult_7446_, v_n_7447_, v_j_7448_, v_a_7449_);
lean_dec(v_n_7447_);
lean_dec_ref(v_aa_7445_);
lean_dec(v_n_7444_);
return v_res_7450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(lean_object* v_n_7451_, lean_object* v_adjustResult_7452_, lean_object* v_aa_7453_, lean_object* v_n_7454_, lean_object* v_j_7455_, lean_object* v_a_7456_){
_start:
{
lean_object* v_zero_7457_; uint8_t v_isZero_7458_; 
v_zero_7457_ = lean_unsigned_to_nat(0u);
v_isZero_7458_ = lean_nat_dec_eq(v_j_7455_, v_zero_7457_);
if (v_isZero_7458_ == 1)
{
lean_dec(v_adjustResult_7452_);
return v_a_7456_;
}
else
{
lean_object* v_one_7459_; lean_object* v_n_7460_; lean_object* v___x_7461_; lean_object* v___x_7462_; lean_object* v_j_7463_; lean_object* v_b_7464_; lean_object* v___x_7465_; uint8_t v___x_7466_; 
v_one_7459_ = lean_unsigned_to_nat(1u);
v_n_7460_ = lean_nat_sub(v_j_7455_, v_one_7459_);
v___x_7461_ = lean_nat_sub(v_n_7454_, v_j_7455_);
v___x_7462_ = lean_nat_sub(v_n_7451_, v_one_7459_);
v_j_7463_ = lean_nat_sub(v___x_7462_, v___x_7461_);
lean_dec(v___x_7461_);
lean_dec(v___x_7462_);
v_b_7464_ = lean_array_fget_borrowed(v_aa_7453_, v_j_7463_);
v___x_7465_ = lean_array_get_size(v_b_7464_);
v___x_7466_ = lean_nat_dec_lt(v_zero_7457_, v___x_7465_);
if (v___x_7466_ == 0)
{
lean_object* v___x_7467_; 
lean_dec(v_j_7463_);
v___x_7467_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7451_, v_aa_7453_, v_adjustResult_7452_, v_n_7454_, v_n_7460_, v_a_7456_);
return v___x_7467_;
}
else
{
uint8_t v___x_7468_; 
v___x_7468_ = lean_nat_dec_le(v___x_7465_, v___x_7465_);
if (v___x_7468_ == 0)
{
if (v___x_7466_ == 0)
{
lean_object* v___x_7469_; 
lean_dec(v_j_7463_);
v___x_7469_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7451_, v_aa_7453_, v_adjustResult_7452_, v_n_7454_, v_n_7460_, v_a_7456_);
return v___x_7469_;
}
else
{
size_t v___x_7470_; size_t v___x_7471_; lean_object* v___x_7472_; lean_object* v___x_7473_; 
v___x_7470_ = ((size_t)0ULL);
v___x_7471_ = lean_usize_of_nat(v___x_7465_);
lean_inc(v_adjustResult_7452_);
v___x_7472_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7452_, v_j_7463_, v_b_7464_, v___x_7470_, v___x_7471_, v_a_7456_);
v___x_7473_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7451_, v_aa_7453_, v_adjustResult_7452_, v_n_7454_, v_n_7460_, v___x_7472_);
return v___x_7473_;
}
}
else
{
size_t v___x_7474_; size_t v___x_7475_; lean_object* v___x_7476_; lean_object* v___x_7477_; 
v___x_7474_ = ((size_t)0ULL);
v___x_7475_ = lean_usize_of_nat(v___x_7465_);
lean_inc(v_adjustResult_7452_);
v___x_7476_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7452_, v_j_7463_, v_b_7464_, v___x_7474_, v___x_7475_, v_a_7456_);
v___x_7477_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7451_, v_aa_7453_, v_adjustResult_7452_, v_n_7454_, v_n_7460_, v___x_7476_);
return v___x_7477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg___boxed(lean_object* v_n_7478_, lean_object* v_adjustResult_7479_, lean_object* v_aa_7480_, lean_object* v_n_7481_, lean_object* v_j_7482_, lean_object* v_a_7483_){
_start:
{
lean_object* v_res_7484_; 
v_res_7484_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7478_, v_adjustResult_7479_, v_aa_7480_, v_n_7481_, v_j_7482_, v_a_7483_);
lean_dec(v_j_7482_);
lean_dec(v_n_7481_);
lean_dec_ref(v_aa_7480_);
lean_dec(v_n_7478_);
return v_res_7484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(lean_object* v_adjustResult_7485_, lean_object* v_mr_7486_, lean_object* v_a_7487_){
_start:
{
lean_object* v_n_7488_; lean_object* v___x_7489_; 
v_n_7488_ = lean_array_get_size(v_mr_7486_);
v___x_7489_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7488_, v_adjustResult_7485_, v_mr_7486_, v_n_7488_, v_n_7488_, v_a_7487_);
return v___x_7489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg___boxed(lean_object* v_adjustResult_7490_, lean_object* v_mr_7491_, lean_object* v_a_7492_){
_start:
{
lean_object* v_res_7493_; 
v_res_7493_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7490_, v_mr_7491_, v_a_7492_);
lean_dec_ref(v_mr_7491_);
return v_res_7493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(lean_object* v_moduleTreeRef_7494_, lean_object* v_ext_7495_, lean_object* v_addEntry_7496_, lean_object* v_droppedKeys_7497_, lean_object* v_constantsPerTask_7498_, lean_object* v_droppedEntriesRef_7499_, lean_object* v_adjustResult_7500_, lean_object* v_ty_7501_, lean_object* v_a_7502_, lean_object* v_a_7503_, lean_object* v_a_7504_, lean_object* v_a_7505_){
_start:
{
lean_object* v___x_7507_; 
lean_inc_ref(v_ty_7501_);
v___x_7507_ = l_Lean_Meta_LazyDiscrTree_findModuleMatches___redArg(v_moduleTreeRef_7494_, v_ty_7501_, v_a_7502_, v_a_7503_, v_a_7504_, v_a_7505_);
if (lean_obj_tag(v___x_7507_) == 0)
{
lean_object* v_a_7508_; lean_object* v___x_7509_; 
v_a_7508_ = lean_ctor_get(v___x_7507_, 0);
lean_inc(v_a_7508_);
lean_dec_ref(v___x_7507_);
v___x_7509_ = l_Lean_Meta_LazyDiscrTree_findImportMatches___redArg(v_ext_7495_, v_addEntry_7496_, v_droppedKeys_7497_, v_constantsPerTask_7498_, v_droppedEntriesRef_7499_, v_ty_7501_, v_a_7502_, v_a_7503_, v_a_7504_, v_a_7505_);
if (lean_obj_tag(v___x_7509_) == 0)
{
lean_object* v_a_7510_; lean_object* v___x_7512_; uint8_t v_isShared_7513_; uint8_t v_isSharedCheck_7523_; 
v_a_7510_ = lean_ctor_get(v___x_7509_, 0);
v_isSharedCheck_7523_ = !lean_is_exclusive(v___x_7509_);
if (v_isSharedCheck_7523_ == 0)
{
v___x_7512_ = v___x_7509_;
v_isShared_7513_ = v_isSharedCheck_7523_;
goto v_resetjp_7511_;
}
else
{
lean_inc(v_a_7510_);
lean_dec(v___x_7509_);
v___x_7512_ = lean_box(0);
v_isShared_7513_ = v_isSharedCheck_7523_;
goto v_resetjp_7511_;
}
v_resetjp_7511_:
{
lean_object* v___x_7514_; lean_object* v___x_7515_; lean_object* v___x_7516_; lean_object* v___x_7517_; lean_object* v___x_7518_; lean_object* v___x_7519_; lean_object* v___x_7521_; 
v___x_7514_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_a_7508_);
v___x_7515_ = l_Lean_Meta_LazyDiscrTree_MatchResult_size___redArg(v_a_7510_);
v___x_7516_ = lean_nat_add(v___x_7514_, v___x_7515_);
lean_dec(v___x_7515_);
lean_dec(v___x_7514_);
v___x_7517_ = lean_mk_empty_array_with_capacity(v___x_7516_);
lean_dec(v___x_7516_);
lean_inc(v_adjustResult_7500_);
v___x_7518_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7500_, v_a_7508_, v___x_7517_);
lean_dec(v_a_7508_);
v___x_7519_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7500_, v_a_7510_, v___x_7518_);
lean_dec(v_a_7510_);
if (v_isShared_7513_ == 0)
{
lean_ctor_set(v___x_7512_, 0, v___x_7519_);
v___x_7521_ = v___x_7512_;
goto v_reusejp_7520_;
}
else
{
lean_object* v_reuseFailAlloc_7522_; 
v_reuseFailAlloc_7522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7522_, 0, v___x_7519_);
v___x_7521_ = v_reuseFailAlloc_7522_;
goto v_reusejp_7520_;
}
v_reusejp_7520_:
{
return v___x_7521_;
}
}
}
else
{
lean_object* v_a_7524_; lean_object* v___x_7526_; uint8_t v_isShared_7527_; uint8_t v_isSharedCheck_7531_; 
lean_dec(v_a_7508_);
lean_dec(v_adjustResult_7500_);
v_a_7524_ = lean_ctor_get(v___x_7509_, 0);
v_isSharedCheck_7531_ = !lean_is_exclusive(v___x_7509_);
if (v_isSharedCheck_7531_ == 0)
{
v___x_7526_ = v___x_7509_;
v_isShared_7527_ = v_isSharedCheck_7531_;
goto v_resetjp_7525_;
}
else
{
lean_inc(v_a_7524_);
lean_dec(v___x_7509_);
v___x_7526_ = lean_box(0);
v_isShared_7527_ = v_isSharedCheck_7531_;
goto v_resetjp_7525_;
}
v_resetjp_7525_:
{
lean_object* v___x_7529_; 
if (v_isShared_7527_ == 0)
{
v___x_7529_ = v___x_7526_;
goto v_reusejp_7528_;
}
else
{
lean_object* v_reuseFailAlloc_7530_; 
v_reuseFailAlloc_7530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7530_, 0, v_a_7524_);
v___x_7529_ = v_reuseFailAlloc_7530_;
goto v_reusejp_7528_;
}
v_reusejp_7528_:
{
return v___x_7529_;
}
}
}
}
else
{
lean_object* v_a_7532_; lean_object* v___x_7534_; uint8_t v_isShared_7535_; uint8_t v_isSharedCheck_7539_; 
lean_dec_ref(v_ty_7501_);
lean_dec(v_adjustResult_7500_);
lean_dec(v_droppedEntriesRef_7499_);
lean_dec(v_constantsPerTask_7498_);
lean_dec(v_droppedKeys_7497_);
lean_dec_ref(v_addEntry_7496_);
v_a_7532_ = lean_ctor_get(v___x_7507_, 0);
v_isSharedCheck_7539_ = !lean_is_exclusive(v___x_7507_);
if (v_isSharedCheck_7539_ == 0)
{
v___x_7534_ = v___x_7507_;
v_isShared_7535_ = v_isSharedCheck_7539_;
goto v_resetjp_7533_;
}
else
{
lean_inc(v_a_7532_);
lean_dec(v___x_7507_);
v___x_7534_ = lean_box(0);
v_isShared_7535_ = v_isSharedCheck_7539_;
goto v_resetjp_7533_;
}
v_resetjp_7533_:
{
lean_object* v___x_7537_; 
if (v_isShared_7535_ == 0)
{
v___x_7537_ = v___x_7534_;
goto v_reusejp_7536_;
}
else
{
lean_object* v_reuseFailAlloc_7538_; 
v_reuseFailAlloc_7538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7538_, 0, v_a_7532_);
v___x_7537_ = v_reuseFailAlloc_7538_;
goto v_reusejp_7536_;
}
v_reusejp_7536_:
{
return v___x_7537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg___boxed(lean_object* v_moduleTreeRef_7540_, lean_object* v_ext_7541_, lean_object* v_addEntry_7542_, lean_object* v_droppedKeys_7543_, lean_object* v_constantsPerTask_7544_, lean_object* v_droppedEntriesRef_7545_, lean_object* v_adjustResult_7546_, lean_object* v_ty_7547_, lean_object* v_a_7548_, lean_object* v_a_7549_, lean_object* v_a_7550_, lean_object* v_a_7551_, lean_object* v_a_7552_){
_start:
{
lean_object* v_res_7553_; 
v_res_7553_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_moduleTreeRef_7540_, v_ext_7541_, v_addEntry_7542_, v_droppedKeys_7543_, v_constantsPerTask_7544_, v_droppedEntriesRef_7545_, v_adjustResult_7546_, v_ty_7547_, v_a_7548_, v_a_7549_, v_a_7550_, v_a_7551_);
lean_dec(v_a_7551_);
lean_dec_ref(v_a_7550_);
lean_dec(v_a_7549_);
lean_dec_ref(v_a_7548_);
lean_dec_ref(v_ext_7541_);
return v_res_7553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt(lean_object* v_00_u03b1_7554_, lean_object* v_00_u03b2_7555_, lean_object* v_moduleTreeRef_7556_, lean_object* v_ext_7557_, lean_object* v_addEntry_7558_, lean_object* v_droppedKeys_7559_, lean_object* v_constantsPerTask_7560_, lean_object* v_droppedEntriesRef_7561_, lean_object* v_adjustResult_7562_, lean_object* v_ty_7563_, lean_object* v_a_7564_, lean_object* v_a_7565_, lean_object* v_a_7566_, lean_object* v_a_7567_){
_start:
{
lean_object* v___x_7569_; 
v___x_7569_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_moduleTreeRef_7556_, v_ext_7557_, v_addEntry_7558_, v_droppedKeys_7559_, v_constantsPerTask_7560_, v_droppedEntriesRef_7561_, v_adjustResult_7562_, v_ty_7563_, v_a_7564_, v_a_7565_, v_a_7566_, v_a_7567_);
return v___x_7569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatchesExt___boxed(lean_object* v_00_u03b1_7570_, lean_object* v_00_u03b2_7571_, lean_object* v_moduleTreeRef_7572_, lean_object* v_ext_7573_, lean_object* v_addEntry_7574_, lean_object* v_droppedKeys_7575_, lean_object* v_constantsPerTask_7576_, lean_object* v_droppedEntriesRef_7577_, lean_object* v_adjustResult_7578_, lean_object* v_ty_7579_, lean_object* v_a_7580_, lean_object* v_a_7581_, lean_object* v_a_7582_, lean_object* v_a_7583_, lean_object* v_a_7584_){
_start:
{
lean_object* v_res_7585_; 
v_res_7585_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt(v_00_u03b1_7570_, v_00_u03b2_7571_, v_moduleTreeRef_7572_, v_ext_7573_, v_addEntry_7574_, v_droppedKeys_7575_, v_constantsPerTask_7576_, v_droppedEntriesRef_7577_, v_adjustResult_7578_, v_ty_7579_, v_a_7580_, v_a_7581_, v_a_7582_, v_a_7583_);
lean_dec(v_a_7583_);
lean_dec_ref(v_a_7582_);
lean_dec(v_a_7581_);
lean_dec_ref(v_a_7580_);
lean_dec_ref(v_ext_7573_);
return v_res_7585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(lean_object* v_00_u03b1_7586_, lean_object* v_00_u03b2_7587_, lean_object* v_adjustResult_7588_, lean_object* v_mr_7589_, lean_object* v_a_7590_){
_start:
{
lean_object* v___x_7591_; 
v___x_7591_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___redArg(v_adjustResult_7588_, v_mr_7589_, v_a_7590_);
return v___x_7591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0___boxed(lean_object* v_00_u03b1_7592_, lean_object* v_00_u03b2_7593_, lean_object* v_adjustResult_7594_, lean_object* v_mr_7595_, lean_object* v_a_7596_){
_start:
{
lean_object* v_res_7597_; 
v_res_7597_ = l_Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0(v_00_u03b1_7592_, v_00_u03b2_7593_, v_adjustResult_7594_, v_mr_7595_, v_a_7596_);
lean_dec_ref(v_mr_7595_);
return v_res_7597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(lean_object* v_00_u03b1_7598_, lean_object* v_00_u03b2_7599_, lean_object* v_adjustResult_7600_, lean_object* v_j_7601_, size_t v_sz_7602_, size_t v_i_7603_, lean_object* v_bs_7604_){
_start:
{
lean_object* v___x_7605_; 
v___x_7605_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___redArg(v_adjustResult_7600_, v_j_7601_, v_sz_7602_, v_i_7603_, v_bs_7604_);
return v___x_7605_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0___boxed(lean_object* v_00_u03b1_7606_, lean_object* v_00_u03b2_7607_, lean_object* v_adjustResult_7608_, lean_object* v_j_7609_, lean_object* v_sz_7610_, lean_object* v_i_7611_, lean_object* v_bs_7612_){
_start:
{
size_t v_sz_boxed_7613_; size_t v_i_boxed_7614_; lean_object* v_res_7615_; 
v_sz_boxed_7613_ = lean_unbox_usize(v_sz_7610_);
lean_dec(v_sz_7610_);
v_i_boxed_7614_ = lean_unbox_usize(v_i_7611_);
lean_dec(v_i_7611_);
v_res_7615_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__0(v_00_u03b1_7606_, v_00_u03b2_7607_, v_adjustResult_7608_, v_j_7609_, v_sz_boxed_7613_, v_i_boxed_7614_, v_bs_7612_);
return v_res_7615_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(lean_object* v_00_u03b1_7616_, lean_object* v_00_u03b2_7617_, lean_object* v_adjustResult_7618_, lean_object* v_j_7619_, lean_object* v_as_7620_, size_t v_i_7621_, size_t v_stop_7622_, lean_object* v_b_7623_){
_start:
{
lean_object* v___x_7624_; 
v___x_7624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___redArg(v_adjustResult_7618_, v_j_7619_, v_as_7620_, v_i_7621_, v_stop_7622_, v_b_7623_);
return v___x_7624_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1___boxed(lean_object* v_00_u03b1_7625_, lean_object* v_00_u03b2_7626_, lean_object* v_adjustResult_7627_, lean_object* v_j_7628_, lean_object* v_as_7629_, lean_object* v_i_7630_, lean_object* v_stop_7631_, lean_object* v_b_7632_){
_start:
{
size_t v_i_boxed_7633_; size_t v_stop_boxed_7634_; lean_object* v_res_7635_; 
v_i_boxed_7633_ = lean_unbox_usize(v_i_7630_);
lean_dec(v_i_7630_);
v_stop_boxed_7634_ = lean_unbox_usize(v_stop_7631_);
lean_dec(v_stop_7631_);
v_res_7635_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__1(v_00_u03b1_7625_, v_00_u03b2_7626_, v_adjustResult_7627_, v_j_7628_, v_as_7629_, v_i_boxed_7633_, v_stop_boxed_7634_, v_b_7632_);
lean_dec_ref(v_as_7629_);
return v_res_7635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(lean_object* v_00_u03b2_7636_, lean_object* v_n_7637_, lean_object* v_00_u03b1_7638_, lean_object* v_adjustResult_7639_, lean_object* v_aa_7640_, lean_object* v_n_7641_, lean_object* v_j_7642_, lean_object* v_a_7643_, lean_object* v_a_7644_){
_start:
{
lean_object* v___x_7645_; 
v___x_7645_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___redArg(v_n_7637_, v_adjustResult_7639_, v_aa_7640_, v_n_7641_, v_j_7642_, v_a_7644_);
return v___x_7645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2___boxed(lean_object* v_00_u03b2_7646_, lean_object* v_n_7647_, lean_object* v_00_u03b1_7648_, lean_object* v_adjustResult_7649_, lean_object* v_aa_7650_, lean_object* v_n_7651_, lean_object* v_j_7652_, lean_object* v_a_7653_, lean_object* v_a_7654_){
_start:
{
lean_object* v_res_7655_; 
v_res_7655_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2(v_00_u03b2_7646_, v_n_7647_, v_00_u03b1_7648_, v_adjustResult_7649_, v_aa_7650_, v_n_7651_, v_j_7652_, v_a_7653_, v_a_7654_);
lean_dec(v_j_7652_);
lean_dec(v_n_7651_);
lean_dec_ref(v_aa_7650_);
lean_dec(v_n_7647_);
return v_res_7655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_7656_, lean_object* v_n_7657_, lean_object* v_00_u03b1_7658_, lean_object* v_aa_7659_, lean_object* v_adjustResult_7660_, lean_object* v_n_7661_, lean_object* v_j_7662_, lean_object* v_a_7663_, lean_object* v_a_7664_){
_start:
{
lean_object* v___x_7665_; 
v___x_7665_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___redArg(v_n_7657_, v_aa_7659_, v_adjustResult_7660_, v_n_7661_, v_j_7662_, v_a_7664_);
return v___x_7665_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3___boxed(lean_object* v_00_u03b2_7666_, lean_object* v_n_7667_, lean_object* v_00_u03b1_7668_, lean_object* v_aa_7669_, lean_object* v_adjustResult_7670_, lean_object* v_n_7671_, lean_object* v_j_7672_, lean_object* v_a_7673_, lean_object* v_a_7674_){
_start:
{
lean_object* v_res_7675_; 
v_res_7675_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_Meta_LazyDiscrTree_MatchResult_appendResultsAux___at___00Lean_Meta_LazyDiscrTree_findMatchesExt_spec__0_spec__2_spec__3(v_00_u03b2_7666_, v_n_7667_, v_00_u03b1_7668_, v_aa_7669_, v_adjustResult_7670_, v_n_7671_, v_j_7672_, v_a_7673_, v_a_7674_);
lean_dec(v_n_7671_);
lean_dec_ref(v_aa_7669_);
lean_dec(v_n_7667_);
return v_res_7675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(lean_object* v_x_7676_, lean_object* v_v_7677_){
_start:
{
lean_inc(v_v_7677_);
return v_v_7677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0___boxed(lean_object* v_x_7678_, lean_object* v_v_7679_){
_start:
{
lean_object* v_res_7680_; 
v_res_7680_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg___lam__0(v_x_7678_, v_v_7679_);
lean_dec(v_v_7679_);
lean_dec(v_x_7678_);
return v_res_7680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg(lean_object* v_ext_7682_, lean_object* v_addEntry_7683_, lean_object* v_droppedKeys_7684_, lean_object* v_constantsPerTask_7685_, lean_object* v_droppedEntriesRef_7686_, lean_object* v_ty_7687_, lean_object* v_a_7688_, lean_object* v_a_7689_, lean_object* v_a_7690_, lean_object* v_a_7691_){
_start:
{
lean_object* v___x_7693_; 
lean_inc(v_droppedEntriesRef_7686_);
lean_inc(v_droppedKeys_7684_);
lean_inc_ref(v_addEntry_7683_);
v___x_7693_ = l_Lean_Meta_LazyDiscrTree_createModuleTreeRef___redArg(v_addEntry_7683_, v_droppedKeys_7684_, v_droppedEntriesRef_7686_, v_a_7688_, v_a_7689_, v_a_7690_, v_a_7691_);
if (lean_obj_tag(v___x_7693_) == 0)
{
lean_object* v_a_7694_; lean_object* v___f_7695_; lean_object* v___x_7696_; 
v_a_7694_ = lean_ctor_get(v___x_7693_, 0);
lean_inc(v_a_7694_);
lean_dec_ref(v___x_7693_);
v___f_7695_ = ((lean_object*)(l_Lean_Meta_LazyDiscrTree_findMatches___redArg___closed__0));
v___x_7696_ = l_Lean_Meta_LazyDiscrTree_findMatchesExt___redArg(v_a_7694_, v_ext_7682_, v_addEntry_7683_, v_droppedKeys_7684_, v_constantsPerTask_7685_, v_droppedEntriesRef_7686_, v___f_7695_, v_ty_7687_, v_a_7688_, v_a_7689_, v_a_7690_, v_a_7691_);
return v___x_7696_;
}
else
{
lean_object* v_a_7697_; lean_object* v___x_7699_; uint8_t v_isShared_7700_; uint8_t v_isSharedCheck_7704_; 
lean_dec_ref(v_ty_7687_);
lean_dec(v_droppedEntriesRef_7686_);
lean_dec(v_constantsPerTask_7685_);
lean_dec(v_droppedKeys_7684_);
lean_dec_ref(v_addEntry_7683_);
v_a_7697_ = lean_ctor_get(v___x_7693_, 0);
v_isSharedCheck_7704_ = !lean_is_exclusive(v___x_7693_);
if (v_isSharedCheck_7704_ == 0)
{
v___x_7699_ = v___x_7693_;
v_isShared_7700_ = v_isSharedCheck_7704_;
goto v_resetjp_7698_;
}
else
{
lean_inc(v_a_7697_);
lean_dec(v___x_7693_);
v___x_7699_ = lean_box(0);
v_isShared_7700_ = v_isSharedCheck_7704_;
goto v_resetjp_7698_;
}
v_resetjp_7698_:
{
lean_object* v___x_7702_; 
if (v_isShared_7700_ == 0)
{
v___x_7702_ = v___x_7699_;
goto v_reusejp_7701_;
}
else
{
lean_object* v_reuseFailAlloc_7703_; 
v_reuseFailAlloc_7703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7703_, 0, v_a_7697_);
v___x_7702_ = v_reuseFailAlloc_7703_;
goto v_reusejp_7701_;
}
v_reusejp_7701_:
{
return v___x_7702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___redArg___boxed(lean_object* v_ext_7705_, lean_object* v_addEntry_7706_, lean_object* v_droppedKeys_7707_, lean_object* v_constantsPerTask_7708_, lean_object* v_droppedEntriesRef_7709_, lean_object* v_ty_7710_, lean_object* v_a_7711_, lean_object* v_a_7712_, lean_object* v_a_7713_, lean_object* v_a_7714_, lean_object* v_a_7715_){
_start:
{
lean_object* v_res_7716_; 
v_res_7716_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg(v_ext_7705_, v_addEntry_7706_, v_droppedKeys_7707_, v_constantsPerTask_7708_, v_droppedEntriesRef_7709_, v_ty_7710_, v_a_7711_, v_a_7712_, v_a_7713_, v_a_7714_);
lean_dec(v_a_7714_);
lean_dec_ref(v_a_7713_);
lean_dec(v_a_7712_);
lean_dec_ref(v_a_7711_);
lean_dec_ref(v_ext_7705_);
return v_res_7716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches(lean_object* v_00_u03b1_7717_, lean_object* v_ext_7718_, lean_object* v_addEntry_7719_, lean_object* v_droppedKeys_7720_, lean_object* v_constantsPerTask_7721_, lean_object* v_droppedEntriesRef_7722_, lean_object* v_ty_7723_, lean_object* v_a_7724_, lean_object* v_a_7725_, lean_object* v_a_7726_, lean_object* v_a_7727_){
_start:
{
lean_object* v___x_7729_; 
v___x_7729_ = l_Lean_Meta_LazyDiscrTree_findMatches___redArg(v_ext_7718_, v_addEntry_7719_, v_droppedKeys_7720_, v_constantsPerTask_7721_, v_droppedEntriesRef_7722_, v_ty_7723_, v_a_7724_, v_a_7725_, v_a_7726_, v_a_7727_);
return v___x_7729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_LazyDiscrTree_findMatches___boxed(lean_object* v_00_u03b1_7730_, lean_object* v_ext_7731_, lean_object* v_addEntry_7732_, lean_object* v_droppedKeys_7733_, lean_object* v_constantsPerTask_7734_, lean_object* v_droppedEntriesRef_7735_, lean_object* v_ty_7736_, lean_object* v_a_7737_, lean_object* v_a_7738_, lean_object* v_a_7739_, lean_object* v_a_7740_, lean_object* v_a_7741_){
_start:
{
lean_object* v_res_7742_; 
v_res_7742_ = l_Lean_Meta_LazyDiscrTree_findMatches(v_00_u03b1_7730_, v_ext_7731_, v_addEntry_7732_, v_droppedKeys_7733_, v_constantsPerTask_7734_, v_droppedEntriesRef_7735_, v_ty_7736_, v_a_7737_, v_a_7738_, v_a_7739_, v_a_7740_);
lean_dec(v_a_7740_);
lean_dec_ref(v_a_7739_);
lean_dec(v_a_7738_);
lean_dec_ref(v_a_7737_);
lean_dec_ref(v_ext_7731_);
return v_res_7742_;
}
}
lean_object* runtime_initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar = _init_l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar();
lean_mark_persistent(l_Lean_Meta_LazyDiscrTree_MatchClone_tmpStar);
l_Lean_Meta_LazyDiscrTree_initCapacity = _init_l_Lean_Meta_LazyDiscrTree_initCapacity();
lean_mark_persistent(l_Lean_Meta_LazyDiscrTree_initCapacity);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_LazyDiscrTree(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_LazyDiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_LazyDiscrTree(builtin);
}
#ifdef __cplusplus
}
#endif
