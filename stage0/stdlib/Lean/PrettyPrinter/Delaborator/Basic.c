// Lean compiler output
// Module: Lean.PrettyPrinter.Delaborator.Basic
// Imports: public import Lean.KeyedDeclsAttribute public import Lean.PrettyPrinter.Delaborator.TopDownAnalyze import Lean.Elab.InfoTree.Main import Lean.ExtraModUses public meta import Init.Data.ToString.Name
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
lean_object* l_Lean_registerInternalExceptionId(lean_object*);
lean_object* l_Lean_Syntax_setInfo(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object*);
lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_HoleIterator_next(lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Expr_isAtomic(lean_object*);
lean_object* l_Lean_getPPProofs___boxed(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_getPPProofsThreshold___boxed(lean_object*);
uint32_t l_Lean_Expr_approxDepth(lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
lean_object* l_Lean_Name_getRoot(lean_object*);
lean_object* l_Lean_Attribute_Builtin_getIdent(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
lean_object* l_Lean_KeyedDeclsAttribute_init___redArg(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_getValues___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getInfo_x3f(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
lean_object* l_Lean_getPPMaxSteps___boxed(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_getPPDeepTerms___boxed(lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getUnusedName(lean_object*, lean_object*);
lean_object* l_Lean_getPPSafeShadowing___boxed(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Core_withFreshMacroScope___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_usesUserName(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
extern lean_object* l_Lean_SubExpr_Pos_maxChildren;
lean_object* l_Lean_SubExpr_Pos_push(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getPPAnalyzeTypeAscriptions___boxed(lean_object*);
lean_object* l_Lean_getPPAnalysisNeedsType___boxed(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getPPDeepTermsThreshold___boxed(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_SubExpr_Pos_typeCoord;
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMData(lean_object*);
lean_object* l_Lean_getPPProofsWithType___boxed(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
uint8_t l_Lean_Options_getInPattern(lean_object*);
lean_object* l_Lean_SubExpr_mkRoot(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_getPPAll(lean_object*);
uint8_t l_Lean_getPPAnalyze(lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_topDownAnalyze(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_getPPBeta(lean_object*);
lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_erasePatternRefAnnotations(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepth;
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
uint8_t l_Lean_getPPInstantiateMVars(lean_object*);
extern lean_object* l_Lean_diagnostics;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_pp_proofs;
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Expr_bindingName_x21(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
uint8_t l_Lean_Expr_binderInfo(lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedMessageData_default;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Macro_resolveGlobalName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "delabFailure"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 138, 190, 155, 112, 230, 57, 130)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabFailureId;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__0;
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_orElse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_orElse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_orElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_orElse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator_failure___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator_failure___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_failure___redArg();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_failure___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_failure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_failure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__0;
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__1;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__2_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__3_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__4_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__5 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__5_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_failure___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__6 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__6_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_orElse___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__7 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instOrElseDelabM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_orElse___boxed, .m_arity = 10, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instOrElseDelabM___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instOrElseDelabM___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instOrElseDelabM(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM___lam__0___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__0_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__1___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__1_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__2___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__2_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__0_value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__1_value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__2_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqExtraModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__0_value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableExtraModUse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__1_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__5;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__6_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__7_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__11;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__0_value;
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__1_value;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__2;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__3 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(149, 158, 147, 61, 120, 131, 143, 40)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_initFn___lam__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2____boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "builtin_delab"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(172, 78, 157, 22, 7, 109, 94, 150)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "delab"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(25, 48, 28, 192, 106, 44, 69, 249)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Register a delaborator"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Delaborator"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__10_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Delab"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__10_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__10_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 126, 247, 124, 241, 28, 11, 244)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__10_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(98, 145, 52, 44, 66, 160, 163, 69)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__12_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__12_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__12_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__13_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "delabAttribute"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__13_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__13_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 126, 247, 124, 241, 28, 11, 244)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__13_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(213, 105, 4, 51, 2, 59, 203, 237)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 513, .m_capacity = 513, .m_length = 512, .m_data = "Registers a delaborator.\n\n`@[delab k]` registers a declaration of type `Lean.PrettyPrinter.Delaborator.Delab` for the\n`Lean.Expr` constructor `k`. Multiple delaborators for a single constructor are tried in turn until\nthe first success. If the term to be delaborated is an application of a constant `c`, elaborators\nfor `app.c` are tried first; this is also done for `Expr.const`s (\"nullary applications\") to reduce\nspecial casing. If the term is an `Expr.mdata` with a single key `k`, `mdata.k` is tried first.\n"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_docString__1___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_docString__1();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_docString__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(99) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(124) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(109) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(109) << 1) | 1)),((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__3_value),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__4_value),((lean_object*)(((size_t)(40) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__5 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__2_value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__6 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "attrApp_delab_"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1_value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 126, 247, 124, 241, 28, 11, 244)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1_value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(183, 211, 248, 195, 71, 12, 182, 36)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__2_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__3_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "app_delab"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__4_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 6}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__5 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__5_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__6 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__6_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__7 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__7_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__7_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__8 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__8_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__3_value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__5_value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__8_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__9 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__9_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__9_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__10 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__10_value;
LEAN_EXPORT const lean_object* l_Lean_PrettyPrinter_Delaborator_attrApp__delab__ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__10_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "ambiguous declaration `"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unknown declaration `"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__0_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__1_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__2_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__3_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__4_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__4_value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__4_value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__4_value;
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__5;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__6 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__6_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__7 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "mdata"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(251, 175, 71, 113, 225, 183, 177, 137)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___boxed(lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bvar"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 199, 141, 14, 246, 212, 56, 18)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__1_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fvar"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__2_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__2_value),LEAN_SCALAR_PTR_LITERAL(248, 205, 14, 134, 100, 128, 23, 108)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__3_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mvar"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__4_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__4_value),LEAN_SCALAR_PTR_LITERAL(255, 4, 123, 224, 163, 191, 27, 224)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__5 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__5_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__6 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__6_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__6_value),LEAN_SCALAR_PTR_LITERAL(219, 64, 188, 107, 37, 148, 192, 182)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__7 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__7_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lam"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__8 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__8_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__8_value),LEAN_SCALAR_PTR_LITERAL(127, 151, 111, 115, 93, 99, 227, 194)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__9 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__9_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "forallE"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__10 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__10_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__10_value),LEAN_SCALAR_PTR_LITERAL(74, 171, 42, 71, 5, 117, 56, 122)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__11 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__11_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "letE"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__12 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__12_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__12_value),LEAN_SCALAR_PTR_LITERAL(225, 230, 114, 173, 203, 123, 191, 0)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__13 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__13_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lit"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__14 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__14_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__14_value),LEAN_SCALAR_PTR_LITERAL(45, 95, 104, 244, 171, 29, 119, 232)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__15 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__15_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "proj"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__16 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__16_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__16_value),LEAN_SCALAR_PTR_LITERAL(23, 181, 174, 77, 43, 228, 39, 210)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__17 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__17_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getPPOption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getPPOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_whenPPOption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_whenPPOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_whenNotPPOption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_whenNotPPOption___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotatePos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateCurPos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateCurPos___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateCurPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateCurPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__10_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 78, 224, 2, 255, 4, 162, 217)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addTermInfo___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addTermInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addTermInfo(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addTermInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addFieldInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addFieldInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addFieldInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addFieldInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withAnnotateTermInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withAnnotateTermInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withAnnotateTermInfoUnlessAnnotated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withAnnotateTermInfoUnlessAnnotated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPSafeShadowing___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__0_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__1_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__1_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_deep_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_deep_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_proof_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_proof_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_maxSteps_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_maxSteps_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_string_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_string_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "Term omitted due to its depth (see option `pp.deepTerms`)."};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__0_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Proof omitted (see option `pp.proofs`)."};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__1_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 129, .m_capacity = 129, .m_length = 128, .m_data = "Term omitted due to reaching the maximum number of steps allowed for pretty printing this expression (see option `pp.maxSteps`)."};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addOmissionInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addOmissionInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addOmissionInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addOmissionInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withIncDepth___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withIncDepth___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withIncDepth(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withIncDepth___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_isShallowExpression(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isShallowExpression___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPDeepTerms___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr___closed__0_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPDeepTermsThreshold___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_shouldOmitProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPProofs___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitProof___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_shouldOmitProof___closed__0_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_shouldOmitProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPProofsThreshold___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitProof___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_shouldOmitProof___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__0_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "omission"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__1_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__2_value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__2_value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(22, 154, 52, 140, 5, 177, 16, 6)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__2_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⋯"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_omission___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_omission___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_omission(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_omission___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_firstM___at___00Lean_PrettyPrinter_Delaborator_delabFor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_firstM___at___00Lean_PrettyPrinter_Delaborator_delabFor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delab___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "don't know how to delaborate `"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___lam__0___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator_delab___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator_delab___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delab___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delab___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPMaxSteps___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__0_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delab___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "typeAscription"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__1_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__2_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__2_value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__2_value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__1_value),LEAN_SCALAR_PTR_LITERAL(247, 209, 88, 141, 5, 195, 49, 74)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__2_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delab___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__3_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__4_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__4_value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__4_value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 104, 206, 51, 21, 254, 100, 101)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__4_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delab___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__5 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__5_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delab___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__6 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__6_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__7 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__7_value;
static lean_once_cell_t l_Lean_PrettyPrinter_Delaborator_delab___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__8;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__9_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__9_value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 126, 247, 124, 241, 28, 11, 244)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__9 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__9_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__9_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__10 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__10_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delab___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "SubExpr"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__11 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__11_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__12_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__12_value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 126, 247, 124, 241, 28, 11, 244)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__12_value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__11_value),LEAN_SCALAR_PTR_LITERAL(231, 152, 1, 212, 81, 225, 23, 202)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__12 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__12_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__12_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__13 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__13_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__14_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__11_value),LEAN_SCALAR_PTR_LITERAL(170, 131, 175, 90, 105, 49, 153, 209)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__14 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__14_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__14_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__15 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__15_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delab___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__16 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__16_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__17_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__16_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__17 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__17_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__17_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__18 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__18_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__18_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__19 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__19_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__15_value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__19_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__20 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__20_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__13_value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__20_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__21 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__21_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_delab___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__10_value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__21_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__22 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__22_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delab___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__23 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__23_value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_delab___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__24 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__24_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delab___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPAnalyzeTypeAscriptions___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__25 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__25_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delab___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPAnalysisNeedsType___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__26 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__26_value;
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_delab___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_getPPProofsWithType___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_delab___closed__27 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_delab___closed__27_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "app_unexpander"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(173, 94, 177, 152, 198, 163, 81, 20)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Register an unexpander for applications of a given constant."};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Unexpander"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(127, 37, 73, 100, 13, 145, 76, 255)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*6 + 0, .m_other = 6, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "appUnexpanderAttribute"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 126, 247, 124, 241, 28, 11, 244)}};
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(59, 177, 70, 181, 38, 19, 76, 236)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute;
static const lean_string_object l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 620, .m_capacity = 620, .m_length = 619, .m_data = "Registers an unexpander for applications of a given constant.\n\n`@[app_unexpander c]` registers a `Lean.PrettyPrinter.Unexpander` for applications of the constant\n`c`. The unexpander is passed the result of pre-pretty printing the application *without*\nimplicitly passed arguments. If `pp.explicit` is set to true or `pp.notation` is set to false,\nit will not be called at all.\n\nUnexpanders work as an alternative for delaborators (`@[app_delab]`) that can be used without\nspecial imports. This however also makes them much less capable since they can only transform\nsyntax and don't have access to the expression tree.\n"};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_docString__1___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_docString__1();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_docString__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(453) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(475) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(466) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(466) << 1) | 1)),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__3_value),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__4_value),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__5 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__2_value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__6 = (const lean_object*)&l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___boxed(lean_object*);
static const lean_closure_object l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg___closed__0 = (const lean_object*)&l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_PrettyPrinter_delabCore_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_PrettyPrinter_delabCore_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_PrettyPrinter_delabCore_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_PrettyPrinter_delabCore_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4_spec__4(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_PrettyPrinter_delabCore_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_PrettyPrinter_delabCore_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_delabCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.PrettyPrinter.Delaborator.Basic"};
static const lean_object* l_Lean_PrettyPrinter_delabCore___redArg___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_delabCore___redArg___closed__0_value;
static const lean_string_object l_Lean_PrettyPrinter_delabCore___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.PrettyPrinter.delabCore"};
static const lean_object* l_Lean_PrettyPrinter_delabCore___redArg___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_delabCore___redArg___closed__1_value;
static const lean_string_object l_Lean_PrettyPrinter_delabCore___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_PrettyPrinter_delabCore___redArg___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_delabCore___redArg___closed__2_value;
static lean_once_cell_t l_Lean_PrettyPrinter_delabCore___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_delabCore___redArg___closed__3;
static lean_once_cell_t l_Lean_PrettyPrinter_delabCore___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_delabCore___redArg___closed__4;
static lean_once_cell_t l_Lean_PrettyPrinter_delabCore___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_delabCore___redArg___closed__5;
static const lean_string_object l_Lean_PrettyPrinter_delabCore___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "input"};
static const lean_object* l_Lean_PrettyPrinter_delabCore___redArg___closed__6 = (const lean_object*)&l_Lean_PrettyPrinter_delabCore___redArg___closed__6_value;
static const lean_ctor_object l_Lean_PrettyPrinter_delabCore___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(201, 243, 163, 104, 244, 197, 219, 0)}};
static const lean_ctor_object l_Lean_PrettyPrinter_delabCore___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_delabCore___redArg___closed__7_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(19, 225, 73, 62, 228, 183, 164, 156)}};
static const lean_ctor_object l_Lean_PrettyPrinter_delabCore___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_delabCore___redArg___closed__7_value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_delabCore___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(104, 172, 119, 199, 92, 54, 86, 47)}};
static const lean_object* l_Lean_PrettyPrinter_delabCore___redArg___closed__7 = (const lean_object*)&l_Lean_PrettyPrinter_delabCore___redArg___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delabCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delabCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delabCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delabCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_delab___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delab___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_delab___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_delab___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(201, 243, 163, 104, 244, 197, 219, 0)}};
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(19, 225, 73, 62, 228, 183, 164, 156)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 152, 45, 136, 43, 176, 59, 135)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 19, 214, 208, 28, 243, 5, 52)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Basic"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 164, 190, 165, 103, 227, 105, 51)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(181, 183, 224, 255, 20, 2, 99, 61)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(32, 0, 36, 13, 230, 137, 208, 68)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(214, 99, 145, 72, 150, 13, 224, 205)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(59, 207, 248, 169, 211, 175, 254, 249)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 170, 24, 58, 43, 56, 104, 232)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__7_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 123, 18, 109, 183, 228, 66, 1)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(173, 193, 243, 64, 48, 31, 65, 146)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_Delaborator_initFn___closed__9_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(254, 168, 97, 241, 156, 42, 72, 1)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(69, 126, 151, 159, 89, 238, 133, 226)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)(((size_t)(407216755) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(36, 100, 30, 138, 196, 203, 46, 101)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__20_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__20_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__20_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__21_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__20_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(139, 229, 89, 61, 51, 113, 91, 110)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__21_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__21_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__22_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__22_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__22_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__23_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__21_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__22_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(203, 172, 112, 17, 197, 244, 28, 218)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__23_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__23_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__24_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__23_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(222, 87, 20, 72, 25, 41, 179, 135)}};
static const lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__24_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__24_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2_));
v___x_6_ = l_Lean_registerInternalExceptionId(v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2____boxed(lean_object* v_a_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2_();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___lam__0(lean_object* v___x_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_9_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___lam__0___boxed(lean_object* v___x_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___lam__0(v___x_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
return v_res_26_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__0(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = l_Lean_instInhabitedMessageData_default;
v___x_28_ = lean_box(0);
v___x_29_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__1(void){
_start:
{
lean_object* v___x_30_; lean_object* v___f_31_; 
v___x_30_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__0, &l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__0_once, _init_l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__0);
v___f_31_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___lam__0___boxed), 8, 1);
lean_closure_set(v___f_31_, 0, v___x_30_);
return v___f_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM(lean_object* v_00_u03b1_32_){
_start:
{
lean_object* v___f_33_; 
v___f_33_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__1, &l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__1_once, _init_l_Lean_PrettyPrinter_Delaborator_instInhabitedDelabM___closed__1);
return v___f_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_orElse___redArg(lean_object* v_d_u2081_34_, lean_object* v_d_u2082_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_43_; 
lean_inc(v_a_41_);
lean_inc_ref(v_a_40_);
lean_inc(v_a_39_);
lean_inc_ref(v_a_38_);
lean_inc(v_a_37_);
lean_inc_ref(v_a_36_);
v___x_43_ = lean_apply_7(v_d_u2081_34_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, lean_box(0));
if (lean_obj_tag(v___x_43_) == 0)
{
lean_dec(v_a_41_);
lean_dec_ref(v_a_40_);
lean_dec(v_a_39_);
lean_dec_ref(v_a_38_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_d_u2082_35_);
return v___x_43_;
}
else
{
lean_object* v_a_44_; lean_object* v___x_45_; uint8_t v___y_47_; uint8_t v___x_52_; 
v_a_44_ = lean_ctor_get(v___x_43_, 0);
lean_inc(v_a_44_);
v___x_45_ = l_Lean_PrettyPrinter_Delaborator_delabFailureId;
v___x_52_ = l_Lean_Exception_isInterrupt(v_a_44_);
if (v___x_52_ == 0)
{
uint8_t v___x_53_; 
lean_inc(v_a_44_);
v___x_53_ = l_Lean_Exception_isRuntime(v_a_44_);
v___y_47_ = v___x_53_;
goto v___jp_46_;
}
else
{
v___y_47_ = v___x_52_;
goto v___jp_46_;
}
v___jp_46_:
{
if (v___y_47_ == 0)
{
if (lean_obj_tag(v_a_44_) == 0)
{
lean_dec_ref(v_a_44_);
lean_dec(v_a_41_);
lean_dec_ref(v_a_40_);
lean_dec(v_a_39_);
lean_dec_ref(v_a_38_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_d_u2082_35_);
return v___x_43_;
}
else
{
lean_object* v_id_48_; uint8_t v___x_49_; 
v_id_48_ = lean_ctor_get(v_a_44_, 0);
lean_inc(v_id_48_);
lean_dec_ref(v_a_44_);
v___x_49_ = l_Lean_instBEqInternalExceptionId_beq(v___x_45_, v_id_48_);
lean_dec(v_id_48_);
if (v___x_49_ == 0)
{
lean_dec(v_a_41_);
lean_dec_ref(v_a_40_);
lean_dec(v_a_39_);
lean_dec_ref(v_a_38_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_d_u2082_35_);
return v___x_43_;
}
else
{
lean_object* v___x_50_; lean_object* v___x_51_; 
lean_dec_ref(v___x_43_);
v___x_50_ = lean_box(0);
v___x_51_ = lean_apply_8(v_d_u2082_35_, v___x_50_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, lean_box(0));
return v___x_51_;
}
}
}
else
{
lean_dec(v_a_44_);
lean_dec(v_a_41_);
lean_dec_ref(v_a_40_);
lean_dec(v_a_39_);
lean_dec_ref(v_a_38_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
lean_dec_ref(v_d_u2082_35_);
return v___x_43_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_orElse___redArg___boxed(lean_object* v_d_u2081_54_, lean_object* v_d_u2082_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lean_PrettyPrinter_Delaborator_orElse___redArg(v_d_u2081_54_, v_d_u2082_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_orElse(lean_object* v_00_u03b1_64_, lean_object* v_d_u2081_65_, lean_object* v_d_u2082_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
lean_object* v___x_74_; 
lean_inc(v_a_72_);
lean_inc_ref(v_a_71_);
lean_inc(v_a_70_);
lean_inc_ref(v_a_69_);
lean_inc(v_a_68_);
lean_inc_ref(v_a_67_);
v___x_74_ = lean_apply_7(v_d_u2081_65_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_, lean_box(0));
if (lean_obj_tag(v___x_74_) == 0)
{
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec_ref(v_d_u2082_66_);
return v___x_74_;
}
else
{
lean_object* v_a_75_; lean_object* v___x_76_; uint8_t v___y_78_; uint8_t v___x_83_; 
v_a_75_ = lean_ctor_get(v___x_74_, 0);
lean_inc(v_a_75_);
v___x_76_ = l_Lean_PrettyPrinter_Delaborator_delabFailureId;
v___x_83_ = l_Lean_Exception_isInterrupt(v_a_75_);
if (v___x_83_ == 0)
{
uint8_t v___x_84_; 
lean_inc(v_a_75_);
v___x_84_ = l_Lean_Exception_isRuntime(v_a_75_);
v___y_78_ = v___x_84_;
goto v___jp_77_;
}
else
{
v___y_78_ = v___x_83_;
goto v___jp_77_;
}
v___jp_77_:
{
if (v___y_78_ == 0)
{
if (lean_obj_tag(v_a_75_) == 0)
{
lean_dec_ref(v_a_75_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec_ref(v_d_u2082_66_);
return v___x_74_;
}
else
{
lean_object* v_id_79_; uint8_t v___x_80_; 
v_id_79_ = lean_ctor_get(v_a_75_, 0);
lean_inc(v_id_79_);
lean_dec_ref(v_a_75_);
v___x_80_ = l_Lean_instBEqInternalExceptionId_beq(v___x_76_, v_id_79_);
lean_dec(v_id_79_);
if (v___x_80_ == 0)
{
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec_ref(v_d_u2082_66_);
return v___x_74_;
}
else
{
lean_object* v___x_81_; lean_object* v___x_82_; 
lean_dec_ref(v___x_74_);
v___x_81_ = lean_box(0);
v___x_82_ = lean_apply_8(v_d_u2082_66_, v___x_81_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_, lean_box(0));
return v___x_82_;
}
}
}
else
{
lean_dec(v_a_75_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec_ref(v_d_u2082_66_);
return v___x_74_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_orElse___boxed(lean_object* v_00_u03b1_85_, lean_object* v_d_u2081_86_, lean_object* v_d_u2082_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lean_PrettyPrinter_Delaborator_orElse(v_00_u03b1_85_, v_d_u2081_86_, v_d_u2082_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_);
return v_res_95_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_failure___redArg___closed__0(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_box(0);
v___x_97_ = l_Lean_PrettyPrinter_Delaborator_delabFailureId;
v___x_98_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_failure___redArg(){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_failure___redArg___closed__0, &l_Lean_PrettyPrinter_Delaborator_failure___redArg___closed__0_once, _init_l_Lean_PrettyPrinter_Delaborator_failure___redArg___closed__0);
v___x_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_failure___redArg___boxed(lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_PrettyPrinter_Delaborator_failure___redArg();
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_failure(lean_object* v_00_u03b1_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = l_Lean_PrettyPrinter_Delaborator_failure___redArg();
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_failure___boxed(lean_object* v_00_u03b1_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lean_PrettyPrinter_Delaborator_failure(v_00_u03b1_113_, v_a_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_, v_a_119_);
lean_dec(v_a_119_);
lean_dec_ref(v_a_118_);
lean_dec(v_a_117_);
lean_dec_ref(v_a_116_);
lean_dec(v_a_115_);
lean_dec_ref(v_a_114_);
return v_res_121_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__0(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_instMonadEIO(lean_box(0));
return v___x_122_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__1(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__0, &l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__0_once, _init_l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__0);
v___x_124_ = l_StateRefT_x27_instMonad___redArg(v___x_123_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM(void){
_start:
{
lean_object* v___x_131_; lean_object* v_toApplicative_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_213_; 
v___x_131_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__1, &l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__1_once, _init_l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__1);
v_toApplicative_132_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_213_ == 0)
{
lean_object* v_unused_214_; 
v_unused_214_ = lean_ctor_get(v___x_131_, 1);
lean_dec(v_unused_214_);
v___x_134_ = v___x_131_;
v_isShared_135_ = v_isSharedCheck_213_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_toApplicative_132_);
lean_dec(v___x_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_213_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v_toFunctor_136_; lean_object* v_toSeq_137_; lean_object* v_toSeqLeft_138_; lean_object* v_toSeqRight_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_211_; 
v_toFunctor_136_ = lean_ctor_get(v_toApplicative_132_, 0);
v_toSeq_137_ = lean_ctor_get(v_toApplicative_132_, 2);
v_toSeqLeft_138_ = lean_ctor_get(v_toApplicative_132_, 3);
v_toSeqRight_139_ = lean_ctor_get(v_toApplicative_132_, 4);
v_isSharedCheck_211_ = !lean_is_exclusive(v_toApplicative_132_);
if (v_isSharedCheck_211_ == 0)
{
lean_object* v_unused_212_; 
v_unused_212_ = lean_ctor_get(v_toApplicative_132_, 1);
lean_dec(v_unused_212_);
v___x_141_ = v_toApplicative_132_;
v_isShared_142_ = v_isSharedCheck_211_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_toSeqRight_139_);
lean_inc(v_toSeqLeft_138_);
lean_inc(v_toSeq_137_);
lean_inc(v_toFunctor_136_);
lean_dec(v_toApplicative_132_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_211_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___f_143_; lean_object* v___f_144_; lean_object* v___f_145_; lean_object* v___f_146_; lean_object* v___x_147_; lean_object* v___f_148_; lean_object* v___f_149_; lean_object* v___f_150_; lean_object* v___x_152_; 
v___f_143_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__2));
v___f_144_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__3));
lean_inc_ref(v_toFunctor_136_);
v___f_145_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_145_, 0, v_toFunctor_136_);
v___f_146_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_146_, 0, v_toFunctor_136_);
v___x_147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_147_, 0, v___f_145_);
lean_ctor_set(v___x_147_, 1, v___f_146_);
v___f_148_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_148_, 0, v_toSeqRight_139_);
v___f_149_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_149_, 0, v_toSeqLeft_138_);
v___f_150_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_150_, 0, v_toSeq_137_);
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 4, v___f_148_);
lean_ctor_set(v___x_141_, 3, v___f_149_);
lean_ctor_set(v___x_141_, 2, v___f_150_);
lean_ctor_set(v___x_141_, 1, v___f_143_);
lean_ctor_set(v___x_141_, 0, v___x_147_);
v___x_152_ = v___x_141_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_147_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v___f_143_);
lean_ctor_set(v_reuseFailAlloc_210_, 2, v___f_150_);
lean_ctor_set(v_reuseFailAlloc_210_, 3, v___f_149_);
lean_ctor_set(v_reuseFailAlloc_210_, 4, v___f_148_);
v___x_152_ = v_reuseFailAlloc_210_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_154_; 
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 1, v___f_144_);
lean_ctor_set(v___x_134_, 0, v___x_152_);
v___x_154_ = v___x_134_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_152_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v___f_144_);
v___x_154_ = v_reuseFailAlloc_209_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
lean_object* v___x_155_; lean_object* v_toApplicative_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_207_; 
v___x_155_ = l_StateRefT_x27_instMonad___redArg(v___x_154_);
v_toApplicative_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_207_ == 0)
{
lean_object* v_unused_208_; 
v_unused_208_ = lean_ctor_get(v___x_155_, 1);
lean_dec(v_unused_208_);
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_207_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_toApplicative_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_207_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v_toFunctor_160_; lean_object* v_toSeq_161_; lean_object* v_toSeqLeft_162_; lean_object* v_toSeqRight_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_205_; 
v_toFunctor_160_ = lean_ctor_get(v_toApplicative_156_, 0);
v_toSeq_161_ = lean_ctor_get(v_toApplicative_156_, 2);
v_toSeqLeft_162_ = lean_ctor_get(v_toApplicative_156_, 3);
v_toSeqRight_163_ = lean_ctor_get(v_toApplicative_156_, 4);
v_isSharedCheck_205_ = !lean_is_exclusive(v_toApplicative_156_);
if (v_isSharedCheck_205_ == 0)
{
lean_object* v_unused_206_; 
v_unused_206_ = lean_ctor_get(v_toApplicative_156_, 1);
lean_dec(v_unused_206_);
v___x_165_ = v_toApplicative_156_;
v_isShared_166_ = v_isSharedCheck_205_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_toSeqRight_163_);
lean_inc(v_toSeqLeft_162_);
lean_inc(v_toSeq_161_);
lean_inc(v_toFunctor_160_);
lean_dec(v_toApplicative_156_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_205_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___f_167_; lean_object* v___f_168_; lean_object* v___f_169_; lean_object* v___f_170_; lean_object* v___x_171_; lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___f_174_; lean_object* v___x_176_; 
v___f_167_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__4));
v___f_168_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__5));
lean_inc_ref(v_toFunctor_160_);
v___f_169_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_169_, 0, v_toFunctor_160_);
v___f_170_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_170_, 0, v_toFunctor_160_);
v___x_171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_171_, 0, v___f_169_);
lean_ctor_set(v___x_171_, 1, v___f_170_);
v___f_172_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_172_, 0, v_toSeqRight_163_);
v___f_173_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_173_, 0, v_toSeqLeft_162_);
v___f_174_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_174_, 0, v_toSeq_161_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 4, v___f_172_);
lean_ctor_set(v___x_165_, 3, v___f_173_);
lean_ctor_set(v___x_165_, 2, v___f_174_);
lean_ctor_set(v___x_165_, 1, v___f_167_);
lean_ctor_set(v___x_165_, 0, v___x_171_);
v___x_176_ = v___x_165_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_204_; 
v_reuseFailAlloc_204_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_204_, 0, v___x_171_);
lean_ctor_set(v_reuseFailAlloc_204_, 1, v___f_167_);
lean_ctor_set(v_reuseFailAlloc_204_, 2, v___f_174_);
lean_ctor_set(v_reuseFailAlloc_204_, 3, v___f_173_);
lean_ctor_set(v_reuseFailAlloc_204_, 4, v___f_172_);
v___x_176_ = v_reuseFailAlloc_204_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
lean_object* v___x_178_; 
if (v_isShared_159_ == 0)
{
lean_ctor_set(v___x_158_, 1, v___f_168_);
lean_ctor_set(v___x_158_, 0, v___x_176_);
v___x_178_ = v___x_158_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_203_, 1, v___f_168_);
v___x_178_ = v_reuseFailAlloc_203_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
lean_object* v___x_179_; lean_object* v_toApplicative_180_; lean_object* v_toFunctor_181_; lean_object* v_toSeq_182_; lean_object* v_toSeqLeft_183_; lean_object* v_toSeqRight_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_201_; 
v___x_179_ = l_StateRefT_x27_instMonad___redArg(v___x_178_);
v_toApplicative_180_ = lean_ctor_get(v___x_179_, 0);
lean_inc_ref(v_toApplicative_180_);
v_toFunctor_181_ = lean_ctor_get(v_toApplicative_180_, 0);
v_toSeq_182_ = lean_ctor_get(v_toApplicative_180_, 2);
v_toSeqLeft_183_ = lean_ctor_get(v_toApplicative_180_, 3);
v_toSeqRight_184_ = lean_ctor_get(v_toApplicative_180_, 4);
v_isSharedCheck_201_ = !lean_is_exclusive(v_toApplicative_180_);
if (v_isSharedCheck_201_ == 0)
{
lean_object* v_unused_202_; 
v_unused_202_ = lean_ctor_get(v_toApplicative_180_, 1);
lean_dec(v_unused_202_);
v___x_186_ = v_toApplicative_180_;
v_isShared_187_ = v_isSharedCheck_201_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_toSeqRight_184_);
lean_inc(v_toSeqLeft_183_);
lean_inc(v_toSeq_182_);
lean_inc(v_toFunctor_181_);
lean_dec(v_toApplicative_180_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_201_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___f_188_; lean_object* v___f_189_; lean_object* v___f_190_; lean_object* v___f_191_; lean_object* v___f_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_196_; 
v___f_188_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_188_, 0, v_toSeqRight_184_);
v___f_189_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_189_, 0, v_toSeqLeft_183_);
v___f_190_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_190_, 0, v_toSeq_182_);
lean_inc_ref(v_toFunctor_181_);
v___f_191_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_191_, 0, v_toFunctor_181_);
v___f_192_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_192_, 0, v_toFunctor_181_);
v___x_193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_193_, 0, v___f_191_);
lean_ctor_set(v___x_193_, 1, v___f_192_);
v___x_194_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_194_, 0, lean_box(0));
lean_closure_set(v___x_194_, 1, lean_box(0));
lean_closure_set(v___x_194_, 2, v___x_179_);
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 4, v___f_188_);
lean_ctor_set(v___x_186_, 3, v___f_189_);
lean_ctor_set(v___x_186_, 2, v___f_190_);
lean_ctor_set(v___x_186_, 1, v___x_194_);
lean_ctor_set(v___x_186_, 0, v___x_193_);
v___x_196_ = v___x_186_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_200_, 2, v___f_190_);
lean_ctor_set(v_reuseFailAlloc_200_, 3, v___f_189_);
lean_ctor_set(v_reuseFailAlloc_200_, 4, v___f_188_);
v___x_196_ = v_reuseFailAlloc_200_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_197_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__6));
v___x_198_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM___closed__7));
v___x_199_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_199_, 0, v___x_196_);
lean_ctor_set(v___x_199_, 1, v___x_197_);
lean_ctor_set(v___x_199_, 2, v___x_198_);
return v___x_199_;
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
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instOrElseDelabM(lean_object* v_00_u03b1_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_instOrElseDelabM___closed__0));
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM___lam__0(lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_subExpr_225_; lean_object* v___x_226_; 
v_subExpr_225_ = lean_ctor_get(v___y_218_, 3);
lean_inc_ref(v_subExpr_225_);
v___x_226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_226_, 0, v_subExpr_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM___lam__0___boxed(lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_PrettyPrinter_Delaborator_instMonadReaderOfSubExprDelabM___lam__0(v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
lean_dec(v___y_228_);
lean_dec_ref(v___y_227_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM___lam__0(lean_object* v_00_u03b1_237_, lean_object* v_f_238_, lean_object* v_x_239_, lean_object* v_ctx_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_optionsPerPos_247_; lean_object* v_currNamespace_248_; lean_object* v_openDecls_249_; uint8_t v_inPattern_250_; lean_object* v_subExpr_251_; lean_object* v_depth_252_; lean_object* v___x_254_; uint8_t v_isShared_255_; uint8_t v_isSharedCheck_261_; 
v_optionsPerPos_247_ = lean_ctor_get(v_ctx_240_, 0);
v_currNamespace_248_ = lean_ctor_get(v_ctx_240_, 1);
v_openDecls_249_ = lean_ctor_get(v_ctx_240_, 2);
v_inPattern_250_ = lean_ctor_get_uint8(v_ctx_240_, sizeof(void*)*5);
v_subExpr_251_ = lean_ctor_get(v_ctx_240_, 3);
v_depth_252_ = lean_ctor_get(v_ctx_240_, 4);
v_isSharedCheck_261_ = !lean_is_exclusive(v_ctx_240_);
if (v_isSharedCheck_261_ == 0)
{
v___x_254_ = v_ctx_240_;
v_isShared_255_ = v_isSharedCheck_261_;
goto v_resetjp_253_;
}
else
{
lean_inc(v_depth_252_);
lean_inc(v_subExpr_251_);
lean_inc(v_openDecls_249_);
lean_inc(v_currNamespace_248_);
lean_inc(v_optionsPerPos_247_);
lean_dec(v_ctx_240_);
v___x_254_ = lean_box(0);
v_isShared_255_ = v_isSharedCheck_261_;
goto v_resetjp_253_;
}
v_resetjp_253_:
{
lean_object* v___x_256_; lean_object* v___x_258_; 
v___x_256_ = lean_apply_1(v_f_238_, v_subExpr_251_);
if (v_isShared_255_ == 0)
{
lean_ctor_set(v___x_254_, 3, v___x_256_);
v___x_258_ = v___x_254_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_optionsPerPos_247_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v_currNamespace_248_);
lean_ctor_set(v_reuseFailAlloc_260_, 2, v_openDecls_249_);
lean_ctor_set(v_reuseFailAlloc_260_, 3, v___x_256_);
lean_ctor_set(v_reuseFailAlloc_260_, 4, v_depth_252_);
lean_ctor_set_uint8(v_reuseFailAlloc_260_, sizeof(void*)*5, v_inPattern_250_);
v___x_258_ = v_reuseFailAlloc_260_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v___x_259_; 
v___x_259_ = lean_apply_7(v_x_239_, v___x_258_, v___y_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, lean_box(0));
return v___x_259_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM___lam__0___boxed(lean_object* v_00_u03b1_262_, lean_object* v_f_263_, lean_object* v_x_264_, lean_object* v_ctx_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lean_PrettyPrinter_Delaborator_instMonadWithReaderOfSubExprDelabM___lam__0(v_00_u03b1_262_, v_f_263_, v_x_264_, v_ctx_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__0(lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v___x_282_; lean_object* v_holeIter_283_; lean_object* v___x_284_; 
v___x_282_ = lean_st_ref_get(v___y_276_);
v_holeIter_283_ = lean_ctor_get(v___x_282_, 2);
lean_inc_ref(v_holeIter_283_);
lean_dec(v___x_282_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v_holeIter_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__0___boxed(lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__0(v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__1(lean_object* v_iter_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_){
_start:
{
lean_object* v___x_301_; lean_object* v_steps_302_; lean_object* v_infos_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_313_; 
v___x_301_ = lean_st_ref_take(v___y_295_);
v_steps_302_ = lean_ctor_get(v___x_301_, 0);
v_infos_303_ = lean_ctor_get(v___x_301_, 1);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_313_ == 0)
{
lean_object* v_unused_314_; 
v_unused_314_ = lean_ctor_get(v___x_301_, 2);
lean_dec(v_unused_314_);
v___x_305_ = v___x_301_;
v_isShared_306_ = v_isSharedCheck_313_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_infos_303_);
lean_inc(v_steps_302_);
lean_dec(v___x_301_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_313_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_308_; 
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 2, v_iter_293_);
v___x_308_ = v___x_305_;
goto v_reusejp_307_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_steps_302_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v_infos_303_);
lean_ctor_set(v_reuseFailAlloc_312_, 2, v_iter_293_);
v___x_308_ = v_reuseFailAlloc_312_;
goto v_reusejp_307_;
}
v_reusejp_307_:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_st_ref_set(v___y_295_, v___x_308_);
v___x_310_ = lean_box(0);
v___x_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
return v___x_311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__1___boxed(lean_object* v_iter_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__1(v_iter_315_, v___y_316_, v___y_317_, v___y_318_, v___y_319_, v___y_320_, v___y_321_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
lean_dec(v___y_317_);
lean_dec_ref(v___y_316_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__2(lean_object* v_00_u03b1_324_, lean_object* v_f_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
lean_object* v___x_333_; lean_object* v_steps_334_; lean_object* v_infos_335_; lean_object* v_holeIter_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_348_; 
v___x_333_ = lean_st_ref_take(v___y_327_);
v_steps_334_ = lean_ctor_get(v___x_333_, 0);
v_infos_335_ = lean_ctor_get(v___x_333_, 1);
v_holeIter_336_ = lean_ctor_get(v___x_333_, 2);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_348_ == 0)
{
v___x_338_ = v___x_333_;
v_isShared_339_ = v_isSharedCheck_348_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_holeIter_336_);
lean_inc(v_infos_335_);
lean_inc(v_steps_334_);
lean_dec(v___x_333_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_348_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; lean_object* v_fst_341_; lean_object* v_snd_342_; lean_object* v___x_344_; 
v___x_340_ = lean_apply_1(v_f_325_, v_holeIter_336_);
v_fst_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_fst_341_);
v_snd_342_ = lean_ctor_get(v___x_340_, 1);
lean_inc(v_snd_342_);
lean_dec_ref(v___x_340_);
if (v_isShared_339_ == 0)
{
lean_ctor_set(v___x_338_, 2, v_snd_342_);
v___x_344_ = v___x_338_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_steps_334_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v_infos_335_);
lean_ctor_set(v_reuseFailAlloc_347_, 2, v_snd_342_);
v___x_344_ = v_reuseFailAlloc_347_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_345_ = lean_st_ref_set(v___y_327_, v___x_344_);
v___x_346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_346_, 0, v_fst_341_);
return v___x_346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__2___boxed(lean_object* v_00_u03b1_349_, lean_object* v_f_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_PrettyPrinter_Delaborator_instMonadStateOfHoleIteratorDelabM___lam__2(v_00_u03b1_349_, v_f_350_, v___y_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_(uint8_t v_builtin_367_, lean_object* v_declName_368_, lean_object* v_key_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_box(0);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
return v___x_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2____boxed(lean_object* v_builtin_375_, lean_object* v_declName_376_, lean_object* v_key_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
uint8_t v_builtin_boxed_381_; lean_object* v_res_382_; 
v_builtin_boxed_381_ = lean_unbox(v_builtin_375_);
v_res_382_ = l_Lean_PrettyPrinter_Delaborator_initFn___lam__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_(v_builtin_boxed_381_, v_declName_376_, v_key_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v_key_377_);
lean_dec(v_declName_376_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(lean_object* v_cls_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_options_389_; uint8_t v_hasTrace_390_; 
v_options_389_ = lean_ctor_get(v___y_387_, 2);
v_hasTrace_390_ = lean_ctor_get_uint8(v_options_389_, sizeof(void*)*1);
if (v_hasTrace_390_ == 0)
{
lean_object* v___x_391_; lean_object* v___x_392_; 
lean_dec(v_cls_386_);
v___x_391_ = lean_box(v_hasTrace_390_);
v___x_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
return v___x_392_;
}
else
{
lean_object* v_inheritedTraceOptions_393_; lean_object* v___x_394_; lean_object* v___x_395_; uint8_t v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v_inheritedTraceOptions_393_ = lean_ctor_get(v___y_387_, 13);
v___x_394_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1));
v___x_395_ = l_Lean_Name_append(v___x_394_, v_cls_386_);
v___x_396_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_393_, v_options_389_, v___x_395_);
lean_dec(v___x_395_);
v___x_397_ = lean_box(v___x_396_);
v___x_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
return v___x_398_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_cls_399_, lean_object* v___y_400_, lean_object* v___y_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_cls_399_, v___y_400_);
lean_dec_ref(v___y_400_);
return v_res_402_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10___redArg(lean_object* v_keys_403_, lean_object* v_i_404_, lean_object* v_k_405_){
_start:
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = lean_array_get_size(v_keys_403_);
v___x_407_ = lean_nat_dec_lt(v_i_404_, v___x_406_);
if (v___x_407_ == 0)
{
lean_dec(v_i_404_);
return v___x_407_;
}
else
{
lean_object* v_k_x27_408_; uint8_t v___x_409_; 
v_k_x27_408_ = lean_array_fget_borrowed(v_keys_403_, v_i_404_);
v___x_409_ = l_Lean_instBEqExtraModUse_beq(v_k_405_, v_k_x27_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_410_ = lean_unsigned_to_nat(1u);
v___x_411_ = lean_nat_add(v_i_404_, v___x_410_);
lean_dec(v_i_404_);
v_i_404_ = v___x_411_;
goto _start;
}
else
{
lean_dec(v_i_404_);
return v___x_409_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10___redArg___boxed(lean_object* v_keys_413_, lean_object* v_i_414_, lean_object* v_k_415_){
_start:
{
uint8_t v_res_416_; lean_object* v_r_417_; 
v_res_416_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10___redArg(v_keys_413_, v_i_414_, v_k_415_);
lean_dec_ref(v_k_415_);
lean_dec_ref(v_keys_413_);
v_r_417_ = lean_box(v_res_416_);
return v_r_417_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__0(void){
_start:
{
size_t v___x_418_; size_t v___x_419_; size_t v___x_420_; 
v___x_418_ = ((size_t)5ULL);
v___x_419_ = ((size_t)1ULL);
v___x_420_ = lean_usize_shift_left(v___x_419_, v___x_418_);
return v___x_420_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_421_; size_t v___x_422_; size_t v___x_423_; 
v___x_421_ = ((size_t)1ULL);
v___x_422_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__0);
v___x_423_ = lean_usize_sub(v___x_422_, v___x_421_);
return v___x_423_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_424_, size_t v_x_425_, lean_object* v_x_426_){
_start:
{
if (lean_obj_tag(v_x_424_) == 0)
{
lean_object* v_es_427_; lean_object* v___x_428_; size_t v___x_429_; size_t v___x_430_; size_t v___x_431_; lean_object* v_j_432_; lean_object* v___x_433_; 
v_es_427_ = lean_ctor_get(v_x_424_, 0);
lean_inc_ref(v_es_427_);
lean_dec_ref(v_x_424_);
v___x_428_ = lean_box(2);
v___x_429_ = ((size_t)5ULL);
v___x_430_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___closed__1);
v___x_431_ = lean_usize_land(v_x_425_, v___x_430_);
v_j_432_ = lean_usize_to_nat(v___x_431_);
v___x_433_ = lean_array_get(v___x_428_, v_es_427_, v_j_432_);
lean_dec(v_j_432_);
lean_dec_ref(v_es_427_);
switch(lean_obj_tag(v___x_433_))
{
case 0:
{
lean_object* v_key_434_; uint8_t v___x_435_; 
v_key_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_key_434_);
lean_dec_ref(v___x_433_);
v___x_435_ = l_Lean_instBEqExtraModUse_beq(v_x_426_, v_key_434_);
lean_dec(v_key_434_);
return v___x_435_;
}
case 1:
{
lean_object* v_node_436_; size_t v___x_437_; 
v_node_436_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_node_436_);
lean_dec_ref(v___x_433_);
v___x_437_ = lean_usize_shift_right(v_x_425_, v___x_429_);
v_x_424_ = v_node_436_;
v_x_425_ = v___x_437_;
goto _start;
}
default: 
{
uint8_t v___x_439_; 
v___x_439_ = 0;
return v___x_439_;
}
}
}
else
{
lean_object* v_ks_440_; lean_object* v___x_441_; uint8_t v___x_442_; 
v_ks_440_ = lean_ctor_get(v_x_424_, 0);
lean_inc_ref(v_ks_440_);
lean_dec_ref(v_x_424_);
v___x_441_ = lean_unsigned_to_nat(0u);
v___x_442_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10___redArg(v_ks_440_, v___x_441_, v_x_426_);
lean_dec_ref(v_ks_440_);
return v___x_442_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_443_, lean_object* v_x_444_, lean_object* v_x_445_){
_start:
{
size_t v_x_7076__boxed_446_; uint8_t v_res_447_; lean_object* v_r_448_; 
v_x_7076__boxed_446_ = lean_unbox_usize(v_x_444_);
lean_dec(v_x_444_);
v_res_447_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(v_x_443_, v_x_7076__boxed_446_, v_x_445_);
lean_dec_ref(v_x_445_);
v_r_448_ = lean_box(v_res_447_);
return v_r_448_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_x_449_, lean_object* v_x_450_){
_start:
{
uint64_t v___x_451_; size_t v___x_452_; uint8_t v___x_453_; 
v___x_451_ = l_Lean_instHashableExtraModUse_hash(v_x_450_);
v___x_452_ = lean_uint64_to_usize(v___x_451_);
v___x_453_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(v_x_449_, v___x_452_, v_x_450_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_454_, lean_object* v_x_455_){
_start:
{
uint8_t v_res_456_; lean_object* v_r_457_; 
v_res_456_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_454_, v_x_455_);
lean_dec_ref(v_x_455_);
v_r_457_ = lean_box(v_res_456_);
return v_r_457_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_458_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__1(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__0);
v___x_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
return v___x_460_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__2(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_461_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__1);
v___x_462_ = lean_unsigned_to_nat(0u);
v___x_463_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
lean_ctor_set(v___x_463_, 2, v___x_462_);
lean_ctor_set(v___x_463_, 3, v___x_461_);
lean_ctor_set(v___x_463_, 4, v___x_461_);
lean_ctor_set(v___x_463_, 5, v___x_461_);
lean_ctor_set(v___x_463_, 6, v___x_461_);
lean_ctor_set(v___x_463_, 7, v___x_461_);
lean_ctor_set(v___x_463_, 8, v___x_461_);
return v___x_463_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__3(void){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_464_ = lean_unsigned_to_nat(32u);
v___x_465_ = lean_mk_empty_array_with_capacity(v___x_464_);
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__4(void){
_start:
{
size_t v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_467_ = ((size_t)5ULL);
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = lean_unsigned_to_nat(32u);
v___x_470_ = lean_mk_empty_array_with_capacity(v___x_469_);
v___x_471_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__3);
v___x_472_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_472_, 0, v___x_471_);
lean_ctor_set(v___x_472_, 1, v___x_470_);
lean_ctor_set(v___x_472_, 2, v___x_468_);
lean_ctor_set(v___x_472_, 3, v___x_468_);
lean_ctor_set_usize(v___x_472_, 4, v___x_467_);
return v___x_472_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__5(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_473_ = lean_box(1);
v___x_474_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__4);
v___x_475_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__1);
v___x_476_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_476_, 0, v___x_475_);
lean_ctor_set(v___x_476_, 1, v___x_474_);
lean_ctor_set(v___x_476_, 2, v___x_473_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6(lean_object* v_msgData_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v___x_481_; lean_object* v_env_482_; lean_object* v_options_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_481_ = lean_st_ref_get(v___y_479_);
v_env_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc_ref(v_env_482_);
lean_dec(v___x_481_);
v_options_483_ = lean_ctor_get(v___y_478_, 2);
v___x_484_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__2);
v___x_485_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__5);
lean_inc_ref(v_options_483_);
v___x_486_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_486_, 0, v_env_482_);
lean_ctor_set(v___x_486_, 1, v___x_484_);
lean_ctor_set(v___x_486_, 2, v___x_485_);
lean_ctor_set(v___x_486_, 3, v_options_483_);
v___x_487_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
lean_ctor_set(v___x_487_, 1, v_msgData_477_);
v___x_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___boxed(lean_object* v_msgData_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6(v_msgData_489_, v___y_490_, v___y_491_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
return v_res_493_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_494_; double v___x_495_; 
v___x_494_ = lean_unsigned_to_nat(0u);
v___x_495_ = lean_float_of_nat(v___x_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3(lean_object* v_cls_499_, lean_object* v_msg_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
lean_object* v_ref_504_; lean_object* v___x_505_; lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_550_; 
v_ref_504_ = lean_ctor_get(v___y_501_, 5);
v___x_505_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6(v_msg_500_, v___y_501_, v___y_502_);
v_a_506_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_550_ == 0)
{
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_550_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_550_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_510_; lean_object* v_traceState_511_; lean_object* v_env_512_; lean_object* v_nextMacroScope_513_; lean_object* v_ngen_514_; lean_object* v_auxDeclNGen_515_; lean_object* v_cache_516_; lean_object* v_messages_517_; lean_object* v_infoState_518_; lean_object* v_snapshotTasks_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_549_; 
v___x_510_ = lean_st_ref_take(v___y_502_);
v_traceState_511_ = lean_ctor_get(v___x_510_, 4);
v_env_512_ = lean_ctor_get(v___x_510_, 0);
v_nextMacroScope_513_ = lean_ctor_get(v___x_510_, 1);
v_ngen_514_ = lean_ctor_get(v___x_510_, 2);
v_auxDeclNGen_515_ = lean_ctor_get(v___x_510_, 3);
v_cache_516_ = lean_ctor_get(v___x_510_, 5);
v_messages_517_ = lean_ctor_get(v___x_510_, 6);
v_infoState_518_ = lean_ctor_get(v___x_510_, 7);
v_snapshotTasks_519_ = lean_ctor_get(v___x_510_, 8);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_510_);
if (v_isSharedCheck_549_ == 0)
{
v___x_521_ = v___x_510_;
v_isShared_522_ = v_isSharedCheck_549_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_snapshotTasks_519_);
lean_inc(v_infoState_518_);
lean_inc(v_messages_517_);
lean_inc(v_cache_516_);
lean_inc(v_traceState_511_);
lean_inc(v_auxDeclNGen_515_);
lean_inc(v_ngen_514_);
lean_inc(v_nextMacroScope_513_);
lean_inc(v_env_512_);
lean_dec(v___x_510_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_549_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
uint64_t v_tid_523_; lean_object* v_traces_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_548_; 
v_tid_523_ = lean_ctor_get_uint64(v_traceState_511_, sizeof(void*)*1);
v_traces_524_ = lean_ctor_get(v_traceState_511_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v_traceState_511_);
if (v_isSharedCheck_548_ == 0)
{
v___x_526_ = v_traceState_511_;
v_isShared_527_ = v_isSharedCheck_548_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_traces_524_);
lean_dec(v_traceState_511_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_548_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; double v___x_529_; uint8_t v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
v___x_528_ = lean_box(0);
v___x_529_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__0);
v___x_530_ = 0;
v___x_531_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__1));
v___x_532_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_532_, 0, v_cls_499_);
lean_ctor_set(v___x_532_, 1, v___x_528_);
lean_ctor_set(v___x_532_, 2, v___x_531_);
lean_ctor_set_float(v___x_532_, sizeof(void*)*3, v___x_529_);
lean_ctor_set_float(v___x_532_, sizeof(void*)*3 + 8, v___x_529_);
lean_ctor_set_uint8(v___x_532_, sizeof(void*)*3 + 16, v___x_530_);
v___x_533_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__2));
v___x_534_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_534_, 0, v___x_532_);
lean_ctor_set(v___x_534_, 1, v_a_506_);
lean_ctor_set(v___x_534_, 2, v___x_533_);
lean_inc(v_ref_504_);
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v_ref_504_);
lean_ctor_set(v___x_535_, 1, v___x_534_);
v___x_536_ = l_Lean_PersistentArray_push___redArg(v_traces_524_, v___x_535_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v___x_536_);
v___x_538_ = v___x_526_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_536_);
lean_ctor_set_uint64(v_reuseFailAlloc_547_, sizeof(void*)*1, v_tid_523_);
v___x_538_ = v_reuseFailAlloc_547_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
lean_object* v___x_540_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 4, v___x_538_);
v___x_540_ = v___x_521_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_env_512_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_nextMacroScope_513_);
lean_ctor_set(v_reuseFailAlloc_546_, 2, v_ngen_514_);
lean_ctor_set(v_reuseFailAlloc_546_, 3, v_auxDeclNGen_515_);
lean_ctor_set(v_reuseFailAlloc_546_, 4, v___x_538_);
lean_ctor_set(v_reuseFailAlloc_546_, 5, v_cache_516_);
lean_ctor_set(v_reuseFailAlloc_546_, 6, v_messages_517_);
lean_ctor_set(v_reuseFailAlloc_546_, 7, v_infoState_518_);
lean_ctor_set(v_reuseFailAlloc_546_, 8, v_snapshotTasks_519_);
v___x_540_ = v_reuseFailAlloc_546_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_544_; 
v___x_541_ = lean_st_ref_set(v___y_502_, v___x_540_);
v___x_542_ = lean_box(0);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v___x_542_);
v___x_544_ = v___x_508_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v___x_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___boxed(lean_object* v_cls_551_, lean_object* v_msg_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_){
_start:
{
lean_object* v_res_556_; 
v_res_556_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3(v_cls_551_, v_msg_552_, v___y_553_, v___y_554_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
return v_res_556_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_559_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__1));
v___x_560_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__0));
v___x_561_ = l_Lean_PersistentHashMap_empty(lean_box(0), lean_box(0), v___x_560_, v___x_559_);
return v___x_561_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_562_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
lean_ctor_set(v___x_566_, 1, v___x_565_);
return v___x_566_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__8));
v___x_572_ = l_Lean_stringToMessageData(v___x_571_);
return v___x_572_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__10));
v___x_575_ = l_Lean_stringToMessageData(v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__12(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__1));
v___x_577_ = l_Lean_stringToMessageData(v___x_576_);
return v___x_577_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__14(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__13));
v___x_580_ = l_Lean_stringToMessageData(v___x_579_);
return v___x_580_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__16(void){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__15));
v___x_583_ = l_Lean_stringToMessageData(v___x_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_mod_588_, uint8_t v_isMeta_589_, lean_object* v_hint_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v___x_594_; lean_object* v_env_595_; uint8_t v_isExporting_596_; lean_object* v___x_597_; lean_object* v_env_598_; lean_object* v___x_599_; lean_object* v_entry_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___y_605_; lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_594_ = lean_st_ref_get(v___y_592_);
v_env_595_ = lean_ctor_get(v___x_594_, 0);
lean_inc_ref(v_env_595_);
lean_dec(v___x_594_);
v_isExporting_596_ = lean_ctor_get_uint8(v_env_595_, sizeof(void*)*8);
lean_dec_ref(v_env_595_);
v___x_597_ = lean_st_ref_get(v___y_592_);
v_env_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc_ref(v_env_598_);
lean_dec(v___x_597_);
v___x_599_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__2);
lean_inc(v_mod_588_);
v_entry_600_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_600_, 0, v_mod_588_);
lean_ctor_set_uint8(v_entry_600_, sizeof(void*)*1, v_isExporting_596_);
lean_ctor_set_uint8(v_entry_600_, sizeof(void*)*1 + 1, v_isMeta_589_);
v___x_601_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_602_ = lean_box(1);
v___x_603_ = lean_box(0);
v___x_630_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_599_, v___x_601_, v_env_598_, v___x_602_, v___x_603_);
v___x_631_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v___x_630_, v_entry_600_);
if (v___x_631_ == 0)
{
lean_object* v_cls_632_; lean_object* v___x_633_; lean_object* v_a_634_; lean_object* v___y_636_; lean_object* v___y_637_; lean_object* v___y_641_; lean_object* v___y_642_; uint8_t v___x_654_; 
v_cls_632_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__7));
v___x_633_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_cls_632_, v___y_591_);
v_a_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_a_634_);
lean_dec_ref(v___x_633_);
v___x_654_ = lean_unbox(v_a_634_);
lean_dec(v_a_634_);
if (v___x_654_ == 0)
{
lean_dec(v_hint_590_);
lean_dec(v_mod_588_);
v___y_605_ = v___y_592_;
goto v___jp_604_;
}
else
{
lean_object* v___x_655_; lean_object* v___y_657_; 
v___x_655_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__14);
if (v_isExporting_596_ == 0)
{
lean_object* v___x_664_; 
v___x_664_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__19));
v___y_657_ = v___x_664_;
goto v___jp_656_;
}
else
{
lean_object* v___x_665_; 
v___x_665_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__20));
v___y_657_ = v___x_665_;
goto v___jp_656_;
}
v___jp_656_:
{
lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_658_ = l_Lean_stringToMessageData(v___y_657_);
v___x_659_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_659_, 0, v___x_655_);
lean_ctor_set(v___x_659_, 1, v___x_658_);
v___x_660_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__16);
v___x_661_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_659_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
if (v_isMeta_589_ == 0)
{
lean_object* v___x_662_; 
v___x_662_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__17));
v___y_641_ = v___x_661_;
v___y_642_ = v___x_662_;
goto v___jp_640_;
}
else
{
lean_object* v___x_663_; 
v___x_663_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__18));
v___y_641_ = v___x_661_;
v___y_642_ = v___x_663_;
goto v___jp_640_;
}
}
}
v___jp_635_:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_638_, 0, v___y_636_);
lean_ctor_set(v___x_638_, 1, v___y_637_);
v___x_639_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3(v_cls_632_, v___x_638_, v___y_591_, v___y_592_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_dec_ref(v___x_639_);
v___y_605_ = v___y_592_;
goto v___jp_604_;
}
else
{
lean_dec_ref(v_entry_600_);
return v___x_639_;
}
}
v___jp_640_:
{
lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_643_ = l_Lean_stringToMessageData(v___y_642_);
v___x_644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_644_, 0, v___y_641_);
lean_ctor_set(v___x_644_, 1, v___x_643_);
v___x_645_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__9);
v___x_646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = l_Lean_MessageData_ofName(v_mod_588_);
v___x_648_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_646_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
v___x_649_ = l_Lean_Name_isAnonymous(v_hint_590_);
if (v___x_649_ == 0)
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_650_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__11);
v___x_651_ = l_Lean_MessageData_ofName(v_hint_590_);
v___x_652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_652_, 0, v___x_650_);
lean_ctor_set(v___x_652_, 1, v___x_651_);
v___y_636_ = v___x_648_;
v___y_637_ = v___x_652_;
goto v___jp_635_;
}
else
{
lean_object* v___x_653_; 
lean_dec(v_hint_590_);
v___x_653_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__12);
v___y_636_ = v___x_648_;
v___y_637_ = v___x_653_;
goto v___jp_635_;
}
}
}
else
{
lean_object* v___x_666_; lean_object* v___x_667_; 
lean_dec_ref(v_entry_600_);
lean_dec(v_hint_590_);
lean_dec(v_mod_588_);
v___x_666_ = lean_box(0);
v___x_667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
return v___x_667_;
}
v___jp_604_:
{
lean_object* v___x_606_; lean_object* v_toEnvExtension_607_; lean_object* v_env_608_; lean_object* v_nextMacroScope_609_; lean_object* v_ngen_610_; lean_object* v_auxDeclNGen_611_; lean_object* v_traceState_612_; lean_object* v_messages_613_; lean_object* v_infoState_614_; lean_object* v_snapshotTasks_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_628_; 
v___x_606_ = lean_st_ref_take(v___y_605_);
v_toEnvExtension_607_ = lean_ctor_get(v___x_601_, 0);
lean_inc_ref(v_toEnvExtension_607_);
v_env_608_ = lean_ctor_get(v___x_606_, 0);
v_nextMacroScope_609_ = lean_ctor_get(v___x_606_, 1);
v_ngen_610_ = lean_ctor_get(v___x_606_, 2);
v_auxDeclNGen_611_ = lean_ctor_get(v___x_606_, 3);
v_traceState_612_ = lean_ctor_get(v___x_606_, 4);
v_messages_613_ = lean_ctor_get(v___x_606_, 6);
v_infoState_614_ = lean_ctor_get(v___x_606_, 7);
v_snapshotTasks_615_ = lean_ctor_get(v___x_606_, 8);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_628_ == 0)
{
lean_object* v_unused_629_; 
v_unused_629_ = lean_ctor_get(v___x_606_, 5);
lean_dec(v_unused_629_);
v___x_617_ = v___x_606_;
v_isShared_618_ = v_isSharedCheck_628_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_snapshotTasks_615_);
lean_inc(v_infoState_614_);
lean_inc(v_messages_613_);
lean_inc(v_traceState_612_);
lean_inc(v_auxDeclNGen_611_);
lean_inc(v_ngen_610_);
lean_inc(v_nextMacroScope_609_);
lean_inc(v_env_608_);
lean_dec(v___x_606_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_628_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v_asyncMode_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_623_; 
v_asyncMode_619_ = lean_ctor_get(v_toEnvExtension_607_, 2);
lean_inc(v_asyncMode_619_);
lean_dec_ref(v_toEnvExtension_607_);
v___x_620_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_601_, v_env_608_, v_entry_600_, v_asyncMode_619_, v___x_603_);
lean_dec(v_asyncMode_619_);
v___x_621_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__5);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 5, v___x_621_);
lean_ctor_set(v___x_617_, 0, v___x_620_);
v___x_623_ = v___x_617_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_620_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v_nextMacroScope_609_);
lean_ctor_set(v_reuseFailAlloc_627_, 2, v_ngen_610_);
lean_ctor_set(v_reuseFailAlloc_627_, 3, v_auxDeclNGen_611_);
lean_ctor_set(v_reuseFailAlloc_627_, 4, v_traceState_612_);
lean_ctor_set(v_reuseFailAlloc_627_, 5, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_627_, 6, v_messages_613_);
lean_ctor_set(v_reuseFailAlloc_627_, 7, v_infoState_614_);
lean_ctor_set(v_reuseFailAlloc_627_, 8, v_snapshotTasks_615_);
v___x_623_ = v_reuseFailAlloc_627_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_624_ = lean_st_ref_set(v___y_605_, v___x_623_);
v___x_625_ = lean_box(0);
v___x_626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
return v___x_626_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_mod_668_, lean_object* v_isMeta_669_, lean_object* v_hint_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_){
_start:
{
uint8_t v_isMeta_boxed_674_; lean_object* v_res_675_; 
v_isMeta_boxed_674_ = lean_unbox(v_isMeta_669_);
v_res_675_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0(v_mod_668_, v_isMeta_boxed_674_, v_hint_670_, v___y_671_, v___y_672_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__1(lean_object* v___x_676_, lean_object* v_declName_677_, lean_object* v_as_678_, size_t v_sz_679_, size_t v_i_680_, lean_object* v_b_681_, lean_object* v___y_682_, lean_object* v___y_683_){
_start:
{
uint8_t v___x_685_; 
v___x_685_ = lean_usize_dec_lt(v_i_680_, v_sz_679_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; 
lean_dec(v_declName_677_);
v___x_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_686_, 0, v_b_681_);
return v___x_686_;
}
else
{
lean_object* v___x_687_; lean_object* v_modules_688_; lean_object* v___x_689_; lean_object* v_a_690_; lean_object* v___x_691_; lean_object* v_toImport_692_; lean_object* v_module_693_; uint8_t v___x_694_; lean_object* v___x_695_; 
v___x_687_ = l_Lean_Environment_header(v___x_676_);
v_modules_688_ = lean_ctor_get(v___x_687_, 3);
lean_inc_ref(v_modules_688_);
lean_dec_ref(v___x_687_);
v___x_689_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_690_ = lean_array_uget_borrowed(v_as_678_, v_i_680_);
v___x_691_ = lean_array_get(v___x_689_, v_modules_688_, v_a_690_);
lean_dec_ref(v_modules_688_);
v_toImport_692_ = lean_ctor_get(v___x_691_, 0);
lean_inc_ref(v_toImport_692_);
lean_dec(v___x_691_);
v_module_693_ = lean_ctor_get(v_toImport_692_, 0);
lean_inc(v_module_693_);
lean_dec_ref(v_toImport_692_);
v___x_694_ = 0;
lean_inc(v_declName_677_);
v___x_695_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0(v_module_693_, v___x_694_, v_declName_677_, v___y_682_, v___y_683_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v___x_696_; size_t v___x_697_; size_t v___x_698_; 
lean_dec_ref(v___x_695_);
v___x_696_ = lean_box(0);
v___x_697_ = ((size_t)1ULL);
v___x_698_ = lean_usize_add(v_i_680_, v___x_697_);
v_i_680_ = v___x_698_;
v_b_681_ = v___x_696_;
goto _start;
}
else
{
lean_dec(v_declName_677_);
return v___x_695_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v___x_700_, lean_object* v_declName_701_, lean_object* v_as_702_, lean_object* v_sz_703_, lean_object* v_i_704_, lean_object* v_b_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
size_t v_sz_boxed_709_; size_t v_i_boxed_710_; lean_object* v_res_711_; 
v_sz_boxed_709_ = lean_unbox_usize(v_sz_703_);
lean_dec(v_sz_703_);
v_i_boxed_710_ = lean_unbox_usize(v_i_704_);
lean_dec(v_i_704_);
v_res_711_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__1(v___x_700_, v_declName_701_, v_as_702_, v_sz_boxed_709_, v_i_boxed_710_, v_b_705_, v___y_706_, v___y_707_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec_ref(v_as_702_);
lean_dec_ref(v___x_700_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6___redArg(lean_object* v_a_712_, lean_object* v_x_713_){
_start:
{
if (lean_obj_tag(v_x_713_) == 0)
{
lean_object* v___x_714_; 
v___x_714_ = lean_box(0);
return v___x_714_;
}
else
{
lean_object* v_key_715_; lean_object* v_value_716_; lean_object* v_tail_717_; uint8_t v___x_718_; 
v_key_715_ = lean_ctor_get(v_x_713_, 0);
v_value_716_ = lean_ctor_get(v_x_713_, 1);
v_tail_717_ = lean_ctor_get(v_x_713_, 2);
v___x_718_ = lean_name_eq(v_key_715_, v_a_712_);
if (v___x_718_ == 0)
{
v_x_713_ = v_tail_717_;
goto _start;
}
else
{
lean_object* v___x_720_; 
lean_inc(v_value_716_);
v___x_720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_720_, 0, v_value_716_);
return v___x_720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6___redArg___boxed(lean_object* v_a_721_, lean_object* v_x_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6___redArg(v_a_721_, v_x_722_);
lean_dec(v_x_722_);
lean_dec(v_a_721_);
return v_res_723_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_724_; uint64_t v___x_725_; 
v___x_724_ = lean_unsigned_to_nat(1723u);
v___x_725_ = lean_uint64_of_nat(v___x_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg(lean_object* v_m_726_, lean_object* v_a_727_){
_start:
{
lean_object* v_buckets_728_; lean_object* v___x_729_; uint64_t v___y_731_; 
v_buckets_728_ = lean_ctor_get(v_m_726_, 1);
v___x_729_ = lean_array_get_size(v_buckets_728_);
if (lean_obj_tag(v_a_727_) == 0)
{
uint64_t v___x_745_; 
v___x_745_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg___closed__0);
v___y_731_ = v___x_745_;
goto v___jp_730_;
}
else
{
uint64_t v_hash_746_; 
v_hash_746_ = lean_ctor_get_uint64(v_a_727_, sizeof(void*)*2);
v___y_731_ = v_hash_746_;
goto v___jp_730_;
}
v___jp_730_:
{
uint64_t v___x_732_; uint64_t v___x_733_; uint64_t v_fold_734_; uint64_t v___x_735_; uint64_t v___x_736_; uint64_t v___x_737_; size_t v___x_738_; size_t v___x_739_; size_t v___x_740_; size_t v___x_741_; size_t v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_732_ = 32ULL;
v___x_733_ = lean_uint64_shift_right(v___y_731_, v___x_732_);
v_fold_734_ = lean_uint64_xor(v___y_731_, v___x_733_);
v___x_735_ = 16ULL;
v___x_736_ = lean_uint64_shift_right(v_fold_734_, v___x_735_);
v___x_737_ = lean_uint64_xor(v_fold_734_, v___x_736_);
v___x_738_ = lean_uint64_to_usize(v___x_737_);
v___x_739_ = lean_usize_of_nat(v___x_729_);
v___x_740_ = ((size_t)1ULL);
v___x_741_ = lean_usize_sub(v___x_739_, v___x_740_);
v___x_742_ = lean_usize_land(v___x_738_, v___x_741_);
v___x_743_ = lean_array_uget_borrowed(v_buckets_728_, v___x_742_);
v___x_744_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6___redArg(v_a_727_, v___x_743_);
return v___x_744_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg___boxed(lean_object* v_m_747_, lean_object* v_a_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg(v_m_747_, v_a_748_);
lean_dec(v_a_748_);
lean_dec_ref(v_m_747_);
return v_res_749_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__2(void){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_752_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__1));
v___x_753_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__0));
v___x_754_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_753_, v___x_752_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0(lean_object* v_declName_757_, uint8_t v_isMeta_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___x_762_; lean_object* v_env_766_; lean_object* v___y_768_; lean_object* v___x_781_; 
v___x_762_ = lean_st_ref_get(v___y_760_);
v_env_766_ = lean_ctor_get(v___x_762_, 0);
lean_inc_ref(v_env_766_);
lean_dec(v___x_762_);
v___x_781_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_766_, v_declName_757_);
if (lean_obj_tag(v___x_781_) == 0)
{
lean_dec_ref(v_env_766_);
lean_dec(v_declName_757_);
goto v___jp_763_;
}
else
{
lean_object* v_val_782_; lean_object* v___x_783_; lean_object* v_modules_784_; lean_object* v___x_785_; uint8_t v___x_786_; 
v_val_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_val_782_);
lean_dec_ref(v___x_781_);
v___x_783_ = l_Lean_Environment_header(v_env_766_);
v_modules_784_ = lean_ctor_get(v___x_783_, 3);
lean_inc_ref(v_modules_784_);
lean_dec_ref(v___x_783_);
v___x_785_ = lean_array_get_size(v_modules_784_);
v___x_786_ = lean_nat_dec_lt(v_val_782_, v___x_785_);
if (v___x_786_ == 0)
{
lean_dec_ref(v_modules_784_);
lean_dec(v_val_782_);
lean_dec_ref(v_env_766_);
lean_dec(v_declName_757_);
goto v___jp_763_;
}
else
{
lean_object* v___x_787_; lean_object* v_env_788_; lean_object* v___x_789_; lean_object* v___x_790_; uint8_t v___y_792_; 
v___x_787_ = lean_st_ref_get(v___y_760_);
v_env_788_ = lean_ctor_get(v___x_787_, 0);
lean_inc_ref(v_env_788_);
lean_dec(v___x_787_);
v___x_789_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__2);
v___x_790_ = lean_array_fget(v_modules_784_, v_val_782_);
lean_dec(v_val_782_);
lean_dec_ref(v_modules_784_);
if (v_isMeta_758_ == 0)
{
lean_dec_ref(v_env_788_);
v___y_792_ = v_isMeta_758_;
goto v___jp_791_;
}
else
{
uint8_t v___x_803_; 
lean_inc(v_declName_757_);
v___x_803_ = l_Lean_isMarkedMeta(v_env_788_, v_declName_757_);
if (v___x_803_ == 0)
{
v___y_792_ = v_isMeta_758_;
goto v___jp_791_;
}
else
{
uint8_t v___x_804_; 
v___x_804_ = 0;
v___y_792_ = v___x_804_;
goto v___jp_791_;
}
}
v___jp_791_:
{
lean_object* v_toImport_793_; lean_object* v_module_794_; lean_object* v___x_795_; 
v_toImport_793_ = lean_ctor_get(v___x_790_, 0);
lean_inc_ref(v_toImport_793_);
lean_dec(v___x_790_);
v_module_794_ = lean_ctor_get(v_toImport_793_, 0);
lean_inc(v_module_794_);
lean_dec_ref(v_toImport_793_);
lean_inc(v_declName_757_);
v___x_795_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0(v_module_794_, v___y_792_, v_declName_757_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_795_) == 0)
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
lean_dec_ref(v___x_795_);
v___x_796_ = l_Lean_indirectModUseExt;
v___x_797_ = lean_box(1);
v___x_798_ = lean_box(0);
lean_inc_ref(v_env_766_);
v___x_799_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_789_, v___x_796_, v_env_766_, v___x_797_, v___x_798_);
v___x_800_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg(v___x_799_, v_declName_757_);
lean_dec(v___x_799_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v___x_801_; 
v___x_801_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___closed__3));
v___y_768_ = v___x_801_;
goto v___jp_767_;
}
else
{
lean_object* v_val_802_; 
v_val_802_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_val_802_);
lean_dec_ref(v___x_800_);
v___y_768_ = v_val_802_;
goto v___jp_767_;
}
}
else
{
lean_dec_ref(v_env_766_);
lean_dec(v_declName_757_);
return v___x_795_;
}
}
}
}
v___jp_763_:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = lean_box(0);
v___x_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
return v___x_765_;
}
v___jp_767_:
{
lean_object* v___x_769_; size_t v_sz_770_; size_t v___x_771_; lean_object* v___x_772_; 
v___x_769_ = lean_box(0);
v_sz_770_ = lean_array_size(v___y_768_);
v___x_771_ = ((size_t)0ULL);
v___x_772_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__1(v_env_766_, v_declName_757_, v___y_768_, v_sz_770_, v___x_771_, v___x_769_, v___y_759_, v___y_760_);
lean_dec_ref(v___y_768_);
lean_dec_ref(v_env_766_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; 
v_unused_780_ = lean_ctor_get(v___x_772_, 0);
lean_dec(v_unused_780_);
v___x_774_ = v___x_772_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_dec(v___x_772_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v___x_769_);
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_769_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
else
{
return v___x_772_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0___boxed(lean_object* v_declName_805_, lean_object* v_isMeta_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
uint8_t v_isMeta_boxed_810_; lean_object* v_res_811_; 
v_isMeta_boxed_810_ = lean_unbox(v_isMeta_806_);
v_res_811_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0(v_declName_805_, v_isMeta_boxed_810_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12___redArg(lean_object* v_t_812_, lean_object* v___y_813_){
_start:
{
lean_object* v___x_815_; lean_object* v_infoState_816_; uint8_t v_enabled_817_; 
v___x_815_ = lean_st_ref_get(v___y_813_);
v_infoState_816_ = lean_ctor_get(v___x_815_, 7);
lean_inc_ref(v_infoState_816_);
lean_dec(v___x_815_);
v_enabled_817_ = lean_ctor_get_uint8(v_infoState_816_, sizeof(void*)*3);
lean_dec_ref(v_infoState_816_);
if (v_enabled_817_ == 0)
{
lean_object* v___x_818_; lean_object* v___x_819_; 
lean_dec_ref(v_t_812_);
v___x_818_ = lean_box(0);
v___x_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_819_, 0, v___x_818_);
return v___x_819_;
}
else
{
lean_object* v___x_820_; lean_object* v_infoState_821_; lean_object* v_env_822_; lean_object* v_nextMacroScope_823_; lean_object* v_ngen_824_; lean_object* v_auxDeclNGen_825_; lean_object* v_traceState_826_; lean_object* v_cache_827_; lean_object* v_messages_828_; lean_object* v_snapshotTasks_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_851_; 
v___x_820_ = lean_st_ref_take(v___y_813_);
v_infoState_821_ = lean_ctor_get(v___x_820_, 7);
v_env_822_ = lean_ctor_get(v___x_820_, 0);
v_nextMacroScope_823_ = lean_ctor_get(v___x_820_, 1);
v_ngen_824_ = lean_ctor_get(v___x_820_, 2);
v_auxDeclNGen_825_ = lean_ctor_get(v___x_820_, 3);
v_traceState_826_ = lean_ctor_get(v___x_820_, 4);
v_cache_827_ = lean_ctor_get(v___x_820_, 5);
v_messages_828_ = lean_ctor_get(v___x_820_, 6);
v_snapshotTasks_829_ = lean_ctor_get(v___x_820_, 8);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_851_ == 0)
{
v___x_831_ = v___x_820_;
v_isShared_832_ = v_isSharedCheck_851_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_snapshotTasks_829_);
lean_inc(v_infoState_821_);
lean_inc(v_messages_828_);
lean_inc(v_cache_827_);
lean_inc(v_traceState_826_);
lean_inc(v_auxDeclNGen_825_);
lean_inc(v_ngen_824_);
lean_inc(v_nextMacroScope_823_);
lean_inc(v_env_822_);
lean_dec(v___x_820_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_851_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
uint8_t v_enabled_833_; lean_object* v_assignment_834_; lean_object* v_lazyAssignment_835_; lean_object* v_trees_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_850_; 
v_enabled_833_ = lean_ctor_get_uint8(v_infoState_821_, sizeof(void*)*3);
v_assignment_834_ = lean_ctor_get(v_infoState_821_, 0);
v_lazyAssignment_835_ = lean_ctor_get(v_infoState_821_, 1);
v_trees_836_ = lean_ctor_get(v_infoState_821_, 2);
v_isSharedCheck_850_ = !lean_is_exclusive(v_infoState_821_);
if (v_isSharedCheck_850_ == 0)
{
v___x_838_ = v_infoState_821_;
v_isShared_839_ = v_isSharedCheck_850_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_trees_836_);
lean_inc(v_lazyAssignment_835_);
lean_inc(v_assignment_834_);
lean_dec(v_infoState_821_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_850_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_840_ = l_Lean_PersistentArray_push___redArg(v_trees_836_, v_t_812_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 2, v___x_840_);
v___x_842_ = v___x_838_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_assignment_834_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_lazyAssignment_835_);
lean_ctor_set(v_reuseFailAlloc_849_, 2, v___x_840_);
lean_ctor_set_uint8(v_reuseFailAlloc_849_, sizeof(void*)*3, v_enabled_833_);
v___x_842_ = v_reuseFailAlloc_849_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
lean_object* v___x_844_; 
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 7, v___x_842_);
v___x_844_ = v___x_831_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_env_822_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v_nextMacroScope_823_);
lean_ctor_set(v_reuseFailAlloc_848_, 2, v_ngen_824_);
lean_ctor_set(v_reuseFailAlloc_848_, 3, v_auxDeclNGen_825_);
lean_ctor_set(v_reuseFailAlloc_848_, 4, v_traceState_826_);
lean_ctor_set(v_reuseFailAlloc_848_, 5, v_cache_827_);
lean_ctor_set(v_reuseFailAlloc_848_, 6, v_messages_828_);
lean_ctor_set(v_reuseFailAlloc_848_, 7, v___x_842_);
lean_ctor_set(v_reuseFailAlloc_848_, 8, v_snapshotTasks_829_);
v___x_844_ = v_reuseFailAlloc_848_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_845_ = lean_st_ref_set(v___y_813_, v___x_844_);
v___x_846_ = lean_box(0);
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
return v___x_847_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12___redArg___boxed(lean_object* v_t_852_, lean_object* v___y_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12___redArg(v_t_852_, v___y_853_);
lean_dec(v___y_853_);
return v_res_855_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_856_ = lean_unsigned_to_nat(32u);
v___x_857_ = lean_mk_empty_array_with_capacity(v___x_856_);
v___x_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_858_, 0, v___x_857_);
return v___x_858_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__1(void){
_start:
{
size_t v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_859_ = ((size_t)5ULL);
v___x_860_ = lean_unsigned_to_nat(0u);
v___x_861_ = lean_unsigned_to_nat(32u);
v___x_862_ = lean_mk_empty_array_with_capacity(v___x_861_);
v___x_863_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__0);
v___x_864_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_864_, 0, v___x_863_);
lean_ctor_set(v___x_864_, 1, v___x_862_);
lean_ctor_set(v___x_864_, 2, v___x_860_);
lean_ctor_set(v___x_864_, 3, v___x_860_);
lean_ctor_set_usize(v___x_864_, 4, v___x_859_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5(lean_object* v_t_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v___x_869_; lean_object* v_infoState_870_; uint8_t v_enabled_871_; 
v___x_869_ = lean_st_ref_get(v___y_867_);
v_infoState_870_ = lean_ctor_get(v___x_869_, 7);
lean_inc_ref(v_infoState_870_);
lean_dec(v___x_869_);
v_enabled_871_ = lean_ctor_get_uint8(v_infoState_870_, sizeof(void*)*3);
lean_dec_ref(v_infoState_870_);
if (v_enabled_871_ == 0)
{
lean_object* v___x_872_; lean_object* v___x_873_; 
lean_dec_ref(v_t_865_);
v___x_872_ = lean_box(0);
v___x_873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_873_, 0, v___x_872_);
return v___x_873_;
}
else
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_874_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___closed__1);
v___x_875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_875_, 0, v_t_865_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12___redArg(v___x_875_, v___y_867_);
return v___x_876_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5___boxed(lean_object* v_t_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5(v_t_877_, v___y_878_, v___y_879_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__10(lean_object* v_a_882_, lean_object* v_a_883_){
_start:
{
if (lean_obj_tag(v_a_882_) == 0)
{
lean_object* v___x_884_; 
v___x_884_ = l_List_reverse___redArg(v_a_883_);
return v___x_884_;
}
else
{
lean_object* v_head_885_; lean_object* v_tail_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_895_; 
v_head_885_ = lean_ctor_get(v_a_882_, 0);
v_tail_886_ = lean_ctor_get(v_a_882_, 1);
v_isSharedCheck_895_ = !lean_is_exclusive(v_a_882_);
if (v_isSharedCheck_895_ == 0)
{
v___x_888_ = v_a_882_;
v_isShared_889_ = v_isSharedCheck_895_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_tail_886_);
lean_inc(v_head_885_);
lean_dec(v_a_882_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_895_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_890_; lean_object* v___x_892_; 
v___x_890_ = l_Lean_mkLevelParam(v_head_885_);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 1, v_a_883_);
lean_ctor_set(v___x_888_, 0, v___x_890_);
v___x_892_ = v___x_888_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v___x_890_);
lean_ctor_set(v_reuseFailAlloc_894_, 1, v_a_883_);
v___x_892_ = v_reuseFailAlloc_894_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
v_a_882_ = v_tail_886_;
v_a_883_ = v___x_892_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22___redArg(lean_object* v_msg_896_, lean_object* v___y_897_, lean_object* v___y_898_){
_start:
{
lean_object* v_ref_900_; lean_object* v___x_901_; lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_910_; 
v_ref_900_ = lean_ctor_get(v___y_897_, 5);
v___x_901_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6(v_msg_896_, v___y_897_, v___y_898_);
v_a_902_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_910_ == 0)
{
v___x_904_ = v___x_901_;
v_isShared_905_ = v_isSharedCheck_910_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_901_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_910_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_906_; lean_object* v___x_908_; 
lean_inc(v_ref_900_);
v___x_906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_906_, 0, v_ref_900_);
lean_ctor_set(v___x_906_, 1, v_a_902_);
if (v_isShared_905_ == 0)
{
lean_ctor_set_tag(v___x_904_, 1);
lean_ctor_set(v___x_904_, 0, v___x_906_);
v___x_908_ = v___x_904_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_906_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22___redArg___boxed(lean_object* v_msg_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22___redArg(v_msg_911_, v___y_912_, v___y_913_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20___redArg(lean_object* v_ref_916_, lean_object* v_msg_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v_fileName_921_; lean_object* v_fileMap_922_; lean_object* v_options_923_; lean_object* v_currRecDepth_924_; lean_object* v_maxRecDepth_925_; lean_object* v_ref_926_; lean_object* v_currNamespace_927_; lean_object* v_openDecls_928_; lean_object* v_initHeartbeats_929_; lean_object* v_maxHeartbeats_930_; lean_object* v_quotContext_931_; lean_object* v_currMacroScope_932_; uint8_t v_diag_933_; lean_object* v_cancelTk_x3f_934_; uint8_t v_suppressElabErrors_935_; lean_object* v_inheritedTraceOptions_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_945_; 
v_fileName_921_ = lean_ctor_get(v___y_918_, 0);
v_fileMap_922_ = lean_ctor_get(v___y_918_, 1);
v_options_923_ = lean_ctor_get(v___y_918_, 2);
v_currRecDepth_924_ = lean_ctor_get(v___y_918_, 3);
v_maxRecDepth_925_ = lean_ctor_get(v___y_918_, 4);
v_ref_926_ = lean_ctor_get(v___y_918_, 5);
v_currNamespace_927_ = lean_ctor_get(v___y_918_, 6);
v_openDecls_928_ = lean_ctor_get(v___y_918_, 7);
v_initHeartbeats_929_ = lean_ctor_get(v___y_918_, 8);
v_maxHeartbeats_930_ = lean_ctor_get(v___y_918_, 9);
v_quotContext_931_ = lean_ctor_get(v___y_918_, 10);
v_currMacroScope_932_ = lean_ctor_get(v___y_918_, 11);
v_diag_933_ = lean_ctor_get_uint8(v___y_918_, sizeof(void*)*14);
v_cancelTk_x3f_934_ = lean_ctor_get(v___y_918_, 12);
v_suppressElabErrors_935_ = lean_ctor_get_uint8(v___y_918_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_936_ = lean_ctor_get(v___y_918_, 13);
v_isSharedCheck_945_ = !lean_is_exclusive(v___y_918_);
if (v_isSharedCheck_945_ == 0)
{
v___x_938_ = v___y_918_;
v_isShared_939_ = v_isSharedCheck_945_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_inheritedTraceOptions_936_);
lean_inc(v_cancelTk_x3f_934_);
lean_inc(v_currMacroScope_932_);
lean_inc(v_quotContext_931_);
lean_inc(v_maxHeartbeats_930_);
lean_inc(v_initHeartbeats_929_);
lean_inc(v_openDecls_928_);
lean_inc(v_currNamespace_927_);
lean_inc(v_ref_926_);
lean_inc(v_maxRecDepth_925_);
lean_inc(v_currRecDepth_924_);
lean_inc(v_options_923_);
lean_inc(v_fileMap_922_);
lean_inc(v_fileName_921_);
lean_dec(v___y_918_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_945_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v_ref_940_; lean_object* v___x_942_; 
v_ref_940_ = l_Lean_replaceRef(v_ref_916_, v_ref_926_);
lean_dec(v_ref_926_);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 5, v_ref_940_);
v___x_942_ = v___x_938_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_fileName_921_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v_fileMap_922_);
lean_ctor_set(v_reuseFailAlloc_944_, 2, v_options_923_);
lean_ctor_set(v_reuseFailAlloc_944_, 3, v_currRecDepth_924_);
lean_ctor_set(v_reuseFailAlloc_944_, 4, v_maxRecDepth_925_);
lean_ctor_set(v_reuseFailAlloc_944_, 5, v_ref_940_);
lean_ctor_set(v_reuseFailAlloc_944_, 6, v_currNamespace_927_);
lean_ctor_set(v_reuseFailAlloc_944_, 7, v_openDecls_928_);
lean_ctor_set(v_reuseFailAlloc_944_, 8, v_initHeartbeats_929_);
lean_ctor_set(v_reuseFailAlloc_944_, 9, v_maxHeartbeats_930_);
lean_ctor_set(v_reuseFailAlloc_944_, 10, v_quotContext_931_);
lean_ctor_set(v_reuseFailAlloc_944_, 11, v_currMacroScope_932_);
lean_ctor_set(v_reuseFailAlloc_944_, 12, v_cancelTk_x3f_934_);
lean_ctor_set(v_reuseFailAlloc_944_, 13, v_inheritedTraceOptions_936_);
lean_ctor_set_uint8(v_reuseFailAlloc_944_, sizeof(void*)*14, v_diag_933_);
lean_ctor_set_uint8(v_reuseFailAlloc_944_, sizeof(void*)*14 + 1, v_suppressElabErrors_935_);
v___x_942_ = v_reuseFailAlloc_944_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
lean_object* v___x_943_; 
v___x_943_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22___redArg(v_msg_917_, v___x_942_, v___y_919_);
lean_dec_ref(v___x_942_);
return v___x_943_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20___redArg___boxed(lean_object* v_ref_946_, lean_object* v_msg_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20___redArg(v_ref_946_, v_msg_947_, v___y_948_, v___y_949_);
lean_dec(v___y_949_);
lean_dec(v_ref_946_);
return v_res_951_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__0));
v___x_954_ = l_Lean_stringToMessageData(v___x_953_);
return v___x_954_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__3(void){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_956_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__2));
v___x_957_ = l_Lean_stringToMessageData(v___x_956_);
return v___x_957_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__5(void){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; 
v___x_959_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__4));
v___x_960_ = l_Lean_stringToMessageData(v___x_959_);
return v___x_960_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__7(void){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__6));
v___x_963_ = l_Lean_stringToMessageData(v___x_962_);
return v___x_963_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__9(void){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__8));
v___x_966_ = l_Lean_stringToMessageData(v___x_965_);
return v___x_966_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__11(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__10));
v___x_969_ = l_Lean_stringToMessageData(v___x_968_);
return v___x_969_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__13(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_971_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__12));
v___x_972_ = l_Lean_stringToMessageData(v___x_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg(lean_object* v_msg_973_, lean_object* v_declHint_974_, lean_object* v___y_975_){
_start:
{
lean_object* v___x_977_; lean_object* v_env_978_; uint8_t v___x_979_; 
v___x_977_ = lean_st_ref_get(v___y_975_);
v_env_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc_ref(v_env_978_);
lean_dec(v___x_977_);
v___x_979_ = l_Lean_Name_isAnonymous(v_declHint_974_);
if (v___x_979_ == 0)
{
uint8_t v_isExporting_980_; 
v_isExporting_980_ = lean_ctor_get_uint8(v_env_978_, sizeof(void*)*8);
if (v_isExporting_980_ == 0)
{
lean_object* v___x_981_; 
lean_dec_ref(v_env_978_);
lean_dec(v_declHint_974_);
v___x_981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_981_, 0, v_msg_973_);
return v___x_981_;
}
else
{
lean_object* v___x_982_; uint8_t v___x_983_; 
lean_inc_ref(v_env_978_);
v___x_982_ = l_Lean_Environment_setExporting(v_env_978_, v___x_979_);
lean_inc(v_declHint_974_);
lean_inc_ref(v___x_982_);
v___x_983_ = l_Lean_Environment_contains(v___x_982_, v_declHint_974_, v_isExporting_980_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; 
lean_dec_ref(v___x_982_);
lean_dec_ref(v_env_978_);
lean_dec(v_declHint_974_);
v___x_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_984_, 0, v_msg_973_);
return v___x_984_;
}
else
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v_c_990_; lean_object* v___x_991_; 
v___x_985_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__2);
v___x_986_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3_spec__6___closed__5);
v___x_987_ = l_Lean_Options_empty;
v___x_988_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_988_, 0, v___x_982_);
lean_ctor_set(v___x_988_, 1, v___x_985_);
lean_ctor_set(v___x_988_, 2, v___x_986_);
lean_ctor_set(v___x_988_, 3, v___x_987_);
lean_inc(v_declHint_974_);
v___x_989_ = l_Lean_MessageData_ofConstName(v_declHint_974_, v___x_979_);
v_c_990_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_990_, 0, v___x_988_);
lean_ctor_set(v_c_990_, 1, v___x_989_);
v___x_991_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_978_, v_declHint_974_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
lean_dec_ref(v_env_978_);
lean_dec(v_declHint_974_);
v___x_992_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__1);
v___x_993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
lean_ctor_set(v___x_993_, 1, v_c_990_);
v___x_994_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__3);
v___x_995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_995_, 0, v___x_993_);
lean_ctor_set(v___x_995_, 1, v___x_994_);
v___x_996_ = l_Lean_MessageData_note(v___x_995_);
v___x_997_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_997_, 0, v_msg_973_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_998_, 0, v___x_997_);
return v___x_998_;
}
else
{
lean_object* v_val_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1034_; 
v_val_999_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1001_ = v___x_991_;
v_isShared_1002_ = v_isSharedCheck_1034_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_val_999_);
lean_dec(v___x_991_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1034_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v_mod_1006_; uint8_t v___x_1007_; 
v___x_1003_ = lean_box(0);
v___x_1004_ = l_Lean_Environment_header(v_env_978_);
lean_dec_ref(v_env_978_);
v___x_1005_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1004_);
v_mod_1006_ = lean_array_get(v___x_1003_, v___x_1005_, v_val_999_);
lean_dec(v_val_999_);
lean_dec_ref(v___x_1005_);
v___x_1007_ = l_Lean_isPrivateName(v_declHint_974_);
lean_dec(v_declHint_974_);
if (v___x_1007_ == 0)
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1019_; 
v___x_1008_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__5);
v___x_1009_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
lean_ctor_set(v___x_1009_, 1, v_c_990_);
v___x_1010_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__7);
v___x_1011_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = l_Lean_MessageData_ofName(v_mod_1006_);
v___x_1013_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1011_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__9);
v___x_1015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = l_Lean_MessageData_note(v___x_1015_);
v___x_1017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1017_, 0, v_msg_973_);
lean_ctor_set(v___x_1017_, 1, v___x_1016_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set_tag(v___x_1001_, 0);
lean_ctor_set(v___x_1001_, 0, v___x_1017_);
v___x_1019_ = v___x_1001_;
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
else
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1032_; 
v___x_1021_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__1);
v___x_1022_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
lean_ctor_set(v___x_1022_, 1, v_c_990_);
v___x_1023_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__11);
v___x_1024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___x_1025_ = l_Lean_MessageData_ofName(v_mod_1006_);
v___x_1026_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___closed__13);
v___x_1028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1026_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = l_Lean_MessageData_note(v___x_1028_);
v___x_1030_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1030_, 0, v_msg_973_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set_tag(v___x_1001_, 0);
lean_ctor_set(v___x_1001_, 0, v___x_1030_);
v___x_1032_ = v___x_1001_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___x_1030_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1035_; 
lean_dec_ref(v_env_978_);
lean_dec(v_declHint_974_);
v___x_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1035_, 0, v_msg_973_);
return v___x_1035_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg___boxed(lean_object* v_msg_1036_, lean_object* v_declHint_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg(v_msg_1036_, v_declHint_1037_, v___y_1038_);
lean_dec(v___y_1038_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19(lean_object* v_msg_1041_, lean_object* v_declHint_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v___x_1046_; lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1056_; 
v___x_1046_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg(v_msg_1041_, v_declHint_1042_, v___y_1044_);
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1049_ = v___x_1046_;
v_isShared_1050_ = v_isSharedCheck_1056_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1046_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1056_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1051_ = l_Lean_unknownIdentifierMessageTag;
v___x_1052_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
lean_ctor_set(v___x_1052_, 1, v_a_1047_);
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 0, v___x_1052_);
v___x_1054_ = v___x_1049_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1052_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19___boxed(lean_object* v_msg_1057_, lean_object* v_declHint_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19(v_msg_1057_, v_declHint_1058_, v___y_1059_, v___y_1060_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18___redArg(lean_object* v_ref_1063_, lean_object* v_msg_1064_, lean_object* v_declHint_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v___x_1069_; lean_object* v_a_1070_; lean_object* v___x_1071_; 
v___x_1069_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19(v_msg_1064_, v_declHint_1065_, v___y_1066_, v___y_1067_);
v_a_1070_ = lean_ctor_get(v___x_1069_, 0);
lean_inc(v_a_1070_);
lean_dec_ref(v___x_1069_);
v___x_1071_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20___redArg(v_ref_1063_, v_a_1070_, v___y_1066_, v___y_1067_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18___redArg___boxed(lean_object* v_ref_1072_, lean_object* v_msg_1073_, lean_object* v_declHint_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18___redArg(v_ref_1072_, v_msg_1073_, v_declHint_1074_, v___y_1075_, v___y_1076_);
lean_dec(v___y_1076_);
lean_dec(v_ref_1072_);
return v_res_1078_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__0));
v___x_1081_ = l_Lean_stringToMessageData(v___x_1080_);
return v___x_1081_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__2));
v___x_1084_ = l_Lean_stringToMessageData(v___x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg(lean_object* v_ref_1085_, lean_object* v_constName_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v___x_1090_; uint8_t v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1090_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__1);
v___x_1091_ = 0;
lean_inc(v_constName_1086_);
v___x_1092_ = l_Lean_MessageData_ofConstName(v_constName_1086_, v___x_1091_);
v___x_1093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1090_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__3);
v___x_1095_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1093_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
v___x_1096_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18___redArg(v_ref_1085_, v___x_1095_, v_constName_1086_, v___y_1087_, v___y_1088_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___boxed(lean_object* v_ref_1097_, lean_object* v_constName_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg(v_ref_1097_, v_constName_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec(v_ref_1097_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12___redArg(lean_object* v_constName_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_){
_start:
{
lean_object* v_ref_1107_; lean_object* v___x_1108_; 
v_ref_1107_ = lean_ctor_get(v___y_1104_, 5);
lean_inc(v_ref_1107_);
v___x_1108_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg(v_ref_1107_, v_constName_1103_, v___y_1104_, v___y_1105_);
lean_dec(v_ref_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12___redArg___boxed(lean_object* v_constName_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12___redArg(v_constName_1109_, v___y_1110_, v___y_1111_);
lean_dec(v___y_1111_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9(lean_object* v_constName_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v___x_1118_; lean_object* v_env_1119_; uint8_t v___x_1120_; lean_object* v___x_1121_; 
v___x_1118_ = lean_st_ref_get(v___y_1116_);
v_env_1119_ = lean_ctor_get(v___x_1118_, 0);
lean_inc_ref(v_env_1119_);
lean_dec(v___x_1118_);
v___x_1120_ = 0;
lean_inc(v_constName_1114_);
v___x_1121_ = l_Lean_Environment_findConstVal_x3f(v_env_1119_, v_constName_1114_, v___x_1120_);
if (lean_obj_tag(v___x_1121_) == 0)
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12___redArg(v_constName_1114_, v___y_1115_, v___y_1116_);
return v___x_1122_;
}
else
{
lean_object* v_val_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec_ref(v___y_1115_);
lean_dec(v_constName_1114_);
v_val_1123_ = lean_ctor_get(v___x_1121_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1121_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1121_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_val_1123_);
lean_dec(v___x_1121_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
lean_ctor_set_tag(v___x_1125_, 0);
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_val_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9___boxed(lean_object* v_constName_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9(v_constName_1131_, v___y_1132_, v___y_1133_);
lean_dec(v___y_1133_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4(lean_object* v_constName_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v___x_1140_; 
lean_inc(v_constName_1136_);
v___x_1140_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9(v_constName_1136_, v___y_1137_, v___y_1138_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1152_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1143_ = v___x_1140_;
v_isShared_1144_ = v_isSharedCheck_1152_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1140_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1152_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v_levelParams_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1150_; 
v_levelParams_1145_ = lean_ctor_get(v_a_1141_, 1);
lean_inc(v_levelParams_1145_);
lean_dec(v_a_1141_);
v___x_1146_ = lean_box(0);
v___x_1147_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__10(v_levelParams_1145_, v___x_1146_);
v___x_1148_ = l_Lean_mkConst(v_constName_1136_, v___x_1147_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v___x_1148_);
v___x_1150_ = v___x_1143_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
else
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
lean_dec(v_constName_1136_);
v_a_1153_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1140_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1140_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4___boxed(lean_object* v_constName_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4(v_constName_1161_, v___y_1162_, v___y_1163_);
lean_dec(v___y_1163_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1(lean_object* v_stx_1166_, lean_object* v_n_1167_, lean_object* v_expectedType_x3f_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v___x_1172_; 
lean_inc_ref(v___y_1169_);
v___x_1172_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4(v_n_1167_, v___y_1169_, v___y_1170_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; uint8_t v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref(v___x_1172_);
v___x_1174_ = lean_box(0);
v___x_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1174_);
lean_ctor_set(v___x_1175_, 1, v_stx_1166_);
v___x_1176_ = l_Lean_LocalContext_empty;
v___x_1177_ = 0;
v___x_1178_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1178_, 0, v___x_1175_);
lean_ctor_set(v___x_1178_, 1, v___x_1176_);
lean_ctor_set(v___x_1178_, 2, v_expectedType_x3f_1168_);
lean_ctor_set(v___x_1178_, 3, v_a_1173_);
lean_ctor_set_uint8(v___x_1178_, sizeof(void*)*4, v___x_1177_);
lean_ctor_set_uint8(v___x_1178_, sizeof(void*)*4 + 1, v___x_1177_);
v___x_1179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
v___x_1180_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5(v___x_1179_, v___y_1169_, v___y_1170_);
lean_dec_ref(v___y_1169_);
return v___x_1180_;
}
else
{
lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1188_; 
lean_dec_ref(v___y_1169_);
lean_dec(v_expectedType_x3f_1168_);
lean_dec(v_stx_1166_);
v_a_1181_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1183_ = v___x_1172_;
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1172_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1186_; 
if (v_isShared_1184_ == 0)
{
v___x_1186_ = v___x_1183_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_a_1181_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1___boxed(lean_object* v_stx_1189_, lean_object* v_n_1190_, lean_object* v_expectedType_x3f_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1(v_stx_1189_, v_n_1190_, v_expectedType_x3f_1191_, v___y_1192_, v___y_1193_);
lean_dec(v___y_1193_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_(uint8_t v_x_1199_, lean_object* v_stx_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v___x_1204_; 
lean_inc_ref(v___y_1201_);
v___x_1204_ = l_Lean_Attribute_Builtin_getIdent(v_stx_1200_, v___y_1201_, v___y_1202_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1258_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1258_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1258_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; lean_object* v_infoState_1210_; uint8_t v_enabled_1211_; lean_object* v___x_1212_; 
v___x_1209_ = lean_st_ref_get(v___y_1202_);
v_infoState_1210_ = lean_ctor_get(v___x_1209_, 7);
lean_inc_ref(v_infoState_1210_);
lean_dec(v___x_1209_);
v_enabled_1211_ = lean_ctor_get_uint8(v_infoState_1210_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1210_);
v___x_1212_ = l_Lean_Syntax_getId(v_a_1205_);
if (v_enabled_1211_ == 0)
{
lean_object* v___x_1214_; 
lean_dec(v_a_1205_);
lean_dec_ref(v___y_1201_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v___x_1212_);
v___x_1214_ = v___x_1207_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1212_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
else
{
lean_object* v___x_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
v___x_1216_ = l_Lean_Name_getRoot(v___x_1212_);
v___x_1217_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
v___x_1218_ = lean_name_eq(v___x_1216_, v___x_1217_);
lean_dec(v___x_1216_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1220_; 
lean_dec(v_a_1205_);
lean_dec_ref(v___y_1201_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v___x_1212_);
v___x_1220_ = v___x_1207_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1212_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
else
{
lean_object* v___x_1222_; lean_object* v_env_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; uint8_t v___x_1226_; 
v___x_1222_ = lean_st_ref_get(v___y_1202_);
v_env_1223_ = lean_ctor_get(v___x_1222_, 0);
lean_inc_ref(v_env_1223_);
lean_dec(v___x_1222_);
v___x_1224_ = lean_box(0);
lean_inc(v___x_1212_);
v___x_1225_ = l_Lean_Name_replacePrefix(v___x_1212_, v___x_1217_, v___x_1224_);
lean_inc(v___x_1225_);
v___x_1226_ = l_Lean_Environment_contains(v_env_1223_, v___x_1225_, v_enabled_1211_);
if (v___x_1226_ == 0)
{
lean_object* v___x_1228_; 
lean_dec(v___x_1225_);
lean_dec(v_a_1205_);
lean_dec_ref(v___y_1201_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set(v___x_1207_, 0, v___x_1212_);
v___x_1228_ = v___x_1207_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v___x_1212_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
else
{
uint8_t v___x_1230_; lean_object* v___x_1231_; 
lean_del_object(v___x_1207_);
v___x_1230_ = 0;
lean_inc(v___x_1225_);
v___x_1231_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0(v___x_1225_, v___x_1230_, v___y_1201_, v___y_1202_);
if (lean_obj_tag(v___x_1231_) == 0)
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
lean_dec_ref(v___x_1231_);
v___x_1232_ = lean_box(0);
v___x_1233_ = l_Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1(v_a_1205_, v___x_1225_, v___x_1232_, v___y_1201_, v___y_1202_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1240_ == 0)
{
lean_object* v_unused_1241_; 
v_unused_1241_ = lean_ctor_get(v___x_1233_, 0);
lean_dec(v_unused_1241_);
v___x_1235_ = v___x_1233_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_dec(v___x_1233_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 0, v___x_1212_);
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1212_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1249_; 
lean_dec(v___x_1212_);
v_a_1242_ = lean_ctor_get(v___x_1233_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1233_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1244_ = v___x_1233_;
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1233_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1247_; 
if (v_isShared_1245_ == 0)
{
v___x_1247_ = v___x_1244_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_a_1242_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
}
else
{
lean_object* v_a_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1257_; 
lean_dec(v___x_1225_);
lean_dec(v___x_1212_);
lean_dec(v_a_1205_);
lean_dec_ref(v___y_1201_);
v_a_1250_ = lean_ctor_get(v___x_1231_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1231_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1252_ = v___x_1231_;
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_a_1250_);
lean_dec(v___x_1231_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1257_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1255_; 
if (v_isShared_1253_ == 0)
{
v___x_1255_ = v___x_1252_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v_a_1250_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
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
lean_object* v_a_1259_; lean_object* v___x_1261_; uint8_t v_isShared_1262_; uint8_t v_isSharedCheck_1266_; 
lean_dec_ref(v___y_1201_);
v_a_1259_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1266_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1261_ = v___x_1204_;
v_isShared_1262_ = v_isSharedCheck_1266_;
goto v_resetjp_1260_;
}
else
{
lean_inc(v_a_1259_);
lean_dec(v___x_1204_);
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
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2____boxed(lean_object* v_x_1267_, lean_object* v_stx_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
uint8_t v_x_8376__boxed_1272_; lean_object* v_res_1273_; 
v_x_8376__boxed_1272_ = lean_unbox(v_x_1267_);
v_res_1273_ = l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_(v_x_8376__boxed_1272_, v_stx_1268_, v___y_1269_, v___y_1270_);
lean_dec(v___y_1270_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__12_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
v___x_1307_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
v___x_1308_ = l_Lean_KeyedDeclsAttribute_init___redArg(v___x_1306_, v___x_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2____boxed(lean_object* v_a_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_();
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object* v_cls_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_){
_start:
{
lean_object* v___x_1315_; 
v___x_1315_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_cls_1311_, v___y_1312_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object* v_cls_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2(v_cls_1316_, v___y_1317_, v___y_1318_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_00_u03b2_1321_, lean_object* v_m_1322_, lean_object* v_a_1323_){
_start:
{
lean_object* v___x_1324_; 
v___x_1324_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___redArg(v_m_1322_, v_a_1323_);
return v___x_1324_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2___boxed(lean_object* v_00_u03b2_1325_, lean_object* v_m_1326_, lean_object* v_a_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2(v_00_u03b2_1325_, v_m_1326_, v_a_1327_);
lean_dec(v_a_1327_);
lean_dec_ref(v_m_1326_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12(lean_object* v_t_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12___redArg(v_t_1329_, v___y_1331_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12___boxed(lean_object* v_t_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__5_spec__12(v_t_1334_, v___y_1335_, v___y_1336_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
return v_res_1338_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1339_, lean_object* v_x_1340_, lean_object* v_x_1341_){
_start:
{
uint8_t v___x_1342_; 
v___x_1342_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_x_1340_, v_x_1341_);
return v___x_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1343_, lean_object* v_x_1344_, lean_object* v_x_1345_){
_start:
{
uint8_t v_res_1346_; lean_object* v_r_1347_; 
v_res_1346_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b2_1343_, v_x_1344_, v_x_1345_);
lean_dec_ref(v_x_1345_);
v_r_1347_ = lean_box(v_res_1346_);
return v_r_1347_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6(lean_object* v_00_u03b2_1348_, lean_object* v_a_1349_, lean_object* v_x_1350_){
_start:
{
lean_object* v___x_1351_; 
v___x_1351_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6___redArg(v_a_1349_, v_x_1350_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6___boxed(lean_object* v_00_u03b2_1352_, lean_object* v_a_1353_, lean_object* v_x_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__2_spec__6(v_00_u03b2_1352_, v_a_1353_, v_x_1354_);
lean_dec(v_x_1354_);
lean_dec(v_a_1353_);
return v_res_1355_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1356_, lean_object* v_x_1357_, size_t v_x_1358_, lean_object* v_x_1359_){
_start:
{
uint8_t v___x_1360_; 
v___x_1360_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___redArg(v_x_1357_, v_x_1358_, v_x_1359_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1361_, lean_object* v_x_1362_, lean_object* v_x_1363_, lean_object* v_x_1364_){
_start:
{
size_t v_x_8653__boxed_1365_; uint8_t v_res_1366_; lean_object* v_r_1367_; 
v_x_8653__boxed_1365_ = lean_unbox_usize(v_x_1363_);
lean_dec(v_x_1363_);
v_res_1366_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3(v_00_u03b2_1361_, v_x_1362_, v_x_8653__boxed_1365_, v_x_1364_);
lean_dec_ref(v_x_1364_);
v_r_1367_ = lean_box(v_res_1366_);
return v_r_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12(lean_object* v_00_u03b1_1368_, lean_object* v_constName_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12___redArg(v_constName_1369_, v___y_1370_, v___y_1371_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12___boxed(lean_object* v_00_u03b1_1374_, lean_object* v_constName_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12(v_00_u03b1_1374_, v_constName_1375_, v___y_1376_, v___y_1377_);
lean_dec(v___y_1377_);
return v_res_1379_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10(lean_object* v_00_u03b2_1380_, lean_object* v_keys_1381_, lean_object* v_vals_1382_, lean_object* v_heq_1383_, lean_object* v_i_1384_, lean_object* v_k_1385_){
_start:
{
uint8_t v___x_1386_; 
v___x_1386_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10___redArg(v_keys_1381_, v_i_1384_, v_k_1385_);
return v___x_1386_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10___boxed(lean_object* v_00_u03b2_1387_, lean_object* v_keys_1388_, lean_object* v_vals_1389_, lean_object* v_heq_1390_, lean_object* v_i_1391_, lean_object* v_k_1392_){
_start:
{
uint8_t v_res_1393_; lean_object* v_r_1394_; 
v_res_1393_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__3_spec__10(v_00_u03b2_1387_, v_keys_1388_, v_vals_1389_, v_heq_1390_, v_i_1391_, v_k_1392_);
lean_dec_ref(v_k_1392_);
lean_dec_ref(v_vals_1389_);
lean_dec_ref(v_keys_1388_);
v_r_1394_ = lean_box(v_res_1393_);
return v_r_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16(lean_object* v_00_u03b1_1395_, lean_object* v_ref_1396_, lean_object* v_constName_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_){
_start:
{
lean_object* v___x_1401_; 
v___x_1401_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg(v_ref_1396_, v_constName_1397_, v___y_1398_, v___y_1399_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___boxed(lean_object* v_00_u03b1_1402_, lean_object* v_ref_1403_, lean_object* v_constName_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16(v_00_u03b1_1402_, v_ref_1403_, v_constName_1404_, v___y_1405_, v___y_1406_);
lean_dec(v___y_1406_);
lean_dec(v_ref_1403_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18(lean_object* v_00_u03b1_1409_, lean_object* v_ref_1410_, lean_object* v_msg_1411_, lean_object* v_declHint_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18___redArg(v_ref_1410_, v_msg_1411_, v_declHint_1412_, v___y_1413_, v___y_1414_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18___boxed(lean_object* v_00_u03b1_1417_, lean_object* v_ref_1418_, lean_object* v_msg_1419_, lean_object* v_declHint_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18(v_00_u03b1_1417_, v_ref_1418_, v_msg_1419_, v_declHint_1420_, v___y_1421_, v___y_1422_);
lean_dec(v___y_1422_);
lean_dec(v_ref_1418_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20(lean_object* v_msg_1425_, lean_object* v_declHint_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___redArg(v_msg_1425_, v_declHint_1426_, v___y_1428_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20___boxed(lean_object* v_msg_1431_, lean_object* v_declHint_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__19_spec__20(v_msg_1431_, v_declHint_1432_, v___y_1433_, v___y_1434_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20(lean_object* v_00_u03b1_1437_, lean_object* v_ref_1438_, lean_object* v_msg_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_){
_start:
{
lean_object* v___x_1443_; 
v___x_1443_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20___redArg(v_ref_1438_, v_msg_1439_, v___y_1440_, v___y_1441_);
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20___boxed(lean_object* v_00_u03b1_1444_, lean_object* v_ref_1445_, lean_object* v_msg_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_){
_start:
{
lean_object* v_res_1450_; 
v_res_1450_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20(v_00_u03b1_1444_, v_ref_1445_, v_msg_1446_, v___y_1447_, v___y_1448_);
lean_dec(v___y_1448_);
lean_dec(v_ref_1445_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22(lean_object* v_00_u03b1_1451_, lean_object* v_msg_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v___x_1456_; 
v___x_1456_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22___redArg(v_msg_1452_, v___y_1453_, v___y_1454_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22___boxed(lean_object* v_00_u03b1_1457_, lean_object* v_msg_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16_spec__18_spec__20_spec__22(v_00_u03b1_1457_, v_msg_1458_, v___y_1459_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_docString__1(){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
v___x_1466_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_docString__1___closed__0));
v___x_1467_ = l_Lean_addBuiltinDocString(v___x_1465_, v___x_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_docString__1___boxed(lean_object* v_a_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_docString__1();
return v_res_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3(){
_start:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; 
v___x_1496_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__14_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
v___x_1497_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___closed__6));
v___x_1498_ = l_Lean_addBuiltinDeclarationRanges(v___x_1496_, v___x_1497_);
return v___x_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3___boxed(lean_object* v_a_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3();
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0(lean_object* v___x_1529_, uint8_t v___x_1530_, lean_object* v_id_1531_, lean_object* v_x_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1535_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0___closed__0));
v___x_1536_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1529_, v___x_1530_);
v___x_1537_ = lean_string_append(v___x_1535_, v___x_1536_);
lean_dec_ref(v___x_1536_);
v___x_1538_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__2));
v___x_1539_ = lean_string_append(v___x_1537_, v___x_1538_);
v___x_1540_ = l_Lean_Macro_throwErrorAt___redArg(v_id_1531_, v___x_1539_, v___y_1533_, v___y_1534_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0___boxed(lean_object* v___x_1541_, lean_object* v___x_1542_, lean_object* v_id_1543_, lean_object* v_x_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
uint8_t v___x_2591__boxed_1547_; lean_object* v_res_1548_; 
v___x_2591__boxed_1547_ = lean_unbox(v___x_1542_);
v_res_1548_ = l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0(v___x_1541_, v___x_2591__boxed_1547_, v_id_1543_, v_x_1544_, v___y_1545_, v___y_1546_);
lean_dec(v_x_1544_);
lean_dec(v_id_1543_);
return v_res_1548_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__5(void){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1558_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
v___x_1559_ = l_String_toRawSubstring_x27(v___x_1558_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1(lean_object* v_x_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_){
_start:
{
lean_object* v___y_1567_; lean_object* v___x_1586_; uint8_t v___x_1587_; 
v___x_1586_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_attrApp__delab___00__closed__1));
lean_inc(v_x_1563_);
v___x_1587_ = l_Lean_Syntax_isOfKind(v_x_1563_, v___x_1586_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
lean_dec_ref(v_a_1564_);
lean_dec(v_x_1563_);
v___x_1588_ = lean_box(1);
v___x_1589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
lean_ctor_set(v___x_1589_, 1, v_a_1565_);
return v___x_1589_;
}
else
{
lean_object* v___x_1590_; lean_object* v_id_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1590_ = lean_unsigned_to_nat(1u);
v_id_1591_ = l_Lean_Syntax_getArg(v_x_1563_, v___x_1590_);
lean_dec(v_x_1563_);
v___x_1592_ = l_Lean_TSyntax_getId(v_id_1591_);
lean_inc_ref(v_a_1564_);
lean_inc(v___x_1592_);
v___x_1593_ = l_Lean_Macro_resolveGlobalName(v___x_1592_, v_a_1564_, v_a_1565_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
if (lean_obj_tag(v_a_1594_) == 0)
{
lean_object* v_a_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v_a_1595_ = lean_ctor_get(v___x_1593_, 1);
lean_inc(v_a_1595_);
lean_dec_ref(v___x_1593_);
v___x_1596_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__0));
v___x_1597_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1592_, v___x_1587_);
v___x_1598_ = lean_string_append(v___x_1596_, v___x_1597_);
lean_dec_ref(v___x_1597_);
v___x_1599_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__2));
v___x_1600_ = lean_string_append(v___x_1598_, v___x_1599_);
v___x_1601_ = l_Lean_Macro_throwErrorAt___redArg(v_id_1591_, v___x_1600_, v_a_1564_, v_a_1595_);
lean_dec(v_id_1591_);
v___y_1567_ = v___x_1601_;
goto v___jp_1566_;
}
else
{
lean_object* v_head_1602_; lean_object* v_snd_1603_; 
v_head_1602_ = lean_ctor_get(v_a_1594_, 0);
v_snd_1603_ = lean_ctor_get(v_head_1602_, 1);
if (lean_obj_tag(v_snd_1603_) == 0)
{
lean_object* v_tail_1604_; 
v_tail_1604_ = lean_ctor_get(v_a_1594_, 1);
if (lean_obj_tag(v_tail_1604_) == 0)
{
lean_object* v_a_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1630_; 
lean_inc(v_head_1602_);
lean_dec_ref(v_a_1594_);
lean_dec(v___x_1592_);
v_a_1605_ = lean_ctor_get(v___x_1593_, 1);
v_isSharedCheck_1630_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1630_ == 0)
{
lean_object* v_unused_1631_; 
v_unused_1631_ = lean_ctor_get(v___x_1593_, 0);
lean_dec(v_unused_1631_);
v___x_1607_ = v___x_1593_;
v_isShared_1608_ = v_isSharedCheck_1630_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_a_1605_);
lean_dec(v___x_1593_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1630_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v_fst_1609_; lean_object* v_quotContext_1610_; lean_object* v_currMacroScope_1611_; lean_object* v_ref_1612_; uint8_t v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1628_; 
v_fst_1609_ = lean_ctor_get(v_head_1602_, 0);
lean_inc(v_fst_1609_);
lean_dec(v_head_1602_);
v_quotContext_1610_ = lean_ctor_get(v_a_1564_, 1);
lean_inc(v_quotContext_1610_);
v_currMacroScope_1611_ = lean_ctor_get(v_a_1564_, 2);
lean_inc(v_currMacroScope_1611_);
v_ref_1612_ = lean_ctor_get(v_a_1564_, 5);
lean_inc(v_ref_1612_);
lean_dec_ref(v_a_1564_);
v___x_1613_ = 0;
v___x_1614_ = l_Lean_SourceInfo_fromRef(v_ref_1612_, v___x_1613_);
lean_dec(v_ref_1612_);
v___x_1615_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__4));
v___x_1616_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__5, &l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__5_once, _init_l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__5);
v___x_1617_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__5_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
v___x_1618_ = l_Lean_addMacroScope(v_quotContext_1610_, v___x_1617_, v_currMacroScope_1611_);
v___x_1619_ = lean_box(0);
lean_inc(v___x_1614_);
v___x_1620_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1614_);
lean_ctor_set(v___x_1620_, 1, v___x_1616_);
lean_ctor_set(v___x_1620_, 2, v___x_1618_);
lean_ctor_set(v___x_1620_, 3, v___x_1619_);
v___x_1621_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__7));
v___x_1622_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
v___x_1623_ = l_Lean_Name_append(v___x_1622_, v_fst_1609_);
v___x_1624_ = l_Lean_mkIdentFrom(v_id_1591_, v___x_1623_, v___x_1587_);
lean_dec(v_id_1591_);
lean_inc(v___x_1614_);
v___x_1625_ = l_Lean_Syntax_node1(v___x_1614_, v___x_1621_, v___x_1624_);
v___x_1626_ = l_Lean_Syntax_node2(v___x_1614_, v___x_1615_, v___x_1620_, v___x_1625_);
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 0, v___x_1626_);
v___x_1628_ = v___x_1607_;
goto v_reusejp_1627_;
}
else
{
lean_object* v_reuseFailAlloc_1629_; 
v_reuseFailAlloc_1629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1629_, 0, v___x_1626_);
lean_ctor_set(v_reuseFailAlloc_1629_, 1, v_a_1605_);
v___x_1628_ = v_reuseFailAlloc_1629_;
goto v_reusejp_1627_;
}
v_reusejp_1627_:
{
return v___x_1628_;
}
}
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1633_; 
v_a_1632_ = lean_ctor_get(v___x_1593_, 1);
lean_inc(v_a_1632_);
lean_dec_ref(v___x_1593_);
v___x_1633_ = l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0(v___x_1592_, v___x_1587_, v_id_1591_, v_a_1594_, v_a_1564_, v_a_1632_);
lean_dec_ref(v_a_1594_);
lean_dec(v_id_1591_);
v___y_1567_ = v___x_1633_;
goto v___jp_1566_;
}
}
else
{
lean_object* v_a_1634_; lean_object* v___x_1635_; 
v_a_1634_ = lean_ctor_get(v___x_1593_, 1);
lean_inc(v_a_1634_);
lean_dec_ref(v___x_1593_);
v___x_1635_ = l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___lam__0(v___x_1592_, v___x_1587_, v_id_1591_, v_a_1594_, v_a_1564_, v_a_1634_);
lean_dec_ref(v_a_1594_);
lean_dec(v_id_1591_);
v___y_1567_ = v___x_1635_;
goto v___jp_1566_;
}
}
}
else
{
lean_object* v_a_1636_; lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1644_; 
lean_dec(v___x_1592_);
lean_dec(v_id_1591_);
lean_dec_ref(v_a_1564_);
v_a_1636_ = lean_ctor_get(v___x_1593_, 0);
v_a_1637_ = lean_ctor_get(v___x_1593_, 1);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1639_ = v___x_1593_;
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_inc(v_a_1636_);
lean_dec(v___x_1593_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1640_ == 0)
{
v___x_1642_ = v___x_1639_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_a_1636_);
lean_ctor_set(v_reuseFailAlloc_1643_, 1, v_a_1637_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
}
v___jp_1566_:
{
if (lean_obj_tag(v___y_1567_) == 0)
{
lean_object* v_a_1568_; lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
v_a_1568_ = lean_ctor_get(v___y_1567_, 0);
v_a_1569_ = lean_ctor_get(v___y_1567_, 1);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___y_1567_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___y_1567_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_inc(v_a_1568_);
lean_dec(v___y_1567_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1568_);
lean_ctor_set(v_reuseFailAlloc_1575_, 1, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
else
{
lean_object* v_a_1577_; lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
v_a_1577_ = lean_ctor_get(v___y_1567_, 0);
v_a_1578_ = lean_ctor_get(v___y_1567_, 1);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___y_1567_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___y_1567_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_inc(v_a_1577_);
lean_dec(v___y_1567_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v___x_1583_; 
if (v_isShared_1581_ == 0)
{
v___x_1583_ = v___x_1580_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1577_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(lean_object* v___y_1645_){
_start:
{
lean_object* v_subExpr_1647_; lean_object* v_expr_1648_; lean_object* v___x_1649_; 
v_subExpr_1647_ = lean_ctor_get(v___y_1645_, 3);
v_expr_1648_ = lean_ctor_get(v_subExpr_1647_, 0);
lean_inc_ref(v_expr_1648_);
v___x_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1649_, 0, v_expr_1648_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg___boxed(lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(v___y_1650_);
lean_dec_ref(v___y_1650_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0(lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_){
_start:
{
lean_object* v___x_1660_; 
v___x_1660_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(v___y_1653_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___boxed(lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0(v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
lean_dec(v___y_1666_);
lean_dec_ref(v___y_1665_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__0(lean_object* v_c_1669_, lean_object* v_us_1670_){
_start:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1671_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
v___x_1672_ = l_Lean_Name_append(v___x_1671_, v_c_1669_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__0___boxed(lean_object* v_c_1673_, lean_object* v_us_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__0(v_c_1673_, v_us_1674_);
lean_dec(v_us_1674_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1(lean_object* v_x_1679_){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___closed__1));
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___boxed(lean_object* v_x_1681_){
_start:
{
lean_object* v_res_1682_; 
v_res_1682_ = l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1(v_x_1681_);
lean_dec(v_x_1681_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind(lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_){
_start:
{
lean_object* v___x_1717_; lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1793_; 
v___x_1717_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(v_a_1710_);
v_a_1718_ = lean_ctor_get(v___x_1717_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1717_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1720_ = v___x_1717_;
v_isShared_1721_ = v_isSharedCheck_1793_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1717_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1793_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
switch(lean_obj_tag(v_a_1718_))
{
case 0:
{
lean_object* v___x_1722_; lean_object* v___x_1724_; 
lean_dec_ref(v_a_1718_);
v___x_1722_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__1));
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1722_);
v___x_1724_ = v___x_1720_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v___x_1722_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
case 1:
{
lean_object* v___x_1726_; lean_object* v___x_1728_; 
lean_dec_ref(v_a_1718_);
v___x_1726_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__3));
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1726_);
v___x_1728_ = v___x_1720_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1729_; 
v_reuseFailAlloc_1729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1729_, 0, v___x_1726_);
v___x_1728_ = v_reuseFailAlloc_1729_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
return v___x_1728_;
}
}
case 2:
{
lean_object* v___x_1730_; lean_object* v___x_1732_; 
lean_dec_ref(v_a_1718_);
v___x_1730_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__5));
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1730_);
v___x_1732_ = v___x_1720_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v___x_1730_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
case 3:
{
lean_object* v___x_1734_; lean_object* v___x_1736_; 
lean_dec_ref(v_a_1718_);
v___x_1734_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__7));
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1734_);
v___x_1736_ = v___x_1720_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1734_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
case 4:
{
lean_object* v_declName_1738_; lean_object* v_us_1739_; lean_object* v___x_1740_; lean_object* v___x_1742_; 
v_declName_1738_ = lean_ctor_get(v_a_1718_, 0);
lean_inc(v_declName_1738_);
v_us_1739_ = lean_ctor_get(v_a_1718_, 1);
lean_inc(v_us_1739_);
lean_dec_ref(v_a_1718_);
v___x_1740_ = l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__0(v_declName_1738_, v_us_1739_);
lean_dec(v_us_1739_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1740_);
v___x_1742_ = v___x_1720_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
return v___x_1742_;
}
}
case 5:
{
lean_object* v_fn_1744_; lean_object* v___x_1745_; 
v_fn_1744_ = lean_ctor_get(v_a_1718_, 0);
lean_inc_ref(v_fn_1744_);
lean_dec_ref(v_a_1718_);
v___x_1745_ = l_Lean_Expr_getAppFn(v_fn_1744_);
lean_dec_ref(v_fn_1744_);
if (lean_obj_tag(v___x_1745_) == 4)
{
lean_object* v_declName_1746_; lean_object* v_us_1747_; lean_object* v___x_1748_; lean_object* v___x_1750_; 
v_declName_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_declName_1746_);
v_us_1747_ = lean_ctor_get(v___x_1745_, 1);
lean_inc(v_us_1747_);
lean_dec_ref(v___x_1745_);
v___x_1748_ = l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__0(v_declName_1746_, v_us_1747_);
lean_dec(v_us_1747_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1748_);
v___x_1750_ = v___x_1720_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1748_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
else
{
lean_object* v___x_1752_; lean_object* v___x_1754_; 
lean_dec_ref(v___x_1745_);
v___x_1752_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___lam__1___closed__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1752_);
v___x_1754_ = v___x_1720_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v___x_1752_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
case 6:
{
lean_object* v___x_1756_; lean_object* v___x_1758_; 
lean_dec_ref(v_a_1718_);
v___x_1756_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__9));
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1756_);
v___x_1758_ = v___x_1720_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
case 7:
{
lean_object* v___x_1760_; lean_object* v___x_1762_; 
lean_dec_ref(v_a_1718_);
v___x_1760_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__11));
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1760_);
v___x_1762_ = v___x_1720_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v___x_1760_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
case 8:
{
lean_object* v___x_1764_; lean_object* v___x_1766_; 
lean_dec_ref(v_a_1718_);
v___x_1764_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__13));
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1764_);
v___x_1766_ = v___x_1720_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1764_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
case 9:
{
lean_object* v___x_1768_; lean_object* v___x_1770_; 
lean_dec_ref(v_a_1718_);
v___x_1768_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__15));
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1768_);
v___x_1770_ = v___x_1720_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v___x_1768_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
case 10:
{
lean_object* v_data_1772_; 
v_data_1772_ = lean_ctor_get(v_a_1718_, 0);
lean_inc(v_data_1772_);
lean_dec_ref(v_a_1718_);
if (lean_obj_tag(v_data_1772_) == 1)
{
lean_object* v_tail_1773_; 
v_tail_1773_ = lean_ctor_get(v_data_1772_, 1);
if (lean_obj_tag(v_tail_1773_) == 0)
{
lean_object* v_head_1774_; lean_object* v_fst_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1779_; 
v_head_1774_ = lean_ctor_get(v_data_1772_, 0);
lean_inc(v_head_1774_);
lean_dec_ref(v_data_1772_);
v_fst_1775_ = lean_ctor_get(v_head_1774_, 0);
lean_inc(v_fst_1775_);
lean_dec(v_head_1774_);
v___x_1776_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1___closed__1));
v___x_1777_ = l_Lean_Name_append(v___x_1776_, v_fst_1775_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1777_);
v___x_1779_ = v___x_1720_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v___x_1777_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
else
{
lean_object* v___x_1781_; lean_object* v___x_1783_; 
v___x_1781_ = l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1(v_data_1772_);
lean_dec_ref(v_data_1772_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1781_);
v___x_1783_ = v___x_1720_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1781_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
else
{
lean_object* v___x_1785_; lean_object* v___x_1787_; 
v___x_1785_ = l_Lean_PrettyPrinter_Delaborator_getExprKind___lam__1(v_data_1772_);
lean_dec(v_data_1772_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1785_);
v___x_1787_ = v___x_1720_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v___x_1785_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
default: 
{
lean_object* v___x_1789_; lean_object* v___x_1791_; 
lean_dec_ref(v_a_1718_);
v___x_1789_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getExprKind___closed__17));
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1789_);
v___x_1791_ = v___x_1720_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getExprKind___boxed(lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l_Lean_PrettyPrinter_Delaborator_getExprKind(v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_);
lean_dec(v_a_1799_);
lean_dec_ref(v_a_1798_);
lean_dec(v_a_1797_);
lean_dec_ref(v_a_1796_);
lean_dec(v_a_1795_);
lean_dec_ref(v_a_1794_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__0(lean_object* v_o_1802_, lean_object* v_k_1803_, lean_object* v_v_1804_){
_start:
{
lean_object* v_map_1805_; uint8_t v_hasTrace_1806_; lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1819_; 
v_map_1805_ = lean_ctor_get(v_o_1802_, 0);
v_hasTrace_1806_ = lean_ctor_get_uint8(v_o_1802_, sizeof(void*)*1);
v_isSharedCheck_1819_ = !lean_is_exclusive(v_o_1802_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1808_ = v_o_1802_;
v_isShared_1809_ = v_isSharedCheck_1819_;
goto v_resetjp_1807_;
}
else
{
lean_inc(v_map_1805_);
lean_dec(v_o_1802_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1819_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v___x_1810_; 
lean_inc(v_k_1803_);
v___x_1810_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_1803_, v_v_1804_, v_map_1805_);
if (v_hasTrace_1806_ == 0)
{
lean_object* v___x_1811_; uint8_t v___x_1812_; lean_object* v___x_1814_; 
v___x_1811_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1));
v___x_1812_ = l_Lean_Name_isPrefixOf(v___x_1811_, v_k_1803_);
lean_dec(v_k_1803_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 0, v___x_1810_);
v___x_1814_ = v___x_1808_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v___x_1810_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
lean_ctor_set_uint8(v___x_1814_, sizeof(void*)*1, v___x_1812_);
return v___x_1814_;
}
}
else
{
lean_object* v___x_1817_; 
lean_dec(v_k_1803_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 0, v___x_1810_);
v___x_1817_ = v___x_1808_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v___x_1810_);
lean_ctor_set_uint8(v_reuseFailAlloc_1818_, sizeof(void*)*1, v_hasTrace_1806_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg(lean_object* v___y_1820_){
_start:
{
lean_object* v_subExpr_1822_; lean_object* v_pos_1823_; lean_object* v___x_1824_; 
v_subExpr_1822_ = lean_ctor_get(v___y_1820_, 3);
v_pos_1823_ = lean_ctor_get(v_subExpr_1822_, 1);
lean_inc(v_pos_1823_);
v___x_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1824_, 0, v_pos_1823_);
return v___x_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg___boxed(lean_object* v___y_1825_, lean_object* v___y_1826_){
_start:
{
lean_object* v_res_1827_; 
v_res_1827_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg(v___y_1825_);
lean_dec_ref(v___y_1825_);
return v_res_1827_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1(lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_){
_start:
{
lean_object* v___x_1835_; 
v___x_1835_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg(v___y_1828_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___boxed(lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1(v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2___redArg(lean_object* v_t_1844_, lean_object* v_k_1845_){
_start:
{
if (lean_obj_tag(v_t_1844_) == 0)
{
lean_object* v_k_1846_; lean_object* v_v_1847_; lean_object* v_l_1848_; lean_object* v_r_1849_; uint8_t v___x_1850_; 
v_k_1846_ = lean_ctor_get(v_t_1844_, 1);
v_v_1847_ = lean_ctor_get(v_t_1844_, 2);
v_l_1848_ = lean_ctor_get(v_t_1844_, 3);
v_r_1849_ = lean_ctor_get(v_t_1844_, 4);
v___x_1850_ = lean_nat_dec_lt(v_k_1845_, v_k_1846_);
if (v___x_1850_ == 0)
{
uint8_t v___x_1851_; 
v___x_1851_ = lean_nat_dec_eq(v_k_1845_, v_k_1846_);
if (v___x_1851_ == 0)
{
v_t_1844_ = v_r_1849_;
goto _start;
}
else
{
lean_object* v___x_1853_; 
lean_inc(v_v_1847_);
v___x_1853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1853_, 0, v_v_1847_);
return v___x_1853_;
}
}
else
{
v_t_1844_ = v_l_1848_;
goto _start;
}
}
else
{
lean_object* v___x_1855_; 
v___x_1855_ = lean_box(0);
return v___x_1855_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2___redArg___boxed(lean_object* v_t_1856_, lean_object* v_k_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2___redArg(v_t_1856_, v_k_1857_);
lean_dec(v_k_1857_);
lean_dec(v_t_1856_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3___redArg(lean_object* v_init_1859_, lean_object* v_x_1860_){
_start:
{
if (lean_obj_tag(v_x_1860_) == 0)
{
lean_object* v_k_1862_; lean_object* v_v_1863_; lean_object* v_l_1864_; lean_object* v_r_1865_; lean_object* v___x_1866_; lean_object* v_a_1867_; lean_object* v_a_1868_; lean_object* v___x_1869_; 
v_k_1862_ = lean_ctor_get(v_x_1860_, 1);
lean_inc(v_k_1862_);
v_v_1863_ = lean_ctor_get(v_x_1860_, 2);
lean_inc(v_v_1863_);
v_l_1864_ = lean_ctor_get(v_x_1860_, 3);
lean_inc(v_l_1864_);
v_r_1865_ = lean_ctor_get(v_x_1860_, 4);
lean_inc(v_r_1865_);
lean_dec_ref(v_x_1860_);
v___x_1866_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3___redArg(v_init_1859_, v_l_1864_);
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_a_1867_);
lean_dec_ref(v___x_1866_);
v_a_1868_ = lean_ctor_get(v_a_1867_, 0);
lean_inc(v_a_1868_);
lean_dec(v_a_1867_);
v___x_1869_ = l_Lean_Options_set___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__0(v_a_1868_, v_k_1862_, v_v_1863_);
v_init_1859_ = v___x_1869_;
v_x_1860_ = v_r_1865_;
goto _start;
}
else
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1871_, 0, v_init_1859_);
v___x_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1871_);
return v___x_1872_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3___redArg___boxed(lean_object* v_init_1873_, lean_object* v_x_1874_, lean_object* v___y_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3___redArg(v_init_1873_, v_x_1874_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos(lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_, lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_){
_start:
{
lean_object* v_options_1884_; lean_object* v___x_1885_; lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1907_; 
v_options_1884_ = lean_ctor_get(v_a_1881_, 2);
lean_inc_ref(v_options_1884_);
lean_dec_ref(v_a_1881_);
v___x_1885_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg(v_a_1877_);
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1888_ = v___x_1885_;
v_isShared_1889_ = v_isSharedCheck_1907_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1885_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1907_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v_optionsPerPos_1890_; lean_object* v___x_1891_; 
v_optionsPerPos_1890_ = lean_ctor_get(v_a_1877_, 0);
v___x_1891_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2___redArg(v_optionsPerPos_1890_, v_a_1886_);
lean_dec(v_a_1886_);
if (lean_obj_tag(v___x_1891_) == 1)
{
lean_object* v_val_1892_; lean_object* v_map_1893_; lean_object* v___x_1894_; lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1903_; 
lean_del_object(v___x_1888_);
v_val_1892_ = lean_ctor_get(v___x_1891_, 0);
lean_inc(v_val_1892_);
lean_dec_ref(v___x_1891_);
v_map_1893_ = lean_ctor_get(v_val_1892_, 0);
lean_inc(v_map_1893_);
lean_dec(v_val_1892_);
v___x_1894_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3___redArg(v_options_1884_, v_map_1893_);
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1903_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1897_ = v___x_1894_;
v_isShared_1898_ = v_isSharedCheck_1903_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1894_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1903_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v_a_1899_; lean_object* v___x_1901_; 
v_a_1899_ = lean_ctor_get(v_a_1895_, 0);
lean_inc(v_a_1899_);
lean_dec(v_a_1895_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 0, v_a_1899_);
v___x_1901_ = v___x_1897_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v_a_1899_);
v___x_1901_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
return v___x_1901_;
}
}
}
else
{
lean_object* v___x_1905_; 
lean_dec(v___x_1891_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 0, v_options_1884_);
v___x_1905_ = v___x_1888_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_options_1884_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos___boxed(lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l_Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos(v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
lean_dec(v_a_1913_);
lean_dec(v_a_1911_);
lean_dec_ref(v_a_1910_);
lean_dec(v_a_1909_);
lean_dec_ref(v_a_1908_);
return v_res_1915_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2(lean_object* v_00_u03b4_1916_, lean_object* v_t_1917_, lean_object* v_k_1918_){
_start:
{
lean_object* v___x_1919_; 
v___x_1919_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2___redArg(v_t_1917_, v_k_1918_);
return v___x_1919_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2___boxed(lean_object* v_00_u03b4_1920_, lean_object* v_t_1921_, lean_object* v_k_1922_){
_start:
{
lean_object* v_res_1923_; 
v_res_1923_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2(v_00_u03b4_1920_, v_t_1921_, v_k_1922_);
lean_dec(v_k_1922_);
lean_dec(v_t_1921_);
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3(lean_object* v_init_1924_, lean_object* v_x_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v___x_1933_; 
v___x_1933_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3___redArg(v_init_1924_, v_x_1925_);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3___boxed(lean_object* v_init_1934_, lean_object* v_x_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_){
_start:
{
lean_object* v_res_1943_; 
v_res_1943_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__3(v_init_1934_, v_x_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
lean_dec(v___y_1939_);
lean_dec_ref(v___y_1938_);
lean_dec(v___y_1937_);
lean_dec_ref(v___y_1936_);
return v_res_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(lean_object* v_opt_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_){
_start:
{
lean_object* v___x_1952_; 
v___x_1952_ = l_Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos(v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1961_; 
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1955_ = v___x_1952_;
v_isShared_1956_ = v_isSharedCheck_1961_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1952_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1961_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; lean_object* v___x_1959_; 
v___x_1957_ = lean_apply_1(v_opt_1944_, v_a_1953_);
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 0, v___x_1957_);
v___x_1959_ = v___x_1955_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v___x_1957_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
lean_dec(v_opt_1944_);
v_a_1962_ = lean_ctor_get(v___x_1952_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1952_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1952_);
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
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg___boxed(lean_object* v_opt_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v_opt_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_);
lean_dec(v_a_1976_);
lean_dec(v_a_1974_);
lean_dec_ref(v_a_1973_);
lean_dec(v_a_1972_);
lean_dec_ref(v_a_1971_);
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getPPOption(lean_object* v_00_u03b1_1979_, lean_object* v_opt_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_){
_start:
{
lean_object* v___x_1988_; 
v___x_1988_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v_opt_1980_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getPPOption___boxed(lean_object* v_00_u03b1_1989_, lean_object* v_opt_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l_Lean_PrettyPrinter_Delaborator_getPPOption(v_00_u03b1_1989_, v_opt_1990_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_, v_a_1995_, v_a_1996_);
lean_dec(v_a_1996_);
lean_dec(v_a_1994_);
lean_dec_ref(v_a_1993_);
lean_dec(v_a_1992_);
lean_dec_ref(v_a_1991_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_whenPPOption(lean_object* v_opt_1999_, lean_object* v_d_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_){
_start:
{
lean_object* v___x_2008_; 
lean_inc_ref(v_a_2005_);
v___x_2008_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v_opt_1999_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v_a_2009_; uint8_t v___x_2010_; 
v_a_2009_ = lean_ctor_get(v___x_2008_, 0);
lean_inc(v_a_2009_);
lean_dec_ref(v___x_2008_);
v___x_2010_ = lean_unbox(v_a_2009_);
lean_dec(v_a_2009_);
if (v___x_2010_ == 0)
{
lean_object* v___x_2011_; 
lean_dec(v_a_2006_);
lean_dec_ref(v_a_2005_);
lean_dec(v_a_2004_);
lean_dec_ref(v_a_2003_);
lean_dec(v_a_2002_);
lean_dec_ref(v_a_2001_);
lean_dec_ref(v_d_2000_);
v___x_2011_ = l_Lean_PrettyPrinter_Delaborator_failure___redArg();
return v___x_2011_;
}
else
{
lean_object* v___x_2012_; 
v___x_2012_ = lean_apply_7(v_d_2000_, v_a_2001_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_, lean_box(0));
return v___x_2012_;
}
}
else
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
lean_dec(v_a_2006_);
lean_dec_ref(v_a_2005_);
lean_dec(v_a_2004_);
lean_dec_ref(v_a_2003_);
lean_dec(v_a_2002_);
lean_dec_ref(v_a_2001_);
lean_dec_ref(v_d_2000_);
v_a_2013_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_2008_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_2008_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_whenPPOption___boxed(lean_object* v_opt_2021_, lean_object* v_d_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_){
_start:
{
lean_object* v_res_2030_; 
v_res_2030_ = l_Lean_PrettyPrinter_Delaborator_whenPPOption(v_opt_2021_, v_d_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_whenNotPPOption(lean_object* v_opt_2031_, lean_object* v_d_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_){
_start:
{
lean_object* v___x_2040_; 
lean_inc_ref(v_a_2037_);
v___x_2040_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v_opt_2031_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, v_a_2038_);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_a_2041_; uint8_t v___x_2042_; 
v_a_2041_ = lean_ctor_get(v___x_2040_, 0);
lean_inc(v_a_2041_);
lean_dec_ref(v___x_2040_);
v___x_2042_ = lean_unbox(v_a_2041_);
lean_dec(v_a_2041_);
if (v___x_2042_ == 0)
{
lean_object* v___x_2043_; 
v___x_2043_ = lean_apply_7(v_d_2032_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, v_a_2038_, lean_box(0));
return v___x_2043_;
}
else
{
lean_object* v___x_2044_; 
lean_dec(v_a_2038_);
lean_dec_ref(v_a_2037_);
lean_dec(v_a_2036_);
lean_dec_ref(v_a_2035_);
lean_dec(v_a_2034_);
lean_dec_ref(v_a_2033_);
lean_dec_ref(v_d_2032_);
v___x_2044_ = l_Lean_PrettyPrinter_Delaborator_failure___redArg();
return v___x_2044_;
}
}
else
{
lean_object* v_a_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
lean_dec(v_a_2038_);
lean_dec_ref(v_a_2037_);
lean_dec(v_a_2036_);
lean_dec_ref(v_a_2035_);
lean_dec(v_a_2034_);
lean_dec_ref(v_a_2033_);
lean_dec_ref(v_d_2032_);
v_a_2045_ = lean_ctor_get(v___x_2040_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2047_ = v___x_2040_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_a_2045_);
lean_dec(v___x_2040_);
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
v_reuseFailAlloc_2051_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_whenNotPPOption___boxed(lean_object* v_opt_2053_, lean_object* v_d_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l_Lean_PrettyPrinter_Delaborator_whenNotPPOption(v_opt_2053_, v_d_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0___redArg(lean_object* v_k_2063_, lean_object* v_v_2064_, lean_object* v_t_2065_){
_start:
{
if (lean_obj_tag(v_t_2065_) == 0)
{
lean_object* v_size_2066_; lean_object* v_k_2067_; lean_object* v_v_2068_; lean_object* v_l_2069_; lean_object* v_r_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2351_; 
v_size_2066_ = lean_ctor_get(v_t_2065_, 0);
v_k_2067_ = lean_ctor_get(v_t_2065_, 1);
v_v_2068_ = lean_ctor_get(v_t_2065_, 2);
v_l_2069_ = lean_ctor_get(v_t_2065_, 3);
v_r_2070_ = lean_ctor_get(v_t_2065_, 4);
v_isSharedCheck_2351_ = !lean_is_exclusive(v_t_2065_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2072_ = v_t_2065_;
v_isShared_2073_ = v_isSharedCheck_2351_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_r_2070_);
lean_inc(v_l_2069_);
lean_inc(v_v_2068_);
lean_inc(v_k_2067_);
lean_inc(v_size_2066_);
lean_dec(v_t_2065_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2351_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
uint8_t v___x_2074_; 
v___x_2074_ = lean_nat_dec_lt(v_k_2063_, v_k_2067_);
if (v___x_2074_ == 0)
{
uint8_t v___x_2075_; 
v___x_2075_ = lean_nat_dec_eq(v_k_2063_, v_k_2067_);
if (v___x_2075_ == 0)
{
lean_object* v_impl_2076_; lean_object* v___x_2077_; 
lean_dec(v_size_2066_);
v_impl_2076_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0___redArg(v_k_2063_, v_v_2064_, v_r_2070_);
v___x_2077_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_2069_) == 0)
{
lean_object* v_size_2078_; lean_object* v_size_2079_; lean_object* v_k_2080_; lean_object* v_v_2081_; lean_object* v_l_2082_; lean_object* v_r_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; uint8_t v___x_2086_; 
v_size_2078_ = lean_ctor_get(v_l_2069_, 0);
v_size_2079_ = lean_ctor_get(v_impl_2076_, 0);
lean_inc(v_size_2079_);
v_k_2080_ = lean_ctor_get(v_impl_2076_, 1);
lean_inc(v_k_2080_);
v_v_2081_ = lean_ctor_get(v_impl_2076_, 2);
lean_inc(v_v_2081_);
v_l_2082_ = lean_ctor_get(v_impl_2076_, 3);
lean_inc(v_l_2082_);
v_r_2083_ = lean_ctor_get(v_impl_2076_, 4);
lean_inc(v_r_2083_);
v___x_2084_ = lean_unsigned_to_nat(3u);
v___x_2085_ = lean_nat_mul(v___x_2084_, v_size_2078_);
v___x_2086_ = lean_nat_dec_lt(v___x_2085_, v_size_2079_);
lean_dec(v___x_2085_);
if (v___x_2086_ == 0)
{
lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2090_; 
lean_dec(v_r_2083_);
lean_dec(v_l_2082_);
lean_dec(v_v_2081_);
lean_dec(v_k_2080_);
v___x_2087_ = lean_nat_add(v___x_2077_, v_size_2078_);
v___x_2088_ = lean_nat_add(v___x_2087_, v_size_2079_);
lean_dec(v_size_2079_);
lean_dec(v___x_2087_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v_impl_2076_);
lean_ctor_set(v___x_2072_, 0, v___x_2088_);
v___x_2090_ = v___x_2072_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v___x_2088_);
lean_ctor_set(v_reuseFailAlloc_2091_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2091_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2091_, 3, v_l_2069_);
lean_ctor_set(v_reuseFailAlloc_2091_, 4, v_impl_2076_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
else
{
lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2155_; 
v_isSharedCheck_2155_ = !lean_is_exclusive(v_impl_2076_);
if (v_isSharedCheck_2155_ == 0)
{
lean_object* v_unused_2156_; lean_object* v_unused_2157_; lean_object* v_unused_2158_; lean_object* v_unused_2159_; lean_object* v_unused_2160_; 
v_unused_2156_ = lean_ctor_get(v_impl_2076_, 4);
lean_dec(v_unused_2156_);
v_unused_2157_ = lean_ctor_get(v_impl_2076_, 3);
lean_dec(v_unused_2157_);
v_unused_2158_ = lean_ctor_get(v_impl_2076_, 2);
lean_dec(v_unused_2158_);
v_unused_2159_ = lean_ctor_get(v_impl_2076_, 1);
lean_dec(v_unused_2159_);
v_unused_2160_ = lean_ctor_get(v_impl_2076_, 0);
lean_dec(v_unused_2160_);
v___x_2093_ = v_impl_2076_;
v_isShared_2094_ = v_isSharedCheck_2155_;
goto v_resetjp_2092_;
}
else
{
lean_dec(v_impl_2076_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2155_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v_size_2095_; lean_object* v_k_2096_; lean_object* v_v_2097_; lean_object* v_l_2098_; lean_object* v_r_2099_; lean_object* v_size_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; 
v_size_2095_ = lean_ctor_get(v_l_2082_, 0);
v_k_2096_ = lean_ctor_get(v_l_2082_, 1);
v_v_2097_ = lean_ctor_get(v_l_2082_, 2);
v_l_2098_ = lean_ctor_get(v_l_2082_, 3);
v_r_2099_ = lean_ctor_get(v_l_2082_, 4);
v_size_2100_ = lean_ctor_get(v_r_2083_, 0);
v___x_2101_ = lean_unsigned_to_nat(2u);
v___x_2102_ = lean_nat_mul(v___x_2101_, v_size_2100_);
v___x_2103_ = lean_nat_dec_lt(v_size_2095_, v___x_2102_);
lean_dec(v___x_2102_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2131_; 
lean_inc(v_r_2099_);
lean_inc(v_l_2098_);
lean_inc(v_v_2097_);
lean_inc(v_k_2096_);
v_isSharedCheck_2131_ = !lean_is_exclusive(v_l_2082_);
if (v_isSharedCheck_2131_ == 0)
{
lean_object* v_unused_2132_; lean_object* v_unused_2133_; lean_object* v_unused_2134_; lean_object* v_unused_2135_; lean_object* v_unused_2136_; 
v_unused_2132_ = lean_ctor_get(v_l_2082_, 4);
lean_dec(v_unused_2132_);
v_unused_2133_ = lean_ctor_get(v_l_2082_, 3);
lean_dec(v_unused_2133_);
v_unused_2134_ = lean_ctor_get(v_l_2082_, 2);
lean_dec(v_unused_2134_);
v_unused_2135_ = lean_ctor_get(v_l_2082_, 1);
lean_dec(v_unused_2135_);
v_unused_2136_ = lean_ctor_get(v_l_2082_, 0);
lean_dec(v_unused_2136_);
v___x_2105_ = v_l_2082_;
v_isShared_2106_ = v_isSharedCheck_2131_;
goto v_resetjp_2104_;
}
else
{
lean_dec(v_l_2082_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2131_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___y_2110_; lean_object* v___y_2111_; lean_object* v___y_2112_; lean_object* v___y_2121_; 
v___x_2107_ = lean_nat_add(v___x_2077_, v_size_2078_);
v___x_2108_ = lean_nat_add(v___x_2107_, v_size_2079_);
lean_dec(v_size_2079_);
if (lean_obj_tag(v_l_2098_) == 0)
{
lean_object* v_size_2129_; 
v_size_2129_ = lean_ctor_get(v_l_2098_, 0);
lean_inc(v_size_2129_);
v___y_2121_ = v_size_2129_;
goto v___jp_2120_;
}
else
{
lean_object* v___x_2130_; 
v___x_2130_ = lean_unsigned_to_nat(0u);
v___y_2121_ = v___x_2130_;
goto v___jp_2120_;
}
v___jp_2109_:
{
lean_object* v___x_2113_; lean_object* v___x_2115_; 
v___x_2113_ = lean_nat_add(v___y_2110_, v___y_2112_);
lean_dec(v___y_2112_);
lean_dec(v___y_2110_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 4, v_r_2083_);
lean_ctor_set(v___x_2105_, 3, v_r_2099_);
lean_ctor_set(v___x_2105_, 2, v_v_2081_);
lean_ctor_set(v___x_2105_, 1, v_k_2080_);
lean_ctor_set(v___x_2105_, 0, v___x_2113_);
v___x_2115_ = v___x_2105_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2113_);
lean_ctor_set(v_reuseFailAlloc_2119_, 1, v_k_2080_);
lean_ctor_set(v_reuseFailAlloc_2119_, 2, v_v_2081_);
lean_ctor_set(v_reuseFailAlloc_2119_, 3, v_r_2099_);
lean_ctor_set(v_reuseFailAlloc_2119_, 4, v_r_2083_);
v___x_2115_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
lean_object* v___x_2117_; 
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 4, v___x_2115_);
lean_ctor_set(v___x_2093_, 3, v___y_2111_);
lean_ctor_set(v___x_2093_, 2, v_v_2097_);
lean_ctor_set(v___x_2093_, 1, v_k_2096_);
lean_ctor_set(v___x_2093_, 0, v___x_2108_);
v___x_2117_ = v___x_2093_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v___x_2108_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v_k_2096_);
lean_ctor_set(v_reuseFailAlloc_2118_, 2, v_v_2097_);
lean_ctor_set(v_reuseFailAlloc_2118_, 3, v___y_2111_);
lean_ctor_set(v_reuseFailAlloc_2118_, 4, v___x_2115_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
return v___x_2117_;
}
}
}
v___jp_2120_:
{
lean_object* v___x_2122_; lean_object* v___x_2124_; 
v___x_2122_ = lean_nat_add(v___x_2107_, v___y_2121_);
lean_dec(v___y_2121_);
lean_dec(v___x_2107_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v_l_2098_);
lean_ctor_set(v___x_2072_, 0, v___x_2122_);
v___x_2124_ = v___x_2072_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2122_);
lean_ctor_set(v_reuseFailAlloc_2128_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2128_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2128_, 3, v_l_2069_);
lean_ctor_set(v_reuseFailAlloc_2128_, 4, v_l_2098_);
v___x_2124_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
lean_object* v___x_2125_; 
v___x_2125_ = lean_nat_add(v___x_2077_, v_size_2100_);
if (lean_obj_tag(v_r_2099_) == 0)
{
lean_object* v_size_2126_; 
v_size_2126_ = lean_ctor_get(v_r_2099_, 0);
lean_inc(v_size_2126_);
v___y_2110_ = v___x_2125_;
v___y_2111_ = v___x_2124_;
v___y_2112_ = v_size_2126_;
goto v___jp_2109_;
}
else
{
lean_object* v___x_2127_; 
v___x_2127_ = lean_unsigned_to_nat(0u);
v___y_2110_ = v___x_2125_;
v___y_2111_ = v___x_2124_;
v___y_2112_ = v___x_2127_;
goto v___jp_2109_;
}
}
}
}
}
else
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2141_; 
lean_del_object(v___x_2072_);
v___x_2137_ = lean_nat_add(v___x_2077_, v_size_2078_);
v___x_2138_ = lean_nat_add(v___x_2137_, v_size_2079_);
lean_dec(v_size_2079_);
v___x_2139_ = lean_nat_add(v___x_2137_, v_size_2095_);
lean_dec(v___x_2137_);
lean_inc_ref(v_l_2069_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 4, v_l_2082_);
lean_ctor_set(v___x_2093_, 3, v_l_2069_);
lean_ctor_set(v___x_2093_, 2, v_v_2068_);
lean_ctor_set(v___x_2093_, 1, v_k_2067_);
lean_ctor_set(v___x_2093_, 0, v___x_2139_);
v___x_2141_ = v___x_2093_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v___x_2139_);
lean_ctor_set(v_reuseFailAlloc_2154_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2154_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2154_, 3, v_l_2069_);
lean_ctor_set(v_reuseFailAlloc_2154_, 4, v_l_2082_);
v___x_2141_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2148_; 
v_isSharedCheck_2148_ = !lean_is_exclusive(v_l_2069_);
if (v_isSharedCheck_2148_ == 0)
{
lean_object* v_unused_2149_; lean_object* v_unused_2150_; lean_object* v_unused_2151_; lean_object* v_unused_2152_; lean_object* v_unused_2153_; 
v_unused_2149_ = lean_ctor_get(v_l_2069_, 4);
lean_dec(v_unused_2149_);
v_unused_2150_ = lean_ctor_get(v_l_2069_, 3);
lean_dec(v_unused_2150_);
v_unused_2151_ = lean_ctor_get(v_l_2069_, 2);
lean_dec(v_unused_2151_);
v_unused_2152_ = lean_ctor_get(v_l_2069_, 1);
lean_dec(v_unused_2152_);
v_unused_2153_ = lean_ctor_get(v_l_2069_, 0);
lean_dec(v_unused_2153_);
v___x_2143_ = v_l_2069_;
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
else
{
lean_dec(v_l_2069_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2146_; 
if (v_isShared_2144_ == 0)
{
lean_ctor_set(v___x_2143_, 4, v_r_2083_);
lean_ctor_set(v___x_2143_, 3, v___x_2141_);
lean_ctor_set(v___x_2143_, 2, v_v_2081_);
lean_ctor_set(v___x_2143_, 1, v_k_2080_);
lean_ctor_set(v___x_2143_, 0, v___x_2138_);
v___x_2146_ = v___x_2143_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v___x_2138_);
lean_ctor_set(v_reuseFailAlloc_2147_, 1, v_k_2080_);
lean_ctor_set(v_reuseFailAlloc_2147_, 2, v_v_2081_);
lean_ctor_set(v_reuseFailAlloc_2147_, 3, v___x_2141_);
lean_ctor_set(v_reuseFailAlloc_2147_, 4, v_r_2083_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2161_; 
v_l_2161_ = lean_ctor_get(v_impl_2076_, 3);
lean_inc(v_l_2161_);
if (lean_obj_tag(v_l_2161_) == 0)
{
lean_object* v_r_2162_; lean_object* v_k_2163_; lean_object* v_v_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2187_; 
v_r_2162_ = lean_ctor_get(v_impl_2076_, 4);
v_k_2163_ = lean_ctor_get(v_impl_2076_, 1);
v_v_2164_ = lean_ctor_get(v_impl_2076_, 2);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_impl_2076_);
if (v_isSharedCheck_2187_ == 0)
{
lean_object* v_unused_2188_; lean_object* v_unused_2189_; 
v_unused_2188_ = lean_ctor_get(v_impl_2076_, 3);
lean_dec(v_unused_2188_);
v_unused_2189_ = lean_ctor_get(v_impl_2076_, 0);
lean_dec(v_unused_2189_);
v___x_2166_ = v_impl_2076_;
v_isShared_2167_ = v_isSharedCheck_2187_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_r_2162_);
lean_inc(v_v_2164_);
lean_inc(v_k_2163_);
lean_dec(v_impl_2076_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2187_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v_k_2168_; lean_object* v_v_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2183_; 
v_k_2168_ = lean_ctor_get(v_l_2161_, 1);
v_v_2169_ = lean_ctor_get(v_l_2161_, 2);
v_isSharedCheck_2183_ = !lean_is_exclusive(v_l_2161_);
if (v_isSharedCheck_2183_ == 0)
{
lean_object* v_unused_2184_; lean_object* v_unused_2185_; lean_object* v_unused_2186_; 
v_unused_2184_ = lean_ctor_get(v_l_2161_, 4);
lean_dec(v_unused_2184_);
v_unused_2185_ = lean_ctor_get(v_l_2161_, 3);
lean_dec(v_unused_2185_);
v_unused_2186_ = lean_ctor_get(v_l_2161_, 0);
lean_dec(v_unused_2186_);
v___x_2171_ = v_l_2161_;
v_isShared_2172_ = v_isSharedCheck_2183_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_v_2169_);
lean_inc(v_k_2168_);
lean_dec(v_l_2161_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2183_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2173_; lean_object* v___x_2175_; 
v___x_2173_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2162_, 2);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 4, v_r_2162_);
lean_ctor_set(v___x_2171_, 3, v_r_2162_);
lean_ctor_set(v___x_2171_, 2, v_v_2068_);
lean_ctor_set(v___x_2171_, 1, v_k_2067_);
lean_ctor_set(v___x_2171_, 0, v___x_2077_);
v___x_2175_ = v___x_2171_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v___x_2077_);
lean_ctor_set(v_reuseFailAlloc_2182_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2182_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2182_, 3, v_r_2162_);
lean_ctor_set(v_reuseFailAlloc_2182_, 4, v_r_2162_);
v___x_2175_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
lean_object* v___x_2177_; 
lean_inc(v_r_2162_);
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 3, v_r_2162_);
lean_ctor_set(v___x_2166_, 0, v___x_2077_);
v___x_2177_ = v___x_2166_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2077_);
lean_ctor_set(v_reuseFailAlloc_2181_, 1, v_k_2163_);
lean_ctor_set(v_reuseFailAlloc_2181_, 2, v_v_2164_);
lean_ctor_set(v_reuseFailAlloc_2181_, 3, v_r_2162_);
lean_ctor_set(v_reuseFailAlloc_2181_, 4, v_r_2162_);
v___x_2177_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
lean_object* v___x_2179_; 
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v___x_2177_);
lean_ctor_set(v___x_2072_, 3, v___x_2175_);
lean_ctor_set(v___x_2072_, 2, v_v_2169_);
lean_ctor_set(v___x_2072_, 1, v_k_2168_);
lean_ctor_set(v___x_2072_, 0, v___x_2173_);
v___x_2179_ = v___x_2072_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v___x_2173_);
lean_ctor_set(v_reuseFailAlloc_2180_, 1, v_k_2168_);
lean_ctor_set(v_reuseFailAlloc_2180_, 2, v_v_2169_);
lean_ctor_set(v_reuseFailAlloc_2180_, 3, v___x_2175_);
lean_ctor_set(v_reuseFailAlloc_2180_, 4, v___x_2177_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
}
}
}
else
{
lean_object* v_r_2190_; 
v_r_2190_ = lean_ctor_get(v_impl_2076_, 4);
lean_inc(v_r_2190_);
if (lean_obj_tag(v_r_2190_) == 0)
{
lean_object* v_k_2191_; lean_object* v_v_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2203_; 
v_k_2191_ = lean_ctor_get(v_impl_2076_, 1);
v_v_2192_ = lean_ctor_get(v_impl_2076_, 2);
v_isSharedCheck_2203_ = !lean_is_exclusive(v_impl_2076_);
if (v_isSharedCheck_2203_ == 0)
{
lean_object* v_unused_2204_; lean_object* v_unused_2205_; lean_object* v_unused_2206_; 
v_unused_2204_ = lean_ctor_get(v_impl_2076_, 4);
lean_dec(v_unused_2204_);
v_unused_2205_ = lean_ctor_get(v_impl_2076_, 3);
lean_dec(v_unused_2205_);
v_unused_2206_ = lean_ctor_get(v_impl_2076_, 0);
lean_dec(v_unused_2206_);
v___x_2194_ = v_impl_2076_;
v_isShared_2195_ = v_isSharedCheck_2203_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_v_2192_);
lean_inc(v_k_2191_);
lean_dec(v_impl_2076_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2203_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2196_; lean_object* v___x_2198_; 
v___x_2196_ = lean_unsigned_to_nat(3u);
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 4, v_l_2161_);
lean_ctor_set(v___x_2194_, 2, v_v_2068_);
lean_ctor_set(v___x_2194_, 1, v_k_2067_);
lean_ctor_set(v___x_2194_, 0, v___x_2077_);
v___x_2198_ = v___x_2194_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v___x_2077_);
lean_ctor_set(v_reuseFailAlloc_2202_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2202_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2202_, 3, v_l_2161_);
lean_ctor_set(v_reuseFailAlloc_2202_, 4, v_l_2161_);
v___x_2198_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
lean_object* v___x_2200_; 
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v_r_2190_);
lean_ctor_set(v___x_2072_, 3, v___x_2198_);
lean_ctor_set(v___x_2072_, 2, v_v_2192_);
lean_ctor_set(v___x_2072_, 1, v_k_2191_);
lean_ctor_set(v___x_2072_, 0, v___x_2196_);
v___x_2200_ = v___x_2072_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v___x_2196_);
lean_ctor_set(v_reuseFailAlloc_2201_, 1, v_k_2191_);
lean_ctor_set(v_reuseFailAlloc_2201_, 2, v_v_2192_);
lean_ctor_set(v_reuseFailAlloc_2201_, 3, v___x_2198_);
lean_ctor_set(v_reuseFailAlloc_2201_, 4, v_r_2190_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
}
else
{
lean_object* v___x_2207_; lean_object* v___x_2209_; 
v___x_2207_ = lean_unsigned_to_nat(2u);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v_impl_2076_);
lean_ctor_set(v___x_2072_, 3, v_r_2190_);
lean_ctor_set(v___x_2072_, 0, v___x_2207_);
v___x_2209_ = v___x_2072_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v___x_2207_);
lean_ctor_set(v_reuseFailAlloc_2210_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2210_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2210_, 3, v_r_2190_);
lean_ctor_set(v_reuseFailAlloc_2210_, 4, v_impl_2076_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
}
}
else
{
lean_object* v___x_2212_; 
lean_dec(v_v_2068_);
lean_dec(v_k_2067_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 2, v_v_2064_);
lean_ctor_set(v___x_2072_, 1, v_k_2063_);
v___x_2212_ = v___x_2072_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v_size_2066_);
lean_ctor_set(v_reuseFailAlloc_2213_, 1, v_k_2063_);
lean_ctor_set(v_reuseFailAlloc_2213_, 2, v_v_2064_);
lean_ctor_set(v_reuseFailAlloc_2213_, 3, v_l_2069_);
lean_ctor_set(v_reuseFailAlloc_2213_, 4, v_r_2070_);
v___x_2212_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
return v___x_2212_;
}
}
}
else
{
lean_object* v_impl_2214_; lean_object* v___x_2215_; 
lean_dec(v_size_2066_);
v_impl_2214_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0___redArg(v_k_2063_, v_v_2064_, v_l_2069_);
v___x_2215_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_2070_) == 0)
{
lean_object* v_size_2216_; lean_object* v_size_2217_; lean_object* v_k_2218_; lean_object* v_v_2219_; lean_object* v_l_2220_; lean_object* v_r_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; uint8_t v___x_2224_; 
v_size_2216_ = lean_ctor_get(v_r_2070_, 0);
v_size_2217_ = lean_ctor_get(v_impl_2214_, 0);
lean_inc(v_size_2217_);
v_k_2218_ = lean_ctor_get(v_impl_2214_, 1);
lean_inc(v_k_2218_);
v_v_2219_ = lean_ctor_get(v_impl_2214_, 2);
lean_inc(v_v_2219_);
v_l_2220_ = lean_ctor_get(v_impl_2214_, 3);
lean_inc(v_l_2220_);
v_r_2221_ = lean_ctor_get(v_impl_2214_, 4);
lean_inc(v_r_2221_);
v___x_2222_ = lean_unsigned_to_nat(3u);
v___x_2223_ = lean_nat_mul(v___x_2222_, v_size_2216_);
v___x_2224_ = lean_nat_dec_lt(v___x_2223_, v_size_2217_);
lean_dec(v___x_2223_);
if (v___x_2224_ == 0)
{
lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2228_; 
lean_dec(v_r_2221_);
lean_dec(v_l_2220_);
lean_dec(v_v_2219_);
lean_dec(v_k_2218_);
v___x_2225_ = lean_nat_add(v___x_2215_, v_size_2217_);
lean_dec(v_size_2217_);
v___x_2226_ = lean_nat_add(v___x_2225_, v_size_2216_);
lean_dec(v___x_2225_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 3, v_impl_2214_);
lean_ctor_set(v___x_2072_, 0, v___x_2226_);
v___x_2228_ = v___x_2072_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v___x_2226_);
lean_ctor_set(v_reuseFailAlloc_2229_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2229_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2229_, 3, v_impl_2214_);
lean_ctor_set(v_reuseFailAlloc_2229_, 4, v_r_2070_);
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
lean_object* v___x_2231_; uint8_t v_isShared_2232_; uint8_t v_isSharedCheck_2295_; 
v_isSharedCheck_2295_ = !lean_is_exclusive(v_impl_2214_);
if (v_isSharedCheck_2295_ == 0)
{
lean_object* v_unused_2296_; lean_object* v_unused_2297_; lean_object* v_unused_2298_; lean_object* v_unused_2299_; lean_object* v_unused_2300_; 
v_unused_2296_ = lean_ctor_get(v_impl_2214_, 4);
lean_dec(v_unused_2296_);
v_unused_2297_ = lean_ctor_get(v_impl_2214_, 3);
lean_dec(v_unused_2297_);
v_unused_2298_ = lean_ctor_get(v_impl_2214_, 2);
lean_dec(v_unused_2298_);
v_unused_2299_ = lean_ctor_get(v_impl_2214_, 1);
lean_dec(v_unused_2299_);
v_unused_2300_ = lean_ctor_get(v_impl_2214_, 0);
lean_dec(v_unused_2300_);
v___x_2231_ = v_impl_2214_;
v_isShared_2232_ = v_isSharedCheck_2295_;
goto v_resetjp_2230_;
}
else
{
lean_dec(v_impl_2214_);
v___x_2231_ = lean_box(0);
v_isShared_2232_ = v_isSharedCheck_2295_;
goto v_resetjp_2230_;
}
v_resetjp_2230_:
{
lean_object* v_size_2233_; lean_object* v_size_2234_; lean_object* v_k_2235_; lean_object* v_v_2236_; lean_object* v_l_2237_; lean_object* v_r_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; uint8_t v___x_2241_; 
v_size_2233_ = lean_ctor_get(v_l_2220_, 0);
v_size_2234_ = lean_ctor_get(v_r_2221_, 0);
v_k_2235_ = lean_ctor_get(v_r_2221_, 1);
v_v_2236_ = lean_ctor_get(v_r_2221_, 2);
v_l_2237_ = lean_ctor_get(v_r_2221_, 3);
v_r_2238_ = lean_ctor_get(v_r_2221_, 4);
v___x_2239_ = lean_unsigned_to_nat(2u);
v___x_2240_ = lean_nat_mul(v___x_2239_, v_size_2233_);
v___x_2241_ = lean_nat_dec_lt(v_size_2234_, v___x_2240_);
lean_dec(v___x_2240_);
if (v___x_2241_ == 0)
{
lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2270_; 
lean_inc(v_r_2238_);
lean_inc(v_l_2237_);
lean_inc(v_v_2236_);
lean_inc(v_k_2235_);
v_isSharedCheck_2270_ = !lean_is_exclusive(v_r_2221_);
if (v_isSharedCheck_2270_ == 0)
{
lean_object* v_unused_2271_; lean_object* v_unused_2272_; lean_object* v_unused_2273_; lean_object* v_unused_2274_; lean_object* v_unused_2275_; 
v_unused_2271_ = lean_ctor_get(v_r_2221_, 4);
lean_dec(v_unused_2271_);
v_unused_2272_ = lean_ctor_get(v_r_2221_, 3);
lean_dec(v_unused_2272_);
v_unused_2273_ = lean_ctor_get(v_r_2221_, 2);
lean_dec(v_unused_2273_);
v_unused_2274_ = lean_ctor_get(v_r_2221_, 1);
lean_dec(v_unused_2274_);
v_unused_2275_ = lean_ctor_get(v_r_2221_, 0);
lean_dec(v_unused_2275_);
v___x_2243_ = v_r_2221_;
v_isShared_2244_ = v_isSharedCheck_2270_;
goto v_resetjp_2242_;
}
else
{
lean_dec(v_r_2221_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2270_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___y_2248_; lean_object* v___y_2249_; lean_object* v___y_2250_; lean_object* v___x_2258_; lean_object* v___y_2260_; 
v___x_2245_ = lean_nat_add(v___x_2215_, v_size_2217_);
lean_dec(v_size_2217_);
v___x_2246_ = lean_nat_add(v___x_2245_, v_size_2216_);
lean_dec(v___x_2245_);
v___x_2258_ = lean_nat_add(v___x_2215_, v_size_2233_);
if (lean_obj_tag(v_l_2237_) == 0)
{
lean_object* v_size_2268_; 
v_size_2268_ = lean_ctor_get(v_l_2237_, 0);
lean_inc(v_size_2268_);
v___y_2260_ = v_size_2268_;
goto v___jp_2259_;
}
else
{
lean_object* v___x_2269_; 
v___x_2269_ = lean_unsigned_to_nat(0u);
v___y_2260_ = v___x_2269_;
goto v___jp_2259_;
}
v___jp_2247_:
{
lean_object* v___x_2251_; lean_object* v___x_2253_; 
v___x_2251_ = lean_nat_add(v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec(v___y_2249_);
if (v_isShared_2244_ == 0)
{
lean_ctor_set(v___x_2243_, 4, v_r_2070_);
lean_ctor_set(v___x_2243_, 3, v_r_2238_);
lean_ctor_set(v___x_2243_, 2, v_v_2068_);
lean_ctor_set(v___x_2243_, 1, v_k_2067_);
lean_ctor_set(v___x_2243_, 0, v___x_2251_);
v___x_2253_ = v___x_2243_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2251_);
lean_ctor_set(v_reuseFailAlloc_2257_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2257_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2257_, 3, v_r_2238_);
lean_ctor_set(v_reuseFailAlloc_2257_, 4, v_r_2070_);
v___x_2253_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
lean_object* v___x_2255_; 
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 4, v___x_2253_);
lean_ctor_set(v___x_2231_, 3, v___y_2248_);
lean_ctor_set(v___x_2231_, 2, v_v_2236_);
lean_ctor_set(v___x_2231_, 1, v_k_2235_);
lean_ctor_set(v___x_2231_, 0, v___x_2246_);
v___x_2255_ = v___x_2231_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v___x_2246_);
lean_ctor_set(v_reuseFailAlloc_2256_, 1, v_k_2235_);
lean_ctor_set(v_reuseFailAlloc_2256_, 2, v_v_2236_);
lean_ctor_set(v_reuseFailAlloc_2256_, 3, v___y_2248_);
lean_ctor_set(v_reuseFailAlloc_2256_, 4, v___x_2253_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
v___jp_2259_:
{
lean_object* v___x_2261_; lean_object* v___x_2263_; 
v___x_2261_ = lean_nat_add(v___x_2258_, v___y_2260_);
lean_dec(v___y_2260_);
lean_dec(v___x_2258_);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v_l_2237_);
lean_ctor_set(v___x_2072_, 3, v_l_2220_);
lean_ctor_set(v___x_2072_, 2, v_v_2219_);
lean_ctor_set(v___x_2072_, 1, v_k_2218_);
lean_ctor_set(v___x_2072_, 0, v___x_2261_);
v___x_2263_ = v___x_2072_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v___x_2261_);
lean_ctor_set(v_reuseFailAlloc_2267_, 1, v_k_2218_);
lean_ctor_set(v_reuseFailAlloc_2267_, 2, v_v_2219_);
lean_ctor_set(v_reuseFailAlloc_2267_, 3, v_l_2220_);
lean_ctor_set(v_reuseFailAlloc_2267_, 4, v_l_2237_);
v___x_2263_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
lean_object* v___x_2264_; 
v___x_2264_ = lean_nat_add(v___x_2215_, v_size_2216_);
if (lean_obj_tag(v_r_2238_) == 0)
{
lean_object* v_size_2265_; 
v_size_2265_ = lean_ctor_get(v_r_2238_, 0);
lean_inc(v_size_2265_);
v___y_2248_ = v___x_2263_;
v___y_2249_ = v___x_2264_;
v___y_2250_ = v_size_2265_;
goto v___jp_2247_;
}
else
{
lean_object* v___x_2266_; 
v___x_2266_ = lean_unsigned_to_nat(0u);
v___y_2248_ = v___x_2263_;
v___y_2249_ = v___x_2264_;
v___y_2250_ = v___x_2266_;
goto v___jp_2247_;
}
}
}
}
}
else
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2281_; 
lean_del_object(v___x_2072_);
v___x_2276_ = lean_nat_add(v___x_2215_, v_size_2217_);
lean_dec(v_size_2217_);
v___x_2277_ = lean_nat_add(v___x_2276_, v_size_2216_);
lean_dec(v___x_2276_);
v___x_2278_ = lean_nat_add(v___x_2215_, v_size_2216_);
v___x_2279_ = lean_nat_add(v___x_2278_, v_size_2234_);
lean_dec(v___x_2278_);
lean_inc_ref(v_r_2070_);
if (v_isShared_2232_ == 0)
{
lean_ctor_set(v___x_2231_, 4, v_r_2070_);
lean_ctor_set(v___x_2231_, 3, v_r_2221_);
lean_ctor_set(v___x_2231_, 2, v_v_2068_);
lean_ctor_set(v___x_2231_, 1, v_k_2067_);
lean_ctor_set(v___x_2231_, 0, v___x_2279_);
v___x_2281_ = v___x_2231_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v___x_2279_);
lean_ctor_set(v_reuseFailAlloc_2294_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2294_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2294_, 3, v_r_2221_);
lean_ctor_set(v_reuseFailAlloc_2294_, 4, v_r_2070_);
v___x_2281_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2288_; 
v_isSharedCheck_2288_ = !lean_is_exclusive(v_r_2070_);
if (v_isSharedCheck_2288_ == 0)
{
lean_object* v_unused_2289_; lean_object* v_unused_2290_; lean_object* v_unused_2291_; lean_object* v_unused_2292_; lean_object* v_unused_2293_; 
v_unused_2289_ = lean_ctor_get(v_r_2070_, 4);
lean_dec(v_unused_2289_);
v_unused_2290_ = lean_ctor_get(v_r_2070_, 3);
lean_dec(v_unused_2290_);
v_unused_2291_ = lean_ctor_get(v_r_2070_, 2);
lean_dec(v_unused_2291_);
v_unused_2292_ = lean_ctor_get(v_r_2070_, 1);
lean_dec(v_unused_2292_);
v_unused_2293_ = lean_ctor_get(v_r_2070_, 0);
lean_dec(v_unused_2293_);
v___x_2283_ = v_r_2070_;
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
else
{
lean_dec(v_r_2070_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2288_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2286_; 
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 4, v___x_2281_);
lean_ctor_set(v___x_2283_, 3, v_l_2220_);
lean_ctor_set(v___x_2283_, 2, v_v_2219_);
lean_ctor_set(v___x_2283_, 1, v_k_2218_);
lean_ctor_set(v___x_2283_, 0, v___x_2277_);
v___x_2286_ = v___x_2283_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v___x_2277_);
lean_ctor_set(v_reuseFailAlloc_2287_, 1, v_k_2218_);
lean_ctor_set(v_reuseFailAlloc_2287_, 2, v_v_2219_);
lean_ctor_set(v_reuseFailAlloc_2287_, 3, v_l_2220_);
lean_ctor_set(v_reuseFailAlloc_2287_, 4, v___x_2281_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2301_; 
v_l_2301_ = lean_ctor_get(v_impl_2214_, 3);
lean_inc(v_l_2301_);
if (lean_obj_tag(v_l_2301_) == 0)
{
lean_object* v_r_2302_; lean_object* v_k_2303_; lean_object* v_v_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2315_; 
v_r_2302_ = lean_ctor_get(v_impl_2214_, 4);
v_k_2303_ = lean_ctor_get(v_impl_2214_, 1);
v_v_2304_ = lean_ctor_get(v_impl_2214_, 2);
v_isSharedCheck_2315_ = !lean_is_exclusive(v_impl_2214_);
if (v_isSharedCheck_2315_ == 0)
{
lean_object* v_unused_2316_; lean_object* v_unused_2317_; 
v_unused_2316_ = lean_ctor_get(v_impl_2214_, 3);
lean_dec(v_unused_2316_);
v_unused_2317_ = lean_ctor_get(v_impl_2214_, 0);
lean_dec(v_unused_2317_);
v___x_2306_ = v_impl_2214_;
v_isShared_2307_ = v_isSharedCheck_2315_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_r_2302_);
lean_inc(v_v_2304_);
lean_inc(v_k_2303_);
lean_dec(v_impl_2214_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2315_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; lean_object* v___x_2310_; 
v___x_2308_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2302_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 3, v_r_2302_);
lean_ctor_set(v___x_2306_, 2, v_v_2068_);
lean_ctor_set(v___x_2306_, 1, v_k_2067_);
lean_ctor_set(v___x_2306_, 0, v___x_2215_);
v___x_2310_ = v___x_2306_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v___x_2215_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2314_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2314_, 3, v_r_2302_);
lean_ctor_set(v_reuseFailAlloc_2314_, 4, v_r_2302_);
v___x_2310_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
lean_object* v___x_2312_; 
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v___x_2310_);
lean_ctor_set(v___x_2072_, 3, v_l_2301_);
lean_ctor_set(v___x_2072_, 2, v_v_2304_);
lean_ctor_set(v___x_2072_, 1, v_k_2303_);
lean_ctor_set(v___x_2072_, 0, v___x_2308_);
v___x_2312_ = v___x_2072_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v___x_2308_);
lean_ctor_set(v_reuseFailAlloc_2313_, 1, v_k_2303_);
lean_ctor_set(v_reuseFailAlloc_2313_, 2, v_v_2304_);
lean_ctor_set(v_reuseFailAlloc_2313_, 3, v_l_2301_);
lean_ctor_set(v_reuseFailAlloc_2313_, 4, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
return v___x_2312_;
}
}
}
}
else
{
lean_object* v_r_2318_; 
v_r_2318_ = lean_ctor_get(v_impl_2214_, 4);
lean_inc(v_r_2318_);
if (lean_obj_tag(v_r_2318_) == 0)
{
lean_object* v_k_2319_; lean_object* v_v_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2343_; 
v_k_2319_ = lean_ctor_get(v_impl_2214_, 1);
v_v_2320_ = lean_ctor_get(v_impl_2214_, 2);
v_isSharedCheck_2343_ = !lean_is_exclusive(v_impl_2214_);
if (v_isSharedCheck_2343_ == 0)
{
lean_object* v_unused_2344_; lean_object* v_unused_2345_; lean_object* v_unused_2346_; 
v_unused_2344_ = lean_ctor_get(v_impl_2214_, 4);
lean_dec(v_unused_2344_);
v_unused_2345_ = lean_ctor_get(v_impl_2214_, 3);
lean_dec(v_unused_2345_);
v_unused_2346_ = lean_ctor_get(v_impl_2214_, 0);
lean_dec(v_unused_2346_);
v___x_2322_ = v_impl_2214_;
v_isShared_2323_ = v_isSharedCheck_2343_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_v_2320_);
lean_inc(v_k_2319_);
lean_dec(v_impl_2214_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2343_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v_k_2324_; lean_object* v_v_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2339_; 
v_k_2324_ = lean_ctor_get(v_r_2318_, 1);
v_v_2325_ = lean_ctor_get(v_r_2318_, 2);
v_isSharedCheck_2339_ = !lean_is_exclusive(v_r_2318_);
if (v_isSharedCheck_2339_ == 0)
{
lean_object* v_unused_2340_; lean_object* v_unused_2341_; lean_object* v_unused_2342_; 
v_unused_2340_ = lean_ctor_get(v_r_2318_, 4);
lean_dec(v_unused_2340_);
v_unused_2341_ = lean_ctor_get(v_r_2318_, 3);
lean_dec(v_unused_2341_);
v_unused_2342_ = lean_ctor_get(v_r_2318_, 0);
lean_dec(v_unused_2342_);
v___x_2327_ = v_r_2318_;
v_isShared_2328_ = v_isSharedCheck_2339_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_v_2325_);
lean_inc(v_k_2324_);
lean_dec(v_r_2318_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2339_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2329_; lean_object* v___x_2331_; 
v___x_2329_ = lean_unsigned_to_nat(3u);
if (v_isShared_2328_ == 0)
{
lean_ctor_set(v___x_2327_, 4, v_l_2301_);
lean_ctor_set(v___x_2327_, 3, v_l_2301_);
lean_ctor_set(v___x_2327_, 2, v_v_2320_);
lean_ctor_set(v___x_2327_, 1, v_k_2319_);
lean_ctor_set(v___x_2327_, 0, v___x_2215_);
v___x_2331_ = v___x_2327_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v___x_2215_);
lean_ctor_set(v_reuseFailAlloc_2338_, 1, v_k_2319_);
lean_ctor_set(v_reuseFailAlloc_2338_, 2, v_v_2320_);
lean_ctor_set(v_reuseFailAlloc_2338_, 3, v_l_2301_);
lean_ctor_set(v_reuseFailAlloc_2338_, 4, v_l_2301_);
v___x_2331_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
lean_object* v___x_2333_; 
if (v_isShared_2323_ == 0)
{
lean_ctor_set(v___x_2322_, 4, v_l_2301_);
lean_ctor_set(v___x_2322_, 2, v_v_2068_);
lean_ctor_set(v___x_2322_, 1, v_k_2067_);
lean_ctor_set(v___x_2322_, 0, v___x_2215_);
v___x_2333_ = v___x_2322_;
goto v_reusejp_2332_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v___x_2215_);
lean_ctor_set(v_reuseFailAlloc_2337_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2337_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2337_, 3, v_l_2301_);
lean_ctor_set(v_reuseFailAlloc_2337_, 4, v_l_2301_);
v___x_2333_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2332_;
}
v_reusejp_2332_:
{
lean_object* v___x_2335_; 
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v___x_2333_);
lean_ctor_set(v___x_2072_, 3, v___x_2331_);
lean_ctor_set(v___x_2072_, 2, v_v_2325_);
lean_ctor_set(v___x_2072_, 1, v_k_2324_);
lean_ctor_set(v___x_2072_, 0, v___x_2329_);
v___x_2335_ = v___x_2072_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v___x_2329_);
lean_ctor_set(v_reuseFailAlloc_2336_, 1, v_k_2324_);
lean_ctor_set(v_reuseFailAlloc_2336_, 2, v_v_2325_);
lean_ctor_set(v_reuseFailAlloc_2336_, 3, v___x_2331_);
lean_ctor_set(v_reuseFailAlloc_2336_, 4, v___x_2333_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
}
}
else
{
lean_object* v___x_2347_; lean_object* v___x_2349_; 
v___x_2347_ = lean_unsigned_to_nat(2u);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v_r_2318_);
lean_ctor_set(v___x_2072_, 3, v_impl_2214_);
lean_ctor_set(v___x_2072_, 0, v___x_2347_);
v___x_2349_ = v___x_2072_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v___x_2347_);
lean_ctor_set(v_reuseFailAlloc_2350_, 1, v_k_2067_);
lean_ctor_set(v_reuseFailAlloc_2350_, 2, v_v_2068_);
lean_ctor_set(v_reuseFailAlloc_2350_, 3, v_impl_2214_);
lean_ctor_set(v_reuseFailAlloc_2350_, 4, v_r_2318_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2352_; lean_object* v___x_2353_; 
v___x_2352_ = lean_unsigned_to_nat(1u);
v___x_2353_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2352_);
lean_ctor_set(v___x_2353_, 1, v_k_2063_);
lean_ctor_set(v___x_2353_, 2, v_v_2064_);
lean_ctor_set(v___x_2353_, 3, v_t_2065_);
lean_ctor_set(v___x_2353_, 4, v_t_2065_);
return v___x_2353_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___redArg(lean_object* v_k_2354_, lean_object* v_v_2355_, lean_object* v_x_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v___x_2364_; lean_object* v_a_2365_; lean_object* v_optionsPerPos_2366_; lean_object* v_currNamespace_2367_; lean_object* v_openDecls_2368_; uint8_t v_inPattern_2369_; lean_object* v_subExpr_2370_; lean_object* v_depth_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2386_; 
v___x_2364_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg(v_a_2357_);
v_a_2365_ = lean_ctor_get(v___x_2364_, 0);
lean_inc(v_a_2365_);
lean_dec_ref(v___x_2364_);
v_optionsPerPos_2366_ = lean_ctor_get(v_a_2357_, 0);
v_currNamespace_2367_ = lean_ctor_get(v_a_2357_, 1);
v_openDecls_2368_ = lean_ctor_get(v_a_2357_, 2);
v_inPattern_2369_ = lean_ctor_get_uint8(v_a_2357_, sizeof(void*)*5);
v_subExpr_2370_ = lean_ctor_get(v_a_2357_, 3);
v_depth_2371_ = lean_ctor_get(v_a_2357_, 4);
v_isSharedCheck_2386_ = !lean_is_exclusive(v_a_2357_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2373_ = v_a_2357_;
v_isShared_2374_ = v_isSharedCheck_2386_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_depth_2371_);
lean_inc(v_subExpr_2370_);
lean_inc(v_openDecls_2368_);
lean_inc(v_currNamespace_2367_);
lean_inc(v_optionsPerPos_2366_);
lean_dec(v_a_2357_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2386_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___y_2376_; lean_object* v___x_2383_; 
v___x_2383_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__2___redArg(v_optionsPerPos_2366_, v_a_2365_);
if (lean_obj_tag(v___x_2383_) == 0)
{
lean_object* v___x_2384_; 
v___x_2384_ = l_Lean_Options_empty;
v___y_2376_ = v___x_2384_;
goto v___jp_2375_;
}
else
{
lean_object* v_val_2385_; 
v_val_2385_ = lean_ctor_get(v___x_2383_, 0);
lean_inc(v_val_2385_);
lean_dec_ref(v___x_2383_);
v___y_2376_ = v_val_2385_;
goto v___jp_2375_;
}
v___jp_2375_:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2380_; 
v___x_2377_ = l_Lean_Options_set___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__0(v___y_2376_, v_k_2354_, v_v_2355_);
v___x_2378_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0___redArg(v_a_2365_, v___x_2377_, v_optionsPerPos_2366_);
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 0, v___x_2378_);
v___x_2380_ = v___x_2373_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v___x_2378_);
lean_ctor_set(v_reuseFailAlloc_2382_, 1, v_currNamespace_2367_);
lean_ctor_set(v_reuseFailAlloc_2382_, 2, v_openDecls_2368_);
lean_ctor_set(v_reuseFailAlloc_2382_, 3, v_subExpr_2370_);
lean_ctor_set(v_reuseFailAlloc_2382_, 4, v_depth_2371_);
lean_ctor_set_uint8(v_reuseFailAlloc_2382_, sizeof(void*)*5, v_inPattern_2369_);
v___x_2380_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
lean_object* v___x_2381_; 
v___x_2381_ = lean_apply_7(v_x_2356_, v___x_2380_, v_a_2358_, v_a_2359_, v_a_2360_, v_a_2361_, v_a_2362_, lean_box(0));
return v___x_2381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___redArg___boxed(lean_object* v_k_2387_, lean_object* v_v_2388_, lean_object* v_x_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_){
_start:
{
lean_object* v_res_2397_; 
v_res_2397_ = l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___redArg(v_k_2387_, v_v_2388_, v_x_2389_, v_a_2390_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_);
return v_res_2397_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos(lean_object* v_00_u03b1_2398_, lean_object* v_k_2399_, lean_object* v_v_2400_, lean_object* v_x_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___redArg(v_k_2399_, v_v_2400_, v_x_2401_, v_a_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___boxed(lean_object* v_00_u03b1_2410_, lean_object* v_k_2411_, lean_object* v_v_2412_, lean_object* v_x_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos(v_00_u03b1_2410_, v_k_2411_, v_v_2412_, v_x_2413_, v_a_2414_, v_a_2415_, v_a_2416_, v_a_2417_, v_a_2418_, v_a_2419_);
return v_res_2421_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0(lean_object* v_00_u03b2_2422_, lean_object* v_k_2423_, lean_object* v_v_2424_, lean_object* v_t_2425_, lean_object* v_hl_2426_){
_start:
{
lean_object* v___x_2427_; 
v___x_2427_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0___redArg(v_k_2423_, v_v_2424_, v_t_2425_);
return v___x_2427_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotatePos(lean_object* v_pos_2428_, lean_object* v_stx_2429_){
_start:
{
uint8_t v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; 
v___x_2430_ = 0;
lean_inc(v_pos_2428_);
v___x_2431_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_2431_, 0, v_pos_2428_);
lean_ctor_set(v___x_2431_, 1, v_pos_2428_);
lean_ctor_set_uint8(v___x_2431_, sizeof(void*)*2, v___x_2430_);
v___x_2432_ = l_Lean_Syntax_setInfo(v___x_2431_, v_stx_2429_);
return v___x_2432_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateCurPos___redArg(lean_object* v_stx_2433_, lean_object* v_a_2434_){
_start:
{
lean_object* v___x_2436_; lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2445_; 
v___x_2436_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg(v_a_2434_);
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2439_ = v___x_2436_;
v_isShared_2440_ = v_isSharedCheck_2445_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___x_2436_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2445_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2441_; lean_object* v___x_2443_; 
v___x_2441_ = l_Lean_PrettyPrinter_Delaborator_annotatePos(v_a_2437_, v_stx_2433_);
if (v_isShared_2440_ == 0)
{
lean_ctor_set(v___x_2439_, 0, v___x_2441_);
v___x_2443_ = v___x_2439_;
goto v_reusejp_2442_;
}
else
{
lean_object* v_reuseFailAlloc_2444_; 
v_reuseFailAlloc_2444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2444_, 0, v___x_2441_);
v___x_2443_ = v_reuseFailAlloc_2444_;
goto v_reusejp_2442_;
}
v_reusejp_2442_:
{
return v___x_2443_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateCurPos___redArg___boxed(lean_object* v_stx_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_){
_start:
{
lean_object* v_res_2449_; 
v_res_2449_ = l_Lean_PrettyPrinter_Delaborator_annotateCurPos___redArg(v_stx_2446_, v_a_2447_);
lean_dec_ref(v_a_2447_);
return v_res_2449_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateCurPos(lean_object* v_stx_2450_, lean_object* v_a_2451_, lean_object* v_a_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_){
_start:
{
lean_object* v___x_2458_; 
v___x_2458_ = l_Lean_PrettyPrinter_Delaborator_annotateCurPos___redArg(v_stx_2450_, v_a_2451_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateCurPos___boxed(lean_object* v_stx_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_){
_start:
{
lean_object* v_res_2467_; 
v_res_2467_ = l_Lean_PrettyPrinter_Delaborator_annotateCurPos(v_stx_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_, v_a_2465_);
lean_dec(v_a_2465_);
lean_dec_ref(v_a_2464_);
lean_dec(v_a_2463_);
lean_dec_ref(v_a_2462_);
lean_dec(v_a_2461_);
lean_dec_ref(v_a_2460_);
return v_res_2467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg(lean_object* v_stx_2470_, lean_object* v_e_2471_, uint8_t v_isBinder_2472_, lean_object* v_a_2473_){
_start:
{
lean_object* v_lctx_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; uint8_t v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
v_lctx_2475_ = lean_ctor_get(v_a_2473_, 2);
v___x_2476_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg___closed__0));
v___x_2477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
lean_ctor_set(v___x_2477_, 1, v_stx_2470_);
v___x_2478_ = lean_box(0);
v___x_2479_ = 0;
lean_inc_ref(v_lctx_2475_);
v___x_2480_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2480_, 0, v___x_2477_);
lean_ctor_set(v___x_2480_, 1, v_lctx_2475_);
lean_ctor_set(v___x_2480_, 2, v___x_2478_);
lean_ctor_set(v___x_2480_, 3, v_e_2471_);
lean_ctor_set_uint8(v___x_2480_, sizeof(void*)*4, v_isBinder_2472_);
lean_ctor_set_uint8(v___x_2480_, sizeof(void*)*4 + 1, v___x_2479_);
v___x_2481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2480_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg___boxed(lean_object* v_stx_2482_, lean_object* v_e_2483_, lean_object* v_isBinder_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_){
_start:
{
uint8_t v_isBinder_boxed_2487_; lean_object* v_res_2488_; 
v_isBinder_boxed_2487_ = lean_unbox(v_isBinder_2484_);
v_res_2488_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg(v_stx_2482_, v_e_2483_, v_isBinder_boxed_2487_, v_a_2485_);
lean_dec_ref(v_a_2485_);
return v_res_2488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo(lean_object* v_stx_2489_, lean_object* v_e_2490_, uint8_t v_isBinder_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg(v_stx_2489_, v_e_2490_, v_isBinder_2491_, v_a_2494_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___boxed(lean_object* v_stx_2500_, lean_object* v_e_2501_, lean_object* v_isBinder_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_){
_start:
{
uint8_t v_isBinder_boxed_2510_; lean_object* v_res_2511_; 
v_isBinder_boxed_2510_ = lean_unbox(v_isBinder_2502_);
v_res_2511_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo(v_stx_2500_, v_e_2501_, v_isBinder_boxed_2510_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_);
lean_dec(v_a_2508_);
lean_dec_ref(v_a_2507_);
lean_dec(v_a_2506_);
lean_dec_ref(v_a_2505_);
lean_dec(v_a_2504_);
lean_dec_ref(v_a_2503_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addTermInfo___redArg(lean_object* v_pos_2512_, lean_object* v_stx_2513_, lean_object* v_e_2514_, uint8_t v_isBinder_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_){
_start:
{
lean_object* v___x_2519_; lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2542_; 
v___x_2519_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg(v_stx_2513_, v_e_2514_, v_isBinder_2515_, v_a_2517_);
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2522_ = v___x_2519_;
v_isShared_2523_ = v_isSharedCheck_2542_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2519_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2542_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2524_; lean_object* v_steps_2525_; lean_object* v_infos_2526_; lean_object* v_holeIter_2527_; lean_object* v___x_2529_; uint8_t v_isShared_2530_; uint8_t v_isSharedCheck_2541_; 
v___x_2524_ = lean_st_ref_take(v_a_2516_);
v_steps_2525_ = lean_ctor_get(v___x_2524_, 0);
v_infos_2526_ = lean_ctor_get(v___x_2524_, 1);
v_holeIter_2527_ = lean_ctor_get(v___x_2524_, 2);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2541_ == 0)
{
v___x_2529_ = v___x_2524_;
v_isShared_2530_ = v_isSharedCheck_2541_;
goto v_resetjp_2528_;
}
else
{
lean_inc(v_holeIter_2527_);
lean_inc(v_infos_2526_);
lean_inc(v_steps_2525_);
lean_dec(v___x_2524_);
v___x_2529_ = lean_box(0);
v_isShared_2530_ = v_isSharedCheck_2541_;
goto v_resetjp_2528_;
}
v_resetjp_2528_:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2534_; 
v___x_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2531_, 0, v_a_2520_);
v___x_2532_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0___redArg(v_pos_2512_, v___x_2531_, v_infos_2526_);
if (v_isShared_2530_ == 0)
{
lean_ctor_set(v___x_2529_, 1, v___x_2532_);
v___x_2534_ = v___x_2529_;
goto v_reusejp_2533_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_steps_2525_);
lean_ctor_set(v_reuseFailAlloc_2540_, 1, v___x_2532_);
lean_ctor_set(v_reuseFailAlloc_2540_, 2, v_holeIter_2527_);
v___x_2534_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2533_;
}
v_reusejp_2533_:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2538_; 
v___x_2535_ = lean_st_ref_set(v_a_2516_, v___x_2534_);
v___x_2536_ = lean_box(0);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v___x_2536_);
v___x_2538_ = v___x_2522_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2536_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addTermInfo___redArg___boxed(lean_object* v_pos_2543_, lean_object* v_stx_2544_, lean_object* v_e_2545_, lean_object* v_isBinder_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_){
_start:
{
uint8_t v_isBinder_boxed_2550_; lean_object* v_res_2551_; 
v_isBinder_boxed_2550_ = lean_unbox(v_isBinder_2546_);
v_res_2551_ = l_Lean_PrettyPrinter_Delaborator_addTermInfo___redArg(v_pos_2543_, v_stx_2544_, v_e_2545_, v_isBinder_boxed_2550_, v_a_2547_, v_a_2548_);
lean_dec_ref(v_a_2548_);
lean_dec(v_a_2547_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addTermInfo(lean_object* v_pos_2552_, lean_object* v_stx_2553_, lean_object* v_e_2554_, uint8_t v_isBinder_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_){
_start:
{
lean_object* v___x_2563_; 
v___x_2563_ = l_Lean_PrettyPrinter_Delaborator_addTermInfo___redArg(v_pos_2552_, v_stx_2553_, v_e_2554_, v_isBinder_2555_, v_a_2557_, v_a_2558_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addTermInfo___boxed(lean_object* v_pos_2564_, lean_object* v_stx_2565_, lean_object* v_e_2566_, lean_object* v_isBinder_2567_, lean_object* v_a_2568_, lean_object* v_a_2569_, lean_object* v_a_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_){
_start:
{
uint8_t v_isBinder_boxed_2575_; lean_object* v_res_2576_; 
v_isBinder_boxed_2575_ = lean_unbox(v_isBinder_2567_);
v_res_2576_ = l_Lean_PrettyPrinter_Delaborator_addTermInfo(v_pos_2564_, v_stx_2565_, v_e_2566_, v_isBinder_boxed_2575_, v_a_2568_, v_a_2569_, v_a_2570_, v_a_2571_, v_a_2572_, v_a_2573_);
lean_dec(v_a_2573_);
lean_dec_ref(v_a_2572_);
lean_dec(v_a_2571_);
lean_dec_ref(v_a_2570_);
lean_dec(v_a_2569_);
lean_dec_ref(v_a_2568_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo___redArg(lean_object* v_projName_2577_, lean_object* v_fieldName_2578_, lean_object* v_stx_2579_, lean_object* v_val_2580_, lean_object* v_a_2581_){
_start:
{
lean_object* v_lctx_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v_lctx_2583_ = lean_ctor_get(v_a_2581_, 2);
lean_inc_ref(v_lctx_2583_);
v___x_2584_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2584_, 0, v_projName_2577_);
lean_ctor_set(v___x_2584_, 1, v_fieldName_2578_);
lean_ctor_set(v___x_2584_, 2, v_lctx_2583_);
lean_ctor_set(v___x_2584_, 3, v_val_2580_);
lean_ctor_set(v___x_2584_, 4, v_stx_2579_);
v___x_2585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2584_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo___redArg___boxed(lean_object* v_projName_2586_, lean_object* v_fieldName_2587_, lean_object* v_stx_2588_, lean_object* v_val_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo___redArg(v_projName_2586_, v_fieldName_2587_, v_stx_2588_, v_val_2589_, v_a_2590_);
lean_dec_ref(v_a_2590_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo(lean_object* v_projName_2593_, lean_object* v_fieldName_2594_, lean_object* v_stx_2595_, lean_object* v_val_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v___x_2604_; 
v___x_2604_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo___redArg(v_projName_2593_, v_fieldName_2594_, v_stx_2595_, v_val_2596_, v_a_2599_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo___boxed(lean_object* v_projName_2605_, lean_object* v_fieldName_2606_, lean_object* v_stx_2607_, lean_object* v_val_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_){
_start:
{
lean_object* v_res_2616_; 
v_res_2616_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo(v_projName_2605_, v_fieldName_2606_, v_stx_2607_, v_val_2608_, v_a_2609_, v_a_2610_, v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_);
lean_dec(v_a_2614_);
lean_dec_ref(v_a_2613_);
lean_dec(v_a_2612_);
lean_dec_ref(v_a_2611_);
lean_dec(v_a_2610_);
lean_dec_ref(v_a_2609_);
return v_res_2616_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addFieldInfo___redArg(lean_object* v_pos_2617_, lean_object* v_projName_2618_, lean_object* v_fieldName_2619_, lean_object* v_stx_2620_, lean_object* v_val_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_){
_start:
{
lean_object* v___x_2625_; lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2648_; 
v___x_2625_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addFieldInfo_mkFieldInfo___redArg(v_projName_2618_, v_fieldName_2619_, v_stx_2620_, v_val_2621_, v_a_2623_);
v_a_2626_ = lean_ctor_get(v___x_2625_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2628_ = v___x_2625_;
v_isShared_2629_ = v_isSharedCheck_2648_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v___x_2625_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2648_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2630_; lean_object* v_steps_2631_; lean_object* v_infos_2632_; lean_object* v_holeIter_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2647_; 
v___x_2630_ = lean_st_ref_take(v_a_2622_);
v_steps_2631_ = lean_ctor_get(v___x_2630_, 0);
v_infos_2632_ = lean_ctor_get(v___x_2630_, 1);
v_holeIter_2633_ = lean_ctor_get(v___x_2630_, 2);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2630_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2635_ = v___x_2630_;
v_isShared_2636_ = v_isSharedCheck_2647_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_holeIter_2633_);
lean_inc(v_infos_2632_);
lean_inc(v_steps_2631_);
lean_dec(v___x_2630_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2647_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2640_; 
v___x_2637_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2637_, 0, v_a_2626_);
v___x_2638_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0___redArg(v_pos_2617_, v___x_2637_, v_infos_2632_);
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 1, v___x_2638_);
v___x_2640_ = v___x_2635_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_steps_2631_);
lean_ctor_set(v_reuseFailAlloc_2646_, 1, v___x_2638_);
lean_ctor_set(v_reuseFailAlloc_2646_, 2, v_holeIter_2633_);
v___x_2640_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2644_; 
v___x_2641_ = lean_st_ref_set(v_a_2622_, v___x_2640_);
v___x_2642_ = lean_box(0);
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 0, v___x_2642_);
v___x_2644_ = v___x_2628_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v___x_2642_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
return v___x_2644_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addFieldInfo___redArg___boxed(lean_object* v_pos_2649_, lean_object* v_projName_2650_, lean_object* v_fieldName_2651_, lean_object* v_stx_2652_, lean_object* v_val_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_Lean_PrettyPrinter_Delaborator_addFieldInfo___redArg(v_pos_2649_, v_projName_2650_, v_fieldName_2651_, v_stx_2652_, v_val_2653_, v_a_2654_, v_a_2655_);
lean_dec_ref(v_a_2655_);
lean_dec(v_a_2654_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addFieldInfo(lean_object* v_pos_2658_, lean_object* v_projName_2659_, lean_object* v_fieldName_2660_, lean_object* v_stx_2661_, lean_object* v_val_2662_, lean_object* v_a_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_){
_start:
{
lean_object* v___x_2670_; 
v___x_2670_ = l_Lean_PrettyPrinter_Delaborator_addFieldInfo___redArg(v_pos_2658_, v_projName_2659_, v_fieldName_2660_, v_stx_2661_, v_val_2662_, v_a_2664_, v_a_2665_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addFieldInfo___boxed(lean_object* v_pos_2671_, lean_object* v_projName_2672_, lean_object* v_fieldName_2673_, lean_object* v_stx_2674_, lean_object* v_val_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_){
_start:
{
lean_object* v_res_2683_; 
v_res_2683_ = l_Lean_PrettyPrinter_Delaborator_addFieldInfo(v_pos_2671_, v_projName_2672_, v_fieldName_2673_, v_stx_2674_, v_val_2675_, v_a_2676_, v_a_2677_, v_a_2678_, v_a_2679_, v_a_2680_, v_a_2681_);
lean_dec(v_a_2681_);
lean_dec_ref(v_a_2680_);
lean_dec(v_a_2679_);
lean_dec_ref(v_a_2678_);
lean_dec(v_a_2677_);
lean_dec_ref(v_a_2676_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo___redArg(lean_object* v_pos_2684_, lean_object* v_stx_2685_, lean_object* v_e_2686_, uint8_t v_isBinder_2687_, lean_object* v_location_x3f_2688_, lean_object* v_docString_x3f_2689_, uint8_t v_explicit_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_){
_start:
{
lean_object* v___x_2694_; lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2718_; 
v___x_2694_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_addTermInfo_mkTermInfo___redArg(v_stx_2685_, v_e_2686_, v_isBinder_2687_, v_a_2692_);
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2697_ = v___x_2694_;
v_isShared_2698_ = v_isSharedCheck_2718_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2694_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2718_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2699_; lean_object* v_steps_2700_; lean_object* v_infos_2701_; lean_object* v_holeIter_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2717_; 
v___x_2699_ = lean_st_ref_take(v_a_2691_);
v_steps_2700_ = lean_ctor_get(v___x_2699_, 0);
v_infos_2701_ = lean_ctor_get(v___x_2699_, 1);
v_holeIter_2702_ = lean_ctor_get(v___x_2699_, 2);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2704_ = v___x_2699_;
v_isShared_2705_ = v_isSharedCheck_2717_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_holeIter_2702_);
lean_inc(v_infos_2701_);
lean_inc(v_steps_2700_);
lean_dec(v___x_2699_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2717_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2710_; 
v___x_2706_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2706_, 0, v_a_2695_);
lean_ctor_set(v___x_2706_, 1, v_location_x3f_2688_);
lean_ctor_set(v___x_2706_, 2, v_docString_x3f_2689_);
lean_ctor_set_uint8(v___x_2706_, sizeof(void*)*3, v_explicit_2690_);
v___x_2707_ = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2706_);
v___x_2708_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos_spec__0___redArg(v_pos_2684_, v___x_2707_, v_infos_2701_);
if (v_isShared_2705_ == 0)
{
lean_ctor_set(v___x_2704_, 1, v___x_2708_);
v___x_2710_ = v___x_2704_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_steps_2700_);
lean_ctor_set(v_reuseFailAlloc_2716_, 1, v___x_2708_);
lean_ctor_set(v_reuseFailAlloc_2716_, 2, v_holeIter_2702_);
v___x_2710_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2714_; 
v___x_2711_ = lean_st_ref_set(v_a_2691_, v___x_2710_);
v___x_2712_ = lean_box(0);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 0, v___x_2712_);
v___x_2714_ = v___x_2697_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2712_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
return v___x_2714_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo___redArg___boxed(lean_object* v_pos_2719_, lean_object* v_stx_2720_, lean_object* v_e_2721_, lean_object* v_isBinder_2722_, lean_object* v_location_x3f_2723_, lean_object* v_docString_x3f_2724_, lean_object* v_explicit_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_a_2728_){
_start:
{
uint8_t v_isBinder_boxed_2729_; uint8_t v_explicit_boxed_2730_; lean_object* v_res_2731_; 
v_isBinder_boxed_2729_ = lean_unbox(v_isBinder_2722_);
v_explicit_boxed_2730_ = lean_unbox(v_explicit_2725_);
v_res_2731_ = l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo___redArg(v_pos_2719_, v_stx_2720_, v_e_2721_, v_isBinder_boxed_2729_, v_location_x3f_2723_, v_docString_x3f_2724_, v_explicit_boxed_2730_, v_a_2726_, v_a_2727_);
lean_dec_ref(v_a_2727_);
lean_dec(v_a_2726_);
return v_res_2731_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo(lean_object* v_pos_2732_, lean_object* v_stx_2733_, lean_object* v_e_2734_, uint8_t v_isBinder_2735_, lean_object* v_location_x3f_2736_, lean_object* v_docString_x3f_2737_, uint8_t v_explicit_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_){
_start:
{
lean_object* v___x_2746_; 
v___x_2746_ = l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo___redArg(v_pos_2732_, v_stx_2733_, v_e_2734_, v_isBinder_2735_, v_location_x3f_2736_, v_docString_x3f_2737_, v_explicit_2738_, v_a_2740_, v_a_2741_);
return v___x_2746_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo___boxed(lean_object* v_pos_2747_, lean_object* v_stx_2748_, lean_object* v_e_2749_, lean_object* v_isBinder_2750_, lean_object* v_location_x3f_2751_, lean_object* v_docString_x3f_2752_, lean_object* v_explicit_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_){
_start:
{
uint8_t v_isBinder_boxed_2761_; uint8_t v_explicit_boxed_2762_; lean_object* v_res_2763_; 
v_isBinder_boxed_2761_ = lean_unbox(v_isBinder_2750_);
v_explicit_boxed_2762_ = lean_unbox(v_explicit_2753_);
v_res_2763_ = l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo(v_pos_2747_, v_stx_2748_, v_e_2749_, v_isBinder_boxed_2761_, v_location_x3f_2751_, v_docString_x3f_2752_, v_explicit_boxed_2762_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_, v_a_2758_, v_a_2759_);
lean_dec(v_a_2759_);
lean_dec_ref(v_a_2758_);
lean_dec(v_a_2757_);
lean_dec_ref(v_a_2756_);
lean_dec(v_a_2755_);
lean_dec_ref(v_a_2754_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg(lean_object* v_stx_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = l_Lean_PrettyPrinter_Delaborator_annotateCurPos___redArg(v_stx_2764_, v_a_2765_);
if (lean_obj_tag(v___x_2769_) == 0)
{
lean_object* v_a_2770_; lean_object* v___x_2771_; lean_object* v_a_2772_; lean_object* v___x_2773_; lean_object* v_a_2774_; uint8_t v___x_2775_; lean_object* v___x_2776_; 
v_a_2770_ = lean_ctor_get(v___x_2769_, 0);
lean_inc(v_a_2770_);
lean_dec_ref(v___x_2769_);
v___x_2771_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg(v_a_2765_);
v_a_2772_ = lean_ctor_get(v___x_2771_, 0);
lean_inc(v_a_2772_);
lean_dec_ref(v___x_2771_);
v___x_2773_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(v_a_2765_);
v_a_2774_ = lean_ctor_get(v___x_2773_, 0);
lean_inc(v_a_2774_);
lean_dec_ref(v___x_2773_);
v___x_2775_ = 0;
lean_inc(v_a_2770_);
v___x_2776_ = l_Lean_PrettyPrinter_Delaborator_addTermInfo___redArg(v_a_2772_, v_a_2770_, v_a_2774_, v___x_2775_, v_a_2766_, v_a_2767_);
if (lean_obj_tag(v___x_2776_) == 0)
{
lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2783_; 
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2783_ == 0)
{
lean_object* v_unused_2784_; 
v_unused_2784_ = lean_ctor_get(v___x_2776_, 0);
lean_dec(v_unused_2784_);
v___x_2778_ = v___x_2776_;
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
else
{
lean_dec(v___x_2776_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2781_; 
if (v_isShared_2779_ == 0)
{
lean_ctor_set(v___x_2778_, 0, v_a_2770_);
v___x_2781_ = v___x_2778_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2770_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
else
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
lean_dec(v_a_2770_);
v_a_2785_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2776_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2776_);
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
return v___x_2769_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg___boxed(lean_object* v_stx_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg(v_stx_2793_, v_a_2794_, v_a_2795_, v_a_2796_);
lean_dec_ref(v_a_2796_);
lean_dec(v_a_2795_);
lean_dec_ref(v_a_2794_);
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfo(lean_object* v_stx_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_){
_start:
{
lean_object* v___x_2807_; 
v___x_2807_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg(v_stx_2799_, v_a_2800_, v_a_2801_, v_a_2802_);
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___boxed(lean_object* v_stx_2808_, lean_object* v_a_2809_, lean_object* v_a_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfo(v_stx_2808_, v_a_2809_, v_a_2810_, v_a_2811_, v_a_2812_, v_a_2813_, v_a_2814_);
lean_dec(v_a_2814_);
lean_dec_ref(v_a_2813_);
lean_dec(v_a_2812_);
lean_dec_ref(v_a_2811_);
lean_dec(v_a_2810_);
lean_dec_ref(v_a_2809_);
return v_res_2816_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0___redArg(lean_object* v_k_2817_, lean_object* v_t_2818_){
_start:
{
if (lean_obj_tag(v_t_2818_) == 0)
{
lean_object* v_k_2819_; lean_object* v_l_2820_; lean_object* v_r_2821_; uint8_t v___x_2822_; 
v_k_2819_ = lean_ctor_get(v_t_2818_, 1);
v_l_2820_ = lean_ctor_get(v_t_2818_, 3);
v_r_2821_ = lean_ctor_get(v_t_2818_, 4);
v___x_2822_ = lean_nat_dec_lt(v_k_2817_, v_k_2819_);
if (v___x_2822_ == 0)
{
uint8_t v___x_2823_; 
v___x_2823_ = lean_nat_dec_eq(v_k_2817_, v_k_2819_);
if (v___x_2823_ == 0)
{
v_t_2818_ = v_r_2821_;
goto _start;
}
else
{
return v___x_2823_;
}
}
else
{
v_t_2818_ = v_l_2820_;
goto _start;
}
}
else
{
uint8_t v___x_2826_; 
v___x_2826_ = 0;
return v___x_2826_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0___redArg___boxed(lean_object* v_k_2827_, lean_object* v_t_2828_){
_start:
{
uint8_t v_res_2829_; lean_object* v_r_2830_; 
v_res_2829_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0___redArg(v_k_2827_, v_t_2828_);
lean_dec(v_t_2828_);
lean_dec(v_k_2827_);
v_r_2830_ = lean_box(v_res_2829_);
return v_r_2830_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated___redArg(lean_object* v_stx_2831_, lean_object* v_a_2832_, lean_object* v_a_2833_, lean_object* v_a_2834_){
_start:
{
lean_object* v___x_2836_; 
v___x_2836_ = l_Lean_Syntax_getInfo_x3f(v_stx_2831_);
if (lean_obj_tag(v___x_2836_) == 1)
{
lean_object* v_val_2837_; lean_object* v___x_2839_; uint8_t v_isShared_2840_; uint8_t v_isSharedCheck_2856_; 
v_val_2837_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2839_ = v___x_2836_;
v_isShared_2840_ = v_isSharedCheck_2856_;
goto v_resetjp_2838_;
}
else
{
lean_inc(v_val_2837_);
lean_dec(v___x_2836_);
v___x_2839_ = lean_box(0);
v_isShared_2840_ = v_isSharedCheck_2856_;
goto v_resetjp_2838_;
}
v_resetjp_2838_:
{
if (lean_obj_tag(v_val_2837_) == 1)
{
uint8_t v_canonical_2841_; 
v_canonical_2841_ = lean_ctor_get_uint8(v_val_2837_, sizeof(void*)*2);
if (v_canonical_2841_ == 0)
{
lean_object* v_pos_2842_; lean_object* v_endPos_2843_; lean_object* v___x_2844_; uint8_t v___y_2846_; uint8_t v___x_2851_; 
v_pos_2842_ = lean_ctor_get(v_val_2837_, 0);
lean_inc(v_pos_2842_);
v_endPos_2843_ = lean_ctor_get(v_val_2837_, 1);
lean_inc(v_endPos_2843_);
lean_dec_ref(v_val_2837_);
v___x_2844_ = lean_st_ref_get(v_a_2833_);
v___x_2851_ = lean_nat_dec_eq(v_pos_2842_, v_endPos_2843_);
lean_dec(v_endPos_2843_);
if (v___x_2851_ == 0)
{
lean_dec(v___x_2844_);
lean_dec(v_pos_2842_);
v___y_2846_ = v___x_2851_;
goto v___jp_2845_;
}
else
{
lean_object* v_infos_2852_; uint8_t v___x_2853_; 
v_infos_2852_ = lean_ctor_get(v___x_2844_, 1);
lean_inc(v_infos_2852_);
lean_dec(v___x_2844_);
v___x_2853_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0___redArg(v_pos_2842_, v_infos_2852_);
lean_dec(v_infos_2852_);
lean_dec(v_pos_2842_);
v___y_2846_ = v___x_2853_;
goto v___jp_2845_;
}
v___jp_2845_:
{
if (v___y_2846_ == 0)
{
lean_object* v___x_2847_; 
lean_del_object(v___x_2839_);
v___x_2847_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg(v_stx_2831_, v_a_2832_, v_a_2833_, v_a_2834_);
return v___x_2847_;
}
else
{
lean_object* v___x_2849_; 
if (v_isShared_2840_ == 0)
{
lean_ctor_set_tag(v___x_2839_, 0);
lean_ctor_set(v___x_2839_, 0, v_stx_2831_);
v___x_2849_ = v___x_2839_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_stx_2831_);
v___x_2849_ = v_reuseFailAlloc_2850_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
return v___x_2849_;
}
}
}
}
else
{
lean_object* v___x_2854_; 
lean_dec_ref(v_val_2837_);
lean_del_object(v___x_2839_);
v___x_2854_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg(v_stx_2831_, v_a_2832_, v_a_2833_, v_a_2834_);
return v___x_2854_;
}
}
else
{
lean_object* v___x_2855_; 
lean_del_object(v___x_2839_);
lean_dec(v_val_2837_);
v___x_2855_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg(v_stx_2831_, v_a_2832_, v_a_2833_, v_a_2834_);
return v___x_2855_;
}
}
}
else
{
lean_object* v___x_2857_; 
lean_dec(v___x_2836_);
v___x_2857_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg(v_stx_2831_, v_a_2832_, v_a_2833_, v_a_2834_);
return v___x_2857_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated___redArg___boxed(lean_object* v_stx_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_){
_start:
{
lean_object* v_res_2863_; 
v_res_2863_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated___redArg(v_stx_2858_, v_a_2859_, v_a_2860_, v_a_2861_);
lean_dec_ref(v_a_2861_);
lean_dec(v_a_2860_);
lean_dec_ref(v_a_2859_);
return v_res_2863_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated(lean_object* v_stx_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_){
_start:
{
lean_object* v___x_2872_; 
v___x_2872_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated___redArg(v_stx_2864_, v_a_2865_, v_a_2866_, v_a_2867_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated___boxed(lean_object* v_stx_2873_, lean_object* v_a_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_){
_start:
{
lean_object* v_res_2881_; 
v_res_2881_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated(v_stx_2873_, v_a_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_);
lean_dec(v_a_2879_);
lean_dec_ref(v_a_2878_);
lean_dec(v_a_2877_);
lean_dec_ref(v_a_2876_);
lean_dec(v_a_2875_);
lean_dec_ref(v_a_2874_);
return v_res_2881_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0(lean_object* v_00_u03b2_2882_, lean_object* v_k_2883_, lean_object* v_t_2884_){
_start:
{
uint8_t v___x_2885_; 
v___x_2885_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0___redArg(v_k_2883_, v_t_2884_);
return v___x_2885_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0___boxed(lean_object* v_00_u03b2_2886_, lean_object* v_k_2887_, lean_object* v_t_2888_){
_start:
{
uint8_t v_res_2889_; lean_object* v_r_2890_; 
v_res_2889_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated_spec__0(v_00_u03b2_2886_, v_k_2887_, v_t_2888_);
lean_dec(v_t_2888_);
lean_dec(v_k_2887_);
v_r_2890_ = lean_box(v_res_2889_);
return v_r_2890_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withAnnotateTermInfo(lean_object* v_d_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_){
_start:
{
lean_object* v___x_2899_; 
lean_inc_ref(v_a_2894_);
lean_inc(v_a_2893_);
lean_inc_ref(v_a_2892_);
v___x_2899_ = lean_apply_7(v_d_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, lean_box(0));
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2901_; 
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
lean_inc(v_a_2900_);
lean_dec_ref(v___x_2899_);
v___x_2901_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfo___redArg(v_a_2900_, v_a_2892_, v_a_2893_, v_a_2894_);
lean_dec_ref(v_a_2894_);
lean_dec(v_a_2893_);
lean_dec_ref(v_a_2892_);
return v___x_2901_;
}
else
{
lean_dec_ref(v_a_2894_);
lean_dec(v_a_2893_);
lean_dec_ref(v_a_2892_);
return v___x_2899_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withAnnotateTermInfo___boxed(lean_object* v_d_2902_, lean_object* v_a_2903_, lean_object* v_a_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_, lean_object* v_a_2909_){
_start:
{
lean_object* v_res_2910_; 
v_res_2910_ = l_Lean_PrettyPrinter_Delaborator_withAnnotateTermInfo(v_d_2902_, v_a_2903_, v_a_2904_, v_a_2905_, v_a_2906_, v_a_2907_, v_a_2908_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withAnnotateTermInfoUnlessAnnotated(lean_object* v_d_2911_, lean_object* v_a_2912_, lean_object* v_a_2913_, lean_object* v_a_2914_, lean_object* v_a_2915_, lean_object* v_a_2916_, lean_object* v_a_2917_){
_start:
{
lean_object* v___x_2919_; 
lean_inc_ref(v_a_2914_);
lean_inc(v_a_2913_);
lean_inc_ref(v_a_2912_);
v___x_2919_ = lean_apply_7(v_d_2911_, v_a_2912_, v_a_2913_, v_a_2914_, v_a_2915_, v_a_2916_, v_a_2917_, lean_box(0));
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v_a_2920_; lean_object* v___x_2921_; 
v_a_2920_ = lean_ctor_get(v___x_2919_, 0);
lean_inc(v_a_2920_);
lean_dec_ref(v___x_2919_);
v___x_2921_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated___redArg(v_a_2920_, v_a_2912_, v_a_2913_, v_a_2914_);
lean_dec_ref(v_a_2914_);
lean_dec(v_a_2913_);
lean_dec_ref(v_a_2912_);
return v___x_2921_;
}
else
{
lean_dec_ref(v_a_2914_);
lean_dec(v_a_2913_);
lean_dec_ref(v_a_2912_);
return v___x_2919_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withAnnotateTermInfoUnlessAnnotated___boxed(lean_object* v_d_2922_, lean_object* v_a_2923_, lean_object* v_a_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_){
_start:
{
lean_object* v_res_2930_; 
v_res_2930_ = l_Lean_PrettyPrinter_Delaborator_withAnnotateTermInfoUnlessAnnotated(v_d_2922_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_);
return v_res_2930_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion___lam__0(lean_object* v_lctx_2931_, lean_object* v_suggestion_x27_2932_, lean_object* v_x_2933_){
_start:
{
if (lean_obj_tag(v_x_2933_) == 1)
{
lean_object* v_fvarId_2934_; lean_object* v___x_2935_; 
v_fvarId_2934_ = lean_ctor_get(v_x_2933_, 0);
lean_inc(v_fvarId_2934_);
lean_dec_ref(v_x_2933_);
v___x_2935_ = lean_local_ctx_find(v_lctx_2931_, v_fvarId_2934_);
if (lean_obj_tag(v___x_2935_) == 0)
{
uint8_t v___x_2936_; 
v___x_2936_ = 0;
return v___x_2936_;
}
else
{
lean_object* v_val_2937_; lean_object* v___x_2938_; uint8_t v___x_2939_; 
v_val_2937_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_val_2937_);
lean_dec_ref(v___x_2935_);
v___x_2938_ = l_Lean_LocalDecl_userName(v_val_2937_);
lean_dec(v_val_2937_);
v___x_2939_ = lean_name_eq(v___x_2938_, v_suggestion_x27_2932_);
lean_dec(v___x_2938_);
return v___x_2939_;
}
}
else
{
uint8_t v___x_2940_; 
lean_dec_ref(v_x_2933_);
lean_dec_ref(v_lctx_2931_);
v___x_2940_ = 0;
return v___x_2940_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion___lam__0___boxed(lean_object* v_lctx_2941_, lean_object* v_suggestion_x27_2942_, lean_object* v_x_2943_){
_start:
{
uint8_t v_res_2944_; lean_object* v_r_2945_; 
v_res_2944_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion___lam__0(v_lctx_2941_, v_suggestion_x27_2942_, v_x_2943_);
lean_dec(v_suggestion_x27_2942_);
v_r_2945_ = lean_box(v_res_2944_);
return v_r_2945_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion(lean_object* v_body_2946_, lean_object* v_lctx_2947_, lean_object* v_suggestion_x27_2948_){
_start:
{
lean_object* v___f_2949_; lean_object* v___x_2950_; 
v___f_2949_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2949_, 0, v_lctx_2947_);
lean_closure_set(v___f_2949_, 1, v_suggestion_x27_2948_);
v___x_2950_ = lean_find_expr(v___f_2949_, v_body_2946_);
lean_dec_ref(v___f_2949_);
if (lean_obj_tag(v___x_2950_) == 0)
{
uint8_t v___x_2951_; 
v___x_2951_ = 0;
return v___x_2951_;
}
else
{
uint8_t v___x_2952_; 
lean_dec_ref(v___x_2950_);
v___x_2952_ = 1;
return v___x_2952_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion___boxed(lean_object* v_body_2953_, lean_object* v_lctx_2954_, lean_object* v_suggestion_x27_2955_){
_start:
{
uint8_t v_res_2956_; lean_object* v_r_2957_; 
v_res_2956_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion(v_body_2953_, v_lctx_2954_, v_suggestion_x27_2955_);
lean_dec_ref(v_body_2953_);
v_r_2957_ = lean_box(v_res_2956_);
return v_r_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName___lam__0(lean_object* v_snd_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_){
_start:
{
lean_object* v_quotContext_2962_; lean_object* v_currMacroScope_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v_quotContext_2962_ = lean_ctor_get(v___y_2959_, 10);
lean_inc(v_quotContext_2962_);
v_currMacroScope_2963_ = lean_ctor_get(v___y_2959_, 11);
lean_inc(v_currMacroScope_2963_);
lean_dec_ref(v___y_2959_);
v___x_2964_ = l_Lean_addMacroScope(v_quotContext_2962_, v_snd_2958_, v_currMacroScope_2963_);
v___x_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName___lam__0___boxed(lean_object* v_snd_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_){
_start:
{
lean_object* v_res_2970_; 
v_res_2970_ = l_Lean_PrettyPrinter_Delaborator_getUnusedName___lam__0(v_snd_2966_, v___y_2967_, v___y_2968_);
lean_dec(v___y_2968_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName(lean_object* v_suggestion_2975_, lean_object* v_body_2976_, uint8_t v_preserveName_2977_, lean_object* v_avoid_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_, lean_object* v_a_2984_){
_start:
{
lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; uint8_t v_fst_3018_; lean_object* v_snd_3019_; uint8_t v___x_3025_; 
v___x_3025_ = l_Lean_Name_isAnonymous(v_suggestion_2975_);
if (v___x_3025_ == 0)
{
uint8_t v___x_3026_; lean_object* v___x_3027_; 
v___x_3026_ = l_Lean_Name_hasMacroScopes(v_suggestion_2975_);
v___x_3027_ = lean_erase_macro_scopes(v_suggestion_2975_);
v_fst_3018_ = v___x_3026_;
v_snd_3019_ = v___x_3027_;
goto v___jp_3017_;
}
else
{
lean_object* v___x_3028_; 
lean_dec(v_suggestion_2975_);
v___x_3028_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__2));
v_fst_3018_ = v___x_3025_;
v_snd_3019_ = v___x_3028_;
goto v___jp_3017_;
}
v___jp_2986_:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; 
v___x_2989_ = l_Lean_LocalContext_getUnusedName(v___y_2987_, v___y_2988_);
lean_dec_ref(v___y_2987_);
v___x_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2989_);
return v___x_2990_;
}
v___jp_2991_:
{
if (v_preserveName_2977_ == 0)
{
lean_object* v___x_2995_; lean_object* v___x_2996_; 
lean_dec_ref(v___y_2992_);
v___x_2995_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_getUnusedName___closed__0));
v___x_2996_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_2995_, v_a_2979_, v_a_2980_, v_a_2981_, v_a_2982_, v_a_2983_, v_a_2984_);
lean_dec(v_a_2984_);
lean_dec_ref(v_a_2981_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3007_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_2999_ = v___x_2996_;
v_isShared_3000_ = v_isSharedCheck_3007_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v___x_2996_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3007_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
uint8_t v___x_3001_; 
v___x_3001_ = lean_unbox(v_a_2997_);
lean_dec(v_a_2997_);
if (v___x_3001_ == 0)
{
lean_del_object(v___x_2999_);
v___y_2987_ = v___y_2993_;
v___y_2988_ = v___y_2994_;
goto v___jp_2986_;
}
else
{
uint8_t v___x_3002_; 
v___x_3002_ = l_Lean_NameSet_contains(v_avoid_2978_, v___y_2994_);
if (v___x_3002_ == 0)
{
uint8_t v___x_3003_; 
lean_inc(v___y_2994_);
lean_inc_ref(v___y_2993_);
v___x_3003_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_Delaborator_getUnusedName_bodyUsesSuggestion(v_body_2976_, v___y_2993_, v___y_2994_);
if (v___x_3003_ == 0)
{
lean_object* v___x_3005_; 
lean_dec_ref(v___y_2993_);
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 0, v___y_2994_);
v___x_3005_ = v___x_2999_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v___y_2994_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
else
{
lean_del_object(v___x_2999_);
v___y_2987_ = v___y_2993_;
v___y_2988_ = v___y_2994_;
goto v___jp_2986_;
}
}
else
{
lean_del_object(v___x_2999_);
v___y_2987_ = v___y_2993_;
v___y_2988_ = v___y_2994_;
goto v___jp_2986_;
}
}
}
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
v_a_3008_ = lean_ctor_get(v___x_2996_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2996_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2996_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2996_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
else
{
lean_object* v___x_3016_; 
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec_ref(v_a_2981_);
v___x_3016_ = l_Lean_Core_withFreshMacroScope___redArg(v___y_2992_, v_a_2983_, v_a_2984_);
return v___x_3016_;
}
}
v___jp_3017_:
{
lean_object* v_lctx_3020_; uint8_t v___x_3021_; 
v_lctx_3020_ = lean_ctor_get(v_a_2981_, 2);
v___x_3021_ = l_Lean_LocalContext_usesUserName(v_lctx_3020_, v_snd_3019_);
if (v___x_3021_ == 0)
{
lean_object* v___x_3022_; 
lean_dec(v_a_2984_);
lean_dec_ref(v_a_2983_);
lean_dec_ref(v_a_2981_);
v___x_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3022_, 0, v_snd_3019_);
return v___x_3022_;
}
else
{
lean_object* v___f_3023_; 
lean_inc(v_snd_3019_);
v___f_3023_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_getUnusedName___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3023_, 0, v_snd_3019_);
if (v_preserveName_2977_ == 0)
{
lean_inc_ref(v_lctx_3020_);
v___y_2992_ = v___f_3023_;
v___y_2993_ = v_lctx_3020_;
v___y_2994_ = v_snd_3019_;
goto v___jp_2991_;
}
else
{
if (v_fst_3018_ == 0)
{
lean_object* v___x_3024_; 
lean_dec_ref(v___f_3023_);
lean_dec(v_a_2984_);
lean_dec_ref(v_a_2983_);
lean_dec_ref(v_a_2981_);
v___x_3024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3024_, 0, v_snd_3019_);
return v___x_3024_;
}
else
{
lean_inc_ref(v_lctx_3020_);
v___y_2992_ = v___f_3023_;
v___y_2993_ = v_lctx_3020_;
v___y_2994_ = v_snd_3019_;
goto v___jp_2991_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_getUnusedName___boxed(lean_object* v_suggestion_3029_, lean_object* v_body_3030_, lean_object* v_preserveName_3031_, lean_object* v_avoid_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_){
_start:
{
uint8_t v_preserveName_boxed_3040_; lean_object* v_res_3041_; 
v_preserveName_boxed_3040_ = lean_unbox(v_preserveName_3031_);
v_res_3041_ = l_Lean_PrettyPrinter_Delaborator_getUnusedName(v_suggestion_3029_, v_body_3030_, v_preserveName_boxed_3040_, v_avoid_3032_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_);
lean_dec(v_a_3036_);
lean_dec(v_a_3034_);
lean_dec_ref(v_a_3033_);
lean_dec(v_avoid_3032_);
lean_dec_ref(v_body_3030_);
return v_res_3041_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0___redArg(lean_object* v___y_3042_){
_start:
{
lean_object* v___x_3044_; lean_object* v_holeIter_3045_; lean_object* v_curr_3046_; lean_object* v___x_3047_; lean_object* v_steps_3048_; lean_object* v_infos_3049_; lean_object* v_holeIter_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3060_; 
v___x_3044_ = lean_st_ref_get(v___y_3042_);
v_holeIter_3045_ = lean_ctor_get(v___x_3044_, 2);
lean_inc_ref(v_holeIter_3045_);
lean_dec(v___x_3044_);
v_curr_3046_ = lean_ctor_get(v_holeIter_3045_, 0);
lean_inc(v_curr_3046_);
lean_dec_ref(v_holeIter_3045_);
v___x_3047_ = lean_st_ref_take(v___y_3042_);
v_steps_3048_ = lean_ctor_get(v___x_3047_, 0);
v_infos_3049_ = lean_ctor_get(v___x_3047_, 1);
v_holeIter_3050_ = lean_ctor_get(v___x_3047_, 2);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3052_ = v___x_3047_;
v_isShared_3053_ = v_isSharedCheck_3060_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_holeIter_3050_);
lean_inc(v_infos_3049_);
lean_inc(v_steps_3048_);
lean_dec(v___x_3047_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3060_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3054_; lean_object* v___x_3056_; 
v___x_3054_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_HoleIterator_next(v_holeIter_3050_);
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 2, v___x_3054_);
v___x_3056_ = v___x_3052_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_steps_3048_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v_infos_3049_);
lean_ctor_set(v_reuseFailAlloc_3059_, 2, v___x_3054_);
v___x_3056_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; 
v___x_3057_ = lean_st_ref_set(v___y_3042_, v___x_3056_);
v___x_3058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3058_, 0, v_curr_3046_);
return v___x_3058_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0___redArg___boxed(lean_object* v___y_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v_res_3063_; 
v_res_3063_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0___redArg(v___y_3061_);
lean_dec(v___y_3061_);
return v_res_3063_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0(lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_){
_start:
{
lean_object* v___x_3071_; 
v___x_3071_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0___redArg(v___y_3065_);
return v___x_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0___boxed(lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0(v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_);
lean_dec(v___y_3077_);
lean_dec_ref(v___y_3076_);
lean_dec(v___y_3075_);
lean_dec_ref(v___y_3074_);
lean_dec(v___y_3073_);
lean_dec_ref(v___y_3072_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent(lean_object* v_n_3080_, lean_object* v_e_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_){
_start:
{
lean_object* v___x_3089_; lean_object* v_a_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; uint8_t v___x_3093_; lean_object* v___x_3094_; 
v___x_3089_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_nextExtraPos___at___00Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent_spec__0___redArg(v_a_3083_);
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_a_3090_);
lean_dec_ref(v___x_3089_);
v___x_3091_ = lean_mk_syntax_ident(v_n_3080_);
lean_inc(v_a_3090_);
v___x_3092_ = l_Lean_PrettyPrinter_Delaborator_annotatePos(v_a_3090_, v___x_3091_);
v___x_3093_ = 0;
lean_inc(v___x_3092_);
v___x_3094_ = l_Lean_PrettyPrinter_Delaborator_addTermInfo___redArg(v_a_3090_, v___x_3092_, v_e_3081_, v___x_3093_, v_a_3083_, v_a_3084_);
if (lean_obj_tag(v___x_3094_) == 0)
{
lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3101_ == 0)
{
lean_object* v_unused_3102_; 
v_unused_3102_ = lean_ctor_get(v___x_3094_, 0);
lean_dec(v_unused_3102_);
v___x_3096_ = v___x_3094_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_dec(v___x_3094_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
lean_ctor_set(v___x_3096_, 0, v___x_3092_);
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v___x_3092_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
else
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
lean_dec(v___x_3092_);
v_a_3103_ = lean_ctor_get(v___x_3094_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3094_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_3094_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_3094_);
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
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent___boxed(lean_object* v_n_3111_, lean_object* v_e_3112_, lean_object* v_a_3113_, lean_object* v_a_3114_, lean_object* v_a_3115_, lean_object* v_a_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_){
_start:
{
lean_object* v_res_3120_; 
v_res_3120_ = l_Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent(v_n_3111_, v_e_3112_, v_a_3113_, v_a_3114_, v_a_3115_, v_a_3116_, v_a_3117_, v_a_3118_);
lean_dec(v_a_3118_);
lean_dec_ref(v_a_3117_);
lean_dec(v_a_3116_);
lean_dec_ref(v_a_3115_);
lean_dec(v_a_3114_);
lean_dec_ref(v_a_3113_);
return v_res_3120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg___lam__0(lean_object* v_d_3121_, lean_object* v_x_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_){
_start:
{
lean_object* v___x_3130_; 
v___x_3130_ = lean_apply_8(v_d_3121_, v_x_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, lean_box(0));
return v___x_3130_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg___lam__0___boxed(lean_object* v_d_3131_, lean_object* v_x_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg___lam__0(v_d_3131_, v_x_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg___lam__0(lean_object* v_k_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v_b_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_){
_start:
{
lean_object* v___x_3150_; 
v___x_3150_ = lean_apply_8(v_k_3141_, v_b_3144_, v___y_3142_, v___y_3143_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, lean_box(0));
return v___x_3150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v_k_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v_b_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg___lam__0(v_k_3151_, v___y_3152_, v___y_3153_, v_b_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg(lean_object* v_name_3161_, uint8_t v_bi_3162_, lean_object* v_type_3163_, lean_object* v_k_3164_, uint8_t v_kind_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v___f_3173_; lean_object* v___x_3174_; 
v___f_3173_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_3173_, 0, v_k_3164_);
lean_closure_set(v___f_3173_, 1, v___y_3166_);
lean_closure_set(v___f_3173_, 2, v___y_3167_);
v___x_3174_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3161_, v_bi_3162_, v_type_3163_, v___f_3173_, v_kind_3165_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
if (lean_obj_tag(v___x_3174_) == 0)
{
return v___x_3174_;
}
else
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg___boxed(lean_object* v_name_3183_, lean_object* v_bi_3184_, lean_object* v_type_3185_, lean_object* v_k_3186_, lean_object* v_kind_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_){
_start:
{
uint8_t v_bi_boxed_3195_; uint8_t v_kind_boxed_3196_; lean_object* v_res_3197_; 
v_bi_boxed_3195_ = lean_unbox(v_bi_3184_);
v_kind_boxed_3196_ = lean_unbox(v_kind_3187_);
v_res_3197_ = l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg(v_name_3183_, v_bi_boxed_3195_, v_type_3185_, v_k_3186_, v_kind_boxed_3196_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_);
return v_res_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0___redArg(lean_object* v_child_3198_, lean_object* v_childIdx_3199_, lean_object* v_x_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_){
_start:
{
lean_object* v_subExpr_3208_; lean_object* v_optionsPerPos_3209_; lean_object* v_currNamespace_3210_; lean_object* v_openDecls_3211_; uint8_t v_inPattern_3212_; lean_object* v_depth_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3231_; 
v_subExpr_3208_ = lean_ctor_get(v___y_3201_, 3);
v_optionsPerPos_3209_ = lean_ctor_get(v___y_3201_, 0);
v_currNamespace_3210_ = lean_ctor_get(v___y_3201_, 1);
v_openDecls_3211_ = lean_ctor_get(v___y_3201_, 2);
v_inPattern_3212_ = lean_ctor_get_uint8(v___y_3201_, sizeof(void*)*5);
v_depth_3213_ = lean_ctor_get(v___y_3201_, 4);
v_isSharedCheck_3231_ = !lean_is_exclusive(v___y_3201_);
if (v_isSharedCheck_3231_ == 0)
{
v___x_3215_ = v___y_3201_;
v_isShared_3216_ = v_isSharedCheck_3231_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_depth_3213_);
lean_inc(v_subExpr_3208_);
lean_inc(v_openDecls_3211_);
lean_inc(v_currNamespace_3210_);
lean_inc(v_optionsPerPos_3209_);
lean_dec(v___y_3201_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3231_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v_pos_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3229_; 
v_pos_3217_ = lean_ctor_get(v_subExpr_3208_, 1);
v_isSharedCheck_3229_ = !lean_is_exclusive(v_subExpr_3208_);
if (v_isSharedCheck_3229_ == 0)
{
lean_object* v_unused_3230_; 
v_unused_3230_ = lean_ctor_get(v_subExpr_3208_, 0);
lean_dec(v_unused_3230_);
v___x_3219_ = v_subExpr_3208_;
v_isShared_3220_ = v_isSharedCheck_3229_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_pos_3217_);
lean_dec(v_subExpr_3208_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3229_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3221_; lean_object* v___x_3223_; 
v___x_3221_ = l_Lean_SubExpr_Pos_push(v_pos_3217_, v_childIdx_3199_);
lean_dec(v_pos_3217_);
if (v_isShared_3220_ == 0)
{
lean_ctor_set(v___x_3219_, 1, v___x_3221_);
lean_ctor_set(v___x_3219_, 0, v_child_3198_);
v___x_3223_ = v___x_3219_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v_child_3198_);
lean_ctor_set(v_reuseFailAlloc_3228_, 1, v___x_3221_);
v___x_3223_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
lean_object* v___x_3225_; 
if (v_isShared_3216_ == 0)
{
lean_ctor_set(v___x_3215_, 3, v___x_3223_);
v___x_3225_ = v___x_3215_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v_optionsPerPos_3209_);
lean_ctor_set(v_reuseFailAlloc_3227_, 1, v_currNamespace_3210_);
lean_ctor_set(v_reuseFailAlloc_3227_, 2, v_openDecls_3211_);
lean_ctor_set(v_reuseFailAlloc_3227_, 3, v___x_3223_);
lean_ctor_set(v_reuseFailAlloc_3227_, 4, v_depth_3213_);
lean_ctor_set_uint8(v_reuseFailAlloc_3227_, sizeof(void*)*5, v_inPattern_3212_);
v___x_3225_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
lean_object* v___x_3226_; 
v___x_3226_ = lean_apply_7(v_x_3200_, v___x_3225_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_3206_, lean_box(0));
return v___x_3226_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0___redArg___boxed(lean_object* v_child_3232_, lean_object* v_childIdx_3233_, lean_object* v_x_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_){
_start:
{
lean_object* v_res_3242_; 
v_res_3242_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0___redArg(v_child_3232_, v_childIdx_3233_, v_x_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_);
return v_res_3242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg___lam__0(lean_object* v_v_3243_, lean_object* v_a_3244_, lean_object* v_x_3245_, lean_object* v_fvar_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_){
_start:
{
lean_object* v___x_3254_; 
lean_inc(v___y_3252_);
lean_inc_ref(v___y_3251_);
lean_inc(v___y_3250_);
lean_inc_ref(v___y_3249_);
lean_inc(v___y_3248_);
lean_inc_ref(v___y_3247_);
lean_inc_ref(v_fvar_3246_);
v___x_3254_ = lean_apply_8(v_v_3243_, v_fvar_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_, lean_box(0));
if (lean_obj_tag(v___x_3254_) == 0)
{
lean_object* v_a_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
lean_inc(v_a_3255_);
lean_dec_ref(v___x_3254_);
v___x_3256_ = l_Lean_Expr_bindingBody_x21(v_a_3244_);
v___x_3257_ = lean_expr_instantiate1(v___x_3256_, v_fvar_3246_);
lean_dec_ref(v_fvar_3246_);
lean_dec_ref(v___x_3256_);
v___x_3258_ = lean_unsigned_to_nat(1u);
v___x_3259_ = lean_apply_1(v_x_3245_, v_a_3255_);
v___x_3260_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0___redArg(v___x_3257_, v___x_3258_, v___x_3259_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_);
return v___x_3260_;
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
lean_dec(v___y_3252_);
lean_dec_ref(v___y_3251_);
lean_dec(v___y_3250_);
lean_dec_ref(v___y_3249_);
lean_dec(v___y_3248_);
lean_dec_ref(v___y_3247_);
lean_dec_ref(v_fvar_3246_);
lean_dec_ref(v_x_3245_);
v_a_3261_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3254_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3254_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg___lam__0___boxed(lean_object* v_v_3269_, lean_object* v_a_3270_, lean_object* v_x_3271_, lean_object* v_fvar_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg___lam__0(v_v_3269_, v_a_3270_, v_x_3271_, v_fvar_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_);
lean_dec_ref(v_a_3270_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg(lean_object* v_n_3281_, lean_object* v_v_3282_, lean_object* v_x_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_){
_start:
{
lean_object* v___x_3291_; lean_object* v_a_3292_; lean_object* v___f_3293_; uint8_t v___x_3294_; lean_object* v___x_3295_; uint8_t v___x_3296_; lean_object* v___x_3297_; 
v___x_3291_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(v___y_3284_);
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
lean_inc(v_a_3292_);
lean_dec_ref(v___x_3291_);
lean_inc(v_a_3292_);
v___f_3293_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg___lam__0___boxed), 11, 3);
lean_closure_set(v___f_3293_, 0, v_v_3282_);
lean_closure_set(v___f_3293_, 1, v_a_3292_);
lean_closure_set(v___f_3293_, 2, v_x_3283_);
v___x_3294_ = l_Lean_Expr_binderInfo(v_a_3292_);
v___x_3295_ = l_Lean_Expr_bindingDomain_x21(v_a_3292_);
lean_dec(v_a_3292_);
v___x_3296_ = 0;
v___x_3297_ = l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg(v_n_3281_, v___x_3294_, v___x_3295_, v___f_3293_, v___x_3296_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg___boxed(lean_object* v_n_3298_, lean_object* v_v_3299_, lean_object* v_x_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_){
_start:
{
lean_object* v_res_3308_; 
v_res_3308_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg(v_n_3298_, v_v_3299_, v_x_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_);
return v_res_3308_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg(lean_object* v_d_3309_, uint8_t v_preserveName_3310_, lean_object* v_avoid_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_, lean_object* v_a_3315_, lean_object* v_a_3316_, lean_object* v_a_3317_){
_start:
{
lean_object* v___x_3319_; lean_object* v_a_3320_; lean_object* v___x_3321_; lean_object* v_a_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v___x_3319_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(v_a_3312_);
v_a_3320_ = lean_ctor_get(v___x_3319_, 0);
lean_inc(v_a_3320_);
lean_dec_ref(v___x_3319_);
v___x_3321_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(v_a_3312_);
v_a_3322_ = lean_ctor_get(v___x_3321_, 0);
lean_inc(v_a_3322_);
lean_dec_ref(v___x_3321_);
v___x_3323_ = l_Lean_Expr_bindingName_x21(v_a_3320_);
lean_dec(v_a_3320_);
v___x_3324_ = l_Lean_Expr_bindingBody_x21(v_a_3322_);
lean_dec(v_a_3322_);
lean_inc(v_a_3317_);
lean_inc_ref(v_a_3316_);
lean_inc_ref(v_a_3314_);
v___x_3325_ = l_Lean_PrettyPrinter_Delaborator_getUnusedName(v___x_3323_, v___x_3324_, v_preserveName_3310_, v_avoid_3311_, v_a_3312_, v_a_3313_, v_a_3314_, v_a_3315_, v_a_3316_, v_a_3317_);
lean_dec_ref(v___x_3324_);
if (lean_obj_tag(v___x_3325_) == 0)
{
lean_object* v_a_3326_; lean_object* v___f_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v_a_3326_ = lean_ctor_get(v___x_3325_, 0);
lean_inc(v_a_3326_);
lean_dec_ref(v___x_3325_);
v___f_3327_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3327_, 0, v_d_3309_);
lean_inc(v_a_3326_);
v___x_3328_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_mkAnnotatedIdent___boxed), 9, 1);
lean_closure_set(v___x_3328_, 0, v_a_3326_);
v___x_3329_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg(v_a_3326_, v___x_3328_, v___f_3327_, v_a_3312_, v_a_3313_, v_a_3314_, v_a_3315_, v_a_3316_, v_a_3317_);
return v___x_3329_;
}
else
{
lean_object* v_a_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3337_; 
lean_dec(v_a_3317_);
lean_dec_ref(v_a_3316_);
lean_dec(v_a_3315_);
lean_dec_ref(v_a_3314_);
lean_dec(v_a_3313_);
lean_dec_ref(v_a_3312_);
lean_dec_ref(v_d_3309_);
v_a_3330_ = lean_ctor_get(v___x_3325_, 0);
v_isSharedCheck_3337_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3332_ = v___x_3325_;
v_isShared_3333_ = v_isSharedCheck_3337_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_a_3330_);
lean_dec(v___x_3325_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3337_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3335_; 
if (v_isShared_3333_ == 0)
{
v___x_3335_ = v___x_3332_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v_a_3330_);
v___x_3335_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
return v___x_3335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg___boxed(lean_object* v_d_3338_, lean_object* v_preserveName_3339_, lean_object* v_avoid_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_, lean_object* v_a_3345_, lean_object* v_a_3346_, lean_object* v_a_3347_){
_start:
{
uint8_t v_preserveName_boxed_3348_; lean_object* v_res_3349_; 
v_preserveName_boxed_3348_ = lean_unbox(v_preserveName_3339_);
v_res_3349_ = l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg(v_d_3338_, v_preserveName_boxed_3348_, v_avoid_3340_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_, v_a_3345_, v_a_3346_);
lean_dec(v_avoid_3340_);
return v_res_3349_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName(lean_object* v_00_u03b1_3350_, lean_object* v_d_3351_, uint8_t v_preserveName_3352_, lean_object* v_avoid_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_, lean_object* v_a_3358_, lean_object* v_a_3359_){
_start:
{
lean_object* v___x_3361_; 
v___x_3361_ = l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___redArg(v_d_3351_, v_preserveName_3352_, v_avoid_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_, v_a_3359_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName___boxed(lean_object* v_00_u03b1_3362_, lean_object* v_d_3363_, lean_object* v_preserveName_3364_, lean_object* v_avoid_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_){
_start:
{
uint8_t v_preserveName_boxed_3373_; lean_object* v_res_3374_; 
v_preserveName_boxed_3373_ = lean_unbox(v_preserveName_3364_);
v_res_3374_ = l_Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName(v_00_u03b1_3362_, v_d_3363_, v_preserveName_boxed_3373_, v_avoid_3365_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_);
lean_dec(v_avoid_3365_);
return v_res_3374_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0(lean_object* v_00_u03b1_3375_, lean_object* v_child_3376_, lean_object* v_childIdx_3377_, lean_object* v_x_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
lean_object* v___x_3386_; 
v___x_3386_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0___redArg(v_child_3376_, v_childIdx_3377_, v_x_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_);
return v___x_3386_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3387_, lean_object* v_child_3388_, lean_object* v_childIdx_3389_, lean_object* v_x_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_){
_start:
{
lean_object* v_res_3398_; 
v_res_3398_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0(v_00_u03b1_3387_, v_child_3388_, v_childIdx_3389_, v_x_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_);
return v_res_3398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1(lean_object* v_00_u03b1_3399_, lean_object* v_name_3400_, uint8_t v_bi_3401_, lean_object* v_type_3402_, lean_object* v_k_3403_, uint8_t v_kind_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_){
_start:
{
lean_object* v___x_3412_; 
v___x_3412_ = l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___redArg(v_name_3400_, v_bi_3401_, v_type_3402_, v_k_3403_, v_kind_3404_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_);
return v___x_3412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3413_, lean_object* v_name_3414_, lean_object* v_bi_3415_, lean_object* v_type_3416_, lean_object* v_k_3417_, lean_object* v_kind_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_){
_start:
{
uint8_t v_bi_boxed_3426_; uint8_t v_kind_boxed_3427_; lean_object* v_res_3428_; 
v_bi_boxed_3426_ = lean_unbox(v_bi_3415_);
v_kind_boxed_3427_ = lean_unbox(v_kind_3418_);
v_res_3428_ = l_Lean_Meta_withLocalDecl___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__1(v_00_u03b1_3413_, v_name_3414_, v_bi_boxed_3426_, v_type_3416_, v_k_3417_, v_kind_boxed_3427_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_);
return v_res_3428_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0(lean_object* v_00_u03b1_3429_, lean_object* v_00_u03b2_3430_, lean_object* v_n_3431_, lean_object* v_v_3432_, lean_object* v_x_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_){
_start:
{
lean_object* v___x_3441_; 
v___x_3441_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___redArg(v_n_3431_, v_v_3432_, v_x_3433_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_);
return v___x_3441_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0___boxed(lean_object* v_00_u03b1_3442_, lean_object* v_00_u03b2_3443_, lean_object* v_n_3444_, lean_object* v_v_3445_, lean_object* v_x_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
lean_object* v_res_3454_; 
v_res_3454_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0(v_00_u03b1_3442_, v_00_u03b2_3443_, v_n_3444_, v_v_3445_, v_x_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
return v_res_3454_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorIdx(lean_object* v_x_3455_){
_start:
{
switch(lean_obj_tag(v_x_3455_))
{
case 0:
{
lean_object* v___x_3456_; 
v___x_3456_ = lean_unsigned_to_nat(0u);
return v___x_3456_;
}
case 1:
{
lean_object* v___x_3457_; 
v___x_3457_ = lean_unsigned_to_nat(1u);
return v___x_3457_;
}
case 2:
{
lean_object* v___x_3458_; 
v___x_3458_ = lean_unsigned_to_nat(2u);
return v___x_3458_;
}
default: 
{
lean_object* v___x_3459_; 
v___x_3459_ = lean_unsigned_to_nat(3u);
return v___x_3459_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorIdx___boxed(lean_object* v_x_3460_){
_start:
{
lean_object* v_res_3461_; 
v_res_3461_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorIdx(v_x_3460_);
lean_dec(v_x_3460_);
return v_res_3461_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(lean_object* v_t_3462_, lean_object* v_k_3463_){
_start:
{
if (lean_obj_tag(v_t_3462_) == 3)
{
lean_object* v_s_3464_; lean_object* v___x_3465_; 
v_s_3464_ = lean_ctor_get(v_t_3462_, 0);
lean_inc_ref(v_s_3464_);
lean_dec_ref(v_t_3462_);
v___x_3465_ = lean_apply_1(v_k_3463_, v_s_3464_);
return v___x_3465_;
}
else
{
lean_dec(v_t_3462_);
return v_k_3463_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim(lean_object* v_motive_3466_, lean_object* v_ctorIdx_3467_, lean_object* v_t_3468_, lean_object* v_h_3469_, lean_object* v_k_3470_){
_start:
{
lean_object* v___x_3471_; 
v___x_3471_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(v_t_3468_, v_k_3470_);
return v___x_3471_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___boxed(lean_object* v_motive_3472_, lean_object* v_ctorIdx_3473_, lean_object* v_t_3474_, lean_object* v_h_3475_, lean_object* v_k_3476_){
_start:
{
lean_object* v_res_3477_; 
v_res_3477_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim(v_motive_3472_, v_ctorIdx_3473_, v_t_3474_, v_h_3475_, v_k_3476_);
lean_dec(v_ctorIdx_3473_);
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_deep_elim___redArg(lean_object* v_t_3478_, lean_object* v_deep_3479_){
_start:
{
lean_object* v___x_3480_; 
v___x_3480_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(v_t_3478_, v_deep_3479_);
return v___x_3480_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_deep_elim(lean_object* v_motive_3481_, lean_object* v_t_3482_, lean_object* v_h_3483_, lean_object* v_deep_3484_){
_start:
{
lean_object* v___x_3485_; 
v___x_3485_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(v_t_3482_, v_deep_3484_);
return v___x_3485_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_proof_elim___redArg(lean_object* v_t_3486_, lean_object* v_proof_3487_){
_start:
{
lean_object* v___x_3488_; 
v___x_3488_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(v_t_3486_, v_proof_3487_);
return v___x_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_proof_elim(lean_object* v_motive_3489_, lean_object* v_t_3490_, lean_object* v_h_3491_, lean_object* v_proof_3492_){
_start:
{
lean_object* v___x_3493_; 
v___x_3493_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(v_t_3490_, v_proof_3492_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_maxSteps_elim___redArg(lean_object* v_t_3494_, lean_object* v_maxSteps_3495_){
_start:
{
lean_object* v___x_3496_; 
v___x_3496_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(v_t_3494_, v_maxSteps_3495_);
return v___x_3496_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_maxSteps_elim(lean_object* v_motive_3497_, lean_object* v_t_3498_, lean_object* v_h_3499_, lean_object* v_maxSteps_3500_){
_start:
{
lean_object* v___x_3501_; 
v___x_3501_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(v_t_3498_, v_maxSteps_3500_);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_string_elim___redArg(lean_object* v_t_3502_, lean_object* v_string_3503_){
_start:
{
lean_object* v___x_3504_; 
v___x_3504_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(v_t_3502_, v_string_3503_);
return v___x_3504_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_string_elim(lean_object* v_motive_3505_, lean_object* v_t_3506_, lean_object* v_h_3507_, lean_object* v_string_3508_){
_start:
{
lean_object* v___x_3509_; 
v___x_3509_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_ctorElim___redArg(v_t_3506_, v_string_3508_);
return v___x_3509_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString(lean_object* v_x_3513_){
_start:
{
switch(lean_obj_tag(v_x_3513_))
{
case 0:
{
lean_object* v___x_3514_; 
v___x_3514_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__0));
return v___x_3514_;
}
case 1:
{
lean_object* v___x_3515_; 
v___x_3515_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__1));
return v___x_3515_;
}
case 2:
{
lean_object* v___x_3516_; 
v___x_3516_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___closed__2));
return v___x_3516_;
}
default: 
{
lean_object* v_s_3517_; 
v_s_3517_ = lean_ctor_get(v_x_3513_, 0);
lean_inc_ref(v_s_3517_);
return v_s_3517_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString___boxed(lean_object* v_x_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString(v_x_3518_);
lean_dec(v_x_3518_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addOmissionInfo___redArg(lean_object* v_pos_3520_, lean_object* v_stx_3521_, lean_object* v_e_3522_, lean_object* v_reason_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_){
_start:
{
uint8_t v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; 
v___x_3527_ = 0;
v___x_3528_ = lean_box(0);
v___x_3529_ = l_Lean_PrettyPrinter_Delaborator_OmissionReason_toString(v_reason_3523_);
v___x_3530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3529_);
v___x_3531_ = l_Lean_PrettyPrinter_Delaborator_addDelabTermInfo___redArg(v_pos_3520_, v_stx_3521_, v_e_3522_, v___x_3527_, v___x_3528_, v___x_3530_, v___x_3527_, v_a_3524_, v_a_3525_);
return v___x_3531_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addOmissionInfo___redArg___boxed(lean_object* v_pos_3532_, lean_object* v_stx_3533_, lean_object* v_e_3534_, lean_object* v_reason_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_){
_start:
{
lean_object* v_res_3539_; 
v_res_3539_ = l_Lean_PrettyPrinter_Delaborator_addOmissionInfo___redArg(v_pos_3532_, v_stx_3533_, v_e_3534_, v_reason_3535_, v_a_3536_, v_a_3537_);
lean_dec_ref(v_a_3537_);
lean_dec(v_a_3536_);
lean_dec(v_reason_3535_);
return v_res_3539_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addOmissionInfo(lean_object* v_pos_3540_, lean_object* v_stx_3541_, lean_object* v_e_3542_, lean_object* v_reason_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_){
_start:
{
lean_object* v___x_3551_; 
v___x_3551_ = l_Lean_PrettyPrinter_Delaborator_addOmissionInfo___redArg(v_pos_3540_, v_stx_3541_, v_e_3542_, v_reason_3543_, v_a_3545_, v_a_3546_);
return v___x_3551_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_addOmissionInfo___boxed(lean_object* v_pos_3552_, lean_object* v_stx_3553_, lean_object* v_e_3554_, lean_object* v_reason_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_, lean_object* v_a_3559_, lean_object* v_a_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_){
_start:
{
lean_object* v_res_3563_; 
v_res_3563_ = l_Lean_PrettyPrinter_Delaborator_addOmissionInfo(v_pos_3552_, v_stx_3553_, v_e_3554_, v_reason_3555_, v_a_3556_, v_a_3557_, v_a_3558_, v_a_3559_, v_a_3560_, v_a_3561_);
lean_dec(v_a_3561_);
lean_dec_ref(v_a_3560_);
lean_dec(v_a_3559_);
lean_dec_ref(v_a_3558_);
lean_dec(v_a_3557_);
lean_dec_ref(v_a_3556_);
lean_dec(v_reason_3555_);
return v_res_3563_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withIncDepth___redArg(lean_object* v_act_3564_, lean_object* v_ctx_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_){
_start:
{
lean_object* v_optionsPerPos_3572_; lean_object* v_currNamespace_3573_; lean_object* v_openDecls_3574_; uint8_t v_inPattern_3575_; lean_object* v_subExpr_3576_; lean_object* v_depth_3577_; lean_object* v___x_3579_; uint8_t v_isShared_3580_; uint8_t v_isSharedCheck_3587_; 
v_optionsPerPos_3572_ = lean_ctor_get(v_ctx_3565_, 0);
v_currNamespace_3573_ = lean_ctor_get(v_ctx_3565_, 1);
v_openDecls_3574_ = lean_ctor_get(v_ctx_3565_, 2);
v_inPattern_3575_ = lean_ctor_get_uint8(v_ctx_3565_, sizeof(void*)*5);
v_subExpr_3576_ = lean_ctor_get(v_ctx_3565_, 3);
v_depth_3577_ = lean_ctor_get(v_ctx_3565_, 4);
v_isSharedCheck_3587_ = !lean_is_exclusive(v_ctx_3565_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3579_ = v_ctx_3565_;
v_isShared_3580_ = v_isSharedCheck_3587_;
goto v_resetjp_3578_;
}
else
{
lean_inc(v_depth_3577_);
lean_inc(v_subExpr_3576_);
lean_inc(v_openDecls_3574_);
lean_inc(v_currNamespace_3573_);
lean_inc(v_optionsPerPos_3572_);
lean_dec(v_ctx_3565_);
v___x_3579_ = lean_box(0);
v_isShared_3580_ = v_isSharedCheck_3587_;
goto v_resetjp_3578_;
}
v_resetjp_3578_:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3584_; 
v___x_3581_ = lean_unsigned_to_nat(1u);
v___x_3582_ = lean_nat_add(v_depth_3577_, v___x_3581_);
lean_dec(v_depth_3577_);
if (v_isShared_3580_ == 0)
{
lean_ctor_set(v___x_3579_, 4, v___x_3582_);
v___x_3584_ = v___x_3579_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_optionsPerPos_3572_);
lean_ctor_set(v_reuseFailAlloc_3586_, 1, v_currNamespace_3573_);
lean_ctor_set(v_reuseFailAlloc_3586_, 2, v_openDecls_3574_);
lean_ctor_set(v_reuseFailAlloc_3586_, 3, v_subExpr_3576_);
lean_ctor_set(v_reuseFailAlloc_3586_, 4, v___x_3582_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, sizeof(void*)*5, v_inPattern_3575_);
v___x_3584_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
lean_object* v___x_3585_; 
v___x_3585_ = lean_apply_7(v_act_3564_, v___x_3584_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_, lean_box(0));
return v___x_3585_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withIncDepth___redArg___boxed(lean_object* v_act_3588_, lean_object* v_ctx_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_, lean_object* v_a_3592_, lean_object* v_a_3593_, lean_object* v_a_3594_, lean_object* v_a_3595_){
_start:
{
lean_object* v_res_3596_; 
v_res_3596_ = l_Lean_PrettyPrinter_Delaborator_withIncDepth___redArg(v_act_3588_, v_ctx_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_);
return v_res_3596_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withIncDepth(lean_object* v_00_u03b1_3597_, lean_object* v_act_3598_, lean_object* v_ctx_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_){
_start:
{
lean_object* v___x_3606_; 
v___x_3606_ = l_Lean_PrettyPrinter_Delaborator_withIncDepth___redArg(v_act_3598_, v_ctx_3599_, v_a_3600_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
return v___x_3606_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_withIncDepth___boxed(lean_object* v_00_u03b1_3607_, lean_object* v_act_3608_, lean_object* v_ctx_3609_, lean_object* v_a_3610_, lean_object* v_a_3611_, lean_object* v_a_3612_, lean_object* v_a_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_){
_start:
{
lean_object* v_res_3616_; 
v_res_3616_ = l_Lean_PrettyPrinter_Delaborator_withIncDepth(v_00_u03b1_3607_, v_act_3608_, v_ctx_3609_, v_a_3610_, v_a_3611_, v_a_3612_, v_a_3613_, v_a_3614_);
return v_res_3616_;
}
}
LEAN_EXPORT uint8_t l_Lean_PrettyPrinter_Delaborator_isShallowExpression(lean_object* v_threshold_3617_, lean_object* v_e_3618_){
_start:
{
lean_object* v___y_3620_; lean_object* v___x_3624_; uint8_t v___x_3625_; 
v___x_3624_ = lean_unsigned_to_nat(254u);
v___x_3625_ = lean_nat_dec_le(v___x_3624_, v_threshold_3617_);
if (v___x_3625_ == 0)
{
v___y_3620_ = v_threshold_3617_;
goto v___jp_3619_;
}
else
{
v___y_3620_ = v___x_3624_;
goto v___jp_3619_;
}
v___jp_3619_:
{
uint32_t v___x_3621_; lean_object* v___x_3622_; uint8_t v___x_3623_; 
v___x_3621_ = l_Lean_Expr_approxDepth(v_e_3618_);
v___x_3622_ = lean_uint32_to_nat(v___x_3621_);
v___x_3623_ = lean_nat_dec_le(v___x_3622_, v___y_3620_);
lean_dec(v___x_3622_);
return v___x_3623_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_isShallowExpression___boxed(lean_object* v_threshold_3626_, lean_object* v_e_3627_){
_start:
{
uint8_t v_res_3628_; lean_object* v_r_3629_; 
v_res_3628_ = l_Lean_PrettyPrinter_Delaborator_isShallowExpression(v_threshold_3626_, v_e_3627_);
lean_dec_ref(v_e_3627_);
lean_dec(v_threshold_3626_);
v_r_3629_ = lean_box(v_res_3628_);
return v_r_3629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr(lean_object* v_e_3632_, lean_object* v_a_3633_, lean_object* v_a_3634_, lean_object* v_a_3635_, lean_object* v_a_3636_, lean_object* v_a_3637_, lean_object* v_a_3638_){
_start:
{
uint8_t v___x_3640_; 
v___x_3640_ = l_Lean_Expr_isAtomic(v_e_3632_);
if (v___x_3640_ == 0)
{
lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3641_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr___closed__0));
lean_inc_ref(v_a_3637_);
v___x_3642_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_3641_, v_a_3633_, v_a_3634_, v_a_3635_, v_a_3636_, v_a_3637_, v_a_3638_);
if (lean_obj_tag(v___x_3642_) == 0)
{
lean_object* v_a_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3686_; 
v_a_3643_ = lean_ctor_get(v___x_3642_, 0);
v_isSharedCheck_3686_ = !lean_is_exclusive(v___x_3642_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3645_ = v___x_3642_;
v_isShared_3646_ = v_isSharedCheck_3686_;
goto v_resetjp_3644_;
}
else
{
lean_inc(v_a_3643_);
lean_dec(v___x_3642_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3686_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
uint8_t v___x_3647_; 
v___x_3647_ = lean_unbox(v_a_3643_);
if (v___x_3647_ == 0)
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
lean_del_object(v___x_3645_);
v___x_3648_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr___closed__1));
v___x_3649_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_3648_, v_a_3633_, v_a_3634_, v_a_3635_, v_a_3636_, v_a_3637_, v_a_3638_);
if (lean_obj_tag(v___x_3649_) == 0)
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3673_; 
v_a_3650_ = lean_ctor_get(v___x_3649_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3649_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3652_ = v___x_3649_;
v_isShared_3653_ = v_isSharedCheck_3673_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v___x_3649_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3673_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v_depth_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; uint8_t v___x_3657_; 
v_depth_3654_ = lean_ctor_get(v_a_3633_, 4);
v___x_3655_ = lean_nat_sub(v_depth_3654_, v_a_3650_);
v___x_3656_ = lean_unsigned_to_nat(0u);
v___x_3657_ = lean_nat_dec_lt(v___x_3656_, v___x_3655_);
if (v___x_3657_ == 0)
{
lean_object* v___x_3658_; lean_object* v___x_3660_; 
lean_dec(v___x_3655_);
lean_dec(v_a_3650_);
lean_dec(v_a_3643_);
v___x_3658_ = lean_box(v___x_3657_);
if (v_isShared_3653_ == 0)
{
lean_ctor_set(v___x_3652_, 0, v___x_3658_);
v___x_3660_ = v___x_3652_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v___x_3658_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
else
{
lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; uint8_t v___x_3665_; 
v___x_3662_ = lean_unsigned_to_nat(2u);
v___x_3663_ = lean_nat_shiftr(v_a_3650_, v___x_3662_);
lean_dec(v_a_3650_);
v___x_3664_ = lean_nat_sub(v___x_3663_, v___x_3655_);
lean_dec(v___x_3655_);
lean_dec(v___x_3663_);
v___x_3665_ = l_Lean_PrettyPrinter_Delaborator_isShallowExpression(v___x_3664_, v_e_3632_);
lean_dec(v___x_3664_);
if (v___x_3665_ == 0)
{
lean_object* v___x_3666_; lean_object* v___x_3668_; 
lean_dec(v_a_3643_);
v___x_3666_ = lean_box(v___x_3657_);
if (v_isShared_3653_ == 0)
{
lean_ctor_set(v___x_3652_, 0, v___x_3666_);
v___x_3668_ = v___x_3652_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v___x_3666_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
else
{
lean_object* v___x_3671_; 
if (v_isShared_3653_ == 0)
{
lean_ctor_set(v___x_3652_, 0, v_a_3643_);
v___x_3671_ = v___x_3652_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3643_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
}
else
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3681_; 
lean_dec(v_a_3643_);
v_a_3674_ = lean_ctor_get(v___x_3649_, 0);
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3649_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3676_ = v___x_3649_;
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3649_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3679_; 
if (v_isShared_3677_ == 0)
{
v___x_3679_ = v___x_3676_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_a_3674_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
}
else
{
lean_object* v___x_3682_; lean_object* v___x_3684_; 
lean_dec(v_a_3643_);
lean_dec_ref(v_a_3637_);
v___x_3682_ = lean_box(v___x_3640_);
if (v_isShared_3646_ == 0)
{
lean_ctor_set(v___x_3645_, 0, v___x_3682_);
v___x_3684_ = v___x_3645_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v___x_3682_);
v___x_3684_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
return v___x_3684_;
}
}
}
}
else
{
lean_dec_ref(v_a_3637_);
return v___x_3642_;
}
}
else
{
uint8_t v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; 
lean_dec_ref(v_a_3637_);
v___x_3687_ = 0;
v___x_3688_ = lean_box(v___x_3687_);
v___x_3689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3688_);
return v___x_3689_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr___boxed(lean_object* v_e_3690_, lean_object* v_a_3691_, lean_object* v_a_3692_, lean_object* v_a_3693_, lean_object* v_a_3694_, lean_object* v_a_3695_, lean_object* v_a_3696_, lean_object* v_a_3697_){
_start:
{
lean_object* v_res_3698_; 
v_res_3698_ = l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr(v_e_3690_, v_a_3691_, v_a_3692_, v_a_3693_, v_a_3694_, v_a_3695_, v_a_3696_);
lean_dec(v_a_3696_);
lean_dec(v_a_3694_);
lean_dec_ref(v_a_3693_);
lean_dec(v_a_3692_);
lean_dec_ref(v_a_3691_);
lean_dec_ref(v_e_3690_);
return v_res_3698_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitProof(lean_object* v_e_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_, lean_object* v_a_3704_, lean_object* v_a_3705_, lean_object* v_a_3706_, lean_object* v_a_3707_){
_start:
{
uint8_t v___x_3709_; 
v___x_3709_ = l_Lean_Expr_isAtomic(v_e_3701_);
if (v___x_3709_ == 0)
{
lean_object* v___x_3710_; lean_object* v___x_3711_; 
v___x_3710_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_shouldOmitProof___closed__0));
lean_inc_ref(v_a_3706_);
v___x_3711_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_3710_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_, v_a_3707_);
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_object* v_a_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3762_; 
v_a_3712_ = lean_ctor_get(v___x_3711_, 0);
v_isSharedCheck_3762_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3714_ = v___x_3711_;
v_isShared_3715_ = v_isSharedCheck_3762_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_a_3712_);
lean_dec(v___x_3711_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3762_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
lean_object* v___y_3717_; uint8_t v___x_3742_; 
v___x_3742_ = lean_unbox(v_a_3712_);
if (v___x_3742_ == 0)
{
lean_object* v___x_3743_; 
lean_del_object(v___x_3714_);
lean_inc(v_a_3707_);
lean_inc_ref(v_a_3706_);
lean_inc(v_a_3705_);
lean_inc_ref(v_a_3704_);
lean_inc_ref(v_e_3701_);
v___x_3743_ = l_Lean_Meta_isProof(v_e_3701_, v_a_3704_, v_a_3705_, v_a_3706_, v_a_3707_);
if (lean_obj_tag(v___x_3743_) == 0)
{
v___y_3717_ = v___x_3743_;
goto v___jp_3716_;
}
else
{
lean_object* v_a_3744_; uint8_t v___y_3746_; uint8_t v___x_3756_; 
v_a_3744_ = lean_ctor_get(v___x_3743_, 0);
lean_inc(v_a_3744_);
v___x_3756_ = l_Lean_Exception_isInterrupt(v_a_3744_);
if (v___x_3756_ == 0)
{
uint8_t v___x_3757_; 
v___x_3757_ = l_Lean_Exception_isRuntime(v_a_3744_);
v___y_3746_ = v___x_3757_;
goto v___jp_3745_;
}
else
{
lean_dec(v_a_3744_);
v___y_3746_ = v___x_3756_;
goto v___jp_3745_;
}
v___jp_3745_:
{
if (v___y_3746_ == 0)
{
lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3754_; 
lean_dec(v_a_3712_);
lean_dec(v_a_3707_);
lean_dec_ref(v_a_3706_);
lean_dec(v_a_3705_);
lean_dec_ref(v_a_3704_);
lean_dec_ref(v_e_3701_);
v_isSharedCheck_3754_ = !lean_is_exclusive(v___x_3743_);
if (v_isSharedCheck_3754_ == 0)
{
lean_object* v_unused_3755_; 
v_unused_3755_ = lean_ctor_get(v___x_3743_, 0);
lean_dec(v_unused_3755_);
v___x_3748_ = v___x_3743_;
v_isShared_3749_ = v_isSharedCheck_3754_;
goto v_resetjp_3747_;
}
else
{
lean_dec(v___x_3743_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3754_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3750_; lean_object* v___x_3752_; 
v___x_3750_ = lean_box(v___y_3746_);
if (v_isShared_3749_ == 0)
{
lean_ctor_set_tag(v___x_3748_, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3750_);
v___x_3752_ = v___x_3748_;
goto v_reusejp_3751_;
}
else
{
lean_object* v_reuseFailAlloc_3753_; 
v_reuseFailAlloc_3753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3753_, 0, v___x_3750_);
v___x_3752_ = v_reuseFailAlloc_3753_;
goto v_reusejp_3751_;
}
v_reusejp_3751_:
{
return v___x_3752_;
}
}
}
else
{
v___y_3717_ = v___x_3743_;
goto v___jp_3716_;
}
}
}
}
else
{
lean_object* v___x_3758_; lean_object* v___x_3760_; 
lean_dec(v_a_3712_);
lean_dec(v_a_3707_);
lean_dec_ref(v_a_3706_);
lean_dec(v_a_3705_);
lean_dec_ref(v_a_3704_);
lean_dec_ref(v_e_3701_);
v___x_3758_ = lean_box(v___x_3709_);
if (v_isShared_3715_ == 0)
{
lean_ctor_set(v___x_3714_, 0, v___x_3758_);
v___x_3760_ = v___x_3714_;
goto v_reusejp_3759_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v___x_3758_);
v___x_3760_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3759_;
}
v_reusejp_3759_:
{
return v___x_3760_;
}
}
v___jp_3716_:
{
if (lean_obj_tag(v___y_3717_) == 0)
{
lean_object* v_a_3718_; uint8_t v___x_3719_; 
v_a_3718_ = lean_ctor_get(v___y_3717_, 0);
v___x_3719_ = lean_unbox(v_a_3718_);
if (v___x_3719_ == 0)
{
lean_dec(v_a_3712_);
lean_dec(v_a_3707_);
lean_dec_ref(v_a_3706_);
lean_dec(v_a_3705_);
lean_dec_ref(v_a_3704_);
lean_dec_ref(v_e_3701_);
return v___y_3717_;
}
else
{
lean_object* v___x_3720_; lean_object* v___x_3721_; 
lean_inc(v_a_3718_);
lean_dec_ref(v___y_3717_);
v___x_3720_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_shouldOmitProof___closed__1));
v___x_3721_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_3720_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_, v_a_3707_);
lean_dec(v_a_3707_);
lean_dec(v_a_3705_);
lean_dec_ref(v_a_3704_);
if (lean_obj_tag(v___x_3721_) == 0)
{
lean_object* v_a_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3733_; 
v_a_3722_ = lean_ctor_get(v___x_3721_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3724_ = v___x_3721_;
v_isShared_3725_ = v_isSharedCheck_3733_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_a_3722_);
lean_dec(v___x_3721_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3733_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
uint8_t v___x_3726_; 
v___x_3726_ = l_Lean_PrettyPrinter_Delaborator_isShallowExpression(v_a_3722_, v_e_3701_);
lean_dec_ref(v_e_3701_);
lean_dec(v_a_3722_);
if (v___x_3726_ == 0)
{
lean_object* v___x_3728_; 
lean_dec(v_a_3712_);
if (v_isShared_3725_ == 0)
{
lean_ctor_set(v___x_3724_, 0, v_a_3718_);
v___x_3728_ = v___x_3724_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3718_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
else
{
lean_object* v___x_3731_; 
lean_dec(v_a_3718_);
if (v_isShared_3725_ == 0)
{
lean_ctor_set(v___x_3724_, 0, v_a_3712_);
v___x_3731_ = v___x_3724_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3712_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
}
else
{
lean_object* v_a_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3741_; 
lean_dec(v_a_3718_);
lean_dec(v_a_3712_);
lean_dec_ref(v_e_3701_);
v_a_3734_ = lean_ctor_get(v___x_3721_, 0);
v_isSharedCheck_3741_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3741_ == 0)
{
v___x_3736_ = v___x_3721_;
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_a_3734_);
lean_dec(v___x_3721_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3741_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v___x_3739_; 
if (v_isShared_3737_ == 0)
{
v___x_3739_ = v___x_3736_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3740_; 
v_reuseFailAlloc_3740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3740_, 0, v_a_3734_);
v___x_3739_ = v_reuseFailAlloc_3740_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
return v___x_3739_;
}
}
}
}
}
else
{
lean_dec(v_a_3712_);
lean_dec(v_a_3707_);
lean_dec_ref(v_a_3706_);
lean_dec(v_a_3705_);
lean_dec_ref(v_a_3704_);
lean_dec_ref(v_e_3701_);
return v___y_3717_;
}
}
}
}
else
{
lean_dec(v_a_3707_);
lean_dec_ref(v_a_3706_);
lean_dec(v_a_3705_);
lean_dec_ref(v_a_3704_);
lean_dec_ref(v_e_3701_);
return v___x_3711_;
}
}
else
{
uint8_t v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
lean_dec(v_a_3707_);
lean_dec_ref(v_a_3706_);
lean_dec(v_a_3705_);
lean_dec_ref(v_a_3704_);
lean_dec_ref(v_e_3701_);
v___x_3763_ = 0;
v___x_3764_ = lean_box(v___x_3763_);
v___x_3765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3765_, 0, v___x_3764_);
return v___x_3765_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_shouldOmitProof___boxed(lean_object* v_e_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_){
_start:
{
lean_object* v_res_3774_; 
v_res_3774_ = l_Lean_PrettyPrinter_Delaborator_shouldOmitProof(v_e_3766_, v_a_3767_, v_a_3768_, v_a_3769_, v_a_3770_, v_a_3771_, v_a_3772_);
lean_dec(v_a_3768_);
lean_dec_ref(v_a_3767_);
return v_res_3774_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_omission___redArg(lean_object* v_reason_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_, lean_object* v_a_3787_){
_start:
{
lean_object* v_ref_3789_; uint8_t v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; 
v_ref_3789_ = lean_ctor_get(v_a_3787_, 5);
v___x_3790_ = 0;
v___x_3791_ = l_Lean_SourceInfo_fromRef(v_ref_3789_, v___x_3790_);
v___x_3792_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__2));
v___x_3793_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_omission___redArg___closed__3));
lean_inc(v___x_3791_);
v___x_3794_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3791_);
lean_ctor_set(v___x_3794_, 1, v___x_3793_);
v___x_3795_ = l_Lean_Syntax_node1(v___x_3791_, v___x_3792_, v___x_3794_);
v___x_3796_ = l_Lean_PrettyPrinter_Delaborator_annotateCurPos___redArg(v___x_3795_, v_a_3784_);
if (lean_obj_tag(v___x_3796_) == 0)
{
lean_object* v_a_3797_; lean_object* v___x_3798_; lean_object* v_a_3799_; lean_object* v___x_3800_; lean_object* v_a_3801_; lean_object* v___x_3802_; 
v_a_3797_ = lean_ctor_get(v___x_3796_, 0);
lean_inc(v_a_3797_);
lean_dec_ref(v___x_3796_);
v___x_3798_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getPos___at___00Lean_PrettyPrinter_Delaborator_getOptionsAtCurrPos_spec__1___redArg(v_a_3784_);
v_a_3799_ = lean_ctor_get(v___x_3798_, 0);
lean_inc(v_a_3799_);
lean_dec_ref(v___x_3798_);
v___x_3800_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(v_a_3784_);
v_a_3801_ = lean_ctor_get(v___x_3800_, 0);
lean_inc(v_a_3801_);
lean_dec_ref(v___x_3800_);
lean_inc(v_a_3797_);
v___x_3802_ = l_Lean_PrettyPrinter_Delaborator_addOmissionInfo___redArg(v_a_3799_, v_a_3797_, v_a_3801_, v_reason_3783_, v_a_3785_, v_a_3786_);
if (lean_obj_tag(v___x_3802_) == 0)
{
lean_object* v___x_3804_; uint8_t v_isShared_3805_; uint8_t v_isSharedCheck_3809_; 
v_isSharedCheck_3809_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3809_ == 0)
{
lean_object* v_unused_3810_; 
v_unused_3810_ = lean_ctor_get(v___x_3802_, 0);
lean_dec(v_unused_3810_);
v___x_3804_ = v___x_3802_;
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
else
{
lean_dec(v___x_3802_);
v___x_3804_ = lean_box(0);
v_isShared_3805_ = v_isSharedCheck_3809_;
goto v_resetjp_3803_;
}
v_resetjp_3803_:
{
lean_object* v___x_3807_; 
if (v_isShared_3805_ == 0)
{
lean_ctor_set(v___x_3804_, 0, v_a_3797_);
v___x_3807_ = v___x_3804_;
goto v_reusejp_3806_;
}
else
{
lean_object* v_reuseFailAlloc_3808_; 
v_reuseFailAlloc_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3808_, 0, v_a_3797_);
v___x_3807_ = v_reuseFailAlloc_3808_;
goto v_reusejp_3806_;
}
v_reusejp_3806_:
{
return v___x_3807_;
}
}
}
else
{
lean_object* v_a_3811_; lean_object* v___x_3813_; uint8_t v_isShared_3814_; uint8_t v_isSharedCheck_3818_; 
lean_dec(v_a_3797_);
v_a_3811_ = lean_ctor_get(v___x_3802_, 0);
v_isSharedCheck_3818_ = !lean_is_exclusive(v___x_3802_);
if (v_isSharedCheck_3818_ == 0)
{
v___x_3813_ = v___x_3802_;
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
else
{
lean_inc(v_a_3811_);
lean_dec(v___x_3802_);
v___x_3813_ = lean_box(0);
v_isShared_3814_ = v_isSharedCheck_3818_;
goto v_resetjp_3812_;
}
v_resetjp_3812_:
{
lean_object* v___x_3816_; 
if (v_isShared_3814_ == 0)
{
v___x_3816_ = v___x_3813_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3817_; 
v_reuseFailAlloc_3817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3817_, 0, v_a_3811_);
v___x_3816_ = v_reuseFailAlloc_3817_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
return v___x_3816_;
}
}
}
}
else
{
return v___x_3796_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_omission___redArg___boxed(lean_object* v_reason_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_){
_start:
{
lean_object* v_res_3825_; 
v_res_3825_ = l_Lean_PrettyPrinter_Delaborator_omission___redArg(v_reason_3819_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_);
lean_dec_ref(v_a_3823_);
lean_dec_ref(v_a_3822_);
lean_dec(v_a_3821_);
lean_dec_ref(v_a_3820_);
lean_dec(v_reason_3819_);
return v_res_3825_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_omission(lean_object* v_reason_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_, lean_object* v_a_3829_, lean_object* v_a_3830_, lean_object* v_a_3831_, lean_object* v_a_3832_){
_start:
{
lean_object* v___x_3834_; 
v___x_3834_ = l_Lean_PrettyPrinter_Delaborator_omission___redArg(v_reason_3826_, v_a_3827_, v_a_3828_, v_a_3829_, v_a_3831_);
return v___x_3834_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_omission___boxed(lean_object* v_reason_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_, lean_object* v_a_3839_, lean_object* v_a_3840_, lean_object* v_a_3841_, lean_object* v_a_3842_){
_start:
{
lean_object* v_res_3843_; 
v_res_3843_ = l_Lean_PrettyPrinter_Delaborator_omission(v_reason_3835_, v_a_3836_, v_a_3837_, v_a_3838_, v_a_3839_, v_a_3840_, v_a_3841_);
lean_dec(v_a_3841_);
lean_dec_ref(v_a_3840_);
lean_dec(v_a_3839_);
lean_dec_ref(v_a_3838_);
lean_dec(v_a_3837_);
lean_dec_ref(v_a_3836_);
lean_dec(v_reason_3835_);
return v_res_3843_;
}
}
LEAN_EXPORT lean_object* l_List_firstM___at___00Lean_PrettyPrinter_Delaborator_delabFor_spec__0(lean_object* v_x_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_){
_start:
{
if (lean_obj_tag(v_x_3844_) == 0)
{
lean_object* v___x_3852_; 
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec(v___y_3848_);
lean_dec_ref(v___y_3847_);
lean_dec(v___y_3846_);
lean_dec_ref(v___y_3845_);
v___x_3852_ = l_Lean_PrettyPrinter_Delaborator_failure___redArg();
return v___x_3852_;
}
else
{
lean_object* v_head_3853_; lean_object* v_tail_3854_; lean_object* v___x_3855_; 
v_head_3853_ = lean_ctor_get(v_x_3844_, 0);
lean_inc(v_head_3853_);
v_tail_3854_ = lean_ctor_get(v_x_3844_, 1);
lean_inc(v_tail_3854_);
lean_dec_ref(v_x_3844_);
lean_inc(v___y_3850_);
lean_inc_ref(v___y_3849_);
lean_inc(v___y_3848_);
lean_inc_ref(v___y_3847_);
lean_inc(v___y_3846_);
lean_inc_ref(v___y_3845_);
v___x_3855_ = lean_apply_7(v_head_3853_, v___y_3845_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_, v___y_3850_, lean_box(0));
if (lean_obj_tag(v___x_3855_) == 0)
{
lean_dec(v_tail_3854_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec(v___y_3848_);
lean_dec_ref(v___y_3847_);
lean_dec(v___y_3846_);
lean_dec_ref(v___y_3845_);
return v___x_3855_;
}
else
{
lean_object* v_a_3856_; lean_object* v___x_3857_; uint8_t v___y_3859_; uint8_t v___x_3863_; 
v_a_3856_ = lean_ctor_get(v___x_3855_, 0);
lean_inc(v_a_3856_);
v___x_3857_ = l_Lean_PrettyPrinter_Delaborator_delabFailureId;
v___x_3863_ = l_Lean_Exception_isInterrupt(v_a_3856_);
if (v___x_3863_ == 0)
{
uint8_t v___x_3864_; 
lean_inc(v_a_3856_);
v___x_3864_ = l_Lean_Exception_isRuntime(v_a_3856_);
v___y_3859_ = v___x_3864_;
goto v___jp_3858_;
}
else
{
v___y_3859_ = v___x_3863_;
goto v___jp_3858_;
}
v___jp_3858_:
{
if (v___y_3859_ == 0)
{
if (lean_obj_tag(v_a_3856_) == 0)
{
lean_dec_ref(v_a_3856_);
lean_dec(v_tail_3854_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec(v___y_3848_);
lean_dec_ref(v___y_3847_);
lean_dec(v___y_3846_);
lean_dec_ref(v___y_3845_);
return v___x_3855_;
}
else
{
lean_object* v_id_3860_; uint8_t v___x_3861_; 
v_id_3860_ = lean_ctor_get(v_a_3856_, 0);
lean_inc(v_id_3860_);
lean_dec_ref(v_a_3856_);
v___x_3861_ = l_Lean_instBEqInternalExceptionId_beq(v___x_3857_, v_id_3860_);
lean_dec(v_id_3860_);
if (v___x_3861_ == 0)
{
lean_dec(v_tail_3854_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec(v___y_3848_);
lean_dec_ref(v___y_3847_);
lean_dec(v___y_3846_);
lean_dec_ref(v___y_3845_);
return v___x_3855_;
}
else
{
lean_dec_ref(v___x_3855_);
v_x_3844_ = v_tail_3854_;
goto _start;
}
}
}
else
{
lean_dec(v_a_3856_);
lean_dec(v_tail_3854_);
lean_dec(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec(v___y_3848_);
lean_dec_ref(v___y_3847_);
lean_dec(v___y_3846_);
lean_dec_ref(v___y_3845_);
return v___x_3855_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_firstM___at___00Lean_PrettyPrinter_Delaborator_delabFor_spec__0___boxed(lean_object* v_x_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_){
_start:
{
lean_object* v_res_3873_; 
v_res_3873_ = l_List_firstM___at___00Lean_PrettyPrinter_Delaborator_delabFor_spec__0(v_x_3865_, v___y_3866_, v___y_3867_, v___y_3868_, v___y_3869_, v___y_3870_, v___y_3871_);
return v_res_3873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabFor(lean_object* v_x_3874_, lean_object* v_a_3875_, lean_object* v_a_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_, lean_object* v_a_3880_){
_start:
{
lean_object* v___y_3883_; lean_object* v___y_3884_; lean_object* v___y_3885_; uint8_t v___y_3886_; lean_object* v___y_3894_; 
if (lean_obj_tag(v_x_3874_) == 0)
{
lean_object* v___x_3899_; 
lean_dec(v_a_3880_);
lean_dec_ref(v_a_3879_);
lean_dec(v_a_3878_);
lean_dec_ref(v_a_3877_);
lean_dec(v_a_3876_);
lean_dec_ref(v_a_3875_);
v___x_3899_ = l_Lean_PrettyPrinter_Delaborator_failure___redArg();
return v___x_3899_;
}
else
{
lean_object* v___x_3900_; lean_object* v_env_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; 
v___x_3900_ = lean_st_ref_get(v_a_3880_);
v_env_3901_ = lean_ctor_get(v___x_3900_, 0);
lean_inc_ref(v_env_3901_);
lean_dec(v___x_3900_);
v___x_3902_ = l_Lean_PrettyPrinter_Delaborator_delabAttribute;
v___x_3903_ = l_Lean_KeyedDeclsAttribute_getValues___redArg(v___x_3902_, v_env_3901_, v_x_3874_);
lean_inc(v_a_3880_);
lean_inc_ref(v_a_3879_);
lean_inc(v_a_3878_);
lean_inc_ref(v_a_3877_);
lean_inc(v_a_3876_);
lean_inc_ref(v_a_3875_);
v___x_3904_ = l_List_firstM___at___00Lean_PrettyPrinter_Delaborator_delabFor_spec__0(v___x_3903_, v_a_3875_, v_a_3876_, v_a_3877_, v_a_3878_, v_a_3879_, v_a_3880_);
if (lean_obj_tag(v___x_3904_) == 0)
{
lean_object* v_a_3905_; lean_object* v___x_3906_; 
v_a_3905_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_a_3905_);
lean_dec_ref(v___x_3904_);
v___x_3906_ = l_Lean_PrettyPrinter_Delaborator_annotateTermInfoUnlessAnnotated___redArg(v_a_3905_, v_a_3875_, v_a_3876_, v_a_3877_);
v___y_3894_ = v___x_3906_;
goto v___jp_3893_;
}
else
{
v___y_3894_ = v___x_3904_;
goto v___jp_3893_;
}
}
v___jp_3882_:
{
if (v___y_3886_ == 0)
{
if (lean_obj_tag(v___y_3885_) == 0)
{
lean_dec_ref(v___y_3885_);
lean_dec(v___y_3884_);
lean_dec(v_a_3880_);
lean_dec_ref(v_a_3879_);
lean_dec(v_a_3878_);
lean_dec_ref(v_a_3877_);
lean_dec(v_a_3876_);
lean_dec_ref(v_a_3875_);
lean_dec(v_x_3874_);
return v___y_3883_;
}
else
{
lean_object* v_id_3887_; uint8_t v___x_3888_; 
v_id_3887_ = lean_ctor_get(v___y_3885_, 0);
lean_inc(v_id_3887_);
lean_dec_ref(v___y_3885_);
v___x_3888_ = l_Lean_instBEqInternalExceptionId_beq(v___y_3884_, v_id_3887_);
lean_dec(v_id_3887_);
lean_dec(v___y_3884_);
if (v___x_3888_ == 0)
{
lean_dec(v_a_3880_);
lean_dec_ref(v_a_3879_);
lean_dec(v_a_3878_);
lean_dec_ref(v_a_3877_);
lean_dec(v_a_3876_);
lean_dec_ref(v_a_3875_);
lean_dec(v_x_3874_);
return v___y_3883_;
}
else
{
uint8_t v___x_3889_; 
lean_dec_ref(v___y_3883_);
v___x_3889_ = l_Lean_Name_isAtomic(v_x_3874_);
if (v___x_3889_ == 0)
{
lean_object* v___x_3890_; 
v___x_3890_ = l_Lean_Name_getRoot(v_x_3874_);
lean_dec(v_x_3874_);
v_x_3874_ = v___x_3890_;
goto _start;
}
else
{
lean_object* v___x_3892_; 
lean_dec(v_a_3880_);
lean_dec_ref(v_a_3879_);
lean_dec(v_a_3878_);
lean_dec_ref(v_a_3877_);
lean_dec(v_a_3876_);
lean_dec_ref(v_a_3875_);
lean_dec(v_x_3874_);
v___x_3892_ = l_Lean_PrettyPrinter_Delaborator_failure___redArg();
return v___x_3892_;
}
}
}
}
else
{
lean_dec_ref(v___y_3885_);
lean_dec(v___y_3884_);
lean_dec(v_a_3880_);
lean_dec_ref(v_a_3879_);
lean_dec(v_a_3878_);
lean_dec_ref(v_a_3877_);
lean_dec(v_a_3876_);
lean_dec_ref(v_a_3875_);
lean_dec(v_x_3874_);
return v___y_3883_;
}
}
v___jp_3893_:
{
if (lean_obj_tag(v___y_3894_) == 0)
{
lean_dec(v_a_3880_);
lean_dec_ref(v_a_3879_);
lean_dec(v_a_3878_);
lean_dec_ref(v_a_3877_);
lean_dec(v_a_3876_);
lean_dec_ref(v_a_3875_);
lean_dec(v_x_3874_);
return v___y_3894_;
}
else
{
lean_object* v_a_3895_; lean_object* v___x_3896_; uint8_t v___x_3897_; 
v_a_3895_ = lean_ctor_get(v___y_3894_, 0);
lean_inc(v_a_3895_);
v___x_3896_ = l_Lean_PrettyPrinter_Delaborator_delabFailureId;
v___x_3897_ = l_Lean_Exception_isInterrupt(v_a_3895_);
if (v___x_3897_ == 0)
{
uint8_t v___x_3898_; 
lean_inc(v_a_3895_);
v___x_3898_ = l_Lean_Exception_isRuntime(v_a_3895_);
v___y_3883_ = v___y_3894_;
v___y_3884_ = v___x_3896_;
v___y_3885_ = v_a_3895_;
v___y_3886_ = v___x_3898_;
goto v___jp_3882_;
}
else
{
v___y_3883_ = v___y_3894_;
v___y_3884_ = v___x_3896_;
v___y_3885_ = v_a_3895_;
v___y_3886_ = v___x_3897_;
goto v___jp_3882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delabFor___boxed(lean_object* v_x_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_, lean_object* v_a_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_){
_start:
{
lean_object* v_res_3915_; 
v_res_3915_ = l_Lean_PrettyPrinter_Delaborator_delabFor(v_x_3907_, v_a_3908_, v_a_3909_, v_a_3910_, v_a_3911_, v_a_3912_, v_a_3913_);
return v_res_3915_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0_spec__0(lean_object* v_msgData_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_){
_start:
{
lean_object* v___x_3922_; lean_object* v_env_3923_; lean_object* v___x_3924_; lean_object* v_mctx_3925_; lean_object* v_lctx_3926_; lean_object* v_options_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; 
v___x_3922_ = lean_st_ref_get(v___y_3920_);
v_env_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc_ref(v_env_3923_);
lean_dec(v___x_3922_);
v___x_3924_ = lean_st_ref_get(v___y_3918_);
v_mctx_3925_ = lean_ctor_get(v___x_3924_, 0);
lean_inc_ref(v_mctx_3925_);
lean_dec(v___x_3924_);
v_lctx_3926_ = lean_ctor_get(v___y_3917_, 2);
v_options_3927_ = lean_ctor_get(v___y_3919_, 2);
lean_inc_ref(v_options_3927_);
lean_inc_ref(v_lctx_3926_);
v___x_3928_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3928_, 0, v_env_3923_);
lean_ctor_set(v___x_3928_, 1, v_mctx_3925_);
lean_ctor_set(v___x_3928_, 2, v_lctx_3926_);
lean_ctor_set(v___x_3928_, 3, v_options_3927_);
v___x_3929_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3928_);
lean_ctor_set(v___x_3929_, 1, v_msgData_3916_);
v___x_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
return v___x_3930_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0_spec__0___boxed(lean_object* v_msgData_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_){
_start:
{
lean_object* v_res_3937_; 
v_res_3937_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0_spec__0(v_msgData_3931_, v___y_3932_, v___y_3933_, v___y_3934_, v___y_3935_);
lean_dec(v___y_3935_);
lean_dec_ref(v___y_3934_);
lean_dec(v___y_3933_);
lean_dec_ref(v___y_3932_);
return v_res_3937_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0___redArg(lean_object* v_msg_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_){
_start:
{
lean_object* v_ref_3944_; lean_object* v___x_3945_; lean_object* v_a_3946_; lean_object* v___x_3948_; uint8_t v_isShared_3949_; uint8_t v_isSharedCheck_3954_; 
v_ref_3944_ = lean_ctor_get(v___y_3941_, 5);
v___x_3945_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0_spec__0(v_msg_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_);
v_a_3946_ = lean_ctor_get(v___x_3945_, 0);
v_isSharedCheck_3954_ = !lean_is_exclusive(v___x_3945_);
if (v_isSharedCheck_3954_ == 0)
{
v___x_3948_ = v___x_3945_;
v_isShared_3949_ = v_isSharedCheck_3954_;
goto v_resetjp_3947_;
}
else
{
lean_inc(v_a_3946_);
lean_dec(v___x_3945_);
v___x_3948_ = lean_box(0);
v_isShared_3949_ = v_isSharedCheck_3954_;
goto v_resetjp_3947_;
}
v_resetjp_3947_:
{
lean_object* v___x_3950_; lean_object* v___x_3952_; 
lean_inc(v_ref_3944_);
v___x_3950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3950_, 0, v_ref_3944_);
lean_ctor_set(v___x_3950_, 1, v_a_3946_);
if (v_isShared_3949_ == 0)
{
lean_ctor_set_tag(v___x_3948_, 1);
lean_ctor_set(v___x_3948_, 0, v___x_3950_);
v___x_3952_ = v___x_3948_;
goto v_reusejp_3951_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v___x_3950_);
v___x_3952_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3951_;
}
v_reusejp_3951_:
{
return v___x_3952_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0___redArg___boxed(lean_object* v_msg_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_){
_start:
{
lean_object* v_res_3961_; 
v_res_3961_ = l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0___redArg(v_msg_3955_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_);
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
lean_dec(v___y_3957_);
lean_dec_ref(v___y_3956_);
return v_res_3961_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_delab___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3963_; lean_object* v___x_3964_; 
v___x_3963_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___lam__0___closed__0));
v___x_3964_ = l_Lean_stringToMessageData(v___x_3963_);
return v___x_3964_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delab___lam__0(lean_object* v_a_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_){
_start:
{
lean_object* v___x_3973_; 
lean_inc(v___y_3971_);
lean_inc_ref(v___y_3970_);
lean_inc(v___y_3969_);
lean_inc_ref(v___y_3968_);
lean_inc(v_a_3965_);
v___x_3973_ = l_Lean_PrettyPrinter_Delaborator_delabFor(v_a_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_);
if (lean_obj_tag(v___x_3973_) == 0)
{
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
lean_dec(v_a_3965_);
return v___x_3973_;
}
else
{
lean_object* v_a_3974_; lean_object* v___x_3975_; uint8_t v___y_3977_; uint8_t v___x_3993_; 
v_a_3974_ = lean_ctor_get(v___x_3973_, 0);
lean_inc(v_a_3974_);
v___x_3975_ = l_Lean_PrettyPrinter_Delaborator_delabFailureId;
v___x_3993_ = l_Lean_Exception_isInterrupt(v_a_3974_);
if (v___x_3993_ == 0)
{
uint8_t v___x_3994_; 
lean_inc(v_a_3974_);
v___x_3994_ = l_Lean_Exception_isRuntime(v_a_3974_);
v___y_3977_ = v___x_3994_;
goto v___jp_3976_;
}
else
{
v___y_3977_ = v___x_3993_;
goto v___jp_3976_;
}
v___jp_3976_:
{
if (v___y_3977_ == 0)
{
if (lean_obj_tag(v_a_3974_) == 0)
{
lean_dec_ref(v_a_3974_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
lean_dec(v_a_3965_);
return v___x_3973_;
}
else
{
lean_object* v_id_3978_; lean_object* v___x_3980_; uint8_t v_isShared_3981_; uint8_t v_isSharedCheck_3991_; 
v_id_3978_ = lean_ctor_get(v_a_3974_, 0);
v_isSharedCheck_3991_ = !lean_is_exclusive(v_a_3974_);
if (v_isSharedCheck_3991_ == 0)
{
lean_object* v_unused_3992_; 
v_unused_3992_ = lean_ctor_get(v_a_3974_, 1);
lean_dec(v_unused_3992_);
v___x_3980_ = v_a_3974_;
v_isShared_3981_ = v_isSharedCheck_3991_;
goto v_resetjp_3979_;
}
else
{
lean_inc(v_id_3978_);
lean_dec(v_a_3974_);
v___x_3980_ = lean_box(0);
v_isShared_3981_ = v_isSharedCheck_3991_;
goto v_resetjp_3979_;
}
v_resetjp_3979_:
{
uint8_t v___x_3982_; 
v___x_3982_ = l_Lean_instBEqInternalExceptionId_beq(v___x_3975_, v_id_3978_);
lean_dec(v_id_3978_);
if (v___x_3982_ == 0)
{
lean_del_object(v___x_3980_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
lean_dec(v_a_3965_);
return v___x_3973_;
}
else
{
lean_object* v___x_3983_; lean_object* v___x_3984_; lean_object* v___x_3986_; 
lean_dec_ref(v___x_3973_);
v___x_3983_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_delab___lam__0___closed__1, &l_Lean_PrettyPrinter_Delaborator_delab___lam__0___closed__1_once, _init_l_Lean_PrettyPrinter_Delaborator_delab___lam__0___closed__1);
v___x_3984_ = l_Lean_MessageData_ofName(v_a_3965_);
if (v_isShared_3981_ == 0)
{
lean_ctor_set_tag(v___x_3980_, 7);
lean_ctor_set(v___x_3980_, 1, v___x_3984_);
lean_ctor_set(v___x_3980_, 0, v___x_3983_);
v___x_3986_ = v___x_3980_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3990_; 
v_reuseFailAlloc_3990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3990_, 0, v___x_3983_);
lean_ctor_set(v_reuseFailAlloc_3990_, 1, v___x_3984_);
v___x_3986_ = v_reuseFailAlloc_3990_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
lean_object* v___x_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; 
v___x_3987_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__1_spec__4_spec__9_spec__12_spec__16___redArg___closed__3);
v___x_3988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3988_, 0, v___x_3986_);
lean_ctor_set(v___x_3988_, 1, v___x_3987_);
v___x_3989_ = l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0___redArg(v___x_3988_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
return v___x_3989_;
}
}
}
}
}
else
{
lean_dec(v_a_3974_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
lean_dec(v_a_3965_);
return v___x_3973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delab___lam__0___boxed(lean_object* v_a_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_){
_start:
{
lean_object* v_res_4003_; 
v_res_4003_ = l_Lean_PrettyPrinter_Delaborator_delab___lam__0(v_a_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_);
return v_res_4003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1___redArg(lean_object* v_x_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_){
_start:
{
lean_object* v___x_4012_; lean_object* v_a_4013_; lean_object* v___x_4014_; 
v___x_4012_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(v___y_4005_);
v_a_4013_ = lean_ctor_get(v___x_4012_, 0);
lean_inc(v_a_4013_);
lean_dec_ref(v___x_4012_);
lean_inc(v___y_4010_);
lean_inc_ref(v___y_4009_);
lean_inc(v___y_4008_);
lean_inc_ref(v___y_4007_);
v___x_4014_ = lean_infer_type(v_a_4013_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_);
if (lean_obj_tag(v___x_4014_) == 0)
{
lean_object* v_a_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v_a_4015_ = lean_ctor_get(v___x_4014_, 0);
lean_inc(v_a_4015_);
lean_dec_ref(v___x_4014_);
v___x_4016_ = l_Lean_SubExpr_Pos_typeCoord;
v___x_4017_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_descend___at___00Lean_PrettyPrinter_Delaborator_SubExpr_withBindingBody_x27___at___00Lean_PrettyPrinter_Delaborator_withBindingBodyUnusedName_spec__0_spec__0___redArg(v_a_4015_, v___x_4016_, v_x_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_);
return v___x_4017_;
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
lean_dec(v___y_4010_);
lean_dec_ref(v___y_4009_);
lean_dec(v___y_4008_);
lean_dec_ref(v___y_4007_);
lean_dec(v___y_4006_);
lean_dec_ref(v___y_4005_);
lean_dec_ref(v_x_4004_);
v_a_4018_ = lean_ctor_get(v___x_4014_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_4014_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_4014_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_4014_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1___redArg___boxed(lean_object* v_x_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1___redArg(v_x_4026_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_, v___y_4032_);
return v_res_4034_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_Delaborator_delab___closed__8(void){
_start:
{
lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4052_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__1));
v___x_4053_ = l_String_toRawSubstring_x27(v___x_4052_);
return v___x_4053_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delab___boxed(lean_object* v_a_4096_, lean_object* v_a_4097_, lean_object* v_a_4098_, lean_object* v_a_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_){
_start:
{
lean_object* v_res_4103_; 
v_res_4103_ = l_Lean_PrettyPrinter_Delaborator_delab(v_a_4096_, v_a_4097_, v_a_4098_, v_a_4099_, v_a_4100_, v_a_4101_);
return v_res_4103_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_delab(lean_object* v_a_4104_, lean_object* v_a_4105_, lean_object* v_a_4106_, lean_object* v_a_4107_, lean_object* v_a_4108_, lean_object* v_a_4109_){
_start:
{
lean_object* v___x_4111_; lean_object* v___x_4112_; 
v___x_4111_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__4_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_));
v___x_4112_ = l_Lean_Core_checkSystem(v___x_4111_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4112_) == 0)
{
lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; 
lean_dec_ref(v___x_4112_);
v___x_4113_ = lean_st_ref_get(v_a_4105_);
v___x_4114_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__0));
lean_inc_ref(v_a_4108_);
v___x_4115_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_4114_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4115_) == 0)
{
lean_object* v_a_4116_; lean_object* v_steps_4117_; uint8_t v___x_4118_; 
v_a_4116_ = lean_ctor_get(v___x_4115_, 0);
lean_inc(v_a_4116_);
lean_dec_ref(v___x_4115_);
v_steps_4117_ = lean_ctor_get(v___x_4113_, 0);
lean_inc(v_steps_4117_);
lean_dec(v___x_4113_);
v___x_4118_ = lean_nat_dec_le(v_a_4116_, v_steps_4117_);
lean_dec(v_steps_4117_);
lean_dec(v_a_4116_);
if (v___x_4118_ == 0)
{
lean_object* v___x_4119_; lean_object* v_steps_4120_; lean_object* v_infos_4121_; lean_object* v_holeIter_4122_; lean_object* v___x_4124_; uint8_t v_isShared_4125_; uint8_t v_isSharedCheck_4293_; 
v___x_4119_ = lean_st_ref_take(v_a_4105_);
v_steps_4120_ = lean_ctor_get(v___x_4119_, 0);
v_infos_4121_ = lean_ctor_get(v___x_4119_, 1);
v_holeIter_4122_ = lean_ctor_get(v___x_4119_, 2);
v_isSharedCheck_4293_ = !lean_is_exclusive(v___x_4119_);
if (v_isSharedCheck_4293_ == 0)
{
v___x_4124_ = v___x_4119_;
v_isShared_4125_ = v_isSharedCheck_4293_;
goto v_resetjp_4123_;
}
else
{
lean_inc(v_holeIter_4122_);
lean_inc(v_infos_4121_);
lean_inc(v_steps_4120_);
lean_dec(v___x_4119_);
v___x_4124_ = lean_box(0);
v_isShared_4125_ = v_isSharedCheck_4293_;
goto v_resetjp_4123_;
}
v_resetjp_4123_:
{
lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4129_; 
v___x_4126_ = lean_unsigned_to_nat(1u);
v___x_4127_ = lean_nat_add(v_steps_4120_, v___x_4126_);
lean_dec(v_steps_4120_);
if (v_isShared_4125_ == 0)
{
lean_ctor_set(v___x_4124_, 0, v___x_4127_);
v___x_4129_ = v___x_4124_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v___x_4127_);
lean_ctor_set(v_reuseFailAlloc_4292_, 1, v_infos_4121_);
lean_ctor_set(v_reuseFailAlloc_4292_, 2, v_holeIter_4122_);
v___x_4129_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
lean_object* v___x_4130_; lean_object* v___x_4131_; 
v___x_4130_ = lean_st_ref_set(v_a_4105_, v___x_4129_);
v___x_4131_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_getExpr___at___00Lean_PrettyPrinter_Delaborator_getExprKind_spec__0___redArg(v_a_4104_);
if (lean_obj_tag(v___x_4131_) == 0)
{
lean_object* v_a_4132_; lean_object* v___x_4133_; 
v_a_4132_ = lean_ctor_get(v___x_4131_, 0);
lean_inc(v_a_4132_);
lean_dec_ref(v___x_4131_);
lean_inc_ref(v_a_4108_);
v___x_4133_ = l_Lean_PrettyPrinter_Delaborator_shouldOmitExpr(v_a_4132_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4133_) == 0)
{
lean_object* v_a_4134_; uint8_t v___x_4135_; 
v_a_4134_ = lean_ctor_get(v___x_4133_, 0);
lean_inc(v_a_4134_);
lean_dec_ref(v___x_4133_);
v___x_4135_ = lean_unbox(v_a_4134_);
if (v___x_4135_ == 0)
{
lean_object* v___x_4136_; 
lean_inc(v_a_4109_);
lean_inc_ref(v_a_4108_);
lean_inc(v_a_4107_);
lean_inc_ref(v_a_4106_);
lean_inc(v_a_4132_);
v___x_4136_ = l_Lean_PrettyPrinter_Delaborator_shouldOmitProof(v_a_4132_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4136_) == 0)
{
lean_object* v_a_4137_; uint8_t v___x_4138_; 
v_a_4137_ = lean_ctor_get(v___x_4136_, 0);
lean_inc(v_a_4137_);
lean_dec_ref(v___x_4136_);
v___x_4138_ = lean_unbox(v_a_4137_);
if (v___x_4138_ == 0)
{
lean_object* v___x_4139_; 
lean_dec(v_a_4134_);
v___x_4139_ = l_Lean_PrettyPrinter_Delaborator_getExprKind(v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4139_) == 0)
{
lean_object* v_a_4140_; lean_object* v___f_4141_; lean_object* v___x_4142_; 
v_a_4140_ = lean_ctor_get(v___x_4139_, 0);
lean_inc(v_a_4140_);
lean_dec_ref(v___x_4139_);
v___f_4141_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_delab___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4141_, 0, v_a_4140_);
lean_inc(v_a_4109_);
lean_inc_ref(v_a_4108_);
lean_inc(v_a_4107_);
lean_inc_ref(v_a_4106_);
lean_inc(v_a_4105_);
lean_inc_ref(v_a_4104_);
v___x_4142_ = l_Lean_PrettyPrinter_Delaborator_withIncDepth___redArg(v___f_4141_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4142_) == 0)
{
lean_object* v_a_4143_; lean_object* v___y_4145_; lean_object* v___x_4191_; lean_object* v___x_4192_; 
v_a_4143_ = lean_ctor_get(v___x_4142_, 0);
lean_inc(v_a_4143_);
lean_dec_ref(v___x_4142_);
v___x_4191_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__25));
lean_inc_ref(v_a_4108_);
v___x_4192_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_4191_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4192_) == 0)
{
lean_object* v_a_4193_; uint8_t v___x_4194_; 
v_a_4193_ = lean_ctor_get(v___x_4192_, 0);
lean_inc(v_a_4193_);
v___x_4194_ = lean_unbox(v_a_4193_);
lean_dec(v_a_4193_);
if (v___x_4194_ == 0)
{
lean_dec(v_a_4132_);
v___y_4145_ = v___x_4192_;
goto v___jp_4144_;
}
else
{
lean_object* v___x_4195_; lean_object* v___x_4196_; 
lean_dec_ref(v___x_4192_);
v___x_4195_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__26));
lean_inc_ref(v_a_4108_);
v___x_4196_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_4195_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4196_) == 0)
{
lean_object* v_a_4197_; uint8_t v___x_4198_; 
v_a_4197_ = lean_ctor_get(v___x_4196_, 0);
lean_inc(v_a_4197_);
v___x_4198_ = lean_unbox(v_a_4197_);
lean_dec(v_a_4197_);
if (v___x_4198_ == 0)
{
lean_dec(v_a_4132_);
v___y_4145_ = v___x_4196_;
goto v___jp_4144_;
}
else
{
uint8_t v___x_4199_; 
v___x_4199_ = l_Lean_Expr_isMData(v_a_4132_);
lean_dec(v_a_4132_);
if (v___x_4199_ == 0)
{
v___y_4145_ = v___x_4196_;
goto v___jp_4144_;
}
else
{
lean_object* v___x_4201_; uint8_t v_isShared_4202_; uint8_t v_isSharedCheck_4206_; 
lean_dec(v_a_4137_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
v_isSharedCheck_4206_ = !lean_is_exclusive(v___x_4196_);
if (v_isSharedCheck_4206_ == 0)
{
lean_object* v_unused_4207_; 
v_unused_4207_ = lean_ctor_get(v___x_4196_, 0);
lean_dec(v_unused_4207_);
v___x_4201_ = v___x_4196_;
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
else
{
lean_dec(v___x_4196_);
v___x_4201_ = lean_box(0);
v_isShared_4202_ = v_isSharedCheck_4206_;
goto v_resetjp_4200_;
}
v_resetjp_4200_:
{
lean_object* v___x_4204_; 
if (v_isShared_4202_ == 0)
{
lean_ctor_set(v___x_4201_, 0, v_a_4143_);
v___x_4204_ = v___x_4201_;
goto v_reusejp_4203_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4143_);
v___x_4204_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4203_;
}
v_reusejp_4203_:
{
return v___x_4204_;
}
}
}
}
}
else
{
lean_dec(v_a_4132_);
v___y_4145_ = v___x_4196_;
goto v___jp_4144_;
}
}
}
else
{
lean_dec(v_a_4132_);
v___y_4145_ = v___x_4192_;
goto v___jp_4144_;
}
v___jp_4144_:
{
if (lean_obj_tag(v___y_4145_) == 0)
{
lean_object* v_a_4146_; lean_object* v___x_4148_; uint8_t v_isShared_4149_; uint8_t v_isSharedCheck_4182_; 
v_a_4146_ = lean_ctor_get(v___y_4145_, 0);
v_isSharedCheck_4182_ = !lean_is_exclusive(v___y_4145_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4148_ = v___y_4145_;
v_isShared_4149_ = v_isSharedCheck_4182_;
goto v_resetjp_4147_;
}
else
{
lean_inc(v_a_4146_);
lean_dec(v___y_4145_);
v___x_4148_ = lean_box(0);
v_isShared_4149_ = v_isSharedCheck_4182_;
goto v_resetjp_4147_;
}
v_resetjp_4147_:
{
uint8_t v___x_4150_; 
v___x_4150_ = lean_unbox(v_a_4146_);
lean_dec(v_a_4146_);
if (v___x_4150_ == 0)
{
lean_object* v___x_4152_; 
lean_dec(v_a_4137_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
if (v_isShared_4149_ == 0)
{
lean_ctor_set(v___x_4148_, 0, v_a_4143_);
v___x_4152_ = v___x_4148_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v_a_4143_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
return v___x_4152_;
}
}
else
{
lean_object* v___x_4154_; lean_object* v___x_4155_; 
lean_del_object(v___x_4148_);
v___x_4154_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_delab___boxed), 7, 0);
lean_inc_ref(v_a_4108_);
lean_inc_ref(v_a_4104_);
v___x_4155_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1___redArg(v___x_4154_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4155_) == 0)
{
lean_object* v_a_4156_; lean_object* v_ref_4157_; lean_object* v_quotContext_4158_; lean_object* v_currMacroScope_4159_; uint8_t v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; 
v_a_4156_ = lean_ctor_get(v___x_4155_, 0);
lean_inc(v_a_4156_);
lean_dec_ref(v___x_4155_);
v_ref_4157_ = lean_ctor_get(v_a_4108_, 5);
lean_inc(v_ref_4157_);
v_quotContext_4158_ = lean_ctor_get(v_a_4108_, 10);
lean_inc(v_quotContext_4158_);
v_currMacroScope_4159_ = lean_ctor_get(v_a_4108_, 11);
lean_inc(v_currMacroScope_4159_);
lean_dec_ref(v_a_4108_);
v___x_4160_ = lean_unbox(v_a_4137_);
lean_dec(v_a_4137_);
v___x_4161_ = l_Lean_SourceInfo_fromRef(v_ref_4157_, v___x_4160_);
lean_dec(v_ref_4157_);
v___x_4162_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__2));
v___x_4163_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__4));
v___x_4164_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__5));
lean_inc(v___x_4161_);
v___x_4165_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4165_, 0, v___x_4161_);
lean_ctor_set(v___x_4165_, 1, v___x_4164_);
v___x_4166_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__7));
v___x_4167_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_delab___closed__8, &l_Lean_PrettyPrinter_Delaborator_delab___closed__8_once, _init_l_Lean_PrettyPrinter_Delaborator_delab___closed__8);
v___x_4168_ = lean_box(0);
v___x_4169_ = l_Lean_addMacroScope(v_quotContext_4158_, v___x_4168_, v_currMacroScope_4159_);
v___x_4170_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__22));
lean_inc(v___x_4161_);
v___x_4171_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4171_, 0, v___x_4161_);
lean_ctor_set(v___x_4171_, 1, v___x_4167_);
lean_ctor_set(v___x_4171_, 2, v___x_4169_);
lean_ctor_set(v___x_4171_, 3, v___x_4170_);
lean_inc(v___x_4161_);
v___x_4172_ = l_Lean_Syntax_node1(v___x_4161_, v___x_4166_, v___x_4171_);
lean_inc(v___x_4161_);
v___x_4173_ = l_Lean_Syntax_node2(v___x_4161_, v___x_4163_, v___x_4165_, v___x_4172_);
v___x_4174_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__23));
lean_inc(v___x_4161_);
v___x_4175_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4175_, 0, v___x_4161_);
lean_ctor_set(v___x_4175_, 1, v___x_4174_);
v___x_4176_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__7));
lean_inc(v___x_4161_);
v___x_4177_ = l_Lean_Syntax_node1(v___x_4161_, v___x_4176_, v_a_4156_);
v___x_4178_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__24));
lean_inc(v___x_4161_);
v___x_4179_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4179_, 0, v___x_4161_);
lean_ctor_set(v___x_4179_, 1, v___x_4178_);
v___x_4180_ = l_Lean_Syntax_node5(v___x_4161_, v___x_4162_, v___x_4173_, v_a_4143_, v___x_4175_, v___x_4177_, v___x_4179_);
v___x_4181_ = l_Lean_PrettyPrinter_Delaborator_annotateCurPos___redArg(v___x_4180_, v_a_4104_);
lean_dec_ref(v_a_4104_);
return v___x_4181_;
}
else
{
lean_dec(v_a_4143_);
lean_dec(v_a_4137_);
lean_dec_ref(v_a_4108_);
lean_dec_ref(v_a_4104_);
return v___x_4155_;
}
}
}
}
else
{
lean_object* v_a_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4190_; 
lean_dec(v_a_4143_);
lean_dec(v_a_4137_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
v_a_4183_ = lean_ctor_get(v___y_4145_, 0);
v_isSharedCheck_4190_ = !lean_is_exclusive(v___y_4145_);
if (v_isSharedCheck_4190_ == 0)
{
v___x_4185_ = v___y_4145_;
v_isShared_4186_ = v_isSharedCheck_4190_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_a_4183_);
lean_dec(v___y_4145_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4190_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
lean_object* v___x_4188_; 
if (v_isShared_4186_ == 0)
{
v___x_4188_ = v___x_4185_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4189_; 
v_reuseFailAlloc_4189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4189_, 0, v_a_4183_);
v___x_4188_ = v_reuseFailAlloc_4189_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
return v___x_4188_;
}
}
}
}
}
else
{
lean_dec(v_a_4137_);
lean_dec(v_a_4132_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
return v___x_4142_;
}
}
else
{
lean_object* v_a_4208_; lean_object* v___x_4210_; uint8_t v_isShared_4211_; uint8_t v_isSharedCheck_4215_; 
lean_dec(v_a_4137_);
lean_dec(v_a_4132_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
v_a_4208_ = lean_ctor_get(v___x_4139_, 0);
v_isSharedCheck_4215_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4215_ == 0)
{
v___x_4210_ = v___x_4139_;
v_isShared_4211_ = v_isSharedCheck_4215_;
goto v_resetjp_4209_;
}
else
{
lean_inc(v_a_4208_);
lean_dec(v___x_4139_);
v___x_4210_ = lean_box(0);
v_isShared_4211_ = v_isSharedCheck_4215_;
goto v_resetjp_4209_;
}
v_resetjp_4209_:
{
lean_object* v___x_4213_; 
if (v_isShared_4211_ == 0)
{
v___x_4213_ = v___x_4210_;
goto v_reusejp_4212_;
}
else
{
lean_object* v_reuseFailAlloc_4214_; 
v_reuseFailAlloc_4214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4214_, 0, v_a_4208_);
v___x_4213_ = v_reuseFailAlloc_4214_;
goto v_reusejp_4212_;
}
v_reusejp_4212_:
{
return v___x_4213_;
}
}
}
}
else
{
lean_object* v___x_4216_; lean_object* v___x_4217_; 
lean_dec(v_a_4137_);
lean_dec(v_a_4132_);
v___x_4216_ = lean_box(1);
v___x_4217_ = l_Lean_PrettyPrinter_Delaborator_omission___redArg(v___x_4216_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4108_);
if (lean_obj_tag(v___x_4217_) == 0)
{
lean_object* v_a_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; 
v_a_4218_ = lean_ctor_get(v___x_4217_, 0);
lean_inc(v_a_4218_);
lean_dec_ref(v___x_4217_);
v___x_4219_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__27));
lean_inc_ref(v_a_4108_);
v___x_4220_ = l_Lean_PrettyPrinter_Delaborator_getPPOption___redArg(v___x_4219_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4220_) == 0)
{
lean_object* v_a_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4257_; 
v_a_4221_ = lean_ctor_get(v___x_4220_, 0);
v_isSharedCheck_4257_ = !lean_is_exclusive(v___x_4220_);
if (v_isSharedCheck_4257_ == 0)
{
v___x_4223_ = v___x_4220_;
v_isShared_4224_ = v_isSharedCheck_4257_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_a_4221_);
lean_dec(v___x_4220_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4257_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
uint8_t v___x_4225_; 
v___x_4225_ = lean_unbox(v_a_4221_);
lean_dec(v_a_4221_);
if (v___x_4225_ == 0)
{
lean_object* v___x_4227_; 
lean_dec(v_a_4134_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
if (v_isShared_4224_ == 0)
{
lean_ctor_set(v___x_4223_, 0, v_a_4218_);
v___x_4227_ = v___x_4223_;
goto v_reusejp_4226_;
}
else
{
lean_object* v_reuseFailAlloc_4228_; 
v_reuseFailAlloc_4228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4228_, 0, v_a_4218_);
v___x_4227_ = v_reuseFailAlloc_4228_;
goto v_reusejp_4226_;
}
v_reusejp_4226_:
{
return v___x_4227_;
}
}
else
{
lean_object* v___x_4229_; lean_object* v___x_4230_; 
lean_del_object(v___x_4223_);
v___x_4229_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_delab___boxed), 7, 0);
lean_inc_ref(v_a_4108_);
lean_inc_ref(v_a_4104_);
v___x_4230_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1___redArg(v___x_4229_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_);
if (lean_obj_tag(v___x_4230_) == 0)
{
lean_object* v_a_4231_; lean_object* v_ref_4232_; lean_object* v_quotContext_4233_; lean_object* v_currMacroScope_4234_; uint8_t v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; 
v_a_4231_ = lean_ctor_get(v___x_4230_, 0);
lean_inc(v_a_4231_);
lean_dec_ref(v___x_4230_);
v_ref_4232_ = lean_ctor_get(v_a_4108_, 5);
lean_inc(v_ref_4232_);
v_quotContext_4233_ = lean_ctor_get(v_a_4108_, 10);
lean_inc(v_quotContext_4233_);
v_currMacroScope_4234_ = lean_ctor_get(v_a_4108_, 11);
lean_inc(v_currMacroScope_4234_);
lean_dec_ref(v_a_4108_);
v___x_4235_ = lean_unbox(v_a_4134_);
lean_dec(v_a_4134_);
v___x_4236_ = l_Lean_SourceInfo_fromRef(v_ref_4232_, v___x_4235_);
lean_dec(v_ref_4232_);
v___x_4237_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__2));
v___x_4238_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__4));
v___x_4239_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__5));
lean_inc(v___x_4236_);
v___x_4240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4240_, 0, v___x_4236_);
lean_ctor_set(v___x_4240_, 1, v___x_4239_);
v___x_4241_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__7));
v___x_4242_ = lean_obj_once(&l_Lean_PrettyPrinter_Delaborator_delab___closed__8, &l_Lean_PrettyPrinter_Delaborator_delab___closed__8_once, _init_l_Lean_PrettyPrinter_Delaborator_delab___closed__8);
v___x_4243_ = lean_box(0);
v___x_4244_ = l_Lean_addMacroScope(v_quotContext_4233_, v___x_4243_, v_currMacroScope_4234_);
v___x_4245_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__22));
lean_inc(v___x_4236_);
v___x_4246_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4246_, 0, v___x_4236_);
lean_ctor_set(v___x_4246_, 1, v___x_4242_);
lean_ctor_set(v___x_4246_, 2, v___x_4244_);
lean_ctor_set(v___x_4246_, 3, v___x_4245_);
lean_inc(v___x_4236_);
v___x_4247_ = l_Lean_Syntax_node1(v___x_4236_, v___x_4241_, v___x_4246_);
lean_inc(v___x_4236_);
v___x_4248_ = l_Lean_Syntax_node2(v___x_4236_, v___x_4238_, v___x_4240_, v___x_4247_);
v___x_4249_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__23));
lean_inc(v___x_4236_);
v___x_4250_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4250_, 0, v___x_4236_);
lean_ctor_set(v___x_4250_, 1, v___x_4249_);
v___x_4251_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator___aux__Lean__PrettyPrinter__Delaborator__Basic______macroRules__Lean__PrettyPrinter__Delaborator__attrApp__delab____1___closed__7));
lean_inc(v___x_4236_);
v___x_4252_ = l_Lean_Syntax_node1(v___x_4236_, v___x_4251_, v_a_4231_);
v___x_4253_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_delab___closed__24));
lean_inc(v___x_4236_);
v___x_4254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4254_, 0, v___x_4236_);
lean_ctor_set(v___x_4254_, 1, v___x_4253_);
v___x_4255_ = l_Lean_Syntax_node5(v___x_4236_, v___x_4237_, v___x_4248_, v_a_4218_, v___x_4250_, v___x_4252_, v___x_4254_);
v___x_4256_ = l_Lean_PrettyPrinter_Delaborator_annotateCurPos___redArg(v___x_4255_, v_a_4104_);
lean_dec_ref(v_a_4104_);
return v___x_4256_;
}
else
{
lean_dec(v_a_4218_);
lean_dec(v_a_4134_);
lean_dec_ref(v_a_4108_);
lean_dec_ref(v_a_4104_);
return v___x_4230_;
}
}
}
}
else
{
lean_object* v_a_4258_; lean_object* v___x_4260_; uint8_t v_isShared_4261_; uint8_t v_isSharedCheck_4265_; 
lean_dec(v_a_4218_);
lean_dec(v_a_4134_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
v_a_4258_ = lean_ctor_get(v___x_4220_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v___x_4220_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4260_ = v___x_4220_;
v_isShared_4261_ = v_isSharedCheck_4265_;
goto v_resetjp_4259_;
}
else
{
lean_inc(v_a_4258_);
lean_dec(v___x_4220_);
v___x_4260_ = lean_box(0);
v_isShared_4261_ = v_isSharedCheck_4265_;
goto v_resetjp_4259_;
}
v_resetjp_4259_:
{
lean_object* v___x_4263_; 
if (v_isShared_4261_ == 0)
{
v___x_4263_ = v___x_4260_;
goto v_reusejp_4262_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v_a_4258_);
v___x_4263_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4262_;
}
v_reusejp_4262_:
{
return v___x_4263_;
}
}
}
}
else
{
lean_dec(v_a_4134_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
return v___x_4217_;
}
}
}
else
{
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4273_; 
lean_dec(v_a_4134_);
lean_dec(v_a_4132_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
v_a_4266_ = lean_ctor_get(v___x_4136_, 0);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4136_);
if (v_isSharedCheck_4273_ == 0)
{
v___x_4268_ = v___x_4136_;
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v___x_4136_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4271_; 
if (v_isShared_4269_ == 0)
{
v___x_4271_ = v___x_4268_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v_a_4266_);
v___x_4271_ = v_reuseFailAlloc_4272_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
return v___x_4271_;
}
}
}
}
else
{
lean_object* v___x_4274_; lean_object* v___x_4275_; 
lean_dec(v_a_4134_);
lean_dec(v_a_4132_);
lean_dec(v_a_4109_);
lean_dec(v_a_4107_);
v___x_4274_ = lean_box(0);
v___x_4275_ = l_Lean_PrettyPrinter_Delaborator_omission___redArg(v___x_4274_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4108_);
lean_dec_ref(v_a_4108_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
return v___x_4275_;
}
}
else
{
lean_object* v_a_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4283_; 
lean_dec(v_a_4132_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
v_a_4276_ = lean_ctor_get(v___x_4133_, 0);
v_isSharedCheck_4283_ = !lean_is_exclusive(v___x_4133_);
if (v_isSharedCheck_4283_ == 0)
{
v___x_4278_ = v___x_4133_;
v_isShared_4279_ = v_isSharedCheck_4283_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_a_4276_);
lean_dec(v___x_4133_);
v___x_4278_ = lean_box(0);
v_isShared_4279_ = v_isSharedCheck_4283_;
goto v_resetjp_4277_;
}
v_resetjp_4277_:
{
lean_object* v___x_4281_; 
if (v_isShared_4279_ == 0)
{
v___x_4281_ = v___x_4278_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4282_; 
v_reuseFailAlloc_4282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4282_, 0, v_a_4276_);
v___x_4281_ = v_reuseFailAlloc_4282_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
return v___x_4281_;
}
}
}
}
else
{
lean_object* v_a_4284_; lean_object* v___x_4286_; uint8_t v_isShared_4287_; uint8_t v_isSharedCheck_4291_; 
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
v_a_4284_ = lean_ctor_get(v___x_4131_, 0);
v_isSharedCheck_4291_ = !lean_is_exclusive(v___x_4131_);
if (v_isSharedCheck_4291_ == 0)
{
v___x_4286_ = v___x_4131_;
v_isShared_4287_ = v_isSharedCheck_4291_;
goto v_resetjp_4285_;
}
else
{
lean_inc(v_a_4284_);
lean_dec(v___x_4131_);
v___x_4286_ = lean_box(0);
v_isShared_4287_ = v_isSharedCheck_4291_;
goto v_resetjp_4285_;
}
v_resetjp_4285_:
{
lean_object* v___x_4289_; 
if (v_isShared_4287_ == 0)
{
v___x_4289_ = v___x_4286_;
goto v_reusejp_4288_;
}
else
{
lean_object* v_reuseFailAlloc_4290_; 
v_reuseFailAlloc_4290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4290_, 0, v_a_4284_);
v___x_4289_ = v_reuseFailAlloc_4290_;
goto v_reusejp_4288_;
}
v_reusejp_4288_:
{
return v___x_4289_;
}
}
}
}
}
}
else
{
lean_object* v___x_4294_; lean_object* v___x_4295_; 
lean_dec(v_a_4109_);
lean_dec(v_a_4107_);
v___x_4294_ = lean_box(2);
v___x_4295_ = l_Lean_PrettyPrinter_Delaborator_omission___redArg(v___x_4294_, v_a_4104_, v_a_4105_, v_a_4106_, v_a_4108_);
lean_dec_ref(v_a_4108_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
return v___x_4295_;
}
}
else
{
lean_object* v_a_4296_; lean_object* v___x_4298_; uint8_t v_isShared_4299_; uint8_t v_isSharedCheck_4303_; 
lean_dec(v___x_4113_);
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
v_a_4296_ = lean_ctor_get(v___x_4115_, 0);
v_isSharedCheck_4303_ = !lean_is_exclusive(v___x_4115_);
if (v_isSharedCheck_4303_ == 0)
{
v___x_4298_ = v___x_4115_;
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
else
{
lean_inc(v_a_4296_);
lean_dec(v___x_4115_);
v___x_4298_ = lean_box(0);
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
v_resetjp_4297_:
{
lean_object* v___x_4301_; 
if (v_isShared_4299_ == 0)
{
v___x_4301_ = v___x_4298_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4302_; 
v_reuseFailAlloc_4302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4302_, 0, v_a_4296_);
v___x_4301_ = v_reuseFailAlloc_4302_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
return v___x_4301_;
}
}
}
}
else
{
lean_object* v_a_4304_; lean_object* v___x_4306_; uint8_t v_isShared_4307_; uint8_t v_isSharedCheck_4311_; 
lean_dec(v_a_4109_);
lean_dec_ref(v_a_4108_);
lean_dec(v_a_4107_);
lean_dec_ref(v_a_4106_);
lean_dec(v_a_4105_);
lean_dec_ref(v_a_4104_);
v_a_4304_ = lean_ctor_get(v___x_4112_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4112_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4306_ = v___x_4112_;
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
else
{
lean_inc(v_a_4304_);
lean_dec(v___x_4112_);
v___x_4306_ = lean_box(0);
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
v_resetjp_4305_:
{
lean_object* v___x_4309_; 
if (v_isShared_4307_ == 0)
{
v___x_4309_ = v___x_4306_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v_a_4304_);
v___x_4309_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
return v___x_4309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0(lean_object* v_00_u03b1_4312_, lean_object* v_msg_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_){
_start:
{
lean_object* v___x_4319_; 
v___x_4319_ = l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0___redArg(v_msg_4313_, v___y_4314_, v___y_4315_, v___y_4316_, v___y_4317_);
return v___x_4319_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0___boxed(lean_object* v_00_u03b1_4320_, lean_object* v_msg_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_){
_start:
{
lean_object* v_res_4327_; 
v_res_4327_ = l_Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0(v_00_u03b1_4320_, v_msg_4321_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_);
lean_dec(v___y_4325_);
lean_dec_ref(v___y_4324_);
lean_dec(v___y_4323_);
lean_dec_ref(v___y_4322_);
return v_res_4327_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1(lean_object* v_00_u03b1_4328_, lean_object* v_x_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_){
_start:
{
lean_object* v___x_4337_; 
v___x_4337_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1___redArg(v_x_4329_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_, v___y_4334_, v___y_4335_);
return v___x_4337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1___boxed(lean_object* v_00_u03b1_4338_, lean_object* v_x_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_){
_start:
{
lean_object* v_res_4347_; 
v_res_4347_ = l_Lean_PrettyPrinter_Delaborator_SubExpr_withType___at___00Lean_PrettyPrinter_Delaborator_delab_spec__1(v_00_u03b1_4338_, v_x_4339_, v___y_4340_, v___y_4341_, v___y_4342_, v___y_4343_, v___y_4344_, v___y_4345_);
return v_res_4347_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_(uint8_t v_x_4348_, lean_object* v_stx_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_){
_start:
{
lean_object* v___x_4353_; 
lean_inc_ref(v___y_4350_);
v___x_4353_ = l_Lean_Attribute_Builtin_getIdent(v_stx_4349_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4353_) == 0)
{
lean_object* v_a_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; 
v_a_4354_ = lean_ctor_get(v___x_4353_, 0);
lean_inc(v_a_4354_);
lean_dec_ref(v___x_4353_);
v___x_4355_ = lean_box(0);
lean_inc(v___y_4351_);
lean_inc_ref(v___y_4350_);
v___x_4356_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_a_4354_, v___x_4355_, v___y_4350_, v___y_4351_);
if (lean_obj_tag(v___x_4356_) == 0)
{
lean_object* v_a_4357_; uint8_t v___x_4358_; lean_object* v___x_4359_; 
v_a_4357_ = lean_ctor_get(v___x_4356_, 0);
lean_inc(v_a_4357_);
lean_dec_ref(v___x_4356_);
v___x_4358_ = 0;
lean_inc(v_a_4357_);
v___x_4359_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0(v_a_4357_, v___x_4358_, v___y_4350_, v___y_4351_);
lean_dec(v___y_4351_);
lean_dec_ref(v___y_4350_);
if (lean_obj_tag(v___x_4359_) == 0)
{
lean_object* v___x_4361_; uint8_t v_isShared_4362_; uint8_t v_isSharedCheck_4366_; 
v_isSharedCheck_4366_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4366_ == 0)
{
lean_object* v_unused_4367_; 
v_unused_4367_ = lean_ctor_get(v___x_4359_, 0);
lean_dec(v_unused_4367_);
v___x_4361_ = v___x_4359_;
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
else
{
lean_dec(v___x_4359_);
v___x_4361_ = lean_box(0);
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
v_resetjp_4360_:
{
lean_object* v___x_4364_; 
if (v_isShared_4362_ == 0)
{
lean_ctor_set(v___x_4361_, 0, v_a_4357_);
v___x_4364_ = v___x_4361_;
goto v_reusejp_4363_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v_a_4357_);
v___x_4364_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4363_;
}
v_reusejp_4363_:
{
return v___x_4364_;
}
}
}
else
{
lean_object* v_a_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4375_; 
lean_dec(v_a_4357_);
v_a_4368_ = lean_ctor_get(v___x_4359_, 0);
v_isSharedCheck_4375_ = !lean_is_exclusive(v___x_4359_);
if (v_isSharedCheck_4375_ == 0)
{
v___x_4370_ = v___x_4359_;
v_isShared_4371_ = v_isSharedCheck_4375_;
goto v_resetjp_4369_;
}
else
{
lean_inc(v_a_4368_);
lean_dec(v___x_4359_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4375_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
lean_object* v___x_4373_; 
if (v_isShared_4371_ == 0)
{
v___x_4373_ = v___x_4370_;
goto v_reusejp_4372_;
}
else
{
lean_object* v_reuseFailAlloc_4374_; 
v_reuseFailAlloc_4374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4374_, 0, v_a_4368_);
v___x_4373_ = v_reuseFailAlloc_4374_;
goto v_reusejp_4372_;
}
v_reusejp_4372_:
{
return v___x_4373_;
}
}
}
}
else
{
lean_dec(v___y_4351_);
lean_dec_ref(v___y_4350_);
return v___x_4356_;
}
}
else
{
lean_object* v_a_4376_; lean_object* v___x_4378_; uint8_t v_isShared_4379_; uint8_t v_isSharedCheck_4383_; 
lean_dec(v___y_4351_);
lean_dec_ref(v___y_4350_);
v_a_4376_ = lean_ctor_get(v___x_4353_, 0);
v_isSharedCheck_4383_ = !lean_is_exclusive(v___x_4353_);
if (v_isSharedCheck_4383_ == 0)
{
v___x_4378_ = v___x_4353_;
v_isShared_4379_ = v_isSharedCheck_4383_;
goto v_resetjp_4377_;
}
else
{
lean_inc(v_a_4376_);
lean_dec(v___x_4353_);
v___x_4378_ = lean_box(0);
v_isShared_4379_ = v_isSharedCheck_4383_;
goto v_resetjp_4377_;
}
v_resetjp_4377_:
{
lean_object* v___x_4381_; 
if (v_isShared_4379_ == 0)
{
v___x_4381_ = v___x_4378_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4382_; 
v_reuseFailAlloc_4382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4382_, 0, v_a_4376_);
v___x_4381_ = v_reuseFailAlloc_4382_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
return v___x_4381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2____boxed(lean_object* v_x_4384_, lean_object* v_stx_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_){
_start:
{
uint8_t v_x_409__boxed_4389_; lean_object* v_res_4390_; 
v_x_409__boxed_4389_ = lean_unbox(v_x_4384_);
v_res_4390_ = l_Lean_PrettyPrinter_Delaborator_initFn___lam__1_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_(v_x_409__boxed_4389_, v_stx_4385_, v___y_4386_, v___y_4387_);
return v_res_4390_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4415_; lean_object* v___x_4416_; lean_object* v___x_4417_; 
v___x_4415_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__6_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_));
v___x_4416_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_));
v___x_4417_ = l_Lean_KeyedDeclsAttribute_init___redArg(v___x_4415_, v___x_4416_);
return v___x_4417_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2____boxed(lean_object* v_a_4418_){
_start:
{
lean_object* v_res_4419_; 
v_res_4419_ = l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_();
return v_res_4419_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_docString__1(){
_start:
{
lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; 
v___x_4422_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_));
v___x_4423_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_docString__1___closed__0));
v___x_4424_ = l_Lean_addBuiltinDocString(v___x_4422_, v___x_4423_);
return v___x_4424_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_docString__1___boxed(lean_object* v_a_4425_){
_start:
{
lean_object* v_res_4426_; 
v_res_4426_ = l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_docString__1();
return v_res_4426_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3(){
_start:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; 
v___x_4453_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_initFn___closed__8_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_));
v___x_4454_ = ((lean_object*)(l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___closed__6));
v___x_4455_ = l_Lean_addBuiltinDeclarationRanges(v___x_4453_, v___x_4454_);
return v___x_4455_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3___boxed(lean_object* v_a_4456_){
_start:
{
lean_object* v_res_4457_; 
v_res_4457_ = l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3();
return v_res_4457_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg(lean_object* v_msg_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_){
_start:
{
lean_object* v___f_4465_; lean_object* v___x_7547__overap_4466_; lean_object* v___x_4467_; 
v___f_4465_ = ((lean_object*)(l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg___closed__0));
v___x_7547__overap_4466_ = lean_panic_fn(v___f_4465_, v_msg_4459_);
v___x_4467_ = lean_apply_5(v___x_7547__overap_4466_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_, lean_box(0));
return v___x_4467_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg___boxed(lean_object* v_msg_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_){
_start:
{
lean_object* v_res_4474_; 
v_res_4474_ = l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg(v_msg_4468_, v___y_4469_, v___y_4470_, v___y_4471_, v___y_4472_);
return v_res_4474_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0(lean_object* v_00_u03b1_4475_, lean_object* v_msg_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_){
_start:
{
lean_object* v___x_4482_; 
v___x_4482_ = l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg(v_msg_4476_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_);
return v___x_4482_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___boxed(lean_object* v_00_u03b1_4483_, lean_object* v_msg_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_){
_start:
{
lean_object* v_res_4490_; 
v_res_4490_ = l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0(v_00_u03b1_4483_, v_msg_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_);
return v_res_4490_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__1(lean_object* v_opts_4491_, lean_object* v_opt_4492_){
_start:
{
lean_object* v_name_4493_; lean_object* v_defValue_4494_; lean_object* v_map_4495_; lean_object* v___x_4496_; 
v_name_4493_ = lean_ctor_get(v_opt_4492_, 0);
v_defValue_4494_ = lean_ctor_get(v_opt_4492_, 1);
v_map_4495_ = lean_ctor_get(v_opts_4491_, 0);
v___x_4496_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4495_, v_name_4493_);
if (lean_obj_tag(v___x_4496_) == 0)
{
uint8_t v___x_4497_; 
v___x_4497_ = lean_unbox(v_defValue_4494_);
return v___x_4497_;
}
else
{
lean_object* v_val_4498_; 
v_val_4498_ = lean_ctor_get(v___x_4496_, 0);
lean_inc(v_val_4498_);
lean_dec_ref(v___x_4496_);
if (lean_obj_tag(v_val_4498_) == 1)
{
uint8_t v_v_4499_; 
v_v_4499_ = lean_ctor_get_uint8(v_val_4498_, 0);
lean_dec_ref(v_val_4498_);
return v_v_4499_;
}
else
{
uint8_t v___x_4500_; 
lean_dec(v_val_4498_);
v___x_4500_ = lean_unbox(v_defValue_4494_);
return v___x_4500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__1___boxed(lean_object* v_opts_4501_, lean_object* v_opt_4502_){
_start:
{
uint8_t v_res_4503_; lean_object* v_r_4504_; 
v_res_4503_ = l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__1(v_opts_4501_, v_opt_4502_);
lean_dec_ref(v_opt_4502_);
lean_dec_ref(v_opts_4501_);
v_r_4504_ = lean_box(v_res_4503_);
return v_r_4504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__2(lean_object* v_opts_4505_, lean_object* v_opt_4506_){
_start:
{
lean_object* v_name_4507_; lean_object* v_defValue_4508_; lean_object* v_map_4509_; lean_object* v___x_4510_; 
v_name_4507_ = lean_ctor_get(v_opt_4506_, 0);
v_defValue_4508_ = lean_ctor_get(v_opt_4506_, 1);
v_map_4509_ = lean_ctor_get(v_opts_4505_, 0);
v___x_4510_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4509_, v_name_4507_);
if (lean_obj_tag(v___x_4510_) == 0)
{
lean_inc(v_defValue_4508_);
return v_defValue_4508_;
}
else
{
lean_object* v_val_4511_; 
v_val_4511_ = lean_ctor_get(v___x_4510_, 0);
lean_inc(v_val_4511_);
lean_dec_ref(v___x_4510_);
if (lean_obj_tag(v_val_4511_) == 3)
{
lean_object* v_v_4512_; 
v_v_4512_ = lean_ctor_get(v_val_4511_, 0);
lean_inc(v_v_4512_);
lean_dec_ref(v_val_4511_);
return v_v_4512_;
}
else
{
lean_dec(v_val_4511_);
lean_inc(v_defValue_4508_);
return v_defValue_4508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__2___boxed(lean_object* v_opts_4513_, lean_object* v_opt_4514_){
_start:
{
lean_object* v_res_4515_; 
v_res_4515_ = l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__2(v_opts_4513_, v_opt_4514_);
lean_dec_ref(v_opt_4514_);
lean_dec_ref(v_opts_4513_);
return v_res_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3___redArg(lean_object* v_e_4516_, lean_object* v___y_4517_){
_start:
{
uint8_t v___x_4519_; 
v___x_4519_ = l_Lean_Expr_hasMVar(v_e_4516_);
if (v___x_4519_ == 0)
{
lean_object* v___x_4520_; 
v___x_4520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4520_, 0, v_e_4516_);
return v___x_4520_;
}
else
{
lean_object* v___x_4521_; lean_object* v_mctx_4522_; lean_object* v___x_4523_; lean_object* v_fst_4524_; lean_object* v_snd_4525_; lean_object* v___x_4526_; lean_object* v_cache_4527_; lean_object* v_zetaDeltaFVarIds_4528_; lean_object* v_postponed_4529_; lean_object* v_diag_4530_; lean_object* v___x_4532_; uint8_t v_isShared_4533_; uint8_t v_isSharedCheck_4539_; 
v___x_4521_ = lean_st_ref_get(v___y_4517_);
v_mctx_4522_ = lean_ctor_get(v___x_4521_, 0);
lean_inc_ref(v_mctx_4522_);
lean_dec(v___x_4521_);
v___x_4523_ = l_Lean_instantiateMVarsCore(v_mctx_4522_, v_e_4516_);
v_fst_4524_ = lean_ctor_get(v___x_4523_, 0);
lean_inc(v_fst_4524_);
v_snd_4525_ = lean_ctor_get(v___x_4523_, 1);
lean_inc(v_snd_4525_);
lean_dec_ref(v___x_4523_);
v___x_4526_ = lean_st_ref_take(v___y_4517_);
v_cache_4527_ = lean_ctor_get(v___x_4526_, 1);
v_zetaDeltaFVarIds_4528_ = lean_ctor_get(v___x_4526_, 2);
v_postponed_4529_ = lean_ctor_get(v___x_4526_, 3);
v_diag_4530_ = lean_ctor_get(v___x_4526_, 4);
v_isSharedCheck_4539_ = !lean_is_exclusive(v___x_4526_);
if (v_isSharedCheck_4539_ == 0)
{
lean_object* v_unused_4540_; 
v_unused_4540_ = lean_ctor_get(v___x_4526_, 0);
lean_dec(v_unused_4540_);
v___x_4532_ = v___x_4526_;
v_isShared_4533_ = v_isSharedCheck_4539_;
goto v_resetjp_4531_;
}
else
{
lean_inc(v_diag_4530_);
lean_inc(v_postponed_4529_);
lean_inc(v_zetaDeltaFVarIds_4528_);
lean_inc(v_cache_4527_);
lean_dec(v___x_4526_);
v___x_4532_ = lean_box(0);
v_isShared_4533_ = v_isSharedCheck_4539_;
goto v_resetjp_4531_;
}
v_resetjp_4531_:
{
lean_object* v___x_4535_; 
if (v_isShared_4533_ == 0)
{
lean_ctor_set(v___x_4532_, 0, v_snd_4525_);
v___x_4535_ = v___x_4532_;
goto v_reusejp_4534_;
}
else
{
lean_object* v_reuseFailAlloc_4538_; 
v_reuseFailAlloc_4538_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4538_, 0, v_snd_4525_);
lean_ctor_set(v_reuseFailAlloc_4538_, 1, v_cache_4527_);
lean_ctor_set(v_reuseFailAlloc_4538_, 2, v_zetaDeltaFVarIds_4528_);
lean_ctor_set(v_reuseFailAlloc_4538_, 3, v_postponed_4529_);
lean_ctor_set(v_reuseFailAlloc_4538_, 4, v_diag_4530_);
v___x_4535_ = v_reuseFailAlloc_4538_;
goto v_reusejp_4534_;
}
v_reusejp_4534_:
{
lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4536_ = lean_st_ref_set(v___y_4517_, v___x_4535_);
v___x_4537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4537_, 0, v_fst_4524_);
return v___x_4537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3___redArg___boxed(lean_object* v_e_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_){
_start:
{
lean_object* v_res_4544_; 
v_res_4544_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3___redArg(v_e_4541_, v___y_4542_);
lean_dec(v___y_4542_);
return v_res_4544_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3(lean_object* v_e_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_){
_start:
{
lean_object* v___x_4551_; 
v___x_4551_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3___redArg(v_e_4545_, v___y_4547_);
return v___x_4551_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3___boxed(lean_object* v_e_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_){
_start:
{
lean_object* v_res_4558_; 
v_res_4558_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3(v_e_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_);
lean_dec(v___y_4556_);
lean_dec_ref(v___y_4555_);
lean_dec(v___y_4554_);
lean_dec_ref(v___y_4553_);
return v_res_4558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_PrettyPrinter_delabCore_spec__5(lean_object* v_opts_4559_, lean_object* v_opt_4560_){
_start:
{
lean_object* v_name_4561_; lean_object* v_map_4562_; lean_object* v___x_4563_; 
v_name_4561_ = lean_ctor_get(v_opt_4560_, 0);
v_map_4562_ = lean_ctor_get(v_opts_4559_, 0);
v___x_4563_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4562_, v_name_4561_);
if (lean_obj_tag(v___x_4563_) == 0)
{
lean_object* v___x_4564_; 
v___x_4564_ = lean_box(0);
return v___x_4564_;
}
else
{
lean_object* v_val_4565_; lean_object* v___x_4567_; uint8_t v_isShared_4568_; uint8_t v_isSharedCheck_4575_; 
v_val_4565_ = lean_ctor_get(v___x_4563_, 0);
v_isSharedCheck_4575_ = !lean_is_exclusive(v___x_4563_);
if (v_isSharedCheck_4575_ == 0)
{
v___x_4567_ = v___x_4563_;
v_isShared_4568_ = v_isSharedCheck_4575_;
goto v_resetjp_4566_;
}
else
{
lean_inc(v_val_4565_);
lean_dec(v___x_4563_);
v___x_4567_ = lean_box(0);
v_isShared_4568_ = v_isSharedCheck_4575_;
goto v_resetjp_4566_;
}
v_resetjp_4566_:
{
if (lean_obj_tag(v_val_4565_) == 1)
{
uint8_t v_v_4569_; lean_object* v___x_4570_; lean_object* v___x_4572_; 
v_v_4569_ = lean_ctor_get_uint8(v_val_4565_, 0);
lean_dec_ref(v_val_4565_);
v___x_4570_ = lean_box(v_v_4569_);
if (v_isShared_4568_ == 0)
{
lean_ctor_set(v___x_4567_, 0, v___x_4570_);
v___x_4572_ = v___x_4567_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v___x_4570_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
return v___x_4572_;
}
}
else
{
lean_object* v___x_4574_; 
lean_del_object(v___x_4567_);
lean_dec(v_val_4565_);
v___x_4574_ = lean_box(0);
return v___x_4574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get_x3f___at___00Lean_PrettyPrinter_delabCore_spec__5___boxed(lean_object* v_opts_4576_, lean_object* v_opt_4577_){
_start:
{
lean_object* v_res_4578_; 
v_res_4578_ = l_Lean_Option_get_x3f___at___00Lean_PrettyPrinter_delabCore_spec__5(v_opts_4576_, v_opt_4577_);
lean_dec_ref(v_opt_4577_);
lean_dec_ref(v_opts_4576_);
return v_res_4578_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_PrettyPrinter_delabCore_spec__6(lean_object* v_x_4579_, lean_object* v_x_4580_){
_start:
{
if (lean_obj_tag(v_x_4579_) == 0)
{
if (lean_obj_tag(v_x_4580_) == 0)
{
uint8_t v___x_4581_; 
v___x_4581_ = 1;
return v___x_4581_;
}
else
{
uint8_t v___x_4582_; 
v___x_4582_ = 0;
return v___x_4582_;
}
}
else
{
if (lean_obj_tag(v_x_4580_) == 0)
{
uint8_t v___x_4583_; 
v___x_4583_ = 0;
return v___x_4583_;
}
else
{
lean_object* v_val_4584_; uint8_t v___x_4585_; 
v_val_4584_ = lean_ctor_get(v_x_4579_, 0);
v___x_4585_ = lean_unbox(v_val_4584_);
if (v___x_4585_ == 0)
{
lean_object* v_val_4586_; uint8_t v___x_4587_; 
v_val_4586_ = lean_ctor_get(v_x_4580_, 0);
v___x_4587_ = lean_unbox(v_val_4586_);
if (v___x_4587_ == 0)
{
uint8_t v___x_4588_; 
v___x_4588_ = 1;
return v___x_4588_;
}
else
{
uint8_t v___x_4589_; 
v___x_4589_ = lean_unbox(v_val_4584_);
return v___x_4589_;
}
}
else
{
lean_object* v_val_4590_; uint8_t v___x_4591_; 
v_val_4590_ = lean_ctor_get(v_x_4580_, 0);
v___x_4591_ = lean_unbox(v_val_4590_);
return v___x_4591_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_PrettyPrinter_delabCore_spec__6___boxed(lean_object* v_x_4592_, lean_object* v_x_4593_){
_start:
{
uint8_t v_res_4594_; lean_object* v_r_4595_; 
v_res_4594_ = l_Option_instBEq_beq___at___00Lean_PrettyPrinter_delabCore_spec__6(v_x_4592_, v_x_4593_);
lean_dec(v_x_4593_);
lean_dec(v_x_4592_);
v_r_4595_ = lean_box(v_res_4594_);
return v_r_4595_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7___redArg(lean_object* v_cls_4596_, lean_object* v___y_4597_){
_start:
{
lean_object* v_options_4599_; uint8_t v_hasTrace_4600_; 
v_options_4599_ = lean_ctor_get(v___y_4597_, 2);
v_hasTrace_4600_ = lean_ctor_get_uint8(v_options_4599_, sizeof(void*)*1);
if (v_hasTrace_4600_ == 0)
{
lean_object* v___x_4601_; lean_object* v___x_4602_; 
lean_dec(v_cls_4596_);
v___x_4601_ = lean_box(v_hasTrace_4600_);
v___x_4602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4602_, 0, v___x_4601_);
return v___x_4602_;
}
else
{
lean_object* v_inheritedTraceOptions_4603_; lean_object* v___x_4604_; lean_object* v___x_4605_; uint8_t v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; 
v_inheritedTraceOptions_4603_ = lean_ctor_get(v___y_4597_, 13);
v___x_4604_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1));
v___x_4605_ = l_Lean_Name_append(v___x_4604_, v_cls_4596_);
v___x_4606_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4603_, v_options_4599_, v___x_4605_);
lean_dec(v___x_4605_);
v___x_4607_ = lean_box(v___x_4606_);
v___x_4608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4608_, 0, v___x_4607_);
return v___x_4608_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7___redArg___boxed(lean_object* v_cls_4609_, lean_object* v___y_4610_, lean_object* v___y_4611_){
_start:
{
lean_object* v_res_4612_; 
v_res_4612_ = l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7___redArg(v_cls_4609_, v___y_4610_);
lean_dec_ref(v___y_4610_);
return v_res_4612_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7(lean_object* v_cls_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_){
_start:
{
lean_object* v___x_4619_; 
v___x_4619_ = l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7___redArg(v_cls_4613_, v___y_4616_);
return v___x_4619_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7___boxed(lean_object* v_cls_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_){
_start:
{
lean_object* v_res_4626_; 
v_res_4626_ = l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7(v_cls_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
lean_dec(v___y_4624_);
lean_dec_ref(v___y_4623_);
lean_dec(v___y_4622_);
lean_dec_ref(v___y_4621_);
return v_res_4626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4_spec__4(lean_object* v_o_4627_, lean_object* v_k_4628_, uint8_t v_v_4629_){
_start:
{
lean_object* v_map_4630_; uint8_t v_hasTrace_4631_; lean_object* v___x_4633_; uint8_t v_isShared_4634_; uint8_t v_isSharedCheck_4645_; 
v_map_4630_ = lean_ctor_get(v_o_4627_, 0);
v_hasTrace_4631_ = lean_ctor_get_uint8(v_o_4627_, sizeof(void*)*1);
v_isSharedCheck_4645_ = !lean_is_exclusive(v_o_4627_);
if (v_isSharedCheck_4645_ == 0)
{
v___x_4633_ = v_o_4627_;
v_isShared_4634_ = v_isSharedCheck_4645_;
goto v_resetjp_4632_;
}
else
{
lean_inc(v_map_4630_);
lean_dec(v_o_4627_);
v___x_4633_ = lean_box(0);
v_isShared_4634_ = v_isSharedCheck_4645_;
goto v_resetjp_4632_;
}
v_resetjp_4632_:
{
lean_object* v___x_4635_; lean_object* v___x_4636_; 
v___x_4635_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4635_, 0, v_v_4629_);
lean_inc(v_k_4628_);
v___x_4636_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_4628_, v___x_4635_, v_map_4630_);
if (v_hasTrace_4631_ == 0)
{
lean_object* v___x_4637_; uint8_t v___x_4638_; lean_object* v___x_4640_; 
v___x_4637_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__1));
v___x_4638_ = l_Lean_Name_isPrefixOf(v___x_4637_, v_k_4628_);
lean_dec(v_k_4628_);
if (v_isShared_4634_ == 0)
{
lean_ctor_set(v___x_4633_, 0, v___x_4636_);
v___x_4640_ = v___x_4633_;
goto v_reusejp_4639_;
}
else
{
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v___x_4636_);
v___x_4640_ = v_reuseFailAlloc_4641_;
goto v_reusejp_4639_;
}
v_reusejp_4639_:
{
lean_ctor_set_uint8(v___x_4640_, sizeof(void*)*1, v___x_4638_);
return v___x_4640_;
}
}
else
{
lean_object* v___x_4643_; 
lean_dec(v_k_4628_);
if (v_isShared_4634_ == 0)
{
lean_ctor_set(v___x_4633_, 0, v___x_4636_);
v___x_4643_ = v___x_4633_;
goto v_reusejp_4642_;
}
else
{
lean_object* v_reuseFailAlloc_4644_; 
v_reuseFailAlloc_4644_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_4644_, 0, v___x_4636_);
lean_ctor_set_uint8(v_reuseFailAlloc_4644_, sizeof(void*)*1, v_hasTrace_4631_);
v___x_4643_ = v_reuseFailAlloc_4644_;
goto v_reusejp_4642_;
}
v_reusejp_4642_:
{
return v___x_4643_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4_spec__4___boxed(lean_object* v_o_4646_, lean_object* v_k_4647_, lean_object* v_v_4648_){
_start:
{
uint8_t v_v_boxed_4649_; lean_object* v_res_4650_; 
v_v_boxed_4649_ = lean_unbox(v_v_4648_);
v_res_4650_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4_spec__4(v_o_4646_, v_k_4647_, v_v_boxed_4649_);
return v_res_4650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4(lean_object* v_opts_4651_, lean_object* v_opt_4652_, uint8_t v_val_4653_){
_start:
{
lean_object* v_name_4654_; lean_object* v___x_4655_; 
v_name_4654_ = lean_ctor_get(v_opt_4652_, 0);
lean_inc(v_name_4654_);
lean_dec_ref(v_opt_4652_);
v___x_4655_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4_spec__4(v_opts_4651_, v_name_4654_, v_val_4653_);
return v___x_4655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4___boxed(lean_object* v_opts_4656_, lean_object* v_opt_4657_, lean_object* v_val_4658_){
_start:
{
uint8_t v_val_boxed_4659_; lean_object* v_res_4660_; 
v_val_boxed_4659_ = lean_unbox(v_val_4658_);
v_res_4660_ = l_Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4(v_opts_4656_, v_opt_4657_, v_val_boxed_4659_);
return v_res_4660_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_PrettyPrinter_delabCore_spec__8(lean_object* v_cls_4661_, lean_object* v_msg_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_, lean_object* v___y_4665_, lean_object* v___y_4666_){
_start:
{
lean_object* v_ref_4668_; lean_object* v___x_4669_; lean_object* v_a_4670_; lean_object* v___x_4672_; uint8_t v_isShared_4673_; uint8_t v_isSharedCheck_4714_; 
v_ref_4668_ = lean_ctor_get(v___y_4665_, 5);
v___x_4669_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_PrettyPrinter_Delaborator_delab_spec__0_spec__0(v_msg_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_);
v_a_4670_ = lean_ctor_get(v___x_4669_, 0);
v_isSharedCheck_4714_ = !lean_is_exclusive(v___x_4669_);
if (v_isSharedCheck_4714_ == 0)
{
v___x_4672_ = v___x_4669_;
v_isShared_4673_ = v_isSharedCheck_4714_;
goto v_resetjp_4671_;
}
else
{
lean_inc(v_a_4670_);
lean_dec(v___x_4669_);
v___x_4672_ = lean_box(0);
v_isShared_4673_ = v_isSharedCheck_4714_;
goto v_resetjp_4671_;
}
v_resetjp_4671_:
{
lean_object* v___x_4674_; lean_object* v_traceState_4675_; lean_object* v_env_4676_; lean_object* v_nextMacroScope_4677_; lean_object* v_ngen_4678_; lean_object* v_auxDeclNGen_4679_; lean_object* v_cache_4680_; lean_object* v_messages_4681_; lean_object* v_infoState_4682_; lean_object* v_snapshotTasks_4683_; lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4713_; 
v___x_4674_ = lean_st_ref_take(v___y_4666_);
v_traceState_4675_ = lean_ctor_get(v___x_4674_, 4);
v_env_4676_ = lean_ctor_get(v___x_4674_, 0);
v_nextMacroScope_4677_ = lean_ctor_get(v___x_4674_, 1);
v_ngen_4678_ = lean_ctor_get(v___x_4674_, 2);
v_auxDeclNGen_4679_ = lean_ctor_get(v___x_4674_, 3);
v_cache_4680_ = lean_ctor_get(v___x_4674_, 5);
v_messages_4681_ = lean_ctor_get(v___x_4674_, 6);
v_infoState_4682_ = lean_ctor_get(v___x_4674_, 7);
v_snapshotTasks_4683_ = lean_ctor_get(v___x_4674_, 8);
v_isSharedCheck_4713_ = !lean_is_exclusive(v___x_4674_);
if (v_isSharedCheck_4713_ == 0)
{
v___x_4685_ = v___x_4674_;
v_isShared_4686_ = v_isSharedCheck_4713_;
goto v_resetjp_4684_;
}
else
{
lean_inc(v_snapshotTasks_4683_);
lean_inc(v_infoState_4682_);
lean_inc(v_messages_4681_);
lean_inc(v_cache_4680_);
lean_inc(v_traceState_4675_);
lean_inc(v_auxDeclNGen_4679_);
lean_inc(v_ngen_4678_);
lean_inc(v_nextMacroScope_4677_);
lean_inc(v_env_4676_);
lean_dec(v___x_4674_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4713_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
uint64_t v_tid_4687_; lean_object* v_traces_4688_; lean_object* v___x_4690_; uint8_t v_isShared_4691_; uint8_t v_isSharedCheck_4712_; 
v_tid_4687_ = lean_ctor_get_uint64(v_traceState_4675_, sizeof(void*)*1);
v_traces_4688_ = lean_ctor_get(v_traceState_4675_, 0);
v_isSharedCheck_4712_ = !lean_is_exclusive(v_traceState_4675_);
if (v_isSharedCheck_4712_ == 0)
{
v___x_4690_ = v_traceState_4675_;
v_isShared_4691_ = v_isSharedCheck_4712_;
goto v_resetjp_4689_;
}
else
{
lean_inc(v_traces_4688_);
lean_dec(v_traceState_4675_);
v___x_4690_ = lean_box(0);
v_isShared_4691_ = v_isSharedCheck_4712_;
goto v_resetjp_4689_;
}
v_resetjp_4689_:
{
lean_object* v___x_4692_; double v___x_4693_; uint8_t v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4702_; 
v___x_4692_ = lean_box(0);
v___x_4693_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__0);
v___x_4694_ = 0;
v___x_4695_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__1));
v___x_4696_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4696_, 0, v_cls_4661_);
lean_ctor_set(v___x_4696_, 1, v___x_4692_);
lean_ctor_set(v___x_4696_, 2, v___x_4695_);
lean_ctor_set_float(v___x_4696_, sizeof(void*)*3, v___x_4693_);
lean_ctor_set_float(v___x_4696_, sizeof(void*)*3 + 8, v___x_4693_);
lean_ctor_set_uint8(v___x_4696_, sizeof(void*)*3 + 16, v___x_4694_);
v___x_4697_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0_spec__3___closed__2));
v___x_4698_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4698_, 0, v___x_4696_);
lean_ctor_set(v___x_4698_, 1, v_a_4670_);
lean_ctor_set(v___x_4698_, 2, v___x_4697_);
lean_inc(v_ref_4668_);
v___x_4699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4699_, 0, v_ref_4668_);
lean_ctor_set(v___x_4699_, 1, v___x_4698_);
v___x_4700_ = l_Lean_PersistentArray_push___redArg(v_traces_4688_, v___x_4699_);
if (v_isShared_4691_ == 0)
{
lean_ctor_set(v___x_4690_, 0, v___x_4700_);
v___x_4702_ = v___x_4690_;
goto v_reusejp_4701_;
}
else
{
lean_object* v_reuseFailAlloc_4711_; 
v_reuseFailAlloc_4711_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4711_, 0, v___x_4700_);
lean_ctor_set_uint64(v_reuseFailAlloc_4711_, sizeof(void*)*1, v_tid_4687_);
v___x_4702_ = v_reuseFailAlloc_4711_;
goto v_reusejp_4701_;
}
v_reusejp_4701_:
{
lean_object* v___x_4704_; 
if (v_isShared_4686_ == 0)
{
lean_ctor_set(v___x_4685_, 4, v___x_4702_);
v___x_4704_ = v___x_4685_;
goto v_reusejp_4703_;
}
else
{
lean_object* v_reuseFailAlloc_4710_; 
v_reuseFailAlloc_4710_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4710_, 0, v_env_4676_);
lean_ctor_set(v_reuseFailAlloc_4710_, 1, v_nextMacroScope_4677_);
lean_ctor_set(v_reuseFailAlloc_4710_, 2, v_ngen_4678_);
lean_ctor_set(v_reuseFailAlloc_4710_, 3, v_auxDeclNGen_4679_);
lean_ctor_set(v_reuseFailAlloc_4710_, 4, v___x_4702_);
lean_ctor_set(v_reuseFailAlloc_4710_, 5, v_cache_4680_);
lean_ctor_set(v_reuseFailAlloc_4710_, 6, v_messages_4681_);
lean_ctor_set(v_reuseFailAlloc_4710_, 7, v_infoState_4682_);
lean_ctor_set(v_reuseFailAlloc_4710_, 8, v_snapshotTasks_4683_);
v___x_4704_ = v_reuseFailAlloc_4710_;
goto v_reusejp_4703_;
}
v_reusejp_4703_:
{
lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4708_; 
v___x_4705_ = lean_st_ref_set(v___y_4666_, v___x_4704_);
v___x_4706_ = lean_box(0);
if (v_isShared_4673_ == 0)
{
lean_ctor_set(v___x_4672_, 0, v___x_4706_);
v___x_4708_ = v___x_4672_;
goto v_reusejp_4707_;
}
else
{
lean_object* v_reuseFailAlloc_4709_; 
v_reuseFailAlloc_4709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4709_, 0, v___x_4706_);
v___x_4708_ = v_reuseFailAlloc_4709_;
goto v_reusejp_4707_;
}
v_reusejp_4707_:
{
return v___x_4708_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_PrettyPrinter_delabCore_spec__8___boxed(lean_object* v_cls_4715_, lean_object* v_msg_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_){
_start:
{
lean_object* v_res_4722_; 
v_res_4722_ = l_Lean_addTrace___at___00Lean_PrettyPrinter_delabCore_spec__8(v_cls_4715_, v_msg_4716_, v___y_4717_, v___y_4718_, v___y_4719_, v___y_4720_);
lean_dec(v___y_4720_);
lean_dec_ref(v___y_4719_);
lean_dec(v___y_4718_);
lean_dec_ref(v___y_4717_);
return v_res_4722_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_delabCore___redArg___closed__3(void){
_start:
{
lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; 
v___x_4726_ = ((lean_object*)(l_Lean_PrettyPrinter_delabCore___redArg___closed__2));
v___x_4727_ = lean_unsigned_to_nat(18u);
v___x_4728_ = lean_unsigned_to_nat(511u);
v___x_4729_ = ((lean_object*)(l_Lean_PrettyPrinter_delabCore___redArg___closed__1));
v___x_4730_ = ((lean_object*)(l_Lean_PrettyPrinter_delabCore___redArg___closed__0));
v___x_4731_ = l_mkPanicMessageWithDecl(v___x_4730_, v___x_4729_, v___x_4728_, v___x_4727_, v___x_4726_);
return v___x_4731_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_delabCore___redArg___closed__4(void){
_start:
{
lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; 
v___x_4732_ = l_Lean_SubExpr_Pos_maxChildren;
v___x_4733_ = lean_unsigned_to_nat(2u);
v___x_4734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4734_, 0, v___x_4733_);
lean_ctor_set(v___x_4734_, 1, v___x_4732_);
return v___x_4734_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_delabCore___redArg___closed__5(void){
_start:
{
lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; 
v___x_4735_ = lean_obj_once(&l_Lean_PrettyPrinter_delabCore___redArg___closed__4, &l_Lean_PrettyPrinter_delabCore___redArg___closed__4_once, _init_l_Lean_PrettyPrinter_delabCore___redArg___closed__4);
v___x_4736_ = lean_box(1);
v___x_4737_ = lean_unsigned_to_nat(0u);
v___x_4738_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4738_, 0, v___x_4737_);
lean_ctor_set(v___x_4738_, 1, v___x_4736_);
lean_ctor_set(v___x_4738_, 2, v___x_4735_);
return v___x_4738_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delabCore___redArg(lean_object* v_e_4744_, lean_object* v_optionsPerPos_4745_, lean_object* v_delab_4746_, lean_object* v_a_4747_, lean_object* v_a_4748_, lean_object* v_a_4749_, lean_object* v_a_4750_){
_start:
{
lean_object* v_fst_4753_; lean_object* v_snd_4754_; lean_object* v___y_4759_; lean_object* v___y_4760_; lean_object* v___y_4761_; lean_object* v___y_4762_; lean_object* v___y_4763_; lean_object* v___y_4764_; uint8_t v___y_4765_; lean_object* v___y_4785_; lean_object* v___y_4786_; lean_object* v_optionsPerPos_4787_; lean_object* v___y_4788_; lean_object* v___y_4789_; lean_object* v___y_4790_; lean_object* v___y_4791_; lean_object* v___y_4823_; lean_object* v_e_4824_; lean_object* v___y_4825_; lean_object* v___y_4826_; lean_object* v___y_4827_; lean_object* v___y_4828_; lean_object* v___y_4842_; lean_object* v_e_4843_; lean_object* v___y_4844_; lean_object* v___y_4845_; lean_object* v___y_4846_; lean_object* v___y_4847_; lean_object* v___x_4859_; 
lean_inc(v_a_4750_);
lean_inc_ref(v_a_4749_);
v___x_4859_ = l_Lean_Meta_erasePatternRefAnnotations(v_e_4744_, v_a_4749_, v_a_4750_);
if (lean_obj_tag(v___x_4859_) == 0)
{
lean_object* v_a_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4999_; 
v_a_4860_ = lean_ctor_get(v___x_4859_, 0);
v_isSharedCheck_4999_ = !lean_is_exclusive(v___x_4859_);
if (v_isSharedCheck_4999_ == 0)
{
v___x_4862_ = v___x_4859_;
v_isShared_4863_ = v_isSharedCheck_4999_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_a_4860_);
lean_dec(v___x_4859_);
v___x_4862_ = lean_box(0);
v_isShared_4863_ = v_isSharedCheck_4999_;
goto v_resetjp_4861_;
}
v_resetjp_4861_:
{
uint8_t v___y_4865_; lean_object* v___y_4866_; uint8_t v___y_4867_; lean_object* v___y_4868_; lean_object* v___y_4869_; lean_object* v___y_4870_; lean_object* v___y_4871_; uint8_t v___y_4899_; lean_object* v___y_4900_; lean_object* v___y_4901_; lean_object* v___y_4902_; uint8_t v___y_4903_; lean_object* v___y_4904_; lean_object* v___y_4905_; uint8_t v___y_4906_; lean_object* v_opts_4928_; lean_object* v___y_4929_; lean_object* v___y_4930_; lean_object* v___y_4931_; lean_object* v___y_4932_; lean_object* v___y_4940_; lean_object* v___y_4941_; lean_object* v___y_4942_; lean_object* v___y_4943_; lean_object* v___y_4944_; lean_object* v___y_4945_; uint8_t v___y_4946_; lean_object* v___y_4951_; lean_object* v___y_4952_; lean_object* v___y_4953_; lean_object* v___y_4954_; lean_object* v___y_4955_; lean_object* v___y_4956_; uint8_t v___y_4957_; lean_object* v___y_4967_; lean_object* v___y_4968_; lean_object* v___y_4969_; lean_object* v___y_4970_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v_a_4979_; lean_object* v___x_4981_; uint8_t v_isShared_4982_; uint8_t v_isSharedCheck_4998_; 
v___x_4977_ = ((lean_object*)(l_Lean_PrettyPrinter_delabCore___redArg___closed__7));
v___x_4978_ = l_Lean_isTracingEnabledFor___at___00Lean_PrettyPrinter_delabCore_spec__7___redArg(v___x_4977_, v_a_4749_);
v_a_4979_ = lean_ctor_get(v___x_4978_, 0);
v_isSharedCheck_4998_ = !lean_is_exclusive(v___x_4978_);
if (v_isSharedCheck_4998_ == 0)
{
v___x_4981_ = v___x_4978_;
v_isShared_4982_ = v_isSharedCheck_4998_;
goto v_resetjp_4980_;
}
else
{
lean_inc(v_a_4979_);
lean_dec(v___x_4978_);
v___x_4981_ = lean_box(0);
v_isShared_4982_ = v_isSharedCheck_4998_;
goto v_resetjp_4980_;
}
v___jp_4864_:
{
lean_object* v_fileName_4872_; lean_object* v_fileMap_4873_; lean_object* v_currRecDepth_4874_; lean_object* v_ref_4875_; lean_object* v_currNamespace_4876_; lean_object* v_openDecls_4877_; lean_object* v_initHeartbeats_4878_; lean_object* v_maxHeartbeats_4879_; lean_object* v_quotContext_4880_; lean_object* v_currMacroScope_4881_; lean_object* v_cancelTk_x3f_4882_; uint8_t v_suppressElabErrors_4883_; lean_object* v_inheritedTraceOptions_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4895_; 
v_fileName_4872_ = lean_ctor_get(v___y_4870_, 0);
v_fileMap_4873_ = lean_ctor_get(v___y_4870_, 1);
v_currRecDepth_4874_ = lean_ctor_get(v___y_4870_, 3);
v_ref_4875_ = lean_ctor_get(v___y_4870_, 5);
v_currNamespace_4876_ = lean_ctor_get(v___y_4870_, 6);
v_openDecls_4877_ = lean_ctor_get(v___y_4870_, 7);
v_initHeartbeats_4878_ = lean_ctor_get(v___y_4870_, 8);
v_maxHeartbeats_4879_ = lean_ctor_get(v___y_4870_, 9);
v_quotContext_4880_ = lean_ctor_get(v___y_4870_, 10);
v_currMacroScope_4881_ = lean_ctor_get(v___y_4870_, 11);
v_cancelTk_x3f_4882_ = lean_ctor_get(v___y_4870_, 12);
v_suppressElabErrors_4883_ = lean_ctor_get_uint8(v___y_4870_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_4884_ = lean_ctor_get(v___y_4870_, 13);
v_isSharedCheck_4895_ = !lean_is_exclusive(v___y_4870_);
if (v_isSharedCheck_4895_ == 0)
{
lean_object* v_unused_4896_; lean_object* v_unused_4897_; 
v_unused_4896_ = lean_ctor_get(v___y_4870_, 4);
lean_dec(v_unused_4896_);
v_unused_4897_ = lean_ctor_get(v___y_4870_, 2);
lean_dec(v_unused_4897_);
v___x_4886_ = v___y_4870_;
v_isShared_4887_ = v_isSharedCheck_4895_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_inheritedTraceOptions_4884_);
lean_inc(v_cancelTk_x3f_4882_);
lean_inc(v_currMacroScope_4881_);
lean_inc(v_quotContext_4880_);
lean_inc(v_maxHeartbeats_4879_);
lean_inc(v_initHeartbeats_4878_);
lean_inc(v_openDecls_4877_);
lean_inc(v_currNamespace_4876_);
lean_inc(v_ref_4875_);
lean_inc(v_currRecDepth_4874_);
lean_inc(v_fileMap_4873_);
lean_inc(v_fileName_4872_);
lean_dec(v___y_4870_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4895_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4891_; 
v___x_4888_ = l_Lean_maxRecDepth;
v___x_4889_ = l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__2(v___y_4869_, v___x_4888_);
lean_inc_ref(v___y_4869_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 4, v___x_4889_);
lean_ctor_set(v___x_4886_, 2, v___y_4869_);
v___x_4891_ = v___x_4886_;
goto v_reusejp_4890_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v_fileName_4872_);
lean_ctor_set(v_reuseFailAlloc_4894_, 1, v_fileMap_4873_);
lean_ctor_set(v_reuseFailAlloc_4894_, 2, v___y_4869_);
lean_ctor_set(v_reuseFailAlloc_4894_, 3, v_currRecDepth_4874_);
lean_ctor_set(v_reuseFailAlloc_4894_, 4, v___x_4889_);
lean_ctor_set(v_reuseFailAlloc_4894_, 5, v_ref_4875_);
lean_ctor_set(v_reuseFailAlloc_4894_, 6, v_currNamespace_4876_);
lean_ctor_set(v_reuseFailAlloc_4894_, 7, v_openDecls_4877_);
lean_ctor_set(v_reuseFailAlloc_4894_, 8, v_initHeartbeats_4878_);
lean_ctor_set(v_reuseFailAlloc_4894_, 9, v_maxHeartbeats_4879_);
lean_ctor_set(v_reuseFailAlloc_4894_, 10, v_quotContext_4880_);
lean_ctor_set(v_reuseFailAlloc_4894_, 11, v_currMacroScope_4881_);
lean_ctor_set(v_reuseFailAlloc_4894_, 12, v_cancelTk_x3f_4882_);
lean_ctor_set(v_reuseFailAlloc_4894_, 13, v_inheritedTraceOptions_4884_);
lean_ctor_set_uint8(v_reuseFailAlloc_4894_, sizeof(void*)*14 + 1, v_suppressElabErrors_4883_);
v___x_4891_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4890_;
}
v_reusejp_4890_:
{
lean_ctor_set_uint8(v___x_4891_, sizeof(void*)*14, v___y_4867_);
if (v___y_4865_ == 0)
{
v___y_4842_ = v___y_4869_;
v_e_4843_ = v_a_4860_;
v___y_4844_ = v___y_4866_;
v___y_4845_ = v___y_4868_;
v___y_4846_ = v___x_4891_;
v___y_4847_ = v___y_4871_;
goto v___jp_4841_;
}
else
{
lean_object* v___x_4892_; lean_object* v_a_4893_; 
v___x_4892_ = l_Lean_instantiateMVars___at___00Lean_PrettyPrinter_delabCore_spec__3___redArg(v_a_4860_, v___y_4868_);
v_a_4893_ = lean_ctor_get(v___x_4892_, 0);
lean_inc(v_a_4893_);
lean_dec_ref(v___x_4892_);
v___y_4842_ = v___y_4869_;
v_e_4843_ = v_a_4893_;
v___y_4844_ = v___y_4866_;
v___y_4845_ = v___y_4868_;
v___y_4846_ = v___x_4891_;
v___y_4847_ = v___y_4871_;
goto v___jp_4841_;
}
}
}
}
v___jp_4898_:
{
if (v___y_4906_ == 0)
{
lean_object* v___x_4907_; lean_object* v_env_4908_; lean_object* v_nextMacroScope_4909_; lean_object* v_ngen_4910_; lean_object* v_auxDeclNGen_4911_; lean_object* v_traceState_4912_; lean_object* v_messages_4913_; lean_object* v_infoState_4914_; lean_object* v_snapshotTasks_4915_; lean_object* v___x_4917_; uint8_t v_isShared_4918_; uint8_t v_isSharedCheck_4925_; 
v___x_4907_ = lean_st_ref_take(v___y_4902_);
v_env_4908_ = lean_ctor_get(v___x_4907_, 0);
v_nextMacroScope_4909_ = lean_ctor_get(v___x_4907_, 1);
v_ngen_4910_ = lean_ctor_get(v___x_4907_, 2);
v_auxDeclNGen_4911_ = lean_ctor_get(v___x_4907_, 3);
v_traceState_4912_ = lean_ctor_get(v___x_4907_, 4);
v_messages_4913_ = lean_ctor_get(v___x_4907_, 6);
v_infoState_4914_ = lean_ctor_get(v___x_4907_, 7);
v_snapshotTasks_4915_ = lean_ctor_get(v___x_4907_, 8);
v_isSharedCheck_4925_ = !lean_is_exclusive(v___x_4907_);
if (v_isSharedCheck_4925_ == 0)
{
lean_object* v_unused_4926_; 
v_unused_4926_ = lean_ctor_get(v___x_4907_, 5);
lean_dec(v_unused_4926_);
v___x_4917_ = v___x_4907_;
v_isShared_4918_ = v_isSharedCheck_4925_;
goto v_resetjp_4916_;
}
else
{
lean_inc(v_snapshotTasks_4915_);
lean_inc(v_infoState_4914_);
lean_inc(v_messages_4913_);
lean_inc(v_traceState_4912_);
lean_inc(v_auxDeclNGen_4911_);
lean_inc(v_ngen_4910_);
lean_inc(v_nextMacroScope_4909_);
lean_inc(v_env_4908_);
lean_dec(v___x_4907_);
v___x_4917_ = lean_box(0);
v_isShared_4918_ = v_isSharedCheck_4925_;
goto v_resetjp_4916_;
}
v_resetjp_4916_:
{
lean_object* v___x_4919_; lean_object* v___x_4920_; lean_object* v___x_4922_; 
v___x_4919_ = l_Lean_Kernel_enableDiag(v_env_4908_, v___y_4903_);
v___x_4920_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2__spec__0_spec__0___closed__5);
if (v_isShared_4918_ == 0)
{
lean_ctor_set(v___x_4917_, 5, v___x_4920_);
lean_ctor_set(v___x_4917_, 0, v___x_4919_);
v___x_4922_ = v___x_4917_;
goto v_reusejp_4921_;
}
else
{
lean_object* v_reuseFailAlloc_4924_; 
v_reuseFailAlloc_4924_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4924_, 0, v___x_4919_);
lean_ctor_set(v_reuseFailAlloc_4924_, 1, v_nextMacroScope_4909_);
lean_ctor_set(v_reuseFailAlloc_4924_, 2, v_ngen_4910_);
lean_ctor_set(v_reuseFailAlloc_4924_, 3, v_auxDeclNGen_4911_);
lean_ctor_set(v_reuseFailAlloc_4924_, 4, v_traceState_4912_);
lean_ctor_set(v_reuseFailAlloc_4924_, 5, v___x_4920_);
lean_ctor_set(v_reuseFailAlloc_4924_, 6, v_messages_4913_);
lean_ctor_set(v_reuseFailAlloc_4924_, 7, v_infoState_4914_);
lean_ctor_set(v_reuseFailAlloc_4924_, 8, v_snapshotTasks_4915_);
v___x_4922_ = v_reuseFailAlloc_4924_;
goto v_reusejp_4921_;
}
v_reusejp_4921_:
{
lean_object* v___x_4923_; 
v___x_4923_ = lean_st_ref_set(v___y_4902_, v___x_4922_);
v___y_4865_ = v___y_4899_;
v___y_4866_ = v___y_4900_;
v___y_4867_ = v___y_4903_;
v___y_4868_ = v___y_4905_;
v___y_4869_ = v___y_4904_;
v___y_4870_ = v___y_4901_;
v___y_4871_ = v___y_4902_;
goto v___jp_4864_;
}
}
}
else
{
v___y_4865_ = v___y_4899_;
v___y_4866_ = v___y_4900_;
v___y_4867_ = v___y_4903_;
v___y_4868_ = v___y_4905_;
v___y_4869_ = v___y_4904_;
v___y_4870_ = v___y_4901_;
v___y_4871_ = v___y_4902_;
goto v___jp_4864_;
}
}
v___jp_4927_:
{
lean_object* v___x_4933_; lean_object* v_env_4934_; uint8_t v___x_4935_; lean_object* v___x_4936_; uint8_t v___x_4937_; uint8_t v___x_4938_; 
v___x_4933_ = lean_st_ref_get(v___y_4932_);
v_env_4934_ = lean_ctor_get(v___x_4933_, 0);
lean_inc_ref(v_env_4934_);
lean_dec(v___x_4933_);
v___x_4935_ = l_Lean_getPPInstantiateMVars(v_opts_4928_);
v___x_4936_ = l_Lean_diagnostics;
v___x_4937_ = l_Lean_Option_get___at___00Lean_PrettyPrinter_delabCore_spec__1(v_opts_4928_, v___x_4936_);
v___x_4938_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_4934_);
lean_dec_ref(v_env_4934_);
if (v___x_4938_ == 0)
{
if (v___x_4937_ == 0)
{
v___y_4865_ = v___x_4935_;
v___y_4866_ = v___y_4929_;
v___y_4867_ = v___x_4937_;
v___y_4868_ = v___y_4930_;
v___y_4869_ = v_opts_4928_;
v___y_4870_ = v___y_4931_;
v___y_4871_ = v___y_4932_;
goto v___jp_4864_;
}
else
{
v___y_4899_ = v___x_4935_;
v___y_4900_ = v___y_4929_;
v___y_4901_ = v___y_4931_;
v___y_4902_ = v___y_4932_;
v___y_4903_ = v___x_4937_;
v___y_4904_ = v_opts_4928_;
v___y_4905_ = v___y_4930_;
v___y_4906_ = v___x_4938_;
goto v___jp_4898_;
}
}
else
{
v___y_4899_ = v___x_4935_;
v___y_4900_ = v___y_4929_;
v___y_4901_ = v___y_4931_;
v___y_4902_ = v___y_4932_;
v___y_4903_ = v___x_4937_;
v___y_4904_ = v_opts_4928_;
v___y_4905_ = v___y_4930_;
v___y_4906_ = v___x_4937_;
goto v___jp_4898_;
}
}
v___jp_4939_:
{
if (v___y_4946_ == 0)
{
lean_dec_ref(v___y_4943_);
lean_del_object(v___x_4862_);
v_opts_4928_ = v___y_4941_;
v___y_4929_ = v___y_4940_;
v___y_4930_ = v___y_4942_;
v___y_4931_ = v___y_4944_;
v___y_4932_ = v___y_4945_;
goto v___jp_4927_;
}
else
{
lean_object* v___x_4948_; 
lean_dec(v___y_4945_);
lean_dec_ref(v___y_4944_);
lean_dec(v___y_4942_);
lean_dec_ref(v___y_4941_);
lean_dec_ref(v___y_4940_);
lean_dec(v_a_4860_);
lean_dec_ref(v_delab_4746_);
lean_dec(v_optionsPerPos_4745_);
if (v_isShared_4863_ == 0)
{
lean_ctor_set_tag(v___x_4862_, 1);
lean_ctor_set(v___x_4862_, 0, v___y_4943_);
v___x_4948_ = v___x_4862_;
goto v_reusejp_4947_;
}
else
{
lean_object* v_reuseFailAlloc_4949_; 
v_reuseFailAlloc_4949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4949_, 0, v___y_4943_);
v___x_4948_ = v_reuseFailAlloc_4949_;
goto v_reusejp_4947_;
}
v_reusejp_4947_:
{
return v___x_4948_;
}
}
}
v___jp_4950_:
{
if (v___y_4957_ == 0)
{
lean_dec_ref(v___y_4955_);
lean_del_object(v___x_4862_);
v_opts_4928_ = v___y_4952_;
v___y_4929_ = v___y_4951_;
v___y_4930_ = v___y_4953_;
v___y_4931_ = v___y_4954_;
v___y_4932_ = v___y_4956_;
goto v___jp_4927_;
}
else
{
lean_object* v___x_4958_; 
lean_inc(v___y_4956_);
lean_inc_ref(v___y_4954_);
lean_inc(v___y_4953_);
lean_inc_ref(v___y_4951_);
lean_inc(v_a_4860_);
v___x_4958_ = l_Lean_Meta_isProof(v_a_4860_, v___y_4951_, v___y_4953_, v___y_4954_, v___y_4956_);
if (lean_obj_tag(v___x_4958_) == 0)
{
lean_object* v_a_4959_; uint8_t v___x_4960_; 
lean_del_object(v___x_4862_);
v_a_4959_ = lean_ctor_get(v___x_4958_, 0);
lean_inc(v_a_4959_);
lean_dec_ref(v___x_4958_);
v___x_4960_ = lean_unbox(v_a_4959_);
if (v___x_4960_ == 0)
{
lean_dec(v_a_4959_);
lean_dec_ref(v___y_4955_);
v_opts_4928_ = v___y_4952_;
v___y_4929_ = v___y_4951_;
v___y_4930_ = v___y_4953_;
v___y_4931_ = v___y_4954_;
v___y_4932_ = v___y_4956_;
goto v___jp_4927_;
}
else
{
uint8_t v___x_4961_; lean_object* v___x_4962_; 
v___x_4961_ = lean_unbox(v_a_4959_);
lean_dec(v_a_4959_);
v___x_4962_ = l_Lean_Option_set___at___00Lean_PrettyPrinter_delabCore_spec__4(v___y_4952_, v___y_4955_, v___x_4961_);
v_opts_4928_ = v___x_4962_;
v___y_4929_ = v___y_4951_;
v___y_4930_ = v___y_4953_;
v___y_4931_ = v___y_4954_;
v___y_4932_ = v___y_4956_;
goto v___jp_4927_;
}
}
else
{
lean_object* v_a_4963_; uint8_t v___x_4964_; 
lean_dec_ref(v___y_4955_);
v_a_4963_ = lean_ctor_get(v___x_4958_, 0);
lean_inc(v_a_4963_);
lean_dec_ref(v___x_4958_);
v___x_4964_ = l_Lean_Exception_isInterrupt(v_a_4963_);
if (v___x_4964_ == 0)
{
uint8_t v___x_4965_; 
lean_inc(v_a_4963_);
v___x_4965_ = l_Lean_Exception_isRuntime(v_a_4963_);
v___y_4940_ = v___y_4951_;
v___y_4941_ = v___y_4952_;
v___y_4942_ = v___y_4953_;
v___y_4943_ = v_a_4963_;
v___y_4944_ = v___y_4954_;
v___y_4945_ = v___y_4956_;
v___y_4946_ = v___x_4965_;
goto v___jp_4939_;
}
else
{
v___y_4940_ = v___y_4951_;
v___y_4941_ = v___y_4952_;
v___y_4942_ = v___y_4953_;
v___y_4943_ = v_a_4963_;
v___y_4944_ = v___y_4954_;
v___y_4945_ = v___y_4956_;
v___y_4946_ = v___x_4964_;
goto v___jp_4939_;
}
}
}
}
v___jp_4966_:
{
lean_object* v_options_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; uint8_t v___x_4975_; 
v_options_4971_ = lean_ctor_get(v___y_4969_, 2);
lean_inc_ref(v_options_4971_);
v___x_4972_ = l_Lean_pp_proofs;
v___x_4973_ = l_Lean_Option_get_x3f___at___00Lean_PrettyPrinter_delabCore_spec__5(v_options_4971_, v___x_4972_);
v___x_4974_ = lean_box(0);
v___x_4975_ = l_Option_instBEq_beq___at___00Lean_PrettyPrinter_delabCore_spec__6(v___x_4973_, v___x_4974_);
lean_dec(v___x_4973_);
if (v___x_4975_ == 0)
{
v___y_4951_ = v___y_4967_;
v___y_4952_ = v_options_4971_;
v___y_4953_ = v___y_4968_;
v___y_4954_ = v___y_4969_;
v___y_4955_ = v___x_4972_;
v___y_4956_ = v___y_4970_;
v___y_4957_ = v___x_4975_;
goto v___jp_4950_;
}
else
{
uint8_t v___x_4976_; 
v___x_4976_ = l_Lean_Expr_isConst(v_a_4860_);
if (v___x_4976_ == 0)
{
v___y_4951_ = v___y_4967_;
v___y_4952_ = v_options_4971_;
v___y_4953_ = v___y_4968_;
v___y_4954_ = v___y_4969_;
v___y_4955_ = v___x_4972_;
v___y_4956_ = v___y_4970_;
v___y_4957_ = v___x_4975_;
goto v___jp_4950_;
}
else
{
lean_del_object(v___x_4862_);
v_opts_4928_ = v_options_4971_;
v___y_4929_ = v___y_4967_;
v___y_4930_ = v___y_4968_;
v___y_4931_ = v___y_4969_;
v___y_4932_ = v___y_4970_;
goto v___jp_4927_;
}
}
}
v_resetjp_4980_:
{
uint8_t v___x_4983_; 
v___x_4983_ = lean_unbox(v_a_4979_);
lean_dec(v_a_4979_);
if (v___x_4983_ == 0)
{
lean_del_object(v___x_4981_);
v___y_4967_ = v_a_4747_;
v___y_4968_ = v_a_4748_;
v___y_4969_ = v_a_4749_;
v___y_4970_ = v_a_4750_;
goto v___jp_4966_;
}
else
{
lean_object* v___x_4984_; lean_object* v___x_4986_; 
v___x_4984_ = lean_expr_dbg_to_string(v_a_4860_);
if (v_isShared_4982_ == 0)
{
lean_ctor_set_tag(v___x_4981_, 3);
lean_ctor_set(v___x_4981_, 0, v___x_4984_);
v___x_4986_ = v___x_4981_;
goto v_reusejp_4985_;
}
else
{
lean_object* v_reuseFailAlloc_4997_; 
v_reuseFailAlloc_4997_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4997_, 0, v___x_4984_);
v___x_4986_ = v_reuseFailAlloc_4997_;
goto v_reusejp_4985_;
}
v_reusejp_4985_:
{
lean_object* v___x_4987_; lean_object* v___x_4988_; 
v___x_4987_ = l_Lean_MessageData_ofFormat(v___x_4986_);
v___x_4988_ = l_Lean_addTrace___at___00Lean_PrettyPrinter_delabCore_spec__8(v___x_4977_, v___x_4987_, v_a_4747_, v_a_4748_, v_a_4749_, v_a_4750_);
if (lean_obj_tag(v___x_4988_) == 0)
{
lean_dec_ref(v___x_4988_);
v___y_4967_ = v_a_4747_;
v___y_4968_ = v_a_4748_;
v___y_4969_ = v_a_4749_;
v___y_4970_ = v_a_4750_;
goto v___jp_4966_;
}
else
{
lean_object* v_a_4989_; lean_object* v___x_4991_; uint8_t v_isShared_4992_; uint8_t v_isSharedCheck_4996_; 
lean_del_object(v___x_4862_);
lean_dec(v_a_4860_);
lean_dec(v_a_4750_);
lean_dec_ref(v_a_4749_);
lean_dec(v_a_4748_);
lean_dec_ref(v_a_4747_);
lean_dec_ref(v_delab_4746_);
lean_dec(v_optionsPerPos_4745_);
v_a_4989_ = lean_ctor_get(v___x_4988_, 0);
v_isSharedCheck_4996_ = !lean_is_exclusive(v___x_4988_);
if (v_isSharedCheck_4996_ == 0)
{
v___x_4991_ = v___x_4988_;
v_isShared_4992_ = v_isSharedCheck_4996_;
goto v_resetjp_4990_;
}
else
{
lean_inc(v_a_4989_);
lean_dec(v___x_4988_);
v___x_4991_ = lean_box(0);
v_isShared_4992_ = v_isSharedCheck_4996_;
goto v_resetjp_4990_;
}
v_resetjp_4990_:
{
lean_object* v___x_4994_; 
if (v_isShared_4992_ == 0)
{
v___x_4994_ = v___x_4991_;
goto v_reusejp_4993_;
}
else
{
lean_object* v_reuseFailAlloc_4995_; 
v_reuseFailAlloc_4995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4995_, 0, v_a_4989_);
v___x_4994_ = v_reuseFailAlloc_4995_;
goto v_reusejp_4993_;
}
v_reusejp_4993_:
{
return v___x_4994_;
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
lean_object* v_a_5000_; lean_object* v___x_5002_; uint8_t v_isShared_5003_; uint8_t v_isSharedCheck_5007_; 
lean_dec(v_a_4750_);
lean_dec_ref(v_a_4749_);
lean_dec(v_a_4748_);
lean_dec_ref(v_a_4747_);
lean_dec_ref(v_delab_4746_);
lean_dec(v_optionsPerPos_4745_);
v_a_5000_ = lean_ctor_get(v___x_4859_, 0);
v_isSharedCheck_5007_ = !lean_is_exclusive(v___x_4859_);
if (v_isSharedCheck_5007_ == 0)
{
v___x_5002_ = v___x_4859_;
v_isShared_5003_ = v_isSharedCheck_5007_;
goto v_resetjp_5001_;
}
else
{
lean_inc(v_a_5000_);
lean_dec(v___x_4859_);
v___x_5002_ = lean_box(0);
v_isShared_5003_ = v_isSharedCheck_5007_;
goto v_resetjp_5001_;
}
v_resetjp_5001_:
{
lean_object* v___x_5005_; 
if (v_isShared_5003_ == 0)
{
v___x_5005_ = v___x_5002_;
goto v_reusejp_5004_;
}
else
{
lean_object* v_reuseFailAlloc_5006_; 
v_reuseFailAlloc_5006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5006_, 0, v_a_5000_);
v___x_5005_ = v_reuseFailAlloc_5006_;
goto v_reusejp_5004_;
}
v_reusejp_5004_:
{
return v___x_5005_;
}
}
}
v___jp_4752_:
{
lean_object* v_infos_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; 
v_infos_4755_ = lean_ctor_get(v_snd_4754_, 1);
lean_inc(v_infos_4755_);
lean_dec_ref(v_snd_4754_);
v___x_4756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4756_, 0, v_fst_4753_);
lean_ctor_set(v___x_4756_, 1, v_infos_4755_);
v___x_4757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4757_, 0, v___x_4756_);
return v___x_4757_;
}
v___jp_4758_:
{
if (v___y_4765_ == 0)
{
if (lean_obj_tag(v___y_4764_) == 0)
{
lean_object* v___x_4766_; 
lean_dec_ref(v___y_4763_);
lean_dec(v___y_4762_);
lean_dec(v___y_4761_);
lean_dec(v___y_4760_);
lean_dec_ref(v___y_4759_);
v___x_4766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4766_, 0, v___y_4764_);
return v___x_4766_;
}
else
{
lean_object* v_id_4767_; uint8_t v___x_4768_; 
v_id_4767_ = lean_ctor_get(v___y_4764_, 0);
v___x_4768_ = l_Lean_instBEqInternalExceptionId_beq(v___y_4761_, v_id_4767_);
lean_dec(v___y_4761_);
if (v___x_4768_ == 0)
{
lean_object* v___x_4769_; 
lean_dec_ref(v___y_4763_);
lean_dec(v___y_4762_);
lean_dec(v___y_4760_);
lean_dec_ref(v___y_4759_);
v___x_4769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4769_, 0, v___y_4764_);
return v___x_4769_;
}
else
{
lean_object* v___x_4770_; lean_object* v___x_4771_; 
lean_dec_ref(v___y_4764_);
v___x_4770_ = lean_obj_once(&l_Lean_PrettyPrinter_delabCore___redArg___closed__3, &l_Lean_PrettyPrinter_delabCore___redArg___closed__3_once, _init_l_Lean_PrettyPrinter_delabCore___redArg___closed__3);
v___x_4771_ = l_panic___at___00Lean_PrettyPrinter_delabCore_spec__0___redArg(v___x_4770_, v___y_4763_, v___y_4760_, v___y_4759_, v___y_4762_);
if (lean_obj_tag(v___x_4771_) == 0)
{
lean_object* v_a_4772_; lean_object* v_fst_4773_; lean_object* v_snd_4774_; 
v_a_4772_ = lean_ctor_get(v___x_4771_, 0);
lean_inc(v_a_4772_);
lean_dec_ref(v___x_4771_);
v_fst_4773_ = lean_ctor_get(v_a_4772_, 0);
lean_inc(v_fst_4773_);
v_snd_4774_ = lean_ctor_get(v_a_4772_, 1);
lean_inc(v_snd_4774_);
lean_dec(v_a_4772_);
v_fst_4753_ = v_fst_4773_;
v_snd_4754_ = v_snd_4774_;
goto v___jp_4752_;
}
else
{
lean_object* v_a_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4782_; 
v_a_4775_ = lean_ctor_get(v___x_4771_, 0);
v_isSharedCheck_4782_ = !lean_is_exclusive(v___x_4771_);
if (v_isSharedCheck_4782_ == 0)
{
v___x_4777_ = v___x_4771_;
v_isShared_4778_ = v_isSharedCheck_4782_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_a_4775_);
lean_dec(v___x_4771_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4782_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
lean_object* v___x_4780_; 
if (v_isShared_4778_ == 0)
{
v___x_4780_ = v___x_4777_;
goto v_reusejp_4779_;
}
else
{
lean_object* v_reuseFailAlloc_4781_; 
v_reuseFailAlloc_4781_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4781_, 0, v_a_4775_);
v___x_4780_ = v_reuseFailAlloc_4781_;
goto v_reusejp_4779_;
}
v_reusejp_4779_:
{
return v___x_4780_;
}
}
}
}
}
}
else
{
lean_object* v___x_4783_; 
lean_dec_ref(v___y_4763_);
lean_dec(v___y_4762_);
lean_dec(v___y_4761_);
lean_dec(v___y_4760_);
lean_dec_ref(v___y_4759_);
v___x_4783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4783_, 0, v___y_4764_);
return v___x_4783_;
}
}
v___jp_4784_:
{
lean_object* v_fileName_4792_; lean_object* v_fileMap_4793_; lean_object* v_options_4794_; lean_object* v_currRecDepth_4795_; lean_object* v_maxRecDepth_4796_; lean_object* v_currNamespace_4797_; lean_object* v_openDecls_4798_; lean_object* v_initHeartbeats_4799_; lean_object* v_maxHeartbeats_4800_; lean_object* v_quotContext_4801_; lean_object* v_currMacroScope_4802_; uint8_t v_diag_4803_; lean_object* v_cancelTk_x3f_4804_; uint8_t v_suppressElabErrors_4805_; lean_object* v_inheritedTraceOptions_4806_; uint8_t v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; 
v_fileName_4792_ = lean_ctor_get(v___y_4790_, 0);
v_fileMap_4793_ = lean_ctor_get(v___y_4790_, 1);
v_options_4794_ = lean_ctor_get(v___y_4790_, 2);
v_currRecDepth_4795_ = lean_ctor_get(v___y_4790_, 3);
v_maxRecDepth_4796_ = lean_ctor_get(v___y_4790_, 4);
v_currNamespace_4797_ = lean_ctor_get(v___y_4790_, 6);
v_openDecls_4798_ = lean_ctor_get(v___y_4790_, 7);
v_initHeartbeats_4799_ = lean_ctor_get(v___y_4790_, 8);
v_maxHeartbeats_4800_ = lean_ctor_get(v___y_4790_, 9);
v_quotContext_4801_ = lean_ctor_get(v___y_4790_, 10);
v_currMacroScope_4802_ = lean_ctor_get(v___y_4790_, 11);
v_diag_4803_ = lean_ctor_get_uint8(v___y_4790_, sizeof(void*)*14);
v_cancelTk_x3f_4804_ = lean_ctor_get(v___y_4790_, 12);
v_suppressElabErrors_4805_ = lean_ctor_get_uint8(v___y_4790_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_4806_ = lean_ctor_get(v___y_4790_, 13);
v___x_4807_ = l_Lean_Options_getInPattern(v___y_4786_);
lean_dec_ref(v___y_4786_);
v___x_4808_ = l_Lean_SubExpr_mkRoot(v___y_4785_);
v___x_4809_ = lean_unsigned_to_nat(0u);
lean_inc(v_openDecls_4798_);
lean_inc(v_currNamespace_4797_);
v___x_4810_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_4810_, 0, v_optionsPerPos_4787_);
lean_ctor_set(v___x_4810_, 1, v_currNamespace_4797_);
lean_ctor_set(v___x_4810_, 2, v_openDecls_4798_);
lean_ctor_set(v___x_4810_, 3, v___x_4808_);
lean_ctor_set(v___x_4810_, 4, v___x_4809_);
lean_ctor_set_uint8(v___x_4810_, sizeof(void*)*5, v___x_4807_);
v___x_4811_ = lean_obj_once(&l_Lean_PrettyPrinter_delabCore___redArg___closed__5, &l_Lean_PrettyPrinter_delabCore___redArg___closed__5_once, _init_l_Lean_PrettyPrinter_delabCore___redArg___closed__5);
v___x_4812_ = lean_st_mk_ref(v___x_4811_);
v___x_4813_ = lean_box(0);
lean_inc_ref(v_inheritedTraceOptions_4806_);
lean_inc(v_cancelTk_x3f_4804_);
lean_inc(v_currMacroScope_4802_);
lean_inc(v_quotContext_4801_);
lean_inc(v_maxHeartbeats_4800_);
lean_inc(v_initHeartbeats_4799_);
lean_inc(v_openDecls_4798_);
lean_inc(v_currNamespace_4797_);
lean_inc(v_maxRecDepth_4796_);
lean_inc(v_currRecDepth_4795_);
lean_inc_ref(v_options_4794_);
lean_inc_ref(v_fileMap_4793_);
lean_inc_ref(v_fileName_4792_);
v___x_4814_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_4814_, 0, v_fileName_4792_);
lean_ctor_set(v___x_4814_, 1, v_fileMap_4793_);
lean_ctor_set(v___x_4814_, 2, v_options_4794_);
lean_ctor_set(v___x_4814_, 3, v_currRecDepth_4795_);
lean_ctor_set(v___x_4814_, 4, v_maxRecDepth_4796_);
lean_ctor_set(v___x_4814_, 5, v___x_4813_);
lean_ctor_set(v___x_4814_, 6, v_currNamespace_4797_);
lean_ctor_set(v___x_4814_, 7, v_openDecls_4798_);
lean_ctor_set(v___x_4814_, 8, v_initHeartbeats_4799_);
lean_ctor_set(v___x_4814_, 9, v_maxHeartbeats_4800_);
lean_ctor_set(v___x_4814_, 10, v_quotContext_4801_);
lean_ctor_set(v___x_4814_, 11, v_currMacroScope_4802_);
lean_ctor_set(v___x_4814_, 12, v_cancelTk_x3f_4804_);
lean_ctor_set(v___x_4814_, 13, v_inheritedTraceOptions_4806_);
lean_ctor_set_uint8(v___x_4814_, sizeof(void*)*14, v_diag_4803_);
lean_ctor_set_uint8(v___x_4814_, sizeof(void*)*14 + 1, v_suppressElabErrors_4805_);
lean_inc(v___y_4791_);
lean_inc(v___y_4789_);
lean_inc_ref(v___y_4788_);
lean_inc(v___x_4812_);
v___x_4815_ = lean_apply_7(v_delab_4746_, v___x_4810_, v___x_4812_, v___y_4788_, v___y_4789_, v___x_4814_, v___y_4791_, lean_box(0));
if (lean_obj_tag(v___x_4815_) == 0)
{
lean_object* v_a_4816_; lean_object* v___x_4817_; 
lean_dec(v___y_4791_);
lean_dec_ref(v___y_4790_);
lean_dec(v___y_4789_);
lean_dec_ref(v___y_4788_);
v_a_4816_ = lean_ctor_get(v___x_4815_, 0);
lean_inc(v_a_4816_);
lean_dec_ref(v___x_4815_);
v___x_4817_ = lean_st_ref_get(v___x_4812_);
lean_dec(v___x_4812_);
v_fst_4753_ = v_a_4816_;
v_snd_4754_ = v___x_4817_;
goto v___jp_4752_;
}
else
{
lean_object* v_a_4818_; lean_object* v___x_4819_; uint8_t v___x_4820_; 
lean_dec(v___x_4812_);
v_a_4818_ = lean_ctor_get(v___x_4815_, 0);
lean_inc(v_a_4818_);
lean_dec_ref(v___x_4815_);
v___x_4819_ = l_Lean_PrettyPrinter_Delaborator_delabFailureId;
v___x_4820_ = l_Lean_Exception_isInterrupt(v_a_4818_);
if (v___x_4820_ == 0)
{
uint8_t v___x_4821_; 
lean_inc(v_a_4818_);
v___x_4821_ = l_Lean_Exception_isRuntime(v_a_4818_);
v___y_4759_ = v___y_4790_;
v___y_4760_ = v___y_4789_;
v___y_4761_ = v___x_4819_;
v___y_4762_ = v___y_4791_;
v___y_4763_ = v___y_4788_;
v___y_4764_ = v_a_4818_;
v___y_4765_ = v___x_4821_;
goto v___jp_4758_;
}
else
{
v___y_4759_ = v___y_4790_;
v___y_4760_ = v___y_4789_;
v___y_4761_ = v___x_4819_;
v___y_4762_ = v___y_4791_;
v___y_4763_ = v___y_4788_;
v___y_4764_ = v_a_4818_;
v___y_4765_ = v___x_4820_;
goto v___jp_4758_;
}
}
}
v___jp_4822_:
{
uint8_t v___x_4829_; 
v___x_4829_ = l_Lean_getPPAll(v___y_4823_);
if (v___x_4829_ == 0)
{
uint8_t v___x_4830_; 
v___x_4830_ = l_Lean_getPPAnalyze(v___y_4823_);
if (v___x_4830_ == 0)
{
v___y_4785_ = v_e_4824_;
v___y_4786_ = v___y_4823_;
v_optionsPerPos_4787_ = v_optionsPerPos_4745_;
v___y_4788_ = v___y_4825_;
v___y_4789_ = v___y_4826_;
v___y_4790_ = v___y_4827_;
v___y_4791_ = v___y_4828_;
goto v___jp_4784_;
}
else
{
if (lean_obj_tag(v_optionsPerPos_4745_) == 0)
{
v___y_4785_ = v_e_4824_;
v___y_4786_ = v___y_4823_;
v_optionsPerPos_4787_ = v_optionsPerPos_4745_;
v___y_4788_ = v___y_4825_;
v___y_4789_ = v___y_4826_;
v___y_4790_ = v___y_4827_;
v___y_4791_ = v___y_4828_;
goto v___jp_4784_;
}
else
{
lean_object* v___x_4831_; 
lean_inc(v___y_4828_);
lean_inc_ref(v___y_4827_);
lean_inc(v___y_4826_);
lean_inc_ref(v___y_4825_);
lean_inc_ref(v_e_4824_);
v___x_4831_ = l_Lean_PrettyPrinter_Delaborator_topDownAnalyze(v_e_4824_, v___y_4825_, v___y_4826_, v___y_4827_, v___y_4828_);
if (lean_obj_tag(v___x_4831_) == 0)
{
lean_object* v_a_4832_; 
v_a_4832_ = lean_ctor_get(v___x_4831_, 0);
lean_inc(v_a_4832_);
lean_dec_ref(v___x_4831_);
v___y_4785_ = v_e_4824_;
v___y_4786_ = v___y_4823_;
v_optionsPerPos_4787_ = v_a_4832_;
v___y_4788_ = v___y_4825_;
v___y_4789_ = v___y_4826_;
v___y_4790_ = v___y_4827_;
v___y_4791_ = v___y_4828_;
goto v___jp_4784_;
}
else
{
lean_object* v_a_4833_; lean_object* v___x_4835_; uint8_t v_isShared_4836_; uint8_t v_isSharedCheck_4840_; 
lean_dec(v___y_4828_);
lean_dec_ref(v___y_4827_);
lean_dec(v___y_4826_);
lean_dec_ref(v___y_4825_);
lean_dec_ref(v_e_4824_);
lean_dec_ref(v___y_4823_);
lean_dec_ref(v_delab_4746_);
v_a_4833_ = lean_ctor_get(v___x_4831_, 0);
v_isSharedCheck_4840_ = !lean_is_exclusive(v___x_4831_);
if (v_isSharedCheck_4840_ == 0)
{
v___x_4835_ = v___x_4831_;
v_isShared_4836_ = v_isSharedCheck_4840_;
goto v_resetjp_4834_;
}
else
{
lean_inc(v_a_4833_);
lean_dec(v___x_4831_);
v___x_4835_ = lean_box(0);
v_isShared_4836_ = v_isSharedCheck_4840_;
goto v_resetjp_4834_;
}
v_resetjp_4834_:
{
lean_object* v___x_4838_; 
if (v_isShared_4836_ == 0)
{
v___x_4838_ = v___x_4835_;
goto v_reusejp_4837_;
}
else
{
lean_object* v_reuseFailAlloc_4839_; 
v_reuseFailAlloc_4839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4839_, 0, v_a_4833_);
v___x_4838_ = v_reuseFailAlloc_4839_;
goto v_reusejp_4837_;
}
v_reusejp_4837_:
{
return v___x_4838_;
}
}
}
}
}
}
else
{
v___y_4785_ = v_e_4824_;
v___y_4786_ = v___y_4823_;
v_optionsPerPos_4787_ = v_optionsPerPos_4745_;
v___y_4788_ = v___y_4825_;
v___y_4789_ = v___y_4826_;
v___y_4790_ = v___y_4827_;
v___y_4791_ = v___y_4828_;
goto v___jp_4784_;
}
}
v___jp_4841_:
{
uint8_t v___x_4848_; 
v___x_4848_ = l_Lean_getPPBeta(v___y_4842_);
if (v___x_4848_ == 0)
{
v___y_4823_ = v___y_4842_;
v_e_4824_ = v_e_4843_;
v___y_4825_ = v___y_4844_;
v___y_4826_ = v___y_4845_;
v___y_4827_ = v___y_4846_;
v___y_4828_ = v___y_4847_;
goto v___jp_4822_;
}
else
{
lean_object* v___x_4849_; 
lean_inc(v___y_4847_);
lean_inc_ref(v___y_4846_);
v___x_4849_ = l_Lean_Core_betaReduce(v_e_4843_, v___y_4846_, v___y_4847_);
if (lean_obj_tag(v___x_4849_) == 0)
{
lean_object* v_a_4850_; 
v_a_4850_ = lean_ctor_get(v___x_4849_, 0);
lean_inc(v_a_4850_);
lean_dec_ref(v___x_4849_);
v___y_4823_ = v___y_4842_;
v_e_4824_ = v_a_4850_;
v___y_4825_ = v___y_4844_;
v___y_4826_ = v___y_4845_;
v___y_4827_ = v___y_4846_;
v___y_4828_ = v___y_4847_;
goto v___jp_4822_;
}
else
{
lean_object* v_a_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4858_; 
lean_dec(v___y_4847_);
lean_dec_ref(v___y_4846_);
lean_dec(v___y_4845_);
lean_dec_ref(v___y_4844_);
lean_dec_ref(v___y_4842_);
lean_dec_ref(v_delab_4746_);
lean_dec(v_optionsPerPos_4745_);
v_a_4851_ = lean_ctor_get(v___x_4849_, 0);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4849_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4853_ = v___x_4849_;
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_a_4851_);
lean_dec(v___x_4849_);
v___x_4853_ = lean_box(0);
v_isShared_4854_ = v_isSharedCheck_4858_;
goto v_resetjp_4852_;
}
v_resetjp_4852_:
{
lean_object* v___x_4856_; 
if (v_isShared_4854_ == 0)
{
v___x_4856_ = v___x_4853_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v_a_4851_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
return v___x_4856_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delabCore___redArg___boxed(lean_object* v_e_5008_, lean_object* v_optionsPerPos_5009_, lean_object* v_delab_5010_, lean_object* v_a_5011_, lean_object* v_a_5012_, lean_object* v_a_5013_, lean_object* v_a_5014_, lean_object* v_a_5015_){
_start:
{
lean_object* v_res_5016_; 
v_res_5016_ = l_Lean_PrettyPrinter_delabCore___redArg(v_e_5008_, v_optionsPerPos_5009_, v_delab_5010_, v_a_5011_, v_a_5012_, v_a_5013_, v_a_5014_);
return v_res_5016_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delabCore(lean_object* v_00_u03b1_5017_, lean_object* v_e_5018_, lean_object* v_optionsPerPos_5019_, lean_object* v_delab_5020_, lean_object* v_a_5021_, lean_object* v_a_5022_, lean_object* v_a_5023_, lean_object* v_a_5024_){
_start:
{
lean_object* v___x_5026_; 
v___x_5026_ = l_Lean_PrettyPrinter_delabCore___redArg(v_e_5018_, v_optionsPerPos_5019_, v_delab_5020_, v_a_5021_, v_a_5022_, v_a_5023_, v_a_5024_);
return v___x_5026_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delabCore___boxed(lean_object* v_00_u03b1_5027_, lean_object* v_e_5028_, lean_object* v_optionsPerPos_5029_, lean_object* v_delab_5030_, lean_object* v_a_5031_, lean_object* v_a_5032_, lean_object* v_a_5033_, lean_object* v_a_5034_, lean_object* v_a_5035_){
_start:
{
lean_object* v_res_5036_; 
v_res_5036_ = l_Lean_PrettyPrinter_delabCore(v_00_u03b1_5027_, v_e_5028_, v_optionsPerPos_5029_, v_delab_5030_, v_a_5031_, v_a_5032_, v_a_5033_, v_a_5034_);
return v_res_5036_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delab(lean_object* v_e_5038_, lean_object* v_optionsPerPos_5039_, lean_object* v_a_5040_, lean_object* v_a_5041_, lean_object* v_a_5042_, lean_object* v_a_5043_){
_start:
{
lean_object* v___x_5045_; lean_object* v___x_5046_; 
v___x_5045_ = ((lean_object*)(l_Lean_PrettyPrinter_delab___closed__0));
v___x_5046_ = l_Lean_PrettyPrinter_delabCore___redArg(v_e_5038_, v_optionsPerPos_5039_, v___x_5045_, v_a_5040_, v_a_5041_, v_a_5042_, v_a_5043_);
if (lean_obj_tag(v___x_5046_) == 0)
{
lean_object* v_a_5047_; lean_object* v___x_5049_; uint8_t v_isShared_5050_; uint8_t v_isSharedCheck_5055_; 
v_a_5047_ = lean_ctor_get(v___x_5046_, 0);
v_isSharedCheck_5055_ = !lean_is_exclusive(v___x_5046_);
if (v_isSharedCheck_5055_ == 0)
{
v___x_5049_ = v___x_5046_;
v_isShared_5050_ = v_isSharedCheck_5055_;
goto v_resetjp_5048_;
}
else
{
lean_inc(v_a_5047_);
lean_dec(v___x_5046_);
v___x_5049_ = lean_box(0);
v_isShared_5050_ = v_isSharedCheck_5055_;
goto v_resetjp_5048_;
}
v_resetjp_5048_:
{
lean_object* v_fst_5051_; lean_object* v___x_5053_; 
v_fst_5051_ = lean_ctor_get(v_a_5047_, 0);
lean_inc(v_fst_5051_);
lean_dec(v_a_5047_);
if (v_isShared_5050_ == 0)
{
lean_ctor_set(v___x_5049_, 0, v_fst_5051_);
v___x_5053_ = v___x_5049_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v_fst_5051_);
v___x_5053_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
return v___x_5053_;
}
}
}
else
{
lean_object* v_a_5056_; lean_object* v___x_5058_; uint8_t v_isShared_5059_; uint8_t v_isSharedCheck_5063_; 
v_a_5056_ = lean_ctor_get(v___x_5046_, 0);
v_isSharedCheck_5063_ = !lean_is_exclusive(v___x_5046_);
if (v_isSharedCheck_5063_ == 0)
{
v___x_5058_ = v___x_5046_;
v_isShared_5059_ = v_isSharedCheck_5063_;
goto v_resetjp_5057_;
}
else
{
lean_inc(v_a_5056_);
lean_dec(v___x_5046_);
v___x_5058_ = lean_box(0);
v_isShared_5059_ = v_isSharedCheck_5063_;
goto v_resetjp_5057_;
}
v_resetjp_5057_:
{
lean_object* v___x_5061_; 
if (v_isShared_5059_ == 0)
{
v___x_5061_ = v___x_5058_;
goto v_reusejp_5060_;
}
else
{
lean_object* v_reuseFailAlloc_5062_; 
v_reuseFailAlloc_5062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5062_, 0, v_a_5056_);
v___x_5061_ = v_reuseFailAlloc_5062_;
goto v_reusejp_5060_;
}
v_reusejp_5060_:
{
return v___x_5061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_delab___boxed(lean_object* v_e_5064_, lean_object* v_optionsPerPos_5065_, lean_object* v_a_5066_, lean_object* v_a_5067_, lean_object* v_a_5068_, lean_object* v_a_5069_, lean_object* v_a_5070_){
_start:
{
lean_object* v_res_5071_; 
v_res_5071_ = l_Lean_PrettyPrinter_delab(v_e_5064_, v_optionsPerPos_5065_, v_a_5066_, v_a_5067_, v_a_5068_, v_a_5069_);
return v_res_5071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5136_; uint8_t v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; 
v___x_5136_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_));
v___x_5137_ = 0;
v___x_5138_ = ((lean_object*)(l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn___closed__24_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_));
v___x_5139_ = l_Lean_registerTraceClass(v___x_5136_, v___x_5137_, v___x_5138_);
if (lean_obj_tag(v___x_5139_) == 0)
{
lean_object* v___x_5140_; lean_object* v___x_5141_; 
lean_dec_ref(v___x_5139_);
v___x_5140_ = ((lean_object*)(l_Lean_PrettyPrinter_delabCore___redArg___closed__7));
v___x_5141_ = l_Lean_registerTraceClass(v___x_5140_, v___x_5137_, v___x_5138_);
return v___x_5141_;
}
else
{
return v___x_5139_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2____boxed(lean_object* v_a_5142_){
_start:
{
lean_object* v_res_5143_; 
v_res_5143_ = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_();
return v_res_5143_;
}
}
lean_object* runtime_initialize_Lean_KeyedDeclsAttribute(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Delaborator_TopDownAnalyze(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_KeyedDeclsAttribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Delaborator_TopDownAnalyze(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_2007592451____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_PrettyPrinter_Delaborator_delabFailureId = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_delabFailureId);
lean_dec_ref(res);
l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM = _init_l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM();
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_instAlternativeDelabM);
res = l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_1489834770____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_PrettyPrinter_Delaborator_delabAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_delabAttribute);
lean_dec_ref(res);
res = l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_PrettyPrinter_Delaborator_delabAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_delabAttribute_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_PrettyPrinter_Delaborator_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_688057830____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute);
lean_dec_ref(res);
res = l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute___regBuiltin_Lean_PrettyPrinter_Delaborator_appUnexpanderAttribute_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_PrettyPrinter_Delaborator_Basic_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_Delaborator_Basic_407216755____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Init_Data_ToString_Name(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_KeyedDeclsAttribute(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Delaborator_TopDownAnalyze(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Name(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_KeyedDeclsAttribute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Delaborator_TopDownAnalyze(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
