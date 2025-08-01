// Lean compiler output
// Module: Lean.Meta.Tactic.Subst
// Imports: Lean.Meta.AppBuilder Lean.Meta.MatchUtil Lean.Meta.Tactic.Util Lean.Meta.Tactic.Revert Lean.Meta.Tactic.Assert Lean.Meta.Tactic.Intro Lean.Meta.Tactic.Clear Lean.Meta.Tactic.FVarSubst
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
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst_substEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__24;
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__12;
static lean_object* l_Lean_Meta_substCore___lam__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___Lean_addTrace___at___Lean_Meta_substCore_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__6;
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
static lean_object* l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_heqToEq___lam__0___closed__1;
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__1___closed__0;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
uint8_t lean_usize_dec_le(size_t, size_t);
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substVar___lam__0___closed__2;
size_t lean_uint64_to_usize(uint64_t);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
static lean_object* l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___closed__0;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__3;
static lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___Lean_Meta_substVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__13;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__20;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__8;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__29;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__17;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__0___boxed(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__1;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__1___closed__1;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__19;
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___Lean_Meta_substCore_spec__16(size_t, size_t, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
static size_t l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__1;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__30;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substVar___lam__0___closed__1;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
static lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substVar___lam__0___closed__0;
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_subst_substEq___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__4;
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__1___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__15;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__31;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static size_t l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__0;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__1___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_checkTraceOption(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__2;
static lean_object* l_Lean_Meta_substCore___lam__1___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__9;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__25;
LEAN_EXPORT lean_object* l_Lean_Meta_subst_substEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__5;
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_heqToEq___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__11;
uint64_t l_Lean_hashMVarId____x40_Lean_Expr___hyg_1872_(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__0;
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___Lean_Meta_substCore_spec__17(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
lean_object* lean_usize_to_nat(size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__18;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___Lean_Meta_substCore_spec__16___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
LEAN_EXPORT lean_object* l_panic___at___Lean_Meta_substCore_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_subst_substEq___lam__0___closed__0;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__2;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__26;
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__14;
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substVar___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static double l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__0;
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__10;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substVar___lam__0___closed__3;
size_t lean_usize_sub(size_t, size_t);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__4;
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__1___closed__4;
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__21;
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
LEAN_EXPORT lean_object* l_panic___at___Lean_Meta_subst_substEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn____x40_Lean_Meta_Tactic_Subst___hyg_3853_(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
static lean_object* l_Lean_Meta_substCore___lam__1___closed__9;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__27;
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__2;
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_subst_substEq___lam__0___closed__3;
static lean_object* l_Lean_Meta_substCore___lam__1___closed__5;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__23;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___Lean_Meta_substVar_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__1;
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
static lean_object* l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__2;
uint8_t l_Lean_Expr_isFVar(lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__2___closed__22;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__28;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
static lean_object* l_Lean_Meta_subst_substEq___lam__0___closed__1;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__16;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___Lean_addTrace___at___Lean_Meta_substCore_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_panic___at___Lean_Meta_substCore_spec__14___closed__0;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_substCore___lam__1___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_Lean_Expr_hasMVar(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_6 = lean_st_ref_get(x_2, x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec_ref(x_6);
x_9 = lean_ctor_get(x_7, 0);
lean_inc_ref(x_9);
lean_dec(x_7);
x_10 = l_Lean_instantiateMVarsCore(x_9, x_1);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec_ref(x_10);
x_13 = lean_st_ref_take(x_2, x_8);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec_ref(x_13);
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = lean_ctor_get(x_14, 0);
lean_dec(x_17);
lean_ctor_set(x_14, 0, x_12);
x_18 = lean_st_ref_set(x_2, x_14, x_15);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_11);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_11);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_23 = lean_ctor_get(x_14, 1);
x_24 = lean_ctor_get(x_14, 2);
x_25 = lean_ctor_get(x_14, 3);
x_26 = lean_ctor_get(x_14, 4);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_14);
x_27 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_27, 0, x_12);
lean_ctor_set(x_27, 1, x_23);
lean_ctor_set(x_27, 2, x_24);
lean_ctor_set(x_27, 3, x_25);
lean_ctor_set(x_27, 4, x_26);
x_28 = lean_st_ref_set(x_2, x_27, x_15);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(0, 2, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_11);
lean_ctor_set(x_31, 1, x_29);
return x_31;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(x_1, x_3, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_6, x_9);
if (x_10 == 1)
{
lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_2);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_6, x_12);
lean_dec(x_6);
x_14 = lean_nat_sub(x_5, x_13);
x_15 = lean_nat_sub(x_14, x_12);
lean_dec(x_14);
x_16 = lean_nat_add(x_15, x_1);
lean_inc(x_2);
x_17 = lean_array_get(x_2, x_3, x_16);
lean_dec(x_16);
x_18 = lean_array_fget(x_4, x_15);
lean_dec(x_15);
x_19 = l_Lean_Expr_fvar___override(x_18);
x_20 = l_Lean_Meta_FVarSubst_insert(x_7, x_17, x_19);
x_6 = x_13;
x_7 = x_20;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_8, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_ctor_get(x_2, 2);
x_5 = lean_ctor_get(x_2, 12);
x_6 = l_Lean_checkTraceOption(x_5, x_4, x_1);
x_7 = lean_box(x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_1, x_4, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___Lean_addTrace___at___Lean_Meta_substCore_spec__3_spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
x_11 = lean_ctor_get(x_9, 0);
lean_inc_ref(x_11);
lean_dec(x_9);
x_12 = lean_st_ref_get(x_3, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_14, 0);
lean_inc_ref(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_2, 2);
x_17 = lean_ctor_get(x_4, 2);
lean_inc(x_17);
lean_inc_ref(x_16);
x_18 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_15);
lean_ctor_set(x_18, 2, x_16);
lean_ctor_set(x_18, 3, x_17);
lean_ctor_set_tag(x_7, 3);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 0, x_18);
lean_ctor_set(x_12, 0, x_7);
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = lean_ctor_get(x_19, 0);
lean_inc_ref(x_21);
lean_dec(x_19);
x_22 = lean_ctor_get(x_2, 2);
x_23 = lean_ctor_get(x_4, 2);
lean_inc(x_23);
lean_inc_ref(x_22);
x_24 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_24, 0, x_11);
lean_ctor_set(x_24, 1, x_21);
lean_ctor_set(x_24, 2, x_22);
lean_ctor_set(x_24, 3, x_23);
lean_ctor_set_tag(x_7, 3);
lean_ctor_set(x_7, 1, x_1);
lean_ctor_set(x_7, 0, x_24);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_7);
lean_ctor_set(x_25, 1, x_20);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_26 = lean_ctor_get(x_7, 0);
x_27 = lean_ctor_get(x_7, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_7);
x_28 = lean_ctor_get(x_26, 0);
lean_inc_ref(x_28);
lean_dec(x_26);
x_29 = lean_st_ref_get(x_3, x_27);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_32 = x_29;
} else {
 lean_dec_ref(x_29);
 x_32 = lean_box(0);
}
x_33 = lean_ctor_get(x_30, 0);
lean_inc_ref(x_33);
lean_dec(x_30);
x_34 = lean_ctor_get(x_2, 2);
x_35 = lean_ctor_get(x_4, 2);
lean_inc(x_35);
lean_inc_ref(x_34);
x_36 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_36, 0, x_28);
lean_ctor_set(x_36, 1, x_33);
lean_ctor_set(x_36, 2, x_34);
lean_ctor_set(x_36, 3, x_35);
x_37 = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_1);
if (lean_is_scalar(x_32)) {
 x_38 = lean_alloc_ctor(0, 2, 0);
} else {
 x_38 = x_32;
}
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_31);
return x_38;
}
}
}
static double _init_l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__0() {
_start:
{
lean_object* x_1; double x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_float_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_8 = lean_ctor_get(x_5, 5);
x_9 = l_Lean_addMessageContextFull___at___Lean_addTrace___at___Lean_Meta_substCore_spec__3_spec__3(x_2, x_3, x_4, x_5, x_6, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec_ref(x_9);
x_12 = lean_st_ref_take(x_6, x_11);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_13, 4);
lean_inc_ref(x_14);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_ctor_get(x_12, 1);
x_17 = lean_ctor_get(x_12, 0);
lean_dec(x_17);
x_18 = !lean_is_exclusive(x_13);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_13, 4);
lean_dec(x_19);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
lean_object* x_21; double x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__0;
x_23 = 0;
x_24 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__1;
x_25 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
lean_ctor_set_float(x_25, sizeof(void*)*2, x_22);
lean_ctor_set_float(x_25, sizeof(void*)*2 + 8, x_22);
lean_ctor_set_uint8(x_25, sizeof(void*)*2 + 16, x_23);
x_26 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__2;
x_27 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_10);
lean_ctor_set(x_27, 2, x_26);
lean_inc(x_8);
lean_ctor_set(x_12, 1, x_27);
lean_ctor_set(x_12, 0, x_8);
x_28 = l_Lean_PersistentArray_push___redArg(x_21, x_12);
lean_ctor_set(x_14, 0, x_28);
x_29 = lean_st_ref_set(x_6, x_13, x_16);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
x_32 = lean_box(0);
lean_ctor_set(x_29, 0, x_32);
return x_29;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
return x_35;
}
}
else
{
uint64_t x_36; lean_object* x_37; double x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_36 = lean_ctor_get_uint64(x_14, sizeof(void*)*1);
x_37 = lean_ctor_get(x_14, 0);
lean_inc(x_37);
lean_dec(x_14);
x_38 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__0;
x_39 = 0;
x_40 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__1;
x_41 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_41, 0, x_1);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set_float(x_41, sizeof(void*)*2, x_38);
lean_ctor_set_float(x_41, sizeof(void*)*2 + 8, x_38);
lean_ctor_set_uint8(x_41, sizeof(void*)*2 + 16, x_39);
x_42 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__2;
x_43 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_10);
lean_ctor_set(x_43, 2, x_42);
lean_inc(x_8);
lean_ctor_set(x_12, 1, x_43);
lean_ctor_set(x_12, 0, x_8);
x_44 = l_Lean_PersistentArray_push___redArg(x_37, x_12);
x_45 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set_uint64(x_45, sizeof(void*)*1, x_36);
lean_ctor_set(x_13, 4, x_45);
x_46 = lean_st_ref_set(x_6, x_13, x_16);
x_47 = lean_ctor_get(x_46, 1);
lean_inc(x_47);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_48 = x_46;
} else {
 lean_dec_ref(x_46);
 x_48 = lean_box(0);
}
x_49 = lean_box(0);
if (lean_is_scalar(x_48)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_48;
}
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_47);
return x_50;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint64_t x_59; lean_object* x_60; lean_object* x_61; double x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_51 = lean_ctor_get(x_13, 0);
x_52 = lean_ctor_get(x_13, 1);
x_53 = lean_ctor_get(x_13, 2);
x_54 = lean_ctor_get(x_13, 3);
x_55 = lean_ctor_get(x_13, 5);
x_56 = lean_ctor_get(x_13, 6);
x_57 = lean_ctor_get(x_13, 7);
x_58 = lean_ctor_get(x_13, 8);
lean_inc(x_58);
lean_inc(x_57);
lean_inc(x_56);
lean_inc(x_55);
lean_inc(x_54);
lean_inc(x_53);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_13);
x_59 = lean_ctor_get_uint64(x_14, sizeof(void*)*1);
x_60 = lean_ctor_get(x_14, 0);
lean_inc_ref(x_60);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 x_61 = x_14;
} else {
 lean_dec_ref(x_14);
 x_61 = lean_box(0);
}
x_62 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__0;
x_63 = 0;
x_64 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__1;
x_65 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_65, 0, x_1);
lean_ctor_set(x_65, 1, x_64);
lean_ctor_set_float(x_65, sizeof(void*)*2, x_62);
lean_ctor_set_float(x_65, sizeof(void*)*2 + 8, x_62);
lean_ctor_set_uint8(x_65, sizeof(void*)*2 + 16, x_63);
x_66 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__2;
x_67 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_10);
lean_ctor_set(x_67, 2, x_66);
lean_inc(x_8);
lean_ctor_set(x_12, 1, x_67);
lean_ctor_set(x_12, 0, x_8);
x_68 = l_Lean_PersistentArray_push___redArg(x_60, x_12);
if (lean_is_scalar(x_61)) {
 x_69 = lean_alloc_ctor(0, 1, 8);
} else {
 x_69 = x_61;
}
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set_uint64(x_69, sizeof(void*)*1, x_59);
x_70 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_70, 0, x_51);
lean_ctor_set(x_70, 1, x_52);
lean_ctor_set(x_70, 2, x_53);
lean_ctor_set(x_70, 3, x_54);
lean_ctor_set(x_70, 4, x_69);
lean_ctor_set(x_70, 5, x_55);
lean_ctor_set(x_70, 6, x_56);
lean_ctor_set(x_70, 7, x_57);
lean_ctor_set(x_70, 8, x_58);
x_71 = lean_st_ref_set(x_6, x_70, x_16);
x_72 = lean_ctor_get(x_71, 1);
lean_inc(x_72);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_73 = x_71;
} else {
 lean_dec_ref(x_71);
 x_73 = lean_box(0);
}
x_74 = lean_box(0);
if (lean_is_scalar(x_73)) {
 x_75 = lean_alloc_ctor(0, 2, 0);
} else {
 x_75 = x_73;
}
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_72);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint64_t x_86; lean_object* x_87; lean_object* x_88; double x_89; uint8_t x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_76 = lean_ctor_get(x_12, 1);
lean_inc(x_76);
lean_dec(x_12);
x_77 = lean_ctor_get(x_13, 0);
lean_inc_ref(x_77);
x_78 = lean_ctor_get(x_13, 1);
lean_inc(x_78);
x_79 = lean_ctor_get(x_13, 2);
lean_inc_ref(x_79);
x_80 = lean_ctor_get(x_13, 3);
lean_inc_ref(x_80);
x_81 = lean_ctor_get(x_13, 5);
lean_inc_ref(x_81);
x_82 = lean_ctor_get(x_13, 6);
lean_inc_ref(x_82);
x_83 = lean_ctor_get(x_13, 7);
lean_inc_ref(x_83);
x_84 = lean_ctor_get(x_13, 8);
lean_inc_ref(x_84);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 lean_ctor_release(x_13, 2);
 lean_ctor_release(x_13, 3);
 lean_ctor_release(x_13, 4);
 lean_ctor_release(x_13, 5);
 lean_ctor_release(x_13, 6);
 lean_ctor_release(x_13, 7);
 lean_ctor_release(x_13, 8);
 x_85 = x_13;
} else {
 lean_dec_ref(x_13);
 x_85 = lean_box(0);
}
x_86 = lean_ctor_get_uint64(x_14, sizeof(void*)*1);
x_87 = lean_ctor_get(x_14, 0);
lean_inc_ref(x_87);
if (lean_is_exclusive(x_14)) {
 lean_ctor_release(x_14, 0);
 x_88 = x_14;
} else {
 lean_dec_ref(x_14);
 x_88 = lean_box(0);
}
x_89 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__0;
x_90 = 0;
x_91 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__1;
x_92 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_92, 0, x_1);
lean_ctor_set(x_92, 1, x_91);
lean_ctor_set_float(x_92, sizeof(void*)*2, x_89);
lean_ctor_set_float(x_92, sizeof(void*)*2 + 8, x_89);
lean_ctor_set_uint8(x_92, sizeof(void*)*2 + 16, x_90);
x_93 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__2;
x_94 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_10);
lean_ctor_set(x_94, 2, x_93);
lean_inc(x_8);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_8);
lean_ctor_set(x_95, 1, x_94);
x_96 = l_Lean_PersistentArray_push___redArg(x_87, x_95);
if (lean_is_scalar(x_88)) {
 x_97 = lean_alloc_ctor(0, 1, 8);
} else {
 x_97 = x_88;
}
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set_uint64(x_97, sizeof(void*)*1, x_86);
if (lean_is_scalar(x_85)) {
 x_98 = lean_alloc_ctor(0, 9, 0);
} else {
 x_98 = x_85;
}
lean_ctor_set(x_98, 0, x_77);
lean_ctor_set(x_98, 1, x_78);
lean_ctor_set(x_98, 2, x_79);
lean_ctor_set(x_98, 3, x_80);
lean_ctor_set(x_98, 4, x_97);
lean_ctor_set(x_98, 5, x_81);
lean_ctor_set(x_98, 6, x_82);
lean_ctor_set(x_98, 7, x_83);
lean_ctor_set(x_98, 8, x_84);
x_99 = lean_st_ref_set(x_6, x_98, x_76);
x_100 = lean_ctor_get(x_99, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_101 = x_99;
} else {
 lean_dec_ref(x_99);
 x_101 = lean_box(0);
}
x_102 = lean_box(0);
if (lean_is_scalar(x_101)) {
 x_103 = lean_alloc_ctor(0, 2, 0);
} else {
 x_103 = x_101;
}
lean_ctor_set(x_103, 0, x_102);
lean_ctor_set(x_103, 1, x_100);
return x_103;
}
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__0(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_name_eq(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_unsigned_to_nat(8u);
x_3 = lean_nat_mul(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__0;
x_3 = lean_nat_div(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__1;
x_2 = l_Nat_nextPowerOfTwo(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__2;
x_3 = lean_mk_array(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_34; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_40 = lean_ctor_get(x_7, 0);
lean_inc_ref(x_40);
lean_dec(x_7);
x_41 = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__0___boxed), 1, 0);
x_42 = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__1___boxed), 2, 1);
lean_closure_set(x_42, 0, x_2);
x_43 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__4;
lean_inc_ref(x_40);
lean_ctor_set(x_5, 1, x_40);
lean_ctor_set(x_5, 0, x_43);
x_44 = l_Lean_Expr_hasFVar(x_1);
if (x_44 == 0)
{
uint8_t x_45; 
x_45 = l_Lean_Expr_hasMVar(x_1);
if (x_45 == 0)
{
lean_dec_ref(x_5);
lean_dec_ref(x_42);
lean_dec_ref(x_41);
lean_dec_ref(x_1);
x_9 = x_45;
x_10 = x_40;
goto block_33;
}
else
{
lean_object* x_46; 
lean_dec_ref(x_40);
x_46 = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(x_42, x_41, x_1, x_5);
x_34 = x_46;
goto block_39;
}
}
else
{
lean_object* x_47; 
lean_dec_ref(x_40);
x_47 = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(x_42, x_41, x_1, x_5);
x_34 = x_47;
goto block_39;
}
block_33:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_st_ref_take(x_3, x_8);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec_ref(x_11);
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
lean_ctor_set(x_12, 0, x_10);
x_16 = lean_st_ref_set(x_3, x_12, x_13);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(x_9);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(x_9);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_23 = lean_ctor_get(x_12, 1);
x_24 = lean_ctor_get(x_12, 2);
x_25 = lean_ctor_get(x_12, 3);
x_26 = lean_ctor_get(x_12, 4);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_12);
x_27 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_27, 0, x_10);
lean_ctor_set(x_27, 1, x_23);
lean_ctor_set(x_27, 2, x_24);
lean_ctor_set(x_27, 3, x_25);
lean_ctor_set(x_27, 4, x_26);
x_28 = lean_st_ref_set(x_3, x_27, x_13);
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_30 = x_28;
} else {
 lean_dec_ref(x_28);
 x_30 = lean_box(0);
}
x_31 = lean_box(x_9);
if (lean_is_scalar(x_30)) {
 x_32 = lean_alloc_ctor(0, 2, 0);
} else {
 x_32 = x_30;
}
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_29);
return x_32;
}
}
block_39:
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec_ref(x_34);
x_37 = lean_ctor_get(x_35, 1);
lean_inc_ref(x_37);
lean_dec(x_35);
x_38 = lean_unbox(x_36);
lean_dec(x_36);
x_9 = x_38;
x_10 = x_37;
goto block_33;
}
}
else
{
lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_51; lean_object* x_67; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_48 = lean_ctor_get(x_5, 0);
x_49 = lean_ctor_get(x_5, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_5);
x_73 = lean_ctor_get(x_48, 0);
lean_inc_ref(x_73);
lean_dec(x_48);
x_74 = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__0___boxed), 1, 0);
x_75 = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__1___boxed), 2, 1);
lean_closure_set(x_75, 0, x_2);
x_76 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__4;
lean_inc_ref(x_73);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_73);
x_78 = l_Lean_Expr_hasFVar(x_1);
if (x_78 == 0)
{
uint8_t x_79; 
x_79 = l_Lean_Expr_hasMVar(x_1);
if (x_79 == 0)
{
lean_dec_ref(x_77);
lean_dec_ref(x_75);
lean_dec_ref(x_74);
lean_dec_ref(x_1);
x_50 = x_79;
x_51 = x_73;
goto block_66;
}
else
{
lean_object* x_80; 
lean_dec_ref(x_73);
x_80 = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(x_75, x_74, x_1, x_77);
x_67 = x_80;
goto block_72;
}
}
else
{
lean_object* x_81; 
lean_dec_ref(x_73);
x_81 = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(x_75, x_74, x_1, x_77);
x_67 = x_81;
goto block_72;
}
block_66:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_52 = lean_st_ref_take(x_3, x_49);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec_ref(x_52);
x_55 = lean_ctor_get(x_53, 1);
lean_inc_ref(x_55);
x_56 = lean_ctor_get(x_53, 2);
lean_inc(x_56);
x_57 = lean_ctor_get(x_53, 3);
lean_inc_ref(x_57);
x_58 = lean_ctor_get(x_53, 4);
lean_inc_ref(x_58);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 lean_ctor_release(x_53, 2);
 lean_ctor_release(x_53, 3);
 lean_ctor_release(x_53, 4);
 x_59 = x_53;
} else {
 lean_dec_ref(x_53);
 x_59 = lean_box(0);
}
if (lean_is_scalar(x_59)) {
 x_60 = lean_alloc_ctor(0, 5, 0);
} else {
 x_60 = x_59;
}
lean_ctor_set(x_60, 0, x_51);
lean_ctor_set(x_60, 1, x_55);
lean_ctor_set(x_60, 2, x_56);
lean_ctor_set(x_60, 3, x_57);
lean_ctor_set(x_60, 4, x_58);
x_61 = lean_st_ref_set(x_3, x_60, x_54);
x_62 = lean_ctor_get(x_61, 1);
lean_inc(x_62);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_63 = x_61;
} else {
 lean_dec_ref(x_61);
 x_63 = lean_box(0);
}
x_64 = lean_box(x_50);
if (lean_is_scalar(x_63)) {
 x_65 = lean_alloc_ctor(0, 2, 0);
} else {
 x_65 = x_63;
}
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_62);
return x_65;
}
block_72:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
x_68 = lean_ctor_get(x_67, 1);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 0);
lean_inc(x_69);
lean_dec_ref(x_67);
x_70 = lean_ctor_get(x_68, 1);
lean_inc_ref(x_70);
lean_dec(x_68);
x_71 = lean_unbox(x_69);
lean_dec(x_69);
x_50 = x_71;
x_51 = x_70;
goto block_66;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(x_1, x_2, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6_spec__6___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_array_get_size(x_6);
x_9 = lean_nat_dec_lt(x_2, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_2);
x_10 = lean_array_push(x_6, x_3);
x_11 = lean_array_push(x_7, x_4);
lean_ctor_set(x_1, 1, x_11);
lean_ctor_set(x_1, 0, x_10);
return x_1;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_fget(x_6, x_2);
x_13 = lean_name_eq(x_3, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_2, x_14);
lean_dec(x_2);
x_2 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_array_fset(x_6, x_2, x_3);
x_18 = lean_array_fset(x_7, x_2, x_4);
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_18);
lean_ctor_set(x_1, 0, x_17);
return x_1;
}
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_1, 0);
x_20 = lean_ctor_get(x_1, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_1);
x_21 = lean_array_get_size(x_19);
x_22 = lean_nat_dec_lt(x_2, x_21);
lean_dec(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
lean_dec(x_2);
x_23 = lean_array_push(x_19, x_3);
x_24 = lean_array_push(x_20, x_4);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
else
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_array_fget(x_19, x_2);
x_27 = lean_name_eq(x_3, x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_19);
lean_ctor_set(x_28, 1, x_20);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_add(x_2, x_29);
lean_dec(x_2);
x_1 = x_28;
x_2 = x_30;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_array_fset(x_19, x_2, x_3);
x_33 = lean_array_fset(x_20, x_2, x_4);
lean_dec(x_2);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6_spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6_spec__6___redArg(x_2, x_3, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6_spec__6___redArg(x_1, x_4, x_2, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8___redArg(size_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_get_size(x_2);
x_7 = lean_nat_dec_lt(x_4, x_6);
lean_dec(x_6);
if (x_7 == 0)
{
lean_dec(x_4);
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; uint64_t x_10; size_t x_11; size_t x_12; lean_object* x_13; size_t x_14; size_t x_15; size_t x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
x_8 = lean_array_fget(x_2, x_4);
x_9 = lean_array_fget(x_3, x_4);
x_10 = l_Lean_hashMVarId____x40_Lean_Expr___hyg_1872_(x_8);
x_11 = lean_uint64_to_usize(x_10);
x_12 = 5;
x_13 = lean_unsigned_to_nat(1u);
x_14 = 1;
x_15 = lean_usize_sub(x_1, x_14);
x_16 = lean_usize_mul(x_12, x_15);
x_17 = lean_usize_shift_right(x_11, x_16);
x_18 = lean_nat_add(x_4, x_13);
lean_dec(x_4);
x_19 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg(x_5, x_17, x_1, x_8, x_9);
x_4 = x_18;
x_5 = x_19;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8(lean_object* x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8___redArg(x_2, x_3, x_4, x_6, x_7);
return x_8;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__0() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 5;
x_2 = 1;
x_3 = lean_usize_shift_left(x_2, x_1);
return x_3;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__1() {
_start:
{
size_t x_1; size_t x_2; size_t x_3; 
x_1 = 1;
x_2 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__0;
x_3 = lean_usize_sub(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; size_t x_7; size_t x_8; size_t x_9; size_t x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_6);
x_7 = 5;
x_8 = 1;
x_9 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__1;
x_10 = lean_usize_land(x_2, x_9);
x_11 = lean_usize_to_nat(x_10);
x_12 = lean_array_get_size(x_6);
x_13 = lean_nat_dec_lt(x_11, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_dec(x_11);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_14 = x_1;
} else {
 lean_dec_ref(x_1);
 x_14 = lean_box(0);
}
x_15 = lean_array_fget(x_6, x_11);
x_16 = lean_box(0);
x_17 = lean_array_fset(x_6, x_11, x_16);
switch (lean_obj_tag(x_15)) {
case 0:
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
x_25 = lean_name_eq(x_4, x_23);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
lean_free_object(x_15);
x_26 = l_Lean_PersistentHashMap_mkCollisionNode___redArg(x_23, x_24, x_4, x_5);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
x_18 = x_27;
goto block_21;
}
else
{
lean_dec(x_24);
lean_dec(x_23);
lean_ctor_set(x_15, 1, x_5);
lean_ctor_set(x_15, 0, x_4);
x_18 = x_15;
goto block_21;
}
}
else
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
x_28 = lean_ctor_get(x_15, 0);
x_29 = lean_ctor_get(x_15, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_15);
x_30 = lean_name_eq(x_4, x_28);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_Lean_PersistentHashMap_mkCollisionNode___redArg(x_28, x_29, x_4, x_5);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_18 = x_32;
goto block_21;
}
else
{
lean_object* x_33; 
lean_dec(x_29);
lean_dec(x_28);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_4);
lean_ctor_set(x_33, 1, x_5);
x_18 = x_33;
goto block_21;
}
}
}
case 1:
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_15);
if (x_34 == 0)
{
lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_15, 0);
x_36 = lean_usize_shift_right(x_2, x_7);
x_37 = lean_usize_add(x_3, x_8);
x_38 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg(x_35, x_36, x_37, x_4, x_5);
lean_ctor_set(x_15, 0, x_38);
x_18 = x_15;
goto block_21;
}
else
{
lean_object* x_39; size_t x_40; size_t x_41; lean_object* x_42; lean_object* x_43; 
x_39 = lean_ctor_get(x_15, 0);
lean_inc(x_39);
lean_dec(x_15);
x_40 = lean_usize_shift_right(x_2, x_7);
x_41 = lean_usize_add(x_3, x_8);
x_42 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg(x_39, x_40, x_41, x_4, x_5);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_18 = x_43;
goto block_21;
}
}
default: 
{
lean_object* x_44; 
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_4);
lean_ctor_set(x_44, 1, x_5);
x_18 = x_44;
goto block_21;
}
}
block_21:
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_array_fset(x_17, x_11, x_18);
lean_dec(x_11);
if (lean_is_scalar(x_14)) {
 x_20 = lean_alloc_ctor(0, 1, 0);
} else {
 x_20 = x_14;
}
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_1);
if (x_45 == 0)
{
lean_object* x_46; uint8_t x_47; size_t x_54; uint8_t x_55; 
x_46 = l_Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6___redArg(x_1, x_4, x_5);
x_54 = 7;
x_55 = lean_usize_dec_le(x_54, x_3);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_56 = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(x_46);
x_57 = lean_unsigned_to_nat(4u);
x_58 = lean_nat_dec_lt(x_56, x_57);
lean_dec(x_56);
x_47 = x_58;
goto block_53;
}
else
{
x_47 = x_55;
goto block_53;
}
block_53:
{
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_48 = lean_ctor_get(x_46, 0);
lean_inc_ref(x_48);
x_49 = lean_ctor_get(x_46, 1);
lean_inc_ref(x_49);
lean_dec_ref(x_46);
x_50 = lean_unsigned_to_nat(0u);
x_51 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__2;
x_52 = l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8___redArg(x_3, x_48, x_49, x_50, x_51);
lean_dec_ref(x_49);
lean_dec_ref(x_48);
return x_52;
}
else
{
return x_46;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; size_t x_70; uint8_t x_71; 
x_59 = lean_ctor_get(x_1, 0);
x_60 = lean_ctor_get(x_1, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_1);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_PersistentHashMap_insertAtCollisionNode___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__6___redArg(x_61, x_4, x_5);
x_70 = 7;
x_71 = lean_usize_dec_le(x_70, x_3);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_72 = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(x_62);
x_73 = lean_unsigned_to_nat(4u);
x_74 = lean_nat_dec_lt(x_72, x_73);
lean_dec(x_72);
x_63 = x_74;
goto block_69;
}
else
{
x_63 = x_71;
goto block_69;
}
block_69:
{
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = lean_ctor_get(x_62, 0);
lean_inc_ref(x_64);
x_65 = lean_ctor_get(x_62, 1);
lean_inc_ref(x_65);
lean_dec_ref(x_62);
x_66 = lean_unsigned_to_nat(0u);
x_67 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__2;
x_68 = l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8___redArg(x_3, x_64, x_65, x_66, x_67);
lean_dec_ref(x_65);
lean_dec_ref(x_64);
return x_68;
}
else
{
return x_62;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg(x_2, x_3, x_4, x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint64_t x_4; size_t x_5; size_t x_6; lean_object* x_7; 
x_4 = l_Lean_hashMVarId____x40_Lean_Expr___hyg_1872_(x_2);
x_5 = lean_uint64_to_usize(x_4);
x_6 = 1;
x_7 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg(x_1, x_5, x_6, x_2, x_3);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_st_ref_take(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec_ref(x_5);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_6, 0);
lean_dec(x_10);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_7, 7);
x_13 = l_Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6___redArg(x_12, x_1, x_2);
lean_ctor_set(x_7, 7, x_13);
x_14 = lean_st_ref_set(x_3, x_6, x_8);
x_15 = !lean_is_exclusive(x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 0);
lean_dec(x_16);
x_17 = lean_box(0);
lean_ctor_set(x_14, 0, x_17);
return x_14;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_box(0);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_21 = lean_ctor_get(x_7, 0);
x_22 = lean_ctor_get(x_7, 1);
x_23 = lean_ctor_get(x_7, 2);
x_24 = lean_ctor_get(x_7, 3);
x_25 = lean_ctor_get(x_7, 4);
x_26 = lean_ctor_get(x_7, 5);
x_27 = lean_ctor_get(x_7, 6);
x_28 = lean_ctor_get(x_7, 7);
x_29 = lean_ctor_get(x_7, 8);
lean_inc(x_29);
lean_inc(x_28);
lean_inc(x_27);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_7);
x_30 = l_Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6___redArg(x_28, x_1, x_2);
x_31 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_31, 0, x_21);
lean_ctor_set(x_31, 1, x_22);
lean_ctor_set(x_31, 2, x_23);
lean_ctor_set(x_31, 3, x_24);
lean_ctor_set(x_31, 4, x_25);
lean_ctor_set(x_31, 5, x_26);
lean_ctor_set(x_31, 6, x_27);
lean_ctor_set(x_31, 7, x_30);
lean_ctor_set(x_31, 8, x_29);
lean_ctor_set(x_6, 0, x_31);
x_32 = lean_st_ref_set(x_3, x_6, x_8);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_34 = x_32;
} else {
 lean_dec_ref(x_32);
 x_34 = lean_box(0);
}
x_35 = lean_box(0);
if (lean_is_scalar(x_34)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_34;
}
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_37 = lean_ctor_get(x_6, 1);
x_38 = lean_ctor_get(x_6, 2);
x_39 = lean_ctor_get(x_6, 3);
x_40 = lean_ctor_get(x_6, 4);
lean_inc(x_40);
lean_inc(x_39);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_6);
x_41 = lean_ctor_get(x_7, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_7, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_7, 2);
lean_inc(x_43);
x_44 = lean_ctor_get(x_7, 3);
lean_inc_ref(x_44);
x_45 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_45);
x_46 = lean_ctor_get(x_7, 5);
lean_inc_ref(x_46);
x_47 = lean_ctor_get(x_7, 6);
lean_inc_ref(x_47);
x_48 = lean_ctor_get(x_7, 7);
lean_inc_ref(x_48);
x_49 = lean_ctor_get(x_7, 8);
lean_inc_ref(x_49);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 lean_ctor_release(x_7, 5);
 lean_ctor_release(x_7, 6);
 lean_ctor_release(x_7, 7);
 lean_ctor_release(x_7, 8);
 x_50 = x_7;
} else {
 lean_dec_ref(x_7);
 x_50 = lean_box(0);
}
x_51 = l_Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6___redArg(x_48, x_1, x_2);
if (lean_is_scalar(x_50)) {
 x_52 = lean_alloc_ctor(0, 9, 0);
} else {
 x_52 = x_50;
}
lean_ctor_set(x_52, 0, x_41);
lean_ctor_set(x_52, 1, x_42);
lean_ctor_set(x_52, 2, x_43);
lean_ctor_set(x_52, 3, x_44);
lean_ctor_set(x_52, 4, x_45);
lean_ctor_set(x_52, 5, x_46);
lean_ctor_set(x_52, 6, x_47);
lean_ctor_set(x_52, 7, x_51);
lean_ctor_set(x_52, 8, x_49);
x_53 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_37);
lean_ctor_set(x_53, 2, x_38);
lean_ctor_set(x_53, 3, x_39);
lean_ctor_set(x_53, 4, x_40);
x_54 = lean_st_ref_set(x_3, x_53, x_8);
x_55 = lean_ctor_get(x_54, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_54)) {
 lean_ctor_release(x_54, 0);
 lean_ctor_release(x_54, 1);
 x_56 = x_54;
} else {
 lean_dec_ref(x_54);
 x_56 = lean_box(0);
}
x_57 = lean_box(0);
if (lean_is_scalar(x_56)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_56;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6___redArg(x_1, x_2, x_4, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___redArg___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lean_apply_6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___redArg(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___redArg___lam__0), 7, 1);
lean_closure_set(x_11, 0, x_4);
x_12 = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), x_1, x_2, x_3, x_11, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_12);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_12);
if (x_17 == 0)
{
return x_12;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_12, 0);
x_19 = lean_ctor_get(x_12, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_12);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; uint8_t x_10; lean_object* x_11; 
x_9 = 0;
x_10 = 0;
x_11 = l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___redArg(x_1, x_9, x_2, x_3, x_10, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
static lean_object* _init_l_panic___at___Lean_Meta_substCore_spec__14___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___lam__0___boxed), 5, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_panic___at___Lean_Meta_substCore_spec__14(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_panic___at___Lean_Meta_substCore_spec__14___closed__0;
x_8 = lean_panic_fn(x_7, x_1);
x_9 = lean_apply_5(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
return x_8;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_8);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_8);
if (x_13 == 0)
{
return x_8;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_8, 0);
x_15 = lean_ctor_get(x_8, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_8);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15___redArg(x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___Lean_Meta_substCore_spec__16(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = 1;
x_9 = lean_usize_add(x_2, x_8);
x_10 = lean_array_uset(x_7, x_2, x_5);
x_2 = x_9;
x_3 = x_10;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___Lean_Meta_substCore_spec__17(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___redArg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_Lean_MessageData_ofName(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_Lean_MessageData_ofName(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_11);
lean_inc_ref(x_10);
lean_inc(x_9);
lean_inc_ref(x_8);
lean_inc_ref(x_7);
x_13 = l_Lean_Meta_mkEqSymm(x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec_ref(x_13);
x_16 = l_Lean_Expr_replaceFVar(x_1, x_2, x_14);
lean_dec(x_14);
x_17 = lean_mk_empty_array_with_capacity(x_3);
x_18 = lean_array_push(x_17, x_4);
x_19 = lean_array_push(x_18, x_7);
x_20 = 1;
x_21 = l_Lean_Meta_mkLambdaFVars(x_19, x_16, x_5, x_6, x_5, x_6, x_20, x_8, x_9, x_10, x_11, x_15);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec_ref(x_19);
return x_21;
}
else
{
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec_ref(x_7);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
return x_13;
}
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("after intro rest ", 17, 17);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__1___closed__0;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__1___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_h", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__1___closed__5;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Meta.Tactic.Subst", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Meta.substCore", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__1___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Meta_substCore___lam__1___closed__9;
x_2 = lean_unsigned_to_nat(22u);
x_3 = lean_unsigned_to_nat(69u);
x_4 = l_Lean_Meta_substCore___lam__1___closed__8;
x_5 = l_Lean_Meta_substCore___lam__1___closed__7;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, uint8_t x_10, lean_object* x_11, lean_object* x_12, uint8_t x_13, uint8_t x_14, lean_object* x_15, lean_object* x_16, lean_object* x_17, uint8_t x_18, uint8_t x_19, lean_object* x_20, lean_object* x_21, lean_object* x_22, lean_object* x_23, lean_object* x_24, lean_object* x_25) {
_start:
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_148; lean_object* x_149; lean_object* x_150; uint8_t x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_178; uint8_t x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_195; 
lean_inc(x_1);
x_195 = l_Lean_MVarId_getDecl(x_1, x_21, x_22, x_23, x_24, x_25);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
lean_dec_ref(x_195);
lean_inc_ref(x_21);
lean_inc(x_2);
x_198 = l_Lean_FVarId_getDecl___redArg(x_2, x_21, x_23, x_24, x_197);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_265; lean_object* x_282; 
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec_ref(x_198);
x_201 = lean_ctor_get(x_196, 2);
lean_inc_ref(x_201);
lean_dec(x_196);
x_202 = lean_box(x_19);
x_203 = lean_box(x_14);
lean_inc_ref(x_11);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc_ref(x_201);
x_204 = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__0___boxed), 12, 6);
lean_closure_set(x_204, 0, x_201);
lean_closure_set(x_204, 1, x_5);
lean_closure_set(x_204, 2, x_6);
lean_closure_set(x_204, 3, x_11);
lean_closure_set(x_204, 4, x_202);
lean_closure_set(x_204, 5, x_203);
x_282 = lean_ctor_get(x_199, 3);
lean_inc_ref(x_282);
lean_dec(x_199);
x_265 = x_282;
goto block_281;
block_264:
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; uint8_t x_212; 
x_207 = l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(x_206, x_22, x_205);
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
lean_dec_ref(x_207);
lean_inc(x_2);
lean_inc_ref(x_201);
x_210 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(x_201, x_2, x_22, x_209);
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_unbox(x_211);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; uint8_t x_216; lean_object* x_217; 
lean_dec_ref(x_204);
x_213 = lean_ctor_get(x_210, 1);
lean_inc(x_213);
lean_dec_ref(x_210);
x_214 = lean_mk_empty_array_with_capacity(x_20);
lean_inc_ref(x_11);
x_215 = lean_array_push(x_214, x_11);
x_216 = 1;
lean_inc_ref(x_201);
x_217 = l_Lean_Meta_mkLambdaFVars(x_215, x_201, x_19, x_14, x_19, x_14, x_216, x_21, x_22, x_23, x_24, x_213);
lean_dec_ref(x_215);
if (lean_obj_tag(x_217) == 0)
{
lean_object* x_218; lean_object* x_219; lean_object* x_220; uint8_t x_221; 
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec_ref(x_217);
lean_inc_ref(x_11);
x_220 = l_Lean_Expr_replaceFVar(x_201, x_11, x_208);
lean_dec_ref(x_201);
x_221 = lean_unbox(x_211);
lean_dec(x_211);
x_178 = x_208;
x_179 = x_221;
x_180 = x_218;
x_181 = x_220;
x_182 = x_21;
x_183 = x_22;
x_184 = x_23;
x_185 = x_24;
x_186 = x_219;
goto block_194;
}
else
{
uint8_t x_222; 
lean_dec(x_211);
lean_dec(x_208);
lean_dec_ref(x_201);
lean_dec(x_24);
lean_dec_ref(x_23);
lean_dec(x_22);
lean_dec_ref(x_21);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_222 = !lean_is_exclusive(x_217);
if (x_222 == 0)
{
return x_217;
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; 
x_223 = lean_ctor_get(x_217, 0);
x_224 = lean_ctor_get(x_217, 1);
lean_inc(x_224);
lean_inc(x_223);
lean_dec(x_217);
x_225 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_225, 0, x_223);
lean_ctor_set(x_225, 1, x_224);
return x_225;
}
}
}
else
{
lean_object* x_226; lean_object* x_227; 
x_226 = lean_ctor_get(x_210, 1);
lean_inc(x_226);
lean_dec_ref(x_210);
lean_inc(x_24);
lean_inc_ref(x_23);
lean_inc(x_22);
lean_inc_ref(x_21);
lean_inc(x_208);
x_227 = l_Lean_Meta_mkEqRefl(x_208, x_21, x_22, x_23, x_24, x_226);
if (lean_obj_tag(x_227) == 0)
{
lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
lean_dec_ref(x_227);
lean_inc_ref(x_11);
x_230 = l_Lean_Expr_replaceFVar(x_201, x_11, x_208);
lean_inc_ref(x_5);
x_231 = l_Lean_Expr_replaceFVar(x_230, x_5, x_228);
lean_dec(x_228);
lean_dec_ref(x_230);
if (x_18 == 0)
{
lean_object* x_232; 
lean_dec_ref(x_201);
lean_inc(x_24);
lean_inc_ref(x_23);
lean_inc(x_22);
lean_inc_ref(x_21);
lean_inc_ref(x_11);
lean_inc(x_208);
x_232 = l_Lean_Meta_mkEq(x_208, x_11, x_21, x_22, x_23, x_24, x_229);
if (lean_obj_tag(x_232) == 0)
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_232, 1);
lean_inc(x_234);
lean_dec_ref(x_232);
x_235 = l_Lean_Meta_substCore___lam__1___closed__6;
lean_inc(x_24);
lean_inc_ref(x_23);
lean_inc(x_22);
lean_inc_ref(x_21);
x_236 = l_Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12___redArg(x_235, x_233, x_204, x_21, x_22, x_23, x_24, x_234);
if (lean_obj_tag(x_236) == 0)
{
lean_object* x_237; lean_object* x_238; uint8_t x_239; 
x_237 = lean_ctor_get(x_236, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_236, 1);
lean_inc(x_238);
lean_dec_ref(x_236);
x_239 = lean_unbox(x_211);
lean_dec(x_211);
x_178 = x_208;
x_179 = x_239;
x_180 = x_237;
x_181 = x_231;
x_182 = x_21;
x_183 = x_22;
x_184 = x_23;
x_185 = x_24;
x_186 = x_238;
goto block_194;
}
else
{
uint8_t x_240; 
lean_dec_ref(x_231);
lean_dec(x_211);
lean_dec(x_208);
lean_dec(x_24);
lean_dec_ref(x_23);
lean_dec(x_22);
lean_dec_ref(x_21);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_240 = !lean_is_exclusive(x_236);
if (x_240 == 0)
{
return x_236;
}
else
{
lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_241 = lean_ctor_get(x_236, 0);
x_242 = lean_ctor_get(x_236, 1);
lean_inc(x_242);
lean_inc(x_241);
lean_dec(x_236);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
return x_243;
}
}
}
else
{
uint8_t x_244; 
lean_dec_ref(x_231);
lean_dec(x_211);
lean_dec(x_208);
lean_dec_ref(x_204);
lean_dec(x_24);
lean_dec_ref(x_23);
lean_dec(x_22);
lean_dec_ref(x_21);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_244 = !lean_is_exclusive(x_232);
if (x_244 == 0)
{
return x_232;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_245 = lean_ctor_get(x_232, 0);
x_246 = lean_ctor_get(x_232, 1);
lean_inc(x_246);
lean_inc(x_245);
lean_dec(x_232);
x_247 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_247, 0, x_245);
lean_ctor_set(x_247, 1, x_246);
return x_247;
}
}
}
else
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; uint8_t x_251; lean_object* x_252; 
lean_dec_ref(x_204);
x_248 = lean_mk_empty_array_with_capacity(x_6);
lean_inc_ref(x_11);
x_249 = lean_array_push(x_248, x_11);
lean_inc_ref(x_5);
x_250 = lean_array_push(x_249, x_5);
x_251 = 1;
x_252 = l_Lean_Meta_mkLambdaFVars(x_250, x_201, x_19, x_14, x_19, x_14, x_251, x_21, x_22, x_23, x_24, x_229);
lean_dec_ref(x_250);
if (lean_obj_tag(x_252) == 0)
{
lean_object* x_253; lean_object* x_254; uint8_t x_255; 
x_253 = lean_ctor_get(x_252, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_252, 1);
lean_inc(x_254);
lean_dec_ref(x_252);
x_255 = lean_unbox(x_211);
lean_dec(x_211);
x_178 = x_208;
x_179 = x_255;
x_180 = x_253;
x_181 = x_231;
x_182 = x_21;
x_183 = x_22;
x_184 = x_23;
x_185 = x_24;
x_186 = x_254;
goto block_194;
}
else
{
uint8_t x_256; 
lean_dec_ref(x_231);
lean_dec(x_211);
lean_dec(x_208);
lean_dec(x_24);
lean_dec_ref(x_23);
lean_dec(x_22);
lean_dec_ref(x_21);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_256 = !lean_is_exclusive(x_252);
if (x_256 == 0)
{
return x_252;
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_257 = lean_ctor_get(x_252, 0);
x_258 = lean_ctor_get(x_252, 1);
lean_inc(x_258);
lean_inc(x_257);
lean_dec(x_252);
x_259 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_259, 0, x_257);
lean_ctor_set(x_259, 1, x_258);
return x_259;
}
}
}
}
else
{
uint8_t x_260; 
lean_dec(x_211);
lean_dec(x_208);
lean_dec_ref(x_204);
lean_dec_ref(x_201);
lean_dec(x_24);
lean_dec_ref(x_23);
lean_dec(x_22);
lean_dec_ref(x_21);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_260 = !lean_is_exclusive(x_227);
if (x_260 == 0)
{
return x_227;
}
else
{
lean_object* x_261; lean_object* x_262; lean_object* x_263; 
x_261 = lean_ctor_get(x_227, 0);
x_262 = lean_ctor_get(x_227, 1);
lean_inc(x_262);
lean_inc(x_261);
lean_dec(x_227);
x_263 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_263, 0, x_261);
lean_ctor_set(x_263, 1, x_262);
return x_263;
}
}
}
}
block_281:
{
lean_object* x_266; 
lean_inc(x_24);
lean_inc_ref(x_23);
lean_inc(x_22);
lean_inc_ref(x_21);
x_266 = l_Lean_Meta_matchEq_x3f(x_265, x_21, x_22, x_23, x_24, x_200);
if (lean_obj_tag(x_266) == 0)
{
lean_object* x_267; 
x_267 = lean_ctor_get(x_266, 0);
lean_inc(x_267);
if (lean_obj_tag(x_267) == 0)
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; 
lean_dec_ref(x_204);
lean_dec_ref(x_201);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_268 = lean_ctor_get(x_266, 1);
lean_inc(x_268);
lean_dec_ref(x_266);
x_269 = l_Lean_Meta_substCore___lam__1___closed__10;
x_270 = l_panic___at___Lean_Meta_substCore_spec__14(x_269, x_21, x_22, x_23, x_24, x_268);
return x_270;
}
else
{
lean_object* x_271; lean_object* x_272; 
x_271 = lean_ctor_get(x_267, 0);
lean_inc(x_271);
lean_dec_ref(x_267);
x_272 = lean_ctor_get(x_271, 1);
lean_inc(x_272);
lean_dec(x_271);
if (x_18 == 0)
{
lean_object* x_273; lean_object* x_274; 
x_273 = lean_ctor_get(x_266, 1);
lean_inc(x_273);
lean_dec_ref(x_266);
x_274 = lean_ctor_get(x_272, 1);
lean_inc(x_274);
lean_dec(x_272);
x_205 = x_273;
x_206 = x_274;
goto block_264;
}
else
{
lean_object* x_275; lean_object* x_276; 
x_275 = lean_ctor_get(x_266, 1);
lean_inc(x_275);
lean_dec_ref(x_266);
x_276 = lean_ctor_get(x_272, 0);
lean_inc(x_276);
lean_dec(x_272);
x_205 = x_275;
x_206 = x_276;
goto block_264;
}
}
}
else
{
uint8_t x_277; 
lean_dec_ref(x_204);
lean_dec_ref(x_201);
lean_dec(x_24);
lean_dec_ref(x_23);
lean_dec(x_22);
lean_dec_ref(x_21);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_277 = !lean_is_exclusive(x_266);
if (x_277 == 0)
{
return x_266;
}
else
{
lean_object* x_278; lean_object* x_279; lean_object* x_280; 
x_278 = lean_ctor_get(x_266, 0);
x_279 = lean_ctor_get(x_266, 1);
lean_inc(x_279);
lean_inc(x_278);
lean_dec(x_266);
x_280 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_280, 0, x_278);
lean_ctor_set(x_280, 1, x_279);
return x_280;
}
}
}
}
else
{
uint8_t x_283; 
lean_dec(x_196);
lean_dec(x_24);
lean_dec_ref(x_23);
lean_dec(x_22);
lean_dec_ref(x_21);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_283 = !lean_is_exclusive(x_198);
if (x_283 == 0)
{
return x_198;
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; 
x_284 = lean_ctor_get(x_198, 0);
x_285 = lean_ctor_get(x_198, 1);
lean_inc(x_285);
lean_inc(x_284);
lean_dec(x_198);
x_286 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_286, 0, x_284);
lean_ctor_set(x_286, 1, x_285);
return x_286;
}
}
}
else
{
uint8_t x_287; 
lean_dec(x_24);
lean_dec_ref(x_23);
lean_dec(x_22);
lean_dec_ref(x_21);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_287 = !lean_is_exclusive(x_195);
if (x_287 == 0)
{
return x_195;
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_288 = lean_ctor_get(x_195, 0);
x_289 = lean_ctor_get(x_195, 1);
lean_inc(x_289);
lean_inc(x_288);
lean_dec(x_195);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_288);
lean_ctor_set(x_290, 1, x_289);
return x_290;
}
}
block_34:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = l_Lean_Meta_FVarSubst_insert(x_26, x_3, x_29);
x_31 = l_Lean_Meta_FVarSubst_insert(x_30, x_4, x_5);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_28);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_27);
return x_33;
}
block_49:
{
lean_object* x_43; lean_object* x_44; 
lean_dec(x_41);
lean_dec_ref(x_40);
lean_dec(x_39);
lean_dec_ref(x_38);
x_43 = lean_array_get_size(x_36);
lean_inc(x_43);
x_44 = l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1___redArg(x_6, x_7, x_8, x_36, x_43, x_43, x_9, x_42);
lean_dec(x_43);
lean_dec_ref(x_36);
lean_dec(x_6);
if (x_10 == 0)
{
lean_object* x_45; lean_object* x_46; 
lean_dec_ref(x_35);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec_ref(x_44);
x_26 = x_45;
x_27 = x_46;
x_28 = x_37;
x_29 = x_11;
goto block_34;
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec_ref(x_11);
x_47 = lean_ctor_get(x_44, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_44, 1);
lean_inc(x_48);
lean_dec_ref(x_44);
x_26 = x_47;
x_27 = x_48;
x_28 = x_37;
x_29 = x_35;
goto block_34;
}
}
block_121:
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_array_get_size(x_8);
x_58 = lean_nat_sub(x_57, x_6);
lean_dec(x_57);
lean_inc(x_55);
lean_inc_ref(x_54);
lean_inc(x_53);
lean_inc_ref(x_52);
lean_inc(x_58);
x_59 = l_Lean_Meta_introNCore(x_51, x_58, x_12, x_13, x_14, x_52, x_53, x_54, x_55, x_56);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec_ref(x_59);
x_62 = !lean_is_exclusive(x_60);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_63 = lean_ctor_get(x_60, 0);
x_64 = lean_ctor_get(x_60, 1);
lean_inc(x_15);
x_65 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_15, x_54, x_61);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_unbox(x_66);
lean_dec(x_66);
if (x_67 == 0)
{
lean_object* x_68; 
lean_free_object(x_60);
lean_dec(x_58);
lean_dec(x_15);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec_ref(x_65);
x_35 = x_50;
x_36 = x_63;
x_37 = x_64;
x_38 = x_52;
x_39 = x_53;
x_40 = x_54;
x_41 = x_55;
x_42 = x_68;
goto block_49;
}
else
{
uint8_t x_69; 
x_69 = !lean_is_exclusive(x_65);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_70 = lean_ctor_get(x_65, 1);
x_71 = lean_ctor_get(x_65, 0);
lean_dec(x_71);
x_72 = l_Lean_Meta_substCore___lam__1___closed__1;
x_73 = l_Nat_reprFast(x_58);
x_74 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_74, 0, x_73);
x_75 = l_Lean_MessageData_ofFormat(x_74);
lean_ctor_set_tag(x_65, 7);
lean_ctor_set(x_65, 1, x_75);
lean_ctor_set(x_65, 0, x_72);
x_76 = l_Lean_Meta_substCore___lam__1___closed__3;
lean_ctor_set_tag(x_60, 7);
lean_ctor_set(x_60, 1, x_76);
lean_ctor_set(x_60, 0, x_65);
lean_inc(x_64);
x_77 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_77, 0, x_64);
x_78 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_78, 0, x_60);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_Lean_Meta_substCore___lam__1___closed__4;
x_80 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_15, x_80, x_52, x_53, x_54, x_55, x_70);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec_ref(x_81);
x_35 = x_50;
x_36 = x_63;
x_37 = x_64;
x_38 = x_52;
x_39 = x_53;
x_40 = x_54;
x_41 = x_55;
x_42 = x_82;
goto block_49;
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_83 = lean_ctor_get(x_65, 1);
lean_inc(x_83);
lean_dec(x_65);
x_84 = l_Lean_Meta_substCore___lam__1___closed__1;
x_85 = l_Nat_reprFast(x_58);
x_86 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_86, 0, x_85);
x_87 = l_Lean_MessageData_ofFormat(x_86);
x_88 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_88, 0, x_84);
lean_ctor_set(x_88, 1, x_87);
x_89 = l_Lean_Meta_substCore___lam__1___closed__3;
lean_ctor_set_tag(x_60, 7);
lean_ctor_set(x_60, 1, x_89);
lean_ctor_set(x_60, 0, x_88);
lean_inc(x_64);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_64);
x_91 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_91, 0, x_60);
lean_ctor_set(x_91, 1, x_90);
x_92 = l_Lean_Meta_substCore___lam__1___closed__4;
x_93 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
x_94 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_15, x_93, x_52, x_53, x_54, x_55, x_83);
x_95 = lean_ctor_get(x_94, 1);
lean_inc(x_95);
lean_dec_ref(x_94);
x_35 = x_50;
x_36 = x_63;
x_37 = x_64;
x_38 = x_52;
x_39 = x_53;
x_40 = x_54;
x_41 = x_55;
x_42 = x_95;
goto block_49;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; uint8_t x_100; 
x_96 = lean_ctor_get(x_60, 0);
x_97 = lean_ctor_get(x_60, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_60);
lean_inc(x_15);
x_98 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_15, x_54, x_61);
x_99 = lean_ctor_get(x_98, 0);
lean_inc(x_99);
x_100 = lean_unbox(x_99);
lean_dec(x_99);
if (x_100 == 0)
{
lean_object* x_101; 
lean_dec(x_58);
lean_dec(x_15);
x_101 = lean_ctor_get(x_98, 1);
lean_inc(x_101);
lean_dec_ref(x_98);
x_35 = x_50;
x_36 = x_96;
x_37 = x_97;
x_38 = x_52;
x_39 = x_53;
x_40 = x_54;
x_41 = x_55;
x_42 = x_101;
goto block_49;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_102 = lean_ctor_get(x_98, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_98)) {
 lean_ctor_release(x_98, 0);
 lean_ctor_release(x_98, 1);
 x_103 = x_98;
} else {
 lean_dec_ref(x_98);
 x_103 = lean_box(0);
}
x_104 = l_Lean_Meta_substCore___lam__1___closed__1;
x_105 = l_Nat_reprFast(x_58);
x_106 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_106, 0, x_105);
x_107 = l_Lean_MessageData_ofFormat(x_106);
if (lean_is_scalar(x_103)) {
 x_108 = lean_alloc_ctor(7, 2, 0);
} else {
 x_108 = x_103;
 lean_ctor_set_tag(x_108, 7);
}
lean_ctor_set(x_108, 0, x_104);
lean_ctor_set(x_108, 1, x_107);
x_109 = l_Lean_Meta_substCore___lam__1___closed__3;
x_110 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
lean_inc(x_97);
x_111 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_111, 0, x_97);
x_112 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
x_113 = l_Lean_Meta_substCore___lam__1___closed__4;
x_114 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
x_115 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_15, x_114, x_52, x_53, x_54, x_55, x_102);
x_116 = lean_ctor_get(x_115, 1);
lean_inc(x_116);
lean_dec_ref(x_115);
x_35 = x_50;
x_36 = x_96;
x_37 = x_97;
x_38 = x_52;
x_39 = x_53;
x_40 = x_54;
x_41 = x_55;
x_42 = x_116;
goto block_49;
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_58);
lean_dec(x_55);
lean_dec_ref(x_54);
lean_dec(x_53);
lean_dec_ref(x_52);
lean_dec_ref(x_50);
lean_dec(x_15);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
x_117 = !lean_is_exclusive(x_59);
if (x_117 == 0)
{
return x_59;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_59, 0);
x_119 = lean_ctor_get(x_59, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_59);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
block_147:
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; 
x_130 = l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6___redArg(x_1, x_124, x_126, x_129);
x_131 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
lean_dec_ref(x_130);
x_132 = l_Lean_Expr_mvarId_x21(x_123);
lean_dec_ref(x_123);
if (x_10 == 0)
{
lean_dec(x_16);
lean_dec(x_2);
x_50 = x_122;
x_51 = x_132;
x_52 = x_125;
x_53 = x_126;
x_54 = x_127;
x_55 = x_128;
x_56 = x_131;
goto block_121;
}
else
{
lean_object* x_133; 
lean_inc(x_128);
lean_inc_ref(x_127);
lean_inc(x_126);
lean_inc_ref(x_125);
x_133 = l_Lean_MVarId_clear(x_132, x_2, x_125, x_126, x_127, x_128, x_131);
if (lean_obj_tag(x_133) == 0)
{
lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
x_135 = lean_ctor_get(x_133, 1);
lean_inc(x_135);
lean_dec_ref(x_133);
lean_inc(x_128);
lean_inc_ref(x_127);
lean_inc(x_126);
lean_inc_ref(x_125);
x_136 = l_Lean_MVarId_clear(x_134, x_16, x_125, x_126, x_127, x_128, x_135);
if (lean_obj_tag(x_136) == 0)
{
lean_object* x_137; lean_object* x_138; 
x_137 = lean_ctor_get(x_136, 0);
lean_inc(x_137);
x_138 = lean_ctor_get(x_136, 1);
lean_inc(x_138);
lean_dec_ref(x_136);
x_50 = x_122;
x_51 = x_137;
x_52 = x_125;
x_53 = x_126;
x_54 = x_127;
x_55 = x_128;
x_56 = x_138;
goto block_121;
}
else
{
uint8_t x_139; 
lean_dec(x_128);
lean_dec_ref(x_127);
lean_dec(x_126);
lean_dec_ref(x_125);
lean_dec_ref(x_122);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
x_139 = !lean_is_exclusive(x_136);
if (x_139 == 0)
{
return x_136;
}
else
{
lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_140 = lean_ctor_get(x_136, 0);
x_141 = lean_ctor_get(x_136, 1);
lean_inc(x_141);
lean_inc(x_140);
lean_dec(x_136);
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_140);
lean_ctor_set(x_142, 1, x_141);
return x_142;
}
}
}
else
{
uint8_t x_143; 
lean_dec(x_128);
lean_dec_ref(x_127);
lean_dec(x_126);
lean_dec_ref(x_125);
lean_dec_ref(x_122);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
x_143 = !lean_is_exclusive(x_133);
if (x_143 == 0)
{
return x_133;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_133, 0);
x_145 = lean_ctor_get(x_133, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_133);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
}
block_177:
{
lean_object* x_158; 
lean_inc_ref(x_153);
x_158 = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(x_149, x_17, x_153, x_154, x_155, x_156, x_157);
if (x_151 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
lean_dec_ref(x_158);
lean_inc(x_156);
lean_inc_ref(x_155);
lean_inc(x_154);
lean_inc_ref(x_153);
lean_inc(x_159);
x_161 = l_Lean_Meta_mkEqNDRec(x_150, x_159, x_152, x_153, x_154, x_155, x_156, x_160);
if (lean_obj_tag(x_161) == 0)
{
lean_object* x_162; lean_object* x_163; 
x_162 = lean_ctor_get(x_161, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_161, 1);
lean_inc(x_163);
lean_dec_ref(x_161);
x_122 = x_148;
x_123 = x_159;
x_124 = x_162;
x_125 = x_153;
x_126 = x_154;
x_127 = x_155;
x_128 = x_156;
x_129 = x_163;
goto block_147;
}
else
{
uint8_t x_164; 
lean_dec(x_159);
lean_dec(x_156);
lean_dec_ref(x_155);
lean_dec(x_154);
lean_dec_ref(x_153);
lean_dec_ref(x_148);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_164 = !lean_is_exclusive(x_161);
if (x_164 == 0)
{
return x_161;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; 
x_165 = lean_ctor_get(x_161, 0);
x_166 = lean_ctor_get(x_161, 1);
lean_inc(x_166);
lean_inc(x_165);
lean_dec(x_161);
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
return x_167;
}
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_168 = lean_ctor_get(x_158, 0);
lean_inc(x_168);
x_169 = lean_ctor_get(x_158, 1);
lean_inc(x_169);
lean_dec_ref(x_158);
lean_inc(x_156);
lean_inc_ref(x_155);
lean_inc(x_154);
lean_inc_ref(x_153);
lean_inc(x_168);
x_170 = l_Lean_Meta_mkEqRec(x_150, x_168, x_152, x_153, x_154, x_155, x_156, x_169);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
x_172 = lean_ctor_get(x_170, 1);
lean_inc(x_172);
lean_dec_ref(x_170);
x_122 = x_148;
x_123 = x_168;
x_124 = x_171;
x_125 = x_153;
x_126 = x_154;
x_127 = x_155;
x_128 = x_156;
x_129 = x_172;
goto block_147;
}
else
{
uint8_t x_173; 
lean_dec(x_168);
lean_dec(x_156);
lean_dec_ref(x_155);
lean_dec(x_154);
lean_dec_ref(x_153);
lean_dec_ref(x_148);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_173 = !lean_is_exclusive(x_170);
if (x_173 == 0)
{
return x_170;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_170, 0);
x_175 = lean_ctor_get(x_170, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_170);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
}
}
}
block_194:
{
if (x_18 == 0)
{
lean_object* x_187; 
lean_inc(x_185);
lean_inc_ref(x_184);
lean_inc(x_183);
lean_inc_ref(x_182);
lean_inc_ref(x_5);
x_187 = l_Lean_Meta_mkEqSymm(x_5, x_182, x_183, x_184, x_185, x_186);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec_ref(x_187);
x_148 = x_178;
x_149 = x_181;
x_150 = x_180;
x_151 = x_179;
x_152 = x_188;
x_153 = x_182;
x_154 = x_183;
x_155 = x_184;
x_156 = x_185;
x_157 = x_189;
goto block_177;
}
else
{
uint8_t x_190; 
lean_dec(x_185);
lean_dec_ref(x_184);
lean_dec(x_183);
lean_dec_ref(x_182);
lean_dec_ref(x_181);
lean_dec_ref(x_180);
lean_dec_ref(x_178);
lean_dec(x_17);
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_190 = !lean_is_exclusive(x_187);
if (x_190 == 0)
{
return x_187;
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_187, 0);
x_192 = lean_ctor_get(x_187, 1);
lean_inc(x_192);
lean_inc(x_191);
lean_dec(x_187);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_191);
lean_ctor_set(x_193, 1, x_192);
return x_193;
}
}
}
else
{
lean_inc_ref(x_5);
x_148 = x_178;
x_149 = x_181;
x_150 = x_180;
x_151 = x_179;
x_152 = x_5;
x_153 = x_182;
x_154 = x_183;
x_155 = x_184;
x_156 = x_185;
x_157 = x_186;
goto block_177;
}
}
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("reverted variables ", 19, 19);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__0;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("after intro2 ", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("subst", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__4;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid equality proof, it is not of the form ", 46, 46);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__6;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nafter WHNF, variable expected, but obtained", 44, 44);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__8;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("after revert ", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__11;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__13;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' occurs at", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__15;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Meta", 4, 4);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Tactic", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__4;
x_2 = l_Lean_Meta_substCore___lam__2___closed__18;
x_3 = l_Lean_Meta_substCore___lam__2___closed__17;
x_4 = l_Lean_Name_mkStr3(x_3, x_2, x_1);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("substituting ", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__20;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" (id: ", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__22;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(") with ", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__24;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(x = t)", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("(t = x)", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("argument must be an equality proof", 34, 34);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__28;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__29;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__30;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, uint8_t x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_1);
x_13 = l_Lean_MVarId_getTag(x_1, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; lean_object* x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; uint8_t x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_165; lean_object* x_166; uint8_t x_167; lean_object* x_168; lean_object* x_169; uint8_t x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; uint8_t x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_248; lean_object* x_249; uint8_t x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; uint8_t x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; uint8_t x_358; lean_object* x_359; lean_object* x_360; uint8_t x_361; lean_object* x_362; lean_object* x_363; uint8_t x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_447; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
if (lean_is_exclusive(x_13)) {
 lean_ctor_release(x_13, 0);
 lean_ctor_release(x_13, 1);
 x_16 = x_13;
} else {
 lean_dec_ref(x_13);
 x_16 = lean_box(0);
}
x_228 = l_Lean_Meta_substCore___lam__2___closed__5;
lean_inc(x_1);
x_447 = l_Lean_MVarId_checkNotAssigned(x_1, x_228, x_8, x_9, x_10, x_11, x_15);
if (lean_obj_tag(x_447) == 0)
{
lean_object* x_448; lean_object* x_449; 
x_448 = lean_ctor_get(x_447, 1);
lean_inc(x_448);
lean_dec_ref(x_447);
lean_inc_ref(x_8);
lean_inc(x_2);
x_449 = l_Lean_FVarId_getDecl___redArg(x_2, x_8, x_10, x_11, x_448);
if (lean_obj_tag(x_449) == 0)
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_469; 
x_450 = lean_ctor_get(x_449, 0);
lean_inc(x_450);
x_451 = lean_ctor_get(x_449, 1);
lean_inc(x_451);
lean_dec_ref(x_449);
x_469 = lean_ctor_get(x_450, 3);
lean_inc_ref(x_469);
lean_dec(x_450);
x_452 = x_469;
goto block_468;
block_468:
{
lean_object* x_453; 
lean_inc(x_11);
lean_inc_ref(x_10);
lean_inc(x_9);
lean_inc_ref(x_8);
lean_inc_ref(x_452);
x_453 = l_Lean_Meta_matchEq_x3f(x_452, x_8, x_9, x_10, x_11, x_451);
if (lean_obj_tag(x_453) == 0)
{
lean_object* x_454; 
x_454 = lean_ctor_get(x_453, 0);
lean_inc(x_454);
if (lean_obj_tag(x_454) == 0)
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; 
lean_dec_ref(x_452);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_455 = lean_ctor_get(x_453, 1);
lean_inc(x_455);
lean_dec_ref(x_453);
x_456 = l_Lean_Meta_substCore___lam__2___closed__31;
x_457 = l_Lean_Meta_throwTacticEx___redArg(x_228, x_1, x_456, x_8, x_9, x_10, x_11, x_455);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
return x_457;
}
else
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; uint8_t x_463; 
x_458 = lean_ctor_get(x_454, 0);
lean_inc(x_458);
lean_dec_ref(x_454);
x_459 = lean_ctor_get(x_458, 1);
lean_inc(x_459);
lean_dec(x_458);
x_460 = lean_ctor_get(x_453, 1);
lean_inc(x_460);
lean_dec_ref(x_453);
x_461 = lean_ctor_get(x_459, 0);
lean_inc(x_461);
x_462 = lean_ctor_get(x_459, 1);
lean_inc(x_462);
lean_dec(x_459);
x_463 = 1;
if (x_6 == 0)
{
lean_inc(x_461);
x_435 = x_463;
x_436 = x_462;
x_437 = x_461;
x_438 = x_460;
x_439 = x_452;
x_440 = x_461;
goto block_446;
}
else
{
lean_inc(x_462);
x_435 = x_463;
x_436 = x_462;
x_437 = x_461;
x_438 = x_460;
x_439 = x_452;
x_440 = x_462;
goto block_446;
}
}
}
else
{
uint8_t x_464; 
lean_dec_ref(x_452);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_464 = !lean_is_exclusive(x_453);
if (x_464 == 0)
{
return x_453;
}
else
{
lean_object* x_465; lean_object* x_466; lean_object* x_467; 
x_465 = lean_ctor_get(x_453, 0);
x_466 = lean_ctor_get(x_453, 1);
lean_inc(x_466);
lean_inc(x_465);
lean_dec(x_453);
x_467 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_467, 0, x_465);
lean_ctor_set(x_467, 1, x_466);
return x_467;
}
}
}
}
else
{
uint8_t x_470; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_470 = !lean_is_exclusive(x_449);
if (x_470 == 0)
{
return x_449;
}
else
{
lean_object* x_471; lean_object* x_472; lean_object* x_473; 
x_471 = lean_ctor_get(x_449, 0);
x_472 = lean_ctor_get(x_449, 1);
lean_inc(x_472);
lean_inc(x_471);
lean_dec(x_449);
x_473 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_473, 0, x_471);
lean_ctor_set(x_473, 1, x_472);
return x_473;
}
}
}
else
{
uint8_t x_474; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_474 = !lean_is_exclusive(x_447);
if (x_474 == 0)
{
return x_447;
}
else
{
lean_object* x_475; lean_object* x_476; lean_object* x_477; 
x_475 = lean_ctor_get(x_447, 0);
x_476 = lean_ctor_get(x_447, 1);
lean_inc(x_476);
lean_inc(x_475);
lean_dec(x_447);
x_477 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_477, 0, x_475);
lean_ctor_set(x_477, 1, x_476);
return x_477;
}
}
block_65:
{
if (x_35 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_16);
x_37 = lean_box(x_5);
x_38 = lean_box(x_35);
x_39 = lean_box(x_21);
x_40 = lean_box(x_6);
x_41 = lean_box(x_31);
x_42 = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__1___boxed), 25, 20);
lean_closure_set(x_42, 0, x_33);
lean_closure_set(x_42, 1, x_27);
lean_closure_set(x_42, 2, x_19);
lean_closure_set(x_42, 3, x_2);
lean_closure_set(x_42, 4, x_24);
lean_closure_set(x_42, 5, x_29);
lean_closure_set(x_42, 6, x_3);
lean_closure_set(x_42, 7, x_28);
lean_closure_set(x_42, 8, x_4);
lean_closure_set(x_42, 9, x_37);
lean_closure_set(x_42, 10, x_30);
lean_closure_set(x_42, 11, x_23);
lean_closure_set(x_42, 12, x_38);
lean_closure_set(x_42, 13, x_39);
lean_closure_set(x_42, 14, x_26);
lean_closure_set(x_42, 15, x_34);
lean_closure_set(x_42, 16, x_14);
lean_closure_set(x_42, 17, x_40);
lean_closure_set(x_42, 18, x_41);
lean_closure_set(x_42, 19, x_18);
x_43 = l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15___redArg(x_22, x_42, x_32, x_17, x_25, x_20, x_36);
return x_43;
}
else
{
lean_dec(x_33);
lean_dec_ref(x_30);
lean_dec(x_29);
lean_dec_ref(x_28);
lean_dec(x_26);
lean_dec_ref(x_24);
lean_dec(x_23);
lean_dec_ref(x_19);
lean_dec(x_18);
lean_dec(x_14);
lean_dec(x_3);
lean_dec(x_2);
if (x_5 == 0)
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_34);
lean_dec_ref(x_32);
lean_dec(x_27);
lean_dec_ref(x_25);
lean_dec(x_20);
lean_dec(x_17);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_4);
lean_ctor_set(x_44, 1, x_22);
if (lean_is_scalar(x_16)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_16;
}
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_36);
return x_45;
}
else
{
lean_object* x_46; 
lean_dec(x_16);
lean_inc(x_20);
lean_inc_ref(x_25);
lean_inc(x_17);
lean_inc_ref(x_32);
x_46 = l_Lean_MVarId_clear(x_22, x_27, x_32, x_17, x_25, x_20, x_36);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec_ref(x_46);
x_49 = l_Lean_MVarId_clear(x_47, x_34, x_32, x_17, x_25, x_20, x_48);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_4);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_49, 0, x_52);
return x_49;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_53 = lean_ctor_get(x_49, 0);
x_54 = lean_ctor_get(x_49, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_49);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_4);
lean_ctor_set(x_55, 1, x_53);
x_56 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
else
{
uint8_t x_57; 
lean_dec(x_4);
x_57 = !lean_is_exclusive(x_49);
if (x_57 == 0)
{
return x_49;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_49, 0);
x_59 = lean_ctor_get(x_49, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_49);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_58);
lean_ctor_set(x_60, 1, x_59);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_34);
lean_dec_ref(x_32);
lean_dec_ref(x_25);
lean_dec(x_20);
lean_dec(x_17);
lean_dec(x_4);
x_61 = !lean_is_exclusive(x_46);
if (x_61 == 0)
{
return x_46;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_46, 0);
x_63 = lean_ctor_get(x_46, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_46);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
}
block_110:
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_85 = lean_unsigned_to_nat(0u);
lean_inc(x_3);
x_86 = lean_array_get(x_3, x_78, x_85);
lean_inc(x_86);
x_87 = l_Lean_Expr_fvar___override(x_86);
x_88 = lean_unsigned_to_nat(1u);
lean_inc(x_3);
x_89 = lean_array_get(x_3, x_78, x_88);
lean_dec_ref(x_78);
lean_inc(x_89);
x_90 = l_Lean_Expr_fvar___override(x_89);
if (x_7 == 0)
{
lean_dec_ref(x_76);
lean_dec(x_74);
x_17 = x_81;
x_18 = x_88;
x_19 = x_66;
x_20 = x_83;
x_21 = x_68;
x_22 = x_75;
x_23 = x_71;
x_24 = x_90;
x_25 = x_82;
x_26 = x_67;
x_27 = x_89;
x_28 = x_69;
x_29 = x_70;
x_30 = x_87;
x_31 = x_72;
x_32 = x_80;
x_33 = x_73;
x_34 = x_86;
x_35 = x_79;
x_36 = x_84;
goto block_65;
}
else
{
lean_object* x_91; uint8_t x_92; 
x_91 = lean_array_get_size(x_76);
lean_dec_ref(x_76);
x_92 = lean_nat_dec_eq(x_91, x_74);
lean_dec(x_74);
lean_dec(x_91);
if (x_92 == 0)
{
x_17 = x_81;
x_18 = x_88;
x_19 = x_66;
x_20 = x_83;
x_21 = x_68;
x_22 = x_75;
x_23 = x_71;
x_24 = x_90;
x_25 = x_82;
x_26 = x_67;
x_27 = x_89;
x_28 = x_69;
x_29 = x_70;
x_30 = x_87;
x_31 = x_72;
x_32 = x_80;
x_33 = x_73;
x_34 = x_86;
x_35 = x_79;
x_36 = x_84;
goto block_65;
}
else
{
lean_object* x_93; 
lean_inc(x_75);
x_93 = l_Lean_MVarId_getType(x_75, x_80, x_81, x_82, x_83, x_84);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
lean_dec_ref(x_93);
lean_inc(x_86);
lean_inc(x_94);
x_96 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(x_94, x_86, x_81, x_95);
x_97 = lean_ctor_get(x_96, 0);
lean_inc(x_97);
x_98 = lean_unbox(x_97);
lean_dec(x_97);
if (x_98 == 0)
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; uint8_t x_102; 
x_99 = lean_ctor_get(x_96, 1);
lean_inc(x_99);
lean_dec_ref(x_96);
lean_inc(x_89);
x_100 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(x_94, x_89, x_81, x_99);
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_unbox(x_101);
lean_dec(x_101);
if (x_102 == 0)
{
lean_object* x_103; 
x_103 = lean_ctor_get(x_100, 1);
lean_inc(x_103);
lean_dec_ref(x_100);
x_17 = x_81;
x_18 = x_88;
x_19 = x_66;
x_20 = x_83;
x_21 = x_68;
x_22 = x_75;
x_23 = x_71;
x_24 = x_90;
x_25 = x_82;
x_26 = x_67;
x_27 = x_89;
x_28 = x_69;
x_29 = x_70;
x_30 = x_87;
x_31 = x_72;
x_32 = x_80;
x_33 = x_73;
x_34 = x_86;
x_35 = x_77;
x_36 = x_103;
goto block_65;
}
else
{
lean_object* x_104; 
x_104 = lean_ctor_get(x_100, 1);
lean_inc(x_104);
lean_dec_ref(x_100);
x_17 = x_81;
x_18 = x_88;
x_19 = x_66;
x_20 = x_83;
x_21 = x_68;
x_22 = x_75;
x_23 = x_71;
x_24 = x_90;
x_25 = x_82;
x_26 = x_67;
x_27 = x_89;
x_28 = x_69;
x_29 = x_70;
x_30 = x_87;
x_31 = x_72;
x_32 = x_80;
x_33 = x_73;
x_34 = x_86;
x_35 = x_79;
x_36 = x_104;
goto block_65;
}
}
else
{
lean_object* x_105; 
lean_dec(x_94);
x_105 = lean_ctor_get(x_96, 1);
lean_inc(x_105);
lean_dec_ref(x_96);
x_17 = x_81;
x_18 = x_88;
x_19 = x_66;
x_20 = x_83;
x_21 = x_68;
x_22 = x_75;
x_23 = x_71;
x_24 = x_90;
x_25 = x_82;
x_26 = x_67;
x_27 = x_89;
x_28 = x_69;
x_29 = x_70;
x_30 = x_87;
x_31 = x_72;
x_32 = x_80;
x_33 = x_73;
x_34 = x_86;
x_35 = x_79;
x_36 = x_105;
goto block_65;
}
}
else
{
uint8_t x_106; 
lean_dec_ref(x_90);
lean_dec(x_89);
lean_dec_ref(x_87);
lean_dec(x_86);
lean_dec(x_83);
lean_dec_ref(x_82);
lean_dec(x_81);
lean_dec_ref(x_80);
lean_dec(x_75);
lean_dec(x_73);
lean_dec(x_71);
lean_dec(x_70);
lean_dec_ref(x_69);
lean_dec(x_67);
lean_dec_ref(x_66);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_106 = !lean_is_exclusive(x_93);
if (x_106 == 0)
{
return x_93;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_93, 0);
x_108 = lean_ctor_get(x_93, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_93);
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_107);
lean_ctor_set(x_109, 1, x_108);
return x_109;
}
}
}
}
}
block_164:
{
lean_object* x_131; lean_object* x_132; uint8_t x_133; 
lean_inc(x_119);
x_131 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_119, x_128, x_130);
x_132 = lean_ctor_get(x_131, 0);
lean_inc(x_132);
x_133 = lean_unbox(x_132);
lean_dec(x_132);
if (x_133 == 0)
{
lean_object* x_134; 
lean_dec(x_119);
x_134 = lean_ctor_get(x_131, 1);
lean_inc(x_134);
lean_dec_ref(x_131);
x_66 = x_111;
x_67 = x_112;
x_68 = x_113;
x_69 = x_114;
x_70 = x_116;
x_71 = x_115;
x_72 = x_117;
x_73 = x_118;
x_74 = x_120;
x_75 = x_121;
x_76 = x_122;
x_77 = x_124;
x_78 = x_123;
x_79 = x_125;
x_80 = x_126;
x_81 = x_127;
x_82 = x_128;
x_83 = x_129;
x_84 = x_134;
goto block_110;
}
else
{
uint8_t x_135; 
x_135 = !lean_is_exclusive(x_131);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; size_t x_139; size_t x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_136 = lean_ctor_get(x_131, 1);
x_137 = lean_ctor_get(x_131, 0);
lean_dec(x_137);
x_138 = l_Lean_Meta_substCore___lam__2___closed__1;
x_139 = lean_array_size(x_122);
x_140 = 0;
lean_inc_ref(x_122);
x_141 = l_Array_mapMUnsafe_map___at___Lean_Meta_substCore_spec__16(x_139, x_140, x_122);
x_142 = lean_array_to_list(x_141);
x_143 = lean_box(0);
x_144 = l_List_mapTR_loop___at___Lean_Meta_substCore_spec__17(x_142, x_143);
x_145 = l_Lean_MessageData_ofList(x_144);
lean_ctor_set_tag(x_131, 7);
lean_ctor_set(x_131, 1, x_145);
lean_ctor_set(x_131, 0, x_138);
x_146 = l_Lean_Meta_substCore___lam__1___closed__4;
x_147 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_147, 0, x_131);
lean_ctor_set(x_147, 1, x_146);
x_148 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_119, x_147, x_126, x_127, x_128, x_129, x_136);
x_149 = lean_ctor_get(x_148, 1);
lean_inc(x_149);
lean_dec_ref(x_148);
x_66 = x_111;
x_67 = x_112;
x_68 = x_113;
x_69 = x_114;
x_70 = x_116;
x_71 = x_115;
x_72 = x_117;
x_73 = x_118;
x_74 = x_120;
x_75 = x_121;
x_76 = x_122;
x_77 = x_124;
x_78 = x_123;
x_79 = x_125;
x_80 = x_126;
x_81 = x_127;
x_82 = x_128;
x_83 = x_129;
x_84 = x_149;
goto block_110;
}
else
{
lean_object* x_150; lean_object* x_151; size_t x_152; size_t x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_150 = lean_ctor_get(x_131, 1);
lean_inc(x_150);
lean_dec(x_131);
x_151 = l_Lean_Meta_substCore___lam__2___closed__1;
x_152 = lean_array_size(x_122);
x_153 = 0;
lean_inc_ref(x_122);
x_154 = l_Array_mapMUnsafe_map___at___Lean_Meta_substCore_spec__16(x_152, x_153, x_122);
x_155 = lean_array_to_list(x_154);
x_156 = lean_box(0);
x_157 = l_List_mapTR_loop___at___Lean_Meta_substCore_spec__17(x_155, x_156);
x_158 = l_Lean_MessageData_ofList(x_157);
x_159 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_159, 0, x_151);
lean_ctor_set(x_159, 1, x_158);
x_160 = l_Lean_Meta_substCore___lam__1___closed__4;
x_161 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
x_162 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_119, x_161, x_126, x_127, x_128, x_129, x_150);
x_163 = lean_ctor_get(x_162, 1);
lean_inc(x_163);
lean_dec_ref(x_162);
x_66 = x_111;
x_67 = x_112;
x_68 = x_113;
x_69 = x_114;
x_70 = x_116;
x_71 = x_115;
x_72 = x_117;
x_73 = x_118;
x_74 = x_120;
x_75 = x_121;
x_76 = x_122;
x_77 = x_124;
x_78 = x_123;
x_79 = x_125;
x_80 = x_126;
x_81 = x_127;
x_82 = x_128;
x_83 = x_129;
x_84 = x_163;
goto block_110;
}
}
}
block_227:
{
lean_object* x_182; lean_object* x_183; 
x_182 = lean_box(0);
lean_inc(x_180);
lean_inc_ref(x_179);
lean_inc(x_178);
lean_inc_ref(x_177);
lean_inc(x_172);
x_183 = l_Lean_Meta_introNCore(x_173, x_172, x_182, x_176, x_175, x_177, x_178, x_179, x_180, x_181);
if (lean_obj_tag(x_183) == 0)
{
lean_object* x_184; lean_object* x_185; uint8_t x_186; 
x_184 = lean_ctor_get(x_183, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_183, 1);
lean_inc(x_185);
lean_dec_ref(x_183);
x_186 = !lean_is_exclusive(x_184);
if (x_186 == 0)
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_187 = lean_ctor_get(x_184, 0);
x_188 = lean_ctor_get(x_184, 1);
lean_inc(x_171);
x_189 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_171, x_179, x_185);
x_190 = lean_ctor_get(x_189, 0);
lean_inc(x_190);
x_191 = lean_unbox(x_190);
lean_dec(x_190);
if (x_191 == 0)
{
lean_object* x_192; 
lean_free_object(x_184);
x_192 = lean_ctor_get(x_189, 1);
lean_inc(x_192);
lean_dec_ref(x_189);
lean_inc(x_188);
x_111 = x_165;
x_112 = x_166;
x_113 = x_167;
x_114 = x_168;
x_115 = x_182;
x_116 = x_169;
x_117 = x_170;
x_118 = x_188;
x_119 = x_171;
x_120 = x_172;
x_121 = x_188;
x_122 = x_174;
x_123 = x_187;
x_124 = x_175;
x_125 = x_176;
x_126 = x_177;
x_127 = x_178;
x_128 = x_179;
x_129 = x_180;
x_130 = x_192;
goto block_164;
}
else
{
uint8_t x_193; 
x_193 = !lean_is_exclusive(x_189);
if (x_193 == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
x_194 = lean_ctor_get(x_189, 1);
x_195 = lean_ctor_get(x_189, 0);
lean_dec(x_195);
x_196 = l_Lean_Meta_substCore___lam__2___closed__3;
lean_inc(x_188);
x_197 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_197, 0, x_188);
lean_ctor_set_tag(x_189, 7);
lean_ctor_set(x_189, 1, x_197);
lean_ctor_set(x_189, 0, x_196);
x_198 = l_Lean_Meta_substCore___lam__1___closed__4;
lean_ctor_set_tag(x_184, 7);
lean_ctor_set(x_184, 1, x_198);
lean_ctor_set(x_184, 0, x_189);
lean_inc(x_171);
x_199 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_171, x_184, x_177, x_178, x_179, x_180, x_194);
x_200 = lean_ctor_get(x_199, 1);
lean_inc(x_200);
lean_dec_ref(x_199);
lean_inc(x_188);
x_111 = x_165;
x_112 = x_166;
x_113 = x_167;
x_114 = x_168;
x_115 = x_182;
x_116 = x_169;
x_117 = x_170;
x_118 = x_188;
x_119 = x_171;
x_120 = x_172;
x_121 = x_188;
x_122 = x_174;
x_123 = x_187;
x_124 = x_175;
x_125 = x_176;
x_126 = x_177;
x_127 = x_178;
x_128 = x_179;
x_129 = x_180;
x_130 = x_200;
goto block_164;
}
else
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
x_201 = lean_ctor_get(x_189, 1);
lean_inc(x_201);
lean_dec(x_189);
x_202 = l_Lean_Meta_substCore___lam__2___closed__3;
lean_inc(x_188);
x_203 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_203, 0, x_188);
x_204 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_204, 0, x_202);
lean_ctor_set(x_204, 1, x_203);
x_205 = l_Lean_Meta_substCore___lam__1___closed__4;
lean_ctor_set_tag(x_184, 7);
lean_ctor_set(x_184, 1, x_205);
lean_ctor_set(x_184, 0, x_204);
lean_inc(x_171);
x_206 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_171, x_184, x_177, x_178, x_179, x_180, x_201);
x_207 = lean_ctor_get(x_206, 1);
lean_inc(x_207);
lean_dec_ref(x_206);
lean_inc(x_188);
x_111 = x_165;
x_112 = x_166;
x_113 = x_167;
x_114 = x_168;
x_115 = x_182;
x_116 = x_169;
x_117 = x_170;
x_118 = x_188;
x_119 = x_171;
x_120 = x_172;
x_121 = x_188;
x_122 = x_174;
x_123 = x_187;
x_124 = x_175;
x_125 = x_176;
x_126 = x_177;
x_127 = x_178;
x_128 = x_179;
x_129 = x_180;
x_130 = x_207;
goto block_164;
}
}
}
else
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; uint8_t x_212; 
x_208 = lean_ctor_get(x_184, 0);
x_209 = lean_ctor_get(x_184, 1);
lean_inc(x_209);
lean_inc(x_208);
lean_dec(x_184);
lean_inc(x_171);
x_210 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_171, x_179, x_185);
x_211 = lean_ctor_get(x_210, 0);
lean_inc(x_211);
x_212 = lean_unbox(x_211);
lean_dec(x_211);
if (x_212 == 0)
{
lean_object* x_213; 
x_213 = lean_ctor_get(x_210, 1);
lean_inc(x_213);
lean_dec_ref(x_210);
lean_inc(x_209);
x_111 = x_165;
x_112 = x_166;
x_113 = x_167;
x_114 = x_168;
x_115 = x_182;
x_116 = x_169;
x_117 = x_170;
x_118 = x_209;
x_119 = x_171;
x_120 = x_172;
x_121 = x_209;
x_122 = x_174;
x_123 = x_208;
x_124 = x_175;
x_125 = x_176;
x_126 = x_177;
x_127 = x_178;
x_128 = x_179;
x_129 = x_180;
x_130 = x_213;
goto block_164;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_214 = lean_ctor_get(x_210, 1);
lean_inc(x_214);
if (lean_is_exclusive(x_210)) {
 lean_ctor_release(x_210, 0);
 lean_ctor_release(x_210, 1);
 x_215 = x_210;
} else {
 lean_dec_ref(x_210);
 x_215 = lean_box(0);
}
x_216 = l_Lean_Meta_substCore___lam__2___closed__3;
lean_inc(x_209);
x_217 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_217, 0, x_209);
if (lean_is_scalar(x_215)) {
 x_218 = lean_alloc_ctor(7, 2, 0);
} else {
 x_218 = x_215;
 lean_ctor_set_tag(x_218, 7);
}
lean_ctor_set(x_218, 0, x_216);
lean_ctor_set(x_218, 1, x_217);
x_219 = l_Lean_Meta_substCore___lam__1___closed__4;
x_220 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_220, 0, x_218);
lean_ctor_set(x_220, 1, x_219);
lean_inc(x_171);
x_221 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_171, x_220, x_177, x_178, x_179, x_180, x_214);
x_222 = lean_ctor_get(x_221, 1);
lean_inc(x_222);
lean_dec_ref(x_221);
lean_inc(x_209);
x_111 = x_165;
x_112 = x_166;
x_113 = x_167;
x_114 = x_168;
x_115 = x_182;
x_116 = x_169;
x_117 = x_170;
x_118 = x_209;
x_119 = x_171;
x_120 = x_172;
x_121 = x_209;
x_122 = x_174;
x_123 = x_208;
x_124 = x_175;
x_125 = x_176;
x_126 = x_177;
x_127 = x_178;
x_128 = x_179;
x_129 = x_180;
x_130 = x_222;
goto block_164;
}
}
}
else
{
uint8_t x_223; 
lean_dec(x_180);
lean_dec_ref(x_179);
lean_dec(x_178);
lean_dec_ref(x_177);
lean_dec_ref(x_174);
lean_dec(x_172);
lean_dec(x_171);
lean_dec(x_169);
lean_dec_ref(x_168);
lean_dec(x_166);
lean_dec_ref(x_165);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_223 = !lean_is_exclusive(x_183);
if (x_223 == 0)
{
return x_183;
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; 
x_224 = lean_ctor_get(x_183, 0);
x_225 = lean_ctor_get(x_183, 1);
lean_inc(x_225);
lean_inc(x_224);
lean_dec(x_183);
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_224);
lean_ctor_set(x_226, 1, x_225);
return x_226;
}
}
}
block_247:
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; 
x_233 = l_Lean_Meta_substCore___lam__2___closed__7;
x_234 = l_Lean_stringToMessageData(x_232);
lean_dec_ref(x_232);
x_235 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_235, 0, x_233);
lean_ctor_set(x_235, 1, x_234);
x_236 = l_Lean_Meta_substCore___lam__1___closed__4;
x_237 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_237, 0, x_235);
lean_ctor_set(x_237, 1, x_236);
x_238 = l_Lean_indentExpr(x_230);
x_239 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
x_240 = l_Lean_Meta_substCore___lam__2___closed__9;
x_241 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_241, 0, x_239);
lean_ctor_set(x_241, 1, x_240);
x_242 = l_Lean_indentExpr(x_231);
x_243 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_243, 0, x_241);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_244, 0, x_243);
lean_ctor_set(x_244, 1, x_236);
x_245 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_245, 0, x_244);
x_246 = l_Lean_Meta_throwTacticEx___redArg(x_228, x_1, x_245, x_8, x_9, x_10, x_11, x_229);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
return x_246;
}
block_357:
{
lean_object* x_261; lean_object* x_262; uint8_t x_263; 
lean_inc_ref(x_255);
lean_inc_ref(x_252);
x_261 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(x_252, x_255, x_257, x_260);
x_262 = lean_ctor_get(x_261, 0);
lean_inc(x_262);
x_263 = lean_unbox(x_262);
if (x_263 == 0)
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; uint8_t x_269; lean_object* x_270; 
lean_dec_ref(x_253);
lean_dec_ref(x_252);
x_264 = lean_ctor_get(x_261, 1);
lean_inc(x_264);
lean_dec_ref(x_261);
x_265 = lean_unsigned_to_nat(2u);
x_266 = l_Lean_Meta_substCore___lam__2___closed__10;
x_267 = lean_array_push(x_266, x_255);
lean_inc(x_2);
x_268 = lean_array_push(x_267, x_2);
x_269 = lean_unbox(x_262);
lean_inc(x_259);
lean_inc_ref(x_258);
lean_inc(x_257);
lean_inc_ref(x_256);
x_270 = l_Lean_MVarId_revert(x_1, x_268, x_254, x_269, x_256, x_257, x_258, x_259, x_264);
if (lean_obj_tag(x_270) == 0)
{
lean_object* x_271; lean_object* x_272; uint8_t x_273; 
x_271 = lean_ctor_get(x_270, 0);
lean_inc(x_271);
x_272 = lean_ctor_get(x_270, 1);
lean_inc(x_272);
lean_dec_ref(x_270);
x_273 = !lean_is_exclusive(x_271);
if (x_273 == 0)
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; uint8_t x_278; 
x_274 = lean_ctor_get(x_271, 0);
x_275 = lean_ctor_get(x_271, 1);
lean_inc(x_251);
x_276 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_251, x_258, x_272);
x_277 = lean_ctor_get(x_276, 0);
lean_inc(x_277);
x_278 = lean_unbox(x_277);
lean_dec(x_277);
if (x_278 == 0)
{
lean_object* x_279; uint8_t x_280; uint8_t x_281; 
lean_free_object(x_271);
x_279 = lean_ctor_get(x_276, 1);
lean_inc(x_279);
lean_dec_ref(x_276);
x_280 = lean_unbox(x_262);
x_281 = lean_unbox(x_262);
lean_dec(x_262);
lean_inc(x_274);
x_165 = x_248;
x_166 = x_249;
x_167 = x_250;
x_168 = x_274;
x_169 = x_265;
x_170 = x_280;
x_171 = x_251;
x_172 = x_265;
x_173 = x_275;
x_174 = x_274;
x_175 = x_254;
x_176 = x_281;
x_177 = x_256;
x_178 = x_257;
x_179 = x_258;
x_180 = x_259;
x_181 = x_279;
goto block_227;
}
else
{
uint8_t x_282; 
x_282 = !lean_is_exclusive(x_276);
if (x_282 == 0)
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; uint8_t x_290; uint8_t x_291; 
x_283 = lean_ctor_get(x_276, 1);
x_284 = lean_ctor_get(x_276, 0);
lean_dec(x_284);
x_285 = l_Lean_Meta_substCore___lam__2___closed__12;
lean_inc(x_275);
x_286 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_286, 0, x_275);
lean_ctor_set_tag(x_276, 7);
lean_ctor_set(x_276, 1, x_286);
lean_ctor_set(x_276, 0, x_285);
x_287 = l_Lean_Meta_substCore___lam__1___closed__4;
lean_ctor_set_tag(x_271, 7);
lean_ctor_set(x_271, 1, x_287);
lean_ctor_set(x_271, 0, x_276);
lean_inc(x_251);
x_288 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_251, x_271, x_256, x_257, x_258, x_259, x_283);
x_289 = lean_ctor_get(x_288, 1);
lean_inc(x_289);
lean_dec_ref(x_288);
x_290 = lean_unbox(x_262);
x_291 = lean_unbox(x_262);
lean_dec(x_262);
lean_inc(x_274);
x_165 = x_248;
x_166 = x_249;
x_167 = x_250;
x_168 = x_274;
x_169 = x_265;
x_170 = x_290;
x_171 = x_251;
x_172 = x_265;
x_173 = x_275;
x_174 = x_274;
x_175 = x_254;
x_176 = x_291;
x_177 = x_256;
x_178 = x_257;
x_179 = x_258;
x_180 = x_259;
x_181 = x_289;
goto block_227;
}
else
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; uint8_t x_299; uint8_t x_300; 
x_292 = lean_ctor_get(x_276, 1);
lean_inc(x_292);
lean_dec(x_276);
x_293 = l_Lean_Meta_substCore___lam__2___closed__12;
lean_inc(x_275);
x_294 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_294, 0, x_275);
x_295 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_295, 0, x_293);
lean_ctor_set(x_295, 1, x_294);
x_296 = l_Lean_Meta_substCore___lam__1___closed__4;
lean_ctor_set_tag(x_271, 7);
lean_ctor_set(x_271, 1, x_296);
lean_ctor_set(x_271, 0, x_295);
lean_inc(x_251);
x_297 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_251, x_271, x_256, x_257, x_258, x_259, x_292);
x_298 = lean_ctor_get(x_297, 1);
lean_inc(x_298);
lean_dec_ref(x_297);
x_299 = lean_unbox(x_262);
x_300 = lean_unbox(x_262);
lean_dec(x_262);
lean_inc(x_274);
x_165 = x_248;
x_166 = x_249;
x_167 = x_250;
x_168 = x_274;
x_169 = x_265;
x_170 = x_299;
x_171 = x_251;
x_172 = x_265;
x_173 = x_275;
x_174 = x_274;
x_175 = x_254;
x_176 = x_300;
x_177 = x_256;
x_178 = x_257;
x_179 = x_258;
x_180 = x_259;
x_181 = x_298;
goto block_227;
}
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; uint8_t x_305; 
x_301 = lean_ctor_get(x_271, 0);
x_302 = lean_ctor_get(x_271, 1);
lean_inc(x_302);
lean_inc(x_301);
lean_dec(x_271);
lean_inc(x_251);
x_303 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_251, x_258, x_272);
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_unbox(x_304);
lean_dec(x_304);
if (x_305 == 0)
{
lean_object* x_306; uint8_t x_307; uint8_t x_308; 
x_306 = lean_ctor_get(x_303, 1);
lean_inc(x_306);
lean_dec_ref(x_303);
x_307 = lean_unbox(x_262);
x_308 = lean_unbox(x_262);
lean_dec(x_262);
lean_inc(x_301);
x_165 = x_248;
x_166 = x_249;
x_167 = x_250;
x_168 = x_301;
x_169 = x_265;
x_170 = x_307;
x_171 = x_251;
x_172 = x_265;
x_173 = x_302;
x_174 = x_301;
x_175 = x_254;
x_176 = x_308;
x_177 = x_256;
x_178 = x_257;
x_179 = x_258;
x_180 = x_259;
x_181 = x_306;
goto block_227;
}
else
{
lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; uint8_t x_318; uint8_t x_319; 
x_309 = lean_ctor_get(x_303, 1);
lean_inc(x_309);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_310 = x_303;
} else {
 lean_dec_ref(x_303);
 x_310 = lean_box(0);
}
x_311 = l_Lean_Meta_substCore___lam__2___closed__12;
lean_inc(x_302);
x_312 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_312, 0, x_302);
if (lean_is_scalar(x_310)) {
 x_313 = lean_alloc_ctor(7, 2, 0);
} else {
 x_313 = x_310;
 lean_ctor_set_tag(x_313, 7);
}
lean_ctor_set(x_313, 0, x_311);
lean_ctor_set(x_313, 1, x_312);
x_314 = l_Lean_Meta_substCore___lam__1___closed__4;
x_315 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_315, 0, x_313);
lean_ctor_set(x_315, 1, x_314);
lean_inc(x_251);
x_316 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_251, x_315, x_256, x_257, x_258, x_259, x_309);
x_317 = lean_ctor_get(x_316, 1);
lean_inc(x_317);
lean_dec_ref(x_316);
x_318 = lean_unbox(x_262);
x_319 = lean_unbox(x_262);
lean_dec(x_262);
lean_inc(x_301);
x_165 = x_248;
x_166 = x_249;
x_167 = x_250;
x_168 = x_301;
x_169 = x_265;
x_170 = x_318;
x_171 = x_251;
x_172 = x_265;
x_173 = x_302;
x_174 = x_301;
x_175 = x_254;
x_176 = x_319;
x_177 = x_256;
x_178 = x_257;
x_179 = x_258;
x_180 = x_259;
x_181 = x_317;
goto block_227;
}
}
}
else
{
uint8_t x_320; 
lean_dec(x_262);
lean_dec(x_259);
lean_dec_ref(x_258);
lean_dec(x_257);
lean_dec_ref(x_256);
lean_dec(x_251);
lean_dec(x_249);
lean_dec_ref(x_248);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_320 = !lean_is_exclusive(x_270);
if (x_320 == 0)
{
return x_270;
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; 
x_321 = lean_ctor_get(x_270, 0);
x_322 = lean_ctor_get(x_270, 1);
lean_inc(x_322);
lean_inc(x_321);
lean_dec(x_270);
x_323 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_323, 0, x_321);
lean_ctor_set(x_323, 1, x_322);
return x_323;
}
}
}
else
{
uint8_t x_324; 
lean_dec(x_262);
lean_dec_ref(x_255);
lean_dec(x_251);
lean_dec(x_249);
lean_dec_ref(x_248);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_324 = !lean_is_exclusive(x_261);
if (x_324 == 0)
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; 
x_325 = lean_ctor_get(x_261, 1);
x_326 = lean_ctor_get(x_261, 0);
lean_dec(x_326);
x_327 = l_Lean_Meta_substCore___lam__2___closed__14;
x_328 = l_Lean_MessageData_ofExpr(x_253);
lean_ctor_set_tag(x_261, 7);
lean_ctor_set(x_261, 1, x_328);
lean_ctor_set(x_261, 0, x_327);
x_329 = l_Lean_Meta_substCore___lam__2___closed__16;
x_330 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_330, 0, x_261);
lean_ctor_set(x_330, 1, x_329);
x_331 = l_Lean_indentExpr(x_252);
x_332 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_332, 0, x_330);
lean_ctor_set(x_332, 1, x_331);
x_333 = l_Lean_Meta_substCore___lam__1___closed__4;
x_334 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_334, 0, x_332);
lean_ctor_set(x_334, 1, x_333);
x_335 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_335, 0, x_334);
x_336 = l_Lean_Meta_throwTacticEx___redArg(x_228, x_1, x_335, x_256, x_257, x_258, x_259, x_325);
lean_dec(x_259);
lean_dec_ref(x_258);
lean_dec(x_257);
lean_dec_ref(x_256);
x_337 = !lean_is_exclusive(x_336);
if (x_337 == 0)
{
return x_336;
}
else
{
lean_object* x_338; lean_object* x_339; lean_object* x_340; 
x_338 = lean_ctor_get(x_336, 0);
x_339 = lean_ctor_get(x_336, 1);
lean_inc(x_339);
lean_inc(x_338);
lean_dec(x_336);
x_340 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_340, 0, x_338);
lean_ctor_set(x_340, 1, x_339);
return x_340;
}
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; 
x_341 = lean_ctor_get(x_261, 1);
lean_inc(x_341);
lean_dec(x_261);
x_342 = l_Lean_Meta_substCore___lam__2___closed__14;
x_343 = l_Lean_MessageData_ofExpr(x_253);
x_344 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_344, 0, x_342);
lean_ctor_set(x_344, 1, x_343);
x_345 = l_Lean_Meta_substCore___lam__2___closed__16;
x_346 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_346, 0, x_344);
lean_ctor_set(x_346, 1, x_345);
x_347 = l_Lean_indentExpr(x_252);
x_348 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_348, 0, x_346);
lean_ctor_set(x_348, 1, x_347);
x_349 = l_Lean_Meta_substCore___lam__1___closed__4;
x_350 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_350, 0, x_348);
lean_ctor_set(x_350, 1, x_349);
x_351 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_351, 0, x_350);
x_352 = l_Lean_Meta_throwTacticEx___redArg(x_228, x_1, x_351, x_256, x_257, x_258, x_259, x_341);
lean_dec(x_259);
lean_dec_ref(x_258);
lean_dec(x_257);
lean_dec_ref(x_256);
x_353 = lean_ctor_get(x_352, 0);
lean_inc(x_353);
x_354 = lean_ctor_get(x_352, 1);
lean_inc(x_354);
if (lean_is_exclusive(x_352)) {
 lean_ctor_release(x_352, 0);
 lean_ctor_release(x_352, 1);
 x_355 = x_352;
} else {
 lean_dec_ref(x_352);
 x_355 = lean_box(0);
}
if (lean_is_scalar(x_355)) {
 x_356 = lean_alloc_ctor(1, 2, 0);
} else {
 x_356 = x_355;
}
lean_ctor_set(x_356, 0, x_353);
lean_ctor_set(x_356, 1, x_354);
return x_356;
}
}
}
block_434:
{
lean_object* x_364; 
x_364 = l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(x_363, x_9, x_362);
if (lean_obj_tag(x_360) == 1)
{
uint8_t x_365; 
lean_dec_ref(x_359);
x_365 = !lean_is_exclusive(x_364);
if (x_365 == 0)
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; uint8_t x_372; 
x_366 = lean_ctor_get(x_364, 0);
x_367 = lean_ctor_get(x_364, 1);
x_368 = lean_ctor_get(x_360, 0);
lean_inc(x_368);
x_369 = l_Lean_Meta_substCore___lam__2___closed__19;
x_370 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_369, x_10, x_367);
x_371 = lean_ctor_get(x_370, 0);
lean_inc(x_371);
x_372 = lean_unbox(x_371);
lean_dec(x_371);
if (x_372 == 0)
{
lean_object* x_373; 
lean_free_object(x_364);
x_373 = lean_ctor_get(x_370, 1);
lean_inc(x_373);
lean_dec_ref(x_370);
lean_inc(x_368);
x_248 = x_368;
x_249 = x_369;
x_250 = x_358;
x_251 = x_369;
x_252 = x_366;
x_253 = x_360;
x_254 = x_361;
x_255 = x_368;
x_256 = x_8;
x_257 = x_9;
x_258 = x_10;
x_259 = x_11;
x_260 = x_373;
goto block_357;
}
else
{
uint8_t x_374; 
x_374 = !lean_is_exclusive(x_370);
if (x_374 == 0)
{
lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; 
x_375 = lean_ctor_get(x_370, 1);
x_376 = lean_ctor_get(x_370, 0);
lean_dec(x_376);
x_377 = l_Lean_Meta_substCore___lam__2___closed__21;
lean_inc_ref(x_360);
x_378 = l_Lean_MessageData_ofExpr(x_360);
lean_ctor_set_tag(x_370, 7);
lean_ctor_set(x_370, 1, x_378);
lean_ctor_set(x_370, 0, x_377);
x_379 = l_Lean_Meta_substCore___lam__2___closed__23;
lean_ctor_set_tag(x_364, 7);
lean_ctor_set(x_364, 1, x_379);
lean_ctor_set(x_364, 0, x_370);
lean_inc(x_368);
x_380 = l_Lean_MessageData_ofName(x_368);
x_381 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_381, 0, x_364);
lean_ctor_set(x_381, 1, x_380);
x_382 = l_Lean_Meta_substCore___lam__2___closed__25;
x_383 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_383, 0, x_381);
lean_ctor_set(x_383, 1, x_382);
lean_inc(x_366);
x_384 = l_Lean_MessageData_ofExpr(x_366);
x_385 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_385, 0, x_383);
lean_ctor_set(x_385, 1, x_384);
x_386 = l_Lean_Meta_substCore___lam__1___closed__4;
x_387 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_387, 0, x_385);
lean_ctor_set(x_387, 1, x_386);
x_388 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_369, x_387, x_8, x_9, x_10, x_11, x_375);
x_389 = lean_ctor_get(x_388, 1);
lean_inc(x_389);
lean_dec_ref(x_388);
lean_inc(x_368);
x_248 = x_368;
x_249 = x_369;
x_250 = x_358;
x_251 = x_369;
x_252 = x_366;
x_253 = x_360;
x_254 = x_361;
x_255 = x_368;
x_256 = x_8;
x_257 = x_9;
x_258 = x_10;
x_259 = x_11;
x_260 = x_389;
goto block_357;
}
else
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; 
x_390 = lean_ctor_get(x_370, 1);
lean_inc(x_390);
lean_dec(x_370);
x_391 = l_Lean_Meta_substCore___lam__2___closed__21;
lean_inc_ref(x_360);
x_392 = l_Lean_MessageData_ofExpr(x_360);
x_393 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_393, 0, x_391);
lean_ctor_set(x_393, 1, x_392);
x_394 = l_Lean_Meta_substCore___lam__2___closed__23;
lean_ctor_set_tag(x_364, 7);
lean_ctor_set(x_364, 1, x_394);
lean_ctor_set(x_364, 0, x_393);
lean_inc(x_368);
x_395 = l_Lean_MessageData_ofName(x_368);
x_396 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_396, 0, x_364);
lean_ctor_set(x_396, 1, x_395);
x_397 = l_Lean_Meta_substCore___lam__2___closed__25;
x_398 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_398, 0, x_396);
lean_ctor_set(x_398, 1, x_397);
lean_inc(x_366);
x_399 = l_Lean_MessageData_ofExpr(x_366);
x_400 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_400, 0, x_398);
lean_ctor_set(x_400, 1, x_399);
x_401 = l_Lean_Meta_substCore___lam__1___closed__4;
x_402 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_402, 0, x_400);
lean_ctor_set(x_402, 1, x_401);
x_403 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_369, x_402, x_8, x_9, x_10, x_11, x_390);
x_404 = lean_ctor_get(x_403, 1);
lean_inc(x_404);
lean_dec_ref(x_403);
lean_inc(x_368);
x_248 = x_368;
x_249 = x_369;
x_250 = x_358;
x_251 = x_369;
x_252 = x_366;
x_253 = x_360;
x_254 = x_361;
x_255 = x_368;
x_256 = x_8;
x_257 = x_9;
x_258 = x_10;
x_259 = x_11;
x_260 = x_404;
goto block_357;
}
}
}
else
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; uint8_t x_411; 
x_405 = lean_ctor_get(x_364, 0);
x_406 = lean_ctor_get(x_364, 1);
lean_inc(x_406);
lean_inc(x_405);
lean_dec(x_364);
x_407 = lean_ctor_get(x_360, 0);
lean_inc(x_407);
x_408 = l_Lean_Meta_substCore___lam__2___closed__19;
x_409 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_408, x_10, x_406);
x_410 = lean_ctor_get(x_409, 0);
lean_inc(x_410);
x_411 = lean_unbox(x_410);
lean_dec(x_410);
if (x_411 == 0)
{
lean_object* x_412; 
x_412 = lean_ctor_get(x_409, 1);
lean_inc(x_412);
lean_dec_ref(x_409);
lean_inc(x_407);
x_248 = x_407;
x_249 = x_408;
x_250 = x_358;
x_251 = x_408;
x_252 = x_405;
x_253 = x_360;
x_254 = x_361;
x_255 = x_407;
x_256 = x_8;
x_257 = x_9;
x_258 = x_10;
x_259 = x_11;
x_260 = x_412;
goto block_357;
}
else
{
lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; 
x_413 = lean_ctor_get(x_409, 1);
lean_inc(x_413);
if (lean_is_exclusive(x_409)) {
 lean_ctor_release(x_409, 0);
 lean_ctor_release(x_409, 1);
 x_414 = x_409;
} else {
 lean_dec_ref(x_409);
 x_414 = lean_box(0);
}
x_415 = l_Lean_Meta_substCore___lam__2___closed__21;
lean_inc_ref(x_360);
x_416 = l_Lean_MessageData_ofExpr(x_360);
if (lean_is_scalar(x_414)) {
 x_417 = lean_alloc_ctor(7, 2, 0);
} else {
 x_417 = x_414;
 lean_ctor_set_tag(x_417, 7);
}
lean_ctor_set(x_417, 0, x_415);
lean_ctor_set(x_417, 1, x_416);
x_418 = l_Lean_Meta_substCore___lam__2___closed__23;
x_419 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_419, 0, x_417);
lean_ctor_set(x_419, 1, x_418);
lean_inc(x_407);
x_420 = l_Lean_MessageData_ofName(x_407);
x_421 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_421, 0, x_419);
lean_ctor_set(x_421, 1, x_420);
x_422 = l_Lean_Meta_substCore___lam__2___closed__25;
x_423 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_423, 0, x_421);
lean_ctor_set(x_423, 1, x_422);
lean_inc(x_405);
x_424 = l_Lean_MessageData_ofExpr(x_405);
x_425 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_425, 0, x_423);
lean_ctor_set(x_425, 1, x_424);
x_426 = l_Lean_Meta_substCore___lam__1___closed__4;
x_427 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_427, 0, x_425);
lean_ctor_set(x_427, 1, x_426);
x_428 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_408, x_427, x_8, x_9, x_10, x_11, x_413);
x_429 = lean_ctor_get(x_428, 1);
lean_inc(x_429);
lean_dec_ref(x_428);
lean_inc(x_407);
x_248 = x_407;
x_249 = x_408;
x_250 = x_358;
x_251 = x_408;
x_252 = x_405;
x_253 = x_360;
x_254 = x_361;
x_255 = x_407;
x_256 = x_8;
x_257 = x_9;
x_258 = x_10;
x_259 = x_11;
x_260 = x_429;
goto block_357;
}
}
}
else
{
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
if (x_6 == 0)
{
lean_object* x_430; lean_object* x_431; 
x_430 = lean_ctor_get(x_364, 1);
lean_inc(x_430);
lean_dec_ref(x_364);
x_431 = l_Lean_Meta_substCore___lam__2___closed__26;
x_229 = x_430;
x_230 = x_359;
x_231 = x_360;
x_232 = x_431;
goto block_247;
}
else
{
lean_object* x_432; lean_object* x_433; 
x_432 = lean_ctor_get(x_364, 1);
lean_inc(x_432);
lean_dec_ref(x_364);
x_433 = l_Lean_Meta_substCore___lam__2___closed__27;
x_229 = x_432;
x_230 = x_359;
x_231 = x_360;
x_232 = x_433;
goto block_247;
}
}
}
block_446:
{
lean_object* x_441; 
x_441 = l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(x_440, x_9, x_438);
if (x_6 == 0)
{
lean_object* x_442; lean_object* x_443; 
lean_dec_ref(x_437);
x_442 = lean_ctor_get(x_441, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_441, 1);
lean_inc(x_443);
lean_dec_ref(x_441);
x_358 = x_435;
x_359 = x_439;
x_360 = x_442;
x_361 = x_435;
x_362 = x_443;
x_363 = x_436;
goto block_434;
}
else
{
lean_object* x_444; lean_object* x_445; 
lean_dec_ref(x_436);
x_444 = lean_ctor_get(x_441, 0);
lean_inc(x_444);
x_445 = lean_ctor_get(x_441, 1);
lean_inc(x_445);
lean_dec_ref(x_441);
x_358 = x_435;
x_359 = x_439;
x_360 = x_444;
x_361 = x_435;
x_362 = x_445;
x_363 = x_437;
goto block_434;
}
}
}
else
{
uint8_t x_478; 
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_478 = !lean_is_exclusive(x_13);
if (x_478 == 0)
{
return x_13;
}
else
{
lean_object* x_479; lean_object* x_480; lean_object* x_481; 
x_479 = lean_ctor_get(x_13, 0);
x_480 = lean_ctor_get(x_13, 1);
lean_inc(x_480);
lean_inc(x_479);
lean_dec(x_13);
x_481 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_481, 0, x_479);
lean_ctor_set(x_481, 1, x_480);
return x_481;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_box(0);
x_13 = lean_box(x_5);
x_14 = lean_box(x_3);
x_15 = lean_box(x_6);
lean_inc(x_1);
x_16 = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__2___boxed), 12, 7);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_2);
lean_closure_set(x_16, 2, x_12);
lean_closure_set(x_16, 3, x_4);
lean_closure_set(x_16, 4, x_13);
lean_closure_set(x_16, 5, x_14);
lean_closure_set(x_16, 6, x_15);
x_17 = l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15___redArg(x_1, x_16, x_7, x_8, x_9, x_10, x_11);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1___redArg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Nat_foldM_loop___at___Lean_Meta_substCore_spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec_ref(x_11);
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___redArg(x_1, x_2, x_3);
lean_dec_ref(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_isTracingEnabledFor___at___Lean_Meta_substCore_spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___Lean_addTrace___at___Lean_Meta_substCore_spec__3_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_addMessageContextFull___at___Lean_addTrace___at___Lean_Meta_substCore_spec__3_spec__3(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_addTrace___at___Lean_Meta_substCore_spec__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__0___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__0(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___lam__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; lean_object* x_7; 
x_6 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_7 = l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8___redArg(x_6, x_2, x_3, x_4, x_5);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; lean_object* x_9; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = l_Lean_PersistentHashMap_insertAux_traverse___at___Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6_spec__8(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg(x_1, x_6, x_7, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_8 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_9 = l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6(x_1, x_2, x_7, x_8, x_5, x_6);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6___redArg(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; uint8_t x_12; lean_object* x_13; 
x_11 = lean_unbox(x_2);
x_12 = lean_unbox(x_5);
x_13 = l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___redArg(x_1, x_11, x_3, x_4, x_12, x_6, x_7, x_8, x_9, x_10);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_12 = lean_unbox(x_3);
x_13 = lean_unbox(x_6);
x_14 = l_Lean_Meta_withLocalDecl___at___Lean_Meta_withLocalDeclD___at___Lean_Meta_substCore_spec__12_spec__12(x_1, x_2, x_12, x_4, x_5, x_13, x_7, x_8, x_9, x_10, x_11);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at___Lean_Meta_substCore_spec__16___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at___Lean_Meta_substCore_spec__16(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_13 = lean_unbox(x_5);
x_14 = lean_unbox(x_6);
x_15 = l_Lean_Meta_substCore___lam__0(x_1, x_2, x_3, x_4, x_13, x_14, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec(x_3);
lean_dec_ref(x_1);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object** _args) {
lean_object* x_1 = _args[0];
lean_object* x_2 = _args[1];
lean_object* x_3 = _args[2];
lean_object* x_4 = _args[3];
lean_object* x_5 = _args[4];
lean_object* x_6 = _args[5];
lean_object* x_7 = _args[6];
lean_object* x_8 = _args[7];
lean_object* x_9 = _args[8];
lean_object* x_10 = _args[9];
lean_object* x_11 = _args[10];
lean_object* x_12 = _args[11];
lean_object* x_13 = _args[12];
lean_object* x_14 = _args[13];
lean_object* x_15 = _args[14];
lean_object* x_16 = _args[15];
lean_object* x_17 = _args[16];
lean_object* x_18 = _args[17];
lean_object* x_19 = _args[18];
lean_object* x_20 = _args[19];
lean_object* x_21 = _args[20];
lean_object* x_22 = _args[21];
lean_object* x_23 = _args[22];
lean_object* x_24 = _args[23];
lean_object* x_25 = _args[24];
_start:
{
uint8_t x_26; uint8_t x_27; uint8_t x_28; uint8_t x_29; uint8_t x_30; lean_object* x_31; 
x_26 = lean_unbox(x_10);
x_27 = lean_unbox(x_13);
x_28 = lean_unbox(x_14);
x_29 = lean_unbox(x_18);
x_30 = lean_unbox(x_19);
x_31 = l_Lean_Meta_substCore___lam__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_26, x_11, x_12, x_27, x_28, x_15, x_16, x_17, x_29, x_30, x_20, x_21, x_22, x_23, x_24, x_25);
lean_dec(x_20);
lean_dec_ref(x_8);
return x_31;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; 
x_13 = lean_unbox(x_5);
x_14 = lean_unbox(x_6);
x_15 = lean_unbox(x_7);
x_16 = l_Lean_Meta_substCore___lam__2(x_1, x_2, x_3, x_4, x_13, x_14, x_15, x_8, x_9, x_10, x_11, x_12);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_unbox(x_3);
x_13 = lean_unbox(x_5);
x_14 = lean_unbox(x_6);
x_15 = l_Lean_Meta_substCore(x_1, x_2, x_12, x_4, x_13, x_14, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
}
static lean_object* _init_l_Lean_Meta_heqToEq___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("HEq", 3, 3);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_heqToEq___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_heqToEq___lam__0___closed__0;
x_2 = l_Lean_Name_mkStr1(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_33; 
lean_inc_ref(x_4);
lean_inc(x_1);
x_33 = l_Lean_FVarId_getDecl___redArg(x_1, x_4, x_6, x_7, x_8);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_131; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec_ref(x_33);
x_131 = lean_ctor_get(x_34, 3);
lean_inc_ref(x_131);
x_36 = x_131;
goto block_130;
block_130:
{
lean_object* x_37; 
lean_inc(x_7);
lean_inc_ref(x_6);
lean_inc(x_5);
lean_inc_ref(x_4);
x_37 = lean_whnf(x_36, x_4, x_5, x_6, x_7, x_35);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ctor_get(x_37, 1);
x_41 = l_Lean_Meta_heqToEq___lam__0___closed__1;
x_42 = lean_unsigned_to_nat(4u);
x_43 = l_Lean_Expr_isAppOfArity(x_39, x_41, x_42);
if (x_43 == 0)
{
lean_object* x_44; 
lean_dec(x_39);
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_1);
lean_ctor_set(x_44, 1, x_2);
lean_ctor_set(x_37, 0, x_44);
return x_37;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_free_object(x_37);
x_45 = l_Lean_Expr_appFn_x21(x_39);
x_46 = l_Lean_Expr_appFn_x21(x_45);
x_47 = l_Lean_Expr_appFn_x21(x_46);
x_48 = l_Lean_Expr_appArg_x21(x_47);
lean_dec_ref(x_47);
x_49 = l_Lean_Expr_appArg_x21(x_45);
lean_dec_ref(x_45);
lean_inc(x_7);
lean_inc_ref(x_6);
lean_inc(x_5);
lean_inc_ref(x_4);
x_50 = l_Lean_Meta_isExprDefEq(x_48, x_49, x_4, x_5, x_6, x_7, x_40);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; uint8_t x_52; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_unbox(x_51);
if (x_52 == 0)
{
uint8_t x_53; 
lean_dec(x_51);
lean_dec_ref(x_46);
lean_dec(x_39);
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
x_53 = !lean_is_exclusive(x_50);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_ctor_get(x_50, 0);
lean_dec(x_54);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_1);
lean_ctor_set(x_55, 1, x_2);
lean_ctor_set(x_50, 0, x_55);
return x_50;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_50, 1);
lean_inc(x_56);
lean_dec(x_50);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_1);
lean_ctor_set(x_57, 1, x_2);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_50, 1);
lean_inc(x_59);
lean_dec_ref(x_50);
lean_inc(x_1);
x_60 = l_Lean_Expr_fvar___override(x_1);
lean_inc(x_7);
lean_inc_ref(x_6);
lean_inc(x_5);
lean_inc_ref(x_4);
x_61 = l_Lean_Meta_mkEqOfHEq(x_60, x_43, x_4, x_5, x_6, x_7, x_59);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec_ref(x_61);
x_64 = l_Lean_Expr_appArg_x21(x_46);
lean_dec_ref(x_46);
x_65 = l_Lean_Expr_appArg_x21(x_39);
lean_dec(x_39);
lean_inc(x_7);
lean_inc_ref(x_6);
lean_inc(x_5);
lean_inc_ref(x_4);
x_66 = l_Lean_Meta_mkEq(x_64, x_65, x_4, x_5, x_6, x_7, x_63);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec_ref(x_66);
x_69 = lean_ctor_get(x_34, 2);
lean_inc(x_69);
lean_dec(x_34);
x_70 = lean_unbox(x_51);
lean_dec(x_51);
x_9 = x_70;
x_10 = x_67;
x_11 = x_68;
x_12 = x_62;
x_13 = x_69;
goto block_32;
}
else
{
uint8_t x_71; 
lean_dec(x_62);
lean_dec(x_51);
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_66);
if (x_71 == 0)
{
return x_66;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_66, 0);
x_73 = lean_ctor_get(x_66, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_66);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_51);
lean_dec_ref(x_46);
lean_dec(x_39);
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_61);
if (x_75 == 0)
{
return x_61;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_61, 0);
x_77 = lean_ctor_get(x_61, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_61);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
}
else
{
uint8_t x_79; 
lean_dec_ref(x_46);
lean_dec(x_39);
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_79 = !lean_is_exclusive(x_50);
if (x_79 == 0)
{
return x_50;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_50, 0);
x_81 = lean_ctor_get(x_50, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_50);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_83 = lean_ctor_get(x_37, 0);
x_84 = lean_ctor_get(x_37, 1);
lean_inc(x_84);
lean_inc(x_83);
lean_dec(x_37);
x_85 = l_Lean_Meta_heqToEq___lam__0___closed__1;
x_86 = lean_unsigned_to_nat(4u);
x_87 = l_Lean_Expr_isAppOfArity(x_83, x_85, x_86);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; 
lean_dec(x_83);
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_1);
lean_ctor_set(x_88, 1, x_2);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_84);
return x_89;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_90 = l_Lean_Expr_appFn_x21(x_83);
x_91 = l_Lean_Expr_appFn_x21(x_90);
x_92 = l_Lean_Expr_appFn_x21(x_91);
x_93 = l_Lean_Expr_appArg_x21(x_92);
lean_dec_ref(x_92);
x_94 = l_Lean_Expr_appArg_x21(x_90);
lean_dec_ref(x_90);
lean_inc(x_7);
lean_inc_ref(x_6);
lean_inc(x_5);
lean_inc_ref(x_4);
x_95 = l_Lean_Meta_isExprDefEq(x_93, x_94, x_4, x_5, x_6, x_7, x_84);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; uint8_t x_97; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_unbox(x_96);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_96);
lean_dec_ref(x_91);
lean_dec(x_83);
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
x_98 = lean_ctor_get(x_95, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_99 = x_95;
} else {
 lean_dec_ref(x_95);
 x_99 = lean_box(0);
}
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_1);
lean_ctor_set(x_100, 1, x_2);
if (lean_is_scalar(x_99)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_99;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_98);
return x_101;
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_95, 1);
lean_inc(x_102);
lean_dec_ref(x_95);
lean_inc(x_1);
x_103 = l_Lean_Expr_fvar___override(x_1);
lean_inc(x_7);
lean_inc_ref(x_6);
lean_inc(x_5);
lean_inc_ref(x_4);
x_104 = l_Lean_Meta_mkEqOfHEq(x_103, x_87, x_4, x_5, x_6, x_7, x_102);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec_ref(x_104);
x_107 = l_Lean_Expr_appArg_x21(x_91);
lean_dec_ref(x_91);
x_108 = l_Lean_Expr_appArg_x21(x_83);
lean_dec(x_83);
lean_inc(x_7);
lean_inc_ref(x_6);
lean_inc(x_5);
lean_inc_ref(x_4);
x_109 = l_Lean_Meta_mkEq(x_107, x_108, x_4, x_5, x_6, x_7, x_106);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
x_111 = lean_ctor_get(x_109, 1);
lean_inc(x_111);
lean_dec_ref(x_109);
x_112 = lean_ctor_get(x_34, 2);
lean_inc(x_112);
lean_dec(x_34);
x_113 = lean_unbox(x_96);
lean_dec(x_96);
x_9 = x_113;
x_10 = x_110;
x_11 = x_111;
x_12 = x_105;
x_13 = x_112;
goto block_32;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; 
lean_dec(x_105);
lean_dec(x_96);
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_114 = lean_ctor_get(x_109, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_109, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_116 = x_109;
} else {
 lean_dec_ref(x_109);
 x_116 = lean_box(0);
}
if (lean_is_scalar(x_116)) {
 x_117 = lean_alloc_ctor(1, 2, 0);
} else {
 x_117 = x_116;
}
lean_ctor_set(x_117, 0, x_114);
lean_ctor_set(x_117, 1, x_115);
return x_117;
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
lean_dec(x_96);
lean_dec_ref(x_91);
lean_dec(x_83);
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_118 = lean_ctor_get(x_104, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_104, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_104)) {
 lean_ctor_release(x_104, 0);
 lean_ctor_release(x_104, 1);
 x_120 = x_104;
} else {
 lean_dec_ref(x_104);
 x_120 = lean_box(0);
}
if (lean_is_scalar(x_120)) {
 x_121 = lean_alloc_ctor(1, 2, 0);
} else {
 x_121 = x_120;
}
lean_ctor_set(x_121, 0, x_118);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec_ref(x_91);
lean_dec(x_83);
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_122 = lean_ctor_get(x_95, 0);
lean_inc(x_122);
x_123 = lean_ctor_get(x_95, 1);
lean_inc(x_123);
if (lean_is_exclusive(x_95)) {
 lean_ctor_release(x_95, 0);
 lean_ctor_release(x_95, 1);
 x_124 = x_95;
} else {
 lean_dec_ref(x_95);
 x_124 = lean_box(0);
}
if (lean_is_scalar(x_124)) {
 x_125 = lean_alloc_ctor(1, 2, 0);
} else {
 x_125 = x_124;
}
lean_ctor_set(x_125, 0, x_122);
lean_ctor_set(x_125, 1, x_123);
return x_125;
}
}
}
}
else
{
uint8_t x_126; 
lean_dec(x_34);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_126 = !lean_is_exclusive(x_37);
if (x_126 == 0)
{
return x_37;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_127 = lean_ctor_get(x_37, 0);
x_128 = lean_ctor_get(x_37, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_37);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_127);
lean_ctor_set(x_129, 1, x_128);
return x_129;
}
}
}
}
else
{
uint8_t x_132; 
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_132 = !lean_is_exclusive(x_33);
if (x_132 == 0)
{
return x_33;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_33, 0);
x_134 = lean_ctor_get(x_33, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_33);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
block_32:
{
lean_object* x_14; 
lean_inc(x_7);
lean_inc_ref(x_6);
lean_inc(x_5);
lean_inc_ref(x_4);
x_14 = l_Lean_MVarId_assert(x_2, x_13, x_10, x_12, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_14) == 0)
{
if (x_3 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_1);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec_ref(x_14);
x_17 = l_Lean_Meta_intro1Core(x_15, x_9, x_4, x_5, x_6, x_7, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_14, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_14, 1);
lean_inc(x_19);
lean_dec_ref(x_14);
lean_inc(x_7);
lean_inc_ref(x_6);
lean_inc(x_5);
lean_inc_ref(x_4);
x_20 = l_Lean_MVarId_tryClear(x_18, x_1, x_4, x_5, x_6, x_7, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec_ref(x_20);
x_23 = l_Lean_Meta_intro1Core(x_21, x_9, x_4, x_5, x_6, x_7, x_22);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
x_24 = !lean_is_exclusive(x_20);
if (x_24 == 0)
{
return x_20;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_20, 0);
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_20);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
else
{
uint8_t x_28; 
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_14);
if (x_28 == 0)
{
return x_14;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_14, 0);
x_30 = lean_ctor_get(x_14, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_14);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_box(x_3);
lean_inc(x_1);
x_10 = lean_alloc_closure((void*)(l_Lean_Meta_heqToEq___lam__0___boxed), 8, 3);
lean_closure_set(x_10, 0, x_2);
lean_closure_set(x_10, 1, x_1);
lean_closure_set(x_10, 2, x_9);
x_11 = l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15___redArg(x_1, x_10, x_4, x_5, x_6, x_7, x_8);
return x_11;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
x_10 = l_Lean_Meta_heqToEq___lam__0(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_3);
x_10 = l_Lean_Meta_heqToEq(x_1, x_2, x_9, x_4, x_5, x_6, x_7, x_8);
return x_10;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_6, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec_ref(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec_ref(x_7);
x_15 = lean_array_uget(x_4, x_6);
lean_inc(x_11);
lean_inc_ref(x_10);
lean_inc(x_9);
lean_inc_ref(x_8);
lean_inc(x_1);
x_16 = l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0(x_1, x_15, x_8, x_9, x_10, x_11, x_12);
lean_dec_ref(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; size_t x_19; size_t x_20; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec_ref(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_6, x_19);
lean_inc_ref(x_2);
{
size_t _tmp_5 = x_20;
lean_object* _tmp_6 = x_2;
lean_object* _tmp_11 = x_18;
x_6 = _tmp_5;
x_7 = _tmp_6;
x_12 = _tmp_11;
}
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec_ref(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
lean_dec(x_23);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_17);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_3);
lean_ctor_set(x_16, 0, x_25);
return x_16;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_dec(x_16);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_17);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec_ref(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_16);
if (x_30 == 0)
{
return x_16;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_16, 0);
x_32 = lean_ctor_get(x_16, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_16);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, size_t x_5, size_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
uint8_t x_13; 
x_13 = lean_usize_dec_lt(x_6, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; 
lean_dec_ref(x_7);
x_15 = lean_array_uget(x_4, x_6);
lean_inc_ref(x_1);
lean_inc(x_11);
lean_inc_ref(x_10);
lean_inc(x_9);
lean_inc_ref(x_8);
x_16 = lean_apply_6(x_1, x_15, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; size_t x_19; size_t x_20; 
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec_ref(x_16);
x_19 = 1;
x_20 = lean_usize_add(x_6, x_19);
lean_inc_ref(x_2);
{
size_t _tmp_5 = x_20;
lean_object* _tmp_6 = x_2;
lean_object* _tmp_11 = x_18;
x_6 = _tmp_5;
x_7 = _tmp_6;
x_12 = _tmp_11;
}
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
lean_dec(x_23);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_17);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_3);
lean_ctor_set(x_16, 0, x_25);
return x_16;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_16, 1);
lean_inc(x_26);
lean_dec(x_16);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_17);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_3);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_26);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_30 = !lean_is_exclusive(x_16);
if (x_30 == 0)
{
return x_16;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_16, 0);
x_32 = lean_ctor_get(x_16, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_16);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_24; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_15 = x_2;
} else {
 lean_dec_ref(x_2);
 x_15 = lean_box(0);
}
x_16 = l_Lean_LocalDecl_isImplementationDetail(x_14);
if (x_16 == 0)
{
uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_54; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_68; lean_object* x_96; 
x_46 = 1;
x_96 = lean_ctor_get(x_14, 3);
lean_inc_ref(x_96);
x_68 = x_96;
goto block_95;
block_53:
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_box(x_46);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_47);
return x_52;
}
block_56:
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_14, 1);
lean_inc(x_55);
lean_dec(x_14);
x_47 = x_54;
x_48 = x_55;
goto block_53;
}
block_67:
{
if (x_60 == 0)
{
x_38 = x_57;
x_39 = x_58;
x_40 = x_4;
x_41 = x_59;
goto block_45;
}
else
{
lean_object* x_61; lean_object* x_62; uint8_t x_63; 
lean_inc(x_1);
lean_inc_ref(x_58);
x_61 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(x_58, x_1, x_4, x_59);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_unbox(x_62);
lean_dec(x_62);
if (x_63 == 0)
{
lean_object* x_64; 
lean_dec_ref(x_58);
lean_dec_ref(x_57);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_1);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec_ref(x_61);
x_54 = x_64;
goto block_56;
}
else
{
if (x_16 == 0)
{
lean_object* x_65; 
x_65 = lean_ctor_get(x_61, 1);
lean_inc(x_65);
lean_dec_ref(x_61);
x_38 = x_57;
x_39 = x_58;
x_40 = x_4;
x_41 = x_65;
goto block_45;
}
else
{
lean_object* x_66; 
lean_dec_ref(x_58);
lean_dec_ref(x_57);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_1);
x_66 = lean_ctor_get(x_61, 1);
lean_inc(x_66);
lean_dec_ref(x_61);
x_54 = x_66;
goto block_56;
}
}
}
}
block_95:
{
lean_object* x_69; 
lean_inc(x_4);
x_69 = l_Lean_Meta_matchEq_x3f(x_68, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
if (lean_obj_tag(x_70) == 0)
{
uint8_t x_71; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_69);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_69, 0);
lean_dec(x_72);
x_73 = lean_box(0);
lean_ctor_set(x_69, 0, x_73);
return x_69;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_69, 1);
lean_inc(x_74);
lean_dec(x_69);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_77 = lean_ctor_get(x_70, 0);
lean_inc(x_77);
lean_dec_ref(x_70);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_ctor_get(x_69, 1);
lean_inc(x_79);
lean_dec_ref(x_69);
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
lean_dec(x_78);
x_82 = l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(x_80, x_4, x_79);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec_ref(x_82);
x_85 = l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(x_81, x_4, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec_ref(x_85);
x_88 = l_Lean_Expr_isFVar(x_86);
if (x_88 == 0)
{
x_57 = x_86;
x_58 = x_83;
x_59 = x_87;
x_60 = x_88;
goto block_67;
}
else
{
lean_object* x_89; uint8_t x_90; 
x_89 = l_Lean_Expr_fvarId_x21(x_86);
x_90 = lean_name_eq(x_89, x_1);
lean_dec(x_89);
x_57 = x_86;
x_58 = x_83;
x_59 = x_87;
x_60 = x_90;
goto block_67;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_69);
if (x_91 == 0)
{
return x_69;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_69, 0);
x_93 = lean_ctor_get(x_69, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_69);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
else
{
lean_object* x_97; lean_object* x_98; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_1);
x_97 = lean_box(0);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_7);
return x_98;
}
block_23:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_box(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
if (lean_is_scalar(x_15)) {
 x_21 = lean_alloc_ctor(1, 1, 0);
} else {
 x_21 = x_15;
}
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_17);
return x_22;
}
block_26:
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_dec(x_14);
x_17 = x_24;
x_18 = x_25;
goto block_23;
}
block_37:
{
if (x_30 == 0)
{
lean_dec(x_28);
lean_dec_ref(x_27);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_1);
x_8 = x_29;
goto block_11;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(x_27, x_1, x_28, x_29);
lean_dec(x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec_ref(x_31);
x_24 = x_34;
goto block_26;
}
else
{
if (x_16 == 0)
{
lean_object* x_35; 
lean_dec(x_15);
lean_dec(x_14);
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec_ref(x_31);
x_8 = x_35;
goto block_11;
}
else
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec_ref(x_31);
x_24 = x_36;
goto block_26;
}
}
}
}
block_45:
{
uint8_t x_42; 
x_42 = l_Lean_Expr_isFVar(x_39);
if (x_42 == 0)
{
lean_dec_ref(x_39);
x_27 = x_38;
x_28 = x_40;
x_29 = x_41;
x_30 = x_42;
goto block_37;
}
else
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_Lean_Expr_fvarId_x21(x_39);
lean_dec_ref(x_39);
x_44 = lean_name_eq(x_43, x_1);
lean_dec(x_43);
x_27 = x_38;
x_28 = x_40;
x_29 = x_41;
x_30 = x_44;
goto block_37;
}
}
}
block_11:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
}
static lean_object* _init_l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; size_t x_12; lean_object* x_13; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_box(0);
x_10 = l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___closed__0;
x_11 = lean_array_size(x_8);
x_12 = 0;
x_13 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__0(x_1, x_10, x_9, x_8, x_11, x_12, x_10, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_13, 0);
lean_dec(x_17);
x_18 = lean_box(0);
lean_ctor_set(x_13, 0, x_18);
return x_13;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_dec(x_13);
x_20 = lean_box(0);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_13);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_13, 0);
lean_dec(x_23);
x_24 = lean_ctor_get(x_15, 0);
lean_inc(x_24);
lean_dec_ref(x_15);
lean_ctor_set(x_13, 0, x_24);
return x_13;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_dec(x_13);
x_26 = lean_ctor_get(x_15, 0);
lean_inc(x_26);
lean_dec_ref(x_15);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
return x_27;
}
}
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; size_t x_36; size_t x_37; lean_object* x_38; 
x_32 = lean_ctor_get(x_2, 0);
x_33 = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___lam__0), 7, 1);
lean_closure_set(x_33, 0, x_1);
x_34 = lean_box(0);
x_35 = l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___closed__0;
x_36 = lean_array_size(x_32);
x_37 = 0;
x_38 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__1(x_33, x_35, x_34, x_32, x_36, x_37, x_35, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
lean_dec(x_39);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_38);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_38, 0);
lean_dec(x_42);
x_43 = lean_box(0);
lean_ctor_set(x_38, 0, x_43);
return x_38;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_38, 1);
lean_inc(x_44);
lean_dec(x_38);
x_45 = lean_box(0);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
return x_46;
}
}
else
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_38);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; 
x_48 = lean_ctor_get(x_38, 0);
lean_dec(x_48);
x_49 = lean_ctor_get(x_40, 0);
lean_inc(x_49);
lean_dec_ref(x_40);
lean_ctor_set(x_38, 0, x_49);
return x_38;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_38, 1);
lean_inc(x_50);
lean_dec(x_38);
x_51 = lean_ctor_get(x_40, 0);
lean_inc(x_51);
lean_dec_ref(x_40);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
return x_52;
}
}
}
else
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_38);
if (x_53 == 0)
{
return x_38;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_38, 0);
x_55 = lean_ctor_get(x_38, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_38);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_24; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 x_15 = x_2;
} else {
 lean_dec_ref(x_2);
 x_15 = lean_box(0);
}
x_16 = l_Lean_LocalDecl_isImplementationDetail(x_14);
if (x_16 == 0)
{
uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_54; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_68; lean_object* x_96; 
x_46 = 1;
x_96 = lean_ctor_get(x_14, 3);
lean_inc_ref(x_96);
x_68 = x_96;
goto block_95;
block_53:
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_box(x_46);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_47);
return x_52;
}
block_56:
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_14, 1);
lean_inc(x_55);
lean_dec(x_14);
x_47 = x_54;
x_48 = x_55;
goto block_53;
}
block_67:
{
if (x_60 == 0)
{
x_38 = x_58;
x_39 = x_59;
x_40 = x_4;
x_41 = x_57;
goto block_45;
}
else
{
lean_object* x_61; lean_object* x_62; uint8_t x_63; 
lean_inc(x_1);
lean_inc_ref(x_58);
x_61 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(x_58, x_1, x_4, x_57);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_unbox(x_62);
lean_dec(x_62);
if (x_63 == 0)
{
lean_object* x_64; 
lean_dec_ref(x_59);
lean_dec_ref(x_58);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_1);
x_64 = lean_ctor_get(x_61, 1);
lean_inc(x_64);
lean_dec_ref(x_61);
x_54 = x_64;
goto block_56;
}
else
{
if (x_16 == 0)
{
lean_object* x_65; 
x_65 = lean_ctor_get(x_61, 1);
lean_inc(x_65);
lean_dec_ref(x_61);
x_38 = x_58;
x_39 = x_59;
x_40 = x_4;
x_41 = x_65;
goto block_45;
}
else
{
lean_object* x_66; 
lean_dec_ref(x_59);
lean_dec_ref(x_58);
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_1);
x_66 = lean_ctor_get(x_61, 1);
lean_inc(x_66);
lean_dec_ref(x_61);
x_54 = x_66;
goto block_56;
}
}
}
}
block_95:
{
lean_object* x_69; 
lean_inc(x_4);
x_69 = l_Lean_Meta_matchEq_x3f(x_68, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; 
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
if (lean_obj_tag(x_70) == 0)
{
uint8_t x_71; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_1);
x_71 = !lean_is_exclusive(x_69);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
x_72 = lean_ctor_get(x_69, 0);
lean_dec(x_72);
x_73 = lean_box(0);
lean_ctor_set(x_69, 0, x_73);
return x_69;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_69, 1);
lean_inc(x_74);
lean_dec(x_69);
x_75 = lean_box(0);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_77 = lean_ctor_get(x_70, 0);
lean_inc(x_77);
lean_dec_ref(x_70);
x_78 = lean_ctor_get(x_77, 1);
lean_inc(x_78);
lean_dec(x_77);
x_79 = lean_ctor_get(x_69, 1);
lean_inc(x_79);
lean_dec_ref(x_69);
x_80 = lean_ctor_get(x_78, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_78, 1);
lean_inc(x_81);
lean_dec(x_78);
x_82 = l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(x_80, x_4, x_79);
x_83 = lean_ctor_get(x_82, 0);
lean_inc(x_83);
x_84 = lean_ctor_get(x_82, 1);
lean_inc(x_84);
lean_dec_ref(x_82);
x_85 = l_Lean_instantiateMVars___at___Lean_Meta_substCore_spec__0___redArg(x_81, x_4, x_84);
x_86 = lean_ctor_get(x_85, 0);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 1);
lean_inc(x_87);
lean_dec_ref(x_85);
x_88 = l_Lean_Expr_isFVar(x_86);
if (x_88 == 0)
{
x_57 = x_87;
x_58 = x_83;
x_59 = x_86;
x_60 = x_88;
goto block_67;
}
else
{
lean_object* x_89; uint8_t x_90; 
x_89 = l_Lean_Expr_fvarId_x21(x_86);
x_90 = lean_name_eq(x_89, x_1);
lean_dec(x_89);
x_57 = x_87;
x_58 = x_83;
x_59 = x_86;
x_60 = x_90;
goto block_67;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_4);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_69);
if (x_91 == 0)
{
return x_69;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_69, 0);
x_93 = lean_ctor_get(x_69, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_69);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
else
{
lean_object* x_97; lean_object* x_98; 
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_1);
x_97 = lean_box(0);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_97);
lean_ctor_set(x_98, 1, x_7);
return x_98;
}
block_23:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_box(x_16);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
if (lean_is_scalar(x_15)) {
 x_21 = lean_alloc_ctor(1, 1, 0);
} else {
 x_21 = x_15;
}
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_17);
return x_22;
}
block_26:
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_14, 1);
lean_inc(x_25);
lean_dec(x_14);
x_17 = x_24;
x_18 = x_25;
goto block_23;
}
block_37:
{
if (x_30 == 0)
{
lean_dec_ref(x_29);
lean_dec(x_28);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_1);
x_8 = x_27;
goto block_11;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg(x_29, x_1, x_28, x_27);
lean_dec(x_28);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec_ref(x_31);
x_24 = x_34;
goto block_26;
}
else
{
if (x_16 == 0)
{
lean_object* x_35; 
lean_dec(x_15);
lean_dec(x_14);
x_35 = lean_ctor_get(x_31, 1);
lean_inc(x_35);
lean_dec_ref(x_31);
x_8 = x_35;
goto block_11;
}
else
{
lean_object* x_36; 
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec_ref(x_31);
x_24 = x_36;
goto block_26;
}
}
}
}
block_45:
{
uint8_t x_42; 
x_42 = l_Lean_Expr_isFVar(x_38);
if (x_42 == 0)
{
lean_dec_ref(x_38);
x_27 = x_41;
x_28 = x_40;
x_29 = x_39;
x_30 = x_42;
goto block_37;
}
else
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_Lean_Expr_fvarId_x21(x_38);
lean_dec_ref(x_38);
x_44 = lean_name_eq(x_43, x_1);
lean_dec(x_43);
x_27 = x_41;
x_28 = x_40;
x_29 = x_39;
x_30 = x_44;
goto block_37;
}
}
}
block_11:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_1);
x_10 = l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec_ref(x_10);
x_13 = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0___lam__0), 7, 1);
lean_closure_set(x_13, 0, x_1);
x_14 = lean_box(0);
x_15 = l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___closed__0;
x_16 = lean_array_size(x_9);
x_17 = 0;
x_18 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__1(x_13, x_15, x_14, x_9, x_16, x_17, x_15, x_3, x_4, x_5, x_6, x_12);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_18, 0);
lean_dec(x_22);
lean_ctor_set(x_18, 0, x_11);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_11);
lean_ctor_set(x_24, 1, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_18);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_18, 0);
lean_dec(x_26);
x_27 = lean_ctor_get(x_20, 0);
lean_inc(x_27);
lean_dec_ref(x_20);
lean_ctor_set(x_18, 0, x_27);
return x_18;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_18, 1);
lean_inc(x_28);
lean_dec(x_18);
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
lean_dec_ref(x_20);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
}
else
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_18);
if (x_31 == 0)
{
return x_18;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_dec_ref(x_11);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_10;
}
}
else
{
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_1);
return x_10;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_2, 1);
x_9 = l_Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("did not find equation for eliminating '", 39, 39);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substVar___lam__0___closed__0;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("variable '", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substVar___lam__0___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("' is a let-declaration", 22, 22);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_substVar___lam__0___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc_ref(x_3);
lean_inc(x_1);
x_8 = l_Lean_FVarId_getDecl___redArg(x_1, x_3, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec_ref(x_8);
x_11 = 0;
x_12 = l_Lean_LocalDecl_isLet(x_9, x_11);
lean_dec(x_9);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_3, 2);
lean_inc_ref(x_13);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_1);
x_14 = l_Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0(x_1, x_13, x_3, x_4, x_5, x_6, x_10);
lean_dec_ref(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec_ref(x_14);
x_17 = l_Lean_Meta_substCore___lam__2___closed__5;
x_18 = l_Lean_Meta_substVar___lam__0___closed__1;
x_19 = l_Lean_Expr_fvar___override(x_1);
x_20 = l_Lean_MessageData_ofExpr(x_19);
x_21 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_21, 0, x_18);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_Meta_substCore___lam__2___closed__14;
x_23 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_Meta_throwTacticEx___redArg(x_17, x_2, x_24, x_3, x_4, x_5, x_6, x_16);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; uint8_t x_32; lean_object* x_33; 
lean_dec(x_1);
x_26 = lean_ctor_get(x_15, 0);
lean_inc(x_26);
lean_dec_ref(x_15);
x_27 = lean_ctor_get(x_14, 1);
lean_inc(x_27);
lean_dec_ref(x_14);
x_28 = lean_ctor_get(x_26, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_dec(x_26);
x_30 = lean_box(0);
x_31 = 1;
x_32 = lean_unbox(x_29);
lean_dec(x_29);
x_33 = l_Lean_Meta_substCore(x_2, x_28, x_32, x_30, x_31, x_31, x_3, x_4, x_5, x_6, x_27);
if (lean_obj_tag(x_33) == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_ctor_get(x_33, 0);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
lean_ctor_set(x_33, 0, x_36);
return x_33;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_33, 0);
x_38 = lean_ctor_get(x_33, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_33);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
return x_40;
}
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_33);
if (x_41 == 0)
{
return x_33;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_33, 0);
x_43 = lean_ctor_get(x_33, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_33);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_14);
if (x_45 == 0)
{
return x_14;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_14, 0);
x_47 = lean_ctor_get(x_14, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_14);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_49 = l_Lean_Meta_substCore___lam__2___closed__5;
x_50 = l_Lean_Meta_substVar___lam__0___closed__3;
x_51 = l_Lean_Expr_fvar___override(x_1);
x_52 = l_Lean_MessageData_ofExpr(x_51);
x_53 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Lean_Meta_substVar___lam__0___closed__5;
x_55 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = l_Lean_Meta_throwTacticEx___redArg(x_49, x_2, x_56, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
return x_57;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_57, 0);
x_60 = lean_ctor_get(x_57, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_57);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_8);
if (x_62 == 0)
{
return x_8;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_8, 0);
x_64 = lean_ctor_get(x_8, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_8);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_substVar___lam__0), 7, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15___redArg(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__0(x_1, x_2, x_3, x_4, x_13, x_14, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec_ref(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
size_t x_13; size_t x_14; lean_object* x_15; 
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = lean_unbox_usize(x_6);
lean_dec(x_6);
x_15 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0_spec__1(x_1, x_2, x_3, x_4, x_13, x_14, x_7, x_8, x_9, x_10, x_11, x_12);
lean_dec_ref(x_4);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec_ref(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec_ref(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec_ref(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_panic___at___Lean_Meta_subst_substEq_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_panic___at___Lean_Meta_substCore_spec__14___closed__0;
x_8 = lean_panic_fn(x_7, x_1);
x_9 = lean_apply_5(x_8, x_2, x_3, x_4, x_5, x_6);
return x_9;
}
}
static lean_object* _init_l_Lean_Meta_subst_substEq___lam__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean.Meta.subst.substEq", 23, 23);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_subst_substEq___lam__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Meta_substCore___lam__1___closed__9;
x_2 = lean_unsigned_to_nat(55u);
x_3 = lean_unsigned_to_nat(191u);
x_4 = l_Lean_Meta_subst_substEq___lam__0___closed__0;
x_5 = l_Lean_Meta_substCore___lam__1___closed__7;
x_6 = l_mkPanicMessageWithDecl(x_5, x_4, x_3, x_2, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Meta_subst_substEq___lam__0___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("invalid equality proof, it is not of the form (x = t) or (t = x)", 64, 64);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_subst_substEq___lam__0___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_subst_substEq___lam__0___closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_substEq___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_47; uint8_t x_48; lean_object* x_63; 
lean_inc_ref(x_3);
lean_inc(x_1);
x_63 = l_Lean_FVarId_getDecl___redArg(x_1, x_3, x_5, x_6, x_7);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_75; uint8_t x_76; lean_object* x_77; lean_object* x_78; uint8_t x_79; uint8_t x_80; lean_object* x_102; lean_object* x_266; 
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec_ref(x_63);
x_266 = lean_ctor_get(x_64, 3);
lean_inc_ref(x_266);
x_102 = x_266;
goto block_265;
block_74:
{
lean_object* x_73; 
x_73 = lean_ctor_get(x_64, 2);
lean_inc(x_73);
lean_dec(x_64);
x_8 = x_66;
x_9 = x_71;
x_10 = x_67;
x_11 = x_69;
x_12 = x_72;
x_13 = x_68;
x_14 = x_70;
x_15 = x_73;
goto block_46;
}
block_101:
{
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; 
lean_dec_ref(x_77);
lean_dec_ref(x_75);
lean_dec(x_64);
x_81 = lean_box(0);
x_82 = l_Lean_Meta_substCore(x_2, x_1, x_80, x_81, x_76, x_76, x_3, x_4, x_5, x_6, x_78);
if (lean_obj_tag(x_82) == 0)
{
uint8_t x_83; 
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_82, 0);
x_85 = lean_ctor_get(x_84, 1);
lean_inc(x_85);
lean_dec(x_84);
lean_ctor_set(x_82, 0, x_85);
return x_82;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_86 = lean_ctor_get(x_82, 0);
x_87 = lean_ctor_get(x_82, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_82);
x_88 = lean_ctor_get(x_86, 1);
lean_inc(x_88);
lean_dec(x_86);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_87);
return x_89;
}
}
else
{
uint8_t x_90; 
x_90 = !lean_is_exclusive(x_82);
if (x_90 == 0)
{
return x_82;
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get(x_82, 0);
x_92 = lean_ctor_get(x_82, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_82);
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_91);
lean_ctor_set(x_93, 1, x_92);
return x_93;
}
}
}
else
{
lean_object* x_94; 
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
x_94 = l_Lean_Meta_mkEq(x_75, x_77, x_3, x_4, x_5, x_6, x_78);
if (lean_obj_tag(x_94) == 0)
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec_ref(x_94);
x_66 = x_95;
x_67 = x_79;
x_68 = x_3;
x_69 = x_4;
x_70 = x_5;
x_71 = x_6;
x_72 = x_96;
goto block_74;
}
else
{
uint8_t x_97; 
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_94);
if (x_97 == 0)
{
return x_94;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_94, 0);
x_99 = lean_ctor_get(x_94, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_94);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
}
block_265:
{
lean_object* x_103; 
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc_ref(x_102);
x_103 = l_Lean_Meta_matchEq_x3f(x_102, x_3, x_4, x_5, x_6, x_65);
if (lean_obj_tag(x_103) == 0)
{
lean_object* x_104; 
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
lean_dec_ref(x_102);
lean_dec(x_64);
lean_dec(x_2);
lean_dec(x_1);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec_ref(x_103);
x_106 = l_Lean_Meta_subst_substEq___lam__0___closed__1;
x_107 = l_panic___at___Lean_Meta_subst_substEq_spec__0(x_106, x_3, x_4, x_5, x_6, x_105);
return x_107;
}
else
{
uint8_t x_108; 
x_108 = !lean_is_exclusive(x_104);
if (x_108 == 0)
{
lean_object* x_109; uint8_t x_110; 
x_109 = lean_ctor_get(x_104, 0);
x_110 = !lean_is_exclusive(x_109);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; 
x_111 = lean_ctor_get(x_109, 1);
x_112 = lean_ctor_get(x_109, 0);
lean_dec(x_112);
x_113 = lean_ctor_get(x_103, 1);
lean_inc(x_113);
lean_dec_ref(x_103);
x_114 = !lean_is_exclusive(x_111);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; 
x_115 = lean_ctor_get(x_111, 0);
x_116 = lean_ctor_get(x_111, 1);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_116);
x_117 = lean_whnf(x_116, x_3, x_4, x_5, x_6, x_113);
if (lean_obj_tag(x_117) == 0)
{
lean_object* x_118; lean_object* x_119; uint8_t x_120; uint8_t x_121; 
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
lean_dec_ref(x_117);
x_120 = l_Lean_Expr_isFVar(x_118);
x_121 = 1;
if (x_120 == 0)
{
lean_object* x_122; 
lean_dec(x_118);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_115);
x_122 = lean_whnf(x_115, x_3, x_4, x_5, x_6, x_119);
if (lean_obj_tag(x_122) == 0)
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; 
x_123 = lean_ctor_get(x_122, 0);
lean_inc(x_123);
x_124 = lean_ctor_get(x_122, 1);
lean_inc(x_124);
lean_dec_ref(x_122);
x_125 = l_Lean_Expr_isFVar(x_123);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_123);
lean_dec(x_116);
lean_dec(x_115);
lean_dec(x_64);
lean_dec(x_1);
x_126 = l_Lean_Meta_substCore___lam__2___closed__5;
x_127 = l_Lean_Meta_subst_substEq___lam__0___closed__3;
x_128 = l_Lean_indentExpr(x_102);
lean_ctor_set_tag(x_111, 7);
lean_ctor_set(x_111, 1, x_128);
lean_ctor_set(x_111, 0, x_127);
x_129 = l_Lean_Meta_substCore___lam__1___closed__4;
lean_ctor_set_tag(x_109, 7);
lean_ctor_set(x_109, 1, x_129);
lean_ctor_set(x_109, 0, x_111);
x_130 = l_Lean_Meta_throwTacticEx___redArg(x_126, x_2, x_104, x_3, x_4, x_5, x_6, x_124);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
return x_130;
}
else
{
uint8_t x_131; 
lean_free_object(x_111);
lean_free_object(x_109);
lean_free_object(x_104);
lean_dec_ref(x_102);
x_131 = lean_expr_eqv(x_115, x_123);
lean_dec(x_115);
if (x_131 == 0)
{
x_75 = x_123;
x_76 = x_121;
x_77 = x_116;
x_78 = x_124;
x_79 = x_120;
x_80 = x_125;
goto block_101;
}
else
{
x_75 = x_123;
x_76 = x_121;
x_77 = x_116;
x_78 = x_124;
x_79 = x_120;
x_80 = x_120;
goto block_101;
}
}
}
else
{
uint8_t x_132; 
lean_free_object(x_111);
lean_dec(x_116);
lean_dec(x_115);
lean_free_object(x_109);
lean_free_object(x_104);
lean_dec_ref(x_102);
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_132 = !lean_is_exclusive(x_122);
if (x_132 == 0)
{
return x_122;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = lean_ctor_get(x_122, 0);
x_134 = lean_ctor_get(x_122, 1);
lean_inc(x_134);
lean_inc(x_133);
lean_dec(x_122);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_133);
lean_ctor_set(x_135, 1, x_134);
return x_135;
}
}
}
else
{
uint8_t x_136; 
lean_free_object(x_111);
lean_free_object(x_109);
lean_free_object(x_104);
lean_dec_ref(x_102);
x_136 = lean_expr_eqv(x_116, x_118);
lean_dec(x_116);
if (x_136 == 0)
{
if (x_120 == 0)
{
lean_dec(x_118);
lean_dec(x_115);
lean_dec(x_64);
x_47 = x_119;
x_48 = x_121;
goto block_62;
}
else
{
lean_object* x_137; 
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
x_137 = l_Lean_Meta_mkEq(x_115, x_118, x_3, x_4, x_5, x_6, x_119);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; lean_object* x_139; 
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
lean_dec_ref(x_137);
x_66 = x_138;
x_67 = x_121;
x_68 = x_3;
x_69 = x_4;
x_70 = x_5;
x_71 = x_6;
x_72 = x_139;
goto block_74;
}
else
{
uint8_t x_140; 
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_140 = !lean_is_exclusive(x_137);
if (x_140 == 0)
{
return x_137;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_137, 0);
x_142 = lean_ctor_get(x_137, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_137);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
}
else
{
lean_dec(x_118);
lean_dec(x_115);
lean_dec(x_64);
x_47 = x_119;
x_48 = x_121;
goto block_62;
}
}
}
else
{
uint8_t x_144; 
lean_free_object(x_111);
lean_dec(x_116);
lean_dec(x_115);
lean_free_object(x_109);
lean_free_object(x_104);
lean_dec_ref(x_102);
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_144 = !lean_is_exclusive(x_117);
if (x_144 == 0)
{
return x_117;
}
else
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
x_145 = lean_ctor_get(x_117, 0);
x_146 = lean_ctor_get(x_117, 1);
lean_inc(x_146);
lean_inc(x_145);
lean_dec(x_117);
x_147 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_147, 0, x_145);
lean_ctor_set(x_147, 1, x_146);
return x_147;
}
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_111, 0);
x_149 = lean_ctor_get(x_111, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_111);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_149);
x_150 = lean_whnf(x_149, x_3, x_4, x_5, x_6, x_113);
if (lean_obj_tag(x_150) == 0)
{
lean_object* x_151; lean_object* x_152; uint8_t x_153; uint8_t x_154; 
x_151 = lean_ctor_get(x_150, 0);
lean_inc(x_151);
x_152 = lean_ctor_get(x_150, 1);
lean_inc(x_152);
lean_dec_ref(x_150);
x_153 = l_Lean_Expr_isFVar(x_151);
x_154 = 1;
if (x_153 == 0)
{
lean_object* x_155; 
lean_dec(x_151);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_148);
x_155 = lean_whnf(x_148, x_3, x_4, x_5, x_6, x_152);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec_ref(x_155);
x_158 = l_Lean_Expr_isFVar(x_156);
if (x_158 == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; 
lean_dec(x_156);
lean_dec(x_149);
lean_dec(x_148);
lean_dec(x_64);
lean_dec(x_1);
x_159 = l_Lean_Meta_substCore___lam__2___closed__5;
x_160 = l_Lean_Meta_subst_substEq___lam__0___closed__3;
x_161 = l_Lean_indentExpr(x_102);
x_162 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_162, 0, x_160);
lean_ctor_set(x_162, 1, x_161);
x_163 = l_Lean_Meta_substCore___lam__1___closed__4;
lean_ctor_set_tag(x_109, 7);
lean_ctor_set(x_109, 1, x_163);
lean_ctor_set(x_109, 0, x_162);
x_164 = l_Lean_Meta_throwTacticEx___redArg(x_159, x_2, x_104, x_3, x_4, x_5, x_6, x_157);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
return x_164;
}
else
{
uint8_t x_165; 
lean_free_object(x_109);
lean_free_object(x_104);
lean_dec_ref(x_102);
x_165 = lean_expr_eqv(x_148, x_156);
lean_dec(x_148);
if (x_165 == 0)
{
x_75 = x_156;
x_76 = x_154;
x_77 = x_149;
x_78 = x_157;
x_79 = x_153;
x_80 = x_158;
goto block_101;
}
else
{
x_75 = x_156;
x_76 = x_154;
x_77 = x_149;
x_78 = x_157;
x_79 = x_153;
x_80 = x_153;
goto block_101;
}
}
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_149);
lean_dec(x_148);
lean_free_object(x_109);
lean_free_object(x_104);
lean_dec_ref(x_102);
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_166 = lean_ctor_get(x_155, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_155, 1);
lean_inc(x_167);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_168 = x_155;
} else {
 lean_dec_ref(x_155);
 x_168 = lean_box(0);
}
if (lean_is_scalar(x_168)) {
 x_169 = lean_alloc_ctor(1, 2, 0);
} else {
 x_169 = x_168;
}
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_167);
return x_169;
}
}
else
{
uint8_t x_170; 
lean_free_object(x_109);
lean_free_object(x_104);
lean_dec_ref(x_102);
x_170 = lean_expr_eqv(x_149, x_151);
lean_dec(x_149);
if (x_170 == 0)
{
if (x_153 == 0)
{
lean_dec(x_151);
lean_dec(x_148);
lean_dec(x_64);
x_47 = x_152;
x_48 = x_154;
goto block_62;
}
else
{
lean_object* x_171; 
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
x_171 = l_Lean_Meta_mkEq(x_148, x_151, x_3, x_4, x_5, x_6, x_152);
if (lean_obj_tag(x_171) == 0)
{
lean_object* x_172; lean_object* x_173; 
x_172 = lean_ctor_get(x_171, 0);
lean_inc(x_172);
x_173 = lean_ctor_get(x_171, 1);
lean_inc(x_173);
lean_dec_ref(x_171);
x_66 = x_172;
x_67 = x_154;
x_68 = x_3;
x_69 = x_4;
x_70 = x_5;
x_71 = x_6;
x_72 = x_173;
goto block_74;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_174 = lean_ctor_get(x_171, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_171, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_171)) {
 lean_ctor_release(x_171, 0);
 lean_ctor_release(x_171, 1);
 x_176 = x_171;
} else {
 lean_dec_ref(x_171);
 x_176 = lean_box(0);
}
if (lean_is_scalar(x_176)) {
 x_177 = lean_alloc_ctor(1, 2, 0);
} else {
 x_177 = x_176;
}
lean_ctor_set(x_177, 0, x_174);
lean_ctor_set(x_177, 1, x_175);
return x_177;
}
}
}
else
{
lean_dec(x_151);
lean_dec(x_148);
lean_dec(x_64);
x_47 = x_152;
x_48 = x_154;
goto block_62;
}
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_149);
lean_dec(x_148);
lean_free_object(x_109);
lean_free_object(x_104);
lean_dec_ref(x_102);
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_178 = lean_ctor_get(x_150, 0);
lean_inc(x_178);
x_179 = lean_ctor_get(x_150, 1);
lean_inc(x_179);
if (lean_is_exclusive(x_150)) {
 lean_ctor_release(x_150, 0);
 lean_ctor_release(x_150, 1);
 x_180 = x_150;
} else {
 lean_dec_ref(x_150);
 x_180 = lean_box(0);
}
if (lean_is_scalar(x_180)) {
 x_181 = lean_alloc_ctor(1, 2, 0);
} else {
 x_181 = x_180;
}
lean_ctor_set(x_181, 0, x_178);
lean_ctor_set(x_181, 1, x_179);
return x_181;
}
}
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_182 = lean_ctor_get(x_109, 1);
lean_inc(x_182);
lean_dec(x_109);
x_183 = lean_ctor_get(x_103, 1);
lean_inc(x_183);
lean_dec_ref(x_103);
x_184 = lean_ctor_get(x_182, 0);
lean_inc(x_184);
x_185 = lean_ctor_get(x_182, 1);
lean_inc(x_185);
if (lean_is_exclusive(x_182)) {
 lean_ctor_release(x_182, 0);
 lean_ctor_release(x_182, 1);
 x_186 = x_182;
} else {
 lean_dec_ref(x_182);
 x_186 = lean_box(0);
}
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_185);
x_187 = lean_whnf(x_185, x_3, x_4, x_5, x_6, x_183);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; uint8_t x_190; uint8_t x_191; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec_ref(x_187);
x_190 = l_Lean_Expr_isFVar(x_188);
x_191 = 1;
if (x_190 == 0)
{
lean_object* x_192; 
lean_dec(x_188);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_184);
x_192 = lean_whnf(x_184, x_3, x_4, x_5, x_6, x_189);
if (lean_obj_tag(x_192) == 0)
{
lean_object* x_193; lean_object* x_194; uint8_t x_195; 
x_193 = lean_ctor_get(x_192, 0);
lean_inc(x_193);
x_194 = lean_ctor_get(x_192, 1);
lean_inc(x_194);
lean_dec_ref(x_192);
x_195 = l_Lean_Expr_isFVar(x_193);
if (x_195 == 0)
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
lean_dec(x_193);
lean_dec(x_185);
lean_dec(x_184);
lean_dec(x_64);
lean_dec(x_1);
x_196 = l_Lean_Meta_substCore___lam__2___closed__5;
x_197 = l_Lean_Meta_subst_substEq___lam__0___closed__3;
x_198 = l_Lean_indentExpr(x_102);
if (lean_is_scalar(x_186)) {
 x_199 = lean_alloc_ctor(7, 2, 0);
} else {
 x_199 = x_186;
 lean_ctor_set_tag(x_199, 7);
}
lean_ctor_set(x_199, 0, x_197);
lean_ctor_set(x_199, 1, x_198);
x_200 = l_Lean_Meta_substCore___lam__1___closed__4;
x_201 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_201, 0, x_199);
lean_ctor_set(x_201, 1, x_200);
lean_ctor_set(x_104, 0, x_201);
x_202 = l_Lean_Meta_throwTacticEx___redArg(x_196, x_2, x_104, x_3, x_4, x_5, x_6, x_194);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
return x_202;
}
else
{
uint8_t x_203; 
lean_dec(x_186);
lean_free_object(x_104);
lean_dec_ref(x_102);
x_203 = lean_expr_eqv(x_184, x_193);
lean_dec(x_184);
if (x_203 == 0)
{
x_75 = x_193;
x_76 = x_191;
x_77 = x_185;
x_78 = x_194;
x_79 = x_190;
x_80 = x_195;
goto block_101;
}
else
{
x_75 = x_193;
x_76 = x_191;
x_77 = x_185;
x_78 = x_194;
x_79 = x_190;
x_80 = x_190;
goto block_101;
}
}
}
else
{
lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_184);
lean_free_object(x_104);
lean_dec_ref(x_102);
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_204 = lean_ctor_get(x_192, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_192, 1);
lean_inc(x_205);
if (lean_is_exclusive(x_192)) {
 lean_ctor_release(x_192, 0);
 lean_ctor_release(x_192, 1);
 x_206 = x_192;
} else {
 lean_dec_ref(x_192);
 x_206 = lean_box(0);
}
if (lean_is_scalar(x_206)) {
 x_207 = lean_alloc_ctor(1, 2, 0);
} else {
 x_207 = x_206;
}
lean_ctor_set(x_207, 0, x_204);
lean_ctor_set(x_207, 1, x_205);
return x_207;
}
}
else
{
uint8_t x_208; 
lean_dec(x_186);
lean_free_object(x_104);
lean_dec_ref(x_102);
x_208 = lean_expr_eqv(x_185, x_188);
lean_dec(x_185);
if (x_208 == 0)
{
if (x_190 == 0)
{
lean_dec(x_188);
lean_dec(x_184);
lean_dec(x_64);
x_47 = x_189;
x_48 = x_191;
goto block_62;
}
else
{
lean_object* x_209; 
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
x_209 = l_Lean_Meta_mkEq(x_184, x_188, x_3, x_4, x_5, x_6, x_189);
if (lean_obj_tag(x_209) == 0)
{
lean_object* x_210; lean_object* x_211; 
x_210 = lean_ctor_get(x_209, 0);
lean_inc(x_210);
x_211 = lean_ctor_get(x_209, 1);
lean_inc(x_211);
lean_dec_ref(x_209);
x_66 = x_210;
x_67 = x_191;
x_68 = x_3;
x_69 = x_4;
x_70 = x_5;
x_71 = x_6;
x_72 = x_211;
goto block_74;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_212 = lean_ctor_get(x_209, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_209, 1);
lean_inc(x_213);
if (lean_is_exclusive(x_209)) {
 lean_ctor_release(x_209, 0);
 lean_ctor_release(x_209, 1);
 x_214 = x_209;
} else {
 lean_dec_ref(x_209);
 x_214 = lean_box(0);
}
if (lean_is_scalar(x_214)) {
 x_215 = lean_alloc_ctor(1, 2, 0);
} else {
 x_215 = x_214;
}
lean_ctor_set(x_215, 0, x_212);
lean_ctor_set(x_215, 1, x_213);
return x_215;
}
}
}
else
{
lean_dec(x_188);
lean_dec(x_184);
lean_dec(x_64);
x_47 = x_189;
x_48 = x_191;
goto block_62;
}
}
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
lean_dec(x_186);
lean_dec(x_185);
lean_dec(x_184);
lean_free_object(x_104);
lean_dec_ref(x_102);
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_216 = lean_ctor_get(x_187, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_187, 1);
lean_inc(x_217);
if (lean_is_exclusive(x_187)) {
 lean_ctor_release(x_187, 0);
 lean_ctor_release(x_187, 1);
 x_218 = x_187;
} else {
 lean_dec_ref(x_187);
 x_218 = lean_box(0);
}
if (lean_is_scalar(x_218)) {
 x_219 = lean_alloc_ctor(1, 2, 0);
} else {
 x_219 = x_218;
}
lean_ctor_set(x_219, 0, x_216);
lean_ctor_set(x_219, 1, x_217);
return x_219;
}
}
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_220 = lean_ctor_get(x_104, 0);
lean_inc(x_220);
lean_dec(x_104);
x_221 = lean_ctor_get(x_220, 1);
lean_inc(x_221);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 lean_ctor_release(x_220, 1);
 x_222 = x_220;
} else {
 lean_dec_ref(x_220);
 x_222 = lean_box(0);
}
x_223 = lean_ctor_get(x_103, 1);
lean_inc(x_223);
lean_dec_ref(x_103);
x_224 = lean_ctor_get(x_221, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_221, 1);
lean_inc(x_225);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_226 = x_221;
} else {
 lean_dec_ref(x_221);
 x_226 = lean_box(0);
}
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_225);
x_227 = lean_whnf(x_225, x_3, x_4, x_5, x_6, x_223);
if (lean_obj_tag(x_227) == 0)
{
lean_object* x_228; lean_object* x_229; uint8_t x_230; uint8_t x_231; 
x_228 = lean_ctor_get(x_227, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_227, 1);
lean_inc(x_229);
lean_dec_ref(x_227);
x_230 = l_Lean_Expr_isFVar(x_228);
x_231 = 1;
if (x_230 == 0)
{
lean_object* x_232; 
lean_dec(x_228);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_224);
x_232 = lean_whnf(x_224, x_3, x_4, x_5, x_6, x_229);
if (lean_obj_tag(x_232) == 0)
{
lean_object* x_233; lean_object* x_234; uint8_t x_235; 
x_233 = lean_ctor_get(x_232, 0);
lean_inc(x_233);
x_234 = lean_ctor_get(x_232, 1);
lean_inc(x_234);
lean_dec_ref(x_232);
x_235 = l_Lean_Expr_isFVar(x_233);
if (x_235 == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_233);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_64);
lean_dec(x_1);
x_236 = l_Lean_Meta_substCore___lam__2___closed__5;
x_237 = l_Lean_Meta_subst_substEq___lam__0___closed__3;
x_238 = l_Lean_indentExpr(x_102);
if (lean_is_scalar(x_226)) {
 x_239 = lean_alloc_ctor(7, 2, 0);
} else {
 x_239 = x_226;
 lean_ctor_set_tag(x_239, 7);
}
lean_ctor_set(x_239, 0, x_237);
lean_ctor_set(x_239, 1, x_238);
x_240 = l_Lean_Meta_substCore___lam__1___closed__4;
if (lean_is_scalar(x_222)) {
 x_241 = lean_alloc_ctor(7, 2, 0);
} else {
 x_241 = x_222;
 lean_ctor_set_tag(x_241, 7);
}
lean_ctor_set(x_241, 0, x_239);
lean_ctor_set(x_241, 1, x_240);
x_242 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_242, 0, x_241);
x_243 = l_Lean_Meta_throwTacticEx___redArg(x_236, x_2, x_242, x_3, x_4, x_5, x_6, x_234);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
return x_243;
}
else
{
uint8_t x_244; 
lean_dec(x_226);
lean_dec(x_222);
lean_dec_ref(x_102);
x_244 = lean_expr_eqv(x_224, x_233);
lean_dec(x_224);
if (x_244 == 0)
{
x_75 = x_233;
x_76 = x_231;
x_77 = x_225;
x_78 = x_234;
x_79 = x_230;
x_80 = x_235;
goto block_101;
}
else
{
x_75 = x_233;
x_76 = x_231;
x_77 = x_225;
x_78 = x_234;
x_79 = x_230;
x_80 = x_230;
goto block_101;
}
}
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_222);
lean_dec_ref(x_102);
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_245 = lean_ctor_get(x_232, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_232, 1);
lean_inc(x_246);
if (lean_is_exclusive(x_232)) {
 lean_ctor_release(x_232, 0);
 lean_ctor_release(x_232, 1);
 x_247 = x_232;
} else {
 lean_dec_ref(x_232);
 x_247 = lean_box(0);
}
if (lean_is_scalar(x_247)) {
 x_248 = lean_alloc_ctor(1, 2, 0);
} else {
 x_248 = x_247;
}
lean_ctor_set(x_248, 0, x_245);
lean_ctor_set(x_248, 1, x_246);
return x_248;
}
}
else
{
uint8_t x_249; 
lean_dec(x_226);
lean_dec(x_222);
lean_dec_ref(x_102);
x_249 = lean_expr_eqv(x_225, x_228);
lean_dec(x_225);
if (x_249 == 0)
{
if (x_230 == 0)
{
lean_dec(x_228);
lean_dec(x_224);
lean_dec(x_64);
x_47 = x_229;
x_48 = x_231;
goto block_62;
}
else
{
lean_object* x_250; 
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
x_250 = l_Lean_Meta_mkEq(x_224, x_228, x_3, x_4, x_5, x_6, x_229);
if (lean_obj_tag(x_250) == 0)
{
lean_object* x_251; lean_object* x_252; 
x_251 = lean_ctor_get(x_250, 0);
lean_inc(x_251);
x_252 = lean_ctor_get(x_250, 1);
lean_inc(x_252);
lean_dec_ref(x_250);
x_66 = x_251;
x_67 = x_231;
x_68 = x_3;
x_69 = x_4;
x_70 = x_5;
x_71 = x_6;
x_72 = x_252;
goto block_74;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_253 = lean_ctor_get(x_250, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_250, 1);
lean_inc(x_254);
if (lean_is_exclusive(x_250)) {
 lean_ctor_release(x_250, 0);
 lean_ctor_release(x_250, 1);
 x_255 = x_250;
} else {
 lean_dec_ref(x_250);
 x_255 = lean_box(0);
}
if (lean_is_scalar(x_255)) {
 x_256 = lean_alloc_ctor(1, 2, 0);
} else {
 x_256 = x_255;
}
lean_ctor_set(x_256, 0, x_253);
lean_ctor_set(x_256, 1, x_254);
return x_256;
}
}
}
else
{
lean_dec(x_228);
lean_dec(x_224);
lean_dec(x_64);
x_47 = x_229;
x_48 = x_231;
goto block_62;
}
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_222);
lean_dec_ref(x_102);
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_257 = lean_ctor_get(x_227, 0);
lean_inc(x_257);
x_258 = lean_ctor_get(x_227, 1);
lean_inc(x_258);
if (lean_is_exclusive(x_227)) {
 lean_ctor_release(x_227, 0);
 lean_ctor_release(x_227, 1);
 x_259 = x_227;
} else {
 lean_dec_ref(x_227);
 x_259 = lean_box(0);
}
if (lean_is_scalar(x_259)) {
 x_260 = lean_alloc_ctor(1, 2, 0);
} else {
 x_260 = x_259;
}
lean_ctor_set(x_260, 0, x_257);
lean_ctor_set(x_260, 1, x_258);
return x_260;
}
}
}
}
else
{
uint8_t x_261; 
lean_dec_ref(x_102);
lean_dec(x_64);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_261 = !lean_is_exclusive(x_103);
if (x_261 == 0)
{
return x_103;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_262 = lean_ctor_get(x_103, 0);
x_263 = lean_ctor_get(x_103, 1);
lean_inc(x_263);
lean_inc(x_262);
lean_dec(x_103);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_262);
lean_ctor_set(x_264, 1, x_263);
return x_264;
}
}
}
}
else
{
uint8_t x_267; 
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_267 = !lean_is_exclusive(x_63);
if (x_267 == 0)
{
return x_63;
}
else
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; 
x_268 = lean_ctor_get(x_63, 0);
x_269 = lean_ctor_get(x_63, 1);
lean_inc(x_269);
lean_inc(x_268);
lean_dec(x_63);
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_268);
lean_ctor_set(x_270, 1, x_269);
return x_270;
}
}
block_46:
{
lean_object* x_16; lean_object* x_17; 
lean_inc(x_1);
x_16 = l_Lean_Expr_fvar___override(x_1);
lean_inc(x_9);
lean_inc_ref(x_14);
lean_inc(x_11);
lean_inc_ref(x_13);
x_17 = l_Lean_MVarId_assert(x_2, x_15, x_8, x_16, x_13, x_11, x_14, x_9, x_12);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec_ref(x_17);
x_20 = 1;
lean_inc(x_9);
lean_inc_ref(x_14);
lean_inc(x_11);
lean_inc_ref(x_13);
x_21 = l_Lean_Meta_intro1Core(x_18, x_20, x_13, x_11, x_14, x_9, x_19);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec_ref(x_21);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
lean_inc(x_9);
lean_inc_ref(x_14);
lean_inc(x_11);
lean_inc_ref(x_13);
x_26 = l_Lean_MVarId_clear(x_25, x_1, x_13, x_11, x_14, x_9, x_23);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec_ref(x_26);
x_29 = lean_box(0);
x_30 = l_Lean_Meta_substCore(x_27, x_24, x_10, x_29, x_20, x_20, x_13, x_11, x_14, x_9, x_28);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_30, 0);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
lean_ctor_set(x_30, 0, x_33);
return x_30;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_30, 0);
x_35 = lean_ctor_get(x_30, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_30);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_30);
if (x_38 == 0)
{
return x_30;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_30, 0);
x_40 = lean_ctor_get(x_30, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_30);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
lean_dec(x_24);
lean_dec_ref(x_14);
lean_dec_ref(x_13);
lean_dec(x_11);
lean_dec(x_9);
return x_26;
}
}
else
{
uint8_t x_42; 
lean_dec_ref(x_14);
lean_dec_ref(x_13);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_21);
if (x_42 == 0)
{
return x_21;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_21, 0);
x_44 = lean_ctor_get(x_21, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_21);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_dec_ref(x_14);
lean_dec_ref(x_13);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_1);
return x_17;
}
}
block_62:
{
lean_object* x_49; lean_object* x_50; 
x_49 = lean_box(0);
x_50 = l_Lean_Meta_substCore(x_2, x_1, x_48, x_49, x_48, x_48, x_3, x_4, x_5, x_6, x_47);
if (lean_obj_tag(x_50) == 0)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_ctor_get(x_52, 1);
lean_inc(x_53);
lean_dec(x_52);
lean_ctor_set(x_50, 0, x_53);
return x_50;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_50, 0);
x_55 = lean_ctor_get(x_50, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_50);
x_56 = lean_ctor_get(x_54, 1);
lean_inc(x_56);
lean_dec(x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
else
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_50);
if (x_58 == 0)
{
return x_50;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_50, 0);
x_60 = lean_ctor_get(x_50, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_50);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_substEq(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_subst_substEq___lam__0), 7, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15___redArg(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc_ref(x_3);
lean_inc(x_1);
x_8 = l_Lean_FVarId_getType___redArg(x_1, x_3, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec_ref(x_8);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_9);
x_11 = l_Lean_Meta_matchEq_x3f(x_9, x_3, x_4, x_5, x_6, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec_ref(x_11);
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
x_14 = l_Lean_Meta_matchHEq_x3f(x_9, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec_ref(x_14);
x_17 = l_Lean_Meta_substVar(x_2, x_1, x_3, x_4, x_5, x_6, x_16);
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; 
lean_dec_ref(x_15);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec_ref(x_14);
x_19 = 1;
lean_inc(x_6);
lean_inc_ref(x_5);
lean_inc(x_4);
lean_inc_ref(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_20 = l_Lean_Meta_heqToEq(x_2, x_1, x_19, x_3, x_4, x_5, x_6, x_18);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec_ref(x_20);
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_name_eq(x_2, x_24);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_2);
lean_dec(x_1);
x_26 = l_Lean_Meta_subst(x_24, x_23, x_3, x_4, x_5, x_6, x_22);
return x_26;
}
else
{
lean_object* x_27; 
lean_dec(x_24);
lean_dec(x_23);
x_27 = l_Lean_Meta_substVar(x_2, x_1, x_3, x_4, x_5, x_6, x_22);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_20);
if (x_28 == 0)
{
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_20, 0);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_20);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_14);
if (x_32 == 0)
{
return x_14;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_14, 0);
x_34 = lean_ctor_get(x_14, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_14);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec_ref(x_12);
lean_dec(x_9);
x_36 = lean_ctor_get(x_11, 1);
lean_inc(x_36);
lean_dec_ref(x_11);
x_37 = l_Lean_Meta_subst_substEq(x_2, x_1, x_3, x_4, x_5, x_6, x_36);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_11);
if (x_38 == 0)
{
return x_11;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_11, 0);
x_40 = lean_ctor_get(x_11, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_11);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_dec(x_6);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_8);
if (x_42 == 0)
{
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
lean_inc(x_1);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_subst___lam__0), 7, 2);
lean_closure_set(x_8, 0, x_2);
lean_closure_set(x_8, 1, x_1);
x_9 = l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15___redArg(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___Lean_Meta_substVar_x3f_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_saveState___redArg(x_3, x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec_ref(x_7);
lean_inc(x_5);
lean_inc(x_3);
x_10 = lean_apply_5(x_1, x_2, x_3, x_4, x_5, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_31; 
x_18 = lean_ctor_get(x_10, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_10)) {
 lean_ctor_release(x_10, 0);
 lean_ctor_release(x_10, 1);
 x_20 = x_10;
} else {
 lean_dec_ref(x_10);
 x_20 = lean_box(0);
}
x_31 = l_Lean_Exception_isInterrupt(x_18);
if (x_31 == 0)
{
uint8_t x_32; 
x_32 = l_Lean_Exception_isRuntime(x_18);
x_21 = x_32;
goto block_30;
}
else
{
x_21 = x_31;
goto block_30;
}
block_30:
{
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
lean_dec(x_20);
lean_dec(x_18);
x_22 = l_Lean_Meta_SavedState_restore___redArg(x_8, x_3, x_5, x_19);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_8);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
x_25 = lean_box(0);
lean_ctor_set(x_22, 0, x_25);
return x_22;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_22, 1);
lean_inc(x_26);
lean_dec(x_22);
x_27 = lean_box(0);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_dec(x_8);
lean_dec(x_5);
lean_dec(x_3);
if (lean_is_scalar(x_20)) {
 x_29 = lean_alloc_ctor(1, 2, 0);
} else {
 x_29 = x_20;
}
lean_ctor_set(x_29, 0, x_18);
lean_ctor_set(x_29, 1, x_19);
return x_29;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___Lean_Meta_substVar_x3f_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_observing_x3f___at___Lean_Meta_substVar_x3f_spec__0___redArg(x_2, x_3, x_4, x_5, x_6, x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_substVar), 7, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = l_Lean_observing_x3f___at___Lean_Meta_substVar_x3f_spec__0___redArg(x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_subst), 7, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_2);
x_9 = l_Lean_observing_x3f___at___Lean_Meta_substVar_x3f_spec__0___redArg(x_8, x_3, x_4, x_5, x_6, x_7);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4, uint8_t x_5, uint8_t x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_box(x_3);
x_13 = lean_box(x_5);
x_14 = lean_box(x_6);
x_15 = lean_alloc_closure((void*)(l_Lean_Meta_substCore___boxed), 11, 6);
lean_closure_set(x_15, 0, x_1);
lean_closure_set(x_15, 1, x_2);
lean_closure_set(x_15, 2, x_12);
lean_closure_set(x_15, 3, x_4);
lean_closure_set(x_15, 4, x_13);
lean_closure_set(x_15, 5, x_14);
x_16 = l_Lean_observing_x3f___at___Lean_Meta_substVar_x3f_spec__0___redArg(x_15, x_7, x_8, x_9, x_10, x_11);
return x_16;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; uint8_t x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_unbox(x_3);
x_13 = lean_unbox(x_5);
x_14 = lean_unbox(x_6);
x_15 = l_Lean_Meta_substCore_x3f(x_1, x_2, x_12, x_4, x_13, x_14, x_7, x_8, x_9, x_10, x_11);
return x_15;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l_Lean_Meta_substVar_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
lean_ctor_set(x_8, 0, x_1);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_8, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec_ref(x_9);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
lean_dec_ref(x_9);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
else
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_8);
if (x_20 == 0)
{
return x_8;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_8, 0);
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_8);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_1);
x_8 = l_Lean_Meta_subst_x3f(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_8, 0);
lean_dec(x_11);
lean_ctor_set(x_8, 0, x_1);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_8, 1);
lean_inc(x_12);
lean_dec(x_8);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8_t x_14; 
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_8, 0);
lean_dec(x_15);
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec_ref(x_9);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_dec(x_8);
x_18 = lean_ctor_get(x_9, 0);
lean_inc(x_18);
lean_dec_ref(x_9);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
else
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_8);
if (x_20 == 0)
{
return x_8;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_8, 0);
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_8);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, size_t x_7, size_t x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
uint8_t x_15; 
x_15 = lean_usize_dec_lt(x_8, x_7);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_13);
lean_dec_ref(x_12);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_5);
lean_dec_ref(x_2);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_9);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_9, 1);
x_19 = lean_ctor_get(x_9, 0);
lean_dec(x_19);
x_20 = lean_array_uget(x_6, x_8);
lean_inc(x_13);
lean_inc_ref(x_12);
lean_inc(x_11);
lean_inc_ref(x_10);
lean_inc(x_18);
lean_inc_ref(x_2);
lean_inc(x_1);
x_21 = l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0(x_1, x_2, x_3, x_4, x_20, x_18, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
lean_dec(x_13);
lean_dec_ref(x_12);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_5);
lean_dec_ref(x_2);
lean_dec(x_1);
x_23 = !lean_is_exclusive(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 0);
lean_dec(x_24);
x_25 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_9, 0, x_25);
lean_ctor_set(x_21, 0, x_9);
return x_21;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_21, 1);
lean_inc(x_26);
lean_dec(x_21);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_9, 0, x_27);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_9);
lean_ctor_set(x_28, 1, x_26);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; 
lean_dec(x_18);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_dec_ref(x_21);
x_30 = lean_ctor_get(x_22, 0);
lean_inc(x_30);
lean_dec_ref(x_22);
lean_inc(x_5);
lean_ctor_set(x_9, 1, x_30);
lean_ctor_set(x_9, 0, x_5);
x_31 = 1;
x_32 = lean_usize_add(x_8, x_31);
x_8 = x_32;
x_14 = x_29;
goto _start;
}
}
else
{
uint8_t x_34; 
lean_free_object(x_9);
lean_dec(x_18);
lean_dec(x_13);
lean_dec_ref(x_12);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_5);
lean_dec_ref(x_2);
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_21);
if (x_34 == 0)
{
return x_21;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_21, 0);
x_36 = lean_ctor_get(x_21, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_21);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_9, 1);
lean_inc(x_38);
lean_dec(x_9);
x_39 = lean_array_uget(x_6, x_8);
lean_inc(x_13);
lean_inc_ref(x_12);
lean_inc(x_11);
lean_inc_ref(x_10);
lean_inc(x_38);
lean_inc_ref(x_2);
lean_inc(x_1);
x_40 = l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0(x_1, x_2, x_3, x_4, x_39, x_38, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_dec(x_13);
lean_dec_ref(x_12);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_5);
lean_dec_ref(x_2);
lean_dec(x_1);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_43 = x_40;
} else {
 lean_dec_ref(x_40);
 x_43 = lean_box(0);
}
x_44 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_44, 0, x_41);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_38);
if (lean_is_scalar(x_43)) {
 x_46 = lean_alloc_ctor(0, 2, 0);
} else {
 x_46 = x_43;
}
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_42);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; size_t x_50; size_t x_51; 
lean_dec(x_38);
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_dec_ref(x_40);
x_48 = lean_ctor_get(x_41, 0);
lean_inc(x_48);
lean_dec_ref(x_41);
lean_inc(x_5);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_5);
lean_ctor_set(x_49, 1, x_48);
x_50 = 1;
x_51 = lean_usize_add(x_8, x_50);
x_8 = x_51;
x_9 = x_49;
x_14 = x_47;
goto _start;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; 
lean_dec(x_38);
lean_dec(x_13);
lean_dec_ref(x_12);
lean_dec(x_11);
lean_dec_ref(x_10);
lean_dec(x_5);
lean_dec_ref(x_2);
lean_dec(x_1);
x_53 = lean_ctor_get(x_40, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_40, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_55 = x_40;
} else {
 lean_dec_ref(x_40);
 x_55 = lean_box(0);
}
if (lean_is_scalar(x_55)) {
 x_56 = lean_alloc_ctor(1, 2, 0);
} else {
 x_56 = x_55;
}
lean_ctor_set(x_56, 0, x_53);
lean_ctor_set(x_56, 1, x_54);
return x_56;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_5, x_4);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_6, 1);
x_16 = lean_ctor_get(x_6, 0);
lean_dec(x_16);
x_17 = lean_array_uget(x_3, x_5);
lean_inc_ref(x_1);
lean_inc(x_10);
lean_inc_ref(x_9);
lean_inc(x_8);
lean_inc_ref(x_7);
lean_inc(x_15);
x_18 = lean_apply_7(x_1, x_17, x_15, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_19);
lean_ctor_set(x_6, 0, x_22);
lean_ctor_set(x_18, 0, x_6);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_18, 1);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_6, 0, x_24);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_6);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; size_t x_28; size_t x_29; 
lean_dec(x_15);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_dec_ref(x_18);
x_27 = lean_ctor_get(x_19, 0);
lean_inc(x_27);
lean_dec_ref(x_19);
lean_inc(x_2);
lean_ctor_set(x_6, 1, x_27);
lean_ctor_set(x_6, 0, x_2);
x_28 = 1;
x_29 = lean_usize_add(x_5, x_28);
x_5 = x_29;
x_11 = x_26;
goto _start;
}
}
else
{
uint8_t x_31; 
lean_free_object(x_6);
lean_dec(x_15);
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_31 = !lean_is_exclusive(x_18);
if (x_31 == 0)
{
return x_18;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_18, 0);
x_33 = lean_ctor_get(x_18, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_18);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_6, 1);
lean_inc(x_35);
lean_dec(x_6);
x_36 = lean_array_uget(x_3, x_5);
lean_inc_ref(x_1);
lean_inc(x_10);
lean_inc_ref(x_9);
lean_inc(x_8);
lean_inc_ref(x_7);
lean_inc(x_35);
x_37 = lean_apply_7(x_1, x_36, x_35, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_40 = x_37;
} else {
 lean_dec_ref(x_37);
 x_40 = lean_box(0);
}
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_38);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_35);
if (lean_is_scalar(x_40)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_40;
}
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_39);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; size_t x_47; size_t x_48; 
lean_dec(x_35);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
lean_dec_ref(x_37);
x_45 = lean_ctor_get(x_38, 0);
lean_inc(x_45);
lean_dec_ref(x_38);
lean_inc(x_2);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_2);
lean_ctor_set(x_46, 1, x_45);
x_47 = 1;
x_48 = lean_usize_add(x_5, x_47);
x_5 = x_48;
x_6 = x_46;
x_11 = x_44;
goto _start;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_35);
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_50 = lean_ctor_get(x_37, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_37, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_37)) {
 lean_ctor_release(x_37, 0);
 lean_ctor_release(x_37, 1);
 x_52 = x_37;
} else {
 lean_dec_ref(x_37);
 x_52 = lean_box(0);
}
if (lean_is_scalar(x_52)) {
 x_53 = lean_alloc_ctor(1, 2, 0);
} else {
 x_53 = x_52;
}
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_51);
return x_53;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_2);
lean_dec(x_1);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_5);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_10);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec_ref(x_5);
x_37 = lean_ctor_get(x_4, 0);
lean_inc(x_37);
lean_dec_ref(x_4);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_11 = x_38;
goto block_34;
}
block_34:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_subst_x3f(x_1, x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_2);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec_ref(x_2);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_12, 0);
lean_dec(x_21);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_13);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_3);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_12, 0, x_24);
return x_12;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_dec(x_12);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_13);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_3);
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_25);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec_ref(x_2);
x_30 = !lean_is_exclusive(x_12);
if (x_30 == 0)
{
return x_12;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_12, 0);
x_32 = lean_ctor_get(x_12, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_12);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_5);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; size_t x_16; size_t x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_5, 0);
x_14 = lean_box(0);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_6);
x_16 = lean_array_size(x_13);
x_17 = 0;
x_18 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__0(x_1, x_2, x_3, x_4, x_14, x_13, x_16, x_17, x_15, x_7, x_8, x_9, x_10, x_11);
lean_dec_ref(x_13);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_18);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_18, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_19, 1);
lean_inc(x_23);
lean_dec(x_19);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_23);
lean_ctor_set(x_18, 0, x_5);
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 1);
lean_inc(x_24);
lean_dec(x_18);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
lean_ctor_set_tag(x_5, 1);
lean_ctor_set(x_5, 0, x_25);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_5);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
lean_dec(x_19);
lean_free_object(x_5);
x_27 = !lean_is_exclusive(x_18);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_18, 0);
lean_dec(x_28);
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
lean_dec_ref(x_20);
lean_ctor_set(x_18, 0, x_29);
return x_18;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_18, 1);
lean_inc(x_30);
lean_dec(x_18);
x_31 = lean_ctor_get(x_20, 0);
lean_inc(x_31);
lean_dec_ref(x_20);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_free_object(x_5);
x_33 = !lean_is_exclusive(x_18);
if (x_33 == 0)
{
return x_18;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_18, 0);
x_35 = lean_ctor_get(x_18, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_18);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; size_t x_40; size_t x_41; lean_object* x_42; 
x_37 = lean_ctor_get(x_5, 0);
lean_inc(x_37);
lean_dec(x_5);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_6);
x_40 = lean_array_size(x_37);
x_41 = 0;
x_42 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__0(x_1, x_2, x_3, x_4, x_38, x_37, x_40, x_41, x_39, x_7, x_8, x_9, x_10, x_11);
lean_dec_ref(x_37);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_43, 0);
lean_inc(x_44);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_46 = x_42;
} else {
 lean_dec_ref(x_42);
 x_46 = lean_box(0);
}
x_47 = lean_ctor_get(x_43, 1);
lean_inc(x_47);
lean_dec(x_43);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
if (lean_is_scalar(x_46)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_46;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_45);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_43);
x_50 = lean_ctor_get(x_42, 1);
lean_inc(x_50);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_51 = x_42;
} else {
 lean_dec_ref(x_42);
 x_51 = lean_box(0);
}
x_52 = lean_ctor_get(x_44, 0);
lean_inc(x_52);
lean_dec_ref(x_44);
if (lean_is_scalar(x_51)) {
 x_53 = lean_alloc_ctor(0, 2, 0);
} else {
 x_53 = x_51;
}
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_50);
return x_53;
}
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_54 = lean_ctor_get(x_42, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_42, 1);
lean_inc(x_55);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 lean_ctor_release(x_42, 1);
 x_56 = x_42;
} else {
 lean_dec_ref(x_42);
 x_56 = lean_box(0);
}
if (lean_is_scalar(x_56)) {
 x_57 = lean_alloc_ctor(1, 2, 0);
} else {
 x_57 = x_56;
}
lean_ctor_set(x_57, 0, x_54);
lean_ctor_set(x_57, 1, x_55);
return x_57;
}
}
}
else
{
uint8_t x_58; 
x_58 = !lean_is_exclusive(x_5);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; size_t x_63; size_t x_64; lean_object* x_65; 
x_59 = lean_ctor_get(x_5, 0);
x_60 = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0___lam__0), 10, 3);
lean_closure_set(x_60, 0, x_1);
lean_closure_set(x_60, 1, x_2);
lean_closure_set(x_60, 2, x_3);
x_61 = lean_box(0);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_6);
x_63 = lean_array_size(x_59);
x_64 = 0;
x_65 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(x_60, x_61, x_59, x_63, x_64, x_62, x_7, x_8, x_9, x_10, x_11);
lean_dec_ref(x_59);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
if (lean_obj_tag(x_67) == 0)
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_65);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; 
x_69 = lean_ctor_get(x_65, 0);
lean_dec(x_69);
x_70 = lean_ctor_get(x_66, 1);
lean_inc(x_70);
lean_dec(x_66);
lean_ctor_set(x_5, 0, x_70);
lean_ctor_set(x_65, 0, x_5);
return x_65;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_65, 1);
lean_inc(x_71);
lean_dec(x_65);
x_72 = lean_ctor_get(x_66, 1);
lean_inc(x_72);
lean_dec(x_66);
lean_ctor_set(x_5, 0, x_72);
x_73 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_73, 0, x_5);
lean_ctor_set(x_73, 1, x_71);
return x_73;
}
}
else
{
uint8_t x_74; 
lean_dec(x_66);
lean_free_object(x_5);
x_74 = !lean_is_exclusive(x_65);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_ctor_get(x_65, 0);
lean_dec(x_75);
x_76 = lean_ctor_get(x_67, 0);
lean_inc(x_76);
lean_dec_ref(x_67);
lean_ctor_set(x_65, 0, x_76);
return x_65;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_65, 1);
lean_inc(x_77);
lean_dec(x_65);
x_78 = lean_ctor_get(x_67, 0);
lean_inc(x_78);
lean_dec_ref(x_67);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_free_object(x_5);
x_80 = !lean_is_exclusive(x_65);
if (x_80 == 0)
{
return x_65;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_65, 0);
x_82 = lean_ctor_get(x_65, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_65);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; size_t x_88; size_t x_89; lean_object* x_90; 
x_84 = lean_ctor_get(x_5, 0);
lean_inc(x_84);
lean_dec(x_5);
x_85 = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0___lam__0), 10, 3);
lean_closure_set(x_85, 0, x_1);
lean_closure_set(x_85, 1, x_2);
lean_closure_set(x_85, 2, x_3);
x_86 = lean_box(0);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_86);
lean_ctor_set(x_87, 1, x_6);
x_88 = lean_array_size(x_84);
x_89 = 0;
x_90 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(x_85, x_86, x_84, x_88, x_89, x_87, x_7, x_8, x_9, x_10, x_11);
lean_dec_ref(x_84);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; lean_object* x_92; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_93 = lean_ctor_get(x_90, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_94 = x_90;
} else {
 lean_dec_ref(x_90);
 x_94 = lean_box(0);
}
x_95 = lean_ctor_get(x_91, 1);
lean_inc(x_95);
lean_dec(x_91);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_95);
if (lean_is_scalar(x_94)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_94;
}
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_93);
return x_97;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
lean_dec(x_91);
x_98 = lean_ctor_get(x_90, 1);
lean_inc(x_98);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_99 = x_90;
} else {
 lean_dec_ref(x_90);
 x_99 = lean_box(0);
}
x_100 = lean_ctor_get(x_92, 0);
lean_inc(x_100);
lean_dec_ref(x_92);
if (lean_is_scalar(x_99)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_99;
}
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_98);
return x_101;
}
}
else
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_102 = lean_ctor_get(x_90, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_90, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 lean_ctor_release(x_90, 1);
 x_104 = x_90;
} else {
 lean_dec_ref(x_90);
 x_104 = lean_box(0);
}
if (lean_is_scalar(x_104)) {
 x_105 = lean_alloc_ctor(1, 2, 0);
} else {
 x_105 = x_104;
}
lean_ctor_set(x_105, 0, x_102);
lean_ctor_set(x_105, 1, x_103);
return x_105;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = lean_usize_dec_lt(x_5, x_4);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_6, 1);
x_16 = lean_ctor_get(x_6, 0);
lean_dec(x_16);
x_17 = lean_array_uget(x_3, x_5);
lean_inc_ref(x_1);
lean_inc(x_10);
lean_inc_ref(x_9);
lean_inc(x_8);
lean_inc_ref(x_7);
lean_inc(x_15);
x_18 = lean_apply_7(x_1, x_17, x_15, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
lean_ctor_set_tag(x_19, 1);
lean_ctor_set(x_6, 0, x_19);
lean_ctor_set(x_18, 0, x_6);
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_6, 0, x_24);
lean_ctor_set(x_18, 0, x_6);
return x_18;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_dec(x_18);
x_26 = lean_ctor_get(x_19, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 x_27 = x_19;
} else {
 lean_dec_ref(x_19);
 x_27 = lean_box(0);
}
if (lean_is_scalar(x_27)) {
 x_28 = lean_alloc_ctor(1, 1, 0);
} else {
 x_28 = x_27;
 lean_ctor_set_tag(x_28, 1);
}
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_6, 0, x_28);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_6);
lean_ctor_set(x_29, 1, x_25);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; size_t x_32; size_t x_33; 
lean_dec(x_15);
x_30 = lean_ctor_get(x_18, 1);
lean_inc(x_30);
lean_dec_ref(x_18);
x_31 = lean_ctor_get(x_19, 0);
lean_inc(x_31);
lean_dec_ref(x_19);
lean_inc(x_2);
lean_ctor_set(x_6, 1, x_31);
lean_ctor_set(x_6, 0, x_2);
x_32 = 1;
x_33 = lean_usize_add(x_5, x_32);
x_5 = x_33;
x_11 = x_30;
goto _start;
}
}
else
{
uint8_t x_35; 
lean_free_object(x_6);
lean_dec(x_15);
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_35 = !lean_is_exclusive(x_18);
if (x_35 == 0)
{
return x_18;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_18, 0);
x_37 = lean_ctor_get(x_18, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_18);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_6, 1);
lean_inc(x_39);
lean_dec(x_6);
x_40 = lean_array_uget(x_3, x_5);
lean_inc_ref(x_1);
lean_inc(x_10);
lean_inc_ref(x_9);
lean_inc(x_8);
lean_inc_ref(x_7);
lean_inc(x_39);
x_41 = lean_apply_7(x_1, x_40, x_39, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_44 = x_41;
} else {
 lean_dec_ref(x_41);
 x_44 = lean_box(0);
}
x_45 = lean_ctor_get(x_42, 0);
lean_inc(x_45);
if (lean_is_exclusive(x_42)) {
 lean_ctor_release(x_42, 0);
 x_46 = x_42;
} else {
 lean_dec_ref(x_42);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(1, 1, 0);
} else {
 x_47 = x_46;
 lean_ctor_set_tag(x_47, 1);
}
lean_ctor_set(x_47, 0, x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_39);
if (lean_is_scalar(x_44)) {
 x_49 = lean_alloc_ctor(0, 2, 0);
} else {
 x_49 = x_44;
}
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_43);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; size_t x_53; size_t x_54; 
lean_dec(x_39);
x_50 = lean_ctor_get(x_41, 1);
lean_inc(x_50);
lean_dec_ref(x_41);
x_51 = lean_ctor_get(x_42, 0);
lean_inc(x_51);
lean_dec_ref(x_42);
lean_inc(x_2);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_2);
lean_ctor_set(x_52, 1, x_51);
x_53 = 1;
x_54 = lean_usize_add(x_5, x_53);
x_5 = x_54;
x_6 = x_52;
x_11 = x_50;
goto _start;
}
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_39);
lean_dec(x_10);
lean_dec_ref(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
lean_dec(x_2);
lean_dec_ref(x_1);
x_56 = lean_ctor_get(x_41, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_41, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_41)) {
 lean_ctor_release(x_41, 0);
 lean_ctor_release(x_41, 1);
 x_58 = x_41;
} else {
 lean_dec_ref(x_41);
 x_58 = lean_box(0);
}
if (lean_is_scalar(x_58)) {
 x_59 = lean_alloc_ctor(1, 2, 0);
} else {
 x_59 = x_58;
}
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_57);
return x_59;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_2);
lean_dec(x_1);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_5);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_10);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; 
lean_dec_ref(x_5);
x_37 = lean_ctor_get(x_4, 0);
lean_inc(x_37);
lean_dec_ref(x_4);
x_38 = lean_ctor_get(x_37, 1);
lean_inc(x_38);
lean_dec(x_37);
x_11 = x_38;
goto block_34;
}
block_34:
{
lean_object* x_12; 
x_12 = l_Lean_Meta_subst_x3f(x_1, x_11, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_12, 0);
lean_dec(x_15);
x_16 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_12, 0, x_16);
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_dec(x_12);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_2);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec_ref(x_2);
x_20 = !lean_is_exclusive(x_12);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_21 = lean_ctor_get(x_12, 0);
lean_dec(x_21);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_13);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_3);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_12, 0, x_24);
return x_12;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_12, 1);
lean_inc(x_25);
lean_dec(x_12);
x_26 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_26, 0, x_13);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_3);
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_25);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec_ref(x_2);
x_30 = !lean_is_exclusive(x_12);
if (x_30 == 0)
{
return x_12;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_12, 0);
x_32 = lean_ctor_get(x_12, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_12);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc_ref(x_12);
lean_dec_ref(x_4);
lean_inc(x_9);
lean_inc_ref(x_8);
lean_inc(x_7);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_inc_ref(x_2);
lean_inc(x_1);
x_13 = l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0(x_1, x_2, x_3, x_5, x_11, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec_ref(x_5);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
uint8_t x_15; 
lean_dec_ref(x_12);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_2);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_13);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_dec(x_16);
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec_ref(x_14);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_ctor_get(x_14, 0);
lean_inc(x_19);
lean_dec_ref(x_14);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; size_t x_26; size_t x_27; lean_object* x_28; 
x_21 = lean_ctor_get(x_13, 1);
lean_inc(x_21);
lean_dec_ref(x_13);
x_22 = lean_ctor_get(x_14, 0);
lean_inc(x_22);
lean_dec_ref(x_14);
x_23 = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0___lam__0), 10, 3);
lean_closure_set(x_23, 0, x_1);
lean_closure_set(x_23, 1, x_2);
lean_closure_set(x_23, 2, x_3);
x_24 = lean_box(0);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_22);
x_26 = lean_array_size(x_12);
x_27 = 0;
x_28 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__3(x_23, x_24, x_12, x_26, x_27, x_25, x_6, x_7, x_8, x_9, x_21);
lean_dec_ref(x_12);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
if (lean_obj_tag(x_30) == 0)
{
uint8_t x_31; 
x_31 = !lean_is_exclusive(x_28);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_28, 0);
lean_dec(x_32);
x_33 = lean_ctor_get(x_29, 1);
lean_inc(x_33);
lean_dec(x_29);
lean_ctor_set(x_28, 0, x_33);
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 1);
lean_inc(x_34);
lean_dec(x_28);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_dec(x_29);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_29);
x_37 = !lean_is_exclusive(x_28);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_28, 0);
lean_dec(x_38);
x_39 = lean_ctor_get(x_30, 0);
lean_inc(x_39);
lean_dec_ref(x_30);
lean_ctor_set(x_28, 0, x_39);
return x_28;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_28, 1);
lean_inc(x_40);
lean_dec(x_28);
x_41 = lean_ctor_get(x_30, 0);
lean_inc(x_41);
lean_dec_ref(x_30);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
return x_42;
}
}
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_28);
if (x_43 == 0)
{
return x_28;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_28, 0);
x_45 = lean_ctor_get(x_28, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_28);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
else
{
uint8_t x_47; 
lean_dec_ref(x_12);
lean_dec(x_9);
lean_dec_ref(x_8);
lean_dec(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_2);
lean_dec(x_1);
x_47 = !lean_is_exclusive(x_13);
if (x_47 == 0)
{
return x_13;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_13, 0);
x_49 = lean_ctor_get(x_13, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_13);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
static lean_object* _init_l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_2, 2);
lean_inc_ref(x_7);
x_8 = lean_ctor_get(x_7, 1);
lean_inc_ref(x_8);
lean_dec_ref(x_7);
x_9 = lean_box(0);
x_10 = l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0;
x_11 = l_Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0(x_1, x_10, x_9, x_8, x_10, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_11, 0);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_11, 0);
lean_dec(x_21);
x_22 = lean_ctor_get(x_13, 0);
lean_inc(x_22);
lean_dec_ref(x_13);
lean_ctor_set(x_11, 0, x_22);
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_11, 1);
lean_inc(x_23);
lean_dec(x_11);
x_24 = lean_ctor_get(x_13, 0);
lean_inc(x_24);
lean_dec_ref(x_13);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
}
else
{
uint8_t x_26; 
x_26 = !lean_is_exclusive(x_11);
if (x_26 == 0)
{
return x_11;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_11, 0);
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_11);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_substSomeVar_x3f___lam__0), 6, 1);
lean_closure_set(x_7, 0, x_1);
x_8 = l_Lean_MVarId_withContext___at___Lean_Meta_substCore_spec__15___redArg(x_1, x_7, x_2, x_3, x_4, x_5, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
size_t x_15; size_t x_16; lean_object* x_17; 
x_15 = lean_unbox_usize(x_7);
lean_dec(x_7);
x_16 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_17 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_15, x_16, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
return x_17;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec_ref(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_PersistentArray_forInAux___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec_ref(x_4);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_forIn_x27Unsafe_loop___at___Lean_PersistentArray_forIn___at___Lean_Meta_substSomeVar_x3f_spec__0_spec__3(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec_ref(x_3);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc_ref(x_4);
lean_inc(x_3);
lean_inc_ref(x_2);
lean_inc(x_1);
x_7 = l_Lean_Meta_substSomeVar_x3f(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
uint8_t x_9; 
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_7, 0);
lean_dec(x_10);
lean_ctor_set(x_7, 0, x_1);
return x_7;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_7, 1);
lean_inc(x_11);
lean_dec(x_7);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_1);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_1);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec_ref(x_7);
x_14 = lean_ctor_get(x_8, 0);
lean_inc(x_14);
lean_dec_ref(x_8);
x_1 = x_14;
x_6 = x_13;
goto _start;
}
}
else
{
uint8_t x_16; 
lean_dec(x_5);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
x_16 = !lean_is_exclusive(x_7);
if (x_16 == 0)
{
return x_7;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_7, 0);
x_18 = lean_ctor_get(x_7, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_7);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_private", 8, 8);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_2 = lean_box(0);
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Lean", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__17;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__18;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Subst", 5, 5);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_num___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__17;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("initFn", 6, 6);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_@", 2, 2);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__17;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_substCore___lam__2___closed__18;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("_hyg", 4, 4);
return x_1;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_str___override(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21____x40_Lean_Meta_Tactic_Subst___hyg_3853_() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3853u);
x_2 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_3 = l_Lean_Name_num___override(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn____x40_Lean_Meta_Tactic_Subst___hyg_3853_(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Meta_substCore___lam__2___closed__19;
x_3 = 0;
x_4 = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21____x40_Lean_Meta_Tactic_Subst___hyg_3853_;
x_5 = l_Lean_registerTraceClass(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_MatchUtil(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Revert(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Assert(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Intro(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_Clear(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MatchUtil(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Util(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Revert(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assert(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Intro(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Clear(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_FVarSubst(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__0 = _init_l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__0();
l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__1 = _init_l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__1();
lean_mark_persistent(l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__1);
l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__2 = _init_l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__2();
lean_mark_persistent(l_Lean_addTrace___at___Lean_Meta_substCore_spec__3___closed__2);
l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__0 = _init_l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__0();
lean_mark_persistent(l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__0);
l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__1 = _init_l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__1();
lean_mark_persistent(l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__1);
l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__2 = _init_l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__2();
lean_mark_persistent(l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__2);
l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__3 = _init_l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__3();
lean_mark_persistent(l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__3);
l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__4 = _init_l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__4();
lean_mark_persistent(l_Lean_exprDependsOn___at___Lean_Meta_substCore_spec__5___redArg___closed__4);
l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__0 = _init_l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__0();
l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__1 = _init_l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__1();
l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__2 = _init_l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__2();
lean_mark_persistent(l_Lean_PersistentHashMap_insertAux___at___Lean_PersistentHashMap_insert___at___Lean_MVarId_assign___at___Lean_Meta_substCore_spec__6_spec__6_spec__6___redArg___closed__2);
l_panic___at___Lean_Meta_substCore_spec__14___closed__0 = _init_l_panic___at___Lean_Meta_substCore_spec__14___closed__0();
lean_mark_persistent(l_panic___at___Lean_Meta_substCore_spec__14___closed__0);
l_Lean_Meta_substCore___lam__1___closed__0 = _init_l_Lean_Meta_substCore___lam__1___closed__0();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__0);
l_Lean_Meta_substCore___lam__1___closed__1 = _init_l_Lean_Meta_substCore___lam__1___closed__1();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__1);
l_Lean_Meta_substCore___lam__1___closed__2 = _init_l_Lean_Meta_substCore___lam__1___closed__2();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__2);
l_Lean_Meta_substCore___lam__1___closed__3 = _init_l_Lean_Meta_substCore___lam__1___closed__3();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__3);
l_Lean_Meta_substCore___lam__1___closed__4 = _init_l_Lean_Meta_substCore___lam__1___closed__4();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__4);
l_Lean_Meta_substCore___lam__1___closed__5 = _init_l_Lean_Meta_substCore___lam__1___closed__5();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__5);
l_Lean_Meta_substCore___lam__1___closed__6 = _init_l_Lean_Meta_substCore___lam__1___closed__6();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__6);
l_Lean_Meta_substCore___lam__1___closed__7 = _init_l_Lean_Meta_substCore___lam__1___closed__7();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__7);
l_Lean_Meta_substCore___lam__1___closed__8 = _init_l_Lean_Meta_substCore___lam__1___closed__8();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__8);
l_Lean_Meta_substCore___lam__1___closed__9 = _init_l_Lean_Meta_substCore___lam__1___closed__9();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__9);
l_Lean_Meta_substCore___lam__1___closed__10 = _init_l_Lean_Meta_substCore___lam__1___closed__10();
lean_mark_persistent(l_Lean_Meta_substCore___lam__1___closed__10);
l_Lean_Meta_substCore___lam__2___closed__0 = _init_l_Lean_Meta_substCore___lam__2___closed__0();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__0);
l_Lean_Meta_substCore___lam__2___closed__1 = _init_l_Lean_Meta_substCore___lam__2___closed__1();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__1);
l_Lean_Meta_substCore___lam__2___closed__2 = _init_l_Lean_Meta_substCore___lam__2___closed__2();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__2);
l_Lean_Meta_substCore___lam__2___closed__3 = _init_l_Lean_Meta_substCore___lam__2___closed__3();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__3);
l_Lean_Meta_substCore___lam__2___closed__4 = _init_l_Lean_Meta_substCore___lam__2___closed__4();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__4);
l_Lean_Meta_substCore___lam__2___closed__5 = _init_l_Lean_Meta_substCore___lam__2___closed__5();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__5);
l_Lean_Meta_substCore___lam__2___closed__6 = _init_l_Lean_Meta_substCore___lam__2___closed__6();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__6);
l_Lean_Meta_substCore___lam__2___closed__7 = _init_l_Lean_Meta_substCore___lam__2___closed__7();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__7);
l_Lean_Meta_substCore___lam__2___closed__8 = _init_l_Lean_Meta_substCore___lam__2___closed__8();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__8);
l_Lean_Meta_substCore___lam__2___closed__9 = _init_l_Lean_Meta_substCore___lam__2___closed__9();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__9);
l_Lean_Meta_substCore___lam__2___closed__10 = _init_l_Lean_Meta_substCore___lam__2___closed__10();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__10);
l_Lean_Meta_substCore___lam__2___closed__11 = _init_l_Lean_Meta_substCore___lam__2___closed__11();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__11);
l_Lean_Meta_substCore___lam__2___closed__12 = _init_l_Lean_Meta_substCore___lam__2___closed__12();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__12);
l_Lean_Meta_substCore___lam__2___closed__13 = _init_l_Lean_Meta_substCore___lam__2___closed__13();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__13);
l_Lean_Meta_substCore___lam__2___closed__14 = _init_l_Lean_Meta_substCore___lam__2___closed__14();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__14);
l_Lean_Meta_substCore___lam__2___closed__15 = _init_l_Lean_Meta_substCore___lam__2___closed__15();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__15);
l_Lean_Meta_substCore___lam__2___closed__16 = _init_l_Lean_Meta_substCore___lam__2___closed__16();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__16);
l_Lean_Meta_substCore___lam__2___closed__17 = _init_l_Lean_Meta_substCore___lam__2___closed__17();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__17);
l_Lean_Meta_substCore___lam__2___closed__18 = _init_l_Lean_Meta_substCore___lam__2___closed__18();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__18);
l_Lean_Meta_substCore___lam__2___closed__19 = _init_l_Lean_Meta_substCore___lam__2___closed__19();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__19);
l_Lean_Meta_substCore___lam__2___closed__20 = _init_l_Lean_Meta_substCore___lam__2___closed__20();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__20);
l_Lean_Meta_substCore___lam__2___closed__21 = _init_l_Lean_Meta_substCore___lam__2___closed__21();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__21);
l_Lean_Meta_substCore___lam__2___closed__22 = _init_l_Lean_Meta_substCore___lam__2___closed__22();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__22);
l_Lean_Meta_substCore___lam__2___closed__23 = _init_l_Lean_Meta_substCore___lam__2___closed__23();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__23);
l_Lean_Meta_substCore___lam__2___closed__24 = _init_l_Lean_Meta_substCore___lam__2___closed__24();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__24);
l_Lean_Meta_substCore___lam__2___closed__25 = _init_l_Lean_Meta_substCore___lam__2___closed__25();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__25);
l_Lean_Meta_substCore___lam__2___closed__26 = _init_l_Lean_Meta_substCore___lam__2___closed__26();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__26);
l_Lean_Meta_substCore___lam__2___closed__27 = _init_l_Lean_Meta_substCore___lam__2___closed__27();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__27);
l_Lean_Meta_substCore___lam__2___closed__28 = _init_l_Lean_Meta_substCore___lam__2___closed__28();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__28);
l_Lean_Meta_substCore___lam__2___closed__29 = _init_l_Lean_Meta_substCore___lam__2___closed__29();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__29);
l_Lean_Meta_substCore___lam__2___closed__30 = _init_l_Lean_Meta_substCore___lam__2___closed__30();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__30);
l_Lean_Meta_substCore___lam__2___closed__31 = _init_l_Lean_Meta_substCore___lam__2___closed__31();
lean_mark_persistent(l_Lean_Meta_substCore___lam__2___closed__31);
l_Lean_Meta_heqToEq___lam__0___closed__0 = _init_l_Lean_Meta_heqToEq___lam__0___closed__0();
lean_mark_persistent(l_Lean_Meta_heqToEq___lam__0___closed__0);
l_Lean_Meta_heqToEq___lam__0___closed__1 = _init_l_Lean_Meta_heqToEq___lam__0___closed__1();
lean_mark_persistent(l_Lean_Meta_heqToEq___lam__0___closed__1);
l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___closed__0 = _init_l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___closed__0();
lean_mark_persistent(l_Lean_PersistentArray_findSomeMAux___at___Lean_PersistentArray_findSomeM_x3f___at___Lean_LocalContext_findDeclM_x3f___at___Lean_Meta_substVar_spec__0_spec__0_spec__0___closed__0);
l_Lean_Meta_substVar___lam__0___closed__0 = _init_l_Lean_Meta_substVar___lam__0___closed__0();
lean_mark_persistent(l_Lean_Meta_substVar___lam__0___closed__0);
l_Lean_Meta_substVar___lam__0___closed__1 = _init_l_Lean_Meta_substVar___lam__0___closed__1();
lean_mark_persistent(l_Lean_Meta_substVar___lam__0___closed__1);
l_Lean_Meta_substVar___lam__0___closed__2 = _init_l_Lean_Meta_substVar___lam__0___closed__2();
lean_mark_persistent(l_Lean_Meta_substVar___lam__0___closed__2);
l_Lean_Meta_substVar___lam__0___closed__3 = _init_l_Lean_Meta_substVar___lam__0___closed__3();
lean_mark_persistent(l_Lean_Meta_substVar___lam__0___closed__3);
l_Lean_Meta_substVar___lam__0___closed__4 = _init_l_Lean_Meta_substVar___lam__0___closed__4();
lean_mark_persistent(l_Lean_Meta_substVar___lam__0___closed__4);
l_Lean_Meta_substVar___lam__0___closed__5 = _init_l_Lean_Meta_substVar___lam__0___closed__5();
lean_mark_persistent(l_Lean_Meta_substVar___lam__0___closed__5);
l_Lean_Meta_subst_substEq___lam__0___closed__0 = _init_l_Lean_Meta_subst_substEq___lam__0___closed__0();
lean_mark_persistent(l_Lean_Meta_subst_substEq___lam__0___closed__0);
l_Lean_Meta_subst_substEq___lam__0___closed__1 = _init_l_Lean_Meta_subst_substEq___lam__0___closed__1();
lean_mark_persistent(l_Lean_Meta_subst_substEq___lam__0___closed__1);
l_Lean_Meta_subst_substEq___lam__0___closed__2 = _init_l_Lean_Meta_subst_substEq___lam__0___closed__2();
lean_mark_persistent(l_Lean_Meta_subst_substEq___lam__0___closed__2);
l_Lean_Meta_subst_substEq___lam__0___closed__3 = _init_l_Lean_Meta_subst_substEq___lam__0___closed__3();
lean_mark_persistent(l_Lean_Meta_subst_substEq___lam__0___closed__3);
l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0 = _init_l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0();
lean_mark_persistent(l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21____x40_Lean_Meta_Tactic_Subst___hyg_3853_ = _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21____x40_Lean_Meta_Tactic_Subst___hyg_3853_();
lean_mark_persistent(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21____x40_Lean_Meta_Tactic_Subst___hyg_3853_);
if (builtin) {res = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn____x40_Lean_Meta_Tactic_Subst___hyg_3853_(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
}return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
