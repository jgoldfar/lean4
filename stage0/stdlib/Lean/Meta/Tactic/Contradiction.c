// Lean compiler output
// Module: Lean.Meta.Tactic.Contradiction
// Imports: public import Lean.Meta.Tactic.Assumption public import Lean.Meta.Tactic.Cases public import Lean.Meta.Tactic.Apply import Lean.Meta.HasNotBit import Lean.Meta.Tactic.Simp.Rewrite
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Meta_Simp_isEqnThmHypothesis(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_mkNoConfusion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAbsurd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_refutableHasNotBit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchNe_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchNot_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_findLocalDeclWithType_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Meta_saveState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value;
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_saveState___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value;
static const lean_closure_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__1_value)} };
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__2_value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__0_value)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0_value;
static const lean_array_object l_Lean_Meta_ElimEmptyInductive_elim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "contradiction"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__3 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__2 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__1 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 147, 90, 76, 177, 67, 155, 92)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__4 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__4_value;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__5 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value;
static const lean_ctor_object l_Lean_Meta_ElimEmptyInductive_elim___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__5_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__6 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__6_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__7;
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "elimEmptyInductive, number subgoals: "};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_ElimEmptyInductive_elim___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "elimEmptyInductive out-of-fuel"};
static const lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__8 = (const lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__8_value;
static lean_once_cell_t l_Lean_Meta_ElimEmptyInductive_elim___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ElimEmptyInductive_elim___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_mkGenDiseqMask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkGenDiseqMask___closed__0 = (const lean_object*)&l_Lean_Meta_mkGenDiseqMask___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask___boxed(lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.Tactic.Contradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Meta.Tactic.Contradiction.0.Lean.Meta.processGenDiseq"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: isGenDiseq localDecl.type\n  "};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "of_decide_eq_false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__5_value),LEAN_SCALAR_PTR_LITERAL(101, 242, 48, 138, 187, 4, 117, 248)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MVarId_contradictionCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 42, 230, 185, 74, 16, 247, 90)}};
static const lean_object* l_Lean_MVarId_contradictionCore___closed__0 = (const lean_object*)&l_Lean_MVarId_contradictionCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Contradiction"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(46, 99, 155, 115, 190, 254, 84, 130)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(215, 241, 81, 7, 129, 11, 88, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(234, 199, 235, 149, 198, 6, 20, 106)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(78, 78, 37, 212, 63, 127, 41, 250)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 88, 171, 83, 172, 77, 248, 159)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(86, 220, 174, 134, 139, 23, 35, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(255, 173, 142, 211, 165, 86, 65, 180)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__1_value),LEAN_SCALAR_PTR_LITERAL(63, 154, 136, 66, 43, 95, 3, 203)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_ElimEmptyInductive_elim___closed__2_value),LEAN_SCALAR_PTR_LITERAL(142, 18, 4, 159, 144, 239, 124, 55)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(215, 255, 49, 161, 212, 67, 91, 246)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(911661800) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(54, 37, 52, 164, 114, 188, 198, 209)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 78, 196, 57, 182, 60, 174, 81)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 112, 60, 29, 144, 20, 193, 203)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(84, 54, 65, 98, 52, 12, 188, 139)}};
static const lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(lean_object* v_e_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v___x_7_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___closed__2));
v___x_8_ = lean_unsigned_to_nat(2u);
v___x_9_ = l_Lean_Expr_isAppOfArity(v_e_6_, v___x_7_, v___x_8_);
if (v___x_9_ == 0)
{
return v___x_9_;
}
else
{
lean_object* v___x_10_; uint8_t v___x_11_; 
v___x_10_ = l_Lean_Expr_appArg_x21(v_e_6_);
v___x_11_ = l_Lean_Expr_hasLooseBVars(v___x_10_);
lean_dec_ref(v___x_10_);
if (v___x_11_ == 0)
{
return v___x_9_;
}
else
{
uint8_t v___x_12_; 
v___x_12_ = 0;
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0___boxed(lean_object* v_e_13_){
_start:
{
uint8_t v_res_14_; lean_object* v_r_15_; 
v_res_14_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___lam__0(v_e_13_);
lean_dec_ref(v_e_13_);
v_r_15_ = lean_box(v_res_14_);
return v_r_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_16_, lean_object* v_x_17_, lean_object* v_x_18_, lean_object* v_x_19_){
_start:
{
lean_object* v_ks_20_; lean_object* v_vs_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_45_; 
v_ks_20_ = lean_ctor_get(v_x_16_, 0);
v_vs_21_ = lean_ctor_get(v_x_16_, 1);
v_isSharedCheck_45_ = !lean_is_exclusive(v_x_16_);
if (v_isSharedCheck_45_ == 0)
{
v___x_23_ = v_x_16_;
v_isShared_24_ = v_isSharedCheck_45_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_vs_21_);
lean_inc(v_ks_20_);
lean_dec(v_x_16_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_45_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_25_ = lean_array_get_size(v_ks_20_);
v___x_26_ = lean_nat_dec_lt(v_x_17_, v___x_25_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_30_; 
lean_dec(v_x_17_);
v___x_27_ = lean_array_push(v_ks_20_, v_x_18_);
v___x_28_ = lean_array_push(v_vs_21_, v_x_19_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_28_);
lean_ctor_set(v___x_23_, 0, v___x_27_);
v___x_30_ = v___x_23_;
goto v_reusejp_29_;
}
else
{
lean_object* v_reuseFailAlloc_31_; 
v_reuseFailAlloc_31_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_31_, 0, v___x_27_);
lean_ctor_set(v_reuseFailAlloc_31_, 1, v___x_28_);
v___x_30_ = v_reuseFailAlloc_31_;
goto v_reusejp_29_;
}
v_reusejp_29_:
{
return v___x_30_;
}
}
else
{
lean_object* v_k_x27_32_; uint8_t v___x_33_; 
v_k_x27_32_ = lean_array_fget_borrowed(v_ks_20_, v_x_17_);
v___x_33_ = l_Lean_instBEqMVarId_beq(v_x_18_, v_k_x27_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_35_; 
if (v_isShared_24_ == 0)
{
v___x_35_ = v___x_23_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v_ks_20_);
lean_ctor_set(v_reuseFailAlloc_39_, 1, v_vs_21_);
v___x_35_ = v_reuseFailAlloc_39_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(1u);
v___x_37_ = lean_nat_add(v_x_17_, v___x_36_);
lean_dec(v_x_17_);
v_x_16_ = v___x_35_;
v_x_17_ = v___x_37_;
goto _start;
}
}
else
{
lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_43_; 
v___x_40_ = lean_array_fset(v_ks_20_, v_x_17_, v_x_18_);
v___x_41_ = lean_array_fset(v_vs_21_, v_x_17_, v_x_19_);
lean_dec(v_x_17_);
if (v_isShared_24_ == 0)
{
lean_ctor_set(v___x_23_, 1, v___x_41_);
lean_ctor_set(v___x_23_, 0, v___x_40_);
v___x_43_ = v___x_23_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v___x_40_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v___x_41_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_46_, lean_object* v_k_47_, lean_object* v_v_48_){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(0u);
v___x_50_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_46_, v___x_49_, v_k_47_, v_v_48_);
return v___x_50_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_51_; size_t v___x_52_; size_t v___x_53_; 
v___x_51_ = ((size_t)5ULL);
v___x_52_ = ((size_t)1ULL);
v___x_53_ = lean_usize_shift_left(v___x_52_, v___x_51_);
return v___x_53_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_54_; size_t v___x_55_; size_t v___x_56_; 
v___x_54_ = ((size_t)1ULL);
v___x_55_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_56_ = lean_usize_sub(v___x_55_, v___x_54_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(lean_object* v_x_58_, size_t v_x_59_, size_t v_x_60_, lean_object* v_x_61_, lean_object* v_x_62_){
_start:
{
if (lean_obj_tag(v_x_58_) == 0)
{
lean_object* v_es_63_; size_t v___x_64_; size_t v___x_65_; size_t v___x_66_; size_t v___x_67_; lean_object* v_j_68_; lean_object* v___x_69_; uint8_t v___x_70_; 
v_es_63_ = lean_ctor_get(v_x_58_, 0);
v___x_64_ = ((size_t)5ULL);
v___x_65_ = ((size_t)1ULL);
v___x_66_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_67_ = lean_usize_land(v_x_59_, v___x_66_);
v_j_68_ = lean_usize_to_nat(v___x_67_);
v___x_69_ = lean_array_get_size(v_es_63_);
v___x_70_ = lean_nat_dec_lt(v_j_68_, v___x_69_);
if (v___x_70_ == 0)
{
lean_dec(v_j_68_);
lean_dec(v_x_62_);
lean_dec(v_x_61_);
return v_x_58_;
}
else
{
lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_107_; 
lean_inc_ref(v_es_63_);
v_isSharedCheck_107_ = !lean_is_exclusive(v_x_58_);
if (v_isSharedCheck_107_ == 0)
{
lean_object* v_unused_108_; 
v_unused_108_ = lean_ctor_get(v_x_58_, 0);
lean_dec(v_unused_108_);
v___x_72_ = v_x_58_;
v_isShared_73_ = v_isSharedCheck_107_;
goto v_resetjp_71_;
}
else
{
lean_dec(v_x_58_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_107_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v_v_74_; lean_object* v___x_75_; lean_object* v_xs_x27_76_; lean_object* v___y_78_; 
v_v_74_ = lean_array_fget(v_es_63_, v_j_68_);
v___x_75_ = lean_box(0);
v_xs_x27_76_ = lean_array_fset(v_es_63_, v_j_68_, v___x_75_);
switch(lean_obj_tag(v_v_74_))
{
case 0:
{
lean_object* v_key_83_; lean_object* v_val_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_94_; 
v_key_83_ = lean_ctor_get(v_v_74_, 0);
v_val_84_ = lean_ctor_get(v_v_74_, 1);
v_isSharedCheck_94_ = !lean_is_exclusive(v_v_74_);
if (v_isSharedCheck_94_ == 0)
{
v___x_86_ = v_v_74_;
v_isShared_87_ = v_isSharedCheck_94_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_val_84_);
lean_inc(v_key_83_);
lean_dec(v_v_74_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_94_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
uint8_t v___x_88_; 
v___x_88_ = l_Lean_instBEqMVarId_beq(v_x_61_, v_key_83_);
if (v___x_88_ == 0)
{
lean_object* v___x_89_; lean_object* v___x_90_; 
lean_del_object(v___x_86_);
v___x_89_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_83_, v_val_84_, v_x_61_, v_x_62_);
v___x_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_90_, 0, v___x_89_);
v___y_78_ = v___x_90_;
goto v___jp_77_;
}
else
{
lean_object* v___x_92_; 
lean_dec(v_val_84_);
lean_dec(v_key_83_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 1, v_x_62_);
lean_ctor_set(v___x_86_, 0, v_x_61_);
v___x_92_ = v___x_86_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v_x_61_);
lean_ctor_set(v_reuseFailAlloc_93_, 1, v_x_62_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
v___y_78_ = v___x_92_;
goto v___jp_77_;
}
}
}
}
case 1:
{
lean_object* v_node_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_105_; 
v_node_95_ = lean_ctor_get(v_v_74_, 0);
v_isSharedCheck_105_ = !lean_is_exclusive(v_v_74_);
if (v_isSharedCheck_105_ == 0)
{
v___x_97_ = v_v_74_;
v_isShared_98_ = v_isSharedCheck_105_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_node_95_);
lean_dec(v_v_74_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_105_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
size_t v___x_99_; size_t v___x_100_; lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_99_ = lean_usize_shift_right(v_x_59_, v___x_64_);
v___x_100_ = lean_usize_add(v_x_60_, v___x_65_);
v___x_101_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_node_95_, v___x_99_, v___x_100_, v_x_61_, v_x_62_);
if (v_isShared_98_ == 0)
{
lean_ctor_set(v___x_97_, 0, v___x_101_);
v___x_103_ = v___x_97_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_101_);
v___x_103_ = v_reuseFailAlloc_104_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
v___y_78_ = v___x_103_;
goto v___jp_77_;
}
}
}
default: 
{
lean_object* v___x_106_; 
v___x_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_106_, 0, v_x_61_);
lean_ctor_set(v___x_106_, 1, v_x_62_);
v___y_78_ = v___x_106_;
goto v___jp_77_;
}
}
v___jp_77_:
{
lean_object* v___x_79_; lean_object* v___x_81_; 
v___x_79_ = lean_array_fset(v_xs_x27_76_, v_j_68_, v___y_78_);
lean_dec(v_j_68_);
if (v_isShared_73_ == 0)
{
lean_ctor_set(v___x_72_, 0, v___x_79_);
v___x_81_ = v___x_72_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v___x_79_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
}
}
else
{
lean_object* v_ks_109_; lean_object* v_vs_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_130_; 
v_ks_109_ = lean_ctor_get(v_x_58_, 0);
v_vs_110_ = lean_ctor_get(v_x_58_, 1);
v_isSharedCheck_130_ = !lean_is_exclusive(v_x_58_);
if (v_isSharedCheck_130_ == 0)
{
v___x_112_ = v_x_58_;
v_isShared_113_ = v_isSharedCheck_130_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_vs_110_);
lean_inc(v_ks_109_);
lean_dec(v_x_58_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_130_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_115_; 
if (v_isShared_113_ == 0)
{
v___x_115_ = v___x_112_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_ks_109_);
lean_ctor_set(v_reuseFailAlloc_129_, 1, v_vs_110_);
v___x_115_ = v_reuseFailAlloc_129_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
lean_object* v_newNode_116_; uint8_t v___y_118_; size_t v___x_124_; uint8_t v___x_125_; 
v_newNode_116_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(v___x_115_, v_x_61_, v_x_62_);
v___x_124_ = ((size_t)7ULL);
v___x_125_ = lean_usize_dec_le(v___x_124_, v_x_60_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; uint8_t v___x_128_; 
v___x_126_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_116_);
v___x_127_ = lean_unsigned_to_nat(4u);
v___x_128_ = lean_nat_dec_lt(v___x_126_, v___x_127_);
lean_dec(v___x_126_);
v___y_118_ = v___x_128_;
goto v___jp_117_;
}
else
{
v___y_118_ = v___x_125_;
goto v___jp_117_;
}
v___jp_117_:
{
if (v___y_118_ == 0)
{
lean_object* v_ks_119_; lean_object* v_vs_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v_ks_119_ = lean_ctor_get(v_newNode_116_, 0);
lean_inc_ref(v_ks_119_);
v_vs_120_ = lean_ctor_get(v_newNode_116_, 1);
lean_inc_ref(v_vs_120_);
lean_dec_ref(v_newNode_116_);
v___x_121_ = lean_unsigned_to_nat(0u);
v___x_122_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_123_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_x_60_, v_ks_119_, v_vs_120_, v___x_121_, v___x_122_);
lean_dec_ref(v_vs_120_);
lean_dec_ref(v_ks_119_);
return v___x_123_;
}
else
{
return v_newNode_116_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_131_, lean_object* v_keys_132_, lean_object* v_vals_133_, lean_object* v_i_134_, lean_object* v_entries_135_){
_start:
{
lean_object* v___x_136_; uint8_t v___x_137_; 
v___x_136_ = lean_array_get_size(v_keys_132_);
v___x_137_ = lean_nat_dec_lt(v_i_134_, v___x_136_);
if (v___x_137_ == 0)
{
lean_dec(v_i_134_);
return v_entries_135_;
}
else
{
lean_object* v_k_138_; lean_object* v_v_139_; uint64_t v___x_140_; size_t v_h_141_; size_t v___x_142_; lean_object* v___x_143_; size_t v___x_144_; size_t v___x_145_; size_t v___x_146_; size_t v_h_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v_k_138_ = lean_array_fget_borrowed(v_keys_132_, v_i_134_);
v_v_139_ = lean_array_fget_borrowed(v_vals_133_, v_i_134_);
v___x_140_ = l_Lean_instHashableMVarId_hash(v_k_138_);
v_h_141_ = lean_uint64_to_usize(v___x_140_);
v___x_142_ = ((size_t)5ULL);
v___x_143_ = lean_unsigned_to_nat(1u);
v___x_144_ = ((size_t)1ULL);
v___x_145_ = lean_usize_sub(v_depth_131_, v___x_144_);
v___x_146_ = lean_usize_mul(v___x_142_, v___x_145_);
v_h_147_ = lean_usize_shift_right(v_h_141_, v___x_146_);
v___x_148_ = lean_nat_add(v_i_134_, v___x_143_);
lean_dec(v_i_134_);
lean_inc(v_v_139_);
lean_inc(v_k_138_);
v___x_149_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_entries_135_, v_h_147_, v_depth_131_, v_k_138_, v_v_139_);
v_i_134_ = v___x_148_;
v_entries_135_ = v___x_149_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_151_, lean_object* v_keys_152_, lean_object* v_vals_153_, lean_object* v_i_154_, lean_object* v_entries_155_){
_start:
{
size_t v_depth_boxed_156_; lean_object* v_res_157_; 
v_depth_boxed_156_ = lean_unbox_usize(v_depth_151_);
lean_dec(v_depth_151_);
v_res_157_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_156_, v_keys_152_, v_vals_153_, v_i_154_, v_entries_155_);
lean_dec_ref(v_vals_153_);
lean_dec_ref(v_keys_152_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_158_, lean_object* v_x_159_, lean_object* v_x_160_, lean_object* v_x_161_, lean_object* v_x_162_){
_start:
{
size_t v_x_1118__boxed_163_; size_t v_x_1119__boxed_164_; lean_object* v_res_165_; 
v_x_1118__boxed_163_ = lean_unbox_usize(v_x_159_);
lean_dec(v_x_159_);
v_x_1119__boxed_164_ = lean_unbox_usize(v_x_160_);
lean_dec(v_x_160_);
v_res_165_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_158_, v_x_1118__boxed_163_, v_x_1119__boxed_164_, v_x_161_, v_x_162_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(lean_object* v_x_166_, lean_object* v_x_167_, lean_object* v_x_168_){
_start:
{
uint64_t v___x_169_; size_t v___x_170_; size_t v___x_171_; lean_object* v___x_172_; 
v___x_169_ = l_Lean_instHashableMVarId_hash(v_x_167_);
v___x_170_ = lean_uint64_to_usize(v___x_169_);
v___x_171_ = ((size_t)1ULL);
v___x_172_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_166_, v___x_170_, v___x_171_, v_x_167_, v_x_168_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(lean_object* v_mvarId_173_, lean_object* v_val_174_, lean_object* v___y_175_){
_start:
{
lean_object* v___x_177_; lean_object* v_mctx_178_; lean_object* v_cache_179_; lean_object* v_zetaDeltaFVarIds_180_; lean_object* v_postponed_181_; lean_object* v_diag_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_209_; 
v___x_177_ = lean_st_ref_take(v___y_175_);
v_mctx_178_ = lean_ctor_get(v___x_177_, 0);
v_cache_179_ = lean_ctor_get(v___x_177_, 1);
v_zetaDeltaFVarIds_180_ = lean_ctor_get(v___x_177_, 2);
v_postponed_181_ = lean_ctor_get(v___x_177_, 3);
v_diag_182_ = lean_ctor_get(v___x_177_, 4);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_209_ == 0)
{
v___x_184_ = v___x_177_;
v_isShared_185_ = v_isSharedCheck_209_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_diag_182_);
lean_inc(v_postponed_181_);
lean_inc(v_zetaDeltaFVarIds_180_);
lean_inc(v_cache_179_);
lean_inc(v_mctx_178_);
lean_dec(v___x_177_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_209_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v_depth_186_; lean_object* v_levelAssignDepth_187_; lean_object* v_mvarCounter_188_; lean_object* v_lDepth_189_; lean_object* v_decls_190_; lean_object* v_userNames_191_; lean_object* v_lAssignment_192_; lean_object* v_eAssignment_193_; lean_object* v_dAssignment_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_208_; 
v_depth_186_ = lean_ctor_get(v_mctx_178_, 0);
v_levelAssignDepth_187_ = lean_ctor_get(v_mctx_178_, 1);
v_mvarCounter_188_ = lean_ctor_get(v_mctx_178_, 2);
v_lDepth_189_ = lean_ctor_get(v_mctx_178_, 3);
v_decls_190_ = lean_ctor_get(v_mctx_178_, 4);
v_userNames_191_ = lean_ctor_get(v_mctx_178_, 5);
v_lAssignment_192_ = lean_ctor_get(v_mctx_178_, 6);
v_eAssignment_193_ = lean_ctor_get(v_mctx_178_, 7);
v_dAssignment_194_ = lean_ctor_get(v_mctx_178_, 8);
v_isSharedCheck_208_ = !lean_is_exclusive(v_mctx_178_);
if (v_isSharedCheck_208_ == 0)
{
v___x_196_ = v_mctx_178_;
v_isShared_197_ = v_isSharedCheck_208_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_dAssignment_194_);
lean_inc(v_eAssignment_193_);
lean_inc(v_lAssignment_192_);
lean_inc(v_userNames_191_);
lean_inc(v_decls_190_);
lean_inc(v_lDepth_189_);
lean_inc(v_mvarCounter_188_);
lean_inc(v_levelAssignDepth_187_);
lean_inc(v_depth_186_);
lean_dec(v_mctx_178_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_208_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_200_; 
v___x_198_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(v_eAssignment_193_, v_mvarId_173_, v_val_174_);
if (v_isShared_197_ == 0)
{
lean_ctor_set(v___x_196_, 7, v___x_198_);
v___x_200_ = v___x_196_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_depth_186_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v_levelAssignDepth_187_);
lean_ctor_set(v_reuseFailAlloc_207_, 2, v_mvarCounter_188_);
lean_ctor_set(v_reuseFailAlloc_207_, 3, v_lDepth_189_);
lean_ctor_set(v_reuseFailAlloc_207_, 4, v_decls_190_);
lean_ctor_set(v_reuseFailAlloc_207_, 5, v_userNames_191_);
lean_ctor_set(v_reuseFailAlloc_207_, 6, v_lAssignment_192_);
lean_ctor_set(v_reuseFailAlloc_207_, 7, v___x_198_);
lean_ctor_set(v_reuseFailAlloc_207_, 8, v_dAssignment_194_);
v___x_200_ = v_reuseFailAlloc_207_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
lean_object* v___x_202_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_200_);
v___x_202_ = v___x_184_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_200_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_cache_179_);
lean_ctor_set(v_reuseFailAlloc_206_, 2, v_zetaDeltaFVarIds_180_);
lean_ctor_set(v_reuseFailAlloc_206_, 3, v_postponed_181_);
lean_ctor_set(v_reuseFailAlloc_206_, 4, v_diag_182_);
v___x_202_ = v_reuseFailAlloc_206_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_203_ = lean_st_ref_set(v___y_175_, v___x_202_);
v___x_204_ = lean_box(0);
v___x_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
return v___x_205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg___boxed(lean_object* v_mvarId_210_, lean_object* v_val_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_210_, v_val_211_, v___y_212_);
lean_dec(v___y_212_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(lean_object* v_mvarId_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_){
_start:
{
lean_object* v___x_222_; 
lean_inc(v_mvarId_216_);
v___x_222_ = l_Lean_MVarId_getType(v_mvarId_216_, v_a_217_, v_a_218_, v_a_219_, v_a_220_);
if (lean_obj_tag(v___x_222_) == 0)
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_267_; 
v_a_223_ = lean_ctor_get(v___x_222_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_267_ == 0)
{
v___x_225_ = v___x_222_;
v_isShared_226_ = v_isSharedCheck_267_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v___x_222_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_267_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___f_227_; lean_object* v___x_228_; 
v___f_227_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___closed__0));
v___x_228_ = lean_find_expr(v___f_227_, v_a_223_);
lean_dec(v_a_223_);
if (lean_obj_tag(v___x_228_) == 1)
{
lean_object* v_val_229_; lean_object* v___x_230_; 
lean_del_object(v___x_225_);
v_val_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_val_229_);
lean_dec_ref(v___x_228_);
lean_inc(v_mvarId_216_);
v___x_230_ = l_Lean_MVarId_getType(v_mvarId_216_, v_a_217_, v_a_218_, v_a_219_, v_a_220_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v_a_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_a_231_);
lean_dec_ref(v___x_230_);
v___x_232_ = l_Lean_Expr_appArg_x21(v_val_229_);
lean_dec(v_val_229_);
v___x_233_ = l_Lean_Meta_mkFalseElim(v_a_231_, v___x_232_, v_a_217_, v_a_218_, v_a_219_, v_a_220_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v_a_234_; lean_object* v___x_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_244_; 
v_a_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc(v_a_234_);
lean_dec_ref(v___x_233_);
v___x_235_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_216_, v_a_234_, v_a_218_);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_244_ == 0)
{
lean_object* v_unused_245_; 
v_unused_245_ = lean_ctor_get(v___x_235_, 0);
lean_dec(v_unused_245_);
v___x_237_ = v___x_235_;
v_isShared_238_ = v_isSharedCheck_244_;
goto v_resetjp_236_;
}
else
{
lean_dec(v___x_235_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_244_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
uint8_t v___x_239_; lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_239_ = 1;
v___x_240_ = lean_box(v___x_239_);
if (v_isShared_238_ == 0)
{
lean_ctor_set(v___x_237_, 0, v___x_240_);
v___x_242_ = v___x_237_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_240_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
else
{
lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_253_; 
lean_dec(v_mvarId_216_);
v_a_246_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_253_ == 0)
{
v___x_248_ = v___x_233_;
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v___x_233_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_253_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_a_246_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
}
else
{
lean_object* v_a_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_261_; 
lean_dec(v_val_229_);
lean_dec(v_mvarId_216_);
v_a_254_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_261_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_261_ == 0)
{
v___x_256_ = v___x_230_;
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_a_254_);
lean_dec(v___x_230_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_261_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_259_; 
if (v_isShared_257_ == 0)
{
v___x_259_ = v___x_256_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_254_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
else
{
uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_265_; 
lean_dec(v___x_228_);
lean_dec(v_mvarId_216_);
v___x_262_ = 0;
v___x_263_ = lean_box(v___x_262_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 0, v___x_263_);
v___x_265_ = v___x_225_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v___x_263_);
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
else
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
lean_dec(v_mvarId_216_);
v_a_268_ = lean_ctor_get(v___x_222_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_222_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_222_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_222_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim___boxed(lean_object* v_mvarId_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(v_mvarId_276_, v_a_277_, v_a_278_, v_a_279_, v_a_280_);
lean_dec(v_a_280_);
lean_dec_ref(v_a_279_);
lean_dec(v_a_278_);
lean_dec_ref(v_a_277_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(lean_object* v_mvarId_283_, lean_object* v_val_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_283_, v_val_284_, v___y_286_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___boxed(lean_object* v_mvarId_291_, lean_object* v_val_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0(v_mvarId_291_, v_val_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
lean_dec(v___y_296_);
lean_dec_ref(v___y_295_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0(lean_object* v_00_u03b2_299_, lean_object* v_x_300_, lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0___redArg(v_x_300_, v_x_301_, v_x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_304_, lean_object* v_x_305_, size_t v_x_306_, size_t v_x_307_, lean_object* v_x_308_, lean_object* v_x_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___redArg(v_x_305_, v_x_306_, v_x_307_, v_x_308_, v_x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_311_, lean_object* v_x_312_, lean_object* v_x_313_, lean_object* v_x_314_, lean_object* v_x_315_, lean_object* v_x_316_){
_start:
{
size_t v_x_1479__boxed_317_; size_t v_x_1480__boxed_318_; lean_object* v_res_319_; 
v_x_1479__boxed_317_ = lean_unbox_usize(v_x_313_);
lean_dec(v_x_313_);
v_x_1480__boxed_318_ = lean_unbox_usize(v_x_314_);
lean_dec(v_x_314_);
v_res_319_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1(v_00_u03b2_311_, v_x_312_, v_x_1479__boxed_317_, v_x_1480__boxed_318_, v_x_315_, v_x_316_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_320_, lean_object* v_n_321_, lean_object* v_k_322_, lean_object* v_v_323_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2___redArg(v_n_321_, v_k_322_, v_v_323_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_325_, size_t v_depth_326_, lean_object* v_keys_327_, lean_object* v_vals_328_, lean_object* v_heq_329_, lean_object* v_i_330_, lean_object* v_entries_331_){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_326_, v_keys_327_, v_vals_328_, v_i_330_, v_entries_331_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_333_, lean_object* v_depth_334_, lean_object* v_keys_335_, lean_object* v_vals_336_, lean_object* v_heq_337_, lean_object* v_i_338_, lean_object* v_entries_339_){
_start:
{
size_t v_depth_boxed_340_; lean_object* v_res_341_; 
v_depth_boxed_340_ = lean_unbox_usize(v_depth_334_);
lean_dec(v_depth_334_);
v_res_341_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_333_, v_depth_boxed_340_, v_keys_335_, v_vals_336_, v_heq_337_, v_i_338_, v_entries_339_);
lean_dec_ref(v_vals_336_);
lean_dec_ref(v_keys_335_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_342_, lean_object* v_x_343_, lean_object* v_x_344_, lean_object* v_x_345_, lean_object* v_x_346_){
_start:
{
lean_object* v___x_347_; 
v___x_347_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_343_, v_x_344_, v_x_345_, v_x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(lean_object* v_fvarId_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Lean_FVarId_getType___redArg(v_fvarId_348_, v_a_349_, v_a_351_, v_a_352_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; lean_object* v___x_360_; 
v_a_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc(v_a_359_);
lean_dec_ref(v___x_358_);
v___x_360_ = l_Lean_Meta_whnfD(v_a_359_, v_a_349_, v_a_350_, v_a_351_, v_a_352_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_387_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_387_ == 0)
{
v___x_363_ = v___x_360_;
v_isShared_364_ = v_isSharedCheck_387_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_a_361_);
lean_dec(v___x_360_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_387_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; 
v___x_365_ = l_Lean_Expr_getAppFn(v_a_361_);
lean_dec(v_a_361_);
if (lean_obj_tag(v___x_365_) == 4)
{
lean_object* v_declName_366_; lean_object* v___x_367_; lean_object* v_env_368_; uint8_t v___x_369_; lean_object* v___x_370_; 
v_declName_366_ = lean_ctor_get(v___x_365_, 0);
lean_inc(v_declName_366_);
lean_dec_ref(v___x_365_);
v___x_367_ = lean_st_ref_get(v_a_352_);
v_env_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc_ref(v_env_368_);
lean_dec(v___x_367_);
v___x_369_ = 0;
v___x_370_ = l_Lean_Environment_find_x3f(v_env_368_, v_declName_366_, v___x_369_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_del_object(v___x_363_);
goto v___jp_354_;
}
else
{
lean_object* v_val_371_; 
v_val_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_val_371_);
lean_dec_ref(v___x_370_);
if (lean_obj_tag(v_val_371_) == 5)
{
lean_object* v_val_372_; lean_object* v_numIndices_373_; lean_object* v_ctors_374_; lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v_val_372_ = lean_ctor_get(v_val_371_, 0);
lean_inc_ref(v_val_372_);
lean_dec_ref(v_val_371_);
v_numIndices_373_ = lean_ctor_get(v_val_372_, 2);
lean_inc(v_numIndices_373_);
v_ctors_374_ = lean_ctor_get(v_val_372_, 4);
lean_inc(v_ctors_374_);
lean_dec_ref(v_val_372_);
v___x_375_ = l_List_lengthTR___redArg(v_ctors_374_);
lean_dec(v_ctors_374_);
v___x_376_ = lean_unsigned_to_nat(0u);
v___x_377_ = lean_nat_dec_eq(v___x_375_, v___x_376_);
lean_dec(v___x_375_);
if (v___x_377_ == 0)
{
uint8_t v___x_378_; lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_378_ = lean_nat_dec_lt(v___x_376_, v_numIndices_373_);
lean_dec(v_numIndices_373_);
v___x_379_ = lean_box(v___x_378_);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v___x_379_);
v___x_381_ = v___x_363_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
else
{
lean_object* v___x_383_; lean_object* v___x_385_; 
lean_dec(v_numIndices_373_);
v___x_383_ = lean_box(v___x_377_);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v___x_383_);
v___x_385_ = v___x_363_;
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
}
else
{
lean_dec(v_val_371_);
lean_del_object(v___x_363_);
goto v___jp_354_;
}
}
}
else
{
lean_dec_ref(v___x_365_);
lean_del_object(v___x_363_);
goto v___jp_354_;
}
}
}
else
{
lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
v_a_388_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_360_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_dec(v___x_360_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
else
{
lean_object* v_a_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_403_; 
v_a_396_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_403_ == 0)
{
v___x_398_ = v___x_358_;
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_a_396_);
lean_dec(v___x_358_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_403_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_401_; 
if (v_isShared_399_ == 0)
{
v___x_401_ = v___x_398_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v_a_396_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
v___jp_354_:
{
uint8_t v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_355_ = 0;
v___x_356_ = lean_box(v___x_355_);
v___x_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate___boxed(lean_object* v_fvarId_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v_fvarId_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
lean_dec(v_a_406_);
lean_dec_ref(v_a_405_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(lean_object* v_s_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_Meta_SavedState_restore___redArg(v_s_411_, v___y_414_, v___y_416_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0___boxed(lean_object* v_s_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_Meta_ElimEmptyInductive_instMonadBacktrackSavedStateM___lam__0(v_s_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
lean_dec(v___y_424_);
lean_dec_ref(v___y_423_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
lean_dec(v___y_420_);
lean_dec_ref(v_s_419_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(lean_object* v_x_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_){
_start:
{
lean_object* v___x_442_; 
lean_inc(v___y_436_);
v___x_442_ = lean_apply_6(v_x_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, lean_box(0));
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed(lean_object* v_x_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0(v_x_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
lean_dec(v___y_444_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(lean_object* v_mvarId_451_, lean_object* v_x_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v___f_459_; lean_object* v___x_460_; 
lean_inc(v___y_453_);
v___f_459_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_459_, 0, v_x_452_);
lean_closure_set(v___f_459_, 1, v___y_453_);
v___x_460_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_451_, v___f_459_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
if (lean_obj_tag(v___x_460_) == 0)
{
return v___x_460_;
}
else
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
v_a_461_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_460_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_460_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg___boxed(lean_object* v_mvarId_469_, lean_object* v_x_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_469_, v_x_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(lean_object* v_00_u03b1_478_, lean_object* v_mvarId_479_, lean_object* v_x_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_479_, v_x_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___boxed(lean_object* v_00_u03b1_488_, lean_object* v_mvarId_489_, lean_object* v_x_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1(v_00_u03b1_488_, v_mvarId_489_, v_x_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec(v___y_491_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(lean_object* v_x_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l_Lean_Meta_saveState___redArg(v___y_501_, v___y_503_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; lean_object* v___y_508_; lean_object* v___y_509_; uint8_t v___y_510_; lean_object* v___y_529_; lean_object* v_a_530_; lean_object* v___x_533_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
lean_inc(v_a_506_);
lean_dec_ref(v___x_505_);
lean_inc(v___y_503_);
lean_inc_ref(v___y_502_);
lean_inc(v___y_501_);
lean_inc_ref(v___y_500_);
lean_inc(v___y_499_);
v___x_533_ = lean_apply_6(v_x_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, lean_box(0));
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; uint8_t v___x_535_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
v___x_535_ = lean_unbox(v_a_534_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; 
lean_dec_ref(v___x_533_);
v___x_536_ = l_Lean_Meta_SavedState_restore___redArg(v_a_506_, v___y_501_, v___y_503_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_543_; 
lean_dec(v_a_506_);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_543_ == 0)
{
lean_object* v_unused_544_; 
v_unused_544_ = lean_ctor_get(v___x_536_, 0);
lean_dec(v_unused_544_);
v___x_538_ = v___x_536_;
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
else
{
lean_dec(v___x_536_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
lean_ctor_set(v___x_538_, 0, v_a_534_);
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_a_534_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
else
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_552_; 
lean_dec(v_a_534_);
v_a_545_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_552_ == 0)
{
v___x_547_ = v___x_536_;
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_536_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_552_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_550_; 
lean_inc(v_a_545_);
if (v_isShared_548_ == 0)
{
v___x_550_ = v___x_547_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_a_545_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
v___y_529_ = v___x_550_;
v_a_530_ = v_a_545_;
goto v___jp_528_;
}
}
}
}
else
{
lean_dec(v_a_534_);
lean_dec(v_a_506_);
return v___x_533_;
}
}
else
{
lean_object* v_a_553_; 
v_a_553_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_553_);
v___y_529_ = v___x_533_;
v_a_530_ = v_a_553_;
goto v___jp_528_;
}
v___jp_507_:
{
if (v___y_510_ == 0)
{
lean_object* v___x_511_; 
lean_dec_ref(v___y_508_);
v___x_511_ = l_Lean_Meta_SavedState_restore___redArg(v_a_506_, v___y_501_, v___y_503_);
lean_dec(v_a_506_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_518_; 
v_isSharedCheck_518_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_518_ == 0)
{
lean_object* v_unused_519_; 
v_unused_519_ = lean_ctor_get(v___x_511_, 0);
lean_dec(v_unused_519_);
v___x_513_ = v___x_511_;
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
else
{
lean_dec(v___x_511_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_518_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_516_; 
if (v_isShared_514_ == 0)
{
lean_ctor_set_tag(v___x_513_, 1);
lean_ctor_set(v___x_513_, 0, v___y_509_);
v___x_516_ = v___x_513_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v___y_509_);
v___x_516_ = v_reuseFailAlloc_517_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
return v___x_516_;
}
}
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_527_; 
lean_dec_ref(v___y_509_);
v_a_520_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_527_ == 0)
{
v___x_522_ = v___x_511_;
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v___x_511_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_527_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_525_; 
if (v_isShared_523_ == 0)
{
v___x_525_ = v___x_522_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_a_520_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
return v___x_525_;
}
}
}
}
else
{
lean_dec_ref(v___y_509_);
lean_dec(v_a_506_);
return v___y_508_;
}
}
v___jp_528_:
{
uint8_t v___x_531_; 
v___x_531_ = l_Lean_Exception_isInterrupt(v_a_530_);
if (v___x_531_ == 0)
{
uint8_t v___x_532_; 
lean_inc_ref(v_a_530_);
v___x_532_ = l_Lean_Exception_isRuntime(v_a_530_);
v___y_508_ = v___y_529_;
v___y_509_ = v_a_530_;
v___y_510_ = v___x_532_;
goto v___jp_507_;
}
else
{
v___y_508_ = v___y_529_;
v___y_509_ = v_a_530_;
v___y_510_ = v___x_531_;
goto v___jp_507_;
}
}
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec_ref(v_x_498_);
v_a_554_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_505_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_505_);
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
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4___boxed(lean_object* v_x_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(v_x_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(lean_object* v_msgData_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
lean_object* v___x_576_; lean_object* v_env_577_; lean_object* v___x_578_; lean_object* v_mctx_579_; lean_object* v_lctx_580_; lean_object* v_options_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_576_ = lean_st_ref_get(v___y_574_);
v_env_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc_ref(v_env_577_);
lean_dec(v___x_576_);
v___x_578_ = lean_st_ref_get(v___y_572_);
v_mctx_579_ = lean_ctor_get(v___x_578_, 0);
lean_inc_ref(v_mctx_579_);
lean_dec(v___x_578_);
v_lctx_580_ = lean_ctor_get(v___y_571_, 2);
v_options_581_ = lean_ctor_get(v___y_573_, 2);
lean_inc_ref(v_options_581_);
lean_inc_ref(v_lctx_580_);
v___x_582_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_582_, 0, v_env_577_);
lean_ctor_set(v___x_582_, 1, v_mctx_579_);
lean_ctor_set(v___x_582_, 2, v_lctx_580_);
lean_ctor_set(v___x_582_, 3, v_options_581_);
v___x_583_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
lean_ctor_set(v___x_583_, 1, v_msgData_570_);
v___x_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3___boxed(lean_object* v_msgData_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(v_msgData_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
return v_res_591_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_592_; double v___x_593_; 
v___x_592_ = lean_unsigned_to_nat(0u);
v___x_593_ = lean_float_of_nat(v___x_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(lean_object* v_cls_597_, lean_object* v_msg_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_ref_604_; lean_object* v___x_605_; lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_650_; 
v_ref_604_ = lean_ctor_get(v___y_601_, 5);
v___x_605_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3_spec__3(v_msg_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_);
v_a_606_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_650_ == 0)
{
v___x_608_ = v___x_605_;
v_isShared_609_ = v_isSharedCheck_650_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_605_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_650_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v_traceState_611_; lean_object* v_env_612_; lean_object* v_nextMacroScope_613_; lean_object* v_ngen_614_; lean_object* v_auxDeclNGen_615_; lean_object* v_cache_616_; lean_object* v_messages_617_; lean_object* v_infoState_618_; lean_object* v_snapshotTasks_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_649_; 
v___x_610_ = lean_st_ref_take(v___y_602_);
v_traceState_611_ = lean_ctor_get(v___x_610_, 4);
v_env_612_ = lean_ctor_get(v___x_610_, 0);
v_nextMacroScope_613_ = lean_ctor_get(v___x_610_, 1);
v_ngen_614_ = lean_ctor_get(v___x_610_, 2);
v_auxDeclNGen_615_ = lean_ctor_get(v___x_610_, 3);
v_cache_616_ = lean_ctor_get(v___x_610_, 5);
v_messages_617_ = lean_ctor_get(v___x_610_, 6);
v_infoState_618_ = lean_ctor_get(v___x_610_, 7);
v_snapshotTasks_619_ = lean_ctor_get(v___x_610_, 8);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_649_ == 0)
{
v___x_621_ = v___x_610_;
v_isShared_622_ = v_isSharedCheck_649_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_snapshotTasks_619_);
lean_inc(v_infoState_618_);
lean_inc(v_messages_617_);
lean_inc(v_cache_616_);
lean_inc(v_traceState_611_);
lean_inc(v_auxDeclNGen_615_);
lean_inc(v_ngen_614_);
lean_inc(v_nextMacroScope_613_);
lean_inc(v_env_612_);
lean_dec(v___x_610_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_649_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
uint64_t v_tid_623_; lean_object* v_traces_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_648_; 
v_tid_623_ = lean_ctor_get_uint64(v_traceState_611_, sizeof(void*)*1);
v_traces_624_ = lean_ctor_get(v_traceState_611_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v_traceState_611_);
if (v_isSharedCheck_648_ == 0)
{
v___x_626_ = v_traceState_611_;
v_isShared_627_ = v_isSharedCheck_648_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_traces_624_);
lean_dec(v_traceState_611_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_648_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; double v___x_629_; uint8_t v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_628_ = lean_box(0);
v___x_629_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__0);
v___x_630_ = 0;
v___x_631_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__1));
v___x_632_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_632_, 0, v_cls_597_);
lean_ctor_set(v___x_632_, 1, v___x_628_);
lean_ctor_set(v___x_632_, 2, v___x_631_);
lean_ctor_set_float(v___x_632_, sizeof(void*)*3, v___x_629_);
lean_ctor_set_float(v___x_632_, sizeof(void*)*3 + 8, v___x_629_);
lean_ctor_set_uint8(v___x_632_, sizeof(void*)*3 + 16, v___x_630_);
v___x_633_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___closed__2));
v___x_634_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_634_, 0, v___x_632_);
lean_ctor_set(v___x_634_, 1, v_a_606_);
lean_ctor_set(v___x_634_, 2, v___x_633_);
lean_inc(v_ref_604_);
v___x_635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_635_, 0, v_ref_604_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = l_Lean_PersistentArray_push___redArg(v_traces_624_, v___x_635_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v___x_636_);
v___x_638_ = v___x_626_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_636_);
lean_ctor_set_uint64(v_reuseFailAlloc_647_, sizeof(void*)*1, v_tid_623_);
v___x_638_ = v_reuseFailAlloc_647_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_640_; 
if (v_isShared_622_ == 0)
{
lean_ctor_set(v___x_621_, 4, v___x_638_);
v___x_640_ = v___x_621_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_env_612_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_nextMacroScope_613_);
lean_ctor_set(v_reuseFailAlloc_646_, 2, v_ngen_614_);
lean_ctor_set(v_reuseFailAlloc_646_, 3, v_auxDeclNGen_615_);
lean_ctor_set(v_reuseFailAlloc_646_, 4, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_646_, 5, v_cache_616_);
lean_ctor_set(v_reuseFailAlloc_646_, 6, v_messages_617_);
lean_ctor_set(v_reuseFailAlloc_646_, 7, v_infoState_618_);
lean_ctor_set(v_reuseFailAlloc_646_, 8, v_snapshotTasks_619_);
v___x_640_ = v_reuseFailAlloc_646_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_641_ = lean_st_ref_set(v___y_602_, v___x_640_);
v___x_642_ = lean_box(0);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 0, v___x_642_);
v___x_644_ = v___x_608_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_642_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg___boxed(lean_object* v_cls_651_, lean_object* v_msg_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v_cls_651_, v_msg_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v___y_654_);
lean_dec_ref(v___y_653_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed(lean_object* v_toInductionSubgoal_666_, lean_object* v_mvarId_667_, lean_object* v_fields_668_, lean_object* v_sz_669_, lean_object* v___x_670_, lean_object* v___x_671_, lean_object* v___x_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
size_t v_sz_boxed_679_; size_t v___x_18101__boxed_680_; uint8_t v___x_18103__boxed_681_; lean_object* v_res_682_; 
v_sz_boxed_679_ = lean_unbox_usize(v_sz_669_);
lean_dec(v_sz_669_);
v___x_18101__boxed_680_ = lean_unbox_usize(v___x_670_);
lean_dec(v___x_670_);
v___x_18103__boxed_681_ = lean_unbox(v___x_672_);
v_res_682_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(v_toInductionSubgoal_666_, v_mvarId_667_, v_fields_668_, v_sz_boxed_679_, v___x_18101__boxed_680_, v___x_671_, v___x_18103__boxed_681_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec(v___y_673_);
lean_dec_ref(v_fields_668_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(lean_object* v_val_683_, lean_object* v_as_684_, size_t v_sz_685_, size_t v_i_686_, lean_object* v_b_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
uint8_t v___x_694_; 
v___x_694_ = lean_usize_dec_lt(v_i_686_, v_sz_685_);
if (v___x_694_ == 0)
{
lean_object* v___x_695_; 
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v_b_687_);
return v___x_695_;
}
else
{
lean_object* v_a_696_; lean_object* v_toInductionSubgoal_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_738_; 
lean_dec_ref(v_b_687_);
v_a_696_ = lean_array_uget(v_as_684_, v_i_686_);
v_toInductionSubgoal_697_ = lean_ctor_get(v_a_696_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v_a_696_);
if (v_isSharedCheck_738_ == 0)
{
lean_object* v_unused_739_; 
v_unused_739_ = lean_ctor_get(v_a_696_, 1);
lean_dec(v_unused_739_);
v___x_699_ = v_a_696_;
v_isShared_700_ = v_isSharedCheck_738_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_toInductionSubgoal_697_);
lean_dec(v_a_696_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_738_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v_mvarId_701_; lean_object* v_fields_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; uint8_t v___x_706_; size_t v_sz_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___f_711_; lean_object* v___x_712_; 
v_mvarId_701_ = lean_ctor_get(v_toInductionSubgoal_697_, 0);
lean_inc_n(v_mvarId_701_, 2);
v_fields_702_ = lean_ctor_get(v_toInductionSubgoal_697_, 1);
lean_inc_ref(v_fields_702_);
v___x_703_ = lean_box(0);
v___x_704_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v___x_705_ = lean_unsigned_to_nat(0u);
v___x_706_ = lean_nat_dec_eq(v_val_683_, v___x_705_);
v_sz_707_ = lean_array_size(v_fields_702_);
v___x_708_ = lean_box_usize(v_sz_707_);
v___x_709_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed__const__1));
v___x_710_ = lean_box(v___x_706_);
v___f_711_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0___boxed), 13, 7);
lean_closure_set(v___f_711_, 0, v_toInductionSubgoal_697_);
lean_closure_set(v___f_711_, 1, v_mvarId_701_);
lean_closure_set(v___f_711_, 2, v_fields_702_);
lean_closure_set(v___f_711_, 3, v___x_708_);
lean_closure_set(v___f_711_, 4, v___x_709_);
lean_closure_set(v___f_711_, 5, v___x_704_);
lean_closure_set(v___f_711_, 6, v___x_710_);
v___x_712_ = l_Lean_MVarId_withContext___at___00Lean_Meta_ElimEmptyInductive_elim_spec__1___redArg(v_mvarId_701_, v___f_711_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_729_; 
v_a_713_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_729_ == 0)
{
v___x_715_ = v___x_712_;
v_isShared_716_ = v_isSharedCheck_729_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_712_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_729_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
uint8_t v___x_717_; 
v___x_717_ = lean_unbox(v_a_713_);
lean_dec(v_a_713_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_721_; 
v___x_718_ = lean_box(v___x_706_);
v___x_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_719_, 0, v___x_718_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 1, v___x_703_);
lean_ctor_set(v___x_699_, 0, v___x_719_);
v___x_721_ = v___x_699_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_719_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v___x_703_);
v___x_721_ = v_reuseFailAlloc_725_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
lean_object* v___x_723_; 
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 0, v___x_721_);
v___x_723_ = v___x_715_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_721_);
v___x_723_ = v_reuseFailAlloc_724_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
return v___x_723_;
}
}
}
else
{
size_t v___x_726_; size_t v___x_727_; 
lean_del_object(v___x_715_);
lean_del_object(v___x_699_);
v___x_726_ = ((size_t)1ULL);
v___x_727_ = lean_usize_add(v_i_686_, v___x_726_);
v_i_686_ = v___x_727_;
v_b_687_ = v___x_704_;
goto _start;
}
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_del_object(v___x_699_);
v_a_730_ = lean_ctor_get(v___x_712_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_712_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_712_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_750_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_751_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__6));
v___x_752_ = l_Lean_Name_append(v___x_751_, v___x_750_);
return v___x_752_;
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__0));
v___x_755_ = l_Lean_stringToMessageData(v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0(lean_object* v_mvarId_756_, lean_object* v_fvarId_757_, lean_object* v___x_758_, uint8_t v___x_759_, lean_object* v___x_760_, lean_object* v_val_761_, uint8_t v___x_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
lean_object* v___x_769_; 
v___x_769_ = l_Lean_MVarId_cases(v_mvarId_756_, v_fvarId_757_, v___x_758_, v___x_759_, v___x_760_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___y_772_; lean_object* v___y_773_; lean_object* v___y_774_; lean_object* v___y_775_; lean_object* v___y_776_; lean_object* v_options_803_; uint8_t v_hasTrace_804_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref(v___x_769_);
v_options_803_ = lean_ctor_get(v___y_766_, 2);
v_hasTrace_804_ = lean_ctor_get_uint8(v_options_803_, sizeof(void*)*1);
if (v_hasTrace_804_ == 0)
{
v___y_772_ = v___y_763_;
v___y_773_ = v___y_764_;
v___y_774_ = v___y_765_;
v___y_775_ = v___y_766_;
v___y_776_ = v___y_767_;
goto v___jp_771_;
}
else
{
lean_object* v_inheritedTraceOptions_805_; lean_object* v___x_806_; lean_object* v___x_807_; uint8_t v___x_808_; 
v_inheritedTraceOptions_805_ = lean_ctor_get(v___y_766_, 13);
v___x_806_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_807_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_808_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_805_, v_options_803_, v___x_807_);
if (v___x_808_ == 0)
{
v___y_772_ = v___y_763_;
v___y_773_ = v___y_764_;
v___y_774_ = v___y_765_;
v___y_775_ = v___y_766_;
v___y_776_ = v___y_767_;
goto v___jp_771_;
}
else
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_809_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1, &l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___lam__0___closed__1);
v___x_810_ = lean_array_get_size(v_a_770_);
v___x_811_ = l_Nat_reprFast(v___x_810_);
v___x_812_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
v___x_813_ = l_Lean_MessageData_ofFormat(v___x_812_);
v___x_814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_814_, 0, v___x_809_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
v___x_815_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_806_, v___x_814_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_dec_ref(v___x_815_);
v___y_772_ = v___y_763_;
v___y_773_ = v___y_764_;
v___y_774_ = v___y_765_;
v___y_775_ = v___y_766_;
v___y_776_ = v___y_767_;
goto v___jp_771_;
}
else
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_823_; 
lean_dec(v_a_770_);
v_a_816_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_823_ == 0)
{
v___x_818_ = v___x_815_;
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_815_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_821_; 
if (v_isShared_819_ == 0)
{
v___x_821_ = v___x_818_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_a_816_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
}
}
v___jp_771_:
{
lean_object* v___x_777_; size_t v_sz_778_; size_t v___x_779_; lean_object* v___x_780_; 
v___x_777_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v_sz_778_ = lean_array_size(v_a_770_);
v___x_779_ = ((size_t)0ULL);
v___x_780_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(v_val_761_, v_a_770_, v_sz_778_, v___x_779_, v___x_777_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_);
lean_dec(v_a_770_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_794_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_794_ == 0)
{
v___x_783_ = v___x_780_;
v_isShared_784_ = v_isSharedCheck_794_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_780_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_794_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v_fst_785_; 
v_fst_785_ = lean_ctor_get(v_a_781_, 0);
lean_inc(v_fst_785_);
lean_dec(v_a_781_);
if (lean_obj_tag(v_fst_785_) == 0)
{
lean_object* v___x_786_; lean_object* v___x_788_; 
v___x_786_ = lean_box(v___x_762_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v___x_786_);
v___x_788_ = v___x_783_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v___x_786_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
else
{
lean_object* v_val_790_; lean_object* v___x_792_; 
v_val_790_ = lean_ctor_get(v_fst_785_, 0);
lean_inc(v_val_790_);
lean_dec_ref(v_fst_785_);
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v_val_790_);
v___x_792_ = v___x_783_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_val_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
v_a_795_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_780_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_780_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
}
else
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_868_; 
v_a_824_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_868_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_868_ == 0)
{
v___x_826_ = v___x_769_;
v_isShared_827_ = v_isSharedCheck_868_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_769_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_868_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
uint8_t v___y_829_; uint8_t v___x_866_; 
v___x_866_ = l_Lean_Exception_isInterrupt(v_a_824_);
if (v___x_866_ == 0)
{
uint8_t v___x_867_; 
lean_inc(v_a_824_);
v___x_867_ = l_Lean_Exception_isRuntime(v_a_824_);
v___y_829_ = v___x_867_;
goto v___jp_828_;
}
else
{
v___y_829_ = v___x_866_;
goto v___jp_828_;
}
v___jp_828_:
{
if (v___y_829_ == 0)
{
lean_object* v_options_830_; uint8_t v_hasTrace_831_; 
v_options_830_ = lean_ctor_get(v___y_766_, 2);
v_hasTrace_831_ = lean_ctor_get_uint8(v_options_830_, sizeof(void*)*1);
if (v_hasTrace_831_ == 0)
{
lean_object* v___x_832_; lean_object* v___x_834_; 
lean_dec(v_a_824_);
v___x_832_ = lean_box(v___x_759_);
if (v_isShared_827_ == 0)
{
lean_ctor_set_tag(v___x_826_, 0);
lean_ctor_set(v___x_826_, 0, v___x_832_);
v___x_834_ = v___x_826_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v___x_832_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
else
{
lean_object* v_inheritedTraceOptions_836_; lean_object* v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; 
v_inheritedTraceOptions_836_ = lean_ctor_get(v___y_766_, 13);
v___x_837_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_838_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_839_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_836_, v_options_830_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; lean_object* v___x_842_; 
lean_dec(v_a_824_);
v___x_840_ = lean_box(v___x_759_);
if (v_isShared_827_ == 0)
{
lean_ctor_set_tag(v___x_826_, 0);
lean_ctor_set(v___x_826_, 0, v___x_840_);
v___x_842_ = v___x_826_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___x_840_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
else
{
lean_object* v___x_844_; lean_object* v___x_845_; 
lean_del_object(v___x_826_);
v___x_844_ = l_Lean_Exception_toMessageData(v_a_824_);
v___x_845_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_837_, v___x_844_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
if (lean_obj_tag(v___x_845_) == 0)
{
lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_853_; 
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_853_ == 0)
{
lean_object* v_unused_854_; 
v_unused_854_ = lean_ctor_get(v___x_845_, 0);
lean_dec(v_unused_854_);
v___x_847_ = v___x_845_;
v_isShared_848_ = v_isSharedCheck_853_;
goto v_resetjp_846_;
}
else
{
lean_dec(v___x_845_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_853_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_849_; lean_object* v___x_851_; 
v___x_849_ = lean_box(v___x_759_);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 0, v___x_849_);
v___x_851_ = v___x_847_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v___x_849_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
else
{
lean_object* v_a_855_; lean_object* v___x_857_; uint8_t v_isShared_858_; uint8_t v_isSharedCheck_862_; 
v_a_855_ = lean_ctor_get(v___x_845_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_862_ == 0)
{
v___x_857_ = v___x_845_;
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
else
{
lean_inc(v_a_855_);
lean_dec(v___x_845_);
v___x_857_ = lean_box(0);
v_isShared_858_ = v_isSharedCheck_862_;
goto v_resetjp_856_;
}
v_resetjp_856_:
{
lean_object* v___x_860_; 
if (v_isShared_858_ == 0)
{
v___x_860_ = v___x_857_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_a_855_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
}
}
else
{
lean_object* v___x_864_; 
if (v_isShared_827_ == 0)
{
v___x_864_ = v___x_826_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_824_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed(lean_object* v_mvarId_869_, lean_object* v_fvarId_870_, lean_object* v___x_871_, lean_object* v___x_872_, lean_object* v___x_873_, lean_object* v_val_874_, lean_object* v___x_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
uint8_t v___x_18223__boxed_882_; uint8_t v___x_18226__boxed_883_; lean_object* v_res_884_; 
v___x_18223__boxed_882_ = lean_unbox(v___x_872_);
v___x_18226__boxed_883_ = lean_unbox(v___x_875_);
v_res_884_ = l_Lean_Meta_ElimEmptyInductive_elim___lam__0(v_mvarId_869_, v_fvarId_870_, v___x_871_, v___x_18223__boxed_882_, v___x_873_, v_val_874_, v___x_18226__boxed_883_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec(v___y_876_);
lean_dec(v_val_874_);
return v_res_884_;
}
}
static lean_object* _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__9(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; 
v___x_886_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__8));
v___x_887_ = l_Lean_stringToMessageData(v___x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim(lean_object* v_mvarId_888_, lean_object* v_fvarId_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_){
_start:
{
lean_object* v___x_900_; lean_object* v___x_901_; uint8_t v___x_902_; 
v___x_900_ = lean_st_ref_get(v_a_890_);
v___x_901_ = lean_unsigned_to_nat(0u);
v___x_902_ = lean_nat_dec_eq(v___x_900_, v___x_901_);
if (v___x_902_ == 0)
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; uint8_t v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___f_912_; lean_object* v___x_913_; 
v___x_903_ = lean_st_ref_take(v_a_890_);
v___x_904_ = lean_unsigned_to_nat(1u);
v___x_905_ = lean_nat_sub(v___x_903_, v___x_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_st_ref_set(v_a_890_, v___x_905_);
v___x_907_ = 1;
v___x_908_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__0));
v___x_909_ = lean_box(0);
v___x_910_ = lean_box(v___x_902_);
v___x_911_ = lean_box(v___x_907_);
v___f_912_ = lean_alloc_closure((void*)(l_Lean_Meta_ElimEmptyInductive_elim___lam__0___boxed), 13, 7);
lean_closure_set(v___f_912_, 0, v_mvarId_888_);
lean_closure_set(v___f_912_, 1, v_fvarId_889_);
lean_closure_set(v___f_912_, 2, v___x_908_);
lean_closure_set(v___f_912_, 3, v___x_910_);
lean_closure_set(v___f_912_, 4, v___x_909_);
lean_closure_set(v___f_912_, 5, v___x_900_);
lean_closure_set(v___f_912_, 6, v___x_911_);
v___x_913_ = l_Lean_commitWhen___at___00Lean_Meta_ElimEmptyInductive_elim_spec__4(v___f_912_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_);
return v___x_913_;
}
else
{
lean_object* v_options_914_; uint8_t v_hasTrace_915_; 
lean_dec(v___x_900_);
lean_dec(v_fvarId_889_);
lean_dec(v_mvarId_888_);
v_options_914_ = lean_ctor_get(v_a_893_, 2);
v_hasTrace_915_ = lean_ctor_get_uint8(v_options_914_, sizeof(void*)*1);
if (v_hasTrace_915_ == 0)
{
goto v___jp_896_;
}
else
{
lean_object* v_inheritedTraceOptions_916_; lean_object* v___x_917_; lean_object* v___x_918_; uint8_t v___x_919_; 
v_inheritedTraceOptions_916_ = lean_ctor_get(v_a_893_, 13);
v___x_917_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_918_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__7, &l_Lean_Meta_ElimEmptyInductive_elim___closed__7_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__7);
v___x_919_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_916_, v_options_914_, v___x_918_);
if (v___x_919_ == 0)
{
goto v___jp_896_;
}
else
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_obj_once(&l_Lean_Meta_ElimEmptyInductive_elim___closed__9, &l_Lean_Meta_ElimEmptyInductive_elim___closed__9_once, _init_l_Lean_Meta_ElimEmptyInductive_elim___closed__9);
v___x_921_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v___x_917_, v___x_920_, v_a_891_, v_a_892_, v_a_893_, v_a_894_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_dec_ref(v___x_921_);
goto v___jp_896_;
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
}
v___jp_896_:
{
uint8_t v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_897_ = 0;
v___x_898_ = lean_box(v___x_897_);
v___x_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(lean_object* v___x_930_, lean_object* v___x_931_, lean_object* v_as_932_, size_t v_sz_933_, size_t v_i_934_, lean_object* v_b_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v_a_943_; uint8_t v___x_947_; 
v___x_947_ = lean_usize_dec_lt(v_i_934_, v_sz_933_);
if (v___x_947_ == 0)
{
lean_object* v___x_948_; 
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v___x_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_948_, 0, v_b_935_);
return v___x_948_;
}
else
{
lean_object* v_subst_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v_a_952_; lean_object* v___x_953_; uint8_t v___x_954_; 
lean_dec_ref(v_b_935_);
v_subst_949_ = lean_ctor_get(v___x_930_, 2);
v___x_950_ = lean_box(0);
v___x_951_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v_a_952_ = lean_array_uget_borrowed(v_as_932_, v_i_934_);
lean_inc(v_subst_949_);
v___x_953_ = l_Lean_Meta_FVarSubst_apply(v_subst_949_, v_a_952_);
v___x_954_ = l_Lean_Expr_isFVar(v___x_953_);
if (v___x_954_ == 0)
{
lean_dec_ref(v___x_953_);
v_a_943_ = v___x_951_;
goto v___jp_942_;
}
else
{
lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_955_ = l_Lean_Expr_fvarId_x21(v___x_953_);
lean_dec_ref(v___x_953_);
lean_inc(v___x_955_);
v___x_956_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v___x_955_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v_a_957_; uint8_t v___x_958_; 
v_a_957_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_a_957_);
lean_dec_ref(v___x_956_);
v___x_958_ = lean_unbox(v_a_957_);
lean_dec(v_a_957_);
if (v___x_958_ == 0)
{
lean_dec(v___x_955_);
v_a_943_ = v___x_951_;
goto v___jp_942_;
}
else
{
lean_object* v___x_959_; 
lean_inc(v___x_931_);
v___x_959_ = l_Lean_Meta_ElimEmptyInductive_elim(v___x_931_, v___x_955_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_970_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_970_ == 0)
{
v___x_962_ = v___x_959_;
v_isShared_963_ = v_isSharedCheck_970_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_959_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_970_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
uint8_t v___x_964_; 
v___x_964_ = lean_unbox(v_a_960_);
if (v___x_964_ == 0)
{
lean_del_object(v___x_962_);
lean_dec(v_a_960_);
v_a_943_ = v___x_951_;
goto v___jp_942_;
}
else
{
lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_968_; 
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v___x_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_965_, 0, v_a_960_);
v___x_966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
lean_ctor_set(v___x_966_, 1, v___x_950_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 0, v___x_966_);
v___x_968_ = v___x_962_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v___x_966_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v_a_971_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_959_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_959_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
else
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
lean_dec(v___x_955_);
lean_dec(v___x_931_);
lean_dec_ref(v___x_930_);
v_a_979_ = lean_ctor_get(v___x_956_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_956_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_956_);
v___x_981_ = lean_box(0);
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
v_resetjp_980_:
{
lean_object* v___x_984_; 
if (v_isShared_982_ == 0)
{
v___x_984_ = v___x_981_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_979_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
}
v___jp_942_:
{
size_t v___x_944_; size_t v___x_945_; 
v___x_944_ = ((size_t)1ULL);
v___x_945_ = lean_usize_add(v_i_934_, v___x_944_);
lean_inc_ref(v_a_943_);
v_i_934_ = v___x_945_;
v_b_935_ = v_a_943_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___lam__0(lean_object* v_toInductionSubgoal_987_, lean_object* v_mvarId_988_, lean_object* v_fields_989_, size_t v_sz_990_, size_t v___x_991_, lean_object* v___x_992_, uint8_t v___x_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(v_toInductionSubgoal_987_, v_mvarId_988_, v_fields_989_, v_sz_990_, v___x_991_, v___x_992_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1014_; 
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1003_ = v___x_1000_;
v_isShared_1004_ = v_isSharedCheck_1014_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_1000_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1014_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v_fst_1005_; 
v_fst_1005_ = lean_ctor_get(v_a_1001_, 0);
lean_inc(v_fst_1005_);
lean_dec(v_a_1001_);
if (lean_obj_tag(v_fst_1005_) == 0)
{
lean_object* v___x_1006_; lean_object* v___x_1008_; 
v___x_1006_ = lean_box(v___x_993_);
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 0, v___x_1006_);
v___x_1008_ = v___x_1003_;
goto v_reusejp_1007_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v___x_1006_);
v___x_1008_ = v_reuseFailAlloc_1009_;
goto v_reusejp_1007_;
}
v_reusejp_1007_:
{
return v___x_1008_;
}
}
else
{
lean_object* v_val_1010_; lean_object* v___x_1012_; 
v_val_1010_ = lean_ctor_get(v_fst_1005_, 0);
lean_inc(v_val_1010_);
lean_dec_ref(v_fst_1005_);
if (v_isShared_1004_ == 0)
{
lean_ctor_set(v___x_1003_, 0, v_val_1010_);
v___x_1012_ = v___x_1003_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_val_1010_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
v_a_1015_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_1000_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1000_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___boxed(lean_object* v_val_1023_, lean_object* v_as_1024_, lean_object* v_sz_1025_, lean_object* v_i_1026_, lean_object* v_b_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
size_t v_sz_boxed_1034_; size_t v_i_boxed_1035_; lean_object* v_res_1036_; 
v_sz_boxed_1034_ = lean_unbox_usize(v_sz_1025_);
lean_dec(v_sz_1025_);
v_i_boxed_1035_ = lean_unbox_usize(v_i_1026_);
lean_dec(v_i_1026_);
v_res_1036_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2(v_val_1023_, v_as_1024_, v_sz_boxed_1034_, v_i_boxed_1035_, v_b_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v_as_1024_);
lean_dec(v_val_1023_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0___boxed(lean_object* v___x_1037_, lean_object* v___x_1038_, lean_object* v_as_1039_, lean_object* v_sz_1040_, lean_object* v_i_1041_, lean_object* v_b_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
size_t v_sz_boxed_1049_; size_t v_i_boxed_1050_; lean_object* v_res_1051_; 
v_sz_boxed_1049_ = lean_unbox_usize(v_sz_1040_);
lean_dec(v_sz_1040_);
v_i_boxed_1050_ = lean_unbox_usize(v_i_1041_);
lean_dec(v_i_1041_);
v_res_1051_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__0(v___x_1037_, v___x_1038_, v_as_1039_, v_sz_boxed_1049_, v_i_boxed_1050_, v_b_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v_as_1039_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ElimEmptyInductive_elim___boxed(lean_object* v_mvarId_1052_, lean_object* v_fvarId_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Lean_Meta_ElimEmptyInductive_elim(v_mvarId_1052_, v_fvarId_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_);
lean_dec(v_a_1058_);
lean_dec_ref(v_a_1057_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
lean_dec(v_a_1054_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(lean_object* v_cls_1061_, lean_object* v_msg_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___redArg(v_cls_1061_, v_msg_1062_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3___boxed(lean_object* v_cls_1070_, lean_object* v_msg_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lean_addTrace___at___00Lean_Meta_ElimEmptyInductive_elim_spec__3(v_cls_1070_, v_msg_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(lean_object* v_x_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_Lean_Meta_saveState___redArg(v___y_1081_, v___y_1083_);
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; lean_object* v___y_1088_; lean_object* v___y_1089_; uint8_t v___y_1090_; lean_object* v___y_1109_; lean_object* v_a_1110_; lean_object* v___x_1113_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref(v___x_1085_);
lean_inc(v___y_1083_);
lean_inc_ref(v___y_1082_);
lean_inc(v___y_1081_);
lean_inc_ref(v___y_1080_);
v___x_1113_ = lean_apply_5(v_x_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, lean_box(0));
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v_a_1114_; uint8_t v___x_1115_; 
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_a_1114_);
v___x_1115_ = lean_unbox(v_a_1114_);
if (v___x_1115_ == 0)
{
lean_object* v___x_1116_; 
lean_dec_ref(v___x_1113_);
v___x_1116_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1086_, v___y_1081_, v___y_1083_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
lean_dec(v_a_1086_);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1123_ == 0)
{
lean_object* v_unused_1124_; 
v_unused_1124_ = lean_ctor_get(v___x_1116_, 0);
lean_dec(v_unused_1124_);
v___x_1118_ = v___x_1116_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_dec(v___x_1116_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v_a_1114_);
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1114_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
else
{
lean_object* v_a_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
lean_dec(v_a_1114_);
v_a_1125_ = lean_ctor_get(v___x_1116_, 0);
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1132_ == 0)
{
v___x_1127_ = v___x_1116_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_inc(v_a_1125_);
lean_dec(v___x_1116_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
lean_inc(v_a_1125_);
if (v_isShared_1128_ == 0)
{
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1125_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
v___y_1109_ = v___x_1130_;
v_a_1110_ = v_a_1125_;
goto v___jp_1108_;
}
}
}
}
else
{
lean_dec(v_a_1114_);
lean_dec(v_a_1086_);
return v___x_1113_;
}
}
else
{
lean_object* v_a_1133_; 
v_a_1133_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_a_1133_);
v___y_1109_ = v___x_1113_;
v_a_1110_ = v_a_1133_;
goto v___jp_1108_;
}
v___jp_1087_:
{
if (v___y_1090_ == 0)
{
lean_object* v___x_1091_; 
lean_dec_ref(v___y_1089_);
v___x_1091_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1086_, v___y_1081_, v___y_1083_);
lean_dec(v_a_1086_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1098_ == 0)
{
lean_object* v_unused_1099_; 
v_unused_1099_ = lean_ctor_get(v___x_1091_, 0);
lean_dec(v_unused_1099_);
v___x_1093_ = v___x_1091_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_dec(v___x_1091_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
lean_ctor_set_tag(v___x_1093_, 1);
lean_ctor_set(v___x_1093_, 0, v___y_1088_);
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v___y_1088_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_dec_ref(v___y_1088_);
v_a_1100_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1091_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1091_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
else
{
lean_dec_ref(v___y_1088_);
lean_dec(v_a_1086_);
return v___y_1089_;
}
}
v___jp_1108_:
{
uint8_t v___x_1111_; 
v___x_1111_ = l_Lean_Exception_isInterrupt(v_a_1110_);
if (v___x_1111_ == 0)
{
uint8_t v___x_1112_; 
lean_inc_ref(v_a_1110_);
v___x_1112_ = l_Lean_Exception_isRuntime(v_a_1110_);
v___y_1088_ = v_a_1110_;
v___y_1089_ = v___y_1109_;
v___y_1090_ = v___x_1112_;
goto v___jp_1087_;
}
else
{
v___y_1088_ = v_a_1110_;
v___y_1089_ = v___y_1109_;
v___y_1090_ = v___x_1111_;
goto v___jp_1087_;
}
}
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1141_; 
lean_dec_ref(v_x_1079_);
v_a_1134_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1136_ = v___x_1085_;
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1085_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1134_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0___boxed(lean_object* v_x_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(v_x_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_);
lean_dec(v___y_1146_);
lean_dec_ref(v___y_1145_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(lean_object* v_mvarId_1149_, lean_object* v_x_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v___x_1156_; 
v___x_1156_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1149_, v_x_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_);
if (lean_obj_tag(v___x_1156_) == 0)
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
v_a_1157_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v___x_1156_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1156_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
else
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
v_a_1165_ = lean_ctor_get(v___x_1156_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1156_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1167_ = v___x_1156_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1156_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg___boxed(lean_object* v_mvarId_1173_, lean_object* v_x_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1173_, v_x_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(lean_object* v_00_u03b1_1181_, lean_object* v_mvarId_1182_, lean_object* v_x_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_){
_start:
{
lean_object* v___x_1189_; 
v___x_1189_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1182_, v_x_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___boxed(lean_object* v_00_u03b1_1190_, lean_object* v_mvarId_1191_, lean_object* v_x_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1(v_00_u03b1_1190_, v_mvarId_1191_, v_x_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(lean_object* v_mvarId_1199_, lean_object* v_fuel_1200_, lean_object* v_fvarId_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = l_Lean_MVarId_exfalso(v_mvarId_1199_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_);
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
lean_inc(v_a_1208_);
lean_dec_ref(v___x_1207_);
v___x_1209_ = lean_st_mk_ref(v_fuel_1200_);
v___x_1210_ = l_Lean_Meta_ElimEmptyInductive_elim(v_a_1208_, v_fvarId_1201_, v___x_1209_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1219_; 
v_a_1211_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1213_ = v___x_1210_;
v_isShared_1214_ = v_isSharedCheck_1219_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1210_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1219_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1215_; lean_object* v___x_1217_; 
v___x_1215_ = lean_st_ref_get(v___x_1209_);
lean_dec(v___x_1209_);
lean_dec(v___x_1215_);
if (v_isShared_1214_ == 0)
{
v___x_1217_ = v___x_1213_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1211_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
else
{
lean_dec(v___x_1209_);
return v___x_1210_;
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
lean_dec(v_fvarId_1201_);
lean_dec(v_fuel_1200_);
v_a_1220_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___x_1207_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1207_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed(lean_object* v_mvarId_1228_, lean_object* v_fuel_1229_, lean_object* v_fvarId_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0(v_mvarId_1228_, v_fuel_1229_, v_fvarId_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(lean_object* v_fvarId_1237_, lean_object* v___f_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isElimEmptyInductiveCandidate(v_fvarId_1237_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; uint8_t v___x_1246_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
v___x_1246_ = lean_unbox(v_a_1245_);
lean_dec(v_a_1245_);
if (v___x_1246_ == 0)
{
lean_dec_ref(v___f_1238_);
return v___x_1244_;
}
else
{
lean_object* v___x_1247_; 
lean_dec_ref(v___x_1244_);
v___x_1247_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__0(v___f_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_);
return v___x_1247_;
}
}
else
{
lean_dec_ref(v___f_1238_);
return v___x_1244_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed(lean_object* v_fvarId_1248_, lean_object* v___f_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v_res_1255_; 
v_res_1255_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1(v_fvarId_1248_, v___f_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(lean_object* v_mvarId_1256_, lean_object* v_fvarId_1257_, lean_object* v_fuel_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_){
_start:
{
lean_object* v___f_1264_; lean_object* v___f_1265_; lean_object* v___x_1266_; 
lean_inc(v_fvarId_1257_);
lean_inc(v_mvarId_1256_);
v___f_1264_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1264_, 0, v_mvarId_1256_);
lean_closure_set(v___f_1264_, 1, v_fuel_1258_);
lean_closure_set(v___f_1264_, 2, v_fvarId_1257_);
v___f_1265_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___lam__1___boxed), 7, 2);
lean_closure_set(v___f_1265_, 0, v_fvarId_1257_);
lean_closure_set(v___f_1265_, 1, v___f_1264_);
v___x_1266_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_1256_, v___f_1265_, v_a_1259_, v_a_1260_, v_a_1261_, v_a_1262_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive___boxed(lean_object* v_mvarId_1267_, lean_object* v_fvarId_1268_, lean_object* v_fuel_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_1267_, v_fvarId_1268_, v_fuel_1269_, v_a_1270_, v_a_1271_, v_a_1272_, v_a_1273_);
lean_dec(v_a_1273_);
lean_dec_ref(v_a_1272_);
lean_dec(v_a_1271_);
lean_dec_ref(v_a_1270_);
return v_res_1275_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(lean_object* v_e_1276_){
_start:
{
uint8_t v___x_1277_; 
v___x_1277_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v_e_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq___boxed(lean_object* v_e_1278_){
_start:
{
uint8_t v_res_1279_; lean_object* v_r_1280_; 
v_res_1279_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_isGenDiseq(v_e_1278_);
v_r_1280_ = lean_box(v_res_1279_);
return v_r_1280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(lean_object* v_e_1281_, lean_object* v_acc_1282_){
_start:
{
if (lean_obj_tag(v_e_1281_) == 7)
{
lean_object* v_binderType_1283_; lean_object* v_body_1284_; uint8_t v___y_1286_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v_binderType_1283_ = lean_ctor_get(v_e_1281_, 1);
v_body_1284_ = lean_ctor_get(v_e_1281_, 2);
v___x_1290_ = lean_unsigned_to_nat(0u);
v___x_1291_ = lean_expr_has_loose_bvar(v_body_1284_, v___x_1290_);
if (v___x_1291_ == 0)
{
uint8_t v___x_1292_; 
v___x_1292_ = l_Lean_Expr_isEq(v_binderType_1283_);
if (v___x_1292_ == 0)
{
uint8_t v___x_1293_; 
v___x_1293_ = l_Lean_Expr_isHEq(v_binderType_1283_);
v___y_1286_ = v___x_1293_;
goto v___jp_1285_;
}
else
{
v___y_1286_ = v___x_1292_;
goto v___jp_1285_;
}
}
else
{
uint8_t v___x_1294_; 
v___x_1294_ = 0;
v___y_1286_ = v___x_1294_;
goto v___jp_1285_;
}
v___jp_1285_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = lean_box(v___y_1286_);
v___x_1288_ = lean_array_push(v_acc_1282_, v___x_1287_);
v_e_1281_ = v_body_1284_;
v_acc_1282_ = v___x_1288_;
goto _start;
}
}
else
{
return v_acc_1282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go___boxed(lean_object* v_e_1295_, lean_object* v_acc_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(v_e_1295_, v_acc_1296_);
lean_dec_ref(v_e_1295_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask(lean_object* v_e_1300_){
_start:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1301_ = ((lean_object*)(l_Lean_Meta_mkGenDiseqMask___closed__0));
v___x_1302_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_mkGenDiseqMask_go(v_e_1300_, v___x_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkGenDiseqMask___boxed(lean_object* v_e_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lean_Meta_mkGenDiseqMask(v_e_1303_);
lean_dec_ref(v_e_1303_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(lean_object* v_msg_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v___f_1312_; lean_object* v___x_5507__overap_1313_; lean_object* v___x_1314_; 
v___f_1312_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___closed__0));
v___x_5507__overap_1313_ = lean_panic_fn_borrowed(v___f_1312_, v_msg_1306_);
lean_inc(v___y_1310_);
lean_inc_ref(v___y_1309_);
lean_inc(v___y_1308_);
lean_inc_ref(v___y_1307_);
v___x_1314_ = lean_apply_5(v___x_5507__overap_1313_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, lean_box(0));
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0___boxed(lean_object* v_msg_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(v_msg_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(lean_object* v_e_1322_, lean_object* v___y_1323_){
_start:
{
uint8_t v___x_1325_; 
v___x_1325_ = l_Lean_Expr_hasMVar(v_e_1322_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1326_; 
v___x_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1326_, 0, v_e_1322_);
return v___x_1326_;
}
else
{
lean_object* v___x_1327_; lean_object* v_mctx_1328_; lean_object* v___x_1329_; lean_object* v_fst_1330_; lean_object* v_snd_1331_; lean_object* v___x_1332_; lean_object* v_cache_1333_; lean_object* v_zetaDeltaFVarIds_1334_; lean_object* v_postponed_1335_; lean_object* v_diag_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1345_; 
v___x_1327_ = lean_st_ref_get(v___y_1323_);
v_mctx_1328_ = lean_ctor_get(v___x_1327_, 0);
lean_inc_ref(v_mctx_1328_);
lean_dec(v___x_1327_);
v___x_1329_ = l_Lean_instantiateMVarsCore(v_mctx_1328_, v_e_1322_);
v_fst_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_fst_1330_);
v_snd_1331_ = lean_ctor_get(v___x_1329_, 1);
lean_inc(v_snd_1331_);
lean_dec_ref(v___x_1329_);
v___x_1332_ = lean_st_ref_take(v___y_1323_);
v_cache_1333_ = lean_ctor_get(v___x_1332_, 1);
v_zetaDeltaFVarIds_1334_ = lean_ctor_get(v___x_1332_, 2);
v_postponed_1335_ = lean_ctor_get(v___x_1332_, 3);
v_diag_1336_ = lean_ctor_get(v___x_1332_, 4);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1345_ == 0)
{
lean_object* v_unused_1346_; 
v_unused_1346_ = lean_ctor_get(v___x_1332_, 0);
lean_dec(v_unused_1346_);
v___x_1338_ = v___x_1332_;
v_isShared_1339_ = v_isSharedCheck_1345_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_diag_1336_);
lean_inc(v_postponed_1335_);
lean_inc(v_zetaDeltaFVarIds_1334_);
lean_inc(v_cache_1333_);
lean_dec(v___x_1332_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1345_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1341_; 
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 0, v_snd_1331_);
v___x_1341_ = v___x_1338_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_snd_1331_);
lean_ctor_set(v_reuseFailAlloc_1344_, 1, v_cache_1333_);
lean_ctor_set(v_reuseFailAlloc_1344_, 2, v_zetaDeltaFVarIds_1334_);
lean_ctor_set(v_reuseFailAlloc_1344_, 3, v_postponed_1335_);
lean_ctor_set(v_reuseFailAlloc_1344_, 4, v_diag_1336_);
v___x_1341_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = lean_st_ref_set(v___y_1323_, v___x_1341_);
v___x_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1343_, 0, v_fst_1330_);
return v___x_1343_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg___boxed(lean_object* v_e_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v_e_1347_, v___y_1348_);
lean_dec(v___y_1348_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(lean_object* v_e_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v_e_1351_, v___y_1353_);
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___boxed(lean_object* v_e_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2(v_e_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(lean_object* v_k_1365_, uint8_t v_allowLevelAssignments_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v___x_1372_; 
v___x_1372_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1366_, v_k_1365_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v___x_1372_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1372_);
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
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
v_a_1381_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1372_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1372_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg___boxed(lean_object* v_k_1389_, lean_object* v_allowLevelAssignments_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1396_; lean_object* v_res_1397_; 
v_allowLevelAssignments_boxed_1396_ = lean_unbox(v_allowLevelAssignments_1390_);
v_res_1397_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v_k_1389_, v_allowLevelAssignments_boxed_1396_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(lean_object* v_00_u03b1_1398_, lean_object* v_k_1399_, uint8_t v_allowLevelAssignments_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
lean_object* v___x_1406_; 
v___x_1406_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v_k_1399_, v_allowLevelAssignments_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___boxed(lean_object* v_00_u03b1_1407_, lean_object* v_k_1408_, lean_object* v_allowLevelAssignments_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1415_; lean_object* v_res_1416_; 
v_allowLevelAssignments_boxed_1415_ = lean_unbox(v_allowLevelAssignments_1409_);
v_res_1416_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3(v_00_u03b1_1407_, v_k_1408_, v_allowLevelAssignments_boxed_1415_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(lean_object* v_as_1419_, size_t v_sz_1420_, size_t v_i_1421_, lean_object* v_b_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_){
_start:
{
lean_object* v_a_1429_; uint8_t v___x_1433_; 
v___x_1433_ = lean_usize_dec_lt(v_i_1421_, v_sz_1420_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1434_; 
v___x_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1434_, 0, v_b_1422_);
return v___x_1434_;
}
else
{
lean_object* v_snd_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1597_; 
v_snd_1435_ = lean_ctor_get(v_b_1422_, 1);
v_isSharedCheck_1597_ = !lean_is_exclusive(v_b_1422_);
if (v_isSharedCheck_1597_ == 0)
{
lean_object* v_unused_1598_; 
v_unused_1598_ = lean_ctor_get(v_b_1422_, 0);
lean_dec(v_unused_1598_);
v___x_1437_ = v_b_1422_;
v_isShared_1438_ = v_isSharedCheck_1597_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_snd_1435_);
lean_dec(v_b_1422_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1597_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v_array_1439_; lean_object* v_start_1440_; lean_object* v_stop_1441_; lean_object* v___x_1442_; uint8_t v___x_1443_; 
v_array_1439_ = lean_ctor_get(v_snd_1435_, 0);
v_start_1440_ = lean_ctor_get(v_snd_1435_, 1);
v_stop_1441_ = lean_ctor_get(v_snd_1435_, 2);
v___x_1442_ = lean_box(0);
v___x_1443_ = lean_nat_dec_lt(v_start_1440_, v_stop_1441_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1445_; 
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1442_);
v___x_1445_ = v___x_1437_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1447_, 1, v_snd_1435_);
v___x_1445_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
lean_object* v___x_1446_; 
v___x_1446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1445_);
return v___x_1446_;
}
}
else
{
lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1593_; 
lean_inc(v_stop_1441_);
lean_inc(v_start_1440_);
lean_inc_ref(v_array_1439_);
v_isSharedCheck_1593_ = !lean_is_exclusive(v_snd_1435_);
if (v_isSharedCheck_1593_ == 0)
{
lean_object* v_unused_1594_; lean_object* v_unused_1595_; lean_object* v_unused_1596_; 
v_unused_1594_ = lean_ctor_get(v_snd_1435_, 2);
lean_dec(v_unused_1594_);
v_unused_1595_ = lean_ctor_get(v_snd_1435_, 1);
lean_dec(v_unused_1595_);
v_unused_1596_ = lean_ctor_get(v_snd_1435_, 0);
lean_dec(v_unused_1596_);
v___x_1449_ = v_snd_1435_;
v_isShared_1450_ = v_isSharedCheck_1593_;
goto v_resetjp_1448_;
}
else
{
lean_dec(v_snd_1435_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1593_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1455_; 
v___x_1451_ = lean_array_fget(v_array_1439_, v_start_1440_);
v___x_1452_ = lean_unsigned_to_nat(1u);
v___x_1453_ = lean_nat_add(v_start_1440_, v___x_1452_);
lean_dec(v_start_1440_);
if (v_isShared_1450_ == 0)
{
lean_ctor_set(v___x_1449_, 1, v___x_1453_);
v___x_1455_ = v___x_1449_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_array_1439_);
lean_ctor_set(v_reuseFailAlloc_1592_, 1, v___x_1453_);
lean_ctor_set(v_reuseFailAlloc_1592_, 2, v_stop_1441_);
v___x_1455_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
uint8_t v___x_1456_; 
v___x_1456_ = lean_unbox(v___x_1451_);
lean_dec(v___x_1451_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1458_; 
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 1, v___x_1455_);
lean_ctor_set(v___x_1437_, 0, v___x_1442_);
v___x_1458_ = v___x_1437_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v___x_1455_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
v_a_1429_ = v___x_1458_;
goto v___jp_1428_;
}
}
else
{
lean_object* v_a_1460_; lean_object* v___y_1462_; lean_object* v___y_1463_; lean_object* v___y_1464_; lean_object* v___y_1465_; lean_object* v___x_1532_; 
v_a_1460_ = lean_array_uget_borrowed(v_as_1419_, v_i_1421_);
lean_inc(v___y_1426_);
lean_inc_ref(v___y_1425_);
lean_inc(v___y_1424_);
lean_inc_ref(v___y_1423_);
lean_inc(v_a_1460_);
v___x_1532_ = lean_infer_type(v_a_1460_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; lean_object* v___x_1534_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_a_1533_);
lean_dec_ref(v___x_1532_);
v___x_1534_ = l_Lean_Meta_matchEq_x3f(v_a_1533_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
lean_dec_ref(v___x_1534_);
if (lean_obj_tag(v_a_1535_) == 1)
{
lean_object* v_val_1536_; lean_object* v_snd_1537_; lean_object* v_fst_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1574_; 
v_val_1536_ = lean_ctor_get(v_a_1535_, 0);
lean_inc(v_val_1536_);
lean_dec_ref(v_a_1535_);
v_snd_1537_ = lean_ctor_get(v_val_1536_, 1);
lean_inc(v_snd_1537_);
lean_dec(v_val_1536_);
v_fst_1538_ = lean_ctor_get(v_snd_1537_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v_snd_1537_);
if (v_isSharedCheck_1574_ == 0)
{
lean_object* v_unused_1575_; 
v_unused_1575_ = lean_ctor_get(v_snd_1537_, 1);
lean_dec(v_unused_1575_);
v___x_1540_ = v_snd_1537_;
v_isShared_1541_ = v_isSharedCheck_1574_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_fst_1538_);
lean_dec(v_snd_1537_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1574_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1542_; 
v___x_1542_ = l_Lean_Meta_mkEqRefl(v_fst_1538_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; lean_object* v___x_1544_; 
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_a_1543_);
lean_dec_ref(v___x_1542_);
lean_inc(v_a_1460_);
v___x_1544_ = l_Lean_Meta_isExprDefEq(v_a_1460_, v_a_1543_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1557_; 
v_a_1545_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1547_ = v___x_1544_;
v_isShared_1548_ = v_isSharedCheck_1557_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1544_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1557_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
uint8_t v___x_1549_; 
v___x_1549_ = lean_unbox(v_a_1545_);
lean_dec(v_a_1545_);
if (v___x_1549_ == 0)
{
lean_object* v___x_1550_; lean_object* v___x_1552_; 
lean_del_object(v___x_1437_);
v___x_1550_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0));
if (v_isShared_1541_ == 0)
{
lean_ctor_set(v___x_1540_, 1, v___x_1455_);
lean_ctor_set(v___x_1540_, 0, v___x_1550_);
v___x_1552_ = v___x_1540_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1556_, 1, v___x_1455_);
v___x_1552_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
lean_object* v___x_1554_; 
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 0, v___x_1552_);
v___x_1554_ = v___x_1547_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
else
{
lean_del_object(v___x_1547_);
lean_del_object(v___x_1540_);
v___y_1462_ = v___y_1423_;
v___y_1463_ = v___y_1424_;
v___y_1464_ = v___y_1425_;
v___y_1465_ = v___y_1426_;
goto v___jp_1461_;
}
}
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_del_object(v___x_1540_);
lean_dec_ref(v___x_1455_);
lean_del_object(v___x_1437_);
v_a_1558_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1544_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1544_);
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
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
lean_del_object(v___x_1540_);
lean_dec_ref(v___x_1455_);
lean_del_object(v___x_1437_);
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
else
{
lean_dec(v_a_1535_);
v___y_1462_ = v___y_1423_;
v___y_1463_ = v___y_1424_;
v___y_1464_ = v___y_1425_;
v___y_1465_ = v___y_1426_;
goto v___jp_1461_;
}
}
else
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
lean_dec_ref(v___x_1455_);
lean_del_object(v___x_1437_);
v_a_1576_ = lean_ctor_get(v___x_1534_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1578_ = v___x_1534_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1534_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1576_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
else
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
lean_dec_ref(v___x_1455_);
lean_del_object(v___x_1437_);
v_a_1584_ = lean_ctor_get(v___x_1532_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1532_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1532_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1532_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
v___jp_1461_:
{
lean_object* v___x_1466_; 
lean_inc(v___y_1465_);
lean_inc_ref(v___y_1464_);
lean_inc(v___y_1463_);
lean_inc_ref(v___y_1462_);
lean_inc(v_a_1460_);
v___x_1466_ = lean_infer_type(v_a_1460_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; lean_object* v___x_1468_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref(v___x_1466_);
v___x_1468_ = l_Lean_Meta_matchHEq_x3f(v_a_1467_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1469_);
lean_dec_ref(v___x_1468_);
if (lean_obj_tag(v_a_1469_) == 1)
{
lean_object* v_val_1470_; lean_object* v_snd_1471_; lean_object* v_fst_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1511_; 
lean_del_object(v___x_1437_);
v_val_1470_ = lean_ctor_get(v_a_1469_, 0);
lean_inc(v_val_1470_);
lean_dec_ref(v_a_1469_);
v_snd_1471_ = lean_ctor_get(v_val_1470_, 1);
lean_inc(v_snd_1471_);
lean_dec(v_val_1470_);
v_fst_1472_ = lean_ctor_get(v_snd_1471_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v_snd_1471_);
if (v_isSharedCheck_1511_ == 0)
{
lean_object* v_unused_1512_; 
v_unused_1512_ = lean_ctor_get(v_snd_1471_, 1);
lean_dec(v_unused_1512_);
v___x_1474_ = v_snd_1471_;
v_isShared_1475_ = v_isSharedCheck_1511_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_fst_1472_);
lean_dec(v_snd_1471_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1511_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1476_; 
v___x_1476_ = l_Lean_Meta_mkHEqRefl(v_fst_1472_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_);
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v_a_1477_; lean_object* v___x_1478_; 
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1477_);
lean_dec_ref(v___x_1476_);
lean_inc(v_a_1460_);
v___x_1478_ = l_Lean_Meta_isExprDefEq(v_a_1460_, v_a_1477_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_);
if (lean_obj_tag(v___x_1478_) == 0)
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1494_; 
v_a_1479_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1481_ = v___x_1478_;
v_isShared_1482_ = v_isSharedCheck_1494_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1478_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1494_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
uint8_t v___x_1483_; 
v___x_1483_ = lean_unbox(v_a_1479_);
lean_dec(v_a_1479_);
if (v___x_1483_ == 0)
{
lean_object* v___x_1484_; lean_object* v___x_1486_; 
v___x_1484_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___closed__0));
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 1, v___x_1455_);
lean_ctor_set(v___x_1474_, 0, v___x_1484_);
v___x_1486_ = v___x_1474_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1484_);
lean_ctor_set(v_reuseFailAlloc_1490_, 1, v___x_1455_);
v___x_1486_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
lean_object* v___x_1488_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set(v___x_1481_, 0, v___x_1486_);
v___x_1488_ = v___x_1481_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1486_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
else
{
lean_object* v___x_1492_; 
lean_del_object(v___x_1481_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 1, v___x_1455_);
lean_ctor_set(v___x_1474_, 0, v___x_1442_);
v___x_1492_ = v___x_1474_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1493_, 1, v___x_1455_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
v_a_1429_ = v___x_1492_;
goto v___jp_1428_;
}
}
}
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
lean_del_object(v___x_1474_);
lean_dec_ref(v___x_1455_);
v_a_1495_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1478_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1478_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
lean_del_object(v___x_1474_);
lean_dec_ref(v___x_1455_);
v_a_1503_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1476_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1476_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
}
else
{
lean_object* v___x_1514_; 
lean_dec(v_a_1469_);
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 1, v___x_1455_);
lean_ctor_set(v___x_1437_, 0, v___x_1442_);
v___x_1514_ = v___x_1437_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v___x_1455_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
v_a_1429_ = v___x_1514_;
goto v___jp_1428_;
}
}
}
else
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1523_; 
lean_dec_ref(v___x_1455_);
lean_del_object(v___x_1437_);
v_a_1516_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1518_ = v___x_1468_;
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1468_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
else
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
lean_dec_ref(v___x_1455_);
lean_del_object(v___x_1437_);
v_a_1524_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1526_ = v___x_1466_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v___x_1466_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1524_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
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
v___jp_1428_:
{
size_t v___x_1430_; size_t v___x_1431_; 
v___x_1430_ = ((size_t)1ULL);
v___x_1431_ = lean_usize_add(v_i_1421_, v___x_1430_);
v_i_1421_ = v___x_1431_;
v_b_1422_ = v_a_1429_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1___boxed(lean_object* v_as_1599_, lean_object* v_sz_1600_, lean_object* v_i_1601_, lean_object* v_b_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
size_t v_sz_boxed_1608_; size_t v_i_boxed_1609_; lean_object* v_res_1610_; 
v_sz_boxed_1608_ = lean_unbox_usize(v_sz_1600_);
lean_dec(v_sz_1600_);
v_i_boxed_1609_ = lean_unbox_usize(v_i_1601_);
lean_dec(v_i_1601_);
v_res_1610_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(v_as_1599_, v_sz_boxed_1608_, v_i_boxed_1609_, v_b_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec_ref(v_as_1599_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(lean_object* v___x_1611_, uint8_t v___x_1612_, lean_object* v_localDecl_1613_, lean_object* v_mvarId_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v___x_1620_; 
lean_inc_ref(v___x_1611_);
v___x_1620_ = l_Lean_Meta_forallMetaTelescope(v___x_1611_, v___x_1612_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_a_1621_; lean_object* v_fst_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1711_; 
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_a_1621_);
lean_dec_ref(v___x_1620_);
v_fst_1622_ = lean_ctor_get(v_a_1621_, 0);
v_isSharedCheck_1711_ = !lean_is_exclusive(v_a_1621_);
if (v_isSharedCheck_1711_ == 0)
{
lean_object* v_unused_1712_; 
v_unused_1712_ = lean_ctor_get(v_a_1621_, 1);
lean_dec(v_unused_1712_);
v___x_1624_ = v_a_1621_;
v_isShared_1625_ = v_isSharedCheck_1711_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_fst_1622_);
lean_dec(v_a_1621_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1711_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1632_; 
v___x_1626_ = l_Lean_Meta_mkGenDiseqMask(v___x_1611_);
lean_dec_ref(v___x_1611_);
v___x_1627_ = lean_unsigned_to_nat(0u);
v___x_1628_ = lean_array_get_size(v___x_1626_);
v___x_1629_ = l_Array_toSubarray___redArg(v___x_1626_, v___x_1627_, v___x_1628_);
v___x_1630_ = lean_box(0);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 1, v___x_1629_);
lean_ctor_set(v___x_1624_, 0, v___x_1630_);
v___x_1632_ = v___x_1624_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1630_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v___x_1629_);
v___x_1632_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
size_t v_sz_1633_; size_t v___x_1634_; lean_object* v___x_1635_; 
v_sz_1633_ = lean_array_size(v_fst_1622_);
v___x_1634_ = ((size_t)0ULL);
v___x_1635_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__1(v_fst_1622_, v_sz_1633_, v___x_1634_, v___x_1632_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_);
if (lean_obj_tag(v___x_1635_) == 0)
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1701_; 
v_a_1636_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1638_ = v___x_1635_;
v_isShared_1639_ = v_isSharedCheck_1701_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1635_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1701_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v_fst_1640_; 
v_fst_1640_ = lean_ctor_get(v_a_1636_, 0);
lean_inc(v_fst_1640_);
lean_dec(v_a_1636_);
if (lean_obj_tag(v_fst_1640_) == 0)
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1696_; 
lean_del_object(v___x_1638_);
v___x_1641_ = l_Lean_LocalDecl_toExpr(v_localDecl_1613_);
v___x_1642_ = l_Lean_mkAppN(v___x_1641_, v_fst_1622_);
lean_dec(v_fst_1622_);
v___x_1643_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_1642_, v___y_1616_);
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1646_ = v___x_1643_;
v_isShared_1647_ = v_isSharedCheck_1696_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1643_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1696_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1648_; 
lean_inc(v_a_1644_);
v___x_1648_ = l_Lean_Meta_hasAssignableMVar(v_a_1644_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1687_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1687_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1687_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
uint8_t v___x_1653_; 
v___x_1653_ = lean_unbox(v_a_1649_);
lean_dec(v_a_1649_);
if (v___x_1653_ == 0)
{
lean_object* v___x_1654_; 
lean_del_object(v___x_1651_);
v___x_1654_ = l_Lean_MVarId_getType(v_mvarId_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1656_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref(v___x_1654_);
v___x_1656_ = l_Lean_Meta_mkFalseElim(v_a_1655_, v_a_1644_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1667_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1659_ = v___x_1656_;
v_isShared_1660_ = v_isSharedCheck_1667_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1656_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1667_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1647_ == 0)
{
lean_ctor_set_tag(v___x_1646_, 1);
lean_ctor_set(v___x_1646_, 0, v_a_1657_);
v___x_1662_ = v___x_1646_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
lean_object* v___x_1664_; 
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 0, v___x_1662_);
v___x_1664_ = v___x_1659_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v___x_1662_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
lean_del_object(v___x_1646_);
v_a_1668_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1656_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1656_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
lean_del_object(v___x_1646_);
lean_dec(v_a_1644_);
v_a_1676_ = lean_ctor_get(v___x_1654_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v___x_1654_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1654_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
else
{
lean_object* v___x_1685_; 
lean_del_object(v___x_1646_);
lean_dec(v_a_1644_);
lean_dec(v_mvarId_1614_);
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 0, v___x_1630_);
v___x_1685_ = v___x_1651_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v___x_1630_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
else
{
lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1695_; 
lean_del_object(v___x_1646_);
lean_dec(v_a_1644_);
lean_dec(v_mvarId_1614_);
v_a_1688_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1690_ = v___x_1648_;
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_dec(v___x_1648_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1693_; 
if (v_isShared_1691_ == 0)
{
v___x_1693_ = v___x_1690_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_a_1688_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
}
else
{
lean_object* v_val_1697_; lean_object* v___x_1699_; 
lean_dec(v_fst_1622_);
lean_dec(v_mvarId_1614_);
lean_dec_ref(v_localDecl_1613_);
v_val_1697_ = lean_ctor_get(v_fst_1640_, 0);
lean_inc(v_val_1697_);
lean_dec_ref(v_fst_1640_);
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v_val_1697_);
v___x_1699_ = v___x_1638_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_val_1697_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
lean_dec(v_fst_1622_);
lean_dec(v_mvarId_1614_);
lean_dec_ref(v_localDecl_1613_);
v_a_1702_ = lean_ctor_get(v___x_1635_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1635_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1635_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1635_);
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
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
lean_dec(v_mvarId_1614_);
lean_dec_ref(v_localDecl_1613_);
lean_dec_ref(v___x_1611_);
v_a_1713_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1620_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1620_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed(lean_object* v___x_1721_, lean_object* v___x_1722_, lean_object* v_localDecl_1723_, lean_object* v_mvarId_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
uint8_t v___x_7188__boxed_1730_; lean_object* v_res_1731_; 
v___x_7188__boxed_1730_ = lean_unbox(v___x_1722_);
v_res_1731_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0(v___x_1721_, v___x_7188__boxed_1730_, v_localDecl_1723_, v_mvarId_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
return v_res_1731_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3(void){
_start:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1735_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__2));
v___x_1736_ = lean_unsigned_to_nat(2u);
v___x_1737_ = lean_unsigned_to_nat(120u);
v___x_1738_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__1));
v___x_1739_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__0));
v___x_1740_ = l_mkPanicMessageWithDecl(v___x_1739_, v___x_1738_, v___x_1737_, v___x_1736_, v___x_1735_);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(lean_object* v_mvarId_1741_, lean_object* v_localDecl_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v___x_1748_; uint8_t v___x_1749_; 
v___x_1748_ = l_Lean_LocalDecl_type(v_localDecl_1742_);
lean_inc_ref(v___x_1748_);
v___x_1749_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_1748_);
if (v___x_1749_ == 0)
{
lean_object* v___x_1750_; lean_object* v___x_1751_; 
lean_dec_ref(v___x_1748_);
lean_dec_ref(v_localDecl_1742_);
lean_dec(v_mvarId_1741_);
v___x_1750_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3, &l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3_once, _init_l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___closed__3);
v___x_1751_ = l_panic___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__0(v___x_1750_, v_a_1743_, v_a_1744_, v_a_1745_, v_a_1746_);
return v___x_1751_;
}
else
{
uint8_t v___x_1752_; lean_object* v___x_1753_; lean_object* v___f_1754_; uint8_t v___x_1755_; lean_object* v___x_1756_; 
v___x_1752_ = 0;
v___x_1753_ = lean_box(v___x_1752_);
lean_inc(v_mvarId_1741_);
v___f_1754_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1754_, 0, v___x_1748_);
lean_closure_set(v___f_1754_, 1, v___x_1753_);
lean_closure_set(v___f_1754_, 2, v_localDecl_1742_);
lean_closure_set(v___f_1754_, 3, v_mvarId_1741_);
v___x_1755_ = 0;
v___x_1756_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__3___redArg(v___f_1754_, v___x_1755_, v_a_1743_, v_a_1744_, v_a_1745_, v_a_1746_);
if (lean_obj_tag(v___x_1756_) == 0)
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1776_; 
v_a_1757_ = lean_ctor_get(v___x_1756_, 0);
v_isSharedCheck_1776_ = !lean_is_exclusive(v___x_1756_);
if (v_isSharedCheck_1776_ == 0)
{
v___x_1759_ = v___x_1756_;
v_isShared_1760_ = v_isSharedCheck_1776_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1756_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1776_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
if (lean_obj_tag(v_a_1757_) == 1)
{
lean_object* v_val_1761_; lean_object* v___x_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1770_; 
lean_del_object(v___x_1759_);
v_val_1761_ = lean_ctor_get(v_a_1757_, 0);
lean_inc(v_val_1761_);
lean_dec_ref(v_a_1757_);
v___x_1762_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1741_, v_val_1761_, v_a_1744_);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1770_ == 0)
{
lean_object* v_unused_1771_; 
v_unused_1771_ = lean_ctor_get(v___x_1762_, 0);
lean_dec(v_unused_1771_);
v___x_1764_ = v___x_1762_;
v_isShared_1765_ = v_isSharedCheck_1770_;
goto v_resetjp_1763_;
}
else
{
lean_dec(v___x_1762_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1770_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1766_; lean_object* v___x_1768_; 
v___x_1766_ = lean_box(v___x_1749_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v___x_1766_);
v___x_1768_ = v___x_1764_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v___x_1766_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
else
{
lean_object* v___x_1772_; lean_object* v___x_1774_; 
lean_dec(v_a_1757_);
lean_dec(v_mvarId_1741_);
v___x_1772_ = lean_box(v___x_1755_);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v___x_1772_);
v___x_1774_ = v___x_1759_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1772_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
else
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1784_; 
lean_dec(v_mvarId_1741_);
v_a_1777_ = lean_ctor_get(v___x_1756_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1756_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1779_ = v___x_1756_;
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v___x_1756_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1784_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___x_1782_; 
if (v_isShared_1780_ == 0)
{
v___x_1782_ = v___x_1779_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_a_1777_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq___boxed(lean_object* v_mvarId_1785_, lean_object* v_localDecl_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_){
_start:
{
lean_object* v_res_1792_; 
v_res_1792_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_1785_, v_localDecl_1786_, v_a_1787_, v_a_1788_, v_a_1789_, v_a_1790_);
lean_dec(v_a_1790_);
lean_dec_ref(v_a_1789_);
lean_dec(v_a_1788_);
lean_dec_ref(v_a_1787_);
return v_res_1792_;
}
}
static uint64_t _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1(void){
_start:
{
uint8_t v___x_1796_; uint64_t v___x_1797_; 
v___x_1796_ = 1;
v___x_1797_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_1796_);
return v___x_1797_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7(void){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v___x_1806_ = lean_box(0);
v___x_1807_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__6));
v___x_1808_ = l_Lean_mkConst(v___x_1807_, v___x_1806_);
return v___x_1808_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8(void){
_start:
{
lean_object* v___x_1809_; lean_object* v_dummy_1810_; 
v___x_1809_ = lean_box(0);
v_dummy_1810_ = l_Lean_Expr_sort___override(v___x_1809_);
return v_dummy_1810_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(lean_object* v_config_1811_, lean_object* v_mvarId_1812_, lean_object* v_as_1813_, size_t v_sz_1814_, size_t v_i_1815_, lean_object* v_b_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
uint8_t v___x_1822_; 
v___x_1822_ = lean_usize_dec_lt(v_i_1815_, v_sz_1814_);
if (v___x_1822_ == 0)
{
lean_object* v___x_1823_; 
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v___x_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1823_, 0, v_b_1816_);
return v___x_1823_;
}
else
{
lean_object* v_snd_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_2492_; 
v_snd_1824_ = lean_ctor_get(v_b_1816_, 1);
v_isSharedCheck_2492_ = !lean_is_exclusive(v_b_1816_);
if (v_isSharedCheck_2492_ == 0)
{
lean_object* v_unused_2493_; 
v_unused_2493_ = lean_ctor_get(v_b_1816_, 0);
lean_dec(v_unused_2493_);
v___x_1826_ = v_b_1816_;
v_isShared_1827_ = v_isSharedCheck_2492_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_snd_1824_);
lean_dec(v_b_1816_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_2492_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v_a_1829_; lean_object* v___x_1835_; lean_object* v_a_1837_; lean_object* v_a_1842_; 
v___x_1835_ = lean_box(0);
v_a_1842_ = lean_array_uget(v_as_1813_, v_i_1815_);
if (lean_obj_tag(v_a_1842_) == 0)
{
lean_del_object(v___x_1826_);
v_a_1837_ = v_snd_1824_;
goto v___jp_1836_;
}
else
{
lean_object* v_val_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_2491_; 
v_val_1843_ = lean_ctor_get(v_a_1842_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v_a_1842_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_1845_ = v_a_1842_;
v_isShared_1846_ = v_isSharedCheck_2491_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_val_1843_);
lean_dec(v_a_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_2491_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1847_; lean_object* v___y_1849_; lean_object* v___y_1850_; lean_object* v___y_1851_; lean_object* v___y_1852_; lean_object* v___x_1888_; lean_object* v___y_1890_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v___y_1913_; lean_object* v___y_1914_; uint8_t v___y_1915_; uint8_t v___x_1916_; uint8_t v___y_1918_; lean_object* v___y_1919_; lean_object* v___y_1920_; lean_object* v___y_1921_; lean_object* v___y_1922_; uint8_t v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; uint8_t v___y_1929_; uint8_t v___y_1931_; uint8_t v___y_1932_; lean_object* v___y_1933_; lean_object* v___y_1934_; lean_object* v___y_1935_; lean_object* v___y_1936_; uint8_t v___y_1939_; uint8_t v___y_1940_; lean_object* v___y_1941_; lean_object* v___y_1942_; lean_object* v___y_1943_; lean_object* v___y_1944_; uint8_t v___y_1945_; 
v___x_1847_ = lean_box(0);
v___x_1888_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0));
v___x_1916_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1843_);
if (v___x_1916_ == 0)
{
lean_object* v___x_1960_; uint8_t v___y_1962_; uint8_t v___y_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; uint8_t v___y_1971_; lean_object* v___y_1972_; lean_object* v___y_1973_; lean_object* v___y_1974_; uint8_t v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; uint8_t v___y_1978_; uint8_t v___y_1981_; lean_object* v___y_1982_; lean_object* v___y_1983_; uint8_t v___y_1984_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v_a_1987_; uint8_t v___y_1991_; lean_object* v___y_1992_; lean_object* v___y_1993_; uint8_t v___y_1994_; lean_object* v___y_1995_; lean_object* v___y_1996_; uint8_t v___y_2082_; lean_object* v___y_2083_; lean_object* v___y_2084_; uint8_t v___y_2085_; lean_object* v___y_2086_; lean_object* v___y_2087_; uint8_t v___y_2088_; uint8_t v___y_2090_; lean_object* v___y_2091_; lean_object* v___y_2092_; lean_object* v___y_2093_; uint8_t v___y_2094_; lean_object* v___y_2095_; lean_object* v___y_2096_; uint8_t v___y_2097_; uint8_t v___y_2100_; lean_object* v___y_2101_; lean_object* v___y_2102_; uint8_t v___y_2103_; lean_object* v___y_2104_; lean_object* v___y_2105_; uint8_t v___y_2106_; uint8_t v___y_2119_; lean_object* v___y_2120_; lean_object* v___y_2121_; uint8_t v___y_2122_; lean_object* v___y_2123_; lean_object* v___y_2124_; uint8_t v___y_2125_; uint8_t v___y_2127_; uint8_t v_isHEq_2128_; lean_object* v___y_2129_; lean_object* v___y_2130_; lean_object* v___y_2131_; lean_object* v___y_2132_; lean_object* v___y_2136_; lean_object* v___y_2137_; lean_object* v___y_2138_; uint8_t v___y_2139_; lean_object* v___y_2140_; lean_object* v___y_2141_; lean_object* v___y_2142_; uint8_t v_isEq_2198_; lean_object* v___y_2199_; lean_object* v___y_2200_; lean_object* v___y_2201_; lean_object* v___y_2202_; lean_object* v___y_2248_; lean_object* v___y_2249_; lean_object* v___y_2250_; lean_object* v___y_2251_; lean_object* v___y_2294_; lean_object* v___y_2295_; lean_object* v___y_2296_; lean_object* v___y_2297_; lean_object* v___x_2428_; 
v___x_1960_ = l_Lean_LocalDecl_type(v_val_1843_);
lean_inc_ref(v___x_1960_);
v___x_2428_ = l_Lean_Meta_matchNot_x3f(v___x_1960_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref(v___x_2428_);
if (lean_obj_tag(v_a_2429_) == 1)
{
lean_object* v_val_2430_; lean_object* v___x_2431_; 
v_val_2430_ = lean_ctor_get(v_a_2429_, 0);
lean_inc(v_val_2430_);
lean_dec_ref(v_a_2429_);
v___x_2431_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_2430_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_object* v_a_2432_; 
v_a_2432_ = lean_ctor_get(v___x_2431_, 0);
lean_inc(v_a_2432_);
lean_dec_ref(v___x_2431_);
if (lean_obj_tag(v_a_2432_) == 1)
{
lean_object* v_val_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2474_; 
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec_ref(v_config_1811_);
v_val_2433_ = lean_ctor_get(v_a_2432_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v_a_2432_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2435_ = v_a_2432_;
v_isShared_2436_ = v_isSharedCheck_2474_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_val_2433_);
lean_dec(v_a_2432_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2474_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2437_; 
lean_inc(v_mvarId_1812_);
v___x_2437_ = l_Lean_MVarId_getType(v_mvarId_1812_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref(v___x_2437_);
v___x_2439_ = l_Lean_LocalDecl_toExpr(v_val_1843_);
v___x_2440_ = l_Lean_mkFVar(v_val_2433_);
v___x_2441_ = l_Lean_Expr_app___override(v___x_2439_, v___x_2440_);
v___x_2442_ = l_Lean_Meta_mkFalseElim(v_a_2438_, v___x_2441_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v_a_2443_; lean_object* v___x_2444_; 
v_a_2443_ = lean_ctor_get(v___x_2442_, 0);
lean_inc(v_a_2443_);
lean_dec_ref(v___x_2442_);
v___x_2444_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1812_, v_a_2443_, v___y_1818_);
if (lean_obj_tag(v___x_2444_) == 0)
{
lean_object* v___x_2445_; lean_object* v___x_2447_; 
lean_dec_ref(v___x_2444_);
v___x_2445_ = lean_box(v___x_1822_);
if (v_isShared_2436_ == 0)
{
lean_ctor_set(v___x_2435_, 0, v___x_2445_);
v___x_2447_ = v___x_2435_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v___x_2445_);
v___x_2447_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
lean_object* v___x_2448_; 
v___x_2448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2447_);
lean_ctor_set(v___x_2448_, 1, v___x_1847_);
v_a_1829_ = v___x_2448_;
goto v___jp_1828_;
}
}
else
{
lean_object* v_a_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2457_; 
lean_del_object(v___x_2435_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
v_a_2450_ = lean_ctor_get(v___x_2444_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2444_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2452_ = v___x_2444_;
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_a_2450_);
lean_dec(v___x_2444_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2455_; 
if (v_isShared_2453_ == 0)
{
v___x_2455_ = v___x_2452_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_a_2450_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
}
else
{
lean_object* v_a_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2465_; 
lean_del_object(v___x_2435_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_2458_ = lean_ctor_get(v___x_2442_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2460_ = v___x_2442_;
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_a_2458_);
lean_dec(v___x_2442_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2465_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v___x_2463_; 
if (v_isShared_2461_ == 0)
{
v___x_2463_ = v___x_2460_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_a_2458_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
lean_del_object(v___x_2435_);
lean_dec(v_val_2433_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_2466_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2437_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2437_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
}
}
else
{
lean_dec(v_a_2432_);
v___y_2294_ = v___y_1817_;
v___y_2295_ = v___y_1818_;
v___y_2296_ = v___y_1819_;
v___y_2297_ = v___y_1820_;
goto v___jp_2293_;
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2475_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2431_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2431_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
else
{
lean_dec(v_a_2429_);
v___y_2294_ = v___y_1817_;
v___y_2295_ = v___y_1818_;
v___y_2296_ = v___y_1819_;
v___y_2297_ = v___y_1820_;
goto v___jp_2293_;
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2483_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2428_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2428_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
v___jp_1961_:
{
uint8_t v_genDiseq_1968_; 
v_genDiseq_1968_ = lean_ctor_get_uint8(v_config_1811_, sizeof(void*)*1 + 2);
if (v_genDiseq_1968_ == 0)
{
lean_dec_ref(v___x_1960_);
v___y_1939_ = v___y_1962_;
v___y_1940_ = v___y_1963_;
v___y_1941_ = v___y_1967_;
v___y_1942_ = v___y_1964_;
v___y_1943_ = v___y_1966_;
v___y_1944_ = v___y_1965_;
v___y_1945_ = v___x_1916_;
goto v___jp_1938_;
}
else
{
uint8_t v___x_1969_; 
v___x_1969_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_1960_);
v___y_1939_ = v___y_1962_;
v___y_1940_ = v___y_1963_;
v___y_1941_ = v___y_1967_;
v___y_1942_ = v___y_1964_;
v___y_1943_ = v___y_1966_;
v___y_1944_ = v___y_1965_;
v___y_1945_ = v___x_1969_;
goto v___jp_1938_;
}
}
v___jp_1970_:
{
if (v___y_1978_ == 0)
{
lean_dec_ref(v___y_1974_);
v___y_1962_ = v___y_1971_;
v___y_1963_ = v___y_1975_;
v___y_1964_ = v___y_1973_;
v___y_1965_ = v___y_1976_;
v___y_1966_ = v___y_1977_;
v___y_1967_ = v___y_1972_;
goto v___jp_1961_;
}
else
{
lean_object* v___x_1979_; 
lean_dec_ref(v___x_1960_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v___x_1979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1979_, 0, v___y_1974_);
return v___x_1979_;
}
}
v___jp_1980_:
{
uint8_t v___x_1988_; 
v___x_1988_ = l_Lean_Exception_isInterrupt(v_a_1987_);
if (v___x_1988_ == 0)
{
uint8_t v___x_1989_; 
lean_inc_ref(v_a_1987_);
v___x_1989_ = l_Lean_Exception_isRuntime(v_a_1987_);
v___y_1971_ = v___y_1981_;
v___y_1972_ = v___y_1982_;
v___y_1973_ = v___y_1983_;
v___y_1974_ = v_a_1987_;
v___y_1975_ = v___y_1984_;
v___y_1976_ = v___y_1985_;
v___y_1977_ = v___y_1986_;
v___y_1978_ = v___x_1989_;
goto v___jp_1970_;
}
else
{
v___y_1971_ = v___y_1981_;
v___y_1972_ = v___y_1982_;
v___y_1973_ = v___y_1983_;
v___y_1974_ = v_a_1987_;
v___y_1975_ = v___y_1984_;
v___y_1976_ = v___y_1985_;
v___y_1977_ = v___y_1986_;
v___y_1978_ = v___x_1988_;
goto v___jp_1970_;
}
}
v___jp_1990_:
{
lean_object* v___x_1997_; 
lean_inc_ref(v___x_1960_);
v___x_1997_ = l_Lean_Meta_mkDecide(v___x_1960_, v___y_1993_, v___y_1995_, v___y_1996_, v___y_1992_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; lean_object* v___x_1999_; uint8_t v_foApprox_2000_; uint8_t v_ctxApprox_2001_; uint8_t v_quasiPatternApprox_2002_; uint8_t v_constApprox_2003_; uint8_t v_isDefEqStuckEx_2004_; uint8_t v_unificationHints_2005_; uint8_t v_proofIrrelevance_2006_; uint8_t v_assignSyntheticOpaque_2007_; uint8_t v_offsetCnstrs_2008_; uint8_t v_etaStruct_2009_; uint8_t v_univApprox_2010_; uint8_t v_iota_2011_; uint8_t v_beta_2012_; uint8_t v_proj_2013_; uint8_t v_zeta_2014_; uint8_t v_zetaDelta_2015_; uint8_t v_zetaUnused_2016_; uint8_t v_zetaHave_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2079_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_1998_);
lean_dec_ref(v___x_1997_);
v___x_1999_ = l_Lean_Meta_Context_config(v___y_1993_);
v_foApprox_2000_ = lean_ctor_get_uint8(v___x_1999_, 0);
v_ctxApprox_2001_ = lean_ctor_get_uint8(v___x_1999_, 1);
v_quasiPatternApprox_2002_ = lean_ctor_get_uint8(v___x_1999_, 2);
v_constApprox_2003_ = lean_ctor_get_uint8(v___x_1999_, 3);
v_isDefEqStuckEx_2004_ = lean_ctor_get_uint8(v___x_1999_, 4);
v_unificationHints_2005_ = lean_ctor_get_uint8(v___x_1999_, 5);
v_proofIrrelevance_2006_ = lean_ctor_get_uint8(v___x_1999_, 6);
v_assignSyntheticOpaque_2007_ = lean_ctor_get_uint8(v___x_1999_, 7);
v_offsetCnstrs_2008_ = lean_ctor_get_uint8(v___x_1999_, 8);
v_etaStruct_2009_ = lean_ctor_get_uint8(v___x_1999_, 10);
v_univApprox_2010_ = lean_ctor_get_uint8(v___x_1999_, 11);
v_iota_2011_ = lean_ctor_get_uint8(v___x_1999_, 12);
v_beta_2012_ = lean_ctor_get_uint8(v___x_1999_, 13);
v_proj_2013_ = lean_ctor_get_uint8(v___x_1999_, 14);
v_zeta_2014_ = lean_ctor_get_uint8(v___x_1999_, 15);
v_zetaDelta_2015_ = lean_ctor_get_uint8(v___x_1999_, 16);
v_zetaUnused_2016_ = lean_ctor_get_uint8(v___x_1999_, 17);
v_zetaHave_2017_ = lean_ctor_get_uint8(v___x_1999_, 18);
v_isSharedCheck_2079_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2019_ = v___x_1999_;
v_isShared_2020_ = v_isSharedCheck_2079_;
goto v_resetjp_2018_;
}
else
{
lean_dec(v___x_1999_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2079_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
uint8_t v_trackZetaDelta_2021_; lean_object* v_zetaDeltaSet_2022_; lean_object* v_lctx_2023_; lean_object* v_localInstances_2024_; lean_object* v_defEqCtx_x3f_2025_; lean_object* v_synthPendingDepth_2026_; lean_object* v_canUnfold_x3f_2027_; uint8_t v_univApprox_2028_; uint8_t v_inTypeClassResolution_2029_; uint8_t v_cacheInferType_2030_; uint8_t v___x_2031_; lean_object* v_config_2033_; 
v_trackZetaDelta_2021_ = lean_ctor_get_uint8(v___y_1993_, sizeof(void*)*7);
v_zetaDeltaSet_2022_ = lean_ctor_get(v___y_1993_, 1);
v_lctx_2023_ = lean_ctor_get(v___y_1993_, 2);
v_localInstances_2024_ = lean_ctor_get(v___y_1993_, 3);
v_defEqCtx_x3f_2025_ = lean_ctor_get(v___y_1993_, 4);
v_synthPendingDepth_2026_ = lean_ctor_get(v___y_1993_, 5);
v_canUnfold_x3f_2027_ = lean_ctor_get(v___y_1993_, 6);
v_univApprox_2028_ = lean_ctor_get_uint8(v___y_1993_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2029_ = lean_ctor_get_uint8(v___y_1993_, sizeof(void*)*7 + 2);
v_cacheInferType_2030_ = lean_ctor_get_uint8(v___y_1993_, sizeof(void*)*7 + 3);
v___x_2031_ = 1;
if (v_isShared_2020_ == 0)
{
v_config_2033_ = v___x_2019_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2078_; 
v_reuseFailAlloc_2078_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 0, v_foApprox_2000_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 1, v_ctxApprox_2001_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 2, v_quasiPatternApprox_2002_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 3, v_constApprox_2003_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 4, v_isDefEqStuckEx_2004_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 5, v_unificationHints_2005_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 6, v_proofIrrelevance_2006_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 7, v_assignSyntheticOpaque_2007_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 8, v_offsetCnstrs_2008_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 10, v_etaStruct_2009_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 11, v_univApprox_2010_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 12, v_iota_2011_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 13, v_beta_2012_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 14, v_proj_2013_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 15, v_zeta_2014_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 16, v_zetaDelta_2015_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 17, v_zetaUnused_2016_);
lean_ctor_set_uint8(v_reuseFailAlloc_2078_, 18, v_zetaHave_2017_);
v_config_2033_ = v_reuseFailAlloc_2078_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
uint64_t v___x_2034_; uint64_t v___x_2035_; uint64_t v___x_2036_; uint64_t v___x_2037_; uint64_t v___x_2038_; uint64_t v_key_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
lean_ctor_set_uint8(v_config_2033_, 9, v___x_2031_);
v___x_2034_ = l_Lean_Meta_Context_configKey(v___y_1993_);
v___x_2035_ = 2ULL;
v___x_2036_ = lean_uint64_shift_right(v___x_2034_, v___x_2035_);
v___x_2037_ = lean_uint64_shift_left(v___x_2036_, v___x_2035_);
v___x_2038_ = lean_uint64_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1);
v_key_2039_ = lean_uint64_lor(v___x_2037_, v___x_2038_);
v___x_2040_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2040_, 0, v_config_2033_);
lean_ctor_set_uint64(v___x_2040_, sizeof(void*)*1, v_key_2039_);
lean_inc(v_canUnfold_x3f_2027_);
lean_inc(v_synthPendingDepth_2026_);
lean_inc(v_defEqCtx_x3f_2025_);
lean_inc_ref(v_localInstances_2024_);
lean_inc_ref(v_lctx_2023_);
lean_inc(v_zetaDeltaSet_2022_);
v___x_2041_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
lean_ctor_set(v___x_2041_, 1, v_zetaDeltaSet_2022_);
lean_ctor_set(v___x_2041_, 2, v_lctx_2023_);
lean_ctor_set(v___x_2041_, 3, v_localInstances_2024_);
lean_ctor_set(v___x_2041_, 4, v_defEqCtx_x3f_2025_);
lean_ctor_set(v___x_2041_, 5, v_synthPendingDepth_2026_);
lean_ctor_set(v___x_2041_, 6, v_canUnfold_x3f_2027_);
lean_ctor_set_uint8(v___x_2041_, sizeof(void*)*7, v_trackZetaDelta_2021_);
lean_ctor_set_uint8(v___x_2041_, sizeof(void*)*7 + 1, v_univApprox_2028_);
lean_ctor_set_uint8(v___x_2041_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2029_);
lean_ctor_set_uint8(v___x_2041_, sizeof(void*)*7 + 3, v_cacheInferType_2030_);
lean_inc(v___y_1992_);
lean_inc_ref(v___y_1996_);
lean_inc(v___y_1995_);
lean_inc(v_a_1998_);
v___x_2042_ = lean_whnf(v_a_1998_, v___x_2041_, v___y_1995_, v___y_1996_, v___y_1992_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2044_; uint8_t v___x_2045_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_a_2043_);
lean_dec_ref(v___x_2042_);
v___x_2044_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4));
v___x_2045_ = l_Lean_Expr_isConstOf(v_a_2043_, v___x_2044_);
lean_dec(v_a_2043_);
if (v___x_2045_ == 0)
{
lean_dec(v_a_1998_);
v___y_1962_ = v___y_1991_;
v___y_1963_ = v___y_1994_;
v___y_1964_ = v___y_1993_;
v___y_1965_ = v___y_1995_;
v___y_1966_ = v___y_1996_;
v___y_1967_ = v___y_1992_;
goto v___jp_1961_;
}
else
{
lean_object* v___x_2046_; 
lean_inc(v_a_1998_);
v___x_2046_ = l_Lean_Meta_mkEqRefl(v_a_1998_, v___y_1993_, v___y_1995_, v___y_1996_, v___y_1992_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2048_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
lean_inc(v_a_2047_);
lean_dec_ref(v___x_2046_);
lean_inc(v_mvarId_1812_);
v___x_2048_ = l_Lean_MVarId_getType(v_mvarId_1812_, v___y_1993_, v___y_1995_, v___y_1996_, v___y_1992_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v_a_2049_; lean_object* v_nargs_2050_; lean_object* v___x_2051_; lean_object* v_dummy_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_a_2049_);
lean_dec_ref(v___x_2048_);
v_nargs_2050_ = l_Lean_Expr_getAppNumArgs(v_a_1998_);
v___x_2051_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_dummy_2052_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8);
lean_inc(v_nargs_2050_);
v___x_2053_ = lean_mk_array(v_nargs_2050_, v_dummy_2052_);
v___x_2054_ = lean_unsigned_to_nat(1u);
v___x_2055_ = lean_nat_sub(v_nargs_2050_, v___x_2054_);
lean_dec(v_nargs_2050_);
v___x_2056_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1998_, v___x_2053_, v___x_2055_);
v___x_2057_ = lean_array_push(v___x_2056_, v_a_2047_);
v___x_2058_ = l_Lean_mkAppN(v___x_2051_, v___x_2057_);
lean_dec_ref(v___x_2057_);
lean_inc(v_val_1843_);
v___x_2059_ = l_Lean_LocalDecl_toExpr(v_val_1843_);
v___x_2060_ = l_Lean_Meta_mkAbsurd(v_a_2049_, v___x_2059_, v___x_2058_, v___y_1993_, v___y_1995_, v___y_1996_, v___y_1992_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v___x_2062_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
lean_inc(v_a_2061_);
lean_dec_ref(v___x_2060_);
lean_inc(v_mvarId_1812_);
v___x_2062_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1812_, v_a_2061_, v___y_1995_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2071_; 
lean_dec_ref(v___x_1960_);
lean_dec(v_val_1843_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2071_ == 0)
{
lean_object* v_unused_2072_; 
v_unused_2072_ = lean_ctor_get(v___x_2062_, 0);
lean_dec(v_unused_2072_);
v___x_2064_ = v___x_2062_;
v_isShared_2065_ = v_isSharedCheck_2071_;
goto v_resetjp_2063_;
}
else
{
lean_dec(v___x_2062_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2071_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2066_ = lean_box(v___x_1822_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set_tag(v___x_2064_, 1);
lean_ctor_set(v___x_2064_, 0, v___x_2066_);
v___x_2068_ = v___x_2064_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2066_);
v___x_2068_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
lean_object* v___x_2069_; 
v___x_2069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
lean_ctor_set(v___x_2069_, 1, v___x_1847_);
v_a_1829_ = v___x_2069_;
goto v___jp_1828_;
}
}
}
else
{
lean_object* v_a_2073_; 
v_a_2073_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2073_);
lean_dec_ref(v___x_2062_);
v___y_1981_ = v___y_1991_;
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1993_;
v___y_1984_ = v___y_1994_;
v___y_1985_ = v___y_1995_;
v___y_1986_ = v___y_1996_;
v_a_1987_ = v_a_2073_;
goto v___jp_1980_;
}
}
else
{
lean_object* v_a_2074_; 
v_a_2074_ = lean_ctor_get(v___x_2060_, 0);
lean_inc(v_a_2074_);
lean_dec_ref(v___x_2060_);
v___y_1981_ = v___y_1991_;
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1993_;
v___y_1984_ = v___y_1994_;
v___y_1985_ = v___y_1995_;
v___y_1986_ = v___y_1996_;
v_a_1987_ = v_a_2074_;
goto v___jp_1980_;
}
}
else
{
lean_object* v_a_2075_; 
lean_dec(v_a_2047_);
lean_dec(v_a_1998_);
v_a_2075_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_a_2075_);
lean_dec_ref(v___x_2048_);
v___y_1981_ = v___y_1991_;
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1993_;
v___y_1984_ = v___y_1994_;
v___y_1985_ = v___y_1995_;
v___y_1986_ = v___y_1996_;
v_a_1987_ = v_a_2075_;
goto v___jp_1980_;
}
}
else
{
lean_object* v_a_2076_; 
lean_dec(v_a_1998_);
v_a_2076_ = lean_ctor_get(v___x_2046_, 0);
lean_inc(v_a_2076_);
lean_dec_ref(v___x_2046_);
v___y_1981_ = v___y_1991_;
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1993_;
v___y_1984_ = v___y_1994_;
v___y_1985_ = v___y_1995_;
v___y_1986_ = v___y_1996_;
v_a_1987_ = v_a_2076_;
goto v___jp_1980_;
}
}
}
else
{
lean_object* v_a_2077_; 
lean_dec(v_a_1998_);
v_a_2077_ = lean_ctor_get(v___x_2042_, 0);
lean_inc(v_a_2077_);
lean_dec_ref(v___x_2042_);
v___y_1981_ = v___y_1991_;
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1993_;
v___y_1984_ = v___y_1994_;
v___y_1985_ = v___y_1995_;
v___y_1986_ = v___y_1996_;
v_a_1987_ = v_a_2077_;
goto v___jp_1980_;
}
}
}
}
else
{
lean_object* v_a_2080_; 
v_a_2080_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_a_2080_);
lean_dec_ref(v___x_1997_);
v___y_1981_ = v___y_1991_;
v___y_1982_ = v___y_1992_;
v___y_1983_ = v___y_1993_;
v___y_1984_ = v___y_1994_;
v___y_1985_ = v___y_1995_;
v___y_1986_ = v___y_1996_;
v_a_1987_ = v_a_2080_;
goto v___jp_1980_;
}
}
v___jp_2081_:
{
if (v___y_2088_ == 0)
{
v___y_1962_ = v___y_2082_;
v___y_1963_ = v___y_2085_;
v___y_1964_ = v___y_2084_;
v___y_1965_ = v___y_2086_;
v___y_1966_ = v___y_2087_;
v___y_1967_ = v___y_2083_;
goto v___jp_1961_;
}
else
{
v___y_1991_ = v___y_2082_;
v___y_1992_ = v___y_2083_;
v___y_1993_ = v___y_2084_;
v___y_1994_ = v___y_2085_;
v___y_1995_ = v___y_2086_;
v___y_1996_ = v___y_2087_;
goto v___jp_1990_;
}
}
v___jp_2089_:
{
if (v___y_2097_ == 0)
{
lean_dec_ref(v___y_2093_);
v___y_2082_ = v___y_2090_;
v___y_2083_ = v___y_2091_;
v___y_2084_ = v___y_2092_;
v___y_2085_ = v___y_2094_;
v___y_2086_ = v___y_2095_;
v___y_2087_ = v___y_2096_;
v___y_2088_ = v___x_1916_;
goto v___jp_2081_;
}
else
{
uint8_t v___x_2098_; 
v___x_2098_ = l_Lean_Expr_hasFVar(v___y_2093_);
lean_dec_ref(v___y_2093_);
if (v___x_2098_ == 0)
{
v___y_1991_ = v___y_2090_;
v___y_1992_ = v___y_2091_;
v___y_1993_ = v___y_2092_;
v___y_1994_ = v___y_2094_;
v___y_1995_ = v___y_2095_;
v___y_1996_ = v___y_2096_;
goto v___jp_1990_;
}
else
{
v___y_2082_ = v___y_2090_;
v___y_2083_ = v___y_2091_;
v___y_2084_ = v___y_2092_;
v___y_2085_ = v___y_2094_;
v___y_2086_ = v___y_2095_;
v___y_2087_ = v___y_2096_;
v___y_2088_ = v___x_1916_;
goto v___jp_2081_;
}
}
}
v___jp_2099_:
{
lean_object* v___x_2107_; 
lean_inc_ref(v___x_1960_);
v___x_2107_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_1960_, v___y_2104_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; uint8_t v___x_2109_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref(v___x_2107_);
v___x_2109_ = l_Lean_Expr_hasMVar(v_a_2108_);
if (v___x_2109_ == 0)
{
v___y_2090_ = v___y_2100_;
v___y_2091_ = v___y_2101_;
v___y_2092_ = v___y_2102_;
v___y_2093_ = v_a_2108_;
v___y_2094_ = v___y_2103_;
v___y_2095_ = v___y_2104_;
v___y_2096_ = v___y_2105_;
v___y_2097_ = v___y_2106_;
goto v___jp_2089_;
}
else
{
v___y_2090_ = v___y_2100_;
v___y_2091_ = v___y_2101_;
v___y_2092_ = v___y_2102_;
v___y_2093_ = v_a_2108_;
v___y_2094_ = v___y_2103_;
v___y_2095_ = v___y_2104_;
v___y_2096_ = v___y_2105_;
v___y_2097_ = v___x_1916_;
goto v___jp_2089_;
}
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
lean_dec_ref(v___x_1960_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2110_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v___x_2107_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2107_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_a_2110_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
v___jp_2118_:
{
if (v___y_2125_ == 0)
{
v___y_1962_ = v___y_2119_;
v___y_1963_ = v___y_2122_;
v___y_1964_ = v___y_2121_;
v___y_1965_ = v___y_2123_;
v___y_1966_ = v___y_2124_;
v___y_1967_ = v___y_2120_;
goto v___jp_1961_;
}
else
{
v___y_2100_ = v___y_2119_;
v___y_2101_ = v___y_2120_;
v___y_2102_ = v___y_2121_;
v___y_2103_ = v___y_2122_;
v___y_2104_ = v___y_2123_;
v___y_2105_ = v___y_2124_;
v___y_2106_ = v___y_2125_;
goto v___jp_2099_;
}
}
v___jp_2126_:
{
uint8_t v_useDecide_2133_; 
v_useDecide_2133_ = lean_ctor_get_uint8(v_config_1811_, sizeof(void*)*1);
if (v_useDecide_2133_ == 0)
{
v___y_2119_ = v_isHEq_2128_;
v___y_2120_ = v___y_2132_;
v___y_2121_ = v___y_2129_;
v___y_2122_ = v___y_2127_;
v___y_2123_ = v___y_2130_;
v___y_2124_ = v___y_2131_;
v___y_2125_ = v___x_1916_;
goto v___jp_2118_;
}
else
{
uint8_t v___x_2134_; 
v___x_2134_ = l_Lean_Expr_hasFVar(v___x_1960_);
if (v___x_2134_ == 0)
{
v___y_2100_ = v_isHEq_2128_;
v___y_2101_ = v___y_2132_;
v___y_2102_ = v___y_2129_;
v___y_2103_ = v___y_2127_;
v___y_2104_ = v___y_2130_;
v___y_2105_ = v___y_2131_;
v___y_2106_ = v_useDecide_2133_;
goto v___jp_2099_;
}
else
{
v___y_2119_ = v_isHEq_2128_;
v___y_2120_ = v___y_2132_;
v___y_2121_ = v___y_2129_;
v___y_2122_ = v___y_2127_;
v___y_2123_ = v___y_2130_;
v___y_2124_ = v___y_2131_;
v___y_2125_ = v___x_1916_;
goto v___jp_2118_;
}
}
}
v___jp_2135_:
{
lean_object* v___x_2143_; 
v___x_2143_ = l_Lean_Meta_isExprDefEq(v___y_2137_, v___y_2136_, v___y_2142_, v___y_2141_, v___y_2140_, v___y_2138_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_object* v_a_2144_; uint8_t v___x_2145_; 
v_a_2144_ = lean_ctor_get(v___x_2143_, 0);
lean_inc(v_a_2144_);
lean_dec_ref(v___x_2143_);
v___x_2145_ = lean_unbox(v_a_2144_);
lean_dec(v_a_2144_);
if (v___x_2145_ == 0)
{
v___y_2127_ = v___y_2139_;
v_isHEq_2128_ = v___x_1822_;
v___y_2129_ = v___y_2142_;
v___y_2130_ = v___y_2141_;
v___y_2131_ = v___y_2140_;
v___y_2132_ = v___y_2138_;
goto v___jp_2126_;
}
else
{
lean_object* v___x_2146_; 
lean_dec_ref(v___x_1960_);
lean_dec_ref(v_config_1811_);
lean_inc(v_mvarId_1812_);
v___x_2146_ = l_Lean_MVarId_getType(v_mvarId_1812_, v___y_2142_, v___y_2141_, v___y_2140_, v___y_2138_);
if (lean_obj_tag(v___x_2146_) == 0)
{
lean_object* v_a_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; 
v_a_2147_ = lean_ctor_get(v___x_2146_, 0);
lean_inc(v_a_2147_);
lean_dec_ref(v___x_2146_);
v___x_2148_ = l_Lean_LocalDecl_toExpr(v_val_1843_);
v___x_2149_ = l_Lean_Meta_mkEqOfHEq(v___x_2148_, v___x_1822_, v___y_2142_, v___y_2141_, v___y_2140_, v___y_2138_);
if (lean_obj_tag(v___x_2149_) == 0)
{
lean_object* v_a_2150_; lean_object* v___x_2151_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_a_2150_);
lean_dec_ref(v___x_2149_);
v___x_2151_ = l_Lean_Meta_mkNoConfusion(v_a_2147_, v_a_2150_, v___y_2142_, v___y_2141_, v___y_2140_, v___y_2138_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; lean_object* v___x_2153_; 
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_a_2152_);
lean_dec_ref(v___x_2151_);
v___x_2153_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1812_, v_a_2152_, v___y_2141_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
lean_dec_ref(v___x_2153_);
v___x_2154_ = lean_box(v___x_1822_);
v___x_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2154_);
v___x_2156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2156_, 0, v___x_2155_);
lean_ctor_set(v___x_2156_, 1, v___x_1847_);
v_a_1829_ = v___x_2156_;
goto v___jp_1828_;
}
else
{
lean_object* v_a_2157_; lean_object* v___x_2159_; uint8_t v_isShared_2160_; uint8_t v_isSharedCheck_2164_; 
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
v_a_2157_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2164_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2164_ == 0)
{
v___x_2159_ = v___x_2153_;
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
else
{
lean_inc(v_a_2157_);
lean_dec(v___x_2153_);
v___x_2159_ = lean_box(0);
v_isShared_2160_ = v_isSharedCheck_2164_;
goto v_resetjp_2158_;
}
v_resetjp_2158_:
{
lean_object* v___x_2162_; 
if (v_isShared_2160_ == 0)
{
v___x_2162_ = v___x_2159_;
goto v_reusejp_2161_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_a_2157_);
v___x_2162_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2161_;
}
v_reusejp_2161_:
{
return v___x_2162_;
}
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_2165_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2151_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2151_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_dec(v_a_2147_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_2173_ = lean_ctor_get(v___x_2149_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2149_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2149_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
else
{
lean_object* v_a_2181_; lean_object* v___x_2183_; uint8_t v_isShared_2184_; uint8_t v_isSharedCheck_2188_; 
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_2181_ = lean_ctor_get(v___x_2146_, 0);
v_isSharedCheck_2188_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2188_ == 0)
{
v___x_2183_ = v___x_2146_;
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
else
{
lean_inc(v_a_2181_);
lean_dec(v___x_2146_);
v___x_2183_ = lean_box(0);
v_isShared_2184_ = v_isSharedCheck_2188_;
goto v_resetjp_2182_;
}
v_resetjp_2182_:
{
lean_object* v___x_2186_; 
if (v_isShared_2184_ == 0)
{
v___x_2186_ = v___x_2183_;
goto v_reusejp_2185_;
}
else
{
lean_object* v_reuseFailAlloc_2187_; 
v_reuseFailAlloc_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2187_, 0, v_a_2181_);
v___x_2186_ = v_reuseFailAlloc_2187_;
goto v_reusejp_2185_;
}
v_reusejp_2185_:
{
return v___x_2186_;
}
}
}
}
}
else
{
lean_object* v_a_2189_; lean_object* v___x_2191_; uint8_t v_isShared_2192_; uint8_t v_isSharedCheck_2196_; 
lean_dec_ref(v___x_1960_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2189_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2196_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2196_ == 0)
{
v___x_2191_ = v___x_2143_;
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
else
{
lean_inc(v_a_2189_);
lean_dec(v___x_2143_);
v___x_2191_ = lean_box(0);
v_isShared_2192_ = v_isSharedCheck_2196_;
goto v_resetjp_2190_;
}
v_resetjp_2190_:
{
lean_object* v___x_2194_; 
if (v_isShared_2192_ == 0)
{
v___x_2194_ = v___x_2191_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_a_2189_);
v___x_2194_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
return v___x_2194_;
}
}
}
}
v___jp_2197_:
{
lean_object* v___x_2203_; 
lean_inc_ref(v___x_1960_);
v___x_2203_ = l_Lean_Meta_matchHEq_x3f(v___x_1960_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
lean_inc(v_a_2204_);
lean_dec_ref(v___x_2203_);
if (lean_obj_tag(v_a_2204_) == 1)
{
lean_object* v_val_2205_; lean_object* v_snd_2206_; lean_object* v_snd_2207_; lean_object* v_fst_2208_; lean_object* v_fst_2209_; lean_object* v_fst_2210_; lean_object* v_snd_2211_; lean_object* v___x_2212_; 
v_val_2205_ = lean_ctor_get(v_a_2204_, 0);
lean_inc(v_val_2205_);
lean_dec_ref(v_a_2204_);
v_snd_2206_ = lean_ctor_get(v_val_2205_, 1);
lean_inc(v_snd_2206_);
v_snd_2207_ = lean_ctor_get(v_snd_2206_, 1);
lean_inc(v_snd_2207_);
v_fst_2208_ = lean_ctor_get(v_val_2205_, 0);
lean_inc(v_fst_2208_);
lean_dec(v_val_2205_);
v_fst_2209_ = lean_ctor_get(v_snd_2206_, 0);
lean_inc(v_fst_2209_);
lean_dec(v_snd_2206_);
v_fst_2210_ = lean_ctor_get(v_snd_2207_, 0);
lean_inc(v_fst_2210_);
v_snd_2211_ = lean_ctor_get(v_snd_2207_, 1);
lean_inc(v_snd_2211_);
lean_dec(v_snd_2207_);
v___x_2212_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2209_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v_a_2213_; 
v_a_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_a_2213_);
lean_dec_ref(v___x_2212_);
if (lean_obj_tag(v_a_2213_) == 1)
{
lean_object* v_val_2214_; lean_object* v___x_2215_; 
v_val_2214_ = lean_ctor_get(v_a_2213_, 0);
lean_inc(v_val_2214_);
lean_dec_ref(v_a_2213_);
v___x_2215_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2211_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
if (lean_obj_tag(v___x_2215_) == 0)
{
lean_object* v_a_2216_; 
v_a_2216_ = lean_ctor_get(v___x_2215_, 0);
lean_inc(v_a_2216_);
lean_dec_ref(v___x_2215_);
if (lean_obj_tag(v_a_2216_) == 1)
{
lean_object* v_toConstantVal_2217_; lean_object* v_val_2218_; lean_object* v_toConstantVal_2219_; lean_object* v_name_2220_; lean_object* v_name_2221_; uint8_t v___x_2222_; 
v_toConstantVal_2217_ = lean_ctor_get(v_val_2214_, 0);
lean_inc_ref(v_toConstantVal_2217_);
lean_dec(v_val_2214_);
v_val_2218_ = lean_ctor_get(v_a_2216_, 0);
lean_inc(v_val_2218_);
lean_dec_ref(v_a_2216_);
v_toConstantVal_2219_ = lean_ctor_get(v_val_2218_, 0);
lean_inc_ref(v_toConstantVal_2219_);
lean_dec(v_val_2218_);
v_name_2220_ = lean_ctor_get(v_toConstantVal_2217_, 0);
lean_inc(v_name_2220_);
lean_dec_ref(v_toConstantVal_2217_);
v_name_2221_ = lean_ctor_get(v_toConstantVal_2219_, 0);
lean_inc(v_name_2221_);
lean_dec_ref(v_toConstantVal_2219_);
v___x_2222_ = lean_name_eq(v_name_2220_, v_name_2221_);
lean_dec(v_name_2221_);
lean_dec(v_name_2220_);
if (v___x_2222_ == 0)
{
v___y_2136_ = v_fst_2210_;
v___y_2137_ = v_fst_2208_;
v___y_2138_ = v___y_2202_;
v___y_2139_ = v_isEq_2198_;
v___y_2140_ = v___y_2201_;
v___y_2141_ = v___y_2200_;
v___y_2142_ = v___y_2199_;
goto v___jp_2135_;
}
else
{
if (v___x_1916_ == 0)
{
lean_dec(v_fst_2210_);
lean_dec(v_fst_2208_);
v___y_2127_ = v_isEq_2198_;
v_isHEq_2128_ = v___x_1822_;
v___y_2129_ = v___y_2199_;
v___y_2130_ = v___y_2200_;
v___y_2131_ = v___y_2201_;
v___y_2132_ = v___y_2202_;
goto v___jp_2126_;
}
else
{
v___y_2136_ = v_fst_2210_;
v___y_2137_ = v_fst_2208_;
v___y_2138_ = v___y_2202_;
v___y_2139_ = v_isEq_2198_;
v___y_2140_ = v___y_2201_;
v___y_2141_ = v___y_2200_;
v___y_2142_ = v___y_2199_;
goto v___jp_2135_;
}
}
}
else
{
lean_dec(v_a_2216_);
lean_dec(v_val_2214_);
lean_dec(v_fst_2210_);
lean_dec(v_fst_2208_);
v___y_2127_ = v_isEq_2198_;
v_isHEq_2128_ = v___x_1822_;
v___y_2129_ = v___y_2199_;
v___y_2130_ = v___y_2200_;
v___y_2131_ = v___y_2201_;
v___y_2132_ = v___y_2202_;
goto v___jp_2126_;
}
}
else
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
lean_dec(v_val_2214_);
lean_dec(v_fst_2210_);
lean_dec(v_fst_2208_);
lean_dec_ref(v___x_1960_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2223_ = lean_ctor_get(v___x_2215_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2215_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2215_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2215_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
else
{
lean_dec(v_a_2213_);
lean_dec(v_snd_2211_);
lean_dec(v_fst_2210_);
lean_dec(v_fst_2208_);
v___y_2127_ = v_isEq_2198_;
v_isHEq_2128_ = v___x_1822_;
v___y_2129_ = v___y_2199_;
v___y_2130_ = v___y_2200_;
v___y_2131_ = v___y_2201_;
v___y_2132_ = v___y_2202_;
goto v___jp_2126_;
}
}
else
{
lean_object* v_a_2231_; lean_object* v___x_2233_; uint8_t v_isShared_2234_; uint8_t v_isSharedCheck_2238_; 
lean_dec(v_snd_2211_);
lean_dec(v_fst_2210_);
lean_dec(v_fst_2208_);
lean_dec_ref(v___x_1960_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2231_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2238_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2233_ = v___x_2212_;
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
else
{
lean_inc(v_a_2231_);
lean_dec(v___x_2212_);
v___x_2233_ = lean_box(0);
v_isShared_2234_ = v_isSharedCheck_2238_;
goto v_resetjp_2232_;
}
v_resetjp_2232_:
{
lean_object* v___x_2236_; 
if (v_isShared_2234_ == 0)
{
v___x_2236_ = v___x_2233_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_a_2231_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
else
{
lean_dec(v_a_2204_);
v___y_2127_ = v_isEq_2198_;
v_isHEq_2128_ = v___x_1916_;
v___y_2129_ = v___y_2199_;
v___y_2130_ = v___y_2200_;
v___y_2131_ = v___y_2201_;
v___y_2132_ = v___y_2202_;
goto v___jp_2126_;
}
}
else
{
lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
lean_dec_ref(v___x_1960_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2239_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2241_ = v___x_2203_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2203_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
if (v_isShared_2242_ == 0)
{
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_a_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
v___jp_2247_:
{
lean_object* v___x_2252_; 
lean_inc_ref(v___x_1960_);
v___x_2252_ = l_Lean_Meta_matchEq_x3f(v___x_1960_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_a_2253_; 
v_a_2253_ = lean_ctor_get(v___x_2252_, 0);
lean_inc(v_a_2253_);
lean_dec_ref(v___x_2252_);
if (lean_obj_tag(v_a_2253_) == 1)
{
lean_object* v_val_2254_; lean_object* v_snd_2255_; lean_object* v_fst_2256_; lean_object* v_snd_2257_; lean_object* v___x_2258_; 
v_val_2254_ = lean_ctor_get(v_a_2253_, 0);
lean_inc(v_val_2254_);
lean_dec_ref(v_a_2253_);
v_snd_2255_ = lean_ctor_get(v_val_2254_, 1);
lean_inc(v_snd_2255_);
lean_dec(v_val_2254_);
v_fst_2256_ = lean_ctor_get(v_snd_2255_, 0);
lean_inc(v_fst_2256_);
v_snd_2257_ = lean_ctor_get(v_snd_2255_, 1);
lean_inc(v_snd_2257_);
lean_dec(v_snd_2255_);
v___x_2258_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2256_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref(v___x_2258_);
if (lean_obj_tag(v_a_2259_) == 1)
{
lean_object* v_val_2260_; lean_object* v___x_2261_; 
v_val_2260_ = lean_ctor_get(v_a_2259_, 0);
lean_inc(v_val_2260_);
lean_dec_ref(v_a_2259_);
v___x_2261_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2257_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
if (lean_obj_tag(v___x_2261_) == 0)
{
lean_object* v_a_2262_; 
v_a_2262_ = lean_ctor_get(v___x_2261_, 0);
lean_inc(v_a_2262_);
lean_dec_ref(v___x_2261_);
if (lean_obj_tag(v_a_2262_) == 1)
{
lean_object* v_toConstantVal_2263_; lean_object* v_val_2264_; lean_object* v_toConstantVal_2265_; lean_object* v_name_2266_; lean_object* v_name_2267_; uint8_t v___x_2268_; 
v_toConstantVal_2263_ = lean_ctor_get(v_val_2260_, 0);
lean_inc_ref(v_toConstantVal_2263_);
lean_dec(v_val_2260_);
v_val_2264_ = lean_ctor_get(v_a_2262_, 0);
lean_inc(v_val_2264_);
lean_dec_ref(v_a_2262_);
v_toConstantVal_2265_ = lean_ctor_get(v_val_2264_, 0);
lean_inc_ref(v_toConstantVal_2265_);
lean_dec(v_val_2264_);
v_name_2266_ = lean_ctor_get(v_toConstantVal_2263_, 0);
lean_inc(v_name_2266_);
lean_dec_ref(v_toConstantVal_2263_);
v_name_2267_ = lean_ctor_get(v_toConstantVal_2265_, 0);
lean_inc(v_name_2267_);
lean_dec_ref(v_toConstantVal_2265_);
v___x_2268_ = lean_name_eq(v_name_2266_, v_name_2267_);
lean_dec(v_name_2267_);
lean_dec(v_name_2266_);
if (v___x_2268_ == 0)
{
lean_dec_ref(v___x_1960_);
lean_dec_ref(v_config_1811_);
v___y_1849_ = v___y_2248_;
v___y_1850_ = v___y_2251_;
v___y_1851_ = v___y_2249_;
v___y_1852_ = v___y_2250_;
goto v___jp_1848_;
}
else
{
if (v___x_1916_ == 0)
{
lean_del_object(v___x_1845_);
v_isEq_2198_ = v___x_1822_;
v___y_2199_ = v___y_2248_;
v___y_2200_ = v___y_2249_;
v___y_2201_ = v___y_2250_;
v___y_2202_ = v___y_2251_;
goto v___jp_2197_;
}
else
{
lean_dec_ref(v___x_1960_);
lean_dec_ref(v_config_1811_);
v___y_1849_ = v___y_2248_;
v___y_1850_ = v___y_2251_;
v___y_1851_ = v___y_2249_;
v___y_1852_ = v___y_2250_;
goto v___jp_1848_;
}
}
}
else
{
lean_dec(v_a_2262_);
lean_dec(v_val_2260_);
lean_del_object(v___x_1845_);
v_isEq_2198_ = v___x_1822_;
v___y_2199_ = v___y_2248_;
v___y_2200_ = v___y_2249_;
v___y_2201_ = v___y_2250_;
v___y_2202_ = v___y_2251_;
goto v___jp_2197_;
}
}
else
{
lean_object* v_a_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2276_; 
lean_dec(v_val_2260_);
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2269_ = lean_ctor_get(v___x_2261_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2271_ = v___x_2261_;
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_a_2269_);
lean_dec(v___x_2261_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2274_; 
if (v_isShared_2272_ == 0)
{
v___x_2274_ = v___x_2271_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_a_2269_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
}
else
{
lean_dec(v_a_2259_);
lean_dec(v_snd_2257_);
lean_del_object(v___x_1845_);
v_isEq_2198_ = v___x_1822_;
v___y_2199_ = v___y_2248_;
v___y_2200_ = v___y_2249_;
v___y_2201_ = v___y_2250_;
v___y_2202_ = v___y_2251_;
goto v___jp_2197_;
}
}
else
{
lean_object* v_a_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2284_; 
lean_dec(v_snd_2257_);
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2277_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2279_ = v___x_2258_;
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_a_2277_);
lean_dec(v___x_2258_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2282_; 
if (v_isShared_2280_ == 0)
{
v___x_2282_ = v___x_2279_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_a_2277_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
}
else
{
lean_dec(v_a_2253_);
lean_del_object(v___x_1845_);
v_isEq_2198_ = v___x_1916_;
v___y_2199_ = v___y_2248_;
v___y_2200_ = v___y_2249_;
v___y_2201_ = v___y_2250_;
v___y_2202_ = v___y_2251_;
goto v___jp_2197_;
}
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2292_; 
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2285_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2287_ = v___x_2252_;
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_a_2285_);
lean_dec(v___x_2252_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2292_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2290_; 
if (v_isShared_2288_ == 0)
{
v___x_2290_ = v___x_2287_;
goto v_reusejp_2289_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_a_2285_);
v___x_2290_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2289_;
}
v_reusejp_2289_:
{
return v___x_2290_;
}
}
}
}
v___jp_2293_:
{
lean_object* v___x_2298_; 
lean_inc_ref(v___x_1960_);
v___x_2298_ = l_refutableHasNotBit_x3f(v___x_1960_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
if (lean_obj_tag(v___x_2298_) == 0)
{
lean_object* v_a_2299_; 
v_a_2299_ = lean_ctor_get(v___x_2298_, 0);
lean_inc(v_a_2299_);
lean_dec_ref(v___x_2298_);
if (lean_obj_tag(v_a_2299_) == 1)
{
lean_object* v_val_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2339_; 
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec_ref(v_config_1811_);
v_val_2300_ = lean_ctor_get(v_a_2299_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v_a_2299_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2302_ = v_a_2299_;
v_isShared_2303_ = v_isSharedCheck_2339_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_val_2300_);
lean_dec(v_a_2299_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2339_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2304_; 
lean_inc(v_mvarId_1812_);
v___x_2304_ = l_Lean_MVarId_getType(v_mvarId_1812_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
if (lean_obj_tag(v___x_2304_) == 0)
{
lean_object* v_a_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
v_a_2305_ = lean_ctor_get(v___x_2304_, 0);
lean_inc(v_a_2305_);
lean_dec_ref(v___x_2304_);
v___x_2306_ = l_Lean_LocalDecl_toExpr(v_val_1843_);
v___x_2307_ = l_Lean_Meta_mkAbsurd(v_a_2305_, v_val_2300_, v___x_2306_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
if (lean_obj_tag(v___x_2307_) == 0)
{
lean_object* v_a_2308_; lean_object* v___x_2309_; 
v_a_2308_ = lean_ctor_get(v___x_2307_, 0);
lean_inc(v_a_2308_);
lean_dec_ref(v___x_2307_);
v___x_2309_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1812_, v_a_2308_, v___y_2295_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v___x_2310_; lean_object* v___x_2312_; 
lean_dec_ref(v___x_2309_);
v___x_2310_ = lean_box(v___x_1822_);
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 0, v___x_2310_);
v___x_2312_ = v___x_2302_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v___x_2310_);
v___x_2312_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2313_; 
v___x_2313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2312_);
lean_ctor_set(v___x_2313_, 1, v___x_1847_);
v_a_1829_ = v___x_2313_;
goto v___jp_1828_;
}
}
else
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2322_; 
lean_del_object(v___x_2302_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
v_a_2315_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2317_ = v___x_2309_;
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2309_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2320_; 
if (v_isShared_2318_ == 0)
{
v___x_2320_ = v___x_2317_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2315_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
}
else
{
lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2330_; 
lean_del_object(v___x_2302_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_2323_ = lean_ctor_get(v___x_2307_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2307_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2325_ = v___x_2307_;
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v___x_2307_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2328_; 
if (v_isShared_2326_ == 0)
{
v___x_2328_ = v___x_2325_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2323_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
else
{
lean_object* v_a_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2338_; 
lean_del_object(v___x_2302_);
lean_dec(v_val_2300_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_2331_ = lean_ctor_get(v___x_2304_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2304_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2333_ = v___x_2304_;
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_a_2331_);
lean_dec(v___x_2304_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2336_; 
if (v_isShared_2334_ == 0)
{
v___x_2336_ = v___x_2333_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_a_2331_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
}
}
else
{
lean_object* v___x_2340_; 
lean_dec(v_a_2299_);
lean_inc_ref(v___x_1960_);
v___x_2340_ = l_Lean_Meta_matchNe_x3f(v___x_1960_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v_a_2341_; 
v_a_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_a_2341_);
lean_dec_ref(v___x_2340_);
if (lean_obj_tag(v_a_2341_) == 1)
{
lean_object* v_val_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2411_; 
v_val_2342_ = lean_ctor_get(v_a_2341_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_a_2341_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2344_ = v_a_2341_;
v_isShared_2345_ = v_isSharedCheck_2411_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_val_2342_);
lean_dec(v_a_2341_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2411_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v_snd_2346_; lean_object* v_fst_2347_; lean_object* v_snd_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2410_; 
v_snd_2346_ = lean_ctor_get(v_val_2342_, 1);
lean_inc(v_snd_2346_);
lean_dec(v_val_2342_);
v_fst_2347_ = lean_ctor_get(v_snd_2346_, 0);
v_snd_2348_ = lean_ctor_get(v_snd_2346_, 1);
v_isSharedCheck_2410_ = !lean_is_exclusive(v_snd_2346_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2350_ = v_snd_2346_;
v_isShared_2351_ = v_isSharedCheck_2410_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_snd_2348_);
lean_inc(v_fst_2347_);
lean_dec(v_snd_2346_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2410_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v___x_2352_; 
lean_inc(v_fst_2347_);
v___x_2352_ = l_Lean_Meta_isExprDefEq(v_fst_2347_, v_snd_2348_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; uint8_t v___x_2354_; 
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_a_2353_);
lean_dec_ref(v___x_2352_);
v___x_2354_ = lean_unbox(v_a_2353_);
lean_dec(v_a_2353_);
if (v___x_2354_ == 0)
{
lean_del_object(v___x_2350_);
lean_dec(v_fst_2347_);
lean_del_object(v___x_2344_);
v___y_2248_ = v___y_2294_;
v___y_2249_ = v___y_2295_;
v___y_2250_ = v___y_2296_;
v___y_2251_ = v___y_2297_;
goto v___jp_2247_;
}
else
{
lean_object* v___x_2355_; 
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec_ref(v_config_1811_);
lean_inc(v_mvarId_1812_);
v___x_2355_ = l_Lean_MVarId_getType(v_mvarId_1812_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
if (lean_obj_tag(v___x_2355_) == 0)
{
lean_object* v_a_2356_; lean_object* v___x_2357_; 
v_a_2356_ = lean_ctor_get(v___x_2355_, 0);
lean_inc(v_a_2356_);
lean_dec_ref(v___x_2355_);
v___x_2357_ = l_Lean_Meta_mkEqRefl(v_fst_2347_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
if (lean_obj_tag(v___x_2357_) == 0)
{
lean_object* v_a_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v_a_2358_ = lean_ctor_get(v___x_2357_, 0);
lean_inc(v_a_2358_);
lean_dec_ref(v___x_2357_);
v___x_2359_ = l_Lean_LocalDecl_toExpr(v_val_1843_);
v___x_2360_ = l_Lean_Meta_mkAbsurd(v_a_2356_, v_a_2358_, v___x_2359_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
if (lean_obj_tag(v___x_2360_) == 0)
{
lean_object* v_a_2361_; lean_object* v___x_2362_; 
v_a_2361_ = lean_ctor_get(v___x_2360_, 0);
lean_inc(v_a_2361_);
lean_dec_ref(v___x_2360_);
v___x_2362_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1812_, v_a_2361_, v___y_2295_);
if (lean_obj_tag(v___x_2362_) == 0)
{
lean_object* v___x_2363_; lean_object* v___x_2365_; 
lean_dec_ref(v___x_2362_);
v___x_2363_ = lean_box(v___x_1822_);
if (v_isShared_2345_ == 0)
{
lean_ctor_set(v___x_2344_, 0, v___x_2363_);
v___x_2365_ = v___x_2344_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2363_);
v___x_2365_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
lean_object* v___x_2367_; 
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 1, v___x_1847_);
lean_ctor_set(v___x_2350_, 0, v___x_2365_);
v___x_2367_ = v___x_2350_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v___x_2365_);
lean_ctor_set(v_reuseFailAlloc_2368_, 1, v___x_1847_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
v_a_1829_ = v___x_2367_;
goto v___jp_1828_;
}
}
}
else
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2377_; 
lean_del_object(v___x_2350_);
lean_del_object(v___x_2344_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
v_a_2370_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2372_ = v___x_2362_;
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v___x_2362_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2377_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_del_object(v___x_2350_);
lean_del_object(v___x_2344_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_2378_ = lean_ctor_get(v___x_2360_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2360_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___x_2360_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2360_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2383_; 
if (v_isShared_2381_ == 0)
{
v___x_2383_ = v___x_2380_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v_a_2378_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
}
else
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec(v_a_2356_);
lean_del_object(v___x_2350_);
lean_del_object(v___x_2344_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_2386_ = lean_ctor_get(v___x_2357_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2357_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2357_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2357_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
}
else
{
lean_object* v_a_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2401_; 
lean_del_object(v___x_2350_);
lean_dec(v_fst_2347_);
lean_del_object(v___x_2344_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_2394_ = lean_ctor_get(v___x_2355_, 0);
v_isSharedCheck_2401_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2401_ == 0)
{
v___x_2396_ = v___x_2355_;
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_a_2394_);
lean_dec(v___x_2355_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2401_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2399_; 
if (v_isShared_2397_ == 0)
{
v___x_2399_ = v___x_2396_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v_a_2394_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
}
else
{
lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2409_; 
lean_del_object(v___x_2350_);
lean_dec(v_fst_2347_);
lean_del_object(v___x_2344_);
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2402_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2404_ = v___x_2352_;
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v___x_2352_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2407_; 
if (v_isShared_2405_ == 0)
{
v___x_2407_ = v___x_2404_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_a_2402_);
v___x_2407_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
return v___x_2407_;
}
}
}
}
}
}
else
{
lean_dec(v_a_2341_);
v___y_2248_ = v___y_2294_;
v___y_2249_ = v___y_2295_;
v___y_2250_ = v___y_2296_;
v___y_2251_ = v___y_2297_;
goto v___jp_2247_;
}
}
else
{
lean_object* v_a_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2412_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2414_ = v___x_2340_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_a_2412_);
lean_dec(v___x_2340_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2417_; 
if (v_isShared_2415_ == 0)
{
v___x_2417_ = v___x_2414_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2412_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
}
}
}
else
{
lean_object* v_a_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2427_; 
lean_dec_ref(v___x_1960_);
lean_del_object(v___x_1845_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_2420_ = lean_ctor_get(v___x_2298_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2298_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2422_ = v___x_2298_;
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_a_2420_);
lean_dec(v___x_2298_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2427_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2425_; 
if (v_isShared_2423_ == 0)
{
v___x_2425_ = v___x_2422_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v_a_2420_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
}
}
else
{
lean_del_object(v___x_1845_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
v_a_1837_ = v___x_1888_;
goto v___jp_1836_;
}
v___jp_1848_:
{
lean_object* v___x_1853_; 
lean_inc(v_mvarId_1812_);
v___x_1853_ = l_Lean_MVarId_getType(v_mvarId_1812_, v___y_1849_, v___y_1851_, v___y_1852_, v___y_1850_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_a_1854_);
lean_dec_ref(v___x_1853_);
v___x_1855_ = l_Lean_LocalDecl_toExpr(v_val_1843_);
v___x_1856_ = l_Lean_Meta_mkNoConfusion(v_a_1854_, v___x_1855_, v___y_1849_, v___y_1851_, v___y_1852_, v___y_1850_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; lean_object* v___x_1858_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_a_1857_);
lean_dec_ref(v___x_1856_);
v___x_1858_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_1812_, v_a_1857_, v___y_1851_);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v___x_1859_; lean_object* v___x_1861_; 
lean_dec_ref(v___x_1858_);
v___x_1859_ = lean_box(v___x_1822_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v___x_1859_);
v___x_1861_ = v___x_1845_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1859_);
v___x_1861_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
lean_object* v___x_1862_; 
v___x_1862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1862_, 0, v___x_1861_);
lean_ctor_set(v___x_1862_, 1, v___x_1847_);
v_a_1829_ = v___x_1862_;
goto v___jp_1828_;
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
lean_del_object(v___x_1845_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
v_a_1864_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___x_1858_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1858_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
lean_del_object(v___x_1845_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_1872_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1856_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1856_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
else
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1887_; 
lean_del_object(v___x_1845_);
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
v_a_1880_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1882_ = v___x_1853_;
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1853_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1887_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v___x_1885_; 
if (v_isShared_1883_ == 0)
{
v___x_1885_ = v___x_1882_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1886_; 
v_reuseFailAlloc_1886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1886_, 0, v_a_1880_);
v___x_1885_ = v_reuseFailAlloc_1886_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
return v___x_1885_;
}
}
}
}
v___jp_1889_:
{
lean_object* v_searchFuel_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; 
v_searchFuel_1894_ = lean_ctor_get(v_config_1811_, 0);
v___x_1895_ = l_Lean_LocalDecl_fvarId(v_val_1843_);
lean_dec(v_val_1843_);
lean_inc(v_searchFuel_1894_);
lean_inc(v_mvarId_1812_);
v___x_1896_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_1812_, v___x_1895_, v_searchFuel_1894_, v___y_1890_, v___y_1892_, v___y_1891_, v___y_1893_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; uint8_t v___x_1898_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref(v___x_1896_);
v___x_1898_ = lean_unbox(v_a_1897_);
lean_dec(v_a_1897_);
if (v___x_1898_ == 0)
{
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
v_a_1837_ = v___x_1888_;
goto v___jp_1836_;
}
else
{
lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v___x_1899_ = lean_box(v___x_1822_);
v___x_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1899_);
v___x_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1901_, 0, v___x_1900_);
lean_ctor_set(v___x_1901_, 1, v___x_1847_);
v_a_1829_ = v___x_1901_;
goto v___jp_1828_;
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_1902_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1896_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1896_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
v___jp_1910_:
{
if (v___y_1915_ == 0)
{
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
v_a_1837_ = v___x_1888_;
goto v___jp_1836_;
}
else
{
v___y_1890_ = v___y_1911_;
v___y_1891_ = v___y_1912_;
v___y_1892_ = v___y_1913_;
v___y_1893_ = v___y_1914_;
goto v___jp_1889_;
}
}
v___jp_1917_:
{
if (v___y_1918_ == 0)
{
v___y_1890_ = v___y_1919_;
v___y_1891_ = v___y_1920_;
v___y_1892_ = v___y_1921_;
v___y_1893_ = v___y_1922_;
goto v___jp_1889_;
}
else
{
v___y_1911_ = v___y_1919_;
v___y_1912_ = v___y_1920_;
v___y_1913_ = v___y_1921_;
v___y_1914_ = v___y_1922_;
v___y_1915_ = v___x_1916_;
goto v___jp_1910_;
}
}
v___jp_1923_:
{
if (v___y_1929_ == 0)
{
v___y_1911_ = v___y_1925_;
v___y_1912_ = v___y_1926_;
v___y_1913_ = v___y_1927_;
v___y_1914_ = v___y_1928_;
v___y_1915_ = v___x_1916_;
goto v___jp_1910_;
}
else
{
v___y_1918_ = v___y_1924_;
v___y_1919_ = v___y_1925_;
v___y_1920_ = v___y_1926_;
v___y_1921_ = v___y_1927_;
v___y_1922_ = v___y_1928_;
goto v___jp_1917_;
}
}
v___jp_1930_:
{
uint8_t v_emptyType_1937_; 
v_emptyType_1937_ = lean_ctor_get_uint8(v_config_1811_, sizeof(void*)*1 + 1);
if (v_emptyType_1937_ == 0)
{
v___y_1924_ = v___y_1931_;
v___y_1925_ = v___y_1933_;
v___y_1926_ = v___y_1935_;
v___y_1927_ = v___y_1934_;
v___y_1928_ = v___y_1936_;
v___y_1929_ = v___x_1916_;
goto v___jp_1923_;
}
else
{
if (v___y_1932_ == 0)
{
v___y_1918_ = v___y_1931_;
v___y_1919_ = v___y_1933_;
v___y_1920_ = v___y_1935_;
v___y_1921_ = v___y_1934_;
v___y_1922_ = v___y_1936_;
goto v___jp_1917_;
}
else
{
v___y_1924_ = v___y_1931_;
v___y_1925_ = v___y_1933_;
v___y_1926_ = v___y_1935_;
v___y_1927_ = v___y_1934_;
v___y_1928_ = v___y_1936_;
v___y_1929_ = v___x_1916_;
goto v___jp_1923_;
}
}
}
v___jp_1938_:
{
if (v___y_1945_ == 0)
{
v___y_1931_ = v___y_1939_;
v___y_1932_ = v___y_1940_;
v___y_1933_ = v___y_1942_;
v___y_1934_ = v___y_1944_;
v___y_1935_ = v___y_1943_;
v___y_1936_ = v___y_1941_;
goto v___jp_1930_;
}
else
{
lean_object* v___x_1946_; 
lean_inc(v_val_1843_);
lean_inc(v_mvarId_1812_);
v___x_1946_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_1812_, v_val_1843_, v___y_1942_, v___y_1944_, v___y_1943_, v___y_1941_);
if (lean_obj_tag(v___x_1946_) == 0)
{
lean_object* v_a_1947_; uint8_t v___x_1948_; 
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
lean_inc(v_a_1947_);
lean_dec_ref(v___x_1946_);
v___x_1948_ = lean_unbox(v_a_1947_);
lean_dec(v_a_1947_);
if (v___x_1948_ == 0)
{
v___y_1931_ = v___y_1939_;
v___y_1932_ = v___y_1940_;
v___y_1933_ = v___y_1942_;
v___y_1934_ = v___y_1944_;
v___y_1935_ = v___y_1943_;
v___y_1936_ = v___y_1941_;
goto v___jp_1930_;
}
else
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
lean_dec(v_val_1843_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v___x_1949_ = lean_box(v___x_1822_);
v___x_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1949_);
v___x_1951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1950_);
lean_ctor_set(v___x_1951_, 1, v___x_1847_);
v_a_1829_ = v___x_1951_;
goto v___jp_1828_;
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
lean_dec(v_val_1843_);
lean_del_object(v___x_1826_);
lean_dec(v_snd_1824_);
lean_dec(v_mvarId_1812_);
lean_dec_ref(v_config_1811_);
v_a_1952_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1946_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1946_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
}
}
}
v___jp_1828_:
{
lean_object* v___x_1830_; lean_object* v___x_1832_; 
v___x_1830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1830_, 0, v_a_1829_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v___x_1830_);
v___x_1832_ = v___x_1826_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v___x_1830_);
lean_ctor_set(v_reuseFailAlloc_1834_, 1, v_snd_1824_);
v___x_1832_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1833_; 
v___x_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1832_);
return v___x_1833_;
}
}
v___jp_1836_:
{
lean_object* v___x_1838_; size_t v___x_1839_; size_t v___x_1840_; 
v___x_1838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1835_);
lean_ctor_set(v___x_1838_, 1, v_a_1837_);
v___x_1839_ = ((size_t)1ULL);
v___x_1840_ = lean_usize_add(v_i_1815_, v___x_1839_);
v_i_1815_ = v___x_1840_;
v_b_1816_ = v___x_1838_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___boxed(lean_object* v_config_2494_, lean_object* v_mvarId_2495_, lean_object* v_as_2496_, lean_object* v_sz_2497_, lean_object* v_i_2498_, lean_object* v_b_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_){
_start:
{
size_t v_sz_boxed_2505_; size_t v_i_boxed_2506_; lean_object* v_res_2507_; 
v_sz_boxed_2505_ = lean_unbox_usize(v_sz_2497_);
lean_dec(v_sz_2497_);
v_i_boxed_2506_ = lean_unbox_usize(v_i_2498_);
lean_dec(v_i_2498_);
v_res_2507_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(v_config_2494_, v_mvarId_2495_, v_as_2496_, v_sz_boxed_2505_, v_i_boxed_2506_, v_b_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec_ref(v_as_2496_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(lean_object* v_config_2508_, lean_object* v_mvarId_2509_, lean_object* v_as_2510_, size_t v_sz_2511_, size_t v_i_2512_, lean_object* v_b_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
uint8_t v___x_2519_; 
v___x_2519_ = lean_usize_dec_lt(v_i_2512_, v_sz_2511_);
if (v___x_2519_ == 0)
{
lean_object* v___x_2520_; 
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v___x_2520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2520_, 0, v_b_2513_);
return v___x_2520_;
}
else
{
lean_object* v_snd_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_3189_; 
v_snd_2521_ = lean_ctor_get(v_b_2513_, 1);
v_isSharedCheck_3189_ = !lean_is_exclusive(v_b_2513_);
if (v_isSharedCheck_3189_ == 0)
{
lean_object* v_unused_3190_; 
v_unused_3190_ = lean_ctor_get(v_b_2513_, 0);
lean_dec(v_unused_3190_);
v___x_2523_ = v_b_2513_;
v_isShared_2524_ = v_isSharedCheck_3189_;
goto v_resetjp_2522_;
}
else
{
lean_inc(v_snd_2521_);
lean_dec(v_b_2513_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_3189_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
lean_object* v_a_2526_; lean_object* v___x_2532_; lean_object* v_a_2534_; lean_object* v_a_2539_; 
v___x_2532_ = lean_box(0);
v_a_2539_ = lean_array_uget(v_as_2510_, v_i_2512_);
if (lean_obj_tag(v_a_2539_) == 0)
{
lean_del_object(v___x_2523_);
v_a_2534_ = v_snd_2521_;
goto v___jp_2533_;
}
else
{
lean_object* v_val_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_3188_; 
v_val_2540_ = lean_ctor_get(v_a_2539_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v_a_2539_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_2542_ = v_a_2539_;
v_isShared_2543_ = v_isSharedCheck_3188_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_val_2540_);
lean_dec(v_a_2539_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_3188_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2544_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___x_2585_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; uint8_t v___y_2612_; uint8_t v___x_2613_; lean_object* v___y_2615_; lean_object* v___y_2616_; lean_object* v___y_2617_; lean_object* v___y_2618_; uint8_t v___y_2619_; lean_object* v___y_2621_; lean_object* v___y_2622_; lean_object* v___y_2623_; lean_object* v___y_2624_; uint8_t v___y_2625_; uint8_t v___y_2626_; uint8_t v___y_2628_; uint8_t v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v___y_2639_; uint8_t v___y_2640_; uint8_t v___y_2641_; uint8_t v___y_2642_; 
v___x_2544_ = lean_box(0);
v___x_2585_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__0));
v___x_2613_ = l_Lean_LocalDecl_isImplementationDetail(v_val_2540_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2657_; uint8_t v___y_2659_; uint8_t v___y_2660_; lean_object* v___y_2661_; lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2672_; uint8_t v___y_2673_; uint8_t v___y_2674_; uint8_t v___y_2675_; lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v___y_2680_; lean_object* v___y_2681_; uint8_t v___y_2682_; uint8_t v___y_2683_; lean_object* v_a_2684_; lean_object* v___y_2688_; lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; uint8_t v___y_2692_; uint8_t v___y_2693_; lean_object* v___y_2779_; lean_object* v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; uint8_t v___y_2783_; uint8_t v___y_2784_; uint8_t v___y_2785_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v___y_2791_; uint8_t v___y_2792_; uint8_t v___y_2793_; uint8_t v___y_2794_; lean_object* v___y_2797_; lean_object* v___y_2798_; lean_object* v___y_2799_; lean_object* v___y_2800_; uint8_t v___y_2801_; uint8_t v___y_2802_; uint8_t v___y_2803_; lean_object* v___y_2816_; lean_object* v___y_2817_; lean_object* v___y_2818_; lean_object* v___y_2819_; uint8_t v___y_2820_; uint8_t v___y_2821_; uint8_t v___y_2822_; uint8_t v___y_2824_; uint8_t v_isHEq_2825_; lean_object* v___y_2826_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2835_; lean_object* v___y_2836_; lean_object* v___y_2837_; lean_object* v___y_2838_; uint8_t v___y_2839_; uint8_t v_isEq_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___x_3125_; 
v___x_2657_ = l_Lean_LocalDecl_type(v_val_2540_);
lean_inc_ref(v___x_2657_);
v___x_3125_ = l_Lean_Meta_matchNot_x3f(v___x_2657_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v_a_3126_; 
v_a_3126_ = lean_ctor_get(v___x_3125_, 0);
lean_inc(v_a_3126_);
lean_dec_ref(v___x_3125_);
if (lean_obj_tag(v_a_3126_) == 1)
{
lean_object* v_val_3127_; lean_object* v___x_3128_; 
v_val_3127_ = lean_ctor_get(v_a_3126_, 0);
lean_inc(v_val_3127_);
lean_dec_ref(v_a_3126_);
v___x_3128_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_3127_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v_a_3129_; 
v_a_3129_ = lean_ctor_get(v___x_3128_, 0);
lean_inc(v_a_3129_);
lean_dec_ref(v___x_3128_);
if (lean_obj_tag(v_a_3129_) == 1)
{
lean_object* v_val_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3171_; 
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec_ref(v_config_2508_);
v_val_3130_ = lean_ctor_get(v_a_3129_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v_a_3129_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3132_ = v_a_3129_;
v_isShared_3133_ = v_isSharedCheck_3171_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_val_3130_);
lean_dec(v_a_3129_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3171_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3134_; 
lean_inc(v_mvarId_2509_);
v___x_3134_ = l_Lean_MVarId_getType(v_mvarId_2509_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_3134_) == 0)
{
lean_object* v_a_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v_a_3135_ = lean_ctor_get(v___x_3134_, 0);
lean_inc(v_a_3135_);
lean_dec_ref(v___x_3134_);
v___x_3136_ = l_Lean_LocalDecl_toExpr(v_val_2540_);
v___x_3137_ = l_Lean_mkFVar(v_val_3130_);
v___x_3138_ = l_Lean_Expr_app___override(v___x_3136_, v___x_3137_);
v___x_3139_ = l_Lean_Meta_mkFalseElim(v_a_3135_, v___x_3138_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v___x_3141_; 
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_a_3140_);
lean_dec_ref(v___x_3139_);
v___x_3141_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2509_, v_a_3140_, v___y_2515_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v___x_3142_; lean_object* v___x_3144_; 
lean_dec_ref(v___x_3141_);
v___x_3142_ = lean_box(v___x_2519_);
if (v_isShared_3133_ == 0)
{
lean_ctor_set(v___x_3132_, 0, v___x_3142_);
v___x_3144_ = v___x_3132_;
goto v_reusejp_3143_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v___x_3142_);
v___x_3144_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3143_;
}
v_reusejp_3143_:
{
lean_object* v___x_3145_; 
v___x_3145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
lean_ctor_set(v___x_3145_, 1, v___x_2544_);
v_a_2526_ = v___x_3145_;
goto v___jp_2525_;
}
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3154_; 
lean_del_object(v___x_3132_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
v_a_3147_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3149_ = v___x_3141_;
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3141_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v___x_3152_; 
if (v_isShared_3150_ == 0)
{
v___x_3152_ = v___x_3149_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_a_3147_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
return v___x_3152_;
}
}
}
}
else
{
lean_object* v_a_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3162_; 
lean_del_object(v___x_3132_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_3155_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3162_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3162_ == 0)
{
v___x_3157_ = v___x_3139_;
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_a_3155_);
lean_dec(v___x_3139_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3160_; 
if (v_isShared_3158_ == 0)
{
v___x_3160_ = v___x_3157_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_a_3155_);
v___x_3160_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
return v___x_3160_;
}
}
}
}
else
{
lean_object* v_a_3163_; lean_object* v___x_3165_; uint8_t v_isShared_3166_; uint8_t v_isSharedCheck_3170_; 
lean_del_object(v___x_3132_);
lean_dec(v_val_3130_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_3163_ = lean_ctor_get(v___x_3134_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___x_3134_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3165_ = v___x_3134_;
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
else
{
lean_inc(v_a_3163_);
lean_dec(v___x_3134_);
v___x_3165_ = lean_box(0);
v_isShared_3166_ = v_isSharedCheck_3170_;
goto v_resetjp_3164_;
}
v_resetjp_3164_:
{
lean_object* v___x_3168_; 
if (v_isShared_3166_ == 0)
{
v___x_3168_ = v___x_3165_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_a_3163_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
return v___x_3168_;
}
}
}
}
}
else
{
lean_dec(v_a_3129_);
v___y_2991_ = v___y_2514_;
v___y_2992_ = v___y_2515_;
v___y_2993_ = v___y_2516_;
v___y_2994_ = v___y_2517_;
goto v___jp_2990_;
}
}
else
{
lean_object* v_a_3172_; lean_object* v___x_3174_; uint8_t v_isShared_3175_; uint8_t v_isSharedCheck_3179_; 
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_3172_ = lean_ctor_get(v___x_3128_, 0);
v_isSharedCheck_3179_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3179_ == 0)
{
v___x_3174_ = v___x_3128_;
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
else
{
lean_inc(v_a_3172_);
lean_dec(v___x_3128_);
v___x_3174_ = lean_box(0);
v_isShared_3175_ = v_isSharedCheck_3179_;
goto v_resetjp_3173_;
}
v_resetjp_3173_:
{
lean_object* v___x_3177_; 
if (v_isShared_3175_ == 0)
{
v___x_3177_ = v___x_3174_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v_a_3172_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
return v___x_3177_;
}
}
}
}
else
{
lean_dec(v_a_3126_);
v___y_2991_ = v___y_2514_;
v___y_2992_ = v___y_2515_;
v___y_2993_ = v___y_2516_;
v___y_2994_ = v___y_2517_;
goto v___jp_2990_;
}
}
else
{
lean_object* v_a_3180_; lean_object* v___x_3182_; uint8_t v_isShared_3183_; uint8_t v_isSharedCheck_3187_; 
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_3180_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3187_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3187_ == 0)
{
v___x_3182_ = v___x_3125_;
v_isShared_3183_ = v_isSharedCheck_3187_;
goto v_resetjp_3181_;
}
else
{
lean_inc(v_a_3180_);
lean_dec(v___x_3125_);
v___x_3182_ = lean_box(0);
v_isShared_3183_ = v_isSharedCheck_3187_;
goto v_resetjp_3181_;
}
v_resetjp_3181_:
{
lean_object* v___x_3185_; 
if (v_isShared_3183_ == 0)
{
v___x_3185_ = v___x_3182_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3186_; 
v_reuseFailAlloc_3186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3186_, 0, v_a_3180_);
v___x_3185_ = v_reuseFailAlloc_3186_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
return v___x_3185_;
}
}
}
v___jp_2658_:
{
uint8_t v_genDiseq_2665_; 
v_genDiseq_2665_ = lean_ctor_get_uint8(v_config_2508_, sizeof(void*)*1 + 2);
if (v_genDiseq_2665_ == 0)
{
lean_dec_ref(v___x_2657_);
v___y_2636_ = v___y_2664_;
v___y_2637_ = v___y_2661_;
v___y_2638_ = v___y_2663_;
v___y_2639_ = v___y_2662_;
v___y_2640_ = v___y_2659_;
v___y_2641_ = v___y_2660_;
v___y_2642_ = v___x_2613_;
goto v___jp_2635_;
}
else
{
uint8_t v___x_2666_; 
v___x_2666_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_2657_);
v___y_2636_ = v___y_2664_;
v___y_2637_ = v___y_2661_;
v___y_2638_ = v___y_2663_;
v___y_2639_ = v___y_2662_;
v___y_2640_ = v___y_2659_;
v___y_2641_ = v___y_2660_;
v___y_2642_ = v___x_2666_;
goto v___jp_2635_;
}
}
v___jp_2667_:
{
if (v___y_2675_ == 0)
{
lean_dec_ref(v___y_2668_);
v___y_2659_ = v___y_2673_;
v___y_2660_ = v___y_2674_;
v___y_2661_ = v___y_2670_;
v___y_2662_ = v___y_2671_;
v___y_2663_ = v___y_2669_;
v___y_2664_ = v___y_2672_;
goto v___jp_2658_;
}
else
{
lean_object* v___x_2676_; 
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v___x_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2676_, 0, v___y_2668_);
return v___x_2676_;
}
}
v___jp_2677_:
{
uint8_t v___x_2685_; 
v___x_2685_ = l_Lean_Exception_isInterrupt(v_a_2684_);
if (v___x_2685_ == 0)
{
uint8_t v___x_2686_; 
lean_inc_ref(v_a_2684_);
v___x_2686_ = l_Lean_Exception_isRuntime(v_a_2684_);
v___y_2668_ = v_a_2684_;
v___y_2669_ = v___y_2678_;
v___y_2670_ = v___y_2679_;
v___y_2671_ = v___y_2680_;
v___y_2672_ = v___y_2681_;
v___y_2673_ = v___y_2682_;
v___y_2674_ = v___y_2683_;
v___y_2675_ = v___x_2686_;
goto v___jp_2667_;
}
else
{
v___y_2668_ = v_a_2684_;
v___y_2669_ = v___y_2678_;
v___y_2670_ = v___y_2679_;
v___y_2671_ = v___y_2680_;
v___y_2672_ = v___y_2681_;
v___y_2673_ = v___y_2682_;
v___y_2674_ = v___y_2683_;
v___y_2675_ = v___x_2685_;
goto v___jp_2667_;
}
}
v___jp_2687_:
{
lean_object* v___x_2694_; 
lean_inc_ref(v___x_2657_);
v___x_2694_ = l_Lean_Meta_mkDecide(v___x_2657_, v___y_2689_, v___y_2690_, v___y_2688_, v___y_2691_);
if (lean_obj_tag(v___x_2694_) == 0)
{
lean_object* v_a_2695_; lean_object* v___x_2696_; uint8_t v_foApprox_2697_; uint8_t v_ctxApprox_2698_; uint8_t v_quasiPatternApprox_2699_; uint8_t v_constApprox_2700_; uint8_t v_isDefEqStuckEx_2701_; uint8_t v_unificationHints_2702_; uint8_t v_proofIrrelevance_2703_; uint8_t v_assignSyntheticOpaque_2704_; uint8_t v_offsetCnstrs_2705_; uint8_t v_etaStruct_2706_; uint8_t v_univApprox_2707_; uint8_t v_iota_2708_; uint8_t v_beta_2709_; uint8_t v_proj_2710_; uint8_t v_zeta_2711_; uint8_t v_zetaDelta_2712_; uint8_t v_zetaUnused_2713_; uint8_t v_zetaHave_2714_; lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2776_; 
v_a_2695_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2695_);
lean_dec_ref(v___x_2694_);
v___x_2696_ = l_Lean_Meta_Context_config(v___y_2689_);
v_foApprox_2697_ = lean_ctor_get_uint8(v___x_2696_, 0);
v_ctxApprox_2698_ = lean_ctor_get_uint8(v___x_2696_, 1);
v_quasiPatternApprox_2699_ = lean_ctor_get_uint8(v___x_2696_, 2);
v_constApprox_2700_ = lean_ctor_get_uint8(v___x_2696_, 3);
v_isDefEqStuckEx_2701_ = lean_ctor_get_uint8(v___x_2696_, 4);
v_unificationHints_2702_ = lean_ctor_get_uint8(v___x_2696_, 5);
v_proofIrrelevance_2703_ = lean_ctor_get_uint8(v___x_2696_, 6);
v_assignSyntheticOpaque_2704_ = lean_ctor_get_uint8(v___x_2696_, 7);
v_offsetCnstrs_2705_ = lean_ctor_get_uint8(v___x_2696_, 8);
v_etaStruct_2706_ = lean_ctor_get_uint8(v___x_2696_, 10);
v_univApprox_2707_ = lean_ctor_get_uint8(v___x_2696_, 11);
v_iota_2708_ = lean_ctor_get_uint8(v___x_2696_, 12);
v_beta_2709_ = lean_ctor_get_uint8(v___x_2696_, 13);
v_proj_2710_ = lean_ctor_get_uint8(v___x_2696_, 14);
v_zeta_2711_ = lean_ctor_get_uint8(v___x_2696_, 15);
v_zetaDelta_2712_ = lean_ctor_get_uint8(v___x_2696_, 16);
v_zetaUnused_2713_ = lean_ctor_get_uint8(v___x_2696_, 17);
v_zetaHave_2714_ = lean_ctor_get_uint8(v___x_2696_, 18);
v_isSharedCheck_2776_ = !lean_is_exclusive(v___x_2696_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2716_ = v___x_2696_;
v_isShared_2717_ = v_isSharedCheck_2776_;
goto v_resetjp_2715_;
}
else
{
lean_dec(v___x_2696_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2776_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
uint8_t v_trackZetaDelta_2718_; lean_object* v_zetaDeltaSet_2719_; lean_object* v_lctx_2720_; lean_object* v_localInstances_2721_; lean_object* v_defEqCtx_x3f_2722_; lean_object* v_synthPendingDepth_2723_; lean_object* v_canUnfold_x3f_2724_; uint8_t v_univApprox_2725_; uint8_t v_inTypeClassResolution_2726_; uint8_t v_cacheInferType_2727_; uint8_t v___x_2728_; lean_object* v_config_2730_; 
v_trackZetaDelta_2718_ = lean_ctor_get_uint8(v___y_2689_, sizeof(void*)*7);
v_zetaDeltaSet_2719_ = lean_ctor_get(v___y_2689_, 1);
v_lctx_2720_ = lean_ctor_get(v___y_2689_, 2);
v_localInstances_2721_ = lean_ctor_get(v___y_2689_, 3);
v_defEqCtx_x3f_2722_ = lean_ctor_get(v___y_2689_, 4);
v_synthPendingDepth_2723_ = lean_ctor_get(v___y_2689_, 5);
v_canUnfold_x3f_2724_ = lean_ctor_get(v___y_2689_, 6);
v_univApprox_2725_ = lean_ctor_get_uint8(v___y_2689_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2726_ = lean_ctor_get_uint8(v___y_2689_, sizeof(void*)*7 + 2);
v_cacheInferType_2727_ = lean_ctor_get_uint8(v___y_2689_, sizeof(void*)*7 + 3);
v___x_2728_ = 1;
if (v_isShared_2717_ == 0)
{
v_config_2730_ = v___x_2716_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 0, v_foApprox_2697_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 1, v_ctxApprox_2698_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 2, v_quasiPatternApprox_2699_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 3, v_constApprox_2700_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 4, v_isDefEqStuckEx_2701_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 5, v_unificationHints_2702_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 6, v_proofIrrelevance_2703_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 7, v_assignSyntheticOpaque_2704_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 8, v_offsetCnstrs_2705_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 10, v_etaStruct_2706_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 11, v_univApprox_2707_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 12, v_iota_2708_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 13, v_beta_2709_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 14, v_proj_2710_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 15, v_zeta_2711_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 16, v_zetaDelta_2712_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 17, v_zetaUnused_2713_);
lean_ctor_set_uint8(v_reuseFailAlloc_2775_, 18, v_zetaHave_2714_);
v_config_2730_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
uint64_t v___x_2731_; uint64_t v___x_2732_; uint64_t v___x_2733_; uint64_t v___x_2734_; uint64_t v___x_2735_; uint64_t v_key_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; 
lean_ctor_set_uint8(v_config_2730_, 9, v___x_2728_);
v___x_2731_ = l_Lean_Meta_Context_configKey(v___y_2689_);
v___x_2732_ = 2ULL;
v___x_2733_ = lean_uint64_shift_right(v___x_2731_, v___x_2732_);
v___x_2734_ = lean_uint64_shift_left(v___x_2733_, v___x_2732_);
v___x_2735_ = lean_uint64_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1);
v_key_2736_ = lean_uint64_lor(v___x_2734_, v___x_2735_);
v___x_2737_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2737_, 0, v_config_2730_);
lean_ctor_set_uint64(v___x_2737_, sizeof(void*)*1, v_key_2736_);
lean_inc(v_canUnfold_x3f_2724_);
lean_inc(v_synthPendingDepth_2723_);
lean_inc(v_defEqCtx_x3f_2722_);
lean_inc_ref(v_localInstances_2721_);
lean_inc_ref(v_lctx_2720_);
lean_inc(v_zetaDeltaSet_2719_);
v___x_2738_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2738_, 0, v___x_2737_);
lean_ctor_set(v___x_2738_, 1, v_zetaDeltaSet_2719_);
lean_ctor_set(v___x_2738_, 2, v_lctx_2720_);
lean_ctor_set(v___x_2738_, 3, v_localInstances_2721_);
lean_ctor_set(v___x_2738_, 4, v_defEqCtx_x3f_2722_);
lean_ctor_set(v___x_2738_, 5, v_synthPendingDepth_2723_);
lean_ctor_set(v___x_2738_, 6, v_canUnfold_x3f_2724_);
lean_ctor_set_uint8(v___x_2738_, sizeof(void*)*7, v_trackZetaDelta_2718_);
lean_ctor_set_uint8(v___x_2738_, sizeof(void*)*7 + 1, v_univApprox_2725_);
lean_ctor_set_uint8(v___x_2738_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2726_);
lean_ctor_set_uint8(v___x_2738_, sizeof(void*)*7 + 3, v_cacheInferType_2727_);
lean_inc(v___y_2691_);
lean_inc_ref(v___y_2688_);
lean_inc(v___y_2690_);
lean_inc(v_a_2695_);
v___x_2739_ = lean_whnf(v_a_2695_, v___x_2738_, v___y_2690_, v___y_2688_, v___y_2691_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; lean_object* v___x_2741_; uint8_t v___x_2742_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref(v___x_2739_);
v___x_2741_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4));
v___x_2742_ = l_Lean_Expr_isConstOf(v_a_2740_, v___x_2741_);
lean_dec(v_a_2740_);
if (v___x_2742_ == 0)
{
lean_dec(v_a_2695_);
v___y_2659_ = v___y_2692_;
v___y_2660_ = v___y_2693_;
v___y_2661_ = v___y_2689_;
v___y_2662_ = v___y_2690_;
v___y_2663_ = v___y_2688_;
v___y_2664_ = v___y_2691_;
goto v___jp_2658_;
}
else
{
lean_object* v___x_2743_; 
lean_inc(v_a_2695_);
v___x_2743_ = l_Lean_Meta_mkEqRefl(v_a_2695_, v___y_2689_, v___y_2690_, v___y_2688_, v___y_2691_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v_a_2744_; lean_object* v___x_2745_; 
v_a_2744_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2744_);
lean_dec_ref(v___x_2743_);
lean_inc(v_mvarId_2509_);
v___x_2745_ = l_Lean_MVarId_getType(v_mvarId_2509_, v___y_2689_, v___y_2690_, v___y_2688_, v___y_2691_);
if (lean_obj_tag(v___x_2745_) == 0)
{
lean_object* v_a_2746_; lean_object* v_nargs_2747_; lean_object* v___x_2748_; lean_object* v_dummy_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; 
v_a_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2746_);
lean_dec_ref(v___x_2745_);
v_nargs_2747_ = l_Lean_Expr_getAppNumArgs(v_a_2695_);
v___x_2748_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_dummy_2749_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8);
lean_inc(v_nargs_2747_);
v___x_2750_ = lean_mk_array(v_nargs_2747_, v_dummy_2749_);
v___x_2751_ = lean_unsigned_to_nat(1u);
v___x_2752_ = lean_nat_sub(v_nargs_2747_, v___x_2751_);
lean_dec(v_nargs_2747_);
v___x_2753_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2695_, v___x_2750_, v___x_2752_);
v___x_2754_ = lean_array_push(v___x_2753_, v_a_2744_);
v___x_2755_ = l_Lean_mkAppN(v___x_2748_, v___x_2754_);
lean_dec_ref(v___x_2754_);
lean_inc(v_val_2540_);
v___x_2756_ = l_Lean_LocalDecl_toExpr(v_val_2540_);
v___x_2757_ = l_Lean_Meta_mkAbsurd(v_a_2746_, v___x_2756_, v___x_2755_, v___y_2689_, v___y_2690_, v___y_2688_, v___y_2691_);
if (lean_obj_tag(v___x_2757_) == 0)
{
lean_object* v_a_2758_; lean_object* v___x_2759_; 
v_a_2758_ = lean_ctor_get(v___x_2757_, 0);
lean_inc(v_a_2758_);
lean_dec_ref(v___x_2757_);
lean_inc(v_mvarId_2509_);
v___x_2759_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2509_, v_a_2758_, v___y_2690_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2768_; 
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2540_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2768_ == 0)
{
lean_object* v_unused_2769_; 
v_unused_2769_ = lean_ctor_get(v___x_2759_, 0);
lean_dec(v_unused_2769_);
v___x_2761_ = v___x_2759_;
v_isShared_2762_ = v_isSharedCheck_2768_;
goto v_resetjp_2760_;
}
else
{
lean_dec(v___x_2759_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2768_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v___x_2763_; lean_object* v___x_2765_; 
v___x_2763_ = lean_box(v___x_2519_);
if (v_isShared_2762_ == 0)
{
lean_ctor_set_tag(v___x_2761_, 1);
lean_ctor_set(v___x_2761_, 0, v___x_2763_);
v___x_2765_ = v___x_2761_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v___x_2763_);
v___x_2765_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2766_, 0, v___x_2765_);
lean_ctor_set(v___x_2766_, 1, v___x_2544_);
v_a_2526_ = v___x_2766_;
goto v___jp_2525_;
}
}
}
else
{
lean_object* v_a_2770_; 
v_a_2770_ = lean_ctor_get(v___x_2759_, 0);
lean_inc(v_a_2770_);
lean_dec_ref(v___x_2759_);
v___y_2678_ = v___y_2688_;
v___y_2679_ = v___y_2689_;
v___y_2680_ = v___y_2690_;
v___y_2681_ = v___y_2691_;
v___y_2682_ = v___y_2692_;
v___y_2683_ = v___y_2693_;
v_a_2684_ = v_a_2770_;
goto v___jp_2677_;
}
}
else
{
lean_object* v_a_2771_; 
v_a_2771_ = lean_ctor_get(v___x_2757_, 0);
lean_inc(v_a_2771_);
lean_dec_ref(v___x_2757_);
v___y_2678_ = v___y_2688_;
v___y_2679_ = v___y_2689_;
v___y_2680_ = v___y_2690_;
v___y_2681_ = v___y_2691_;
v___y_2682_ = v___y_2692_;
v___y_2683_ = v___y_2693_;
v_a_2684_ = v_a_2771_;
goto v___jp_2677_;
}
}
else
{
lean_object* v_a_2772_; 
lean_dec(v_a_2744_);
lean_dec(v_a_2695_);
v_a_2772_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2772_);
lean_dec_ref(v___x_2745_);
v___y_2678_ = v___y_2688_;
v___y_2679_ = v___y_2689_;
v___y_2680_ = v___y_2690_;
v___y_2681_ = v___y_2691_;
v___y_2682_ = v___y_2692_;
v___y_2683_ = v___y_2693_;
v_a_2684_ = v_a_2772_;
goto v___jp_2677_;
}
}
else
{
lean_object* v_a_2773_; 
lean_dec(v_a_2695_);
v_a_2773_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2773_);
lean_dec_ref(v___x_2743_);
v___y_2678_ = v___y_2688_;
v___y_2679_ = v___y_2689_;
v___y_2680_ = v___y_2690_;
v___y_2681_ = v___y_2691_;
v___y_2682_ = v___y_2692_;
v___y_2683_ = v___y_2693_;
v_a_2684_ = v_a_2773_;
goto v___jp_2677_;
}
}
}
else
{
lean_object* v_a_2774_; 
lean_dec(v_a_2695_);
v_a_2774_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2774_);
lean_dec_ref(v___x_2739_);
v___y_2678_ = v___y_2688_;
v___y_2679_ = v___y_2689_;
v___y_2680_ = v___y_2690_;
v___y_2681_ = v___y_2691_;
v___y_2682_ = v___y_2692_;
v___y_2683_ = v___y_2693_;
v_a_2684_ = v_a_2774_;
goto v___jp_2677_;
}
}
}
}
else
{
lean_object* v_a_2777_; 
v_a_2777_ = lean_ctor_get(v___x_2694_, 0);
lean_inc(v_a_2777_);
lean_dec_ref(v___x_2694_);
v___y_2678_ = v___y_2688_;
v___y_2679_ = v___y_2689_;
v___y_2680_ = v___y_2690_;
v___y_2681_ = v___y_2691_;
v___y_2682_ = v___y_2692_;
v___y_2683_ = v___y_2693_;
v_a_2684_ = v_a_2777_;
goto v___jp_2677_;
}
}
v___jp_2778_:
{
if (v___y_2785_ == 0)
{
v___y_2659_ = v___y_2783_;
v___y_2660_ = v___y_2784_;
v___y_2661_ = v___y_2780_;
v___y_2662_ = v___y_2781_;
v___y_2663_ = v___y_2779_;
v___y_2664_ = v___y_2782_;
goto v___jp_2658_;
}
else
{
v___y_2688_ = v___y_2779_;
v___y_2689_ = v___y_2780_;
v___y_2690_ = v___y_2781_;
v___y_2691_ = v___y_2782_;
v___y_2692_ = v___y_2783_;
v___y_2693_ = v___y_2784_;
goto v___jp_2687_;
}
}
v___jp_2786_:
{
if (v___y_2794_ == 0)
{
lean_dec_ref(v___y_2788_);
v___y_2779_ = v___y_2787_;
v___y_2780_ = v___y_2789_;
v___y_2781_ = v___y_2790_;
v___y_2782_ = v___y_2791_;
v___y_2783_ = v___y_2792_;
v___y_2784_ = v___y_2793_;
v___y_2785_ = v___x_2613_;
goto v___jp_2778_;
}
else
{
uint8_t v___x_2795_; 
v___x_2795_ = l_Lean_Expr_hasFVar(v___y_2788_);
lean_dec_ref(v___y_2788_);
if (v___x_2795_ == 0)
{
v___y_2688_ = v___y_2787_;
v___y_2689_ = v___y_2789_;
v___y_2690_ = v___y_2790_;
v___y_2691_ = v___y_2791_;
v___y_2692_ = v___y_2792_;
v___y_2693_ = v___y_2793_;
goto v___jp_2687_;
}
else
{
v___y_2779_ = v___y_2787_;
v___y_2780_ = v___y_2789_;
v___y_2781_ = v___y_2790_;
v___y_2782_ = v___y_2791_;
v___y_2783_ = v___y_2792_;
v___y_2784_ = v___y_2793_;
v___y_2785_ = v___x_2613_;
goto v___jp_2778_;
}
}
}
v___jp_2796_:
{
lean_object* v___x_2804_; 
lean_inc_ref(v___x_2657_);
v___x_2804_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_2657_, v___y_2799_);
if (lean_obj_tag(v___x_2804_) == 0)
{
lean_object* v_a_2805_; uint8_t v___x_2806_; 
v_a_2805_ = lean_ctor_get(v___x_2804_, 0);
lean_inc(v_a_2805_);
lean_dec_ref(v___x_2804_);
v___x_2806_ = l_Lean_Expr_hasMVar(v_a_2805_);
if (v___x_2806_ == 0)
{
v___y_2787_ = v___y_2797_;
v___y_2788_ = v_a_2805_;
v___y_2789_ = v___y_2798_;
v___y_2790_ = v___y_2799_;
v___y_2791_ = v___y_2800_;
v___y_2792_ = v___y_2801_;
v___y_2793_ = v___y_2802_;
v___y_2794_ = v___y_2803_;
goto v___jp_2786_;
}
else
{
v___y_2787_ = v___y_2797_;
v___y_2788_ = v_a_2805_;
v___y_2789_ = v___y_2798_;
v___y_2790_ = v___y_2799_;
v___y_2791_ = v___y_2800_;
v___y_2792_ = v___y_2801_;
v___y_2793_ = v___y_2802_;
v___y_2794_ = v___x_2613_;
goto v___jp_2786_;
}
}
else
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_2807_ = lean_ctor_get(v___x_2804_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2804_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2809_ = v___x_2804_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v___x_2804_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2807_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
v___jp_2815_:
{
if (v___y_2822_ == 0)
{
v___y_2659_ = v___y_2820_;
v___y_2660_ = v___y_2821_;
v___y_2661_ = v___y_2817_;
v___y_2662_ = v___y_2818_;
v___y_2663_ = v___y_2816_;
v___y_2664_ = v___y_2819_;
goto v___jp_2658_;
}
else
{
v___y_2797_ = v___y_2816_;
v___y_2798_ = v___y_2817_;
v___y_2799_ = v___y_2818_;
v___y_2800_ = v___y_2819_;
v___y_2801_ = v___y_2820_;
v___y_2802_ = v___y_2821_;
v___y_2803_ = v___y_2822_;
goto v___jp_2796_;
}
}
v___jp_2823_:
{
uint8_t v_useDecide_2830_; 
v_useDecide_2830_ = lean_ctor_get_uint8(v_config_2508_, sizeof(void*)*1);
if (v_useDecide_2830_ == 0)
{
v___y_2816_ = v___y_2828_;
v___y_2817_ = v___y_2826_;
v___y_2818_ = v___y_2827_;
v___y_2819_ = v___y_2829_;
v___y_2820_ = v___y_2824_;
v___y_2821_ = v_isHEq_2825_;
v___y_2822_ = v___x_2613_;
goto v___jp_2815_;
}
else
{
uint8_t v___x_2831_; 
v___x_2831_ = l_Lean_Expr_hasFVar(v___x_2657_);
if (v___x_2831_ == 0)
{
v___y_2797_ = v___y_2828_;
v___y_2798_ = v___y_2826_;
v___y_2799_ = v___y_2827_;
v___y_2800_ = v___y_2829_;
v___y_2801_ = v___y_2824_;
v___y_2802_ = v_isHEq_2825_;
v___y_2803_ = v_useDecide_2830_;
goto v___jp_2796_;
}
else
{
v___y_2816_ = v___y_2828_;
v___y_2817_ = v___y_2826_;
v___y_2818_ = v___y_2827_;
v___y_2819_ = v___y_2829_;
v___y_2820_ = v___y_2824_;
v___y_2821_ = v_isHEq_2825_;
v___y_2822_ = v___x_2613_;
goto v___jp_2815_;
}
}
}
v___jp_2832_:
{
lean_object* v___x_2840_; 
v___x_2840_ = l_Lean_Meta_isExprDefEq(v___y_2838_, v___y_2834_, v___y_2837_, v___y_2833_, v___y_2836_, v___y_2835_);
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_object* v_a_2841_; uint8_t v___x_2842_; 
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2841_);
lean_dec_ref(v___x_2840_);
v___x_2842_ = lean_unbox(v_a_2841_);
lean_dec(v_a_2841_);
if (v___x_2842_ == 0)
{
v___y_2824_ = v___y_2839_;
v_isHEq_2825_ = v___x_2519_;
v___y_2826_ = v___y_2837_;
v___y_2827_ = v___y_2833_;
v___y_2828_ = v___y_2836_;
v___y_2829_ = v___y_2835_;
goto v___jp_2823_;
}
else
{
lean_object* v___x_2843_; 
lean_dec_ref(v___x_2657_);
lean_dec_ref(v_config_2508_);
lean_inc(v_mvarId_2509_);
v___x_2843_ = l_Lean_MVarId_getType(v_mvarId_2509_, v___y_2837_, v___y_2833_, v___y_2836_, v___y_2835_);
if (lean_obj_tag(v___x_2843_) == 0)
{
lean_object* v_a_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v_a_2844_ = lean_ctor_get(v___x_2843_, 0);
lean_inc(v_a_2844_);
lean_dec_ref(v___x_2843_);
v___x_2845_ = l_Lean_LocalDecl_toExpr(v_val_2540_);
v___x_2846_ = l_Lean_Meta_mkEqOfHEq(v___x_2845_, v___x_2519_, v___y_2837_, v___y_2833_, v___y_2836_, v___y_2835_);
if (lean_obj_tag(v___x_2846_) == 0)
{
lean_object* v_a_2847_; lean_object* v___x_2848_; 
v_a_2847_ = lean_ctor_get(v___x_2846_, 0);
lean_inc(v_a_2847_);
lean_dec_ref(v___x_2846_);
v___x_2848_ = l_Lean_Meta_mkNoConfusion(v_a_2844_, v_a_2847_, v___y_2837_, v___y_2833_, v___y_2836_, v___y_2835_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_a_2849_; lean_object* v___x_2850_; 
v_a_2849_ = lean_ctor_get(v___x_2848_, 0);
lean_inc(v_a_2849_);
lean_dec_ref(v___x_2848_);
v___x_2850_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2509_, v_a_2849_, v___y_2833_);
if (lean_obj_tag(v___x_2850_) == 0)
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; 
lean_dec_ref(v___x_2850_);
v___x_2851_ = lean_box(v___x_2519_);
v___x_2852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2851_);
v___x_2853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2852_);
lean_ctor_set(v___x_2853_, 1, v___x_2544_);
v_a_2526_ = v___x_2853_;
goto v___jp_2525_;
}
else
{
lean_object* v_a_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2861_; 
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
v_a_2854_ = lean_ctor_get(v___x_2850_, 0);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2850_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2856_ = v___x_2850_;
v_isShared_2857_ = v_isSharedCheck_2861_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_a_2854_);
lean_dec(v___x_2850_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2861_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v___x_2859_; 
if (v_isShared_2857_ == 0)
{
v___x_2859_ = v___x_2856_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v_a_2854_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
return v___x_2859_;
}
}
}
}
else
{
lean_object* v_a_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2869_; 
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_2862_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2869_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2864_ = v___x_2848_;
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_a_2862_);
lean_dec(v___x_2848_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2869_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___x_2867_; 
if (v_isShared_2865_ == 0)
{
v___x_2867_ = v___x_2864_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_a_2862_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
return v___x_2867_;
}
}
}
}
else
{
lean_object* v_a_2870_; lean_object* v___x_2872_; uint8_t v_isShared_2873_; uint8_t v_isSharedCheck_2877_; 
lean_dec(v_a_2844_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_2870_ = lean_ctor_get(v___x_2846_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v___x_2846_);
if (v_isSharedCheck_2877_ == 0)
{
v___x_2872_ = v___x_2846_;
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
else
{
lean_inc(v_a_2870_);
lean_dec(v___x_2846_);
v___x_2872_ = lean_box(0);
v_isShared_2873_ = v_isSharedCheck_2877_;
goto v_resetjp_2871_;
}
v_resetjp_2871_:
{
lean_object* v___x_2875_; 
if (v_isShared_2873_ == 0)
{
v___x_2875_ = v___x_2872_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_a_2870_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
return v___x_2875_;
}
}
}
}
else
{
lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2885_; 
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_2878_ = lean_ctor_get(v___x_2843_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2843_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2880_ = v___x_2843_;
v_isShared_2881_ = v_isSharedCheck_2885_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v___x_2843_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2885_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2883_; 
if (v_isShared_2881_ == 0)
{
v___x_2883_ = v___x_2880_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_a_2878_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
return v___x_2883_;
}
}
}
}
}
else
{
lean_object* v_a_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2893_; 
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_2886_ = lean_ctor_get(v___x_2840_, 0);
v_isSharedCheck_2893_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2893_ == 0)
{
v___x_2888_ = v___x_2840_;
v_isShared_2889_ = v_isSharedCheck_2893_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_a_2886_);
lean_dec(v___x_2840_);
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
v_reuseFailAlloc_2892_ = lean_alloc_ctor(1, 1, 0);
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
}
v___jp_2894_:
{
lean_object* v___x_2900_; 
lean_inc_ref(v___x_2657_);
v___x_2900_ = l_Lean_Meta_matchHEq_x3f(v___x_2657_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_object* v_a_2901_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
lean_dec_ref(v___x_2900_);
if (lean_obj_tag(v_a_2901_) == 1)
{
lean_object* v_val_2902_; lean_object* v_snd_2903_; lean_object* v_snd_2904_; lean_object* v_fst_2905_; lean_object* v_fst_2906_; lean_object* v_fst_2907_; lean_object* v_snd_2908_; lean_object* v___x_2909_; 
v_val_2902_ = lean_ctor_get(v_a_2901_, 0);
lean_inc(v_val_2902_);
lean_dec_ref(v_a_2901_);
v_snd_2903_ = lean_ctor_get(v_val_2902_, 1);
lean_inc(v_snd_2903_);
v_snd_2904_ = lean_ctor_get(v_snd_2903_, 1);
lean_inc(v_snd_2904_);
v_fst_2905_ = lean_ctor_get(v_val_2902_, 0);
lean_inc(v_fst_2905_);
lean_dec(v_val_2902_);
v_fst_2906_ = lean_ctor_get(v_snd_2903_, 0);
lean_inc(v_fst_2906_);
lean_dec(v_snd_2903_);
v_fst_2907_ = lean_ctor_get(v_snd_2904_, 0);
lean_inc(v_fst_2907_);
v_snd_2908_ = lean_ctor_get(v_snd_2904_, 1);
lean_inc(v_snd_2908_);
lean_dec(v_snd_2904_);
v___x_2909_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2906_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v_a_2910_; 
v_a_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2910_);
lean_dec_ref(v___x_2909_);
if (lean_obj_tag(v_a_2910_) == 1)
{
lean_object* v_val_2911_; lean_object* v___x_2912_; 
v_val_2911_ = lean_ctor_get(v_a_2910_, 0);
lean_inc(v_val_2911_);
lean_dec_ref(v_a_2910_);
v___x_2912_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2908_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v_a_2913_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_a_2913_);
lean_dec_ref(v___x_2912_);
if (lean_obj_tag(v_a_2913_) == 1)
{
lean_object* v_toConstantVal_2914_; lean_object* v_val_2915_; lean_object* v_toConstantVal_2916_; lean_object* v_name_2917_; lean_object* v_name_2918_; uint8_t v___x_2919_; 
v_toConstantVal_2914_ = lean_ctor_get(v_val_2911_, 0);
lean_inc_ref(v_toConstantVal_2914_);
lean_dec(v_val_2911_);
v_val_2915_ = lean_ctor_get(v_a_2913_, 0);
lean_inc(v_val_2915_);
lean_dec_ref(v_a_2913_);
v_toConstantVal_2916_ = lean_ctor_get(v_val_2915_, 0);
lean_inc_ref(v_toConstantVal_2916_);
lean_dec(v_val_2915_);
v_name_2917_ = lean_ctor_get(v_toConstantVal_2914_, 0);
lean_inc(v_name_2917_);
lean_dec_ref(v_toConstantVal_2914_);
v_name_2918_ = lean_ctor_get(v_toConstantVal_2916_, 0);
lean_inc(v_name_2918_);
lean_dec_ref(v_toConstantVal_2916_);
v___x_2919_ = lean_name_eq(v_name_2917_, v_name_2918_);
lean_dec(v_name_2918_);
lean_dec(v_name_2917_);
if (v___x_2919_ == 0)
{
v___y_2833_ = v___y_2897_;
v___y_2834_ = v_fst_2907_;
v___y_2835_ = v___y_2899_;
v___y_2836_ = v___y_2898_;
v___y_2837_ = v___y_2896_;
v___y_2838_ = v_fst_2905_;
v___y_2839_ = v_isEq_2895_;
goto v___jp_2832_;
}
else
{
if (v___x_2613_ == 0)
{
lean_dec(v_fst_2907_);
lean_dec(v_fst_2905_);
v___y_2824_ = v_isEq_2895_;
v_isHEq_2825_ = v___x_2519_;
v___y_2826_ = v___y_2896_;
v___y_2827_ = v___y_2897_;
v___y_2828_ = v___y_2898_;
v___y_2829_ = v___y_2899_;
goto v___jp_2823_;
}
else
{
v___y_2833_ = v___y_2897_;
v___y_2834_ = v_fst_2907_;
v___y_2835_ = v___y_2899_;
v___y_2836_ = v___y_2898_;
v___y_2837_ = v___y_2896_;
v___y_2838_ = v_fst_2905_;
v___y_2839_ = v_isEq_2895_;
goto v___jp_2832_;
}
}
}
else
{
lean_dec(v_a_2913_);
lean_dec(v_val_2911_);
lean_dec(v_fst_2907_);
lean_dec(v_fst_2905_);
v___y_2824_ = v_isEq_2895_;
v_isHEq_2825_ = v___x_2519_;
v___y_2826_ = v___y_2896_;
v___y_2827_ = v___y_2897_;
v___y_2828_ = v___y_2898_;
v___y_2829_ = v___y_2899_;
goto v___jp_2823_;
}
}
else
{
lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
lean_dec(v_val_2911_);
lean_dec(v_fst_2907_);
lean_dec(v_fst_2905_);
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_2920_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v___x_2912_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2912_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
}
else
{
lean_dec(v_a_2910_);
lean_dec(v_snd_2908_);
lean_dec(v_fst_2907_);
lean_dec(v_fst_2905_);
v___y_2824_ = v_isEq_2895_;
v_isHEq_2825_ = v___x_2519_;
v___y_2826_ = v___y_2896_;
v___y_2827_ = v___y_2897_;
v___y_2828_ = v___y_2898_;
v___y_2829_ = v___y_2899_;
goto v___jp_2823_;
}
}
else
{
lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2935_; 
lean_dec(v_snd_2908_);
lean_dec(v_fst_2907_);
lean_dec(v_fst_2905_);
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_2928_ = lean_ctor_get(v___x_2909_, 0);
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2930_ = v___x_2909_;
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_dec(v___x_2909_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_a_2928_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
}
else
{
lean_dec(v_a_2901_);
v___y_2824_ = v_isEq_2895_;
v_isHEq_2825_ = v___x_2613_;
v___y_2826_ = v___y_2896_;
v___y_2827_ = v___y_2897_;
v___y_2828_ = v___y_2898_;
v___y_2829_ = v___y_2899_;
goto v___jp_2823_;
}
}
else
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2943_; 
lean_dec_ref(v___x_2657_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_2936_ = lean_ctor_get(v___x_2900_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2900_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2938_ = v___x_2900_;
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___x_2900_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
}
}
v___jp_2944_:
{
lean_object* v___x_2949_; 
lean_inc_ref(v___x_2657_);
v___x_2949_ = l_Lean_Meta_matchEq_x3f(v___x_2657_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
if (lean_obj_tag(v___x_2949_) == 0)
{
lean_object* v_a_2950_; 
v_a_2950_ = lean_ctor_get(v___x_2949_, 0);
lean_inc(v_a_2950_);
lean_dec_ref(v___x_2949_);
if (lean_obj_tag(v_a_2950_) == 1)
{
lean_object* v_val_2951_; lean_object* v_snd_2952_; lean_object* v_fst_2953_; lean_object* v_snd_2954_; lean_object* v___x_2955_; 
v_val_2951_ = lean_ctor_get(v_a_2950_, 0);
lean_inc(v_val_2951_);
lean_dec_ref(v_a_2950_);
v_snd_2952_ = lean_ctor_get(v_val_2951_, 1);
lean_inc(v_snd_2952_);
lean_dec(v_val_2951_);
v_fst_2953_ = lean_ctor_get(v_snd_2952_, 0);
lean_inc(v_fst_2953_);
v_snd_2954_ = lean_ctor_get(v_snd_2952_, 1);
lean_inc(v_snd_2954_);
lean_dec(v_snd_2952_);
v___x_2955_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_2953_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_a_2956_; 
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_a_2956_);
lean_dec_ref(v___x_2955_);
if (lean_obj_tag(v_a_2956_) == 1)
{
lean_object* v_val_2957_; lean_object* v___x_2958_; 
v_val_2957_ = lean_ctor_get(v_a_2956_, 0);
lean_inc(v_val_2957_);
lean_dec_ref(v_a_2956_);
v___x_2958_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_2954_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
if (lean_obj_tag(v___x_2958_) == 0)
{
lean_object* v_a_2959_; 
v_a_2959_ = lean_ctor_get(v___x_2958_, 0);
lean_inc(v_a_2959_);
lean_dec_ref(v___x_2958_);
if (lean_obj_tag(v_a_2959_) == 1)
{
lean_object* v_toConstantVal_2960_; lean_object* v_val_2961_; lean_object* v_toConstantVal_2962_; lean_object* v_name_2963_; lean_object* v_name_2964_; uint8_t v___x_2965_; 
v_toConstantVal_2960_ = lean_ctor_get(v_val_2957_, 0);
lean_inc_ref(v_toConstantVal_2960_);
lean_dec(v_val_2957_);
v_val_2961_ = lean_ctor_get(v_a_2959_, 0);
lean_inc(v_val_2961_);
lean_dec_ref(v_a_2959_);
v_toConstantVal_2962_ = lean_ctor_get(v_val_2961_, 0);
lean_inc_ref(v_toConstantVal_2962_);
lean_dec(v_val_2961_);
v_name_2963_ = lean_ctor_get(v_toConstantVal_2960_, 0);
lean_inc(v_name_2963_);
lean_dec_ref(v_toConstantVal_2960_);
v_name_2964_ = lean_ctor_get(v_toConstantVal_2962_, 0);
lean_inc(v_name_2964_);
lean_dec_ref(v_toConstantVal_2962_);
v___x_2965_ = lean_name_eq(v_name_2963_, v_name_2964_);
lean_dec(v_name_2964_);
lean_dec(v_name_2963_);
if (v___x_2965_ == 0)
{
lean_dec_ref(v___x_2657_);
lean_dec_ref(v_config_2508_);
v___y_2546_ = v___y_2946_;
v___y_2547_ = v___y_2945_;
v___y_2548_ = v___y_2948_;
v___y_2549_ = v___y_2947_;
goto v___jp_2545_;
}
else
{
if (v___x_2613_ == 0)
{
lean_del_object(v___x_2542_);
v_isEq_2895_ = v___x_2519_;
v___y_2896_ = v___y_2945_;
v___y_2897_ = v___y_2946_;
v___y_2898_ = v___y_2947_;
v___y_2899_ = v___y_2948_;
goto v___jp_2894_;
}
else
{
lean_dec_ref(v___x_2657_);
lean_dec_ref(v_config_2508_);
v___y_2546_ = v___y_2946_;
v___y_2547_ = v___y_2945_;
v___y_2548_ = v___y_2948_;
v___y_2549_ = v___y_2947_;
goto v___jp_2545_;
}
}
}
else
{
lean_dec(v_a_2959_);
lean_dec(v_val_2957_);
lean_del_object(v___x_2542_);
v_isEq_2895_ = v___x_2519_;
v___y_2896_ = v___y_2945_;
v___y_2897_ = v___y_2946_;
v___y_2898_ = v___y_2947_;
v___y_2899_ = v___y_2948_;
goto v___jp_2894_;
}
}
else
{
lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2973_; 
lean_dec(v_val_2957_);
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_2966_ = lean_ctor_get(v___x_2958_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2968_ = v___x_2958_;
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v___x_2958_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2971_; 
if (v_isShared_2969_ == 0)
{
v___x_2971_ = v___x_2968_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_a_2966_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
return v___x_2971_;
}
}
}
}
else
{
lean_dec(v_a_2956_);
lean_dec(v_snd_2954_);
lean_del_object(v___x_2542_);
v_isEq_2895_ = v___x_2519_;
v___y_2896_ = v___y_2945_;
v___y_2897_ = v___y_2946_;
v___y_2898_ = v___y_2947_;
v___y_2899_ = v___y_2948_;
goto v___jp_2894_;
}
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
lean_dec(v_snd_2954_);
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_2974_ = lean_ctor_get(v___x_2955_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2955_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2955_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2977_ == 0)
{
v___x_2979_ = v___x_2976_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2974_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
}
else
{
lean_dec(v_a_2950_);
lean_del_object(v___x_2542_);
v_isEq_2895_ = v___x_2613_;
v___y_2896_ = v___y_2945_;
v___y_2897_ = v___y_2946_;
v___y_2898_ = v___y_2947_;
v___y_2899_ = v___y_2948_;
goto v___jp_2894_;
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_2982_ = lean_ctor_get(v___x_2949_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2949_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2949_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2949_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
}
v___jp_2990_:
{
lean_object* v___x_2995_; 
lean_inc_ref(v___x_2657_);
v___x_2995_ = l_refutableHasNotBit_x3f(v___x_2657_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_object* v_a_2996_; 
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
lean_inc(v_a_2996_);
lean_dec_ref(v___x_2995_);
if (lean_obj_tag(v_a_2996_) == 1)
{
lean_object* v_val_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3036_; 
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec_ref(v_config_2508_);
v_val_2997_ = lean_ctor_get(v_a_2996_, 0);
v_isSharedCheck_3036_ = !lean_is_exclusive(v_a_2996_);
if (v_isSharedCheck_3036_ == 0)
{
v___x_2999_ = v_a_2996_;
v_isShared_3000_ = v_isSharedCheck_3036_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_val_2997_);
lean_dec(v_a_2996_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3036_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3001_; 
lean_inc(v_mvarId_2509_);
v___x_3001_ = l_Lean_MVarId_getType(v_mvarId_2509_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3001_) == 0)
{
lean_object* v_a_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v_a_3002_ = lean_ctor_get(v___x_3001_, 0);
lean_inc(v_a_3002_);
lean_dec_ref(v___x_3001_);
v___x_3003_ = l_Lean_LocalDecl_toExpr(v_val_2540_);
v___x_3004_ = l_Lean_Meta_mkAbsurd(v_a_3002_, v_val_2997_, v___x_3003_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3006_; 
v_a_3005_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_a_3005_);
lean_dec_ref(v___x_3004_);
v___x_3006_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2509_, v_a_3005_, v___y_2992_);
if (lean_obj_tag(v___x_3006_) == 0)
{
lean_object* v___x_3007_; lean_object* v___x_3009_; 
lean_dec_ref(v___x_3006_);
v___x_3007_ = lean_box(v___x_2519_);
if (v_isShared_3000_ == 0)
{
lean_ctor_set(v___x_2999_, 0, v___x_3007_);
v___x_3009_ = v___x_2999_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v___x_3007_);
v___x_3009_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
lean_object* v___x_3010_; 
v___x_3010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3009_);
lean_ctor_set(v___x_3010_, 1, v___x_2544_);
v_a_2526_ = v___x_3010_;
goto v___jp_2525_;
}
}
else
{
lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3019_; 
lean_del_object(v___x_2999_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
v_a_3012_ = lean_ctor_get(v___x_3006_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_3006_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3014_ = v___x_3006_;
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_dec(v___x_3006_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3017_; 
if (v_isShared_3015_ == 0)
{
v___x_3017_ = v___x_3014_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_a_3012_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
else
{
lean_object* v_a_3020_; lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3027_; 
lean_del_object(v___x_2999_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_3020_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3022_ = v___x_3004_;
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
else
{
lean_inc(v_a_3020_);
lean_dec(v___x_3004_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_a_3020_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
else
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3035_; 
lean_del_object(v___x_2999_);
lean_dec(v_val_2997_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_3028_ = lean_ctor_get(v___x_3001_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_3001_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3030_ = v___x_3001_;
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_3001_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3033_; 
if (v_isShared_3031_ == 0)
{
v___x_3033_ = v___x_3030_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_a_3028_);
v___x_3033_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
return v___x_3033_;
}
}
}
}
}
else
{
lean_object* v___x_3037_; 
lean_dec(v_a_2996_);
lean_inc_ref(v___x_2657_);
v___x_3037_ = l_Lean_Meta_matchNe_x3f(v___x_2657_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3037_) == 0)
{
lean_object* v_a_3038_; 
v_a_3038_ = lean_ctor_get(v___x_3037_, 0);
lean_inc(v_a_3038_);
lean_dec_ref(v___x_3037_);
if (lean_obj_tag(v_a_3038_) == 1)
{
lean_object* v_val_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3108_; 
v_val_3039_ = lean_ctor_get(v_a_3038_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v_a_3038_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3041_ = v_a_3038_;
v_isShared_3042_ = v_isSharedCheck_3108_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_val_3039_);
lean_dec(v_a_3038_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3108_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v_snd_3043_; lean_object* v_fst_3044_; lean_object* v_snd_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3107_; 
v_snd_3043_ = lean_ctor_get(v_val_3039_, 1);
lean_inc(v_snd_3043_);
lean_dec(v_val_3039_);
v_fst_3044_ = lean_ctor_get(v_snd_3043_, 0);
v_snd_3045_ = lean_ctor_get(v_snd_3043_, 1);
v_isSharedCheck_3107_ = !lean_is_exclusive(v_snd_3043_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3047_ = v_snd_3043_;
v_isShared_3048_ = v_isSharedCheck_3107_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_snd_3045_);
lean_inc(v_fst_3044_);
lean_dec(v_snd_3043_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3107_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3049_; 
lean_inc(v_fst_3044_);
v___x_3049_ = l_Lean_Meta_isExprDefEq(v_fst_3044_, v_snd_3045_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; uint8_t v___x_3051_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref(v___x_3049_);
v___x_3051_ = lean_unbox(v_a_3050_);
lean_dec(v_a_3050_);
if (v___x_3051_ == 0)
{
lean_del_object(v___x_3047_);
lean_dec(v_fst_3044_);
lean_del_object(v___x_3041_);
v___y_2945_ = v___y_2991_;
v___y_2946_ = v___y_2992_;
v___y_2947_ = v___y_2993_;
v___y_2948_ = v___y_2994_;
goto v___jp_2944_;
}
else
{
lean_object* v___x_3052_; 
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec_ref(v_config_2508_);
lean_inc(v_mvarId_2509_);
v___x_3052_ = l_Lean_MVarId_getType(v_mvarId_2509_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v_a_3053_; lean_object* v___x_3054_; 
v_a_3053_ = lean_ctor_get(v___x_3052_, 0);
lean_inc(v_a_3053_);
lean_dec_ref(v___x_3052_);
v___x_3054_ = l_Lean_Meta_mkEqRefl(v_fst_3044_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3054_) == 0)
{
lean_object* v_a_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; 
v_a_3055_ = lean_ctor_get(v___x_3054_, 0);
lean_inc(v_a_3055_);
lean_dec_ref(v___x_3054_);
v___x_3056_ = l_Lean_LocalDecl_toExpr(v_val_2540_);
v___x_3057_ = l_Lean_Meta_mkAbsurd(v_a_3053_, v_a_3055_, v___x_3056_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_);
if (lean_obj_tag(v___x_3057_) == 0)
{
lean_object* v_a_3058_; lean_object* v___x_3059_; 
v_a_3058_ = lean_ctor_get(v___x_3057_, 0);
lean_inc(v_a_3058_);
lean_dec_ref(v___x_3057_);
v___x_3059_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2509_, v_a_3058_, v___y_2992_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_object* v___x_3060_; lean_object* v___x_3062_; 
lean_dec_ref(v___x_3059_);
v___x_3060_ = lean_box(v___x_2519_);
if (v_isShared_3042_ == 0)
{
lean_ctor_set(v___x_3041_, 0, v___x_3060_);
v___x_3062_ = v___x_3041_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v___x_3060_);
v___x_3062_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
lean_object* v___x_3064_; 
if (v_isShared_3048_ == 0)
{
lean_ctor_set(v___x_3047_, 1, v___x_2544_);
lean_ctor_set(v___x_3047_, 0, v___x_3062_);
v___x_3064_ = v___x_3047_;
goto v_reusejp_3063_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v___x_3062_);
lean_ctor_set(v_reuseFailAlloc_3065_, 1, v___x_2544_);
v___x_3064_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3063_;
}
v_reusejp_3063_:
{
v_a_2526_ = v___x_3064_;
goto v___jp_2525_;
}
}
}
else
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
lean_del_object(v___x_3047_);
lean_del_object(v___x_3041_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
v_a_3067_ = lean_ctor_get(v___x_3059_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3059_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3069_ = v___x_3059_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3059_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3082_; 
lean_del_object(v___x_3047_);
lean_del_object(v___x_3041_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_3075_ = lean_ctor_get(v___x_3057_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3077_ = v___x_3057_;
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_a_3075_);
lean_dec(v___x_3057_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_a_3075_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
else
{
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3090_; 
lean_dec(v_a_3053_);
lean_del_object(v___x_3047_);
lean_del_object(v___x_3041_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_3083_ = lean_ctor_get(v___x_3054_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3085_ = v___x_3054_;
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3054_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3088_; 
if (v_isShared_3086_ == 0)
{
v___x_3088_ = v___x_3085_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3083_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
}
else
{
lean_object* v_a_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
lean_del_object(v___x_3047_);
lean_dec(v_fst_3044_);
lean_del_object(v___x_3041_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_3091_ = lean_ctor_get(v___x_3052_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3052_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3093_ = v___x_3052_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_a_3091_);
lean_dec(v___x_3052_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_a_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
}
}
else
{
lean_object* v_a_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3106_; 
lean_del_object(v___x_3047_);
lean_dec(v_fst_3044_);
lean_del_object(v___x_3041_);
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_3099_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3106_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3106_ == 0)
{
v___x_3101_ = v___x_3049_;
v_isShared_3102_ = v_isSharedCheck_3106_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_a_3099_);
lean_dec(v___x_3049_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3106_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3104_; 
if (v_isShared_3102_ == 0)
{
v___x_3104_ = v___x_3101_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v_a_3099_);
v___x_3104_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
return v___x_3104_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3038_);
v___y_2945_ = v___y_2991_;
v___y_2946_ = v___y_2992_;
v___y_2947_ = v___y_2993_;
v___y_2948_ = v___y_2994_;
goto v___jp_2944_;
}
}
else
{
lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3116_; 
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_3109_ = lean_ctor_get(v___x_3037_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3111_ = v___x_3037_;
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_dec(v___x_3037_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3114_; 
if (v_isShared_3112_ == 0)
{
v___x_3114_ = v___x_3111_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_a_3109_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
}
}
}
else
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
lean_dec_ref(v___x_2657_);
lean_del_object(v___x_2542_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_3117_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_2995_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_2995_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3122_; 
if (v_isShared_3120_ == 0)
{
v___x_3122_ = v___x_3119_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_a_3117_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
}
}
else
{
lean_del_object(v___x_2542_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
v_a_2534_ = v___x_2585_;
goto v___jp_2533_;
}
v___jp_2545_:
{
lean_object* v___x_2550_; 
lean_inc(v_mvarId_2509_);
v___x_2550_ = l_Lean_MVarId_getType(v_mvarId_2509_, v___y_2547_, v___y_2546_, v___y_2549_, v___y_2548_);
if (lean_obj_tag(v___x_2550_) == 0)
{
lean_object* v_a_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; 
v_a_2551_ = lean_ctor_get(v___x_2550_, 0);
lean_inc(v_a_2551_);
lean_dec_ref(v___x_2550_);
v___x_2552_ = l_Lean_LocalDecl_toExpr(v_val_2540_);
v___x_2553_ = l_Lean_Meta_mkNoConfusion(v_a_2551_, v___x_2552_, v___y_2547_, v___y_2546_, v___y_2549_, v___y_2548_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; lean_object* v___x_2555_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
lean_dec_ref(v___x_2553_);
v___x_2555_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_2509_, v_a_2554_, v___y_2546_);
if (lean_obj_tag(v___x_2555_) == 0)
{
lean_object* v___x_2556_; lean_object* v___x_2558_; 
lean_dec_ref(v___x_2555_);
v___x_2556_ = lean_box(v___x_2519_);
if (v_isShared_2543_ == 0)
{
lean_ctor_set(v___x_2542_, 0, v___x_2556_);
v___x_2558_ = v___x_2542_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2560_; 
v_reuseFailAlloc_2560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2560_, 0, v___x_2556_);
v___x_2558_ = v_reuseFailAlloc_2560_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
lean_object* v___x_2559_; 
v___x_2559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2558_);
lean_ctor_set(v___x_2559_, 1, v___x_2544_);
v_a_2526_ = v___x_2559_;
goto v___jp_2525_;
}
}
else
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
lean_del_object(v___x_2542_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
v_a_2561_ = lean_ctor_get(v___x_2555_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2555_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v___x_2555_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v___x_2555_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2566_; 
if (v_isShared_2564_ == 0)
{
v___x_2566_ = v___x_2563_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_a_2561_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2576_; 
lean_del_object(v___x_2542_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_2569_ = lean_ctor_get(v___x_2553_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2553_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2571_ = v___x_2553_;
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2553_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2574_; 
if (v_isShared_2572_ == 0)
{
v___x_2574_ = v___x_2571_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_a_2569_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2584_; 
lean_del_object(v___x_2542_);
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
v_a_2577_ = lean_ctor_get(v___x_2550_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2579_ = v___x_2550_;
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2550_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2582_; 
if (v_isShared_2580_ == 0)
{
v___x_2582_ = v___x_2579_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2577_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
}
}
v___jp_2586_:
{
lean_object* v_searchFuel_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v_searchFuel_2591_ = lean_ctor_get(v_config_2508_, 0);
v___x_2592_ = l_Lean_LocalDecl_fvarId(v_val_2540_);
lean_dec(v_val_2540_);
lean_inc(v_searchFuel_2591_);
lean_inc(v_mvarId_2509_);
v___x_2593_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_2509_, v___x_2592_, v_searchFuel_2591_, v___y_2590_, v___y_2588_, v___y_2589_, v___y_2587_);
if (lean_obj_tag(v___x_2593_) == 0)
{
lean_object* v_a_2594_; uint8_t v___x_2595_; 
v_a_2594_ = lean_ctor_get(v___x_2593_, 0);
lean_inc(v_a_2594_);
lean_dec_ref(v___x_2593_);
v___x_2595_ = lean_unbox(v_a_2594_);
lean_dec(v_a_2594_);
if (v___x_2595_ == 0)
{
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
v_a_2534_ = v___x_2585_;
goto v___jp_2533_;
}
else
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v___x_2596_ = lean_box(v___x_2519_);
v___x_2597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
v___x_2598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
lean_ctor_set(v___x_2598_, 1, v___x_2544_);
v_a_2526_ = v___x_2598_;
goto v___jp_2525_;
}
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_2599_ = lean_ctor_get(v___x_2593_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2593_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2593_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2593_);
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
v___jp_2607_:
{
if (v___y_2612_ == 0)
{
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
v_a_2534_ = v___x_2585_;
goto v___jp_2533_;
}
else
{
v___y_2587_ = v___y_2608_;
v___y_2588_ = v___y_2609_;
v___y_2589_ = v___y_2610_;
v___y_2590_ = v___y_2611_;
goto v___jp_2586_;
}
}
v___jp_2614_:
{
if (v___y_2619_ == 0)
{
v___y_2587_ = v___y_2615_;
v___y_2588_ = v___y_2616_;
v___y_2589_ = v___y_2617_;
v___y_2590_ = v___y_2618_;
goto v___jp_2586_;
}
else
{
v___y_2608_ = v___y_2615_;
v___y_2609_ = v___y_2616_;
v___y_2610_ = v___y_2617_;
v___y_2611_ = v___y_2618_;
v___y_2612_ = v___x_2613_;
goto v___jp_2607_;
}
}
v___jp_2620_:
{
if (v___y_2626_ == 0)
{
v___y_2608_ = v___y_2621_;
v___y_2609_ = v___y_2622_;
v___y_2610_ = v___y_2623_;
v___y_2611_ = v___y_2624_;
v___y_2612_ = v___x_2613_;
goto v___jp_2607_;
}
else
{
v___y_2615_ = v___y_2621_;
v___y_2616_ = v___y_2622_;
v___y_2617_ = v___y_2623_;
v___y_2618_ = v___y_2624_;
v___y_2619_ = v___y_2625_;
goto v___jp_2614_;
}
}
v___jp_2627_:
{
uint8_t v_emptyType_2634_; 
v_emptyType_2634_ = lean_ctor_get_uint8(v_config_2508_, sizeof(void*)*1 + 1);
if (v_emptyType_2634_ == 0)
{
v___y_2621_ = v___y_2633_;
v___y_2622_ = v___y_2631_;
v___y_2623_ = v___y_2632_;
v___y_2624_ = v___y_2630_;
v___y_2625_ = v___y_2629_;
v___y_2626_ = v___x_2613_;
goto v___jp_2620_;
}
else
{
if (v___y_2628_ == 0)
{
v___y_2615_ = v___y_2633_;
v___y_2616_ = v___y_2631_;
v___y_2617_ = v___y_2632_;
v___y_2618_ = v___y_2630_;
v___y_2619_ = v___y_2629_;
goto v___jp_2614_;
}
else
{
v___y_2621_ = v___y_2633_;
v___y_2622_ = v___y_2631_;
v___y_2623_ = v___y_2632_;
v___y_2624_ = v___y_2630_;
v___y_2625_ = v___y_2629_;
v___y_2626_ = v___x_2613_;
goto v___jp_2620_;
}
}
}
v___jp_2635_:
{
if (v___y_2642_ == 0)
{
v___y_2628_ = v___y_2640_;
v___y_2629_ = v___y_2641_;
v___y_2630_ = v___y_2637_;
v___y_2631_ = v___y_2639_;
v___y_2632_ = v___y_2638_;
v___y_2633_ = v___y_2636_;
goto v___jp_2627_;
}
else
{
lean_object* v___x_2643_; 
lean_inc(v_val_2540_);
lean_inc(v_mvarId_2509_);
v___x_2643_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_2509_, v_val_2540_, v___y_2637_, v___y_2639_, v___y_2638_, v___y_2636_);
if (lean_obj_tag(v___x_2643_) == 0)
{
lean_object* v_a_2644_; uint8_t v___x_2645_; 
v_a_2644_ = lean_ctor_get(v___x_2643_, 0);
lean_inc(v_a_2644_);
lean_dec_ref(v___x_2643_);
v___x_2645_ = lean_unbox(v_a_2644_);
lean_dec(v_a_2644_);
if (v___x_2645_ == 0)
{
v___y_2628_ = v___y_2640_;
v___y_2629_ = v___y_2641_;
v___y_2630_ = v___y_2637_;
v___y_2631_ = v___y_2639_;
v___y_2632_ = v___y_2638_;
v___y_2633_ = v___y_2636_;
goto v___jp_2627_;
}
else
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
lean_dec(v_val_2540_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v___x_2646_ = lean_box(v___x_2519_);
v___x_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2646_);
v___x_2648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2647_);
lean_ctor_set(v___x_2648_, 1, v___x_2544_);
v_a_2526_ = v___x_2648_;
goto v___jp_2525_;
}
}
else
{
lean_object* v_a_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2656_; 
lean_dec(v_val_2540_);
lean_del_object(v___x_2523_);
lean_dec(v_snd_2521_);
lean_dec(v_mvarId_2509_);
lean_dec_ref(v_config_2508_);
v_a_2649_ = lean_ctor_get(v___x_2643_, 0);
v_isSharedCheck_2656_ = !lean_is_exclusive(v___x_2643_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2651_ = v___x_2643_;
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_a_2649_);
lean_dec(v___x_2643_);
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
}
v___jp_2525_:
{
lean_object* v___x_2527_; lean_object* v___x_2529_; 
v___x_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2527_, 0, v_a_2526_);
if (v_isShared_2524_ == 0)
{
lean_ctor_set(v___x_2523_, 0, v___x_2527_);
v___x_2529_ = v___x_2523_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2527_);
lean_ctor_set(v_reuseFailAlloc_2531_, 1, v_snd_2521_);
v___x_2529_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
lean_object* v___x_2530_; 
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
return v___x_2530_;
}
}
v___jp_2533_:
{
lean_object* v___x_2535_; size_t v___x_2536_; size_t v___x_2537_; lean_object* v___x_2538_; 
v___x_2535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2532_);
lean_ctor_set(v___x_2535_, 1, v_a_2534_);
v___x_2536_ = ((size_t)1ULL);
v___x_2537_ = lean_usize_add(v_i_2512_, v___x_2536_);
v___x_2538_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4(v_config_2508_, v_mvarId_2509_, v_as_2510_, v_sz_2511_, v___x_2537_, v___x_2535_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
return v___x_2538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1___boxed(lean_object* v_config_3191_, lean_object* v_mvarId_3192_, lean_object* v_as_3193_, lean_object* v_sz_3194_, lean_object* v_i_3195_, lean_object* v_b_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_){
_start:
{
size_t v_sz_boxed_3202_; size_t v_i_boxed_3203_; lean_object* v_res_3204_; 
v_sz_boxed_3202_ = lean_unbox_usize(v_sz_3194_);
lean_dec(v_sz_3194_);
v_i_boxed_3203_ = lean_unbox_usize(v_i_3195_);
lean_dec(v_i_3195_);
v_res_3204_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(v_config_3191_, v_mvarId_3192_, v_as_3193_, v_sz_boxed_3202_, v_i_boxed_3203_, v_b_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec(v___y_3198_);
lean_dec_ref(v___y_3197_);
lean_dec_ref(v_as_3193_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(lean_object* v_config_3208_, lean_object* v_mvarId_3209_, lean_object* v_as_3210_, size_t v_sz_3211_, size_t v_i_3212_, lean_object* v_b_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_){
_start:
{
uint8_t v___x_3219_; 
v___x_3219_ = lean_usize_dec_lt(v_i_3212_, v_sz_3211_);
if (v___x_3219_ == 0)
{
lean_object* v___x_3220_; 
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v___x_3220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3220_, 0, v_b_3213_);
return v___x_3220_;
}
else
{
lean_object* v_snd_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3909_; 
v_snd_3221_ = lean_ctor_get(v_b_3213_, 1);
v_isSharedCheck_3909_ = !lean_is_exclusive(v_b_3213_);
if (v_isSharedCheck_3909_ == 0)
{
lean_object* v_unused_3910_; 
v_unused_3910_ = lean_ctor_get(v_b_3213_, 0);
lean_dec(v_unused_3910_);
v___x_3223_ = v_b_3213_;
v_isShared_3224_ = v_isSharedCheck_3909_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_snd_3221_);
lean_dec(v_b_3213_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3909_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v_a_3226_; lean_object* v___x_3232_; lean_object* v_a_3234_; lean_object* v_a_3239_; 
v___x_3232_ = lean_box(0);
v_a_3239_ = lean_array_uget(v_as_3210_, v_i_3212_);
if (lean_obj_tag(v_a_3239_) == 0)
{
lean_del_object(v___x_3223_);
v_a_3234_ = v_snd_3221_;
goto v___jp_3233_;
}
else
{
lean_object* v_val_3240_; lean_object* v___x_3242_; uint8_t v_isShared_3243_; uint8_t v_isSharedCheck_3908_; 
v_val_3240_ = lean_ctor_get(v_a_3239_, 0);
v_isSharedCheck_3908_ = !lean_is_exclusive(v_a_3239_);
if (v_isSharedCheck_3908_ == 0)
{
v___x_3242_ = v_a_3239_;
v_isShared_3243_ = v_isSharedCheck_3908_;
goto v_resetjp_3241_;
}
else
{
lean_inc(v_val_3240_);
lean_dec(v_a_3239_);
v___x_3242_ = lean_box(0);
v_isShared_3243_ = v_isSharedCheck_3908_;
goto v_resetjp_3241_;
}
v_resetjp_3241_:
{
lean_object* v___x_3244_; lean_object* v___y_3246_; lean_object* v___y_3247_; lean_object* v___y_3248_; lean_object* v___y_3249_; lean_object* v___x_3286_; lean_object* v___y_3288_; lean_object* v___y_3289_; lean_object* v___y_3290_; lean_object* v___y_3291_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; uint8_t v___y_3314_; uint8_t v___x_3315_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; uint8_t v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3323_; lean_object* v___y_3324_; lean_object* v___y_3325_; uint8_t v___y_3326_; lean_object* v___y_3327_; uint8_t v___y_3328_; uint8_t v___y_3330_; uint8_t v___y_3331_; lean_object* v___y_3332_; lean_object* v___y_3333_; lean_object* v___y_3334_; lean_object* v___y_3335_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; uint8_t v___y_3341_; uint8_t v___y_3342_; lean_object* v___y_3343_; uint8_t v___y_3344_; 
v___x_3244_ = lean_box(0);
v___x_3286_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3315_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3240_);
if (v___x_3315_ == 0)
{
lean_object* v___x_3360_; uint8_t v___y_3362_; uint8_t v___y_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3371_; lean_object* v___y_3372_; uint8_t v___y_3373_; uint8_t v___y_3374_; lean_object* v___y_3375_; lean_object* v___y_3376_; lean_object* v___y_3377_; uint8_t v___y_3378_; lean_object* v___y_3381_; uint8_t v___y_3382_; lean_object* v___y_3383_; lean_object* v___y_3384_; uint8_t v___y_3385_; lean_object* v___y_3386_; lean_object* v_a_3387_; lean_object* v___y_3391_; uint8_t v___y_3392_; uint8_t v___y_3393_; lean_object* v___y_3394_; lean_object* v___y_3395_; lean_object* v___y_3396_; lean_object* v___y_3489_; uint8_t v___y_3490_; uint8_t v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3494_; uint8_t v___y_3495_; lean_object* v___y_3497_; lean_object* v___y_3498_; uint8_t v___y_3499_; lean_object* v___y_3500_; lean_object* v___y_3501_; uint8_t v___y_3502_; lean_object* v___y_3503_; uint8_t v___y_3504_; lean_object* v___y_3507_; uint8_t v___y_3508_; lean_object* v___y_3509_; lean_object* v___y_3510_; uint8_t v___y_3511_; lean_object* v___y_3512_; uint8_t v___y_3513_; lean_object* v___y_3526_; uint8_t v___y_3527_; uint8_t v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; uint8_t v___y_3532_; uint8_t v___y_3534_; uint8_t v_isHEq_3535_; lean_object* v___y_3536_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3539_; lean_object* v___y_3543_; uint8_t v___y_3544_; lean_object* v___y_3545_; lean_object* v___y_3546_; lean_object* v___y_3547_; lean_object* v___y_3548_; lean_object* v___y_3549_; uint8_t v_isEq_3606_; lean_object* v___y_3607_; lean_object* v___y_3608_; lean_object* v___y_3609_; lean_object* v___y_3610_; lean_object* v___y_3656_; lean_object* v___y_3657_; lean_object* v___y_3658_; lean_object* v___y_3659_; lean_object* v___y_3702_; lean_object* v___y_3703_; lean_object* v___y_3704_; lean_object* v___y_3705_; lean_object* v___x_3838_; 
v___x_3360_ = l_Lean_LocalDecl_type(v_val_3240_);
lean_inc_ref(v___x_3360_);
v___x_3838_ = l_Lean_Meta_matchNot_x3f(v___x_3360_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v_a_3839_; 
v_a_3839_ = lean_ctor_get(v___x_3838_, 0);
lean_inc(v_a_3839_);
lean_dec_ref(v___x_3838_);
if (lean_obj_tag(v_a_3839_) == 1)
{
lean_object* v_val_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3899_; 
v_val_3840_ = lean_ctor_get(v_a_3839_, 0);
v_isSharedCheck_3899_ = !lean_is_exclusive(v_a_3839_);
if (v_isSharedCheck_3899_ == 0)
{
v___x_3842_ = v_a_3839_;
v_isShared_3843_ = v_isSharedCheck_3899_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_val_3840_);
lean_dec(v_a_3839_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3899_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v___x_3844_; 
v___x_3844_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_3840_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
if (lean_obj_tag(v___x_3844_) == 0)
{
lean_object* v_a_3845_; 
v_a_3845_ = lean_ctor_get(v___x_3844_, 0);
lean_inc(v_a_3845_);
lean_dec_ref(v___x_3844_);
if (lean_obj_tag(v_a_3845_) == 1)
{
lean_object* v_val_3846_; lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3890_; 
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec_ref(v_config_3208_);
v_val_3846_ = lean_ctor_get(v_a_3845_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v_a_3845_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3848_ = v_a_3845_;
v_isShared_3849_ = v_isSharedCheck_3890_;
goto v_resetjp_3847_;
}
else
{
lean_inc(v_val_3846_);
lean_dec(v_a_3845_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3890_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v___x_3850_; 
lean_inc(v_mvarId_3209_);
v___x_3850_ = l_Lean_MVarId_getType(v_mvarId_3209_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
if (lean_obj_tag(v___x_3850_) == 0)
{
lean_object* v_a_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; 
v_a_3851_ = lean_ctor_get(v___x_3850_, 0);
lean_inc(v_a_3851_);
lean_dec_ref(v___x_3850_);
v___x_3852_ = l_Lean_LocalDecl_toExpr(v_val_3240_);
v___x_3853_ = l_Lean_mkFVar(v_val_3846_);
v___x_3854_ = l_Lean_Expr_app___override(v___x_3852_, v___x_3853_);
v___x_3855_ = l_Lean_Meta_mkFalseElim(v_a_3851_, v___x_3854_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
if (lean_obj_tag(v___x_3855_) == 0)
{
lean_object* v_a_3856_; lean_object* v___x_3857_; 
v_a_3856_ = lean_ctor_get(v___x_3855_, 0);
lean_inc(v_a_3856_);
lean_dec_ref(v___x_3855_);
v___x_3857_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3209_, v_a_3856_, v___y_3215_);
if (lean_obj_tag(v___x_3857_) == 0)
{
lean_object* v___x_3858_; lean_object* v___x_3860_; 
lean_dec_ref(v___x_3857_);
v___x_3858_ = lean_box(v___x_3219_);
if (v_isShared_3849_ == 0)
{
lean_ctor_set(v___x_3848_, 0, v___x_3858_);
v___x_3860_ = v___x_3848_;
goto v_reusejp_3859_;
}
else
{
lean_object* v_reuseFailAlloc_3865_; 
v_reuseFailAlloc_3865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3865_, 0, v___x_3858_);
v___x_3860_ = v_reuseFailAlloc_3865_;
goto v_reusejp_3859_;
}
v_reusejp_3859_:
{
lean_object* v___x_3861_; lean_object* v___x_3863_; 
v___x_3861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3860_);
lean_ctor_set(v___x_3861_, 1, v___x_3244_);
if (v_isShared_3843_ == 0)
{
lean_ctor_set_tag(v___x_3842_, 0);
lean_ctor_set(v___x_3842_, 0, v___x_3861_);
v___x_3863_ = v___x_3842_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v___x_3861_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
v_a_3226_ = v___x_3863_;
goto v___jp_3225_;
}
}
}
else
{
lean_object* v_a_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3873_; 
lean_del_object(v___x_3848_);
lean_del_object(v___x_3842_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
v_a_3866_ = lean_ctor_get(v___x_3857_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3868_ = v___x_3857_;
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_a_3866_);
lean_dec(v___x_3857_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
lean_object* v___x_3871_; 
if (v_isShared_3869_ == 0)
{
v___x_3871_ = v___x_3868_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_a_3866_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
else
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3881_; 
lean_del_object(v___x_3848_);
lean_del_object(v___x_3842_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3874_ = lean_ctor_get(v___x_3855_, 0);
v_isSharedCheck_3881_ = !lean_is_exclusive(v___x_3855_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3876_ = v___x_3855_;
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v___x_3855_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3879_; 
if (v_isShared_3877_ == 0)
{
v___x_3879_ = v___x_3876_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_a_3874_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
return v___x_3879_;
}
}
}
}
else
{
lean_object* v_a_3882_; lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3889_; 
lean_del_object(v___x_3848_);
lean_dec(v_val_3846_);
lean_del_object(v___x_3842_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3882_ = lean_ctor_get(v___x_3850_, 0);
v_isSharedCheck_3889_ = !lean_is_exclusive(v___x_3850_);
if (v_isSharedCheck_3889_ == 0)
{
v___x_3884_ = v___x_3850_;
v_isShared_3885_ = v_isSharedCheck_3889_;
goto v_resetjp_3883_;
}
else
{
lean_inc(v_a_3882_);
lean_dec(v___x_3850_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3889_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v___x_3887_; 
if (v_isShared_3885_ == 0)
{
v___x_3887_ = v___x_3884_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3888_; 
v_reuseFailAlloc_3888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3888_, 0, v_a_3882_);
v___x_3887_ = v_reuseFailAlloc_3888_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
return v___x_3887_;
}
}
}
}
}
else
{
lean_dec(v_a_3845_);
lean_del_object(v___x_3842_);
v___y_3702_ = v___y_3214_;
v___y_3703_ = v___y_3215_;
v___y_3704_ = v___y_3216_;
v___y_3705_ = v___y_3217_;
goto v___jp_3701_;
}
}
else
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3898_; 
lean_del_object(v___x_3842_);
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3891_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3898_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3898_ == 0)
{
v___x_3893_ = v___x_3844_;
v_isShared_3894_ = v_isSharedCheck_3898_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v___x_3844_);
v___x_3893_ = lean_box(0);
v_isShared_3894_ = v_isSharedCheck_3898_;
goto v_resetjp_3892_;
}
v_resetjp_3892_:
{
lean_object* v___x_3896_; 
if (v_isShared_3894_ == 0)
{
v___x_3896_ = v___x_3893_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3897_; 
v_reuseFailAlloc_3897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3897_, 0, v_a_3891_);
v___x_3896_ = v_reuseFailAlloc_3897_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
return v___x_3896_;
}
}
}
}
}
else
{
lean_dec(v_a_3839_);
v___y_3702_ = v___y_3214_;
v___y_3703_ = v___y_3215_;
v___y_3704_ = v___y_3216_;
v___y_3705_ = v___y_3217_;
goto v___jp_3701_;
}
}
else
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3907_; 
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3900_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3902_ = v___x_3838_;
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v___x_3838_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3905_; 
if (v_isShared_3903_ == 0)
{
v___x_3905_ = v___x_3902_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_a_3900_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
return v___x_3905_;
}
}
}
v___jp_3361_:
{
uint8_t v_genDiseq_3368_; 
v_genDiseq_3368_ = lean_ctor_get_uint8(v_config_3208_, sizeof(void*)*1 + 2);
if (v_genDiseq_3368_ == 0)
{
lean_dec_ref(v___x_3360_);
v___y_3338_ = v___y_3365_;
v___y_3339_ = v___y_3364_;
v___y_3340_ = v___y_3367_;
v___y_3341_ = v___y_3362_;
v___y_3342_ = v___y_3363_;
v___y_3343_ = v___y_3366_;
v___y_3344_ = v___x_3315_;
goto v___jp_3337_;
}
else
{
uint8_t v___x_3369_; 
v___x_3369_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_3360_);
v___y_3338_ = v___y_3365_;
v___y_3339_ = v___y_3364_;
v___y_3340_ = v___y_3367_;
v___y_3341_ = v___y_3362_;
v___y_3342_ = v___y_3363_;
v___y_3343_ = v___y_3366_;
v___y_3344_ = v___x_3369_;
goto v___jp_3337_;
}
}
v___jp_3370_:
{
if (v___y_3378_ == 0)
{
lean_dec_ref(v___y_3372_);
v___y_3362_ = v___y_3373_;
v___y_3363_ = v___y_3374_;
v___y_3364_ = v___y_3376_;
v___y_3365_ = v___y_3377_;
v___y_3366_ = v___y_3375_;
v___y_3367_ = v___y_3371_;
goto v___jp_3361_;
}
else
{
lean_object* v___x_3379_; 
lean_dec_ref(v___x_3360_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v___x_3379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3379_, 0, v___y_3372_);
return v___x_3379_;
}
}
v___jp_3380_:
{
uint8_t v___x_3388_; 
v___x_3388_ = l_Lean_Exception_isInterrupt(v_a_3387_);
if (v___x_3388_ == 0)
{
uint8_t v___x_3389_; 
lean_inc_ref(v_a_3387_);
v___x_3389_ = l_Lean_Exception_isRuntime(v_a_3387_);
v___y_3371_ = v___y_3381_;
v___y_3372_ = v_a_3387_;
v___y_3373_ = v___y_3382_;
v___y_3374_ = v___y_3385_;
v___y_3375_ = v___y_3384_;
v___y_3376_ = v___y_3383_;
v___y_3377_ = v___y_3386_;
v___y_3378_ = v___x_3389_;
goto v___jp_3370_;
}
else
{
v___y_3371_ = v___y_3381_;
v___y_3372_ = v_a_3387_;
v___y_3373_ = v___y_3382_;
v___y_3374_ = v___y_3385_;
v___y_3375_ = v___y_3384_;
v___y_3376_ = v___y_3383_;
v___y_3377_ = v___y_3386_;
v___y_3378_ = v___x_3388_;
goto v___jp_3370_;
}
}
v___jp_3390_:
{
lean_object* v___x_3397_; 
lean_inc_ref(v___x_3360_);
v___x_3397_ = l_Lean_Meta_mkDecide(v___x_3360_, v___y_3395_, v___y_3396_, v___y_3394_, v___y_3391_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; lean_object* v___x_3399_; uint8_t v_foApprox_3400_; uint8_t v_ctxApprox_3401_; uint8_t v_quasiPatternApprox_3402_; uint8_t v_constApprox_3403_; uint8_t v_isDefEqStuckEx_3404_; uint8_t v_unificationHints_3405_; uint8_t v_proofIrrelevance_3406_; uint8_t v_assignSyntheticOpaque_3407_; uint8_t v_offsetCnstrs_3408_; uint8_t v_etaStruct_3409_; uint8_t v_univApprox_3410_; uint8_t v_iota_3411_; uint8_t v_beta_3412_; uint8_t v_proj_3413_; uint8_t v_zeta_3414_; uint8_t v_zetaDelta_3415_; uint8_t v_zetaUnused_3416_; uint8_t v_zetaHave_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3486_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref(v___x_3397_);
v___x_3399_ = l_Lean_Meta_Context_config(v___y_3395_);
v_foApprox_3400_ = lean_ctor_get_uint8(v___x_3399_, 0);
v_ctxApprox_3401_ = lean_ctor_get_uint8(v___x_3399_, 1);
v_quasiPatternApprox_3402_ = lean_ctor_get_uint8(v___x_3399_, 2);
v_constApprox_3403_ = lean_ctor_get_uint8(v___x_3399_, 3);
v_isDefEqStuckEx_3404_ = lean_ctor_get_uint8(v___x_3399_, 4);
v_unificationHints_3405_ = lean_ctor_get_uint8(v___x_3399_, 5);
v_proofIrrelevance_3406_ = lean_ctor_get_uint8(v___x_3399_, 6);
v_assignSyntheticOpaque_3407_ = lean_ctor_get_uint8(v___x_3399_, 7);
v_offsetCnstrs_3408_ = lean_ctor_get_uint8(v___x_3399_, 8);
v_etaStruct_3409_ = lean_ctor_get_uint8(v___x_3399_, 10);
v_univApprox_3410_ = lean_ctor_get_uint8(v___x_3399_, 11);
v_iota_3411_ = lean_ctor_get_uint8(v___x_3399_, 12);
v_beta_3412_ = lean_ctor_get_uint8(v___x_3399_, 13);
v_proj_3413_ = lean_ctor_get_uint8(v___x_3399_, 14);
v_zeta_3414_ = lean_ctor_get_uint8(v___x_3399_, 15);
v_zetaDelta_3415_ = lean_ctor_get_uint8(v___x_3399_, 16);
v_zetaUnused_3416_ = lean_ctor_get_uint8(v___x_3399_, 17);
v_zetaHave_3417_ = lean_ctor_get_uint8(v___x_3399_, 18);
v_isSharedCheck_3486_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3486_ == 0)
{
v___x_3419_ = v___x_3399_;
v_isShared_3420_ = v_isSharedCheck_3486_;
goto v_resetjp_3418_;
}
else
{
lean_dec(v___x_3399_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3486_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
uint8_t v_trackZetaDelta_3421_; lean_object* v_zetaDeltaSet_3422_; lean_object* v_lctx_3423_; lean_object* v_localInstances_3424_; lean_object* v_defEqCtx_x3f_3425_; lean_object* v_synthPendingDepth_3426_; lean_object* v_canUnfold_x3f_3427_; uint8_t v_univApprox_3428_; uint8_t v_inTypeClassResolution_3429_; uint8_t v_cacheInferType_3430_; uint8_t v___x_3431_; lean_object* v_config_3433_; 
v_trackZetaDelta_3421_ = lean_ctor_get_uint8(v___y_3395_, sizeof(void*)*7);
v_zetaDeltaSet_3422_ = lean_ctor_get(v___y_3395_, 1);
v_lctx_3423_ = lean_ctor_get(v___y_3395_, 2);
v_localInstances_3424_ = lean_ctor_get(v___y_3395_, 3);
v_defEqCtx_x3f_3425_ = lean_ctor_get(v___y_3395_, 4);
v_synthPendingDepth_3426_ = lean_ctor_get(v___y_3395_, 5);
v_canUnfold_x3f_3427_ = lean_ctor_get(v___y_3395_, 6);
v_univApprox_3428_ = lean_ctor_get_uint8(v___y_3395_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3429_ = lean_ctor_get_uint8(v___y_3395_, sizeof(void*)*7 + 2);
v_cacheInferType_3430_ = lean_ctor_get_uint8(v___y_3395_, sizeof(void*)*7 + 3);
v___x_3431_ = 1;
if (v_isShared_3420_ == 0)
{
v_config_3433_ = v___x_3419_;
goto v_reusejp_3432_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 0, v_foApprox_3400_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 1, v_ctxApprox_3401_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 2, v_quasiPatternApprox_3402_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 3, v_constApprox_3403_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 4, v_isDefEqStuckEx_3404_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 5, v_unificationHints_3405_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 6, v_proofIrrelevance_3406_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 7, v_assignSyntheticOpaque_3407_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 8, v_offsetCnstrs_3408_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 10, v_etaStruct_3409_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 11, v_univApprox_3410_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 12, v_iota_3411_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 13, v_beta_3412_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 14, v_proj_3413_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 15, v_zeta_3414_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 16, v_zetaDelta_3415_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 17, v_zetaUnused_3416_);
lean_ctor_set_uint8(v_reuseFailAlloc_3485_, 18, v_zetaHave_3417_);
v_config_3433_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3432_;
}
v_reusejp_3432_:
{
uint64_t v___x_3434_; uint64_t v___x_3435_; uint64_t v___x_3436_; uint64_t v___x_3437_; uint64_t v___x_3438_; uint64_t v_key_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; 
lean_ctor_set_uint8(v_config_3433_, 9, v___x_3431_);
v___x_3434_ = l_Lean_Meta_Context_configKey(v___y_3395_);
v___x_3435_ = 2ULL;
v___x_3436_ = lean_uint64_shift_right(v___x_3434_, v___x_3435_);
v___x_3437_ = lean_uint64_shift_left(v___x_3436_, v___x_3435_);
v___x_3438_ = lean_uint64_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1);
v_key_3439_ = lean_uint64_lor(v___x_3437_, v___x_3438_);
v___x_3440_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3440_, 0, v_config_3433_);
lean_ctor_set_uint64(v___x_3440_, sizeof(void*)*1, v_key_3439_);
lean_inc(v_canUnfold_x3f_3427_);
lean_inc(v_synthPendingDepth_3426_);
lean_inc(v_defEqCtx_x3f_3425_);
lean_inc_ref(v_localInstances_3424_);
lean_inc_ref(v_lctx_3423_);
lean_inc(v_zetaDeltaSet_3422_);
v___x_3441_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3441_, 0, v___x_3440_);
lean_ctor_set(v___x_3441_, 1, v_zetaDeltaSet_3422_);
lean_ctor_set(v___x_3441_, 2, v_lctx_3423_);
lean_ctor_set(v___x_3441_, 3, v_localInstances_3424_);
lean_ctor_set(v___x_3441_, 4, v_defEqCtx_x3f_3425_);
lean_ctor_set(v___x_3441_, 5, v_synthPendingDepth_3426_);
lean_ctor_set(v___x_3441_, 6, v_canUnfold_x3f_3427_);
lean_ctor_set_uint8(v___x_3441_, sizeof(void*)*7, v_trackZetaDelta_3421_);
lean_ctor_set_uint8(v___x_3441_, sizeof(void*)*7 + 1, v_univApprox_3428_);
lean_ctor_set_uint8(v___x_3441_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3429_);
lean_ctor_set_uint8(v___x_3441_, sizeof(void*)*7 + 3, v_cacheInferType_3430_);
lean_inc(v___y_3391_);
lean_inc_ref(v___y_3394_);
lean_inc(v___y_3396_);
lean_inc(v_a_3398_);
v___x_3442_ = lean_whnf(v_a_3398_, v___x_3441_, v___y_3396_, v___y_3394_, v___y_3391_);
if (lean_obj_tag(v___x_3442_) == 0)
{
lean_object* v_a_3443_; lean_object* v___x_3444_; uint8_t v___x_3445_; 
v_a_3443_ = lean_ctor_get(v___x_3442_, 0);
lean_inc(v_a_3443_);
lean_dec_ref(v___x_3442_);
v___x_3444_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4));
v___x_3445_ = l_Lean_Expr_isConstOf(v_a_3443_, v___x_3444_);
lean_dec(v_a_3443_);
if (v___x_3445_ == 0)
{
lean_dec(v_a_3398_);
v___y_3362_ = v___y_3392_;
v___y_3363_ = v___y_3393_;
v___y_3364_ = v___y_3395_;
v___y_3365_ = v___y_3396_;
v___y_3366_ = v___y_3394_;
v___y_3367_ = v___y_3391_;
goto v___jp_3361_;
}
else
{
lean_object* v___x_3446_; 
lean_inc(v_a_3398_);
v___x_3446_ = l_Lean_Meta_mkEqRefl(v_a_3398_, v___y_3395_, v___y_3396_, v___y_3394_, v___y_3391_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_a_3447_; lean_object* v___x_3448_; 
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_a_3447_);
lean_dec_ref(v___x_3446_);
lean_inc(v_mvarId_3209_);
v___x_3448_ = l_Lean_MVarId_getType(v_mvarId_3209_, v___y_3395_, v___y_3396_, v___y_3394_, v___y_3391_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v_a_3449_; lean_object* v_nargs_3450_; lean_object* v___x_3451_; lean_object* v_dummy_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
lean_inc(v_a_3449_);
lean_dec_ref(v___x_3448_);
v_nargs_3450_ = l_Lean_Expr_getAppNumArgs(v_a_3398_);
v___x_3451_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_dummy_3452_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8);
lean_inc(v_nargs_3450_);
v___x_3453_ = lean_mk_array(v_nargs_3450_, v_dummy_3452_);
v___x_3454_ = lean_unsigned_to_nat(1u);
v___x_3455_ = lean_nat_sub(v_nargs_3450_, v___x_3454_);
lean_dec(v_nargs_3450_);
v___x_3456_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_3398_, v___x_3453_, v___x_3455_);
v___x_3457_ = lean_array_push(v___x_3456_, v_a_3447_);
v___x_3458_ = l_Lean_mkAppN(v___x_3451_, v___x_3457_);
lean_dec_ref(v___x_3457_);
lean_inc(v_val_3240_);
v___x_3459_ = l_Lean_LocalDecl_toExpr(v_val_3240_);
v___x_3460_ = l_Lean_Meta_mkAbsurd(v_a_3449_, v___x_3459_, v___x_3458_, v___y_3395_, v___y_3396_, v___y_3394_, v___y_3391_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3480_; 
v_a_3461_ = lean_ctor_get(v___x_3460_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3460_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3463_ = v___x_3460_;
v_isShared_3464_ = v_isSharedCheck_3480_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3460_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3480_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3465_; 
lean_inc(v_mvarId_3209_);
v___x_3465_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3209_, v_a_3461_, v___y_3396_);
if (lean_obj_tag(v___x_3465_) == 0)
{
lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3477_; 
lean_dec_ref(v___x_3360_);
lean_dec(v_val_3240_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3465_);
if (v_isSharedCheck_3477_ == 0)
{
lean_object* v_unused_3478_; 
v_unused_3478_ = lean_ctor_get(v___x_3465_, 0);
lean_dec(v_unused_3478_);
v___x_3467_ = v___x_3465_;
v_isShared_3468_ = v_isSharedCheck_3477_;
goto v_resetjp_3466_;
}
else
{
lean_dec(v___x_3465_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3477_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v___x_3469_; lean_object* v___x_3471_; 
v___x_3469_ = lean_box(v___x_3219_);
if (v_isShared_3468_ == 0)
{
lean_ctor_set_tag(v___x_3467_, 1);
lean_ctor_set(v___x_3467_, 0, v___x_3469_);
v___x_3471_ = v___x_3467_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v___x_3469_);
v___x_3471_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
lean_object* v___x_3472_; lean_object* v___x_3474_; 
v___x_3472_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3472_, 0, v___x_3471_);
lean_ctor_set(v___x_3472_, 1, v___x_3244_);
if (v_isShared_3464_ == 0)
{
lean_ctor_set(v___x_3463_, 0, v___x_3472_);
v___x_3474_ = v___x_3463_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v___x_3472_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
v_a_3226_ = v___x_3474_;
goto v___jp_3225_;
}
}
}
}
else
{
lean_object* v_a_3479_; 
lean_del_object(v___x_3463_);
v_a_3479_ = lean_ctor_get(v___x_3465_, 0);
lean_inc(v_a_3479_);
lean_dec_ref(v___x_3465_);
v___y_3381_ = v___y_3391_;
v___y_3382_ = v___y_3392_;
v___y_3383_ = v___y_3395_;
v___y_3384_ = v___y_3394_;
v___y_3385_ = v___y_3393_;
v___y_3386_ = v___y_3396_;
v_a_3387_ = v_a_3479_;
goto v___jp_3380_;
}
}
}
else
{
lean_object* v_a_3481_; 
v_a_3481_ = lean_ctor_get(v___x_3460_, 0);
lean_inc(v_a_3481_);
lean_dec_ref(v___x_3460_);
v___y_3381_ = v___y_3391_;
v___y_3382_ = v___y_3392_;
v___y_3383_ = v___y_3395_;
v___y_3384_ = v___y_3394_;
v___y_3385_ = v___y_3393_;
v___y_3386_ = v___y_3396_;
v_a_3387_ = v_a_3481_;
goto v___jp_3380_;
}
}
else
{
lean_object* v_a_3482_; 
lean_dec(v_a_3447_);
lean_dec(v_a_3398_);
v_a_3482_ = lean_ctor_get(v___x_3448_, 0);
lean_inc(v_a_3482_);
lean_dec_ref(v___x_3448_);
v___y_3381_ = v___y_3391_;
v___y_3382_ = v___y_3392_;
v___y_3383_ = v___y_3395_;
v___y_3384_ = v___y_3394_;
v___y_3385_ = v___y_3393_;
v___y_3386_ = v___y_3396_;
v_a_3387_ = v_a_3482_;
goto v___jp_3380_;
}
}
else
{
lean_object* v_a_3483_; 
lean_dec(v_a_3398_);
v_a_3483_ = lean_ctor_get(v___x_3446_, 0);
lean_inc(v_a_3483_);
lean_dec_ref(v___x_3446_);
v___y_3381_ = v___y_3391_;
v___y_3382_ = v___y_3392_;
v___y_3383_ = v___y_3395_;
v___y_3384_ = v___y_3394_;
v___y_3385_ = v___y_3393_;
v___y_3386_ = v___y_3396_;
v_a_3387_ = v_a_3483_;
goto v___jp_3380_;
}
}
}
else
{
lean_object* v_a_3484_; 
lean_dec(v_a_3398_);
v_a_3484_ = lean_ctor_get(v___x_3442_, 0);
lean_inc(v_a_3484_);
lean_dec_ref(v___x_3442_);
v___y_3381_ = v___y_3391_;
v___y_3382_ = v___y_3392_;
v___y_3383_ = v___y_3395_;
v___y_3384_ = v___y_3394_;
v___y_3385_ = v___y_3393_;
v___y_3386_ = v___y_3396_;
v_a_3387_ = v_a_3484_;
goto v___jp_3380_;
}
}
}
}
else
{
lean_object* v_a_3487_; 
v_a_3487_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3487_);
lean_dec_ref(v___x_3397_);
v___y_3381_ = v___y_3391_;
v___y_3382_ = v___y_3392_;
v___y_3383_ = v___y_3395_;
v___y_3384_ = v___y_3394_;
v___y_3385_ = v___y_3393_;
v___y_3386_ = v___y_3396_;
v_a_3387_ = v_a_3487_;
goto v___jp_3380_;
}
}
v___jp_3488_:
{
if (v___y_3495_ == 0)
{
v___y_3362_ = v___y_3490_;
v___y_3363_ = v___y_3491_;
v___y_3364_ = v___y_3493_;
v___y_3365_ = v___y_3494_;
v___y_3366_ = v___y_3492_;
v___y_3367_ = v___y_3489_;
goto v___jp_3361_;
}
else
{
v___y_3391_ = v___y_3489_;
v___y_3392_ = v___y_3490_;
v___y_3393_ = v___y_3491_;
v___y_3394_ = v___y_3492_;
v___y_3395_ = v___y_3493_;
v___y_3396_ = v___y_3494_;
goto v___jp_3390_;
}
}
v___jp_3496_:
{
if (v___y_3504_ == 0)
{
lean_dec_ref(v___y_3498_);
v___y_3489_ = v___y_3497_;
v___y_3490_ = v___y_3499_;
v___y_3491_ = v___y_3502_;
v___y_3492_ = v___y_3501_;
v___y_3493_ = v___y_3500_;
v___y_3494_ = v___y_3503_;
v___y_3495_ = v___x_3315_;
goto v___jp_3488_;
}
else
{
uint8_t v___x_3505_; 
v___x_3505_ = l_Lean_Expr_hasFVar(v___y_3498_);
lean_dec_ref(v___y_3498_);
if (v___x_3505_ == 0)
{
v___y_3391_ = v___y_3497_;
v___y_3392_ = v___y_3499_;
v___y_3393_ = v___y_3502_;
v___y_3394_ = v___y_3501_;
v___y_3395_ = v___y_3500_;
v___y_3396_ = v___y_3503_;
goto v___jp_3390_;
}
else
{
v___y_3489_ = v___y_3497_;
v___y_3490_ = v___y_3499_;
v___y_3491_ = v___y_3502_;
v___y_3492_ = v___y_3501_;
v___y_3493_ = v___y_3500_;
v___y_3494_ = v___y_3503_;
v___y_3495_ = v___x_3315_;
goto v___jp_3488_;
}
}
}
v___jp_3506_:
{
lean_object* v___x_3514_; 
lean_inc_ref(v___x_3360_);
v___x_3514_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_3360_, v___y_3512_);
if (lean_obj_tag(v___x_3514_) == 0)
{
lean_object* v_a_3515_; uint8_t v___x_3516_; 
v_a_3515_ = lean_ctor_get(v___x_3514_, 0);
lean_inc(v_a_3515_);
lean_dec_ref(v___x_3514_);
v___x_3516_ = l_Lean_Expr_hasMVar(v_a_3515_);
if (v___x_3516_ == 0)
{
v___y_3497_ = v___y_3507_;
v___y_3498_ = v_a_3515_;
v___y_3499_ = v___y_3508_;
v___y_3500_ = v___y_3509_;
v___y_3501_ = v___y_3510_;
v___y_3502_ = v___y_3511_;
v___y_3503_ = v___y_3512_;
v___y_3504_ = v___y_3513_;
goto v___jp_3496_;
}
else
{
v___y_3497_ = v___y_3507_;
v___y_3498_ = v_a_3515_;
v___y_3499_ = v___y_3508_;
v___y_3500_ = v___y_3509_;
v___y_3501_ = v___y_3510_;
v___y_3502_ = v___y_3511_;
v___y_3503_ = v___y_3512_;
v___y_3504_ = v___x_3315_;
goto v___jp_3496_;
}
}
else
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3524_; 
lean_dec_ref(v___x_3360_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3517_ = lean_ctor_get(v___x_3514_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3514_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3519_ = v___x_3514_;
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3514_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3524_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_a_3517_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
v___jp_3525_:
{
if (v___y_3532_ == 0)
{
v___y_3362_ = v___y_3527_;
v___y_3363_ = v___y_3528_;
v___y_3364_ = v___y_3530_;
v___y_3365_ = v___y_3531_;
v___y_3366_ = v___y_3529_;
v___y_3367_ = v___y_3526_;
goto v___jp_3361_;
}
else
{
v___y_3507_ = v___y_3526_;
v___y_3508_ = v___y_3527_;
v___y_3509_ = v___y_3530_;
v___y_3510_ = v___y_3529_;
v___y_3511_ = v___y_3528_;
v___y_3512_ = v___y_3531_;
v___y_3513_ = v___y_3532_;
goto v___jp_3506_;
}
}
v___jp_3533_:
{
uint8_t v_useDecide_3540_; 
v_useDecide_3540_ = lean_ctor_get_uint8(v_config_3208_, sizeof(void*)*1);
if (v_useDecide_3540_ == 0)
{
v___y_3526_ = v___y_3539_;
v___y_3527_ = v___y_3534_;
v___y_3528_ = v_isHEq_3535_;
v___y_3529_ = v___y_3538_;
v___y_3530_ = v___y_3536_;
v___y_3531_ = v___y_3537_;
v___y_3532_ = v___x_3315_;
goto v___jp_3525_;
}
else
{
uint8_t v___x_3541_; 
v___x_3541_ = l_Lean_Expr_hasFVar(v___x_3360_);
if (v___x_3541_ == 0)
{
v___y_3507_ = v___y_3539_;
v___y_3508_ = v___y_3534_;
v___y_3509_ = v___y_3536_;
v___y_3510_ = v___y_3538_;
v___y_3511_ = v_isHEq_3535_;
v___y_3512_ = v___y_3537_;
v___y_3513_ = v_useDecide_3540_;
goto v___jp_3506_;
}
else
{
v___y_3526_ = v___y_3539_;
v___y_3527_ = v___y_3534_;
v___y_3528_ = v_isHEq_3535_;
v___y_3529_ = v___y_3538_;
v___y_3530_ = v___y_3536_;
v___y_3531_ = v___y_3537_;
v___y_3532_ = v___x_3315_;
goto v___jp_3525_;
}
}
}
v___jp_3542_:
{
lean_object* v___x_3550_; 
v___x_3550_ = l_Lean_Meta_isExprDefEq(v___y_3546_, v___y_3543_, v___y_3545_, v___y_3549_, v___y_3547_, v___y_3548_);
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v_a_3551_; uint8_t v___x_3552_; 
v_a_3551_ = lean_ctor_get(v___x_3550_, 0);
lean_inc(v_a_3551_);
lean_dec_ref(v___x_3550_);
v___x_3552_ = lean_unbox(v_a_3551_);
lean_dec(v_a_3551_);
if (v___x_3552_ == 0)
{
v___y_3534_ = v___y_3544_;
v_isHEq_3535_ = v___x_3219_;
v___y_3536_ = v___y_3545_;
v___y_3537_ = v___y_3549_;
v___y_3538_ = v___y_3547_;
v___y_3539_ = v___y_3548_;
goto v___jp_3533_;
}
else
{
lean_object* v___x_3553_; 
lean_dec_ref(v___x_3360_);
lean_dec_ref(v_config_3208_);
lean_inc(v_mvarId_3209_);
v___x_3553_ = l_Lean_MVarId_getType(v_mvarId_3209_, v___y_3545_, v___y_3549_, v___y_3547_, v___y_3548_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v_a_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; 
v_a_3554_ = lean_ctor_get(v___x_3553_, 0);
lean_inc(v_a_3554_);
lean_dec_ref(v___x_3553_);
v___x_3555_ = l_Lean_LocalDecl_toExpr(v_val_3240_);
v___x_3556_ = l_Lean_Meta_mkEqOfHEq(v___x_3555_, v___x_3219_, v___y_3545_, v___y_3549_, v___y_3547_, v___y_3548_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; lean_object* v___x_3558_; 
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
lean_inc(v_a_3557_);
lean_dec_ref(v___x_3556_);
v___x_3558_ = l_Lean_Meta_mkNoConfusion(v_a_3554_, v_a_3557_, v___y_3545_, v___y_3549_, v___y_3547_, v___y_3548_);
if (lean_obj_tag(v___x_3558_) == 0)
{
lean_object* v_a_3559_; lean_object* v___x_3560_; 
v_a_3559_ = lean_ctor_get(v___x_3558_, 0);
lean_inc(v_a_3559_);
lean_dec_ref(v___x_3558_);
v___x_3560_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3209_, v_a_3559_, v___y_3549_);
if (lean_obj_tag(v___x_3560_) == 0)
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
lean_dec_ref(v___x_3560_);
v___x_3561_ = lean_box(v___x_3219_);
v___x_3562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3561_);
v___x_3563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3562_);
lean_ctor_set(v___x_3563_, 1, v___x_3244_);
v___x_3564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3563_);
v_a_3226_ = v___x_3564_;
goto v___jp_3225_;
}
else
{
lean_object* v_a_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3572_; 
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
v_a_3565_ = lean_ctor_get(v___x_3560_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3560_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3567_ = v___x_3560_;
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_a_3565_);
lean_dec(v___x_3560_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3570_; 
if (v_isShared_3568_ == 0)
{
v___x_3570_ = v___x_3567_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_a_3565_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
}
else
{
lean_object* v_a_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3580_; 
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3573_ = lean_ctor_get(v___x_3558_, 0);
v_isSharedCheck_3580_ = !lean_is_exclusive(v___x_3558_);
if (v_isSharedCheck_3580_ == 0)
{
v___x_3575_ = v___x_3558_;
v_isShared_3576_ = v_isSharedCheck_3580_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_a_3573_);
lean_dec(v___x_3558_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3580_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3578_; 
if (v_isShared_3576_ == 0)
{
v___x_3578_ = v___x_3575_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v_a_3573_);
v___x_3578_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
return v___x_3578_;
}
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
lean_dec(v_a_3554_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3581_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3556_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3556_);
v___x_3583_ = lean_box(0);
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
v_resetjp_3582_:
{
lean_object* v___x_3586_; 
if (v_isShared_3584_ == 0)
{
v___x_3586_ = v___x_3583_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_a_3581_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3589_ = lean_ctor_get(v___x_3553_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3553_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3553_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3553_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3594_; 
if (v_isShared_3592_ == 0)
{
v___x_3594_ = v___x_3591_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v_a_3589_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
}
}
else
{
lean_object* v_a_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3604_; 
lean_dec_ref(v___x_3360_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3597_ = lean_ctor_get(v___x_3550_, 0);
v_isSharedCheck_3604_ = !lean_is_exclusive(v___x_3550_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3599_ = v___x_3550_;
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_a_3597_);
lean_dec(v___x_3550_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
lean_object* v___x_3602_; 
if (v_isShared_3600_ == 0)
{
v___x_3602_ = v___x_3599_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v_a_3597_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
}
}
v___jp_3605_:
{
lean_object* v___x_3611_; 
lean_inc_ref(v___x_3360_);
v___x_3611_ = l_Lean_Meta_matchHEq_x3f(v___x_3360_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_);
if (lean_obj_tag(v___x_3611_) == 0)
{
lean_object* v_a_3612_; 
v_a_3612_ = lean_ctor_get(v___x_3611_, 0);
lean_inc(v_a_3612_);
lean_dec_ref(v___x_3611_);
if (lean_obj_tag(v_a_3612_) == 1)
{
lean_object* v_val_3613_; lean_object* v_snd_3614_; lean_object* v_snd_3615_; lean_object* v_fst_3616_; lean_object* v_fst_3617_; lean_object* v_fst_3618_; lean_object* v_snd_3619_; lean_object* v___x_3620_; 
v_val_3613_ = lean_ctor_get(v_a_3612_, 0);
lean_inc(v_val_3613_);
lean_dec_ref(v_a_3612_);
v_snd_3614_ = lean_ctor_get(v_val_3613_, 1);
lean_inc(v_snd_3614_);
v_snd_3615_ = lean_ctor_get(v_snd_3614_, 1);
lean_inc(v_snd_3615_);
v_fst_3616_ = lean_ctor_get(v_val_3613_, 0);
lean_inc(v_fst_3616_);
lean_dec(v_val_3613_);
v_fst_3617_ = lean_ctor_get(v_snd_3614_, 0);
lean_inc(v_fst_3617_);
lean_dec(v_snd_3614_);
v_fst_3618_ = lean_ctor_get(v_snd_3615_, 0);
lean_inc(v_fst_3618_);
v_snd_3619_ = lean_ctor_get(v_snd_3615_, 1);
lean_inc(v_snd_3619_);
lean_dec(v_snd_3615_);
v___x_3620_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3617_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_);
if (lean_obj_tag(v___x_3620_) == 0)
{
lean_object* v_a_3621_; 
v_a_3621_ = lean_ctor_get(v___x_3620_, 0);
lean_inc(v_a_3621_);
lean_dec_ref(v___x_3620_);
if (lean_obj_tag(v_a_3621_) == 1)
{
lean_object* v_val_3622_; lean_object* v___x_3623_; 
v_val_3622_ = lean_ctor_get(v_a_3621_, 0);
lean_inc(v_val_3622_);
lean_dec_ref(v_a_3621_);
v___x_3623_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3619_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_);
if (lean_obj_tag(v___x_3623_) == 0)
{
lean_object* v_a_3624_; 
v_a_3624_ = lean_ctor_get(v___x_3623_, 0);
lean_inc(v_a_3624_);
lean_dec_ref(v___x_3623_);
if (lean_obj_tag(v_a_3624_) == 1)
{
lean_object* v_toConstantVal_3625_; lean_object* v_val_3626_; lean_object* v_toConstantVal_3627_; lean_object* v_name_3628_; lean_object* v_name_3629_; uint8_t v___x_3630_; 
v_toConstantVal_3625_ = lean_ctor_get(v_val_3622_, 0);
lean_inc_ref(v_toConstantVal_3625_);
lean_dec(v_val_3622_);
v_val_3626_ = lean_ctor_get(v_a_3624_, 0);
lean_inc(v_val_3626_);
lean_dec_ref(v_a_3624_);
v_toConstantVal_3627_ = lean_ctor_get(v_val_3626_, 0);
lean_inc_ref(v_toConstantVal_3627_);
lean_dec(v_val_3626_);
v_name_3628_ = lean_ctor_get(v_toConstantVal_3625_, 0);
lean_inc(v_name_3628_);
lean_dec_ref(v_toConstantVal_3625_);
v_name_3629_ = lean_ctor_get(v_toConstantVal_3627_, 0);
lean_inc(v_name_3629_);
lean_dec_ref(v_toConstantVal_3627_);
v___x_3630_ = lean_name_eq(v_name_3628_, v_name_3629_);
lean_dec(v_name_3629_);
lean_dec(v_name_3628_);
if (v___x_3630_ == 0)
{
v___y_3543_ = v_fst_3618_;
v___y_3544_ = v_isEq_3606_;
v___y_3545_ = v___y_3607_;
v___y_3546_ = v_fst_3616_;
v___y_3547_ = v___y_3609_;
v___y_3548_ = v___y_3610_;
v___y_3549_ = v___y_3608_;
goto v___jp_3542_;
}
else
{
if (v___x_3315_ == 0)
{
lean_dec(v_fst_3618_);
lean_dec(v_fst_3616_);
v___y_3534_ = v_isEq_3606_;
v_isHEq_3535_ = v___x_3219_;
v___y_3536_ = v___y_3607_;
v___y_3537_ = v___y_3608_;
v___y_3538_ = v___y_3609_;
v___y_3539_ = v___y_3610_;
goto v___jp_3533_;
}
else
{
v___y_3543_ = v_fst_3618_;
v___y_3544_ = v_isEq_3606_;
v___y_3545_ = v___y_3607_;
v___y_3546_ = v_fst_3616_;
v___y_3547_ = v___y_3609_;
v___y_3548_ = v___y_3610_;
v___y_3549_ = v___y_3608_;
goto v___jp_3542_;
}
}
}
else
{
lean_dec(v_a_3624_);
lean_dec(v_val_3622_);
lean_dec(v_fst_3618_);
lean_dec(v_fst_3616_);
v___y_3534_ = v_isEq_3606_;
v_isHEq_3535_ = v___x_3219_;
v___y_3536_ = v___y_3607_;
v___y_3537_ = v___y_3608_;
v___y_3538_ = v___y_3609_;
v___y_3539_ = v___y_3610_;
goto v___jp_3533_;
}
}
else
{
lean_object* v_a_3631_; lean_object* v___x_3633_; uint8_t v_isShared_3634_; uint8_t v_isSharedCheck_3638_; 
lean_dec(v_val_3622_);
lean_dec(v_fst_3618_);
lean_dec(v_fst_3616_);
lean_dec_ref(v___x_3360_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3631_ = lean_ctor_get(v___x_3623_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3633_ = v___x_3623_;
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
else
{
lean_inc(v_a_3631_);
lean_dec(v___x_3623_);
v___x_3633_ = lean_box(0);
v_isShared_3634_ = v_isSharedCheck_3638_;
goto v_resetjp_3632_;
}
v_resetjp_3632_:
{
lean_object* v___x_3636_; 
if (v_isShared_3634_ == 0)
{
v___x_3636_ = v___x_3633_;
goto v_reusejp_3635_;
}
else
{
lean_object* v_reuseFailAlloc_3637_; 
v_reuseFailAlloc_3637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3637_, 0, v_a_3631_);
v___x_3636_ = v_reuseFailAlloc_3637_;
goto v_reusejp_3635_;
}
v_reusejp_3635_:
{
return v___x_3636_;
}
}
}
}
else
{
lean_dec(v_a_3621_);
lean_dec(v_snd_3619_);
lean_dec(v_fst_3618_);
lean_dec(v_fst_3616_);
v___y_3534_ = v_isEq_3606_;
v_isHEq_3535_ = v___x_3219_;
v___y_3536_ = v___y_3607_;
v___y_3537_ = v___y_3608_;
v___y_3538_ = v___y_3609_;
v___y_3539_ = v___y_3610_;
goto v___jp_3533_;
}
}
else
{
lean_object* v_a_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3646_; 
lean_dec(v_snd_3619_);
lean_dec(v_fst_3618_);
lean_dec(v_fst_3616_);
lean_dec_ref(v___x_3360_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3639_ = lean_ctor_get(v___x_3620_, 0);
v_isSharedCheck_3646_ = !lean_is_exclusive(v___x_3620_);
if (v_isSharedCheck_3646_ == 0)
{
v___x_3641_ = v___x_3620_;
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_a_3639_);
lean_dec(v___x_3620_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3644_; 
if (v_isShared_3642_ == 0)
{
v___x_3644_ = v___x_3641_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v_a_3639_);
v___x_3644_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
return v___x_3644_;
}
}
}
}
else
{
lean_dec(v_a_3612_);
v___y_3534_ = v_isEq_3606_;
v_isHEq_3535_ = v___x_3315_;
v___y_3536_ = v___y_3607_;
v___y_3537_ = v___y_3608_;
v___y_3538_ = v___y_3609_;
v___y_3539_ = v___y_3610_;
goto v___jp_3533_;
}
}
else
{
lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3654_; 
lean_dec_ref(v___x_3360_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3647_ = lean_ctor_get(v___x_3611_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v___x_3611_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3649_ = v___x_3611_;
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v___x_3611_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3652_; 
if (v_isShared_3650_ == 0)
{
v___x_3652_ = v___x_3649_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_a_3647_);
v___x_3652_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
return v___x_3652_;
}
}
}
}
v___jp_3655_:
{
lean_object* v___x_3660_; 
lean_inc_ref(v___x_3360_);
v___x_3660_ = l_Lean_Meta_matchEq_x3f(v___x_3360_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_object* v_a_3661_; 
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
lean_inc(v_a_3661_);
lean_dec_ref(v___x_3660_);
if (lean_obj_tag(v_a_3661_) == 1)
{
lean_object* v_val_3662_; lean_object* v_snd_3663_; lean_object* v_fst_3664_; lean_object* v_snd_3665_; lean_object* v___x_3666_; 
v_val_3662_ = lean_ctor_get(v_a_3661_, 0);
lean_inc(v_val_3662_);
lean_dec_ref(v_a_3661_);
v_snd_3663_ = lean_ctor_get(v_val_3662_, 1);
lean_inc(v_snd_3663_);
lean_dec(v_val_3662_);
v_fst_3664_ = lean_ctor_get(v_snd_3663_, 0);
lean_inc(v_fst_3664_);
v_snd_3665_ = lean_ctor_get(v_snd_3663_, 1);
lean_inc(v_snd_3665_);
lean_dec(v_snd_3663_);
v___x_3666_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_3664_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_);
if (lean_obj_tag(v___x_3666_) == 0)
{
lean_object* v_a_3667_; 
v_a_3667_ = lean_ctor_get(v___x_3666_, 0);
lean_inc(v_a_3667_);
lean_dec_ref(v___x_3666_);
if (lean_obj_tag(v_a_3667_) == 1)
{
lean_object* v_val_3668_; lean_object* v___x_3669_; 
v_val_3668_ = lean_ctor_get(v_a_3667_, 0);
lean_inc(v_val_3668_);
lean_dec_ref(v_a_3667_);
v___x_3669_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_3665_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v_a_3670_; 
v_a_3670_ = lean_ctor_get(v___x_3669_, 0);
lean_inc(v_a_3670_);
lean_dec_ref(v___x_3669_);
if (lean_obj_tag(v_a_3670_) == 1)
{
lean_object* v_toConstantVal_3671_; lean_object* v_val_3672_; lean_object* v_toConstantVal_3673_; lean_object* v_name_3674_; lean_object* v_name_3675_; uint8_t v___x_3676_; 
v_toConstantVal_3671_ = lean_ctor_get(v_val_3668_, 0);
lean_inc_ref(v_toConstantVal_3671_);
lean_dec(v_val_3668_);
v_val_3672_ = lean_ctor_get(v_a_3670_, 0);
lean_inc(v_val_3672_);
lean_dec_ref(v_a_3670_);
v_toConstantVal_3673_ = lean_ctor_get(v_val_3672_, 0);
lean_inc_ref(v_toConstantVal_3673_);
lean_dec(v_val_3672_);
v_name_3674_ = lean_ctor_get(v_toConstantVal_3671_, 0);
lean_inc(v_name_3674_);
lean_dec_ref(v_toConstantVal_3671_);
v_name_3675_ = lean_ctor_get(v_toConstantVal_3673_, 0);
lean_inc(v_name_3675_);
lean_dec_ref(v_toConstantVal_3673_);
v___x_3676_ = lean_name_eq(v_name_3674_, v_name_3675_);
lean_dec(v_name_3675_);
lean_dec(v_name_3674_);
if (v___x_3676_ == 0)
{
lean_dec_ref(v___x_3360_);
lean_dec_ref(v_config_3208_);
v___y_3246_ = v___y_3657_;
v___y_3247_ = v___y_3658_;
v___y_3248_ = v___y_3656_;
v___y_3249_ = v___y_3659_;
goto v___jp_3245_;
}
else
{
if (v___x_3315_ == 0)
{
lean_del_object(v___x_3242_);
v_isEq_3606_ = v___x_3219_;
v___y_3607_ = v___y_3656_;
v___y_3608_ = v___y_3657_;
v___y_3609_ = v___y_3658_;
v___y_3610_ = v___y_3659_;
goto v___jp_3605_;
}
else
{
lean_dec_ref(v___x_3360_);
lean_dec_ref(v_config_3208_);
v___y_3246_ = v___y_3657_;
v___y_3247_ = v___y_3658_;
v___y_3248_ = v___y_3656_;
v___y_3249_ = v___y_3659_;
goto v___jp_3245_;
}
}
}
else
{
lean_dec(v_a_3670_);
lean_dec(v_val_3668_);
lean_del_object(v___x_3242_);
v_isEq_3606_ = v___x_3219_;
v___y_3607_ = v___y_3656_;
v___y_3608_ = v___y_3657_;
v___y_3609_ = v___y_3658_;
v___y_3610_ = v___y_3659_;
goto v___jp_3605_;
}
}
else
{
lean_object* v_a_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3684_; 
lean_dec(v_val_3668_);
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3677_ = lean_ctor_get(v___x_3669_, 0);
v_isSharedCheck_3684_ = !lean_is_exclusive(v___x_3669_);
if (v_isSharedCheck_3684_ == 0)
{
v___x_3679_ = v___x_3669_;
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_a_3677_);
lean_dec(v___x_3669_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v___x_3682_; 
if (v_isShared_3680_ == 0)
{
v___x_3682_ = v___x_3679_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v_a_3677_);
v___x_3682_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
return v___x_3682_;
}
}
}
}
else
{
lean_dec(v_a_3667_);
lean_dec(v_snd_3665_);
lean_del_object(v___x_3242_);
v_isEq_3606_ = v___x_3219_;
v___y_3607_ = v___y_3656_;
v___y_3608_ = v___y_3657_;
v___y_3609_ = v___y_3658_;
v___y_3610_ = v___y_3659_;
goto v___jp_3605_;
}
}
else
{
lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3692_; 
lean_dec(v_snd_3665_);
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3685_ = lean_ctor_get(v___x_3666_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3666_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3687_ = v___x_3666_;
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_dec(v___x_3666_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3690_; 
if (v_isShared_3688_ == 0)
{
v___x_3690_ = v___x_3687_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_a_3685_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
else
{
lean_dec(v_a_3661_);
lean_del_object(v___x_3242_);
v_isEq_3606_ = v___x_3315_;
v___y_3607_ = v___y_3656_;
v___y_3608_ = v___y_3657_;
v___y_3609_ = v___y_3658_;
v___y_3610_ = v___y_3659_;
goto v___jp_3605_;
}
}
else
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3700_; 
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3693_ = lean_ctor_get(v___x_3660_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3660_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3695_ = v___x_3660_;
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3660_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3693_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
v___jp_3701_:
{
lean_object* v___x_3706_; 
lean_inc_ref(v___x_3360_);
v___x_3706_ = l_refutableHasNotBit_x3f(v___x_3360_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
if (lean_obj_tag(v___x_3706_) == 0)
{
lean_object* v_a_3707_; 
v_a_3707_ = lean_ctor_get(v___x_3706_, 0);
lean_inc(v_a_3707_);
lean_dec_ref(v___x_3706_);
if (lean_obj_tag(v_a_3707_) == 1)
{
lean_object* v_val_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3748_; 
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec_ref(v_config_3208_);
v_val_3708_ = lean_ctor_get(v_a_3707_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v_a_3707_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3710_ = v_a_3707_;
v_isShared_3711_ = v_isSharedCheck_3748_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_val_3708_);
lean_dec(v_a_3707_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3748_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3712_; 
lean_inc(v_mvarId_3209_);
v___x_3712_ = l_Lean_MVarId_getType(v_mvarId_3209_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
if (lean_obj_tag(v___x_3712_) == 0)
{
lean_object* v_a_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; 
v_a_3713_ = lean_ctor_get(v___x_3712_, 0);
lean_inc(v_a_3713_);
lean_dec_ref(v___x_3712_);
v___x_3714_ = l_Lean_LocalDecl_toExpr(v_val_3240_);
v___x_3715_ = l_Lean_Meta_mkAbsurd(v_a_3713_, v_val_3708_, v___x_3714_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
if (lean_obj_tag(v___x_3715_) == 0)
{
lean_object* v_a_3716_; lean_object* v___x_3717_; 
v_a_3716_ = lean_ctor_get(v___x_3715_, 0);
lean_inc(v_a_3716_);
lean_dec_ref(v___x_3715_);
v___x_3717_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3209_, v_a_3716_, v___y_3703_);
if (lean_obj_tag(v___x_3717_) == 0)
{
lean_object* v___x_3718_; lean_object* v___x_3720_; 
lean_dec_ref(v___x_3717_);
v___x_3718_ = lean_box(v___x_3219_);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 0, v___x_3718_);
v___x_3720_ = v___x_3710_;
goto v_reusejp_3719_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v___x_3718_);
v___x_3720_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3719_;
}
v_reusejp_3719_:
{
lean_object* v___x_3721_; lean_object* v___x_3722_; 
v___x_3721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3720_);
lean_ctor_set(v___x_3721_, 1, v___x_3244_);
v___x_3722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3721_);
v_a_3226_ = v___x_3722_;
goto v___jp_3225_;
}
}
else
{
lean_object* v_a_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3731_; 
lean_del_object(v___x_3710_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
v_a_3724_ = lean_ctor_get(v___x_3717_, 0);
v_isSharedCheck_3731_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3726_ = v___x_3717_;
v_isShared_3727_ = v_isSharedCheck_3731_;
goto v_resetjp_3725_;
}
else
{
lean_inc(v_a_3724_);
lean_dec(v___x_3717_);
v___x_3726_ = lean_box(0);
v_isShared_3727_ = v_isSharedCheck_3731_;
goto v_resetjp_3725_;
}
v_resetjp_3725_:
{
lean_object* v___x_3729_; 
if (v_isShared_3727_ == 0)
{
v___x_3729_ = v___x_3726_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v_a_3724_);
v___x_3729_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
return v___x_3729_;
}
}
}
}
else
{
lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3739_; 
lean_del_object(v___x_3710_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3732_ = lean_ctor_get(v___x_3715_, 0);
v_isSharedCheck_3739_ = !lean_is_exclusive(v___x_3715_);
if (v_isSharedCheck_3739_ == 0)
{
v___x_3734_ = v___x_3715_;
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3715_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3739_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
lean_object* v___x_3737_; 
if (v_isShared_3735_ == 0)
{
v___x_3737_ = v___x_3734_;
goto v_reusejp_3736_;
}
else
{
lean_object* v_reuseFailAlloc_3738_; 
v_reuseFailAlloc_3738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3738_, 0, v_a_3732_);
v___x_3737_ = v_reuseFailAlloc_3738_;
goto v_reusejp_3736_;
}
v_reusejp_3736_:
{
return v___x_3737_;
}
}
}
}
else
{
lean_object* v_a_3740_; lean_object* v___x_3742_; uint8_t v_isShared_3743_; uint8_t v_isSharedCheck_3747_; 
lean_del_object(v___x_3710_);
lean_dec(v_val_3708_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3740_ = lean_ctor_get(v___x_3712_, 0);
v_isSharedCheck_3747_ = !lean_is_exclusive(v___x_3712_);
if (v_isSharedCheck_3747_ == 0)
{
v___x_3742_ = v___x_3712_;
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
else
{
lean_inc(v_a_3740_);
lean_dec(v___x_3712_);
v___x_3742_ = lean_box(0);
v_isShared_3743_ = v_isSharedCheck_3747_;
goto v_resetjp_3741_;
}
v_resetjp_3741_:
{
lean_object* v___x_3745_; 
if (v_isShared_3743_ == 0)
{
v___x_3745_ = v___x_3742_;
goto v_reusejp_3744_;
}
else
{
lean_object* v_reuseFailAlloc_3746_; 
v_reuseFailAlloc_3746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3746_, 0, v_a_3740_);
v___x_3745_ = v_reuseFailAlloc_3746_;
goto v_reusejp_3744_;
}
v_reusejp_3744_:
{
return v___x_3745_;
}
}
}
}
}
else
{
lean_object* v___x_3749_; 
lean_dec(v_a_3707_);
lean_inc_ref(v___x_3360_);
v___x_3749_ = l_Lean_Meta_matchNe_x3f(v___x_3360_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
if (lean_obj_tag(v___x_3749_) == 0)
{
lean_object* v_a_3750_; 
v_a_3750_ = lean_ctor_get(v___x_3749_, 0);
lean_inc(v_a_3750_);
lean_dec_ref(v___x_3749_);
if (lean_obj_tag(v_a_3750_) == 1)
{
lean_object* v_val_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3821_; 
v_val_3751_ = lean_ctor_get(v_a_3750_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v_a_3750_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3753_ = v_a_3750_;
v_isShared_3754_ = v_isSharedCheck_3821_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_val_3751_);
lean_dec(v_a_3750_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3821_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v_snd_3755_; lean_object* v_fst_3756_; lean_object* v_snd_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3820_; 
v_snd_3755_ = lean_ctor_get(v_val_3751_, 1);
lean_inc(v_snd_3755_);
lean_dec(v_val_3751_);
v_fst_3756_ = lean_ctor_get(v_snd_3755_, 0);
v_snd_3757_ = lean_ctor_get(v_snd_3755_, 1);
v_isSharedCheck_3820_ = !lean_is_exclusive(v_snd_3755_);
if (v_isSharedCheck_3820_ == 0)
{
v___x_3759_ = v_snd_3755_;
v_isShared_3760_ = v_isSharedCheck_3820_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_snd_3757_);
lean_inc(v_fst_3756_);
lean_dec(v_snd_3755_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3820_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3761_; 
lean_inc(v_fst_3756_);
v___x_3761_ = l_Lean_Meta_isExprDefEq(v_fst_3756_, v_snd_3757_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
if (lean_obj_tag(v___x_3761_) == 0)
{
lean_object* v_a_3762_; uint8_t v___x_3763_; 
v_a_3762_ = lean_ctor_get(v___x_3761_, 0);
lean_inc(v_a_3762_);
lean_dec_ref(v___x_3761_);
v___x_3763_ = lean_unbox(v_a_3762_);
lean_dec(v_a_3762_);
if (v___x_3763_ == 0)
{
lean_del_object(v___x_3759_);
lean_dec(v_fst_3756_);
lean_del_object(v___x_3753_);
v___y_3656_ = v___y_3702_;
v___y_3657_ = v___y_3703_;
v___y_3658_ = v___y_3704_;
v___y_3659_ = v___y_3705_;
goto v___jp_3655_;
}
else
{
lean_object* v___x_3764_; 
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec_ref(v_config_3208_);
lean_inc(v_mvarId_3209_);
v___x_3764_ = l_Lean_MVarId_getType(v_mvarId_3209_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
if (lean_obj_tag(v___x_3764_) == 0)
{
lean_object* v_a_3765_; lean_object* v___x_3766_; 
v_a_3765_ = lean_ctor_get(v___x_3764_, 0);
lean_inc(v_a_3765_);
lean_dec_ref(v___x_3764_);
v___x_3766_ = l_Lean_Meta_mkEqRefl(v_fst_3756_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
if (lean_obj_tag(v___x_3766_) == 0)
{
lean_object* v_a_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
v_a_3767_ = lean_ctor_get(v___x_3766_, 0);
lean_inc(v_a_3767_);
lean_dec_ref(v___x_3766_);
v___x_3768_ = l_Lean_LocalDecl_toExpr(v_val_3240_);
v___x_3769_ = l_Lean_Meta_mkAbsurd(v_a_3765_, v_a_3767_, v___x_3768_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
if (lean_obj_tag(v___x_3769_) == 0)
{
lean_object* v_a_3770_; lean_object* v___x_3771_; 
v_a_3770_ = lean_ctor_get(v___x_3769_, 0);
lean_inc(v_a_3770_);
lean_dec_ref(v___x_3769_);
v___x_3771_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3209_, v_a_3770_, v___y_3703_);
if (lean_obj_tag(v___x_3771_) == 0)
{
lean_object* v___x_3772_; lean_object* v___x_3774_; 
lean_dec_ref(v___x_3771_);
v___x_3772_ = lean_box(v___x_3219_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 0, v___x_3772_);
v___x_3774_ = v___x_3753_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3779_; 
v_reuseFailAlloc_3779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3779_, 0, v___x_3772_);
v___x_3774_ = v_reuseFailAlloc_3779_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
lean_object* v___x_3776_; 
if (v_isShared_3760_ == 0)
{
lean_ctor_set(v___x_3759_, 1, v___x_3244_);
lean_ctor_set(v___x_3759_, 0, v___x_3774_);
v___x_3776_ = v___x_3759_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v___x_3774_);
lean_ctor_set(v_reuseFailAlloc_3778_, 1, v___x_3244_);
v___x_3776_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
lean_object* v___x_3777_; 
v___x_3777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3777_, 0, v___x_3776_);
v_a_3226_ = v___x_3777_;
goto v___jp_3225_;
}
}
}
else
{
lean_object* v_a_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3787_; 
lean_del_object(v___x_3759_);
lean_del_object(v___x_3753_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
v_a_3780_ = lean_ctor_get(v___x_3771_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3771_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3782_ = v___x_3771_;
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_a_3780_);
lean_dec(v___x_3771_);
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
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3795_; 
lean_del_object(v___x_3759_);
lean_del_object(v___x_3753_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3788_ = lean_ctor_get(v___x_3769_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3769_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3790_ = v___x_3769_;
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3769_);
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
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
lean_dec(v_a_3765_);
lean_del_object(v___x_3759_);
lean_del_object(v___x_3753_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3796_ = lean_ctor_get(v___x_3766_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3766_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3766_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3766_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3796_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
else
{
lean_object* v_a_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3811_; 
lean_del_object(v___x_3759_);
lean_dec(v_fst_3756_);
lean_del_object(v___x_3753_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3804_ = lean_ctor_get(v___x_3764_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v___x_3764_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3806_ = v___x_3764_;
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_a_3804_);
lean_dec(v___x_3764_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3811_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3809_; 
if (v_isShared_3807_ == 0)
{
v___x_3809_ = v___x_3806_;
goto v_reusejp_3808_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_a_3804_);
v___x_3809_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3808_;
}
v_reusejp_3808_:
{
return v___x_3809_;
}
}
}
}
}
else
{
lean_object* v_a_3812_; lean_object* v___x_3814_; uint8_t v_isShared_3815_; uint8_t v_isSharedCheck_3819_; 
lean_del_object(v___x_3759_);
lean_dec(v_fst_3756_);
lean_del_object(v___x_3753_);
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3812_ = lean_ctor_get(v___x_3761_, 0);
v_isSharedCheck_3819_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3819_ == 0)
{
v___x_3814_ = v___x_3761_;
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
else
{
lean_inc(v_a_3812_);
lean_dec(v___x_3761_);
v___x_3814_ = lean_box(0);
v_isShared_3815_ = v_isSharedCheck_3819_;
goto v_resetjp_3813_;
}
v_resetjp_3813_:
{
lean_object* v___x_3817_; 
if (v_isShared_3815_ == 0)
{
v___x_3817_ = v___x_3814_;
goto v_reusejp_3816_;
}
else
{
lean_object* v_reuseFailAlloc_3818_; 
v_reuseFailAlloc_3818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3818_, 0, v_a_3812_);
v___x_3817_ = v_reuseFailAlloc_3818_;
goto v_reusejp_3816_;
}
v_reusejp_3816_:
{
return v___x_3817_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3750_);
v___y_3656_ = v___y_3702_;
v___y_3657_ = v___y_3703_;
v___y_3658_ = v___y_3704_;
v___y_3659_ = v___y_3705_;
goto v___jp_3655_;
}
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3829_; 
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3822_ = lean_ctor_get(v___x_3749_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3749_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3824_ = v___x_3749_;
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___x_3749_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3827_; 
if (v_isShared_3825_ == 0)
{
v___x_3827_ = v___x_3824_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_a_3822_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
}
else
{
lean_object* v_a_3830_; lean_object* v___x_3832_; uint8_t v_isShared_3833_; uint8_t v_isSharedCheck_3837_; 
lean_dec_ref(v___x_3360_);
lean_del_object(v___x_3242_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3830_ = lean_ctor_get(v___x_3706_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v___x_3706_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3832_ = v___x_3706_;
v_isShared_3833_ = v_isSharedCheck_3837_;
goto v_resetjp_3831_;
}
else
{
lean_inc(v_a_3830_);
lean_dec(v___x_3706_);
v___x_3832_ = lean_box(0);
v_isShared_3833_ = v_isSharedCheck_3837_;
goto v_resetjp_3831_;
}
v_resetjp_3831_:
{
lean_object* v___x_3835_; 
if (v_isShared_3833_ == 0)
{
v___x_3835_ = v___x_3832_;
goto v_reusejp_3834_;
}
else
{
lean_object* v_reuseFailAlloc_3836_; 
v_reuseFailAlloc_3836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3836_, 0, v_a_3830_);
v___x_3835_ = v_reuseFailAlloc_3836_;
goto v_reusejp_3834_;
}
v_reusejp_3834_:
{
return v___x_3835_;
}
}
}
}
}
else
{
lean_del_object(v___x_3242_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
v_a_3234_ = v___x_3286_;
goto v___jp_3233_;
}
v___jp_3245_:
{
lean_object* v___x_3250_; 
lean_inc(v_mvarId_3209_);
v___x_3250_ = l_Lean_MVarId_getType(v_mvarId_3209_, v___y_3248_, v___y_3246_, v___y_3247_, v___y_3249_);
if (lean_obj_tag(v___x_3250_) == 0)
{
lean_object* v_a_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; 
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
lean_inc(v_a_3251_);
lean_dec_ref(v___x_3250_);
v___x_3252_ = l_Lean_LocalDecl_toExpr(v_val_3240_);
v___x_3253_ = l_Lean_Meta_mkNoConfusion(v_a_3251_, v___x_3252_, v___y_3248_, v___y_3246_, v___y_3247_, v___y_3249_);
if (lean_obj_tag(v___x_3253_) == 0)
{
lean_object* v_a_3254_; lean_object* v___x_3255_; 
v_a_3254_ = lean_ctor_get(v___x_3253_, 0);
lean_inc(v_a_3254_);
lean_dec_ref(v___x_3253_);
v___x_3255_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3209_, v_a_3254_, v___y_3246_);
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v___x_3256_; lean_object* v___x_3258_; 
lean_dec_ref(v___x_3255_);
v___x_3256_ = lean_box(v___x_3219_);
if (v_isShared_3243_ == 0)
{
lean_ctor_set(v___x_3242_, 0, v___x_3256_);
v___x_3258_ = v___x_3242_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v___x_3256_);
v___x_3258_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___x_3259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3259_, 0, v___x_3258_);
lean_ctor_set(v___x_3259_, 1, v___x_3244_);
v___x_3260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3259_);
v_a_3226_ = v___x_3260_;
goto v___jp_3225_;
}
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
lean_del_object(v___x_3242_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
v_a_3262_ = lean_ctor_get(v___x_3255_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3255_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3255_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3255_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
}
else
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3277_; 
lean_del_object(v___x_3242_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3270_ = lean_ctor_get(v___x_3253_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3253_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3272_ = v___x_3253_;
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v___x_3253_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3277_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3275_; 
if (v_isShared_3273_ == 0)
{
v___x_3275_ = v___x_3272_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_a_3270_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
}
else
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3285_; 
lean_del_object(v___x_3242_);
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
v_a_3278_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3280_ = v___x_3250_;
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v___x_3250_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3283_; 
if (v_isShared_3281_ == 0)
{
v___x_3283_ = v___x_3280_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_a_3278_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
}
v___jp_3287_:
{
lean_object* v_searchFuel_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; 
v_searchFuel_3292_ = lean_ctor_get(v_config_3208_, 0);
v___x_3293_ = l_Lean_LocalDecl_fvarId(v_val_3240_);
lean_dec(v_val_3240_);
lean_inc(v_searchFuel_3292_);
lean_inc(v_mvarId_3209_);
v___x_3294_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_3209_, v___x_3293_, v_searchFuel_3292_, v___y_3291_, v___y_3288_, v___y_3289_, v___y_3290_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; uint8_t v___x_3296_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_a_3295_);
lean_dec_ref(v___x_3294_);
v___x_3296_ = lean_unbox(v_a_3295_);
lean_dec(v_a_3295_);
if (v___x_3296_ == 0)
{
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
v_a_3234_ = v___x_3286_;
goto v___jp_3233_;
}
else
{
lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v___x_3297_ = lean_box(v___x_3219_);
v___x_3298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3298_, 0, v___x_3297_);
v___x_3299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3298_);
lean_ctor_set(v___x_3299_, 1, v___x_3244_);
v___x_3300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3299_);
v_a_3226_ = v___x_3300_;
goto v___jp_3225_;
}
}
else
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3308_; 
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3301_ = lean_ctor_get(v___x_3294_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3303_ = v___x_3294_;
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3294_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3306_; 
if (v_isShared_3304_ == 0)
{
v___x_3306_ = v___x_3303_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v_a_3301_);
v___x_3306_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
return v___x_3306_;
}
}
}
}
v___jp_3309_:
{
if (v___y_3314_ == 0)
{
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
v_a_3234_ = v___x_3286_;
goto v___jp_3233_;
}
else
{
v___y_3288_ = v___y_3310_;
v___y_3289_ = v___y_3311_;
v___y_3290_ = v___y_3312_;
v___y_3291_ = v___y_3313_;
goto v___jp_3287_;
}
}
v___jp_3316_:
{
if (v___y_3320_ == 0)
{
v___y_3288_ = v___y_3317_;
v___y_3289_ = v___y_3318_;
v___y_3290_ = v___y_3319_;
v___y_3291_ = v___y_3321_;
goto v___jp_3287_;
}
else
{
v___y_3310_ = v___y_3317_;
v___y_3311_ = v___y_3318_;
v___y_3312_ = v___y_3319_;
v___y_3313_ = v___y_3321_;
v___y_3314_ = v___x_3315_;
goto v___jp_3309_;
}
}
v___jp_3322_:
{
if (v___y_3328_ == 0)
{
v___y_3310_ = v___y_3323_;
v___y_3311_ = v___y_3324_;
v___y_3312_ = v___y_3325_;
v___y_3313_ = v___y_3327_;
v___y_3314_ = v___x_3315_;
goto v___jp_3309_;
}
else
{
v___y_3317_ = v___y_3323_;
v___y_3318_ = v___y_3324_;
v___y_3319_ = v___y_3325_;
v___y_3320_ = v___y_3326_;
v___y_3321_ = v___y_3327_;
goto v___jp_3316_;
}
}
v___jp_3329_:
{
uint8_t v_emptyType_3336_; 
v_emptyType_3336_ = lean_ctor_get_uint8(v_config_3208_, sizeof(void*)*1 + 1);
if (v_emptyType_3336_ == 0)
{
v___y_3323_ = v___y_3333_;
v___y_3324_ = v___y_3334_;
v___y_3325_ = v___y_3335_;
v___y_3326_ = v___y_3331_;
v___y_3327_ = v___y_3332_;
v___y_3328_ = v___x_3315_;
goto v___jp_3322_;
}
else
{
if (v___y_3330_ == 0)
{
v___y_3317_ = v___y_3333_;
v___y_3318_ = v___y_3334_;
v___y_3319_ = v___y_3335_;
v___y_3320_ = v___y_3331_;
v___y_3321_ = v___y_3332_;
goto v___jp_3316_;
}
else
{
v___y_3323_ = v___y_3333_;
v___y_3324_ = v___y_3334_;
v___y_3325_ = v___y_3335_;
v___y_3326_ = v___y_3331_;
v___y_3327_ = v___y_3332_;
v___y_3328_ = v___x_3315_;
goto v___jp_3322_;
}
}
}
v___jp_3337_:
{
if (v___y_3344_ == 0)
{
v___y_3330_ = v___y_3341_;
v___y_3331_ = v___y_3342_;
v___y_3332_ = v___y_3339_;
v___y_3333_ = v___y_3338_;
v___y_3334_ = v___y_3343_;
v___y_3335_ = v___y_3340_;
goto v___jp_3329_;
}
else
{
lean_object* v___x_3345_; 
lean_inc(v_val_3240_);
lean_inc(v_mvarId_3209_);
v___x_3345_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_3209_, v_val_3240_, v___y_3339_, v___y_3338_, v___y_3343_, v___y_3340_);
if (lean_obj_tag(v___x_3345_) == 0)
{
lean_object* v_a_3346_; uint8_t v___x_3347_; 
v_a_3346_ = lean_ctor_get(v___x_3345_, 0);
lean_inc(v_a_3346_);
lean_dec_ref(v___x_3345_);
v___x_3347_ = lean_unbox(v_a_3346_);
lean_dec(v_a_3346_);
if (v___x_3347_ == 0)
{
v___y_3330_ = v___y_3341_;
v___y_3331_ = v___y_3342_;
v___y_3332_ = v___y_3339_;
v___y_3333_ = v___y_3338_;
v___y_3334_ = v___y_3343_;
v___y_3335_ = v___y_3340_;
goto v___jp_3329_;
}
else
{
lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; 
lean_dec(v_val_3240_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v___x_3348_ = lean_box(v___x_3219_);
v___x_3349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
v___x_3350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3349_);
lean_ctor_set(v___x_3350_, 1, v___x_3244_);
v___x_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3350_);
v_a_3226_ = v___x_3351_;
goto v___jp_3225_;
}
}
else
{
lean_object* v_a_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3359_; 
lean_dec(v_val_3240_);
lean_del_object(v___x_3223_);
lean_dec(v_snd_3221_);
lean_dec(v_mvarId_3209_);
lean_dec_ref(v_config_3208_);
v_a_3352_ = lean_ctor_get(v___x_3345_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3359_ == 0)
{
v___x_3354_ = v___x_3345_;
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_a_3352_);
lean_dec(v___x_3345_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3359_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3357_; 
if (v_isShared_3355_ == 0)
{
v___x_3357_ = v___x_3354_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v_a_3352_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
}
}
}
}
}
v___jp_3225_:
{
lean_object* v___x_3227_; lean_object* v___x_3229_; 
v___x_3227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3227_, 0, v_a_3226_);
if (v_isShared_3224_ == 0)
{
lean_ctor_set(v___x_3223_, 0, v___x_3227_);
v___x_3229_ = v___x_3223_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3231_; 
v_reuseFailAlloc_3231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3231_, 0, v___x_3227_);
lean_ctor_set(v_reuseFailAlloc_3231_, 1, v_snd_3221_);
v___x_3229_ = v_reuseFailAlloc_3231_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
lean_object* v___x_3230_; 
v___x_3230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3229_);
return v___x_3230_;
}
}
v___jp_3233_:
{
lean_object* v___x_3235_; size_t v___x_3236_; size_t v___x_3237_; 
v___x_3235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3235_, 0, v___x_3232_);
lean_ctor_set(v___x_3235_, 1, v_a_3234_);
v___x_3236_ = ((size_t)1ULL);
v___x_3237_ = lean_usize_add(v_i_3212_, v___x_3236_);
v_i_3212_ = v___x_3237_;
v_b_3213_ = v___x_3235_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_config_3911_, lean_object* v_mvarId_3912_, lean_object* v_as_3913_, lean_object* v_sz_3914_, lean_object* v_i_3915_, lean_object* v_b_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_){
_start:
{
size_t v_sz_boxed_3922_; size_t v_i_boxed_3923_; lean_object* v_res_3924_; 
v_sz_boxed_3922_ = lean_unbox_usize(v_sz_3914_);
lean_dec(v_sz_3914_);
v_i_boxed_3923_ = lean_unbox_usize(v_i_3915_);
lean_dec(v_i_3915_);
v_res_3924_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(v_config_3911_, v_mvarId_3912_, v_as_3913_, v_sz_boxed_3922_, v_i_boxed_3923_, v_b_3916_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_);
lean_dec(v___y_3920_);
lean_dec_ref(v___y_3919_);
lean_dec(v___y_3918_);
lean_dec_ref(v___y_3917_);
lean_dec_ref(v_as_3913_);
return v_res_3924_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(lean_object* v_config_3925_, lean_object* v_mvarId_3926_, lean_object* v_as_3927_, size_t v_sz_3928_, size_t v_i_3929_, lean_object* v_b_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_){
_start:
{
uint8_t v___x_3936_; 
v___x_3936_ = lean_usize_dec_lt(v_i_3929_, v_sz_3928_);
if (v___x_3936_ == 0)
{
lean_object* v___x_3937_; 
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v___x_3937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3937_, 0, v_b_3930_);
return v___x_3937_;
}
else
{
lean_object* v_snd_3938_; lean_object* v___x_3940_; uint8_t v_isShared_3941_; uint8_t v_isSharedCheck_4626_; 
v_snd_3938_ = lean_ctor_get(v_b_3930_, 1);
v_isSharedCheck_4626_ = !lean_is_exclusive(v_b_3930_);
if (v_isSharedCheck_4626_ == 0)
{
lean_object* v_unused_4627_; 
v_unused_4627_ = lean_ctor_get(v_b_3930_, 0);
lean_dec(v_unused_4627_);
v___x_3940_ = v_b_3930_;
v_isShared_3941_ = v_isSharedCheck_4626_;
goto v_resetjp_3939_;
}
else
{
lean_inc(v_snd_3938_);
lean_dec(v_b_3930_);
v___x_3940_ = lean_box(0);
v_isShared_3941_ = v_isSharedCheck_4626_;
goto v_resetjp_3939_;
}
v_resetjp_3939_:
{
lean_object* v_a_3943_; lean_object* v___x_3949_; lean_object* v_a_3951_; lean_object* v_a_3956_; 
v___x_3949_ = lean_box(0);
v_a_3956_ = lean_array_uget(v_as_3927_, v_i_3929_);
if (lean_obj_tag(v_a_3956_) == 0)
{
lean_del_object(v___x_3940_);
v_a_3951_ = v_snd_3938_;
goto v___jp_3950_;
}
else
{
lean_object* v_val_3957_; lean_object* v___x_3959_; uint8_t v_isShared_3960_; uint8_t v_isSharedCheck_4625_; 
v_val_3957_ = lean_ctor_get(v_a_3956_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v_a_3956_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_3959_ = v_a_3956_;
v_isShared_3960_ = v_isSharedCheck_4625_;
goto v_resetjp_3958_;
}
else
{
lean_inc(v_val_3957_);
lean_dec(v_a_3956_);
v___x_3959_ = lean_box(0);
v_isShared_3960_ = v_isSharedCheck_4625_;
goto v_resetjp_3958_;
}
v_resetjp_3958_:
{
lean_object* v___x_3961_; lean_object* v___y_3963_; lean_object* v___y_3964_; lean_object* v___y_3965_; lean_object* v___y_3966_; lean_object* v___x_4003_; lean_object* v___y_4005_; lean_object* v___y_4006_; lean_object* v___y_4007_; lean_object* v___y_4008_; lean_object* v___y_4027_; lean_object* v___y_4028_; lean_object* v___y_4029_; lean_object* v___y_4030_; uint8_t v___y_4031_; uint8_t v___x_4032_; lean_object* v___y_4034_; lean_object* v___y_4035_; lean_object* v___y_4036_; uint8_t v___y_4037_; lean_object* v___y_4038_; lean_object* v___y_4040_; lean_object* v___y_4041_; lean_object* v___y_4042_; uint8_t v___y_4043_; lean_object* v___y_4044_; uint8_t v___y_4045_; uint8_t v___y_4047_; uint8_t v___y_4048_; lean_object* v___y_4049_; lean_object* v___y_4050_; lean_object* v___y_4051_; lean_object* v___y_4052_; uint8_t v___y_4055_; lean_object* v___y_4056_; uint8_t v___y_4057_; lean_object* v___y_4058_; lean_object* v___y_4059_; lean_object* v___y_4060_; uint8_t v___y_4061_; 
v___x_3961_ = lean_box(0);
v___x_4003_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_4032_ = l_Lean_LocalDecl_isImplementationDetail(v_val_3957_);
if (v___x_4032_ == 0)
{
lean_object* v___x_4077_; uint8_t v___y_4079_; uint8_t v___y_4080_; lean_object* v___y_4081_; lean_object* v___y_4082_; lean_object* v___y_4083_; lean_object* v___y_4084_; uint8_t v___y_4088_; lean_object* v___y_4089_; lean_object* v___y_4090_; uint8_t v___y_4091_; lean_object* v___y_4092_; lean_object* v___y_4093_; lean_object* v___y_4094_; uint8_t v___y_4095_; uint8_t v___y_4098_; lean_object* v___y_4099_; lean_object* v___y_4100_; lean_object* v___y_4101_; uint8_t v___y_4102_; lean_object* v___y_4103_; lean_object* v_a_4104_; uint8_t v___y_4108_; lean_object* v___y_4109_; lean_object* v___y_4110_; uint8_t v___y_4111_; lean_object* v___y_4112_; lean_object* v___y_4113_; uint8_t v___y_4206_; lean_object* v___y_4207_; lean_object* v___y_4208_; uint8_t v___y_4209_; lean_object* v___y_4210_; lean_object* v___y_4211_; uint8_t v___y_4212_; uint8_t v___y_4214_; lean_object* v___y_4215_; lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; uint8_t v___y_4219_; lean_object* v___y_4220_; uint8_t v___y_4221_; uint8_t v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; uint8_t v___y_4228_; lean_object* v___y_4229_; uint8_t v___y_4230_; uint8_t v___y_4243_; lean_object* v___y_4244_; lean_object* v___y_4245_; uint8_t v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; uint8_t v___y_4249_; uint8_t v___y_4251_; uint8_t v_isHEq_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; uint8_t v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4263_; lean_object* v___y_4264_; lean_object* v___y_4265_; lean_object* v___y_4266_; uint8_t v_isEq_4323_; lean_object* v___y_4324_; lean_object* v___y_4325_; lean_object* v___y_4326_; lean_object* v___y_4327_; lean_object* v___y_4373_; lean_object* v___y_4374_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4419_; lean_object* v___y_4420_; lean_object* v___y_4421_; lean_object* v___y_4422_; lean_object* v___x_4555_; 
v___x_4077_ = l_Lean_LocalDecl_type(v_val_3957_);
lean_inc_ref(v___x_4077_);
v___x_4555_ = l_Lean_Meta_matchNot_x3f(v___x_4077_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
if (lean_obj_tag(v___x_4555_) == 0)
{
lean_object* v_a_4556_; 
v_a_4556_ = lean_ctor_get(v___x_4555_, 0);
lean_inc(v_a_4556_);
lean_dec_ref(v___x_4555_);
if (lean_obj_tag(v_a_4556_) == 1)
{
lean_object* v_val_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4616_; 
v_val_4557_ = lean_ctor_get(v_a_4556_, 0);
v_isSharedCheck_4616_ = !lean_is_exclusive(v_a_4556_);
if (v_isSharedCheck_4616_ == 0)
{
v___x_4559_ = v_a_4556_;
v_isShared_4560_ = v_isSharedCheck_4616_;
goto v_resetjp_4558_;
}
else
{
lean_inc(v_val_4557_);
lean_dec(v_a_4556_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4616_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v___x_4561_; 
v___x_4561_ = l_Lean_Meta_findLocalDeclWithType_x3f(v_val_4557_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
if (lean_obj_tag(v___x_4561_) == 0)
{
lean_object* v_a_4562_; 
v_a_4562_ = lean_ctor_get(v___x_4561_, 0);
lean_inc(v_a_4562_);
lean_dec_ref(v___x_4561_);
if (lean_obj_tag(v_a_4562_) == 1)
{
lean_object* v_val_4563_; lean_object* v___x_4565_; uint8_t v_isShared_4566_; uint8_t v_isSharedCheck_4607_; 
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec_ref(v_config_3925_);
v_val_4563_ = lean_ctor_get(v_a_4562_, 0);
v_isSharedCheck_4607_ = !lean_is_exclusive(v_a_4562_);
if (v_isSharedCheck_4607_ == 0)
{
v___x_4565_ = v_a_4562_;
v_isShared_4566_ = v_isSharedCheck_4607_;
goto v_resetjp_4564_;
}
else
{
lean_inc(v_val_4563_);
lean_dec(v_a_4562_);
v___x_4565_ = lean_box(0);
v_isShared_4566_ = v_isSharedCheck_4607_;
goto v_resetjp_4564_;
}
v_resetjp_4564_:
{
lean_object* v___x_4567_; 
lean_inc(v_mvarId_3926_);
v___x_4567_ = l_Lean_MVarId_getType(v_mvarId_3926_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
if (lean_obj_tag(v___x_4567_) == 0)
{
lean_object* v_a_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; lean_object* v___x_4572_; 
v_a_4568_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4568_);
lean_dec_ref(v___x_4567_);
v___x_4569_ = l_Lean_LocalDecl_toExpr(v_val_3957_);
v___x_4570_ = l_Lean_mkFVar(v_val_4563_);
v___x_4571_ = l_Lean_Expr_app___override(v___x_4569_, v___x_4570_);
v___x_4572_ = l_Lean_Meta_mkFalseElim(v_a_4568_, v___x_4571_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
if (lean_obj_tag(v___x_4572_) == 0)
{
lean_object* v_a_4573_; lean_object* v___x_4574_; 
v_a_4573_ = lean_ctor_get(v___x_4572_, 0);
lean_inc(v_a_4573_);
lean_dec_ref(v___x_4572_);
v___x_4574_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3926_, v_a_4573_, v___y_3932_);
if (lean_obj_tag(v___x_4574_) == 0)
{
lean_object* v___x_4575_; lean_object* v___x_4577_; 
lean_dec_ref(v___x_4574_);
v___x_4575_ = lean_box(v___x_3936_);
if (v_isShared_4566_ == 0)
{
lean_ctor_set(v___x_4565_, 0, v___x_4575_);
v___x_4577_ = v___x_4565_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4582_; 
v_reuseFailAlloc_4582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4582_, 0, v___x_4575_);
v___x_4577_ = v_reuseFailAlloc_4582_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
lean_object* v___x_4578_; lean_object* v___x_4580_; 
v___x_4578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4578_, 0, v___x_4577_);
lean_ctor_set(v___x_4578_, 1, v___x_3961_);
if (v_isShared_4560_ == 0)
{
lean_ctor_set_tag(v___x_4559_, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4578_);
v___x_4580_ = v___x_4559_;
goto v_reusejp_4579_;
}
else
{
lean_object* v_reuseFailAlloc_4581_; 
v_reuseFailAlloc_4581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4581_, 0, v___x_4578_);
v___x_4580_ = v_reuseFailAlloc_4581_;
goto v_reusejp_4579_;
}
v_reusejp_4579_:
{
v_a_3943_ = v___x_4580_;
goto v___jp_3942_;
}
}
}
else
{
lean_object* v_a_4583_; lean_object* v___x_4585_; uint8_t v_isShared_4586_; uint8_t v_isSharedCheck_4590_; 
lean_del_object(v___x_4565_);
lean_del_object(v___x_4559_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
v_a_4583_ = lean_ctor_get(v___x_4574_, 0);
v_isSharedCheck_4590_ = !lean_is_exclusive(v___x_4574_);
if (v_isSharedCheck_4590_ == 0)
{
v___x_4585_ = v___x_4574_;
v_isShared_4586_ = v_isSharedCheck_4590_;
goto v_resetjp_4584_;
}
else
{
lean_inc(v_a_4583_);
lean_dec(v___x_4574_);
v___x_4585_ = lean_box(0);
v_isShared_4586_ = v_isSharedCheck_4590_;
goto v_resetjp_4584_;
}
v_resetjp_4584_:
{
lean_object* v___x_4588_; 
if (v_isShared_4586_ == 0)
{
v___x_4588_ = v___x_4585_;
goto v_reusejp_4587_;
}
else
{
lean_object* v_reuseFailAlloc_4589_; 
v_reuseFailAlloc_4589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4589_, 0, v_a_4583_);
v___x_4588_ = v_reuseFailAlloc_4589_;
goto v_reusejp_4587_;
}
v_reusejp_4587_:
{
return v___x_4588_;
}
}
}
}
else
{
lean_object* v_a_4591_; lean_object* v___x_4593_; uint8_t v_isShared_4594_; uint8_t v_isSharedCheck_4598_; 
lean_del_object(v___x_4565_);
lean_del_object(v___x_4559_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_4591_ = lean_ctor_get(v___x_4572_, 0);
v_isSharedCheck_4598_ = !lean_is_exclusive(v___x_4572_);
if (v_isSharedCheck_4598_ == 0)
{
v___x_4593_ = v___x_4572_;
v_isShared_4594_ = v_isSharedCheck_4598_;
goto v_resetjp_4592_;
}
else
{
lean_inc(v_a_4591_);
lean_dec(v___x_4572_);
v___x_4593_ = lean_box(0);
v_isShared_4594_ = v_isSharedCheck_4598_;
goto v_resetjp_4592_;
}
v_resetjp_4592_:
{
lean_object* v___x_4596_; 
if (v_isShared_4594_ == 0)
{
v___x_4596_ = v___x_4593_;
goto v_reusejp_4595_;
}
else
{
lean_object* v_reuseFailAlloc_4597_; 
v_reuseFailAlloc_4597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4597_, 0, v_a_4591_);
v___x_4596_ = v_reuseFailAlloc_4597_;
goto v_reusejp_4595_;
}
v_reusejp_4595_:
{
return v___x_4596_;
}
}
}
}
else
{
lean_object* v_a_4599_; lean_object* v___x_4601_; uint8_t v_isShared_4602_; uint8_t v_isSharedCheck_4606_; 
lean_del_object(v___x_4565_);
lean_dec(v_val_4563_);
lean_del_object(v___x_4559_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_4599_ = lean_ctor_get(v___x_4567_, 0);
v_isSharedCheck_4606_ = !lean_is_exclusive(v___x_4567_);
if (v_isSharedCheck_4606_ == 0)
{
v___x_4601_ = v___x_4567_;
v_isShared_4602_ = v_isSharedCheck_4606_;
goto v_resetjp_4600_;
}
else
{
lean_inc(v_a_4599_);
lean_dec(v___x_4567_);
v___x_4601_ = lean_box(0);
v_isShared_4602_ = v_isSharedCheck_4606_;
goto v_resetjp_4600_;
}
v_resetjp_4600_:
{
lean_object* v___x_4604_; 
if (v_isShared_4602_ == 0)
{
v___x_4604_ = v___x_4601_;
goto v_reusejp_4603_;
}
else
{
lean_object* v_reuseFailAlloc_4605_; 
v_reuseFailAlloc_4605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4605_, 0, v_a_4599_);
v___x_4604_ = v_reuseFailAlloc_4605_;
goto v_reusejp_4603_;
}
v_reusejp_4603_:
{
return v___x_4604_;
}
}
}
}
}
else
{
lean_dec(v_a_4562_);
lean_del_object(v___x_4559_);
v___y_4419_ = v___y_3931_;
v___y_4420_ = v___y_3932_;
v___y_4421_ = v___y_3933_;
v___y_4422_ = v___y_3934_;
goto v___jp_4418_;
}
}
else
{
lean_object* v_a_4608_; lean_object* v___x_4610_; uint8_t v_isShared_4611_; uint8_t v_isSharedCheck_4615_; 
lean_del_object(v___x_4559_);
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4608_ = lean_ctor_get(v___x_4561_, 0);
v_isSharedCheck_4615_ = !lean_is_exclusive(v___x_4561_);
if (v_isSharedCheck_4615_ == 0)
{
v___x_4610_ = v___x_4561_;
v_isShared_4611_ = v_isSharedCheck_4615_;
goto v_resetjp_4609_;
}
else
{
lean_inc(v_a_4608_);
lean_dec(v___x_4561_);
v___x_4610_ = lean_box(0);
v_isShared_4611_ = v_isSharedCheck_4615_;
goto v_resetjp_4609_;
}
v_resetjp_4609_:
{
lean_object* v___x_4613_; 
if (v_isShared_4611_ == 0)
{
v___x_4613_ = v___x_4610_;
goto v_reusejp_4612_;
}
else
{
lean_object* v_reuseFailAlloc_4614_; 
v_reuseFailAlloc_4614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4614_, 0, v_a_4608_);
v___x_4613_ = v_reuseFailAlloc_4614_;
goto v_reusejp_4612_;
}
v_reusejp_4612_:
{
return v___x_4613_;
}
}
}
}
}
else
{
lean_dec(v_a_4556_);
v___y_4419_ = v___y_3931_;
v___y_4420_ = v___y_3932_;
v___y_4421_ = v___y_3933_;
v___y_4422_ = v___y_3934_;
goto v___jp_4418_;
}
}
else
{
lean_object* v_a_4617_; lean_object* v___x_4619_; uint8_t v_isShared_4620_; uint8_t v_isSharedCheck_4624_; 
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4617_ = lean_ctor_get(v___x_4555_, 0);
v_isSharedCheck_4624_ = !lean_is_exclusive(v___x_4555_);
if (v_isSharedCheck_4624_ == 0)
{
v___x_4619_ = v___x_4555_;
v_isShared_4620_ = v_isSharedCheck_4624_;
goto v_resetjp_4618_;
}
else
{
lean_inc(v_a_4617_);
lean_dec(v___x_4555_);
v___x_4619_ = lean_box(0);
v_isShared_4620_ = v_isSharedCheck_4624_;
goto v_resetjp_4618_;
}
v_resetjp_4618_:
{
lean_object* v___x_4622_; 
if (v_isShared_4620_ == 0)
{
v___x_4622_ = v___x_4619_;
goto v_reusejp_4621_;
}
else
{
lean_object* v_reuseFailAlloc_4623_; 
v_reuseFailAlloc_4623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4623_, 0, v_a_4617_);
v___x_4622_ = v_reuseFailAlloc_4623_;
goto v_reusejp_4621_;
}
v_reusejp_4621_:
{
return v___x_4622_;
}
}
}
v___jp_4078_:
{
uint8_t v_genDiseq_4085_; 
v_genDiseq_4085_ = lean_ctor_get_uint8(v_config_3925_, sizeof(void*)*1 + 2);
if (v_genDiseq_4085_ == 0)
{
lean_dec_ref(v___x_4077_);
v___y_4055_ = v___y_4079_;
v___y_4056_ = v___y_4084_;
v___y_4057_ = v___y_4080_;
v___y_4058_ = v___y_4083_;
v___y_4059_ = v___y_4081_;
v___y_4060_ = v___y_4082_;
v___y_4061_ = v___x_4032_;
goto v___jp_4054_;
}
else
{
uint8_t v___x_4086_; 
v___x_4086_ = l_Lean_Meta_Simp_isEqnThmHypothesis(v___x_4077_);
v___y_4055_ = v___y_4079_;
v___y_4056_ = v___y_4084_;
v___y_4057_ = v___y_4080_;
v___y_4058_ = v___y_4083_;
v___y_4059_ = v___y_4081_;
v___y_4060_ = v___y_4082_;
v___y_4061_ = v___x_4086_;
goto v___jp_4054_;
}
}
v___jp_4087_:
{
if (v___y_4095_ == 0)
{
lean_dec_ref(v___y_4093_);
v___y_4079_ = v___y_4088_;
v___y_4080_ = v___y_4091_;
v___y_4081_ = v___y_4089_;
v___y_4082_ = v___y_4090_;
v___y_4083_ = v___y_4092_;
v___y_4084_ = v___y_4094_;
goto v___jp_4078_;
}
else
{
lean_object* v___x_4096_; 
lean_dec_ref(v___x_4077_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v___x_4096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4096_, 0, v___y_4093_);
return v___x_4096_;
}
}
v___jp_4097_:
{
uint8_t v___x_4105_; 
v___x_4105_ = l_Lean_Exception_isInterrupt(v_a_4104_);
if (v___x_4105_ == 0)
{
uint8_t v___x_4106_; 
lean_inc_ref(v_a_4104_);
v___x_4106_ = l_Lean_Exception_isRuntime(v_a_4104_);
v___y_4088_ = v___y_4098_;
v___y_4089_ = v___y_4099_;
v___y_4090_ = v___y_4100_;
v___y_4091_ = v___y_4102_;
v___y_4092_ = v___y_4101_;
v___y_4093_ = v_a_4104_;
v___y_4094_ = v___y_4103_;
v___y_4095_ = v___x_4106_;
goto v___jp_4087_;
}
else
{
v___y_4088_ = v___y_4098_;
v___y_4089_ = v___y_4099_;
v___y_4090_ = v___y_4100_;
v___y_4091_ = v___y_4102_;
v___y_4092_ = v___y_4101_;
v___y_4093_ = v_a_4104_;
v___y_4094_ = v___y_4103_;
v___y_4095_ = v___x_4105_;
goto v___jp_4087_;
}
}
v___jp_4107_:
{
lean_object* v___x_4114_; 
lean_inc_ref(v___x_4077_);
v___x_4114_ = l_Lean_Meta_mkDecide(v___x_4077_, v___y_4109_, v___y_4110_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4114_) == 0)
{
lean_object* v_a_4115_; lean_object* v___x_4116_; uint8_t v_foApprox_4117_; uint8_t v_ctxApprox_4118_; uint8_t v_quasiPatternApprox_4119_; uint8_t v_constApprox_4120_; uint8_t v_isDefEqStuckEx_4121_; uint8_t v_unificationHints_4122_; uint8_t v_proofIrrelevance_4123_; uint8_t v_assignSyntheticOpaque_4124_; uint8_t v_offsetCnstrs_4125_; uint8_t v_etaStruct_4126_; uint8_t v_univApprox_4127_; uint8_t v_iota_4128_; uint8_t v_beta_4129_; uint8_t v_proj_4130_; uint8_t v_zeta_4131_; uint8_t v_zetaDelta_4132_; uint8_t v_zetaUnused_4133_; uint8_t v_zetaHave_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4203_; 
v_a_4115_ = lean_ctor_get(v___x_4114_, 0);
lean_inc(v_a_4115_);
lean_dec_ref(v___x_4114_);
v___x_4116_ = l_Lean_Meta_Context_config(v___y_4109_);
v_foApprox_4117_ = lean_ctor_get_uint8(v___x_4116_, 0);
v_ctxApprox_4118_ = lean_ctor_get_uint8(v___x_4116_, 1);
v_quasiPatternApprox_4119_ = lean_ctor_get_uint8(v___x_4116_, 2);
v_constApprox_4120_ = lean_ctor_get_uint8(v___x_4116_, 3);
v_isDefEqStuckEx_4121_ = lean_ctor_get_uint8(v___x_4116_, 4);
v_unificationHints_4122_ = lean_ctor_get_uint8(v___x_4116_, 5);
v_proofIrrelevance_4123_ = lean_ctor_get_uint8(v___x_4116_, 6);
v_assignSyntheticOpaque_4124_ = lean_ctor_get_uint8(v___x_4116_, 7);
v_offsetCnstrs_4125_ = lean_ctor_get_uint8(v___x_4116_, 8);
v_etaStruct_4126_ = lean_ctor_get_uint8(v___x_4116_, 10);
v_univApprox_4127_ = lean_ctor_get_uint8(v___x_4116_, 11);
v_iota_4128_ = lean_ctor_get_uint8(v___x_4116_, 12);
v_beta_4129_ = lean_ctor_get_uint8(v___x_4116_, 13);
v_proj_4130_ = lean_ctor_get_uint8(v___x_4116_, 14);
v_zeta_4131_ = lean_ctor_get_uint8(v___x_4116_, 15);
v_zetaDelta_4132_ = lean_ctor_get_uint8(v___x_4116_, 16);
v_zetaUnused_4133_ = lean_ctor_get_uint8(v___x_4116_, 17);
v_zetaHave_4134_ = lean_ctor_get_uint8(v___x_4116_, 18);
v_isSharedCheck_4203_ = !lean_is_exclusive(v___x_4116_);
if (v_isSharedCheck_4203_ == 0)
{
v___x_4136_ = v___x_4116_;
v_isShared_4137_ = v_isSharedCheck_4203_;
goto v_resetjp_4135_;
}
else
{
lean_dec(v___x_4116_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4203_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
uint8_t v_trackZetaDelta_4138_; lean_object* v_zetaDeltaSet_4139_; lean_object* v_lctx_4140_; lean_object* v_localInstances_4141_; lean_object* v_defEqCtx_x3f_4142_; lean_object* v_synthPendingDepth_4143_; lean_object* v_canUnfold_x3f_4144_; uint8_t v_univApprox_4145_; uint8_t v_inTypeClassResolution_4146_; uint8_t v_cacheInferType_4147_; uint8_t v___x_4148_; lean_object* v_config_4150_; 
v_trackZetaDelta_4138_ = lean_ctor_get_uint8(v___y_4109_, sizeof(void*)*7);
v_zetaDeltaSet_4139_ = lean_ctor_get(v___y_4109_, 1);
v_lctx_4140_ = lean_ctor_get(v___y_4109_, 2);
v_localInstances_4141_ = lean_ctor_get(v___y_4109_, 3);
v_defEqCtx_x3f_4142_ = lean_ctor_get(v___y_4109_, 4);
v_synthPendingDepth_4143_ = lean_ctor_get(v___y_4109_, 5);
v_canUnfold_x3f_4144_ = lean_ctor_get(v___y_4109_, 6);
v_univApprox_4145_ = lean_ctor_get_uint8(v___y_4109_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4146_ = lean_ctor_get_uint8(v___y_4109_, sizeof(void*)*7 + 2);
v_cacheInferType_4147_ = lean_ctor_get_uint8(v___y_4109_, sizeof(void*)*7 + 3);
v___x_4148_ = 1;
if (v_isShared_4137_ == 0)
{
v_config_4150_ = v___x_4136_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 0, v_foApprox_4117_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 1, v_ctxApprox_4118_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 2, v_quasiPatternApprox_4119_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 3, v_constApprox_4120_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 4, v_isDefEqStuckEx_4121_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 5, v_unificationHints_4122_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 6, v_proofIrrelevance_4123_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 7, v_assignSyntheticOpaque_4124_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 8, v_offsetCnstrs_4125_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 10, v_etaStruct_4126_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 11, v_univApprox_4127_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 12, v_iota_4128_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 13, v_beta_4129_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 14, v_proj_4130_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 15, v_zeta_4131_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 16, v_zetaDelta_4132_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 17, v_zetaUnused_4133_);
lean_ctor_set_uint8(v_reuseFailAlloc_4202_, 18, v_zetaHave_4134_);
v_config_4150_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
uint64_t v___x_4151_; uint64_t v___x_4152_; uint64_t v___x_4153_; uint64_t v___x_4154_; uint64_t v___x_4155_; uint64_t v_key_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; 
lean_ctor_set_uint8(v_config_4150_, 9, v___x_4148_);
v___x_4151_ = l_Lean_Meta_Context_configKey(v___y_4109_);
v___x_4152_ = 2ULL;
v___x_4153_ = lean_uint64_shift_right(v___x_4151_, v___x_4152_);
v___x_4154_ = lean_uint64_shift_left(v___x_4153_, v___x_4152_);
v___x_4155_ = lean_uint64_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__1);
v_key_4156_ = lean_uint64_lor(v___x_4154_, v___x_4155_);
v___x_4157_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4157_, 0, v_config_4150_);
lean_ctor_set_uint64(v___x_4157_, sizeof(void*)*1, v_key_4156_);
lean_inc(v_canUnfold_x3f_4144_);
lean_inc(v_synthPendingDepth_4143_);
lean_inc(v_defEqCtx_x3f_4142_);
lean_inc_ref(v_localInstances_4141_);
lean_inc_ref(v_lctx_4140_);
lean_inc(v_zetaDeltaSet_4139_);
v___x_4158_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4158_, 0, v___x_4157_);
lean_ctor_set(v___x_4158_, 1, v_zetaDeltaSet_4139_);
lean_ctor_set(v___x_4158_, 2, v_lctx_4140_);
lean_ctor_set(v___x_4158_, 3, v_localInstances_4141_);
lean_ctor_set(v___x_4158_, 4, v_defEqCtx_x3f_4142_);
lean_ctor_set(v___x_4158_, 5, v_synthPendingDepth_4143_);
lean_ctor_set(v___x_4158_, 6, v_canUnfold_x3f_4144_);
lean_ctor_set_uint8(v___x_4158_, sizeof(void*)*7, v_trackZetaDelta_4138_);
lean_ctor_set_uint8(v___x_4158_, sizeof(void*)*7 + 1, v_univApprox_4145_);
lean_ctor_set_uint8(v___x_4158_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4146_);
lean_ctor_set_uint8(v___x_4158_, sizeof(void*)*7 + 3, v_cacheInferType_4147_);
lean_inc(v___y_4113_);
lean_inc_ref(v___y_4112_);
lean_inc(v___y_4110_);
lean_inc(v_a_4115_);
v___x_4159_ = lean_whnf(v_a_4115_, v___x_4158_, v___y_4110_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4159_) == 0)
{
lean_object* v_a_4160_; lean_object* v___x_4161_; uint8_t v___x_4162_; 
v_a_4160_ = lean_ctor_get(v___x_4159_, 0);
lean_inc(v_a_4160_);
lean_dec_ref(v___x_4159_);
v___x_4161_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__4));
v___x_4162_ = l_Lean_Expr_isConstOf(v_a_4160_, v___x_4161_);
lean_dec(v_a_4160_);
if (v___x_4162_ == 0)
{
lean_dec(v_a_4115_);
v___y_4079_ = v___y_4108_;
v___y_4080_ = v___y_4111_;
v___y_4081_ = v___y_4109_;
v___y_4082_ = v___y_4110_;
v___y_4083_ = v___y_4112_;
v___y_4084_ = v___y_4113_;
goto v___jp_4078_;
}
else
{
lean_object* v___x_4163_; 
lean_inc(v_a_4115_);
v___x_4163_ = l_Lean_Meta_mkEqRefl(v_a_4115_, v___y_4109_, v___y_4110_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4163_) == 0)
{
lean_object* v_a_4164_; lean_object* v___x_4165_; 
v_a_4164_ = lean_ctor_get(v___x_4163_, 0);
lean_inc(v_a_4164_);
lean_dec_ref(v___x_4163_);
lean_inc(v_mvarId_3926_);
v___x_4165_ = l_Lean_MVarId_getType(v_mvarId_3926_, v___y_4109_, v___y_4110_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4165_) == 0)
{
lean_object* v_a_4166_; lean_object* v_nargs_4167_; lean_object* v___x_4168_; lean_object* v_dummy_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; 
v_a_4166_ = lean_ctor_get(v___x_4165_, 0);
lean_inc(v_a_4166_);
lean_dec_ref(v___x_4165_);
v_nargs_4167_ = l_Lean_Expr_getAppNumArgs(v_a_4115_);
v___x_4168_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__7);
v_dummy_4169_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1_spec__4___closed__8);
lean_inc(v_nargs_4167_);
v___x_4170_ = lean_mk_array(v_nargs_4167_, v_dummy_4169_);
v___x_4171_ = lean_unsigned_to_nat(1u);
v___x_4172_ = lean_nat_sub(v_nargs_4167_, v___x_4171_);
lean_dec(v_nargs_4167_);
v___x_4173_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_4115_, v___x_4170_, v___x_4172_);
v___x_4174_ = lean_array_push(v___x_4173_, v_a_4164_);
v___x_4175_ = l_Lean_mkAppN(v___x_4168_, v___x_4174_);
lean_dec_ref(v___x_4174_);
lean_inc(v_val_3957_);
v___x_4176_ = l_Lean_LocalDecl_toExpr(v_val_3957_);
v___x_4177_ = l_Lean_Meta_mkAbsurd(v_a_4166_, v___x_4176_, v___x_4175_, v___y_4109_, v___y_4110_, v___y_4112_, v___y_4113_);
if (lean_obj_tag(v___x_4177_) == 0)
{
lean_object* v_a_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4197_; 
v_a_4178_ = lean_ctor_get(v___x_4177_, 0);
v_isSharedCheck_4197_ = !lean_is_exclusive(v___x_4177_);
if (v_isSharedCheck_4197_ == 0)
{
v___x_4180_ = v___x_4177_;
v_isShared_4181_ = v_isSharedCheck_4197_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_a_4178_);
lean_dec(v___x_4177_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4197_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4182_; 
lean_inc(v_mvarId_3926_);
v___x_4182_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3926_, v_a_4178_, v___y_4110_);
if (lean_obj_tag(v___x_4182_) == 0)
{
lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4194_; 
lean_dec_ref(v___x_4077_);
lean_dec(v_val_3957_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_isSharedCheck_4194_ = !lean_is_exclusive(v___x_4182_);
if (v_isSharedCheck_4194_ == 0)
{
lean_object* v_unused_4195_; 
v_unused_4195_ = lean_ctor_get(v___x_4182_, 0);
lean_dec(v_unused_4195_);
v___x_4184_ = v___x_4182_;
v_isShared_4185_ = v_isSharedCheck_4194_;
goto v_resetjp_4183_;
}
else
{
lean_dec(v___x_4182_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4194_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v___x_4186_; lean_object* v___x_4188_; 
v___x_4186_ = lean_box(v___x_3936_);
if (v_isShared_4185_ == 0)
{
lean_ctor_set_tag(v___x_4184_, 1);
lean_ctor_set(v___x_4184_, 0, v___x_4186_);
v___x_4188_ = v___x_4184_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4193_; 
v_reuseFailAlloc_4193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4193_, 0, v___x_4186_);
v___x_4188_ = v_reuseFailAlloc_4193_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
lean_object* v___x_4189_; lean_object* v___x_4191_; 
v___x_4189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4188_);
lean_ctor_set(v___x_4189_, 1, v___x_3961_);
if (v_isShared_4181_ == 0)
{
lean_ctor_set(v___x_4180_, 0, v___x_4189_);
v___x_4191_ = v___x_4180_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v___x_4189_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
v_a_3943_ = v___x_4191_;
goto v___jp_3942_;
}
}
}
}
else
{
lean_object* v_a_4196_; 
lean_del_object(v___x_4180_);
v_a_4196_ = lean_ctor_get(v___x_4182_, 0);
lean_inc(v_a_4196_);
lean_dec_ref(v___x_4182_);
v___y_4098_ = v___y_4108_;
v___y_4099_ = v___y_4109_;
v___y_4100_ = v___y_4110_;
v___y_4101_ = v___y_4112_;
v___y_4102_ = v___y_4111_;
v___y_4103_ = v___y_4113_;
v_a_4104_ = v_a_4196_;
goto v___jp_4097_;
}
}
}
else
{
lean_object* v_a_4198_; 
v_a_4198_ = lean_ctor_get(v___x_4177_, 0);
lean_inc(v_a_4198_);
lean_dec_ref(v___x_4177_);
v___y_4098_ = v___y_4108_;
v___y_4099_ = v___y_4109_;
v___y_4100_ = v___y_4110_;
v___y_4101_ = v___y_4112_;
v___y_4102_ = v___y_4111_;
v___y_4103_ = v___y_4113_;
v_a_4104_ = v_a_4198_;
goto v___jp_4097_;
}
}
else
{
lean_object* v_a_4199_; 
lean_dec(v_a_4164_);
lean_dec(v_a_4115_);
v_a_4199_ = lean_ctor_get(v___x_4165_, 0);
lean_inc(v_a_4199_);
lean_dec_ref(v___x_4165_);
v___y_4098_ = v___y_4108_;
v___y_4099_ = v___y_4109_;
v___y_4100_ = v___y_4110_;
v___y_4101_ = v___y_4112_;
v___y_4102_ = v___y_4111_;
v___y_4103_ = v___y_4113_;
v_a_4104_ = v_a_4199_;
goto v___jp_4097_;
}
}
else
{
lean_object* v_a_4200_; 
lean_dec(v_a_4115_);
v_a_4200_ = lean_ctor_get(v___x_4163_, 0);
lean_inc(v_a_4200_);
lean_dec_ref(v___x_4163_);
v___y_4098_ = v___y_4108_;
v___y_4099_ = v___y_4109_;
v___y_4100_ = v___y_4110_;
v___y_4101_ = v___y_4112_;
v___y_4102_ = v___y_4111_;
v___y_4103_ = v___y_4113_;
v_a_4104_ = v_a_4200_;
goto v___jp_4097_;
}
}
}
else
{
lean_object* v_a_4201_; 
lean_dec(v_a_4115_);
v_a_4201_ = lean_ctor_get(v___x_4159_, 0);
lean_inc(v_a_4201_);
lean_dec_ref(v___x_4159_);
v___y_4098_ = v___y_4108_;
v___y_4099_ = v___y_4109_;
v___y_4100_ = v___y_4110_;
v___y_4101_ = v___y_4112_;
v___y_4102_ = v___y_4111_;
v___y_4103_ = v___y_4113_;
v_a_4104_ = v_a_4201_;
goto v___jp_4097_;
}
}
}
}
else
{
lean_object* v_a_4204_; 
v_a_4204_ = lean_ctor_get(v___x_4114_, 0);
lean_inc(v_a_4204_);
lean_dec_ref(v___x_4114_);
v___y_4098_ = v___y_4108_;
v___y_4099_ = v___y_4109_;
v___y_4100_ = v___y_4110_;
v___y_4101_ = v___y_4112_;
v___y_4102_ = v___y_4111_;
v___y_4103_ = v___y_4113_;
v_a_4104_ = v_a_4204_;
goto v___jp_4097_;
}
}
v___jp_4205_:
{
if (v___y_4212_ == 0)
{
v___y_4079_ = v___y_4206_;
v___y_4080_ = v___y_4209_;
v___y_4081_ = v___y_4207_;
v___y_4082_ = v___y_4208_;
v___y_4083_ = v___y_4210_;
v___y_4084_ = v___y_4211_;
goto v___jp_4078_;
}
else
{
v___y_4108_ = v___y_4206_;
v___y_4109_ = v___y_4207_;
v___y_4110_ = v___y_4208_;
v___y_4111_ = v___y_4209_;
v___y_4112_ = v___y_4210_;
v___y_4113_ = v___y_4211_;
goto v___jp_4107_;
}
}
v___jp_4213_:
{
if (v___y_4221_ == 0)
{
lean_dec_ref(v___y_4216_);
v___y_4206_ = v___y_4214_;
v___y_4207_ = v___y_4215_;
v___y_4208_ = v___y_4217_;
v___y_4209_ = v___y_4219_;
v___y_4210_ = v___y_4218_;
v___y_4211_ = v___y_4220_;
v___y_4212_ = v___x_4032_;
goto v___jp_4205_;
}
else
{
uint8_t v___x_4222_; 
v___x_4222_ = l_Lean_Expr_hasFVar(v___y_4216_);
lean_dec_ref(v___y_4216_);
if (v___x_4222_ == 0)
{
v___y_4108_ = v___y_4214_;
v___y_4109_ = v___y_4215_;
v___y_4110_ = v___y_4217_;
v___y_4111_ = v___y_4219_;
v___y_4112_ = v___y_4218_;
v___y_4113_ = v___y_4220_;
goto v___jp_4107_;
}
else
{
v___y_4206_ = v___y_4214_;
v___y_4207_ = v___y_4215_;
v___y_4208_ = v___y_4217_;
v___y_4209_ = v___y_4219_;
v___y_4210_ = v___y_4218_;
v___y_4211_ = v___y_4220_;
v___y_4212_ = v___x_4032_;
goto v___jp_4205_;
}
}
}
v___jp_4223_:
{
lean_object* v___x_4231_; 
lean_inc_ref(v___x_4077_);
v___x_4231_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq_spec__2___redArg(v___x_4077_, v___y_4226_);
if (lean_obj_tag(v___x_4231_) == 0)
{
lean_object* v_a_4232_; uint8_t v___x_4233_; 
v_a_4232_ = lean_ctor_get(v___x_4231_, 0);
lean_inc(v_a_4232_);
lean_dec_ref(v___x_4231_);
v___x_4233_ = l_Lean_Expr_hasMVar(v_a_4232_);
if (v___x_4233_ == 0)
{
v___y_4214_ = v___y_4224_;
v___y_4215_ = v___y_4225_;
v___y_4216_ = v_a_4232_;
v___y_4217_ = v___y_4226_;
v___y_4218_ = v___y_4227_;
v___y_4219_ = v___y_4228_;
v___y_4220_ = v___y_4229_;
v___y_4221_ = v___y_4230_;
goto v___jp_4213_;
}
else
{
v___y_4214_ = v___y_4224_;
v___y_4215_ = v___y_4225_;
v___y_4216_ = v_a_4232_;
v___y_4217_ = v___y_4226_;
v___y_4218_ = v___y_4227_;
v___y_4219_ = v___y_4228_;
v___y_4220_ = v___y_4229_;
v___y_4221_ = v___x_4032_;
goto v___jp_4213_;
}
}
else
{
lean_object* v_a_4234_; lean_object* v___x_4236_; uint8_t v_isShared_4237_; uint8_t v_isSharedCheck_4241_; 
lean_dec_ref(v___x_4077_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4234_ = lean_ctor_get(v___x_4231_, 0);
v_isSharedCheck_4241_ = !lean_is_exclusive(v___x_4231_);
if (v_isSharedCheck_4241_ == 0)
{
v___x_4236_ = v___x_4231_;
v_isShared_4237_ = v_isSharedCheck_4241_;
goto v_resetjp_4235_;
}
else
{
lean_inc(v_a_4234_);
lean_dec(v___x_4231_);
v___x_4236_ = lean_box(0);
v_isShared_4237_ = v_isSharedCheck_4241_;
goto v_resetjp_4235_;
}
v_resetjp_4235_:
{
lean_object* v___x_4239_; 
if (v_isShared_4237_ == 0)
{
v___x_4239_ = v___x_4236_;
goto v_reusejp_4238_;
}
else
{
lean_object* v_reuseFailAlloc_4240_; 
v_reuseFailAlloc_4240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4240_, 0, v_a_4234_);
v___x_4239_ = v_reuseFailAlloc_4240_;
goto v_reusejp_4238_;
}
v_reusejp_4238_:
{
return v___x_4239_;
}
}
}
}
v___jp_4242_:
{
if (v___y_4249_ == 0)
{
v___y_4079_ = v___y_4243_;
v___y_4080_ = v___y_4246_;
v___y_4081_ = v___y_4244_;
v___y_4082_ = v___y_4245_;
v___y_4083_ = v___y_4247_;
v___y_4084_ = v___y_4248_;
goto v___jp_4078_;
}
else
{
v___y_4224_ = v___y_4243_;
v___y_4225_ = v___y_4244_;
v___y_4226_ = v___y_4245_;
v___y_4227_ = v___y_4247_;
v___y_4228_ = v___y_4246_;
v___y_4229_ = v___y_4248_;
v___y_4230_ = v___y_4249_;
goto v___jp_4223_;
}
}
v___jp_4250_:
{
uint8_t v_useDecide_4257_; 
v_useDecide_4257_ = lean_ctor_get_uint8(v_config_3925_, sizeof(void*)*1);
if (v_useDecide_4257_ == 0)
{
v___y_4243_ = v___y_4251_;
v___y_4244_ = v___y_4253_;
v___y_4245_ = v___y_4254_;
v___y_4246_ = v_isHEq_4252_;
v___y_4247_ = v___y_4255_;
v___y_4248_ = v___y_4256_;
v___y_4249_ = v___x_4032_;
goto v___jp_4242_;
}
else
{
uint8_t v___x_4258_; 
v___x_4258_ = l_Lean_Expr_hasFVar(v___x_4077_);
if (v___x_4258_ == 0)
{
v___y_4224_ = v___y_4251_;
v___y_4225_ = v___y_4253_;
v___y_4226_ = v___y_4254_;
v___y_4227_ = v___y_4255_;
v___y_4228_ = v_isHEq_4252_;
v___y_4229_ = v___y_4256_;
v___y_4230_ = v_useDecide_4257_;
goto v___jp_4223_;
}
else
{
v___y_4243_ = v___y_4251_;
v___y_4244_ = v___y_4253_;
v___y_4245_ = v___y_4254_;
v___y_4246_ = v_isHEq_4252_;
v___y_4247_ = v___y_4255_;
v___y_4248_ = v___y_4256_;
v___y_4249_ = v___x_4032_;
goto v___jp_4242_;
}
}
}
v___jp_4259_:
{
lean_object* v___x_4267_; 
v___x_4267_ = l_Lean_Meta_isExprDefEq(v___y_4263_, v___y_4266_, v___y_4261_, v___y_4262_, v___y_4265_, v___y_4264_);
if (lean_obj_tag(v___x_4267_) == 0)
{
lean_object* v_a_4268_; uint8_t v___x_4269_; 
v_a_4268_ = lean_ctor_get(v___x_4267_, 0);
lean_inc(v_a_4268_);
lean_dec_ref(v___x_4267_);
v___x_4269_ = lean_unbox(v_a_4268_);
lean_dec(v_a_4268_);
if (v___x_4269_ == 0)
{
v___y_4251_ = v___y_4260_;
v_isHEq_4252_ = v___x_3936_;
v___y_4253_ = v___y_4261_;
v___y_4254_ = v___y_4262_;
v___y_4255_ = v___y_4265_;
v___y_4256_ = v___y_4264_;
goto v___jp_4250_;
}
else
{
lean_object* v___x_4270_; 
lean_dec_ref(v___x_4077_);
lean_dec_ref(v_config_3925_);
lean_inc(v_mvarId_3926_);
v___x_4270_ = l_Lean_MVarId_getType(v_mvarId_3926_, v___y_4261_, v___y_4262_, v___y_4265_, v___y_4264_);
if (lean_obj_tag(v___x_4270_) == 0)
{
lean_object* v_a_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; 
v_a_4271_ = lean_ctor_get(v___x_4270_, 0);
lean_inc(v_a_4271_);
lean_dec_ref(v___x_4270_);
v___x_4272_ = l_Lean_LocalDecl_toExpr(v_val_3957_);
v___x_4273_ = l_Lean_Meta_mkEqOfHEq(v___x_4272_, v___x_3936_, v___y_4261_, v___y_4262_, v___y_4265_, v___y_4264_);
if (lean_obj_tag(v___x_4273_) == 0)
{
lean_object* v_a_4274_; lean_object* v___x_4275_; 
v_a_4274_ = lean_ctor_get(v___x_4273_, 0);
lean_inc(v_a_4274_);
lean_dec_ref(v___x_4273_);
v___x_4275_ = l_Lean_Meta_mkNoConfusion(v_a_4271_, v_a_4274_, v___y_4261_, v___y_4262_, v___y_4265_, v___y_4264_);
if (lean_obj_tag(v___x_4275_) == 0)
{
lean_object* v_a_4276_; lean_object* v___x_4277_; 
v_a_4276_ = lean_ctor_get(v___x_4275_, 0);
lean_inc(v_a_4276_);
lean_dec_ref(v___x_4275_);
v___x_4277_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3926_, v_a_4276_, v___y_4262_);
if (lean_obj_tag(v___x_4277_) == 0)
{
lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; 
lean_dec_ref(v___x_4277_);
v___x_4278_ = lean_box(v___x_3936_);
v___x_4279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4279_, 0, v___x_4278_);
v___x_4280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4280_, 0, v___x_4279_);
lean_ctor_set(v___x_4280_, 1, v___x_3961_);
v___x_4281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4281_, 0, v___x_4280_);
v_a_3943_ = v___x_4281_;
goto v___jp_3942_;
}
else
{
lean_object* v_a_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4289_; 
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
v_a_4282_ = lean_ctor_get(v___x_4277_, 0);
v_isSharedCheck_4289_ = !lean_is_exclusive(v___x_4277_);
if (v_isSharedCheck_4289_ == 0)
{
v___x_4284_ = v___x_4277_;
v_isShared_4285_ = v_isSharedCheck_4289_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_a_4282_);
lean_dec(v___x_4277_);
v___x_4284_ = lean_box(0);
v_isShared_4285_ = v_isSharedCheck_4289_;
goto v_resetjp_4283_;
}
v_resetjp_4283_:
{
lean_object* v___x_4287_; 
if (v_isShared_4285_ == 0)
{
v___x_4287_ = v___x_4284_;
goto v_reusejp_4286_;
}
else
{
lean_object* v_reuseFailAlloc_4288_; 
v_reuseFailAlloc_4288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4288_, 0, v_a_4282_);
v___x_4287_ = v_reuseFailAlloc_4288_;
goto v_reusejp_4286_;
}
v_reusejp_4286_:
{
return v___x_4287_;
}
}
}
}
else
{
lean_object* v_a_4290_; lean_object* v___x_4292_; uint8_t v_isShared_4293_; uint8_t v_isSharedCheck_4297_; 
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_4290_ = lean_ctor_get(v___x_4275_, 0);
v_isSharedCheck_4297_ = !lean_is_exclusive(v___x_4275_);
if (v_isSharedCheck_4297_ == 0)
{
v___x_4292_ = v___x_4275_;
v_isShared_4293_ = v_isSharedCheck_4297_;
goto v_resetjp_4291_;
}
else
{
lean_inc(v_a_4290_);
lean_dec(v___x_4275_);
v___x_4292_ = lean_box(0);
v_isShared_4293_ = v_isSharedCheck_4297_;
goto v_resetjp_4291_;
}
v_resetjp_4291_:
{
lean_object* v___x_4295_; 
if (v_isShared_4293_ == 0)
{
v___x_4295_ = v___x_4292_;
goto v_reusejp_4294_;
}
else
{
lean_object* v_reuseFailAlloc_4296_; 
v_reuseFailAlloc_4296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4296_, 0, v_a_4290_);
v___x_4295_ = v_reuseFailAlloc_4296_;
goto v_reusejp_4294_;
}
v_reusejp_4294_:
{
return v___x_4295_;
}
}
}
}
else
{
lean_object* v_a_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4305_; 
lean_dec(v_a_4271_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_4298_ = lean_ctor_get(v___x_4273_, 0);
v_isSharedCheck_4305_ = !lean_is_exclusive(v___x_4273_);
if (v_isSharedCheck_4305_ == 0)
{
v___x_4300_ = v___x_4273_;
v_isShared_4301_ = v_isSharedCheck_4305_;
goto v_resetjp_4299_;
}
else
{
lean_inc(v_a_4298_);
lean_dec(v___x_4273_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4305_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
lean_object* v___x_4303_; 
if (v_isShared_4301_ == 0)
{
v___x_4303_ = v___x_4300_;
goto v_reusejp_4302_;
}
else
{
lean_object* v_reuseFailAlloc_4304_; 
v_reuseFailAlloc_4304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4304_, 0, v_a_4298_);
v___x_4303_ = v_reuseFailAlloc_4304_;
goto v_reusejp_4302_;
}
v_reusejp_4302_:
{
return v___x_4303_;
}
}
}
}
else
{
lean_object* v_a_4306_; lean_object* v___x_4308_; uint8_t v_isShared_4309_; uint8_t v_isSharedCheck_4313_; 
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_4306_ = lean_ctor_get(v___x_4270_, 0);
v_isSharedCheck_4313_ = !lean_is_exclusive(v___x_4270_);
if (v_isSharedCheck_4313_ == 0)
{
v___x_4308_ = v___x_4270_;
v_isShared_4309_ = v_isSharedCheck_4313_;
goto v_resetjp_4307_;
}
else
{
lean_inc(v_a_4306_);
lean_dec(v___x_4270_);
v___x_4308_ = lean_box(0);
v_isShared_4309_ = v_isSharedCheck_4313_;
goto v_resetjp_4307_;
}
v_resetjp_4307_:
{
lean_object* v___x_4311_; 
if (v_isShared_4309_ == 0)
{
v___x_4311_ = v___x_4308_;
goto v_reusejp_4310_;
}
else
{
lean_object* v_reuseFailAlloc_4312_; 
v_reuseFailAlloc_4312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4312_, 0, v_a_4306_);
v___x_4311_ = v_reuseFailAlloc_4312_;
goto v_reusejp_4310_;
}
v_reusejp_4310_:
{
return v___x_4311_;
}
}
}
}
}
else
{
lean_object* v_a_4314_; lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4321_; 
lean_dec_ref(v___x_4077_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4314_ = lean_ctor_get(v___x_4267_, 0);
v_isSharedCheck_4321_ = !lean_is_exclusive(v___x_4267_);
if (v_isSharedCheck_4321_ == 0)
{
v___x_4316_ = v___x_4267_;
v_isShared_4317_ = v_isSharedCheck_4321_;
goto v_resetjp_4315_;
}
else
{
lean_inc(v_a_4314_);
lean_dec(v___x_4267_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4321_;
goto v_resetjp_4315_;
}
v_resetjp_4315_:
{
lean_object* v___x_4319_; 
if (v_isShared_4317_ == 0)
{
v___x_4319_ = v___x_4316_;
goto v_reusejp_4318_;
}
else
{
lean_object* v_reuseFailAlloc_4320_; 
v_reuseFailAlloc_4320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4320_, 0, v_a_4314_);
v___x_4319_ = v_reuseFailAlloc_4320_;
goto v_reusejp_4318_;
}
v_reusejp_4318_:
{
return v___x_4319_;
}
}
}
}
v___jp_4322_:
{
lean_object* v___x_4328_; 
lean_inc_ref(v___x_4077_);
v___x_4328_ = l_Lean_Meta_matchHEq_x3f(v___x_4077_, v___y_4324_, v___y_4325_, v___y_4326_, v___y_4327_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v_a_4329_; 
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
lean_inc(v_a_4329_);
lean_dec_ref(v___x_4328_);
if (lean_obj_tag(v_a_4329_) == 1)
{
lean_object* v_val_4330_; lean_object* v_snd_4331_; lean_object* v_snd_4332_; lean_object* v_fst_4333_; lean_object* v_fst_4334_; lean_object* v_fst_4335_; lean_object* v_snd_4336_; lean_object* v___x_4337_; 
v_val_4330_ = lean_ctor_get(v_a_4329_, 0);
lean_inc(v_val_4330_);
lean_dec_ref(v_a_4329_);
v_snd_4331_ = lean_ctor_get(v_val_4330_, 1);
lean_inc(v_snd_4331_);
v_snd_4332_ = lean_ctor_get(v_snd_4331_, 1);
lean_inc(v_snd_4332_);
v_fst_4333_ = lean_ctor_get(v_val_4330_, 0);
lean_inc(v_fst_4333_);
lean_dec(v_val_4330_);
v_fst_4334_ = lean_ctor_get(v_snd_4331_, 0);
lean_inc(v_fst_4334_);
lean_dec(v_snd_4331_);
v_fst_4335_ = lean_ctor_get(v_snd_4332_, 0);
lean_inc(v_fst_4335_);
v_snd_4336_ = lean_ctor_get(v_snd_4332_, 1);
lean_inc(v_snd_4336_);
lean_dec(v_snd_4332_);
v___x_4337_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_4334_, v___y_4324_, v___y_4325_, v___y_4326_, v___y_4327_);
if (lean_obj_tag(v___x_4337_) == 0)
{
lean_object* v_a_4338_; 
v_a_4338_ = lean_ctor_get(v___x_4337_, 0);
lean_inc(v_a_4338_);
lean_dec_ref(v___x_4337_);
if (lean_obj_tag(v_a_4338_) == 1)
{
lean_object* v_val_4339_; lean_object* v___x_4340_; 
v_val_4339_ = lean_ctor_get(v_a_4338_, 0);
lean_inc(v_val_4339_);
lean_dec_ref(v_a_4338_);
v___x_4340_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_4336_, v___y_4324_, v___y_4325_, v___y_4326_, v___y_4327_);
if (lean_obj_tag(v___x_4340_) == 0)
{
lean_object* v_a_4341_; 
v_a_4341_ = lean_ctor_get(v___x_4340_, 0);
lean_inc(v_a_4341_);
lean_dec_ref(v___x_4340_);
if (lean_obj_tag(v_a_4341_) == 1)
{
lean_object* v_toConstantVal_4342_; lean_object* v_val_4343_; lean_object* v_toConstantVal_4344_; lean_object* v_name_4345_; lean_object* v_name_4346_; uint8_t v___x_4347_; 
v_toConstantVal_4342_ = lean_ctor_get(v_val_4339_, 0);
lean_inc_ref(v_toConstantVal_4342_);
lean_dec(v_val_4339_);
v_val_4343_ = lean_ctor_get(v_a_4341_, 0);
lean_inc(v_val_4343_);
lean_dec_ref(v_a_4341_);
v_toConstantVal_4344_ = lean_ctor_get(v_val_4343_, 0);
lean_inc_ref(v_toConstantVal_4344_);
lean_dec(v_val_4343_);
v_name_4345_ = lean_ctor_get(v_toConstantVal_4342_, 0);
lean_inc(v_name_4345_);
lean_dec_ref(v_toConstantVal_4342_);
v_name_4346_ = lean_ctor_get(v_toConstantVal_4344_, 0);
lean_inc(v_name_4346_);
lean_dec_ref(v_toConstantVal_4344_);
v___x_4347_ = lean_name_eq(v_name_4345_, v_name_4346_);
lean_dec(v_name_4346_);
lean_dec(v_name_4345_);
if (v___x_4347_ == 0)
{
v___y_4260_ = v_isEq_4323_;
v___y_4261_ = v___y_4324_;
v___y_4262_ = v___y_4325_;
v___y_4263_ = v_fst_4333_;
v___y_4264_ = v___y_4327_;
v___y_4265_ = v___y_4326_;
v___y_4266_ = v_fst_4335_;
goto v___jp_4259_;
}
else
{
if (v___x_4032_ == 0)
{
lean_dec(v_fst_4335_);
lean_dec(v_fst_4333_);
v___y_4251_ = v_isEq_4323_;
v_isHEq_4252_ = v___x_3936_;
v___y_4253_ = v___y_4324_;
v___y_4254_ = v___y_4325_;
v___y_4255_ = v___y_4326_;
v___y_4256_ = v___y_4327_;
goto v___jp_4250_;
}
else
{
v___y_4260_ = v_isEq_4323_;
v___y_4261_ = v___y_4324_;
v___y_4262_ = v___y_4325_;
v___y_4263_ = v_fst_4333_;
v___y_4264_ = v___y_4327_;
v___y_4265_ = v___y_4326_;
v___y_4266_ = v_fst_4335_;
goto v___jp_4259_;
}
}
}
else
{
lean_dec(v_a_4341_);
lean_dec(v_val_4339_);
lean_dec(v_fst_4335_);
lean_dec(v_fst_4333_);
v___y_4251_ = v_isEq_4323_;
v_isHEq_4252_ = v___x_3936_;
v___y_4253_ = v___y_4324_;
v___y_4254_ = v___y_4325_;
v___y_4255_ = v___y_4326_;
v___y_4256_ = v___y_4327_;
goto v___jp_4250_;
}
}
else
{
lean_object* v_a_4348_; lean_object* v___x_4350_; uint8_t v_isShared_4351_; uint8_t v_isSharedCheck_4355_; 
lean_dec(v_val_4339_);
lean_dec(v_fst_4335_);
lean_dec(v_fst_4333_);
lean_dec_ref(v___x_4077_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4348_ = lean_ctor_get(v___x_4340_, 0);
v_isSharedCheck_4355_ = !lean_is_exclusive(v___x_4340_);
if (v_isSharedCheck_4355_ == 0)
{
v___x_4350_ = v___x_4340_;
v_isShared_4351_ = v_isSharedCheck_4355_;
goto v_resetjp_4349_;
}
else
{
lean_inc(v_a_4348_);
lean_dec(v___x_4340_);
v___x_4350_ = lean_box(0);
v_isShared_4351_ = v_isSharedCheck_4355_;
goto v_resetjp_4349_;
}
v_resetjp_4349_:
{
lean_object* v___x_4353_; 
if (v_isShared_4351_ == 0)
{
v___x_4353_ = v___x_4350_;
goto v_reusejp_4352_;
}
else
{
lean_object* v_reuseFailAlloc_4354_; 
v_reuseFailAlloc_4354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4354_, 0, v_a_4348_);
v___x_4353_ = v_reuseFailAlloc_4354_;
goto v_reusejp_4352_;
}
v_reusejp_4352_:
{
return v___x_4353_;
}
}
}
}
else
{
lean_dec(v_a_4338_);
lean_dec(v_snd_4336_);
lean_dec(v_fst_4335_);
lean_dec(v_fst_4333_);
v___y_4251_ = v_isEq_4323_;
v_isHEq_4252_ = v___x_3936_;
v___y_4253_ = v___y_4324_;
v___y_4254_ = v___y_4325_;
v___y_4255_ = v___y_4326_;
v___y_4256_ = v___y_4327_;
goto v___jp_4250_;
}
}
else
{
lean_object* v_a_4356_; lean_object* v___x_4358_; uint8_t v_isShared_4359_; uint8_t v_isSharedCheck_4363_; 
lean_dec(v_snd_4336_);
lean_dec(v_fst_4335_);
lean_dec(v_fst_4333_);
lean_dec_ref(v___x_4077_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4356_ = lean_ctor_get(v___x_4337_, 0);
v_isSharedCheck_4363_ = !lean_is_exclusive(v___x_4337_);
if (v_isSharedCheck_4363_ == 0)
{
v___x_4358_ = v___x_4337_;
v_isShared_4359_ = v_isSharedCheck_4363_;
goto v_resetjp_4357_;
}
else
{
lean_inc(v_a_4356_);
lean_dec(v___x_4337_);
v___x_4358_ = lean_box(0);
v_isShared_4359_ = v_isSharedCheck_4363_;
goto v_resetjp_4357_;
}
v_resetjp_4357_:
{
lean_object* v___x_4361_; 
if (v_isShared_4359_ == 0)
{
v___x_4361_ = v___x_4358_;
goto v_reusejp_4360_;
}
else
{
lean_object* v_reuseFailAlloc_4362_; 
v_reuseFailAlloc_4362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4362_, 0, v_a_4356_);
v___x_4361_ = v_reuseFailAlloc_4362_;
goto v_reusejp_4360_;
}
v_reusejp_4360_:
{
return v___x_4361_;
}
}
}
}
else
{
lean_dec(v_a_4329_);
v___y_4251_ = v_isEq_4323_;
v_isHEq_4252_ = v___x_4032_;
v___y_4253_ = v___y_4324_;
v___y_4254_ = v___y_4325_;
v___y_4255_ = v___y_4326_;
v___y_4256_ = v___y_4327_;
goto v___jp_4250_;
}
}
else
{
lean_object* v_a_4364_; lean_object* v___x_4366_; uint8_t v_isShared_4367_; uint8_t v_isSharedCheck_4371_; 
lean_dec_ref(v___x_4077_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4364_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4371_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4371_ == 0)
{
v___x_4366_ = v___x_4328_;
v_isShared_4367_ = v_isSharedCheck_4371_;
goto v_resetjp_4365_;
}
else
{
lean_inc(v_a_4364_);
lean_dec(v___x_4328_);
v___x_4366_ = lean_box(0);
v_isShared_4367_ = v_isSharedCheck_4371_;
goto v_resetjp_4365_;
}
v_resetjp_4365_:
{
lean_object* v___x_4369_; 
if (v_isShared_4367_ == 0)
{
v___x_4369_ = v___x_4366_;
goto v_reusejp_4368_;
}
else
{
lean_object* v_reuseFailAlloc_4370_; 
v_reuseFailAlloc_4370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4370_, 0, v_a_4364_);
v___x_4369_ = v_reuseFailAlloc_4370_;
goto v_reusejp_4368_;
}
v_reusejp_4368_:
{
return v___x_4369_;
}
}
}
}
v___jp_4372_:
{
lean_object* v___x_4377_; 
lean_inc_ref(v___x_4077_);
v___x_4377_ = l_Lean_Meta_matchEq_x3f(v___x_4077_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
if (lean_obj_tag(v___x_4377_) == 0)
{
lean_object* v_a_4378_; 
v_a_4378_ = lean_ctor_get(v___x_4377_, 0);
lean_inc(v_a_4378_);
lean_dec_ref(v___x_4377_);
if (lean_obj_tag(v_a_4378_) == 1)
{
lean_object* v_val_4379_; lean_object* v_snd_4380_; lean_object* v_fst_4381_; lean_object* v_snd_4382_; lean_object* v___x_4383_; 
v_val_4379_ = lean_ctor_get(v_a_4378_, 0);
lean_inc(v_val_4379_);
lean_dec_ref(v_a_4378_);
v_snd_4380_ = lean_ctor_get(v_val_4379_, 1);
lean_inc(v_snd_4380_);
lean_dec(v_val_4379_);
v_fst_4381_ = lean_ctor_get(v_snd_4380_, 0);
lean_inc(v_fst_4381_);
v_snd_4382_ = lean_ctor_get(v_snd_4380_, 1);
lean_inc(v_snd_4382_);
lean_dec(v_snd_4380_);
v___x_4383_ = l_Lean_Meta_matchConstructorApp_x3f(v_fst_4381_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
if (lean_obj_tag(v___x_4383_) == 0)
{
lean_object* v_a_4384_; 
v_a_4384_ = lean_ctor_get(v___x_4383_, 0);
lean_inc(v_a_4384_);
lean_dec_ref(v___x_4383_);
if (lean_obj_tag(v_a_4384_) == 1)
{
lean_object* v_val_4385_; lean_object* v___x_4386_; 
v_val_4385_ = lean_ctor_get(v_a_4384_, 0);
lean_inc(v_val_4385_);
lean_dec_ref(v_a_4384_);
v___x_4386_ = l_Lean_Meta_matchConstructorApp_x3f(v_snd_4382_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_);
if (lean_obj_tag(v___x_4386_) == 0)
{
lean_object* v_a_4387_; 
v_a_4387_ = lean_ctor_get(v___x_4386_, 0);
lean_inc(v_a_4387_);
lean_dec_ref(v___x_4386_);
if (lean_obj_tag(v_a_4387_) == 1)
{
lean_object* v_toConstantVal_4388_; lean_object* v_val_4389_; lean_object* v_toConstantVal_4390_; lean_object* v_name_4391_; lean_object* v_name_4392_; uint8_t v___x_4393_; 
v_toConstantVal_4388_ = lean_ctor_get(v_val_4385_, 0);
lean_inc_ref(v_toConstantVal_4388_);
lean_dec(v_val_4385_);
v_val_4389_ = lean_ctor_get(v_a_4387_, 0);
lean_inc(v_val_4389_);
lean_dec_ref(v_a_4387_);
v_toConstantVal_4390_ = lean_ctor_get(v_val_4389_, 0);
lean_inc_ref(v_toConstantVal_4390_);
lean_dec(v_val_4389_);
v_name_4391_ = lean_ctor_get(v_toConstantVal_4388_, 0);
lean_inc(v_name_4391_);
lean_dec_ref(v_toConstantVal_4388_);
v_name_4392_ = lean_ctor_get(v_toConstantVal_4390_, 0);
lean_inc(v_name_4392_);
lean_dec_ref(v_toConstantVal_4390_);
v___x_4393_ = lean_name_eq(v_name_4391_, v_name_4392_);
lean_dec(v_name_4392_);
lean_dec(v_name_4391_);
if (v___x_4393_ == 0)
{
lean_dec_ref(v___x_4077_);
lean_dec_ref(v_config_3925_);
v___y_3963_ = v___y_4374_;
v___y_3964_ = v___y_4376_;
v___y_3965_ = v___y_4373_;
v___y_3966_ = v___y_4375_;
goto v___jp_3962_;
}
else
{
if (v___x_4032_ == 0)
{
lean_del_object(v___x_3959_);
v_isEq_4323_ = v___x_3936_;
v___y_4324_ = v___y_4373_;
v___y_4325_ = v___y_4374_;
v___y_4326_ = v___y_4375_;
v___y_4327_ = v___y_4376_;
goto v___jp_4322_;
}
else
{
lean_dec_ref(v___x_4077_);
lean_dec_ref(v_config_3925_);
v___y_3963_ = v___y_4374_;
v___y_3964_ = v___y_4376_;
v___y_3965_ = v___y_4373_;
v___y_3966_ = v___y_4375_;
goto v___jp_3962_;
}
}
}
else
{
lean_dec(v_a_4387_);
lean_dec(v_val_4385_);
lean_del_object(v___x_3959_);
v_isEq_4323_ = v___x_3936_;
v___y_4324_ = v___y_4373_;
v___y_4325_ = v___y_4374_;
v___y_4326_ = v___y_4375_;
v___y_4327_ = v___y_4376_;
goto v___jp_4322_;
}
}
else
{
lean_object* v_a_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4401_; 
lean_dec(v_val_4385_);
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4394_ = lean_ctor_get(v___x_4386_, 0);
v_isSharedCheck_4401_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4396_ = v___x_4386_;
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_a_4394_);
lean_dec(v___x_4386_);
v___x_4396_ = lean_box(0);
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
v_resetjp_4395_:
{
lean_object* v___x_4399_; 
if (v_isShared_4397_ == 0)
{
v___x_4399_ = v___x_4396_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v_a_4394_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
}
}
else
{
lean_dec(v_a_4384_);
lean_dec(v_snd_4382_);
lean_del_object(v___x_3959_);
v_isEq_4323_ = v___x_3936_;
v___y_4324_ = v___y_4373_;
v___y_4325_ = v___y_4374_;
v___y_4326_ = v___y_4375_;
v___y_4327_ = v___y_4376_;
goto v___jp_4322_;
}
}
else
{
lean_object* v_a_4402_; lean_object* v___x_4404_; uint8_t v_isShared_4405_; uint8_t v_isSharedCheck_4409_; 
lean_dec(v_snd_4382_);
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4402_ = lean_ctor_get(v___x_4383_, 0);
v_isSharedCheck_4409_ = !lean_is_exclusive(v___x_4383_);
if (v_isSharedCheck_4409_ == 0)
{
v___x_4404_ = v___x_4383_;
v_isShared_4405_ = v_isSharedCheck_4409_;
goto v_resetjp_4403_;
}
else
{
lean_inc(v_a_4402_);
lean_dec(v___x_4383_);
v___x_4404_ = lean_box(0);
v_isShared_4405_ = v_isSharedCheck_4409_;
goto v_resetjp_4403_;
}
v_resetjp_4403_:
{
lean_object* v___x_4407_; 
if (v_isShared_4405_ == 0)
{
v___x_4407_ = v___x_4404_;
goto v_reusejp_4406_;
}
else
{
lean_object* v_reuseFailAlloc_4408_; 
v_reuseFailAlloc_4408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4408_, 0, v_a_4402_);
v___x_4407_ = v_reuseFailAlloc_4408_;
goto v_reusejp_4406_;
}
v_reusejp_4406_:
{
return v___x_4407_;
}
}
}
}
else
{
lean_dec(v_a_4378_);
lean_del_object(v___x_3959_);
v_isEq_4323_ = v___x_4032_;
v___y_4324_ = v___y_4373_;
v___y_4325_ = v___y_4374_;
v___y_4326_ = v___y_4375_;
v___y_4327_ = v___y_4376_;
goto v___jp_4322_;
}
}
else
{
lean_object* v_a_4410_; lean_object* v___x_4412_; uint8_t v_isShared_4413_; uint8_t v_isSharedCheck_4417_; 
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4410_ = lean_ctor_get(v___x_4377_, 0);
v_isSharedCheck_4417_ = !lean_is_exclusive(v___x_4377_);
if (v_isSharedCheck_4417_ == 0)
{
v___x_4412_ = v___x_4377_;
v_isShared_4413_ = v_isSharedCheck_4417_;
goto v_resetjp_4411_;
}
else
{
lean_inc(v_a_4410_);
lean_dec(v___x_4377_);
v___x_4412_ = lean_box(0);
v_isShared_4413_ = v_isSharedCheck_4417_;
goto v_resetjp_4411_;
}
v_resetjp_4411_:
{
lean_object* v___x_4415_; 
if (v_isShared_4413_ == 0)
{
v___x_4415_ = v___x_4412_;
goto v_reusejp_4414_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v_a_4410_);
v___x_4415_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4414_;
}
v_reusejp_4414_:
{
return v___x_4415_;
}
}
}
}
v___jp_4418_:
{
lean_object* v___x_4423_; 
lean_inc_ref(v___x_4077_);
v___x_4423_ = l_refutableHasNotBit_x3f(v___x_4077_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4423_) == 0)
{
lean_object* v_a_4424_; 
v_a_4424_ = lean_ctor_get(v___x_4423_, 0);
lean_inc(v_a_4424_);
lean_dec_ref(v___x_4423_);
if (lean_obj_tag(v_a_4424_) == 1)
{
lean_object* v_val_4425_; lean_object* v___x_4427_; uint8_t v_isShared_4428_; uint8_t v_isSharedCheck_4465_; 
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec_ref(v_config_3925_);
v_val_4425_ = lean_ctor_get(v_a_4424_, 0);
v_isSharedCheck_4465_ = !lean_is_exclusive(v_a_4424_);
if (v_isSharedCheck_4465_ == 0)
{
v___x_4427_ = v_a_4424_;
v_isShared_4428_ = v_isSharedCheck_4465_;
goto v_resetjp_4426_;
}
else
{
lean_inc(v_val_4425_);
lean_dec(v_a_4424_);
v___x_4427_ = lean_box(0);
v_isShared_4428_ = v_isSharedCheck_4465_;
goto v_resetjp_4426_;
}
v_resetjp_4426_:
{
lean_object* v___x_4429_; 
lean_inc(v_mvarId_3926_);
v___x_4429_ = l_Lean_MVarId_getType(v_mvarId_3926_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4429_) == 0)
{
lean_object* v_a_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; 
v_a_4430_ = lean_ctor_get(v___x_4429_, 0);
lean_inc(v_a_4430_);
lean_dec_ref(v___x_4429_);
v___x_4431_ = l_Lean_LocalDecl_toExpr(v_val_3957_);
v___x_4432_ = l_Lean_Meta_mkAbsurd(v_a_4430_, v_val_4425_, v___x_4431_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4432_) == 0)
{
lean_object* v_a_4433_; lean_object* v___x_4434_; 
v_a_4433_ = lean_ctor_get(v___x_4432_, 0);
lean_inc(v_a_4433_);
lean_dec_ref(v___x_4432_);
v___x_4434_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3926_, v_a_4433_, v___y_4420_);
if (lean_obj_tag(v___x_4434_) == 0)
{
lean_object* v___x_4435_; lean_object* v___x_4437_; 
lean_dec_ref(v___x_4434_);
v___x_4435_ = lean_box(v___x_3936_);
if (v_isShared_4428_ == 0)
{
lean_ctor_set(v___x_4427_, 0, v___x_4435_);
v___x_4437_ = v___x_4427_;
goto v_reusejp_4436_;
}
else
{
lean_object* v_reuseFailAlloc_4440_; 
v_reuseFailAlloc_4440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4440_, 0, v___x_4435_);
v___x_4437_ = v_reuseFailAlloc_4440_;
goto v_reusejp_4436_;
}
v_reusejp_4436_:
{
lean_object* v___x_4438_; lean_object* v___x_4439_; 
v___x_4438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4438_, 0, v___x_4437_);
lean_ctor_set(v___x_4438_, 1, v___x_3961_);
v___x_4439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4439_, 0, v___x_4438_);
v_a_3943_ = v___x_4439_;
goto v___jp_3942_;
}
}
else
{
lean_object* v_a_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4448_; 
lean_del_object(v___x_4427_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
v_a_4441_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4448_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4448_ == 0)
{
v___x_4443_ = v___x_4434_;
v_isShared_4444_ = v_isSharedCheck_4448_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_a_4441_);
lean_dec(v___x_4434_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4448_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v___x_4446_; 
if (v_isShared_4444_ == 0)
{
v___x_4446_ = v___x_4443_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4447_; 
v_reuseFailAlloc_4447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4447_, 0, v_a_4441_);
v___x_4446_ = v_reuseFailAlloc_4447_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
return v___x_4446_;
}
}
}
}
else
{
lean_object* v_a_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4456_; 
lean_del_object(v___x_4427_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_4449_ = lean_ctor_get(v___x_4432_, 0);
v_isSharedCheck_4456_ = !lean_is_exclusive(v___x_4432_);
if (v_isSharedCheck_4456_ == 0)
{
v___x_4451_ = v___x_4432_;
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_a_4449_);
lean_dec(v___x_4432_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4456_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
lean_object* v___x_4454_; 
if (v_isShared_4452_ == 0)
{
v___x_4454_ = v___x_4451_;
goto v_reusejp_4453_;
}
else
{
lean_object* v_reuseFailAlloc_4455_; 
v_reuseFailAlloc_4455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4455_, 0, v_a_4449_);
v___x_4454_ = v_reuseFailAlloc_4455_;
goto v_reusejp_4453_;
}
v_reusejp_4453_:
{
return v___x_4454_;
}
}
}
}
else
{
lean_object* v_a_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4464_; 
lean_del_object(v___x_4427_);
lean_dec(v_val_4425_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_4457_ = lean_ctor_get(v___x_4429_, 0);
v_isSharedCheck_4464_ = !lean_is_exclusive(v___x_4429_);
if (v_isSharedCheck_4464_ == 0)
{
v___x_4459_ = v___x_4429_;
v_isShared_4460_ = v_isSharedCheck_4464_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_a_4457_);
lean_dec(v___x_4429_);
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
else
{
lean_object* v___x_4466_; 
lean_dec(v_a_4424_);
lean_inc_ref(v___x_4077_);
v___x_4466_ = l_Lean_Meta_matchNe_x3f(v___x_4077_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4466_) == 0)
{
lean_object* v_a_4467_; 
v_a_4467_ = lean_ctor_get(v___x_4466_, 0);
lean_inc(v_a_4467_);
lean_dec_ref(v___x_4466_);
if (lean_obj_tag(v_a_4467_) == 1)
{
lean_object* v_val_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4538_; 
v_val_4468_ = lean_ctor_get(v_a_4467_, 0);
v_isSharedCheck_4538_ = !lean_is_exclusive(v_a_4467_);
if (v_isSharedCheck_4538_ == 0)
{
v___x_4470_ = v_a_4467_;
v_isShared_4471_ = v_isSharedCheck_4538_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_val_4468_);
lean_dec(v_a_4467_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4538_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v_snd_4472_; lean_object* v_fst_4473_; lean_object* v_snd_4474_; lean_object* v___x_4476_; uint8_t v_isShared_4477_; uint8_t v_isSharedCheck_4537_; 
v_snd_4472_ = lean_ctor_get(v_val_4468_, 1);
lean_inc(v_snd_4472_);
lean_dec(v_val_4468_);
v_fst_4473_ = lean_ctor_get(v_snd_4472_, 0);
v_snd_4474_ = lean_ctor_get(v_snd_4472_, 1);
v_isSharedCheck_4537_ = !lean_is_exclusive(v_snd_4472_);
if (v_isSharedCheck_4537_ == 0)
{
v___x_4476_ = v_snd_4472_;
v_isShared_4477_ = v_isSharedCheck_4537_;
goto v_resetjp_4475_;
}
else
{
lean_inc(v_snd_4474_);
lean_inc(v_fst_4473_);
lean_dec(v_snd_4472_);
v___x_4476_ = lean_box(0);
v_isShared_4477_ = v_isSharedCheck_4537_;
goto v_resetjp_4475_;
}
v_resetjp_4475_:
{
lean_object* v___x_4478_; 
lean_inc(v_fst_4473_);
v___x_4478_ = l_Lean_Meta_isExprDefEq(v_fst_4473_, v_snd_4474_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_object* v_a_4479_; uint8_t v___x_4480_; 
v_a_4479_ = lean_ctor_get(v___x_4478_, 0);
lean_inc(v_a_4479_);
lean_dec_ref(v___x_4478_);
v___x_4480_ = lean_unbox(v_a_4479_);
lean_dec(v_a_4479_);
if (v___x_4480_ == 0)
{
lean_del_object(v___x_4476_);
lean_dec(v_fst_4473_);
lean_del_object(v___x_4470_);
v___y_4373_ = v___y_4419_;
v___y_4374_ = v___y_4420_;
v___y_4375_ = v___y_4421_;
v___y_4376_ = v___y_4422_;
goto v___jp_4372_;
}
else
{
lean_object* v___x_4481_; 
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec_ref(v_config_3925_);
lean_inc(v_mvarId_3926_);
v___x_4481_ = l_Lean_MVarId_getType(v_mvarId_3926_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4481_) == 0)
{
lean_object* v_a_4482_; lean_object* v___x_4483_; 
v_a_4482_ = lean_ctor_get(v___x_4481_, 0);
lean_inc(v_a_4482_);
lean_dec_ref(v___x_4481_);
v___x_4483_ = l_Lean_Meta_mkEqRefl(v_fst_4473_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4483_) == 0)
{
lean_object* v_a_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v_a_4484_ = lean_ctor_get(v___x_4483_, 0);
lean_inc(v_a_4484_);
lean_dec_ref(v___x_4483_);
v___x_4485_ = l_Lean_LocalDecl_toExpr(v_val_3957_);
v___x_4486_ = l_Lean_Meta_mkAbsurd(v_a_4482_, v_a_4484_, v___x_4485_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_);
if (lean_obj_tag(v___x_4486_) == 0)
{
lean_object* v_a_4487_; lean_object* v___x_4488_; 
v_a_4487_ = lean_ctor_get(v___x_4486_, 0);
lean_inc(v_a_4487_);
lean_dec_ref(v___x_4486_);
v___x_4488_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3926_, v_a_4487_, v___y_4420_);
if (lean_obj_tag(v___x_4488_) == 0)
{
lean_object* v___x_4489_; lean_object* v___x_4491_; 
lean_dec_ref(v___x_4488_);
v___x_4489_ = lean_box(v___x_3936_);
if (v_isShared_4471_ == 0)
{
lean_ctor_set(v___x_4470_, 0, v___x_4489_);
v___x_4491_ = v___x_4470_;
goto v_reusejp_4490_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v___x_4489_);
v___x_4491_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4490_;
}
v_reusejp_4490_:
{
lean_object* v___x_4493_; 
if (v_isShared_4477_ == 0)
{
lean_ctor_set(v___x_4476_, 1, v___x_3961_);
lean_ctor_set(v___x_4476_, 0, v___x_4491_);
v___x_4493_ = v___x_4476_;
goto v_reusejp_4492_;
}
else
{
lean_object* v_reuseFailAlloc_4495_; 
v_reuseFailAlloc_4495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4495_, 0, v___x_4491_);
lean_ctor_set(v_reuseFailAlloc_4495_, 1, v___x_3961_);
v___x_4493_ = v_reuseFailAlloc_4495_;
goto v_reusejp_4492_;
}
v_reusejp_4492_:
{
lean_object* v___x_4494_; 
v___x_4494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4494_, 0, v___x_4493_);
v_a_3943_ = v___x_4494_;
goto v___jp_3942_;
}
}
}
else
{
lean_object* v_a_4497_; lean_object* v___x_4499_; uint8_t v_isShared_4500_; uint8_t v_isSharedCheck_4504_; 
lean_del_object(v___x_4476_);
lean_del_object(v___x_4470_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
v_a_4497_ = lean_ctor_get(v___x_4488_, 0);
v_isSharedCheck_4504_ = !lean_is_exclusive(v___x_4488_);
if (v_isSharedCheck_4504_ == 0)
{
v___x_4499_ = v___x_4488_;
v_isShared_4500_ = v_isSharedCheck_4504_;
goto v_resetjp_4498_;
}
else
{
lean_inc(v_a_4497_);
lean_dec(v___x_4488_);
v___x_4499_ = lean_box(0);
v_isShared_4500_ = v_isSharedCheck_4504_;
goto v_resetjp_4498_;
}
v_resetjp_4498_:
{
lean_object* v___x_4502_; 
if (v_isShared_4500_ == 0)
{
v___x_4502_ = v___x_4499_;
goto v_reusejp_4501_;
}
else
{
lean_object* v_reuseFailAlloc_4503_; 
v_reuseFailAlloc_4503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4503_, 0, v_a_4497_);
v___x_4502_ = v_reuseFailAlloc_4503_;
goto v_reusejp_4501_;
}
v_reusejp_4501_:
{
return v___x_4502_;
}
}
}
}
else
{
lean_object* v_a_4505_; lean_object* v___x_4507_; uint8_t v_isShared_4508_; uint8_t v_isSharedCheck_4512_; 
lean_del_object(v___x_4476_);
lean_del_object(v___x_4470_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_4505_ = lean_ctor_get(v___x_4486_, 0);
v_isSharedCheck_4512_ = !lean_is_exclusive(v___x_4486_);
if (v_isSharedCheck_4512_ == 0)
{
v___x_4507_ = v___x_4486_;
v_isShared_4508_ = v_isSharedCheck_4512_;
goto v_resetjp_4506_;
}
else
{
lean_inc(v_a_4505_);
lean_dec(v___x_4486_);
v___x_4507_ = lean_box(0);
v_isShared_4508_ = v_isSharedCheck_4512_;
goto v_resetjp_4506_;
}
v_resetjp_4506_:
{
lean_object* v___x_4510_; 
if (v_isShared_4508_ == 0)
{
v___x_4510_ = v___x_4507_;
goto v_reusejp_4509_;
}
else
{
lean_object* v_reuseFailAlloc_4511_; 
v_reuseFailAlloc_4511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4511_, 0, v_a_4505_);
v___x_4510_ = v_reuseFailAlloc_4511_;
goto v_reusejp_4509_;
}
v_reusejp_4509_:
{
return v___x_4510_;
}
}
}
}
else
{
lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4520_; 
lean_dec(v_a_4482_);
lean_del_object(v___x_4476_);
lean_del_object(v___x_4470_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_4513_ = lean_ctor_get(v___x_4483_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v___x_4483_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4515_ = v___x_4483_;
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v___x_4483_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4518_; 
if (v_isShared_4516_ == 0)
{
v___x_4518_ = v___x_4515_;
goto v_reusejp_4517_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_a_4513_);
v___x_4518_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4517_;
}
v_reusejp_4517_:
{
return v___x_4518_;
}
}
}
}
else
{
lean_object* v_a_4521_; lean_object* v___x_4523_; uint8_t v_isShared_4524_; uint8_t v_isSharedCheck_4528_; 
lean_del_object(v___x_4476_);
lean_dec(v_fst_4473_);
lean_del_object(v___x_4470_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_4521_ = lean_ctor_get(v___x_4481_, 0);
v_isSharedCheck_4528_ = !lean_is_exclusive(v___x_4481_);
if (v_isSharedCheck_4528_ == 0)
{
v___x_4523_ = v___x_4481_;
v_isShared_4524_ = v_isSharedCheck_4528_;
goto v_resetjp_4522_;
}
else
{
lean_inc(v_a_4521_);
lean_dec(v___x_4481_);
v___x_4523_ = lean_box(0);
v_isShared_4524_ = v_isSharedCheck_4528_;
goto v_resetjp_4522_;
}
v_resetjp_4522_:
{
lean_object* v___x_4526_; 
if (v_isShared_4524_ == 0)
{
v___x_4526_ = v___x_4523_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4527_; 
v_reuseFailAlloc_4527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4527_, 0, v_a_4521_);
v___x_4526_ = v_reuseFailAlloc_4527_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
return v___x_4526_;
}
}
}
}
}
else
{
lean_object* v_a_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4536_; 
lean_del_object(v___x_4476_);
lean_dec(v_fst_4473_);
lean_del_object(v___x_4470_);
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4529_ = lean_ctor_get(v___x_4478_, 0);
v_isSharedCheck_4536_ = !lean_is_exclusive(v___x_4478_);
if (v_isSharedCheck_4536_ == 0)
{
v___x_4531_ = v___x_4478_;
v_isShared_4532_ = v_isSharedCheck_4536_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_a_4529_);
lean_dec(v___x_4478_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4536_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v___x_4534_; 
if (v_isShared_4532_ == 0)
{
v___x_4534_ = v___x_4531_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v_a_4529_);
v___x_4534_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
return v___x_4534_;
}
}
}
}
}
}
else
{
lean_dec(v_a_4467_);
v___y_4373_ = v___y_4419_;
v___y_4374_ = v___y_4420_;
v___y_4375_ = v___y_4421_;
v___y_4376_ = v___y_4422_;
goto v___jp_4372_;
}
}
else
{
lean_object* v_a_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4546_; 
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4539_ = lean_ctor_get(v___x_4466_, 0);
v_isSharedCheck_4546_ = !lean_is_exclusive(v___x_4466_);
if (v_isSharedCheck_4546_ == 0)
{
v___x_4541_ = v___x_4466_;
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_a_4539_);
lean_dec(v___x_4466_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4544_; 
if (v_isShared_4542_ == 0)
{
v___x_4544_ = v___x_4541_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v_a_4539_);
v___x_4544_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
return v___x_4544_;
}
}
}
}
}
else
{
lean_object* v_a_4547_; lean_object* v___x_4549_; uint8_t v_isShared_4550_; uint8_t v_isSharedCheck_4554_; 
lean_dec_ref(v___x_4077_);
lean_del_object(v___x_3959_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4547_ = lean_ctor_get(v___x_4423_, 0);
v_isSharedCheck_4554_ = !lean_is_exclusive(v___x_4423_);
if (v_isSharedCheck_4554_ == 0)
{
v___x_4549_ = v___x_4423_;
v_isShared_4550_ = v_isSharedCheck_4554_;
goto v_resetjp_4548_;
}
else
{
lean_inc(v_a_4547_);
lean_dec(v___x_4423_);
v___x_4549_ = lean_box(0);
v_isShared_4550_ = v_isSharedCheck_4554_;
goto v_resetjp_4548_;
}
v_resetjp_4548_:
{
lean_object* v___x_4552_; 
if (v_isShared_4550_ == 0)
{
v___x_4552_ = v___x_4549_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v_a_4547_);
v___x_4552_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
return v___x_4552_;
}
}
}
}
}
else
{
lean_del_object(v___x_3959_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
v_a_3951_ = v___x_4003_;
goto v___jp_3950_;
}
v___jp_3962_:
{
lean_object* v___x_3967_; 
lean_inc(v_mvarId_3926_);
v___x_3967_ = l_Lean_MVarId_getType(v_mvarId_3926_, v___y_3965_, v___y_3963_, v___y_3966_, v___y_3964_);
if (lean_obj_tag(v___x_3967_) == 0)
{
lean_object* v_a_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; 
v_a_3968_ = lean_ctor_get(v___x_3967_, 0);
lean_inc(v_a_3968_);
lean_dec_ref(v___x_3967_);
v___x_3969_ = l_Lean_LocalDecl_toExpr(v_val_3957_);
v___x_3970_ = l_Lean_Meta_mkNoConfusion(v_a_3968_, v___x_3969_, v___y_3965_, v___y_3963_, v___y_3966_, v___y_3964_);
if (lean_obj_tag(v___x_3970_) == 0)
{
lean_object* v_a_3971_; lean_object* v___x_3972_; 
v_a_3971_ = lean_ctor_get(v___x_3970_, 0);
lean_inc(v_a_3971_);
lean_dec_ref(v___x_3970_);
v___x_3972_ = l_Lean_MVarId_assign___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim_spec__0___redArg(v_mvarId_3926_, v_a_3971_, v___y_3963_);
if (lean_obj_tag(v___x_3972_) == 0)
{
lean_object* v___x_3973_; lean_object* v___x_3975_; 
lean_dec_ref(v___x_3972_);
v___x_3973_ = lean_box(v___x_3936_);
if (v_isShared_3960_ == 0)
{
lean_ctor_set(v___x_3959_, 0, v___x_3973_);
v___x_3975_ = v___x_3959_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3978_; 
v_reuseFailAlloc_3978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3978_, 0, v___x_3973_);
v___x_3975_ = v_reuseFailAlloc_3978_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
lean_object* v___x_3976_; lean_object* v___x_3977_; 
v___x_3976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
lean_ctor_set(v___x_3976_, 1, v___x_3961_);
v___x_3977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3976_);
v_a_3943_ = v___x_3977_;
goto v___jp_3942_;
}
}
else
{
lean_object* v_a_3979_; lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_3986_; 
lean_del_object(v___x_3959_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
v_a_3979_ = lean_ctor_get(v___x_3972_, 0);
v_isSharedCheck_3986_ = !lean_is_exclusive(v___x_3972_);
if (v_isSharedCheck_3986_ == 0)
{
v___x_3981_ = v___x_3972_;
v_isShared_3982_ = v_isSharedCheck_3986_;
goto v_resetjp_3980_;
}
else
{
lean_inc(v_a_3979_);
lean_dec(v___x_3972_);
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
else
{
lean_object* v_a_3987_; lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_3994_; 
lean_del_object(v___x_3959_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_3987_ = lean_ctor_get(v___x_3970_, 0);
v_isSharedCheck_3994_ = !lean_is_exclusive(v___x_3970_);
if (v_isSharedCheck_3994_ == 0)
{
v___x_3989_ = v___x_3970_;
v_isShared_3990_ = v_isSharedCheck_3994_;
goto v_resetjp_3988_;
}
else
{
lean_inc(v_a_3987_);
lean_dec(v___x_3970_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_3994_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
lean_object* v___x_3992_; 
if (v_isShared_3990_ == 0)
{
v___x_3992_ = v___x_3989_;
goto v_reusejp_3991_;
}
else
{
lean_object* v_reuseFailAlloc_3993_; 
v_reuseFailAlloc_3993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3993_, 0, v_a_3987_);
v___x_3992_ = v_reuseFailAlloc_3993_;
goto v_reusejp_3991_;
}
v_reusejp_3991_:
{
return v___x_3992_;
}
}
}
}
else
{
lean_object* v_a_3995_; lean_object* v___x_3997_; uint8_t v_isShared_3998_; uint8_t v_isSharedCheck_4002_; 
lean_del_object(v___x_3959_);
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
v_a_3995_ = lean_ctor_get(v___x_3967_, 0);
v_isSharedCheck_4002_ = !lean_is_exclusive(v___x_3967_);
if (v_isSharedCheck_4002_ == 0)
{
v___x_3997_ = v___x_3967_;
v_isShared_3998_ = v_isSharedCheck_4002_;
goto v_resetjp_3996_;
}
else
{
lean_inc(v_a_3995_);
lean_dec(v___x_3967_);
v___x_3997_ = lean_box(0);
v_isShared_3998_ = v_isSharedCheck_4002_;
goto v_resetjp_3996_;
}
v_resetjp_3996_:
{
lean_object* v___x_4000_; 
if (v_isShared_3998_ == 0)
{
v___x_4000_ = v___x_3997_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v_a_3995_);
v___x_4000_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
return v___x_4000_;
}
}
}
}
v___jp_4004_:
{
lean_object* v_searchFuel_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; 
v_searchFuel_4009_ = lean_ctor_get(v_config_3925_, 0);
v___x_4010_ = l_Lean_LocalDecl_fvarId(v_val_3957_);
lean_dec(v_val_3957_);
lean_inc(v_searchFuel_4009_);
lean_inc(v_mvarId_3926_);
v___x_4011_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive(v_mvarId_3926_, v___x_4010_, v_searchFuel_4009_, v___y_4006_, v___y_4007_, v___y_4005_, v___y_4008_);
if (lean_obj_tag(v___x_4011_) == 0)
{
lean_object* v_a_4012_; uint8_t v___x_4013_; 
v_a_4012_ = lean_ctor_get(v___x_4011_, 0);
lean_inc(v_a_4012_);
lean_dec_ref(v___x_4011_);
v___x_4013_ = lean_unbox(v_a_4012_);
lean_dec(v_a_4012_);
if (v___x_4013_ == 0)
{
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
v_a_3951_ = v___x_4003_;
goto v___jp_3950_;
}
else
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v___x_4014_ = lean_box(v___x_3936_);
v___x_4015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4015_, 0, v___x_4014_);
v___x_4016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4016_, 0, v___x_4015_);
lean_ctor_set(v___x_4016_, 1, v___x_3961_);
v___x_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4017_, 0, v___x_4016_);
v_a_3943_ = v___x_4017_;
goto v___jp_3942_;
}
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4018_ = lean_ctor_get(v___x_4011_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_4011_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_4011_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_4011_);
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
v___jp_4026_:
{
if (v___y_4031_ == 0)
{
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
v_a_3951_ = v___x_4003_;
goto v___jp_3950_;
}
else
{
v___y_4005_ = v___y_4027_;
v___y_4006_ = v___y_4028_;
v___y_4007_ = v___y_4029_;
v___y_4008_ = v___y_4030_;
goto v___jp_4004_;
}
}
v___jp_4033_:
{
if (v___y_4037_ == 0)
{
v___y_4005_ = v___y_4034_;
v___y_4006_ = v___y_4035_;
v___y_4007_ = v___y_4036_;
v___y_4008_ = v___y_4038_;
goto v___jp_4004_;
}
else
{
v___y_4027_ = v___y_4034_;
v___y_4028_ = v___y_4035_;
v___y_4029_ = v___y_4036_;
v___y_4030_ = v___y_4038_;
v___y_4031_ = v___x_4032_;
goto v___jp_4026_;
}
}
v___jp_4039_:
{
if (v___y_4045_ == 0)
{
v___y_4027_ = v___y_4040_;
v___y_4028_ = v___y_4041_;
v___y_4029_ = v___y_4042_;
v___y_4030_ = v___y_4044_;
v___y_4031_ = v___x_4032_;
goto v___jp_4026_;
}
else
{
v___y_4034_ = v___y_4040_;
v___y_4035_ = v___y_4041_;
v___y_4036_ = v___y_4042_;
v___y_4037_ = v___y_4043_;
v___y_4038_ = v___y_4044_;
goto v___jp_4033_;
}
}
v___jp_4046_:
{
uint8_t v_emptyType_4053_; 
v_emptyType_4053_ = lean_ctor_get_uint8(v_config_3925_, sizeof(void*)*1 + 1);
if (v_emptyType_4053_ == 0)
{
v___y_4040_ = v___y_4051_;
v___y_4041_ = v___y_4049_;
v___y_4042_ = v___y_4050_;
v___y_4043_ = v___y_4048_;
v___y_4044_ = v___y_4052_;
v___y_4045_ = v___x_4032_;
goto v___jp_4039_;
}
else
{
if (v___y_4047_ == 0)
{
v___y_4034_ = v___y_4051_;
v___y_4035_ = v___y_4049_;
v___y_4036_ = v___y_4050_;
v___y_4037_ = v___y_4048_;
v___y_4038_ = v___y_4052_;
goto v___jp_4033_;
}
else
{
v___y_4040_ = v___y_4051_;
v___y_4041_ = v___y_4049_;
v___y_4042_ = v___y_4050_;
v___y_4043_ = v___y_4048_;
v___y_4044_ = v___y_4052_;
v___y_4045_ = v___x_4032_;
goto v___jp_4039_;
}
}
}
v___jp_4054_:
{
if (v___y_4061_ == 0)
{
v___y_4047_ = v___y_4055_;
v___y_4048_ = v___y_4057_;
v___y_4049_ = v___y_4059_;
v___y_4050_ = v___y_4060_;
v___y_4051_ = v___y_4058_;
v___y_4052_ = v___y_4056_;
goto v___jp_4046_;
}
else
{
lean_object* v___x_4062_; 
lean_inc(v_val_3957_);
lean_inc(v_mvarId_3926_);
v___x_4062_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_processGenDiseq(v_mvarId_3926_, v_val_3957_, v___y_4059_, v___y_4060_, v___y_4058_, v___y_4056_);
if (lean_obj_tag(v___x_4062_) == 0)
{
lean_object* v_a_4063_; uint8_t v___x_4064_; 
v_a_4063_ = lean_ctor_get(v___x_4062_, 0);
lean_inc(v_a_4063_);
lean_dec_ref(v___x_4062_);
v___x_4064_ = lean_unbox(v_a_4063_);
lean_dec(v_a_4063_);
if (v___x_4064_ == 0)
{
v___y_4047_ = v___y_4055_;
v___y_4048_ = v___y_4057_;
v___y_4049_ = v___y_4059_;
v___y_4050_ = v___y_4060_;
v___y_4051_ = v___y_4058_;
v___y_4052_ = v___y_4056_;
goto v___jp_4046_;
}
else
{
lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; 
lean_dec(v_val_3957_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v___x_4065_ = lean_box(v___x_3936_);
v___x_4066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4066_, 0, v___x_4065_);
v___x_4067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4067_, 0, v___x_4066_);
lean_ctor_set(v___x_4067_, 1, v___x_3961_);
v___x_4068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4068_, 0, v___x_4067_);
v_a_3943_ = v___x_4068_;
goto v___jp_3942_;
}
}
else
{
lean_object* v_a_4069_; lean_object* v___x_4071_; uint8_t v_isShared_4072_; uint8_t v_isSharedCheck_4076_; 
lean_dec(v_val_3957_);
lean_del_object(v___x_3940_);
lean_dec(v_snd_3938_);
lean_dec(v_mvarId_3926_);
lean_dec_ref(v_config_3925_);
v_a_4069_ = lean_ctor_get(v___x_4062_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v___x_4062_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4071_ = v___x_4062_;
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
else
{
lean_inc(v_a_4069_);
lean_dec(v___x_4062_);
v___x_4071_ = lean_box(0);
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
v_resetjp_4070_:
{
lean_object* v___x_4074_; 
if (v_isShared_4072_ == 0)
{
v___x_4074_ = v___x_4071_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v_a_4069_);
v___x_4074_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
return v___x_4074_;
}
}
}
}
}
}
}
v___jp_3942_:
{
lean_object* v___x_3944_; lean_object* v___x_3946_; 
v___x_3944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3944_, 0, v_a_3943_);
if (v_isShared_3941_ == 0)
{
lean_ctor_set(v___x_3940_, 0, v___x_3944_);
v___x_3946_ = v___x_3940_;
goto v_reusejp_3945_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v___x_3944_);
lean_ctor_set(v_reuseFailAlloc_3948_, 1, v_snd_3938_);
v___x_3946_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3945_;
}
v_reusejp_3945_:
{
lean_object* v___x_3947_; 
v___x_3947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3947_, 0, v___x_3946_);
return v___x_3947_;
}
}
v___jp_3950_:
{
lean_object* v___x_3952_; size_t v___x_3953_; size_t v___x_3954_; lean_object* v___x_3955_; 
v___x_3952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3952_, 0, v___x_3949_);
lean_ctor_set(v___x_3952_, 1, v_a_3951_);
v___x_3953_ = ((size_t)1ULL);
v___x_3954_ = lean_usize_add(v_i_3929_, v___x_3953_);
v___x_3955_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2_spec__3(v_config_3925_, v_mvarId_3926_, v_as_3927_, v_sz_3928_, v___x_3954_, v___x_3952_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
return v___x_3955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2___boxed(lean_object* v_config_4628_, lean_object* v_mvarId_4629_, lean_object* v_as_4630_, lean_object* v_sz_4631_, lean_object* v_i_4632_, lean_object* v_b_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_){
_start:
{
size_t v_sz_boxed_4639_; size_t v_i_boxed_4640_; lean_object* v_res_4641_; 
v_sz_boxed_4639_ = lean_unbox_usize(v_sz_4631_);
lean_dec(v_sz_4631_);
v_i_boxed_4640_ = lean_unbox_usize(v_i_4632_);
lean_dec(v_i_4632_);
v_res_4641_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(v_config_4628_, v_mvarId_4629_, v_as_4630_, v_sz_boxed_4639_, v_i_boxed_4640_, v_b_4633_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4636_);
lean_dec(v___y_4635_);
lean_dec_ref(v___y_4634_);
lean_dec_ref(v_as_4630_);
return v_res_4641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(lean_object* v_init_4642_, lean_object* v_config_4643_, lean_object* v_mvarId_4644_, lean_object* v_n_4645_, lean_object* v_b_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_){
_start:
{
if (lean_obj_tag(v_n_4645_) == 0)
{
lean_object* v_cs_4652_; lean_object* v___x_4654_; uint8_t v_isShared_4655_; uint8_t v_isSharedCheck_4686_; 
v_cs_4652_ = lean_ctor_get(v_n_4645_, 0);
v_isSharedCheck_4686_ = !lean_is_exclusive(v_n_4645_);
if (v_isSharedCheck_4686_ == 0)
{
v___x_4654_ = v_n_4645_;
v_isShared_4655_ = v_isSharedCheck_4686_;
goto v_resetjp_4653_;
}
else
{
lean_inc(v_cs_4652_);
lean_dec(v_n_4645_);
v___x_4654_ = lean_box(0);
v_isShared_4655_ = v_isSharedCheck_4686_;
goto v_resetjp_4653_;
}
v_resetjp_4653_:
{
lean_object* v___x_4656_; lean_object* v___x_4657_; size_t v_sz_4658_; size_t v___x_4659_; lean_object* v___x_4660_; 
v___x_4656_ = lean_box(0);
v___x_4657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4657_, 0, v___x_4656_);
lean_ctor_set(v___x_4657_, 1, v_b_4646_);
v_sz_4658_ = lean_array_size(v_cs_4652_);
v___x_4659_ = ((size_t)0ULL);
v___x_4660_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(v_init_4642_, v_config_4643_, v_mvarId_4644_, v_cs_4652_, v_sz_4658_, v___x_4659_, v___x_4657_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_);
lean_dec_ref(v_cs_4652_);
if (lean_obj_tag(v___x_4660_) == 0)
{
lean_object* v_a_4661_; lean_object* v___x_4663_; uint8_t v_isShared_4664_; uint8_t v_isSharedCheck_4677_; 
v_a_4661_ = lean_ctor_get(v___x_4660_, 0);
v_isSharedCheck_4677_ = !lean_is_exclusive(v___x_4660_);
if (v_isSharedCheck_4677_ == 0)
{
v___x_4663_ = v___x_4660_;
v_isShared_4664_ = v_isSharedCheck_4677_;
goto v_resetjp_4662_;
}
else
{
lean_inc(v_a_4661_);
lean_dec(v___x_4660_);
v___x_4663_ = lean_box(0);
v_isShared_4664_ = v_isSharedCheck_4677_;
goto v_resetjp_4662_;
}
v_resetjp_4662_:
{
lean_object* v_fst_4665_; 
v_fst_4665_ = lean_ctor_get(v_a_4661_, 0);
if (lean_obj_tag(v_fst_4665_) == 0)
{
lean_object* v_snd_4666_; lean_object* v___x_4668_; 
v_snd_4666_ = lean_ctor_get(v_a_4661_, 1);
lean_inc(v_snd_4666_);
lean_dec(v_a_4661_);
if (v_isShared_4655_ == 0)
{
lean_ctor_set_tag(v___x_4654_, 1);
lean_ctor_set(v___x_4654_, 0, v_snd_4666_);
v___x_4668_ = v___x_4654_;
goto v_reusejp_4667_;
}
else
{
lean_object* v_reuseFailAlloc_4672_; 
v_reuseFailAlloc_4672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4672_, 0, v_snd_4666_);
v___x_4668_ = v_reuseFailAlloc_4672_;
goto v_reusejp_4667_;
}
v_reusejp_4667_:
{
lean_object* v___x_4670_; 
if (v_isShared_4664_ == 0)
{
lean_ctor_set(v___x_4663_, 0, v___x_4668_);
v___x_4670_ = v___x_4663_;
goto v_reusejp_4669_;
}
else
{
lean_object* v_reuseFailAlloc_4671_; 
v_reuseFailAlloc_4671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4671_, 0, v___x_4668_);
v___x_4670_ = v_reuseFailAlloc_4671_;
goto v_reusejp_4669_;
}
v_reusejp_4669_:
{
return v___x_4670_;
}
}
}
else
{
lean_object* v_val_4673_; lean_object* v___x_4675_; 
lean_inc_ref(v_fst_4665_);
lean_dec(v_a_4661_);
lean_del_object(v___x_4654_);
v_val_4673_ = lean_ctor_get(v_fst_4665_, 0);
lean_inc(v_val_4673_);
lean_dec_ref(v_fst_4665_);
if (v_isShared_4664_ == 0)
{
lean_ctor_set(v___x_4663_, 0, v_val_4673_);
v___x_4675_ = v___x_4663_;
goto v_reusejp_4674_;
}
else
{
lean_object* v_reuseFailAlloc_4676_; 
v_reuseFailAlloc_4676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4676_, 0, v_val_4673_);
v___x_4675_ = v_reuseFailAlloc_4676_;
goto v_reusejp_4674_;
}
v_reusejp_4674_:
{
return v___x_4675_;
}
}
}
}
else
{
lean_object* v_a_4678_; lean_object* v___x_4680_; uint8_t v_isShared_4681_; uint8_t v_isSharedCheck_4685_; 
lean_del_object(v___x_4654_);
v_a_4678_ = lean_ctor_get(v___x_4660_, 0);
v_isSharedCheck_4685_ = !lean_is_exclusive(v___x_4660_);
if (v_isSharedCheck_4685_ == 0)
{
v___x_4680_ = v___x_4660_;
v_isShared_4681_ = v_isSharedCheck_4685_;
goto v_resetjp_4679_;
}
else
{
lean_inc(v_a_4678_);
lean_dec(v___x_4660_);
v___x_4680_ = lean_box(0);
v_isShared_4681_ = v_isSharedCheck_4685_;
goto v_resetjp_4679_;
}
v_resetjp_4679_:
{
lean_object* v___x_4683_; 
if (v_isShared_4681_ == 0)
{
v___x_4683_ = v___x_4680_;
goto v_reusejp_4682_;
}
else
{
lean_object* v_reuseFailAlloc_4684_; 
v_reuseFailAlloc_4684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4684_, 0, v_a_4678_);
v___x_4683_ = v_reuseFailAlloc_4684_;
goto v_reusejp_4682_;
}
v_reusejp_4682_:
{
return v___x_4683_;
}
}
}
}
}
else
{
lean_object* v_vs_4687_; lean_object* v___x_4689_; uint8_t v_isShared_4690_; uint8_t v_isSharedCheck_4721_; 
v_vs_4687_ = lean_ctor_get(v_n_4645_, 0);
v_isSharedCheck_4721_ = !lean_is_exclusive(v_n_4645_);
if (v_isSharedCheck_4721_ == 0)
{
v___x_4689_ = v_n_4645_;
v_isShared_4690_ = v_isSharedCheck_4721_;
goto v_resetjp_4688_;
}
else
{
lean_inc(v_vs_4687_);
lean_dec(v_n_4645_);
v___x_4689_ = lean_box(0);
v_isShared_4690_ = v_isSharedCheck_4721_;
goto v_resetjp_4688_;
}
v_resetjp_4688_:
{
lean_object* v___x_4691_; lean_object* v___x_4692_; size_t v_sz_4693_; size_t v___x_4694_; lean_object* v___x_4695_; 
v___x_4691_ = lean_box(0);
v___x_4692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4692_, 0, v___x_4691_);
lean_ctor_set(v___x_4692_, 1, v_b_4646_);
v_sz_4693_ = lean_array_size(v_vs_4687_);
v___x_4694_ = ((size_t)0ULL);
v___x_4695_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__2(v_config_4643_, v_mvarId_4644_, v_vs_4687_, v_sz_4693_, v___x_4694_, v___x_4692_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_);
lean_dec_ref(v_vs_4687_);
if (lean_obj_tag(v___x_4695_) == 0)
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4712_; 
v_a_4696_ = lean_ctor_get(v___x_4695_, 0);
v_isSharedCheck_4712_ = !lean_is_exclusive(v___x_4695_);
if (v_isSharedCheck_4712_ == 0)
{
v___x_4698_ = v___x_4695_;
v_isShared_4699_ = v_isSharedCheck_4712_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v___x_4695_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4712_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v_fst_4700_; 
v_fst_4700_ = lean_ctor_get(v_a_4696_, 0);
if (lean_obj_tag(v_fst_4700_) == 0)
{
lean_object* v_snd_4701_; lean_object* v___x_4703_; 
v_snd_4701_ = lean_ctor_get(v_a_4696_, 1);
lean_inc(v_snd_4701_);
lean_dec(v_a_4696_);
if (v_isShared_4690_ == 0)
{
lean_ctor_set(v___x_4689_, 0, v_snd_4701_);
v___x_4703_ = v___x_4689_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4707_; 
v_reuseFailAlloc_4707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4707_, 0, v_snd_4701_);
v___x_4703_ = v_reuseFailAlloc_4707_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
lean_object* v___x_4705_; 
if (v_isShared_4699_ == 0)
{
lean_ctor_set(v___x_4698_, 0, v___x_4703_);
v___x_4705_ = v___x_4698_;
goto v_reusejp_4704_;
}
else
{
lean_object* v_reuseFailAlloc_4706_; 
v_reuseFailAlloc_4706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4706_, 0, v___x_4703_);
v___x_4705_ = v_reuseFailAlloc_4706_;
goto v_reusejp_4704_;
}
v_reusejp_4704_:
{
return v___x_4705_;
}
}
}
else
{
lean_object* v_val_4708_; lean_object* v___x_4710_; 
lean_inc_ref(v_fst_4700_);
lean_dec(v_a_4696_);
lean_del_object(v___x_4689_);
v_val_4708_ = lean_ctor_get(v_fst_4700_, 0);
lean_inc(v_val_4708_);
lean_dec_ref(v_fst_4700_);
if (v_isShared_4699_ == 0)
{
lean_ctor_set(v___x_4698_, 0, v_val_4708_);
v___x_4710_ = v___x_4698_;
goto v_reusejp_4709_;
}
else
{
lean_object* v_reuseFailAlloc_4711_; 
v_reuseFailAlloc_4711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4711_, 0, v_val_4708_);
v___x_4710_ = v_reuseFailAlloc_4711_;
goto v_reusejp_4709_;
}
v_reusejp_4709_:
{
return v___x_4710_;
}
}
}
}
else
{
lean_object* v_a_4713_; lean_object* v___x_4715_; uint8_t v_isShared_4716_; uint8_t v_isSharedCheck_4720_; 
lean_del_object(v___x_4689_);
v_a_4713_ = lean_ctor_get(v___x_4695_, 0);
v_isSharedCheck_4720_ = !lean_is_exclusive(v___x_4695_);
if (v_isSharedCheck_4720_ == 0)
{
v___x_4715_ = v___x_4695_;
v_isShared_4716_ = v_isSharedCheck_4720_;
goto v_resetjp_4714_;
}
else
{
lean_inc(v_a_4713_);
lean_dec(v___x_4695_);
v___x_4715_ = lean_box(0);
v_isShared_4716_ = v_isSharedCheck_4720_;
goto v_resetjp_4714_;
}
v_resetjp_4714_:
{
lean_object* v___x_4718_; 
if (v_isShared_4716_ == 0)
{
v___x_4718_ = v___x_4715_;
goto v_reusejp_4717_;
}
else
{
lean_object* v_reuseFailAlloc_4719_; 
v_reuseFailAlloc_4719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4719_, 0, v_a_4713_);
v___x_4718_ = v_reuseFailAlloc_4719_;
goto v_reusejp_4717_;
}
v_reusejp_4717_:
{
return v___x_4718_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(lean_object* v_init_4722_, lean_object* v_config_4723_, lean_object* v_mvarId_4724_, lean_object* v_as_4725_, size_t v_sz_4726_, size_t v_i_4727_, lean_object* v_b_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_){
_start:
{
uint8_t v___x_4734_; 
v___x_4734_ = lean_usize_dec_lt(v_i_4727_, v_sz_4726_);
if (v___x_4734_ == 0)
{
lean_object* v___x_4735_; 
lean_dec(v_mvarId_4724_);
lean_dec_ref(v_config_4723_);
v___x_4735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4735_, 0, v_b_4728_);
return v___x_4735_;
}
else
{
lean_object* v_snd_4736_; lean_object* v___x_4738_; uint8_t v_isShared_4739_; uint8_t v_isSharedCheck_4770_; 
v_snd_4736_ = lean_ctor_get(v_b_4728_, 1);
v_isSharedCheck_4770_ = !lean_is_exclusive(v_b_4728_);
if (v_isSharedCheck_4770_ == 0)
{
lean_object* v_unused_4771_; 
v_unused_4771_ = lean_ctor_get(v_b_4728_, 0);
lean_dec(v_unused_4771_);
v___x_4738_ = v_b_4728_;
v_isShared_4739_ = v_isSharedCheck_4770_;
goto v_resetjp_4737_;
}
else
{
lean_inc(v_snd_4736_);
lean_dec(v_b_4728_);
v___x_4738_ = lean_box(0);
v_isShared_4739_ = v_isSharedCheck_4770_;
goto v_resetjp_4737_;
}
v_resetjp_4737_:
{
lean_object* v_a_4740_; lean_object* v___x_4741_; 
v_a_4740_ = lean_array_uget_borrowed(v_as_4725_, v_i_4727_);
lean_inc(v_snd_4736_);
lean_inc(v_a_4740_);
lean_inc(v_mvarId_4724_);
lean_inc_ref(v_config_4723_);
v___x_4741_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4722_, v_config_4723_, v_mvarId_4724_, v_a_4740_, v_snd_4736_, v___y_4729_, v___y_4730_, v___y_4731_, v___y_4732_);
if (lean_obj_tag(v___x_4741_) == 0)
{
lean_object* v_a_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4761_; 
v_a_4742_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4761_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4761_ == 0)
{
v___x_4744_ = v___x_4741_;
v_isShared_4745_ = v_isSharedCheck_4761_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_a_4742_);
lean_dec(v___x_4741_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4761_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
if (lean_obj_tag(v_a_4742_) == 0)
{
lean_object* v___x_4746_; lean_object* v___x_4748_; 
lean_dec(v_mvarId_4724_);
lean_dec_ref(v_config_4723_);
v___x_4746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4746_, 0, v_a_4742_);
if (v_isShared_4739_ == 0)
{
lean_ctor_set(v___x_4738_, 0, v___x_4746_);
v___x_4748_ = v___x_4738_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4752_; 
v_reuseFailAlloc_4752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4752_, 0, v___x_4746_);
lean_ctor_set(v_reuseFailAlloc_4752_, 1, v_snd_4736_);
v___x_4748_ = v_reuseFailAlloc_4752_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
lean_object* v___x_4750_; 
if (v_isShared_4745_ == 0)
{
lean_ctor_set(v___x_4744_, 0, v___x_4748_);
v___x_4750_ = v___x_4744_;
goto v_reusejp_4749_;
}
else
{
lean_object* v_reuseFailAlloc_4751_; 
v_reuseFailAlloc_4751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4751_, 0, v___x_4748_);
v___x_4750_ = v_reuseFailAlloc_4751_;
goto v_reusejp_4749_;
}
v_reusejp_4749_:
{
return v___x_4750_;
}
}
}
else
{
lean_object* v_a_4753_; lean_object* v___x_4754_; lean_object* v___x_4756_; 
lean_del_object(v___x_4744_);
lean_dec(v_snd_4736_);
v_a_4753_ = lean_ctor_get(v_a_4742_, 0);
lean_inc(v_a_4753_);
lean_dec_ref(v_a_4742_);
v___x_4754_ = lean_box(0);
if (v_isShared_4739_ == 0)
{
lean_ctor_set(v___x_4738_, 1, v_a_4753_);
lean_ctor_set(v___x_4738_, 0, v___x_4754_);
v___x_4756_ = v___x_4738_;
goto v_reusejp_4755_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v___x_4754_);
lean_ctor_set(v_reuseFailAlloc_4760_, 1, v_a_4753_);
v___x_4756_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4755_;
}
v_reusejp_4755_:
{
size_t v___x_4757_; size_t v___x_4758_; 
v___x_4757_ = ((size_t)1ULL);
v___x_4758_ = lean_usize_add(v_i_4727_, v___x_4757_);
v_i_4727_ = v___x_4758_;
v_b_4728_ = v___x_4756_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4762_; lean_object* v___x_4764_; uint8_t v_isShared_4765_; uint8_t v_isSharedCheck_4769_; 
lean_del_object(v___x_4738_);
lean_dec(v_snd_4736_);
lean_dec(v_mvarId_4724_);
lean_dec_ref(v_config_4723_);
v_a_4762_ = lean_ctor_get(v___x_4741_, 0);
v_isSharedCheck_4769_ = !lean_is_exclusive(v___x_4741_);
if (v_isSharedCheck_4769_ == 0)
{
v___x_4764_ = v___x_4741_;
v_isShared_4765_ = v_isSharedCheck_4769_;
goto v_resetjp_4763_;
}
else
{
lean_inc(v_a_4762_);
lean_dec(v___x_4741_);
v___x_4764_ = lean_box(0);
v_isShared_4765_ = v_isSharedCheck_4769_;
goto v_resetjp_4763_;
}
v_resetjp_4763_:
{
lean_object* v___x_4767_; 
if (v_isShared_4765_ == 0)
{
v___x_4767_ = v___x_4764_;
goto v_reusejp_4766_;
}
else
{
lean_object* v_reuseFailAlloc_4768_; 
v_reuseFailAlloc_4768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4768_, 0, v_a_4762_);
v___x_4767_ = v_reuseFailAlloc_4768_;
goto v_reusejp_4766_;
}
v_reusejp_4766_:
{
return v___x_4767_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1___boxed(lean_object* v_init_4772_, lean_object* v_config_4773_, lean_object* v_mvarId_4774_, lean_object* v_as_4775_, lean_object* v_sz_4776_, lean_object* v_i_4777_, lean_object* v_b_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_){
_start:
{
size_t v_sz_boxed_4784_; size_t v_i_boxed_4785_; lean_object* v_res_4786_; 
v_sz_boxed_4784_ = lean_unbox_usize(v_sz_4776_);
lean_dec(v_sz_4776_);
v_i_boxed_4785_ = lean_unbox_usize(v_i_4777_);
lean_dec(v_i_4777_);
v_res_4786_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0_spec__1(v_init_4772_, v_config_4773_, v_mvarId_4774_, v_as_4775_, v_sz_boxed_4784_, v_i_boxed_4785_, v_b_4778_, v___y_4779_, v___y_4780_, v___y_4781_, v___y_4782_);
lean_dec(v___y_4782_);
lean_dec_ref(v___y_4781_);
lean_dec(v___y_4780_);
lean_dec_ref(v___y_4779_);
lean_dec_ref(v_as_4775_);
lean_dec_ref(v_init_4772_);
return v_res_4786_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0___boxed(lean_object* v_init_4787_, lean_object* v_config_4788_, lean_object* v_mvarId_4789_, lean_object* v_n_4790_, lean_object* v_b_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_){
_start:
{
lean_object* v_res_4797_; 
v_res_4797_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4787_, v_config_4788_, v_mvarId_4789_, v_n_4790_, v_b_4791_, v___y_4792_, v___y_4793_, v___y_4794_, v___y_4795_);
lean_dec(v___y_4795_);
lean_dec_ref(v___y_4794_);
lean_dec(v___y_4793_);
lean_dec_ref(v___y_4792_);
lean_dec_ref(v_init_4787_);
return v_res_4797_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(lean_object* v_config_4798_, lean_object* v_mvarId_4799_, lean_object* v_t_4800_, lean_object* v_init_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_){
_start:
{
lean_object* v_root_4807_; lean_object* v_tail_4808_; lean_object* v___x_4809_; 
v_root_4807_ = lean_ctor_get(v_t_4800_, 0);
lean_inc_ref(v_root_4807_);
v_tail_4808_ = lean_ctor_get(v_t_4800_, 1);
lean_inc_ref(v_tail_4808_);
lean_dec_ref(v_t_4800_);
lean_inc(v_mvarId_4799_);
lean_inc_ref(v_config_4798_);
lean_inc_ref(v_init_4801_);
v___x_4809_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__0(v_init_4801_, v_config_4798_, v_mvarId_4799_, v_root_4807_, v_init_4801_, v___y_4802_, v___y_4803_, v___y_4804_, v___y_4805_);
lean_dec_ref(v_init_4801_);
if (lean_obj_tag(v___x_4809_) == 0)
{
lean_object* v_a_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4846_; 
v_a_4810_ = lean_ctor_get(v___x_4809_, 0);
v_isSharedCheck_4846_ = !lean_is_exclusive(v___x_4809_);
if (v_isSharedCheck_4846_ == 0)
{
v___x_4812_ = v___x_4809_;
v_isShared_4813_ = v_isSharedCheck_4846_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_a_4810_);
lean_dec(v___x_4809_);
v___x_4812_ = lean_box(0);
v_isShared_4813_ = v_isSharedCheck_4846_;
goto v_resetjp_4811_;
}
v_resetjp_4811_:
{
if (lean_obj_tag(v_a_4810_) == 0)
{
lean_object* v_a_4814_; lean_object* v___x_4816_; 
lean_dec_ref(v_tail_4808_);
lean_dec(v_mvarId_4799_);
lean_dec_ref(v_config_4798_);
v_a_4814_ = lean_ctor_get(v_a_4810_, 0);
lean_inc(v_a_4814_);
lean_dec_ref(v_a_4810_);
if (v_isShared_4813_ == 0)
{
lean_ctor_set(v___x_4812_, 0, v_a_4814_);
v___x_4816_ = v___x_4812_;
goto v_reusejp_4815_;
}
else
{
lean_object* v_reuseFailAlloc_4817_; 
v_reuseFailAlloc_4817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4817_, 0, v_a_4814_);
v___x_4816_ = v_reuseFailAlloc_4817_;
goto v_reusejp_4815_;
}
v_reusejp_4815_:
{
return v___x_4816_;
}
}
else
{
lean_object* v_a_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; size_t v_sz_4821_; size_t v___x_4822_; lean_object* v___x_4823_; 
lean_del_object(v___x_4812_);
v_a_4818_ = lean_ctor_get(v_a_4810_, 0);
lean_inc(v_a_4818_);
lean_dec_ref(v_a_4810_);
v___x_4819_ = lean_box(0);
v___x_4820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4820_, 0, v___x_4819_);
lean_ctor_set(v___x_4820_, 1, v_a_4818_);
v_sz_4821_ = lean_array_size(v_tail_4808_);
v___x_4822_ = ((size_t)0ULL);
v___x_4823_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0_spec__1(v_config_4798_, v_mvarId_4799_, v_tail_4808_, v_sz_4821_, v___x_4822_, v___x_4820_, v___y_4802_, v___y_4803_, v___y_4804_, v___y_4805_);
lean_dec_ref(v_tail_4808_);
if (lean_obj_tag(v___x_4823_) == 0)
{
lean_object* v_a_4824_; lean_object* v___x_4826_; uint8_t v_isShared_4827_; uint8_t v_isSharedCheck_4837_; 
v_a_4824_ = lean_ctor_get(v___x_4823_, 0);
v_isSharedCheck_4837_ = !lean_is_exclusive(v___x_4823_);
if (v_isSharedCheck_4837_ == 0)
{
v___x_4826_ = v___x_4823_;
v_isShared_4827_ = v_isSharedCheck_4837_;
goto v_resetjp_4825_;
}
else
{
lean_inc(v_a_4824_);
lean_dec(v___x_4823_);
v___x_4826_ = lean_box(0);
v_isShared_4827_ = v_isSharedCheck_4837_;
goto v_resetjp_4825_;
}
v_resetjp_4825_:
{
lean_object* v_fst_4828_; 
v_fst_4828_ = lean_ctor_get(v_a_4824_, 0);
if (lean_obj_tag(v_fst_4828_) == 0)
{
lean_object* v_snd_4829_; lean_object* v___x_4831_; 
v_snd_4829_ = lean_ctor_get(v_a_4824_, 1);
lean_inc(v_snd_4829_);
lean_dec(v_a_4824_);
if (v_isShared_4827_ == 0)
{
lean_ctor_set(v___x_4826_, 0, v_snd_4829_);
v___x_4831_ = v___x_4826_;
goto v_reusejp_4830_;
}
else
{
lean_object* v_reuseFailAlloc_4832_; 
v_reuseFailAlloc_4832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4832_, 0, v_snd_4829_);
v___x_4831_ = v_reuseFailAlloc_4832_;
goto v_reusejp_4830_;
}
v_reusejp_4830_:
{
return v___x_4831_;
}
}
else
{
lean_object* v_val_4833_; lean_object* v___x_4835_; 
lean_inc_ref(v_fst_4828_);
lean_dec(v_a_4824_);
v_val_4833_ = lean_ctor_get(v_fst_4828_, 0);
lean_inc(v_val_4833_);
lean_dec_ref(v_fst_4828_);
if (v_isShared_4827_ == 0)
{
lean_ctor_set(v___x_4826_, 0, v_val_4833_);
v___x_4835_ = v___x_4826_;
goto v_reusejp_4834_;
}
else
{
lean_object* v_reuseFailAlloc_4836_; 
v_reuseFailAlloc_4836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4836_, 0, v_val_4833_);
v___x_4835_ = v_reuseFailAlloc_4836_;
goto v_reusejp_4834_;
}
v_reusejp_4834_:
{
return v___x_4835_;
}
}
}
}
else
{
lean_object* v_a_4838_; lean_object* v___x_4840_; uint8_t v_isShared_4841_; uint8_t v_isSharedCheck_4845_; 
v_a_4838_ = lean_ctor_get(v___x_4823_, 0);
v_isSharedCheck_4845_ = !lean_is_exclusive(v___x_4823_);
if (v_isSharedCheck_4845_ == 0)
{
v___x_4840_ = v___x_4823_;
v_isShared_4841_ = v_isSharedCheck_4845_;
goto v_resetjp_4839_;
}
else
{
lean_inc(v_a_4838_);
lean_dec(v___x_4823_);
v___x_4840_ = lean_box(0);
v_isShared_4841_ = v_isSharedCheck_4845_;
goto v_resetjp_4839_;
}
v_resetjp_4839_:
{
lean_object* v___x_4843_; 
if (v_isShared_4841_ == 0)
{
v___x_4843_ = v___x_4840_;
goto v_reusejp_4842_;
}
else
{
lean_object* v_reuseFailAlloc_4844_; 
v_reuseFailAlloc_4844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4844_, 0, v_a_4838_);
v___x_4843_ = v_reuseFailAlloc_4844_;
goto v_reusejp_4842_;
}
v_reusejp_4842_:
{
return v___x_4843_;
}
}
}
}
}
}
else
{
lean_object* v_a_4847_; lean_object* v___x_4849_; uint8_t v_isShared_4850_; uint8_t v_isSharedCheck_4854_; 
lean_dec_ref(v_tail_4808_);
lean_dec(v_mvarId_4799_);
lean_dec_ref(v_config_4798_);
v_a_4847_ = lean_ctor_get(v___x_4809_, 0);
v_isSharedCheck_4854_ = !lean_is_exclusive(v___x_4809_);
if (v_isSharedCheck_4854_ == 0)
{
v___x_4849_ = v___x_4809_;
v_isShared_4850_ = v_isSharedCheck_4854_;
goto v_resetjp_4848_;
}
else
{
lean_inc(v_a_4847_);
lean_dec(v___x_4809_);
v___x_4849_ = lean_box(0);
v_isShared_4850_ = v_isSharedCheck_4854_;
goto v_resetjp_4848_;
}
v_resetjp_4848_:
{
lean_object* v___x_4852_; 
if (v_isShared_4850_ == 0)
{
v___x_4852_ = v___x_4849_;
goto v_reusejp_4851_;
}
else
{
lean_object* v_reuseFailAlloc_4853_; 
v_reuseFailAlloc_4853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4853_, 0, v_a_4847_);
v___x_4852_ = v_reuseFailAlloc_4853_;
goto v_reusejp_4851_;
}
v_reusejp_4851_:
{
return v___x_4852_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0___boxed(lean_object* v_config_4855_, lean_object* v_mvarId_4856_, lean_object* v_t_4857_, lean_object* v_init_4858_, lean_object* v___y_4859_, lean_object* v___y_4860_, lean_object* v___y_4861_, lean_object* v___y_4862_, lean_object* v___y_4863_){
_start:
{
lean_object* v_res_4864_; 
v_res_4864_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(v_config_4855_, v_mvarId_4856_, v_t_4857_, v_init_4858_, v___y_4859_, v___y_4860_, v___y_4861_, v___y_4862_);
lean_dec(v___y_4862_);
lean_dec_ref(v___y_4861_);
lean_dec(v___y_4860_);
lean_dec_ref(v___y_4859_);
return v_res_4864_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0(lean_object* v_mvarId_4865_, lean_object* v___x_4866_, lean_object* v_config_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_){
_start:
{
lean_object* v___x_4873_; 
lean_inc(v_mvarId_4865_);
v___x_4873_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4865_, v___x_4866_, v___y_4868_, v___y_4869_, v___y_4870_, v___y_4871_);
if (lean_obj_tag(v___x_4873_) == 0)
{
lean_object* v___x_4874_; 
lean_dec_ref(v___x_4873_);
lean_inc(v_mvarId_4865_);
v___x_4874_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_nestedFalseElim(v_mvarId_4865_, v___y_4868_, v___y_4869_, v___y_4870_, v___y_4871_);
if (lean_obj_tag(v___x_4874_) == 0)
{
lean_object* v_a_4875_; lean_object* v___x_4877_; uint8_t v_isShared_4878_; uint8_t v_isSharedCheck_4908_; 
v_a_4875_ = lean_ctor_get(v___x_4874_, 0);
v_isSharedCheck_4908_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_4908_ == 0)
{
v___x_4877_ = v___x_4874_;
v_isShared_4878_ = v_isSharedCheck_4908_;
goto v_resetjp_4876_;
}
else
{
lean_inc(v_a_4875_);
lean_dec(v___x_4874_);
v___x_4877_ = lean_box(0);
v_isShared_4878_ = v_isSharedCheck_4908_;
goto v_resetjp_4876_;
}
v_resetjp_4876_:
{
uint8_t v___x_4879_; 
v___x_4879_ = lean_unbox(v_a_4875_);
if (v___x_4879_ == 0)
{
lean_object* v_lctx_4880_; lean_object* v_decls_4881_; lean_object* v___x_4882_; lean_object* v___x_4883_; 
lean_del_object(v___x_4877_);
v_lctx_4880_ = lean_ctor_get(v___y_4868_, 2);
v_decls_4881_ = lean_ctor_get(v_lctx_4880_, 1);
lean_inc_ref(v_decls_4881_);
v___x_4882_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ElimEmptyInductive_elim_spec__2___closed__0));
v___x_4883_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_contradictionCore_spec__0(v_config_4867_, v_mvarId_4865_, v_decls_4881_, v___x_4882_, v___y_4868_, v___y_4869_, v___y_4870_, v___y_4871_);
lean_dec_ref(v___y_4868_);
if (lean_obj_tag(v___x_4883_) == 0)
{
lean_object* v_a_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4896_; 
v_a_4884_ = lean_ctor_get(v___x_4883_, 0);
v_isSharedCheck_4896_ = !lean_is_exclusive(v___x_4883_);
if (v_isSharedCheck_4896_ == 0)
{
v___x_4886_ = v___x_4883_;
v_isShared_4887_ = v_isSharedCheck_4896_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_a_4884_);
lean_dec(v___x_4883_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4896_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
lean_object* v_fst_4888_; 
v_fst_4888_ = lean_ctor_get(v_a_4884_, 0);
lean_inc(v_fst_4888_);
lean_dec(v_a_4884_);
if (lean_obj_tag(v_fst_4888_) == 0)
{
lean_object* v___x_4890_; 
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 0, v_a_4875_);
v___x_4890_ = v___x_4886_;
goto v_reusejp_4889_;
}
else
{
lean_object* v_reuseFailAlloc_4891_; 
v_reuseFailAlloc_4891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4891_, 0, v_a_4875_);
v___x_4890_ = v_reuseFailAlloc_4891_;
goto v_reusejp_4889_;
}
v_reusejp_4889_:
{
return v___x_4890_;
}
}
else
{
lean_object* v_val_4892_; lean_object* v___x_4894_; 
lean_dec(v_a_4875_);
v_val_4892_ = lean_ctor_get(v_fst_4888_, 0);
lean_inc(v_val_4892_);
lean_dec_ref(v_fst_4888_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 0, v_val_4892_);
v___x_4894_ = v___x_4886_;
goto v_reusejp_4893_;
}
else
{
lean_object* v_reuseFailAlloc_4895_; 
v_reuseFailAlloc_4895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4895_, 0, v_val_4892_);
v___x_4894_ = v_reuseFailAlloc_4895_;
goto v_reusejp_4893_;
}
v_reusejp_4893_:
{
return v___x_4894_;
}
}
}
}
else
{
lean_object* v_a_4897_; lean_object* v___x_4899_; uint8_t v_isShared_4900_; uint8_t v_isSharedCheck_4904_; 
lean_dec(v_a_4875_);
v_a_4897_ = lean_ctor_get(v___x_4883_, 0);
v_isSharedCheck_4904_ = !lean_is_exclusive(v___x_4883_);
if (v_isSharedCheck_4904_ == 0)
{
v___x_4899_ = v___x_4883_;
v_isShared_4900_ = v_isSharedCheck_4904_;
goto v_resetjp_4898_;
}
else
{
lean_inc(v_a_4897_);
lean_dec(v___x_4883_);
v___x_4899_ = lean_box(0);
v_isShared_4900_ = v_isSharedCheck_4904_;
goto v_resetjp_4898_;
}
v_resetjp_4898_:
{
lean_object* v___x_4902_; 
if (v_isShared_4900_ == 0)
{
v___x_4902_ = v___x_4899_;
goto v_reusejp_4901_;
}
else
{
lean_object* v_reuseFailAlloc_4903_; 
v_reuseFailAlloc_4903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4903_, 0, v_a_4897_);
v___x_4902_ = v_reuseFailAlloc_4903_;
goto v_reusejp_4901_;
}
v_reusejp_4901_:
{
return v___x_4902_;
}
}
}
}
else
{
lean_object* v___x_4906_; 
lean_dec_ref(v___y_4868_);
lean_dec_ref(v_config_4867_);
lean_dec(v_mvarId_4865_);
if (v_isShared_4878_ == 0)
{
v___x_4906_ = v___x_4877_;
goto v_reusejp_4905_;
}
else
{
lean_object* v_reuseFailAlloc_4907_; 
v_reuseFailAlloc_4907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4907_, 0, v_a_4875_);
v___x_4906_ = v_reuseFailAlloc_4907_;
goto v_reusejp_4905_;
}
v_reusejp_4905_:
{
return v___x_4906_;
}
}
}
}
else
{
lean_dec_ref(v___y_4868_);
lean_dec_ref(v_config_4867_);
lean_dec(v_mvarId_4865_);
return v___x_4874_;
}
}
else
{
lean_object* v_a_4909_; lean_object* v___x_4911_; uint8_t v_isShared_4912_; uint8_t v_isSharedCheck_4916_; 
lean_dec_ref(v___y_4868_);
lean_dec_ref(v_config_4867_);
lean_dec(v_mvarId_4865_);
v_a_4909_ = lean_ctor_get(v___x_4873_, 0);
v_isSharedCheck_4916_ = !lean_is_exclusive(v___x_4873_);
if (v_isSharedCheck_4916_ == 0)
{
v___x_4911_ = v___x_4873_;
v_isShared_4912_ = v_isSharedCheck_4916_;
goto v_resetjp_4910_;
}
else
{
lean_inc(v_a_4909_);
lean_dec(v___x_4873_);
v___x_4911_ = lean_box(0);
v_isShared_4912_ = v_isSharedCheck_4916_;
goto v_resetjp_4910_;
}
v_resetjp_4910_:
{
lean_object* v___x_4914_; 
if (v_isShared_4912_ == 0)
{
v___x_4914_ = v___x_4911_;
goto v_reusejp_4913_;
}
else
{
lean_object* v_reuseFailAlloc_4915_; 
v_reuseFailAlloc_4915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4915_, 0, v_a_4909_);
v___x_4914_ = v_reuseFailAlloc_4915_;
goto v_reusejp_4913_;
}
v_reusejp_4913_:
{
return v___x_4914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___lam__0___boxed(lean_object* v_mvarId_4917_, lean_object* v___x_4918_, lean_object* v_config_4919_, lean_object* v___y_4920_, lean_object* v___y_4921_, lean_object* v___y_4922_, lean_object* v___y_4923_, lean_object* v___y_4924_){
_start:
{
lean_object* v_res_4925_; 
v_res_4925_ = l_Lean_MVarId_contradictionCore___lam__0(v_mvarId_4917_, v___x_4918_, v_config_4919_, v___y_4920_, v___y_4921_, v___y_4922_, v___y_4923_);
lean_dec(v___y_4923_);
lean_dec_ref(v___y_4922_);
lean_dec(v___y_4921_);
return v_res_4925_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore(lean_object* v_mvarId_4928_, lean_object* v_config_4929_, lean_object* v_a_4930_, lean_object* v_a_4931_, lean_object* v_a_4932_, lean_object* v_a_4933_){
_start:
{
lean_object* v___x_4935_; lean_object* v___f_4936_; lean_object* v___x_4937_; 
v___x_4935_ = ((lean_object*)(l_Lean_MVarId_contradictionCore___closed__0));
lean_inc(v_mvarId_4928_);
v___f_4936_ = lean_alloc_closure((void*)(l_Lean_MVarId_contradictionCore___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4936_, 0, v_mvarId_4928_);
lean_closure_set(v___f_4936_, 1, v___x_4935_);
lean_closure_set(v___f_4936_, 2, v_config_4929_);
v___x_4937_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_elimEmptyInductive_spec__1___redArg(v_mvarId_4928_, v___f_4936_, v_a_4930_, v_a_4931_, v_a_4932_, v_a_4933_);
return v___x_4937_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradictionCore___boxed(lean_object* v_mvarId_4938_, lean_object* v_config_4939_, lean_object* v_a_4940_, lean_object* v_a_4941_, lean_object* v_a_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_){
_start:
{
lean_object* v_res_4945_; 
v_res_4945_ = l_Lean_MVarId_contradictionCore(v_mvarId_4938_, v_config_4939_, v_a_4940_, v_a_4941_, v_a_4942_, v_a_4943_);
lean_dec(v_a_4943_);
lean_dec_ref(v_a_4942_);
lean_dec(v_a_4941_);
lean_dec_ref(v_a_4940_);
return v_res_4945_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction(lean_object* v_mvarId_4946_, lean_object* v_config_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_){
_start:
{
lean_object* v___x_4953_; 
lean_inc(v_mvarId_4946_);
v___x_4953_ = l_Lean_MVarId_contradictionCore(v_mvarId_4946_, v_config_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_);
if (lean_obj_tag(v___x_4953_) == 0)
{
lean_object* v_a_4954_; lean_object* v___x_4956_; uint8_t v_isShared_4957_; uint8_t v_isSharedCheck_4966_; 
v_a_4954_ = lean_ctor_get(v___x_4953_, 0);
v_isSharedCheck_4966_ = !lean_is_exclusive(v___x_4953_);
if (v_isSharedCheck_4966_ == 0)
{
v___x_4956_ = v___x_4953_;
v_isShared_4957_ = v_isSharedCheck_4966_;
goto v_resetjp_4955_;
}
else
{
lean_inc(v_a_4954_);
lean_dec(v___x_4953_);
v___x_4956_ = lean_box(0);
v_isShared_4957_ = v_isSharedCheck_4966_;
goto v_resetjp_4955_;
}
v_resetjp_4955_:
{
uint8_t v___x_4958_; 
v___x_4958_ = lean_unbox(v_a_4954_);
lean_dec(v_a_4954_);
if (v___x_4958_ == 0)
{
lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; 
lean_del_object(v___x_4956_);
v___x_4959_ = ((lean_object*)(l_Lean_MVarId_contradictionCore___closed__0));
v___x_4960_ = lean_box(0);
v___x_4961_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4959_, v_mvarId_4946_, v___x_4960_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_);
return v___x_4961_;
}
else
{
lean_object* v___x_4962_; lean_object* v___x_4964_; 
lean_dec(v_mvarId_4946_);
v___x_4962_ = lean_box(0);
if (v_isShared_4957_ == 0)
{
lean_ctor_set(v___x_4956_, 0, v___x_4962_);
v___x_4964_ = v___x_4956_;
goto v_reusejp_4963_;
}
else
{
lean_object* v_reuseFailAlloc_4965_; 
v_reuseFailAlloc_4965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4965_, 0, v___x_4962_);
v___x_4964_ = v_reuseFailAlloc_4965_;
goto v_reusejp_4963_;
}
v_reusejp_4963_:
{
return v___x_4964_;
}
}
}
}
else
{
lean_object* v_a_4967_; lean_object* v___x_4969_; uint8_t v_isShared_4970_; uint8_t v_isSharedCheck_4974_; 
lean_dec(v_mvarId_4946_);
v_a_4967_ = lean_ctor_get(v___x_4953_, 0);
v_isSharedCheck_4974_ = !lean_is_exclusive(v___x_4953_);
if (v_isSharedCheck_4974_ == 0)
{
v___x_4969_ = v___x_4953_;
v_isShared_4970_ = v_isSharedCheck_4974_;
goto v_resetjp_4968_;
}
else
{
lean_inc(v_a_4967_);
lean_dec(v___x_4953_);
v___x_4969_ = lean_box(0);
v_isShared_4970_ = v_isSharedCheck_4974_;
goto v_resetjp_4968_;
}
v_resetjp_4968_:
{
lean_object* v___x_4972_; 
if (v_isShared_4970_ == 0)
{
v___x_4972_ = v___x_4969_;
goto v_reusejp_4971_;
}
else
{
lean_object* v_reuseFailAlloc_4973_; 
v_reuseFailAlloc_4973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4973_, 0, v_a_4967_);
v___x_4972_ = v_reuseFailAlloc_4973_;
goto v_reusejp_4971_;
}
v_reusejp_4971_:
{
return v___x_4972_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_contradiction___boxed(lean_object* v_mvarId_4975_, lean_object* v_config_4976_, lean_object* v_a_4977_, lean_object* v_a_4978_, lean_object* v_a_4979_, lean_object* v_a_4980_, lean_object* v_a_4981_){
_start:
{
lean_object* v_res_4982_; 
v_res_4982_ = l_Lean_MVarId_contradiction(v_mvarId_4975_, v_config_4976_, v_a_4977_, v_a_4978_, v_a_4979_, v_a_4980_);
lean_dec(v_a_4980_);
lean_dec_ref(v_a_4979_);
lean_dec(v_a_4978_);
lean_dec_ref(v_a_4977_);
return v_res_4982_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5045_; uint8_t v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; 
v___x_5045_ = ((lean_object*)(l_Lean_Meta_ElimEmptyInductive_elim___closed__4));
v___x_5046_ = 0;
v___x_5047_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_));
v___x_5048_ = l_Lean_registerTraceClass(v___x_5045_, v___x_5046_, v___x_5047_);
return v___x_5048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2____boxed(lean_object* v_a_5049_){
_start:
{
lean_object* v_res_5050_; 
v_res_5050_ = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
return v_res_5050_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Contradiction_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Contradiction_911661800____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin);
lean_object* initialize_Lean_Meta_HasNotBit(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Rewrite(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_HasNotBit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Contradiction(builtin);
}
#ifdef __cplusplus
}
#endif
