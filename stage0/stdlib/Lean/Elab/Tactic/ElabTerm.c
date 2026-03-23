// Lean compiler output
// Module: Lean.Elab.Tactic.ElabTerm
// Imports: public import Lean.Meta.Tactic.Constructor public import Lean.Meta.Tactic.Assert public import Lean.Meta.Tactic.Cleanup public import Lean.Meta.Tactic.Rename public import Lean.Elab.Tactic.Config
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isLetRecAuxMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_constructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_PostponeBehavior_ofBool(uint8_t);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_tagUntaggedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortTacticExceptionId;
lean_object* l_Lean_MVarId_getKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarKind_isNatural(uint8_t);
lean_object* l_Lean_Elab_Tactic_getMainTag___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_popMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_checked_assign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_pushGoal___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
extern lean_object* l_Lean_Meta_instMonadMCtxMetaM;
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
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withoutRecover___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withoutRecover___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_MVarId_rename(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "reuse"};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(46, 30, 230, 20, 64, 162, 204, 1)}};
static const lean_ctor_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(32, 17, 142, 189, 192, 166, 31, 124)}};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "reuse stopped: guard failed at "};
static const lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "attempting to close the goal using"};
static const lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "\nthis is often due occurs-check failure"};
static const lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalExact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_evalExact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalExact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_evalExact___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__3_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__3_value),LEAN_SCALAR_PTR_LITERAL(181, 27, 253, 38, 166, 91, 92, 173)}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "evalExact"};
static const lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(96, 234, 120, 244, 69, 129, 106, 222)}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(71) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(78) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0_value),((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(71) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(71) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3_value),((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_refineCore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_refineCore___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`refine` tactic failed, value"};
static const lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_refineCore___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_refineCore___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "\ndepends on the main goal metavariable `"};
static const lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_refineCore___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_refineCore___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_refineCore___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRefine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "refine"};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 130, 130, 160, 131, 48, 178, 245)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__0_value),LEAN_SCALAR_PTR_LITERAL(240, 66, 166, 159, 104, 233, 32, 227)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "evalRefine"};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 145, 22, 71, 20, 173, 227, 208)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(189) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(192) << 1) | 1)),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1_value),((lean_object*)(((size_t)(50) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(189) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(189) << 1) | 1)),((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3_value),((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4_value),((lean_object*)(((size_t)(41) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRefine_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "refine'"};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 47, 162, 14, 79, 14, 110, 97)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__0_value),LEAN_SCALAR_PTR_LITERAL(138, 29, 86, 242, 162, 231, 137, 148)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "evalRefine'"};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 77, 214, 78, 10, 226, 57, 225)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(197) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1_value),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)(((size_t)(32) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(194) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3_value),((lean_object*)(((size_t)(32) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4_value),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "'specialize' requires a term of the form `h x_1 .. x_n` where `h` appears in the local context"};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalSpecialize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "specialize"};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 64, 50, 7, 167, 240, 212, 2)}};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "evalSpecialize"};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 32, 237, 136, 248, 73, 56, 16)}};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(199) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(212) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0_value),((lean_object*)(((size_t)(31) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(199) << 1) | 1)),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(199) << 1) | 1)),((lean_object*)(((size_t)(49) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3_value),((lean_object*)(((size_t)(35) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4_value),((lean_object*)(((size_t)(49) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_elabTermForApply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Elab_Tactic_elabTermForApply___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabTermForApply___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Unexpected term `"};
static const lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "`; expected single reference to variable"};
static const lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_getFVarIds___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_getFVarIds___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Tactic_getFVarIds___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalApply___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l_Lean_Elab_Tactic_evalApply___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 125, 237, 78, 179, 140, 218, 80)}};
static const lean_object* l_Lean_Elab_Tactic_evalApply___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "evalApply"};
static const lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 174, 163, 187, 9, 67, 156, 69)}};
static const lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(303) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(306) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0_value),((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(303) << 1) | 1)),((lean_object*)(((size_t)(47) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(303) << 1) | 1)),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3_value),((lean_object*)(((size_t)(47) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4_value),((lean_object*)(((size_t)(56) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_evalConstructor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "constructor"};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 188, 57, 91, 27, 124, 155, 13)}};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "evalConstructor"};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(27, 148, 222, 77, 61, 137, 212, 52)}};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(308) << 1) | 1)),((lean_object*)(((size_t)(49) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(312) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0_value),((lean_object*)(((size_t)(49) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1_value),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(308) << 1) | 1)),((lean_object*)(((size_t)(53) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(308) << 1) | 1)),((lean_object*)(((size_t)(68) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3_value),((lean_object*)(((size_t)(53) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4_value),((lean_object*)(((size_t)(68) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalWithReducible___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_evalWithReducible___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "withReducible"};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 44, 223, 192, 8, 197, 146, 83)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "evalWithReducible"};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(52, 233, 43, 192, 30, 109, 64, 100)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(314) << 1) | 1)),((lean_object*)(((size_t)(51) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(315) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0_value),((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1_value),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(314) << 1) | 1)),((lean_object*)(((size_t)(55) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(314) << 1) | 1)),((lean_object*)(((size_t)(72) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3_value),((lean_object*)(((size_t)(55) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4_value),((lean_object*)(((size_t)(72) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "withReducibleAndInstances"};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 231, 54, 217, 251, 49, 216, 49)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "evalWithReducibleAndInstances"};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(66, 161, 97, 73, 21, 6, 2, 115)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(317) << 1) | 1)),((lean_object*)(((size_t)(63) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(318) << 1) | 1)),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0_value),((lean_object*)(((size_t)(63) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1_value),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(317) << 1) | 1)),((lean_object*)(((size_t)(67) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(317) << 1) | 1)),((lean_object*)(((size_t)(96) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3_value),((lean_object*)(((size_t)(67) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4_value),((lean_object*)(((size_t)(96) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "withUnfoldingAll"};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 182, 19, 172, 53, 51, 56, 135)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "evalWithUnfoldingAll"};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(77, 149, 127, 27, 154, 31, 88, 150)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(320) << 1) | 1)),((lean_object*)(((size_t)(54) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(321) << 1) | 1)),((lean_object*)(((size_t)(60) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0_value),((lean_object*)(((size_t)(54) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1_value),((lean_object*)(((size_t)(60) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(320) << 1) | 1)),((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(320) << 1) | 1)),((lean_object*)(((size_t)(78) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3_value),((lean_object*)(((size_t)(58) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4_value),((lean_object*)(((size_t)(78) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "withUnfoldingNone"};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(168, 40, 27, 134, 15, 218, 231, 86)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "evalWithUnfoldingNone"};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(163, 180, 80, 132, 38, 173, 2, 159)}};
static const lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRename___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Failed to find a hypothesis with type"};
static const lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRename___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRename___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rename"};
static const lean_object* l_Lean_Elab_Tactic_evalRename___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 242, 239, 56, 25, 190, 128, 68)}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_evalRename___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_evalRename___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__2_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "evalRename"};
static const lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_evalExact___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 112, 92, 205, 132, 47, 133, 163)}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(344) << 1) | 1)),((lean_object*)(((size_t)(44) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(359) << 1) | 1)),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0_value),((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1_value),((lean_object*)(((size_t)(31) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(344) << 1) | 1)),((lean_object*)(((size_t)(48) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(344) << 1) | 1)),((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3_value),((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4_value),((lean_object*)(((size_t)(58) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(lean_object* v_k_1_, uint8_t v_mayPostpone_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
lean_object* v___x_10_; 
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
lean_inc_ref(v_a_3_);
v___x_10_ = lean_apply_7(v_k_1_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, lean_box(0));
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v_a_11_; uint8_t v___x_12_; uint8_t v___x_13_; lean_object* v___x_14_; 
v_a_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_a_11_);
lean_dec_ref(v___x_10_);
v___x_12_ = l_Lean_Elab_Term_PostponeBehavior_ofBool(v_mayPostpone_2_);
v___x_13_ = 0;
v___x_14_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_12_, v___x_13_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_);
if (lean_obj_tag(v___x_14_) == 0)
{
lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_21_; 
v_isSharedCheck_21_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_21_ == 0)
{
lean_object* v_unused_22_; 
v_unused_22_ = lean_ctor_get(v___x_14_, 0);
lean_dec(v_unused_22_);
v___x_16_ = v___x_14_;
v_isShared_17_ = v_isSharedCheck_21_;
goto v_resetjp_15_;
}
else
{
lean_dec(v___x_14_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_21_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_19_; 
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v_a_11_);
v___x_19_ = v___x_16_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v_a_11_);
v___x_19_ = v_reuseFailAlloc_20_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
return v___x_19_;
}
}
}
else
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_30_; 
lean_dec(v_a_11_);
v_a_23_ = lean_ctor_get(v___x_14_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_30_ == 0)
{
v___x_25_ = v___x_14_;
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_14_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_28_; 
if (v_isShared_26_ == 0)
{
v___x_28_ = v___x_25_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_23_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
}
else
{
lean_dec(v_a_8_);
lean_dec_ref(v_a_7_);
lean_dec(v_a_6_);
lean_dec_ref(v_a_5_);
lean_dec(v_a_4_);
lean_dec_ref(v_a_3_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg___boxed(lean_object* v_k_31_, lean_object* v_mayPostpone_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
uint8_t v_mayPostpone_boxed_40_; lean_object* v_res_41_; 
v_mayPostpone_boxed_40_ = lean_unbox(v_mayPostpone_32_);
v_res_41_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_31_, v_mayPostpone_boxed_40_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go(lean_object* v_00_u03b1_42_, lean_object* v_k_43_, uint8_t v_mayPostpone_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_43_, v_mayPostpone_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___boxed(lean_object* v_00_u03b1_53_, lean_object* v_k_54_, lean_object* v_mayPostpone_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
uint8_t v_mayPostpone_boxed_63_; lean_object* v_res_64_; 
v_mayPostpone_boxed_63_ = lean_unbox(v_mayPostpone_55_);
v_res_64_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go(v_00_u03b1_53_, v_k_54_, v_mayPostpone_boxed_63_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(lean_object* v_a_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_apply_2(v_a_65_, v___y_66_, v___y_67_);
v___x_76_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_75_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg___boxed(lean_object* v_a_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(v_a_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0(lean_object* v_00_u03b1_88_, lean_object* v_a_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(v_a_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___boxed(lean_object* v_00_u03b1_100_, lean_object* v_a_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0(v_00_u03b1_100_, v_a_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
return v_res_111_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(uint8_t v_cond_112_, lean_object* v_____r_113_){
_start:
{
if (v_cond_112_ == 0)
{
uint8_t v___x_114_; 
v___x_114_ = 1;
return v___x_114_;
}
else
{
uint8_t v___x_115_; 
v___x_115_ = 0;
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0___boxed(lean_object* v_cond_116_, lean_object* v_____r_117_){
_start:
{
uint8_t v_cond_boxed_118_; uint8_t v_res_119_; lean_object* v_r_120_; 
v_cond_boxed_118_ = lean_unbox(v_cond_116_);
v_res_119_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(v_cond_boxed_118_, v_____r_117_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1(lean_object* v___f_121_, lean_object* v_x_122_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_123_ = lean_box(0);
v___x_124_ = lean_apply_1(v___f_121_, v___x_123_);
v___x_125_ = lean_unbox(v___x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1___boxed(lean_object* v___f_126_, lean_object* v_x_127_){
_start:
{
uint8_t v_res_128_; lean_object* v_r_129_; 
v_res_128_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1(v___f_126_, v_x_127_);
v_r_129_ = lean_box(v_res_128_);
return v_r_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(uint8_t v_cond_138_, lean_object* v_act_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_options_149_; lean_object* v_declName_x3f_150_; lean_object* v_macroStack_151_; uint8_t v_mayPostpone_152_; uint8_t v_errToSorry_153_; lean_object* v_autoBoundImplicitContext_154_; lean_object* v_autoBoundImplicitForbidden_155_; lean_object* v_sectionVars_156_; lean_object* v_sectionFVars_157_; uint8_t v_implicitLambda_158_; uint8_t v_heedElabAsElim_159_; uint8_t v_isNoncomputableSection_160_; uint8_t v_isMetaSection_161_; uint8_t v_ignoreTCFailures_162_; uint8_t v_inPattern_163_; lean_object* v_tacSnap_x3f_164_; uint8_t v_saveRecAppSyntax_165_; uint8_t v_holesAsSyntheticOpaque_166_; uint8_t v_checkDeprecated_167_; lean_object* v_fixedTermElabs_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_208_; 
v_options_149_ = lean_ctor_get(v___y_146_, 2);
v_declName_x3f_150_ = lean_ctor_get(v___y_142_, 0);
v_macroStack_151_ = lean_ctor_get(v___y_142_, 1);
v_mayPostpone_152_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8);
v_errToSorry_153_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_154_ = lean_ctor_get(v___y_142_, 2);
v_autoBoundImplicitForbidden_155_ = lean_ctor_get(v___y_142_, 3);
v_sectionVars_156_ = lean_ctor_get(v___y_142_, 4);
v_sectionFVars_157_ = lean_ctor_get(v___y_142_, 5);
v_implicitLambda_158_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 2);
v_heedElabAsElim_159_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_160_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 4);
v_isMetaSection_161_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_162_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 6);
v_inPattern_163_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_164_ = lean_ctor_get(v___y_142_, 6);
v_saveRecAppSyntax_165_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_166_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 9);
v_checkDeprecated_167_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 10);
v_fixedTermElabs_168_ = lean_ctor_get(v___y_142_, 7);
v_isSharedCheck_208_ = !lean_is_exclusive(v___y_142_);
if (v_isSharedCheck_208_ == 0)
{
v___x_170_ = v___y_142_;
v_isShared_171_ = v_isSharedCheck_208_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_fixedTermElabs_168_);
lean_inc(v_tacSnap_x3f_164_);
lean_inc(v_sectionFVars_157_);
lean_inc(v_sectionVars_156_);
lean_inc(v_autoBoundImplicitForbidden_155_);
lean_inc(v_autoBoundImplicitContext_154_);
lean_inc(v_macroStack_151_);
lean_inc(v_declName_x3f_150_);
lean_dec(v___y_142_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_208_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___y_173_; uint8_t v___y_179_; 
if (lean_obj_tag(v_tacSnap_x3f_164_) == 0)
{
v___y_173_ = v_tacSnap_x3f_164_;
goto v___jp_172_;
}
else
{
lean_object* v_val_181_; lean_object* v_old_x3f_182_; lean_object* v___x_183_; lean_object* v___f_184_; 
v_val_181_ = lean_ctor_get(v_tacSnap_x3f_164_, 0);
v_old_x3f_182_ = lean_ctor_get(v_val_181_, 0);
v___x_183_ = lean_box(v_cond_138_);
v___f_184_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_184_, 0, v___x_183_);
if (lean_obj_tag(v_old_x3f_182_) == 1)
{
if (v_cond_138_ == 0)
{
lean_dec_ref(v___f_184_);
goto v___jp_185_;
}
else
{
lean_object* v_val_188_; lean_object* v_map_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v_val_188_ = lean_ctor_get(v_old_x3f_182_, 0);
v_map_189_ = lean_ctor_get(v_options_149_, 0);
v___x_190_ = ((lean_object*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3));
v___x_191_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_189_, v___x_190_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_dec_ref(v___f_184_);
goto v___jp_185_;
}
else
{
lean_object* v_val_192_; 
v_val_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_val_192_);
lean_dec_ref(v___x_191_);
if (lean_obj_tag(v_val_192_) == 1)
{
uint8_t v_v_193_; 
v_v_193_ = lean_ctor_get_uint8(v_val_192_, 0);
lean_dec_ref(v_val_192_);
if (v_v_193_ == 0)
{
lean_dec_ref(v___f_184_);
goto v___jp_185_;
}
else
{
lean_object* v_stx_194_; lean_object* v___f_195_; lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v_stx_194_ = lean_ctor_get(v_val_188_, 0);
v___f_195_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_195_, 0, v___f_184_);
v___x_196_ = ((lean_object*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4));
v___x_197_ = lean_box(0);
v___x_198_ = 0;
lean_inc(v_stx_194_);
v___x_199_ = l_Lean_Syntax_formatStx(v_stx_194_, v___x_197_, v___x_198_);
v___x_200_ = l_Std_Format_defWidth;
v___x_201_ = lean_unsigned_to_nat(0u);
v___x_202_ = l_Std_Format_pretty(v___x_199_, v___x_200_, v___x_201_, v___x_201_);
v___x_203_ = lean_string_append(v___x_196_, v___x_202_);
lean_dec_ref(v___x_202_);
v___x_204_ = lean_dbg_trace(v___x_203_, v___f_195_);
v___x_205_ = lean_unbox(v___x_204_);
lean_dec(v___x_204_);
v___y_179_ = v___x_205_;
goto v___jp_178_;
}
}
else
{
lean_dec(v_val_192_);
lean_dec_ref(v___f_184_);
goto v___jp_185_;
}
}
}
}
else
{
lean_object* v___x_206_; uint8_t v___x_207_; 
lean_dec_ref(v___f_184_);
v___x_206_ = lean_box(0);
v___x_207_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(v_cond_138_, v___x_206_);
v___y_179_ = v___x_207_;
goto v___jp_178_;
}
v___jp_185_:
{
lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = lean_box(0);
v___x_187_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(v_cond_138_, v___x_186_);
v___y_179_ = v___x_187_;
goto v___jp_178_;
}
}
v___jp_172_:
{
lean_object* v___x_175_; 
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 6, v___y_173_);
v___x_175_ = v___x_170_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_declName_x3f_150_);
lean_ctor_set(v_reuseFailAlloc_177_, 1, v_macroStack_151_);
lean_ctor_set(v_reuseFailAlloc_177_, 2, v_autoBoundImplicitContext_154_);
lean_ctor_set(v_reuseFailAlloc_177_, 3, v_autoBoundImplicitForbidden_155_);
lean_ctor_set(v_reuseFailAlloc_177_, 4, v_sectionVars_156_);
lean_ctor_set(v_reuseFailAlloc_177_, 5, v_sectionFVars_157_);
lean_ctor_set(v_reuseFailAlloc_177_, 6, v___y_173_);
lean_ctor_set(v_reuseFailAlloc_177_, 7, v_fixedTermElabs_168_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8, v_mayPostpone_152_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8 + 1, v_errToSorry_153_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8 + 2, v_implicitLambda_158_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8 + 3, v_heedElabAsElim_159_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8 + 4, v_isNoncomputableSection_160_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8 + 5, v_isMetaSection_161_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8 + 6, v_ignoreTCFailures_162_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8 + 7, v_inPattern_163_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_165_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_166_);
lean_ctor_set_uint8(v_reuseFailAlloc_177_, sizeof(void*)*8 + 10, v_checkDeprecated_167_);
v___x_175_ = v_reuseFailAlloc_177_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_176_; 
v___x_176_ = lean_apply_9(v_act_139_, v___y_140_, v___y_141_, v___x_175_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, lean_box(0));
return v___x_176_;
}
}
v___jp_178_:
{
if (v___y_179_ == 0)
{
lean_object* v___x_180_; 
lean_dec(v_tacSnap_x3f_164_);
v___x_180_ = lean_box(0);
v___y_173_ = v___x_180_;
goto v___jp_172_;
}
else
{
v___y_173_ = v_tacSnap_x3f_164_;
goto v___jp_172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___boxed(lean_object* v_cond_209_, lean_object* v_act_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_){
_start:
{
uint8_t v_cond_boxed_220_; lean_object* v_res_221_; 
v_cond_boxed_220_ = lean_unbox(v_cond_209_);
v_res_221_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(v_cond_boxed_220_, v_act_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1(lean_object* v_00_u03b1_222_, uint8_t v_cond_223_, lean_object* v_act_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(v_cond_223_, v_act_224_, v___y_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___boxed(lean_object* v_00_u03b1_235_, lean_object* v_cond_236_, lean_object* v_act_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
uint8_t v_cond_boxed_247_; lean_object* v_res_248_; 
v_cond_boxed_247_ = lean_unbox(v_cond_236_);
v_res_248_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1(v_00_u03b1_235_, v_cond_boxed_247_, v_act_237_, v___y_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0(lean_object* v_k_249_, uint8_t v_mayPostpone_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_249_, v_mayPostpone_250_, v___y_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0___boxed(lean_object* v_k_261_, lean_object* v_mayPostpone_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
uint8_t v_mayPostpone_boxed_272_; lean_object* v_res_273_; 
v_mayPostpone_boxed_272_ = lean_unbox(v_mayPostpone_262_);
v_res_273_ = l_Lean_Elab_Tactic_runTermElab___redArg___lam__0(v_k_261_, v_mayPostpone_boxed_272_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1(lean_object* v___f_274_, lean_object* v_k_275_, uint8_t v_mayPostpone_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
uint8_t v_recover_286_; 
v_recover_286_ = lean_ctor_get_uint8(v___y_277_, sizeof(void*)*1);
if (v_recover_286_ == 0)
{
lean_object* v___x_287_; 
lean_dec_ref(v_k_275_);
v___x_287_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(v___f_274_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
return v___x_287_;
}
else
{
lean_object* v___x_288_; 
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec_ref(v___f_274_);
v___x_288_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_275_, v_mayPostpone_276_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
return v___x_288_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1___boxed(lean_object* v___f_289_, lean_object* v_k_290_, lean_object* v_mayPostpone_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_){
_start:
{
uint8_t v_mayPostpone_boxed_301_; lean_object* v_res_302_; 
v_mayPostpone_boxed_301_ = lean_unbox(v_mayPostpone_291_);
v_res_302_ = l_Lean_Elab_Tactic_runTermElab___redArg___lam__1(v___f_289_, v_k_290_, v_mayPostpone_boxed_301_, v___y_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_, v___y_297_, v___y_298_, v___y_299_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg(lean_object* v_k_303_, uint8_t v_mayPostpone_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v___x_314_; lean_object* v___f_315_; lean_object* v___x_316_; lean_object* v___f_317_; uint8_t v___x_318_; lean_object* v___x_319_; 
v___x_314_ = lean_box(v_mayPostpone_304_);
lean_inc_ref(v_k_303_);
v___f_315_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_315_, 0, v_k_303_);
lean_closure_set(v___f_315_, 1, v___x_314_);
v___x_316_ = lean_box(v_mayPostpone_304_);
v___f_317_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___redArg___lam__1___boxed), 12, 3);
lean_closure_set(v___f_317_, 0, v___f_315_);
lean_closure_set(v___f_317_, 1, v_k_303_);
lean_closure_set(v___f_317_, 2, v___x_316_);
v___x_318_ = 1;
v___x_319_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(v___x_318_, v___f_317_, v_a_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___boxed(lean_object* v_k_320_, lean_object* v_mayPostpone_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_){
_start:
{
uint8_t v_mayPostpone_boxed_331_; lean_object* v_res_332_; 
v_mayPostpone_boxed_331_ = lean_unbox(v_mayPostpone_321_);
v_res_332_ = l_Lean_Elab_Tactic_runTermElab___redArg(v_k_320_, v_mayPostpone_boxed_331_, v_a_322_, v_a_323_, v_a_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab(lean_object* v_00_u03b1_333_, lean_object* v_k_334_, uint8_t v_mayPostpone_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l_Lean_Elab_Tactic_runTermElab___redArg(v_k_334_, v_mayPostpone_335_, v_a_336_, v_a_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___boxed(lean_object* v_00_u03b1_346_, lean_object* v_k_347_, lean_object* v_mayPostpone_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
uint8_t v_mayPostpone_boxed_358_; lean_object* v_res_359_; 
v_mayPostpone_boxed_358_ = lean_unbox(v_mayPostpone_348_);
v_res_359_ = l_Lean_Elab_Tactic_runTermElab(v_00_u03b1_346_, v_k_347_, v_mayPostpone_boxed_358_, v_a_349_, v_a_350_, v_a_351_, v_a_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(lean_object* v_e_360_, lean_object* v___y_361_){
_start:
{
uint8_t v___x_363_; 
v___x_363_ = l_Lean_Expr_hasMVar(v_e_360_);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; 
v___x_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_364_, 0, v_e_360_);
return v___x_364_;
}
else
{
lean_object* v___x_365_; lean_object* v_mctx_366_; lean_object* v___x_367_; lean_object* v_fst_368_; lean_object* v_snd_369_; lean_object* v___x_370_; lean_object* v_cache_371_; lean_object* v_zetaDeltaFVarIds_372_; lean_object* v_postponed_373_; lean_object* v_diag_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_383_; 
v___x_365_ = lean_st_ref_get(v___y_361_);
v_mctx_366_ = lean_ctor_get(v___x_365_, 0);
lean_inc_ref(v_mctx_366_);
lean_dec(v___x_365_);
v___x_367_ = l_Lean_instantiateMVarsCore(v_mctx_366_, v_e_360_);
v_fst_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_fst_368_);
v_snd_369_ = lean_ctor_get(v___x_367_, 1);
lean_inc(v_snd_369_);
lean_dec_ref(v___x_367_);
v___x_370_ = lean_st_ref_take(v___y_361_);
v_cache_371_ = lean_ctor_get(v___x_370_, 1);
v_zetaDeltaFVarIds_372_ = lean_ctor_get(v___x_370_, 2);
v_postponed_373_ = lean_ctor_get(v___x_370_, 3);
v_diag_374_ = lean_ctor_get(v___x_370_, 4);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_383_ == 0)
{
lean_object* v_unused_384_; 
v_unused_384_ = lean_ctor_get(v___x_370_, 0);
lean_dec(v_unused_384_);
v___x_376_ = v___x_370_;
v_isShared_377_ = v_isSharedCheck_383_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_diag_374_);
lean_inc(v_postponed_373_);
lean_inc(v_zetaDeltaFVarIds_372_);
lean_inc(v_cache_371_);
lean_dec(v___x_370_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_383_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
lean_object* v___x_379_; 
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 0, v_snd_369_);
v___x_379_ = v___x_376_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_snd_369_);
lean_ctor_set(v_reuseFailAlloc_382_, 1, v_cache_371_);
lean_ctor_set(v_reuseFailAlloc_382_, 2, v_zetaDeltaFVarIds_372_);
lean_ctor_set(v_reuseFailAlloc_382_, 3, v_postponed_373_);
lean_ctor_set(v_reuseFailAlloc_382_, 4, v_diag_374_);
v___x_379_ = v_reuseFailAlloc_382_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_st_ref_set(v___y_361_, v___x_379_);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v_fst_368_);
return v___x_381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg___boxed(lean_object* v_e_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_e_385_, v___y_386_);
lean_dec(v___y_386_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0(lean_object* v_e_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_e_389_, v___y_395_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___boxed(lean_object* v_e_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0(v_e_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_);
lean_dec(v___y_408_);
lean_dec_ref(v___y_407_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object* v_stx_411_, lean_object* v_expectedType_x3f_412_, uint8_t v_mayPostpone_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_){
_start:
{
uint8_t v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v_fileName_427_; lean_object* v_fileMap_428_; lean_object* v_options_429_; lean_object* v_currRecDepth_430_; lean_object* v_maxRecDepth_431_; lean_object* v_ref_432_; lean_object* v_currNamespace_433_; lean_object* v_openDecls_434_; lean_object* v_initHeartbeats_435_; lean_object* v_maxHeartbeats_436_; lean_object* v_quotContext_437_; lean_object* v_currMacroScope_438_; uint8_t v_diag_439_; lean_object* v_cancelTk_x3f_440_; uint8_t v_suppressElabErrors_441_; lean_object* v_inheritedTraceOptions_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_453_; 
v___x_423_ = 1;
v___x_424_ = lean_box(v___x_423_);
v___x_425_ = lean_box(v___x_423_);
lean_inc(v_stx_411_);
v___x_426_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_426_, 0, v_stx_411_);
lean_closure_set(v___x_426_, 1, v_expectedType_x3f_412_);
lean_closure_set(v___x_426_, 2, v___x_424_);
lean_closure_set(v___x_426_, 3, v___x_425_);
v_fileName_427_ = lean_ctor_get(v_a_420_, 0);
v_fileMap_428_ = lean_ctor_get(v_a_420_, 1);
v_options_429_ = lean_ctor_get(v_a_420_, 2);
v_currRecDepth_430_ = lean_ctor_get(v_a_420_, 3);
v_maxRecDepth_431_ = lean_ctor_get(v_a_420_, 4);
v_ref_432_ = lean_ctor_get(v_a_420_, 5);
v_currNamespace_433_ = lean_ctor_get(v_a_420_, 6);
v_openDecls_434_ = lean_ctor_get(v_a_420_, 7);
v_initHeartbeats_435_ = lean_ctor_get(v_a_420_, 8);
v_maxHeartbeats_436_ = lean_ctor_get(v_a_420_, 9);
v_quotContext_437_ = lean_ctor_get(v_a_420_, 10);
v_currMacroScope_438_ = lean_ctor_get(v_a_420_, 11);
v_diag_439_ = lean_ctor_get_uint8(v_a_420_, sizeof(void*)*14);
v_cancelTk_x3f_440_ = lean_ctor_get(v_a_420_, 12);
v_suppressElabErrors_441_ = lean_ctor_get_uint8(v_a_420_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_442_ = lean_ctor_get(v_a_420_, 13);
v_isSharedCheck_453_ = !lean_is_exclusive(v_a_420_);
if (v_isSharedCheck_453_ == 0)
{
v___x_444_ = v_a_420_;
v_isShared_445_ = v_isSharedCheck_453_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_inheritedTraceOptions_442_);
lean_inc(v_cancelTk_x3f_440_);
lean_inc(v_currMacroScope_438_);
lean_inc(v_quotContext_437_);
lean_inc(v_maxHeartbeats_436_);
lean_inc(v_initHeartbeats_435_);
lean_inc(v_openDecls_434_);
lean_inc(v_currNamespace_433_);
lean_inc(v_ref_432_);
lean_inc(v_maxRecDepth_431_);
lean_inc(v_currRecDepth_430_);
lean_inc(v_options_429_);
lean_inc(v_fileMap_428_);
lean_inc(v_fileName_427_);
lean_dec(v_a_420_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_453_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v_ref_446_; lean_object* v___x_448_; 
v_ref_446_ = l_Lean_replaceRef(v_stx_411_, v_ref_432_);
lean_dec(v_ref_432_);
lean_dec(v_stx_411_);
if (v_isShared_445_ == 0)
{
lean_ctor_set(v___x_444_, 5, v_ref_446_);
v___x_448_ = v___x_444_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_fileName_427_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_fileMap_428_);
lean_ctor_set(v_reuseFailAlloc_452_, 2, v_options_429_);
lean_ctor_set(v_reuseFailAlloc_452_, 3, v_currRecDepth_430_);
lean_ctor_set(v_reuseFailAlloc_452_, 4, v_maxRecDepth_431_);
lean_ctor_set(v_reuseFailAlloc_452_, 5, v_ref_446_);
lean_ctor_set(v_reuseFailAlloc_452_, 6, v_currNamespace_433_);
lean_ctor_set(v_reuseFailAlloc_452_, 7, v_openDecls_434_);
lean_ctor_set(v_reuseFailAlloc_452_, 8, v_initHeartbeats_435_);
lean_ctor_set(v_reuseFailAlloc_452_, 9, v_maxHeartbeats_436_);
lean_ctor_set(v_reuseFailAlloc_452_, 10, v_quotContext_437_);
lean_ctor_set(v_reuseFailAlloc_452_, 11, v_currMacroScope_438_);
lean_ctor_set(v_reuseFailAlloc_452_, 12, v_cancelTk_x3f_440_);
lean_ctor_set(v_reuseFailAlloc_452_, 13, v_inheritedTraceOptions_442_);
lean_ctor_set_uint8(v_reuseFailAlloc_452_, sizeof(void*)*14, v_diag_439_);
lean_ctor_set_uint8(v_reuseFailAlloc_452_, sizeof(void*)*14 + 1, v_suppressElabErrors_441_);
v___x_448_ = v_reuseFailAlloc_452_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
lean_object* v___x_449_; 
lean_inc(v_a_419_);
v___x_449_ = l_Lean_Elab_Tactic_runTermElab___redArg(v___x_426_, v_mayPostpone_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v___x_448_, v_a_421_);
if (lean_obj_tag(v___x_449_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_451_; 
v_a_450_ = lean_ctor_get(v___x_449_, 0);
lean_inc(v_a_450_);
lean_dec_ref(v___x_449_);
v___x_451_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_a_450_, v_a_419_);
lean_dec(v_a_419_);
return v___x_451_;
}
else
{
lean_dec(v_a_419_);
return v___x_449_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm___boxed(lean_object* v_stx_454_, lean_object* v_expectedType_x3f_455_, lean_object* v_mayPostpone_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_){
_start:
{
uint8_t v_mayPostpone_boxed_466_; lean_object* v_res_467_; 
v_mayPostpone_boxed_466_ = lean_unbox(v_mayPostpone_456_);
v_res_467_ = l_Lean_Elab_Tactic_elabTerm(v_stx_454_, v_expectedType_x3f_455_, v_mayPostpone_boxed_466_, v_a_457_, v_a_458_, v_a_459_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType(lean_object* v_stx_468_, lean_object* v_expectedType_x3f_469_, uint8_t v_mayPostpone_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_){
_start:
{
lean_object* v___x_480_; 
lean_inc(v_a_478_);
lean_inc_ref(v_a_477_);
lean_inc(v_a_476_);
lean_inc_ref(v_a_475_);
lean_inc(v_expectedType_x3f_469_);
v___x_480_ = l_Lean_Elab_Tactic_elabTerm(v_stx_468_, v_expectedType_x3f_469_, v_mayPostpone_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_);
if (lean_obj_tag(v___x_480_) == 0)
{
if (lean_obj_tag(v_expectedType_x3f_469_) == 0)
{
lean_dec(v_a_478_);
lean_dec_ref(v_a_477_);
lean_dec(v_a_476_);
lean_dec_ref(v_a_475_);
return v___x_480_;
}
else
{
lean_object* v_a_481_; lean_object* v_val_482_; lean_object* v___x_483_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_a_481_);
lean_dec_ref(v___x_480_);
v_val_482_ = lean_ctor_get(v_expectedType_x3f_469_, 0);
lean_inc(v_val_482_);
lean_dec_ref(v_expectedType_x3f_469_);
lean_inc(v_a_478_);
lean_inc_ref(v_a_477_);
lean_inc(v_a_476_);
lean_inc_ref(v_a_475_);
lean_inc(v_a_481_);
v___x_483_ = lean_infer_type(v_a_481_, v_a_475_, v_a_476_, v_a_477_, v_a_478_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_564_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_564_ == 0)
{
v___x_486_ = v___x_483_;
v_isShared_487_ = v_isSharedCheck_564_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_564_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
uint8_t v_a_489_; lean_object* v___x_511_; uint8_t v_foApprox_512_; uint8_t v_ctxApprox_513_; uint8_t v_quasiPatternApprox_514_; uint8_t v_constApprox_515_; uint8_t v_isDefEqStuckEx_516_; uint8_t v_unificationHints_517_; uint8_t v_proofIrrelevance_518_; uint8_t v_offsetCnstrs_519_; uint8_t v_transparency_520_; uint8_t v_etaStruct_521_; uint8_t v_univApprox_522_; uint8_t v_iota_523_; uint8_t v_beta_524_; uint8_t v_proj_525_; uint8_t v_zeta_526_; uint8_t v_zetaDelta_527_; uint8_t v_zetaUnused_528_; uint8_t v_zetaHave_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_563_; 
v___x_511_ = l_Lean_Meta_Context_config(v_a_475_);
v_foApprox_512_ = lean_ctor_get_uint8(v___x_511_, 0);
v_ctxApprox_513_ = lean_ctor_get_uint8(v___x_511_, 1);
v_quasiPatternApprox_514_ = lean_ctor_get_uint8(v___x_511_, 2);
v_constApprox_515_ = lean_ctor_get_uint8(v___x_511_, 3);
v_isDefEqStuckEx_516_ = lean_ctor_get_uint8(v___x_511_, 4);
v_unificationHints_517_ = lean_ctor_get_uint8(v___x_511_, 5);
v_proofIrrelevance_518_ = lean_ctor_get_uint8(v___x_511_, 6);
v_offsetCnstrs_519_ = lean_ctor_get_uint8(v___x_511_, 8);
v_transparency_520_ = lean_ctor_get_uint8(v___x_511_, 9);
v_etaStruct_521_ = lean_ctor_get_uint8(v___x_511_, 10);
v_univApprox_522_ = lean_ctor_get_uint8(v___x_511_, 11);
v_iota_523_ = lean_ctor_get_uint8(v___x_511_, 12);
v_beta_524_ = lean_ctor_get_uint8(v___x_511_, 13);
v_proj_525_ = lean_ctor_get_uint8(v___x_511_, 14);
v_zeta_526_ = lean_ctor_get_uint8(v___x_511_, 15);
v_zetaDelta_527_ = lean_ctor_get_uint8(v___x_511_, 16);
v_zetaUnused_528_ = lean_ctor_get_uint8(v___x_511_, 17);
v_zetaHave_529_ = lean_ctor_get_uint8(v___x_511_, 18);
v_isSharedCheck_563_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_563_ == 0)
{
v___x_531_ = v___x_511_;
v_isShared_532_ = v_isSharedCheck_563_;
goto v_resetjp_530_;
}
else
{
lean_dec(v___x_511_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_563_;
goto v_resetjp_530_;
}
v___jp_488_:
{
if (v_a_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_491_; 
lean_del_object(v___x_486_);
v___x_490_ = lean_box(0);
lean_inc(v_a_481_);
v___x_491_ = l_Lean_Elab_Term_throwTypeMismatchError___redArg(v___x_490_, v_val_482_, v_a_484_, v_a_481_, v___x_490_, v_a_475_, v_a_476_, v_a_477_, v_a_478_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_498_ == 0)
{
lean_object* v_unused_499_; 
v_unused_499_ = lean_ctor_get(v___x_491_, 0);
lean_dec(v_unused_499_);
v___x_493_ = v___x_491_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_dec(v___x_491_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 0, v_a_481_);
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_481_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
else
{
lean_object* v_a_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_507_; 
lean_dec(v_a_481_);
v_a_500_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_507_ == 0)
{
v___x_502_ = v___x_491_;
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_a_500_);
lean_dec(v___x_491_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_507_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_505_; 
if (v_isShared_503_ == 0)
{
v___x_505_ = v___x_502_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_a_500_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
else
{
lean_object* v___x_509_; 
lean_dec(v_a_484_);
lean_dec(v_val_482_);
lean_dec(v_a_478_);
lean_dec_ref(v_a_477_);
lean_dec(v_a_476_);
lean_dec_ref(v_a_475_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 0, v_a_481_);
v___x_509_ = v___x_486_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_481_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
v_resetjp_530_:
{
uint8_t v_trackZetaDelta_533_; lean_object* v_zetaDeltaSet_534_; lean_object* v_lctx_535_; lean_object* v_localInstances_536_; lean_object* v_defEqCtx_x3f_537_; lean_object* v_synthPendingDepth_538_; lean_object* v_canUnfold_x3f_539_; uint8_t v_univApprox_540_; uint8_t v_inTypeClassResolution_541_; uint8_t v_cacheInferType_542_; uint8_t v___x_543_; lean_object* v___x_545_; 
v_trackZetaDelta_533_ = lean_ctor_get_uint8(v_a_475_, sizeof(void*)*7);
v_zetaDeltaSet_534_ = lean_ctor_get(v_a_475_, 1);
v_lctx_535_ = lean_ctor_get(v_a_475_, 2);
v_localInstances_536_ = lean_ctor_get(v_a_475_, 3);
v_defEqCtx_x3f_537_ = lean_ctor_get(v_a_475_, 4);
v_synthPendingDepth_538_ = lean_ctor_get(v_a_475_, 5);
v_canUnfold_x3f_539_ = lean_ctor_get(v_a_475_, 6);
v_univApprox_540_ = lean_ctor_get_uint8(v_a_475_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_541_ = lean_ctor_get_uint8(v_a_475_, sizeof(void*)*7 + 2);
v_cacheInferType_542_ = lean_ctor_get_uint8(v_a_475_, sizeof(void*)*7 + 3);
v___x_543_ = 1;
if (v_isShared_532_ == 0)
{
v___x_545_ = v___x_531_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 0, v_foApprox_512_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 1, v_ctxApprox_513_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 2, v_quasiPatternApprox_514_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 3, v_constApprox_515_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 4, v_isDefEqStuckEx_516_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 5, v_unificationHints_517_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 6, v_proofIrrelevance_518_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 8, v_offsetCnstrs_519_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 9, v_transparency_520_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 10, v_etaStruct_521_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 11, v_univApprox_522_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 12, v_iota_523_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 13, v_beta_524_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 14, v_proj_525_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 15, v_zeta_526_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 16, v_zetaDelta_527_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 17, v_zetaUnused_528_);
lean_ctor_set_uint8(v_reuseFailAlloc_562_, 18, v_zetaHave_529_);
v___x_545_ = v_reuseFailAlloc_562_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
uint64_t v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
lean_ctor_set_uint8(v___x_545_, 7, v___x_543_);
v___x_546_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_545_);
v___x_547_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_547_, 0, v___x_545_);
lean_ctor_set_uint64(v___x_547_, sizeof(void*)*1, v___x_546_);
lean_inc(v_canUnfold_x3f_539_);
lean_inc(v_synthPendingDepth_538_);
lean_inc(v_defEqCtx_x3f_537_);
lean_inc_ref(v_localInstances_536_);
lean_inc_ref(v_lctx_535_);
lean_inc(v_zetaDeltaSet_534_);
v___x_548_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_548_, 0, v___x_547_);
lean_ctor_set(v___x_548_, 1, v_zetaDeltaSet_534_);
lean_ctor_set(v___x_548_, 2, v_lctx_535_);
lean_ctor_set(v___x_548_, 3, v_localInstances_536_);
lean_ctor_set(v___x_548_, 4, v_defEqCtx_x3f_537_);
lean_ctor_set(v___x_548_, 5, v_synthPendingDepth_538_);
lean_ctor_set(v___x_548_, 6, v_canUnfold_x3f_539_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*7, v_trackZetaDelta_533_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*7 + 1, v_univApprox_540_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*7 + 2, v_inTypeClassResolution_541_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*7 + 3, v_cacheInferType_542_);
lean_inc(v_a_478_);
lean_inc_ref(v_a_477_);
lean_inc(v_a_476_);
lean_inc(v_val_482_);
lean_inc(v_a_484_);
v___x_549_ = l_Lean_Meta_isExprDefEq(v_a_484_, v_val_482_, v___x_548_, v_a_476_, v_a_477_, v_a_478_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; uint8_t v___x_551_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
lean_inc(v_a_550_);
lean_dec_ref(v___x_549_);
v___x_551_ = lean_unbox(v_a_550_);
lean_dec(v_a_550_);
v_a_489_ = v___x_551_;
goto v___jp_488_;
}
else
{
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_552_; uint8_t v___x_553_; 
v_a_552_ = lean_ctor_get(v___x_549_, 0);
lean_inc(v_a_552_);
lean_dec_ref(v___x_549_);
v___x_553_ = lean_unbox(v_a_552_);
lean_dec(v_a_552_);
v_a_489_ = v___x_553_;
goto v___jp_488_;
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_del_object(v___x_486_);
lean_dec(v_a_484_);
lean_dec(v_val_482_);
lean_dec(v_a_481_);
lean_dec(v_a_478_);
lean_dec_ref(v_a_477_);
lean_dec(v_a_476_);
lean_dec_ref(v_a_475_);
v_a_554_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_549_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_549_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
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
lean_dec(v_val_482_);
lean_dec(v_a_481_);
lean_dec(v_a_478_);
lean_dec_ref(v_a_477_);
lean_dec(v_a_476_);
lean_dec_ref(v_a_475_);
return v___x_483_;
}
}
}
else
{
lean_dec(v_a_478_);
lean_dec_ref(v_a_477_);
lean_dec(v_a_476_);
lean_dec_ref(v_a_475_);
lean_dec(v_expectedType_x3f_469_);
return v___x_480_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType___boxed(lean_object* v_stx_565_, lean_object* v_expectedType_x3f_566_, lean_object* v_mayPostpone_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_){
_start:
{
uint8_t v_mayPostpone_boxed_577_; lean_object* v_res_578_; 
v_mayPostpone_boxed_577_ = lean_unbox(v_mayPostpone_567_);
v_res_578_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v_stx_565_, v_expectedType_x3f_566_, v_mayPostpone_boxed_577_, v_a_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_);
return v_res_578_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_579_ = lean_box(0);
v___x_580_ = l_Lean_Elab_abortTacticExceptionId;
v___x_581_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
lean_ctor_set(v___x_581_, 1, v___x_579_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg(){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = lean_obj_once(&l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0, &l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0);
v___x_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___boxed(lean_object* v___y_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0(lean_object* v_00_u03b1_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___boxed(lean_object* v_00_u03b1_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0(v_00_u03b1_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_602_);
lean_dec_ref(v___y_601_);
lean_dec(v___y_600_);
lean_dec_ref(v___y_599_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort(lean_object* v_mvarIds_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = lean_box(0);
v___x_620_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_mvarIds_609_, v___x_619_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_631_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_631_ == 0)
{
v___x_623_ = v___x_620_;
v_isShared_624_ = v_isSharedCheck_631_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_620_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_631_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
uint8_t v___x_625_; 
v___x_625_ = lean_unbox(v_a_621_);
lean_dec(v_a_621_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_626_ = lean_box(0);
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v___x_626_);
v___x_628_ = v___x_623_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_626_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
else
{
lean_object* v___x_630_; 
lean_del_object(v___x_623_);
v___x_630_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
return v___x_630_;
}
}
}
else
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
v_a_632_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_620_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_620_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort___boxed(lean_object* v_mvarIds_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_mvarIds_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_);
lean_dec(v_a_642_);
lean_dec_ref(v_a_641_);
lean_dec_ref(v_mvarIds_640_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(lean_object* v___x_651_, lean_object* v_mvarCounterSaved_652_, lean_object* v_as_653_, size_t v_i_654_, size_t v_stop_655_, lean_object* v_b_656_){
_start:
{
lean_object* v___y_658_; uint8_t v___x_662_; 
v___x_662_ = lean_usize_dec_eq(v_i_654_, v_stop_655_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v_index_665_; uint8_t v___x_666_; 
v___x_663_ = lean_array_uget_borrowed(v_as_653_, v_i_654_);
lean_inc(v___x_663_);
lean_inc_ref(v___x_651_);
v___x_664_ = l_Lean_MetavarContext_getDecl(v___x_651_, v___x_663_);
v_index_665_ = lean_ctor_get(v___x_664_, 6);
lean_inc(v_index_665_);
lean_dec_ref(v___x_664_);
v___x_666_ = lean_nat_dec_le(v_mvarCounterSaved_652_, v_index_665_);
lean_dec(v_index_665_);
if (v___x_666_ == 0)
{
v___y_658_ = v_b_656_;
goto v___jp_657_;
}
else
{
lean_object* v___x_667_; 
lean_inc(v___x_663_);
v___x_667_ = lean_array_push(v_b_656_, v___x_663_);
v___y_658_ = v___x_667_;
goto v___jp_657_;
}
}
else
{
lean_dec_ref(v___x_651_);
return v_b_656_;
}
v___jp_657_:
{
size_t v___x_659_; size_t v___x_660_; 
v___x_659_ = ((size_t)1ULL);
v___x_660_ = lean_usize_add(v_i_654_, v___x_659_);
v_i_654_ = v___x_660_;
v_b_656_ = v___y_658_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0___boxed(lean_object* v___x_668_, lean_object* v_mvarCounterSaved_669_, lean_object* v_as_670_, lean_object* v_i_671_, lean_object* v_stop_672_, lean_object* v_b_673_){
_start:
{
size_t v_i_boxed_674_; size_t v_stop_boxed_675_; lean_object* v_res_676_; 
v_i_boxed_674_ = lean_unbox_usize(v_i_671_);
lean_dec(v_i_671_);
v_stop_boxed_675_ = lean_unbox_usize(v_stop_672_);
lean_dec(v_stop_672_);
v_res_676_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(v___x_668_, v_mvarCounterSaved_669_, v_as_670_, v_i_boxed_674_, v_stop_boxed_675_, v_b_673_);
lean_dec_ref(v_as_670_);
lean_dec(v_mvarCounterSaved_669_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg(lean_object* v_mvarIds_679_, lean_object* v_mvarCounterSaved_680_, lean_object* v_a_681_){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_683_ = lean_st_ref_get(v_a_681_);
v___x_684_ = lean_unsigned_to_nat(0u);
v___x_685_ = lean_array_get_size(v_mvarIds_679_);
v___x_686_ = ((lean_object*)(l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0));
v___x_687_ = lean_nat_dec_lt(v___x_684_, v___x_685_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; 
lean_dec(v___x_683_);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v___x_686_);
return v___x_688_;
}
else
{
lean_object* v_mctx_689_; uint8_t v___x_690_; 
v_mctx_689_ = lean_ctor_get(v___x_683_, 0);
lean_inc_ref(v_mctx_689_);
lean_dec(v___x_683_);
v___x_690_ = lean_nat_dec_le(v___x_685_, v___x_685_);
if (v___x_690_ == 0)
{
if (v___x_687_ == 0)
{
lean_object* v___x_691_; 
lean_dec_ref(v_mctx_689_);
v___x_691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_691_, 0, v___x_686_);
return v___x_691_;
}
else
{
size_t v___x_692_; size_t v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_692_ = ((size_t)0ULL);
v___x_693_ = lean_usize_of_nat(v___x_685_);
v___x_694_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(v_mctx_689_, v_mvarCounterSaved_680_, v_mvarIds_679_, v___x_692_, v___x_693_, v___x_686_);
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
return v___x_695_;
}
}
else
{
size_t v___x_696_; size_t v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_696_ = ((size_t)0ULL);
v___x_697_ = lean_usize_of_nat(v___x_685_);
v___x_698_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(v_mctx_689_, v_mvarCounterSaved_680_, v_mvarIds_679_, v___x_696_, v___x_697_, v___x_686_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg___boxed(lean_object* v_mvarIds_700_, lean_object* v_mvarCounterSaved_701_, lean_object* v_a_702_, lean_object* v_a_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_mvarIds_700_, v_mvarCounterSaved_701_, v_a_702_);
lean_dec(v_a_702_);
lean_dec(v_mvarCounterSaved_701_);
lean_dec_ref(v_mvarIds_700_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars(lean_object* v_mvarIds_705_, lean_object* v_mvarCounterSaved_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_mvarIds_705_, v_mvarCounterSaved_706_, v_a_708_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___boxed(lean_object* v_mvarIds_713_, lean_object* v_mvarCounterSaved_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_Elab_Tactic_filterOldMVars(v_mvarIds_713_, v_mvarCounterSaved_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_);
lean_dec(v_a_718_);
lean_dec_ref(v_a_717_);
lean_dec(v_a_716_);
lean_dec_ref(v_a_715_);
lean_dec(v_mvarCounterSaved_714_);
lean_dec_ref(v_mvarIds_713_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0(lean_object* v_x_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = lean_apply_9(v_x_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_, lean_box(0));
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0___boxed(lean_object* v_x_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0(v_x_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(lean_object* v_mvarId_743_, lean_object* v_x_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v___f_754_; lean_object* v___x_755_; 
v___f_754_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_754_, 0, v_x_744_);
lean_closure_set(v___f_754_, 1, v___y_745_);
lean_closure_set(v___f_754_, 2, v___y_746_);
lean_closure_set(v___f_754_, 3, v___y_747_);
lean_closure_set(v___f_754_, 4, v___y_748_);
v___x_755_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_743_, v___f_754_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
if (lean_obj_tag(v___x_755_) == 0)
{
return v___x_755_;
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
v_a_756_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_755_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_755_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___boxed(lean_object* v_mvarId_764_, lean_object* v_x_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(v_mvarId_764_, v_x_765_, v___y_766_, v___y_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0(lean_object* v_00_u03b1_776_, lean_object* v_mvarId_777_, lean_object* v_x_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(v_mvarId_777_, v_x_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___boxed(lean_object* v_00_u03b1_789_, lean_object* v_mvarId_790_, lean_object* v_x_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0(v_00_u03b1_789_, v_mvarId_790_, v_x_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_);
return v_res_801_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1(void){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_803_ = ((lean_object*)(l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0));
v___x_804_ = l_Lean_stringToMessageData(v___x_803_);
return v___x_804_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3(void){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = ((lean_object*)(l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2));
v___x_807_ = l_Lean_stringToMessageData(v___x_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0(lean_object* v_a_808_, lean_object* v_x_809_, lean_object* v_tacName_810_, uint8_t v_checkNewUnassigned_811_, lean_object* v_mvarCounter_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
lean_object* v___x_822_; 
lean_inc(v_a_808_);
v___x_822_ = l_Lean_MVarId_getType(v_a_808_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_824_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref(v___x_822_);
lean_inc(v_a_808_);
v___x_824_ = l_Lean_MVarId_getTag(v_a_808_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_826_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_a_825_);
lean_dec_ref(v___x_824_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
lean_inc(v___y_816_);
lean_inc_ref(v___y_815_);
lean_inc(v___y_814_);
lean_inc_ref(v___y_813_);
v___x_826_ = lean_apply_11(v_x_809_, v_a_823_, v_a_825_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, lean_box(0));
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v_a_827_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; 
v_a_827_ = lean_ctor_get(v___x_826_, 0);
lean_inc(v_a_827_);
lean_dec_ref(v___x_826_);
if (v_checkNewUnassigned_811_ == 0)
{
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
v___y_829_ = v___y_817_;
v___y_830_ = v___y_818_;
v___y_831_ = v___y_819_;
v___y_832_ = v___y_820_;
goto v___jp_828_;
}
else
{
lean_object* v___x_859_; 
lean_inc(v_a_827_);
v___x_859_ = l_Lean_Meta_getMVars(v_a_827_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_861_; lean_object* v_a_862_; lean_object* v___x_863_; 
v_a_860_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_a_860_);
lean_dec_ref(v___x_859_);
v___x_861_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_a_860_, v_mvarCounter_812_, v___y_818_);
lean_dec(v_a_860_);
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_862_);
lean_dec_ref(v___x_861_);
lean_inc(v___y_820_);
lean_inc_ref(v___y_819_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
v___x_863_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_a_862_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v_a_862_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_dec_ref(v___x_863_);
v___y_829_ = v___y_817_;
v___y_830_ = v___y_818_;
v___y_831_ = v___y_819_;
v___y_832_ = v___y_820_;
goto v___jp_828_;
}
else
{
lean_dec(v_a_827_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v_tacName_810_);
lean_dec(v_a_808_);
return v___x_863_;
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
lean_dec(v_a_827_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v_tacName_810_);
lean_dec(v_a_808_);
v_a_864_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_859_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_859_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_864_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
v___jp_828_:
{
lean_object* v___x_833_; 
lean_inc(v___y_832_);
lean_inc_ref(v___y_831_);
lean_inc(v___y_830_);
lean_inc_ref(v___y_829_);
lean_inc(v_a_827_);
lean_inc(v_a_808_);
v___x_833_ = lean_checked_assign(v_a_808_, v_a_827_, v___y_829_, v___y_830_, v___y_831_, v___y_832_);
if (lean_obj_tag(v___x_833_) == 0)
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_850_; 
v_a_834_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_850_ == 0)
{
v___x_836_ = v___x_833_;
v_isShared_837_ = v_isSharedCheck_850_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_833_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_850_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
uint8_t v___x_838_; 
v___x_838_ = lean_unbox(v_a_834_);
lean_dec(v_a_834_);
if (v___x_838_ == 0)
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
lean_del_object(v___x_836_);
v___x_839_ = lean_obj_once(&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1, &l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1);
v___x_840_ = l_Lean_indentExpr(v_a_827_);
v___x_841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_841_, 0, v___x_839_);
lean_ctor_set(v___x_841_, 1, v___x_840_);
v___x_842_ = lean_obj_once(&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3, &l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3);
v___x_843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_843_, 0, v___x_841_);
lean_ctor_set(v___x_843_, 1, v___x_842_);
v___x_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
v___x_845_ = l_Lean_Meta_throwTacticEx___redArg(v_tacName_810_, v_a_808_, v___x_844_, v___y_829_, v___y_830_, v___y_831_, v___y_832_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
return v___x_845_;
}
else
{
lean_object* v___x_846_; lean_object* v___x_848_; 
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v_a_827_);
lean_dec(v_tacName_810_);
lean_dec(v_a_808_);
v___x_846_ = lean_box(0);
if (v_isShared_837_ == 0)
{
lean_ctor_set(v___x_836_, 0, v___x_846_);
v___x_848_ = v___x_836_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_846_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
}
else
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v_a_827_);
lean_dec(v_tacName_810_);
lean_dec(v_a_808_);
v_a_851_ = lean_ctor_get(v___x_833_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_833_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v___x_833_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_833_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_851_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v_tacName_810_);
lean_dec(v_a_808_);
v_a_872_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_826_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_826_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
lean_dec(v_a_823_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v_tacName_810_);
lean_dec_ref(v_x_809_);
lean_dec(v_a_808_);
v_a_880_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_824_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_824_);
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
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v_tacName_810_);
lean_dec_ref(v_x_809_);
lean_dec(v_a_808_);
v_a_888_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_822_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_822_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___boxed(lean_object* v_a_896_, lean_object* v_x_897_, lean_object* v_tacName_898_, lean_object* v_checkNewUnassigned_899_, lean_object* v_mvarCounter_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_){
_start:
{
uint8_t v_checkNewUnassigned_boxed_910_; lean_object* v_res_911_; 
v_checkNewUnassigned_boxed_910_ = lean_unbox(v_checkNewUnassigned_899_);
v_res_911_ = l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0(v_a_896_, v_x_897_, v_tacName_898_, v_checkNewUnassigned_boxed_910_, v_mvarCounter_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_);
lean_dec(v_mvarCounter_900_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing(lean_object* v_tacName_912_, lean_object* v_x_913_, uint8_t v_checkNewUnassigned_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = lean_st_ref_get(v_a_920_);
v___x_925_ = l_Lean_Elab_Tactic_popMainGoal___redArg(v_a_916_, v_a_919_, v_a_920_, v_a_921_, v_a_922_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v_mctx_926_; lean_object* v_a_927_; lean_object* v_mvarCounter_928_; lean_object* v___x_929_; lean_object* v___f_930_; lean_object* v___x_931_; 
v_mctx_926_ = lean_ctor_get(v___x_924_, 0);
lean_inc_ref(v_mctx_926_);
lean_dec(v___x_924_);
v_a_927_ = lean_ctor_get(v___x_925_, 0);
lean_inc(v_a_927_);
lean_dec_ref(v___x_925_);
v_mvarCounter_928_ = lean_ctor_get(v_mctx_926_, 2);
lean_inc(v_mvarCounter_928_);
lean_dec_ref(v_mctx_926_);
v___x_929_ = lean_box(v_checkNewUnassigned_914_);
lean_inc(v_a_927_);
v___f_930_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___boxed), 14, 5);
lean_closure_set(v___f_930_, 0, v_a_927_);
lean_closure_set(v___f_930_, 1, v_x_913_);
lean_closure_set(v___f_930_, 2, v_tacName_912_);
lean_closure_set(v___f_930_, 3, v___x_929_);
lean_closure_set(v___f_930_, 4, v_mvarCounter_928_);
lean_inc(v_a_916_);
lean_inc(v_a_927_);
v___x_931_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(v_a_927_, v___f_930_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_dec(v_a_927_);
lean_dec(v_a_916_);
return v___x_931_;
}
else
{
lean_object* v_a_932_; uint8_t v___y_934_; uint8_t v___x_944_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_a_932_);
v___x_944_ = l_Lean_Exception_isInterrupt(v_a_932_);
if (v___x_944_ == 0)
{
uint8_t v___x_945_; 
lean_inc(v_a_932_);
v___x_945_ = l_Lean_Exception_isRuntime(v_a_932_);
v___y_934_ = v___x_945_;
goto v___jp_933_;
}
else
{
v___y_934_ = v___x_944_;
goto v___jp_933_;
}
v___jp_933_:
{
if (v___y_934_ == 0)
{
lean_object* v___x_935_; 
lean_dec_ref(v___x_931_);
v___x_935_ = l_Lean_Elab_Tactic_pushGoal___redArg(v_a_927_, v_a_916_);
lean_dec(v_a_916_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_935_, 0);
lean_dec(v_unused_943_);
v___x_937_ = v___x_935_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_dec(v___x_935_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
lean_ctor_set_tag(v___x_937_, 1);
lean_ctor_set(v___x_937_, 0, v_a_932_);
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_932_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
else
{
lean_dec(v_a_932_);
return v___x_935_;
}
}
else
{
lean_dec(v_a_932_);
lean_dec(v_a_927_);
lean_dec(v_a_916_);
return v___x_931_;
}
}
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec(v___x_924_);
lean_dec(v_a_922_);
lean_dec_ref(v_a_921_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
lean_dec(v_a_916_);
lean_dec_ref(v_a_915_);
lean_dec_ref(v_x_913_);
lean_dec(v_tacName_912_);
v_a_946_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_925_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_925_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___boxed(lean_object* v_tacName_954_, lean_object* v_x_955_, lean_object* v_checkNewUnassigned_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_){
_start:
{
uint8_t v_checkNewUnassigned_boxed_966_; lean_object* v_res_967_; 
v_checkNewUnassigned_boxed_966_ = lean_unbox(v_checkNewUnassigned_956_);
v_res_967_ = l_Lean_Elab_Tactic_closeMainGoalUsing(v_tacName_954_, v_x_955_, v_checkNewUnassigned_boxed_966_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_);
return v_res_967_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_968_ = lean_box(0);
v___x_969_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
lean_ctor_set(v___x_970_, 1, v___x_968_);
return v___x_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg(){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0);
v___x_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___boxed(lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0(lean_object* v_00_u03b1_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___boxed(lean_object* v_00_u03b1_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0(v_00_u03b1_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
lean_dec(v___y_993_);
lean_dec_ref(v___y_992_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0(lean_object* v___x_998_, lean_object* v_type_999_, lean_object* v_x_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v___x_1010_; uint8_t v___x_1011_; lean_object* v___x_1012_; 
v___x_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1010_, 0, v_type_999_);
v___x_1011_ = 0;
v___x_1012_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v___x_998_, v___x_1010_, v___x_1011_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0___boxed(lean_object* v___x_1013_, lean_object* v_type_1014_, lean_object* v_x_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lean_Elab_Tactic_evalExact___lam__0(v___x_1013_, v_type_1014_, v_x_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
lean_dec(v_x_1015_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact(lean_object* v_stx_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v___x_1047_; uint8_t v___x_1048_; 
v___x_1047_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExact___closed__4));
lean_inc(v_stx_1037_);
v___x_1048_ = l_Lean_Syntax_isOfKind(v_stx_1037_, v___x_1047_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; 
lean_dec(v_a_1045_);
lean_dec_ref(v_a_1044_);
lean_dec(v_a_1043_);
lean_dec_ref(v_a_1042_);
lean_dec(v_a_1041_);
lean_dec_ref(v_a_1040_);
lean_dec(v_a_1039_);
lean_dec_ref(v_a_1038_);
lean_dec(v_stx_1037_);
v___x_1049_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_1049_;
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___f_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v___x_1050_ = lean_unsigned_to_nat(1u);
v___x_1051_ = l_Lean_Syntax_getArg(v_stx_1037_, v___x_1050_);
lean_dec(v_stx_1037_);
v___f_1052_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExact___lam__0___boxed), 12, 1);
lean_closure_set(v___f_1052_, 0, v___x_1051_);
v___x_1053_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExact___closed__5));
v___x_1054_ = l_Lean_Elab_Tactic_closeMainGoalUsing(v___x_1053_, v___f_1052_, v___x_1048_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
return v___x_1054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___boxed(lean_object* v_stx_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lean_Elab_Tactic_evalExact(v_stx_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1(){
_start:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1073_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1074_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExact___closed__4));
v___x_1075_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1));
v___x_1076_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExact___boxed), 10, 0);
v___x_1077_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1073_, v___x_1074_, v___x_1075_, v___x_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___boxed(lean_object* v_a_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1();
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3(){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1106_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1));
v___x_1107_ = ((lean_object*)(l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6));
v___x_1108_ = l_Lean_addBuiltinDeclarationRanges(v___x_1106_, v___x_1107_);
return v___x_1108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___boxed(lean_object* v_a_1109_){
_start:
{
lean_object* v_res_1110_; 
v_res_1110_ = l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3();
return v_res_1110_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0(lean_object* v_mctx_1111_, lean_object* v_mvarId_u2081_1112_, lean_object* v_mvarId_u2082_1113_){
_start:
{
lean_object* v_decl_u2081_1114_; lean_object* v_index_1115_; lean_object* v_decl_u2082_1116_; lean_object* v_index_1117_; uint8_t v___x_1118_; 
lean_inc(v_mvarId_u2081_1112_);
lean_inc_ref(v_mctx_1111_);
v_decl_u2081_1114_ = l_Lean_MetavarContext_getDecl(v_mctx_1111_, v_mvarId_u2081_1112_);
v_index_1115_ = lean_ctor_get(v_decl_u2081_1114_, 6);
lean_inc(v_index_1115_);
lean_dec_ref(v_decl_u2081_1114_);
lean_inc(v_mvarId_u2082_1113_);
v_decl_u2082_1116_ = l_Lean_MetavarContext_getDecl(v_mctx_1111_, v_mvarId_u2082_1113_);
v_index_1117_ = lean_ctor_get(v_decl_u2082_1116_, 6);
lean_inc(v_index_1117_);
lean_dec_ref(v_decl_u2082_1116_);
v___x_1118_ = lean_nat_dec_eq(v_index_1115_, v_index_1117_);
if (v___x_1118_ == 0)
{
uint8_t v___x_1119_; 
lean_dec(v_mvarId_u2082_1113_);
lean_dec(v_mvarId_u2081_1112_);
v___x_1119_ = lean_nat_dec_lt(v_index_1115_, v_index_1117_);
lean_dec(v_index_1117_);
lean_dec(v_index_1115_);
return v___x_1119_;
}
else
{
uint8_t v___x_1120_; 
lean_dec(v_index_1117_);
lean_dec(v_index_1115_);
v___x_1120_ = l_Lean_Name_quickLt(v_mvarId_u2081_1112_, v_mvarId_u2082_1113_);
lean_dec(v_mvarId_u2082_1113_);
lean_dec(v_mvarId_u2081_1112_);
return v___x_1120_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0___boxed(lean_object* v_mctx_1121_, lean_object* v_mvarId_u2081_1122_, lean_object* v_mvarId_u2082_1123_){
_start:
{
uint8_t v_res_1124_; lean_object* v_r_1125_; 
v_res_1124_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0(v_mctx_1121_, v_mvarId_u2081_1122_, v_mvarId_u2082_1123_);
v_r_1125_ = lean_box(v_res_1124_);
return v_r_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__1(lean_object* v_mvarIds_1126_, lean_object* v_toPure_1127_, lean_object* v_mctx_1128_){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1129_ = lean_array_get_size(v_mvarIds_1126_);
v___x_1130_ = lean_unsigned_to_nat(0u);
v___x_1131_ = lean_nat_dec_eq(v___x_1129_, v___x_1130_);
if (v___x_1131_ == 0)
{
lean_object* v___f_1132_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___y_1141_; uint8_t v___x_1143_; 
v___f_1132_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1132_, 0, v_mctx_1128_);
v___x_1138_ = lean_unsigned_to_nat(1u);
v___x_1139_ = lean_nat_sub(v___x_1129_, v___x_1138_);
v___x_1143_ = lean_nat_dec_le(v___x_1130_, v___x_1139_);
if (v___x_1143_ == 0)
{
lean_inc(v___x_1139_);
v___y_1141_ = v___x_1139_;
goto v___jp_1140_;
}
else
{
v___y_1141_ = v___x_1130_;
goto v___jp_1140_;
}
v___jp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_1132_, v___x_1129_, v_mvarIds_1126_, v___y_1134_, v___y_1135_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_1135_);
v___x_1137_ = lean_apply_2(v_toPure_1127_, lean_box(0), v___x_1136_);
return v___x_1137_;
}
v___jp_1140_:
{
uint8_t v___x_1142_; 
v___x_1142_ = lean_nat_dec_le(v___y_1141_, v___x_1139_);
if (v___x_1142_ == 0)
{
lean_dec(v___x_1139_);
lean_inc(v___y_1141_);
v___y_1134_ = v___y_1141_;
v___y_1135_ = v___y_1141_;
goto v___jp_1133_;
}
else
{
v___y_1134_ = v___y_1141_;
v___y_1135_ = v___x_1139_;
goto v___jp_1133_;
}
}
}
else
{
lean_object* v___x_1144_; 
lean_dec_ref(v_mctx_1128_);
v___x_1144_ = lean_apply_2(v_toPure_1127_, lean_box(0), v_mvarIds_1126_);
return v___x_1144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(lean_object* v_inst_1145_, lean_object* v_inst_1146_, lean_object* v_mvarIds_1147_){
_start:
{
lean_object* v_toApplicative_1148_; lean_object* v_toBind_1149_; lean_object* v_getMCtx_1150_; lean_object* v_toPure_1151_; lean_object* v___f_1152_; lean_object* v___x_1153_; 
v_toApplicative_1148_ = lean_ctor_get(v_inst_1146_, 0);
lean_inc_ref(v_toApplicative_1148_);
v_toBind_1149_ = lean_ctor_get(v_inst_1146_, 1);
lean_inc(v_toBind_1149_);
lean_dec_ref(v_inst_1146_);
v_getMCtx_1150_ = lean_ctor_get(v_inst_1145_, 0);
lean_inc(v_getMCtx_1150_);
lean_dec_ref(v_inst_1145_);
v_toPure_1151_ = lean_ctor_get(v_toApplicative_1148_, 1);
lean_inc(v_toPure_1151_);
lean_dec_ref(v_toApplicative_1148_);
v___f_1152_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1152_, 0, v_mvarIds_1147_);
lean_closure_set(v___f_1152_, 1, v_toPure_1151_);
v___x_1153_ = lean_apply_4(v_toBind_1149_, lean_box(0), lean_box(0), v_getMCtx_1150_, v___f_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex(lean_object* v_m_1154_, lean_object* v_inst_1155_, lean_object* v_inst_1156_, lean_object* v_mvarIds_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v_inst_1155_, v_inst_1156_, v_mvarIds_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex___redArg(lean_object* v_inst_1159_, lean_object* v_inst_1160_, lean_object* v_mvarIds_1161_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v_inst_1159_, v_inst_1160_, v_mvarIds_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex(lean_object* v_m_1163_, lean_object* v_inst_1164_, lean_object* v_inst_1165_, lean_object* v_mvarIds_1166_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v_inst_1164_, v_inst_1165_, v_mvarIds_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0(lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v___x_1173_; lean_object* v_mctx_1174_; lean_object* v___x_1175_; 
v___x_1173_ = lean_st_ref_get(v___y_1169_);
v_mctx_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc_ref(v_mctx_1174_);
lean_dec(v___x_1173_);
v___x_1175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1175_, 0, v_mctx_1174_);
return v___x_1175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0___boxed(lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0(v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__1(lean_object* v_val_1182_, lean_object* v_toPure_1183_, lean_object* v_newMVarIds_1184_){
_start:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; 
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v_val_1182_);
lean_ctor_set(v___x_1185_, 1, v_newMVarIds_1184_);
v___x_1186_ = lean_apply_2(v_toPure_1183_, lean_box(0), v___x_1185_);
return v___x_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__2(lean_object* v___x_1187_, lean_object* v___x_1188_, lean_object* v_inst_1189_, lean_object* v_toBind_1190_, lean_object* v___f_1191_, lean_object* v_newMVarIds_1192_){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v___x_1187_, v___x_1188_, v_newMVarIds_1192_);
v___x_1194_ = lean_apply_2(v_inst_1189_, lean_box(0), v___x_1193_);
v___x_1195_ = lean_apply_4(v_toBind_1190_, lean_box(0), lean_box(0), v___x_1194_, v___f_1191_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__3(lean_object* v_mvarCounter_1196_, lean_object* v_inst_1197_, lean_object* v_toBind_1198_, lean_object* v___f_1199_, lean_object* v_newMVarIds_1200_){
_start:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1201_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_filterOldMVars___boxed), 7, 2);
lean_closure_set(v___x_1201_, 0, v_newMVarIds_1200_);
lean_closure_set(v___x_1201_, 1, v_mvarCounter_1196_);
v___x_1202_ = lean_apply_2(v_inst_1197_, lean_box(0), v___x_1201_);
v___x_1203_ = lean_apply_4(v_toBind_1198_, lean_box(0), lean_box(0), v___x_1202_, v___f_1199_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__4(lean_object* v_toPure_1204_, lean_object* v___x_1205_, lean_object* v___x_1206_, lean_object* v_inst_1207_, lean_object* v_toBind_1208_, lean_object* v_mvarCounter_1209_, lean_object* v_val_1210_){
_start:
{
lean_object* v___f_1211_; lean_object* v___f_1212_; lean_object* v___f_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
lean_inc_ref(v_val_1210_);
v___f_1211_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1211_, 0, v_val_1210_);
lean_closure_set(v___f_1211_, 1, v_toPure_1204_);
lean_inc(v_toBind_1208_);
lean_inc(v_inst_1207_);
v___f_1212_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__2), 6, 5);
lean_closure_set(v___f_1212_, 0, v___x_1205_);
lean_closure_set(v___f_1212_, 1, v___x_1206_);
lean_closure_set(v___f_1212_, 2, v_inst_1207_);
lean_closure_set(v___f_1212_, 3, v_toBind_1208_);
lean_closure_set(v___f_1212_, 4, v___f_1211_);
lean_inc(v_toBind_1208_);
lean_inc(v_inst_1207_);
v___f_1213_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1213_, 0, v_mvarCounter_1209_);
lean_closure_set(v___f_1213_, 1, v_inst_1207_);
lean_closure_set(v___f_1213_, 2, v_toBind_1208_);
lean_closure_set(v___f_1213_, 3, v___f_1212_);
v___x_1214_ = lean_alloc_closure((void*)(l_Lean_Meta_getMVarsNoDelayed___boxed), 6, 1);
lean_closure_set(v___x_1214_, 0, v_val_1210_);
v___x_1215_ = lean_apply_2(v_inst_1207_, lean_box(0), v___x_1214_);
v___x_1216_ = lean_apply_4(v_toBind_1208_, lean_box(0), lean_box(0), v___x_1215_, v___f_1213_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__5(lean_object* v_toPure_1217_, lean_object* v___x_1218_, lean_object* v___x_1219_, lean_object* v_inst_1220_, lean_object* v_toBind_1221_, lean_object* v_k_1222_, lean_object* v_____do__lift_1223_){
_start:
{
lean_object* v_mvarCounter_1224_; lean_object* v___f_1225_; lean_object* v___x_1226_; 
v_mvarCounter_1224_ = lean_ctor_get(v_____do__lift_1223_, 2);
lean_inc(v_mvarCounter_1224_);
lean_dec_ref(v_____do__lift_1223_);
lean_inc(v_toBind_1221_);
v___f_1225_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__4), 7, 6);
lean_closure_set(v___f_1225_, 0, v_toPure_1217_);
lean_closure_set(v___f_1225_, 1, v___x_1218_);
lean_closure_set(v___f_1225_, 2, v___x_1219_);
lean_closure_set(v___f_1225_, 3, v_inst_1220_);
lean_closure_set(v___f_1225_, 4, v_toBind_1221_);
lean_closure_set(v___f_1225_, 5, v_mvarCounter_1224_);
v___x_1226_ = lean_apply_4(v_toBind_1221_, lean_box(0), lean_box(0), v_k_1222_, v___f_1225_);
return v___x_1226_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0(void){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_instMonadEIO(lean_box(0));
return v___x_1227_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1(void){
_start:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; 
v___x_1228_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0);
v___x_1229_ = l_StateRefT_x27_instMonad___redArg(v___x_1228_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg(lean_object* v_inst_1235_, lean_object* v_inst_1236_, lean_object* v_k_1237_){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v_toApplicative_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1304_; 
v___x_1238_ = l_Lean_Meta_instMonadMCtxMetaM;
v___x_1239_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1);
v_toApplicative_1240_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1304_ == 0)
{
lean_object* v_unused_1305_; 
v_unused_1305_ = lean_ctor_get(v___x_1239_, 1);
lean_dec(v_unused_1305_);
v___x_1242_ = v___x_1239_;
v_isShared_1243_ = v_isSharedCheck_1304_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_toApplicative_1240_);
lean_dec(v___x_1239_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1304_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v_toFunctor_1244_; lean_object* v_toSeq_1245_; lean_object* v_toSeqLeft_1246_; lean_object* v_toSeqRight_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1302_; 
v_toFunctor_1244_ = lean_ctor_get(v_toApplicative_1240_, 0);
v_toSeq_1245_ = lean_ctor_get(v_toApplicative_1240_, 2);
v_toSeqLeft_1246_ = lean_ctor_get(v_toApplicative_1240_, 3);
v_toSeqRight_1247_ = lean_ctor_get(v_toApplicative_1240_, 4);
v_isSharedCheck_1302_ = !lean_is_exclusive(v_toApplicative_1240_);
if (v_isSharedCheck_1302_ == 0)
{
lean_object* v_unused_1303_; 
v_unused_1303_ = lean_ctor_get(v_toApplicative_1240_, 1);
lean_dec(v_unused_1303_);
v___x_1249_ = v_toApplicative_1240_;
v_isShared_1250_ = v_isSharedCheck_1302_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_toSeqRight_1247_);
lean_inc(v_toSeqLeft_1246_);
lean_inc(v_toSeq_1245_);
lean_inc(v_toFunctor_1244_);
lean_dec(v_toApplicative_1240_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1302_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___f_1251_; lean_object* v___f_1252_; lean_object* v___f_1253_; lean_object* v___f_1254_; lean_object* v___x_1255_; lean_object* v___f_1256_; lean_object* v___f_1257_; lean_object* v___f_1258_; lean_object* v___x_1260_; 
v___f_1251_ = ((lean_object*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2));
v___f_1252_ = ((lean_object*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3));
lean_inc_ref(v_toFunctor_1244_);
v___f_1253_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1253_, 0, v_toFunctor_1244_);
v___f_1254_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1254_, 0, v_toFunctor_1244_);
v___x_1255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___f_1253_);
lean_ctor_set(v___x_1255_, 1, v___f_1254_);
v___f_1256_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1256_, 0, v_toSeqRight_1247_);
v___f_1257_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1257_, 0, v_toSeqLeft_1246_);
v___f_1258_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1258_, 0, v_toSeq_1245_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 4, v___f_1256_);
lean_ctor_set(v___x_1249_, 3, v___f_1257_);
lean_ctor_set(v___x_1249_, 2, v___f_1258_);
lean_ctor_set(v___x_1249_, 1, v___f_1251_);
lean_ctor_set(v___x_1249_, 0, v___x_1255_);
v___x_1260_ = v___x_1249_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v___x_1255_);
lean_ctor_set(v_reuseFailAlloc_1301_, 1, v___f_1251_);
lean_ctor_set(v_reuseFailAlloc_1301_, 2, v___f_1258_);
lean_ctor_set(v_reuseFailAlloc_1301_, 3, v___f_1257_);
lean_ctor_set(v_reuseFailAlloc_1301_, 4, v___f_1256_);
v___x_1260_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1262_; 
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 1, v___f_1252_);
lean_ctor_set(v___x_1242_, 0, v___x_1260_);
v___x_1262_ = v___x_1242_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v___x_1260_);
lean_ctor_set(v_reuseFailAlloc_1300_, 1, v___f_1252_);
v___x_1262_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
lean_object* v___x_1263_; lean_object* v_toApplicative_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1298_; 
v___x_1263_ = l_StateRefT_x27_instMonad___redArg(v___x_1262_);
v_toApplicative_1264_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1298_ == 0)
{
lean_object* v_unused_1299_; 
v_unused_1299_ = lean_ctor_get(v___x_1263_, 1);
lean_dec(v_unused_1299_);
v___x_1266_ = v___x_1263_;
v_isShared_1267_ = v_isSharedCheck_1298_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_toApplicative_1264_);
lean_dec(v___x_1263_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1298_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v_toFunctor_1268_; lean_object* v_toSeq_1269_; lean_object* v_toSeqLeft_1270_; lean_object* v_toSeqRight_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1296_; 
v_toFunctor_1268_ = lean_ctor_get(v_toApplicative_1264_, 0);
v_toSeq_1269_ = lean_ctor_get(v_toApplicative_1264_, 2);
v_toSeqLeft_1270_ = lean_ctor_get(v_toApplicative_1264_, 3);
v_toSeqRight_1271_ = lean_ctor_get(v_toApplicative_1264_, 4);
v_isSharedCheck_1296_ = !lean_is_exclusive(v_toApplicative_1264_);
if (v_isSharedCheck_1296_ == 0)
{
lean_object* v_unused_1297_; 
v_unused_1297_ = lean_ctor_get(v_toApplicative_1264_, 1);
lean_dec(v_unused_1297_);
v___x_1273_ = v_toApplicative_1264_;
v_isShared_1274_ = v_isSharedCheck_1296_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_toSeqRight_1271_);
lean_inc(v_toSeqLeft_1270_);
lean_inc(v_toSeq_1269_);
lean_inc(v_toFunctor_1268_);
lean_dec(v_toApplicative_1264_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1296_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___f_1275_; lean_object* v___f_1276_; lean_object* v___f_1277_; lean_object* v___f_1278_; lean_object* v___x_1279_; lean_object* v___f_1280_; lean_object* v___f_1281_; lean_object* v___f_1282_; lean_object* v___x_1284_; 
v___f_1275_ = ((lean_object*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4));
v___f_1276_ = ((lean_object*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5));
lean_inc_ref(v_toFunctor_1268_);
v___f_1277_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1277_, 0, v_toFunctor_1268_);
v___f_1278_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1278_, 0, v_toFunctor_1268_);
v___x_1279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1279_, 0, v___f_1277_);
lean_ctor_set(v___x_1279_, 1, v___f_1278_);
v___f_1280_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1280_, 0, v_toSeqRight_1271_);
v___f_1281_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1281_, 0, v_toSeqLeft_1270_);
v___f_1282_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1282_, 0, v_toSeq_1269_);
if (v_isShared_1274_ == 0)
{
lean_ctor_set(v___x_1273_, 4, v___f_1280_);
lean_ctor_set(v___x_1273_, 3, v___f_1281_);
lean_ctor_set(v___x_1273_, 2, v___f_1282_);
lean_ctor_set(v___x_1273_, 1, v___f_1275_);
lean_ctor_set(v___x_1273_, 0, v___x_1279_);
v___x_1284_ = v___x_1273_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1279_);
lean_ctor_set(v_reuseFailAlloc_1295_, 1, v___f_1275_);
lean_ctor_set(v_reuseFailAlloc_1295_, 2, v___f_1282_);
lean_ctor_set(v_reuseFailAlloc_1295_, 3, v___f_1281_);
lean_ctor_set(v_reuseFailAlloc_1295_, 4, v___f_1280_);
v___x_1284_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
lean_object* v___x_1286_; 
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 1, v___f_1276_);
lean_ctor_set(v___x_1266_, 0, v___x_1284_);
v___x_1286_ = v___x_1266_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1284_);
lean_ctor_set(v_reuseFailAlloc_1294_, 1, v___f_1276_);
v___x_1286_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
lean_object* v_toApplicative_1287_; lean_object* v_toBind_1288_; lean_object* v_toPure_1289_; lean_object* v___f_1290_; lean_object* v___x_1291_; lean_object* v___f_1292_; lean_object* v___x_1293_; 
v_toApplicative_1287_ = lean_ctor_get(v_inst_1235_, 0);
lean_inc_ref(v_toApplicative_1287_);
v_toBind_1288_ = lean_ctor_get(v_inst_1235_, 1);
lean_inc(v_toBind_1288_);
lean_dec_ref(v_inst_1235_);
v_toPure_1289_ = lean_ctor_get(v_toApplicative_1287_, 1);
lean_inc(v_toPure_1289_);
lean_dec_ref(v_toApplicative_1287_);
v___f_1290_ = ((lean_object*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6));
lean_inc(v_inst_1236_);
v___x_1291_ = lean_apply_2(v_inst_1236_, lean_box(0), v___f_1290_);
lean_inc(v_toBind_1288_);
v___f_1292_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__5), 7, 6);
lean_closure_set(v___f_1292_, 0, v_toPure_1289_);
lean_closure_set(v___f_1292_, 1, v___x_1238_);
lean_closure_set(v___f_1292_, 2, v___x_1286_);
lean_closure_set(v___f_1292_, 3, v_inst_1236_);
lean_closure_set(v___f_1292_, 4, v_toBind_1288_);
lean_closure_set(v___f_1292_, 5, v_k_1237_);
v___x_1293_ = lean_apply_4(v_toBind_1288_, lean_box(0), lean_box(0), v___x_1291_, v___f_1292_);
return v___x_1293_;
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars(lean_object* v_m_1306_, lean_object* v_inst_1307_, lean_object* v_inst_1308_, lean_object* v_k_1309_){
_start:
{
lean_object* v___x_1310_; 
v___x_1310_ = l_Lean_Elab_Tactic_collectFreshMVars___redArg(v_inst_1307_, v_inst_1308_, v_k_1309_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(lean_object* v_as_1311_, size_t v_i_1312_, size_t v_stop_1313_, lean_object* v_b_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v_a_1323_; uint8_t v___x_1327_; 
v___x_1327_ = lean_usize_dec_eq(v_i_1312_, v_stop_1313_);
if (v___x_1327_ == 0)
{
lean_object* v___x_1328_; lean_object* v___x_1331_; 
v___x_1328_ = lean_array_uget_borrowed(v_as_1311_, v_i_1312_);
lean_inc(v___x_1328_);
v___x_1331_ = l_Lean_Elab_Term_isLetRecAuxMVar(v___x_1328_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; uint8_t v___x_1333_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_a_1332_);
lean_dec_ref(v___x_1331_);
v___x_1333_ = lean_unbox(v_a_1332_);
lean_dec(v_a_1332_);
if (v___x_1333_ == 0)
{
goto v___jp_1329_;
}
else
{
v_a_1323_ = v_b_1314_;
goto v___jp_1322_;
}
}
else
{
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1334_; uint8_t v___x_1335_; 
v_a_1334_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_a_1334_);
lean_dec_ref(v___x_1331_);
v___x_1335_ = lean_unbox(v_a_1334_);
lean_dec(v_a_1334_);
if (v___x_1335_ == 0)
{
v_a_1323_ = v_b_1314_;
goto v___jp_1322_;
}
else
{
goto v___jp_1329_;
}
}
else
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1343_; 
lean_dec_ref(v_b_1314_);
v_a_1336_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1343_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1338_ = v___x_1331_;
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1331_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1343_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1341_; 
if (v_isShared_1339_ == 0)
{
v___x_1341_ = v___x_1338_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v_a_1336_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
}
v___jp_1329_:
{
lean_object* v___x_1330_; 
lean_inc(v___x_1328_);
v___x_1330_ = lean_array_push(v_b_1314_, v___x_1328_);
v_a_1323_ = v___x_1330_;
goto v___jp_1322_;
}
}
else
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1344_, 0, v_b_1314_);
return v___x_1344_;
}
v___jp_1322_:
{
size_t v___x_1324_; size_t v___x_1325_; 
v___x_1324_ = ((size_t)1ULL);
v___x_1325_ = lean_usize_add(v_i_1312_, v___x_1324_);
v_i_1312_ = v___x_1325_;
v_b_1314_ = v_a_1323_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg___boxed(lean_object* v_as_1345_, lean_object* v_i_1346_, lean_object* v_stop_1347_, lean_object* v_b_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
size_t v_i_boxed_1356_; size_t v_stop_boxed_1357_; lean_object* v_res_1358_; 
v_i_boxed_1356_ = lean_unbox_usize(v_i_1346_);
lean_dec(v_i_1346_);
v_stop_boxed_1357_ = lean_unbox_usize(v_stop_1347_);
lean_dec(v_stop_1347_);
v_res_1358_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_as_1345_, v_i_boxed_1356_, v_stop_boxed_1357_, v_b_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
lean_dec_ref(v_as_1345_);
return v_res_1358_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(lean_object* v_as_1359_, size_t v_i_1360_, size_t v_stop_1361_, lean_object* v_b_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_){
_start:
{
uint8_t v___x_1368_; 
v___x_1368_ = lean_usize_dec_eq(v_i_1360_, v_stop_1361_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = lean_array_uget_borrowed(v_as_1359_, v_i_1360_);
lean_inc(v___x_1369_);
v___x_1370_ = l_Lean_MVarId_getKind(v___x_1369_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v_a_1373_; uint8_t v___x_1377_; uint8_t v___x_1378_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref(v___x_1370_);
v___x_1377_ = lean_unbox(v_a_1371_);
lean_dec(v_a_1371_);
v___x_1378_ = l_Lean_MetavarKind_isNatural(v___x_1377_);
if (v___x_1378_ == 0)
{
v_a_1373_ = v_b_1362_;
goto v___jp_1372_;
}
else
{
lean_object* v___x_1379_; 
lean_inc(v___x_1369_);
v___x_1379_ = lean_array_push(v_b_1362_, v___x_1369_);
v_a_1373_ = v___x_1379_;
goto v___jp_1372_;
}
v___jp_1372_:
{
size_t v___x_1374_; size_t v___x_1375_; 
v___x_1374_ = ((size_t)1ULL);
v___x_1375_ = lean_usize_add(v_i_1360_, v___x_1374_);
v_i_1360_ = v___x_1375_;
v_b_1362_ = v_a_1373_;
goto _start;
}
}
else
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1387_; 
lean_dec_ref(v_b_1362_);
v_a_1380_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1382_ = v___x_1370_;
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v___x_1370_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1385_; 
if (v_isShared_1383_ == 0)
{
v___x_1385_ = v___x_1382_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_a_1380_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
}
else
{
lean_object* v___x_1388_; 
v___x_1388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1388_, 0, v_b_1362_);
return v___x_1388_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg___boxed(lean_object* v_as_1389_, lean_object* v_i_1390_, lean_object* v_stop_1391_, lean_object* v_b_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
size_t v_i_boxed_1398_; size_t v_stop_boxed_1399_; lean_object* v_res_1400_; 
v_i_boxed_1398_ = lean_unbox_usize(v_i_1390_);
lean_dec(v_i_1390_);
v_stop_boxed_1399_ = lean_unbox_usize(v_stop_1391_);
lean_dec(v_stop_1391_);
v_res_1400_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_as_1389_, v_i_boxed_1398_, v_stop_boxed_1399_, v_b_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec_ref(v_as_1389_);
return v_res_1400_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(lean_object* v___x_1401_, lean_object* v_mvarId_u2081_1402_, lean_object* v_mvarId_u2082_1403_){
_start:
{
lean_object* v_decl_u2081_1404_; lean_object* v_index_1405_; lean_object* v_decl_u2082_1406_; lean_object* v_index_1407_; uint8_t v___x_1408_; 
lean_inc(v_mvarId_u2081_1402_);
lean_inc_ref(v___x_1401_);
v_decl_u2081_1404_ = l_Lean_MetavarContext_getDecl(v___x_1401_, v_mvarId_u2081_1402_);
v_index_1405_ = lean_ctor_get(v_decl_u2081_1404_, 6);
lean_inc(v_index_1405_);
lean_dec_ref(v_decl_u2081_1404_);
lean_inc(v_mvarId_u2082_1403_);
v_decl_u2082_1406_ = l_Lean_MetavarContext_getDecl(v___x_1401_, v_mvarId_u2082_1403_);
v_index_1407_ = lean_ctor_get(v_decl_u2082_1406_, 6);
lean_inc(v_index_1407_);
lean_dec_ref(v_decl_u2082_1406_);
v___x_1408_ = lean_nat_dec_eq(v_index_1405_, v_index_1407_);
if (v___x_1408_ == 0)
{
uint8_t v___x_1409_; 
lean_dec(v_mvarId_u2082_1403_);
lean_dec(v_mvarId_u2081_1402_);
v___x_1409_ = lean_nat_dec_lt(v_index_1405_, v_index_1407_);
lean_dec(v_index_1407_);
lean_dec(v_index_1405_);
return v___x_1409_;
}
else
{
uint8_t v___x_1410_; 
lean_dec(v_index_1407_);
lean_dec(v_index_1405_);
v___x_1410_ = l_Lean_Name_quickLt(v_mvarId_u2081_1402_, v_mvarId_u2082_1403_);
lean_dec(v_mvarId_u2082_1403_);
lean_dec(v_mvarId_u2081_1402_);
return v___x_1410_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v___x_1411_, lean_object* v_mvarId_u2081_1412_, lean_object* v_mvarId_u2082_1413_){
_start:
{
uint8_t v_res_1414_; lean_object* v_r_1415_; 
v_res_1414_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(v___x_1411_, v_mvarId_u2081_1412_, v_mvarId_u2082_1413_);
v_r_1415_ = lean_box(v_res_1414_);
return v_r_1415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(lean_object* v___x_1416_, lean_object* v_as_1417_, lean_object* v_lo_1418_, lean_object* v_hi_1419_){
_start:
{
uint8_t v___x_1420_; 
v___x_1420_ = lean_nat_dec_lt(v_lo_1418_, v_hi_1419_);
if (v___x_1420_ == 0)
{
lean_dec(v_lo_1418_);
lean_dec_ref(v___x_1416_);
return v_as_1417_;
}
else
{
lean_object* v___f_1421_; lean_object* v___x_1422_; lean_object* v_fst_1423_; lean_object* v_snd_1424_; uint8_t v___x_1425_; 
lean_inc_ref(v___x_1416_);
v___f_1421_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1421_, 0, v___x_1416_);
lean_inc(v_lo_1418_);
v___x_1422_ = l_Array_qpartition___redArg(v_as_1417_, v___f_1421_, v_lo_1418_, v_hi_1419_);
v_fst_1423_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_fst_1423_);
v_snd_1424_ = lean_ctor_get(v___x_1422_, 1);
lean_inc(v_snd_1424_);
lean_dec_ref(v___x_1422_);
v___x_1425_ = lean_nat_dec_le(v_hi_1419_, v_fst_1423_);
if (v___x_1425_ == 0)
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
lean_inc_ref(v___x_1416_);
v___x_1426_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v___x_1416_, v_snd_1424_, v_lo_1418_, v_fst_1423_);
v___x_1427_ = lean_unsigned_to_nat(1u);
v___x_1428_ = lean_nat_add(v_fst_1423_, v___x_1427_);
lean_dec(v_fst_1423_);
v_as_1417_ = v___x_1426_;
v_lo_1418_ = v___x_1428_;
goto _start;
}
else
{
lean_dec(v_fst_1423_);
lean_dec(v_lo_1418_);
lean_dec_ref(v___x_1416_);
return v_snd_1424_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___x_1430_, lean_object* v_as_1431_, lean_object* v_lo_1432_, lean_object* v_hi_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v___x_1430_, v_as_1431_, v_lo_1432_, v_hi_1433_);
lean_dec(v_hi_1433_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(lean_object* v_mvarIds_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v___x_1438_; lean_object* v_mctx_1439_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___x_1445_; lean_object* v___x_1446_; uint8_t v___x_1447_; 
v___x_1438_ = lean_st_ref_get(v___y_1436_);
v_mctx_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc_ref(v_mctx_1439_);
lean_dec(v___x_1438_);
v___x_1445_ = lean_array_get_size(v_mvarIds_1435_);
v___x_1446_ = lean_unsigned_to_nat(0u);
v___x_1447_ = lean_nat_dec_eq(v___x_1445_, v___x_1446_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___y_1451_; uint8_t v___x_1453_; 
v___x_1448_ = lean_unsigned_to_nat(1u);
v___x_1449_ = lean_nat_sub(v___x_1445_, v___x_1448_);
v___x_1453_ = lean_nat_dec_le(v___x_1446_, v___x_1449_);
if (v___x_1453_ == 0)
{
lean_inc(v___x_1449_);
v___y_1451_ = v___x_1449_;
goto v___jp_1450_;
}
else
{
v___y_1451_ = v___x_1446_;
goto v___jp_1450_;
}
v___jp_1450_:
{
uint8_t v___x_1452_; 
v___x_1452_ = lean_nat_dec_le(v___y_1451_, v___x_1449_);
if (v___x_1452_ == 0)
{
lean_dec(v___x_1449_);
lean_inc(v___y_1451_);
v___y_1441_ = v___y_1451_;
v___y_1442_ = v___y_1451_;
goto v___jp_1440_;
}
else
{
v___y_1441_ = v___y_1451_;
v___y_1442_ = v___x_1449_;
goto v___jp_1440_;
}
}
}
else
{
lean_object* v___x_1454_; 
lean_dec_ref(v_mctx_1439_);
v___x_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1454_, 0, v_mvarIds_1435_);
return v___x_1454_;
}
v___jp_1440_:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
v___x_1443_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v_mctx_1439_, v_mvarIds_1435_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
v___x_1444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
return v___x_1444_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg___boxed(lean_object* v_mvarIds_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v_res_1458_; 
v_res_1458_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(v_mvarIds_1455_, v___y_1456_);
lean_dec(v___y_1456_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(lean_object* v_k_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v___x_1469_; lean_object* v_mctx_1470_; lean_object* v_mvarCounter_1471_; lean_object* v___x_1472_; 
v___x_1469_ = lean_st_ref_get(v___y_1465_);
v_mctx_1470_ = lean_ctor_get(v___x_1469_, 0);
lean_inc_ref(v_mctx_1470_);
lean_dec(v___x_1469_);
v_mvarCounter_1471_ = lean_ctor_get(v_mctx_1470_, 2);
lean_inc(v_mvarCounter_1471_);
lean_dec_ref(v_mctx_1470_);
lean_inc(v___y_1467_);
lean_inc_ref(v___y_1466_);
lean_inc(v___y_1465_);
lean_inc_ref(v___y_1464_);
v___x_1472_ = lean_apply_9(v_k_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, lean_box(0));
if (lean_obj_tag(v___x_1472_) == 0)
{
lean_object* v_a_1473_; lean_object* v___x_1474_; 
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
lean_inc(v_a_1473_);
lean_dec_ref(v___x_1472_);
lean_inc(v_a_1473_);
v___x_1474_ = l_Lean_Meta_getMVarsNoDelayed(v_a_1473_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec_ref(v___y_1464_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; lean_object* v___x_1476_; lean_object* v_a_1477_; lean_object* v___x_1478_; lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1487_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
lean_inc(v_a_1475_);
lean_dec_ref(v___x_1474_);
v___x_1476_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_a_1475_, v_mvarCounter_1471_, v___y_1465_);
lean_dec(v_mvarCounter_1471_);
lean_dec(v_a_1475_);
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1477_);
lean_dec_ref(v___x_1476_);
v___x_1478_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(v_a_1477_, v___y_1465_);
lean_dec(v___y_1465_);
v_a_1479_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1481_ = v___x_1478_;
v_isShared_1482_ = v_isSharedCheck_1487_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1478_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1487_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1483_; lean_object* v___x_1485_; 
v___x_1483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1483_, 0, v_a_1473_);
lean_ctor_set(v___x_1483_, 1, v_a_1479_);
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___x_1483_);
v___x_1485_ = v___x_1481_;
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
else
{
lean_object* v_a_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
lean_dec(v_a_1473_);
lean_dec(v_mvarCounter_1471_);
lean_dec(v___y_1465_);
v_a_1488_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1490_ = v___x_1474_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_a_1488_);
lean_dec(v___x_1474_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_a_1488_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
lean_dec(v_mvarCounter_1471_);
lean_dec(v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec_ref(v___y_1464_);
v_a_1496_ = lean_ctor_get(v___x_1472_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1472_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1472_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1472_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0___boxed(lean_object* v_k_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(v_k_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(lean_object* v_k_1515_, lean_object* v_parentTag_1516_, lean_object* v_tagSuffix_1517_, uint8_t v_allowNaturalHoles_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_){
_start:
{
lean_object* v___x_1528_; 
lean_inc(v_a_1526_);
lean_inc_ref(v_a_1525_);
lean_inc(v_a_1524_);
lean_inc_ref(v_a_1523_);
lean_inc(v_a_1522_);
lean_inc_ref(v_a_1521_);
lean_inc(v_a_1520_);
lean_inc_ref(v_a_1519_);
v___x_1528_ = l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(v_k_1515_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_);
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v_a_1529_; lean_object* v_fst_1530_; lean_object* v_snd_1531_; lean_object* v___x_1533_; uint8_t v_isShared_1534_; uint8_t v_isSharedCheck_1624_; 
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_a_1529_);
lean_dec_ref(v___x_1528_);
v_fst_1530_ = lean_ctor_get(v_a_1529_, 0);
v_snd_1531_ = lean_ctor_get(v_a_1529_, 1);
v_isSharedCheck_1624_ = !lean_is_exclusive(v_a_1529_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1533_ = v_a_1529_;
v_isShared_1534_ = v_isSharedCheck_1624_;
goto v_resetjp_1532_;
}
else
{
lean_inc(v_snd_1531_);
lean_inc(v_fst_1530_);
lean_dec(v_a_1529_);
v___x_1533_ = lean_box(0);
v_isShared_1534_ = v_isSharedCheck_1624_;
goto v_resetjp_1532_;
}
v_resetjp_1532_:
{
lean_object* v___y_1536_; lean_object* v___y_1537_; lean_object* v___y_1538_; lean_object* v___y_1539_; lean_object* v___y_1540_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1567_; lean_object* v_a_1568_; lean_object* v___y_1579_; lean_object* v___y_1580_; lean_object* v___x_1590_; lean_object* v_a_1592_; lean_object* v___y_1604_; lean_object* v___x_1614_; lean_object* v___x_1615_; uint8_t v___x_1616_; 
v___x_1590_ = lean_unsigned_to_nat(0u);
v___x_1614_ = lean_array_get_size(v_snd_1531_);
v___x_1615_ = ((lean_object*)(l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0));
v___x_1616_ = lean_nat_dec_lt(v___x_1590_, v___x_1614_);
if (v___x_1616_ == 0)
{
lean_dec(v_snd_1531_);
v_a_1592_ = v___x_1615_;
goto v___jp_1591_;
}
else
{
uint8_t v___x_1617_; 
v___x_1617_ = lean_nat_dec_le(v___x_1614_, v___x_1614_);
if (v___x_1617_ == 0)
{
if (v___x_1616_ == 0)
{
lean_dec(v_snd_1531_);
v_a_1592_ = v___x_1615_;
goto v___jp_1591_;
}
else
{
size_t v___x_1618_; size_t v___x_1619_; lean_object* v___x_1620_; 
v___x_1618_ = ((size_t)0ULL);
v___x_1619_ = lean_usize_of_nat(v___x_1614_);
v___x_1620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_snd_1531_, v___x_1618_, v___x_1619_, v___x_1615_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_);
lean_dec(v_snd_1531_);
v___y_1604_ = v___x_1620_;
goto v___jp_1603_;
}
}
else
{
size_t v___x_1621_; size_t v___x_1622_; lean_object* v___x_1623_; 
v___x_1621_ = ((size_t)0ULL);
v___x_1622_ = lean_usize_of_nat(v___x_1614_);
v___x_1623_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_snd_1531_, v___x_1621_, v___x_1622_, v___x_1615_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_);
lean_dec(v_snd_1531_);
v___y_1604_ = v___x_1623_;
goto v___jp_1603_;
}
}
v___jp_1535_:
{
lean_object* v___x_1545_; lean_object* v___x_1546_; 
v___x_1545_ = lean_array_to_list(v___y_1536_);
lean_inc(v___x_1545_);
v___x_1546_ = l_Lean_Elab_Tactic_tagUntaggedGoals(v_parentTag_1516_, v_tagSuffix_1517_, v___x_1545_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1556_; 
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1556_ == 0)
{
lean_object* v_unused_1557_; 
v_unused_1557_ = lean_ctor_get(v___x_1546_, 0);
lean_dec(v_unused_1557_);
v___x_1548_ = v___x_1546_;
v_isShared_1549_ = v_isSharedCheck_1556_;
goto v_resetjp_1547_;
}
else
{
lean_dec(v___x_1546_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1556_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1551_; 
if (v_isShared_1534_ == 0)
{
lean_ctor_set(v___x_1533_, 1, v___x_1545_);
v___x_1551_ = v___x_1533_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_fst_1530_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v___x_1545_);
v___x_1551_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
lean_object* v___x_1553_; 
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 0, v___x_1551_);
v___x_1553_ = v___x_1548_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1551_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_dec(v___x_1545_);
lean_del_object(v___x_1533_);
lean_dec(v_fst_1530_);
v_a_1558_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1546_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1546_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
v___jp_1566_:
{
lean_object* v___x_1569_; 
lean_inc(v_a_1526_);
lean_inc_ref(v_a_1525_);
lean_inc(v_a_1524_);
lean_inc_ref(v_a_1523_);
lean_inc(v_a_1522_);
lean_inc_ref(v_a_1521_);
v___x_1569_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_a_1568_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_);
lean_dec_ref(v_a_1568_);
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_dec_ref(v___x_1569_);
v___y_1536_ = v___y_1567_;
v___y_1537_ = v_a_1519_;
v___y_1538_ = v_a_1520_;
v___y_1539_ = v_a_1521_;
v___y_1540_ = v_a_1522_;
v___y_1541_ = v_a_1523_;
v___y_1542_ = v_a_1524_;
v___y_1543_ = v_a_1525_;
v___y_1544_ = v_a_1526_;
goto v___jp_1535_;
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
lean_dec_ref(v___y_1567_);
lean_del_object(v___x_1533_);
lean_dec(v_fst_1530_);
lean_dec(v_a_1526_);
lean_dec_ref(v_a_1525_);
lean_dec(v_a_1524_);
lean_dec_ref(v_a_1523_);
lean_dec(v_a_1522_);
lean_dec_ref(v_a_1521_);
lean_dec(v_a_1520_);
lean_dec_ref(v_a_1519_);
lean_dec(v_tagSuffix_1517_);
lean_dec(v_parentTag_1516_);
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1569_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1569_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
v___jp_1578_:
{
if (lean_obj_tag(v___y_1580_) == 0)
{
lean_object* v_a_1581_; 
v_a_1581_ = lean_ctor_get(v___y_1580_, 0);
lean_inc(v_a_1581_);
lean_dec_ref(v___y_1580_);
v___y_1567_ = v___y_1579_;
v_a_1568_ = v_a_1581_;
goto v___jp_1566_;
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec_ref(v___y_1579_);
lean_del_object(v___x_1533_);
lean_dec(v_fst_1530_);
lean_dec(v_a_1526_);
lean_dec_ref(v_a_1525_);
lean_dec(v_a_1524_);
lean_dec_ref(v_a_1523_);
lean_dec(v_a_1522_);
lean_dec_ref(v_a_1521_);
lean_dec(v_a_1520_);
lean_dec_ref(v_a_1519_);
lean_dec(v_tagSuffix_1517_);
lean_dec(v_parentTag_1516_);
v_a_1582_ = lean_ctor_get(v___y_1580_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___y_1580_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___y_1580_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___y_1580_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
v___jp_1591_:
{
if (v_allowNaturalHoles_1518_ == 0)
{
lean_object* v___x_1593_; lean_object* v___x_1594_; uint8_t v___x_1595_; 
v___x_1593_ = lean_array_get_size(v_a_1592_);
v___x_1594_ = ((lean_object*)(l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0));
v___x_1595_ = lean_nat_dec_lt(v___x_1590_, v___x_1593_);
if (v___x_1595_ == 0)
{
v___y_1567_ = v_a_1592_;
v_a_1568_ = v___x_1594_;
goto v___jp_1566_;
}
else
{
uint8_t v___x_1596_; 
v___x_1596_ = lean_nat_dec_le(v___x_1593_, v___x_1593_);
if (v___x_1596_ == 0)
{
if (v___x_1595_ == 0)
{
v___y_1567_ = v_a_1592_;
v_a_1568_ = v___x_1594_;
goto v___jp_1566_;
}
else
{
size_t v___x_1597_; size_t v___x_1598_; lean_object* v___x_1599_; 
v___x_1597_ = ((size_t)0ULL);
v___x_1598_ = lean_usize_of_nat(v___x_1593_);
v___x_1599_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_a_1592_, v___x_1597_, v___x_1598_, v___x_1594_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_);
v___y_1579_ = v_a_1592_;
v___y_1580_ = v___x_1599_;
goto v___jp_1578_;
}
}
else
{
size_t v___x_1600_; size_t v___x_1601_; lean_object* v___x_1602_; 
v___x_1600_ = ((size_t)0ULL);
v___x_1601_ = lean_usize_of_nat(v___x_1593_);
v___x_1602_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_a_1592_, v___x_1600_, v___x_1601_, v___x_1594_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_);
v___y_1579_ = v_a_1592_;
v___y_1580_ = v___x_1602_;
goto v___jp_1578_;
}
}
}
else
{
v___y_1536_ = v_a_1592_;
v___y_1537_ = v_a_1519_;
v___y_1538_ = v_a_1520_;
v___y_1539_ = v_a_1521_;
v___y_1540_ = v_a_1522_;
v___y_1541_ = v_a_1523_;
v___y_1542_ = v_a_1524_;
v___y_1543_ = v_a_1525_;
v___y_1544_ = v_a_1526_;
goto v___jp_1535_;
}
}
v___jp_1603_:
{
if (lean_obj_tag(v___y_1604_) == 0)
{
lean_object* v_a_1605_; 
v_a_1605_ = lean_ctor_get(v___y_1604_, 0);
lean_inc(v_a_1605_);
lean_dec_ref(v___y_1604_);
v_a_1592_ = v_a_1605_;
goto v___jp_1591_;
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
lean_del_object(v___x_1533_);
lean_dec(v_fst_1530_);
lean_dec(v_a_1526_);
lean_dec_ref(v_a_1525_);
lean_dec(v_a_1524_);
lean_dec_ref(v_a_1523_);
lean_dec(v_a_1522_);
lean_dec_ref(v_a_1521_);
lean_dec(v_a_1520_);
lean_dec_ref(v_a_1519_);
lean_dec(v_tagSuffix_1517_);
lean_dec(v_parentTag_1516_);
v_a_1606_ = lean_ctor_get(v___y_1604_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___y_1604_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___y_1604_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___y_1604_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
}
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec(v_a_1526_);
lean_dec_ref(v_a_1525_);
lean_dec(v_a_1524_);
lean_dec_ref(v_a_1523_);
lean_dec(v_a_1522_);
lean_dec_ref(v_a_1521_);
lean_dec(v_a_1520_);
lean_dec_ref(v_a_1519_);
lean_dec(v_tagSuffix_1517_);
lean_dec(v_parentTag_1516_);
v_a_1625_ = lean_ctor_get(v___x_1528_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1528_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1528_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go___boxed(lean_object* v_k_1633_, lean_object* v_parentTag_1634_, lean_object* v_tagSuffix_1635_, lean_object* v_allowNaturalHoles_1636_, lean_object* v_a_1637_, lean_object* v_a_1638_, lean_object* v_a_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_1646_; lean_object* v_res_1647_; 
v_allowNaturalHoles_boxed_1646_ = lean_unbox(v_allowNaturalHoles_1636_);
v_res_1647_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(v_k_1633_, v_parentTag_1634_, v_tagSuffix_1635_, v_allowNaturalHoles_boxed_1646_, v_a_1637_, v_a_1638_, v_a_1639_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_, v_a_1644_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1(lean_object* v_as_1648_, size_t v_i_1649_, size_t v_stop_1650_, lean_object* v_b_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_as_1648_, v_i_1649_, v_stop_1650_, v_b_1651_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___boxed(lean_object* v_as_1662_, lean_object* v_i_1663_, lean_object* v_stop_1664_, lean_object* v_b_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_){
_start:
{
size_t v_i_boxed_1675_; size_t v_stop_boxed_1676_; lean_object* v_res_1677_; 
v_i_boxed_1675_ = lean_unbox_usize(v_i_1663_);
lean_dec(v_i_1663_);
v_stop_boxed_1676_ = lean_unbox_usize(v_stop_1664_);
lean_dec(v_stop_1664_);
v_res_1677_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1(v_as_1662_, v_i_boxed_1675_, v_stop_boxed_1676_, v_b_1665_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
lean_dec(v___y_1667_);
lean_dec_ref(v___y_1666_);
lean_dec_ref(v_as_1662_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2(lean_object* v_as_1678_, size_t v_i_1679_, size_t v_stop_1680_, lean_object* v_b_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_as_1678_, v_i_1679_, v_stop_1680_, v_b_1681_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___boxed(lean_object* v_as_1692_, lean_object* v_i_1693_, lean_object* v_stop_1694_, lean_object* v_b_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
size_t v_i_boxed_1705_; size_t v_stop_boxed_1706_; lean_object* v_res_1707_; 
v_i_boxed_1705_ = lean_unbox_usize(v_i_1693_);
lean_dec(v_i_1693_);
v_stop_boxed_1706_ = lean_unbox_usize(v_stop_1694_);
lean_dec(v_stop_1694_);
v_res_1707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2(v_as_1692_, v_i_boxed_1705_, v_stop_boxed_1706_, v_b_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
lean_dec(v___y_1697_);
lean_dec_ref(v___y_1696_);
lean_dec_ref(v_as_1692_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0(lean_object* v_mvarIds_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v___x_1714_; 
v___x_1714_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(v_mvarIds_1708_, v___y_1710_);
return v___x_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___boxed(lean_object* v_mvarIds_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0(v_mvarIds_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1(lean_object* v___x_1722_, lean_object* v_n_1723_, lean_object* v_as_1724_, lean_object* v_lo_1725_, lean_object* v_hi_1726_, lean_object* v_w_1727_, lean_object* v_hlo_1728_, lean_object* v_hhi_1729_){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v___x_1722_, v_as_1724_, v_lo_1725_, v_hi_1726_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___boxed(lean_object* v___x_1731_, lean_object* v_n_1732_, lean_object* v_as_1733_, lean_object* v_lo_1734_, lean_object* v_hi_1735_, lean_object* v_w_1736_, lean_object* v_hlo_1737_, lean_object* v_hhi_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1(v___x_1731_, v_n_1732_, v_as_1733_, v_lo_1734_, v_hi_1735_, v_w_1736_, v_hlo_1737_, v_hhi_1738_);
lean_dec(v_hi_1735_);
lean_dec(v_n_1732_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(lean_object* v_k_1740_, lean_object* v_parentTag_1741_, lean_object* v_tagSuffix_1742_, uint8_t v_allowNaturalHoles_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_, lean_object* v_a_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_){
_start:
{
if (v_allowNaturalHoles_1743_ == 0)
{
lean_object* v___x_1753_; 
v___x_1753_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(v_k_1740_, v_parentTag_1741_, v_tagSuffix_1742_, v_allowNaturalHoles_1743_, v_a_1744_, v_a_1745_, v_a_1746_, v_a_1747_, v_a_1748_, v_a_1749_, v_a_1750_, v_a_1751_);
return v___x_1753_;
}
else
{
lean_object* v_declName_x3f_1754_; lean_object* v_macroStack_1755_; uint8_t v_mayPostpone_1756_; uint8_t v_errToSorry_1757_; lean_object* v_autoBoundImplicitContext_1758_; lean_object* v_autoBoundImplicitForbidden_1759_; lean_object* v_sectionVars_1760_; lean_object* v_sectionFVars_1761_; uint8_t v_implicitLambda_1762_; uint8_t v_heedElabAsElim_1763_; uint8_t v_isNoncomputableSection_1764_; uint8_t v_isMetaSection_1765_; uint8_t v_ignoreTCFailures_1766_; uint8_t v_inPattern_1767_; lean_object* v_tacSnap_x3f_1768_; uint8_t v_saveRecAppSyntax_1769_; uint8_t v_holesAsSyntheticOpaque_1770_; uint8_t v_checkDeprecated_1771_; lean_object* v_fixedTermElabs_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1836_; 
v_declName_x3f_1754_ = lean_ctor_get(v_a_1746_, 0);
v_macroStack_1755_ = lean_ctor_get(v_a_1746_, 1);
v_mayPostpone_1756_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8);
v_errToSorry_1757_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_1758_ = lean_ctor_get(v_a_1746_, 2);
v_autoBoundImplicitForbidden_1759_ = lean_ctor_get(v_a_1746_, 3);
v_sectionVars_1760_ = lean_ctor_get(v_a_1746_, 4);
v_sectionFVars_1761_ = lean_ctor_get(v_a_1746_, 5);
v_implicitLambda_1762_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8 + 2);
v_heedElabAsElim_1763_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_1764_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8 + 4);
v_isMetaSection_1765_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_1766_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8 + 6);
v_inPattern_1767_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_1768_ = lean_ctor_get(v_a_1746_, 6);
v_saveRecAppSyntax_1769_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_1770_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8 + 9);
v_checkDeprecated_1771_ = lean_ctor_get_uint8(v_a_1746_, sizeof(void*)*8 + 10);
v_fixedTermElabs_1772_ = lean_ctor_get(v_a_1746_, 7);
v_isSharedCheck_1836_ = !lean_is_exclusive(v_a_1746_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1774_ = v_a_1746_;
v_isShared_1775_ = v_isSharedCheck_1836_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_fixedTermElabs_1772_);
lean_inc(v_tacSnap_x3f_1768_);
lean_inc(v_sectionFVars_1761_);
lean_inc(v_sectionVars_1760_);
lean_inc(v_autoBoundImplicitForbidden_1759_);
lean_inc(v_autoBoundImplicitContext_1758_);
lean_inc(v_macroStack_1755_);
lean_inc(v_declName_x3f_1754_);
lean_dec(v_a_1746_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1836_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
uint8_t v___y_1777_; 
if (v_holesAsSyntheticOpaque_1770_ == 0)
{
v___y_1777_ = v_allowNaturalHoles_1743_;
goto v___jp_1776_;
}
else
{
v___y_1777_ = v_holesAsSyntheticOpaque_1770_;
goto v___jp_1776_;
}
v___jp_1776_:
{
lean_object* v___x_1778_; uint8_t v_foApprox_1779_; uint8_t v_ctxApprox_1780_; uint8_t v_quasiPatternApprox_1781_; uint8_t v_constApprox_1782_; uint8_t v_isDefEqStuckEx_1783_; uint8_t v_unificationHints_1784_; uint8_t v_proofIrrelevance_1785_; uint8_t v_offsetCnstrs_1786_; uint8_t v_transparency_1787_; uint8_t v_etaStruct_1788_; uint8_t v_univApprox_1789_; uint8_t v_iota_1790_; uint8_t v_beta_1791_; uint8_t v_proj_1792_; uint8_t v_zeta_1793_; uint8_t v_zetaDelta_1794_; uint8_t v_zetaUnused_1795_; uint8_t v_zetaHave_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1835_; 
v___x_1778_ = l_Lean_Meta_Context_config(v_a_1748_);
v_foApprox_1779_ = lean_ctor_get_uint8(v___x_1778_, 0);
v_ctxApprox_1780_ = lean_ctor_get_uint8(v___x_1778_, 1);
v_quasiPatternApprox_1781_ = lean_ctor_get_uint8(v___x_1778_, 2);
v_constApprox_1782_ = lean_ctor_get_uint8(v___x_1778_, 3);
v_isDefEqStuckEx_1783_ = lean_ctor_get_uint8(v___x_1778_, 4);
v_unificationHints_1784_ = lean_ctor_get_uint8(v___x_1778_, 5);
v_proofIrrelevance_1785_ = lean_ctor_get_uint8(v___x_1778_, 6);
v_offsetCnstrs_1786_ = lean_ctor_get_uint8(v___x_1778_, 8);
v_transparency_1787_ = lean_ctor_get_uint8(v___x_1778_, 9);
v_etaStruct_1788_ = lean_ctor_get_uint8(v___x_1778_, 10);
v_univApprox_1789_ = lean_ctor_get_uint8(v___x_1778_, 11);
v_iota_1790_ = lean_ctor_get_uint8(v___x_1778_, 12);
v_beta_1791_ = lean_ctor_get_uint8(v___x_1778_, 13);
v_proj_1792_ = lean_ctor_get_uint8(v___x_1778_, 14);
v_zeta_1793_ = lean_ctor_get_uint8(v___x_1778_, 15);
v_zetaDelta_1794_ = lean_ctor_get_uint8(v___x_1778_, 16);
v_zetaUnused_1795_ = lean_ctor_get_uint8(v___x_1778_, 17);
v_zetaHave_1796_ = lean_ctor_get_uint8(v___x_1778_, 18);
v_isSharedCheck_1835_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1798_ = v___x_1778_;
v_isShared_1799_ = v_isSharedCheck_1835_;
goto v_resetjp_1797_;
}
else
{
lean_dec(v___x_1778_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1835_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
uint8_t v_trackZetaDelta_1800_; lean_object* v_zetaDeltaSet_1801_; lean_object* v_lctx_1802_; lean_object* v_localInstances_1803_; lean_object* v_defEqCtx_x3f_1804_; lean_object* v_synthPendingDepth_1805_; lean_object* v_canUnfold_x3f_1806_; uint8_t v_univApprox_1807_; uint8_t v_inTypeClassResolution_1808_; uint8_t v_cacheInferType_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1833_; 
v_trackZetaDelta_1800_ = lean_ctor_get_uint8(v_a_1748_, sizeof(void*)*7);
v_zetaDeltaSet_1801_ = lean_ctor_get(v_a_1748_, 1);
v_lctx_1802_ = lean_ctor_get(v_a_1748_, 2);
v_localInstances_1803_ = lean_ctor_get(v_a_1748_, 3);
v_defEqCtx_x3f_1804_ = lean_ctor_get(v_a_1748_, 4);
v_synthPendingDepth_1805_ = lean_ctor_get(v_a_1748_, 5);
v_canUnfold_x3f_1806_ = lean_ctor_get(v_a_1748_, 6);
v_univApprox_1807_ = lean_ctor_get_uint8(v_a_1748_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1808_ = lean_ctor_get_uint8(v_a_1748_, sizeof(void*)*7 + 2);
v_cacheInferType_1809_ = lean_ctor_get_uint8(v_a_1748_, sizeof(void*)*7 + 3);
v_isSharedCheck_1833_ = !lean_is_exclusive(v_a_1748_);
if (v_isSharedCheck_1833_ == 0)
{
lean_object* v_unused_1834_; 
v_unused_1834_ = lean_ctor_get(v_a_1748_, 0);
lean_dec(v_unused_1834_);
v___x_1811_ = v_a_1748_;
v_isShared_1812_ = v_isSharedCheck_1833_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_canUnfold_x3f_1806_);
lean_inc(v_synthPendingDepth_1805_);
lean_inc(v_defEqCtx_x3f_1804_);
lean_inc(v_localInstances_1803_);
lean_inc(v_lctx_1802_);
lean_inc(v_zetaDeltaSet_1801_);
lean_dec(v_a_1748_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1833_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v___x_1814_; 
if (v_isShared_1799_ == 0)
{
v___x_1814_ = v___x_1798_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 0, v_foApprox_1779_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 1, v_ctxApprox_1780_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 2, v_quasiPatternApprox_1781_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 3, v_constApprox_1782_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 4, v_isDefEqStuckEx_1783_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 5, v_unificationHints_1784_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 6, v_proofIrrelevance_1785_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 8, v_offsetCnstrs_1786_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 9, v_transparency_1787_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 10, v_etaStruct_1788_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 11, v_univApprox_1789_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 12, v_iota_1790_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 13, v_beta_1791_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 14, v_proj_1792_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 15, v_zeta_1793_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 16, v_zetaDelta_1794_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 17, v_zetaUnused_1795_);
lean_ctor_set_uint8(v_reuseFailAlloc_1832_, 18, v_zetaHave_1796_);
v___x_1814_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
uint64_t v___x_1815_; lean_object* v___x_1817_; 
lean_ctor_set_uint8(v___x_1814_, 7, v_allowNaturalHoles_1743_);
v___x_1815_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1814_);
if (v_isShared_1775_ == 0)
{
v___x_1817_ = v___x_1774_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1831_; 
v_reuseFailAlloc_1831_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v_reuseFailAlloc_1831_, 0, v_declName_x3f_1754_);
lean_ctor_set(v_reuseFailAlloc_1831_, 1, v_macroStack_1755_);
lean_ctor_set(v_reuseFailAlloc_1831_, 2, v_autoBoundImplicitContext_1758_);
lean_ctor_set(v_reuseFailAlloc_1831_, 3, v_autoBoundImplicitForbidden_1759_);
lean_ctor_set(v_reuseFailAlloc_1831_, 4, v_sectionVars_1760_);
lean_ctor_set(v_reuseFailAlloc_1831_, 5, v_sectionFVars_1761_);
lean_ctor_set(v_reuseFailAlloc_1831_, 6, v_tacSnap_x3f_1768_);
lean_ctor_set(v_reuseFailAlloc_1831_, 7, v_fixedTermElabs_1772_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8, v_mayPostpone_1756_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8 + 1, v_errToSorry_1757_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8 + 2, v_implicitLambda_1762_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8 + 3, v_heedElabAsElim_1763_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8 + 4, v_isNoncomputableSection_1764_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8 + 5, v_isMetaSection_1765_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8 + 6, v_ignoreTCFailures_1766_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8 + 7, v_inPattern_1767_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_1769_);
lean_ctor_set_uint8(v_reuseFailAlloc_1831_, sizeof(void*)*8 + 10, v_checkDeprecated_1771_);
v___x_1817_ = v_reuseFailAlloc_1831_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
lean_object* v___x_1818_; lean_object* v___x_1820_; 
lean_ctor_set_uint8(v___x_1817_, sizeof(void*)*8 + 9, v___y_1777_);
v___x_1818_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1818_, 0, v___x_1814_);
lean_ctor_set_uint64(v___x_1818_, sizeof(void*)*1, v___x_1815_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set(v___x_1811_, 0, v___x_1818_);
v___x_1820_ = v___x_1811_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v___x_1818_);
lean_ctor_set(v_reuseFailAlloc_1830_, 1, v_zetaDeltaSet_1801_);
lean_ctor_set(v_reuseFailAlloc_1830_, 2, v_lctx_1802_);
lean_ctor_set(v_reuseFailAlloc_1830_, 3, v_localInstances_1803_);
lean_ctor_set(v_reuseFailAlloc_1830_, 4, v_defEqCtx_x3f_1804_);
lean_ctor_set(v_reuseFailAlloc_1830_, 5, v_synthPendingDepth_1805_);
lean_ctor_set(v_reuseFailAlloc_1830_, 6, v_canUnfold_x3f_1806_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*7, v_trackZetaDelta_1800_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*7 + 1, v_univApprox_1807_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1808_);
lean_ctor_set_uint8(v_reuseFailAlloc_1830_, sizeof(void*)*7 + 3, v_cacheInferType_1809_);
v___x_1820_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
lean_object* v___x_1821_; 
v___x_1821_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(v_k_1740_, v_parentTag_1741_, v_tagSuffix_1742_, v_allowNaturalHoles_1743_, v_a_1744_, v_a_1745_, v___x_1817_, v_a_1747_, v___x_1820_, v_a_1749_, v_a_1750_, v_a_1751_);
if (lean_obj_tag(v___x_1821_) == 0)
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1821_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1824_ = v___x_1821_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1821_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_a_1822_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
}
else
{
return v___x_1821_;
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom___boxed(lean_object* v_k_1837_, lean_object* v_parentTag_1838_, lean_object* v_tagSuffix_1839_, lean_object* v_allowNaturalHoles_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_1850_; lean_object* v_res_1851_; 
v_allowNaturalHoles_boxed_1850_ = lean_unbox(v_allowNaturalHoles_1840_);
v_res_1851_ = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(v_k_1837_, v_parentTag_1838_, v_tagSuffix_1839_, v_allowNaturalHoles_boxed_1850_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_);
return v_res_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles(lean_object* v_stx_1852_, lean_object* v_expectedType_x3f_1853_, lean_object* v_tagSuffix_1854_, uint8_t v_allowNaturalHoles_1855_, lean_object* v_parentTag_x3f_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_){
_start:
{
lean_object* v_a_1867_; 
if (lean_obj_tag(v_parentTag_x3f_1856_) == 0)
{
lean_object* v___x_1872_; 
v___x_1872_ = l_Lean_Elab_Tactic_getMainTag___redArg(v_a_1858_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_object* v_a_1873_; 
v_a_1873_ = lean_ctor_get(v___x_1872_, 0);
lean_inc(v_a_1873_);
lean_dec_ref(v___x_1872_);
v_a_1867_ = v_a_1873_;
goto v___jp_1866_;
}
else
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
lean_dec(v_a_1864_);
lean_dec_ref(v_a_1863_);
lean_dec(v_a_1862_);
lean_dec_ref(v_a_1861_);
lean_dec(v_a_1860_);
lean_dec_ref(v_a_1859_);
lean_dec(v_a_1858_);
lean_dec_ref(v_a_1857_);
lean_dec(v_tagSuffix_1854_);
lean_dec(v_expectedType_x3f_1853_);
lean_dec(v_stx_1852_);
v_a_1874_ = lean_ctor_get(v___x_1872_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1872_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1876_ = v___x_1872_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1872_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1874_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
else
{
lean_object* v_val_1882_; 
v_val_1882_ = lean_ctor_get(v_parentTag_x3f_1856_, 0);
lean_inc(v_val_1882_);
lean_dec_ref(v_parentTag_x3f_1856_);
v_a_1867_ = v_val_1882_;
goto v___jp_1866_;
}
v___jp_1866_:
{
uint8_t v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1868_ = 0;
v___x_1869_ = lean_box(v___x_1868_);
v___x_1870_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTermEnsuringType___boxed), 12, 3);
lean_closure_set(v___x_1870_, 0, v_stx_1852_);
lean_closure_set(v___x_1870_, 1, v_expectedType_x3f_1853_);
lean_closure_set(v___x_1870_, 2, v___x_1869_);
v___x_1871_ = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(v___x_1870_, v_a_1867_, v_tagSuffix_1854_, v_allowNaturalHoles_1855_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_);
return v___x_1871_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles___boxed(lean_object* v_stx_1883_, lean_object* v_expectedType_x3f_1884_, lean_object* v_tagSuffix_1885_, lean_object* v_allowNaturalHoles_1886_, lean_object* v_parentTag_x3f_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_1897_; lean_object* v_res_1898_; 
v_allowNaturalHoles_boxed_1897_ = lean_unbox(v_allowNaturalHoles_1886_);
v_res_1898_ = l_Lean_Elab_Tactic_elabTermWithHoles(v_stx_1883_, v_expectedType_x3f_1884_, v_tagSuffix_1885_, v_allowNaturalHoles_boxed_1897_, v_parentTag_x3f_1887_, v_a_1888_, v_a_1889_, v_a_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_);
return v_res_1898_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_refineCore___lam__0(lean_object* v_a_1899_, lean_object* v_x_1900_){
_start:
{
uint8_t v___x_1901_; 
v___x_1901_ = l_Lean_instBEqMVarId_beq(v_x_1900_, v_a_1899_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__0___boxed(lean_object* v_a_1902_, lean_object* v_x_1903_){
_start:
{
uint8_t v_res_1904_; lean_object* v_r_1905_; 
v_res_1904_ = l_Lean_Elab_Tactic_refineCore___lam__0(v_a_1902_, v_x_1903_);
lean_dec(v_x_1903_);
lean_dec(v_a_1902_);
v_r_1905_ = lean_box(v_res_1904_);
return v_r_1905_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(lean_object* v_x_1906_, lean_object* v_x_1907_, lean_object* v_x_1908_, lean_object* v_x_1909_){
_start:
{
lean_object* v_ks_1910_; lean_object* v_vs_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1935_; 
v_ks_1910_ = lean_ctor_get(v_x_1906_, 0);
v_vs_1911_ = lean_ctor_get(v_x_1906_, 1);
v_isSharedCheck_1935_ = !lean_is_exclusive(v_x_1906_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1913_ = v_x_1906_;
v_isShared_1914_ = v_isSharedCheck_1935_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_vs_1911_);
lean_inc(v_ks_1910_);
lean_dec(v_x_1906_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1935_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1915_; uint8_t v___x_1916_; 
v___x_1915_ = lean_array_get_size(v_ks_1910_);
v___x_1916_ = lean_nat_dec_lt(v_x_1907_, v___x_1915_);
if (v___x_1916_ == 0)
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1920_; 
lean_dec(v_x_1907_);
v___x_1917_ = lean_array_push(v_ks_1910_, v_x_1908_);
v___x_1918_ = lean_array_push(v_vs_1911_, v_x_1909_);
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 1, v___x_1918_);
lean_ctor_set(v___x_1913_, 0, v___x_1917_);
v___x_1920_ = v___x_1913_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v___x_1917_);
lean_ctor_set(v_reuseFailAlloc_1921_, 1, v___x_1918_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
else
{
lean_object* v_k_x27_1922_; uint8_t v___x_1923_; 
v_k_x27_1922_ = lean_array_fget_borrowed(v_ks_1910_, v_x_1907_);
v___x_1923_ = l_Lean_instBEqMVarId_beq(v_x_1908_, v_k_x27_1922_);
if (v___x_1923_ == 0)
{
lean_object* v___x_1925_; 
if (v_isShared_1914_ == 0)
{
v___x_1925_ = v___x_1913_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_ks_1910_);
lean_ctor_set(v_reuseFailAlloc_1929_, 1, v_vs_1911_);
v___x_1925_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1926_ = lean_unsigned_to_nat(1u);
v___x_1927_ = lean_nat_add(v_x_1907_, v___x_1926_);
lean_dec(v_x_1907_);
v_x_1906_ = v___x_1925_;
v_x_1907_ = v___x_1927_;
goto _start;
}
}
else
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1933_; 
v___x_1930_ = lean_array_fset(v_ks_1910_, v_x_1907_, v_x_1908_);
v___x_1931_ = lean_array_fset(v_vs_1911_, v_x_1907_, v_x_1909_);
lean_dec(v_x_1907_);
if (v_isShared_1914_ == 0)
{
lean_ctor_set(v___x_1913_, 1, v___x_1931_);
lean_ctor_set(v___x_1913_, 0, v___x_1930_);
v___x_1933_ = v___x_1913_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1930_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v___x_1931_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_n_1936_, lean_object* v_k_1937_, lean_object* v_v_1938_){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1939_ = lean_unsigned_to_nat(0u);
v___x_1940_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(v_n_1936_, v___x_1939_, v_k_1937_, v_v_1938_);
return v___x_1940_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_1941_; size_t v___x_1942_; size_t v___x_1943_; 
v___x_1941_ = ((size_t)5ULL);
v___x_1942_ = ((size_t)1ULL);
v___x_1943_ = lean_usize_shift_left(v___x_1942_, v___x_1941_);
return v___x_1943_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_1944_; size_t v___x_1945_; size_t v___x_1946_; 
v___x_1944_ = ((size_t)1ULL);
v___x_1945_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_1946_ = lean_usize_sub(v___x_1945_, v___x_1944_);
return v___x_1946_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1947_; 
v___x_1947_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1948_, size_t v_x_1949_, size_t v_x_1950_, lean_object* v_x_1951_, lean_object* v_x_1952_){
_start:
{
if (lean_obj_tag(v_x_1948_) == 0)
{
lean_object* v_es_1953_; size_t v___x_1954_; size_t v___x_1955_; size_t v___x_1956_; size_t v___x_1957_; lean_object* v_j_1958_; lean_object* v___x_1959_; uint8_t v___x_1960_; 
v_es_1953_ = lean_ctor_get(v_x_1948_, 0);
v___x_1954_ = ((size_t)5ULL);
v___x_1955_ = ((size_t)1ULL);
v___x_1956_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1957_ = lean_usize_land(v_x_1949_, v___x_1956_);
v_j_1958_ = lean_usize_to_nat(v___x_1957_);
v___x_1959_ = lean_array_get_size(v_es_1953_);
v___x_1960_ = lean_nat_dec_lt(v_j_1958_, v___x_1959_);
if (v___x_1960_ == 0)
{
lean_dec(v_j_1958_);
lean_dec(v_x_1952_);
lean_dec(v_x_1951_);
return v_x_1948_;
}
else
{
lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1997_; 
lean_inc_ref(v_es_1953_);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_x_1948_);
if (v_isSharedCheck_1997_ == 0)
{
lean_object* v_unused_1998_; 
v_unused_1998_ = lean_ctor_get(v_x_1948_, 0);
lean_dec(v_unused_1998_);
v___x_1962_ = v_x_1948_;
v_isShared_1963_ = v_isSharedCheck_1997_;
goto v_resetjp_1961_;
}
else
{
lean_dec(v_x_1948_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1997_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
lean_object* v_v_1964_; lean_object* v___x_1965_; lean_object* v_xs_x27_1966_; lean_object* v___y_1968_; 
v_v_1964_ = lean_array_fget(v_es_1953_, v_j_1958_);
v___x_1965_ = lean_box(0);
v_xs_x27_1966_ = lean_array_fset(v_es_1953_, v_j_1958_, v___x_1965_);
switch(lean_obj_tag(v_v_1964_))
{
case 0:
{
lean_object* v_key_1973_; lean_object* v_val_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1984_; 
v_key_1973_ = lean_ctor_get(v_v_1964_, 0);
v_val_1974_ = lean_ctor_get(v_v_1964_, 1);
v_isSharedCheck_1984_ = !lean_is_exclusive(v_v_1964_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1976_ = v_v_1964_;
v_isShared_1977_ = v_isSharedCheck_1984_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_val_1974_);
lean_inc(v_key_1973_);
lean_dec(v_v_1964_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1984_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
uint8_t v___x_1978_; 
v___x_1978_ = l_Lean_instBEqMVarId_beq(v_x_1951_, v_key_1973_);
if (v___x_1978_ == 0)
{
lean_object* v___x_1979_; lean_object* v___x_1980_; 
lean_del_object(v___x_1976_);
v___x_1979_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1973_, v_val_1974_, v_x_1951_, v_x_1952_);
v___x_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
v___y_1968_ = v___x_1980_;
goto v___jp_1967_;
}
else
{
lean_object* v___x_1982_; 
lean_dec(v_val_1974_);
lean_dec(v_key_1973_);
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 1, v_x_1952_);
lean_ctor_set(v___x_1976_, 0, v_x_1951_);
v___x_1982_ = v___x_1976_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_x_1951_);
lean_ctor_set(v_reuseFailAlloc_1983_, 1, v_x_1952_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
v___y_1968_ = v___x_1982_;
goto v___jp_1967_;
}
}
}
}
case 1:
{
lean_object* v_node_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1995_; 
v_node_1985_ = lean_ctor_get(v_v_1964_, 0);
v_isSharedCheck_1995_ = !lean_is_exclusive(v_v_1964_);
if (v_isSharedCheck_1995_ == 0)
{
v___x_1987_ = v_v_1964_;
v_isShared_1988_ = v_isSharedCheck_1995_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_node_1985_);
lean_dec(v_v_1964_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1995_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
size_t v___x_1989_; size_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1993_; 
v___x_1989_ = lean_usize_shift_right(v_x_1949_, v___x_1954_);
v___x_1990_ = lean_usize_add(v_x_1950_, v___x_1955_);
v___x_1991_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_node_1985_, v___x_1989_, v___x_1990_, v_x_1951_, v_x_1952_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_1991_);
v___x_1993_ = v___x_1987_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___x_1991_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
v___y_1968_ = v___x_1993_;
goto v___jp_1967_;
}
}
}
default: 
{
lean_object* v___x_1996_; 
v___x_1996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1996_, 0, v_x_1951_);
lean_ctor_set(v___x_1996_, 1, v_x_1952_);
v___y_1968_ = v___x_1996_;
goto v___jp_1967_;
}
}
v___jp_1967_:
{
lean_object* v___x_1969_; lean_object* v___x_1971_; 
v___x_1969_ = lean_array_fset(v_xs_x27_1966_, v_j_1958_, v___y_1968_);
lean_dec(v_j_1958_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 0, v___x_1969_);
v___x_1971_ = v___x_1962_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
}
}
else
{
lean_object* v_ks_1999_; lean_object* v_vs_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2020_; 
v_ks_1999_ = lean_ctor_get(v_x_1948_, 0);
v_vs_2000_ = lean_ctor_get(v_x_1948_, 1);
v_isSharedCheck_2020_ = !lean_is_exclusive(v_x_1948_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2002_ = v_x_1948_;
v_isShared_2003_ = v_isSharedCheck_2020_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_vs_2000_);
lean_inc(v_ks_1999_);
lean_dec(v_x_1948_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2020_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_ks_1999_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v_vs_2000_);
v___x_2005_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
lean_object* v_newNode_2006_; uint8_t v___y_2008_; size_t v___x_2014_; uint8_t v___x_2015_; 
v_newNode_2006_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(v___x_2005_, v_x_1951_, v_x_1952_);
v___x_2014_ = ((size_t)7ULL);
v___x_2015_ = lean_usize_dec_le(v___x_2014_, v_x_1950_);
if (v___x_2015_ == 0)
{
lean_object* v___x_2016_; lean_object* v___x_2017_; uint8_t v___x_2018_; 
v___x_2016_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2006_);
v___x_2017_ = lean_unsigned_to_nat(4u);
v___x_2018_ = lean_nat_dec_lt(v___x_2016_, v___x_2017_);
lean_dec(v___x_2016_);
v___y_2008_ = v___x_2018_;
goto v___jp_2007_;
}
else
{
v___y_2008_ = v___x_2015_;
goto v___jp_2007_;
}
v___jp_2007_:
{
if (v___y_2008_ == 0)
{
lean_object* v_ks_2009_; lean_object* v_vs_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v_ks_2009_ = lean_ctor_get(v_newNode_2006_, 0);
lean_inc_ref(v_ks_2009_);
v_vs_2010_ = lean_ctor_get(v_newNode_2006_, 1);
lean_inc_ref(v_vs_2010_);
lean_dec_ref(v_newNode_2006_);
v___x_2011_ = lean_unsigned_to_nat(0u);
v___x_2012_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_2013_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(v_x_1950_, v_ks_2009_, v_vs_2010_, v___x_2011_, v___x_2012_);
lean_dec_ref(v_vs_2010_);
lean_dec_ref(v_ks_2009_);
return v___x_2013_;
}
else
{
return v_newNode_2006_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(size_t v_depth_2021_, lean_object* v_keys_2022_, lean_object* v_vals_2023_, lean_object* v_i_2024_, lean_object* v_entries_2025_){
_start:
{
lean_object* v___x_2026_; uint8_t v___x_2027_; 
v___x_2026_ = lean_array_get_size(v_keys_2022_);
v___x_2027_ = lean_nat_dec_lt(v_i_2024_, v___x_2026_);
if (v___x_2027_ == 0)
{
lean_dec(v_i_2024_);
return v_entries_2025_;
}
else
{
lean_object* v_k_2028_; lean_object* v_v_2029_; uint64_t v___x_2030_; size_t v_h_2031_; size_t v___x_2032_; lean_object* v___x_2033_; size_t v___x_2034_; size_t v___x_2035_; size_t v___x_2036_; size_t v_h_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v_k_2028_ = lean_array_fget_borrowed(v_keys_2022_, v_i_2024_);
v_v_2029_ = lean_array_fget_borrowed(v_vals_2023_, v_i_2024_);
v___x_2030_ = l_Lean_instHashableMVarId_hash(v_k_2028_);
v_h_2031_ = lean_uint64_to_usize(v___x_2030_);
v___x_2032_ = ((size_t)5ULL);
v___x_2033_ = lean_unsigned_to_nat(1u);
v___x_2034_ = ((size_t)1ULL);
v___x_2035_ = lean_usize_sub(v_depth_2021_, v___x_2034_);
v___x_2036_ = lean_usize_mul(v___x_2032_, v___x_2035_);
v_h_2037_ = lean_usize_shift_right(v_h_2031_, v___x_2036_);
v___x_2038_ = lean_nat_add(v_i_2024_, v___x_2033_);
lean_dec(v_i_2024_);
lean_inc(v_v_2029_);
lean_inc(v_k_2028_);
v___x_2039_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_entries_2025_, v_h_2037_, v_depth_2021_, v_k_2028_, v_v_2029_);
v_i_2024_ = v___x_2038_;
v_entries_2025_ = v___x_2039_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_depth_2041_, lean_object* v_keys_2042_, lean_object* v_vals_2043_, lean_object* v_i_2044_, lean_object* v_entries_2045_){
_start:
{
size_t v_depth_boxed_2046_; lean_object* v_res_2047_; 
v_depth_boxed_2046_ = lean_unbox_usize(v_depth_2041_);
lean_dec(v_depth_2041_);
v_res_2047_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(v_depth_boxed_2046_, v_keys_2042_, v_vals_2043_, v_i_2044_, v_entries_2045_);
lean_dec_ref(v_vals_2043_);
lean_dec_ref(v_keys_2042_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_2048_, lean_object* v_x_2049_, lean_object* v_x_2050_, lean_object* v_x_2051_, lean_object* v_x_2052_){
_start:
{
size_t v_x_3856__boxed_2053_; size_t v_x_3857__boxed_2054_; lean_object* v_res_2055_; 
v_x_3856__boxed_2053_ = lean_unbox_usize(v_x_2049_);
lean_dec(v_x_2049_);
v_x_3857__boxed_2054_ = lean_unbox_usize(v_x_2050_);
lean_dec(v_x_2050_);
v_res_2055_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_x_2048_, v_x_3856__boxed_2053_, v_x_3857__boxed_2054_, v_x_2051_, v_x_2052_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(lean_object* v_x_2056_, lean_object* v_x_2057_, lean_object* v_x_2058_){
_start:
{
uint64_t v___x_2059_; size_t v___x_2060_; size_t v___x_2061_; lean_object* v___x_2062_; 
v___x_2059_ = l_Lean_instHashableMVarId_hash(v_x_2057_);
v___x_2060_ = lean_uint64_to_usize(v___x_2059_);
v___x_2061_ = ((size_t)1ULL);
v___x_2062_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_x_2056_, v___x_2060_, v___x_2061_, v_x_2057_, v_x_2058_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(lean_object* v_mvarId_2063_, lean_object* v_val_2064_, lean_object* v___y_2065_){
_start:
{
lean_object* v___x_2067_; lean_object* v_mctx_2068_; lean_object* v_cache_2069_; lean_object* v_zetaDeltaFVarIds_2070_; lean_object* v_postponed_2071_; lean_object* v_diag_2072_; lean_object* v___x_2074_; uint8_t v_isShared_2075_; uint8_t v_isSharedCheck_2099_; 
v___x_2067_ = lean_st_ref_take(v___y_2065_);
v_mctx_2068_ = lean_ctor_get(v___x_2067_, 0);
v_cache_2069_ = lean_ctor_get(v___x_2067_, 1);
v_zetaDeltaFVarIds_2070_ = lean_ctor_get(v___x_2067_, 2);
v_postponed_2071_ = lean_ctor_get(v___x_2067_, 3);
v_diag_2072_ = lean_ctor_get(v___x_2067_, 4);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2074_ = v___x_2067_;
v_isShared_2075_ = v_isSharedCheck_2099_;
goto v_resetjp_2073_;
}
else
{
lean_inc(v_diag_2072_);
lean_inc(v_postponed_2071_);
lean_inc(v_zetaDeltaFVarIds_2070_);
lean_inc(v_cache_2069_);
lean_inc(v_mctx_2068_);
lean_dec(v___x_2067_);
v___x_2074_ = lean_box(0);
v_isShared_2075_ = v_isSharedCheck_2099_;
goto v_resetjp_2073_;
}
v_resetjp_2073_:
{
lean_object* v_depth_2076_; lean_object* v_levelAssignDepth_2077_; lean_object* v_mvarCounter_2078_; lean_object* v_lDepth_2079_; lean_object* v_decls_2080_; lean_object* v_userNames_2081_; lean_object* v_lAssignment_2082_; lean_object* v_eAssignment_2083_; lean_object* v_dAssignment_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2098_; 
v_depth_2076_ = lean_ctor_get(v_mctx_2068_, 0);
v_levelAssignDepth_2077_ = lean_ctor_get(v_mctx_2068_, 1);
v_mvarCounter_2078_ = lean_ctor_get(v_mctx_2068_, 2);
v_lDepth_2079_ = lean_ctor_get(v_mctx_2068_, 3);
v_decls_2080_ = lean_ctor_get(v_mctx_2068_, 4);
v_userNames_2081_ = lean_ctor_get(v_mctx_2068_, 5);
v_lAssignment_2082_ = lean_ctor_get(v_mctx_2068_, 6);
v_eAssignment_2083_ = lean_ctor_get(v_mctx_2068_, 7);
v_dAssignment_2084_ = lean_ctor_get(v_mctx_2068_, 8);
v_isSharedCheck_2098_ = !lean_is_exclusive(v_mctx_2068_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2086_ = v_mctx_2068_;
v_isShared_2087_ = v_isSharedCheck_2098_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_dAssignment_2084_);
lean_inc(v_eAssignment_2083_);
lean_inc(v_lAssignment_2082_);
lean_inc(v_userNames_2081_);
lean_inc(v_decls_2080_);
lean_inc(v_lDepth_2079_);
lean_inc(v_mvarCounter_2078_);
lean_inc(v_levelAssignDepth_2077_);
lean_inc(v_depth_2076_);
lean_dec(v_mctx_2068_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2098_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2088_; lean_object* v___x_2090_; 
v___x_2088_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(v_eAssignment_2083_, v_mvarId_2063_, v_val_2064_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 7, v___x_2088_);
v___x_2090_ = v___x_2086_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_depth_2076_);
lean_ctor_set(v_reuseFailAlloc_2097_, 1, v_levelAssignDepth_2077_);
lean_ctor_set(v_reuseFailAlloc_2097_, 2, v_mvarCounter_2078_);
lean_ctor_set(v_reuseFailAlloc_2097_, 3, v_lDepth_2079_);
lean_ctor_set(v_reuseFailAlloc_2097_, 4, v_decls_2080_);
lean_ctor_set(v_reuseFailAlloc_2097_, 5, v_userNames_2081_);
lean_ctor_set(v_reuseFailAlloc_2097_, 6, v_lAssignment_2082_);
lean_ctor_set(v_reuseFailAlloc_2097_, 7, v___x_2088_);
lean_ctor_set(v_reuseFailAlloc_2097_, 8, v_dAssignment_2084_);
v___x_2090_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
lean_object* v___x_2092_; 
if (v_isShared_2075_ == 0)
{
lean_ctor_set(v___x_2074_, 0, v___x_2090_);
v___x_2092_ = v___x_2074_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v___x_2090_);
lean_ctor_set(v_reuseFailAlloc_2096_, 1, v_cache_2069_);
lean_ctor_set(v_reuseFailAlloc_2096_, 2, v_zetaDeltaFVarIds_2070_);
lean_ctor_set(v_reuseFailAlloc_2096_, 3, v_postponed_2071_);
lean_ctor_set(v_reuseFailAlloc_2096_, 4, v_diag_2072_);
v___x_2092_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2093_ = lean_st_ref_set(v___y_2065_, v___x_2092_);
v___x_2094_ = lean_box(0);
v___x_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
return v___x_2095_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg___boxed(lean_object* v_mvarId_2100_, lean_object* v_val_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(v_mvarId_2100_, v_val_2101_, v___y_2102_);
lean_dec(v___y_2102_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(lean_object* v_msgData_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_){
_start:
{
lean_object* v___x_2111_; lean_object* v_env_2112_; lean_object* v___x_2113_; lean_object* v_mctx_2114_; lean_object* v_lctx_2115_; lean_object* v_options_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2111_ = lean_st_ref_get(v___y_2109_);
v_env_2112_ = lean_ctor_get(v___x_2111_, 0);
lean_inc_ref(v_env_2112_);
lean_dec(v___x_2111_);
v___x_2113_ = lean_st_ref_get(v___y_2107_);
v_mctx_2114_ = lean_ctor_get(v___x_2113_, 0);
lean_inc_ref(v_mctx_2114_);
lean_dec(v___x_2113_);
v_lctx_2115_ = lean_ctor_get(v___y_2106_, 2);
v_options_2116_ = lean_ctor_get(v___y_2108_, 2);
lean_inc_ref(v_options_2116_);
lean_inc_ref(v_lctx_2115_);
v___x_2117_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2117_, 0, v_env_2112_);
lean_ctor_set(v___x_2117_, 1, v_mctx_2114_);
lean_ctor_set(v___x_2117_, 2, v_lctx_2115_);
lean_ctor_set(v___x_2117_, 3, v_options_2116_);
v___x_2118_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2117_);
lean_ctor_set(v___x_2118_, 1, v_msgData_2105_);
v___x_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2___boxed(lean_object* v_msgData_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(v_msgData_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v___y_2121_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(lean_object* v_msg_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_){
_start:
{
lean_object* v_ref_2133_; lean_object* v___x_2134_; lean_object* v_a_2135_; lean_object* v___x_2137_; uint8_t v_isShared_2138_; uint8_t v_isSharedCheck_2143_; 
v_ref_2133_ = lean_ctor_get(v___y_2130_, 5);
v___x_2134_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(v_msg_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_);
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2137_ = v___x_2134_;
v_isShared_2138_ = v_isSharedCheck_2143_;
goto v_resetjp_2136_;
}
else
{
lean_inc(v_a_2135_);
lean_dec(v___x_2134_);
v___x_2137_ = lean_box(0);
v_isShared_2138_ = v_isSharedCheck_2143_;
goto v_resetjp_2136_;
}
v_resetjp_2136_:
{
lean_object* v___x_2139_; lean_object* v___x_2141_; 
lean_inc(v_ref_2133_);
v___x_2139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2139_, 0, v_ref_2133_);
lean_ctor_set(v___x_2139_, 1, v_a_2135_);
if (v_isShared_2138_ == 0)
{
lean_ctor_set_tag(v___x_2137_, 1);
lean_ctor_set(v___x_2137_, 0, v___x_2139_);
v___x_2141_ = v___x_2137_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v___x_2139_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg___boxed(lean_object* v_msg_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_){
_start:
{
lean_object* v_res_2150_; 
v_res_2150_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v_msg_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
lean_dec(v___y_2146_);
lean_dec_ref(v___y_2145_);
return v_res_2150_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = ((lean_object*)(l_Lean_Elab_Tactic_refineCore___lam__1___closed__0));
v___x_2153_ = l_Lean_stringToMessageData(v___x_2152_);
return v___x_2153_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2155_ = ((lean_object*)(l_Lean_Elab_Tactic_refineCore___lam__1___closed__2));
v___x_2156_ = l_Lean_stringToMessageData(v___x_2155_);
return v___x_2156_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2158_ = ((lean_object*)(l_Lean_Elab_Tactic_refineCore___lam__1___closed__4));
v___x_2159_ = l_Lean_stringToMessageData(v___x_2158_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1(lean_object* v_stx_2160_, lean_object* v_tagSuffix_2161_, uint8_t v_allowNaturalHoles_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v___x_2172_; 
v___x_2172_ = l_Lean_Elab_Tactic_getMainTarget(v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
lean_dec_ref(v___x_2172_);
v___x_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2174_, 0, v_a_2173_);
v___x_2175_ = lean_box(0);
lean_inc(v___y_2170_);
lean_inc_ref(v___y_2169_);
lean_inc(v___y_2168_);
lean_inc_ref(v___y_2167_);
lean_inc(v___y_2166_);
lean_inc_ref(v___y_2165_);
lean_inc(v___y_2164_);
lean_inc_ref(v___y_2163_);
v___x_2176_ = l_Lean_Elab_Tactic_elabTermWithHoles(v_stx_2160_, v___x_2174_, v_tagSuffix_2161_, v_allowNaturalHoles_2162_, v___x_2175_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_);
if (lean_obj_tag(v___x_2176_) == 0)
{
lean_object* v_a_2177_; lean_object* v_fst_2178_; lean_object* v_snd_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2225_; 
v_a_2177_ = lean_ctor_get(v___x_2176_, 0);
lean_inc(v_a_2177_);
lean_dec_ref(v___x_2176_);
v_fst_2178_ = lean_ctor_get(v_a_2177_, 0);
v_snd_2179_ = lean_ctor_get(v_a_2177_, 1);
v_isSharedCheck_2225_ = !lean_is_exclusive(v_a_2177_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2181_ = v_a_2177_;
v_isShared_2182_ = v_isSharedCheck_2225_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_snd_2179_);
lean_inc(v_fst_2178_);
lean_dec(v_a_2177_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2225_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2183_; 
v___x_2183_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2164_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; lean_object* v___x_2185_; lean_object* v_a_2186_; lean_object* v___y_2188_; lean_object* v___y_2189_; lean_object* v___y_2190_; lean_object* v___y_2191_; lean_object* v___y_2192_; lean_object* v___y_2193_; lean_object* v___y_2194_; lean_object* v___y_2195_; lean_object* v___x_2198_; uint8_t v___x_2212_; 
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_a_2184_);
lean_dec_ref(v___x_2183_);
v___x_2185_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_fst_2178_, v___y_2168_);
v_a_2186_ = lean_ctor_get(v___x_2185_, 0);
lean_inc(v_a_2186_);
lean_dec_ref(v___x_2185_);
lean_inc(v_a_2184_);
v___x_2198_ = l_Lean_mkMVar(v_a_2184_);
v___x_2212_ = lean_expr_eqv(v_a_2186_, v___x_2198_);
if (v___x_2212_ == 0)
{
lean_object* v___f_2213_; lean_object* v___x_2214_; 
lean_inc(v_a_2184_);
v___f_2213_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_refineCore___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2213_, 0, v_a_2184_);
lean_inc(v_a_2186_);
v___x_2214_ = l_Lean_FindMVar_main(v___f_2213_, v_a_2186_, v___x_2175_);
if (lean_obj_tag(v___x_2214_) == 1)
{
lean_dec_ref(v___x_2214_);
lean_dec(v_a_2184_);
lean_dec(v_snd_2179_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
goto v___jp_2199_;
}
else
{
lean_dec(v___x_2214_);
if (v___x_2212_ == 0)
{
lean_dec_ref(v___x_2198_);
lean_del_object(v___x_2181_);
v___y_2188_ = v___y_2163_;
v___y_2189_ = v___y_2164_;
v___y_2190_ = v___y_2165_;
v___y_2191_ = v___y_2166_;
v___y_2192_ = v___y_2167_;
v___y_2193_ = v___y_2168_;
v___y_2194_ = v___y_2169_;
v___y_2195_ = v___y_2170_;
goto v___jp_2187_;
}
else
{
lean_dec(v_a_2184_);
lean_dec(v_snd_2179_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
goto v___jp_2199_;
}
}
}
else
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
lean_dec_ref(v___x_2198_);
lean_dec(v_a_2186_);
lean_del_object(v___x_2181_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec_ref(v___y_2163_);
v___x_2215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2215_, 0, v_a_2184_);
lean_ctor_set(v___x_2215_, 1, v_snd_2179_);
v___x_2216_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2215_, v___y_2164_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec(v___y_2164_);
return v___x_2216_;
}
v___jp_2187_:
{
lean_object* v___x_2196_; lean_object* v___x_2197_; 
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec_ref(v___y_2188_);
v___x_2196_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(v_a_2184_, v_a_2186_, v___y_2193_);
lean_dec_ref(v___x_2196_);
v___x_2197_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_snd_2179_, v___y_2189_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2189_);
return v___x_2197_;
}
v___jp_2199_:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2203_; 
v___x_2200_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__1, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__1);
v___x_2201_ = l_Lean_indentExpr(v_a_2186_);
if (v_isShared_2182_ == 0)
{
lean_ctor_set_tag(v___x_2181_, 7);
lean_ctor_set(v___x_2181_, 1, v___x_2201_);
lean_ctor_set(v___x_2181_, 0, v___x_2200_);
v___x_2203_ = v___x_2181_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v___x_2200_);
lean_ctor_set(v_reuseFailAlloc_2211_, 1, v___x_2201_);
v___x_2203_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2204_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__3, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__3);
v___x_2205_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2203_);
lean_ctor_set(v___x_2205_, 1, v___x_2204_);
v___x_2206_ = l_Lean_MessageData_ofExpr(v___x_2198_);
v___x_2207_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2205_);
lean_ctor_set(v___x_2207_, 1, v___x_2206_);
v___x_2208_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__5, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5);
v___x_2209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2209_, 0, v___x_2207_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2210_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_2209_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
return v___x_2210_;
}
}
}
else
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2224_; 
lean_del_object(v___x_2181_);
lean_dec(v_snd_2179_);
lean_dec(v_fst_2178_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
v_a_2217_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2219_ = v___x_2183_;
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2183_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2220_ == 0)
{
v___x_2222_ = v___x_2219_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_a_2217_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
}
}
else
{
lean_object* v_a_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2233_; 
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
v_a_2226_ = lean_ctor_get(v___x_2176_, 0);
v_isSharedCheck_2233_ = !lean_is_exclusive(v___x_2176_);
if (v_isSharedCheck_2233_ == 0)
{
v___x_2228_ = v___x_2176_;
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_a_2226_);
lean_dec(v___x_2176_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2233_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2231_; 
if (v_isShared_2229_ == 0)
{
v___x_2231_ = v___x_2228_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_a_2226_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
return v___x_2231_;
}
}
}
}
else
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
lean_dec(v_tagSuffix_2161_);
lean_dec(v_stx_2160_);
v_a_2234_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2172_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2172_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___boxed(lean_object* v_stx_2242_, lean_object* v_tagSuffix_2243_, lean_object* v_allowNaturalHoles_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_2254_; lean_object* v_res_2255_; 
v_allowNaturalHoles_boxed_2254_ = lean_unbox(v_allowNaturalHoles_2244_);
v_res_2255_ = l_Lean_Elab_Tactic_refineCore___lam__1(v_stx_2242_, v_tagSuffix_2243_, v_allowNaturalHoles_boxed_2254_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore(lean_object* v_stx_2256_, lean_object* v_tagSuffix_2257_, uint8_t v_allowNaturalHoles_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_, lean_object* v_a_2261_, lean_object* v_a_2262_, lean_object* v_a_2263_, lean_object* v_a_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_){
_start:
{
lean_object* v___x_2268_; lean_object* v___f_2269_; lean_object* v___x_2270_; 
v___x_2268_ = lean_box(v_allowNaturalHoles_2258_);
v___f_2269_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_refineCore___lam__1___boxed), 12, 3);
lean_closure_set(v___f_2269_, 0, v_stx_2256_);
lean_closure_set(v___f_2269_, 1, v_tagSuffix_2257_);
lean_closure_set(v___f_2269_, 2, v___x_2268_);
v___x_2270_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2269_, v_a_2259_, v_a_2260_, v_a_2261_, v_a_2262_, v_a_2263_, v_a_2264_, v_a_2265_, v_a_2266_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___boxed(lean_object* v_stx_2271_, lean_object* v_tagSuffix_2272_, lean_object* v_allowNaturalHoles_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, lean_object* v_a_2277_, lean_object* v_a_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_2283_; lean_object* v_res_2284_; 
v_allowNaturalHoles_boxed_2283_ = lean_unbox(v_allowNaturalHoles_2273_);
v_res_2284_ = l_Lean_Elab_Tactic_refineCore(v_stx_2271_, v_tagSuffix_2272_, v_allowNaturalHoles_boxed_2283_, v_a_2274_, v_a_2275_, v_a_2276_, v_a_2277_, v_a_2278_, v_a_2279_, v_a_2280_, v_a_2281_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0(lean_object* v_mvarId_2285_, lean_object* v_val_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
lean_object* v___x_2296_; 
v___x_2296_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(v_mvarId_2285_, v_val_2286_, v___y_2292_);
return v___x_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___boxed(lean_object* v_mvarId_2297_, lean_object* v_val_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0(v_mvarId_2297_, v_val_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_);
lean_dec(v___y_2306_);
lean_dec_ref(v___y_2305_);
lean_dec(v___y_2304_);
lean_dec_ref(v___y_2303_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1(lean_object* v_00_u03b1_2309_, lean_object* v_msg_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_){
_start:
{
lean_object* v___x_2320_; 
v___x_2320_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v_msg_2310_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___boxed(lean_object* v_00_u03b1_2321_, lean_object* v_msg_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1(v_00_u03b1_2321_, v_msg_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_);
lean_dec(v___y_2330_);
lean_dec_ref(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec(v___y_2326_);
lean_dec_ref(v___y_2325_);
lean_dec(v___y_2324_);
lean_dec_ref(v___y_2323_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0(lean_object* v_00_u03b2_2333_, lean_object* v_x_2334_, lean_object* v_x_2335_, lean_object* v_x_2336_){
_start:
{
lean_object* v___x_2337_; 
v___x_2337_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(v_x_2334_, v_x_2335_, v_x_2336_);
return v___x_2337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2338_, lean_object* v_x_2339_, size_t v_x_2340_, size_t v_x_2341_, lean_object* v_x_2342_, lean_object* v_x_2343_){
_start:
{
lean_object* v___x_2344_; 
v___x_2344_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_x_2339_, v_x_2340_, v_x_2341_, v_x_2342_, v_x_2343_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2345_, lean_object* v_x_2346_, lean_object* v_x_2347_, lean_object* v_x_2348_, lean_object* v_x_2349_, lean_object* v_x_2350_){
_start:
{
size_t v_x_4436__boxed_2351_; size_t v_x_4437__boxed_2352_; lean_object* v_res_2353_; 
v_x_4436__boxed_2351_ = lean_unbox_usize(v_x_2347_);
lean_dec(v_x_2347_);
v_x_4437__boxed_2352_ = lean_unbox_usize(v_x_2348_);
lean_dec(v_x_2348_);
v_res_2353_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1(v_00_u03b2_2345_, v_x_2346_, v_x_4436__boxed_2351_, v_x_4437__boxed_2352_, v_x_2349_, v_x_2350_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_2354_, lean_object* v_n_2355_, lean_object* v_k_2356_, lean_object* v_v_2357_){
_start:
{
lean_object* v___x_2358_; 
v___x_2358_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(v_n_2355_, v_k_2356_, v_v_2357_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_2359_, size_t v_depth_2360_, lean_object* v_keys_2361_, lean_object* v_vals_2362_, lean_object* v_heq_2363_, lean_object* v_i_2364_, lean_object* v_entries_2365_){
_start:
{
lean_object* v___x_2366_; 
v___x_2366_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(v_depth_2360_, v_keys_2361_, v_vals_2362_, v_i_2364_, v_entries_2365_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_2367_, lean_object* v_depth_2368_, lean_object* v_keys_2369_, lean_object* v_vals_2370_, lean_object* v_heq_2371_, lean_object* v_i_2372_, lean_object* v_entries_2373_){
_start:
{
size_t v_depth_boxed_2374_; lean_object* v_res_2375_; 
v_depth_boxed_2374_ = lean_unbox_usize(v_depth_2368_);
lean_dec(v_depth_2368_);
v_res_2375_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5(v_00_u03b2_2367_, v_depth_boxed_2374_, v_keys_2369_, v_vals_2370_, v_heq_2371_, v_i_2372_, v_entries_2373_);
lean_dec_ref(v_vals_2370_);
lean_dec_ref(v_keys_2369_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_2376_, lean_object* v_x_2377_, lean_object* v_x_2378_, lean_object* v_x_2379_, lean_object* v_x_2380_){
_start:
{
lean_object* v___x_2381_; 
v___x_2381_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(v_x_2377_, v_x_2378_, v_x_2379_, v_x_2380_);
return v___x_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine(lean_object* v_stx_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_){
_start:
{
lean_object* v___x_2400_; uint8_t v___x_2401_; 
v___x_2400_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine___closed__1));
lean_inc(v_stx_2390_);
v___x_2401_ = l_Lean_Syntax_isOfKind(v_stx_2390_, v___x_2400_);
if (v___x_2401_ == 0)
{
lean_object* v___x_2402_; 
lean_dec(v_a_2398_);
lean_dec_ref(v_a_2397_);
lean_dec(v_a_2396_);
lean_dec_ref(v_a_2395_);
lean_dec(v_a_2394_);
lean_dec_ref(v_a_2393_);
lean_dec(v_a_2392_);
lean_dec_ref(v_a_2391_);
lean_dec(v_stx_2390_);
v___x_2402_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_2402_;
}
else
{
lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; uint8_t v___x_2406_; lean_object* v___x_2407_; 
v___x_2403_ = lean_unsigned_to_nat(1u);
v___x_2404_ = l_Lean_Syntax_getArg(v_stx_2390_, v___x_2403_);
lean_dec(v_stx_2390_);
v___x_2405_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine___closed__2));
v___x_2406_ = 0;
v___x_2407_ = l_Lean_Elab_Tactic_refineCore(v___x_2404_, v___x_2405_, v___x_2406_, v_a_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
return v___x_2407_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___boxed(lean_object* v_stx_2408_, lean_object* v_a_2409_, lean_object* v_a_2410_, lean_object* v_a_2411_, lean_object* v_a_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = l_Lean_Elab_Tactic_evalRefine(v_stx_2408_, v_a_2409_, v_a_2410_, v_a_2411_, v_a_2412_, v_a_2413_, v_a_2414_, v_a_2415_, v_a_2416_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1(){
_start:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2426_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2427_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine___closed__1));
v___x_2428_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1));
v___x_2429_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRefine___boxed), 10, 0);
v___x_2430_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2426_, v___x_2427_, v___x_2428_, v___x_2429_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___boxed(lean_object* v_a_2431_){
_start:
{
lean_object* v_res_2432_; 
v_res_2432_ = l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1();
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3(){
_start:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2459_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1));
v___x_2460_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6));
v___x_2461_ = l_Lean_addBuiltinDeclarationRanges(v___x_2459_, v___x_2460_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___boxed(lean_object* v_a_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3();
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27(lean_object* v_stx_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_, lean_object* v_a_2480_){
_start:
{
lean_object* v___x_2482_; uint8_t v___x_2483_; 
v___x_2482_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine_x27___closed__1));
lean_inc(v_stx_2472_);
v___x_2483_ = l_Lean_Syntax_isOfKind(v_stx_2472_, v___x_2482_);
if (v___x_2483_ == 0)
{
lean_object* v___x_2484_; 
lean_dec(v_a_2480_);
lean_dec_ref(v_a_2479_);
lean_dec(v_a_2478_);
lean_dec_ref(v_a_2477_);
lean_dec(v_a_2476_);
lean_dec_ref(v_a_2475_);
lean_dec(v_a_2474_);
lean_dec_ref(v_a_2473_);
lean_dec(v_stx_2472_);
v___x_2484_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_2484_;
}
else
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2485_ = lean_unsigned_to_nat(1u);
v___x_2486_ = l_Lean_Syntax_getArg(v_stx_2472_, v___x_2485_);
lean_dec(v_stx_2472_);
v___x_2487_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine_x27___closed__2));
v___x_2488_ = l_Lean_Elab_Tactic_refineCore(v___x_2486_, v___x_2487_, v___x_2483_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_, v_a_2478_, v_a_2479_, v_a_2480_);
return v___x_2488_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___boxed(lean_object* v_stx_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lean_Elab_Tactic_evalRefine_x27(v_stx_2489_, v_a_2490_, v_a_2491_, v_a_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1(){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2507_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2508_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine_x27___closed__1));
v___x_2509_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1));
v___x_2510_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRefine_x27___boxed), 10, 0);
v___x_2511_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2507_, v___x_2508_, v___x_2509_, v___x_2510_);
return v___x_2511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___boxed(lean_object* v_a_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1();
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3(){
_start:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2540_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1));
v___x_2541_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6));
v___x_2542_ = l_Lean_addBuiltinDeclarationRanges(v___x_2540_, v___x_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___boxed(lean_object* v_a_2543_){
_start:
{
lean_object* v_res_2544_; 
v_res_2544_ = l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3();
return v_res_2544_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2546_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0));
v___x_2547_ = l_Lean_stringToMessageData(v___x_2546_);
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0(uint8_t v___x_2548_, lean_object* v_stx_2549_, lean_object* v___x_2550_, uint8_t v___x_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_){
_start:
{
if (v___x_2548_ == 0)
{
lean_object* v___x_2561_; 
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec_ref(v___x_2550_);
v___x_2561_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_2561_;
}
else
{
lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2562_ = lean_unsigned_to_nat(1u);
v___x_2563_ = l_Lean_Syntax_getArg(v_stx_2549_, v___x_2562_);
v___x_2564_ = lean_box(0);
v___x_2565_ = l_Lean_Name_mkStr1(v___x_2550_);
lean_inc(v___y_2559_);
lean_inc_ref(v___y_2558_);
lean_inc(v___y_2557_);
lean_inc_ref(v___y_2556_);
lean_inc(v___y_2553_);
v___x_2566_ = l_Lean_Elab_Tactic_elabTermWithHoles(v___x_2563_, v___x_2564_, v___x_2565_, v___x_2551_, v___x_2564_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2566_) == 0)
{
lean_object* v_a_2567_; lean_object* v_fst_2568_; lean_object* v_snd_2569_; lean_object* v___x_2570_; uint8_t v___x_2571_; 
v_a_2567_ = lean_ctor_get(v___x_2566_, 0);
lean_inc(v_a_2567_);
lean_dec_ref(v___x_2566_);
v_fst_2568_ = lean_ctor_get(v_a_2567_, 0);
lean_inc(v_fst_2568_);
v_snd_2569_ = lean_ctor_get(v_a_2567_, 1);
lean_inc(v_snd_2569_);
lean_dec(v_a_2567_);
v___x_2570_ = l_Lean_Expr_getAppFn(v_fst_2568_);
v___x_2571_ = l_Lean_Expr_isFVar(v___x_2570_);
if (v___x_2571_ == 0)
{
lean_object* v___x_2572_; lean_object* v___x_2573_; 
lean_dec_ref(v___x_2570_);
lean_dec(v_snd_2569_);
lean_dec(v_fst_2568_);
lean_dec(v___y_2553_);
v___x_2572_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1, &l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1);
v___x_2573_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_2572_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
return v___x_2573_;
}
else
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2574_ = l_Lean_Expr_fvarId_x21(v___x_2570_);
lean_dec_ref(v___x_2570_);
lean_inc_ref(v___y_2556_);
lean_inc(v___x_2574_);
v___x_2575_ = l_Lean_FVarId_getDecl___redArg(v___x_2574_, v___y_2556_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2575_) == 0)
{
lean_object* v_a_2576_; lean_object* v___x_2577_; 
v_a_2576_ = lean_ctor_get(v___x_2575_, 0);
lean_inc(v_a_2576_);
lean_dec_ref(v___x_2575_);
v___x_2577_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2553_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2577_) == 0)
{
lean_object* v_a_2578_; lean_object* v___x_2579_; 
v_a_2578_ = lean_ctor_get(v___x_2577_, 0);
lean_inc(v_a_2578_);
lean_dec_ref(v___x_2577_);
lean_inc(v___y_2559_);
lean_inc_ref(v___y_2558_);
lean_inc(v___y_2557_);
lean_inc_ref(v___y_2556_);
lean_inc(v_fst_2568_);
v___x_2579_ = lean_infer_type(v_fst_2568_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2580_);
lean_dec_ref(v___x_2579_);
v___x_2581_ = l_Lean_LocalDecl_userName(v_a_2576_);
lean_dec(v_a_2576_);
v___x_2582_ = l_Lean_Expr_headBeta(v_a_2580_);
lean_inc(v___y_2559_);
lean_inc_ref(v___y_2558_);
lean_inc(v___y_2557_);
lean_inc_ref(v___y_2556_);
v___x_2583_ = l_Lean_MVarId_assert(v_a_2578_, v___x_2581_, v___x_2582_, v_fst_2568_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2583_) == 0)
{
lean_object* v_a_2584_; lean_object* v___x_2585_; 
v_a_2584_ = lean_ctor_get(v___x_2583_, 0);
lean_inc(v_a_2584_);
lean_dec_ref(v___x_2583_);
lean_inc(v___y_2559_);
lean_inc_ref(v___y_2558_);
lean_inc(v___y_2557_);
lean_inc_ref(v___y_2556_);
v___x_2585_ = l_Lean_Meta_intro1Core(v_a_2584_, v___x_2571_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v_snd_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2607_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
lean_inc(v_a_2586_);
lean_dec_ref(v___x_2585_);
v_snd_2587_ = lean_ctor_get(v_a_2586_, 1);
v_isSharedCheck_2607_ = !lean_is_exclusive(v_a_2586_);
if (v_isSharedCheck_2607_ == 0)
{
lean_object* v_unused_2608_; 
v_unused_2608_ = lean_ctor_get(v_a_2586_, 0);
lean_dec(v_unused_2608_);
v___x_2589_ = v_a_2586_;
v_isShared_2590_ = v_isSharedCheck_2607_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_snd_2587_);
lean_dec(v_a_2586_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2607_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2591_; 
lean_inc(v___y_2559_);
lean_inc_ref(v___y_2558_);
lean_inc(v___y_2557_);
lean_inc_ref(v___y_2556_);
v___x_2591_ = l_Lean_MVarId_tryClear(v_snd_2587_, v___x_2574_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v_a_2592_; lean_object* v___x_2593_; lean_object* v___x_2595_; 
v_a_2592_ = lean_ctor_get(v___x_2591_, 0);
lean_inc(v_a_2592_);
lean_dec_ref(v___x_2591_);
v___x_2593_ = lean_box(0);
if (v_isShared_2590_ == 0)
{
lean_ctor_set_tag(v___x_2589_, 1);
lean_ctor_set(v___x_2589_, 1, v___x_2593_);
lean_ctor_set(v___x_2589_, 0, v_a_2592_);
v___x_2595_ = v___x_2589_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_a_2592_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v___x_2593_);
v___x_2595_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2596_ = l_List_appendTR___redArg(v_snd_2569_, v___x_2595_);
v___x_2597_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2596_, v___y_2553_, v___y_2556_, v___y_2557_, v___y_2558_, v___y_2559_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2553_);
return v___x_2597_;
}
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
lean_del_object(v___x_2589_);
lean_dec(v_snd_2569_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2553_);
v_a_2599_ = lean_ctor_get(v___x_2591_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2591_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2591_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2604_; 
if (v_isShared_2602_ == 0)
{
v___x_2604_ = v___x_2601_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2599_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
}
else
{
lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2616_; 
lean_dec(v___x_2574_);
lean_dec(v_snd_2569_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2553_);
v_a_2609_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2611_ = v___x_2585_;
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v___x_2585_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2614_; 
if (v_isShared_2612_ == 0)
{
v___x_2614_ = v___x_2611_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v_a_2609_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
return v___x_2614_;
}
}
}
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
lean_dec(v___x_2574_);
lean_dec(v_snd_2569_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2553_);
v_a_2617_ = lean_ctor_get(v___x_2583_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2583_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2583_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2583_);
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
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
lean_dec(v_a_2578_);
lean_dec(v_a_2576_);
lean_dec(v___x_2574_);
lean_dec(v_snd_2569_);
lean_dec(v_fst_2568_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2553_);
v_a_2625_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2579_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2579_);
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
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_dec(v_a_2576_);
lean_dec(v___x_2574_);
lean_dec(v_snd_2569_);
lean_dec(v_fst_2568_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2553_);
v_a_2633_ = lean_ctor_get(v___x_2577_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2577_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___x_2577_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2577_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
else
{
lean_object* v_a_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2648_; 
lean_dec(v___x_2574_);
lean_dec(v_snd_2569_);
lean_dec(v_fst_2568_);
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2553_);
v_a_2641_ = lean_ctor_get(v___x_2575_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2575_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2643_ = v___x_2575_;
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_a_2641_);
lean_dec(v___x_2575_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2646_; 
if (v_isShared_2644_ == 0)
{
v___x_2646_ = v___x_2643_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_a_2641_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
}
}
else
{
lean_object* v_a_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2656_; 
lean_dec(v___y_2559_);
lean_dec_ref(v___y_2558_);
lean_dec(v___y_2557_);
lean_dec_ref(v___y_2556_);
lean_dec(v___y_2553_);
v_a_2649_ = lean_ctor_get(v___x_2566_, 0);
v_isSharedCheck_2656_ = !lean_is_exclusive(v___x_2566_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2651_ = v___x_2566_;
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_a_2649_);
lean_dec(v___x_2566_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2654_; 
if (v_isShared_2652_ == 0)
{
v___x_2654_ = v___x_2651_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_a_2649_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___boxed(lean_object* v___x_2657_, lean_object* v_stx_2658_, lean_object* v___x_2659_, lean_object* v___x_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_){
_start:
{
uint8_t v___x_2046__boxed_2670_; uint8_t v___x_2048__boxed_2671_; lean_object* v_res_2672_; 
v___x_2046__boxed_2670_ = lean_unbox(v___x_2657_);
v___x_2048__boxed_2671_ = lean_unbox(v___x_2660_);
v_res_2672_ = l_Lean_Elab_Tactic_evalSpecialize___lam__0(v___x_2046__boxed_2670_, v_stx_2658_, v___x_2659_, v___x_2048__boxed_2671_, v___y_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
lean_dec(v_stx_2658_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize(lean_object* v_stx_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_, lean_object* v_a_2685_, lean_object* v_a_2686_, lean_object* v_a_2687_){
_start:
{
lean_object* v___x_2689_; lean_object* v___x_2690_; uint8_t v___x_2691_; uint8_t v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___y_2695_; lean_object* v___x_2696_; 
v___x_2689_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___closed__0));
v___x_2690_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___closed__1));
lean_inc(v_stx_2679_);
v___x_2691_ = l_Lean_Syntax_isOfKind(v_stx_2679_, v___x_2690_);
v___x_2692_ = 1;
v___x_2693_ = lean_box(v___x_2691_);
v___x_2694_ = lean_box(v___x_2692_);
v___y_2695_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSpecialize___lam__0___boxed), 13, 4);
lean_closure_set(v___y_2695_, 0, v___x_2693_);
lean_closure_set(v___y_2695_, 1, v_stx_2679_);
lean_closure_set(v___y_2695_, 2, v___x_2689_);
lean_closure_set(v___y_2695_, 3, v___x_2694_);
v___x_2696_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___y_2695_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_, v_a_2685_, v_a_2686_, v_a_2687_);
return v___x_2696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___boxed(lean_object* v_stx_2697_, lean_object* v_a_2698_, lean_object* v_a_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_Lean_Elab_Tactic_evalSpecialize(v_stx_2697_, v_a_2698_, v_a_2699_, v_a_2700_, v_a_2701_, v_a_2702_, v_a_2703_, v_a_2704_, v_a_2705_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1(){
_start:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2715_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2716_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___closed__1));
v___x_2717_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1));
v___x_2718_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSpecialize___boxed), 10, 0);
v___x_2719_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2715_, v___x_2716_, v___x_2717_, v___x_2718_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___boxed(lean_object* v_a_2720_){
_start:
{
lean_object* v_res_2721_; 
v_res_2721_ = l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1();
return v_res_2721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3(){
_start:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; 
v___x_2747_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1));
v___x_2748_ = ((lean_object*)(l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6));
v___x_2749_ = l_Lean_addBuiltinDeclarationRanges(v___x_2747_, v___x_2748_);
return v___x_2749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___boxed(lean_object* v_a_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3();
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply(lean_object* v_stx_2753_, uint8_t v_mayPostpone_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_){
_start:
{
lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2768_; lean_object* v___y_2769_; lean_object* v___y_2770_; lean_object* v___y_2771_; lean_object* v___y_2772_; uint8_t v___x_2775_; 
v___x_2775_ = l_Lean_Syntax_isIdent(v_stx_2753_);
if (v___x_2775_ == 0)
{
v___y_2765_ = v_a_2755_;
v___y_2766_ = v_a_2756_;
v___y_2767_ = v_a_2757_;
v___y_2768_ = v_a_2758_;
v___y_2769_ = v_a_2759_;
v___y_2770_ = v_a_2760_;
v___y_2771_ = v_a_2761_;
v___y_2772_ = v_a_2762_;
goto v___jp_2764_;
}
else
{
lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2776_ = ((lean_object*)(l_Lean_Elab_Tactic_elabTermForApply___closed__0));
lean_inc(v_a_2762_);
lean_inc_ref(v_a_2761_);
lean_inc(v_a_2760_);
lean_inc_ref(v_a_2759_);
lean_inc(v_a_2758_);
lean_inc_ref(v_a_2757_);
lean_inc(v_stx_2753_);
v___x_2777_ = l_Lean_Elab_Term_resolveId_x3f(v_stx_2753_, v___x_2776_, v___x_2775_, v_a_2757_, v_a_2758_, v_a_2759_, v_a_2760_, v_a_2761_, v_a_2762_);
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2786_; 
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2780_ = v___x_2777_;
v_isShared_2781_ = v_isSharedCheck_2786_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v___x_2777_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2786_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
if (lean_obj_tag(v_a_2778_) == 1)
{
lean_object* v_val_2782_; lean_object* v___x_2784_; 
lean_dec(v_a_2762_);
lean_dec_ref(v_a_2761_);
lean_dec(v_a_2760_);
lean_dec_ref(v_a_2759_);
lean_dec(v_a_2758_);
lean_dec_ref(v_a_2757_);
lean_dec(v_a_2756_);
lean_dec_ref(v_a_2755_);
lean_dec(v_stx_2753_);
v_val_2782_ = lean_ctor_get(v_a_2778_, 0);
lean_inc(v_val_2782_);
lean_dec_ref(v_a_2778_);
if (v_isShared_2781_ == 0)
{
lean_ctor_set(v___x_2780_, 0, v_val_2782_);
v___x_2784_ = v___x_2780_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_val_2782_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
else
{
lean_del_object(v___x_2780_);
lean_dec(v_a_2778_);
v___y_2765_ = v_a_2755_;
v___y_2766_ = v_a_2756_;
v___y_2767_ = v_a_2757_;
v___y_2768_ = v_a_2758_;
v___y_2769_ = v_a_2759_;
v___y_2770_ = v_a_2760_;
v___y_2771_ = v_a_2761_;
v___y_2772_ = v_a_2762_;
goto v___jp_2764_;
}
}
}
else
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2794_; 
lean_dec(v_a_2762_);
lean_dec_ref(v_a_2761_);
lean_dec(v_a_2760_);
lean_dec_ref(v_a_2759_);
lean_dec(v_a_2758_);
lean_dec_ref(v_a_2757_);
lean_dec(v_a_2756_);
lean_dec_ref(v_a_2755_);
lean_dec(v_stx_2753_);
v_a_2787_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2789_ = v___x_2777_;
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2777_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2792_; 
if (v_isShared_2790_ == 0)
{
v___x_2792_ = v___x_2789_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2787_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
v___jp_2764_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2773_ = lean_box(0);
v___x_2774_ = l_Lean_Elab_Tactic_elabTerm(v_stx_2753_, v___x_2773_, v_mayPostpone_2754_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
return v___x_2774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply___boxed(lean_object* v_stx_2795_, lean_object* v_mayPostpone_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_){
_start:
{
uint8_t v_mayPostpone_boxed_2806_; lean_object* v_res_2807_; 
v_mayPostpone_boxed_2806_ = lean_unbox(v_mayPostpone_2796_);
v_res_2807_ = l_Lean_Elab_Tactic_elabTermForApply(v_stx_2795_, v_mayPostpone_boxed_2806_, v_a_2797_, v_a_2798_, v_a_2799_, v_a_2800_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_);
return v_res_2807_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2809_; lean_object* v___x_2810_; 
v___x_2809_ = ((lean_object*)(l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0));
v___x_2810_ = l_Lean_stringToMessageData(v___x_2809_);
return v___x_2810_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2812_ = ((lean_object*)(l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2));
v___x_2813_ = l_Lean_stringToMessageData(v___x_2812_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0(lean_object* v___x_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v___x_2824_; 
lean_inc(v___y_2822_);
lean_inc_ref(v___y_2821_);
lean_inc(v___y_2820_);
lean_inc_ref(v___y_2819_);
v___x_2824_ = l_Lean_Elab_Tactic_withoutRecover___redArg(v___x_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2839_; 
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2827_ = v___x_2824_;
v_isShared_2828_ = v_isSharedCheck_2839_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_dec(v___x_2824_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2839_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
if (lean_obj_tag(v_a_2825_) == 1)
{
lean_object* v_fvarId_2829_; lean_object* v___x_2831_; 
lean_dec(v___y_2822_);
lean_dec_ref(v___y_2821_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
v_fvarId_2829_ = lean_ctor_get(v_a_2825_, 0);
lean_inc(v_fvarId_2829_);
lean_dec_ref(v_a_2825_);
if (v_isShared_2828_ == 0)
{
lean_ctor_set(v___x_2827_, 0, v_fvarId_2829_);
v___x_2831_ = v___x_2827_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_fvarId_2829_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
else
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
lean_del_object(v___x_2827_);
v___x_2833_ = lean_obj_once(&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1, &l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1);
v___x_2834_ = l_Lean_MessageData_ofExpr(v_a_2825_);
v___x_2835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2833_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
v___x_2836_ = lean_obj_once(&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3, &l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3);
v___x_2837_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2835_);
lean_ctor_set(v___x_2837_, 1, v___x_2836_);
v___x_2838_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_2837_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_);
lean_dec(v___y_2822_);
lean_dec_ref(v___y_2821_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
return v___x_2838_;
}
}
}
else
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2847_; 
lean_dec(v___y_2822_);
lean_dec_ref(v___y_2821_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
v_a_2840_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2842_ = v___x_2824_;
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2824_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2840_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___boxed(lean_object* v___x_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_){
_start:
{
lean_object* v_res_2858_; 
v_res_2858_ = l_Lean_Elab_Tactic_getFVarId___lam__0(v___x_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId(lean_object* v_id_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_){
_start:
{
lean_object* v_fileName_2869_; lean_object* v_fileMap_2870_; lean_object* v_options_2871_; lean_object* v_currRecDepth_2872_; lean_object* v_maxRecDepth_2873_; lean_object* v_ref_2874_; lean_object* v_currNamespace_2875_; lean_object* v_openDecls_2876_; lean_object* v_initHeartbeats_2877_; lean_object* v_maxHeartbeats_2878_; lean_object* v_quotContext_2879_; lean_object* v_currMacroScope_2880_; uint8_t v_diag_2881_; lean_object* v_cancelTk_x3f_2882_; uint8_t v_suppressElabErrors_2883_; lean_object* v_inheritedTraceOptions_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2897_; 
v_fileName_2869_ = lean_ctor_get(v_a_2866_, 0);
v_fileMap_2870_ = lean_ctor_get(v_a_2866_, 1);
v_options_2871_ = lean_ctor_get(v_a_2866_, 2);
v_currRecDepth_2872_ = lean_ctor_get(v_a_2866_, 3);
v_maxRecDepth_2873_ = lean_ctor_get(v_a_2866_, 4);
v_ref_2874_ = lean_ctor_get(v_a_2866_, 5);
v_currNamespace_2875_ = lean_ctor_get(v_a_2866_, 6);
v_openDecls_2876_ = lean_ctor_get(v_a_2866_, 7);
v_initHeartbeats_2877_ = lean_ctor_get(v_a_2866_, 8);
v_maxHeartbeats_2878_ = lean_ctor_get(v_a_2866_, 9);
v_quotContext_2879_ = lean_ctor_get(v_a_2866_, 10);
v_currMacroScope_2880_ = lean_ctor_get(v_a_2866_, 11);
v_diag_2881_ = lean_ctor_get_uint8(v_a_2866_, sizeof(void*)*14);
v_cancelTk_x3f_2882_ = lean_ctor_get(v_a_2866_, 12);
v_suppressElabErrors_2883_ = lean_ctor_get_uint8(v_a_2866_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2884_ = lean_ctor_get(v_a_2866_, 13);
v_isSharedCheck_2897_ = !lean_is_exclusive(v_a_2866_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2886_ = v_a_2866_;
v_isShared_2887_ = v_isSharedCheck_2897_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_inheritedTraceOptions_2884_);
lean_inc(v_cancelTk_x3f_2882_);
lean_inc(v_currMacroScope_2880_);
lean_inc(v_quotContext_2879_);
lean_inc(v_maxHeartbeats_2878_);
lean_inc(v_initHeartbeats_2877_);
lean_inc(v_openDecls_2876_);
lean_inc(v_currNamespace_2875_);
lean_inc(v_ref_2874_);
lean_inc(v_maxRecDepth_2873_);
lean_inc(v_currRecDepth_2872_);
lean_inc(v_options_2871_);
lean_inc(v_fileMap_2870_);
lean_inc(v_fileName_2869_);
lean_dec(v_a_2866_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2897_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
uint8_t v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___f_2891_; lean_object* v_ref_2892_; lean_object* v___x_2894_; 
v___x_2888_ = 0;
v___x_2889_ = lean_box(v___x_2888_);
lean_inc(v_id_2859_);
v___x_2890_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTermForApply___boxed), 11, 2);
lean_closure_set(v___x_2890_, 0, v_id_2859_);
lean_closure_set(v___x_2890_, 1, v___x_2889_);
v___f_2891_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_getFVarId___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2891_, 0, v___x_2890_);
v_ref_2892_ = l_Lean_replaceRef(v_id_2859_, v_ref_2874_);
lean_dec(v_ref_2874_);
lean_dec(v_id_2859_);
if (v_isShared_2887_ == 0)
{
lean_ctor_set(v___x_2886_, 5, v_ref_2892_);
v___x_2894_ = v___x_2886_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_fileName_2869_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v_fileMap_2870_);
lean_ctor_set(v_reuseFailAlloc_2896_, 2, v_options_2871_);
lean_ctor_set(v_reuseFailAlloc_2896_, 3, v_currRecDepth_2872_);
lean_ctor_set(v_reuseFailAlloc_2896_, 4, v_maxRecDepth_2873_);
lean_ctor_set(v_reuseFailAlloc_2896_, 5, v_ref_2892_);
lean_ctor_set(v_reuseFailAlloc_2896_, 6, v_currNamespace_2875_);
lean_ctor_set(v_reuseFailAlloc_2896_, 7, v_openDecls_2876_);
lean_ctor_set(v_reuseFailAlloc_2896_, 8, v_initHeartbeats_2877_);
lean_ctor_set(v_reuseFailAlloc_2896_, 9, v_maxHeartbeats_2878_);
lean_ctor_set(v_reuseFailAlloc_2896_, 10, v_quotContext_2879_);
lean_ctor_set(v_reuseFailAlloc_2896_, 11, v_currMacroScope_2880_);
lean_ctor_set(v_reuseFailAlloc_2896_, 12, v_cancelTk_x3f_2882_);
lean_ctor_set(v_reuseFailAlloc_2896_, 13, v_inheritedTraceOptions_2884_);
lean_ctor_set_uint8(v_reuseFailAlloc_2896_, sizeof(void*)*14, v_diag_2881_);
lean_ctor_set_uint8(v_reuseFailAlloc_2896_, sizeof(void*)*14 + 1, v_suppressElabErrors_2883_);
v___x_2894_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
lean_object* v___x_2895_; 
v___x_2895_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2891_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_, v_a_2864_, v_a_2865_, v___x_2894_, v_a_2867_);
return v___x_2895_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___boxed(lean_object* v_id_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_, lean_object* v_a_2903_, lean_object* v_a_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_){
_start:
{
lean_object* v_res_2908_; 
v_res_2908_ = l_Lean_Elab_Tactic_getFVarId(v_id_2898_, v_a_2899_, v_a_2900_, v_a_2901_, v_a_2902_, v_a_2903_, v_a_2904_, v_a_2905_, v_a_2906_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0(size_t v_sz_2909_, size_t v_i_2910_, lean_object* v_bs_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
uint8_t v___x_2921_; 
v___x_2921_ = lean_usize_dec_lt(v_i_2910_, v_sz_2909_);
if (v___x_2921_ == 0)
{
lean_object* v___x_2922_; 
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
lean_dec(v___y_2917_);
lean_dec_ref(v___y_2916_);
lean_dec(v___y_2915_);
lean_dec_ref(v___y_2914_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
v___x_2922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2922_, 0, v_bs_2911_);
return v___x_2922_;
}
else
{
lean_object* v_v_2923_; lean_object* v___x_2924_; 
v_v_2923_ = lean_array_uget_borrowed(v_bs_2911_, v_i_2910_);
lean_inc(v___y_2919_);
lean_inc_ref(v___y_2918_);
lean_inc(v___y_2917_);
lean_inc_ref(v___y_2916_);
lean_inc(v___y_2915_);
lean_inc_ref(v___y_2914_);
lean_inc(v___y_2913_);
lean_inc_ref(v___y_2912_);
lean_inc(v_v_2923_);
v___x_2924_ = l_Lean_Elab_Tactic_getFVarId(v_v_2923_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
if (lean_obj_tag(v___x_2924_) == 0)
{
lean_object* v_a_2925_; lean_object* v___x_2926_; lean_object* v_bs_x27_2927_; size_t v___x_2928_; size_t v___x_2929_; lean_object* v___x_2930_; 
v_a_2925_ = lean_ctor_get(v___x_2924_, 0);
lean_inc(v_a_2925_);
lean_dec_ref(v___x_2924_);
v___x_2926_ = lean_unsigned_to_nat(0u);
v_bs_x27_2927_ = lean_array_uset(v_bs_2911_, v_i_2910_, v___x_2926_);
v___x_2928_ = ((size_t)1ULL);
v___x_2929_ = lean_usize_add(v_i_2910_, v___x_2928_);
v___x_2930_ = lean_array_uset(v_bs_x27_2927_, v_i_2910_, v_a_2925_);
v_i_2910_ = v___x_2929_;
v_bs_2911_ = v___x_2930_;
goto _start;
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
lean_dec(v___y_2917_);
lean_dec_ref(v___y_2916_);
lean_dec(v___y_2915_);
lean_dec_ref(v___y_2914_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec_ref(v_bs_2911_);
v_a_2932_ = lean_ctor_get(v___x_2924_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2924_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2924_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2924_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0___boxed(lean_object* v_sz_2940_, lean_object* v_i_2941_, lean_object* v_bs_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_){
_start:
{
size_t v_sz_boxed_2952_; size_t v_i_boxed_2953_; lean_object* v_res_2954_; 
v_sz_boxed_2952_ = lean_unbox_usize(v_sz_2940_);
lean_dec(v_sz_2940_);
v_i_boxed_2953_ = lean_unbox_usize(v_i_2941_);
lean_dec(v_i_2941_);
v_res_2954_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0(v_sz_boxed_2952_, v_i_boxed_2953_, v_bs_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object* v_ids_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_, lean_object* v_a_2964_, lean_object* v_a_2965_){
_start:
{
size_t v_sz_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v_sz_2967_ = lean_array_size(v_ids_2957_);
v___x_2968_ = lean_box_usize(v_sz_2967_);
v___x_2969_ = ((lean_object*)(l_Lean_Elab_Tactic_getFVarIds___boxed__const__1));
v___x_2970_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0___boxed), 12, 3);
lean_closure_set(v___x_2970_, 0, v___x_2968_);
lean_closure_set(v___x_2970_, 1, v___x_2969_);
lean_closure_set(v___x_2970_, 2, v_ids_2957_);
v___x_2971_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___x_2970_, v_a_2958_, v_a_2959_, v_a_2960_, v_a_2961_, v_a_2962_, v_a_2963_, v_a_2964_, v_a_2965_);
return v___x_2971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds___boxed(lean_object* v_ids_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_, lean_object* v_a_2977_, lean_object* v_a_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_){
_start:
{
lean_object* v_res_2982_; 
v_res_2982_ = l_Lean_Elab_Tactic_getFVarIds(v_ids_2972_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_, v_a_2977_, v_a_2978_, v_a_2979_, v_a_2980_);
return v_res_2982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0(lean_object* v_e_2983_, uint8_t v___x_2984_, lean_object* v_tac_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_){
_start:
{
lean_object* v_val_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3003_; lean_object* v___x_3027_; 
lean_inc(v___y_2993_);
lean_inc_ref(v___y_2992_);
lean_inc(v___y_2991_);
lean_inc_ref(v___y_2990_);
lean_inc(v___y_2989_);
lean_inc_ref(v___y_2988_);
lean_inc(v___y_2987_);
v___x_3027_ = l_Lean_Elab_Tactic_elabTermForApply(v_e_2983_, v___x_2984_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_);
if (lean_obj_tag(v___x_3027_) == 0)
{
lean_object* v_a_3028_; lean_object* v___x_3029_; lean_object* v_a_3030_; uint8_t v___x_3031_; 
v_a_3028_ = lean_ctor_get(v___x_3027_, 0);
lean_inc(v_a_3028_);
lean_dec_ref(v___x_3027_);
v___x_3029_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_a_3028_, v___y_2991_);
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
lean_inc(v_a_3030_);
lean_dec_ref(v___x_3029_);
v___x_3031_ = l_Lean_Expr_isMVar(v_a_3030_);
if (v___x_3031_ == 0)
{
v_val_2996_ = v_a_3030_;
v___y_2997_ = v___y_2987_;
v___y_2998_ = v___y_2988_;
v___y_2999_ = v___y_2989_;
v___y_3000_ = v___y_2990_;
v___y_3001_ = v___y_2991_;
v___y_3002_ = v___y_2992_;
v___y_3003_ = v___y_2993_;
goto v___jp_2995_;
}
else
{
uint8_t v___x_3032_; lean_object* v___x_3033_; 
v___x_3032_ = 0;
lean_inc(v___y_2993_);
lean_inc_ref(v___y_2992_);
lean_inc(v___y_2991_);
lean_inc_ref(v___y_2990_);
lean_inc(v___y_2989_);
lean_inc_ref(v___y_2988_);
v___x_3033_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_3032_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_);
if (lean_obj_tag(v___x_3033_) == 0)
{
lean_object* v___x_3034_; lean_object* v_a_3035_; 
lean_dec_ref(v___x_3033_);
v___x_3034_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_a_3030_, v___y_2991_);
v_a_3035_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3035_);
lean_dec_ref(v___x_3034_);
v_val_2996_ = v_a_3035_;
v___y_2997_ = v___y_2987_;
v___y_2998_ = v___y_2988_;
v___y_2999_ = v___y_2989_;
v___y_3000_ = v___y_2990_;
v___y_3001_ = v___y_2991_;
v___y_3002_ = v___y_2992_;
v___y_3003_ = v___y_2993_;
goto v___jp_2995_;
}
else
{
lean_dec(v_a_3030_);
lean_dec(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2990_);
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec_ref(v_tac_2985_);
return v___x_3033_;
}
}
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
lean_dec(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2990_);
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec_ref(v_tac_2985_);
v_a_3036_ = lean_ctor_get(v___x_3027_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_3027_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___x_3027_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_3027_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
}
v___jp_2995_:
{
lean_object* v___x_3004_; 
v___x_3004_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2997_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3006_; 
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_a_3005_);
lean_dec_ref(v___x_3004_);
lean_inc(v___y_3003_);
lean_inc_ref(v___y_3002_);
lean_inc(v___y_3001_);
lean_inc_ref(v___y_3000_);
v___x_3006_ = lean_apply_7(v_tac_2985_, v_a_3005_, v_val_2996_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, lean_box(0));
if (lean_obj_tag(v___x_3006_) == 0)
{
lean_object* v_a_3007_; uint8_t v___x_3008_; lean_object* v___x_3009_; 
v_a_3007_ = lean_ctor_get(v___x_3006_, 0);
lean_inc(v_a_3007_);
lean_dec_ref(v___x_3006_);
v___x_3008_ = 0;
lean_inc(v___y_3003_);
lean_inc_ref(v___y_3002_);
lean_inc(v___y_3001_);
lean_inc_ref(v___y_3000_);
v___x_3009_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_3008_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_);
if (lean_obj_tag(v___x_3009_) == 0)
{
lean_object* v___x_3010_; 
lean_dec_ref(v___x_3009_);
v___x_3010_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_3007_, v___y_2997_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3000_);
lean_dec(v___y_2997_);
return v___x_3010_;
}
else
{
lean_dec(v_a_3007_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3000_);
lean_dec(v___y_2997_);
return v___x_3009_;
}
}
else
{
lean_object* v_a_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3018_; 
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3000_);
lean_dec(v___y_2999_);
lean_dec_ref(v___y_2998_);
lean_dec(v___y_2997_);
v_a_3011_ = lean_ctor_get(v___x_3006_, 0);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_3006_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3013_ = v___x_3006_;
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_a_3011_);
lean_dec(v___x_3006_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3018_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v___x_3016_; 
if (v_isShared_3014_ == 0)
{
v___x_3016_ = v___x_3013_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v_a_3011_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
}
}
else
{
lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3000_);
lean_dec(v___y_2999_);
lean_dec_ref(v___y_2998_);
lean_dec(v___y_2997_);
lean_dec_ref(v_val_2996_);
lean_dec_ref(v_tac_2985_);
v_a_3019_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3021_ = v___x_3004_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_dec(v___x_3004_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3019_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0___boxed(lean_object* v_e_3044_, lean_object* v___x_3045_, lean_object* v_tac_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_){
_start:
{
uint8_t v___x_984__boxed_3056_; lean_object* v_res_3057_; 
v___x_984__boxed_3056_ = lean_unbox(v___x_3045_);
v_res_3057_ = l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0(v_e_3044_, v___x_984__boxed_3056_, v_tac_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic(lean_object* v_tac_3058_, lean_object* v_e_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_){
_start:
{
uint8_t v___x_3069_; lean_object* v___x_3070_; lean_object* v___f_3071_; lean_object* v___x_3072_; 
v___x_3069_ = 1;
v___x_3070_ = lean_box(v___x_3069_);
v___f_3071_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0___boxed), 12, 3);
lean_closure_set(v___f_3071_, 0, v_e_3059_);
lean_closure_set(v___f_3071_, 1, v___x_3070_);
lean_closure_set(v___f_3071_, 2, v_tac_3058_);
v___x_3072_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3071_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_, v_a_3064_, v_a_3065_, v_a_3066_, v_a_3067_);
return v___x_3072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___boxed(lean_object* v_tac_3073_, lean_object* v_e_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_){
_start:
{
lean_object* v_res_3084_; 
v_res_3084_ = l_Lean_Elab_Tactic_evalApplyLikeTactic(v_tac_3073_, v_e_3074_, v_a_3075_, v_a_3076_, v_a_3077_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_);
return v_res_3084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0(uint8_t v___x_3085_, lean_object* v_g_3086_, lean_object* v_e_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_){
_start:
{
uint8_t v___x_3093_; uint8_t v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v___x_3093_ = 0;
v___x_3094_ = 0;
v___x_3095_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3095_, 0, v___x_3093_);
lean_ctor_set_uint8(v___x_3095_, 1, v___x_3085_);
lean_ctor_set_uint8(v___x_3095_, 2, v___x_3094_);
lean_ctor_set_uint8(v___x_3095_, 3, v___x_3085_);
v___x_3096_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__5, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5);
lean_inc_ref(v_e_3087_);
v___x_3097_ = l_Lean_MessageData_ofExpr(v_e_3087_);
v___x_3098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3096_);
lean_ctor_set(v___x_3098_, 1, v___x_3097_);
v___x_3099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3098_);
lean_ctor_set(v___x_3099_, 1, v___x_3096_);
v___x_3100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3099_);
v___x_3101_ = l_Lean_MVarId_apply(v_g_3086_, v_e_3087_, v___x_3095_, v___x_3100_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_);
return v___x_3101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0___boxed(lean_object* v___x_3102_, lean_object* v_g_3103_, lean_object* v_e_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_){
_start:
{
uint8_t v___x_241__boxed_3110_; lean_object* v_res_3111_; 
v___x_241__boxed_3110_ = lean_unbox(v___x_3102_);
v_res_3111_ = l_Lean_Elab_Tactic_evalApply___lam__0(v___x_241__boxed_3110_, v_g_3103_, v_e_3104_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_);
return v_res_3111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply(lean_object* v_stx_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_){
_start:
{
lean_object* v___x_3128_; uint8_t v___x_3129_; 
v___x_3128_ = ((lean_object*)(l_Lean_Elab_Tactic_evalApply___closed__1));
lean_inc(v_stx_3118_);
v___x_3129_ = l_Lean_Syntax_isOfKind(v_stx_3118_, v___x_3128_);
if (v___x_3129_ == 0)
{
lean_object* v___x_3130_; 
lean_dec(v_a_3126_);
lean_dec_ref(v_a_3125_);
lean_dec(v_a_3124_);
lean_dec_ref(v_a_3123_);
lean_dec(v_a_3122_);
lean_dec_ref(v_a_3121_);
lean_dec(v_a_3120_);
lean_dec_ref(v_a_3119_);
lean_dec(v_stx_3118_);
v___x_3130_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_3130_;
}
else
{
lean_object* v___x_3131_; lean_object* v___f_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3131_ = lean_box(v___x_3129_);
v___f_3132_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalApply___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3132_, 0, v___x_3131_);
v___x_3133_ = lean_unsigned_to_nat(1u);
v___x_3134_ = l_Lean_Syntax_getArg(v_stx_3118_, v___x_3133_);
lean_dec(v_stx_3118_);
v___x_3135_ = l_Lean_Elab_Tactic_evalApplyLikeTactic(v___f_3132_, v___x_3134_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3135_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___boxed(lean_object* v_stx_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_){
_start:
{
lean_object* v_res_3146_; 
v_res_3146_ = l_Lean_Elab_Tactic_evalApply(v_stx_3136_, v_a_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_, v_a_3144_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1(){
_start:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3154_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3155_ = ((lean_object*)(l_Lean_Elab_Tactic_evalApply___closed__1));
v___x_3156_ = ((lean_object*)(l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1));
v___x_3157_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalApply___boxed), 10, 0);
v___x_3158_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3154_, v___x_3155_, v___x_3156_, v___x_3157_);
return v___x_3158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___boxed(lean_object* v_a_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1();
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3(){
_start:
{
lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; 
v___x_3187_ = ((lean_object*)(l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1));
v___x_3188_ = ((lean_object*)(l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6));
v___x_3189_ = l_Lean_addBuiltinDeclarationRanges(v___x_3187_, v___x_3188_);
return v___x_3189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___boxed(lean_object* v_a_3190_){
_start:
{
lean_object* v_res_3191_; 
v_res_3191_ = l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3();
return v_res_3191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0(lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_){
_start:
{
lean_object* v___x_3205_; 
v___x_3205_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3197_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; uint8_t v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3206_);
lean_dec_ref(v___x_3205_);
v___x_3207_ = 0;
v___x_3208_ = ((lean_object*)(l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___closed__0));
lean_inc(v___y_3203_);
lean_inc_ref(v___y_3202_);
lean_inc(v___y_3201_);
lean_inc_ref(v___y_3200_);
v___x_3209_ = l_Lean_MVarId_constructor(v_a_3206_, v___x_3208_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_);
if (lean_obj_tag(v___x_3209_) == 0)
{
lean_object* v_a_3210_; lean_object* v___x_3211_; 
v_a_3210_ = lean_ctor_get(v___x_3209_, 0);
lean_inc(v_a_3210_);
lean_dec_ref(v___x_3209_);
lean_inc(v___y_3203_);
lean_inc_ref(v___y_3202_);
lean_inc(v___y_3201_);
lean_inc_ref(v___y_3200_);
v___x_3211_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_3207_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_object* v___x_3212_; 
lean_dec_ref(v___x_3211_);
v___x_3212_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_3210_, v___y_3197_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_);
lean_dec(v___y_3203_);
lean_dec_ref(v___y_3202_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
return v___x_3212_;
}
else
{
lean_dec(v_a_3210_);
lean_dec(v___y_3203_);
lean_dec_ref(v___y_3202_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
return v___x_3211_;
}
}
else
{
lean_object* v_a_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3220_; 
lean_dec(v___y_3203_);
lean_dec_ref(v___y_3202_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
v_a_3213_ = lean_ctor_get(v___x_3209_, 0);
v_isSharedCheck_3220_ = !lean_is_exclusive(v___x_3209_);
if (v_isSharedCheck_3220_ == 0)
{
v___x_3215_ = v___x_3209_;
v_isShared_3216_ = v_isSharedCheck_3220_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_a_3213_);
lean_dec(v___x_3209_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3220_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v___x_3218_; 
if (v_isShared_3216_ == 0)
{
v___x_3218_ = v___x_3215_;
goto v_reusejp_3217_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v_a_3213_);
v___x_3218_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3217_;
}
v_reusejp_3217_:
{
return v___x_3218_;
}
}
}
}
else
{
lean_object* v_a_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3228_; 
lean_dec(v___y_3203_);
lean_dec_ref(v___y_3202_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
v_a_3221_ = lean_ctor_get(v___x_3205_, 0);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3223_ = v___x_3205_;
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_a_3221_);
lean_dec(v___x_3205_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3226_; 
if (v_isShared_3224_ == 0)
{
v___x_3226_ = v___x_3223_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v_a_3221_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
return v___x_3226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___boxed(lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_){
_start:
{
lean_object* v_res_3238_; 
v_res_3238_ = l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0(v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_);
lean_dec(v___y_3230_);
lean_dec_ref(v___y_3229_);
return v_res_3238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg(lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_, lean_object* v_a_3246_, lean_object* v_a_3247_){
_start:
{
lean_object* v___f_3249_; lean_object* v___x_3250_; 
v___f_3249_ = ((lean_object*)(l_Lean_Elab_Tactic_evalConstructor___redArg___closed__0));
v___x_3250_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3249_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_, v_a_3245_, v_a_3246_, v_a_3247_);
return v___x_3250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___boxed(lean_object* v_a_3251_, lean_object* v_a_3252_, lean_object* v_a_3253_, lean_object* v_a_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_){
_start:
{
lean_object* v_res_3260_; 
v_res_3260_ = l_Lean_Elab_Tactic_evalConstructor___redArg(v_a_3251_, v_a_3252_, v_a_3253_, v_a_3254_, v_a_3255_, v_a_3256_, v_a_3257_, v_a_3258_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor(lean_object* v_x_3261_, lean_object* v_a_3262_, lean_object* v_a_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_, lean_object* v_a_3267_, lean_object* v_a_3268_, lean_object* v_a_3269_){
_start:
{
lean_object* v___x_3271_; 
v___x_3271_ = l_Lean_Elab_Tactic_evalConstructor___redArg(v_a_3262_, v_a_3263_, v_a_3264_, v_a_3265_, v_a_3266_, v_a_3267_, v_a_3268_, v_a_3269_);
return v___x_3271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___boxed(lean_object* v_x_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_, lean_object* v_a_3278_, lean_object* v_a_3279_, lean_object* v_a_3280_, lean_object* v_a_3281_){
_start:
{
lean_object* v_res_3282_; 
v_res_3282_ = l_Lean_Elab_Tactic_evalConstructor(v_x_3272_, v_a_3273_, v_a_3274_, v_a_3275_, v_a_3276_, v_a_3277_, v_a_3278_, v_a_3279_, v_a_3280_);
lean_dec(v_x_3272_);
return v_res_3282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1(){
_start:
{
lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3296_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3297_ = ((lean_object*)(l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1));
v___x_3298_ = ((lean_object*)(l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3));
v___x_3299_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalConstructor___boxed), 10, 0);
v___x_3300_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3296_, v___x_3297_, v___x_3298_, v___x_3299_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___boxed(lean_object* v_a_3301_){
_start:
{
lean_object* v_res_3302_; 
v_res_3302_ = l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1();
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3(){
_start:
{
lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; 
v___x_3329_ = ((lean_object*)(l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3));
v___x_3330_ = ((lean_object*)(l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6));
v___x_3331_ = l_Lean_addBuiltinDeclarationRanges(v___x_3329_, v___x_3330_);
return v___x_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___boxed(lean_object* v_a_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3();
return v_res_3333_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_evalWithReducible___closed__0(void){
_start:
{
uint8_t v___x_3334_; uint64_t v___x_3335_; 
v___x_3334_ = 2;
v___x_3335_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3334_);
return v___x_3335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible(lean_object* v_stx_3336_, lean_object* v_a_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_){
_start:
{
lean_object* v___x_3346_; uint8_t v_foApprox_3347_; uint8_t v_ctxApprox_3348_; uint8_t v_quasiPatternApprox_3349_; uint8_t v_constApprox_3350_; uint8_t v_isDefEqStuckEx_3351_; uint8_t v_unificationHints_3352_; uint8_t v_proofIrrelevance_3353_; uint8_t v_assignSyntheticOpaque_3354_; uint8_t v_offsetCnstrs_3355_; uint8_t v_etaStruct_3356_; uint8_t v_univApprox_3357_; uint8_t v_iota_3358_; uint8_t v_beta_3359_; uint8_t v_proj_3360_; uint8_t v_zeta_3361_; uint8_t v_zetaDelta_3362_; uint8_t v_zetaUnused_3363_; uint8_t v_zetaHave_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3414_; 
v___x_3346_ = l_Lean_Meta_Context_config(v_a_3341_);
v_foApprox_3347_ = lean_ctor_get_uint8(v___x_3346_, 0);
v_ctxApprox_3348_ = lean_ctor_get_uint8(v___x_3346_, 1);
v_quasiPatternApprox_3349_ = lean_ctor_get_uint8(v___x_3346_, 2);
v_constApprox_3350_ = lean_ctor_get_uint8(v___x_3346_, 3);
v_isDefEqStuckEx_3351_ = lean_ctor_get_uint8(v___x_3346_, 4);
v_unificationHints_3352_ = lean_ctor_get_uint8(v___x_3346_, 5);
v_proofIrrelevance_3353_ = lean_ctor_get_uint8(v___x_3346_, 6);
v_assignSyntheticOpaque_3354_ = lean_ctor_get_uint8(v___x_3346_, 7);
v_offsetCnstrs_3355_ = lean_ctor_get_uint8(v___x_3346_, 8);
v_etaStruct_3356_ = lean_ctor_get_uint8(v___x_3346_, 10);
v_univApprox_3357_ = lean_ctor_get_uint8(v___x_3346_, 11);
v_iota_3358_ = lean_ctor_get_uint8(v___x_3346_, 12);
v_beta_3359_ = lean_ctor_get_uint8(v___x_3346_, 13);
v_proj_3360_ = lean_ctor_get_uint8(v___x_3346_, 14);
v_zeta_3361_ = lean_ctor_get_uint8(v___x_3346_, 15);
v_zetaDelta_3362_ = lean_ctor_get_uint8(v___x_3346_, 16);
v_zetaUnused_3363_ = lean_ctor_get_uint8(v___x_3346_, 17);
v_zetaHave_3364_ = lean_ctor_get_uint8(v___x_3346_, 18);
v_isSharedCheck_3414_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3414_ == 0)
{
v___x_3366_ = v___x_3346_;
v_isShared_3367_ = v_isSharedCheck_3414_;
goto v_resetjp_3365_;
}
else
{
lean_dec(v___x_3346_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3414_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
uint8_t v_trackZetaDelta_3368_; lean_object* v_zetaDeltaSet_3369_; lean_object* v_lctx_3370_; lean_object* v_localInstances_3371_; lean_object* v_defEqCtx_x3f_3372_; lean_object* v_synthPendingDepth_3373_; lean_object* v_canUnfold_x3f_3374_; uint8_t v_univApprox_3375_; uint8_t v_inTypeClassResolution_3376_; uint8_t v_cacheInferType_3377_; uint8_t v___x_3378_; lean_object* v_config_3380_; 
v_trackZetaDelta_3368_ = lean_ctor_get_uint8(v_a_3341_, sizeof(void*)*7);
v_zetaDeltaSet_3369_ = lean_ctor_get(v_a_3341_, 1);
lean_inc(v_zetaDeltaSet_3369_);
v_lctx_3370_ = lean_ctor_get(v_a_3341_, 2);
lean_inc_ref(v_lctx_3370_);
v_localInstances_3371_ = lean_ctor_get(v_a_3341_, 3);
lean_inc_ref(v_localInstances_3371_);
v_defEqCtx_x3f_3372_ = lean_ctor_get(v_a_3341_, 4);
lean_inc(v_defEqCtx_x3f_3372_);
v_synthPendingDepth_3373_ = lean_ctor_get(v_a_3341_, 5);
lean_inc(v_synthPendingDepth_3373_);
v_canUnfold_x3f_3374_ = lean_ctor_get(v_a_3341_, 6);
lean_inc(v_canUnfold_x3f_3374_);
v_univApprox_3375_ = lean_ctor_get_uint8(v_a_3341_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3376_ = lean_ctor_get_uint8(v_a_3341_, sizeof(void*)*7 + 2);
v_cacheInferType_3377_ = lean_ctor_get_uint8(v_a_3341_, sizeof(void*)*7 + 3);
v___x_3378_ = 2;
if (v_isShared_3367_ == 0)
{
v_config_3380_ = v___x_3366_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 0, v_foApprox_3347_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 1, v_ctxApprox_3348_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 2, v_quasiPatternApprox_3349_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 3, v_constApprox_3350_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 4, v_isDefEqStuckEx_3351_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 5, v_unificationHints_3352_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 6, v_proofIrrelevance_3353_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 7, v_assignSyntheticOpaque_3354_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 8, v_offsetCnstrs_3355_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 10, v_etaStruct_3356_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 11, v_univApprox_3357_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 12, v_iota_3358_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 13, v_beta_3359_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 14, v_proj_3360_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 15, v_zeta_3361_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 16, v_zetaDelta_3362_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 17, v_zetaUnused_3363_);
lean_ctor_set_uint8(v_reuseFailAlloc_3413_, 18, v_zetaHave_3364_);
v_config_3380_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
uint64_t v___x_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3405_; 
lean_ctor_set_uint8(v_config_3380_, 9, v___x_3378_);
v___x_3381_ = l_Lean_Meta_Context_configKey(v_a_3341_);
v_isSharedCheck_3405_ = !lean_is_exclusive(v_a_3341_);
if (v_isSharedCheck_3405_ == 0)
{
lean_object* v_unused_3406_; lean_object* v_unused_3407_; lean_object* v_unused_3408_; lean_object* v_unused_3409_; lean_object* v_unused_3410_; lean_object* v_unused_3411_; lean_object* v_unused_3412_; 
v_unused_3406_ = lean_ctor_get(v_a_3341_, 6);
lean_dec(v_unused_3406_);
v_unused_3407_ = lean_ctor_get(v_a_3341_, 5);
lean_dec(v_unused_3407_);
v_unused_3408_ = lean_ctor_get(v_a_3341_, 4);
lean_dec(v_unused_3408_);
v_unused_3409_ = lean_ctor_get(v_a_3341_, 3);
lean_dec(v_unused_3409_);
v_unused_3410_ = lean_ctor_get(v_a_3341_, 2);
lean_dec(v_unused_3410_);
v_unused_3411_ = lean_ctor_get(v_a_3341_, 1);
lean_dec(v_unused_3411_);
v_unused_3412_ = lean_ctor_get(v_a_3341_, 0);
lean_dec(v_unused_3412_);
v___x_3383_ = v_a_3341_;
v_isShared_3384_ = v_isSharedCheck_3405_;
goto v_resetjp_3382_;
}
else
{
lean_dec(v_a_3341_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3405_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
uint64_t v___x_3385_; uint64_t v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; uint64_t v___x_3389_; uint64_t v___x_3390_; uint64_t v_key_3391_; lean_object* v___x_3392_; lean_object* v___x_3394_; 
v___x_3385_ = 2ULL;
v___x_3386_ = lean_uint64_shift_right(v___x_3381_, v___x_3385_);
v___x_3387_ = lean_unsigned_to_nat(1u);
v___x_3388_ = l_Lean_Syntax_getArg(v_stx_3336_, v___x_3387_);
v___x_3389_ = lean_uint64_shift_left(v___x_3386_, v___x_3385_);
v___x_3390_ = lean_uint64_once(&l_Lean_Elab_Tactic_evalWithReducible___closed__0, &l_Lean_Elab_Tactic_evalWithReducible___closed__0_once, _init_l_Lean_Elab_Tactic_evalWithReducible___closed__0);
v_key_3391_ = lean_uint64_lor(v___x_3389_, v___x_3390_);
v___x_3392_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3392_, 0, v_config_3380_);
lean_ctor_set_uint64(v___x_3392_, sizeof(void*)*1, v_key_3391_);
if (v_isShared_3384_ == 0)
{
lean_ctor_set(v___x_3383_, 0, v___x_3392_);
v___x_3394_ = v___x_3383_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v___x_3392_);
lean_ctor_set(v_reuseFailAlloc_3404_, 1, v_zetaDeltaSet_3369_);
lean_ctor_set(v_reuseFailAlloc_3404_, 2, v_lctx_3370_);
lean_ctor_set(v_reuseFailAlloc_3404_, 3, v_localInstances_3371_);
lean_ctor_set(v_reuseFailAlloc_3404_, 4, v_defEqCtx_x3f_3372_);
lean_ctor_set(v_reuseFailAlloc_3404_, 5, v_synthPendingDepth_3373_);
lean_ctor_set(v_reuseFailAlloc_3404_, 6, v_canUnfold_x3f_3374_);
lean_ctor_set_uint8(v_reuseFailAlloc_3404_, sizeof(void*)*7, v_trackZetaDelta_3368_);
lean_ctor_set_uint8(v_reuseFailAlloc_3404_, sizeof(void*)*7 + 1, v_univApprox_3375_);
lean_ctor_set_uint8(v_reuseFailAlloc_3404_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3376_);
lean_ctor_set_uint8(v_reuseFailAlloc_3404_, sizeof(void*)*7 + 3, v_cacheInferType_3377_);
v___x_3394_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
lean_object* v___x_3395_; 
v___x_3395_ = l_Lean_Elab_Tactic_evalTactic(v___x_3388_, v_a_3337_, v_a_3338_, v_a_3339_, v_a_3340_, v___x_3394_, v_a_3342_, v_a_3343_, v_a_3344_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3403_; 
v_a_3396_ = lean_ctor_get(v___x_3395_, 0);
v_isSharedCheck_3403_ = !lean_is_exclusive(v___x_3395_);
if (v_isSharedCheck_3403_ == 0)
{
v___x_3398_ = v___x_3395_;
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v___x_3395_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v___x_3401_; 
if (v_isShared_3399_ == 0)
{
v___x_3401_ = v___x_3398_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v_a_3396_);
v___x_3401_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
return v___x_3401_;
}
}
}
else
{
return v___x_3395_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___boxed(lean_object* v_stx_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_, lean_object* v_a_3423_, lean_object* v_a_3424_){
_start:
{
lean_object* v_res_3425_; 
v_res_3425_ = l_Lean_Elab_Tactic_evalWithReducible(v_stx_3415_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, v_a_3421_, v_a_3422_, v_a_3423_);
lean_dec(v_stx_3415_);
return v_res_3425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1(){
_start:
{
lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; 
v___x_3439_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3440_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1));
v___x_3441_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3));
v___x_3442_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithReducible___boxed), 10, 0);
v___x_3443_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3439_, v___x_3440_, v___x_3441_, v___x_3442_);
return v___x_3443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___boxed(lean_object* v_a_3444_){
_start:
{
lean_object* v_res_3445_; 
v_res_3445_ = l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1();
return v_res_3445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3(){
_start:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; 
v___x_3472_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3));
v___x_3473_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6));
v___x_3474_ = l_Lean_addBuiltinDeclarationRanges(v___x_3472_, v___x_3473_);
return v___x_3474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___boxed(lean_object* v_a_3475_){
_start:
{
lean_object* v_res_3476_; 
v_res_3476_ = l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3();
return v_res_3476_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0(void){
_start:
{
uint8_t v___x_3477_; uint64_t v___x_3478_; 
v___x_3477_ = 3;
v___x_3478_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3477_);
return v___x_3478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances(lean_object* v_stx_3479_, lean_object* v_a_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_){
_start:
{
lean_object* v___x_3489_; uint8_t v_foApprox_3490_; uint8_t v_ctxApprox_3491_; uint8_t v_quasiPatternApprox_3492_; uint8_t v_constApprox_3493_; uint8_t v_isDefEqStuckEx_3494_; uint8_t v_unificationHints_3495_; uint8_t v_proofIrrelevance_3496_; uint8_t v_assignSyntheticOpaque_3497_; uint8_t v_offsetCnstrs_3498_; uint8_t v_etaStruct_3499_; uint8_t v_univApprox_3500_; uint8_t v_iota_3501_; uint8_t v_beta_3502_; uint8_t v_proj_3503_; uint8_t v_zeta_3504_; uint8_t v_zetaDelta_3505_; uint8_t v_zetaUnused_3506_; uint8_t v_zetaHave_3507_; lean_object* v___x_3509_; uint8_t v_isShared_3510_; uint8_t v_isSharedCheck_3557_; 
v___x_3489_ = l_Lean_Meta_Context_config(v_a_3484_);
v_foApprox_3490_ = lean_ctor_get_uint8(v___x_3489_, 0);
v_ctxApprox_3491_ = lean_ctor_get_uint8(v___x_3489_, 1);
v_quasiPatternApprox_3492_ = lean_ctor_get_uint8(v___x_3489_, 2);
v_constApprox_3493_ = lean_ctor_get_uint8(v___x_3489_, 3);
v_isDefEqStuckEx_3494_ = lean_ctor_get_uint8(v___x_3489_, 4);
v_unificationHints_3495_ = lean_ctor_get_uint8(v___x_3489_, 5);
v_proofIrrelevance_3496_ = lean_ctor_get_uint8(v___x_3489_, 6);
v_assignSyntheticOpaque_3497_ = lean_ctor_get_uint8(v___x_3489_, 7);
v_offsetCnstrs_3498_ = lean_ctor_get_uint8(v___x_3489_, 8);
v_etaStruct_3499_ = lean_ctor_get_uint8(v___x_3489_, 10);
v_univApprox_3500_ = lean_ctor_get_uint8(v___x_3489_, 11);
v_iota_3501_ = lean_ctor_get_uint8(v___x_3489_, 12);
v_beta_3502_ = lean_ctor_get_uint8(v___x_3489_, 13);
v_proj_3503_ = lean_ctor_get_uint8(v___x_3489_, 14);
v_zeta_3504_ = lean_ctor_get_uint8(v___x_3489_, 15);
v_zetaDelta_3505_ = lean_ctor_get_uint8(v___x_3489_, 16);
v_zetaUnused_3506_ = lean_ctor_get_uint8(v___x_3489_, 17);
v_zetaHave_3507_ = lean_ctor_get_uint8(v___x_3489_, 18);
v_isSharedCheck_3557_ = !lean_is_exclusive(v___x_3489_);
if (v_isSharedCheck_3557_ == 0)
{
v___x_3509_ = v___x_3489_;
v_isShared_3510_ = v_isSharedCheck_3557_;
goto v_resetjp_3508_;
}
else
{
lean_dec(v___x_3489_);
v___x_3509_ = lean_box(0);
v_isShared_3510_ = v_isSharedCheck_3557_;
goto v_resetjp_3508_;
}
v_resetjp_3508_:
{
uint8_t v_trackZetaDelta_3511_; lean_object* v_zetaDeltaSet_3512_; lean_object* v_lctx_3513_; lean_object* v_localInstances_3514_; lean_object* v_defEqCtx_x3f_3515_; lean_object* v_synthPendingDepth_3516_; lean_object* v_canUnfold_x3f_3517_; uint8_t v_univApprox_3518_; uint8_t v_inTypeClassResolution_3519_; uint8_t v_cacheInferType_3520_; uint8_t v___x_3521_; lean_object* v_config_3523_; 
v_trackZetaDelta_3511_ = lean_ctor_get_uint8(v_a_3484_, sizeof(void*)*7);
v_zetaDeltaSet_3512_ = lean_ctor_get(v_a_3484_, 1);
lean_inc(v_zetaDeltaSet_3512_);
v_lctx_3513_ = lean_ctor_get(v_a_3484_, 2);
lean_inc_ref(v_lctx_3513_);
v_localInstances_3514_ = lean_ctor_get(v_a_3484_, 3);
lean_inc_ref(v_localInstances_3514_);
v_defEqCtx_x3f_3515_ = lean_ctor_get(v_a_3484_, 4);
lean_inc(v_defEqCtx_x3f_3515_);
v_synthPendingDepth_3516_ = lean_ctor_get(v_a_3484_, 5);
lean_inc(v_synthPendingDepth_3516_);
v_canUnfold_x3f_3517_ = lean_ctor_get(v_a_3484_, 6);
lean_inc(v_canUnfold_x3f_3517_);
v_univApprox_3518_ = lean_ctor_get_uint8(v_a_3484_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3519_ = lean_ctor_get_uint8(v_a_3484_, sizeof(void*)*7 + 2);
v_cacheInferType_3520_ = lean_ctor_get_uint8(v_a_3484_, sizeof(void*)*7 + 3);
v___x_3521_ = 3;
if (v_isShared_3510_ == 0)
{
v_config_3523_ = v___x_3509_;
goto v_reusejp_3522_;
}
else
{
lean_object* v_reuseFailAlloc_3556_; 
v_reuseFailAlloc_3556_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 0, v_foApprox_3490_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 1, v_ctxApprox_3491_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 2, v_quasiPatternApprox_3492_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 3, v_constApprox_3493_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 4, v_isDefEqStuckEx_3494_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 5, v_unificationHints_3495_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 6, v_proofIrrelevance_3496_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 7, v_assignSyntheticOpaque_3497_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 8, v_offsetCnstrs_3498_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 10, v_etaStruct_3499_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 11, v_univApprox_3500_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 12, v_iota_3501_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 13, v_beta_3502_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 14, v_proj_3503_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 15, v_zeta_3504_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 16, v_zetaDelta_3505_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 17, v_zetaUnused_3506_);
lean_ctor_set_uint8(v_reuseFailAlloc_3556_, 18, v_zetaHave_3507_);
v_config_3523_ = v_reuseFailAlloc_3556_;
goto v_reusejp_3522_;
}
v_reusejp_3522_:
{
uint64_t v___x_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3548_; 
lean_ctor_set_uint8(v_config_3523_, 9, v___x_3521_);
v___x_3524_ = l_Lean_Meta_Context_configKey(v_a_3484_);
v_isSharedCheck_3548_ = !lean_is_exclusive(v_a_3484_);
if (v_isSharedCheck_3548_ == 0)
{
lean_object* v_unused_3549_; lean_object* v_unused_3550_; lean_object* v_unused_3551_; lean_object* v_unused_3552_; lean_object* v_unused_3553_; lean_object* v_unused_3554_; lean_object* v_unused_3555_; 
v_unused_3549_ = lean_ctor_get(v_a_3484_, 6);
lean_dec(v_unused_3549_);
v_unused_3550_ = lean_ctor_get(v_a_3484_, 5);
lean_dec(v_unused_3550_);
v_unused_3551_ = lean_ctor_get(v_a_3484_, 4);
lean_dec(v_unused_3551_);
v_unused_3552_ = lean_ctor_get(v_a_3484_, 3);
lean_dec(v_unused_3552_);
v_unused_3553_ = lean_ctor_get(v_a_3484_, 2);
lean_dec(v_unused_3553_);
v_unused_3554_ = lean_ctor_get(v_a_3484_, 1);
lean_dec(v_unused_3554_);
v_unused_3555_ = lean_ctor_get(v_a_3484_, 0);
lean_dec(v_unused_3555_);
v___x_3526_ = v_a_3484_;
v_isShared_3527_ = v_isSharedCheck_3548_;
goto v_resetjp_3525_;
}
else
{
lean_dec(v_a_3484_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3548_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
uint64_t v___x_3528_; uint64_t v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; uint64_t v___x_3532_; uint64_t v___x_3533_; uint64_t v_key_3534_; lean_object* v___x_3535_; lean_object* v___x_3537_; 
v___x_3528_ = 2ULL;
v___x_3529_ = lean_uint64_shift_right(v___x_3524_, v___x_3528_);
v___x_3530_ = lean_unsigned_to_nat(1u);
v___x_3531_ = l_Lean_Syntax_getArg(v_stx_3479_, v___x_3530_);
v___x_3532_ = lean_uint64_shift_left(v___x_3529_, v___x_3528_);
v___x_3533_ = lean_uint64_once(&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0, &l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0_once, _init_l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0);
v_key_3534_ = lean_uint64_lor(v___x_3532_, v___x_3533_);
v___x_3535_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3535_, 0, v_config_3523_);
lean_ctor_set_uint64(v___x_3535_, sizeof(void*)*1, v_key_3534_);
if (v_isShared_3527_ == 0)
{
lean_ctor_set(v___x_3526_, 0, v___x_3535_);
v___x_3537_ = v___x_3526_;
goto v_reusejp_3536_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v___x_3535_);
lean_ctor_set(v_reuseFailAlloc_3547_, 1, v_zetaDeltaSet_3512_);
lean_ctor_set(v_reuseFailAlloc_3547_, 2, v_lctx_3513_);
lean_ctor_set(v_reuseFailAlloc_3547_, 3, v_localInstances_3514_);
lean_ctor_set(v_reuseFailAlloc_3547_, 4, v_defEqCtx_x3f_3515_);
lean_ctor_set(v_reuseFailAlloc_3547_, 5, v_synthPendingDepth_3516_);
lean_ctor_set(v_reuseFailAlloc_3547_, 6, v_canUnfold_x3f_3517_);
lean_ctor_set_uint8(v_reuseFailAlloc_3547_, sizeof(void*)*7, v_trackZetaDelta_3511_);
lean_ctor_set_uint8(v_reuseFailAlloc_3547_, sizeof(void*)*7 + 1, v_univApprox_3518_);
lean_ctor_set_uint8(v_reuseFailAlloc_3547_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3519_);
lean_ctor_set_uint8(v_reuseFailAlloc_3547_, sizeof(void*)*7 + 3, v_cacheInferType_3520_);
v___x_3537_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3536_;
}
v_reusejp_3536_:
{
lean_object* v___x_3538_; 
v___x_3538_ = l_Lean_Elab_Tactic_evalTactic(v___x_3531_, v_a_3480_, v_a_3481_, v_a_3482_, v_a_3483_, v___x_3537_, v_a_3485_, v_a_3486_, v_a_3487_);
if (lean_obj_tag(v___x_3538_) == 0)
{
lean_object* v_a_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3546_; 
v_a_3539_ = lean_ctor_get(v___x_3538_, 0);
v_isSharedCheck_3546_ = !lean_is_exclusive(v___x_3538_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3541_ = v___x_3538_;
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_a_3539_);
lean_dec(v___x_3538_);
v___x_3541_ = lean_box(0);
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
v_resetjp_3540_:
{
lean_object* v___x_3544_; 
if (v_isShared_3542_ == 0)
{
v___x_3544_ = v___x_3541_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v_a_3539_);
v___x_3544_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
return v___x_3544_;
}
}
}
else
{
return v___x_3538_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___boxed(lean_object* v_stx_3558_, lean_object* v_a_3559_, lean_object* v_a_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l_Lean_Elab_Tactic_evalWithReducibleAndInstances(v_stx_3558_, v_a_3559_, v_a_3560_, v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_);
lean_dec(v_stx_3558_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1(){
_start:
{
lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3582_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3583_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1));
v___x_3584_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3));
v___x_3585_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithReducibleAndInstances___boxed), 10, 0);
v___x_3586_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3582_, v___x_3583_, v___x_3584_, v___x_3585_);
return v___x_3586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___boxed(lean_object* v_a_3587_){
_start:
{
lean_object* v_res_3588_; 
v_res_3588_ = l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1();
return v_res_3588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3(){
_start:
{
lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; 
v___x_3615_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3));
v___x_3616_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6));
v___x_3617_ = l_Lean_addBuiltinDeclarationRanges(v___x_3615_, v___x_3616_);
return v___x_3617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___boxed(lean_object* v_a_3618_){
_start:
{
lean_object* v_res_3619_; 
v_res_3619_ = l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3();
return v_res_3619_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0(void){
_start:
{
uint8_t v___x_3620_; uint64_t v___x_3621_; 
v___x_3620_ = 0;
v___x_3621_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3620_);
return v___x_3621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll(lean_object* v_stx_3622_, lean_object* v_a_3623_, lean_object* v_a_3624_, lean_object* v_a_3625_, lean_object* v_a_3626_, lean_object* v_a_3627_, lean_object* v_a_3628_, lean_object* v_a_3629_, lean_object* v_a_3630_){
_start:
{
lean_object* v___x_3632_; uint8_t v_foApprox_3633_; uint8_t v_ctxApprox_3634_; uint8_t v_quasiPatternApprox_3635_; uint8_t v_constApprox_3636_; uint8_t v_isDefEqStuckEx_3637_; uint8_t v_unificationHints_3638_; uint8_t v_proofIrrelevance_3639_; uint8_t v_assignSyntheticOpaque_3640_; uint8_t v_offsetCnstrs_3641_; uint8_t v_etaStruct_3642_; uint8_t v_univApprox_3643_; uint8_t v_iota_3644_; uint8_t v_beta_3645_; uint8_t v_proj_3646_; uint8_t v_zeta_3647_; uint8_t v_zetaDelta_3648_; uint8_t v_zetaUnused_3649_; uint8_t v_zetaHave_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3700_; 
v___x_3632_ = l_Lean_Meta_Context_config(v_a_3627_);
v_foApprox_3633_ = lean_ctor_get_uint8(v___x_3632_, 0);
v_ctxApprox_3634_ = lean_ctor_get_uint8(v___x_3632_, 1);
v_quasiPatternApprox_3635_ = lean_ctor_get_uint8(v___x_3632_, 2);
v_constApprox_3636_ = lean_ctor_get_uint8(v___x_3632_, 3);
v_isDefEqStuckEx_3637_ = lean_ctor_get_uint8(v___x_3632_, 4);
v_unificationHints_3638_ = lean_ctor_get_uint8(v___x_3632_, 5);
v_proofIrrelevance_3639_ = lean_ctor_get_uint8(v___x_3632_, 6);
v_assignSyntheticOpaque_3640_ = lean_ctor_get_uint8(v___x_3632_, 7);
v_offsetCnstrs_3641_ = lean_ctor_get_uint8(v___x_3632_, 8);
v_etaStruct_3642_ = lean_ctor_get_uint8(v___x_3632_, 10);
v_univApprox_3643_ = lean_ctor_get_uint8(v___x_3632_, 11);
v_iota_3644_ = lean_ctor_get_uint8(v___x_3632_, 12);
v_beta_3645_ = lean_ctor_get_uint8(v___x_3632_, 13);
v_proj_3646_ = lean_ctor_get_uint8(v___x_3632_, 14);
v_zeta_3647_ = lean_ctor_get_uint8(v___x_3632_, 15);
v_zetaDelta_3648_ = lean_ctor_get_uint8(v___x_3632_, 16);
v_zetaUnused_3649_ = lean_ctor_get_uint8(v___x_3632_, 17);
v_zetaHave_3650_ = lean_ctor_get_uint8(v___x_3632_, 18);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3632_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3652_ = v___x_3632_;
v_isShared_3653_ = v_isSharedCheck_3700_;
goto v_resetjp_3651_;
}
else
{
lean_dec(v___x_3632_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3700_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
uint8_t v_trackZetaDelta_3654_; lean_object* v_zetaDeltaSet_3655_; lean_object* v_lctx_3656_; lean_object* v_localInstances_3657_; lean_object* v_defEqCtx_x3f_3658_; lean_object* v_synthPendingDepth_3659_; lean_object* v_canUnfold_x3f_3660_; uint8_t v_univApprox_3661_; uint8_t v_inTypeClassResolution_3662_; uint8_t v_cacheInferType_3663_; uint8_t v___x_3664_; lean_object* v_config_3666_; 
v_trackZetaDelta_3654_ = lean_ctor_get_uint8(v_a_3627_, sizeof(void*)*7);
v_zetaDeltaSet_3655_ = lean_ctor_get(v_a_3627_, 1);
lean_inc(v_zetaDeltaSet_3655_);
v_lctx_3656_ = lean_ctor_get(v_a_3627_, 2);
lean_inc_ref(v_lctx_3656_);
v_localInstances_3657_ = lean_ctor_get(v_a_3627_, 3);
lean_inc_ref(v_localInstances_3657_);
v_defEqCtx_x3f_3658_ = lean_ctor_get(v_a_3627_, 4);
lean_inc(v_defEqCtx_x3f_3658_);
v_synthPendingDepth_3659_ = lean_ctor_get(v_a_3627_, 5);
lean_inc(v_synthPendingDepth_3659_);
v_canUnfold_x3f_3660_ = lean_ctor_get(v_a_3627_, 6);
lean_inc(v_canUnfold_x3f_3660_);
v_univApprox_3661_ = lean_ctor_get_uint8(v_a_3627_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3662_ = lean_ctor_get_uint8(v_a_3627_, sizeof(void*)*7 + 2);
v_cacheInferType_3663_ = lean_ctor_get_uint8(v_a_3627_, sizeof(void*)*7 + 3);
v___x_3664_ = 0;
if (v_isShared_3653_ == 0)
{
v_config_3666_ = v___x_3652_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 0, v_foApprox_3633_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 1, v_ctxApprox_3634_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 2, v_quasiPatternApprox_3635_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 3, v_constApprox_3636_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 4, v_isDefEqStuckEx_3637_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 5, v_unificationHints_3638_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 6, v_proofIrrelevance_3639_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 7, v_assignSyntheticOpaque_3640_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 8, v_offsetCnstrs_3641_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 10, v_etaStruct_3642_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 11, v_univApprox_3643_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 12, v_iota_3644_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 13, v_beta_3645_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 14, v_proj_3646_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 15, v_zeta_3647_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 16, v_zetaDelta_3648_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 17, v_zetaUnused_3649_);
lean_ctor_set_uint8(v_reuseFailAlloc_3699_, 18, v_zetaHave_3650_);
v_config_3666_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
uint64_t v___x_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3691_; 
lean_ctor_set_uint8(v_config_3666_, 9, v___x_3664_);
v___x_3667_ = l_Lean_Meta_Context_configKey(v_a_3627_);
v_isSharedCheck_3691_ = !lean_is_exclusive(v_a_3627_);
if (v_isSharedCheck_3691_ == 0)
{
lean_object* v_unused_3692_; lean_object* v_unused_3693_; lean_object* v_unused_3694_; lean_object* v_unused_3695_; lean_object* v_unused_3696_; lean_object* v_unused_3697_; lean_object* v_unused_3698_; 
v_unused_3692_ = lean_ctor_get(v_a_3627_, 6);
lean_dec(v_unused_3692_);
v_unused_3693_ = lean_ctor_get(v_a_3627_, 5);
lean_dec(v_unused_3693_);
v_unused_3694_ = lean_ctor_get(v_a_3627_, 4);
lean_dec(v_unused_3694_);
v_unused_3695_ = lean_ctor_get(v_a_3627_, 3);
lean_dec(v_unused_3695_);
v_unused_3696_ = lean_ctor_get(v_a_3627_, 2);
lean_dec(v_unused_3696_);
v_unused_3697_ = lean_ctor_get(v_a_3627_, 1);
lean_dec(v_unused_3697_);
v_unused_3698_ = lean_ctor_get(v_a_3627_, 0);
lean_dec(v_unused_3698_);
v___x_3669_ = v_a_3627_;
v_isShared_3670_ = v_isSharedCheck_3691_;
goto v_resetjp_3668_;
}
else
{
lean_dec(v_a_3627_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3691_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
uint64_t v___x_3671_; uint64_t v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; uint64_t v___x_3675_; uint64_t v___x_3676_; uint64_t v_key_3677_; lean_object* v___x_3678_; lean_object* v___x_3680_; 
v___x_3671_ = 2ULL;
v___x_3672_ = lean_uint64_shift_right(v___x_3667_, v___x_3671_);
v___x_3673_ = lean_unsigned_to_nat(1u);
v___x_3674_ = l_Lean_Syntax_getArg(v_stx_3622_, v___x_3673_);
v___x_3675_ = lean_uint64_shift_left(v___x_3672_, v___x_3671_);
v___x_3676_ = lean_uint64_once(&l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0, &l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0_once, _init_l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0);
v_key_3677_ = lean_uint64_lor(v___x_3675_, v___x_3676_);
v___x_3678_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3678_, 0, v_config_3666_);
lean_ctor_set_uint64(v___x_3678_, sizeof(void*)*1, v_key_3677_);
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 0, v___x_3678_);
v___x_3680_ = v___x_3669_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v___x_3678_);
lean_ctor_set(v_reuseFailAlloc_3690_, 1, v_zetaDeltaSet_3655_);
lean_ctor_set(v_reuseFailAlloc_3690_, 2, v_lctx_3656_);
lean_ctor_set(v_reuseFailAlloc_3690_, 3, v_localInstances_3657_);
lean_ctor_set(v_reuseFailAlloc_3690_, 4, v_defEqCtx_x3f_3658_);
lean_ctor_set(v_reuseFailAlloc_3690_, 5, v_synthPendingDepth_3659_);
lean_ctor_set(v_reuseFailAlloc_3690_, 6, v_canUnfold_x3f_3660_);
lean_ctor_set_uint8(v_reuseFailAlloc_3690_, sizeof(void*)*7, v_trackZetaDelta_3654_);
lean_ctor_set_uint8(v_reuseFailAlloc_3690_, sizeof(void*)*7 + 1, v_univApprox_3661_);
lean_ctor_set_uint8(v_reuseFailAlloc_3690_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3662_);
lean_ctor_set_uint8(v_reuseFailAlloc_3690_, sizeof(void*)*7 + 3, v_cacheInferType_3663_);
v___x_3680_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
lean_object* v___x_3681_; 
v___x_3681_ = l_Lean_Elab_Tactic_evalTactic(v___x_3674_, v_a_3623_, v_a_3624_, v_a_3625_, v_a_3626_, v___x_3680_, v_a_3628_, v_a_3629_, v_a_3630_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
v_a_3682_ = lean_ctor_get(v___x_3681_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3681_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3681_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3681_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
else
{
return v___x_3681_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___boxed(lean_object* v_stx_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_, lean_object* v_a_3704_, lean_object* v_a_3705_, lean_object* v_a_3706_, lean_object* v_a_3707_, lean_object* v_a_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_){
_start:
{
lean_object* v_res_3711_; 
v_res_3711_ = l_Lean_Elab_Tactic_evalWithUnfoldingAll(v_stx_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_, v_a_3707_, v_a_3708_, v_a_3709_);
lean_dec(v_stx_3701_);
return v_res_3711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1(){
_start:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3725_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3726_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1));
v___x_3727_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3));
v___x_3728_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithUnfoldingAll___boxed), 10, 0);
v___x_3729_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3725_, v___x_3726_, v___x_3727_, v___x_3728_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___boxed(lean_object* v_a_3730_){
_start:
{
lean_object* v_res_3731_; 
v_res_3731_ = l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1();
return v_res_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3(){
_start:
{
lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3758_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3));
v___x_3759_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6));
v___x_3760_ = l_Lean_addBuiltinDeclarationRanges(v___x_3758_, v___x_3759_);
return v___x_3760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___boxed(lean_object* v_a_3761_){
_start:
{
lean_object* v_res_3762_; 
v_res_3762_ = l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3();
return v_res_3762_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0(void){
_start:
{
uint8_t v___x_3763_; uint64_t v___x_3764_; 
v___x_3763_ = 4;
v___x_3764_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3763_);
return v___x_3764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone(lean_object* v_stx_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_){
_start:
{
lean_object* v___x_3775_; uint8_t v_foApprox_3776_; uint8_t v_ctxApprox_3777_; uint8_t v_quasiPatternApprox_3778_; uint8_t v_constApprox_3779_; uint8_t v_isDefEqStuckEx_3780_; uint8_t v_unificationHints_3781_; uint8_t v_proofIrrelevance_3782_; uint8_t v_assignSyntheticOpaque_3783_; uint8_t v_offsetCnstrs_3784_; uint8_t v_etaStruct_3785_; uint8_t v_univApprox_3786_; uint8_t v_iota_3787_; uint8_t v_beta_3788_; uint8_t v_proj_3789_; uint8_t v_zeta_3790_; uint8_t v_zetaDelta_3791_; uint8_t v_zetaUnused_3792_; uint8_t v_zetaHave_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3843_; 
v___x_3775_ = l_Lean_Meta_Context_config(v_a_3770_);
v_foApprox_3776_ = lean_ctor_get_uint8(v___x_3775_, 0);
v_ctxApprox_3777_ = lean_ctor_get_uint8(v___x_3775_, 1);
v_quasiPatternApprox_3778_ = lean_ctor_get_uint8(v___x_3775_, 2);
v_constApprox_3779_ = lean_ctor_get_uint8(v___x_3775_, 3);
v_isDefEqStuckEx_3780_ = lean_ctor_get_uint8(v___x_3775_, 4);
v_unificationHints_3781_ = lean_ctor_get_uint8(v___x_3775_, 5);
v_proofIrrelevance_3782_ = lean_ctor_get_uint8(v___x_3775_, 6);
v_assignSyntheticOpaque_3783_ = lean_ctor_get_uint8(v___x_3775_, 7);
v_offsetCnstrs_3784_ = lean_ctor_get_uint8(v___x_3775_, 8);
v_etaStruct_3785_ = lean_ctor_get_uint8(v___x_3775_, 10);
v_univApprox_3786_ = lean_ctor_get_uint8(v___x_3775_, 11);
v_iota_3787_ = lean_ctor_get_uint8(v___x_3775_, 12);
v_beta_3788_ = lean_ctor_get_uint8(v___x_3775_, 13);
v_proj_3789_ = lean_ctor_get_uint8(v___x_3775_, 14);
v_zeta_3790_ = lean_ctor_get_uint8(v___x_3775_, 15);
v_zetaDelta_3791_ = lean_ctor_get_uint8(v___x_3775_, 16);
v_zetaUnused_3792_ = lean_ctor_get_uint8(v___x_3775_, 17);
v_zetaHave_3793_ = lean_ctor_get_uint8(v___x_3775_, 18);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3775_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3795_ = v___x_3775_;
v_isShared_3796_ = v_isSharedCheck_3843_;
goto v_resetjp_3794_;
}
else
{
lean_dec(v___x_3775_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3843_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
uint8_t v_trackZetaDelta_3797_; lean_object* v_zetaDeltaSet_3798_; lean_object* v_lctx_3799_; lean_object* v_localInstances_3800_; lean_object* v_defEqCtx_x3f_3801_; lean_object* v_synthPendingDepth_3802_; lean_object* v_canUnfold_x3f_3803_; uint8_t v_univApprox_3804_; uint8_t v_inTypeClassResolution_3805_; uint8_t v_cacheInferType_3806_; uint8_t v___x_3807_; lean_object* v_config_3809_; 
v_trackZetaDelta_3797_ = lean_ctor_get_uint8(v_a_3770_, sizeof(void*)*7);
v_zetaDeltaSet_3798_ = lean_ctor_get(v_a_3770_, 1);
lean_inc(v_zetaDeltaSet_3798_);
v_lctx_3799_ = lean_ctor_get(v_a_3770_, 2);
lean_inc_ref(v_lctx_3799_);
v_localInstances_3800_ = lean_ctor_get(v_a_3770_, 3);
lean_inc_ref(v_localInstances_3800_);
v_defEqCtx_x3f_3801_ = lean_ctor_get(v_a_3770_, 4);
lean_inc(v_defEqCtx_x3f_3801_);
v_synthPendingDepth_3802_ = lean_ctor_get(v_a_3770_, 5);
lean_inc(v_synthPendingDepth_3802_);
v_canUnfold_x3f_3803_ = lean_ctor_get(v_a_3770_, 6);
lean_inc(v_canUnfold_x3f_3803_);
v_univApprox_3804_ = lean_ctor_get_uint8(v_a_3770_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3805_ = lean_ctor_get_uint8(v_a_3770_, sizeof(void*)*7 + 2);
v_cacheInferType_3806_ = lean_ctor_get_uint8(v_a_3770_, sizeof(void*)*7 + 3);
v___x_3807_ = 4;
if (v_isShared_3796_ == 0)
{
v_config_3809_ = v___x_3795_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 0, v_foApprox_3776_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 1, v_ctxApprox_3777_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 2, v_quasiPatternApprox_3778_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 3, v_constApprox_3779_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 4, v_isDefEqStuckEx_3780_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 5, v_unificationHints_3781_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 6, v_proofIrrelevance_3782_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 7, v_assignSyntheticOpaque_3783_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 8, v_offsetCnstrs_3784_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 10, v_etaStruct_3785_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 11, v_univApprox_3786_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 12, v_iota_3787_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 13, v_beta_3788_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 14, v_proj_3789_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 15, v_zeta_3790_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 16, v_zetaDelta_3791_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 17, v_zetaUnused_3792_);
lean_ctor_set_uint8(v_reuseFailAlloc_3842_, 18, v_zetaHave_3793_);
v_config_3809_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
uint64_t v___x_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3834_; 
lean_ctor_set_uint8(v_config_3809_, 9, v___x_3807_);
v___x_3810_ = l_Lean_Meta_Context_configKey(v_a_3770_);
v_isSharedCheck_3834_ = !lean_is_exclusive(v_a_3770_);
if (v_isSharedCheck_3834_ == 0)
{
lean_object* v_unused_3835_; lean_object* v_unused_3836_; lean_object* v_unused_3837_; lean_object* v_unused_3838_; lean_object* v_unused_3839_; lean_object* v_unused_3840_; lean_object* v_unused_3841_; 
v_unused_3835_ = lean_ctor_get(v_a_3770_, 6);
lean_dec(v_unused_3835_);
v_unused_3836_ = lean_ctor_get(v_a_3770_, 5);
lean_dec(v_unused_3836_);
v_unused_3837_ = lean_ctor_get(v_a_3770_, 4);
lean_dec(v_unused_3837_);
v_unused_3838_ = lean_ctor_get(v_a_3770_, 3);
lean_dec(v_unused_3838_);
v_unused_3839_ = lean_ctor_get(v_a_3770_, 2);
lean_dec(v_unused_3839_);
v_unused_3840_ = lean_ctor_get(v_a_3770_, 1);
lean_dec(v_unused_3840_);
v_unused_3841_ = lean_ctor_get(v_a_3770_, 0);
lean_dec(v_unused_3841_);
v___x_3812_ = v_a_3770_;
v_isShared_3813_ = v_isSharedCheck_3834_;
goto v_resetjp_3811_;
}
else
{
lean_dec(v_a_3770_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3834_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
uint64_t v___x_3814_; uint64_t v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; uint64_t v___x_3818_; uint64_t v___x_3819_; uint64_t v_key_3820_; lean_object* v___x_3821_; lean_object* v___x_3823_; 
v___x_3814_ = 2ULL;
v___x_3815_ = lean_uint64_shift_right(v___x_3810_, v___x_3814_);
v___x_3816_ = lean_unsigned_to_nat(1u);
v___x_3817_ = l_Lean_Syntax_getArg(v_stx_3765_, v___x_3816_);
v___x_3818_ = lean_uint64_shift_left(v___x_3815_, v___x_3814_);
v___x_3819_ = lean_uint64_once(&l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0, &l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0_once, _init_l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0);
v_key_3820_ = lean_uint64_lor(v___x_3818_, v___x_3819_);
v___x_3821_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3821_, 0, v_config_3809_);
lean_ctor_set_uint64(v___x_3821_, sizeof(void*)*1, v_key_3820_);
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 0, v___x_3821_);
v___x_3823_ = v___x_3812_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v___x_3821_);
lean_ctor_set(v_reuseFailAlloc_3833_, 1, v_zetaDeltaSet_3798_);
lean_ctor_set(v_reuseFailAlloc_3833_, 2, v_lctx_3799_);
lean_ctor_set(v_reuseFailAlloc_3833_, 3, v_localInstances_3800_);
lean_ctor_set(v_reuseFailAlloc_3833_, 4, v_defEqCtx_x3f_3801_);
lean_ctor_set(v_reuseFailAlloc_3833_, 5, v_synthPendingDepth_3802_);
lean_ctor_set(v_reuseFailAlloc_3833_, 6, v_canUnfold_x3f_3803_);
lean_ctor_set_uint8(v_reuseFailAlloc_3833_, sizeof(void*)*7, v_trackZetaDelta_3797_);
lean_ctor_set_uint8(v_reuseFailAlloc_3833_, sizeof(void*)*7 + 1, v_univApprox_3804_);
lean_ctor_set_uint8(v_reuseFailAlloc_3833_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3805_);
lean_ctor_set_uint8(v_reuseFailAlloc_3833_, sizeof(void*)*7 + 3, v_cacheInferType_3806_);
v___x_3823_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
lean_object* v___x_3824_; 
v___x_3824_ = l_Lean_Elab_Tactic_evalTactic(v___x_3817_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_, v___x_3823_, v_a_3771_, v_a_3772_, v_a_3773_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3832_; 
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3832_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3832_ == 0)
{
v___x_3827_ = v___x_3824_;
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_dec(v___x_3824_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3832_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3830_; 
if (v_isShared_3828_ == 0)
{
v___x_3830_ = v___x_3827_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3831_; 
v_reuseFailAlloc_3831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3831_, 0, v_a_3825_);
v___x_3830_ = v_reuseFailAlloc_3831_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
return v___x_3830_;
}
}
}
else
{
return v___x_3824_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___boxed(lean_object* v_stx_3844_, lean_object* v_a_3845_, lean_object* v_a_3846_, lean_object* v_a_3847_, lean_object* v_a_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_, lean_object* v_a_3853_){
_start:
{
lean_object* v_res_3854_; 
v_res_3854_ = l_Lean_Elab_Tactic_evalWithUnfoldingNone(v_stx_3844_, v_a_3845_, v_a_3846_, v_a_3847_, v_a_3848_, v_a_3849_, v_a_3850_, v_a_3851_, v_a_3852_);
lean_dec(v_stx_3844_);
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1(){
_start:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; 
v___x_3868_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3869_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1));
v___x_3870_ = ((lean_object*)(l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3));
v___x_3871_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithUnfoldingNone___boxed), 10, 0);
v___x_3872_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3868_, v___x_3869_, v___x_3870_, v___x_3871_);
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___boxed(lean_object* v_a_3873_){
_start:
{
lean_object* v_res_3874_; 
v_res_3874_ = l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1();
return v_res_3874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0(lean_object* v_stx_3878_, lean_object* v___x_3879_, uint8_t v___x_3880_, lean_object* v_userName_x3f_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_){
_start:
{
lean_object* v___x_3891_; 
lean_inc(v___y_3889_);
lean_inc_ref(v___y_3888_);
lean_inc(v___y_3887_);
lean_inc_ref(v___y_3886_);
lean_inc(v___y_3883_);
v___x_3891_ = l_Lean_Elab_Tactic_elabTerm(v_stx_3878_, v___x_3879_, v___x_3880_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_);
if (lean_obj_tag(v___x_3891_) == 0)
{
lean_object* v_a_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3978_; 
v_a_3892_ = lean_ctor_get(v___x_3891_, 0);
v_isSharedCheck_3978_ = !lean_is_exclusive(v___x_3891_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3894_ = v___x_3891_;
v_isShared_3895_ = v_isSharedCheck_3978_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_a_3892_);
lean_dec(v___x_3891_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3978_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
if (lean_obj_tag(v_a_3892_) == 1)
{
lean_object* v_fvarId_3896_; lean_object* v___x_3898_; 
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
lean_dec(v___y_3887_);
lean_dec_ref(v___y_3886_);
lean_dec(v___y_3883_);
lean_dec(v_userName_x3f_3881_);
v_fvarId_3896_ = lean_ctor_get(v_a_3892_, 0);
lean_inc(v_fvarId_3896_);
lean_dec_ref(v_a_3892_);
if (v_isShared_3895_ == 0)
{
lean_ctor_set(v___x_3894_, 0, v_fvarId_3896_);
v___x_3898_ = v___x_3894_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v_fvarId_3896_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
return v___x_3898_;
}
}
else
{
lean_object* v___x_3900_; 
lean_del_object(v___x_3894_);
lean_inc(v___y_3889_);
lean_inc_ref(v___y_3888_);
lean_inc(v___y_3887_);
lean_inc_ref(v___y_3886_);
lean_inc(v_a_3892_);
v___x_3900_ = lean_infer_type(v_a_3892_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_);
if (lean_obj_tag(v___x_3900_) == 0)
{
lean_object* v_a_3901_; lean_object* v_userName_3903_; uint8_t v_preserveBinderNames_3904_; lean_object* v___y_3905_; lean_object* v___y_3906_; lean_object* v___y_3907_; lean_object* v___y_3908_; lean_object* v___y_3909_; 
v_a_3901_ = lean_ctor_get(v___x_3900_, 0);
lean_inc(v_a_3901_);
lean_dec_ref(v___x_3900_);
if (lean_obj_tag(v_userName_x3f_3881_) == 0)
{
lean_object* v___x_3967_; 
v___x_3967_ = ((lean_object*)(l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1));
v_userName_3903_ = v___x_3967_;
v_preserveBinderNames_3904_ = v___x_3880_;
v___y_3905_ = v___y_3883_;
v___y_3906_ = v___y_3886_;
v___y_3907_ = v___y_3887_;
v___y_3908_ = v___y_3888_;
v___y_3909_ = v___y_3889_;
goto v___jp_3902_;
}
else
{
lean_object* v_val_3968_; uint8_t v___x_3969_; 
v_val_3968_ = lean_ctor_get(v_userName_x3f_3881_, 0);
lean_inc(v_val_3968_);
lean_dec_ref(v_userName_x3f_3881_);
v___x_3969_ = 1;
v_userName_3903_ = v_val_3968_;
v_preserveBinderNames_3904_ = v___x_3969_;
v___y_3905_ = v___y_3883_;
v___y_3906_ = v___y_3886_;
v___y_3907_ = v___y_3887_;
v___y_3908_ = v___y_3888_;
v___y_3909_ = v___y_3889_;
goto v___jp_3902_;
}
v___jp_3902_:
{
lean_object* v___x_3910_; 
v___x_3910_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_);
if (lean_obj_tag(v___x_3910_) == 0)
{
lean_object* v_a_3911_; lean_object* v___x_3912_; 
v_a_3911_ = lean_ctor_get(v___x_3910_, 0);
lean_inc(v_a_3911_);
lean_dec_ref(v___x_3910_);
lean_inc(v___y_3909_);
lean_inc_ref(v___y_3908_);
lean_inc(v___y_3907_);
lean_inc_ref(v___y_3906_);
v___x_3912_ = l_Lean_MVarId_assert(v_a_3911_, v_userName_3903_, v_a_3901_, v_a_3892_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_);
if (lean_obj_tag(v___x_3912_) == 0)
{
lean_object* v_a_3913_; lean_object* v___x_3914_; 
v_a_3913_ = lean_ctor_get(v___x_3912_, 0);
lean_inc(v_a_3913_);
lean_dec_ref(v___x_3912_);
lean_inc(v___y_3909_);
lean_inc_ref(v___y_3908_);
lean_inc(v___y_3907_);
lean_inc_ref(v___y_3906_);
v___x_3914_ = l_Lean_Meta_intro1Core(v_a_3913_, v_preserveBinderNames_3904_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_);
if (lean_obj_tag(v___x_3914_) == 0)
{
lean_object* v_a_3915_; lean_object* v_fst_3916_; lean_object* v_snd_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3942_; 
v_a_3915_ = lean_ctor_get(v___x_3914_, 0);
lean_inc(v_a_3915_);
lean_dec_ref(v___x_3914_);
v_fst_3916_ = lean_ctor_get(v_a_3915_, 0);
v_snd_3917_ = lean_ctor_get(v_a_3915_, 1);
v_isSharedCheck_3942_ = !lean_is_exclusive(v_a_3915_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3919_ = v_a_3915_;
v_isShared_3920_ = v_isSharedCheck_3942_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_snd_3917_);
lean_inc(v_fst_3916_);
lean_dec(v_a_3915_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3942_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
lean_object* v___x_3921_; lean_object* v___x_3923_; 
v___x_3921_ = lean_box(0);
if (v_isShared_3920_ == 0)
{
lean_ctor_set_tag(v___x_3919_, 1);
lean_ctor_set(v___x_3919_, 1, v___x_3921_);
lean_ctor_set(v___x_3919_, 0, v_snd_3917_);
v___x_3923_ = v___x_3919_;
goto v_reusejp_3922_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v_snd_3917_);
lean_ctor_set(v_reuseFailAlloc_3941_, 1, v___x_3921_);
v___x_3923_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3922_;
}
v_reusejp_3922_:
{
lean_object* v___x_3924_; 
v___x_3924_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3923_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_);
lean_dec(v___y_3909_);
lean_dec_ref(v___y_3908_);
lean_dec(v___y_3907_);
lean_dec_ref(v___y_3906_);
lean_dec(v___y_3905_);
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v___x_3926_; uint8_t v_isShared_3927_; uint8_t v_isSharedCheck_3931_; 
v_isSharedCheck_3931_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3931_ == 0)
{
lean_object* v_unused_3932_; 
v_unused_3932_ = lean_ctor_get(v___x_3924_, 0);
lean_dec(v_unused_3932_);
v___x_3926_ = v___x_3924_;
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
else
{
lean_dec(v___x_3924_);
v___x_3926_ = lean_box(0);
v_isShared_3927_ = v_isSharedCheck_3931_;
goto v_resetjp_3925_;
}
v_resetjp_3925_:
{
lean_object* v___x_3929_; 
if (v_isShared_3927_ == 0)
{
lean_ctor_set(v___x_3926_, 0, v_fst_3916_);
v___x_3929_ = v___x_3926_;
goto v_reusejp_3928_;
}
else
{
lean_object* v_reuseFailAlloc_3930_; 
v_reuseFailAlloc_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3930_, 0, v_fst_3916_);
v___x_3929_ = v_reuseFailAlloc_3930_;
goto v_reusejp_3928_;
}
v_reusejp_3928_:
{
return v___x_3929_;
}
}
}
else
{
lean_object* v_a_3933_; lean_object* v___x_3935_; uint8_t v_isShared_3936_; uint8_t v_isSharedCheck_3940_; 
lean_dec(v_fst_3916_);
v_a_3933_ = lean_ctor_get(v___x_3924_, 0);
v_isSharedCheck_3940_ = !lean_is_exclusive(v___x_3924_);
if (v_isSharedCheck_3940_ == 0)
{
v___x_3935_ = v___x_3924_;
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
else
{
lean_inc(v_a_3933_);
lean_dec(v___x_3924_);
v___x_3935_ = lean_box(0);
v_isShared_3936_ = v_isSharedCheck_3940_;
goto v_resetjp_3934_;
}
v_resetjp_3934_:
{
lean_object* v___x_3938_; 
if (v_isShared_3936_ == 0)
{
v___x_3938_ = v___x_3935_;
goto v_reusejp_3937_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v_a_3933_);
v___x_3938_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3937_;
}
v_reusejp_3937_:
{
return v___x_3938_;
}
}
}
}
}
}
else
{
lean_object* v_a_3943_; lean_object* v___x_3945_; uint8_t v_isShared_3946_; uint8_t v_isSharedCheck_3950_; 
lean_dec(v___y_3909_);
lean_dec_ref(v___y_3908_);
lean_dec(v___y_3907_);
lean_dec_ref(v___y_3906_);
lean_dec(v___y_3905_);
v_a_3943_ = lean_ctor_get(v___x_3914_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v___x_3914_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3945_ = v___x_3914_;
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
else
{
lean_inc(v_a_3943_);
lean_dec(v___x_3914_);
v___x_3945_ = lean_box(0);
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
v_resetjp_3944_:
{
lean_object* v___x_3948_; 
if (v_isShared_3946_ == 0)
{
v___x_3948_ = v___x_3945_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v_a_3943_);
v___x_3948_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
return v___x_3948_;
}
}
}
}
else
{
lean_object* v_a_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3958_; 
lean_dec(v___y_3909_);
lean_dec_ref(v___y_3908_);
lean_dec(v___y_3907_);
lean_dec_ref(v___y_3906_);
lean_dec(v___y_3905_);
v_a_3951_ = lean_ctor_get(v___x_3912_, 0);
v_isSharedCheck_3958_ = !lean_is_exclusive(v___x_3912_);
if (v_isSharedCheck_3958_ == 0)
{
v___x_3953_ = v___x_3912_;
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_a_3951_);
lean_dec(v___x_3912_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3956_; 
if (v_isShared_3954_ == 0)
{
v___x_3956_ = v___x_3953_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3957_; 
v_reuseFailAlloc_3957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3957_, 0, v_a_3951_);
v___x_3956_ = v_reuseFailAlloc_3957_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
return v___x_3956_;
}
}
}
}
else
{
lean_object* v_a_3959_; lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3966_; 
lean_dec(v___y_3909_);
lean_dec_ref(v___y_3908_);
lean_dec(v___y_3907_);
lean_dec_ref(v___y_3906_);
lean_dec(v___y_3905_);
lean_dec(v_userName_3903_);
lean_dec(v_a_3901_);
lean_dec(v_a_3892_);
v_a_3959_ = lean_ctor_get(v___x_3910_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v___x_3910_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3961_ = v___x_3910_;
v_isShared_3962_ = v_isSharedCheck_3966_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_a_3959_);
lean_dec(v___x_3910_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3966_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v___x_3964_; 
if (v_isShared_3962_ == 0)
{
v___x_3964_ = v___x_3961_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_a_3959_);
v___x_3964_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
return v___x_3964_;
}
}
}
}
}
else
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
lean_dec(v_a_3892_);
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
lean_dec(v___y_3887_);
lean_dec_ref(v___y_3886_);
lean_dec(v___y_3883_);
lean_dec(v_userName_x3f_3881_);
v_a_3970_ = lean_ctor_get(v___x_3900_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3900_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3900_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3900_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
}
}
else
{
lean_object* v_a_3979_; lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_3986_; 
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
lean_dec(v___y_3887_);
lean_dec_ref(v___y_3886_);
lean_dec(v___y_3883_);
lean_dec(v_userName_x3f_3881_);
v_a_3979_ = lean_ctor_get(v___x_3891_, 0);
v_isSharedCheck_3986_ = !lean_is_exclusive(v___x_3891_);
if (v_isSharedCheck_3986_ == 0)
{
v___x_3981_ = v___x_3891_;
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
else
{
lean_inc(v_a_3979_);
lean_dec(v___x_3891_);
v___x_3981_ = lean_box(0);
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
v_resetjp_3980_:
{
lean_object* v___x_3984_; 
if (v_isShared_3982_ == 0)
{
v___x_3984_ = v___x_3981_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v_a_3979_);
v___x_3984_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
return v___x_3984_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___boxed(lean_object* v_stx_3987_, lean_object* v___x_3988_, lean_object* v___x_3989_, lean_object* v_userName_x3f_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_){
_start:
{
uint8_t v___x_1481__boxed_4000_; lean_object* v_res_4001_; 
v___x_1481__boxed_4000_ = lean_unbox(v___x_3989_);
v_res_4001_ = l_Lean_Elab_Tactic_elabAsFVar___lam__0(v_stx_3987_, v___x_3988_, v___x_1481__boxed_4000_, v_userName_x3f_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_);
return v_res_4001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar(lean_object* v_stx_4002_, lean_object* v_userName_x3f_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_){
_start:
{
lean_object* v___x_4013_; uint8_t v___x_4014_; lean_object* v___x_4015_; lean_object* v___f_4016_; lean_object* v___x_4017_; 
v___x_4013_ = lean_box(0);
v___x_4014_ = 0;
v___x_4015_ = lean_box(v___x_4014_);
v___f_4016_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabAsFVar___lam__0___boxed), 13, 4);
lean_closure_set(v___f_4016_, 0, v_stx_4002_);
lean_closure_set(v___f_4016_, 1, v___x_4013_);
lean_closure_set(v___f_4016_, 2, v___x_4015_);
lean_closure_set(v___f_4016_, 3, v_userName_x3f_4003_);
v___x_4017_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_4016_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_, v_a_4011_);
return v___x_4017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___boxed(lean_object* v_stx_4018_, lean_object* v_userName_x3f_4019_, lean_object* v_a_4020_, lean_object* v_a_4021_, lean_object* v_a_4022_, lean_object* v_a_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_){
_start:
{
lean_object* v_res_4029_; 
v_res_4029_ = l_Lean_Elab_Tactic_elabAsFVar(v_stx_4018_, v_userName_x3f_4019_, v_a_4020_, v_a_4021_, v_a_4022_, v_a_4023_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_);
return v_res_4029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0(lean_object* v_k_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_){
_start:
{
lean_object* v___x_4040_; 
v___x_4040_ = lean_apply_9(v_k_4030_, v___y_4031_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_, v___y_4038_, lean_box(0));
return v___x_4040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0___boxed(lean_object* v_k_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0(v_k_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(lean_object* v_k_4052_, uint8_t v_allowLevelAssignments_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_){
_start:
{
lean_object* v___f_4063_; lean_object* v___x_4064_; 
v___f_4063_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_4063_, 0, v_k_4052_);
lean_closure_set(v___f_4063_, 1, v___y_4054_);
lean_closure_set(v___f_4063_, 2, v___y_4055_);
lean_closure_set(v___f_4063_, 3, v___y_4056_);
lean_closure_set(v___f_4063_, 4, v___y_4057_);
v___x_4064_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_4053_, v___f_4063_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_);
if (lean_obj_tag(v___x_4064_) == 0)
{
return v___x_4064_;
}
else
{
lean_object* v_a_4065_; lean_object* v___x_4067_; uint8_t v_isShared_4068_; uint8_t v_isSharedCheck_4072_; 
v_a_4065_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4072_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4072_ == 0)
{
v___x_4067_ = v___x_4064_;
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
else
{
lean_inc(v_a_4065_);
lean_dec(v___x_4064_);
v___x_4067_ = lean_box(0);
v_isShared_4068_ = v_isSharedCheck_4072_;
goto v_resetjp_4066_;
}
v_resetjp_4066_:
{
lean_object* v___x_4070_; 
if (v_isShared_4068_ == 0)
{
v___x_4070_ = v___x_4067_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4071_; 
v_reuseFailAlloc_4071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4071_, 0, v_a_4065_);
v___x_4070_ = v_reuseFailAlloc_4071_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
return v___x_4070_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___boxed(lean_object* v_k_4073_, lean_object* v_allowLevelAssignments_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_4084_; lean_object* v_res_4085_; 
v_allowLevelAssignments_boxed_4084_ = lean_unbox(v_allowLevelAssignments_4074_);
v_res_4085_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(v_k_4073_, v_allowLevelAssignments_boxed_4084_, v___y_4075_, v___y_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
return v_res_4085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1(lean_object* v_00_u03b1_4086_, lean_object* v_k_4087_, uint8_t v_allowLevelAssignments_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v___x_4098_; 
v___x_4098_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(v_k_4087_, v_allowLevelAssignments_4088_, v___y_4089_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_);
return v___x_4098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___boxed(lean_object* v_00_u03b1_4099_, lean_object* v_k_4100_, lean_object* v_allowLevelAssignments_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_4111_; lean_object* v_res_4112_; 
v_allowLevelAssignments_boxed_4111_ = lean_unbox(v_allowLevelAssignments_4101_);
v_res_4112_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1(v_00_u03b1_4099_, v_k_4100_, v_allowLevelAssignments_boxed_4111_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
return v_res_4112_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(lean_object* v_a_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v_a_x3f_4121_){
_start:
{
uint8_t v___x_4123_; lean_object* v___x_4124_; 
v___x_4123_ = 0;
v___x_4124_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_4113_, v___x_4123_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
return v___x_4124_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0___boxed(lean_object* v_a_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v_a_x3f_4133_, lean_object* v___y_4134_){
_start:
{
lean_object* v_res_4135_; 
v_res_4135_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(v_a_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v_a_x3f_4133_);
lean_dec(v_a_x3f_4133_);
lean_dec(v___y_4132_);
lean_dec_ref(v___y_4131_);
lean_dec(v___y_4130_);
lean_dec_ref(v___y_4129_);
lean_dec(v___y_4128_);
lean_dec_ref(v___y_4127_);
lean_dec(v___y_4126_);
return v_res_4135_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(lean_object* v_x_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_){
_start:
{
lean_object* v___x_4146_; 
v___x_4146_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_4138_, v___y_4140_, v___y_4142_, v___y_4144_);
if (lean_obj_tag(v___x_4146_) == 0)
{
lean_object* v_a_4147_; lean_object* v_r_4148_; 
v_a_4147_ = lean_ctor_get(v___x_4146_, 0);
lean_inc(v_a_4147_);
lean_dec_ref(v___x_4146_);
lean_inc(v___y_4144_);
lean_inc_ref(v___y_4143_);
lean_inc(v___y_4142_);
lean_inc_ref(v___y_4141_);
lean_inc(v___y_4140_);
lean_inc_ref(v___y_4139_);
lean_inc(v___y_4138_);
v_r_4148_ = lean_apply_9(v_x_4136_, v___y_4137_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_, lean_box(0));
if (lean_obj_tag(v_r_4148_) == 0)
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4173_; 
v_a_4149_ = lean_ctor_get(v_r_4148_, 0);
v_isSharedCheck_4173_ = !lean_is_exclusive(v_r_4148_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4151_ = v_r_4148_;
v_isShared_4152_ = v_isSharedCheck_4173_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v_r_4148_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4173_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4154_; 
lean_inc(v_a_4149_);
if (v_isShared_4152_ == 0)
{
lean_ctor_set_tag(v___x_4151_, 1);
v___x_4154_ = v___x_4151_;
goto v_reusejp_4153_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v_a_4149_);
v___x_4154_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4153_;
}
v_reusejp_4153_:
{
lean_object* v___x_4155_; 
v___x_4155_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(v_a_4147_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_, v___x_4154_);
lean_dec_ref(v___x_4154_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
lean_dec(v___y_4142_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v___y_4138_);
if (lean_obj_tag(v___x_4155_) == 0)
{
lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4162_; 
v_isSharedCheck_4162_ = !lean_is_exclusive(v___x_4155_);
if (v_isSharedCheck_4162_ == 0)
{
lean_object* v_unused_4163_; 
v_unused_4163_ = lean_ctor_get(v___x_4155_, 0);
lean_dec(v_unused_4163_);
v___x_4157_ = v___x_4155_;
v_isShared_4158_ = v_isSharedCheck_4162_;
goto v_resetjp_4156_;
}
else
{
lean_dec(v___x_4155_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4162_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v___x_4160_; 
if (v_isShared_4158_ == 0)
{
lean_ctor_set(v___x_4157_, 0, v_a_4149_);
v___x_4160_ = v___x_4157_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v_a_4149_);
v___x_4160_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
return v___x_4160_;
}
}
}
else
{
lean_object* v_a_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4171_; 
lean_dec(v_a_4149_);
v_a_4164_ = lean_ctor_get(v___x_4155_, 0);
v_isSharedCheck_4171_ = !lean_is_exclusive(v___x_4155_);
if (v_isSharedCheck_4171_ == 0)
{
v___x_4166_ = v___x_4155_;
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
else
{
lean_inc(v_a_4164_);
lean_dec(v___x_4155_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
lean_object* v___x_4169_; 
if (v_isShared_4167_ == 0)
{
v___x_4169_ = v___x_4166_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v_a_4164_);
v___x_4169_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
return v___x_4169_;
}
}
}
}
}
}
else
{
lean_object* v_a_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; 
v_a_4174_ = lean_ctor_get(v_r_4148_, 0);
lean_inc(v_a_4174_);
lean_dec_ref(v_r_4148_);
v___x_4175_ = lean_box(0);
v___x_4176_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(v_a_4147_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_, v___x_4175_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
lean_dec(v___y_4142_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v___y_4138_);
if (lean_obj_tag(v___x_4176_) == 0)
{
lean_object* v___x_4178_; uint8_t v_isShared_4179_; uint8_t v_isSharedCheck_4183_; 
v_isSharedCheck_4183_ = !lean_is_exclusive(v___x_4176_);
if (v_isSharedCheck_4183_ == 0)
{
lean_object* v_unused_4184_; 
v_unused_4184_ = lean_ctor_get(v___x_4176_, 0);
lean_dec(v_unused_4184_);
v___x_4178_ = v___x_4176_;
v_isShared_4179_ = v_isSharedCheck_4183_;
goto v_resetjp_4177_;
}
else
{
lean_dec(v___x_4176_);
v___x_4178_ = lean_box(0);
v_isShared_4179_ = v_isSharedCheck_4183_;
goto v_resetjp_4177_;
}
v_resetjp_4177_:
{
lean_object* v___x_4181_; 
if (v_isShared_4179_ == 0)
{
lean_ctor_set_tag(v___x_4178_, 1);
lean_ctor_set(v___x_4178_, 0, v_a_4174_);
v___x_4181_ = v___x_4178_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_a_4174_);
v___x_4181_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
return v___x_4181_;
}
}
}
else
{
lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4192_; 
lean_dec(v_a_4174_);
v_a_4185_ = lean_ctor_get(v___x_4176_, 0);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4176_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4187_ = v___x_4176_;
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v___x_4176_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4190_; 
if (v_isShared_4188_ == 0)
{
v___x_4190_ = v___x_4187_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_a_4185_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
}
}
else
{
lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4200_; 
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
lean_dec(v___y_4142_);
lean_dec_ref(v___y_4141_);
lean_dec(v___y_4140_);
lean_dec_ref(v___y_4139_);
lean_dec(v___y_4138_);
lean_dec_ref(v___y_4137_);
lean_dec_ref(v_x_4136_);
v_a_4193_ = lean_ctor_get(v___x_4146_, 0);
v_isSharedCheck_4200_ = !lean_is_exclusive(v___x_4146_);
if (v_isSharedCheck_4200_ == 0)
{
v___x_4195_ = v___x_4146_;
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v___x_4146_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4200_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v___x_4198_; 
if (v_isShared_4196_ == 0)
{
v___x_4198_ = v___x_4195_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v_a_4193_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___boxed(lean_object* v_x_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_){
_start:
{
lean_object* v_res_4211_; 
v_res_4211_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(v_x_4201_, v___y_4202_, v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_);
return v_res_4211_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2(lean_object* v_00_u03b1_4212_, lean_object* v_x_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_){
_start:
{
lean_object* v___x_4223_; 
v___x_4223_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(v_x_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_);
return v___x_4223_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___boxed(lean_object* v_00_u03b1_4224_, lean_object* v_x_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v_res_4235_; 
v_res_4235_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2(v_00_u03b1_4224_, v_x_4225_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_);
return v_res_4235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(lean_object* v_a_4236_, uint8_t v___x_4237_, lean_object* v_as_4238_, lean_object* v_i_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_){
_start:
{
lean_object* v_zero_4245_; uint8_t v_isZero_4246_; 
v_zero_4245_ = lean_unsigned_to_nat(0u);
v_isZero_4246_ = lean_nat_dec_eq(v_i_4239_, v_zero_4245_);
if (v_isZero_4246_ == 1)
{
lean_object* v___x_4247_; lean_object* v___x_4248_; 
lean_dec(v___y_4243_);
lean_dec_ref(v___y_4242_);
lean_dec(v___y_4241_);
lean_dec_ref(v___y_4240_);
lean_dec(v_i_4239_);
lean_dec_ref(v_a_4236_);
v___x_4247_ = lean_box(0);
v___x_4248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4248_, 0, v___x_4247_);
return v___x_4248_;
}
else
{
lean_object* v_one_4249_; lean_object* v_n_4250_; lean_object* v___x_4251_; 
v_one_4249_ = lean_unsigned_to_nat(1u);
v_n_4250_ = lean_nat_sub(v_i_4239_, v_one_4249_);
lean_dec(v_i_4239_);
v___x_4251_ = lean_array_fget(v_as_4238_, v_n_4250_);
if (lean_obj_tag(v___x_4251_) == 0)
{
v_i_4239_ = v_n_4250_;
goto _start;
}
else
{
lean_object* v_val_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4284_; 
v_val_4253_ = lean_ctor_get(v___x_4251_, 0);
v_isSharedCheck_4284_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4255_ = v___x_4251_;
v_isShared_4256_ = v_isSharedCheck_4284_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_val_4253_);
lean_dec(v___x_4251_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4284_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; 
v___x_4257_ = l_Lean_LocalDecl_type(v_val_4253_);
lean_inc(v___y_4243_);
lean_inc_ref(v___y_4242_);
lean_inc(v___y_4241_);
lean_inc_ref(v___y_4240_);
lean_inc_ref(v_a_4236_);
v___x_4258_ = l_Lean_Meta_isExprDefEq(v_a_4236_, v___x_4257_, v___y_4240_, v___y_4241_, v___y_4242_, v___y_4243_);
if (lean_obj_tag(v___x_4258_) == 0)
{
lean_object* v_a_4259_; lean_object* v___x_4261_; uint8_t v_isShared_4262_; uint8_t v_isSharedCheck_4275_; 
v_a_4259_ = lean_ctor_get(v___x_4258_, 0);
v_isSharedCheck_4275_ = !lean_is_exclusive(v___x_4258_);
if (v_isSharedCheck_4275_ == 0)
{
v___x_4261_ = v___x_4258_;
v_isShared_4262_ = v_isSharedCheck_4275_;
goto v_resetjp_4260_;
}
else
{
lean_inc(v_a_4259_);
lean_dec(v___x_4258_);
v___x_4261_ = lean_box(0);
v_isShared_4262_ = v_isSharedCheck_4275_;
goto v_resetjp_4260_;
}
v_resetjp_4260_:
{
uint8_t v___x_4263_; 
v___x_4263_ = l_Lean_LocalDecl_isImplementationDetail(v_val_4253_);
if (v___x_4263_ == 0)
{
if (v___x_4237_ == 0)
{
lean_del_object(v___x_4261_);
lean_dec(v_a_4259_);
lean_del_object(v___x_4255_);
lean_dec(v_val_4253_);
v_i_4239_ = v_n_4250_;
goto _start;
}
else
{
uint8_t v___x_4265_; 
v___x_4265_ = lean_unbox(v_a_4259_);
lean_dec(v_a_4259_);
if (v___x_4265_ == 0)
{
lean_del_object(v___x_4261_);
lean_del_object(v___x_4255_);
lean_dec(v_val_4253_);
v_i_4239_ = v_n_4250_;
goto _start;
}
else
{
lean_object* v___x_4267_; lean_object* v___x_4269_; 
lean_dec(v_n_4250_);
lean_dec(v___y_4243_);
lean_dec_ref(v___y_4242_);
lean_dec(v___y_4241_);
lean_dec_ref(v___y_4240_);
lean_dec_ref(v_a_4236_);
v___x_4267_ = l_Lean_LocalDecl_fvarId(v_val_4253_);
lean_dec(v_val_4253_);
if (v_isShared_4256_ == 0)
{
lean_ctor_set(v___x_4255_, 0, v___x_4267_);
v___x_4269_ = v___x_4255_;
goto v_reusejp_4268_;
}
else
{
lean_object* v_reuseFailAlloc_4273_; 
v_reuseFailAlloc_4273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4273_, 0, v___x_4267_);
v___x_4269_ = v_reuseFailAlloc_4273_;
goto v_reusejp_4268_;
}
v_reusejp_4268_:
{
lean_object* v___x_4271_; 
if (v_isShared_4262_ == 0)
{
lean_ctor_set(v___x_4261_, 0, v___x_4269_);
v___x_4271_ = v___x_4261_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4272_; 
v_reuseFailAlloc_4272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4272_, 0, v___x_4269_);
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
}
else
{
lean_del_object(v___x_4261_);
lean_dec(v_a_4259_);
lean_del_object(v___x_4255_);
lean_dec(v_val_4253_);
v_i_4239_ = v_n_4250_;
goto _start;
}
}
}
else
{
lean_object* v_a_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4283_; 
lean_del_object(v___x_4255_);
lean_dec(v_val_4253_);
lean_dec(v_n_4250_);
lean_dec(v___y_4243_);
lean_dec_ref(v___y_4242_);
lean_dec(v___y_4241_);
lean_dec_ref(v___y_4240_);
lean_dec_ref(v_a_4236_);
v_a_4276_ = lean_ctor_get(v___x_4258_, 0);
v_isSharedCheck_4283_ = !lean_is_exclusive(v___x_4258_);
if (v_isSharedCheck_4283_ == 0)
{
v___x_4278_ = v___x_4258_;
v_isShared_4279_ = v_isSharedCheck_4283_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_a_4276_);
lean_dec(v___x_4258_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_a_4285_, lean_object* v___x_4286_, lean_object* v_as_4287_, lean_object* v_i_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_){
_start:
{
uint8_t v___x_7247__boxed_4294_; lean_object* v_res_4295_; 
v___x_7247__boxed_4294_ = lean_unbox(v___x_4286_);
v_res_4295_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_4285_, v___x_7247__boxed_4294_, v_as_4287_, v_i_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
lean_dec_ref(v_as_4287_);
return v_res_4295_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(lean_object* v_a_4296_, uint8_t v___x_4297_, lean_object* v_as_4298_, lean_object* v_i_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v_zero_4309_; uint8_t v_isZero_4310_; 
v_zero_4309_ = lean_unsigned_to_nat(0u);
v_isZero_4310_ = lean_nat_dec_eq(v_i_4299_, v_zero_4309_);
if (v_isZero_4310_ == 1)
{
lean_object* v___x_4311_; lean_object* v___x_4312_; 
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
lean_dec(v_i_4299_);
lean_dec_ref(v_a_4296_);
v___x_4311_ = lean_box(0);
v___x_4312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4312_, 0, v___x_4311_);
return v___x_4312_;
}
else
{
lean_object* v_one_4313_; lean_object* v_n_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; 
v_one_4313_ = lean_unsigned_to_nat(1u);
v_n_4314_ = lean_nat_sub(v_i_4299_, v_one_4313_);
lean_dec(v_i_4299_);
v___x_4315_ = lean_array_fget_borrowed(v_as_4298_, v_n_4314_);
lean_inc(v___y_4307_);
lean_inc_ref(v___y_4306_);
lean_inc(v___y_4305_);
lean_inc_ref(v___y_4304_);
lean_inc_ref(v_a_4296_);
v___x_4316_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(v_a_4296_, v___x_4297_, v___x_4315_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v_a_4317_; 
v_a_4317_ = lean_ctor_get(v___x_4316_, 0);
lean_inc(v_a_4317_);
if (lean_obj_tag(v_a_4317_) == 0)
{
lean_dec_ref(v___x_4316_);
v_i_4299_ = v_n_4314_;
goto _start;
}
else
{
lean_dec_ref(v_a_4317_);
lean_dec(v_n_4314_);
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
lean_dec_ref(v_a_4296_);
return v___x_4316_;
}
}
else
{
lean_dec(v_n_4314_);
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
lean_dec(v___y_4305_);
lean_dec_ref(v___y_4304_);
lean_dec_ref(v_a_4296_);
return v___x_4316_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(lean_object* v_a_4319_, uint8_t v___x_4320_, lean_object* v_x_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_){
_start:
{
if (lean_obj_tag(v_x_4321_) == 0)
{
lean_object* v_cs_4331_; lean_object* v___x_4332_; lean_object* v___x_4333_; 
v_cs_4331_ = lean_ctor_get(v_x_4321_, 0);
v___x_4332_ = lean_array_get_size(v_cs_4331_);
v___x_4333_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(v_a_4319_, v___x_4320_, v_cs_4331_, v___x_4332_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_);
return v___x_4333_;
}
else
{
lean_object* v_vs_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
v_vs_4334_ = lean_ctor_get(v_x_4321_, 0);
v___x_4335_ = lean_array_get_size(v_vs_4334_);
v___x_4336_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_4319_, v___x_4320_, v_vs_4334_, v___x_4335_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_);
return v___x_4336_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4___boxed(lean_object* v_a_4337_, lean_object* v___x_4338_, lean_object* v_x_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_){
_start:
{
uint8_t v___x_7342__boxed_4349_; lean_object* v_res_4350_; 
v___x_7342__boxed_4349_ = lean_unbox(v___x_4338_);
v_res_4350_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(v_a_4337_, v___x_7342__boxed_4349_, v_x_4339_, v___y_4340_, v___y_4341_, v___y_4342_, v___y_4343_, v___y_4344_, v___y_4345_, v___y_4346_, v___y_4347_);
lean_dec(v___y_4343_);
lean_dec_ref(v___y_4342_);
lean_dec(v___y_4341_);
lean_dec_ref(v___y_4340_);
lean_dec_ref(v_x_4339_);
return v_res_4350_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object* v_a_4351_, lean_object* v___x_4352_, lean_object* v_as_4353_, lean_object* v_i_4354_, lean_object* v___y_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_){
_start:
{
uint8_t v___x_7360__boxed_4364_; lean_object* v_res_4365_; 
v___x_7360__boxed_4364_ = lean_unbox(v___x_4352_);
v_res_4365_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(v_a_4351_, v___x_7360__boxed_4364_, v_as_4353_, v_i_4354_, v___y_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
lean_dec(v___y_4358_);
lean_dec_ref(v___y_4357_);
lean_dec(v___y_4356_);
lean_dec_ref(v___y_4355_);
lean_dec_ref(v_as_4353_);
return v_res_4365_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(lean_object* v_a_4366_, uint8_t v___x_4367_, lean_object* v_t_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_){
_start:
{
lean_object* v_root_4378_; lean_object* v_tail_4379_; lean_object* v___x_4380_; lean_object* v___x_4381_; 
v_root_4378_ = lean_ctor_get(v_t_4368_, 0);
v_tail_4379_ = lean_ctor_get(v_t_4368_, 1);
v___x_4380_ = lean_array_get_size(v_tail_4379_);
lean_inc(v___y_4376_);
lean_inc_ref(v___y_4375_);
lean_inc(v___y_4374_);
lean_inc_ref(v___y_4373_);
lean_inc_ref(v_a_4366_);
v___x_4381_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_4366_, v___x_4367_, v_tail_4379_, v___x_4380_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
if (lean_obj_tag(v___x_4381_) == 0)
{
lean_object* v_a_4382_; 
v_a_4382_ = lean_ctor_get(v___x_4381_, 0);
lean_inc(v_a_4382_);
if (lean_obj_tag(v_a_4382_) == 0)
{
lean_object* v___x_4383_; 
lean_dec_ref(v___x_4381_);
v___x_4383_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(v_a_4366_, v___x_4367_, v_root_4378_, v___y_4369_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
return v___x_4383_;
}
else
{
lean_dec_ref(v_a_4382_);
lean_dec(v___y_4376_);
lean_dec_ref(v___y_4375_);
lean_dec(v___y_4374_);
lean_dec_ref(v___y_4373_);
lean_dec_ref(v_a_4366_);
return v___x_4381_;
}
}
else
{
lean_dec(v___y_4376_);
lean_dec_ref(v___y_4375_);
lean_dec(v___y_4374_);
lean_dec_ref(v___y_4373_);
lean_dec_ref(v_a_4366_);
return v___x_4381_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0___boxed(lean_object* v_a_4384_, lean_object* v___x_4385_, lean_object* v_t_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_){
_start:
{
uint8_t v___x_7439__boxed_4396_; lean_object* v_res_4397_; 
v___x_7439__boxed_4396_ = lean_unbox(v___x_4385_);
v_res_4397_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(v_a_4384_, v___x_7439__boxed_4396_, v_t_4386_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_, v___y_4393_, v___y_4394_);
lean_dec(v___y_4390_);
lean_dec_ref(v___y_4389_);
lean_dec(v___y_4388_);
lean_dec_ref(v___y_4387_);
lean_dec_ref(v_t_4386_);
return v_res_4397_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(lean_object* v_a_4398_, uint8_t v___x_4399_, lean_object* v_lctx_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_){
_start:
{
lean_object* v_decls_4410_; lean_object* v___x_4411_; 
v_decls_4410_ = lean_ctor_get(v_lctx_4400_, 1);
v___x_4411_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(v_a_4398_, v___x_4399_, v_decls_4410_, v___y_4401_, v___y_4402_, v___y_4403_, v___y_4404_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_);
return v___x_4411_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0___boxed(lean_object* v_a_4412_, lean_object* v___x_4413_, lean_object* v_lctx_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_){
_start:
{
uint8_t v___x_7482__boxed_4424_; lean_object* v_res_4425_; 
v___x_7482__boxed_4424_ = lean_unbox(v___x_4413_);
v_res_4425_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(v_a_4412_, v___x_7482__boxed_4424_, v_lctx_4414_, v___y_4415_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
lean_dec(v___y_4418_);
lean_dec_ref(v___y_4417_);
lean_dec(v___y_4416_);
lean_dec_ref(v___y_4415_);
lean_dec_ref(v_lctx_4414_);
return v_res_4425_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRename___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4427_; lean_object* v___x_4428_; 
v___x_4427_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___lam__0___closed__0));
v___x_4428_ = l_Lean_stringToMessageData(v___x_4427_);
return v___x_4428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0(lean_object* v___x_4429_, lean_object* v___x_4430_, uint8_t v___x_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_){
_start:
{
lean_object* v___x_4441_; 
lean_inc(v___y_4439_);
lean_inc_ref(v___y_4438_);
lean_inc(v___y_4437_);
lean_inc_ref(v___y_4436_);
lean_inc(v___y_4435_);
lean_inc_ref(v___y_4434_);
lean_inc(v___y_4433_);
lean_inc_ref(v___y_4432_);
v___x_4441_ = l_Lean_Elab_Tactic_elabTerm(v___x_4429_, v___x_4430_, v___x_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_);
if (lean_obj_tag(v___x_4441_) == 0)
{
lean_object* v_a_4442_; lean_object* v_lctx_4443_; lean_object* v___x_4444_; 
v_a_4442_ = lean_ctor_get(v___x_4441_, 0);
lean_inc(v_a_4442_);
lean_dec_ref(v___x_4441_);
v_lctx_4443_ = lean_ctor_get(v___y_4436_, 2);
lean_inc(v___y_4439_);
lean_inc_ref(v___y_4438_);
lean_inc(v___y_4437_);
lean_inc_ref(v___y_4436_);
lean_inc(v_a_4442_);
v___x_4444_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(v_a_4442_, v___x_4431_, v_lctx_4443_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_);
lean_dec(v___y_4435_);
lean_dec_ref(v___y_4434_);
lean_dec(v___y_4433_);
lean_dec_ref(v___y_4432_);
if (lean_obj_tag(v___x_4444_) == 0)
{
lean_object* v_a_4445_; lean_object* v___x_4447_; uint8_t v_isShared_4448_; uint8_t v_isSharedCheck_4457_; 
v_a_4445_ = lean_ctor_get(v___x_4444_, 0);
v_isSharedCheck_4457_ = !lean_is_exclusive(v___x_4444_);
if (v_isSharedCheck_4457_ == 0)
{
v___x_4447_ = v___x_4444_;
v_isShared_4448_ = v_isSharedCheck_4457_;
goto v_resetjp_4446_;
}
else
{
lean_inc(v_a_4445_);
lean_dec(v___x_4444_);
v___x_4447_ = lean_box(0);
v_isShared_4448_ = v_isSharedCheck_4457_;
goto v_resetjp_4446_;
}
v_resetjp_4446_:
{
if (lean_obj_tag(v_a_4445_) == 0)
{
lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; 
lean_del_object(v___x_4447_);
v___x_4449_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRename___lam__0___closed__1, &l_Lean_Elab_Tactic_evalRename___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalRename___lam__0___closed__1);
v___x_4450_ = l_Lean_indentExpr(v_a_4442_);
v___x_4451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4451_, 0, v___x_4449_);
lean_ctor_set(v___x_4451_, 1, v___x_4450_);
v___x_4452_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_4451_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_);
lean_dec(v___y_4439_);
lean_dec_ref(v___y_4438_);
lean_dec(v___y_4437_);
lean_dec_ref(v___y_4436_);
return v___x_4452_;
}
else
{
lean_object* v_val_4453_; lean_object* v___x_4455_; 
lean_dec(v_a_4442_);
lean_dec(v___y_4439_);
lean_dec_ref(v___y_4438_);
lean_dec(v___y_4437_);
lean_dec_ref(v___y_4436_);
v_val_4453_ = lean_ctor_get(v_a_4445_, 0);
lean_inc(v_val_4453_);
lean_dec_ref(v_a_4445_);
if (v_isShared_4448_ == 0)
{
lean_ctor_set(v___x_4447_, 0, v_val_4453_);
v___x_4455_ = v___x_4447_;
goto v_reusejp_4454_;
}
else
{
lean_object* v_reuseFailAlloc_4456_; 
v_reuseFailAlloc_4456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4456_, 0, v_val_4453_);
v___x_4455_ = v_reuseFailAlloc_4456_;
goto v_reusejp_4454_;
}
v_reusejp_4454_:
{
return v___x_4455_;
}
}
}
}
else
{
lean_object* v_a_4458_; lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4465_; 
lean_dec(v_a_4442_);
lean_dec(v___y_4439_);
lean_dec_ref(v___y_4438_);
lean_dec(v___y_4437_);
lean_dec_ref(v___y_4436_);
v_a_4458_ = lean_ctor_get(v___x_4444_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v___x_4444_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4460_ = v___x_4444_;
v_isShared_4461_ = v_isSharedCheck_4465_;
goto v_resetjp_4459_;
}
else
{
lean_inc(v_a_4458_);
lean_dec(v___x_4444_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4465_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
lean_object* v___x_4463_; 
if (v_isShared_4461_ == 0)
{
v___x_4463_ = v___x_4460_;
goto v_reusejp_4462_;
}
else
{
lean_object* v_reuseFailAlloc_4464_; 
v_reuseFailAlloc_4464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4464_, 0, v_a_4458_);
v___x_4463_ = v_reuseFailAlloc_4464_;
goto v_reusejp_4462_;
}
v_reusejp_4462_:
{
return v___x_4463_;
}
}
}
}
else
{
lean_object* v_a_4466_; lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4473_; 
lean_dec(v___y_4439_);
lean_dec_ref(v___y_4438_);
lean_dec(v___y_4437_);
lean_dec_ref(v___y_4436_);
lean_dec(v___y_4435_);
lean_dec_ref(v___y_4434_);
lean_dec(v___y_4433_);
lean_dec_ref(v___y_4432_);
v_a_4466_ = lean_ctor_get(v___x_4441_, 0);
v_isSharedCheck_4473_ = !lean_is_exclusive(v___x_4441_);
if (v_isSharedCheck_4473_ == 0)
{
v___x_4468_ = v___x_4441_;
v_isShared_4469_ = v_isSharedCheck_4473_;
goto v_resetjp_4467_;
}
else
{
lean_inc(v_a_4466_);
lean_dec(v___x_4441_);
v___x_4468_ = lean_box(0);
v_isShared_4469_ = v_isSharedCheck_4473_;
goto v_resetjp_4467_;
}
v_resetjp_4467_:
{
lean_object* v___x_4471_; 
if (v_isShared_4469_ == 0)
{
v___x_4471_ = v___x_4468_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4472_; 
v_reuseFailAlloc_4472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4472_, 0, v_a_4466_);
v___x_4471_ = v_reuseFailAlloc_4472_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
return v___x_4471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___boxed(lean_object* v___x_4474_, lean_object* v___x_4475_, lean_object* v___x_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_){
_start:
{
uint8_t v___x_7524__boxed_4486_; lean_object* v_res_4487_; 
v___x_7524__boxed_4486_ = lean_unbox(v___x_4476_);
v_res_4487_ = l_Lean_Elab_Tactic_evalRename___lam__0(v___x_4474_, v___x_4475_, v___x_7524__boxed_4486_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_, v___y_4482_, v___y_4483_, v___y_4484_);
return v_res_4487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1(lean_object* v___x_4488_, lean_object* v_h_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_){
_start:
{
lean_object* v___x_4499_; 
lean_inc(v___y_4497_);
lean_inc_ref(v___y_4496_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
lean_inc(v___y_4491_);
v___x_4499_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(v___x_4488_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
if (lean_obj_tag(v___x_4499_) == 0)
{
lean_object* v_a_4500_; lean_object* v___x_4501_; 
v_a_4500_ = lean_ctor_get(v___x_4499_, 0);
lean_inc(v_a_4500_);
lean_dec_ref(v___x_4499_);
v___x_4501_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_4491_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
if (lean_obj_tag(v___x_4501_) == 0)
{
lean_object* v_a_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v_a_4502_ = lean_ctor_get(v___x_4501_, 0);
lean_inc(v_a_4502_);
lean_dec_ref(v___x_4501_);
v___x_4503_ = l_Lean_TSyntax_getId(v_h_4489_);
lean_inc(v___y_4497_);
lean_inc_ref(v___y_4496_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
v___x_4504_ = l_Lean_MVarId_rename(v_a_4502_, v_a_4500_, v___x_4503_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
if (lean_obj_tag(v___x_4504_) == 0)
{
lean_object* v_a_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; 
v_a_4505_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_a_4505_);
lean_dec_ref(v___x_4504_);
v___x_4506_ = lean_box(0);
v___x_4507_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4507_, 0, v_a_4505_);
lean_ctor_set(v___x_4507_, 1, v___x_4506_);
v___x_4508_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_4507_, v___y_4491_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4491_);
return v___x_4508_;
}
else
{
lean_object* v_a_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4516_; 
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4491_);
v_a_4509_ = lean_ctor_get(v___x_4504_, 0);
v_isSharedCheck_4516_ = !lean_is_exclusive(v___x_4504_);
if (v_isSharedCheck_4516_ == 0)
{
v___x_4511_ = v___x_4504_;
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_a_4509_);
lean_dec(v___x_4504_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v___x_4514_; 
if (v_isShared_4512_ == 0)
{
v___x_4514_ = v___x_4511_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4515_; 
v_reuseFailAlloc_4515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4515_, 0, v_a_4509_);
v___x_4514_ = v_reuseFailAlloc_4515_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
return v___x_4514_;
}
}
}
}
else
{
lean_object* v_a_4517_; lean_object* v___x_4519_; uint8_t v_isShared_4520_; uint8_t v_isSharedCheck_4524_; 
lean_dec(v_a_4500_);
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4491_);
v_a_4517_ = lean_ctor_get(v___x_4501_, 0);
v_isSharedCheck_4524_ = !lean_is_exclusive(v___x_4501_);
if (v_isSharedCheck_4524_ == 0)
{
v___x_4519_ = v___x_4501_;
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
else
{
lean_inc(v_a_4517_);
lean_dec(v___x_4501_);
v___x_4519_ = lean_box(0);
v_isShared_4520_ = v_isSharedCheck_4524_;
goto v_resetjp_4518_;
}
v_resetjp_4518_:
{
lean_object* v___x_4522_; 
if (v_isShared_4520_ == 0)
{
v___x_4522_ = v___x_4519_;
goto v_reusejp_4521_;
}
else
{
lean_object* v_reuseFailAlloc_4523_; 
v_reuseFailAlloc_4523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4523_, 0, v_a_4517_);
v___x_4522_ = v_reuseFailAlloc_4523_;
goto v_reusejp_4521_;
}
v_reusejp_4521_:
{
return v___x_4522_;
}
}
}
}
else
{
lean_object* v_a_4525_; lean_object* v___x_4527_; uint8_t v_isShared_4528_; uint8_t v_isSharedCheck_4532_; 
lean_dec(v___y_4497_);
lean_dec_ref(v___y_4496_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4491_);
v_a_4525_ = lean_ctor_get(v___x_4499_, 0);
v_isSharedCheck_4532_ = !lean_is_exclusive(v___x_4499_);
if (v_isSharedCheck_4532_ == 0)
{
v___x_4527_ = v___x_4499_;
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
else
{
lean_inc(v_a_4525_);
lean_dec(v___x_4499_);
v___x_4527_ = lean_box(0);
v_isShared_4528_ = v_isSharedCheck_4532_;
goto v_resetjp_4526_;
}
v_resetjp_4526_:
{
lean_object* v___x_4530_; 
if (v_isShared_4528_ == 0)
{
v___x_4530_ = v___x_4527_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4531_; 
v_reuseFailAlloc_4531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4531_, 0, v_a_4525_);
v___x_4530_ = v_reuseFailAlloc_4531_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
return v___x_4530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1___boxed(lean_object* v___x_4533_, lean_object* v_h_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_){
_start:
{
lean_object* v_res_4544_; 
v_res_4544_ = l_Lean_Elab_Tactic_evalRename___lam__1(v___x_4533_, v_h_4534_, v___y_4535_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_);
lean_dec(v_h_4534_);
return v_res_4544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename(lean_object* v_stx_4554_, lean_object* v_a_4555_, lean_object* v_a_4556_, lean_object* v_a_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_, lean_object* v_a_4561_, lean_object* v_a_4562_){
_start:
{
lean_object* v___x_4564_; uint8_t v___x_4565_; 
v___x_4564_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___closed__1));
lean_inc(v_stx_4554_);
v___x_4565_ = l_Lean_Syntax_isOfKind(v_stx_4554_, v___x_4564_);
if (v___x_4565_ == 0)
{
lean_object* v___x_4566_; 
lean_dec(v_a_4562_);
lean_dec_ref(v_a_4561_);
lean_dec(v_a_4560_);
lean_dec_ref(v_a_4559_);
lean_dec(v_a_4558_);
lean_dec_ref(v_a_4557_);
lean_dec(v_a_4556_);
lean_dec_ref(v_a_4555_);
lean_dec(v_stx_4554_);
v___x_4566_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_4566_;
}
else
{
lean_object* v___x_4567_; lean_object* v_h_4568_; lean_object* v___x_4569_; uint8_t v___x_4570_; 
v___x_4567_ = lean_unsigned_to_nat(3u);
v_h_4568_ = l_Lean_Syntax_getArg(v_stx_4554_, v___x_4567_);
v___x_4569_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___closed__3));
lean_inc(v_h_4568_);
v___x_4570_ = l_Lean_Syntax_isOfKind(v_h_4568_, v___x_4569_);
if (v___x_4570_ == 0)
{
lean_object* v___x_4571_; 
lean_dec(v_h_4568_);
lean_dec(v_a_4562_);
lean_dec_ref(v_a_4561_);
lean_dec(v_a_4560_);
lean_dec_ref(v_a_4559_);
lean_dec(v_a_4558_);
lean_dec_ref(v_a_4557_);
lean_dec(v_a_4556_);
lean_dec_ref(v_a_4555_);
lean_dec(v_stx_4554_);
v___x_4571_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_4571_;
}
else
{
lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___f_4576_; lean_object* v___x_4577_; uint8_t v___x_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; lean_object* v___f_4581_; lean_object* v___x_4582_; 
v___x_4572_ = lean_unsigned_to_nat(1u);
v___x_4573_ = l_Lean_Syntax_getArg(v_stx_4554_, v___x_4572_);
lean_dec(v_stx_4554_);
v___x_4574_ = lean_box(0);
v___x_4575_ = lean_box(v___x_4570_);
v___f_4576_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRename___lam__0___boxed), 12, 3);
lean_closure_set(v___f_4576_, 0, v___x_4573_);
lean_closure_set(v___f_4576_, 1, v___x_4574_);
lean_closure_set(v___f_4576_, 2, v___x_4575_);
v___x_4577_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___boxed), 11, 2);
lean_closure_set(v___x_4577_, 0, lean_box(0));
lean_closure_set(v___x_4577_, 1, v___f_4576_);
v___x_4578_ = 0;
v___x_4579_ = lean_box(v___x_4578_);
v___x_4580_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___boxed), 12, 3);
lean_closure_set(v___x_4580_, 0, lean_box(0));
lean_closure_set(v___x_4580_, 1, v___x_4577_);
lean_closure_set(v___x_4580_, 2, v___x_4579_);
v___f_4581_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRename___lam__1___boxed), 11, 2);
lean_closure_set(v___f_4581_, 0, v___x_4580_);
lean_closure_set(v___f_4581_, 1, v_h_4568_);
v___x_4582_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_4581_, v_a_4555_, v_a_4556_, v_a_4557_, v_a_4558_, v_a_4559_, v_a_4560_, v_a_4561_, v_a_4562_);
return v___x_4582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___boxed(lean_object* v_stx_4583_, lean_object* v_a_4584_, lean_object* v_a_4585_, lean_object* v_a_4586_, lean_object* v_a_4587_, lean_object* v_a_4588_, lean_object* v_a_4589_, lean_object* v_a_4590_, lean_object* v_a_4591_, lean_object* v_a_4592_){
_start:
{
lean_object* v_res_4593_; 
v_res_4593_ = l_Lean_Elab_Tactic_evalRename(v_stx_4583_, v_a_4584_, v_a_4585_, v_a_4586_, v_a_4587_, v_a_4588_, v_a_4589_, v_a_4590_, v_a_4591_);
return v_res_4593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3(lean_object* v_a_4594_, uint8_t v___x_4595_, lean_object* v_as_4596_, lean_object* v_i_4597_, lean_object* v_a_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_){
_start:
{
lean_object* v___x_4608_; 
v___x_4608_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_4594_, v___x_4595_, v_as_4596_, v_i_4597_, v___y_4603_, v___y_4604_, v___y_4605_, v___y_4606_);
return v___x_4608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___boxed(lean_object* v_a_4609_, lean_object* v___x_4610_, lean_object* v_as_4611_, lean_object* v_i_4612_, lean_object* v_a_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_){
_start:
{
uint8_t v___x_7817__boxed_4623_; lean_object* v_res_4624_; 
v___x_7817__boxed_4623_ = lean_unbox(v___x_4610_);
v_res_4624_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3(v_a_4609_, v___x_7817__boxed_4623_, v_as_4611_, v_i_4612_, v_a_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_);
lean_dec(v___y_4617_);
lean_dec_ref(v___y_4616_);
lean_dec(v___y_4615_);
lean_dec_ref(v___y_4614_);
lean_dec_ref(v_as_4611_);
return v_res_4624_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5(lean_object* v_a_4625_, uint8_t v___x_4626_, lean_object* v_as_4627_, lean_object* v_i_4628_, lean_object* v_a_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_){
_start:
{
lean_object* v___x_4639_; 
v___x_4639_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(v_a_4625_, v___x_4626_, v_as_4627_, v_i_4628_, v___y_4630_, v___y_4631_, v___y_4632_, v___y_4633_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
return v___x_4639_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___boxed(lean_object* v_a_4640_, lean_object* v___x_4641_, lean_object* v_as_4642_, lean_object* v_i_4643_, lean_object* v_a_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_){
_start:
{
uint8_t v___x_7855__boxed_4654_; lean_object* v_res_4655_; 
v___x_7855__boxed_4654_ = lean_unbox(v___x_4641_);
v_res_4655_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5(v_a_4640_, v___x_7855__boxed_4654_, v_as_4642_, v_i_4643_, v_a_4644_, v___y_4645_, v___y_4646_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_);
lean_dec(v___y_4648_);
lean_dec_ref(v___y_4647_);
lean_dec(v___y_4646_);
lean_dec_ref(v___y_4645_);
lean_dec_ref(v_as_4642_);
return v_res_4655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1(){
_start:
{
lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; 
v___x_4663_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4664_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___closed__1));
v___x_4665_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1));
v___x_4666_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRename___boxed), 10, 0);
v___x_4667_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4663_, v___x_4664_, v___x_4665_, v___x_4666_);
return v___x_4667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___boxed(lean_object* v_a_4668_){
_start:
{
lean_object* v_res_4669_; 
v_res_4669_ = l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1();
return v_res_4669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3(){
_start:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; 
v___x_4696_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1));
v___x_4697_ = ((lean_object*)(l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6));
v___x_4698_ = l_Lean_addBuiltinDeclarationRanges(v___x_4696_, v___x_4697_);
return v___x_4698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___boxed(lean_object* v_a_4699_){
_start:
{
lean_object* v_res_4700_; 
v_res_4700_ = l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3();
return v_res_4700_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Constructor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Rename(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Config(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rename(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Constructor(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Rename(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Config(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rename(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_ElabTerm(builtin);
}
#ifdef __cplusplus
}
#endif
