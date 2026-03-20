// Lean compiler output
// Module: Lean.Meta.Tactic.Apply
// Imports: public import Lean.Meta.Tactic.Util public import Lean.PrettyPrinter import Lean.Meta.AppBuilder import Init.Omega
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_headBetaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_main(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkUnfoldAxiomsNote(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofLazyM(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_appendTag(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaBoundedTelescope(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_getExpectedNumArgsAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_getExpectedNumArgsAux___closed__0 = (const lean_object*)&l_Lean_Meta_getExpectedNumArgsAux___closed__0_value;
static lean_once_cell_t l_Lean_Meta_getExpectedNumArgsAux___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_getExpectedNumArgsAux___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "\nwith the goal"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "could not unify the "};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "the term"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "conclusion"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 239, 198, 100, 229, 128, 136, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " is"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "The full type of "};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "failed to assign synthesized instance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_MVarId_apply_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_MVarId_apply_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_applyConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_MVarId_applyConst___closed__0 = (const lean_object*)&l_Lean_MVarId_applyConst___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_applyConst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyConst___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Type mismatch: target is"};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__1;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "\nbut applied expression has type"};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__3;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "\nafter applying "};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__5;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " arguments."};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__6 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__7;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Applied type takes fewer than "};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__8 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__9;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " arguments:\n"};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__10 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__11;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_splitAndCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "splitAnd"};
static const lean_object* l_Lean_MVarId_splitAndCore___closed__0 = (const lean_object*)&l_Lean_MVarId_splitAndCore___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_splitAndCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_splitAndCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 13, 24, 72, 20, 48, 2, 32)}};
static const lean_object* l_Lean_MVarId_splitAndCore___closed__1 = (const lean_object*)&l_Lean_MVarId_splitAndCore___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_exfalso___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_exfalso___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_exfalso___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_exfalso___lam__0___closed__2;
static const lean_string_object l_Lean_MVarId_exfalso___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_MVarId_exfalso___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l_Lean_MVarId_exfalso___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_exfalso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "exfalso"};
static const lean_object* l_Lean_MVarId_exfalso___closed__0 = (const lean_object*)&l_Lean_MVarId_exfalso___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_exfalso___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_exfalso___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 71, 194, 225, 45, 41, 69, 140)}};
static const lean_object* l_Lean_MVarId_exfalso___closed__1 = (const lean_object*)&l_Lean_MVarId_exfalso___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "target is not an inductive datatype"};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_nthConstructor___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__3;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "index "};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__4_value;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " out of bounds, only "};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__5 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__5_value;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " constructors"};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__6 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__6_value;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = " tactic works for inductive types with exactly "};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__7 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_iffOfEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_MVarId_iffOfEq___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_iffOfEq___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_iffOfEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_iffOfEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "iff_of_eq"};
static const lean_object* l_Lean_MVarId_iffOfEq___closed__0 = (const lean_object*)&l_Lean_MVarId_iffOfEq___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_iffOfEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_iffOfEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 65, 13, 14, 191, 127, 32, 251)}};
static const lean_object* l_Lean_MVarId_iffOfEq___closed__1 = (const lean_object*)&l_Lean_MVarId_iffOfEq___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_iffOfEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___closed__2;
static const lean_ctor_object l_Lean_MVarId_iffOfEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_MVarId_iffOfEq___closed__3 = (const lean_object*)&l_Lean_MVarId_iffOfEq___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_propext___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_propext___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_propext___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__1_value;
static const lean_string_object l_Lean_MVarId_propext___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "propext"};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_MVarId_propext___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_propext___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(53, 150, 49, 30, 125, 3, 39, 172)}};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_MVarId_propext___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_propext___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0;
static const lean_string_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2_value;
static const lean_string_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "proof_irrel_heq"};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(180, 105, 248, 247, 187, 48, 190, 226)}};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_proofIrrelHeq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proofIrrelHeq"};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___closed__0 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_proofIrrelHeq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_proofIrrelHeq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 31, 69, 85, 58, 186, 233, 113)}};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___closed__1 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_subsingletonElim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Subsingleton"};
static const lean_object* l_Lean_MVarId_subsingletonElim___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 130, 42, 228, 248, 162, 23, 186)}};
static const lean_ctor_object l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(79, 85, 152, 16, 239, 41, 62, 212)}};
static const lean_object* l_Lean_MVarId_subsingletonElim___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_subsingletonElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "subsingletonElim"};
static const lean_object* l_Lean_MVarId_subsingletonElim___closed__0 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_subsingletonElim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_subsingletonElim___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 225, 81, 216, 132, 143, 62, 229)}};
static const lean_object* l_Lean_MVarId_subsingletonElim___closed__1 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, uint8_t v_whnfType_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___f_28_; lean_object* v___x_29_; 
v___f_28_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_28_, 0, v_k_20_);
v___x_29_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_19_, v___f_28_, v_cleanupAnnotations_21_, v_whnfType_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
if (lean_obj_tag(v___x_29_) == 0)
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_37_; 
v_a_30_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_37_ == 0)
{
v___x_32_ = v___x_29_;
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_29_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_30_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
v_a_38_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_29_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_29_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___boxed(lean_object* v_type_46_, lean_object* v_k_47_, lean_object* v_cleanupAnnotations_48_, lean_object* v_whnfType_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; uint8_t v_whnfType_boxed_56_; lean_object* v_res_57_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_48_);
v_whnfType_boxed_56_ = lean_unbox(v_whnfType_49_);
v_res_57_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_type_46_, v_k_47_, v_cleanupAnnotations_boxed_55_, v_whnfType_boxed_56_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(lean_object* v_00_u03b1_58_, lean_object* v_type_59_, lean_object* v_k_60_, uint8_t v_cleanupAnnotations_61_, uint8_t v_whnfType_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_type_59_, v_k_60_, v_cleanupAnnotations_61_, v_whnfType_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___boxed(lean_object* v_00_u03b1_69_, lean_object* v_type_70_, lean_object* v_k_71_, lean_object* v_cleanupAnnotations_72_, lean_object* v_whnfType_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_79_; uint8_t v_whnfType_boxed_80_; lean_object* v_res_81_; 
v_cleanupAnnotations_boxed_79_ = lean_unbox(v_cleanupAnnotations_72_);
v_whnfType_boxed_80_ = lean_unbox(v_whnfType_73_);
v_res_81_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(v_00_u03b1_69_, v_type_70_, v_k_71_, v_cleanupAnnotations_boxed_79_, v_whnfType_boxed_80_, v___y_74_, v___y_75_, v___y_76_, v___y_77_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0(lean_object* v_xs_82_, lean_object* v_body_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_89_ = lean_array_get_size(v_xs_82_);
v___x_90_ = l_Lean_Expr_getAppFn(v_body_83_);
v___x_91_ = l_Lean_Expr_isMVar(v___x_90_);
lean_dec_ref(v___x_90_);
v___x_92_ = lean_box(v___x_91_);
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_89_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed(lean_object* v_xs_95_, lean_object* v_body_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Meta_getExpectedNumArgsAux___lam__0(v_xs_95_, v_body_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec_ref(v_body_96_);
lean_dec_ref(v_xs_95_);
return v_res_102_;
}
}
static uint64_t _init_l_Lean_Meta_getExpectedNumArgsAux___closed__1(void){
_start:
{
uint8_t v___x_104_; uint64_t v___x_105_; 
v___x_104_ = 1;
v___x_105_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux(lean_object* v_e_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_){
_start:
{
lean_object* v___x_112_; uint8_t v_foApprox_113_; uint8_t v_ctxApprox_114_; uint8_t v_quasiPatternApprox_115_; uint8_t v_constApprox_116_; uint8_t v_isDefEqStuckEx_117_; uint8_t v_unificationHints_118_; uint8_t v_proofIrrelevance_119_; uint8_t v_assignSyntheticOpaque_120_; uint8_t v_offsetCnstrs_121_; uint8_t v_etaStruct_122_; uint8_t v_univApprox_123_; uint8_t v_iota_124_; uint8_t v_beta_125_; uint8_t v_proj_126_; uint8_t v_zeta_127_; uint8_t v_zetaDelta_128_; uint8_t v_zetaUnused_129_; uint8_t v_zetaHave_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_172_; 
v___x_112_ = l_Lean_Meta_Context_config(v_a_107_);
v_foApprox_113_ = lean_ctor_get_uint8(v___x_112_, 0);
v_ctxApprox_114_ = lean_ctor_get_uint8(v___x_112_, 1);
v_quasiPatternApprox_115_ = lean_ctor_get_uint8(v___x_112_, 2);
v_constApprox_116_ = lean_ctor_get_uint8(v___x_112_, 3);
v_isDefEqStuckEx_117_ = lean_ctor_get_uint8(v___x_112_, 4);
v_unificationHints_118_ = lean_ctor_get_uint8(v___x_112_, 5);
v_proofIrrelevance_119_ = lean_ctor_get_uint8(v___x_112_, 6);
v_assignSyntheticOpaque_120_ = lean_ctor_get_uint8(v___x_112_, 7);
v_offsetCnstrs_121_ = lean_ctor_get_uint8(v___x_112_, 8);
v_etaStruct_122_ = lean_ctor_get_uint8(v___x_112_, 10);
v_univApprox_123_ = lean_ctor_get_uint8(v___x_112_, 11);
v_iota_124_ = lean_ctor_get_uint8(v___x_112_, 12);
v_beta_125_ = lean_ctor_get_uint8(v___x_112_, 13);
v_proj_126_ = lean_ctor_get_uint8(v___x_112_, 14);
v_zeta_127_ = lean_ctor_get_uint8(v___x_112_, 15);
v_zetaDelta_128_ = lean_ctor_get_uint8(v___x_112_, 16);
v_zetaUnused_129_ = lean_ctor_get_uint8(v___x_112_, 17);
v_zetaHave_130_ = lean_ctor_get_uint8(v___x_112_, 18);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_172_ == 0)
{
v___x_132_ = v___x_112_;
v_isShared_133_ = v_isSharedCheck_172_;
goto v_resetjp_131_;
}
else
{
lean_dec(v___x_112_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_172_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
uint8_t v_trackZetaDelta_134_; lean_object* v_zetaDeltaSet_135_; lean_object* v_lctx_136_; lean_object* v_localInstances_137_; lean_object* v_defEqCtx_x3f_138_; lean_object* v_synthPendingDepth_139_; lean_object* v_canUnfold_x3f_140_; uint8_t v_univApprox_141_; uint8_t v_inTypeClassResolution_142_; uint8_t v_cacheInferType_143_; uint8_t v___x_144_; lean_object* v_config_146_; 
v_trackZetaDelta_134_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7);
v_zetaDeltaSet_135_ = lean_ctor_get(v_a_107_, 1);
lean_inc(v_zetaDeltaSet_135_);
v_lctx_136_ = lean_ctor_get(v_a_107_, 2);
lean_inc_ref(v_lctx_136_);
v_localInstances_137_ = lean_ctor_get(v_a_107_, 3);
lean_inc_ref(v_localInstances_137_);
v_defEqCtx_x3f_138_ = lean_ctor_get(v_a_107_, 4);
lean_inc(v_defEqCtx_x3f_138_);
v_synthPendingDepth_139_ = lean_ctor_get(v_a_107_, 5);
lean_inc(v_synthPendingDepth_139_);
v_canUnfold_x3f_140_ = lean_ctor_get(v_a_107_, 6);
lean_inc(v_canUnfold_x3f_140_);
v_univApprox_141_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_142_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7 + 2);
v_cacheInferType_143_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7 + 3);
v___x_144_ = 1;
if (v_isShared_133_ == 0)
{
v_config_146_ = v___x_132_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 0, v_foApprox_113_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 1, v_ctxApprox_114_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 2, v_quasiPatternApprox_115_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 3, v_constApprox_116_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 4, v_isDefEqStuckEx_117_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 5, v_unificationHints_118_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 6, v_proofIrrelevance_119_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 7, v_assignSyntheticOpaque_120_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 8, v_offsetCnstrs_121_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 10, v_etaStruct_122_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 11, v_univApprox_123_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 12, v_iota_124_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 13, v_beta_125_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 14, v_proj_126_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 15, v_zeta_127_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 16, v_zetaDelta_128_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 17, v_zetaUnused_129_);
lean_ctor_set_uint8(v_reuseFailAlloc_171_, 18, v_zetaHave_130_);
v_config_146_ = v_reuseFailAlloc_171_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
uint64_t v___x_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_163_; 
lean_ctor_set_uint8(v_config_146_, 9, v___x_144_);
v___x_147_ = l_Lean_Meta_Context_configKey(v_a_107_);
v_isSharedCheck_163_ = !lean_is_exclusive(v_a_107_);
if (v_isSharedCheck_163_ == 0)
{
lean_object* v_unused_164_; lean_object* v_unused_165_; lean_object* v_unused_166_; lean_object* v_unused_167_; lean_object* v_unused_168_; lean_object* v_unused_169_; lean_object* v_unused_170_; 
v_unused_164_ = lean_ctor_get(v_a_107_, 6);
lean_dec(v_unused_164_);
v_unused_165_ = lean_ctor_get(v_a_107_, 5);
lean_dec(v_unused_165_);
v_unused_166_ = lean_ctor_get(v_a_107_, 4);
lean_dec(v_unused_166_);
v_unused_167_ = lean_ctor_get(v_a_107_, 3);
lean_dec(v_unused_167_);
v_unused_168_ = lean_ctor_get(v_a_107_, 2);
lean_dec(v_unused_168_);
v_unused_169_ = lean_ctor_get(v_a_107_, 1);
lean_dec(v_unused_169_);
v_unused_170_ = lean_ctor_get(v_a_107_, 0);
lean_dec(v_unused_170_);
v___x_149_ = v_a_107_;
v_isShared_150_ = v_isSharedCheck_163_;
goto v_resetjp_148_;
}
else
{
lean_dec(v_a_107_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_163_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
uint64_t v___x_151_; uint64_t v___x_152_; lean_object* v___f_153_; uint8_t v___x_154_; uint64_t v___x_155_; uint64_t v___x_156_; uint64_t v_key_157_; lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_151_ = 2ULL;
v___x_152_ = lean_uint64_shift_right(v___x_147_, v___x_151_);
v___f_153_ = ((lean_object*)(l_Lean_Meta_getExpectedNumArgsAux___closed__0));
v___x_154_ = 0;
v___x_155_ = lean_uint64_shift_left(v___x_152_, v___x_151_);
v___x_156_ = lean_uint64_once(&l_Lean_Meta_getExpectedNumArgsAux___closed__1, &l_Lean_Meta_getExpectedNumArgsAux___closed__1_once, _init_l_Lean_Meta_getExpectedNumArgsAux___closed__1);
v_key_157_ = lean_uint64_lor(v___x_155_, v___x_156_);
v___x_158_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_158_, 0, v_config_146_);
lean_ctor_set_uint64(v___x_158_, sizeof(void*)*1, v_key_157_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 0, v___x_158_);
v___x_160_ = v___x_149_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_158_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_zetaDeltaSet_135_);
lean_ctor_set(v_reuseFailAlloc_162_, 2, v_lctx_136_);
lean_ctor_set(v_reuseFailAlloc_162_, 3, v_localInstances_137_);
lean_ctor_set(v_reuseFailAlloc_162_, 4, v_defEqCtx_x3f_138_);
lean_ctor_set(v_reuseFailAlloc_162_, 5, v_synthPendingDepth_139_);
lean_ctor_set(v_reuseFailAlloc_162_, 6, v_canUnfold_x3f_140_);
lean_ctor_set_uint8(v_reuseFailAlloc_162_, sizeof(void*)*7, v_trackZetaDelta_134_);
lean_ctor_set_uint8(v_reuseFailAlloc_162_, sizeof(void*)*7 + 1, v_univApprox_141_);
lean_ctor_set_uint8(v_reuseFailAlloc_162_, sizeof(void*)*7 + 2, v_inTypeClassResolution_142_);
lean_ctor_set_uint8(v_reuseFailAlloc_162_, sizeof(void*)*7 + 3, v_cacheInferType_143_);
v___x_160_ = v_reuseFailAlloc_162_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_161_; 
v___x_161_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_e_106_, v___f_153_, v___x_154_, v___x_154_, v___x_160_, v_a_108_, v_a_109_, v_a_110_);
return v___x_161_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___boxed(lean_object* v_e_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Meta_getExpectedNumArgsAux(v_e_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs(lean_object* v_e_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = l_Lean_Meta_getExpectedNumArgsAux(v_e_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_);
if (lean_obj_tag(v___x_186_) == 0)
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_195_; 
v_a_187_ = lean_ctor_get(v___x_186_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_186_);
if (v_isSharedCheck_195_ == 0)
{
v___x_189_ = v___x_186_;
v_isShared_190_ = v_isSharedCheck_195_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_186_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_195_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v_fst_191_; lean_object* v___x_193_; 
v_fst_191_ = lean_ctor_get(v_a_187_, 0);
lean_inc(v_fst_191_);
lean_dec(v_a_187_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 0, v_fst_191_);
v___x_193_ = v___x_189_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_fst_191_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
v_a_196_ = lean_ctor_get(v___x_186_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_186_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_186_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_186_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs___boxed(lean_object* v_e_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Meta_getExpectedNumArgs(v_e_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_);
return v_res_210_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0));
v___x_213_ = l_Lean_stringToMessageData(v___x_212_);
return v___x_213_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_215_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2));
v___x_216_ = l_Lean_stringToMessageData(v___x_215_);
return v___x_216_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4));
v___x_219_ = l_Lean_stringToMessageData(v___x_218_);
return v___x_219_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7));
v___x_224_ = l_Lean_MessageData_ofFormat(v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(lean_object* v___y_227_, lean_object* v_targetType_228_, lean_object* v___y_229_, lean_object* v_term_x3f_230_, lean_object* v_conclusionType_x3f_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v___x_237_; 
lean_inc(v___y_235_);
lean_inc_ref(v___y_234_);
lean_inc(v___y_233_);
lean_inc_ref(v___y_232_);
v___x_237_ = l_Lean_Meta_addPPExplicitToExposeDiff(v___y_227_, v_targetType_228_, v___y_232_, v___y_233_, v___y_234_, v___y_235_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_279_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_279_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_279_ == 0)
{
v___x_240_ = v___x_237_;
v_isShared_241_ = v_isSharedCheck_279_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_237_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_279_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v_fst_242_; lean_object* v_snd_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_278_; 
v_fst_242_ = lean_ctor_get(v_a_238_, 0);
v_snd_243_ = lean_ctor_get(v_a_238_, 1);
v_isSharedCheck_278_ = !lean_is_exclusive(v_a_238_);
if (v_isSharedCheck_278_ == 0)
{
v___x_245_ = v_a_238_;
v_isShared_246_ = v_isSharedCheck_278_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_snd_243_);
lean_inc(v_fst_242_);
lean_dec(v_a_238_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_278_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___y_250_; lean_object* v___y_266_; 
if (lean_obj_tag(v_conclusionType_x3f_231_) == 0)
{
lean_object* v___x_276_; 
v___x_276_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9));
v___y_266_ = v___x_276_;
goto v___jp_265_;
}
else
{
lean_object* v___x_277_; 
v___x_277_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10));
v___y_266_ = v___x_277_;
goto v___jp_265_;
}
v___jp_247_:
{
lean_object* v___x_252_; 
if (v_isShared_246_ == 0)
{
lean_ctor_set_tag(v___x_245_, 7);
lean_ctor_set(v___x_245_, 1, v___y_250_);
lean_ctor_set(v___x_245_, 0, v___y_248_);
v___x_252_ = v___x_245_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___y_248_);
lean_ctor_set(v_reuseFailAlloc_264_, 1, v___y_250_);
v___x_252_ = v_reuseFailAlloc_264_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_253_ = l_Lean_indentExpr(v_fst_242_);
v___x_254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_252_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1);
v___x_256_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = l_Lean_indentExpr(v_snd_243_);
v___x_258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_256_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v___y_229_);
v___x_260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_259_);
lean_ctor_set(v___x_260_, 1, v___y_249_);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 0, v___x_260_);
v___x_262_ = v___x_240_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
v___jp_265_:
{
lean_object* v___x_267_; 
lean_inc(v_snd_243_);
lean_inc(v_fst_242_);
v___x_267_ = l_Lean_Meta_mkUnfoldAxiomsNote(v_fst_242_, v_snd_243_, v___y_232_, v___y_233_, v___y_234_, v___y_235_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_a_268_);
lean_dec_ref(v___x_267_);
v___x_269_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3);
v___x_270_ = l_Lean_stringToMessageData(v___y_266_);
v___x_271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_271_, 0, v___x_269_);
lean_ctor_set(v___x_271_, 1, v___x_270_);
v___x_272_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5);
v___x_273_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_271_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
if (lean_obj_tag(v_term_x3f_230_) == 0)
{
lean_object* v___x_274_; 
v___x_274_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8);
v___y_248_ = v___x_273_;
v___y_249_ = v_a_268_;
v___y_250_ = v___x_274_;
goto v___jp_247_;
}
else
{
lean_object* v_val_275_; 
v_val_275_ = lean_ctor_get(v_term_x3f_230_, 0);
lean_inc(v_val_275_);
lean_dec_ref(v_term_x3f_230_);
v___y_248_ = v___x_273_;
v___y_249_ = v_a_268_;
v___y_250_ = v_val_275_;
goto v___jp_247_;
}
}
else
{
lean_dec_ref(v___y_266_);
lean_del_object(v___x_245_);
lean_dec(v_snd_243_);
lean_dec(v_fst_242_);
lean_del_object(v___x_240_);
lean_dec(v_term_x3f_230_);
lean_dec_ref(v___y_229_);
return v___x_267_;
}
}
}
}
}
else
{
lean_object* v_a_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_287_; 
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v_term_x3f_230_);
lean_dec_ref(v___y_229_);
v_a_280_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_287_ == 0)
{
v___x_282_ = v___x_237_;
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_a_280_);
lean_dec(v___x_237_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_287_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_285_; 
if (v_isShared_283_ == 0)
{
v___x_285_ = v___x_282_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_a_280_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed(lean_object* v___y_288_, lean_object* v_targetType_289_, lean_object* v___y_290_, lean_object* v_term_x3f_291_, lean_object* v_conclusionType_x3f_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(v___y_288_, v_targetType_289_, v___y_290_, v_term_x3f_291_, v_conclusionType_x3f_292_, v___y_293_, v___y_294_, v___y_295_, v___y_296_);
lean_dec(v_conclusionType_x3f_292_);
return v_res_298_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2));
v___x_304_ = l_Lean_stringToMessageData(v___x_303_);
return v___x_304_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4));
v___x_307_ = l_Lean_stringToMessageData(v___x_306_);
return v___x_307_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6));
v___x_310_ = l_Lean_stringToMessageData(v___x_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(lean_object* v_mvarId_311_, lean_object* v_eType_312_, lean_object* v_conclusionType_x3f_313_, lean_object* v_targetType_314_, lean_object* v_term_x3f_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
lean_object* v___x_321_; lean_object* v___y_323_; lean_object* v___y_324_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v___y_336_; lean_object* v___y_344_; 
v___x_321_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1));
if (lean_obj_tag(v_conclusionType_x3f_313_) == 0)
{
lean_inc_ref(v_eType_312_);
v___y_344_ = v_eType_312_;
goto v___jp_343_;
}
else
{
lean_object* v_val_349_; 
v_val_349_ = lean_ctor_get(v_conclusionType_x3f_313_, 0);
lean_inc(v_val_349_);
v___y_344_ = v_val_349_;
goto v___jp_343_;
}
v___jp_322_:
{
lean_object* v___f_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
lean_inc_ref(v_targetType_314_);
v___f_325_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_325_, 0, v___y_323_);
lean_closure_set(v___f_325_, 1, v_targetType_314_);
lean_closure_set(v___f_325_, 2, v___y_324_);
lean_closure_set(v___f_325_, 3, v_term_x3f_315_);
lean_closure_set(v___f_325_, 4, v_conclusionType_x3f_313_);
v___x_326_ = lean_unsigned_to_nat(2u);
v___x_327_ = lean_mk_empty_array_with_capacity(v___x_326_);
v___x_328_ = lean_array_push(v___x_327_, v_eType_312_);
v___x_329_ = lean_array_push(v___x_328_, v_targetType_314_);
v___x_330_ = l_Lean_MessageData_ofLazyM(v___f_325_, v___x_329_);
v___x_331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
v___x_332_ = l_Lean_Meta_throwTacticEx___redArg(v___x_321_, v_mvarId_311_, v___x_331_, v_a_316_, v_a_317_, v_a_318_, v_a_319_);
return v___x_332_;
}
v___jp_333_:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_337_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_337_, 0, v___y_335_);
lean_ctor_set(v___x_337_, 1, v___y_336_);
v___x_338_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3);
v___x_339_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_339_, 0, v___x_337_);
lean_ctor_set(v___x_339_, 1, v___x_338_);
lean_inc_ref(v_eType_312_);
v___x_340_ = l_Lean_indentExpr(v_eType_312_);
v___x_341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_339_);
lean_ctor_set(v___x_341_, 1, v___x_340_);
v___x_342_ = l_Lean_MessageData_note(v___x_341_);
v___y_323_ = v___y_334_;
v___y_324_ = v___x_342_;
goto v___jp_322_;
}
v___jp_343_:
{
if (lean_obj_tag(v_conclusionType_x3f_313_) == 0)
{
lean_object* v___x_345_; 
v___x_345_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5);
v___y_323_ = v___y_344_;
v___y_324_ = v___x_345_;
goto v___jp_322_;
}
else
{
lean_object* v___x_346_; 
v___x_346_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7);
if (lean_obj_tag(v_term_x3f_315_) == 0)
{
lean_object* v___x_347_; 
v___x_347_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8);
v___y_334_ = v___y_344_;
v___y_335_ = v___x_346_;
v___y_336_ = v___x_347_;
goto v___jp_333_;
}
else
{
lean_object* v_val_348_; 
v_val_348_ = lean_ctor_get(v_term_x3f_315_, 0);
lean_inc(v_val_348_);
v___y_334_ = v___y_344_;
v___y_335_ = v___x_346_;
v___y_336_ = v_val_348_;
goto v___jp_333_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___boxed(lean_object* v_mvarId_350_, lean_object* v_eType_351_, lean_object* v_conclusionType_x3f_352_, lean_object* v_targetType_353_, lean_object* v_term_x3f_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_350_, v_eType_351_, v_conclusionType_x3f_352_, v_targetType_353_, v_term_x3f_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
lean_dec(v_a_356_);
lean_dec_ref(v_a_355_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(lean_object* v_00_u03b1_361_, lean_object* v_mvarId_362_, lean_object* v_eType_363_, lean_object* v_conclusionType_x3f_364_, lean_object* v_targetType_365_, lean_object* v_term_x3f_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_362_, v_eType_363_, v_conclusionType_x3f_364_, v_targetType_365_, v_term_x3f_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___boxed(lean_object* v_00_u03b1_373_, lean_object* v_mvarId_374_, lean_object* v_eType_375_, lean_object* v_conclusionType_x3f_376_, lean_object* v_targetType_377_, lean_object* v_term_x3f_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(v_00_u03b1_373_, v_mvarId_374_, v_eType_375_, v_conclusionType_x3f_376_, v_targetType_377_, v_term_x3f_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(lean_object* v_a_385_, lean_object* v_snd_386_, lean_object* v_fst_387_, lean_object* v_____r_388_, uint8_t v_progressAfterEx_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_395_, 0, v_a_385_);
v___x_396_ = lean_box(v_progressAfterEx_389_);
v___x_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
lean_ctor_set(v___x_397_, 1, v_snd_386_);
v___x_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_398_, 0, v_fst_387_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
v___x_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_395_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
v___x_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0___boxed(lean_object* v_a_401_, lean_object* v_snd_402_, lean_object* v_fst_403_, lean_object* v_____r_404_, lean_object* v_progressAfterEx_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
uint8_t v_progressAfterEx_boxed_411_; lean_object* v_res_412_; 
v_progressAfterEx_boxed_411_ = lean_unbox(v_progressAfterEx_405_);
v_res_412_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_401_, v_snd_402_, v_fst_403_, v_____r_404_, v_progressAfterEx_boxed_411_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
return v_res_412_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2(void){
_start:
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1));
v___x_417_ = l_Lean_MessageData_ofFormat(v___x_416_);
return v___x_417_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2);
v___x_419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_419_, 0, v___x_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(uint8_t v_allowSynthFailures_420_, lean_object* v_tacticName_421_, lean_object* v_mvarId_422_, lean_object* v_as_423_, size_t v_sz_424_, size_t v_i_425_, lean_object* v_b_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_a_433_; lean_object* v_fst_438_; lean_object* v_fst_439_; lean_object* v_snd_440_; uint8_t v___x_443_; 
v___x_443_ = lean_usize_dec_lt(v_i_425_, v_sz_424_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; 
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v_mvarId_422_);
lean_dec(v_tacticName_421_);
v___x_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_444_, 0, v_b_426_);
return v___x_444_;
}
else
{
lean_object* v_a_445_; lean_object* v___x_446_; 
v_a_445_ = lean_array_uget_borrowed(v_as_423_, v_i_425_);
lean_inc(v___y_430_);
lean_inc_ref(v___y_429_);
lean_inc(v___y_428_);
lean_inc_ref(v___y_427_);
lean_inc(v_a_445_);
v___x_446_ = lean_infer_type(v_a_445_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v_snd_447_; lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_541_; 
v_snd_447_ = lean_ctor_get(v_b_426_, 1);
lean_inc(v_snd_447_);
v_a_448_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_541_ == 0)
{
v___x_450_ = v___x_446_;
v_isShared_451_ = v_isSharedCheck_541_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_446_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_541_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v_fst_452_; lean_object* v_fst_453_; lean_object* v_snd_454_; lean_object* v___y_456_; uint8_t v___y_457_; lean_object* v_a_464_; lean_object* v___y_468_; lean_object* v___x_529_; lean_object* v___x_530_; 
v_fst_452_ = lean_ctor_get(v_b_426_, 0);
lean_inc(v_fst_452_);
lean_dec_ref(v_b_426_);
v_fst_453_ = lean_ctor_get(v_snd_447_, 0);
lean_inc(v_fst_453_);
v_snd_454_ = lean_ctor_get(v_snd_447_, 1);
lean_inc(v_snd_454_);
lean_dec(v_snd_447_);
v___x_529_ = lean_box(0);
lean_inc(v___y_430_);
lean_inc_ref(v___y_429_);
lean_inc(v___y_428_);
lean_inc_ref(v___y_427_);
v___x_530_ = l_Lean_Meta_synthInstance(v_a_448_, v___x_529_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_532_; lean_object* v___x_533_; uint8_t v___x_534_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_531_);
lean_dec_ref(v___x_530_);
v___x_532_ = lean_array_get_size(v_snd_454_);
v___x_533_ = lean_unsigned_to_nat(0u);
v___x_534_ = lean_nat_dec_eq(v___x_532_, v___x_533_);
if (v___x_534_ == 0)
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_box(0);
lean_inc(v_snd_454_);
v___x_536_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_531_, v_snd_454_, v_fst_452_, v___x_535_, v___x_443_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
v___y_468_ = v___x_536_;
goto v___jp_467_;
}
else
{
lean_object* v___x_537_; uint8_t v___x_538_; lean_object* v___x_539_; 
v___x_537_ = lean_box(0);
v___x_538_ = lean_unbox(v_fst_453_);
lean_inc(v_snd_454_);
v___x_539_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_531_, v_snd_454_, v_fst_452_, v___x_537_, v___x_538_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
v___y_468_ = v___x_539_;
goto v___jp_467_;
}
}
else
{
lean_object* v_a_540_; 
lean_dec(v_fst_452_);
v_a_540_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_540_);
lean_dec_ref(v___x_530_);
v_a_464_ = v_a_540_;
goto v___jp_463_;
}
v___jp_455_:
{
if (v___y_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; 
lean_del_object(v___x_450_);
v___x_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_458_, 0, v___y_456_);
lean_inc(v_a_445_);
v___x_459_ = lean_array_push(v_snd_454_, v_a_445_);
v_fst_438_ = v___x_458_;
v_fst_439_ = v_fst_453_;
v_snd_440_ = v___x_459_;
goto v___jp_437_;
}
else
{
lean_object* v___x_461_; 
lean_dec(v_snd_454_);
lean_dec(v_fst_453_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v_mvarId_422_);
lean_dec(v_tacticName_421_);
if (v_isShared_451_ == 0)
{
lean_ctor_set_tag(v___x_450_, 1);
lean_ctor_set(v___x_450_, 0, v___y_456_);
v___x_461_ = v___x_450_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___y_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
v___jp_463_:
{
uint8_t v___x_465_; 
v___x_465_ = l_Lean_Exception_isInterrupt(v_a_464_);
if (v___x_465_ == 0)
{
uint8_t v___x_466_; 
lean_inc_ref(v_a_464_);
v___x_466_ = l_Lean_Exception_isRuntime(v_a_464_);
v___y_456_ = v_a_464_;
v___y_457_ = v___x_466_;
goto v___jp_455_;
}
else
{
v___y_456_ = v_a_464_;
v___y_457_ = v___x_465_;
goto v___jp_455_;
}
}
v___jp_467_:
{
if (lean_obj_tag(v___y_468_) == 0)
{
lean_object* v_a_469_; lean_object* v_snd_470_; lean_object* v_snd_471_; lean_object* v_fst_472_; 
lean_dec(v_snd_454_);
lean_dec(v_fst_453_);
lean_del_object(v___x_450_);
v_a_469_ = lean_ctor_get(v___y_468_, 0);
lean_inc(v_a_469_);
lean_dec_ref(v___y_468_);
v_snd_470_ = lean_ctor_get(v_a_469_, 1);
lean_inc(v_snd_470_);
v_snd_471_ = lean_ctor_get(v_snd_470_, 1);
lean_inc(v_snd_471_);
v_fst_472_ = lean_ctor_get(v_a_469_, 0);
lean_inc(v_fst_472_);
lean_dec(v_a_469_);
if (lean_obj_tag(v_fst_472_) == 1)
{
lean_object* v_fst_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_523_; 
v_fst_473_ = lean_ctor_get(v_snd_470_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_snd_470_);
if (v_isSharedCheck_523_ == 0)
{
lean_object* v_unused_524_; 
v_unused_524_ = lean_ctor_get(v_snd_470_, 1);
lean_dec(v_unused_524_);
v___x_475_ = v_snd_470_;
v_isShared_476_ = v_isSharedCheck_523_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_fst_473_);
lean_dec(v_snd_470_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_523_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v_fst_477_; lean_object* v_snd_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_522_; 
v_fst_477_ = lean_ctor_get(v_snd_471_, 0);
v_snd_478_ = lean_ctor_get(v_snd_471_, 1);
v_isSharedCheck_522_ = !lean_is_exclusive(v_snd_471_);
if (v_isSharedCheck_522_ == 0)
{
v___x_480_ = v_snd_471_;
v_isShared_481_ = v_isSharedCheck_522_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_snd_478_);
lean_inc(v_fst_477_);
lean_dec(v_snd_471_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_522_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v_val_482_; lean_object* v___x_483_; 
v_val_482_ = lean_ctor_get(v_fst_472_, 0);
lean_inc(v_val_482_);
lean_dec_ref(v_fst_472_);
lean_inc(v___y_430_);
lean_inc_ref(v___y_429_);
lean_inc(v___y_428_);
lean_inc_ref(v___y_427_);
lean_inc(v_a_445_);
v___x_483_ = l_Lean_Meta_isExprDefEq(v_a_445_, v_val_482_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v_a_484_; uint8_t v___x_485_; 
v_a_484_ = lean_ctor_get(v___x_483_, 0);
lean_inc(v_a_484_);
lean_dec_ref(v___x_483_);
v___x_485_ = lean_unbox(v_a_484_);
lean_dec(v_a_484_);
if (v___x_485_ == 0)
{
if (v_allowSynthFailures_420_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3);
lean_inc(v_mvarId_422_);
lean_inc(v_tacticName_421_);
v___x_487_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_421_, v_mvarId_422_, v___x_486_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v___x_489_; 
lean_dec_ref(v___x_487_);
if (v_isShared_481_ == 0)
{
v___x_489_ = v___x_480_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_fst_477_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_snd_478_);
v___x_489_ = v_reuseFailAlloc_493_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
lean_object* v___x_491_; 
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v___x_489_);
v___x_491_ = v___x_475_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_fst_473_);
lean_ctor_set(v_reuseFailAlloc_492_, 1, v___x_489_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
v_a_433_ = v___x_491_;
goto v___jp_432_;
}
}
}
else
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
lean_del_object(v___x_480_);
lean_dec(v_snd_478_);
lean_dec(v_fst_477_);
lean_del_object(v___x_475_);
lean_dec(v_fst_473_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v_mvarId_422_);
lean_dec(v_tacticName_421_);
v_a_494_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___x_487_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v___x_487_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
else
{
lean_object* v___x_503_; 
if (v_isShared_481_ == 0)
{
v___x_503_ = v___x_480_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_fst_477_);
lean_ctor_set(v_reuseFailAlloc_507_, 1, v_snd_478_);
v___x_503_ = v_reuseFailAlloc_507_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
lean_object* v___x_505_; 
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v___x_503_);
v___x_505_ = v___x_475_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v_fst_473_);
lean_ctor_set(v_reuseFailAlloc_506_, 1, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
v_a_433_ = v___x_505_;
goto v___jp_432_;
}
}
}
}
else
{
lean_object* v___x_509_; 
if (v_isShared_481_ == 0)
{
v___x_509_ = v___x_480_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_fst_477_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_snd_478_);
v___x_509_ = v_reuseFailAlloc_513_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
lean_object* v___x_511_; 
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v___x_509_);
v___x_511_ = v___x_475_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_fst_473_);
lean_ctor_set(v_reuseFailAlloc_512_, 1, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
v_a_433_ = v___x_511_;
goto v___jp_432_;
}
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_del_object(v___x_480_);
lean_dec(v_snd_478_);
lean_dec(v_fst_477_);
lean_del_object(v___x_475_);
lean_dec(v_fst_473_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v_mvarId_422_);
lean_dec(v_tacticName_421_);
v_a_514_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_483_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_483_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
}
}
else
{
lean_object* v_fst_525_; lean_object* v_fst_526_; lean_object* v_snd_527_; 
lean_dec(v_fst_472_);
v_fst_525_ = lean_ctor_get(v_snd_470_, 0);
lean_inc(v_fst_525_);
lean_dec(v_snd_470_);
v_fst_526_ = lean_ctor_get(v_snd_471_, 0);
lean_inc(v_fst_526_);
v_snd_527_ = lean_ctor_get(v_snd_471_, 1);
lean_inc(v_snd_527_);
lean_dec(v_snd_471_);
v_fst_438_ = v_fst_525_;
v_fst_439_ = v_fst_526_;
v_snd_440_ = v_snd_527_;
goto v___jp_437_;
}
}
else
{
lean_object* v_a_528_; 
v_a_528_ = lean_ctor_get(v___y_468_, 0);
lean_inc(v_a_528_);
lean_dec_ref(v___y_468_);
v_a_464_ = v_a_528_;
goto v___jp_463_;
}
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec_ref(v_b_426_);
lean_dec(v_mvarId_422_);
lean_dec(v_tacticName_421_);
v_a_542_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_446_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_446_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
v___jp_432_:
{
size_t v___x_434_; size_t v___x_435_; 
v___x_434_ = ((size_t)1ULL);
v___x_435_ = lean_usize_add(v_i_425_, v___x_434_);
v_i_425_ = v___x_435_;
v_b_426_ = v_a_433_;
goto _start;
}
v___jp_437_:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_441_, 0, v_fst_439_);
lean_ctor_set(v___x_441_, 1, v_snd_440_);
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v_fst_438_);
lean_ctor_set(v___x_442_, 1, v___x_441_);
v_a_433_ = v___x_442_;
goto v___jp_432_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___boxed(lean_object* v_allowSynthFailures_550_, lean_object* v_tacticName_551_, lean_object* v_mvarId_552_, lean_object* v_as_553_, lean_object* v_sz_554_, lean_object* v_i_555_, lean_object* v_b_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
uint8_t v_allowSynthFailures_boxed_562_; size_t v_sz_boxed_563_; size_t v_i_boxed_564_; lean_object* v_res_565_; 
v_allowSynthFailures_boxed_562_ = lean_unbox(v_allowSynthFailures_550_);
v_sz_boxed_563_ = lean_unbox_usize(v_sz_554_);
lean_dec(v_sz_554_);
v_i_boxed_564_ = lean_unbox_usize(v_i_555_);
lean_dec(v_i_555_);
v_res_565_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(v_allowSynthFailures_boxed_562_, v_tacticName_551_, v_mvarId_552_, v_as_553_, v_sz_boxed_563_, v_i_boxed_564_, v_b_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
lean_dec_ref(v_as_553_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(lean_object* v_tacticName_575_, lean_object* v_mvarId_576_, uint8_t v_allowSynthFailures_577_, lean_object* v_mvars_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v_postponed_584_; lean_object* v___x_585_; size_t v_sz_586_; size_t v___x_587_; lean_object* v___x_588_; 
v_postponed_584_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0));
v___x_585_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2));
v_sz_586_ = lean_array_size(v_mvars_578_);
v___x_587_ = ((size_t)0ULL);
v___x_588_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(v_allowSynthFailures_577_, v_tacticName_575_, v_mvarId_576_, v_mvars_578_, v_sz_586_, v___x_587_, v___x_585_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_611_; 
v_a_589_ = lean_ctor_get(v___x_588_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_611_ == 0)
{
v___x_591_ = v___x_588_;
v_isShared_592_ = v_isSharedCheck_611_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_588_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_611_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v_fst_593_; 
v_fst_593_ = lean_ctor_get(v_a_589_, 0);
lean_inc(v_fst_593_);
if (lean_obj_tag(v_fst_593_) == 1)
{
lean_object* v_snd_594_; lean_object* v_fst_595_; uint8_t v___x_596_; 
v_snd_594_ = lean_ctor_get(v_a_589_, 1);
lean_inc(v_snd_594_);
lean_dec(v_a_589_);
v_fst_595_ = lean_ctor_get(v_snd_594_, 0);
v___x_596_ = lean_unbox(v_fst_595_);
if (v___x_596_ == 0)
{
lean_dec(v_snd_594_);
if (v_allowSynthFailures_577_ == 0)
{
lean_object* v_val_597_; lean_object* v___x_599_; 
v_val_597_ = lean_ctor_get(v_fst_593_, 0);
lean_inc(v_val_597_);
lean_dec_ref(v_fst_593_);
if (v_isShared_592_ == 0)
{
lean_ctor_set_tag(v___x_591_, 1);
lean_ctor_set(v___x_591_, 0, v_val_597_);
v___x_599_ = v___x_591_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_val_597_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
else
{
lean_object* v___x_602_; 
lean_dec_ref(v_fst_593_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v_postponed_584_);
v___x_602_ = v___x_591_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_postponed_584_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
else
{
lean_object* v_snd_604_; lean_object* v___x_606_; 
lean_dec_ref(v_fst_593_);
v_snd_604_ = lean_ctor_get(v_snd_594_, 1);
lean_inc(v_snd_604_);
lean_dec(v_snd_594_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v_snd_604_);
v___x_606_ = v___x_591_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_snd_604_);
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
lean_object* v___x_609_; 
lean_dec(v_fst_593_);
lean_dec(v_a_589_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v_postponed_584_);
v___x_609_ = v___x_591_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_postponed_584_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
else
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
v_a_612_ = lean_ctor_get(v___x_588_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___x_588_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_588_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___boxed(lean_object* v_tacticName_620_, lean_object* v_mvarId_621_, lean_object* v_allowSynthFailures_622_, lean_object* v_mvars_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_){
_start:
{
uint8_t v_allowSynthFailures_boxed_629_; lean_object* v_res_630_; 
v_allowSynthFailures_boxed_629_ = lean_unbox(v_allowSynthFailures_622_);
v_res_630_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(v_tacticName_620_, v_mvarId_621_, v_allowSynthFailures_boxed_629_, v_mvars_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_);
lean_dec_ref(v_mvars_623_);
return v_res_630_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_keys_631_, lean_object* v_i_632_, lean_object* v_k_633_){
_start:
{
lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_634_ = lean_array_get_size(v_keys_631_);
v___x_635_ = lean_nat_dec_lt(v_i_632_, v___x_634_);
if (v___x_635_ == 0)
{
lean_dec(v_i_632_);
return v___x_635_;
}
else
{
lean_object* v_k_x27_636_; uint8_t v___x_637_; 
v_k_x27_636_ = lean_array_fget_borrowed(v_keys_631_, v_i_632_);
v___x_637_ = l_Lean_instBEqMVarId_beq(v_k_633_, v_k_x27_636_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_unsigned_to_nat(1u);
v___x_639_ = lean_nat_add(v_i_632_, v___x_638_);
lean_dec(v_i_632_);
v_i_632_ = v___x_639_;
goto _start;
}
else
{
lean_dec(v_i_632_);
return v___x_637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_keys_641_, lean_object* v_i_642_, lean_object* v_k_643_){
_start:
{
uint8_t v_res_644_; lean_object* v_r_645_; 
v_res_644_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_641_, v_i_642_, v_k_643_);
lean_dec(v_k_643_);
lean_dec_ref(v_keys_641_);
v_r_645_ = lean_box(v_res_644_);
return v_r_645_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_646_; size_t v___x_647_; size_t v___x_648_; 
v___x_646_ = ((size_t)5ULL);
v___x_647_ = ((size_t)1ULL);
v___x_648_ = lean_usize_shift_left(v___x_647_, v___x_646_);
return v___x_648_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_649_; size_t v___x_650_; size_t v___x_651_; 
v___x_649_ = ((size_t)1ULL);
v___x_650_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_651_ = lean_usize_sub(v___x_650_, v___x_649_);
return v___x_651_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(lean_object* v_x_652_, size_t v_x_653_, lean_object* v_x_654_){
_start:
{
if (lean_obj_tag(v_x_652_) == 0)
{
lean_object* v_es_655_; lean_object* v___x_656_; size_t v___x_657_; size_t v___x_658_; size_t v___x_659_; lean_object* v_j_660_; lean_object* v___x_661_; 
v_es_655_ = lean_ctor_get(v_x_652_, 0);
lean_inc_ref(v_es_655_);
lean_dec_ref(v_x_652_);
v___x_656_ = lean_box(2);
v___x_657_ = ((size_t)5ULL);
v___x_658_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_659_ = lean_usize_land(v_x_653_, v___x_658_);
v_j_660_ = lean_usize_to_nat(v___x_659_);
v___x_661_ = lean_array_get(v___x_656_, v_es_655_, v_j_660_);
lean_dec(v_j_660_);
lean_dec_ref(v_es_655_);
switch(lean_obj_tag(v___x_661_))
{
case 0:
{
lean_object* v_key_662_; uint8_t v___x_663_; 
v_key_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_key_662_);
lean_dec_ref(v___x_661_);
v___x_663_ = l_Lean_instBEqMVarId_beq(v_x_654_, v_key_662_);
lean_dec(v_key_662_);
return v___x_663_;
}
case 1:
{
lean_object* v_node_664_; size_t v___x_665_; 
v_node_664_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_node_664_);
lean_dec_ref(v___x_661_);
v___x_665_ = lean_usize_shift_right(v_x_653_, v___x_657_);
v_x_652_ = v_node_664_;
v_x_653_ = v___x_665_;
goto _start;
}
default: 
{
uint8_t v___x_667_; 
v___x_667_ = 0;
return v___x_667_;
}
}
}
else
{
lean_object* v_ks_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v_ks_668_ = lean_ctor_get(v_x_652_, 0);
lean_inc_ref(v_ks_668_);
lean_dec_ref(v_x_652_);
v___x_669_ = lean_unsigned_to_nat(0u);
v___x_670_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_ks_668_, v___x_669_, v_x_654_);
lean_dec_ref(v_ks_668_);
return v___x_670_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_671_, lean_object* v_x_672_, lean_object* v_x_673_){
_start:
{
size_t v_x_2899__boxed_674_; uint8_t v_res_675_; lean_object* v_r_676_; 
v_x_2899__boxed_674_ = lean_unbox_usize(v_x_672_);
lean_dec(v_x_672_);
v_res_675_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_671_, v_x_2899__boxed_674_, v_x_673_);
lean_dec(v_x_673_);
v_r_676_ = lean_box(v_res_675_);
return v_r_676_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(lean_object* v_x_677_, lean_object* v_x_678_){
_start:
{
uint64_t v___x_679_; size_t v___x_680_; uint8_t v___x_681_; 
v___x_679_ = l_Lean_instHashableMVarId_hash(v_x_678_);
v___x_680_ = lean_uint64_to_usize(v___x_679_);
v___x_681_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_677_, v___x_680_, v_x_678_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg___boxed(lean_object* v_x_682_, lean_object* v_x_683_){
_start:
{
uint8_t v_res_684_; lean_object* v_r_685_; 
v_res_684_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_x_682_, v_x_683_);
lean_dec(v_x_683_);
v_r_685_ = lean_box(v_res_684_);
return v_r_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(lean_object* v_mvarId_686_, lean_object* v___y_687_){
_start:
{
lean_object* v___x_689_; lean_object* v_mctx_690_; lean_object* v_eAssignment_691_; uint8_t v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_689_ = lean_st_ref_get(v___y_687_);
v_mctx_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc_ref(v_mctx_690_);
lean_dec(v___x_689_);
v_eAssignment_691_ = lean_ctor_get(v_mctx_690_, 7);
lean_inc_ref(v_eAssignment_691_);
lean_dec_ref(v_mctx_690_);
v___x_692_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_eAssignment_691_, v_mvarId_686_);
v___x_693_ = lean_box(v___x_692_);
v___x_694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg___boxed(lean_object* v_mvarId_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v_mvarId_695_, v___y_696_);
lean_dec(v___y_696_);
lean_dec(v_mvarId_695_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(uint8_t v_synthAssignedInstances_699_, lean_object* v_as_700_, size_t v_sz_701_, size_t v_i_702_, lean_object* v_b_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
lean_object* v_a_710_; uint8_t v___x_714_; 
v___x_714_ = lean_usize_dec_lt(v_i_702_, v_sz_701_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; 
v___x_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_715_, 0, v_b_703_);
return v___x_715_;
}
else
{
lean_object* v_snd_716_; lean_object* v_fst_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_767_; 
v_snd_716_ = lean_ctor_get(v_b_703_, 1);
v_fst_717_ = lean_ctor_get(v_b_703_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v_b_703_);
if (v_isSharedCheck_767_ == 0)
{
v___x_719_ = v_b_703_;
v_isShared_720_ = v_isSharedCheck_767_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_snd_716_);
lean_inc(v_fst_717_);
lean_dec(v_b_703_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_767_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v_array_721_; lean_object* v_start_722_; lean_object* v_stop_723_; uint8_t v___x_724_; 
v_array_721_ = lean_ctor_get(v_snd_716_, 0);
v_start_722_ = lean_ctor_get(v_snd_716_, 1);
v_stop_723_ = lean_ctor_get(v_snd_716_, 2);
v___x_724_ = lean_nat_dec_lt(v_start_722_, v_stop_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_726_; 
if (v_isShared_720_ == 0)
{
v___x_726_ = v___x_719_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_fst_717_);
lean_ctor_set(v_reuseFailAlloc_728_, 1, v_snd_716_);
v___x_726_ = v_reuseFailAlloc_728_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_727_; 
v___x_727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
return v___x_727_;
}
}
else
{
lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_763_; 
lean_inc(v_stop_723_);
lean_inc(v_start_722_);
lean_inc_ref(v_array_721_);
v_isSharedCheck_763_ = !lean_is_exclusive(v_snd_716_);
if (v_isSharedCheck_763_ == 0)
{
lean_object* v_unused_764_; lean_object* v_unused_765_; lean_object* v_unused_766_; 
v_unused_764_ = lean_ctor_get(v_snd_716_, 2);
lean_dec(v_unused_764_);
v_unused_765_ = lean_ctor_get(v_snd_716_, 1);
lean_dec(v_unused_765_);
v_unused_766_ = lean_ctor_get(v_snd_716_, 0);
lean_dec(v_unused_766_);
v___x_730_ = v_snd_716_;
v_isShared_731_ = v_isSharedCheck_763_;
goto v_resetjp_729_;
}
else
{
lean_dec(v_snd_716_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_763_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_736_; 
v___x_732_ = lean_array_fget(v_array_721_, v_start_722_);
v___x_733_ = lean_unsigned_to_nat(1u);
v___x_734_ = lean_nat_add(v_start_722_, v___x_733_);
lean_dec(v_start_722_);
if (v_isShared_731_ == 0)
{
lean_ctor_set(v___x_730_, 1, v___x_734_);
v___x_736_ = v___x_730_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_array_721_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v___x_734_);
lean_ctor_set(v_reuseFailAlloc_762_, 2, v_stop_723_);
v___x_736_ = v_reuseFailAlloc_762_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
uint8_t v___x_737_; uint8_t v___x_738_; 
v___x_737_ = lean_unbox(v___x_732_);
lean_dec(v___x_732_);
v___x_738_ = l_Lean_BinderInfo_isInstImplicit(v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_740_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 1, v___x_736_);
v___x_740_ = v___x_719_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_fst_717_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_736_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
v_a_710_ = v___x_740_;
goto v___jp_709_;
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v_a_742_ = lean_array_uget_borrowed(v_as_700_, v_i_702_);
v___x_743_ = l_Lean_Expr_mvarId_x21(v_a_742_);
v___x_744_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_743_, v___y_705_);
lean_dec(v___x_743_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref(v___x_744_);
if (v_synthAssignedInstances_699_ == 0)
{
uint8_t v___x_753_; 
v___x_753_ = lean_unbox(v_a_745_);
lean_dec(v_a_745_);
if (v___x_753_ == 0)
{
if (v___x_738_ == 0)
{
goto v___jp_746_;
}
else
{
lean_del_object(v___x_719_);
goto v___jp_750_;
}
}
else
{
goto v___jp_746_;
}
}
else
{
lean_dec(v_a_745_);
lean_del_object(v___x_719_);
goto v___jp_750_;
}
v___jp_746_:
{
lean_object* v___x_748_; 
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 1, v___x_736_);
v___x_748_ = v___x_719_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_fst_717_);
lean_ctor_set(v_reuseFailAlloc_749_, 1, v___x_736_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
v_a_710_ = v___x_748_;
goto v___jp_709_;
}
}
v___jp_750_:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
lean_inc(v_a_742_);
v___x_751_ = lean_array_push(v_fst_717_, v_a_742_);
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v___x_751_);
lean_ctor_set(v___x_752_, 1, v___x_736_);
v_a_710_ = v___x_752_;
goto v___jp_709_;
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec_ref(v___x_736_);
lean_del_object(v___x_719_);
lean_dec(v_fst_717_);
v_a_754_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_744_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_744_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
}
}
}
}
}
v___jp_709_:
{
size_t v___x_711_; size_t v___x_712_; 
v___x_711_ = ((size_t)1ULL);
v___x_712_ = lean_usize_add(v_i_702_, v___x_711_);
v_i_702_ = v___x_712_;
v_b_703_ = v_a_710_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1___boxed(lean_object* v_synthAssignedInstances_768_, lean_object* v_as_769_, lean_object* v_sz_770_, lean_object* v_i_771_, lean_object* v_b_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_778_; size_t v_sz_boxed_779_; size_t v_i_boxed_780_; lean_object* v_res_781_; 
v_synthAssignedInstances_boxed_778_ = lean_unbox(v_synthAssignedInstances_768_);
v_sz_boxed_779_ = lean_unbox_usize(v_sz_770_);
lean_dec(v_sz_770_);
v_i_boxed_780_ = lean_unbox_usize(v_i_771_);
lean_dec(v_i_771_);
v_res_781_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(v_synthAssignedInstances_boxed_778_, v_as_769_, v_sz_boxed_779_, v_i_boxed_780_, v_b_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec_ref(v_as_769_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2(lean_object* v_tacticName_782_, lean_object* v_mvarId_783_, uint8_t v_allowSynthFailures_784_, lean_object* v_b_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_791_ = lean_array_get_size(v_b_785_);
v___x_792_ = lean_unsigned_to_nat(0u);
v___x_793_ = lean_nat_dec_eq(v___x_791_, v___x_792_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; 
lean_inc(v___y_789_);
lean_inc_ref(v___y_788_);
lean_inc(v___y_787_);
lean_inc_ref(v___y_786_);
lean_inc(v_mvarId_783_);
lean_inc(v_tacticName_782_);
v___x_794_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(v_tacticName_782_, v_mvarId_783_, v_allowSynthFailures_784_, v_b_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
lean_dec_ref(v_b_785_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v_a_795_; 
v_a_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_795_);
lean_dec_ref(v___x_794_);
v_b_785_ = v_a_795_;
goto _start;
}
else
{
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v_mvarId_783_);
lean_dec(v_tacticName_782_);
return v___x_794_;
}
}
else
{
lean_object* v___x_797_; 
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v_mvarId_783_);
lean_dec(v_tacticName_782_);
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v_b_785_);
return v___x_797_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2___boxed(lean_object* v_tacticName_798_, lean_object* v_mvarId_799_, lean_object* v_allowSynthFailures_800_, lean_object* v_b_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
uint8_t v_allowSynthFailures_boxed_807_; lean_object* v_res_808_; 
v_allowSynthFailures_boxed_807_ = lean_unbox(v_allowSynthFailures_800_);
v_res_808_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2(v_tacticName_798_, v_mvarId_799_, v_allowSynthFailures_boxed_807_, v_b_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances(lean_object* v_tacticName_809_, lean_object* v_mvarId_810_, lean_object* v_mvarsNew_811_, lean_object* v_binderInfos_812_, uint8_t v_synthAssignedInstances_813_, uint8_t v_allowSynthFailures_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_){
_start:
{
lean_object* v___x_820_; lean_object* v_todo_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; size_t v_sz_825_; size_t v___x_826_; lean_object* v___x_827_; 
v___x_820_ = lean_unsigned_to_nat(0u);
v_todo_821_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0));
v___x_822_ = lean_array_get_size(v_binderInfos_812_);
v___x_823_ = l_Array_toSubarray___redArg(v_binderInfos_812_, v___x_820_, v___x_822_);
v___x_824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_824_, 0, v_todo_821_);
lean_ctor_set(v___x_824_, 1, v___x_823_);
v_sz_825_ = lean_array_size(v_mvarsNew_811_);
v___x_826_ = ((size_t)0ULL);
v___x_827_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(v_synthAssignedInstances_813_, v_mvarsNew_811_, v_sz_825_, v___x_826_, v___x_824_, v_a_815_, v_a_816_, v_a_817_, v_a_818_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; lean_object* v_fst_829_; lean_object* v___x_830_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref(v___x_827_);
v_fst_829_ = lean_ctor_get(v_a_828_, 0);
lean_inc(v_fst_829_);
lean_dec(v_a_828_);
v___x_830_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2(v_tacticName_809_, v_mvarId_810_, v_allowSynthFailures_814_, v_fst_829_, v_a_815_, v_a_816_, v_a_817_, v_a_818_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_838_; 
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_838_ == 0)
{
lean_object* v_unused_839_; 
v_unused_839_ = lean_ctor_get(v___x_830_, 0);
lean_dec(v_unused_839_);
v___x_832_ = v___x_830_;
v_isShared_833_ = v_isSharedCheck_838_;
goto v_resetjp_831_;
}
else
{
lean_dec(v___x_830_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_838_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_834_; lean_object* v___x_836_; 
v___x_834_ = lean_box(0);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 0, v___x_834_);
v___x_836_ = v___x_832_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
v_a_840_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_830_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_830_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
lean_dec(v_a_818_);
lean_dec_ref(v_a_817_);
lean_dec(v_a_816_);
lean_dec_ref(v_a_815_);
lean_dec(v_mvarId_810_);
lean_dec(v_tacticName_809_);
v_a_848_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_827_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_827_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances___boxed(lean_object* v_tacticName_856_, lean_object* v_mvarId_857_, lean_object* v_mvarsNew_858_, lean_object* v_binderInfos_859_, lean_object* v_synthAssignedInstances_860_, lean_object* v_allowSynthFailures_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_867_; uint8_t v_allowSynthFailures_boxed_868_; lean_object* v_res_869_; 
v_synthAssignedInstances_boxed_867_ = lean_unbox(v_synthAssignedInstances_860_);
v_allowSynthFailures_boxed_868_ = lean_unbox(v_allowSynthFailures_861_);
v_res_869_ = l_Lean_Meta_synthAppInstances(v_tacticName_856_, v_mvarId_857_, v_mvarsNew_858_, v_binderInfos_859_, v_synthAssignedInstances_boxed_867_, v_allowSynthFailures_boxed_868_, v_a_862_, v_a_863_, v_a_864_, v_a_865_);
lean_dec_ref(v_mvarsNew_858_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(lean_object* v_mvarId_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v_mvarId_870_, v___y_872_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___boxed(lean_object* v_mvarId_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(v_mvarId_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v_mvarId_877_);
return v_res_883_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(lean_object* v_00_u03b2_884_, lean_object* v_x_885_, lean_object* v_x_886_){
_start:
{
uint8_t v___x_887_; 
v___x_887_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_x_885_, v_x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___boxed(lean_object* v_00_u03b2_888_, lean_object* v_x_889_, lean_object* v_x_890_){
_start:
{
uint8_t v_res_891_; lean_object* v_r_892_; 
v_res_891_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(v_00_u03b2_888_, v_x_889_, v_x_890_);
lean_dec(v_x_890_);
v_r_892_ = lean_box(v_res_891_);
return v_r_892_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_893_, lean_object* v_x_894_, size_t v_x_895_, lean_object* v_x_896_){
_start:
{
uint8_t v___x_897_; 
v___x_897_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_894_, v_x_895_, v_x_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_898_, lean_object* v_x_899_, lean_object* v_x_900_, lean_object* v_x_901_){
_start:
{
size_t v_x_3231__boxed_902_; uint8_t v_res_903_; lean_object* v_r_904_; 
v_x_3231__boxed_902_ = lean_unbox_usize(v_x_900_);
lean_dec(v_x_900_);
v_res_903_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(v_00_u03b2_898_, v_x_899_, v_x_3231__boxed_902_, v_x_901_);
lean_dec(v_x_901_);
v_r_904_ = lean_box(v_res_903_);
return v_r_904_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_905_, lean_object* v_keys_906_, lean_object* v_vals_907_, lean_object* v_heq_908_, lean_object* v_i_909_, lean_object* v_k_910_){
_start:
{
uint8_t v___x_911_; 
v___x_911_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_906_, v_i_909_, v_k_910_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_912_, lean_object* v_keys_913_, lean_object* v_vals_914_, lean_object* v_heq_915_, lean_object* v_i_916_, lean_object* v_k_917_){
_start:
{
uint8_t v_res_918_; lean_object* v_r_919_; 
v_res_918_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_912_, v_keys_913_, v_vals_914_, v_heq_915_, v_i_916_, v_k_917_);
lean_dec(v_k_917_);
lean_dec_ref(v_vals_914_);
lean_dec_ref(v_keys_913_);
v_r_919_ = lean_box(v_res_918_);
return v_r_919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(lean_object* v_newMVars_920_, lean_object* v_binderInfos_921_, lean_object* v_a_922_, lean_object* v_n_923_, lean_object* v_i_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_){
_start:
{
lean_object* v_zero_930_; uint8_t v_isZero_931_; 
v_zero_930_ = lean_unsigned_to_nat(0u);
v_isZero_931_ = lean_nat_dec_eq(v_i_924_, v_zero_930_);
if (v_isZero_931_ == 1)
{
lean_object* v___x_932_; lean_object* v___x_933_; 
lean_dec(v_i_924_);
lean_dec(v_a_922_);
v___x_932_ = lean_box(0);
v___x_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_933_, 0, v___x_932_);
return v___x_933_;
}
else
{
lean_object* v_one_934_; lean_object* v_n_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v_a_941_; uint8_t v___x_942_; 
v_one_934_ = lean_unsigned_to_nat(1u);
v_n_935_ = lean_nat_sub(v_i_924_, v_one_934_);
lean_dec(v_i_924_);
v___x_936_ = lean_nat_sub(v_n_923_, v_n_935_);
v___x_937_ = lean_nat_sub(v___x_936_, v_one_934_);
lean_dec(v___x_936_);
v___x_938_ = lean_array_fget_borrowed(v_newMVars_920_, v___x_937_);
v___x_939_ = l_Lean_Expr_mvarId_x21(v___x_938_);
v___x_940_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_939_, v___y_926_);
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref(v___x_940_);
v___x_942_ = lean_unbox(v_a_941_);
lean_dec(v_a_941_);
if (v___x_942_ == 0)
{
uint8_t v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; uint8_t v___x_947_; 
v___x_943_ = 0;
v___x_944_ = lean_box(v___x_943_);
v___x_945_ = lean_array_get_borrowed(v___x_944_, v_binderInfos_921_, v___x_937_);
lean_dec(v___x_937_);
v___x_946_ = lean_unbox(v___x_945_);
v___x_947_ = l_Lean_BinderInfo_isInstImplicit(v___x_946_);
if (v___x_947_ == 0)
{
lean_object* v___x_948_; 
lean_inc(v___x_939_);
v___x_948_ = l_Lean_MVarId_getTag(v___x_939_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_a_949_);
lean_dec_ref(v___x_948_);
lean_inc(v_a_922_);
v___x_950_ = l_Lean_Meta_appendTag(v_a_922_, v_a_949_);
v___x_951_ = l_Lean_MVarId_setTag___redArg(v___x_939_, v___x_950_, v___y_926_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_dec_ref(v___x_951_);
v_i_924_ = v_n_935_;
goto _start;
}
else
{
lean_dec(v_n_935_);
lean_dec(v_a_922_);
return v___x_951_;
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec(v___x_939_);
lean_dec(v_n_935_);
lean_dec(v_a_922_);
v_a_953_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_948_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_948_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
else
{
lean_dec(v___x_939_);
v_i_924_ = v_n_935_;
goto _start;
}
}
else
{
lean_dec(v___x_939_);
lean_dec(v___x_937_);
v_i_924_ = v_n_935_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___boxed(lean_object* v_newMVars_963_, lean_object* v_binderInfos_964_, lean_object* v_a_965_, lean_object* v_n_966_, lean_object* v_i_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_963_, v_binderInfos_964_, v_a_965_, v_n_966_, v_i_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
lean_dec(v_n_966_);
lean_dec_ref(v_binderInfos_964_);
lean_dec_ref(v_newMVars_963_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag(lean_object* v_mvarId_974_, lean_object* v_newMVars_975_, lean_object* v_binderInfos_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = l_Lean_MVarId_getTag(v_mvarId_974_, v_a_977_, v_a_978_, v_a_979_, v_a_980_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_1001_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_985_ = v___x_982_;
v_isShared_986_ = v_isSharedCheck_1001_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_982_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_1001_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_987_; lean_object* v___x_988_; uint8_t v___x_989_; 
v___x_987_ = lean_array_get_size(v_newMVars_975_);
v___x_988_ = lean_unsigned_to_nat(1u);
v___x_989_ = lean_nat_dec_eq(v___x_987_, v___x_988_);
if (v___x_989_ == 0)
{
uint8_t v___x_990_; 
v___x_990_ = l_Lean_Name_isAnonymous(v_a_983_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; 
lean_del_object(v___x_985_);
v___x_991_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_975_, v_binderInfos_976_, v_a_983_, v___x_987_, v___x_987_, v_a_977_, v_a_978_, v_a_979_, v_a_980_);
return v___x_991_;
}
else
{
lean_object* v___x_992_; lean_object* v___x_994_; 
lean_dec(v_a_983_);
v___x_992_ = lean_box(0);
if (v_isShared_986_ == 0)
{
lean_ctor_set(v___x_985_, 0, v___x_992_);
v___x_994_ = v___x_985_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v___x_992_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
else
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
lean_del_object(v___x_985_);
v___x_996_ = l_Lean_instInhabitedExpr;
v___x_997_ = lean_unsigned_to_nat(0u);
v___x_998_ = lean_array_get_borrowed(v___x_996_, v_newMVars_975_, v___x_997_);
v___x_999_ = l_Lean_Expr_mvarId_x21(v___x_998_);
v___x_1000_ = l_Lean_MVarId_setTag___redArg(v___x_999_, v_a_983_, v_a_978_);
return v___x_1000_;
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
v_a_1002_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_982_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_982_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag___boxed(lean_object* v_mvarId_1010_, lean_object* v_newMVars_1011_, lean_object* v_binderInfos_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lean_Meta_appendParentTag(v_mvarId_1010_, v_newMVars_1011_, v_binderInfos_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
lean_dec(v_a_1016_);
lean_dec_ref(v_a_1015_);
lean_dec(v_a_1014_);
lean_dec_ref(v_a_1013_);
lean_dec_ref(v_binderInfos_1012_);
lean_dec_ref(v_newMVars_1011_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(lean_object* v_newMVars_1019_, lean_object* v_binderInfos_1020_, lean_object* v_a_1021_, lean_object* v_n_1022_, lean_object* v_i_1023_, lean_object* v_a_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_1019_, v_binderInfos_1020_, v_a_1021_, v_n_1022_, v_i_1023_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___boxed(lean_object* v_newMVars_1031_, lean_object* v_binderInfos_1032_, lean_object* v_a_1033_, lean_object* v_n_1034_, lean_object* v_i_1035_, lean_object* v_a_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(v_newMVars_1031_, v_binderInfos_1032_, v_a_1033_, v_n_1034_, v_i_1035_, v_a_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
lean_dec(v_n_1034_);
lean_dec_ref(v_binderInfos_1032_);
lean_dec_ref(v_newMVars_1031_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars(lean_object* v_tacticName_1043_, lean_object* v_mvarId_1044_, lean_object* v_newMVars_1045_, lean_object* v_binderInfos_1046_, uint8_t v_synthAssignedInstances_1047_, uint8_t v_allowSynthFailures_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_){
_start:
{
lean_object* v___x_1054_; 
lean_inc(v_a_1052_);
lean_inc_ref(v_a_1051_);
lean_inc(v_a_1050_);
lean_inc_ref(v_a_1049_);
lean_inc_ref(v_binderInfos_1046_);
lean_inc(v_mvarId_1044_);
v___x_1054_ = l_Lean_Meta_synthAppInstances(v_tacticName_1043_, v_mvarId_1044_, v_newMVars_1045_, v_binderInfos_1046_, v_synthAssignedInstances_1047_, v_allowSynthFailures_1048_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_);
if (lean_obj_tag(v___x_1054_) == 0)
{
lean_object* v___x_1055_; 
lean_dec_ref(v___x_1054_);
v___x_1055_ = l_Lean_Meta_appendParentTag(v_mvarId_1044_, v_newMVars_1045_, v_binderInfos_1046_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_);
lean_dec(v_a_1052_);
lean_dec_ref(v_a_1051_);
lean_dec(v_a_1050_);
lean_dec_ref(v_a_1049_);
lean_dec_ref(v_binderInfos_1046_);
return v___x_1055_;
}
else
{
lean_dec(v_a_1052_);
lean_dec_ref(v_a_1051_);
lean_dec(v_a_1050_);
lean_dec_ref(v_a_1049_);
lean_dec_ref(v_binderInfos_1046_);
lean_dec(v_mvarId_1044_);
return v___x_1054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars___boxed(lean_object* v_tacticName_1056_, lean_object* v_mvarId_1057_, lean_object* v_newMVars_1058_, lean_object* v_binderInfos_1059_, lean_object* v_synthAssignedInstances_1060_, lean_object* v_allowSynthFailures_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_1067_; uint8_t v_allowSynthFailures_boxed_1068_; lean_object* v_res_1069_; 
v_synthAssignedInstances_boxed_1067_ = lean_unbox(v_synthAssignedInstances_1060_);
v_allowSynthFailures_boxed_1068_ = lean_unbox(v_allowSynthFailures_1061_);
v_res_1069_ = l_Lean_Meta_postprocessAppMVars(v_tacticName_1056_, v_mvarId_1057_, v_newMVars_1058_, v_binderInfos_1059_, v_synthAssignedInstances_boxed_1067_, v_allowSynthFailures_boxed_1068_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_);
lean_dec_ref(v_newMVars_1058_);
return v_res_1069_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(lean_object* v_mvar_1070_, lean_object* v_mvarId_1071_){
_start:
{
lean_object* v___x_1072_; uint8_t v___x_1073_; 
v___x_1072_ = l_Lean_Expr_mvarId_x21(v_mvar_1070_);
v___x_1073_ = l_Lean_instBEqMVarId_beq(v_mvarId_1071_, v___x_1072_);
lean_dec(v___x_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed(lean_object* v_mvar_1074_, lean_object* v_mvarId_1075_){
_start:
{
uint8_t v_res_1076_; lean_object* v_r_1077_; 
v_res_1076_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(v_mvar_1074_, v_mvarId_1075_);
lean_dec(v_mvarId_1075_);
lean_dec_ref(v_mvar_1074_);
v_r_1077_ = lean_box(v_res_1076_);
return v_r_1077_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(lean_object* v_mvar_1078_, lean_object* v_as_1079_, size_t v_i_1080_, size_t v_stop_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
uint8_t v___x_1087_; 
v___x_1087_ = lean_usize_dec_eq(v_i_1080_, v_stop_1081_);
if (v___x_1087_ == 0)
{
uint8_t v___x_1088_; uint8_t v_a_1090_; lean_object* v___x_1096_; uint8_t v___x_1097_; 
v___x_1088_ = 1;
v___x_1096_ = lean_array_uget_borrowed(v_as_1079_, v_i_1080_);
v___x_1097_ = lean_expr_eqv(v_mvar_1078_, v___x_1096_);
if (v___x_1097_ == 0)
{
lean_object* v___x_1098_; 
lean_inc(v___y_1085_);
lean_inc_ref(v___y_1084_);
lean_inc(v___y_1083_);
lean_inc_ref(v___y_1082_);
lean_inc(v___x_1096_);
v___x_1098_ = lean_infer_type(v___x_1096_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1110_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1101_ = v___x_1098_;
v_isShared_1102_ = v_isSharedCheck_1110_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_a_1099_);
lean_dec(v___x_1098_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1110_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___f_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
lean_inc_ref(v_mvar_1078_);
v___f_1103_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1103_, 0, v_mvar_1078_);
v___x_1104_ = lean_box(0);
v___x_1105_ = l_Lean_FindMVar_main(v___f_1103_, v_a_1099_, v___x_1104_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_del_object(v___x_1101_);
v_a_1090_ = v___x_1097_;
goto v___jp_1089_;
}
else
{
lean_object* v___x_1106_; lean_object* v___x_1108_; 
lean_dec_ref(v___x_1105_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec_ref(v_mvar_1078_);
v___x_1106_ = lean_box(v___x_1088_);
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v___x_1106_);
v___x_1108_ = v___x_1101_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v___x_1106_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
else
{
lean_object* v_a_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1118_; 
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec_ref(v_mvar_1078_);
v_a_1111_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1113_ = v___x_1098_;
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_a_1111_);
lean_dec(v___x_1098_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1118_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1116_; 
if (v_isShared_1114_ == 0)
{
v___x_1116_ = v___x_1113_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1117_; 
v_reuseFailAlloc_1117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1117_, 0, v_a_1111_);
v___x_1116_ = v_reuseFailAlloc_1117_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
return v___x_1116_;
}
}
}
}
else
{
v_a_1090_ = v___x_1087_;
goto v___jp_1089_;
}
v___jp_1089_:
{
if (v_a_1090_ == 0)
{
size_t v___x_1091_; size_t v___x_1092_; 
v___x_1091_ = ((size_t)1ULL);
v___x_1092_ = lean_usize_add(v_i_1080_, v___x_1091_);
v_i_1080_ = v___x_1092_;
goto _start;
}
else
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec_ref(v_mvar_1078_);
v___x_1094_ = lean_box(v___x_1088_);
v___x_1095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1094_);
return v___x_1095_;
}
}
}
else
{
uint8_t v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec_ref(v_mvar_1078_);
v___x_1119_ = 0;
v___x_1120_ = lean_box(v___x_1119_);
v___x_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
return v___x_1121_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___boxed(lean_object* v_mvar_1122_, lean_object* v_as_1123_, lean_object* v_i_1124_, lean_object* v_stop_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
size_t v_i_boxed_1131_; size_t v_stop_boxed_1132_; lean_object* v_res_1133_; 
v_i_boxed_1131_ = lean_unbox_usize(v_i_1124_);
lean_dec(v_i_1124_);
v_stop_boxed_1132_ = lean_unbox_usize(v_stop_1125_);
lean_dec(v_stop_1125_);
v_res_1133_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(v_mvar_1122_, v_as_1123_, v_i_boxed_1131_, v_stop_boxed_1132_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
lean_dec_ref(v_as_1123_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(lean_object* v_mvar_1134_, lean_object* v_otherMVars_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; uint8_t v___x_1143_; 
v___x_1141_ = lean_unsigned_to_nat(0u);
v___x_1142_ = lean_array_get_size(v_otherMVars_1135_);
v___x_1143_ = lean_nat_dec_lt(v___x_1141_, v___x_1142_);
if (v___x_1143_ == 0)
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
lean_dec(v_a_1137_);
lean_dec_ref(v_a_1136_);
lean_dec_ref(v_mvar_1134_);
v___x_1144_ = lean_box(v___x_1143_);
v___x_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
return v___x_1145_;
}
else
{
if (v___x_1143_ == 0)
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
lean_dec(v_a_1139_);
lean_dec_ref(v_a_1138_);
lean_dec(v_a_1137_);
lean_dec_ref(v_a_1136_);
lean_dec_ref(v_mvar_1134_);
v___x_1146_ = lean_box(v___x_1143_);
v___x_1147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
return v___x_1147_;
}
else
{
size_t v___x_1148_; size_t v___x_1149_; lean_object* v___x_1150_; 
v___x_1148_ = ((size_t)0ULL);
v___x_1149_ = lean_usize_of_nat(v___x_1142_);
v___x_1150_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(v_mvar_1134_, v_otherMVars_1135_, v___x_1148_, v___x_1149_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_);
return v___x_1150_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___boxed(lean_object* v_mvar_1151_, lean_object* v_otherMVars_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(v_mvar_1151_, v_otherMVars_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_);
lean_dec_ref(v_otherMVars_1152_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(lean_object* v_mvars_1159_, lean_object* v_as_1160_, size_t v_i_1161_, size_t v_stop_1162_, lean_object* v_b_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
uint8_t v___x_1169_; 
v___x_1169_ = lean_usize_dec_eq(v_i_1161_, v_stop_1162_);
if (v___x_1169_ == 0)
{
lean_object* v_fst_1170_; lean_object* v_snd_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1201_; 
v_fst_1170_ = lean_ctor_get(v_b_1163_, 0);
v_snd_1171_ = lean_ctor_get(v_b_1163_, 1);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_b_1163_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1173_ = v_b_1163_;
v_isShared_1174_ = v_isSharedCheck_1201_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_snd_1171_);
lean_inc(v_fst_1170_);
lean_dec(v_b_1163_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1201_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v_currMVarId_1176_; lean_object* v___x_1177_; 
v___x_1175_ = lean_array_uget_borrowed(v_as_1160_, v_i_1161_);
v_currMVarId_1176_ = l_Lean_Expr_mvarId_x21(v___x_1175_);
lean_inc(v___y_1167_);
lean_inc_ref(v___y_1166_);
lean_inc(v___y_1165_);
lean_inc_ref(v___y_1164_);
lean_inc(v___x_1175_);
v___x_1177_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(v___x_1175_, v_mvars_1159_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
if (lean_obj_tag(v___x_1177_) == 0)
{
lean_object* v_a_1178_; lean_object* v_a_1180_; uint8_t v___x_1184_; 
v_a_1178_ = lean_ctor_get(v___x_1177_, 0);
lean_inc(v_a_1178_);
lean_dec_ref(v___x_1177_);
v___x_1184_ = lean_unbox(v_a_1178_);
lean_dec(v_a_1178_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; lean_object* v___x_1187_; 
v___x_1185_ = lean_array_push(v_fst_1170_, v_currMVarId_1176_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 0, v___x_1185_);
v___x_1187_ = v___x_1173_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1185_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_snd_1171_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
v_a_1180_ = v___x_1187_;
goto v___jp_1179_;
}
}
else
{
lean_object* v___x_1189_; lean_object* v___x_1191_; 
v___x_1189_ = lean_array_push(v_snd_1171_, v_currMVarId_1176_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v___x_1189_);
v___x_1191_ = v___x_1173_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_fst_1170_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v___x_1189_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
v_a_1180_ = v___x_1191_;
goto v___jp_1179_;
}
}
v___jp_1179_:
{
size_t v___x_1181_; size_t v___x_1182_; 
v___x_1181_ = ((size_t)1ULL);
v___x_1182_ = lean_usize_add(v_i_1161_, v___x_1181_);
v_i_1161_ = v___x_1182_;
v_b_1163_ = v_a_1180_;
goto _start;
}
}
else
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1200_; 
lean_dec(v_currMVarId_1176_);
lean_del_object(v___x_1173_);
lean_dec(v_snd_1171_);
lean_dec(v_fst_1170_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
v_a_1193_ = lean_ctor_get(v___x_1177_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1195_ = v___x_1177_;
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v___x_1177_);
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
lean_object* v___x_1202_; 
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
v___x_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1202_, 0, v_b_1163_);
return v___x_1202_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0___boxed(lean_object* v_mvars_1203_, lean_object* v_as_1204_, lean_object* v_i_1205_, lean_object* v_stop_1206_, lean_object* v_b_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
size_t v_i_boxed_1213_; size_t v_stop_boxed_1214_; lean_object* v_res_1215_; 
v_i_boxed_1213_ = lean_unbox_usize(v_i_1205_);
lean_dec(v_i_1205_);
v_stop_boxed_1214_ = lean_unbox_usize(v_stop_1206_);
lean_dec(v_stop_1206_);
v_res_1215_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(v_mvars_1203_, v_as_1204_, v_i_boxed_1213_, v_stop_boxed_1214_, v_b_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
lean_dec_ref(v_as_1204_);
lean_dec_ref(v_mvars_1203_);
return v_res_1215_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1(void){
_start:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0));
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
lean_ctor_set(v___x_1219_, 1, v___x_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(lean_object* v_mvars_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; uint8_t v___x_1229_; 
v___x_1226_ = lean_unsigned_to_nat(0u);
v___x_1227_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1);
v___x_1228_ = lean_array_get_size(v_mvars_1220_);
v___x_1229_ = lean_nat_dec_lt(v___x_1226_, v___x_1228_);
if (v___x_1229_ == 0)
{
lean_object* v___x_1230_; 
lean_dec(v_a_1224_);
lean_dec_ref(v_a_1223_);
lean_dec(v_a_1222_);
lean_dec_ref(v_a_1221_);
v___x_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1227_);
return v___x_1230_;
}
else
{
uint8_t v___x_1231_; 
v___x_1231_ = lean_nat_dec_le(v___x_1228_, v___x_1228_);
if (v___x_1231_ == 0)
{
if (v___x_1229_ == 0)
{
lean_object* v___x_1232_; 
lean_dec(v_a_1224_);
lean_dec_ref(v_a_1223_);
lean_dec(v_a_1222_);
lean_dec_ref(v_a_1221_);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1227_);
return v___x_1232_;
}
else
{
size_t v___x_1233_; size_t v___x_1234_; lean_object* v___x_1235_; 
v___x_1233_ = ((size_t)0ULL);
v___x_1234_ = lean_usize_of_nat(v___x_1228_);
v___x_1235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(v_mvars_1220_, v_mvars_1220_, v___x_1233_, v___x_1234_, v___x_1227_, v_a_1221_, v_a_1222_, v_a_1223_, v_a_1224_);
return v___x_1235_;
}
}
else
{
size_t v___x_1236_; size_t v___x_1237_; lean_object* v___x_1238_; 
v___x_1236_ = ((size_t)0ULL);
v___x_1237_ = lean_usize_of_nat(v___x_1228_);
v___x_1238_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(v_mvars_1220_, v_mvars_1220_, v___x_1236_, v___x_1237_, v___x_1227_, v_a_1221_, v_a_1222_, v_a_1223_, v_a_1224_);
return v___x_1238_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___boxed(lean_object* v_mvars_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_);
lean_dec_ref(v_mvars_1239_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(lean_object* v_a_1246_, lean_object* v_a_1247_){
_start:
{
if (lean_obj_tag(v_a_1246_) == 0)
{
lean_object* v___x_1248_; 
v___x_1248_ = l_List_reverse___redArg(v_a_1247_);
return v___x_1248_;
}
else
{
lean_object* v_head_1249_; lean_object* v_tail_1250_; lean_object* v___x_1252_; uint8_t v_isShared_1253_; uint8_t v_isSharedCheck_1259_; 
v_head_1249_ = lean_ctor_get(v_a_1246_, 0);
v_tail_1250_ = lean_ctor_get(v_a_1246_, 1);
v_isSharedCheck_1259_ = !lean_is_exclusive(v_a_1246_);
if (v_isSharedCheck_1259_ == 0)
{
v___x_1252_ = v_a_1246_;
v_isShared_1253_ = v_isSharedCheck_1259_;
goto v_resetjp_1251_;
}
else
{
lean_inc(v_tail_1250_);
lean_inc(v_head_1249_);
lean_dec(v_a_1246_);
v___x_1252_ = lean_box(0);
v_isShared_1253_ = v_isSharedCheck_1259_;
goto v_resetjp_1251_;
}
v_resetjp_1251_:
{
lean_object* v___x_1254_; lean_object* v___x_1256_; 
v___x_1254_ = l_Lean_Expr_mvarId_x21(v_head_1249_);
lean_dec(v_head_1249_);
if (v_isShared_1253_ == 0)
{
lean_ctor_set(v___x_1252_, 1, v_a_1247_);
lean_ctor_set(v___x_1252_, 0, v___x_1254_);
v___x_1256_ = v___x_1252_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1254_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_a_1247_);
v___x_1256_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
v_a_1246_ = v_tail_1250_;
v_a_1247_ = v___x_1256_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(lean_object* v_mvars_1260_, uint8_t v_x_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_){
_start:
{
switch(v_x_1261_)
{
case 0:
{
lean_object* v___x_1267_; 
v___x_1267_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1260_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
lean_dec_ref(v_mvars_1260_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1280_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1280_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1280_ == 0)
{
v___x_1270_ = v___x_1267_;
v_isShared_1271_ = v_isSharedCheck_1280_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1267_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1280_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v_fst_1272_; lean_object* v_snd_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1278_; 
v_fst_1272_ = lean_ctor_get(v_a_1268_, 0);
lean_inc(v_fst_1272_);
v_snd_1273_ = lean_ctor_get(v_a_1268_, 1);
lean_inc(v_snd_1273_);
lean_dec(v_a_1268_);
v___x_1274_ = lean_array_to_list(v_fst_1272_);
v___x_1275_ = lean_array_to_list(v_snd_1273_);
v___x_1276_ = l_List_appendTR___redArg(v___x_1274_, v___x_1275_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 0, v___x_1276_);
v___x_1278_ = v___x_1270_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
v_a_1281_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v___x_1267_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1267_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_a_1281_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
case 1:
{
lean_object* v___x_1289_; 
v___x_1289_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1260_, v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_);
lean_dec_ref(v_mvars_1260_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1299_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1299_ == 0)
{
v___x_1292_ = v___x_1289_;
v_isShared_1293_ = v_isSharedCheck_1299_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_a_1290_);
lean_dec(v___x_1289_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1299_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v_fst_1294_; lean_object* v___x_1295_; lean_object* v___x_1297_; 
v_fst_1294_ = lean_ctor_get(v_a_1290_, 0);
lean_inc(v_fst_1294_);
lean_dec(v_a_1290_);
v___x_1295_ = lean_array_to_list(v_fst_1294_);
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 0, v___x_1295_);
v___x_1297_ = v___x_1292_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
}
}
}
else
{
lean_object* v_a_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1307_; 
v_a_1300_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1302_ = v___x_1289_;
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_a_1300_);
lean_dec(v___x_1289_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1307_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1305_; 
if (v_isShared_1303_ == 0)
{
v___x_1305_ = v___x_1302_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v_a_1300_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
}
}
default: 
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
lean_dec(v_a_1265_);
lean_dec_ref(v_a_1264_);
lean_dec(v_a_1263_);
lean_dec_ref(v_a_1262_);
v___x_1308_ = lean_array_to_list(v_mvars_1260_);
v___x_1309_ = lean_box(0);
v___x_1310_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(v___x_1308_, v___x_1309_);
v___x_1311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
return v___x_1311_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals___boxed(lean_object* v_mvars_1312_, lean_object* v_x_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_){
_start:
{
uint8_t v_x_917__boxed_1319_; lean_object* v_res_1320_; 
v_x_917__boxed_1319_ = lean_unbox(v_x_1313_);
v_res_1320_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(v_mvars_1312_, v_x_917__boxed_1319_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_);
return v_res_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(uint8_t v_approx_1321_, lean_object* v_a_1322_, lean_object* v_b_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_){
_start:
{
if (v_approx_1321_ == 0)
{
lean_object* v___x_1329_; 
v___x_1329_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1322_, v_b_1323_, v_a_1324_, v_a_1325_, v_a_1326_, v_a_1327_);
return v___x_1329_;
}
else
{
lean_object* v___x_1330_; uint8_t v_constApprox_1331_; uint8_t v_isDefEqStuckEx_1332_; uint8_t v_unificationHints_1333_; uint8_t v_proofIrrelevance_1334_; uint8_t v_assignSyntheticOpaque_1335_; uint8_t v_offsetCnstrs_1336_; uint8_t v_transparency_1337_; uint8_t v_etaStruct_1338_; uint8_t v_univApprox_1339_; uint8_t v_iota_1340_; uint8_t v_beta_1341_; uint8_t v_proj_1342_; uint8_t v_zeta_1343_; uint8_t v_zetaDelta_1344_; uint8_t v_zetaUnused_1345_; uint8_t v_zetaHave_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1374_; 
v___x_1330_ = l_Lean_Meta_Context_config(v_a_1324_);
v_constApprox_1331_ = lean_ctor_get_uint8(v___x_1330_, 3);
v_isDefEqStuckEx_1332_ = lean_ctor_get_uint8(v___x_1330_, 4);
v_unificationHints_1333_ = lean_ctor_get_uint8(v___x_1330_, 5);
v_proofIrrelevance_1334_ = lean_ctor_get_uint8(v___x_1330_, 6);
v_assignSyntheticOpaque_1335_ = lean_ctor_get_uint8(v___x_1330_, 7);
v_offsetCnstrs_1336_ = lean_ctor_get_uint8(v___x_1330_, 8);
v_transparency_1337_ = lean_ctor_get_uint8(v___x_1330_, 9);
v_etaStruct_1338_ = lean_ctor_get_uint8(v___x_1330_, 10);
v_univApprox_1339_ = lean_ctor_get_uint8(v___x_1330_, 11);
v_iota_1340_ = lean_ctor_get_uint8(v___x_1330_, 12);
v_beta_1341_ = lean_ctor_get_uint8(v___x_1330_, 13);
v_proj_1342_ = lean_ctor_get_uint8(v___x_1330_, 14);
v_zeta_1343_ = lean_ctor_get_uint8(v___x_1330_, 15);
v_zetaDelta_1344_ = lean_ctor_get_uint8(v___x_1330_, 16);
v_zetaUnused_1345_ = lean_ctor_get_uint8(v___x_1330_, 17);
v_zetaHave_1346_ = lean_ctor_get_uint8(v___x_1330_, 18);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1348_ = v___x_1330_;
v_isShared_1349_ = v_isSharedCheck_1374_;
goto v_resetjp_1347_;
}
else
{
lean_dec(v___x_1330_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1374_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1351_; 
if (v_isShared_1349_ == 0)
{
v___x_1351_ = v___x_1348_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 3, v_constApprox_1331_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 4, v_isDefEqStuckEx_1332_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 5, v_unificationHints_1333_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 6, v_proofIrrelevance_1334_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 7, v_assignSyntheticOpaque_1335_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 8, v_offsetCnstrs_1336_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 9, v_transparency_1337_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 10, v_etaStruct_1338_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 11, v_univApprox_1339_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 12, v_iota_1340_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 13, v_beta_1341_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 14, v_proj_1342_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 15, v_zeta_1343_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 16, v_zetaDelta_1344_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 17, v_zetaUnused_1345_);
lean_ctor_set_uint8(v_reuseFailAlloc_1373_, 18, v_zetaHave_1346_);
v___x_1351_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
uint8_t v_trackZetaDelta_1352_; lean_object* v_zetaDeltaSet_1353_; lean_object* v_lctx_1354_; lean_object* v_localInstances_1355_; lean_object* v_defEqCtx_x3f_1356_; lean_object* v_synthPendingDepth_1357_; lean_object* v_canUnfold_x3f_1358_; uint8_t v_univApprox_1359_; uint8_t v_inTypeClassResolution_1360_; uint8_t v_cacheInferType_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1371_; 
lean_ctor_set_uint8(v___x_1351_, 0, v_approx_1321_);
lean_ctor_set_uint8(v___x_1351_, 1, v_approx_1321_);
lean_ctor_set_uint8(v___x_1351_, 2, v_approx_1321_);
v_trackZetaDelta_1352_ = lean_ctor_get_uint8(v_a_1324_, sizeof(void*)*7);
v_zetaDeltaSet_1353_ = lean_ctor_get(v_a_1324_, 1);
v_lctx_1354_ = lean_ctor_get(v_a_1324_, 2);
v_localInstances_1355_ = lean_ctor_get(v_a_1324_, 3);
v_defEqCtx_x3f_1356_ = lean_ctor_get(v_a_1324_, 4);
v_synthPendingDepth_1357_ = lean_ctor_get(v_a_1324_, 5);
v_canUnfold_x3f_1358_ = lean_ctor_get(v_a_1324_, 6);
v_univApprox_1359_ = lean_ctor_get_uint8(v_a_1324_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1360_ = lean_ctor_get_uint8(v_a_1324_, sizeof(void*)*7 + 2);
v_cacheInferType_1361_ = lean_ctor_get_uint8(v_a_1324_, sizeof(void*)*7 + 3);
v_isSharedCheck_1371_ = !lean_is_exclusive(v_a_1324_);
if (v_isSharedCheck_1371_ == 0)
{
lean_object* v_unused_1372_; 
v_unused_1372_ = lean_ctor_get(v_a_1324_, 0);
lean_dec(v_unused_1372_);
v___x_1363_ = v_a_1324_;
v_isShared_1364_ = v_isSharedCheck_1371_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_canUnfold_x3f_1358_);
lean_inc(v_synthPendingDepth_1357_);
lean_inc(v_defEqCtx_x3f_1356_);
lean_inc(v_localInstances_1355_);
lean_inc(v_lctx_1354_);
lean_inc(v_zetaDeltaSet_1353_);
lean_dec(v_a_1324_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1371_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
uint64_t v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1368_; 
v___x_1365_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1351_);
v___x_1366_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1366_, 0, v___x_1351_);
lean_ctor_set_uint64(v___x_1366_, sizeof(void*)*1, v___x_1365_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 0, v___x_1366_);
v___x_1368_ = v___x_1363_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v___x_1366_);
lean_ctor_set(v_reuseFailAlloc_1370_, 1, v_zetaDeltaSet_1353_);
lean_ctor_set(v_reuseFailAlloc_1370_, 2, v_lctx_1354_);
lean_ctor_set(v_reuseFailAlloc_1370_, 3, v_localInstances_1355_);
lean_ctor_set(v_reuseFailAlloc_1370_, 4, v_defEqCtx_x3f_1356_);
lean_ctor_set(v_reuseFailAlloc_1370_, 5, v_synthPendingDepth_1357_);
lean_ctor_set(v_reuseFailAlloc_1370_, 6, v_canUnfold_x3f_1358_);
lean_ctor_set_uint8(v_reuseFailAlloc_1370_, sizeof(void*)*7, v_trackZetaDelta_1352_);
lean_ctor_set_uint8(v_reuseFailAlloc_1370_, sizeof(void*)*7 + 1, v_univApprox_1359_);
lean_ctor_set_uint8(v_reuseFailAlloc_1370_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1360_);
lean_ctor_set_uint8(v_reuseFailAlloc_1370_, sizeof(void*)*7 + 3, v_cacheInferType_1361_);
v___x_1368_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
lean_object* v___x_1369_; 
v___x_1369_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1322_, v_b_1323_, v___x_1368_, v_a_1325_, v_a_1326_, v_a_1327_);
return v___x_1369_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply___boxed(lean_object* v_approx_1375_, lean_object* v_a_1376_, lean_object* v_b_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
uint8_t v_approx_boxed_1383_; lean_object* v_res_1384_; 
v_approx_boxed_1383_ = lean_unbox(v_approx_1375_);
v_res_1384_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_approx_boxed_1383_, v_a_1376_, v_b_1377_, v_a_1378_, v_a_1379_, v_a_1380_, v_a_1381_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(lean_object* v_mvarId_1385_, lean_object* v_cfg_1386_, lean_object* v_term_x3f_1387_, lean_object* v_targetType_1388_, lean_object* v_eType_1389_, lean_object* v_rangeNumArgs_1390_, lean_object* v_i_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_){
_start:
{
lean_object* v_lower_1397_; lean_object* v_upper_1398_; uint8_t v___x_1399_; 
v_lower_1397_ = lean_ctor_get(v_rangeNumArgs_1390_, 0);
v_upper_1398_ = lean_ctor_get(v_rangeNumArgs_1390_, 1);
v___x_1399_ = lean_nat_dec_lt(v_i_1391_, v_upper_1398_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; uint8_t v___x_1401_; 
lean_dec(v_i_1391_);
v___x_1400_ = lean_unsigned_to_nat(0u);
v___x_1401_ = lean_nat_dec_eq(v_lower_1397_, v___x_1400_);
if (v___x_1401_ == 0)
{
lean_object* v___x_1402_; uint8_t v___x_1403_; lean_object* v___x_1404_; 
lean_inc(v_lower_1397_);
v___x_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1402_, 0, v_lower_1397_);
v___x_1403_ = 0;
lean_inc(v_a_1395_);
lean_inc_ref(v_a_1394_);
lean_inc(v_a_1393_);
lean_inc_ref(v_a_1392_);
lean_inc_ref(v_eType_1389_);
v___x_1404_ = l_Lean_Meta_forallMetaTelescopeReducing(v_eType_1389_, v___x_1402_, v___x_1403_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_);
if (lean_obj_tag(v___x_1404_) == 0)
{
lean_object* v_a_1405_; lean_object* v_snd_1406_; lean_object* v_snd_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v_a_1405_ = lean_ctor_get(v___x_1404_, 0);
lean_inc(v_a_1405_);
lean_dec_ref(v___x_1404_);
v_snd_1406_ = lean_ctor_get(v_a_1405_, 1);
lean_inc(v_snd_1406_);
lean_dec(v_a_1405_);
v_snd_1407_ = lean_ctor_get(v_snd_1406_, 1);
lean_inc(v_snd_1407_);
lean_dec(v_snd_1406_);
v___x_1408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1408_, 0, v_snd_1407_);
v___x_1409_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_1385_, v_eType_1389_, v___x_1408_, v_targetType_1388_, v_term_x3f_1387_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_);
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
return v___x_1409_;
}
else
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1417_; 
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
lean_dec_ref(v_eType_1389_);
lean_dec_ref(v_targetType_1388_);
lean_dec(v_term_x3f_1387_);
lean_dec(v_mvarId_1385_);
v_a_1410_ = lean_ctor_get(v___x_1404_, 0);
v_isSharedCheck_1417_ = !lean_is_exclusive(v___x_1404_);
if (v_isSharedCheck_1417_ == 0)
{
v___x_1412_ = v___x_1404_;
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1404_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1417_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1415_; 
if (v_isShared_1413_ == 0)
{
v___x_1415_ = v___x_1412_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v_a_1410_);
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
else
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1418_ = lean_box(0);
v___x_1419_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_1385_, v_eType_1389_, v___x_1418_, v_targetType_1388_, v_term_x3f_1387_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_);
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
return v___x_1419_;
}
}
else
{
lean_object* v___x_1420_; 
v___x_1420_ = l_Lean_Meta_saveState___redArg(v_a_1393_, v_a_1395_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; lean_object* v___x_1422_; uint8_t v___x_1423_; lean_object* v___x_1424_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
lean_inc(v_a_1421_);
lean_dec_ref(v___x_1420_);
lean_inc(v_i_1391_);
v___x_1422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1422_, 0, v_i_1391_);
v___x_1423_ = 0;
lean_inc(v_a_1395_);
lean_inc_ref(v_a_1394_);
lean_inc(v_a_1393_);
lean_inc_ref(v_a_1392_);
lean_inc_ref(v_eType_1389_);
v___x_1424_ = l_Lean_Meta_forallMetaTelescopeReducing(v_eType_1389_, v___x_1422_, v___x_1423_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v_snd_1426_; lean_object* v_fst_1427_; lean_object* v_fst_1428_; lean_object* v_snd_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1467_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
lean_inc(v_a_1425_);
lean_dec_ref(v___x_1424_);
v_snd_1426_ = lean_ctor_get(v_a_1425_, 1);
lean_inc(v_snd_1426_);
v_fst_1427_ = lean_ctor_get(v_a_1425_, 0);
lean_inc(v_fst_1427_);
lean_dec(v_a_1425_);
v_fst_1428_ = lean_ctor_get(v_snd_1426_, 0);
v_snd_1429_ = lean_ctor_get(v_snd_1426_, 1);
v_isSharedCheck_1467_ = !lean_is_exclusive(v_snd_1426_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1431_ = v_snd_1426_;
v_isShared_1432_ = v_isSharedCheck_1467_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_snd_1429_);
lean_inc(v_fst_1428_);
lean_dec(v_snd_1426_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1467_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
uint8_t v_approx_1433_; lean_object* v___x_1434_; 
v_approx_1433_ = lean_ctor_get_uint8(v_cfg_1386_, 3);
lean_inc(v_a_1395_);
lean_inc_ref(v_a_1394_);
lean_inc(v_a_1393_);
lean_inc_ref(v_a_1392_);
lean_inc_ref(v_targetType_1388_);
v___x_1434_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_approx_1433_, v_snd_1429_, v_targetType_1388_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1458_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1437_ = v___x_1434_;
v_isShared_1438_ = v_isSharedCheck_1458_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v___x_1434_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1458_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
uint8_t v___x_1439_; 
v___x_1439_ = lean_unbox(v_a_1435_);
lean_dec(v_a_1435_);
if (v___x_1439_ == 0)
{
lean_object* v___x_1440_; 
lean_del_object(v___x_1437_);
lean_del_object(v___x_1431_);
lean_dec(v_fst_1428_);
lean_dec(v_fst_1427_);
v___x_1440_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1421_, v_a_1393_, v_a_1395_);
lean_dec(v_a_1421_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v___x_1441_; lean_object* v___x_1442_; 
lean_dec_ref(v___x_1440_);
v___x_1441_ = lean_unsigned_to_nat(1u);
v___x_1442_ = lean_nat_add(v_i_1391_, v___x_1441_);
lean_dec(v_i_1391_);
v_i_1391_ = v___x_1442_;
goto _start;
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
lean_dec(v_i_1391_);
lean_dec_ref(v_eType_1389_);
lean_dec_ref(v_targetType_1388_);
lean_dec(v_term_x3f_1387_);
lean_dec(v_mvarId_1385_);
v_a_1444_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1446_ = v___x_1440_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1440_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1444_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
else
{
lean_object* v___x_1453_; 
lean_dec(v_a_1421_);
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
lean_dec(v_i_1391_);
lean_dec_ref(v_eType_1389_);
lean_dec_ref(v_targetType_1388_);
lean_dec(v_term_x3f_1387_);
lean_dec(v_mvarId_1385_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 1, v_fst_1428_);
lean_ctor_set(v___x_1431_, 0, v_fst_1427_);
v___x_1453_ = v___x_1431_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_fst_1427_);
lean_ctor_set(v_reuseFailAlloc_1457_, 1, v_fst_1428_);
v___x_1453_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
lean_object* v___x_1455_; 
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1453_);
v___x_1455_ = v___x_1437_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
else
{
lean_object* v_a_1459_; lean_object* v___x_1461_; uint8_t v_isShared_1462_; uint8_t v_isSharedCheck_1466_; 
lean_del_object(v___x_1431_);
lean_dec(v_fst_1428_);
lean_dec(v_fst_1427_);
lean_dec(v_a_1421_);
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
lean_dec(v_i_1391_);
lean_dec_ref(v_eType_1389_);
lean_dec_ref(v_targetType_1388_);
lean_dec(v_term_x3f_1387_);
lean_dec(v_mvarId_1385_);
v_a_1459_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1461_ = v___x_1434_;
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
else
{
lean_inc(v_a_1459_);
lean_dec(v___x_1434_);
v___x_1461_ = lean_box(0);
v_isShared_1462_ = v_isSharedCheck_1466_;
goto v_resetjp_1460_;
}
v_resetjp_1460_:
{
lean_object* v___x_1464_; 
if (v_isShared_1462_ == 0)
{
v___x_1464_ = v___x_1461_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_a_1459_);
v___x_1464_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
return v___x_1464_;
}
}
}
}
}
else
{
lean_object* v_a_1468_; lean_object* v___x_1470_; uint8_t v_isShared_1471_; uint8_t v_isSharedCheck_1475_; 
lean_dec(v_a_1421_);
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
lean_dec(v_i_1391_);
lean_dec_ref(v_eType_1389_);
lean_dec_ref(v_targetType_1388_);
lean_dec(v_term_x3f_1387_);
lean_dec(v_mvarId_1385_);
v_a_1468_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1475_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1470_ = v___x_1424_;
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
else
{
lean_inc(v_a_1468_);
lean_dec(v___x_1424_);
v___x_1470_ = lean_box(0);
v_isShared_1471_ = v_isSharedCheck_1475_;
goto v_resetjp_1469_;
}
v_resetjp_1469_:
{
lean_object* v___x_1473_; 
if (v_isShared_1471_ == 0)
{
v___x_1473_ = v___x_1470_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1474_; 
v_reuseFailAlloc_1474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1474_, 0, v_a_1468_);
v___x_1473_ = v_reuseFailAlloc_1474_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
return v___x_1473_;
}
}
}
}
else
{
lean_object* v_a_1476_; lean_object* v___x_1478_; uint8_t v_isShared_1479_; uint8_t v_isSharedCheck_1483_; 
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
lean_dec(v_i_1391_);
lean_dec_ref(v_eType_1389_);
lean_dec_ref(v_targetType_1388_);
lean_dec(v_term_x3f_1387_);
lean_dec(v_mvarId_1385_);
v_a_1476_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1478_ = v___x_1420_;
v_isShared_1479_ = v_isSharedCheck_1483_;
goto v_resetjp_1477_;
}
else
{
lean_inc(v_a_1476_);
lean_dec(v___x_1420_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go___boxed(lean_object* v_mvarId_1484_, lean_object* v_cfg_1485_, lean_object* v_term_x3f_1486_, lean_object* v_targetType_1487_, lean_object* v_eType_1488_, lean_object* v_rangeNumArgs_1489_, lean_object* v_i_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(v_mvarId_1484_, v_cfg_1485_, v_term_x3f_1486_, v_targetType_1487_, v_eType_1488_, v_rangeNumArgs_1489_, v_i_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_);
lean_dec_ref(v_rangeNumArgs_1489_);
lean_dec_ref(v_cfg_1485_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter___redArg(lean_object* v_x_1497_, lean_object* v_h__1_1498_){
_start:
{
lean_object* v_snd_1499_; lean_object* v_fst_1500_; lean_object* v_fst_1501_; lean_object* v_snd_1502_; lean_object* v___x_1503_; 
v_snd_1499_ = lean_ctor_get(v_x_1497_, 1);
lean_inc(v_snd_1499_);
v_fst_1500_ = lean_ctor_get(v_x_1497_, 0);
lean_inc(v_fst_1500_);
lean_dec_ref(v_x_1497_);
v_fst_1501_ = lean_ctor_get(v_snd_1499_, 0);
lean_inc(v_fst_1501_);
v_snd_1502_ = lean_ctor_get(v_snd_1499_, 1);
lean_inc(v_snd_1502_);
lean_dec(v_snd_1499_);
v___x_1503_ = lean_apply_3(v_h__1_1498_, v_fst_1500_, v_fst_1501_, v_snd_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter(lean_object* v_motive_1504_, lean_object* v_x_1505_, lean_object* v_h__1_1506_){
_start:
{
lean_object* v_snd_1507_; lean_object* v_fst_1508_; lean_object* v_fst_1509_; lean_object* v_snd_1510_; lean_object* v___x_1511_; 
v_snd_1507_ = lean_ctor_get(v_x_1505_, 1);
lean_inc(v_snd_1507_);
v_fst_1508_ = lean_ctor_get(v_x_1505_, 0);
lean_inc(v_fst_1508_);
lean_dec_ref(v_x_1505_);
v_fst_1509_ = lean_ctor_get(v_snd_1507_, 0);
lean_inc(v_fst_1509_);
v_snd_1510_ = lean_ctor_get(v_snd_1507_, 1);
lean_inc(v_snd_1510_);
lean_dec(v_snd_1507_);
v___x_1511_ = lean_apply_3(v_h__1_1506_, v_fst_1508_, v_fst_1509_, v_snd_1510_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(lean_object* v_e_1512_, lean_object* v___y_1513_){
_start:
{
uint8_t v___x_1515_; 
v___x_1515_ = l_Lean_Expr_hasMVar(v_e_1512_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1516_, 0, v_e_1512_);
return v___x_1516_;
}
else
{
lean_object* v___x_1517_; lean_object* v_mctx_1518_; lean_object* v___x_1519_; lean_object* v_fst_1520_; lean_object* v_snd_1521_; lean_object* v___x_1522_; lean_object* v_cache_1523_; lean_object* v_zetaDeltaFVarIds_1524_; lean_object* v_postponed_1525_; lean_object* v_diag_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1535_; 
v___x_1517_ = lean_st_ref_get(v___y_1513_);
v_mctx_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc_ref(v_mctx_1518_);
lean_dec(v___x_1517_);
v___x_1519_ = l_Lean_instantiateMVarsCore(v_mctx_1518_, v_e_1512_);
v_fst_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_fst_1520_);
v_snd_1521_ = lean_ctor_get(v___x_1519_, 1);
lean_inc(v_snd_1521_);
lean_dec_ref(v___x_1519_);
v___x_1522_ = lean_st_ref_take(v___y_1513_);
v_cache_1523_ = lean_ctor_get(v___x_1522_, 1);
v_zetaDeltaFVarIds_1524_ = lean_ctor_get(v___x_1522_, 2);
v_postponed_1525_ = lean_ctor_get(v___x_1522_, 3);
v_diag_1526_ = lean_ctor_get(v___x_1522_, 4);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1522_);
if (v_isSharedCheck_1535_ == 0)
{
lean_object* v_unused_1536_; 
v_unused_1536_ = lean_ctor_get(v___x_1522_, 0);
lean_dec(v_unused_1536_);
v___x_1528_ = v___x_1522_;
v_isShared_1529_ = v_isSharedCheck_1535_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_diag_1526_);
lean_inc(v_postponed_1525_);
lean_inc(v_zetaDeltaFVarIds_1524_);
lean_inc(v_cache_1523_);
lean_dec(v___x_1522_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1535_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1531_; 
if (v_isShared_1529_ == 0)
{
lean_ctor_set(v___x_1528_, 0, v_snd_1521_);
v___x_1531_ = v___x_1528_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_snd_1521_);
lean_ctor_set(v_reuseFailAlloc_1534_, 1, v_cache_1523_);
lean_ctor_set(v_reuseFailAlloc_1534_, 2, v_zetaDeltaFVarIds_1524_);
lean_ctor_set(v_reuseFailAlloc_1534_, 3, v_postponed_1525_);
lean_ctor_set(v_reuseFailAlloc_1534_, 4, v_diag_1526_);
v___x_1531_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1532_ = lean_st_ref_set(v___y_1513_, v___x_1531_);
v___x_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1533_, 0, v_fst_1520_);
return v___x_1533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg___boxed(lean_object* v_e_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1537_, v___y_1538_);
lean_dec(v___y_1538_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(lean_object* v_e_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1541_, v___y_1543_);
return v___x_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___boxed(lean_object* v_e_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(v_e_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(lean_object* v_mvarId_1555_, lean_object* v_x_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v___x_1562_; 
v___x_1562_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1555_, v_x_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_);
if (lean_obj_tag(v___x_1562_) == 0)
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1570_; 
v_a_1563_ = lean_ctor_get(v___x_1562_, 0);
v_isSharedCheck_1570_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1565_ = v___x_1562_;
v_isShared_1566_ = v_isSharedCheck_1570_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v___x_1562_);
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
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1578_; 
v_a_1571_ = lean_ctor_get(v___x_1562_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1573_ = v___x_1562_;
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1562_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
if (v_isShared_1574_ == 0)
{
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg___boxed(lean_object* v_mvarId_1579_, lean_object* v_x_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_1579_, v_x_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(lean_object* v_00_u03b1_1587_, lean_object* v_mvarId_1588_, lean_object* v_x_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
lean_object* v___x_1595_; 
v___x_1595_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_1588_, v_x_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___boxed(lean_object* v_00_u03b1_1596_, lean_object* v_mvarId_1597_, lean_object* v_x_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(v_00_u03b1_1596_, v_mvarId_1597_, v_x_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(lean_object* v_as_1605_, size_t v_i_1606_, size_t v_stop_1607_, lean_object* v_b_1608_, lean_object* v___y_1609_){
_start:
{
lean_object* v_a_1612_; uint8_t v___x_1616_; 
v___x_1616_ = lean_usize_dec_eq(v_i_1606_, v_stop_1607_);
if (v___x_1616_ == 0)
{
lean_object* v___x_1617_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1617_ = lean_array_uget_borrowed(v_as_1605_, v_i_1606_);
v___x_1620_ = l_Lean_Expr_mvarId_x21(v___x_1617_);
v___x_1621_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_1620_, v___y_1609_);
lean_dec(v___x_1620_);
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1622_; uint8_t v___x_1623_; 
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1622_);
lean_dec_ref(v___x_1621_);
v___x_1623_ = lean_unbox(v_a_1622_);
lean_dec(v_a_1622_);
if (v___x_1623_ == 0)
{
goto v___jp_1618_;
}
else
{
v_a_1612_ = v_b_1608_;
goto v___jp_1611_;
}
}
else
{
if (lean_obj_tag(v___x_1621_) == 0)
{
lean_object* v_a_1624_; uint8_t v___x_1625_; 
v_a_1624_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1624_);
lean_dec_ref(v___x_1621_);
v___x_1625_ = lean_unbox(v_a_1624_);
lean_dec(v_a_1624_);
if (v___x_1625_ == 0)
{
v_a_1612_ = v_b_1608_;
goto v___jp_1611_;
}
else
{
goto v___jp_1618_;
}
}
else
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
lean_dec_ref(v_b_1608_);
v_a_1626_ = lean_ctor_get(v___x_1621_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1621_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1628_ = v___x_1621_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1621_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1626_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
}
v___jp_1618_:
{
lean_object* v___x_1619_; 
lean_inc(v___x_1617_);
v___x_1619_ = lean_array_push(v_b_1608_, v___x_1617_);
v_a_1612_ = v___x_1619_;
goto v___jp_1611_;
}
}
else
{
lean_object* v___x_1634_; 
v___x_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1634_, 0, v_b_1608_);
return v___x_1634_;
}
v___jp_1611_:
{
size_t v___x_1613_; size_t v___x_1614_; 
v___x_1613_ = ((size_t)1ULL);
v___x_1614_ = lean_usize_add(v_i_1606_, v___x_1613_);
v_i_1606_ = v___x_1614_;
v_b_1608_ = v_a_1612_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg___boxed(lean_object* v_as_1635_, lean_object* v_i_1636_, lean_object* v_stop_1637_, lean_object* v_b_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
size_t v_i_boxed_1641_; size_t v_stop_boxed_1642_; lean_object* v_res_1643_; 
v_i_boxed_1641_ = lean_unbox_usize(v_i_1636_);
lean_dec(v_i_1636_);
v_stop_boxed_1642_ = lean_unbox_usize(v_stop_1637_);
lean_dec(v_stop_1637_);
v_res_1643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_as_1635_, v_i_boxed_1641_, v_stop_boxed_1642_, v_b_1638_, v___y_1639_);
lean_dec(v___y_1639_);
lean_dec_ref(v_as_1635_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3(lean_object* v_as_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
if (lean_obj_tag(v_as_1644_) == 0)
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = lean_box(0);
v___x_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1650_);
return v___x_1651_;
}
else
{
lean_object* v_head_1652_; lean_object* v_tail_1653_; lean_object* v___x_1654_; 
v_head_1652_ = lean_ctor_get(v_as_1644_, 0);
lean_inc(v_head_1652_);
v_tail_1653_ = lean_ctor_get(v_as_1644_, 1);
lean_inc(v_tail_1653_);
lean_dec_ref(v_as_1644_);
v___x_1654_ = l_Lean_MVarId_headBetaType(v_head_1652_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_dec_ref(v___x_1654_);
v_as_1644_ = v_tail_1653_;
goto _start;
}
else
{
lean_dec(v_tail_1653_);
return v___x_1654_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3___boxed(lean_object* v_as_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_List_forM___at___00Lean_MVarId_apply_spec__3(v_as_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(lean_object* v_x_1663_, lean_object* v_x_1664_, lean_object* v_x_1665_, lean_object* v_x_1666_){
_start:
{
lean_object* v_ks_1667_; lean_object* v_vs_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1692_; 
v_ks_1667_ = lean_ctor_get(v_x_1663_, 0);
v_vs_1668_ = lean_ctor_get(v_x_1663_, 1);
v_isSharedCheck_1692_ = !lean_is_exclusive(v_x_1663_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1670_ = v_x_1663_;
v_isShared_1671_ = v_isSharedCheck_1692_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_vs_1668_);
lean_inc(v_ks_1667_);
lean_dec(v_x_1663_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1692_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1672_; uint8_t v___x_1673_; 
v___x_1672_ = lean_array_get_size(v_ks_1667_);
v___x_1673_ = lean_nat_dec_lt(v_x_1664_, v___x_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1677_; 
lean_dec(v_x_1664_);
v___x_1674_ = lean_array_push(v_ks_1667_, v_x_1665_);
v___x_1675_ = lean_array_push(v_vs_1668_, v_x_1666_);
if (v_isShared_1671_ == 0)
{
lean_ctor_set(v___x_1670_, 1, v___x_1675_);
lean_ctor_set(v___x_1670_, 0, v___x_1674_);
v___x_1677_ = v___x_1670_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v___x_1674_);
lean_ctor_set(v_reuseFailAlloc_1678_, 1, v___x_1675_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
else
{
lean_object* v_k_x27_1679_; uint8_t v___x_1680_; 
v_k_x27_1679_ = lean_array_fget_borrowed(v_ks_1667_, v_x_1664_);
v___x_1680_ = l_Lean_instBEqMVarId_beq(v_x_1665_, v_k_x27_1679_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1682_; 
if (v_isShared_1671_ == 0)
{
v___x_1682_ = v___x_1670_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_ks_1667_);
lean_ctor_set(v_reuseFailAlloc_1686_, 1, v_vs_1668_);
v___x_1682_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1683_ = lean_unsigned_to_nat(1u);
v___x_1684_ = lean_nat_add(v_x_1664_, v___x_1683_);
lean_dec(v_x_1664_);
v_x_1663_ = v___x_1682_;
v_x_1664_ = v___x_1684_;
goto _start;
}
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1690_; 
v___x_1687_ = lean_array_fset(v_ks_1667_, v_x_1664_, v_x_1665_);
v___x_1688_ = lean_array_fset(v_vs_1668_, v_x_1664_, v_x_1666_);
lean_dec(v_x_1664_);
if (v_isShared_1671_ == 0)
{
lean_ctor_set(v___x_1670_, 1, v___x_1688_);
lean_ctor_set(v___x_1670_, 0, v___x_1687_);
v___x_1690_ = v___x_1670_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v___x_1687_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v___x_1688_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(lean_object* v_n_1693_, lean_object* v_k_1694_, lean_object* v_v_1695_){
_start:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = lean_unsigned_to_nat(0u);
v___x_1697_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(v_n_1693_, v___x_1696_, v_k_1694_, v_v_1695_);
return v___x_1697_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1698_; 
v___x_1698_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(lean_object* v_x_1699_, size_t v_x_1700_, size_t v_x_1701_, lean_object* v_x_1702_, lean_object* v_x_1703_){
_start:
{
if (lean_obj_tag(v_x_1699_) == 0)
{
lean_object* v_es_1704_; size_t v___x_1705_; size_t v___x_1706_; size_t v___x_1707_; size_t v___x_1708_; lean_object* v_j_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v_es_1704_ = lean_ctor_get(v_x_1699_, 0);
v___x_1705_ = ((size_t)5ULL);
v___x_1706_ = ((size_t)1ULL);
v___x_1707_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1708_ = lean_usize_land(v_x_1700_, v___x_1707_);
v_j_1709_ = lean_usize_to_nat(v___x_1708_);
v___x_1710_ = lean_array_get_size(v_es_1704_);
v___x_1711_ = lean_nat_dec_lt(v_j_1709_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_dec(v_j_1709_);
lean_dec(v_x_1703_);
lean_dec(v_x_1702_);
return v_x_1699_;
}
else
{
lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1748_; 
lean_inc_ref(v_es_1704_);
v_isSharedCheck_1748_ = !lean_is_exclusive(v_x_1699_);
if (v_isSharedCheck_1748_ == 0)
{
lean_object* v_unused_1749_; 
v_unused_1749_ = lean_ctor_get(v_x_1699_, 0);
lean_dec(v_unused_1749_);
v___x_1713_ = v_x_1699_;
v_isShared_1714_ = v_isSharedCheck_1748_;
goto v_resetjp_1712_;
}
else
{
lean_dec(v_x_1699_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1748_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v_v_1715_; lean_object* v___x_1716_; lean_object* v_xs_x27_1717_; lean_object* v___y_1719_; 
v_v_1715_ = lean_array_fget(v_es_1704_, v_j_1709_);
v___x_1716_ = lean_box(0);
v_xs_x27_1717_ = lean_array_fset(v_es_1704_, v_j_1709_, v___x_1716_);
switch(lean_obj_tag(v_v_1715_))
{
case 0:
{
lean_object* v_key_1724_; lean_object* v_val_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1735_; 
v_key_1724_ = lean_ctor_get(v_v_1715_, 0);
v_val_1725_ = lean_ctor_get(v_v_1715_, 1);
v_isSharedCheck_1735_ = !lean_is_exclusive(v_v_1715_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1727_ = v_v_1715_;
v_isShared_1728_ = v_isSharedCheck_1735_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_val_1725_);
lean_inc(v_key_1724_);
lean_dec(v_v_1715_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1735_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
uint8_t v___x_1729_; 
v___x_1729_ = l_Lean_instBEqMVarId_beq(v_x_1702_, v_key_1724_);
if (v___x_1729_ == 0)
{
lean_object* v___x_1730_; lean_object* v___x_1731_; 
lean_del_object(v___x_1727_);
v___x_1730_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1724_, v_val_1725_, v_x_1702_, v_x_1703_);
v___x_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1730_);
v___y_1719_ = v___x_1731_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_1733_; 
lean_dec(v_val_1725_);
lean_dec(v_key_1724_);
if (v_isShared_1728_ == 0)
{
lean_ctor_set(v___x_1727_, 1, v_x_1703_);
lean_ctor_set(v___x_1727_, 0, v_x_1702_);
v___x_1733_ = v___x_1727_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v_x_1702_);
lean_ctor_set(v_reuseFailAlloc_1734_, 1, v_x_1703_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
v___y_1719_ = v___x_1733_;
goto v___jp_1718_;
}
}
}
}
case 1:
{
lean_object* v_node_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1746_; 
v_node_1736_ = lean_ctor_get(v_v_1715_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v_v_1715_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1738_ = v_v_1715_;
v_isShared_1739_ = v_isSharedCheck_1746_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_node_1736_);
lean_dec(v_v_1715_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1746_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
size_t v___x_1740_; size_t v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1744_; 
v___x_1740_ = lean_usize_shift_right(v_x_1700_, v___x_1705_);
v___x_1741_ = lean_usize_add(v_x_1701_, v___x_1706_);
v___x_1742_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_node_1736_, v___x_1740_, v___x_1741_, v_x_1702_, v_x_1703_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 0, v___x_1742_);
v___x_1744_ = v___x_1738_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v___x_1742_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
v___y_1719_ = v___x_1744_;
goto v___jp_1718_;
}
}
}
default: 
{
lean_object* v___x_1747_; 
v___x_1747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1747_, 0, v_x_1702_);
lean_ctor_set(v___x_1747_, 1, v_x_1703_);
v___y_1719_ = v___x_1747_;
goto v___jp_1718_;
}
}
v___jp_1718_:
{
lean_object* v___x_1720_; lean_object* v___x_1722_; 
v___x_1720_ = lean_array_fset(v_xs_x27_1717_, v_j_1709_, v___y_1719_);
lean_dec(v_j_1709_);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1720_);
v___x_1722_ = v___x_1713_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1720_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
else
{
lean_object* v_ks_1750_; lean_object* v_vs_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1771_; 
v_ks_1750_ = lean_ctor_get(v_x_1699_, 0);
v_vs_1751_ = lean_ctor_get(v_x_1699_, 1);
v_isSharedCheck_1771_ = !lean_is_exclusive(v_x_1699_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1753_ = v_x_1699_;
v_isShared_1754_ = v_isSharedCheck_1771_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_vs_1751_);
lean_inc(v_ks_1750_);
lean_dec(v_x_1699_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1771_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_ks_1750_);
lean_ctor_set(v_reuseFailAlloc_1770_, 1, v_vs_1751_);
v___x_1756_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
lean_object* v_newNode_1757_; uint8_t v___y_1759_; size_t v___x_1765_; uint8_t v___x_1766_; 
v_newNode_1757_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(v___x_1756_, v_x_1702_, v_x_1703_);
v___x_1765_ = ((size_t)7ULL);
v___x_1766_ = lean_usize_dec_le(v___x_1765_, v_x_1701_);
if (v___x_1766_ == 0)
{
lean_object* v___x_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; 
v___x_1767_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1757_);
v___x_1768_ = lean_unsigned_to_nat(4u);
v___x_1769_ = lean_nat_dec_lt(v___x_1767_, v___x_1768_);
lean_dec(v___x_1767_);
v___y_1759_ = v___x_1769_;
goto v___jp_1758_;
}
else
{
v___y_1759_ = v___x_1766_;
goto v___jp_1758_;
}
v___jp_1758_:
{
if (v___y_1759_ == 0)
{
lean_object* v_ks_1760_; lean_object* v_vs_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v_ks_1760_ = lean_ctor_get(v_newNode_1757_, 0);
lean_inc_ref(v_ks_1760_);
v_vs_1761_ = lean_ctor_get(v_newNode_1757_, 1);
lean_inc_ref(v_vs_1761_);
lean_dec_ref(v_newNode_1757_);
v___x_1762_ = lean_unsigned_to_nat(0u);
v___x_1763_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_1764_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_x_1701_, v_ks_1760_, v_vs_1761_, v___x_1762_, v___x_1763_);
lean_dec_ref(v_vs_1761_);
lean_dec_ref(v_ks_1760_);
return v___x_1764_;
}
else
{
return v_newNode_1757_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(size_t v_depth_1772_, lean_object* v_keys_1773_, lean_object* v_vals_1774_, lean_object* v_i_1775_, lean_object* v_entries_1776_){
_start:
{
lean_object* v___x_1777_; uint8_t v___x_1778_; 
v___x_1777_ = lean_array_get_size(v_keys_1773_);
v___x_1778_ = lean_nat_dec_lt(v_i_1775_, v___x_1777_);
if (v___x_1778_ == 0)
{
lean_dec(v_i_1775_);
return v_entries_1776_;
}
else
{
lean_object* v_k_1779_; lean_object* v_v_1780_; uint64_t v___x_1781_; size_t v_h_1782_; size_t v___x_1783_; lean_object* v___x_1784_; size_t v___x_1785_; size_t v___x_1786_; size_t v___x_1787_; size_t v_h_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v_k_1779_ = lean_array_fget_borrowed(v_keys_1773_, v_i_1775_);
v_v_1780_ = lean_array_fget_borrowed(v_vals_1774_, v_i_1775_);
v___x_1781_ = l_Lean_instHashableMVarId_hash(v_k_1779_);
v_h_1782_ = lean_uint64_to_usize(v___x_1781_);
v___x_1783_ = ((size_t)5ULL);
v___x_1784_ = lean_unsigned_to_nat(1u);
v___x_1785_ = ((size_t)1ULL);
v___x_1786_ = lean_usize_sub(v_depth_1772_, v___x_1785_);
v___x_1787_ = lean_usize_mul(v___x_1783_, v___x_1786_);
v_h_1788_ = lean_usize_shift_right(v_h_1782_, v___x_1787_);
v___x_1789_ = lean_nat_add(v_i_1775_, v___x_1784_);
lean_dec(v_i_1775_);
lean_inc(v_v_1780_);
lean_inc(v_k_1779_);
v___x_1790_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_entries_1776_, v_h_1788_, v_depth_1772_, v_k_1779_, v_v_1780_);
v_i_1775_ = v___x_1789_;
v_entries_1776_ = v___x_1790_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg___boxed(lean_object* v_depth_1792_, lean_object* v_keys_1793_, lean_object* v_vals_1794_, lean_object* v_i_1795_, lean_object* v_entries_1796_){
_start:
{
size_t v_depth_boxed_1797_; lean_object* v_res_1798_; 
v_depth_boxed_1797_ = lean_unbox_usize(v_depth_1792_);
lean_dec(v_depth_1792_);
v_res_1798_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_depth_boxed_1797_, v_keys_1793_, v_vals_1794_, v_i_1795_, v_entries_1796_);
lean_dec_ref(v_vals_1794_);
lean_dec_ref(v_keys_1793_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_1799_, lean_object* v_x_1800_, lean_object* v_x_1801_, lean_object* v_x_1802_, lean_object* v_x_1803_){
_start:
{
size_t v_x_7337__boxed_1804_; size_t v_x_7338__boxed_1805_; lean_object* v_res_1806_; 
v_x_7337__boxed_1804_ = lean_unbox_usize(v_x_1800_);
lean_dec(v_x_1800_);
v_x_7338__boxed_1805_ = lean_unbox_usize(v_x_1801_);
lean_dec(v_x_1801_);
v_res_1806_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_1799_, v_x_7337__boxed_1804_, v_x_7338__boxed_1805_, v_x_1802_, v_x_1803_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(lean_object* v_x_1807_, lean_object* v_x_1808_, lean_object* v_x_1809_){
_start:
{
uint64_t v___x_1810_; size_t v___x_1811_; size_t v___x_1812_; lean_object* v___x_1813_; 
v___x_1810_ = l_Lean_instHashableMVarId_hash(v_x_1808_);
v___x_1811_ = lean_uint64_to_usize(v___x_1810_);
v___x_1812_ = ((size_t)1ULL);
v___x_1813_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_1807_, v___x_1811_, v___x_1812_, v_x_1808_, v_x_1809_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(lean_object* v_mvarId_1814_, lean_object* v_val_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v___x_1818_; lean_object* v_mctx_1819_; lean_object* v_cache_1820_; lean_object* v_zetaDeltaFVarIds_1821_; lean_object* v_postponed_1822_; lean_object* v_diag_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1850_; 
v___x_1818_ = lean_st_ref_take(v___y_1816_);
v_mctx_1819_ = lean_ctor_get(v___x_1818_, 0);
v_cache_1820_ = lean_ctor_get(v___x_1818_, 1);
v_zetaDeltaFVarIds_1821_ = lean_ctor_get(v___x_1818_, 2);
v_postponed_1822_ = lean_ctor_get(v___x_1818_, 3);
v_diag_1823_ = lean_ctor_get(v___x_1818_, 4);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1825_ = v___x_1818_;
v_isShared_1826_ = v_isSharedCheck_1850_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_diag_1823_);
lean_inc(v_postponed_1822_);
lean_inc(v_zetaDeltaFVarIds_1821_);
lean_inc(v_cache_1820_);
lean_inc(v_mctx_1819_);
lean_dec(v___x_1818_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1850_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v_depth_1827_; lean_object* v_levelAssignDepth_1828_; lean_object* v_mvarCounter_1829_; lean_object* v_lDepth_1830_; lean_object* v_decls_1831_; lean_object* v_userNames_1832_; lean_object* v_lAssignment_1833_; lean_object* v_eAssignment_1834_; lean_object* v_dAssignment_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1849_; 
v_depth_1827_ = lean_ctor_get(v_mctx_1819_, 0);
v_levelAssignDepth_1828_ = lean_ctor_get(v_mctx_1819_, 1);
v_mvarCounter_1829_ = lean_ctor_get(v_mctx_1819_, 2);
v_lDepth_1830_ = lean_ctor_get(v_mctx_1819_, 3);
v_decls_1831_ = lean_ctor_get(v_mctx_1819_, 4);
v_userNames_1832_ = lean_ctor_get(v_mctx_1819_, 5);
v_lAssignment_1833_ = lean_ctor_get(v_mctx_1819_, 6);
v_eAssignment_1834_ = lean_ctor_get(v_mctx_1819_, 7);
v_dAssignment_1835_ = lean_ctor_get(v_mctx_1819_, 8);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_mctx_1819_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1837_ = v_mctx_1819_;
v_isShared_1838_ = v_isSharedCheck_1849_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_dAssignment_1835_);
lean_inc(v_eAssignment_1834_);
lean_inc(v_lAssignment_1833_);
lean_inc(v_userNames_1832_);
lean_inc(v_decls_1831_);
lean_inc(v_lDepth_1830_);
lean_inc(v_mvarCounter_1829_);
lean_inc(v_levelAssignDepth_1828_);
lean_inc(v_depth_1827_);
lean_dec(v_mctx_1819_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1849_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1839_; lean_object* v___x_1841_; 
v___x_1839_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(v_eAssignment_1834_, v_mvarId_1814_, v_val_1815_);
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 7, v___x_1839_);
v___x_1841_ = v___x_1837_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_depth_1827_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v_levelAssignDepth_1828_);
lean_ctor_set(v_reuseFailAlloc_1848_, 2, v_mvarCounter_1829_);
lean_ctor_set(v_reuseFailAlloc_1848_, 3, v_lDepth_1830_);
lean_ctor_set(v_reuseFailAlloc_1848_, 4, v_decls_1831_);
lean_ctor_set(v_reuseFailAlloc_1848_, 5, v_userNames_1832_);
lean_ctor_set(v_reuseFailAlloc_1848_, 6, v_lAssignment_1833_);
lean_ctor_set(v_reuseFailAlloc_1848_, 7, v___x_1839_);
lean_ctor_set(v_reuseFailAlloc_1848_, 8, v_dAssignment_1835_);
v___x_1841_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
lean_object* v___x_1843_; 
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 0, v___x_1841_);
v___x_1843_ = v___x_1825_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v___x_1841_);
lean_ctor_set(v_reuseFailAlloc_1847_, 1, v_cache_1820_);
lean_ctor_set(v_reuseFailAlloc_1847_, 2, v_zetaDeltaFVarIds_1821_);
lean_ctor_set(v_reuseFailAlloc_1847_, 3, v_postponed_1822_);
lean_ctor_set(v_reuseFailAlloc_1847_, 4, v_diag_1823_);
v___x_1843_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1844_ = lean_st_ref_set(v___y_1816_, v___x_1843_);
v___x_1845_ = lean_box(0);
v___x_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1845_);
return v___x_1846_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg___boxed(lean_object* v_mvarId_1851_, lean_object* v_val_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
lean_object* v_res_1855_; 
v_res_1855_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_1851_, v_val_1852_, v___y_1853_);
lean_dec(v___y_1853_);
return v_res_1855_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_MVarId_apply_spec__2(lean_object* v_a_1856_, lean_object* v_x_1857_){
_start:
{
if (lean_obj_tag(v_x_1857_) == 0)
{
uint8_t v___x_1858_; 
v___x_1858_ = 0;
return v___x_1858_;
}
else
{
lean_object* v_head_1859_; lean_object* v_tail_1860_; uint8_t v___x_1861_; 
v_head_1859_ = lean_ctor_get(v_x_1857_, 0);
v_tail_1860_ = lean_ctor_get(v_x_1857_, 1);
v___x_1861_ = l_Lean_instBEqMVarId_beq(v_a_1856_, v_head_1859_);
if (v___x_1861_ == 0)
{
v_x_1857_ = v_tail_1860_;
goto _start;
}
else
{
return v___x_1861_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_MVarId_apply_spec__2___boxed(lean_object* v_a_1863_, lean_object* v_x_1864_){
_start:
{
uint8_t v_res_1865_; lean_object* v_r_1866_; 
v_res_1865_ = l_List_elem___at___00Lean_MVarId_apply_spec__2(v_a_1863_, v_x_1864_);
lean_dec(v_x_1864_);
lean_dec(v_a_1863_);
v_r_1866_ = lean_box(v_res_1865_);
return v_r_1866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(lean_object* v_a_1867_, lean_object* v_as_1868_, size_t v_i_1869_, size_t v_stop_1870_, lean_object* v_b_1871_){
_start:
{
lean_object* v___y_1873_; uint8_t v___x_1877_; 
v___x_1877_ = lean_usize_dec_eq(v_i_1869_, v_stop_1870_);
if (v___x_1877_ == 0)
{
lean_object* v___x_1878_; uint8_t v___x_1879_; 
v___x_1878_ = lean_array_uget_borrowed(v_as_1868_, v_i_1869_);
v___x_1879_ = l_List_elem___at___00Lean_MVarId_apply_spec__2(v___x_1878_, v_a_1867_);
if (v___x_1879_ == 0)
{
lean_object* v___x_1880_; 
lean_inc(v___x_1878_);
v___x_1880_ = lean_array_push(v_b_1871_, v___x_1878_);
v___y_1873_ = v___x_1880_;
goto v___jp_1872_;
}
else
{
v___y_1873_ = v_b_1871_;
goto v___jp_1872_;
}
}
else
{
return v_b_1871_;
}
v___jp_1872_:
{
size_t v___x_1874_; size_t v___x_1875_; 
v___x_1874_ = ((size_t)1ULL);
v___x_1875_ = lean_usize_add(v_i_1869_, v___x_1874_);
v_i_1869_ = v___x_1875_;
v_b_1871_ = v___y_1873_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4___boxed(lean_object* v_a_1881_, lean_object* v_as_1882_, lean_object* v_i_1883_, lean_object* v_stop_1884_, lean_object* v_b_1885_){
_start:
{
size_t v_i_boxed_1886_; size_t v_stop_boxed_1887_; lean_object* v_res_1888_; 
v_i_boxed_1886_ = lean_unbox_usize(v_i_1883_);
lean_dec(v_i_1883_);
v_stop_boxed_1887_ = lean_unbox_usize(v_stop_1884_);
lean_dec(v_stop_1884_);
v_res_1888_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(v_a_1881_, v_as_1882_, v_i_boxed_1886_, v_stop_boxed_1887_, v_b_1885_);
lean_dec_ref(v_as_1882_);
lean_dec(v_a_1881_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0(lean_object* v_mvarId_1889_, lean_object* v___x_1890_, lean_object* v_e_1891_, lean_object* v_cfg_1892_, lean_object* v_term_x3f_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1926_; lean_object* v___y_1927_; uint8_t v___y_1928_; lean_object* v___y_1929_; lean_object* v___y_1930_; lean_object* v___y_1931_; lean_object* v___y_1932_; lean_object* v_a_1933_; lean_object* v___y_1957_; uint8_t v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; lean_object* v___y_1962_; lean_object* v___y_1963_; lean_object* v___y_1964_; lean_object* v___x_1974_; 
lean_inc(v___x_1890_);
lean_inc(v_mvarId_1889_);
v___x_1974_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1889_, v___x_1890_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v___x_1975_; 
lean_dec_ref(v___x_1974_);
lean_inc(v_mvarId_1889_);
v___x_1975_ = l_Lean_MVarId_getType(v_mvarId_1889_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v_a_1976_; lean_object* v___x_1977_; 
v_a_1976_ = lean_ctor_get(v___x_1975_, 0);
lean_inc(v_a_1976_);
lean_dec_ref(v___x_1975_);
lean_inc(v___y_1897_);
lean_inc_ref(v___y_1896_);
lean_inc(v___y_1895_);
lean_inc_ref(v___y_1894_);
lean_inc_ref(v_e_1891_);
v___x_1977_ = lean_infer_type(v_e_1891_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v_a_1978_; lean_object* v_rangeNumArgs_1980_; lean_object* v_lower_1981_; lean_object* v___y_1982_; lean_object* v___y_1983_; lean_object* v___y_1984_; lean_object* v___y_1985_; lean_object* v___x_2025_; 
v_a_1978_ = lean_ctor_get(v___x_1977_, 0);
lean_inc(v_a_1978_);
lean_dec_ref(v___x_1977_);
lean_inc(v___y_1897_);
lean_inc_ref(v___y_1896_);
lean_inc(v___y_1895_);
lean_inc_ref(v___y_1894_);
lean_inc(v_a_1978_);
v___x_2025_ = l_Lean_Meta_getExpectedNumArgsAux(v_a_1978_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v_a_2026_; lean_object* v_snd_2027_; uint8_t v___x_2028_; 
v_a_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_a_2026_);
lean_dec_ref(v___x_2025_);
v_snd_2027_ = lean_ctor_get(v_a_2026_, 1);
v___x_2028_ = lean_unbox(v_snd_2027_);
if (v___x_2028_ == 0)
{
lean_object* v_fst_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2049_; 
v_fst_2029_ = lean_ctor_get(v_a_2026_, 0);
v_isSharedCheck_2049_ = !lean_is_exclusive(v_a_2026_);
if (v_isSharedCheck_2049_ == 0)
{
lean_object* v_unused_2050_; 
v_unused_2050_ = lean_ctor_get(v_a_2026_, 1);
lean_dec(v_unused_2050_);
v___x_2031_ = v_a_2026_;
v_isShared_2032_ = v_isSharedCheck_2049_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_fst_2029_);
lean_dec(v_a_2026_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2049_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2033_; 
lean_inc(v___y_1897_);
lean_inc_ref(v___y_1896_);
lean_inc(v___y_1895_);
lean_inc_ref(v___y_1894_);
lean_inc(v_a_1976_);
v___x_2033_ = l_Lean_Meta_getExpectedNumArgs(v_a_1976_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v_a_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2039_; 
v_a_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2034_);
lean_dec_ref(v___x_2033_);
v___x_2035_ = lean_nat_sub(v_fst_2029_, v_a_2034_);
lean_dec(v_a_2034_);
v___x_2036_ = lean_unsigned_to_nat(1u);
v___x_2037_ = lean_nat_add(v_fst_2029_, v___x_2036_);
lean_dec(v_fst_2029_);
lean_inc(v___x_2035_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 1, v___x_2037_);
lean_ctor_set(v___x_2031_, 0, v___x_2035_);
v___x_2039_ = v___x_2031_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v___x_2035_);
lean_ctor_set(v_reuseFailAlloc_2040_, 1, v___x_2037_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
v_rangeNumArgs_1980_ = v___x_2039_;
v_lower_1981_ = v___x_2035_;
v___y_1982_ = v___y_1894_;
v___y_1983_ = v___y_1895_;
v___y_1984_ = v___y_1896_;
v___y_1985_ = v___y_1897_;
goto v___jp_1979_;
}
}
else
{
lean_object* v_a_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2048_; 
lean_del_object(v___x_2031_);
lean_dec(v_fst_2029_);
lean_dec(v_a_1978_);
lean_dec(v_a_1976_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v_term_x3f_1893_);
lean_dec_ref(v_e_1891_);
lean_dec(v___x_1890_);
lean_dec(v_mvarId_1889_);
v_a_2041_ = lean_ctor_get(v___x_2033_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2033_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2043_ = v___x_2033_;
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_a_2041_);
lean_dec(v___x_2033_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2046_; 
if (v_isShared_2044_ == 0)
{
v___x_2046_ = v___x_2043_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_a_2041_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
}
}
}
else
{
lean_object* v_fst_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2060_; 
v_fst_2051_ = lean_ctor_get(v_a_2026_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_a_2026_);
if (v_isSharedCheck_2060_ == 0)
{
lean_object* v_unused_2061_; 
v_unused_2061_ = lean_ctor_get(v_a_2026_, 1);
lean_dec(v_unused_2061_);
v___x_2053_ = v_a_2026_;
v_isShared_2054_ = v_isSharedCheck_2060_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_fst_2051_);
lean_dec(v_a_2026_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2060_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2055_ = lean_unsigned_to_nat(1u);
v___x_2056_ = lean_nat_add(v_fst_2051_, v___x_2055_);
lean_inc(v_fst_2051_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 1, v___x_2056_);
v___x_2058_ = v___x_2053_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_fst_2051_);
lean_ctor_set(v_reuseFailAlloc_2059_, 1, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
v_rangeNumArgs_1980_ = v___x_2058_;
v_lower_1981_ = v_fst_2051_;
v___y_1982_ = v___y_1894_;
v___y_1983_ = v___y_1895_;
v___y_1984_ = v___y_1896_;
v___y_1985_ = v___y_1897_;
goto v___jp_1979_;
}
}
}
}
else
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
lean_dec(v_a_1978_);
lean_dec(v_a_1976_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v_term_x3f_1893_);
lean_dec_ref(v_e_1891_);
lean_dec(v___x_1890_);
lean_dec(v_mvarId_1889_);
v_a_2062_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2064_ = v___x_2025_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_2025_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2062_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
v___jp_1979_:
{
lean_object* v___x_1986_; 
lean_inc(v___y_1985_);
lean_inc_ref(v___y_1984_);
lean_inc(v___y_1983_);
lean_inc_ref(v___y_1982_);
lean_inc(v_mvarId_1889_);
v___x_1986_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(v_mvarId_1889_, v_cfg_1892_, v_term_x3f_1893_, v_a_1976_, v_a_1978_, v_rangeNumArgs_1980_, v_lower_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_);
lean_dec_ref(v_rangeNumArgs_1980_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_object* v_a_1987_; lean_object* v_fst_1988_; lean_object* v_snd_1989_; uint8_t v_newGoals_1990_; uint8_t v_synthAssignedInstances_1991_; uint8_t v_allowSynthFailures_1992_; lean_object* v___x_1993_; 
v_a_1987_ = lean_ctor_get(v___x_1986_, 0);
lean_inc(v_a_1987_);
lean_dec_ref(v___x_1986_);
v_fst_1988_ = lean_ctor_get(v_a_1987_, 0);
lean_inc(v_fst_1988_);
v_snd_1989_ = lean_ctor_get(v_a_1987_, 1);
lean_inc(v_snd_1989_);
lean_dec(v_a_1987_);
v_newGoals_1990_ = lean_ctor_get_uint8(v_cfg_1892_, 0);
v_synthAssignedInstances_1991_ = lean_ctor_get_uint8(v_cfg_1892_, 1);
v_allowSynthFailures_1992_ = lean_ctor_get_uint8(v_cfg_1892_, 2);
lean_inc(v___y_1985_);
lean_inc_ref(v___y_1984_);
lean_inc(v___y_1983_);
lean_inc_ref(v___y_1982_);
lean_inc(v_mvarId_1889_);
v___x_1993_ = l_Lean_Meta_postprocessAppMVars(v___x_1890_, v_mvarId_1889_, v_fst_1988_, v_snd_1989_, v_synthAssignedInstances_1991_, v_allowSynthFailures_1992_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v___x_1994_; lean_object* v_a_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; uint8_t v___x_2001_; 
lean_dec_ref(v___x_1993_);
v___x_1994_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1891_, v___y_1983_);
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc(v_a_1995_);
lean_dec_ref(v___x_1994_);
lean_inc(v_a_1995_);
v___x_1996_ = l_Lean_mkAppN(v_a_1995_, v_fst_1988_);
v___x_1997_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_1889_, v___x_1996_, v___y_1983_);
lean_dec_ref(v___x_1997_);
v___x_1998_ = lean_unsigned_to_nat(0u);
v___x_1999_ = lean_array_get_size(v_fst_1988_);
v___x_2000_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0));
v___x_2001_ = lean_nat_dec_lt(v___x_1998_, v___x_1999_);
if (v___x_2001_ == 0)
{
lean_dec(v_fst_1988_);
v___y_1926_ = v___y_1983_;
v___y_1927_ = v___x_1998_;
v___y_1928_ = v_newGoals_1990_;
v___y_1929_ = v___y_1984_;
v___y_1930_ = v___y_1985_;
v___y_1931_ = v___y_1982_;
v___y_1932_ = v_a_1995_;
v_a_1933_ = v___x_2000_;
goto v___jp_1925_;
}
else
{
uint8_t v___x_2002_; 
v___x_2002_ = lean_nat_dec_le(v___x_1999_, v___x_1999_);
if (v___x_2002_ == 0)
{
if (v___x_2001_ == 0)
{
lean_dec(v_fst_1988_);
v___y_1926_ = v___y_1983_;
v___y_1927_ = v___x_1998_;
v___y_1928_ = v_newGoals_1990_;
v___y_1929_ = v___y_1984_;
v___y_1930_ = v___y_1985_;
v___y_1931_ = v___y_1982_;
v___y_1932_ = v_a_1995_;
v_a_1933_ = v___x_2000_;
goto v___jp_1925_;
}
else
{
size_t v___x_2003_; size_t v___x_2004_; lean_object* v___x_2005_; 
v___x_2003_ = ((size_t)0ULL);
v___x_2004_ = lean_usize_of_nat(v___x_1999_);
v___x_2005_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_fst_1988_, v___x_2003_, v___x_2004_, v___x_2000_, v___y_1983_);
lean_dec(v_fst_1988_);
v___y_1957_ = v___y_1983_;
v___y_1958_ = v_newGoals_1990_;
v___y_1959_ = v___x_1998_;
v___y_1960_ = v___y_1984_;
v___y_1961_ = v___y_1982_;
v___y_1962_ = v___y_1985_;
v___y_1963_ = v_a_1995_;
v___y_1964_ = v___x_2005_;
goto v___jp_1956_;
}
}
else
{
size_t v___x_2006_; size_t v___x_2007_; lean_object* v___x_2008_; 
v___x_2006_ = ((size_t)0ULL);
v___x_2007_ = lean_usize_of_nat(v___x_1999_);
v___x_2008_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_fst_1988_, v___x_2006_, v___x_2007_, v___x_2000_, v___y_1983_);
lean_dec(v_fst_1988_);
v___y_1957_ = v___y_1983_;
v___y_1958_ = v_newGoals_1990_;
v___y_1959_ = v___x_1998_;
v___y_1960_ = v___y_1984_;
v___y_1961_ = v___y_1982_;
v___y_1962_ = v___y_1985_;
v___y_1963_ = v_a_1995_;
v___y_1964_ = v___x_2008_;
goto v___jp_1956_;
}
}
}
else
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
lean_dec(v_fst_1988_);
lean_dec(v___y_1985_);
lean_dec_ref(v___y_1984_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec_ref(v_e_1891_);
lean_dec(v_mvarId_1889_);
v_a_2009_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___x_1993_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___x_1993_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2014_; 
if (v_isShared_2012_ == 0)
{
v___x_2014_ = v___x_2011_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_a_2009_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
else
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
lean_dec(v___y_1985_);
lean_dec_ref(v___y_1984_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec_ref(v_e_1891_);
lean_dec(v___x_1890_);
lean_dec(v_mvarId_1889_);
v_a_2017_ = lean_ctor_get(v___x_1986_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_1986_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_1986_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_dec(v_a_1976_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v_term_x3f_1893_);
lean_dec_ref(v_e_1891_);
lean_dec(v___x_1890_);
lean_dec(v_mvarId_1889_);
v_a_2070_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_1977_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_1977_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
else
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v_term_x3f_1893_);
lean_dec_ref(v_e_1891_);
lean_dec(v___x_1890_);
lean_dec(v_mvarId_1889_);
v_a_2078_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v___x_1975_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_1975_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2078_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v_term_x3f_1893_);
lean_dec_ref(v_e_1891_);
lean_dec(v___x_1890_);
lean_dec(v_mvarId_1889_);
v_a_2086_ = lean_ctor_get(v___x_1974_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_1974_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_1974_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_1974_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
v___jp_1899_:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1906_ = lean_array_to_list(v___y_1905_);
v___x_1907_ = l_List_appendTR___redArg(v___y_1901_, v___x_1906_);
lean_inc(v___x_1907_);
v___x_1908_ = l_List_forM___at___00Lean_MVarId_apply_spec__3(v___x_1907_, v___y_1904_, v___y_1900_, v___y_1902_, v___y_1903_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1904_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1915_ == 0)
{
lean_object* v_unused_1916_; 
v_unused_1916_ = lean_ctor_get(v___x_1908_, 0);
lean_dec(v_unused_1916_);
v___x_1910_ = v___x_1908_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_dec(v___x_1908_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
lean_ctor_set(v___x_1910_, 0, v___x_1907_);
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v___x_1907_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
lean_dec(v___x_1907_);
v_a_1917_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1919_ = v___x_1908_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1908_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1917_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
v___jp_1925_:
{
lean_object* v___x_1934_; 
v___x_1934_ = l_Lean_Meta_getMVarsNoDelayed(v___y_1932_, v___y_1931_, v___y_1926_, v___y_1929_, v___y_1930_);
if (lean_obj_tag(v___x_1934_) == 0)
{
lean_object* v_a_1935_; lean_object* v___x_1936_; 
v_a_1935_ = lean_ctor_get(v___x_1934_, 0);
lean_inc(v_a_1935_);
lean_dec_ref(v___x_1934_);
lean_inc(v___y_1930_);
lean_inc_ref(v___y_1929_);
lean_inc(v___y_1926_);
lean_inc_ref(v___y_1931_);
v___x_1936_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(v_a_1933_, v___y_1928_, v___y_1931_, v___y_1926_, v___y_1929_, v___y_1930_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v_a_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; uint8_t v___x_1940_; 
v_a_1937_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1937_);
lean_dec_ref(v___x_1936_);
v___x_1938_ = lean_array_get_size(v_a_1935_);
v___x_1939_ = lean_mk_empty_array_with_capacity(v___y_1927_);
v___x_1940_ = lean_nat_dec_lt(v___y_1927_, v___x_1938_);
if (v___x_1940_ == 0)
{
lean_dec(v_a_1935_);
v___y_1900_ = v___y_1926_;
v___y_1901_ = v_a_1937_;
v___y_1902_ = v___y_1929_;
v___y_1903_ = v___y_1930_;
v___y_1904_ = v___y_1931_;
v___y_1905_ = v___x_1939_;
goto v___jp_1899_;
}
else
{
uint8_t v___x_1941_; 
v___x_1941_ = lean_nat_dec_le(v___x_1938_, v___x_1938_);
if (v___x_1941_ == 0)
{
if (v___x_1940_ == 0)
{
lean_dec(v_a_1935_);
v___y_1900_ = v___y_1926_;
v___y_1901_ = v_a_1937_;
v___y_1902_ = v___y_1929_;
v___y_1903_ = v___y_1930_;
v___y_1904_ = v___y_1931_;
v___y_1905_ = v___x_1939_;
goto v___jp_1899_;
}
else
{
size_t v___x_1942_; size_t v___x_1943_; lean_object* v___x_1944_; 
v___x_1942_ = ((size_t)0ULL);
v___x_1943_ = lean_usize_of_nat(v___x_1938_);
v___x_1944_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(v_a_1937_, v_a_1935_, v___x_1942_, v___x_1943_, v___x_1939_);
lean_dec(v_a_1935_);
v___y_1900_ = v___y_1926_;
v___y_1901_ = v_a_1937_;
v___y_1902_ = v___y_1929_;
v___y_1903_ = v___y_1930_;
v___y_1904_ = v___y_1931_;
v___y_1905_ = v___x_1944_;
goto v___jp_1899_;
}
}
else
{
size_t v___x_1945_; size_t v___x_1946_; lean_object* v___x_1947_; 
v___x_1945_ = ((size_t)0ULL);
v___x_1946_ = lean_usize_of_nat(v___x_1938_);
v___x_1947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(v_a_1937_, v_a_1935_, v___x_1945_, v___x_1946_, v___x_1939_);
lean_dec(v_a_1935_);
v___y_1900_ = v___y_1926_;
v___y_1901_ = v_a_1937_;
v___y_1902_ = v___y_1929_;
v___y_1903_ = v___y_1930_;
v___y_1904_ = v___y_1931_;
v___y_1905_ = v___x_1947_;
goto v___jp_1899_;
}
}
}
else
{
lean_dec(v_a_1935_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v___y_1926_);
return v___x_1936_;
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec_ref(v_a_1933_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v___y_1926_);
v_a_1948_ = lean_ctor_get(v___x_1934_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1934_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1934_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1934_);
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
v___jp_1956_:
{
if (lean_obj_tag(v___y_1964_) == 0)
{
lean_object* v_a_1965_; 
v_a_1965_ = lean_ctor_get(v___y_1964_, 0);
lean_inc(v_a_1965_);
lean_dec_ref(v___y_1964_);
v___y_1926_ = v___y_1957_;
v___y_1927_ = v___y_1959_;
v___y_1928_ = v___y_1958_;
v___y_1929_ = v___y_1960_;
v___y_1930_ = v___y_1962_;
v___y_1931_ = v___y_1961_;
v___y_1932_ = v___y_1963_;
v_a_1933_ = v_a_1965_;
goto v___jp_1925_;
}
else
{
lean_object* v_a_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1973_; 
lean_dec_ref(v___y_1963_);
lean_dec(v___y_1962_);
lean_dec_ref(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1957_);
v_a_1966_ = lean_ctor_get(v___y_1964_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___y_1964_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1968_ = v___y_1964_;
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_a_1966_);
lean_dec(v___y_1964_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1971_; 
if (v_isShared_1969_ == 0)
{
v___x_1971_ = v___x_1968_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_a_1966_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0___boxed(lean_object* v_mvarId_2094_, lean_object* v___x_2095_, lean_object* v_e_2096_, lean_object* v_cfg_2097_, lean_object* v_term_x3f_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l_Lean_MVarId_apply___lam__0(v_mvarId_2094_, v___x_2095_, v_e_2096_, v_cfg_2097_, v_term_x3f_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
lean_dec_ref(v_cfg_2097_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply(lean_object* v_mvarId_2105_, lean_object* v_e_2106_, lean_object* v_cfg_2107_, lean_object* v_term_x3f_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_){
_start:
{
lean_object* v___x_2114_; lean_object* v___f_2115_; lean_object* v___x_2116_; 
v___x_2114_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1));
lean_inc(v_mvarId_2105_);
v___f_2115_ = lean_alloc_closure((void*)(l_Lean_MVarId_apply___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2115_, 0, v_mvarId_2105_);
lean_closure_set(v___f_2115_, 1, v___x_2114_);
lean_closure_set(v___f_2115_, 2, v_e_2106_);
lean_closure_set(v___f_2115_, 3, v_cfg_2107_);
lean_closure_set(v___f_2115_, 4, v_term_x3f_2108_);
v___x_2116_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2105_, v___f_2115_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
return v___x_2116_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___boxed(lean_object* v_mvarId_2117_, lean_object* v_e_2118_, lean_object* v_cfg_2119_, lean_object* v_term_x3f_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lean_MVarId_apply(v_mvarId_2117_, v_e_2118_, v_cfg_2119_, v_term_x3f_2120_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(lean_object* v_mvarId_2127_, lean_object* v_val_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_){
_start:
{
lean_object* v___x_2134_; 
v___x_2134_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2127_, v_val_2128_, v___y_2130_);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___boxed(lean_object* v_mvarId_2135_, lean_object* v_val_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(v_mvarId_2135_, v_val_2136_, v___y_2137_, v___y_2138_, v___y_2139_, v___y_2140_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(lean_object* v_as_2143_, size_t v_i_2144_, size_t v_stop_2145_, lean_object* v_b_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v___x_2152_; 
v___x_2152_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_as_2143_, v_i_2144_, v_stop_2145_, v_b_2146_, v___y_2148_);
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___boxed(lean_object* v_as_2153_, lean_object* v_i_2154_, lean_object* v_stop_2155_, lean_object* v_b_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
size_t v_i_boxed_2162_; size_t v_stop_boxed_2163_; lean_object* v_res_2164_; 
v_i_boxed_2162_ = lean_unbox_usize(v_i_2154_);
lean_dec(v_i_2154_);
v_stop_boxed_2163_ = lean_unbox_usize(v_stop_2155_);
lean_dec(v_stop_2155_);
v_res_2164_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(v_as_2153_, v_i_boxed_2162_, v_stop_boxed_2163_, v_b_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_);
lean_dec(v___y_2160_);
lean_dec_ref(v___y_2159_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec_ref(v_as_2153_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1(lean_object* v_00_u03b2_2165_, lean_object* v_x_2166_, lean_object* v_x_2167_, lean_object* v_x_2168_){
_start:
{
lean_object* v___x_2169_; 
v___x_2169_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(v_x_2166_, v_x_2167_, v_x_2168_);
return v___x_2169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_2170_, lean_object* v_x_2171_, size_t v_x_2172_, size_t v_x_2173_, lean_object* v_x_2174_, lean_object* v_x_2175_){
_start:
{
lean_object* v___x_2176_; 
v___x_2176_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_2171_, v_x_2172_, v_x_2173_, v_x_2174_, v_x_2175_);
return v___x_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_, lean_object* v_x_2181_, lean_object* v_x_2182_){
_start:
{
size_t v_x_8059__boxed_2183_; size_t v_x_8060__boxed_2184_; lean_object* v_res_2185_; 
v_x_8059__boxed_2183_ = lean_unbox_usize(v_x_2179_);
lean_dec(v_x_2179_);
v_x_8060__boxed_2184_ = lean_unbox_usize(v_x_2180_);
lean_dec(v_x_2180_);
v_res_2185_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(v_00_u03b2_2177_, v_x_2178_, v_x_8059__boxed_2183_, v_x_8060__boxed_2184_, v_x_2181_, v_x_2182_);
return v_res_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_2186_, lean_object* v_n_2187_, lean_object* v_k_2188_, lean_object* v_v_2189_){
_start:
{
lean_object* v___x_2190_; 
v___x_2190_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(v_n_2187_, v_k_2188_, v_v_2189_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(lean_object* v_00_u03b2_2191_, size_t v_depth_2192_, lean_object* v_keys_2193_, lean_object* v_vals_2194_, lean_object* v_heq_2195_, lean_object* v_i_2196_, lean_object* v_entries_2197_){
_start:
{
lean_object* v___x_2198_; 
v___x_2198_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_depth_2192_, v_keys_2193_, v_vals_2194_, v_i_2196_, v_entries_2197_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___boxed(lean_object* v_00_u03b2_2199_, lean_object* v_depth_2200_, lean_object* v_keys_2201_, lean_object* v_vals_2202_, lean_object* v_heq_2203_, lean_object* v_i_2204_, lean_object* v_entries_2205_){
_start:
{
size_t v_depth_boxed_2206_; lean_object* v_res_2207_; 
v_depth_boxed_2206_ = lean_unbox_usize(v_depth_2200_);
lean_dec(v_depth_2200_);
v_res_2207_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(v_00_u03b2_2199_, v_depth_boxed_2206_, v_keys_2201_, v_vals_2202_, v_heq_2203_, v_i_2204_, v_entries_2205_);
lean_dec_ref(v_vals_2202_);
lean_dec_ref(v_keys_2201_);
return v_res_2207_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9(lean_object* v_00_u03b2_2208_, lean_object* v_x_2209_, lean_object* v_x_2210_, lean_object* v_x_2211_, lean_object* v_x_2212_){
_start:
{
lean_object* v___x_2213_; 
v___x_2213_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(v_x_2209_, v_x_2210_, v_x_2211_, v_x_2212_);
return v___x_2213_;
}
}
static lean_object* _init_l_Lean_MVarId_applyConst___closed__1(void){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2215_ = ((lean_object*)(l_Lean_MVarId_applyConst___closed__0));
v___x_2216_ = l_Lean_stringToMessageData(v___x_2215_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst(lean_object* v_mvar_2217_, lean_object* v_c_2218_, lean_object* v_cfg_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_){
_start:
{
lean_object* v___x_2225_; 
lean_inc_ref(v_a_2222_);
lean_inc(v_c_2218_);
v___x_2225_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_c_2218_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
if (lean_obj_tag(v___x_2225_) == 0)
{
lean_object* v_a_2226_; lean_object* v___x_2227_; uint8_t v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v_a_2226_ = lean_ctor_get(v___x_2225_, 0);
lean_inc(v_a_2226_);
lean_dec_ref(v___x_2225_);
v___x_2227_ = lean_obj_once(&l_Lean_MVarId_applyConst___closed__1, &l_Lean_MVarId_applyConst___closed__1_once, _init_l_Lean_MVarId_applyConst___closed__1);
v___x_2228_ = 0;
v___x_2229_ = l_Lean_MessageData_ofConstName(v_c_2218_, v___x_2228_);
v___x_2230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2230_, 0, v___x_2227_);
lean_ctor_set(v___x_2230_, 1, v___x_2229_);
v___x_2231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2230_);
lean_ctor_set(v___x_2231_, 1, v___x_2227_);
v___x_2232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2232_, 0, v___x_2231_);
v___x_2233_ = l_Lean_MVarId_apply(v_mvar_2217_, v_a_2226_, v_cfg_2219_, v___x_2232_, v_a_2220_, v_a_2221_, v_a_2222_, v_a_2223_);
return v___x_2233_;
}
else
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
lean_dec(v_a_2223_);
lean_dec_ref(v_a_2222_);
lean_dec(v_a_2221_);
lean_dec_ref(v_a_2220_);
lean_dec_ref(v_cfg_2219_);
lean_dec(v_c_2218_);
lean_dec(v_mvar_2217_);
v_a_2234_ = lean_ctor_get(v___x_2225_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2225_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2225_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2225_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst___boxed(lean_object* v_mvar_2242_, lean_object* v_c_2243_, lean_object* v_cfg_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_Lean_MVarId_applyConst(v_mvar_2242_, v_c_2243_, v_cfg_2244_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(lean_object* v_msgData_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v___x_2257_; lean_object* v_env_2258_; lean_object* v___x_2259_; lean_object* v_mctx_2260_; lean_object* v_lctx_2261_; lean_object* v_options_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2257_ = lean_st_ref_get(v___y_2255_);
v_env_2258_ = lean_ctor_get(v___x_2257_, 0);
lean_inc_ref(v_env_2258_);
lean_dec(v___x_2257_);
v___x_2259_ = lean_st_ref_get(v___y_2253_);
v_mctx_2260_ = lean_ctor_get(v___x_2259_, 0);
lean_inc_ref(v_mctx_2260_);
lean_dec(v___x_2259_);
v_lctx_2261_ = lean_ctor_get(v___y_2252_, 2);
v_options_2262_ = lean_ctor_get(v___y_2254_, 2);
lean_inc_ref(v_options_2262_);
lean_inc_ref(v_lctx_2261_);
v___x_2263_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2263_, 0, v_env_2258_);
lean_ctor_set(v___x_2263_, 1, v_mctx_2260_);
lean_ctor_set(v___x_2263_, 2, v_lctx_2261_);
lean_ctor_set(v___x_2263_, 3, v_options_2262_);
v___x_2264_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2263_);
lean_ctor_set(v___x_2264_, 1, v_msgData_2251_);
v___x_2265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1___boxed(lean_object* v_msgData_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(v_msgData_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2268_);
lean_dec_ref(v___y_2267_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(lean_object* v_msg_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v_ref_2279_; lean_object* v___x_2280_; lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2289_; 
v_ref_2279_ = lean_ctor_get(v___y_2276_, 5);
v___x_2280_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(v_msg_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2283_ = v___x_2280_;
v_isShared_2284_ = v_isSharedCheck_2289_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2280_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2289_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2285_; lean_object* v___x_2287_; 
lean_inc(v_ref_2279_);
v___x_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2285_, 0, v_ref_2279_);
lean_ctor_set(v___x_2285_, 1, v_a_2281_);
if (v_isShared_2284_ == 0)
{
lean_ctor_set_tag(v___x_2283_, 1);
lean_ctor_set(v___x_2283_, 0, v___x_2285_);
v___x_2287_ = v___x_2283_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v___x_2285_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg___boxed(lean_object* v_msg_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v_res_2296_; 
v_res_2296_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v_msg_2290_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
lean_dec(v___y_2294_);
lean_dec_ref(v___y_2293_);
lean_dec(v___y_2292_);
lean_dec_ref(v___y_2291_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(size_t v_sz_2297_, size_t v_i_2298_, lean_object* v_bs_2299_){
_start:
{
uint8_t v___x_2300_; 
v___x_2300_ = lean_usize_dec_lt(v_i_2298_, v_sz_2297_);
if (v___x_2300_ == 0)
{
return v_bs_2299_;
}
else
{
lean_object* v_v_2301_; lean_object* v___x_2302_; lean_object* v_bs_x27_2303_; lean_object* v___x_2304_; size_t v___x_2305_; size_t v___x_2306_; lean_object* v___x_2307_; 
v_v_2301_ = lean_array_uget(v_bs_2299_, v_i_2298_);
v___x_2302_ = lean_unsigned_to_nat(0u);
v_bs_x27_2303_ = lean_array_uset(v_bs_2299_, v_i_2298_, v___x_2302_);
v___x_2304_ = l_Lean_Expr_mvarId_x21(v_v_2301_);
lean_dec(v_v_2301_);
v___x_2305_ = ((size_t)1ULL);
v___x_2306_ = lean_usize_add(v_i_2298_, v___x_2305_);
v___x_2307_ = lean_array_uset(v_bs_x27_2303_, v_i_2298_, v___x_2304_);
v_i_2298_ = v___x_2306_;
v_bs_2299_ = v___x_2307_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0___boxed(lean_object* v_sz_2309_, lean_object* v_i_2310_, lean_object* v_bs_2311_){
_start:
{
size_t v_sz_boxed_2312_; size_t v_i_boxed_2313_; lean_object* v_res_2314_; 
v_sz_boxed_2312_ = lean_unbox_usize(v_sz_2309_);
lean_dec(v_sz_2309_);
v_i_boxed_2313_ = lean_unbox_usize(v_i_2310_);
lean_dec(v_i_2310_);
v_res_2314_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(v_sz_boxed_2312_, v_i_boxed_2313_, v_bs_2311_);
return v_res_2314_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2316_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__0));
v___x_2317_ = l_Lean_stringToMessageData(v___x_2316_);
return v___x_2317_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__2));
v___x_2320_ = l_Lean_stringToMessageData(v___x_2319_);
return v___x_2320_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__4));
v___x_2323_ = l_Lean_stringToMessageData(v___x_2322_);
return v___x_2323_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__6));
v___x_2326_ = l_Lean_stringToMessageData(v___x_2325_);
return v___x_2326_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__8));
v___x_2329_ = l_Lean_stringToMessageData(v___x_2328_);
return v___x_2329_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__11(void){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; 
v___x_2331_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__10));
v___x_2332_ = l_Lean_stringToMessageData(v___x_2331_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0(lean_object* v_mvarId_2333_, lean_object* v___x_2334_, lean_object* v_e_2335_, lean_object* v_n_2336_, uint8_t v_useApproxDefEq_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_){
_start:
{
lean_object* v___x_2343_; 
lean_inc(v_mvarId_2333_);
v___x_2343_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2333_, v___x_2334_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
if (lean_obj_tag(v___x_2343_) == 0)
{
lean_object* v___x_2344_; 
lean_dec_ref(v___x_2343_);
lean_inc(v_mvarId_2333_);
v___x_2344_ = l_Lean_MVarId_getType(v_mvarId_2333_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
if (lean_obj_tag(v___x_2344_) == 0)
{
lean_object* v_a_2345_; lean_object* v___x_2346_; 
v_a_2345_ = lean_ctor_get(v___x_2344_, 0);
lean_inc(v_a_2345_);
lean_dec_ref(v___x_2344_);
lean_inc(v___y_2341_);
lean_inc_ref(v___y_2340_);
lean_inc(v___y_2339_);
lean_inc_ref(v___y_2338_);
lean_inc_ref(v_e_2335_);
v___x_2346_ = lean_infer_type(v_e_2335_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; uint8_t v___x_2348_; lean_object* v___x_2349_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
lean_inc(v_a_2347_);
lean_dec_ref(v___x_2346_);
v___x_2348_ = 0;
lean_inc(v___y_2341_);
lean_inc_ref(v___y_2340_);
lean_inc(v___y_2339_);
lean_inc_ref(v___y_2338_);
lean_inc(v_n_2336_);
v___x_2349_ = l_Lean_Meta_forallMetaBoundedTelescope(v_a_2347_, v_n_2336_, v___x_2348_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
if (lean_obj_tag(v___x_2349_) == 0)
{
lean_object* v_a_2350_; lean_object* v_fst_2351_; lean_object* v_snd_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2442_; 
v_a_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_a_2350_);
lean_dec_ref(v___x_2349_);
v_fst_2351_ = lean_ctor_get(v_a_2350_, 0);
v_snd_2352_ = lean_ctor_get(v_a_2350_, 1);
v_isSharedCheck_2442_ = !lean_is_exclusive(v_a_2350_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2354_ = v_a_2350_;
v_isShared_2355_ = v_isSharedCheck_2442_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_snd_2352_);
lean_inc(v_fst_2351_);
lean_dec(v_a_2350_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2442_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___y_2357_; lean_object* v_snd_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2440_; 
v_snd_2372_ = lean_ctor_get(v_snd_2352_, 1);
v_isSharedCheck_2440_ = !lean_is_exclusive(v_snd_2352_);
if (v_isSharedCheck_2440_ == 0)
{
lean_object* v_unused_2441_; 
v_unused_2441_ = lean_ctor_get(v_snd_2352_, 0);
lean_dec(v_unused_2441_);
v___x_2374_ = v_snd_2352_;
v_isShared_2375_ = v_isSharedCheck_2440_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_snd_2372_);
lean_dec(v_snd_2352_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2440_;
goto v_resetjp_2373_;
}
v___jp_2356_:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2370_; 
lean_inc(v_fst_2351_);
v___x_2358_ = l_Lean_Expr_beta(v_e_2335_, v_fst_2351_);
v___x_2359_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2333_, v___x_2358_, v___y_2357_);
lean_dec(v___y_2357_);
v_isSharedCheck_2370_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2370_ == 0)
{
lean_object* v_unused_2371_; 
v_unused_2371_ = lean_ctor_get(v___x_2359_, 0);
lean_dec(v_unused_2371_);
v___x_2361_ = v___x_2359_;
v_isShared_2362_ = v_isSharedCheck_2370_;
goto v_resetjp_2360_;
}
else
{
lean_dec(v___x_2359_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2370_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
size_t v_sz_2363_; size_t v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2368_; 
v_sz_2363_ = lean_array_size(v_fst_2351_);
v___x_2364_ = ((size_t)0ULL);
v___x_2365_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(v_sz_2363_, v___x_2364_, v_fst_2351_);
v___x_2366_ = lean_array_to_list(v___x_2365_);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 0, v___x_2366_);
v___x_2368_ = v___x_2361_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v___x_2366_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
v_resetjp_2373_:
{
lean_object* v___y_2377_; lean_object* v___y_2378_; lean_object* v___y_2379_; lean_object* v___y_2380_; lean_object* v___x_2420_; uint8_t v___x_2421_; 
v___x_2420_ = lean_array_get_size(v_fst_2351_);
v___x_2421_ = lean_nat_dec_eq(v___x_2420_, v_n_2336_);
if (v___x_2421_ == 0)
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v_a_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2439_; 
lean_del_object(v___x_2374_);
lean_del_object(v___x_2354_);
lean_dec(v_fst_2351_);
lean_dec(v_a_2345_);
lean_dec_ref(v_e_2335_);
lean_dec(v_mvarId_2333_);
v___x_2422_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__9, &l_Lean_MVarId_applyN___lam__0___closed__9_once, _init_l_Lean_MVarId_applyN___lam__0___closed__9);
v___x_2423_ = l_Nat_reprFast(v_n_2336_);
v___x_2424_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2423_);
v___x_2425_ = l_Lean_MessageData_ofFormat(v___x_2424_);
v___x_2426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2422_);
lean_ctor_set(v___x_2426_, 1, v___x_2425_);
v___x_2427_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__11, &l_Lean_MVarId_applyN___lam__0___closed__11_once, _init_l_Lean_MVarId_applyN___lam__0___closed__11);
v___x_2428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2426_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v___x_2429_ = l_Lean_indentExpr(v_snd_2372_);
v___x_2430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2428_);
lean_ctor_set(v___x_2430_, 1, v___x_2429_);
v___x_2431_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_2430_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
v_a_2432_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2434_ = v___x_2431_;
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_a_2432_);
lean_dec(v___x_2431_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2437_; 
if (v_isShared_2435_ == 0)
{
v___x_2437_ = v___x_2434_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_a_2432_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
else
{
v___y_2377_ = v___y_2338_;
v___y_2378_ = v___y_2339_;
v___y_2379_ = v___y_2340_;
v___y_2380_ = v___y_2341_;
goto v___jp_2376_;
}
v___jp_2376_:
{
lean_object* v___x_2381_; 
lean_inc(v___y_2380_);
lean_inc_ref(v___y_2379_);
lean_inc(v___y_2378_);
lean_inc_ref(v___y_2377_);
lean_inc(v_a_2345_);
lean_inc(v_snd_2372_);
v___x_2381_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_useApproxDefEq_2337_, v_snd_2372_, v_a_2345_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; uint8_t v___x_2383_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
lean_inc(v_a_2382_);
lean_dec_ref(v___x_2381_);
v___x_2383_ = lean_unbox(v_a_2382_);
lean_dec(v_a_2382_);
if (v___x_2383_ == 0)
{
lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2387_; 
lean_dec(v_fst_2351_);
lean_dec_ref(v_e_2335_);
lean_dec(v_mvarId_2333_);
v___x_2384_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__1, &l_Lean_MVarId_applyN___lam__0___closed__1_once, _init_l_Lean_MVarId_applyN___lam__0___closed__1);
v___x_2385_ = l_Lean_indentExpr(v_a_2345_);
if (v_isShared_2375_ == 0)
{
lean_ctor_set_tag(v___x_2374_, 7);
lean_ctor_set(v___x_2374_, 1, v___x_2385_);
lean_ctor_set(v___x_2374_, 0, v___x_2384_);
v___x_2387_ = v___x_2374_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v___x_2384_);
lean_ctor_set(v_reuseFailAlloc_2411_, 1, v___x_2385_);
v___x_2387_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
lean_object* v___x_2388_; lean_object* v___x_2390_; 
v___x_2388_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__3, &l_Lean_MVarId_applyN___lam__0___closed__3_once, _init_l_Lean_MVarId_applyN___lam__0___closed__3);
if (v_isShared_2355_ == 0)
{
lean_ctor_set_tag(v___x_2354_, 7);
lean_ctor_set(v___x_2354_, 1, v___x_2388_);
lean_ctor_set(v___x_2354_, 0, v___x_2387_);
v___x_2390_ = v___x_2354_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2387_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v___x_2388_);
v___x_2390_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v_a_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2409_; 
v___x_2391_ = l_Lean_indentExpr(v_snd_2372_);
v___x_2392_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2392_, 0, v___x_2390_);
lean_ctor_set(v___x_2392_, 1, v___x_2391_);
v___x_2393_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__5, &l_Lean_MVarId_applyN___lam__0___closed__5_once, _init_l_Lean_MVarId_applyN___lam__0___closed__5);
v___x_2394_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2394_, 0, v___x_2392_);
lean_ctor_set(v___x_2394_, 1, v___x_2393_);
v___x_2395_ = l_Nat_reprFast(v_n_2336_);
v___x_2396_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
v___x_2397_ = l_Lean_MessageData_ofFormat(v___x_2396_);
v___x_2398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2398_, 0, v___x_2394_);
lean_ctor_set(v___x_2398_, 1, v___x_2397_);
v___x_2399_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__7, &l_Lean_MVarId_applyN___lam__0___closed__7_once, _init_l_Lean_MVarId_applyN___lam__0___closed__7);
v___x_2400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2400_, 0, v___x_2398_);
lean_ctor_set(v___x_2400_, 1, v___x_2399_);
v___x_2401_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_2400_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_);
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2409_ == 0)
{
v___x_2404_ = v___x_2401_;
v_isShared_2405_ = v_isSharedCheck_2409_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_a_2402_);
lean_dec(v___x_2401_);
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
else
{
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec_ref(v___y_2377_);
lean_del_object(v___x_2374_);
lean_dec(v_snd_2372_);
lean_del_object(v___x_2354_);
lean_dec(v_a_2345_);
lean_dec(v_n_2336_);
v___y_2357_ = v___y_2378_;
goto v___jp_2356_;
}
}
else
{
lean_object* v_a_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
lean_dec(v___y_2380_);
lean_dec_ref(v___y_2379_);
lean_dec(v___y_2378_);
lean_dec_ref(v___y_2377_);
lean_del_object(v___x_2374_);
lean_dec(v_snd_2372_);
lean_del_object(v___x_2354_);
lean_dec(v_fst_2351_);
lean_dec(v_a_2345_);
lean_dec(v_n_2336_);
lean_dec_ref(v_e_2335_);
lean_dec(v_mvarId_2333_);
v_a_2412_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2414_ = v___x_2381_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_a_2412_);
lean_dec(v___x_2381_);
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
}
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2450_; 
lean_dec(v_a_2345_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v_n_2336_);
lean_dec_ref(v_e_2335_);
lean_dec(v_mvarId_2333_);
v_a_2443_ = lean_ctor_get(v___x_2349_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2349_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2445_ = v___x_2349_;
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2349_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2448_; 
if (v_isShared_2446_ == 0)
{
v___x_2448_ = v___x_2445_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_a_2443_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
}
else
{
lean_object* v_a_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2458_; 
lean_dec(v_a_2345_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v_n_2336_);
lean_dec_ref(v_e_2335_);
lean_dec(v_mvarId_2333_);
v_a_2451_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2458_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2458_ == 0)
{
v___x_2453_ = v___x_2346_;
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_a_2451_);
lean_dec(v___x_2346_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2456_; 
if (v_isShared_2454_ == 0)
{
v___x_2456_ = v___x_2453_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v_a_2451_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
return v___x_2456_;
}
}
}
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v_n_2336_);
lean_dec_ref(v_e_2335_);
lean_dec(v_mvarId_2333_);
v_a_2459_ = lean_ctor_get(v___x_2344_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2344_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2461_ = v___x_2344_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2344_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2464_; 
if (v_isShared_2462_ == 0)
{
v___x_2464_ = v___x_2461_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_a_2459_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2474_; 
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v_n_2336_);
lean_dec_ref(v_e_2335_);
lean_dec(v_mvarId_2333_);
v_a_2467_ = lean_ctor_get(v___x_2343_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2343_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2469_ = v___x_2343_;
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2343_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___x_2472_; 
if (v_isShared_2470_ == 0)
{
v___x_2472_ = v___x_2469_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2467_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0___boxed(lean_object* v_mvarId_2475_, lean_object* v___x_2476_, lean_object* v_e_2477_, lean_object* v_n_2478_, lean_object* v_useApproxDefEq_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_){
_start:
{
uint8_t v_useApproxDefEq_boxed_2485_; lean_object* v_res_2486_; 
v_useApproxDefEq_boxed_2485_ = lean_unbox(v_useApproxDefEq_2479_);
v_res_2486_ = l_Lean_MVarId_applyN___lam__0(v_mvarId_2475_, v___x_2476_, v_e_2477_, v_n_2478_, v_useApproxDefEq_boxed_2485_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_);
return v_res_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN(lean_object* v_mvarId_2487_, lean_object* v_e_2488_, lean_object* v_n_2489_, uint8_t v_useApproxDefEq_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_){
_start:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___f_2498_; lean_object* v___x_2499_; 
v___x_2496_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1));
v___x_2497_ = lean_box(v_useApproxDefEq_2490_);
lean_inc(v_mvarId_2487_);
v___f_2498_ = lean_alloc_closure((void*)(l_Lean_MVarId_applyN___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2498_, 0, v_mvarId_2487_);
lean_closure_set(v___f_2498_, 1, v___x_2496_);
lean_closure_set(v___f_2498_, 2, v_e_2488_);
lean_closure_set(v___f_2498_, 3, v_n_2489_);
lean_closure_set(v___f_2498_, 4, v___x_2497_);
v___x_2499_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2487_, v___f_2498_, v_a_2491_, v_a_2492_, v_a_2493_, v_a_2494_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___boxed(lean_object* v_mvarId_2500_, lean_object* v_e_2501_, lean_object* v_n_2502_, lean_object* v_useApproxDefEq_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_){
_start:
{
uint8_t v_useApproxDefEq_boxed_2509_; lean_object* v_res_2510_; 
v_useApproxDefEq_boxed_2509_ = lean_unbox(v_useApproxDefEq_2503_);
v_res_2510_ = l_Lean_MVarId_applyN(v_mvarId_2500_, v_e_2501_, v_n_2502_, v_useApproxDefEq_boxed_2509_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_);
return v_res_2510_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(lean_object* v_00_u03b1_2511_, lean_object* v_msg_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_){
_start:
{
lean_object* v___x_2518_; 
v___x_2518_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v_msg_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
return v___x_2518_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___boxed(lean_object* v_00_u03b1_2519_, lean_object* v_msg_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
lean_object* v_res_2526_; 
v_res_2526_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(v_00_u03b1_2519_, v_msg_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
return v_res_2526_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6(void){
_start:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v___x_2537_ = lean_box(0);
v___x_2538_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5));
v___x_2539_ = l_Lean_mkConst(v___x_2538_, v___x_2537_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(lean_object* v_tag_2540_, lean_object* v_type_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_){
_start:
{
lean_object* v___x_2548_; 
lean_inc(v_a_2546_);
lean_inc_ref(v_a_2545_);
lean_inc(v_a_2544_);
lean_inc_ref(v_a_2543_);
v___x_2548_ = lean_whnf(v_type_2541_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
if (lean_obj_tag(v___x_2548_) == 0)
{
lean_object* v_a_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; uint8_t v___x_2552_; 
v_a_2549_ = lean_ctor_get(v___x_2548_, 0);
lean_inc(v_a_2549_);
lean_dec_ref(v___x_2548_);
v___x_2550_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1));
v___x_2551_ = lean_unsigned_to_nat(2u);
v___x_2552_ = l_Lean_Expr_isAppOfArity(v_a_2549_, v___x_2550_, v___x_2551_);
if (v___x_2552_ == 0)
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2553_ = lean_st_ref_get(v_a_2542_);
v___x_2554_ = lean_array_get_size(v___x_2553_);
lean_dec(v___x_2553_);
v___x_2555_ = lean_unsigned_to_nat(1u);
v___x_2556_ = lean_nat_add(v___x_2554_, v___x_2555_);
v___x_2557_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3));
v___x_2558_ = lean_name_append_index_after(v___x_2557_, v___x_2556_);
v___x_2559_ = l_Lean_Name_append(v_tag_2540_, v___x_2558_);
v___x_2560_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_2549_, v___x_2559_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
lean_dec(v_a_2546_);
lean_dec_ref(v_a_2545_);
lean_dec(v_a_2544_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2572_; 
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2572_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2563_ = v___x_2560_;
v_isShared_2564_ = v_isSharedCheck_2572_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v___x_2560_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2572_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2570_; 
v___x_2565_ = lean_st_ref_take(v_a_2542_);
v___x_2566_ = l_Lean_Expr_mvarId_x21(v_a_2561_);
v___x_2567_ = lean_array_push(v___x_2565_, v___x_2566_);
v___x_2568_ = lean_st_ref_set(v_a_2542_, v___x_2567_);
if (v_isShared_2564_ == 0)
{
v___x_2570_ = v___x_2563_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_a_2561_);
v___x_2570_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
return v___x_2570_;
}
}
}
else
{
return v___x_2560_;
}
}
else
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2573_ = l_Lean_Expr_appFn_x21(v_a_2549_);
v___x_2574_ = l_Lean_Expr_appArg_x21(v___x_2573_);
lean_dec_ref(v___x_2573_);
lean_inc(v_a_2546_);
lean_inc_ref(v_a_2545_);
lean_inc(v_a_2544_);
lean_inc_ref(v_a_2543_);
lean_inc_ref(v___x_2574_);
lean_inc(v_tag_2540_);
v___x_2575_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2540_, v___x_2574_, v_a_2542_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
if (lean_obj_tag(v___x_2575_) == 0)
{
lean_object* v_a_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v_a_2576_ = lean_ctor_get(v___x_2575_, 0);
lean_inc(v_a_2576_);
lean_dec_ref(v___x_2575_);
v___x_2577_ = l_Lean_Expr_appArg_x21(v_a_2549_);
lean_dec(v_a_2549_);
lean_inc_ref(v___x_2577_);
v___x_2578_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2540_, v___x_2577_, v_a_2542_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2588_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2581_ = v___x_2578_;
v_isShared_2582_ = v_isSharedCheck_2588_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___x_2578_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2588_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2586_; 
v___x_2583_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6);
v___x_2584_ = l_Lean_mkApp4(v___x_2583_, v___x_2574_, v___x_2577_, v_a_2576_, v_a_2579_);
if (v_isShared_2582_ == 0)
{
lean_ctor_set(v___x_2581_, 0, v___x_2584_);
v___x_2586_ = v___x_2581_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v___x_2584_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
else
{
lean_dec_ref(v___x_2577_);
lean_dec(v_a_2576_);
lean_dec_ref(v___x_2574_);
return v___x_2578_;
}
}
else
{
lean_dec_ref(v___x_2574_);
lean_dec(v_a_2549_);
lean_dec(v_a_2546_);
lean_dec_ref(v_a_2545_);
lean_dec(v_a_2544_);
lean_dec_ref(v_a_2543_);
lean_dec(v_tag_2540_);
return v___x_2575_;
}
}
}
else
{
lean_dec(v_a_2546_);
lean_dec_ref(v_a_2545_);
lean_dec(v_a_2544_);
lean_dec_ref(v_a_2543_);
lean_dec(v_tag_2540_);
return v___x_2548_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___boxed(lean_object* v_tag_2589_, lean_object* v_type_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_){
_start:
{
lean_object* v_res_2597_; 
v_res_2597_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2589_, v_type_2590_, v_a_2591_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_);
lean_dec(v_a_2591_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0(lean_object* v_mvarId_2598_, lean_object* v___x_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; 
lean_inc(v_mvarId_2598_);
v___x_2605_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2598_, v___x_2599_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v___x_2606_; 
lean_dec_ref(v___x_2605_);
lean_inc(v___y_2603_);
lean_inc_ref(v___y_2602_);
lean_inc(v___y_2601_);
lean_inc_ref(v___y_2600_);
lean_inc(v_mvarId_2598_);
v___x_2606_ = l_Lean_MVarId_getType_x27(v_mvarId_2598_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2652_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2609_ = v___x_2606_;
v_isShared_2610_ = v_isSharedCheck_2652_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2606_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2652_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; uint8_t v___x_2613_; 
v___x_2611_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1));
v___x_2612_ = lean_unsigned_to_nat(2u);
v___x_2613_ = l_Lean_Expr_isAppOfArity(v_a_2607_, v___x_2611_, v___x_2612_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2617_; 
lean_dec(v_a_2607_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
v___x_2614_ = lean_box(0);
v___x_2615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2615_, 0, v_mvarId_2598_);
lean_ctor_set(v___x_2615_, 1, v___x_2614_);
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 0, v___x_2615_);
v___x_2617_ = v___x_2609_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v___x_2615_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
else
{
lean_object* v___x_2619_; 
lean_del_object(v___x_2609_);
lean_inc(v_mvarId_2598_);
v___x_2619_ = l_Lean_MVarId_getTag(v_mvarId_2598_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
if (lean_obj_tag(v___x_2619_) == 0)
{
lean_object* v_a_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v_a_2620_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_a_2620_);
lean_dec_ref(v___x_2619_);
v___x_2621_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0));
v___x_2622_ = lean_st_mk_ref(v___x_2621_);
lean_inc(v___y_2601_);
v___x_2623_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_a_2620_, v_a_2607_, v___x_2622_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2634_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
lean_inc(v_a_2624_);
lean_dec_ref(v___x_2623_);
v___x_2625_ = lean_st_ref_get(v___x_2622_);
lean_dec(v___x_2622_);
v___x_2626_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2598_, v_a_2624_, v___y_2601_);
lean_dec(v___y_2601_);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2634_ == 0)
{
lean_object* v_unused_2635_; 
v_unused_2635_ = lean_ctor_get(v___x_2626_, 0);
lean_dec(v_unused_2635_);
v___x_2628_ = v___x_2626_;
v_isShared_2629_ = v_isSharedCheck_2634_;
goto v_resetjp_2627_;
}
else
{
lean_dec(v___x_2626_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2634_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2630_; lean_object* v___x_2632_; 
v___x_2630_ = lean_array_to_list(v___x_2625_);
if (v_isShared_2629_ == 0)
{
lean_ctor_set(v___x_2628_, 0, v___x_2630_);
v___x_2632_ = v___x_2628_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v___x_2630_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
else
{
lean_object* v_a_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2643_; 
lean_dec(v___x_2622_);
lean_dec(v___y_2601_);
lean_dec(v_mvarId_2598_);
v_a_2636_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2643_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2638_ = v___x_2623_;
v_isShared_2639_ = v_isSharedCheck_2643_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_a_2636_);
lean_dec(v___x_2623_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2643_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2641_; 
if (v_isShared_2639_ == 0)
{
v___x_2641_ = v___x_2638_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v_a_2636_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
}
}
else
{
lean_object* v_a_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2651_; 
lean_dec(v_a_2607_);
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
lean_dec(v_mvarId_2598_);
v_a_2644_ = lean_ctor_get(v___x_2619_, 0);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2619_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2646_ = v___x_2619_;
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_a_2644_);
lean_dec(v___x_2619_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
lean_object* v___x_2649_; 
if (v_isShared_2647_ == 0)
{
v___x_2649_ = v___x_2646_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_a_2644_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
}
}
}
}
else
{
lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
lean_dec(v_mvarId_2598_);
v_a_2653_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2655_ = v___x_2606_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2606_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2653_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
else
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2668_; 
lean_dec(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec(v___y_2601_);
lean_dec_ref(v___y_2600_);
lean_dec(v_mvarId_2598_);
v_a_2661_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2663_ = v___x_2605_;
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v___x_2605_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2666_; 
if (v_isShared_2664_ == 0)
{
v___x_2666_ = v___x_2663_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_a_2661_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0___boxed(lean_object* v_mvarId_2669_, lean_object* v___x_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_){
_start:
{
lean_object* v_res_2676_; 
v_res_2676_ = l_Lean_MVarId_splitAndCore___lam__0(v_mvarId_2669_, v___x_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore(lean_object* v_mvarId_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_, lean_object* v_a_2684_){
_start:
{
lean_object* v___x_2686_; lean_object* v___f_2687_; lean_object* v___x_2688_; 
v___x_2686_ = ((lean_object*)(l_Lean_MVarId_splitAndCore___closed__1));
lean_inc(v_mvarId_2680_);
v___f_2687_ = lean_alloc_closure((void*)(l_Lean_MVarId_splitAndCore___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2687_, 0, v_mvarId_2680_);
lean_closure_set(v___f_2687_, 1, v___x_2686_);
v___x_2688_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2680_, v___f_2687_, v_a_2681_, v_a_2682_, v_a_2683_, v_a_2684_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___boxed(lean_object* v_mvarId_2689_, lean_object* v_a_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_, lean_object* v_a_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = l_Lean_MVarId_splitAndCore(v_mvarId_2689_, v_a_2690_, v_a_2691_, v_a_2692_, v_a_2693_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd(lean_object* v_mvarId_2696_, lean_object* v_a_2697_, lean_object* v_a_2698_, lean_object* v_a_2699_, lean_object* v_a_2700_){
_start:
{
lean_object* v___x_2702_; 
v___x_2702_ = l_Lean_MVarId_splitAndCore(v_mvarId_2696_, v_a_2697_, v_a_2698_, v_a_2699_, v_a_2700_);
return v___x_2702_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd___boxed(lean_object* v_mvarId_2703_, lean_object* v_a_2704_, lean_object* v_a_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_){
_start:
{
lean_object* v_res_2709_; 
v_res_2709_ = l_Lean_MVarId_splitAnd(v_mvarId_2703_, v_a_2704_, v_a_2705_, v_a_2706_, v_a_2707_);
return v_res_2709_;
}
}
static lean_object* _init_l_Lean_MVarId_exfalso___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v___x_2713_ = lean_box(0);
v___x_2714_ = ((lean_object*)(l_Lean_MVarId_exfalso___lam__0___closed__1));
v___x_2715_ = l_Lean_mkConst(v___x_2714_, v___x_2713_);
return v___x_2715_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0(lean_object* v_mvarId_2720_, lean_object* v___x_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v___x_2727_; 
lean_inc(v_mvarId_2720_);
v___x_2727_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2720_, v___x_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v___x_2728_; 
lean_dec_ref(v___x_2727_);
lean_inc(v_mvarId_2720_);
v___x_2728_ = l_Lean_MVarId_getType(v_mvarId_2720_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
if (lean_obj_tag(v___x_2728_) == 0)
{
lean_object* v_a_2729_; lean_object* v___x_2730_; lean_object* v_a_2731_; lean_object* v___x_2732_; 
v_a_2729_ = lean_ctor_get(v___x_2728_, 0);
lean_inc(v_a_2729_);
lean_dec_ref(v___x_2728_);
v___x_2730_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_a_2729_, v___y_2723_);
v_a_2731_ = lean_ctor_get(v___x_2730_, 0);
lean_inc(v_a_2731_);
lean_dec_ref(v___x_2730_);
lean_inc(v___y_2725_);
lean_inc_ref(v___y_2724_);
lean_inc(v___y_2723_);
lean_inc_ref(v___y_2722_);
lean_inc(v_a_2731_);
v___x_2732_ = l_Lean_Meta_getLevel(v_a_2731_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2733_; lean_object* v___x_2734_; 
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
lean_inc(v_a_2733_);
lean_dec_ref(v___x_2732_);
lean_inc(v_mvarId_2720_);
v___x_2734_ = l_Lean_MVarId_getTag(v_mvarId_2720_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref(v___x_2734_);
v___x_2736_ = lean_box(0);
v___x_2737_ = lean_obj_once(&l_Lean_MVarId_exfalso___lam__0___closed__2, &l_Lean_MVarId_exfalso___lam__0___closed__2_once, _init_l_Lean_MVarId_exfalso___lam__0___closed__2);
v___x_2738_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2737_, v_a_2735_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v_a_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2752_; 
v_a_2739_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_a_2739_);
lean_dec_ref(v___x_2738_);
v___x_2740_ = ((lean_object*)(l_Lean_MVarId_exfalso___lam__0___closed__4));
v___x_2741_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2741_, 0, v_a_2733_);
lean_ctor_set(v___x_2741_, 1, v___x_2736_);
v___x_2742_ = l_Lean_mkConst(v___x_2740_, v___x_2741_);
lean_inc(v_a_2739_);
v___x_2743_ = l_Lean_mkAppB(v___x_2742_, v_a_2731_, v_a_2739_);
v___x_2744_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2720_, v___x_2743_, v___y_2723_);
lean_dec(v___y_2723_);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2752_ == 0)
{
lean_object* v_unused_2753_; 
v_unused_2753_ = lean_ctor_get(v___x_2744_, 0);
lean_dec(v_unused_2753_);
v___x_2746_ = v___x_2744_;
v_isShared_2747_ = v_isSharedCheck_2752_;
goto v_resetjp_2745_;
}
else
{
lean_dec(v___x_2744_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2752_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2748_; lean_object* v___x_2750_; 
v___x_2748_ = l_Lean_Expr_mvarId_x21(v_a_2739_);
lean_dec(v_a_2739_);
if (v_isShared_2747_ == 0)
{
lean_ctor_set(v___x_2746_, 0, v___x_2748_);
v___x_2750_ = v___x_2746_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v___x_2748_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
else
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2761_; 
lean_dec(v_a_2733_);
lean_dec(v_a_2731_);
lean_dec(v___y_2723_);
lean_dec(v_mvarId_2720_);
v_a_2754_ = lean_ctor_get(v___x_2738_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2738_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2756_ = v___x_2738_;
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2738_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2759_; 
if (v_isShared_2757_ == 0)
{
v___x_2759_ = v___x_2756_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_a_2754_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
}
else
{
lean_object* v_a_2762_; lean_object* v___x_2764_; uint8_t v_isShared_2765_; uint8_t v_isSharedCheck_2769_; 
lean_dec(v_a_2733_);
lean_dec(v_a_2731_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v_mvarId_2720_);
v_a_2762_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2769_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2769_ == 0)
{
v___x_2764_ = v___x_2734_;
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
else
{
lean_inc(v_a_2762_);
lean_dec(v___x_2734_);
v___x_2764_ = lean_box(0);
v_isShared_2765_ = v_isSharedCheck_2769_;
goto v_resetjp_2763_;
}
v_resetjp_2763_:
{
lean_object* v___x_2767_; 
if (v_isShared_2765_ == 0)
{
v___x_2767_ = v___x_2764_;
goto v_reusejp_2766_;
}
else
{
lean_object* v_reuseFailAlloc_2768_; 
v_reuseFailAlloc_2768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2768_, 0, v_a_2762_);
v___x_2767_ = v_reuseFailAlloc_2768_;
goto v_reusejp_2766_;
}
v_reusejp_2766_:
{
return v___x_2767_;
}
}
}
}
else
{
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
lean_dec(v_a_2731_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v_mvarId_2720_);
v_a_2770_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2772_ = v___x_2732_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2732_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_a_2770_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
else
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2785_; 
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v_mvarId_2720_);
v_a_2778_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2785_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2785_ == 0)
{
v___x_2780_ = v___x_2728_;
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v___x_2728_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2785_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2783_; 
if (v_isShared_2781_ == 0)
{
v___x_2783_ = v___x_2780_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v_a_2778_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
return v___x_2783_;
}
}
}
}
else
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2793_; 
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v_mvarId_2720_);
v_a_2786_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2788_ = v___x_2727_;
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v___x_2727_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2793_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2791_; 
if (v_isShared_2789_ == 0)
{
v___x_2791_ = v___x_2788_;
goto v_reusejp_2790_;
}
else
{
lean_object* v_reuseFailAlloc_2792_; 
v_reuseFailAlloc_2792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2792_, 0, v_a_2786_);
v___x_2791_ = v_reuseFailAlloc_2792_;
goto v_reusejp_2790_;
}
v_reusejp_2790_:
{
return v___x_2791_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0___boxed(lean_object* v_mvarId_2794_, lean_object* v___x_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_){
_start:
{
lean_object* v_res_2801_; 
v_res_2801_ = l_Lean_MVarId_exfalso___lam__0(v_mvarId_2794_, v___x_2795_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_);
return v_res_2801_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso(lean_object* v_mvarId_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_, lean_object* v_a_2809_){
_start:
{
lean_object* v___x_2811_; lean_object* v___f_2812_; lean_object* v___x_2813_; 
v___x_2811_ = ((lean_object*)(l_Lean_MVarId_exfalso___closed__1));
lean_inc(v_mvarId_2805_);
v___f_2812_ = lean_alloc_closure((void*)(l_Lean_MVarId_exfalso___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2812_, 0, v_mvarId_2805_);
lean_closure_set(v___f_2812_, 1, v___x_2811_);
v___x_2813_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2805_, v___f_2812_, v_a_2806_, v_a_2807_, v_a_2808_, v_a_2809_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___boxed(lean_object* v_mvarId_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_){
_start:
{
lean_object* v_res_2820_; 
v_res_2820_ = l_Lean_MVarId_exfalso(v_mvarId_2814_, v_a_2815_, v_a_2816_, v_a_2817_, v_a_2818_);
return v_res_2820_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2824_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__1));
v___x_2825_ = l_Lean_MessageData_ofFormat(v___x_2824_);
return v___x_2825_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2826_; lean_object* v___x_2827_; 
v___x_2826_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__2, &l_Lean_MVarId_nthConstructor___lam__0___closed__2_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__2);
v___x_2827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2826_);
return v___x_2827_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0(lean_object* v_goal_2832_, lean_object* v_name_2833_, lean_object* v_idx_2834_, lean_object* v_expected_x3f_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_){
_start:
{
lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2845_; lean_object* v___x_2848_; 
lean_inc(v_name_2833_);
lean_inc(v_goal_2832_);
v___x_2848_ = l_Lean_MVarId_checkNotAssigned(v_goal_2832_, v_name_2833_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v___x_2849_; 
lean_dec_ref(v___x_2848_);
lean_inc(v___y_2839_);
lean_inc_ref(v___y_2838_);
lean_inc(v___y_2837_);
lean_inc_ref(v___y_2836_);
lean_inc(v_goal_2832_);
v___x_2849_ = l_Lean_MVarId_getType_x27(v_goal_2832_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2851_; 
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_a_2850_);
lean_dec_ref(v___x_2849_);
v___x_2851_ = l_Lean_Expr_getAppFn(v_a_2850_);
lean_dec(v_a_2850_);
if (lean_obj_tag(v___x_2851_) == 4)
{
lean_object* v_declName_2852_; lean_object* v_us_2853_; lean_object* v___x_2854_; lean_object* v_env_2855_; uint8_t v___x_2856_; lean_object* v___x_2857_; 
v_declName_2852_ = lean_ctor_get(v___x_2851_, 0);
lean_inc(v_declName_2852_);
v_us_2853_ = lean_ctor_get(v___x_2851_, 1);
lean_inc(v_us_2853_);
lean_dec_ref(v___x_2851_);
v___x_2854_ = lean_st_ref_get(v___y_2839_);
v_env_2855_ = lean_ctor_get(v___x_2854_, 0);
lean_inc_ref(v_env_2855_);
lean_dec(v___x_2854_);
v___x_2856_ = 0;
v___x_2857_ = l_Lean_Environment_find_x3f(v_env_2855_, v_declName_2852_, v___x_2856_);
if (lean_obj_tag(v___x_2857_) == 0)
{
lean_dec(v_us_2853_);
lean_dec(v_expected_x3f_2835_);
lean_dec(v_idx_2834_);
v___y_2842_ = v___y_2836_;
v___y_2843_ = v___y_2837_;
v___y_2844_ = v___y_2838_;
v___y_2845_ = v___y_2839_;
goto v___jp_2841_;
}
else
{
lean_object* v_val_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2928_; 
v_val_2858_ = lean_ctor_get(v___x_2857_, 0);
v_isSharedCheck_2928_ = !lean_is_exclusive(v___x_2857_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2860_ = v___x_2857_;
v_isShared_2861_ = v_isSharedCheck_2928_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_val_2858_);
lean_dec(v___x_2857_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2928_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
if (lean_obj_tag(v_val_2858_) == 5)
{
lean_object* v_val_2862_; lean_object* v___x_2864_; uint8_t v_isShared_2865_; uint8_t v_isSharedCheck_2927_; 
v_val_2862_ = lean_ctor_get(v_val_2858_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v_val_2858_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2864_ = v_val_2858_;
v_isShared_2865_ = v_isSharedCheck_2927_;
goto v_resetjp_2863_;
}
else
{
lean_inc(v_val_2862_);
lean_dec(v_val_2858_);
v___x_2864_ = lean_box(0);
v_isShared_2865_ = v_isSharedCheck_2927_;
goto v_resetjp_2863_;
}
v_resetjp_2863_:
{
lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___y_2870_; 
if (lean_obj_tag(v_expected_x3f_2835_) == 1)
{
lean_object* v_val_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2926_; 
v_val_2897_ = lean_ctor_get(v_expected_x3f_2835_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v_expected_x3f_2835_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2899_ = v_expected_x3f_2835_;
v_isShared_2900_ = v_isSharedCheck_2926_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_val_2897_);
lean_dec(v_expected_x3f_2835_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2926_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v_ctors_2901_; lean_object* v___x_2902_; uint8_t v___x_2903_; 
v_ctors_2901_ = lean_ctor_get(v_val_2862_, 4);
v___x_2902_ = l_List_lengthTR___redArg(v_ctors_2901_);
v___x_2903_ = lean_nat_dec_eq(v___x_2902_, v_val_2897_);
lean_dec(v___x_2902_);
if (v___x_2903_ == 0)
{
uint8_t v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2915_; 
v___x_2904_ = 1;
lean_inc(v_name_2833_);
v___x_2905_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2833_, v___x_2904_);
v___x_2906_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__7));
v___x_2907_ = lean_string_append(v___x_2905_, v___x_2906_);
v___x_2908_ = l_Nat_reprFast(v_val_2897_);
v___x_2909_ = lean_string_append(v___x_2907_, v___x_2908_);
lean_dec_ref(v___x_2908_);
v___x_2910_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__6));
v___x_2911_ = lean_string_append(v___x_2909_, v___x_2910_);
v___x_2912_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
v___x_2913_ = l_Lean_MessageData_ofFormat(v___x_2912_);
if (v_isShared_2900_ == 0)
{
lean_ctor_set(v___x_2899_, 0, v___x_2913_);
v___x_2915_ = v___x_2899_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2913_);
v___x_2915_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
lean_object* v___x_2916_; 
lean_inc(v_goal_2832_);
lean_inc(v_name_2833_);
v___x_2916_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2833_, v_goal_2832_, v___x_2915_, v___y_2836_, v___y_2837_, v___y_2838_, v___y_2839_);
if (lean_obj_tag(v___x_2916_) == 0)
{
lean_dec_ref(v___x_2916_);
v___y_2867_ = v___y_2836_;
v___y_2868_ = v___y_2837_;
v___y_2869_ = v___y_2838_;
v___y_2870_ = v___y_2839_;
goto v___jp_2866_;
}
else
{
lean_object* v_a_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_2924_; 
lean_del_object(v___x_2864_);
lean_dec_ref(v_val_2862_);
lean_del_object(v___x_2860_);
lean_dec(v_us_2853_);
lean_dec(v___y_2839_);
lean_dec_ref(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v_idx_2834_);
lean_dec(v_name_2833_);
lean_dec(v_goal_2832_);
v_a_2917_ = lean_ctor_get(v___x_2916_, 0);
v_isSharedCheck_2924_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2924_ == 0)
{
v___x_2919_ = v___x_2916_;
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_a_2917_);
lean_dec(v___x_2916_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_2924_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2922_; 
if (v_isShared_2920_ == 0)
{
v___x_2922_ = v___x_2919_;
goto v_reusejp_2921_;
}
else
{
lean_object* v_reuseFailAlloc_2923_; 
v_reuseFailAlloc_2923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2923_, 0, v_a_2917_);
v___x_2922_ = v_reuseFailAlloc_2923_;
goto v_reusejp_2921_;
}
v_reusejp_2921_:
{
return v___x_2922_;
}
}
}
}
}
else
{
lean_del_object(v___x_2899_);
lean_dec(v_val_2897_);
v___y_2867_ = v___y_2836_;
v___y_2868_ = v___y_2837_;
v___y_2869_ = v___y_2838_;
v___y_2870_ = v___y_2839_;
goto v___jp_2866_;
}
}
}
else
{
lean_dec(v_expected_x3f_2835_);
v___y_2867_ = v___y_2836_;
v___y_2868_ = v___y_2837_;
v___y_2869_ = v___y_2838_;
v___y_2870_ = v___y_2839_;
goto v___jp_2866_;
}
v___jp_2866_:
{
lean_object* v_ctors_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; 
v_ctors_2871_ = lean_ctor_get(v_val_2862_, 4);
lean_inc(v_ctors_2871_);
lean_dec_ref(v_val_2862_);
v___x_2872_ = l_List_lengthTR___redArg(v_ctors_2871_);
v___x_2873_ = lean_nat_dec_lt(v_idx_2834_, v___x_2872_);
if (v___x_2873_ == 0)
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2884_; 
lean_dec(v_ctors_2871_);
lean_dec(v_us_2853_);
v___x_2874_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__4));
v___x_2875_ = l_Nat_reprFast(v_idx_2834_);
v___x_2876_ = lean_string_append(v___x_2874_, v___x_2875_);
lean_dec_ref(v___x_2875_);
v___x_2877_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__5));
v___x_2878_ = lean_string_append(v___x_2876_, v___x_2877_);
v___x_2879_ = l_Nat_reprFast(v___x_2872_);
v___x_2880_ = lean_string_append(v___x_2878_, v___x_2879_);
lean_dec_ref(v___x_2879_);
v___x_2881_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__6));
v___x_2882_ = lean_string_append(v___x_2880_, v___x_2881_);
if (v_isShared_2865_ == 0)
{
lean_ctor_set_tag(v___x_2864_, 3);
lean_ctor_set(v___x_2864_, 0, v___x_2882_);
v___x_2884_ = v___x_2864_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v___x_2882_);
v___x_2884_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
lean_object* v___x_2885_; lean_object* v___x_2887_; 
v___x_2885_ = l_Lean_MessageData_ofFormat(v___x_2884_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 0, v___x_2885_);
v___x_2887_ = v___x_2860_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v___x_2885_);
v___x_2887_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
lean_object* v___x_2888_; 
v___x_2888_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2833_, v_goal_2832_, v___x_2887_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_);
lean_dec(v___y_2870_);
lean_dec_ref(v___y_2869_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
return v___x_2888_;
}
}
}
else
{
lean_object* v___x_2891_; lean_object* v___x_2892_; uint8_t v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
lean_dec(v___x_2872_);
lean_del_object(v___x_2864_);
lean_del_object(v___x_2860_);
lean_dec(v_name_2833_);
v___x_2891_ = l_List_get___redArg(v_ctors_2871_, v_idx_2834_);
lean_dec(v_ctors_2871_);
v___x_2892_ = l_Lean_mkConst(v___x_2891_, v_us_2853_);
v___x_2893_ = 0;
v___x_2894_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_2894_, 0, v___x_2893_);
lean_ctor_set_uint8(v___x_2894_, 1, v___x_2873_);
lean_ctor_set_uint8(v___x_2894_, 2, v___x_2856_);
lean_ctor_set_uint8(v___x_2894_, 3, v___x_2873_);
v___x_2895_ = lean_box(0);
v___x_2896_ = l_Lean_MVarId_apply(v_goal_2832_, v___x_2892_, v___x_2894_, v___x_2895_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_);
return v___x_2896_;
}
}
}
}
else
{
lean_del_object(v___x_2860_);
lean_dec(v_val_2858_);
lean_dec(v_us_2853_);
lean_dec(v_expected_x3f_2835_);
lean_dec(v_idx_2834_);
v___y_2842_ = v___y_2836_;
v___y_2843_ = v___y_2837_;
v___y_2844_ = v___y_2838_;
v___y_2845_ = v___y_2839_;
goto v___jp_2841_;
}
}
}
}
else
{
lean_dec_ref(v___x_2851_);
lean_dec(v_expected_x3f_2835_);
lean_dec(v_idx_2834_);
v___y_2842_ = v___y_2836_;
v___y_2843_ = v___y_2837_;
v___y_2844_ = v___y_2838_;
v___y_2845_ = v___y_2839_;
goto v___jp_2841_;
}
}
else
{
lean_object* v_a_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2936_; 
lean_dec(v___y_2839_);
lean_dec_ref(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v_expected_x3f_2835_);
lean_dec(v_idx_2834_);
lean_dec(v_name_2833_);
lean_dec(v_goal_2832_);
v_a_2929_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2931_ = v___x_2849_;
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_a_2929_);
lean_dec(v___x_2849_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_a_2929_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
}
else
{
lean_object* v_a_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2944_; 
lean_dec(v___y_2839_);
lean_dec_ref(v___y_2838_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v_expected_x3f_2835_);
lean_dec(v_idx_2834_);
lean_dec(v_name_2833_);
lean_dec(v_goal_2832_);
v_a_2937_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2944_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2939_ = v___x_2848_;
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_a_2937_);
lean_dec(v___x_2848_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2942_; 
if (v_isShared_2940_ == 0)
{
v___x_2942_ = v___x_2939_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_a_2937_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
return v___x_2942_;
}
}
}
v___jp_2841_:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; 
v___x_2846_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__3, &l_Lean_MVarId_nthConstructor___lam__0___closed__3_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__3);
v___x_2847_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2833_, v_goal_2832_, v___x_2846_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
return v___x_2847_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0___boxed(lean_object* v_goal_2945_, lean_object* v_name_2946_, lean_object* v_idx_2947_, lean_object* v_expected_x3f_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l_Lean_MVarId_nthConstructor___lam__0(v_goal_2945_, v_name_2946_, v_idx_2947_, v_expected_x3f_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor(lean_object* v_name_2955_, lean_object* v_idx_2956_, lean_object* v_expected_x3f_2957_, lean_object* v_goal_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_){
_start:
{
lean_object* v___f_2964_; lean_object* v___x_2965_; 
lean_inc(v_goal_2958_);
v___f_2964_ = lean_alloc_closure((void*)(l_Lean_MVarId_nthConstructor___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2964_, 0, v_goal_2958_);
lean_closure_set(v___f_2964_, 1, v_name_2955_);
lean_closure_set(v___f_2964_, 2, v_idx_2956_);
lean_closure_set(v___f_2964_, 3, v_expected_x3f_2957_);
v___x_2965_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_goal_2958_, v___f_2964_, v_a_2959_, v_a_2960_, v_a_2961_, v_a_2962_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___boxed(lean_object* v_name_2966_, lean_object* v_idx_2967_, lean_object* v_expected_x3f_2968_, lean_object* v_goal_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_, lean_object* v_a_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_){
_start:
{
lean_object* v_res_2975_; 
v_res_2975_ = l_Lean_MVarId_nthConstructor(v_name_2966_, v_idx_2967_, v_expected_x3f_2968_, v_goal_2969_, v_a_2970_, v_a_2971_, v_a_2972_, v_a_2973_);
return v_res_2975_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(lean_object* v_x_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_){
_start:
{
lean_object* v___x_2982_; 
v___x_2982_ = l_Lean_Meta_saveState___redArg(v___y_2978_, v___y_2980_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2984_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_a_2983_);
lean_dec_ref(v___x_2982_);
lean_inc(v___y_2980_);
lean_inc(v___y_2978_);
v___x_2984_ = lean_apply_5(v_x_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, lean_box(0));
if (lean_obj_tag(v___x_2984_) == 0)
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2993_; 
lean_dec(v_a_2983_);
lean_dec(v___y_2980_);
lean_dec(v___y_2978_);
v_a_2985_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2987_ = v___x_2984_;
v_isShared_2988_ = v_isSharedCheck_2993_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2984_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2993_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2989_; lean_object* v___x_2991_; 
v___x_2989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2989_, 0, v_a_2985_);
if (v_isShared_2988_ == 0)
{
lean_ctor_set(v___x_2987_, 0, v___x_2989_);
v___x_2991_ = v___x_2987_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2989_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
else
{
lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3023_; 
v_a_2994_ = lean_ctor_get(v___x_2984_, 0);
v_isSharedCheck_3023_ = !lean_is_exclusive(v___x_2984_);
if (v_isSharedCheck_3023_ == 0)
{
v___x_2996_ = v___x_2984_;
v_isShared_2997_ = v_isSharedCheck_3023_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v___x_2984_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3023_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
uint8_t v___y_2999_; uint8_t v___x_3021_; 
v___x_3021_ = l_Lean_Exception_isInterrupt(v_a_2994_);
if (v___x_3021_ == 0)
{
uint8_t v___x_3022_; 
lean_inc(v_a_2994_);
v___x_3022_ = l_Lean_Exception_isRuntime(v_a_2994_);
v___y_2999_ = v___x_3022_;
goto v___jp_2998_;
}
else
{
v___y_2999_ = v___x_3021_;
goto v___jp_2998_;
}
v___jp_2998_:
{
if (v___y_2999_ == 0)
{
lean_object* v___x_3000_; 
lean_del_object(v___x_2996_);
lean_dec(v_a_2994_);
v___x_3000_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2983_, v___y_2978_, v___y_2980_);
lean_dec(v___y_2980_);
lean_dec(v___y_2978_);
lean_dec(v_a_2983_);
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3008_; 
v_isSharedCheck_3008_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3008_ == 0)
{
lean_object* v_unused_3009_; 
v_unused_3009_ = lean_ctor_get(v___x_3000_, 0);
lean_dec(v_unused_3009_);
v___x_3002_ = v___x_3000_;
v_isShared_3003_ = v_isSharedCheck_3008_;
goto v_resetjp_3001_;
}
else
{
lean_dec(v___x_3000_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3008_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3004_; lean_object* v___x_3006_; 
v___x_3004_ = lean_box(0);
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 0, v___x_3004_);
v___x_3006_ = v___x_3002_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3007_; 
v_reuseFailAlloc_3007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3007_, 0, v___x_3004_);
v___x_3006_ = v_reuseFailAlloc_3007_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
return v___x_3006_;
}
}
}
else
{
lean_object* v_a_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
v_a_3010_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3012_ = v___x_3000_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_a_3010_);
lean_dec(v___x_3000_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_a_3010_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
else
{
lean_object* v___x_3019_; 
lean_dec(v_a_2983_);
lean_dec(v___y_2980_);
lean_dec(v___y_2978_);
if (v_isShared_2997_ == 0)
{
v___x_3019_ = v___x_2996_;
goto v_reusejp_3018_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v_a_2994_);
v___x_3019_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3018_;
}
v_reusejp_3018_:
{
return v___x_3019_;
}
}
}
}
}
}
else
{
lean_object* v_a_3024_; lean_object* v___x_3026_; uint8_t v_isShared_3027_; uint8_t v_isSharedCheck_3031_; 
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec(v___y_2978_);
lean_dec_ref(v___y_2977_);
lean_dec_ref(v_x_2976_);
v_a_3024_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3031_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3031_ == 0)
{
v___x_3026_ = v___x_2982_;
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
else
{
lean_inc(v_a_3024_);
lean_dec(v___x_2982_);
v___x_3026_ = lean_box(0);
v_isShared_3027_ = v_isSharedCheck_3031_;
goto v_resetjp_3025_;
}
v_resetjp_3025_:
{
lean_object* v___x_3029_; 
if (v_isShared_3027_ == 0)
{
v___x_3029_ = v___x_3026_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3030_; 
v_reuseFailAlloc_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3030_, 0, v_a_3024_);
v___x_3029_ = v_reuseFailAlloc_3030_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
return v___x_3029_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg___boxed(lean_object* v_x_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_){
_start:
{
lean_object* v_res_3038_; 
v_res_3038_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v_x_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(lean_object* v_00_u03b1_3039_, lean_object* v_x_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_){
_start:
{
lean_object* v___x_3046_; 
v___x_3046_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v_x_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_);
return v___x_3046_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___boxed(lean_object* v_00_u03b1_3047_, lean_object* v_x_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_){
_start:
{
lean_object* v_res_3054_; 
v_res_3054_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(v_00_u03b1_3047_, v_x_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
return v_res_3054_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; 
v___x_3056_ = ((lean_object*)(l_Lean_MVarId_iffOfEq___lam__0___closed__0));
v___x_3057_ = l_Lean_stringToMessageData(v___x_3056_);
return v___x_3057_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0(lean_object* v_mvarId_3058_, lean_object* v___x_3059_, lean_object* v___x_3060_, lean_object* v___x_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_){
_start:
{
lean_object* v___x_3067_; 
lean_inc(v___y_3065_);
lean_inc_ref(v___y_3064_);
lean_inc(v___y_3063_);
lean_inc_ref(v___y_3062_);
v___x_3067_ = l_Lean_MVarId_apply(v_mvarId_3058_, v___x_3059_, v___x_3060_, v___x_3061_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_);
if (lean_obj_tag(v___x_3067_) == 0)
{
lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3084_; 
v_a_3068_ = lean_ctor_get(v___x_3067_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3070_ = v___x_3067_;
v_isShared_3071_ = v_isSharedCheck_3084_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_dec(v___x_3067_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3084_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___y_3073_; lean_object* v___y_3074_; lean_object* v___y_3075_; lean_object* v___y_3076_; 
if (lean_obj_tag(v_a_3068_) == 1)
{
lean_object* v_tail_3079_; 
v_tail_3079_ = lean_ctor_get(v_a_3068_, 1);
if (lean_obj_tag(v_tail_3079_) == 0)
{
lean_object* v_head_3080_; lean_object* v___x_3082_; 
lean_dec(v___y_3065_);
lean_dec_ref(v___y_3064_);
lean_dec(v___y_3063_);
lean_dec_ref(v___y_3062_);
v_head_3080_ = lean_ctor_get(v_a_3068_, 0);
lean_inc(v_head_3080_);
lean_dec_ref(v_a_3068_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 0, v_head_3080_);
v___x_3082_ = v___x_3070_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_head_3080_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
return v___x_3082_;
}
}
else
{
lean_dec_ref(v_a_3068_);
lean_del_object(v___x_3070_);
v___y_3073_ = v___y_3062_;
v___y_3074_ = v___y_3063_;
v___y_3075_ = v___y_3064_;
v___y_3076_ = v___y_3065_;
goto v___jp_3072_;
}
}
else
{
lean_del_object(v___x_3070_);
lean_dec(v_a_3068_);
v___y_3073_ = v___y_3062_;
v___y_3074_ = v___y_3063_;
v___y_3075_ = v___y_3064_;
v___y_3076_ = v___y_3065_;
goto v___jp_3072_;
}
v___jp_3072_:
{
lean_object* v___x_3077_; lean_object* v___x_3078_; 
v___x_3077_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3078_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3077_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
return v___x_3078_;
}
}
}
else
{
lean_object* v_a_3085_; lean_object* v___x_3087_; uint8_t v_isShared_3088_; uint8_t v_isSharedCheck_3092_; 
lean_dec(v___y_3065_);
lean_dec_ref(v___y_3064_);
lean_dec(v___y_3063_);
lean_dec_ref(v___y_3062_);
v_a_3085_ = lean_ctor_get(v___x_3067_, 0);
v_isSharedCheck_3092_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3092_ == 0)
{
v___x_3087_ = v___x_3067_;
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
else
{
lean_inc(v_a_3085_);
lean_dec(v___x_3067_);
v___x_3087_ = lean_box(0);
v_isShared_3088_ = v_isSharedCheck_3092_;
goto v_resetjp_3086_;
}
v_resetjp_3086_:
{
lean_object* v___x_3090_; 
if (v_isShared_3088_ == 0)
{
v___x_3090_ = v___x_3087_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v_a_3085_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
return v___x_3090_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0___boxed(lean_object* v_mvarId_3093_, lean_object* v___x_3094_, lean_object* v___x_3095_, lean_object* v___x_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Lean_MVarId_iffOfEq___lam__0(v_mvarId_3093_, v___x_3094_, v___x_3095_, v___x_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_);
return v_res_3102_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___closed__2(void){
_start:
{
lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3106_ = lean_box(0);
v___x_3107_ = ((lean_object*)(l_Lean_MVarId_iffOfEq___closed__1));
v___x_3108_ = l_Lean_mkConst(v___x_3107_, v___x_3106_);
return v___x_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq(lean_object* v_mvarId_3113_, lean_object* v_a_3114_, lean_object* v_a_3115_, lean_object* v_a_3116_, lean_object* v_a_3117_){
_start:
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___f_3122_; lean_object* v___x_3123_; 
v___x_3119_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___closed__2, &l_Lean_MVarId_iffOfEq___closed__2_once, _init_l_Lean_MVarId_iffOfEq___closed__2);
v___x_3120_ = ((lean_object*)(l_Lean_MVarId_iffOfEq___closed__3));
v___x_3121_ = lean_box(0);
lean_inc(v_mvarId_3113_);
v___f_3122_ = lean_alloc_closure((void*)(l_Lean_MVarId_iffOfEq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_3122_, 0, v_mvarId_3113_);
lean_closure_set(v___f_3122_, 1, v___x_3119_);
lean_closure_set(v___f_3122_, 2, v___x_3120_);
lean_closure_set(v___f_3122_, 3, v___x_3121_);
v___x_3123_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3122_, v_a_3114_, v_a_3115_, v_a_3116_, v_a_3117_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3135_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3126_ = v___x_3123_;
v_isShared_3127_ = v_isSharedCheck_3135_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_dec(v___x_3123_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3135_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
if (lean_obj_tag(v_a_3124_) == 0)
{
lean_object* v___x_3129_; 
if (v_isShared_3127_ == 0)
{
lean_ctor_set(v___x_3126_, 0, v_mvarId_3113_);
v___x_3129_ = v___x_3126_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_mvarId_3113_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
else
{
lean_object* v_val_3131_; lean_object* v___x_3133_; 
lean_dec(v_mvarId_3113_);
v_val_3131_ = lean_ctor_get(v_a_3124_, 0);
lean_inc(v_val_3131_);
lean_dec_ref(v_a_3124_);
if (v_isShared_3127_ == 0)
{
lean_ctor_set(v___x_3126_, 0, v_val_3131_);
v___x_3133_ = v___x_3126_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_val_3131_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
else
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3143_; 
lean_dec(v_mvarId_3113_);
v_a_3136_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3138_ = v___x_3123_;
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3123_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3141_; 
if (v_isShared_3139_ == 0)
{
v___x_3141_ = v___x_3138_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_a_3136_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
return v___x_3141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___boxed(lean_object* v_mvarId_3144_, lean_object* v_a_3145_, lean_object* v_a_3146_, lean_object* v_a_3147_, lean_object* v_a_3148_, lean_object* v_a_3149_){
_start:
{
lean_object* v_res_3150_; 
v_res_3150_ = l_Lean_MVarId_iffOfEq(v_mvarId_3144_, v_a_3145_, v_a_3146_, v_a_3147_, v_a_3148_);
return v_res_3150_;
}
}
static lean_object* _init_l_Lean_MVarId_propext___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3157_ = lean_box(0);
v___x_3158_ = ((lean_object*)(l_Lean_MVarId_propext___lam__0___closed__3));
v___x_3159_ = l_Lean_mkConst(v___x_3158_, v___x_3157_);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0(uint8_t v___x_3160_, lean_object* v_mvarId_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_){
_start:
{
lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v___x_3174_; uint8_t v_foApprox_3175_; uint8_t v_ctxApprox_3176_; uint8_t v_quasiPatternApprox_3177_; uint8_t v_constApprox_3178_; uint8_t v_isDefEqStuckEx_3179_; uint8_t v_unificationHints_3180_; uint8_t v_proofIrrelevance_3181_; uint8_t v_assignSyntheticOpaque_3182_; uint8_t v_offsetCnstrs_3183_; uint8_t v_etaStruct_3184_; uint8_t v_univApprox_3185_; uint8_t v_iota_3186_; uint8_t v_beta_3187_; uint8_t v_proj_3188_; uint8_t v_zeta_3189_; uint8_t v_zetaDelta_3190_; uint8_t v_zetaUnused_3191_; uint8_t v_zetaHave_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3280_; 
v___x_3174_ = l_Lean_Meta_Context_config(v___y_3162_);
v_foApprox_3175_ = lean_ctor_get_uint8(v___x_3174_, 0);
v_ctxApprox_3176_ = lean_ctor_get_uint8(v___x_3174_, 1);
v_quasiPatternApprox_3177_ = lean_ctor_get_uint8(v___x_3174_, 2);
v_constApprox_3178_ = lean_ctor_get_uint8(v___x_3174_, 3);
v_isDefEqStuckEx_3179_ = lean_ctor_get_uint8(v___x_3174_, 4);
v_unificationHints_3180_ = lean_ctor_get_uint8(v___x_3174_, 5);
v_proofIrrelevance_3181_ = lean_ctor_get_uint8(v___x_3174_, 6);
v_assignSyntheticOpaque_3182_ = lean_ctor_get_uint8(v___x_3174_, 7);
v_offsetCnstrs_3183_ = lean_ctor_get_uint8(v___x_3174_, 8);
v_etaStruct_3184_ = lean_ctor_get_uint8(v___x_3174_, 10);
v_univApprox_3185_ = lean_ctor_get_uint8(v___x_3174_, 11);
v_iota_3186_ = lean_ctor_get_uint8(v___x_3174_, 12);
v_beta_3187_ = lean_ctor_get_uint8(v___x_3174_, 13);
v_proj_3188_ = lean_ctor_get_uint8(v___x_3174_, 14);
v_zeta_3189_ = lean_ctor_get_uint8(v___x_3174_, 15);
v_zetaDelta_3190_ = lean_ctor_get_uint8(v___x_3174_, 16);
v_zetaUnused_3191_ = lean_ctor_get_uint8(v___x_3174_, 17);
v_zetaHave_3192_ = lean_ctor_get_uint8(v___x_3174_, 18);
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3194_ = v___x_3174_;
v_isShared_3195_ = v_isSharedCheck_3280_;
goto v_resetjp_3193_;
}
else
{
lean_dec(v___x_3174_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3280_;
goto v_resetjp_3193_;
}
v___jp_3167_:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3172_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3173_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3172_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
return v___x_3173_;
}
v_resetjp_3193_:
{
uint8_t v_trackZetaDelta_3196_; lean_object* v_zetaDeltaSet_3197_; lean_object* v_lctx_3198_; lean_object* v_localInstances_3199_; lean_object* v_defEqCtx_x3f_3200_; lean_object* v_synthPendingDepth_3201_; lean_object* v_canUnfold_x3f_3202_; uint8_t v_univApprox_3203_; uint8_t v_inTypeClassResolution_3204_; uint8_t v_cacheInferType_3205_; lean_object* v_config_3207_; 
v_trackZetaDelta_3196_ = lean_ctor_get_uint8(v___y_3162_, sizeof(void*)*7);
v_zetaDeltaSet_3197_ = lean_ctor_get(v___y_3162_, 1);
v_lctx_3198_ = lean_ctor_get(v___y_3162_, 2);
v_localInstances_3199_ = lean_ctor_get(v___y_3162_, 3);
v_defEqCtx_x3f_3200_ = lean_ctor_get(v___y_3162_, 4);
v_synthPendingDepth_3201_ = lean_ctor_get(v___y_3162_, 5);
v_canUnfold_x3f_3202_ = lean_ctor_get(v___y_3162_, 6);
v_univApprox_3203_ = lean_ctor_get_uint8(v___y_3162_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3204_ = lean_ctor_get_uint8(v___y_3162_, sizeof(void*)*7 + 2);
v_cacheInferType_3205_ = lean_ctor_get_uint8(v___y_3162_, sizeof(void*)*7 + 3);
if (v_isShared_3195_ == 0)
{
v_config_3207_ = v___x_3194_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 0, v_foApprox_3175_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 1, v_ctxApprox_3176_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 2, v_quasiPatternApprox_3177_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 3, v_constApprox_3178_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 4, v_isDefEqStuckEx_3179_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 5, v_unificationHints_3180_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 6, v_proofIrrelevance_3181_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 7, v_assignSyntheticOpaque_3182_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 8, v_offsetCnstrs_3183_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 10, v_etaStruct_3184_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 11, v_univApprox_3185_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 12, v_iota_3186_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 13, v_beta_3187_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 14, v_proj_3188_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 15, v_zeta_3189_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 16, v_zetaDelta_3190_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 17, v_zetaUnused_3191_);
lean_ctor_set_uint8(v_reuseFailAlloc_3279_, 18, v_zetaHave_3192_);
v_config_3207_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
uint64_t v___x_3208_; uint64_t v___x_3209_; uint64_t v___x_3210_; uint64_t v___x_3211_; uint64_t v___x_3212_; uint64_t v_key_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
lean_ctor_set_uint8(v_config_3207_, 9, v___x_3160_);
v___x_3208_ = l_Lean_Meta_Context_configKey(v___y_3162_);
v___x_3209_ = 2ULL;
v___x_3210_ = lean_uint64_shift_right(v___x_3208_, v___x_3209_);
v___x_3211_ = lean_uint64_shift_left(v___x_3210_, v___x_3209_);
v___x_3212_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3160_);
v_key_3213_ = lean_uint64_lor(v___x_3211_, v___x_3212_);
v___x_3214_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3214_, 0, v_config_3207_);
lean_ctor_set_uint64(v___x_3214_, sizeof(void*)*1, v_key_3213_);
lean_inc(v_canUnfold_x3f_3202_);
lean_inc(v_synthPendingDepth_3201_);
lean_inc(v_defEqCtx_x3f_3200_);
lean_inc_ref(v_localInstances_3199_);
lean_inc_ref(v_lctx_3198_);
lean_inc(v_zetaDeltaSet_3197_);
v___x_3215_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3215_, 0, v___x_3214_);
lean_ctor_set(v___x_3215_, 1, v_zetaDeltaSet_3197_);
lean_ctor_set(v___x_3215_, 2, v_lctx_3198_);
lean_ctor_set(v___x_3215_, 3, v_localInstances_3199_);
lean_ctor_set(v___x_3215_, 4, v_defEqCtx_x3f_3200_);
lean_ctor_set(v___x_3215_, 5, v_synthPendingDepth_3201_);
lean_ctor_set(v___x_3215_, 6, v_canUnfold_x3f_3202_);
lean_ctor_set_uint8(v___x_3215_, sizeof(void*)*7, v_trackZetaDelta_3196_);
lean_ctor_set_uint8(v___x_3215_, sizeof(void*)*7 + 1, v_univApprox_3203_);
lean_ctor_set_uint8(v___x_3215_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3204_);
lean_ctor_set_uint8(v___x_3215_, sizeof(void*)*7 + 3, v_cacheInferType_3205_);
lean_inc(v___y_3165_);
lean_inc_ref(v___y_3164_);
lean_inc(v___y_3163_);
lean_inc(v_mvarId_3161_);
v___x_3216_ = l_Lean_MVarId_getType_x27(v_mvarId_3161_, v___x_3215_, v___y_3163_, v___y_3164_, v___y_3165_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; uint8_t v___x_3220_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3217_);
lean_dec_ref(v___x_3216_);
v___x_3218_ = ((lean_object*)(l_Lean_MVarId_propext___lam__0___closed__1));
v___x_3219_ = lean_unsigned_to_nat(3u);
v___x_3220_ = l_Lean_Expr_isAppOfArity(v_a_3217_, v___x_3218_, v___x_3219_);
if (v___x_3220_ == 0)
{
lean_object* v___x_3246_; lean_object* v___x_3247_; 
lean_dec(v_a_3217_);
lean_dec(v_mvarId_3161_);
v___x_3246_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3247_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3246_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_);
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
return v___x_3247_;
}
else
{
lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3248_ = l_Lean_Expr_appFn_x21(v_a_3217_);
lean_dec(v_a_3217_);
v___x_3249_ = l_Lean_Expr_appArg_x21(v___x_3248_);
lean_dec_ref(v___x_3248_);
lean_inc(v___y_3165_);
lean_inc_ref(v___y_3164_);
lean_inc(v___y_3163_);
lean_inc_ref(v___y_3162_);
v___x_3250_ = l_Lean_Meta_isProp(v___x_3249_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_);
if (lean_obj_tag(v___x_3250_) == 0)
{
lean_object* v_a_3251_; uint8_t v___x_3252_; 
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
lean_inc(v_a_3251_);
lean_dec_ref(v___x_3250_);
v___x_3252_ = lean_unbox(v_a_3251_);
lean_dec(v_a_3251_);
if (v___x_3252_ == 0)
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3262_; 
lean_dec(v_mvarId_3161_);
v___x_3253_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3254_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3253_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_);
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3257_ = v___x_3254_;
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3254_);
v___x_3257_ = lean_box(0);
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
v_resetjp_3256_:
{
lean_object* v___x_3260_; 
if (v_isShared_3258_ == 0)
{
v___x_3260_ = v___x_3257_;
goto v_reusejp_3259_;
}
else
{
lean_object* v_reuseFailAlloc_3261_; 
v_reuseFailAlloc_3261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3261_, 0, v_a_3255_);
v___x_3260_ = v_reuseFailAlloc_3261_;
goto v_reusejp_3259_;
}
v_reusejp_3259_:
{
return v___x_3260_;
}
}
}
else
{
goto v___jp_3221_;
}
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3270_; 
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v_mvarId_3161_);
v_a_3263_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3265_ = v___x_3250_;
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3250_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3268_; 
if (v_isShared_3266_ == 0)
{
v___x_3268_ = v___x_3265_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3263_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
return v___x_3268_;
}
}
}
}
v___jp_3221_:
{
lean_object* v___x_3222_; uint8_t v___x_3223_; uint8_t v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; 
v___x_3222_ = lean_obj_once(&l_Lean_MVarId_propext___lam__0___closed__4, &l_Lean_MVarId_propext___lam__0___closed__4_once, _init_l_Lean_MVarId_propext___lam__0___closed__4);
v___x_3223_ = 0;
v___x_3224_ = 0;
v___x_3225_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3225_, 0, v___x_3223_);
lean_ctor_set_uint8(v___x_3225_, 1, v___x_3220_);
lean_ctor_set_uint8(v___x_3225_, 2, v___x_3224_);
lean_ctor_set_uint8(v___x_3225_, 3, v___x_3220_);
v___x_3226_ = lean_box(0);
lean_inc(v___y_3165_);
lean_inc_ref(v___y_3164_);
lean_inc(v___y_3163_);
lean_inc_ref(v___y_3162_);
v___x_3227_ = l_Lean_MVarId_apply(v_mvarId_3161_, v___x_3222_, v___x_3225_, v___x_3226_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3237_; 
v_a_3228_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3237_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3230_ = v___x_3227_;
v_isShared_3231_ = v_isSharedCheck_3237_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3227_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3237_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
if (lean_obj_tag(v_a_3228_) == 1)
{
lean_object* v_tail_3232_; 
v_tail_3232_ = lean_ctor_get(v_a_3228_, 1);
if (lean_obj_tag(v_tail_3232_) == 0)
{
lean_object* v_head_3233_; lean_object* v___x_3235_; 
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
v_head_3233_ = lean_ctor_get(v_a_3228_, 0);
lean_inc(v_head_3233_);
lean_dec_ref(v_a_3228_);
if (v_isShared_3231_ == 0)
{
lean_ctor_set(v___x_3230_, 0, v_head_3233_);
v___x_3235_ = v___x_3230_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v_head_3233_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
return v___x_3235_;
}
}
else
{
lean_dec_ref(v_a_3228_);
lean_del_object(v___x_3230_);
v___y_3168_ = v___y_3162_;
v___y_3169_ = v___y_3163_;
v___y_3170_ = v___y_3164_;
v___y_3171_ = v___y_3165_;
goto v___jp_3167_;
}
}
else
{
lean_del_object(v___x_3230_);
lean_dec(v_a_3228_);
v___y_3168_ = v___y_3162_;
v___y_3169_ = v___y_3163_;
v___y_3170_ = v___y_3164_;
v___y_3171_ = v___y_3165_;
goto v___jp_3167_;
}
}
}
else
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3245_; 
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
v_a_3238_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3245_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3245_ == 0)
{
v___x_3240_ = v___x_3227_;
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3227_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3243_; 
if (v_isShared_3241_ == 0)
{
v___x_3243_ = v___x_3240_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3244_; 
v_reuseFailAlloc_3244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3244_, 0, v_a_3238_);
v___x_3243_ = v_reuseFailAlloc_3244_;
goto v_reusejp_3242_;
}
v_reusejp_3242_:
{
return v___x_3243_;
}
}
}
}
}
else
{
lean_object* v_a_3271_; lean_object* v___x_3273_; uint8_t v_isShared_3274_; uint8_t v_isSharedCheck_3278_; 
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v_mvarId_3161_);
v_a_3271_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3273_ = v___x_3216_;
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
else
{
lean_inc(v_a_3271_);
lean_dec(v___x_3216_);
v___x_3273_ = lean_box(0);
v_isShared_3274_ = v_isSharedCheck_3278_;
goto v_resetjp_3272_;
}
v_resetjp_3272_:
{
lean_object* v___x_3276_; 
if (v_isShared_3274_ == 0)
{
v___x_3276_ = v___x_3273_;
goto v_reusejp_3275_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_a_3271_);
v___x_3276_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3275_;
}
v_reusejp_3275_:
{
return v___x_3276_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0___boxed(lean_object* v___x_3281_, lean_object* v_mvarId_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_){
_start:
{
uint8_t v___x_2563__boxed_3288_; lean_object* v_res_3289_; 
v___x_2563__boxed_3288_ = lean_unbox(v___x_3281_);
v_res_3289_ = l_Lean_MVarId_propext___lam__0(v___x_2563__boxed_3288_, v_mvarId_3282_, v___y_3283_, v___y_3284_, v___y_3285_, v___y_3286_);
return v_res_3289_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext(lean_object* v_mvarId_3290_, lean_object* v_a_3291_, lean_object* v_a_3292_, lean_object* v_a_3293_, lean_object* v_a_3294_){
_start:
{
uint8_t v___x_3296_; lean_object* v___x_3297_; lean_object* v___f_3298_; lean_object* v___x_3299_; 
v___x_3296_ = 2;
v___x_3297_ = lean_box(v___x_3296_);
lean_inc(v_mvarId_3290_);
v___f_3298_ = lean_alloc_closure((void*)(l_Lean_MVarId_propext___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3298_, 0, v___x_3297_);
lean_closure_set(v___f_3298_, 1, v_mvarId_3290_);
v___x_3299_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3298_, v_a_3291_, v_a_3292_, v_a_3293_, v_a_3294_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v_a_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3311_; 
v_a_3300_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3311_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3311_ == 0)
{
v___x_3302_ = v___x_3299_;
v_isShared_3303_ = v_isSharedCheck_3311_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_a_3300_);
lean_dec(v___x_3299_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3311_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
if (lean_obj_tag(v_a_3300_) == 0)
{
lean_object* v___x_3305_; 
if (v_isShared_3303_ == 0)
{
lean_ctor_set(v___x_3302_, 0, v_mvarId_3290_);
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_mvarId_3290_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
else
{
lean_object* v_val_3307_; lean_object* v___x_3309_; 
lean_dec(v_mvarId_3290_);
v_val_3307_ = lean_ctor_get(v_a_3300_, 0);
lean_inc(v_val_3307_);
lean_dec_ref(v_a_3300_);
if (v_isShared_3303_ == 0)
{
lean_ctor_set(v___x_3302_, 0, v_val_3307_);
v___x_3309_ = v___x_3302_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v_val_3307_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
}
}
else
{
lean_object* v_a_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3319_; 
lean_dec(v_mvarId_3290_);
v_a_3312_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3319_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3319_ == 0)
{
v___x_3314_ = v___x_3299_;
v_isShared_3315_ = v_isSharedCheck_3319_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_a_3312_);
lean_dec(v___x_3299_);
v___x_3314_ = lean_box(0);
v_isShared_3315_ = v_isSharedCheck_3319_;
goto v_resetjp_3313_;
}
v_resetjp_3313_:
{
lean_object* v___x_3317_; 
if (v_isShared_3315_ == 0)
{
v___x_3317_ = v___x_3314_;
goto v_reusejp_3316_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v_a_3312_);
v___x_3317_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3316_;
}
v_reusejp_3316_:
{
return v___x_3317_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___boxed(lean_object* v_mvarId_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_){
_start:
{
lean_object* v_res_3326_; 
v_res_3326_ = l_Lean_MVarId_propext(v_mvarId_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_);
return v_res_3326_;
}
}
static uint64_t _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0(void){
_start:
{
uint8_t v___x_3327_; uint64_t v___x_3328_; 
v___x_3327_ = 2;
v___x_3328_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3327_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0(lean_object* v_mvarId_3335_, lean_object* v___x_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_){
_start:
{
lean_object* v___x_3342_; 
lean_inc(v_mvarId_3335_);
v___x_3342_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3335_, v___x_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_);
if (lean_obj_tag(v___x_3342_) == 0)
{
lean_object* v___x_3343_; uint8_t v_foApprox_3344_; uint8_t v_ctxApprox_3345_; uint8_t v_quasiPatternApprox_3346_; uint8_t v_constApprox_3347_; uint8_t v_isDefEqStuckEx_3348_; uint8_t v_unificationHints_3349_; uint8_t v_proofIrrelevance_3350_; uint8_t v_assignSyntheticOpaque_3351_; uint8_t v_offsetCnstrs_3352_; uint8_t v_etaStruct_3353_; uint8_t v_univApprox_3354_; uint8_t v_iota_3355_; uint8_t v_beta_3356_; uint8_t v_proj_3357_; uint8_t v_zeta_3358_; uint8_t v_zetaDelta_3359_; uint8_t v_zetaUnused_3360_; uint8_t v_zetaHave_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3431_; 
lean_dec_ref(v___x_3342_);
v___x_3343_ = l_Lean_Meta_Context_config(v___y_3337_);
v_foApprox_3344_ = lean_ctor_get_uint8(v___x_3343_, 0);
v_ctxApprox_3345_ = lean_ctor_get_uint8(v___x_3343_, 1);
v_quasiPatternApprox_3346_ = lean_ctor_get_uint8(v___x_3343_, 2);
v_constApprox_3347_ = lean_ctor_get_uint8(v___x_3343_, 3);
v_isDefEqStuckEx_3348_ = lean_ctor_get_uint8(v___x_3343_, 4);
v_unificationHints_3349_ = lean_ctor_get_uint8(v___x_3343_, 5);
v_proofIrrelevance_3350_ = lean_ctor_get_uint8(v___x_3343_, 6);
v_assignSyntheticOpaque_3351_ = lean_ctor_get_uint8(v___x_3343_, 7);
v_offsetCnstrs_3352_ = lean_ctor_get_uint8(v___x_3343_, 8);
v_etaStruct_3353_ = lean_ctor_get_uint8(v___x_3343_, 10);
v_univApprox_3354_ = lean_ctor_get_uint8(v___x_3343_, 11);
v_iota_3355_ = lean_ctor_get_uint8(v___x_3343_, 12);
v_beta_3356_ = lean_ctor_get_uint8(v___x_3343_, 13);
v_proj_3357_ = lean_ctor_get_uint8(v___x_3343_, 14);
v_zeta_3358_ = lean_ctor_get_uint8(v___x_3343_, 15);
v_zetaDelta_3359_ = lean_ctor_get_uint8(v___x_3343_, 16);
v_zetaUnused_3360_ = lean_ctor_get_uint8(v___x_3343_, 17);
v_zetaHave_3361_ = lean_ctor_get_uint8(v___x_3343_, 18);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3363_ = v___x_3343_;
v_isShared_3364_ = v_isSharedCheck_3431_;
goto v_resetjp_3362_;
}
else
{
lean_dec(v___x_3343_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3431_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
uint8_t v_trackZetaDelta_3365_; lean_object* v_zetaDeltaSet_3366_; lean_object* v_lctx_3367_; lean_object* v_localInstances_3368_; lean_object* v_defEqCtx_x3f_3369_; lean_object* v_synthPendingDepth_3370_; lean_object* v_canUnfold_x3f_3371_; uint8_t v_univApprox_3372_; uint8_t v_inTypeClassResolution_3373_; uint8_t v_cacheInferType_3374_; uint8_t v___x_3375_; lean_object* v_config_3377_; 
v_trackZetaDelta_3365_ = lean_ctor_get_uint8(v___y_3337_, sizeof(void*)*7);
v_zetaDeltaSet_3366_ = lean_ctor_get(v___y_3337_, 1);
v_lctx_3367_ = lean_ctor_get(v___y_3337_, 2);
v_localInstances_3368_ = lean_ctor_get(v___y_3337_, 3);
v_defEqCtx_x3f_3369_ = lean_ctor_get(v___y_3337_, 4);
v_synthPendingDepth_3370_ = lean_ctor_get(v___y_3337_, 5);
v_canUnfold_x3f_3371_ = lean_ctor_get(v___y_3337_, 6);
v_univApprox_3372_ = lean_ctor_get_uint8(v___y_3337_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3373_ = lean_ctor_get_uint8(v___y_3337_, sizeof(void*)*7 + 2);
v_cacheInferType_3374_ = lean_ctor_get_uint8(v___y_3337_, sizeof(void*)*7 + 3);
v___x_3375_ = 2;
if (v_isShared_3364_ == 0)
{
v_config_3377_ = v___x_3363_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 0, v_foApprox_3344_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 1, v_ctxApprox_3345_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 2, v_quasiPatternApprox_3346_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 3, v_constApprox_3347_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 4, v_isDefEqStuckEx_3348_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 5, v_unificationHints_3349_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 6, v_proofIrrelevance_3350_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 7, v_assignSyntheticOpaque_3351_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 8, v_offsetCnstrs_3352_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 10, v_etaStruct_3353_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 11, v_univApprox_3354_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 12, v_iota_3355_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 13, v_beta_3356_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 14, v_proj_3357_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 15, v_zeta_3358_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 16, v_zetaDelta_3359_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 17, v_zetaUnused_3360_);
lean_ctor_set_uint8(v_reuseFailAlloc_3430_, 18, v_zetaHave_3361_);
v_config_3377_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
uint64_t v___x_3378_; uint64_t v___x_3379_; uint64_t v___x_3380_; uint64_t v___x_3381_; uint64_t v___x_3382_; uint64_t v_key_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
lean_ctor_set_uint8(v_config_3377_, 9, v___x_3375_);
v___x_3378_ = l_Lean_Meta_Context_configKey(v___y_3337_);
v___x_3379_ = 2ULL;
v___x_3380_ = lean_uint64_shift_right(v___x_3378_, v___x_3379_);
v___x_3381_ = lean_uint64_shift_left(v___x_3380_, v___x_3379_);
v___x_3382_ = lean_uint64_once(&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0, &l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_once, _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0);
v_key_3383_ = lean_uint64_lor(v___x_3381_, v___x_3382_);
v___x_3384_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3384_, 0, v_config_3377_);
lean_ctor_set_uint64(v___x_3384_, sizeof(void*)*1, v_key_3383_);
lean_inc(v_canUnfold_x3f_3371_);
lean_inc(v_synthPendingDepth_3370_);
lean_inc(v_defEqCtx_x3f_3369_);
lean_inc_ref(v_localInstances_3368_);
lean_inc_ref(v_lctx_3367_);
lean_inc(v_zetaDeltaSet_3366_);
v___x_3385_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3385_, 0, v___x_3384_);
lean_ctor_set(v___x_3385_, 1, v_zetaDeltaSet_3366_);
lean_ctor_set(v___x_3385_, 2, v_lctx_3367_);
lean_ctor_set(v___x_3385_, 3, v_localInstances_3368_);
lean_ctor_set(v___x_3385_, 4, v_defEqCtx_x3f_3369_);
lean_ctor_set(v___x_3385_, 5, v_synthPendingDepth_3370_);
lean_ctor_set(v___x_3385_, 6, v_canUnfold_x3f_3371_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*7, v_trackZetaDelta_3365_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*7 + 1, v_univApprox_3372_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3373_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*7 + 3, v_cacheInferType_3374_);
lean_inc(v___y_3340_);
lean_inc_ref(v___y_3339_);
lean_inc(v___y_3338_);
lean_inc(v_mvarId_3335_);
v___x_3386_ = l_Lean_MVarId_getType_x27(v_mvarId_3335_, v___x_3385_, v___y_3338_, v___y_3339_, v___y_3340_);
if (lean_obj_tag(v___x_3386_) == 0)
{
lean_object* v_a_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; uint8_t v___x_3390_; 
v_a_3387_ = lean_ctor_get(v___x_3386_, 0);
lean_inc(v_a_3387_);
lean_dec_ref(v___x_3386_);
v___x_3388_ = ((lean_object*)(l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2));
v___x_3389_ = lean_unsigned_to_nat(4u);
v___x_3390_ = l_Lean_Expr_isAppOfArity(v_a_3387_, v___x_3388_, v___x_3389_);
if (v___x_3390_ == 0)
{
lean_object* v___x_3391_; lean_object* v___x_3392_; 
lean_dec(v_a_3387_);
lean_dec(v_mvarId_3335_);
v___x_3391_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3392_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3391_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec(v___y_3338_);
lean_dec_ref(v___y_3337_);
return v___x_3392_;
}
else
{
lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3393_ = l_Lean_Expr_appFn_x21(v_a_3387_);
v___x_3394_ = l_Lean_Expr_appFn_x21(v___x_3393_);
lean_dec_ref(v___x_3393_);
v___x_3395_ = l_Lean_Expr_appArg_x21(v___x_3394_);
lean_dec_ref(v___x_3394_);
v___x_3396_ = l_Lean_Expr_appArg_x21(v_a_3387_);
lean_dec(v_a_3387_);
v___x_3397_ = ((lean_object*)(l_Lean_MVarId_proofIrrelHeq___lam__0___closed__4));
v___x_3398_ = lean_unsigned_to_nat(2u);
v___x_3399_ = lean_mk_empty_array_with_capacity(v___x_3398_);
v___x_3400_ = lean_array_push(v___x_3399_, v___x_3395_);
v___x_3401_ = lean_array_push(v___x_3400_, v___x_3396_);
lean_inc(v___y_3338_);
v___x_3402_ = l_Lean_Meta_mkAppM(v___x_3397_, v___x_3401_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_);
if (lean_obj_tag(v___x_3402_) == 0)
{
lean_object* v_a_3403_; lean_object* v___x_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3412_; 
v_a_3403_ = lean_ctor_get(v___x_3402_, 0);
lean_inc(v_a_3403_);
lean_dec_ref(v___x_3402_);
v___x_3404_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_3335_, v_a_3403_, v___y_3338_);
lean_dec(v___y_3338_);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3404_);
if (v_isSharedCheck_3412_ == 0)
{
lean_object* v_unused_3413_; 
v_unused_3413_ = lean_ctor_get(v___x_3404_, 0);
lean_dec(v_unused_3413_);
v___x_3406_ = v___x_3404_;
v_isShared_3407_ = v_isSharedCheck_3412_;
goto v_resetjp_3405_;
}
else
{
lean_dec(v___x_3404_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3412_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3408_; lean_object* v___x_3410_; 
v___x_3408_ = lean_box(v___x_3390_);
if (v_isShared_3407_ == 0)
{
lean_ctor_set(v___x_3406_, 0, v___x_3408_);
v___x_3410_ = v___x_3406_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
}
else
{
lean_object* v_a_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3421_; 
lean_dec(v___y_3338_);
lean_dec(v_mvarId_3335_);
v_a_3414_ = lean_ctor_get(v___x_3402_, 0);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3421_ == 0)
{
v___x_3416_ = v___x_3402_;
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_a_3414_);
lean_dec(v___x_3402_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3421_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v___x_3419_; 
if (v_isShared_3417_ == 0)
{
v___x_3419_ = v___x_3416_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_a_3414_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
}
}
else
{
lean_object* v_a_3422_; lean_object* v___x_3424_; uint8_t v_isShared_3425_; uint8_t v_isSharedCheck_3429_; 
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec(v___y_3338_);
lean_dec_ref(v___y_3337_);
lean_dec(v_mvarId_3335_);
v_a_3422_ = lean_ctor_get(v___x_3386_, 0);
v_isSharedCheck_3429_ = !lean_is_exclusive(v___x_3386_);
if (v_isSharedCheck_3429_ == 0)
{
v___x_3424_ = v___x_3386_;
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
else
{
lean_inc(v_a_3422_);
lean_dec(v___x_3386_);
v___x_3424_ = lean_box(0);
v_isShared_3425_ = v_isSharedCheck_3429_;
goto v_resetjp_3423_;
}
v_resetjp_3423_:
{
lean_object* v___x_3427_; 
if (v_isShared_3425_ == 0)
{
v___x_3427_ = v___x_3424_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3428_; 
v_reuseFailAlloc_3428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3428_, 0, v_a_3422_);
v___x_3427_ = v_reuseFailAlloc_3428_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
return v___x_3427_;
}
}
}
}
}
}
else
{
lean_object* v_a_3432_; lean_object* v___x_3434_; uint8_t v_isShared_3435_; uint8_t v_isSharedCheck_3439_; 
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec(v___y_3338_);
lean_dec_ref(v___y_3337_);
lean_dec(v_mvarId_3335_);
v_a_3432_ = lean_ctor_get(v___x_3342_, 0);
v_isSharedCheck_3439_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3434_ = v___x_3342_;
v_isShared_3435_ = v_isSharedCheck_3439_;
goto v_resetjp_3433_;
}
else
{
lean_inc(v_a_3432_);
lean_dec(v___x_3342_);
v___x_3434_ = lean_box(0);
v_isShared_3435_ = v_isSharedCheck_3439_;
goto v_resetjp_3433_;
}
v_resetjp_3433_:
{
lean_object* v___x_3437_; 
if (v_isShared_3435_ == 0)
{
v___x_3437_ = v___x_3434_;
goto v_reusejp_3436_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v_a_3432_);
v___x_3437_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3436_;
}
v_reusejp_3436_:
{
return v___x_3437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___boxed(lean_object* v_mvarId_3440_, lean_object* v___x_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_){
_start:
{
lean_object* v_res_3447_; 
v_res_3447_ = l_Lean_MVarId_proofIrrelHeq___lam__0(v_mvarId_3440_, v___x_3441_, v___y_3442_, v___y_3443_, v___y_3444_, v___y_3445_);
return v_res_3447_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1(lean_object* v___f_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
lean_object* v___x_3454_; 
v___x_3454_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_);
if (lean_obj_tag(v___x_3454_) == 0)
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3468_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3457_ = v___x_3454_;
v_isShared_3458_ = v_isSharedCheck_3468_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3454_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3468_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
if (lean_obj_tag(v_a_3455_) == 0)
{
uint8_t v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3462_; 
v___x_3459_ = 0;
v___x_3460_ = lean_box(v___x_3459_);
if (v_isShared_3458_ == 0)
{
lean_ctor_set(v___x_3457_, 0, v___x_3460_);
v___x_3462_ = v___x_3457_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v___x_3460_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
else
{
lean_object* v_val_3464_; lean_object* v___x_3466_; 
v_val_3464_ = lean_ctor_get(v_a_3455_, 0);
lean_inc(v_val_3464_);
lean_dec_ref(v_a_3455_);
if (v_isShared_3458_ == 0)
{
lean_ctor_set(v___x_3457_, 0, v_val_3464_);
v___x_3466_ = v___x_3457_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_val_3464_);
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
else
{
lean_object* v_a_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3476_; 
v_a_3469_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3471_ = v___x_3454_;
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_a_3469_);
lean_dec(v___x_3454_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
lean_object* v___x_3474_; 
if (v_isShared_3472_ == 0)
{
v___x_3474_ = v___x_3471_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v_a_3469_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
return v___x_3474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1___boxed(lean_object* v___f_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
lean_object* v_res_3483_; 
v_res_3483_ = l_Lean_MVarId_proofIrrelHeq___lam__1(v___f_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_);
return v_res_3483_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq(lean_object* v_mvarId_3487_, lean_object* v_a_3488_, lean_object* v_a_3489_, lean_object* v_a_3490_, lean_object* v_a_3491_){
_start:
{
lean_object* v___x_3493_; lean_object* v___f_3494_; lean_object* v___f_3495_; lean_object* v___x_3496_; 
v___x_3493_ = ((lean_object*)(l_Lean_MVarId_proofIrrelHeq___closed__1));
lean_inc(v_mvarId_3487_);
v___f_3494_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3494_, 0, v_mvarId_3487_);
lean_closure_set(v___f_3494_, 1, v___x_3493_);
v___f_3495_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3495_, 0, v___f_3494_);
v___x_3496_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_3487_, v___f_3495_, v_a_3488_, v_a_3489_, v_a_3490_, v_a_3491_);
return v___x_3496_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___boxed(lean_object* v_mvarId_3497_, lean_object* v_a_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_){
_start:
{
lean_object* v_res_3503_; 
v_res_3503_ = l_Lean_MVarId_proofIrrelHeq(v_mvarId_3497_, v_a_3498_, v_a_3499_, v_a_3500_, v_a_3501_);
return v_res_3503_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0(lean_object* v_mvarId_3508_, lean_object* v___x_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_){
_start:
{
lean_object* v___x_3515_; 
lean_inc(v_mvarId_3508_);
v___x_3515_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3508_, v___x_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v___x_3516_; uint8_t v_foApprox_3517_; uint8_t v_ctxApprox_3518_; uint8_t v_quasiPatternApprox_3519_; uint8_t v_constApprox_3520_; uint8_t v_isDefEqStuckEx_3521_; uint8_t v_unificationHints_3522_; uint8_t v_proofIrrelevance_3523_; uint8_t v_assignSyntheticOpaque_3524_; uint8_t v_offsetCnstrs_3525_; uint8_t v_etaStruct_3526_; uint8_t v_univApprox_3527_; uint8_t v_iota_3528_; uint8_t v_beta_3529_; uint8_t v_proj_3530_; uint8_t v_zeta_3531_; uint8_t v_zetaDelta_3532_; uint8_t v_zetaUnused_3533_; uint8_t v_zetaHave_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3603_; 
lean_dec_ref(v___x_3515_);
v___x_3516_ = l_Lean_Meta_Context_config(v___y_3510_);
v_foApprox_3517_ = lean_ctor_get_uint8(v___x_3516_, 0);
v_ctxApprox_3518_ = lean_ctor_get_uint8(v___x_3516_, 1);
v_quasiPatternApprox_3519_ = lean_ctor_get_uint8(v___x_3516_, 2);
v_constApprox_3520_ = lean_ctor_get_uint8(v___x_3516_, 3);
v_isDefEqStuckEx_3521_ = lean_ctor_get_uint8(v___x_3516_, 4);
v_unificationHints_3522_ = lean_ctor_get_uint8(v___x_3516_, 5);
v_proofIrrelevance_3523_ = lean_ctor_get_uint8(v___x_3516_, 6);
v_assignSyntheticOpaque_3524_ = lean_ctor_get_uint8(v___x_3516_, 7);
v_offsetCnstrs_3525_ = lean_ctor_get_uint8(v___x_3516_, 8);
v_etaStruct_3526_ = lean_ctor_get_uint8(v___x_3516_, 10);
v_univApprox_3527_ = lean_ctor_get_uint8(v___x_3516_, 11);
v_iota_3528_ = lean_ctor_get_uint8(v___x_3516_, 12);
v_beta_3529_ = lean_ctor_get_uint8(v___x_3516_, 13);
v_proj_3530_ = lean_ctor_get_uint8(v___x_3516_, 14);
v_zeta_3531_ = lean_ctor_get_uint8(v___x_3516_, 15);
v_zetaDelta_3532_ = lean_ctor_get_uint8(v___x_3516_, 16);
v_zetaUnused_3533_ = lean_ctor_get_uint8(v___x_3516_, 17);
v_zetaHave_3534_ = lean_ctor_get_uint8(v___x_3516_, 18);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3536_ = v___x_3516_;
v_isShared_3537_ = v_isSharedCheck_3603_;
goto v_resetjp_3535_;
}
else
{
lean_dec(v___x_3516_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3603_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
uint8_t v_trackZetaDelta_3538_; lean_object* v_zetaDeltaSet_3539_; lean_object* v_lctx_3540_; lean_object* v_localInstances_3541_; lean_object* v_defEqCtx_x3f_3542_; lean_object* v_synthPendingDepth_3543_; lean_object* v_canUnfold_x3f_3544_; uint8_t v_univApprox_3545_; uint8_t v_inTypeClassResolution_3546_; uint8_t v_cacheInferType_3547_; uint8_t v___x_3548_; lean_object* v_config_3550_; 
v_trackZetaDelta_3538_ = lean_ctor_get_uint8(v___y_3510_, sizeof(void*)*7);
v_zetaDeltaSet_3539_ = lean_ctor_get(v___y_3510_, 1);
v_lctx_3540_ = lean_ctor_get(v___y_3510_, 2);
v_localInstances_3541_ = lean_ctor_get(v___y_3510_, 3);
v_defEqCtx_x3f_3542_ = lean_ctor_get(v___y_3510_, 4);
v_synthPendingDepth_3543_ = lean_ctor_get(v___y_3510_, 5);
v_canUnfold_x3f_3544_ = lean_ctor_get(v___y_3510_, 6);
v_univApprox_3545_ = lean_ctor_get_uint8(v___y_3510_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3546_ = lean_ctor_get_uint8(v___y_3510_, sizeof(void*)*7 + 2);
v_cacheInferType_3547_ = lean_ctor_get_uint8(v___y_3510_, sizeof(void*)*7 + 3);
v___x_3548_ = 2;
if (v_isShared_3537_ == 0)
{
v_config_3550_ = v___x_3536_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 0, v_foApprox_3517_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 1, v_ctxApprox_3518_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 2, v_quasiPatternApprox_3519_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 3, v_constApprox_3520_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 4, v_isDefEqStuckEx_3521_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 5, v_unificationHints_3522_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 6, v_proofIrrelevance_3523_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 7, v_assignSyntheticOpaque_3524_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 8, v_offsetCnstrs_3525_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 10, v_etaStruct_3526_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 11, v_univApprox_3527_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 12, v_iota_3528_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 13, v_beta_3529_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 14, v_proj_3530_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 15, v_zeta_3531_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 16, v_zetaDelta_3532_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 17, v_zetaUnused_3533_);
lean_ctor_set_uint8(v_reuseFailAlloc_3602_, 18, v_zetaHave_3534_);
v_config_3550_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
uint64_t v___x_3551_; uint64_t v___x_3552_; uint64_t v___x_3553_; uint64_t v___x_3554_; uint64_t v___x_3555_; uint64_t v_key_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
lean_ctor_set_uint8(v_config_3550_, 9, v___x_3548_);
v___x_3551_ = l_Lean_Meta_Context_configKey(v___y_3510_);
v___x_3552_ = 2ULL;
v___x_3553_ = lean_uint64_shift_right(v___x_3551_, v___x_3552_);
v___x_3554_ = lean_uint64_shift_left(v___x_3553_, v___x_3552_);
v___x_3555_ = lean_uint64_once(&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0, &l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_once, _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0);
v_key_3556_ = lean_uint64_lor(v___x_3554_, v___x_3555_);
v___x_3557_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3557_, 0, v_config_3550_);
lean_ctor_set_uint64(v___x_3557_, sizeof(void*)*1, v_key_3556_);
lean_inc(v_canUnfold_x3f_3544_);
lean_inc(v_synthPendingDepth_3543_);
lean_inc(v_defEqCtx_x3f_3542_);
lean_inc_ref(v_localInstances_3541_);
lean_inc_ref(v_lctx_3540_);
lean_inc(v_zetaDeltaSet_3539_);
v___x_3558_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3558_, 0, v___x_3557_);
lean_ctor_set(v___x_3558_, 1, v_zetaDeltaSet_3539_);
lean_ctor_set(v___x_3558_, 2, v_lctx_3540_);
lean_ctor_set(v___x_3558_, 3, v_localInstances_3541_);
lean_ctor_set(v___x_3558_, 4, v_defEqCtx_x3f_3542_);
lean_ctor_set(v___x_3558_, 5, v_synthPendingDepth_3543_);
lean_ctor_set(v___x_3558_, 6, v_canUnfold_x3f_3544_);
lean_ctor_set_uint8(v___x_3558_, sizeof(void*)*7, v_trackZetaDelta_3538_);
lean_ctor_set_uint8(v___x_3558_, sizeof(void*)*7 + 1, v_univApprox_3545_);
lean_ctor_set_uint8(v___x_3558_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3546_);
lean_ctor_set_uint8(v___x_3558_, sizeof(void*)*7 + 3, v_cacheInferType_3547_);
lean_inc(v___y_3513_);
lean_inc_ref(v___y_3512_);
lean_inc(v___y_3511_);
lean_inc(v_mvarId_3508_);
v___x_3559_ = l_Lean_MVarId_getType_x27(v_mvarId_3508_, v___x_3558_, v___y_3511_, v___y_3512_, v___y_3513_);
if (lean_obj_tag(v___x_3559_) == 0)
{
lean_object* v_a_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; uint8_t v___x_3563_; 
v_a_3560_ = lean_ctor_get(v___x_3559_, 0);
lean_inc(v_a_3560_);
lean_dec_ref(v___x_3559_);
v___x_3561_ = ((lean_object*)(l_Lean_MVarId_propext___lam__0___closed__1));
v___x_3562_ = lean_unsigned_to_nat(3u);
v___x_3563_ = l_Lean_Expr_isAppOfArity(v_a_3560_, v___x_3561_, v___x_3562_);
if (v___x_3563_ == 0)
{
lean_object* v___x_3564_; lean_object* v___x_3565_; 
lean_dec(v_a_3560_);
lean_dec(v_mvarId_3508_);
v___x_3564_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3565_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3564_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_);
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3512_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
return v___x_3565_;
}
else
{
lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
v___x_3566_ = l_Lean_Expr_appFn_x21(v_a_3560_);
v___x_3567_ = l_Lean_Expr_appArg_x21(v___x_3566_);
lean_dec_ref(v___x_3566_);
v___x_3568_ = l_Lean_Expr_appArg_x21(v_a_3560_);
lean_dec(v_a_3560_);
v___x_3569_ = ((lean_object*)(l_Lean_MVarId_subsingletonElim___lam__0___closed__1));
v___x_3570_ = lean_unsigned_to_nat(2u);
v___x_3571_ = lean_mk_empty_array_with_capacity(v___x_3570_);
v___x_3572_ = lean_array_push(v___x_3571_, v___x_3567_);
v___x_3573_ = lean_array_push(v___x_3572_, v___x_3568_);
lean_inc(v___y_3511_);
v___x_3574_ = l_Lean_Meta_mkAppM(v___x_3569_, v___x_3573_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; lean_object* v___x_3576_; lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3584_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3575_);
lean_dec_ref(v___x_3574_);
v___x_3576_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_3508_, v_a_3575_, v___y_3511_);
lean_dec(v___y_3511_);
v_isSharedCheck_3584_ = !lean_is_exclusive(v___x_3576_);
if (v_isSharedCheck_3584_ == 0)
{
lean_object* v_unused_3585_; 
v_unused_3585_ = lean_ctor_get(v___x_3576_, 0);
lean_dec(v_unused_3585_);
v___x_3578_ = v___x_3576_;
v_isShared_3579_ = v_isSharedCheck_3584_;
goto v_resetjp_3577_;
}
else
{
lean_dec(v___x_3576_);
v___x_3578_ = lean_box(0);
v_isShared_3579_ = v_isSharedCheck_3584_;
goto v_resetjp_3577_;
}
v_resetjp_3577_:
{
lean_object* v___x_3580_; lean_object* v___x_3582_; 
v___x_3580_ = lean_box(v___x_3563_);
if (v_isShared_3579_ == 0)
{
lean_ctor_set(v___x_3578_, 0, v___x_3580_);
v___x_3582_ = v___x_3578_;
goto v_reusejp_3581_;
}
else
{
lean_object* v_reuseFailAlloc_3583_; 
v_reuseFailAlloc_3583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3583_, 0, v___x_3580_);
v___x_3582_ = v_reuseFailAlloc_3583_;
goto v_reusejp_3581_;
}
v_reusejp_3581_:
{
return v___x_3582_;
}
}
}
else
{
lean_object* v_a_3586_; lean_object* v___x_3588_; uint8_t v_isShared_3589_; uint8_t v_isSharedCheck_3593_; 
lean_dec(v___y_3511_);
lean_dec(v_mvarId_3508_);
v_a_3586_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3593_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3593_ == 0)
{
v___x_3588_ = v___x_3574_;
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
else
{
lean_inc(v_a_3586_);
lean_dec(v___x_3574_);
v___x_3588_ = lean_box(0);
v_isShared_3589_ = v_isSharedCheck_3593_;
goto v_resetjp_3587_;
}
v_resetjp_3587_:
{
lean_object* v___x_3591_; 
if (v_isShared_3589_ == 0)
{
v___x_3591_ = v___x_3588_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v_a_3586_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
}
}
else
{
lean_object* v_a_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3601_; 
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3512_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
lean_dec(v_mvarId_3508_);
v_a_3594_ = lean_ctor_get(v___x_3559_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3596_ = v___x_3559_;
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_a_3594_);
lean_dec(v___x_3559_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3599_; 
if (v_isShared_3597_ == 0)
{
v___x_3599_ = v___x_3596_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v_a_3594_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
}
}
}
}
}
}
else
{
lean_object* v_a_3604_; lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3611_; 
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3512_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
lean_dec(v_mvarId_3508_);
v_a_3604_ = lean_ctor_get(v___x_3515_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3606_ = v___x_3515_;
v_isShared_3607_ = v_isSharedCheck_3611_;
goto v_resetjp_3605_;
}
else
{
lean_inc(v_a_3604_);
lean_dec(v___x_3515_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3611_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v___x_3609_; 
if (v_isShared_3607_ == 0)
{
v___x_3609_ = v___x_3606_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v_a_3604_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0___boxed(lean_object* v_mvarId_3612_, lean_object* v___x_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_){
_start:
{
lean_object* v_res_3619_; 
v_res_3619_ = l_Lean_MVarId_subsingletonElim___lam__0(v_mvarId_3612_, v___x_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_);
return v_res_3619_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim(lean_object* v_mvarId_3623_, lean_object* v_a_3624_, lean_object* v_a_3625_, lean_object* v_a_3626_, lean_object* v_a_3627_){
_start:
{
lean_object* v___x_3629_; lean_object* v___f_3630_; lean_object* v___f_3631_; lean_object* v___x_3632_; 
v___x_3629_ = ((lean_object*)(l_Lean_MVarId_subsingletonElim___closed__1));
lean_inc(v_mvarId_3623_);
v___f_3630_ = lean_alloc_closure((void*)(l_Lean_MVarId_subsingletonElim___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3630_, 0, v_mvarId_3623_);
lean_closure_set(v___f_3630_, 1, v___x_3629_);
v___f_3631_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3631_, 0, v___f_3630_);
v___x_3632_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_3623_, v___f_3631_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___boxed(lean_object* v_mvarId_3633_, lean_object* v_a_3634_, lean_object* v_a_3635_, lean_object* v_a_3636_, lean_object* v_a_3637_, lean_object* v_a_3638_){
_start:
{
lean_object* v_res_3639_; 
v_res_3639_ = l_Lean_MVarId_subsingletonElim(v_mvarId_3633_, v_a_3634_, v_a_3635_, v_a_3636_, v_a_3637_);
return v_res_3639_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Apply(builtin);
}
#ifdef __cplusplus
}
#endif
