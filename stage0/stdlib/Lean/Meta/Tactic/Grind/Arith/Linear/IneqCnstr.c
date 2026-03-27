// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Linear.IneqCnstr
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Linear.LinearM import Lean.Meta.Tactic.Grind.Arith.CommRing.Reify import Lean.Meta.Tactic.Grind.Arith.Linear.Den import Lean.Meta.Tactic.Grind.Arith.Linear.StructId import Lean.Meta.Tactic.Grind.Arith.Linear.Reify import Lean.Meta.Tactic.Grind.Arith.Linear.Proof
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
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_ofNatModule(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_reify_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_Linarith_Expr_norm(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_setInconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqLBool_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_Linarith_Poly_updateOccs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Linear_linearExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_CommRing_Expr_toPoly(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_RingIneqCnstr_cleanupDenominators(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Grind_CommRing_Poly_toIntModuleExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3_spec__5(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "`grind linarith` internal error, structure is not an ordered module"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "`grind linarith` internal error, structure is not an ordered int module"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "linarith"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__4_value),LEAN_SCALAR_PTR_LITERAL(111, 219, 223, 129, 16, 82, 214, 104)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unsat"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__6_value),LEAN_SCALAR_PTR_LITERAL(30, 205, 246, 167, 183, 132, 208, 174)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "store"};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 36, 82, 219, 127, 154, 201, 164)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__8_value),LEAN_SCALAR_PTR_LITERAL(108, 151, 24, 43, 11, 190, 144, 191)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(152, 135, 131, 0, 162, 156, 15, 149)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__3_value),LEAN_SCALAR_PTR_LITERAL(70, 36, 82, 219, 127, 154, 201, 164)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_propagateIneq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_propagateIneq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf(lean_object* v_fn_x3f_1_, lean_object* v_inst_2_){
_start:
{
if (lean_obj_tag(v_fn_x3f_1_) == 1)
{
lean_object* v_val_3_; lean_object* v___x_4_; uint8_t v___x_5_; 
v_val_3_ = lean_ctor_get(v_fn_x3f_1_, 0);
v___x_4_ = l_Lean_Expr_appArg_x21(v_val_3_);
v___x_5_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_4_, v_inst_2_);
lean_dec_ref(v___x_4_);
return v___x_5_;
}
else
{
uint8_t v___x_6_; 
v___x_6_ = 0;
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf___boxed(lean_object* v_fn_x3f_7_, lean_object* v_inst_8_){
_start:
{
uint8_t v_res_9_; lean_object* v_r_10_; 
v_res_9_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf(v_fn_x3f_7_, v_inst_8_);
lean_dec_ref(v_inst_8_);
lean_dec(v_fn_x3f_7_);
v_r_10_ = lean_box(v_res_9_);
return v_r_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg(lean_object* v_cls_14_, lean_object* v___y_15_){
_start:
{
lean_object* v_options_17_; uint8_t v_hasTrace_18_; 
v_options_17_ = lean_ctor_get(v___y_15_, 2);
v_hasTrace_18_ = lean_ctor_get_uint8(v_options_17_, sizeof(void*)*1);
if (v_hasTrace_18_ == 0)
{
lean_object* v___x_19_; lean_object* v___x_20_; 
lean_dec(v_cls_14_);
v___x_19_ = lean_box(v_hasTrace_18_);
v___x_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
return v___x_20_;
}
else
{
lean_object* v_inheritedTraceOptions_21_; lean_object* v___x_22_; lean_object* v___x_23_; uint8_t v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v_inheritedTraceOptions_21_ = lean_ctor_get(v___y_15_, 13);
v___x_22_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg___closed__1));
v___x_23_ = l_Lean_Name_append(v___x_22_, v_cls_14_);
v___x_24_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_21_, v_options_17_, v___x_23_);
lean_dec(v___x_23_);
v___x_25_ = lean_box(v___x_24_);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg___boxed(lean_object* v_cls_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg(v_cls_27_, v___y_28_);
lean_dec_ref(v___y_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0(lean_object* v_cls_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg(v_cls_31_, v___y_41_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___boxed(lean_object* v_cls_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0(v_cls_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
lean_dec(v___y_48_);
lean_dec(v___y_47_);
lean_dec(v___y_46_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3_spec__5(lean_object* v_c_59_, lean_object* v_x_60_, size_t v_x_61_, size_t v_x_62_){
_start:
{
if (lean_obj_tag(v_x_60_) == 0)
{
lean_object* v_cs_63_; size_t v_j_64_; lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v_cs_63_ = lean_ctor_get(v_x_60_, 0);
v_j_64_ = lean_usize_shift_right(v_x_61_, v_x_62_);
v___x_65_ = lean_usize_to_nat(v_j_64_);
v___x_66_ = lean_array_get_size(v_cs_63_);
v___x_67_ = lean_nat_dec_lt(v___x_65_, v___x_66_);
if (v___x_67_ == 0)
{
lean_dec(v___x_65_);
lean_dec_ref(v_c_59_);
return v_x_60_;
}
else
{
lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_85_; 
lean_inc_ref(v_cs_63_);
v_isSharedCheck_85_ = !lean_is_exclusive(v_x_60_);
if (v_isSharedCheck_85_ == 0)
{
lean_object* v_unused_86_; 
v_unused_86_ = lean_ctor_get(v_x_60_, 0);
lean_dec(v_unused_86_);
v___x_69_ = v_x_60_;
v_isShared_70_ = v_isSharedCheck_85_;
goto v_resetjp_68_;
}
else
{
lean_dec(v_x_60_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_85_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
size_t v___x_71_; size_t v___x_72_; size_t v___x_73_; size_t v_i_74_; size_t v___x_75_; size_t v_shift_76_; lean_object* v_v_77_; lean_object* v___x_78_; lean_object* v_xs_x27_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_83_; 
v___x_71_ = ((size_t)1ULL);
v___x_72_ = lean_usize_shift_left(v___x_71_, v_x_62_);
v___x_73_ = lean_usize_sub(v___x_72_, v___x_71_);
v_i_74_ = lean_usize_land(v_x_61_, v___x_73_);
v___x_75_ = ((size_t)5ULL);
v_shift_76_ = lean_usize_sub(v_x_62_, v___x_75_);
v_v_77_ = lean_array_fget(v_cs_63_, v___x_65_);
v___x_78_ = lean_box(0);
v_xs_x27_79_ = lean_array_fset(v_cs_63_, v___x_65_, v___x_78_);
v___x_80_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3_spec__5(v_c_59_, v_v_77_, v_i_74_, v_shift_76_);
v___x_81_ = lean_array_fset(v_xs_x27_79_, v___x_65_, v___x_80_);
lean_dec(v___x_65_);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 0, v___x_81_);
v___x_83_ = v___x_69_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_81_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
}
else
{
lean_object* v_vs_87_; lean_object* v___x_88_; lean_object* v___x_89_; uint8_t v___x_90_; 
v_vs_87_ = lean_ctor_get(v_x_60_, 0);
v___x_88_ = lean_usize_to_nat(v_x_61_);
v___x_89_ = lean_array_get_size(v_vs_87_);
v___x_90_ = lean_nat_dec_lt(v___x_88_, v___x_89_);
if (v___x_90_ == 0)
{
lean_dec(v___x_88_);
lean_dec_ref(v_c_59_);
return v_x_60_;
}
else
{
lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_102_; 
lean_inc_ref(v_vs_87_);
v_isSharedCheck_102_ = !lean_is_exclusive(v_x_60_);
if (v_isSharedCheck_102_ == 0)
{
lean_object* v_unused_103_; 
v_unused_103_ = lean_ctor_get(v_x_60_, 0);
lean_dec(v_unused_103_);
v___x_92_ = v_x_60_;
v_isShared_93_ = v_isSharedCheck_102_;
goto v_resetjp_91_;
}
else
{
lean_dec(v_x_60_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_102_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v_v_94_; lean_object* v___x_95_; lean_object* v_xs_x27_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_100_; 
v_v_94_ = lean_array_fget(v_vs_87_, v___x_88_);
v___x_95_ = lean_box(0);
v_xs_x27_96_ = lean_array_fset(v_vs_87_, v___x_88_, v___x_95_);
v___x_97_ = l_Lean_PersistentArray_push___redArg(v_v_94_, v_c_59_);
v___x_98_ = lean_array_fset(v_xs_x27_96_, v___x_88_, v___x_97_);
lean_dec(v___x_88_);
if (v_isShared_93_ == 0)
{
lean_ctor_set(v___x_92_, 0, v___x_98_);
v___x_100_ = v___x_92_;
goto v_reusejp_99_;
}
else
{
lean_object* v_reuseFailAlloc_101_; 
v_reuseFailAlloc_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_101_, 0, v___x_98_);
v___x_100_ = v_reuseFailAlloc_101_;
goto v_reusejp_99_;
}
v_reusejp_99_:
{
return v___x_100_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3_spec__5___boxed(lean_object* v_c_104_, lean_object* v_x_105_, lean_object* v_x_106_, lean_object* v_x_107_){
_start:
{
size_t v_x_67874__boxed_108_; size_t v_x_67875__boxed_109_; lean_object* v_res_110_; 
v_x_67874__boxed_108_ = lean_unbox_usize(v_x_106_);
lean_dec(v_x_106_);
v_x_67875__boxed_109_ = lean_unbox_usize(v_x_107_);
lean_dec(v_x_107_);
v_res_110_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3_spec__5(v_c_104_, v_x_105_, v_x_67874__boxed_108_, v_x_67875__boxed_109_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3(lean_object* v_c_111_, lean_object* v_t_112_, lean_object* v_i_113_){
_start:
{
lean_object* v_root_114_; lean_object* v_tail_115_; lean_object* v_size_116_; size_t v_shift_117_; lean_object* v_tailOff_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_142_; 
v_root_114_ = lean_ctor_get(v_t_112_, 0);
v_tail_115_ = lean_ctor_get(v_t_112_, 1);
v_size_116_ = lean_ctor_get(v_t_112_, 2);
v_shift_117_ = lean_ctor_get_usize(v_t_112_, 4);
v_tailOff_118_ = lean_ctor_get(v_t_112_, 3);
v_isSharedCheck_142_ = !lean_is_exclusive(v_t_112_);
if (v_isSharedCheck_142_ == 0)
{
v___x_120_ = v_t_112_;
v_isShared_121_ = v_isSharedCheck_142_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_tailOff_118_);
lean_inc(v_size_116_);
lean_inc(v_tail_115_);
lean_inc(v_root_114_);
lean_dec(v_t_112_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_142_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
uint8_t v___x_122_; 
v___x_122_ = lean_nat_dec_le(v_tailOff_118_, v_i_113_);
if (v___x_122_ == 0)
{
size_t v___x_123_; lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_123_ = lean_usize_of_nat(v_i_113_);
v___x_124_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3_spec__5(v_c_111_, v_root_114_, v___x_123_, v_shift_117_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 0, v___x_124_);
v___x_126_ = v___x_120_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_124_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v_tail_115_);
lean_ctor_set(v_reuseFailAlloc_127_, 2, v_size_116_);
lean_ctor_set(v_reuseFailAlloc_127_, 3, v_tailOff_118_);
lean_ctor_set_usize(v_reuseFailAlloc_127_, 4, v_shift_117_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
else
{
lean_object* v___x_128_; lean_object* v___x_129_; uint8_t v___x_130_; 
v___x_128_ = lean_nat_sub(v_i_113_, v_tailOff_118_);
v___x_129_ = lean_array_get_size(v_tail_115_);
v___x_130_ = lean_nat_dec_lt(v___x_128_, v___x_129_);
if (v___x_130_ == 0)
{
lean_object* v___x_132_; 
lean_dec(v___x_128_);
lean_dec_ref(v_c_111_);
if (v_isShared_121_ == 0)
{
v___x_132_ = v___x_120_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_root_114_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v_tail_115_);
lean_ctor_set(v_reuseFailAlloc_133_, 2, v_size_116_);
lean_ctor_set(v_reuseFailAlloc_133_, 3, v_tailOff_118_);
lean_ctor_set_usize(v_reuseFailAlloc_133_, 4, v_shift_117_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
else
{
lean_object* v_v_134_; lean_object* v___x_135_; lean_object* v_xs_x27_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_140_; 
v_v_134_ = lean_array_fget(v_tail_115_, v___x_128_);
v___x_135_ = lean_box(0);
v_xs_x27_136_ = lean_array_fset(v_tail_115_, v___x_128_, v___x_135_);
v___x_137_ = l_Lean_PersistentArray_push___redArg(v_v_134_, v_c_111_);
v___x_138_ = lean_array_fset(v_xs_x27_136_, v___x_128_, v___x_137_);
lean_dec(v___x_128_);
if (v_isShared_121_ == 0)
{
lean_ctor_set(v___x_120_, 1, v___x_138_);
v___x_140_ = v___x_120_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_root_114_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v___x_138_);
lean_ctor_set(v_reuseFailAlloc_141_, 2, v_size_116_);
lean_ctor_set(v_reuseFailAlloc_141_, 3, v_tailOff_118_);
lean_ctor_set_usize(v_reuseFailAlloc_141_, 4, v_shift_117_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3___boxed(lean_object* v_c_143_, lean_object* v_t_144_, lean_object* v_i_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3(v_c_143_, v_t_144_, v_i_145_);
lean_dec(v_i_145_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0(lean_object* v___y_147_, lean_object* v_c_148_, lean_object* v_v_149_, lean_object* v_s_150_){
_start:
{
lean_object* v_structs_151_; lean_object* v_typeIdOf_152_; lean_object* v_exprToStructId_153_; lean_object* v_exprToStructIdEntries_154_; lean_object* v_forbiddenNatModules_155_; lean_object* v_natStructs_156_; lean_object* v_natTypeIdOf_157_; lean_object* v_exprToNatStructId_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v_structs_151_ = lean_ctor_get(v_s_150_, 0);
v_typeIdOf_152_ = lean_ctor_get(v_s_150_, 1);
v_exprToStructId_153_ = lean_ctor_get(v_s_150_, 2);
v_exprToStructIdEntries_154_ = lean_ctor_get(v_s_150_, 3);
v_forbiddenNatModules_155_ = lean_ctor_get(v_s_150_, 4);
v_natStructs_156_ = lean_ctor_get(v_s_150_, 5);
v_natTypeIdOf_157_ = lean_ctor_get(v_s_150_, 6);
v_exprToNatStructId_158_ = lean_ctor_get(v_s_150_, 7);
v___x_159_ = lean_array_get_size(v_structs_151_);
v___x_160_ = lean_nat_dec_lt(v___y_147_, v___x_159_);
if (v___x_160_ == 0)
{
lean_dec_ref(v_c_148_);
return v_s_150_;
}
else
{
lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_222_; 
lean_inc_ref(v_exprToNatStructId_158_);
lean_inc_ref(v_natTypeIdOf_157_);
lean_inc_ref(v_natStructs_156_);
lean_inc_ref(v_forbiddenNatModules_155_);
lean_inc_ref(v_exprToStructIdEntries_154_);
lean_inc_ref(v_exprToStructId_153_);
lean_inc_ref(v_typeIdOf_152_);
lean_inc_ref(v_structs_151_);
v_isSharedCheck_222_ = !lean_is_exclusive(v_s_150_);
if (v_isSharedCheck_222_ == 0)
{
lean_object* v_unused_223_; lean_object* v_unused_224_; lean_object* v_unused_225_; lean_object* v_unused_226_; lean_object* v_unused_227_; lean_object* v_unused_228_; lean_object* v_unused_229_; lean_object* v_unused_230_; 
v_unused_223_ = lean_ctor_get(v_s_150_, 7);
lean_dec(v_unused_223_);
v_unused_224_ = lean_ctor_get(v_s_150_, 6);
lean_dec(v_unused_224_);
v_unused_225_ = lean_ctor_get(v_s_150_, 5);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_s_150_, 4);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_s_150_, 3);
lean_dec(v_unused_227_);
v_unused_228_ = lean_ctor_get(v_s_150_, 2);
lean_dec(v_unused_228_);
v_unused_229_ = lean_ctor_get(v_s_150_, 1);
lean_dec(v_unused_229_);
v_unused_230_ = lean_ctor_get(v_s_150_, 0);
lean_dec(v_unused_230_);
v___x_162_ = v_s_150_;
v_isShared_163_ = v_isSharedCheck_222_;
goto v_resetjp_161_;
}
else
{
lean_dec(v_s_150_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_222_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v_v_164_; lean_object* v_id_165_; lean_object* v_ringId_x3f_166_; lean_object* v_type_167_; lean_object* v_u_168_; lean_object* v_intModuleInst_169_; lean_object* v_leInst_x3f_170_; lean_object* v_ltInst_x3f_171_; lean_object* v_lawfulOrderLTInst_x3f_172_; lean_object* v_isPreorderInst_x3f_173_; lean_object* v_orderedAddInst_x3f_174_; lean_object* v_isLinearInst_x3f_175_; lean_object* v_noNatDivInst_x3f_176_; lean_object* v_ringInst_x3f_177_; lean_object* v_commRingInst_x3f_178_; lean_object* v_orderedRingInst_x3f_179_; lean_object* v_fieldInst_x3f_180_; lean_object* v_charInst_x3f_181_; lean_object* v_zero_182_; lean_object* v_ofNatZero_183_; lean_object* v_one_x3f_184_; lean_object* v_leFn_x3f_185_; lean_object* v_ltFn_x3f_186_; lean_object* v_addFn_187_; lean_object* v_zsmulFn_188_; lean_object* v_nsmulFn_189_; lean_object* v_zsmulFn_x3f_190_; lean_object* v_nsmulFn_x3f_191_; lean_object* v_homomulFn_x3f_192_; lean_object* v_subFn_193_; lean_object* v_negFn_194_; lean_object* v_vars_195_; lean_object* v_varMap_196_; lean_object* v_lowers_197_; lean_object* v_uppers_198_; lean_object* v_diseqs_199_; lean_object* v_assignment_200_; uint8_t v_caseSplits_201_; lean_object* v_conflict_x3f_202_; lean_object* v_diseqSplits_203_; lean_object* v_elimEqs_204_; lean_object* v_elimStack_205_; lean_object* v_occurs_206_; lean_object* v_ignored_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_221_; 
v_v_164_ = lean_array_fget(v_structs_151_, v___y_147_);
v_id_165_ = lean_ctor_get(v_v_164_, 0);
v_ringId_x3f_166_ = lean_ctor_get(v_v_164_, 1);
v_type_167_ = lean_ctor_get(v_v_164_, 2);
v_u_168_ = lean_ctor_get(v_v_164_, 3);
v_intModuleInst_169_ = lean_ctor_get(v_v_164_, 4);
v_leInst_x3f_170_ = lean_ctor_get(v_v_164_, 5);
v_ltInst_x3f_171_ = lean_ctor_get(v_v_164_, 6);
v_lawfulOrderLTInst_x3f_172_ = lean_ctor_get(v_v_164_, 7);
v_isPreorderInst_x3f_173_ = lean_ctor_get(v_v_164_, 8);
v_orderedAddInst_x3f_174_ = lean_ctor_get(v_v_164_, 9);
v_isLinearInst_x3f_175_ = lean_ctor_get(v_v_164_, 10);
v_noNatDivInst_x3f_176_ = lean_ctor_get(v_v_164_, 11);
v_ringInst_x3f_177_ = lean_ctor_get(v_v_164_, 12);
v_commRingInst_x3f_178_ = lean_ctor_get(v_v_164_, 13);
v_orderedRingInst_x3f_179_ = lean_ctor_get(v_v_164_, 14);
v_fieldInst_x3f_180_ = lean_ctor_get(v_v_164_, 15);
v_charInst_x3f_181_ = lean_ctor_get(v_v_164_, 16);
v_zero_182_ = lean_ctor_get(v_v_164_, 17);
v_ofNatZero_183_ = lean_ctor_get(v_v_164_, 18);
v_one_x3f_184_ = lean_ctor_get(v_v_164_, 19);
v_leFn_x3f_185_ = lean_ctor_get(v_v_164_, 20);
v_ltFn_x3f_186_ = lean_ctor_get(v_v_164_, 21);
v_addFn_187_ = lean_ctor_get(v_v_164_, 22);
v_zsmulFn_188_ = lean_ctor_get(v_v_164_, 23);
v_nsmulFn_189_ = lean_ctor_get(v_v_164_, 24);
v_zsmulFn_x3f_190_ = lean_ctor_get(v_v_164_, 25);
v_nsmulFn_x3f_191_ = lean_ctor_get(v_v_164_, 26);
v_homomulFn_x3f_192_ = lean_ctor_get(v_v_164_, 27);
v_subFn_193_ = lean_ctor_get(v_v_164_, 28);
v_negFn_194_ = lean_ctor_get(v_v_164_, 29);
v_vars_195_ = lean_ctor_get(v_v_164_, 30);
v_varMap_196_ = lean_ctor_get(v_v_164_, 31);
v_lowers_197_ = lean_ctor_get(v_v_164_, 32);
v_uppers_198_ = lean_ctor_get(v_v_164_, 33);
v_diseqs_199_ = lean_ctor_get(v_v_164_, 34);
v_assignment_200_ = lean_ctor_get(v_v_164_, 35);
v_caseSplits_201_ = lean_ctor_get_uint8(v_v_164_, sizeof(void*)*42);
v_conflict_x3f_202_ = lean_ctor_get(v_v_164_, 36);
v_diseqSplits_203_ = lean_ctor_get(v_v_164_, 37);
v_elimEqs_204_ = lean_ctor_get(v_v_164_, 38);
v_elimStack_205_ = lean_ctor_get(v_v_164_, 39);
v_occurs_206_ = lean_ctor_get(v_v_164_, 40);
v_ignored_207_ = lean_ctor_get(v_v_164_, 41);
v_isSharedCheck_221_ = !lean_is_exclusive(v_v_164_);
if (v_isSharedCheck_221_ == 0)
{
v___x_209_ = v_v_164_;
v_isShared_210_ = v_isSharedCheck_221_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_ignored_207_);
lean_inc(v_occurs_206_);
lean_inc(v_elimStack_205_);
lean_inc(v_elimEqs_204_);
lean_inc(v_diseqSplits_203_);
lean_inc(v_conflict_x3f_202_);
lean_inc(v_assignment_200_);
lean_inc(v_diseqs_199_);
lean_inc(v_uppers_198_);
lean_inc(v_lowers_197_);
lean_inc(v_varMap_196_);
lean_inc(v_vars_195_);
lean_inc(v_negFn_194_);
lean_inc(v_subFn_193_);
lean_inc(v_homomulFn_x3f_192_);
lean_inc(v_nsmulFn_x3f_191_);
lean_inc(v_zsmulFn_x3f_190_);
lean_inc(v_nsmulFn_189_);
lean_inc(v_zsmulFn_188_);
lean_inc(v_addFn_187_);
lean_inc(v_ltFn_x3f_186_);
lean_inc(v_leFn_x3f_185_);
lean_inc(v_one_x3f_184_);
lean_inc(v_ofNatZero_183_);
lean_inc(v_zero_182_);
lean_inc(v_charInst_x3f_181_);
lean_inc(v_fieldInst_x3f_180_);
lean_inc(v_orderedRingInst_x3f_179_);
lean_inc(v_commRingInst_x3f_178_);
lean_inc(v_ringInst_x3f_177_);
lean_inc(v_noNatDivInst_x3f_176_);
lean_inc(v_isLinearInst_x3f_175_);
lean_inc(v_orderedAddInst_x3f_174_);
lean_inc(v_isPreorderInst_x3f_173_);
lean_inc(v_lawfulOrderLTInst_x3f_172_);
lean_inc(v_ltInst_x3f_171_);
lean_inc(v_leInst_x3f_170_);
lean_inc(v_intModuleInst_169_);
lean_inc(v_u_168_);
lean_inc(v_type_167_);
lean_inc(v_ringId_x3f_166_);
lean_inc(v_id_165_);
lean_dec(v_v_164_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_221_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_211_; lean_object* v_xs_x27_212_; lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_211_ = lean_box(0);
v_xs_x27_212_ = lean_array_fset(v_structs_151_, v___y_147_, v___x_211_);
v___x_213_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3(v_c_148_, v_uppers_198_, v_v_149_);
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 33, v___x_213_);
v___x_215_ = v___x_209_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_id_165_);
lean_ctor_set(v_reuseFailAlloc_220_, 1, v_ringId_x3f_166_);
lean_ctor_set(v_reuseFailAlloc_220_, 2, v_type_167_);
lean_ctor_set(v_reuseFailAlloc_220_, 3, v_u_168_);
lean_ctor_set(v_reuseFailAlloc_220_, 4, v_intModuleInst_169_);
lean_ctor_set(v_reuseFailAlloc_220_, 5, v_leInst_x3f_170_);
lean_ctor_set(v_reuseFailAlloc_220_, 6, v_ltInst_x3f_171_);
lean_ctor_set(v_reuseFailAlloc_220_, 7, v_lawfulOrderLTInst_x3f_172_);
lean_ctor_set(v_reuseFailAlloc_220_, 8, v_isPreorderInst_x3f_173_);
lean_ctor_set(v_reuseFailAlloc_220_, 9, v_orderedAddInst_x3f_174_);
lean_ctor_set(v_reuseFailAlloc_220_, 10, v_isLinearInst_x3f_175_);
lean_ctor_set(v_reuseFailAlloc_220_, 11, v_noNatDivInst_x3f_176_);
lean_ctor_set(v_reuseFailAlloc_220_, 12, v_ringInst_x3f_177_);
lean_ctor_set(v_reuseFailAlloc_220_, 13, v_commRingInst_x3f_178_);
lean_ctor_set(v_reuseFailAlloc_220_, 14, v_orderedRingInst_x3f_179_);
lean_ctor_set(v_reuseFailAlloc_220_, 15, v_fieldInst_x3f_180_);
lean_ctor_set(v_reuseFailAlloc_220_, 16, v_charInst_x3f_181_);
lean_ctor_set(v_reuseFailAlloc_220_, 17, v_zero_182_);
lean_ctor_set(v_reuseFailAlloc_220_, 18, v_ofNatZero_183_);
lean_ctor_set(v_reuseFailAlloc_220_, 19, v_one_x3f_184_);
lean_ctor_set(v_reuseFailAlloc_220_, 20, v_leFn_x3f_185_);
lean_ctor_set(v_reuseFailAlloc_220_, 21, v_ltFn_x3f_186_);
lean_ctor_set(v_reuseFailAlloc_220_, 22, v_addFn_187_);
lean_ctor_set(v_reuseFailAlloc_220_, 23, v_zsmulFn_188_);
lean_ctor_set(v_reuseFailAlloc_220_, 24, v_nsmulFn_189_);
lean_ctor_set(v_reuseFailAlloc_220_, 25, v_zsmulFn_x3f_190_);
lean_ctor_set(v_reuseFailAlloc_220_, 26, v_nsmulFn_x3f_191_);
lean_ctor_set(v_reuseFailAlloc_220_, 27, v_homomulFn_x3f_192_);
lean_ctor_set(v_reuseFailAlloc_220_, 28, v_subFn_193_);
lean_ctor_set(v_reuseFailAlloc_220_, 29, v_negFn_194_);
lean_ctor_set(v_reuseFailAlloc_220_, 30, v_vars_195_);
lean_ctor_set(v_reuseFailAlloc_220_, 31, v_varMap_196_);
lean_ctor_set(v_reuseFailAlloc_220_, 32, v_lowers_197_);
lean_ctor_set(v_reuseFailAlloc_220_, 33, v___x_213_);
lean_ctor_set(v_reuseFailAlloc_220_, 34, v_diseqs_199_);
lean_ctor_set(v_reuseFailAlloc_220_, 35, v_assignment_200_);
lean_ctor_set(v_reuseFailAlloc_220_, 36, v_conflict_x3f_202_);
lean_ctor_set(v_reuseFailAlloc_220_, 37, v_diseqSplits_203_);
lean_ctor_set(v_reuseFailAlloc_220_, 38, v_elimEqs_204_);
lean_ctor_set(v_reuseFailAlloc_220_, 39, v_elimStack_205_);
lean_ctor_set(v_reuseFailAlloc_220_, 40, v_occurs_206_);
lean_ctor_set(v_reuseFailAlloc_220_, 41, v_ignored_207_);
lean_ctor_set_uint8(v_reuseFailAlloc_220_, sizeof(void*)*42, v_caseSplits_201_);
v___x_215_ = v_reuseFailAlloc_220_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
lean_object* v___x_216_; lean_object* v___x_218_; 
v___x_216_ = lean_array_fset(v_xs_x27_212_, v___y_147_, v___x_215_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v___x_216_);
v___x_218_ = v___x_162_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v___x_216_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_typeIdOf_152_);
lean_ctor_set(v_reuseFailAlloc_219_, 2, v_exprToStructId_153_);
lean_ctor_set(v_reuseFailAlloc_219_, 3, v_exprToStructIdEntries_154_);
lean_ctor_set(v_reuseFailAlloc_219_, 4, v_forbiddenNatModules_155_);
lean_ctor_set(v_reuseFailAlloc_219_, 5, v_natStructs_156_);
lean_ctor_set(v_reuseFailAlloc_219_, 6, v_natTypeIdOf_157_);
lean_ctor_set(v_reuseFailAlloc_219_, 7, v_exprToNatStructId_158_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0___boxed(lean_object* v___y_231_, lean_object* v_c_232_, lean_object* v_v_233_, lean_object* v_s_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0(v___y_231_, v_c_232_, v_v_233_, v_s_234_);
lean_dec(v_v_233_);
lean_dec(v___y_231_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1(lean_object* v___y_236_, lean_object* v_c_237_, lean_object* v_v_238_, lean_object* v_s_239_){
_start:
{
lean_object* v_structs_240_; lean_object* v_typeIdOf_241_; lean_object* v_exprToStructId_242_; lean_object* v_exprToStructIdEntries_243_; lean_object* v_forbiddenNatModules_244_; lean_object* v_natStructs_245_; lean_object* v_natTypeIdOf_246_; lean_object* v_exprToNatStructId_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v_structs_240_ = lean_ctor_get(v_s_239_, 0);
v_typeIdOf_241_ = lean_ctor_get(v_s_239_, 1);
v_exprToStructId_242_ = lean_ctor_get(v_s_239_, 2);
v_exprToStructIdEntries_243_ = lean_ctor_get(v_s_239_, 3);
v_forbiddenNatModules_244_ = lean_ctor_get(v_s_239_, 4);
v_natStructs_245_ = lean_ctor_get(v_s_239_, 5);
v_natTypeIdOf_246_ = lean_ctor_get(v_s_239_, 6);
v_exprToNatStructId_247_ = lean_ctor_get(v_s_239_, 7);
v___x_248_ = lean_array_get_size(v_structs_240_);
v___x_249_ = lean_nat_dec_lt(v___y_236_, v___x_248_);
if (v___x_249_ == 0)
{
lean_dec_ref(v_c_237_);
return v_s_239_;
}
else
{
lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_311_; 
lean_inc_ref(v_exprToNatStructId_247_);
lean_inc_ref(v_natTypeIdOf_246_);
lean_inc_ref(v_natStructs_245_);
lean_inc_ref(v_forbiddenNatModules_244_);
lean_inc_ref(v_exprToStructIdEntries_243_);
lean_inc_ref(v_exprToStructId_242_);
lean_inc_ref(v_typeIdOf_241_);
lean_inc_ref(v_structs_240_);
v_isSharedCheck_311_ = !lean_is_exclusive(v_s_239_);
if (v_isSharedCheck_311_ == 0)
{
lean_object* v_unused_312_; lean_object* v_unused_313_; lean_object* v_unused_314_; lean_object* v_unused_315_; lean_object* v_unused_316_; lean_object* v_unused_317_; lean_object* v_unused_318_; lean_object* v_unused_319_; 
v_unused_312_ = lean_ctor_get(v_s_239_, 7);
lean_dec(v_unused_312_);
v_unused_313_ = lean_ctor_get(v_s_239_, 6);
lean_dec(v_unused_313_);
v_unused_314_ = lean_ctor_get(v_s_239_, 5);
lean_dec(v_unused_314_);
v_unused_315_ = lean_ctor_get(v_s_239_, 4);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_s_239_, 3);
lean_dec(v_unused_316_);
v_unused_317_ = lean_ctor_get(v_s_239_, 2);
lean_dec(v_unused_317_);
v_unused_318_ = lean_ctor_get(v_s_239_, 1);
lean_dec(v_unused_318_);
v_unused_319_ = lean_ctor_get(v_s_239_, 0);
lean_dec(v_unused_319_);
v___x_251_ = v_s_239_;
v_isShared_252_ = v_isSharedCheck_311_;
goto v_resetjp_250_;
}
else
{
lean_dec(v_s_239_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_311_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v_v_253_; lean_object* v_id_254_; lean_object* v_ringId_x3f_255_; lean_object* v_type_256_; lean_object* v_u_257_; lean_object* v_intModuleInst_258_; lean_object* v_leInst_x3f_259_; lean_object* v_ltInst_x3f_260_; lean_object* v_lawfulOrderLTInst_x3f_261_; lean_object* v_isPreorderInst_x3f_262_; lean_object* v_orderedAddInst_x3f_263_; lean_object* v_isLinearInst_x3f_264_; lean_object* v_noNatDivInst_x3f_265_; lean_object* v_ringInst_x3f_266_; lean_object* v_commRingInst_x3f_267_; lean_object* v_orderedRingInst_x3f_268_; lean_object* v_fieldInst_x3f_269_; lean_object* v_charInst_x3f_270_; lean_object* v_zero_271_; lean_object* v_ofNatZero_272_; lean_object* v_one_x3f_273_; lean_object* v_leFn_x3f_274_; lean_object* v_ltFn_x3f_275_; lean_object* v_addFn_276_; lean_object* v_zsmulFn_277_; lean_object* v_nsmulFn_278_; lean_object* v_zsmulFn_x3f_279_; lean_object* v_nsmulFn_x3f_280_; lean_object* v_homomulFn_x3f_281_; lean_object* v_subFn_282_; lean_object* v_negFn_283_; lean_object* v_vars_284_; lean_object* v_varMap_285_; lean_object* v_lowers_286_; lean_object* v_uppers_287_; lean_object* v_diseqs_288_; lean_object* v_assignment_289_; uint8_t v_caseSplits_290_; lean_object* v_conflict_x3f_291_; lean_object* v_diseqSplits_292_; lean_object* v_elimEqs_293_; lean_object* v_elimStack_294_; lean_object* v_occurs_295_; lean_object* v_ignored_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_310_; 
v_v_253_ = lean_array_fget(v_structs_240_, v___y_236_);
v_id_254_ = lean_ctor_get(v_v_253_, 0);
v_ringId_x3f_255_ = lean_ctor_get(v_v_253_, 1);
v_type_256_ = lean_ctor_get(v_v_253_, 2);
v_u_257_ = lean_ctor_get(v_v_253_, 3);
v_intModuleInst_258_ = lean_ctor_get(v_v_253_, 4);
v_leInst_x3f_259_ = lean_ctor_get(v_v_253_, 5);
v_ltInst_x3f_260_ = lean_ctor_get(v_v_253_, 6);
v_lawfulOrderLTInst_x3f_261_ = lean_ctor_get(v_v_253_, 7);
v_isPreorderInst_x3f_262_ = lean_ctor_get(v_v_253_, 8);
v_orderedAddInst_x3f_263_ = lean_ctor_get(v_v_253_, 9);
v_isLinearInst_x3f_264_ = lean_ctor_get(v_v_253_, 10);
v_noNatDivInst_x3f_265_ = lean_ctor_get(v_v_253_, 11);
v_ringInst_x3f_266_ = lean_ctor_get(v_v_253_, 12);
v_commRingInst_x3f_267_ = lean_ctor_get(v_v_253_, 13);
v_orderedRingInst_x3f_268_ = lean_ctor_get(v_v_253_, 14);
v_fieldInst_x3f_269_ = lean_ctor_get(v_v_253_, 15);
v_charInst_x3f_270_ = lean_ctor_get(v_v_253_, 16);
v_zero_271_ = lean_ctor_get(v_v_253_, 17);
v_ofNatZero_272_ = lean_ctor_get(v_v_253_, 18);
v_one_x3f_273_ = lean_ctor_get(v_v_253_, 19);
v_leFn_x3f_274_ = lean_ctor_get(v_v_253_, 20);
v_ltFn_x3f_275_ = lean_ctor_get(v_v_253_, 21);
v_addFn_276_ = lean_ctor_get(v_v_253_, 22);
v_zsmulFn_277_ = lean_ctor_get(v_v_253_, 23);
v_nsmulFn_278_ = lean_ctor_get(v_v_253_, 24);
v_zsmulFn_x3f_279_ = lean_ctor_get(v_v_253_, 25);
v_nsmulFn_x3f_280_ = lean_ctor_get(v_v_253_, 26);
v_homomulFn_x3f_281_ = lean_ctor_get(v_v_253_, 27);
v_subFn_282_ = lean_ctor_get(v_v_253_, 28);
v_negFn_283_ = lean_ctor_get(v_v_253_, 29);
v_vars_284_ = lean_ctor_get(v_v_253_, 30);
v_varMap_285_ = lean_ctor_get(v_v_253_, 31);
v_lowers_286_ = lean_ctor_get(v_v_253_, 32);
v_uppers_287_ = lean_ctor_get(v_v_253_, 33);
v_diseqs_288_ = lean_ctor_get(v_v_253_, 34);
v_assignment_289_ = lean_ctor_get(v_v_253_, 35);
v_caseSplits_290_ = lean_ctor_get_uint8(v_v_253_, sizeof(void*)*42);
v_conflict_x3f_291_ = lean_ctor_get(v_v_253_, 36);
v_diseqSplits_292_ = lean_ctor_get(v_v_253_, 37);
v_elimEqs_293_ = lean_ctor_get(v_v_253_, 38);
v_elimStack_294_ = lean_ctor_get(v_v_253_, 39);
v_occurs_295_ = lean_ctor_get(v_v_253_, 40);
v_ignored_296_ = lean_ctor_get(v_v_253_, 41);
v_isSharedCheck_310_ = !lean_is_exclusive(v_v_253_);
if (v_isSharedCheck_310_ == 0)
{
v___x_298_ = v_v_253_;
v_isShared_299_ = v_isSharedCheck_310_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_ignored_296_);
lean_inc(v_occurs_295_);
lean_inc(v_elimStack_294_);
lean_inc(v_elimEqs_293_);
lean_inc(v_diseqSplits_292_);
lean_inc(v_conflict_x3f_291_);
lean_inc(v_assignment_289_);
lean_inc(v_diseqs_288_);
lean_inc(v_uppers_287_);
lean_inc(v_lowers_286_);
lean_inc(v_varMap_285_);
lean_inc(v_vars_284_);
lean_inc(v_negFn_283_);
lean_inc(v_subFn_282_);
lean_inc(v_homomulFn_x3f_281_);
lean_inc(v_nsmulFn_x3f_280_);
lean_inc(v_zsmulFn_x3f_279_);
lean_inc(v_nsmulFn_278_);
lean_inc(v_zsmulFn_277_);
lean_inc(v_addFn_276_);
lean_inc(v_ltFn_x3f_275_);
lean_inc(v_leFn_x3f_274_);
lean_inc(v_one_x3f_273_);
lean_inc(v_ofNatZero_272_);
lean_inc(v_zero_271_);
lean_inc(v_charInst_x3f_270_);
lean_inc(v_fieldInst_x3f_269_);
lean_inc(v_orderedRingInst_x3f_268_);
lean_inc(v_commRingInst_x3f_267_);
lean_inc(v_ringInst_x3f_266_);
lean_inc(v_noNatDivInst_x3f_265_);
lean_inc(v_isLinearInst_x3f_264_);
lean_inc(v_orderedAddInst_x3f_263_);
lean_inc(v_isPreorderInst_x3f_262_);
lean_inc(v_lawfulOrderLTInst_x3f_261_);
lean_inc(v_ltInst_x3f_260_);
lean_inc(v_leInst_x3f_259_);
lean_inc(v_intModuleInst_258_);
lean_inc(v_u_257_);
lean_inc(v_type_256_);
lean_inc(v_ringId_x3f_255_);
lean_inc(v_id_254_);
lean_dec(v_v_253_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_310_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_300_; lean_object* v_xs_x27_301_; lean_object* v___x_302_; lean_object* v___x_304_; 
v___x_300_ = lean_box(0);
v_xs_x27_301_ = lean_array_fset(v_structs_240_, v___y_236_, v___x_300_);
v___x_302_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__3(v_c_237_, v_lowers_286_, v_v_238_);
if (v_isShared_299_ == 0)
{
lean_ctor_set(v___x_298_, 32, v___x_302_);
v___x_304_ = v___x_298_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_309_; 
v_reuseFailAlloc_309_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_309_, 0, v_id_254_);
lean_ctor_set(v_reuseFailAlloc_309_, 1, v_ringId_x3f_255_);
lean_ctor_set(v_reuseFailAlloc_309_, 2, v_type_256_);
lean_ctor_set(v_reuseFailAlloc_309_, 3, v_u_257_);
lean_ctor_set(v_reuseFailAlloc_309_, 4, v_intModuleInst_258_);
lean_ctor_set(v_reuseFailAlloc_309_, 5, v_leInst_x3f_259_);
lean_ctor_set(v_reuseFailAlloc_309_, 6, v_ltInst_x3f_260_);
lean_ctor_set(v_reuseFailAlloc_309_, 7, v_lawfulOrderLTInst_x3f_261_);
lean_ctor_set(v_reuseFailAlloc_309_, 8, v_isPreorderInst_x3f_262_);
lean_ctor_set(v_reuseFailAlloc_309_, 9, v_orderedAddInst_x3f_263_);
lean_ctor_set(v_reuseFailAlloc_309_, 10, v_isLinearInst_x3f_264_);
lean_ctor_set(v_reuseFailAlloc_309_, 11, v_noNatDivInst_x3f_265_);
lean_ctor_set(v_reuseFailAlloc_309_, 12, v_ringInst_x3f_266_);
lean_ctor_set(v_reuseFailAlloc_309_, 13, v_commRingInst_x3f_267_);
lean_ctor_set(v_reuseFailAlloc_309_, 14, v_orderedRingInst_x3f_268_);
lean_ctor_set(v_reuseFailAlloc_309_, 15, v_fieldInst_x3f_269_);
lean_ctor_set(v_reuseFailAlloc_309_, 16, v_charInst_x3f_270_);
lean_ctor_set(v_reuseFailAlloc_309_, 17, v_zero_271_);
lean_ctor_set(v_reuseFailAlloc_309_, 18, v_ofNatZero_272_);
lean_ctor_set(v_reuseFailAlloc_309_, 19, v_one_x3f_273_);
lean_ctor_set(v_reuseFailAlloc_309_, 20, v_leFn_x3f_274_);
lean_ctor_set(v_reuseFailAlloc_309_, 21, v_ltFn_x3f_275_);
lean_ctor_set(v_reuseFailAlloc_309_, 22, v_addFn_276_);
lean_ctor_set(v_reuseFailAlloc_309_, 23, v_zsmulFn_277_);
lean_ctor_set(v_reuseFailAlloc_309_, 24, v_nsmulFn_278_);
lean_ctor_set(v_reuseFailAlloc_309_, 25, v_zsmulFn_x3f_279_);
lean_ctor_set(v_reuseFailAlloc_309_, 26, v_nsmulFn_x3f_280_);
lean_ctor_set(v_reuseFailAlloc_309_, 27, v_homomulFn_x3f_281_);
lean_ctor_set(v_reuseFailAlloc_309_, 28, v_subFn_282_);
lean_ctor_set(v_reuseFailAlloc_309_, 29, v_negFn_283_);
lean_ctor_set(v_reuseFailAlloc_309_, 30, v_vars_284_);
lean_ctor_set(v_reuseFailAlloc_309_, 31, v_varMap_285_);
lean_ctor_set(v_reuseFailAlloc_309_, 32, v___x_302_);
lean_ctor_set(v_reuseFailAlloc_309_, 33, v_uppers_287_);
lean_ctor_set(v_reuseFailAlloc_309_, 34, v_diseqs_288_);
lean_ctor_set(v_reuseFailAlloc_309_, 35, v_assignment_289_);
lean_ctor_set(v_reuseFailAlloc_309_, 36, v_conflict_x3f_291_);
lean_ctor_set(v_reuseFailAlloc_309_, 37, v_diseqSplits_292_);
lean_ctor_set(v_reuseFailAlloc_309_, 38, v_elimEqs_293_);
lean_ctor_set(v_reuseFailAlloc_309_, 39, v_elimStack_294_);
lean_ctor_set(v_reuseFailAlloc_309_, 40, v_occurs_295_);
lean_ctor_set(v_reuseFailAlloc_309_, 41, v_ignored_296_);
lean_ctor_set_uint8(v_reuseFailAlloc_309_, sizeof(void*)*42, v_caseSplits_290_);
v___x_304_ = v_reuseFailAlloc_309_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
lean_object* v___x_305_; lean_object* v___x_307_; 
v___x_305_ = lean_array_fset(v_xs_x27_301_, v___y_236_, v___x_304_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v___x_305_);
v___x_307_ = v___x_251_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v___x_305_);
lean_ctor_set(v_reuseFailAlloc_308_, 1, v_typeIdOf_241_);
lean_ctor_set(v_reuseFailAlloc_308_, 2, v_exprToStructId_242_);
lean_ctor_set(v_reuseFailAlloc_308_, 3, v_exprToStructIdEntries_243_);
lean_ctor_set(v_reuseFailAlloc_308_, 4, v_forbiddenNatModules_244_);
lean_ctor_set(v_reuseFailAlloc_308_, 5, v_natStructs_245_);
lean_ctor_set(v_reuseFailAlloc_308_, 6, v_natTypeIdOf_246_);
lean_ctor_set(v_reuseFailAlloc_308_, 7, v_exprToNatStructId_247_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1___boxed(lean_object* v___y_320_, lean_object* v_c_321_, lean_object* v_v_322_, lean_object* v_s_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1(v___y_320_, v_c_321_, v_v_322_, v_s_323_);
lean_dec(v_v_322_);
lean_dec(v___y_320_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__3(lean_object* v_msgData_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_, lean_object* v___y_329_){
_start:
{
lean_object* v___x_331_; lean_object* v_env_332_; lean_object* v___x_333_; lean_object* v_mctx_334_; lean_object* v_lctx_335_; lean_object* v_options_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_331_ = lean_st_ref_get(v___y_329_);
v_env_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc_ref(v_env_332_);
lean_dec(v___x_331_);
v___x_333_ = lean_st_ref_get(v___y_327_);
v_mctx_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc_ref(v_mctx_334_);
lean_dec(v___x_333_);
v_lctx_335_ = lean_ctor_get(v___y_326_, 2);
v_options_336_ = lean_ctor_get(v___y_328_, 2);
lean_inc_ref(v_options_336_);
lean_inc_ref(v_lctx_335_);
v___x_337_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_337_, 0, v_env_332_);
lean_ctor_set(v___x_337_, 1, v_mctx_334_);
lean_ctor_set(v___x_337_, 2, v_lctx_335_);
lean_ctor_set(v___x_337_, 3, v_options_336_);
v___x_338_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v_msgData_325_);
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__3___boxed(lean_object* v_msgData_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__3(v_msgData_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
return v_res_346_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_347_; double v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(0u);
v___x_348_ = lean_float_of_nat(v___x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg(lean_object* v_cls_352_, lean_object* v_msg_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_ref_359_; lean_object* v___x_360_; lean_object* v_a_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_405_; 
v_ref_359_ = lean_ctor_get(v___y_356_, 5);
v___x_360_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__3(v_msg_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
v_a_361_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_405_ == 0)
{
v___x_363_ = v___x_360_;
v_isShared_364_ = v_isSharedCheck_405_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_a_361_);
lean_dec(v___x_360_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_405_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; lean_object* v_traceState_366_; lean_object* v_env_367_; lean_object* v_nextMacroScope_368_; lean_object* v_ngen_369_; lean_object* v_auxDeclNGen_370_; lean_object* v_cache_371_; lean_object* v_messages_372_; lean_object* v_infoState_373_; lean_object* v_snapshotTasks_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_404_; 
v___x_365_ = lean_st_ref_take(v___y_357_);
v_traceState_366_ = lean_ctor_get(v___x_365_, 4);
v_env_367_ = lean_ctor_get(v___x_365_, 0);
v_nextMacroScope_368_ = lean_ctor_get(v___x_365_, 1);
v_ngen_369_ = lean_ctor_get(v___x_365_, 2);
v_auxDeclNGen_370_ = lean_ctor_get(v___x_365_, 3);
v_cache_371_ = lean_ctor_get(v___x_365_, 5);
v_messages_372_ = lean_ctor_get(v___x_365_, 6);
v_infoState_373_ = lean_ctor_get(v___x_365_, 7);
v_snapshotTasks_374_ = lean_ctor_get(v___x_365_, 8);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_404_ == 0)
{
v___x_376_ = v___x_365_;
v_isShared_377_ = v_isSharedCheck_404_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_snapshotTasks_374_);
lean_inc(v_infoState_373_);
lean_inc(v_messages_372_);
lean_inc(v_cache_371_);
lean_inc(v_traceState_366_);
lean_inc(v_auxDeclNGen_370_);
lean_inc(v_ngen_369_);
lean_inc(v_nextMacroScope_368_);
lean_inc(v_env_367_);
lean_dec(v___x_365_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_404_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
uint64_t v_tid_378_; lean_object* v_traces_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_403_; 
v_tid_378_ = lean_ctor_get_uint64(v_traceState_366_, sizeof(void*)*1);
v_traces_379_ = lean_ctor_get(v_traceState_366_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v_traceState_366_);
if (v_isSharedCheck_403_ == 0)
{
v___x_381_ = v_traceState_366_;
v_isShared_382_ = v_isSharedCheck_403_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_traces_379_);
lean_dec(v_traceState_366_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_403_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_383_; double v___x_384_; uint8_t v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_383_ = lean_box(0);
v___x_384_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__0);
v___x_385_ = 0;
v___x_386_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__1));
v___x_387_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_387_, 0, v_cls_352_);
lean_ctor_set(v___x_387_, 1, v___x_383_);
lean_ctor_set(v___x_387_, 2, v___x_386_);
lean_ctor_set_float(v___x_387_, sizeof(void*)*3, v___x_384_);
lean_ctor_set_float(v___x_387_, sizeof(void*)*3 + 8, v___x_384_);
lean_ctor_set_uint8(v___x_387_, sizeof(void*)*3 + 16, v___x_385_);
v___x_388_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___closed__2));
v___x_389_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_389_, 0, v___x_387_);
lean_ctor_set(v___x_389_, 1, v_a_361_);
lean_ctor_set(v___x_389_, 2, v___x_388_);
lean_inc(v_ref_359_);
v___x_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_390_, 0, v_ref_359_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = l_Lean_PersistentArray_push___redArg(v_traces_379_, v___x_390_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v___x_391_);
v___x_393_ = v___x_381_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_391_);
lean_ctor_set_uint64(v_reuseFailAlloc_402_, sizeof(void*)*1, v_tid_378_);
v___x_393_ = v_reuseFailAlloc_402_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_395_; 
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 4, v___x_393_);
v___x_395_ = v___x_376_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_env_367_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_nextMacroScope_368_);
lean_ctor_set(v_reuseFailAlloc_401_, 2, v_ngen_369_);
lean_ctor_set(v_reuseFailAlloc_401_, 3, v_auxDeclNGen_370_);
lean_ctor_set(v_reuseFailAlloc_401_, 4, v___x_393_);
lean_ctor_set(v_reuseFailAlloc_401_, 5, v_cache_371_);
lean_ctor_set(v_reuseFailAlloc_401_, 6, v_messages_372_);
lean_ctor_set(v_reuseFailAlloc_401_, 7, v_infoState_373_);
lean_ctor_set(v_reuseFailAlloc_401_, 8, v_snapshotTasks_374_);
v___x_395_ = v_reuseFailAlloc_401_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_396_ = lean_st_ref_set(v___y_357_, v___x_395_);
v___x_397_ = lean_box(0);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v___x_397_);
v___x_399_ = v___x_363_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_397_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg___boxed(lean_object* v_cls_406_, lean_object* v_msg_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg(v_cls_406_, v_msg_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6___redArg(lean_object* v_msg_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_ref_420_; lean_object* v___x_421_; lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_430_; 
v_ref_420_ = lean_ctor_get(v___y_417_, 5);
v___x_421_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2_spec__3(v_msg_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
v_a_422_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_430_ == 0)
{
v___x_424_ = v___x_421_;
v_isShared_425_ = v_isSharedCheck_430_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_421_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_430_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_426_; lean_object* v___x_428_; 
lean_inc(v_ref_420_);
v___x_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_426_, 0, v_ref_420_);
lean_ctor_set(v___x_426_, 1, v_a_422_);
if (v_isShared_425_ == 0)
{
lean_ctor_set_tag(v___x_424_, 1);
lean_ctor_set(v___x_424_, 0, v___x_426_);
v___x_428_ = v___x_424_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_426_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_msg_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6___redArg(v_msg_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
return v_res_437_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___closed__1(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___closed__0));
v___x_440_ = l_Lean_stringToMessageData(v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4(lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_465_; 
v_a_454_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_465_ == 0)
{
v___x_456_ = v___x_453_;
v_isShared_457_ = v_isSharedCheck_465_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_453_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_465_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v_ltFn_x3f_458_; 
v_ltFn_x3f_458_ = lean_ctor_get(v_a_454_, 21);
lean_inc(v_ltFn_x3f_458_);
lean_dec(v_a_454_);
if (lean_obj_tag(v_ltFn_x3f_458_) == 1)
{
lean_object* v_val_459_; lean_object* v___x_461_; 
v_val_459_ = lean_ctor_get(v_ltFn_x3f_458_, 0);
lean_inc(v_val_459_);
lean_dec_ref(v_ltFn_x3f_458_);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v_val_459_);
v___x_461_ = v___x_456_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_val_459_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
else
{
lean_object* v___x_463_; lean_object* v___x_464_; 
lean_dec(v_ltFn_x3f_458_);
lean_del_object(v___x_456_);
v___x_463_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___closed__1);
v___x_464_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6___redArg(v___x_463_, v___y_448_, v___y_449_, v___y_450_, v___y_451_);
return v___x_464_;
}
}
}
else
{
lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
v_a_466_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_473_ == 0)
{
v___x_468_ = v___x_453_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_453_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_471_; 
if (v_isShared_469_ == 0)
{
v___x_471_ = v___x_468_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_466_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4___boxed(lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4(v___y_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
lean_dec(v___y_476_);
lean_dec(v___y_475_);
lean_dec(v___y_474_);
return v_res_486_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___closed__1(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
v___x_488_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___closed__0));
v___x_489_ = l_Lean_stringToMessageData(v___x_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2(lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_514_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_514_ == 0)
{
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_514_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_514_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v_leFn_x3f_507_; 
v_leFn_x3f_507_ = lean_ctor_get(v_a_503_, 20);
lean_inc(v_leFn_x3f_507_);
lean_dec(v_a_503_);
if (lean_obj_tag(v_leFn_x3f_507_) == 1)
{
lean_object* v_val_508_; lean_object* v___x_510_; 
v_val_508_ = lean_ctor_get(v_leFn_x3f_507_, 0);
lean_inc(v_val_508_);
lean_dec_ref(v_leFn_x3f_507_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v_val_508_);
v___x_510_ = v___x_505_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v_val_508_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
else
{
lean_object* v___x_512_; lean_object* v___x_513_; 
lean_dec(v_leFn_x3f_507_);
lean_del_object(v___x_505_);
v___x_512_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___closed__1);
v___x_513_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6___redArg(v___x_512_, v___y_497_, v___y_498_, v___y_499_, v___y_500_);
return v___x_513_;
}
}
}
else
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_522_; 
v_a_515_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_522_ == 0)
{
v___x_517_ = v___x_502_;
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v___x_502_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_522_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2___boxed(lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2(v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec(v___y_531_);
lean_dec_ref(v___y_530_);
lean_dec(v___y_529_);
lean_dec_ref(v___y_528_);
lean_dec(v___y_527_);
lean_dec_ref(v___y_526_);
lean_dec(v___y_525_);
lean_dec(v___y_524_);
lean_dec(v___y_523_);
return v_res_535_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8___closed__0(void){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_unsigned_to_nat(1u);
v___x_537_ = lean_nat_to_int(v___x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8(lean_object* v_k_538_, lean_object* v_x_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8___closed__0);
v___x_553_ = lean_int_dec_eq(v_k_538_, v___x_552_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; 
v___x_554_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
if (lean_obj_tag(v___x_554_) == 0)
{
lean_object* v_a_555_; lean_object* v___x_556_; 
v_a_555_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_a_555_);
lean_dec_ref(v___x_554_);
v___x_556_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_575_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_575_ == 0)
{
v___x_559_ = v___x_556_;
v_isShared_560_ = v_isSharedCheck_575_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_556_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_575_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v_vars_561_; lean_object* v_zsmulFn_562_; lean_object* v_size_563_; lean_object* v___x_564_; lean_object* v___y_566_; lean_object* v___x_571_; uint8_t v___x_572_; 
v_vars_561_ = lean_ctor_get(v_a_557_, 30);
lean_inc_ref(v_vars_561_);
lean_dec(v_a_557_);
v_zsmulFn_562_ = lean_ctor_get(v_a_555_, 23);
lean_inc_ref(v_zsmulFn_562_);
lean_dec(v_a_555_);
v_size_563_ = lean_ctor_get(v_vars_561_, 2);
v___x_564_ = l_Lean_mkIntLit(v_k_538_);
v___x_571_ = l_Lean_instInhabitedExpr;
v___x_572_ = lean_nat_dec_lt(v_x_539_, v_size_563_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; 
lean_dec_ref(v_vars_561_);
v___x_573_ = l_outOfBounds___redArg(v___x_571_);
v___y_566_ = v___x_573_;
goto v___jp_565_;
}
else
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_PersistentArray_get_x21___redArg(v___x_571_, v_vars_561_, v_x_539_);
lean_dec_ref(v_vars_561_);
v___y_566_ = v___x_574_;
goto v___jp_565_;
}
v___jp_565_:
{
lean_object* v___x_567_; lean_object* v___x_569_; 
v___x_567_ = l_Lean_mkAppB(v_zsmulFn_562_, v___x_564_, v___y_566_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 0, v___x_567_);
v___x_569_ = v___x_559_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v___x_567_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
else
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
lean_dec(v_a_555_);
v_a_576_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_556_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_556_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
v_a_584_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_554_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_554_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
else
{
lean_object* v___x_592_; 
v___x_592_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_609_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_609_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_609_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_609_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v_vars_597_; lean_object* v_size_598_; lean_object* v___x_599_; uint8_t v___x_600_; 
v_vars_597_ = lean_ctor_get(v_a_593_, 30);
lean_inc_ref(v_vars_597_);
lean_dec(v_a_593_);
v_size_598_ = lean_ctor_get(v_vars_597_, 2);
v___x_599_ = l_Lean_instInhabitedExpr;
v___x_600_ = lean_nat_dec_lt(v_x_539_, v_size_598_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; lean_object* v___x_603_; 
lean_dec_ref(v_vars_597_);
v___x_601_ = l_outOfBounds___redArg(v___x_599_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_601_);
v___x_603_ = v___x_595_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
else
{
lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_605_ = l_Lean_PersistentArray_get_x21___redArg(v___x_599_, v_vars_597_, v_x_539_);
lean_dec_ref(v_vars_597_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_605_);
v___x_607_ = v___x_595_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
v_a_610_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_592_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_592_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8___boxed(lean_object* v_k_618_, lean_object* v_x_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8(v_k_618_, v_x_619_, v___y_620_, v___y_621_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_, v___y_630_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec(v___y_628_);
lean_dec_ref(v___y_627_);
lean_dec(v___y_626_);
lean_dec_ref(v___y_625_);
lean_dec(v___y_624_);
lean_dec_ref(v___y_623_);
lean_dec(v___y_622_);
lean_dec(v___y_621_);
lean_dec(v___y_620_);
lean_dec(v_x_619_);
lean_dec(v_k_618_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__9(lean_object* v_p_633_, lean_object* v_acc_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
if (lean_obj_tag(v_p_633_) == 0)
{
lean_object* v___x_647_; 
v___x_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_647_, 0, v_acc_634_);
return v___x_647_;
}
else
{
lean_object* v_k_648_; lean_object* v_v_649_; lean_object* v_p_650_; lean_object* v___x_651_; 
v_k_648_ = lean_ctor_get(v_p_633_, 0);
v_v_649_ = lean_ctor_get(v_p_633_, 1);
v_p_650_ = lean_ctor_get(v_p_633_, 2);
v___x_651_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_653_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_a_652_);
lean_dec_ref(v___x_651_);
v___x_653_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8(v_k_648_, v_v_649_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v_addFn_655_; lean_object* v___x_656_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_a_654_);
lean_dec_ref(v___x_653_);
v_addFn_655_ = lean_ctor_get(v_a_652_, 22);
lean_inc_ref(v_addFn_655_);
lean_dec(v_a_652_);
v___x_656_ = l_Lean_mkAppB(v_addFn_655_, v_acc_634_, v_a_654_);
v_p_633_ = v_p_650_;
v_acc_634_ = v___x_656_;
goto _start;
}
else
{
lean_dec(v_a_652_);
lean_dec_ref(v_acc_634_);
return v___x_653_;
}
}
else
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_665_; 
lean_dec_ref(v_acc_634_);
v_a_658_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_665_ == 0)
{
v___x_660_ = v___x_651_;
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_651_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_663_; 
if (v_isShared_661_ == 0)
{
v___x_663_ = v___x_660_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_a_658_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__9___boxed(lean_object* v_p_666_, lean_object* v_acc_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__9(v_p_666_, v_acc_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_);
lean_dec(v___y_678_);
lean_dec_ref(v___y_677_);
lean_dec(v___y_676_);
lean_dec_ref(v___y_675_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
lean_dec(v___y_670_);
lean_dec(v___y_669_);
lean_dec(v___y_668_);
lean_dec(v_p_666_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3(lean_object* v_p_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
if (lean_obj_tag(v_p_681_) == 0)
{
lean_object* v___x_694_; 
v___x_694_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_703_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_703_ == 0)
{
v___x_697_ = v___x_694_;
v_isShared_698_ = v_isSharedCheck_703_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_694_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_703_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v_zero_699_; lean_object* v___x_701_; 
v_zero_699_ = lean_ctor_get(v_a_695_, 17);
lean_inc_ref(v_zero_699_);
lean_dec(v_a_695_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 0, v_zero_699_);
v___x_701_ = v___x_697_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_zero_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
v_a_704_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_694_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_694_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
else
{
lean_object* v_k_712_; lean_object* v_v_713_; lean_object* v_p_714_; lean_object* v___x_715_; 
v_k_712_ = lean_ctor_get(v_p_681_, 0);
v_v_713_ = lean_ctor_get(v_p_681_, 1);
v_p_714_ = lean_ctor_get(v_p_681_, 2);
v___x_715_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_denoteTerm___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__8(v_k_712_, v_v_713_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_717_; 
v_a_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_a_716_);
lean_dec_ref(v___x_715_);
v___x_717_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Grind_Linarith_Poly_denoteExpr_go___at___00Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3_spec__9(v_p_714_, v_a_716_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_);
return v___x_717_;
}
else
{
return v___x_715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3___boxed(lean_object* v_p_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3(v_p_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec(v___y_721_);
lean_dec(v___y_720_);
lean_dec(v___y_719_);
lean_dec(v_p_718_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1(lean_object* v_p_732_, uint8_t v_strict_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
if (v_strict_733_ == 0)
{
lean_object* v___x_746_; 
v___x_746_ = l_Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2(v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_748_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
lean_dec_ref(v___x_746_);
v___x_748_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3(v_p_732_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref(v___x_748_);
v___x_750_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_760_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_760_ == 0)
{
v___x_753_ = v___x_750_;
v_isShared_754_ = v_isSharedCheck_760_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_750_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_760_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v_ofNatZero_755_; lean_object* v___x_756_; lean_object* v___x_758_; 
v_ofNatZero_755_ = lean_ctor_get(v_a_751_, 18);
lean_inc_ref(v_ofNatZero_755_);
lean_dec(v_a_751_);
v___x_756_ = l_Lean_mkAppB(v_a_747_, v_a_749_, v_ofNatZero_755_);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 0, v___x_756_);
v___x_758_ = v___x_753_;
goto v_reusejp_757_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v___x_756_);
v___x_758_ = v_reuseFailAlloc_759_;
goto v_reusejp_757_;
}
v_reusejp_757_:
{
return v___x_758_;
}
}
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_dec(v_a_749_);
lean_dec(v_a_747_);
v_a_761_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_750_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_750_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
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
else
{
lean_dec(v_a_747_);
return v___x_748_;
}
}
else
{
return v___x_746_;
}
}
else
{
lean_object* v___x_769_; 
v___x_769_ = l_Lean_Meta_Grind_Arith_Linear_getLtFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__4(v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_771_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref(v___x_769_);
v___x_771_ = l_Lean_Grind_Linarith_Poly_denoteExpr___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__3(v_p_732_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_773_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref(v___x_771_);
v___x_773_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_783_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_783_ == 0)
{
v___x_776_ = v___x_773_;
v_isShared_777_ = v_isSharedCheck_783_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_773_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_783_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v_ofNatZero_778_; lean_object* v___x_779_; lean_object* v___x_781_; 
v_ofNatZero_778_ = lean_ctor_get(v_a_774_, 18);
lean_inc_ref(v_ofNatZero_778_);
lean_dec(v_a_774_);
v___x_779_ = l_Lean_mkAppB(v_a_770_, v_a_772_, v_ofNatZero_778_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 0, v___x_779_);
v___x_781_ = v___x_776_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec(v_a_772_);
lean_dec(v_a_770_);
v_a_784_ = lean_ctor_get(v___x_773_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_773_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_773_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
else
{
lean_dec(v_a_770_);
return v___x_771_;
}
}
else
{
return v___x_769_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1___boxed(lean_object* v_p_792_, lean_object* v_strict_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
uint8_t v_strict_boxed_806_; lean_object* v_res_807_; 
v_strict_boxed_806_ = lean_unbox(v_strict_793_);
v_res_807_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1(v_p_792_, v_strict_boxed_806_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
lean_dec(v___y_804_);
lean_dec_ref(v___y_803_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec(v___y_795_);
lean_dec(v___y_794_);
lean_dec(v_p_792_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1(lean_object* v_c_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_p_821_; uint8_t v_strict_822_; lean_object* v___x_823_; 
v_p_821_ = lean_ctor_get(v_c_808_, 0);
v_strict_822_ = lean_ctor_get_uint8(v_c_808_, sizeof(void*)*2);
v___x_823_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1(v_p_821_, v_strict_822_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1___boxed(lean_object* v_c_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1(v_c_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec(v___y_831_);
lean_dec_ref(v___y_830_);
lean_dec(v___y_829_);
lean_dec_ref(v___y_828_);
lean_dec(v___y_827_);
lean_dec(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v_c_824_);
return v_res_837_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_unsigned_to_nat(0u);
v___x_839_ = lean_nat_to_int(v___x_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(lean_object* v_c_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_){
_start:
{
lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; lean_object* v___y_891_; lean_object* v___y_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_926_; lean_object* v___y_927_; lean_object* v___y_928_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_933_; lean_object* v___y_934_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_939_; lean_object* v___y_940_; lean_object* v___y_951_; lean_object* v___y_952_; lean_object* v___y_953_; lean_object* v___y_954_; lean_object* v___y_955_; lean_object* v___y_956_; lean_object* v___y_957_; lean_object* v___y_958_; lean_object* v___y_959_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v_cls_1022_; lean_object* v___x_1023_; lean_object* v_a_1024_; uint8_t v___x_1025_; 
v_cls_1022_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__10));
v___x_1023_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg(v_cls_1022_, v_a_873_);
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1024_);
lean_dec_ref(v___x_1023_);
v___x_1025_ = lean_unbox(v_a_1024_);
lean_dec(v_a_1024_);
if (v___x_1025_ == 0)
{
v___y_951_ = v_a_864_;
v___y_952_ = v_a_865_;
v___y_953_ = v_a_866_;
v___y_954_ = v_a_867_;
v___y_955_ = v_a_868_;
v___y_956_ = v_a_869_;
v___y_957_ = v_a_870_;
v___y_958_ = v_a_871_;
v___y_959_ = v_a_872_;
v___y_960_ = v_a_873_;
v___y_961_ = v_a_874_;
goto v___jp_950_;
}
else
{
lean_object* v___x_1026_; 
v___x_1026_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1(v_c_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
lean_inc(v_a_1027_);
lean_dec_ref(v___x_1026_);
v___x_1028_ = l_Lean_MessageData_ofExpr(v_a_1027_);
v___x_1029_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg(v_cls_1022_, v___x_1028_, v_a_871_, v_a_872_, v_a_873_, v_a_874_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_dec_ref(v___x_1029_);
v___y_951_ = v_a_864_;
v___y_952_ = v_a_865_;
v___y_953_ = v_a_866_;
v___y_954_ = v_a_867_;
v___y_955_ = v_a_868_;
v___y_956_ = v_a_869_;
v___y_957_ = v_a_870_;
v___y_958_ = v_a_871_;
v___y_959_ = v_a_872_;
v___y_960_ = v_a_873_;
v___y_961_ = v_a_874_;
goto v___jp_950_;
}
else
{
lean_dec_ref(v_c_863_);
return v___x_1029_;
}
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
lean_dec_ref(v_c_863_);
v_a_1030_ = lean_ctor_get(v___x_1026_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_1026_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_1026_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
v___jp_876_:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_888_, 0, v_c_863_);
v___x_889_ = l_Lean_Meta_Grind_Arith_Linear_setInconsistent(v___x_888_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
return v___x_889_;
}
v___jp_890_:
{
lean_object* v___x_903_; 
v___x_903_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied(v_c_863_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_916_; 
v_a_904_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_916_ == 0)
{
v___x_906_ = v___x_903_;
v_isShared_907_ = v_isSharedCheck_916_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_916_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
uint8_t v___x_908_; uint8_t v___x_909_; uint8_t v___x_910_; 
v___x_908_ = 0;
v___x_909_ = lean_unbox(v_a_904_);
lean_dec(v_a_904_);
v___x_910_ = l_Lean_instBEqLBool_beq(v___x_909_, v___x_908_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; lean_object* v___x_913_; 
lean_dec(v___y_891_);
v___x_911_ = lean_box(0);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v___x_911_);
v___x_913_ = v___x_906_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
else
{
lean_object* v___x_915_; 
lean_del_object(v___x_906_);
v___x_915_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(v___y_891_, v___y_892_, v___y_893_);
return v___x_915_;
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec(v___y_891_);
v_a_917_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_903_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_903_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
v___jp_925_:
{
lean_object* v___x_941_; 
v___x_941_ = l_Lean_Grind_Linarith_Poly_updateOccs(v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v___x_942_; uint8_t v___x_943_; 
lean_dec_ref(v___x_941_);
v___x_942_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0, &l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__0);
v___x_943_ = lean_int_dec_lt(v___y_927_, v___x_942_);
lean_dec(v___y_927_);
if (v___x_943_ == 0)
{
lean_object* v___f_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
lean_inc_ref(v_c_863_);
lean_inc(v___y_930_);
v___f_944_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__0___boxed), 4, 3);
lean_closure_set(v___f_944_, 0, v___y_930_);
lean_closure_set(v___f_944_, 1, v_c_863_);
lean_closure_set(v___f_944_, 2, v___y_926_);
v___x_945_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_946_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_945_, v___f_944_, v___y_931_);
if (lean_obj_tag(v___x_946_) == 0)
{
lean_dec_ref(v___x_946_);
v___y_891_ = v___y_928_;
v___y_892_ = v___y_930_;
v___y_893_ = v___y_931_;
v___y_894_ = v___y_932_;
v___y_895_ = v___y_933_;
v___y_896_ = v___y_934_;
v___y_897_ = v___y_935_;
v___y_898_ = v___y_936_;
v___y_899_ = v___y_937_;
v___y_900_ = v___y_938_;
v___y_901_ = v___y_939_;
v___y_902_ = v___y_940_;
goto v___jp_890_;
}
else
{
lean_dec(v___y_928_);
lean_dec_ref(v_c_863_);
return v___x_946_;
}
}
else
{
lean_object* v___f_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
lean_inc_ref(v_c_863_);
lean_inc(v___y_930_);
v___f_947_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___lam__1___boxed), 4, 3);
lean_closure_set(v___f_947_, 0, v___y_930_);
lean_closure_set(v___f_947_, 1, v_c_863_);
lean_closure_set(v___f_947_, 2, v___y_926_);
v___x_948_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_949_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_948_, v___f_947_, v___y_931_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_dec_ref(v___x_949_);
v___y_891_ = v___y_928_;
v___y_892_ = v___y_930_;
v___y_893_ = v___y_931_;
v___y_894_ = v___y_932_;
v___y_895_ = v___y_933_;
v___y_896_ = v___y_934_;
v___y_897_ = v___y_935_;
v___y_898_ = v___y_936_;
v___y_899_ = v___y_937_;
v___y_900_ = v___y_938_;
v___y_901_ = v___y_939_;
v___y_902_ = v___y_940_;
goto v___jp_890_;
}
else
{
lean_dec(v___y_928_);
lean_dec_ref(v_c_863_);
return v___x_949_;
}
}
}
else
{
lean_dec(v___y_928_);
lean_dec(v___y_927_);
lean_dec(v___y_926_);
lean_dec_ref(v_c_863_);
return v___x_941_;
}
}
v___jp_950_:
{
lean_object* v_p_962_; 
v_p_962_ = lean_ctor_get(v_c_863_, 0);
if (lean_obj_tag(v_p_962_) == 0)
{
uint8_t v_strict_963_; 
v_strict_963_ = lean_ctor_get_uint8(v_c_863_, sizeof(void*)*2);
if (v_strict_963_ == 0)
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_987_; 
v___x_964_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__5));
v___x_965_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg(v___x_964_, v___y_960_);
v_a_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_987_ == 0)
{
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_987_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_987_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
uint8_t v___x_970_; 
v___x_970_ = lean_unbox(v_a_966_);
lean_dec(v_a_966_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; lean_object* v___x_973_; 
lean_dec_ref(v_c_863_);
v___x_971_ = lean_box(0);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v___x_971_);
v___x_973_ = v___x_968_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___x_971_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
else
{
lean_object* v___x_975_; 
lean_del_object(v___x_968_);
v___x_975_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1(v_c_863_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
lean_dec_ref(v_c_863_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc(v_a_976_);
lean_dec_ref(v___x_975_);
v___x_977_ = l_Lean_MessageData_ofExpr(v_a_976_);
v___x_978_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg(v___x_964_, v___x_977_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
return v___x_978_;
}
else
{
lean_object* v_a_979_; lean_object* v___x_981_; uint8_t v_isShared_982_; uint8_t v_isSharedCheck_986_; 
v_a_979_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_986_ == 0)
{
v___x_981_ = v___x_975_;
v_isShared_982_ = v_isSharedCheck_986_;
goto v_resetjp_980_;
}
else
{
lean_inc(v_a_979_);
lean_dec(v___x_975_);
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
}
else
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v_a_990_; uint8_t v___x_991_; 
v___x_988_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__7));
v___x_989_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg(v___x_988_, v___y_960_);
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref(v___x_989_);
v___x_991_ = lean_unbox(v_a_990_);
lean_dec(v_a_990_);
if (v___x_991_ == 0)
{
v___y_877_ = v___y_951_;
v___y_878_ = v___y_952_;
v___y_879_ = v___y_953_;
v___y_880_ = v___y_954_;
v___y_881_ = v___y_955_;
v___y_882_ = v___y_956_;
v___y_883_ = v___y_957_;
v___y_884_ = v___y_958_;
v___y_885_ = v___y_959_;
v___y_886_ = v___y_960_;
v___y_887_ = v___y_961_;
goto v___jp_876_;
}
else
{
lean_object* v___x_992_; 
v___x_992_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1(v_c_863_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v_a_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v_a_993_ = lean_ctor_get(v___x_992_, 0);
lean_inc(v_a_993_);
lean_dec_ref(v___x_992_);
v___x_994_ = l_Lean_MessageData_ofExpr(v_a_993_);
v___x_995_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg(v___x_988_, v___x_994_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_dec_ref(v___x_995_);
v___y_877_ = v___y_951_;
v___y_878_ = v___y_952_;
v___y_879_ = v___y_953_;
v___y_880_ = v___y_954_;
v___y_881_ = v___y_955_;
v___y_882_ = v___y_956_;
v___y_883_ = v___y_957_;
v___y_884_ = v___y_958_;
v___y_885_ = v___y_959_;
v___y_886_ = v___y_960_;
v___y_887_ = v___y_961_;
goto v___jp_876_;
}
else
{
lean_dec_ref(v_c_863_);
return v___x_995_;
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
lean_dec_ref(v_c_863_);
v_a_996_ = lean_ctor_get(v___x_992_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_992_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_992_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
}
}
else
{
lean_object* v_k_1004_; lean_object* v_v_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v_a_1008_; uint8_t v___x_1009_; 
v_k_1004_ = lean_ctor_get(v_p_962_, 0);
v_v_1005_ = lean_ctor_get(v_p_962_, 1);
v___x_1006_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___closed__9));
v___x_1007_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__0___redArg(v___x_1006_, v___y_960_);
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
lean_dec_ref(v___x_1007_);
v___x_1009_ = lean_unbox(v_a_1008_);
lean_dec(v_a_1008_);
if (v___x_1009_ == 0)
{
lean_inc_ref(v_p_962_);
lean_inc(v_k_1004_);
lean_inc_n(v_v_1005_, 2);
v___y_926_ = v_v_1005_;
v___y_927_ = v_k_1004_;
v___y_928_ = v_v_1005_;
v___y_929_ = v_p_962_;
v___y_930_ = v___y_951_;
v___y_931_ = v___y_952_;
v___y_932_ = v___y_953_;
v___y_933_ = v___y_954_;
v___y_934_ = v___y_955_;
v___y_935_ = v___y_956_;
v___y_936_ = v___y_957_;
v___y_937_ = v___y_958_;
v___y_938_ = v___y_959_;
v___y_939_ = v___y_960_;
v___y_940_ = v___y_961_;
goto v___jp_925_;
}
else
{
lean_object* v___x_1010_; 
v___x_1010_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1(v_c_863_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref(v___x_1010_);
v___x_1012_ = l_Lean_MessageData_ofExpr(v_a_1011_);
v___x_1013_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg(v___x_1006_, v___x_1012_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_dec_ref(v___x_1013_);
lean_inc_ref(v_p_962_);
lean_inc(v_k_1004_);
lean_inc_n(v_v_1005_, 2);
v___y_926_ = v_v_1005_;
v___y_927_ = v_k_1004_;
v___y_928_ = v_v_1005_;
v___y_929_ = v_p_962_;
v___y_930_ = v___y_951_;
v___y_931_ = v___y_952_;
v___y_932_ = v___y_953_;
v___y_933_ = v___y_954_;
v___y_934_ = v___y_955_;
v___y_935_ = v___y_956_;
v___y_936_ = v___y_957_;
v___y_937_ = v___y_958_;
v___y_938_ = v___y_959_;
v___y_939_ = v___y_960_;
v___y_940_ = v___y_961_;
goto v___jp_925_;
}
else
{
lean_dec_ref(v_c_863_);
return v___x_1013_;
}
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
lean_dec_ref(v_c_863_);
v_a_1014_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_1010_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1010_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert___boxed(lean_object* v_c_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v_c_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_, v_a_1049_);
lean_dec(v_a_1049_);
lean_dec_ref(v_a_1048_);
lean_dec(v_a_1047_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1045_);
lean_dec_ref(v_a_1044_);
lean_dec(v_a_1043_);
lean_dec_ref(v_a_1042_);
lean_dec(v_a_1041_);
lean_dec(v_a_1040_);
lean_dec(v_a_1039_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2(lean_object* v_cls_1052_, lean_object* v_msg_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___redArg(v_cls_1052_, v_msg_1053_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2___boxed(lean_object* v_cls_1067_, lean_object* v_msg_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__2(v_cls_1067_, v_msg_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec(v___y_1069_);
return v_res_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6(lean_object* v_00_u03b1_1082_, lean_object* v_msg_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6___redArg(v_msg_1083_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6___boxed(lean_object* v_00_u03b1_1097_, lean_object* v_msg_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getLeFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_DenoteExpr_0__Lean_Meta_Grind_Arith_Linear_denoteIneq___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_denoteExpr___at___00Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert_spec__1_spec__1_spec__2_spec__6(v_00_u03b1_1097_, v_msg_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec(v___y_1099_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0(lean_object* v_a_1112_, lean_object* v_e_1113_, lean_object* v_s_1114_){
_start:
{
lean_object* v_structs_1115_; lean_object* v_typeIdOf_1116_; lean_object* v_exprToStructId_1117_; lean_object* v_exprToStructIdEntries_1118_; lean_object* v_forbiddenNatModules_1119_; lean_object* v_natStructs_1120_; lean_object* v_natTypeIdOf_1121_; lean_object* v_exprToNatStructId_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; 
v_structs_1115_ = lean_ctor_get(v_s_1114_, 0);
v_typeIdOf_1116_ = lean_ctor_get(v_s_1114_, 1);
v_exprToStructId_1117_ = lean_ctor_get(v_s_1114_, 2);
v_exprToStructIdEntries_1118_ = lean_ctor_get(v_s_1114_, 3);
v_forbiddenNatModules_1119_ = lean_ctor_get(v_s_1114_, 4);
v_natStructs_1120_ = lean_ctor_get(v_s_1114_, 5);
v_natTypeIdOf_1121_ = lean_ctor_get(v_s_1114_, 6);
v_exprToNatStructId_1122_ = lean_ctor_get(v_s_1114_, 7);
v___x_1123_ = lean_array_get_size(v_structs_1115_);
v___x_1124_ = lean_nat_dec_lt(v_a_1112_, v___x_1123_);
if (v___x_1124_ == 0)
{
lean_dec_ref(v_e_1113_);
return v_s_1114_;
}
else
{
lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1186_; 
lean_inc_ref(v_exprToNatStructId_1122_);
lean_inc_ref(v_natTypeIdOf_1121_);
lean_inc_ref(v_natStructs_1120_);
lean_inc_ref(v_forbiddenNatModules_1119_);
lean_inc_ref(v_exprToStructIdEntries_1118_);
lean_inc_ref(v_exprToStructId_1117_);
lean_inc_ref(v_typeIdOf_1116_);
lean_inc_ref(v_structs_1115_);
v_isSharedCheck_1186_ = !lean_is_exclusive(v_s_1114_);
if (v_isSharedCheck_1186_ == 0)
{
lean_object* v_unused_1187_; lean_object* v_unused_1188_; lean_object* v_unused_1189_; lean_object* v_unused_1190_; lean_object* v_unused_1191_; lean_object* v_unused_1192_; lean_object* v_unused_1193_; lean_object* v_unused_1194_; 
v_unused_1187_ = lean_ctor_get(v_s_1114_, 7);
lean_dec(v_unused_1187_);
v_unused_1188_ = lean_ctor_get(v_s_1114_, 6);
lean_dec(v_unused_1188_);
v_unused_1189_ = lean_ctor_get(v_s_1114_, 5);
lean_dec(v_unused_1189_);
v_unused_1190_ = lean_ctor_get(v_s_1114_, 4);
lean_dec(v_unused_1190_);
v_unused_1191_ = lean_ctor_get(v_s_1114_, 3);
lean_dec(v_unused_1191_);
v_unused_1192_ = lean_ctor_get(v_s_1114_, 2);
lean_dec(v_unused_1192_);
v_unused_1193_ = lean_ctor_get(v_s_1114_, 1);
lean_dec(v_unused_1193_);
v_unused_1194_ = lean_ctor_get(v_s_1114_, 0);
lean_dec(v_unused_1194_);
v___x_1126_ = v_s_1114_;
v_isShared_1127_ = v_isSharedCheck_1186_;
goto v_resetjp_1125_;
}
else
{
lean_dec(v_s_1114_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1186_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v_v_1128_; lean_object* v_id_1129_; lean_object* v_ringId_x3f_1130_; lean_object* v_type_1131_; lean_object* v_u_1132_; lean_object* v_intModuleInst_1133_; lean_object* v_leInst_x3f_1134_; lean_object* v_ltInst_x3f_1135_; lean_object* v_lawfulOrderLTInst_x3f_1136_; lean_object* v_isPreorderInst_x3f_1137_; lean_object* v_orderedAddInst_x3f_1138_; lean_object* v_isLinearInst_x3f_1139_; lean_object* v_noNatDivInst_x3f_1140_; lean_object* v_ringInst_x3f_1141_; lean_object* v_commRingInst_x3f_1142_; lean_object* v_orderedRingInst_x3f_1143_; lean_object* v_fieldInst_x3f_1144_; lean_object* v_charInst_x3f_1145_; lean_object* v_zero_1146_; lean_object* v_ofNatZero_1147_; lean_object* v_one_x3f_1148_; lean_object* v_leFn_x3f_1149_; lean_object* v_ltFn_x3f_1150_; lean_object* v_addFn_1151_; lean_object* v_zsmulFn_1152_; lean_object* v_nsmulFn_1153_; lean_object* v_zsmulFn_x3f_1154_; lean_object* v_nsmulFn_x3f_1155_; lean_object* v_homomulFn_x3f_1156_; lean_object* v_subFn_1157_; lean_object* v_negFn_1158_; lean_object* v_vars_1159_; lean_object* v_varMap_1160_; lean_object* v_lowers_1161_; lean_object* v_uppers_1162_; lean_object* v_diseqs_1163_; lean_object* v_assignment_1164_; uint8_t v_caseSplits_1165_; lean_object* v_conflict_x3f_1166_; lean_object* v_diseqSplits_1167_; lean_object* v_elimEqs_1168_; lean_object* v_elimStack_1169_; lean_object* v_occurs_1170_; lean_object* v_ignored_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1185_; 
v_v_1128_ = lean_array_fget(v_structs_1115_, v_a_1112_);
v_id_1129_ = lean_ctor_get(v_v_1128_, 0);
v_ringId_x3f_1130_ = lean_ctor_get(v_v_1128_, 1);
v_type_1131_ = lean_ctor_get(v_v_1128_, 2);
v_u_1132_ = lean_ctor_get(v_v_1128_, 3);
v_intModuleInst_1133_ = lean_ctor_get(v_v_1128_, 4);
v_leInst_x3f_1134_ = lean_ctor_get(v_v_1128_, 5);
v_ltInst_x3f_1135_ = lean_ctor_get(v_v_1128_, 6);
v_lawfulOrderLTInst_x3f_1136_ = lean_ctor_get(v_v_1128_, 7);
v_isPreorderInst_x3f_1137_ = lean_ctor_get(v_v_1128_, 8);
v_orderedAddInst_x3f_1138_ = lean_ctor_get(v_v_1128_, 9);
v_isLinearInst_x3f_1139_ = lean_ctor_get(v_v_1128_, 10);
v_noNatDivInst_x3f_1140_ = lean_ctor_get(v_v_1128_, 11);
v_ringInst_x3f_1141_ = lean_ctor_get(v_v_1128_, 12);
v_commRingInst_x3f_1142_ = lean_ctor_get(v_v_1128_, 13);
v_orderedRingInst_x3f_1143_ = lean_ctor_get(v_v_1128_, 14);
v_fieldInst_x3f_1144_ = lean_ctor_get(v_v_1128_, 15);
v_charInst_x3f_1145_ = lean_ctor_get(v_v_1128_, 16);
v_zero_1146_ = lean_ctor_get(v_v_1128_, 17);
v_ofNatZero_1147_ = lean_ctor_get(v_v_1128_, 18);
v_one_x3f_1148_ = lean_ctor_get(v_v_1128_, 19);
v_leFn_x3f_1149_ = lean_ctor_get(v_v_1128_, 20);
v_ltFn_x3f_1150_ = lean_ctor_get(v_v_1128_, 21);
v_addFn_1151_ = lean_ctor_get(v_v_1128_, 22);
v_zsmulFn_1152_ = lean_ctor_get(v_v_1128_, 23);
v_nsmulFn_1153_ = lean_ctor_get(v_v_1128_, 24);
v_zsmulFn_x3f_1154_ = lean_ctor_get(v_v_1128_, 25);
v_nsmulFn_x3f_1155_ = lean_ctor_get(v_v_1128_, 26);
v_homomulFn_x3f_1156_ = lean_ctor_get(v_v_1128_, 27);
v_subFn_1157_ = lean_ctor_get(v_v_1128_, 28);
v_negFn_1158_ = lean_ctor_get(v_v_1128_, 29);
v_vars_1159_ = lean_ctor_get(v_v_1128_, 30);
v_varMap_1160_ = lean_ctor_get(v_v_1128_, 31);
v_lowers_1161_ = lean_ctor_get(v_v_1128_, 32);
v_uppers_1162_ = lean_ctor_get(v_v_1128_, 33);
v_diseqs_1163_ = lean_ctor_get(v_v_1128_, 34);
v_assignment_1164_ = lean_ctor_get(v_v_1128_, 35);
v_caseSplits_1165_ = lean_ctor_get_uint8(v_v_1128_, sizeof(void*)*42);
v_conflict_x3f_1166_ = lean_ctor_get(v_v_1128_, 36);
v_diseqSplits_1167_ = lean_ctor_get(v_v_1128_, 37);
v_elimEqs_1168_ = lean_ctor_get(v_v_1128_, 38);
v_elimStack_1169_ = lean_ctor_get(v_v_1128_, 39);
v_occurs_1170_ = lean_ctor_get(v_v_1128_, 40);
v_ignored_1171_ = lean_ctor_get(v_v_1128_, 41);
v_isSharedCheck_1185_ = !lean_is_exclusive(v_v_1128_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1173_ = v_v_1128_;
v_isShared_1174_ = v_isSharedCheck_1185_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_ignored_1171_);
lean_inc(v_occurs_1170_);
lean_inc(v_elimStack_1169_);
lean_inc(v_elimEqs_1168_);
lean_inc(v_diseqSplits_1167_);
lean_inc(v_conflict_x3f_1166_);
lean_inc(v_assignment_1164_);
lean_inc(v_diseqs_1163_);
lean_inc(v_uppers_1162_);
lean_inc(v_lowers_1161_);
lean_inc(v_varMap_1160_);
lean_inc(v_vars_1159_);
lean_inc(v_negFn_1158_);
lean_inc(v_subFn_1157_);
lean_inc(v_homomulFn_x3f_1156_);
lean_inc(v_nsmulFn_x3f_1155_);
lean_inc(v_zsmulFn_x3f_1154_);
lean_inc(v_nsmulFn_1153_);
lean_inc(v_zsmulFn_1152_);
lean_inc(v_addFn_1151_);
lean_inc(v_ltFn_x3f_1150_);
lean_inc(v_leFn_x3f_1149_);
lean_inc(v_one_x3f_1148_);
lean_inc(v_ofNatZero_1147_);
lean_inc(v_zero_1146_);
lean_inc(v_charInst_x3f_1145_);
lean_inc(v_fieldInst_x3f_1144_);
lean_inc(v_orderedRingInst_x3f_1143_);
lean_inc(v_commRingInst_x3f_1142_);
lean_inc(v_ringInst_x3f_1141_);
lean_inc(v_noNatDivInst_x3f_1140_);
lean_inc(v_isLinearInst_x3f_1139_);
lean_inc(v_orderedAddInst_x3f_1138_);
lean_inc(v_isPreorderInst_x3f_1137_);
lean_inc(v_lawfulOrderLTInst_x3f_1136_);
lean_inc(v_ltInst_x3f_1135_);
lean_inc(v_leInst_x3f_1134_);
lean_inc(v_intModuleInst_1133_);
lean_inc(v_u_1132_);
lean_inc(v_type_1131_);
lean_inc(v_ringId_x3f_1130_);
lean_inc(v_id_1129_);
lean_dec(v_v_1128_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1185_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; lean_object* v_xs_x27_1176_; lean_object* v___x_1177_; lean_object* v___x_1179_; 
v___x_1175_ = lean_box(0);
v_xs_x27_1176_ = lean_array_fset(v_structs_1115_, v_a_1112_, v___x_1175_);
v___x_1177_ = l_Lean_PersistentArray_push___redArg(v_ignored_1171_, v_e_1113_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 41, v___x_1177_);
v___x_1179_ = v___x_1173_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_id_1129_);
lean_ctor_set(v_reuseFailAlloc_1184_, 1, v_ringId_x3f_1130_);
lean_ctor_set(v_reuseFailAlloc_1184_, 2, v_type_1131_);
lean_ctor_set(v_reuseFailAlloc_1184_, 3, v_u_1132_);
lean_ctor_set(v_reuseFailAlloc_1184_, 4, v_intModuleInst_1133_);
lean_ctor_set(v_reuseFailAlloc_1184_, 5, v_leInst_x3f_1134_);
lean_ctor_set(v_reuseFailAlloc_1184_, 6, v_ltInst_x3f_1135_);
lean_ctor_set(v_reuseFailAlloc_1184_, 7, v_lawfulOrderLTInst_x3f_1136_);
lean_ctor_set(v_reuseFailAlloc_1184_, 8, v_isPreorderInst_x3f_1137_);
lean_ctor_set(v_reuseFailAlloc_1184_, 9, v_orderedAddInst_x3f_1138_);
lean_ctor_set(v_reuseFailAlloc_1184_, 10, v_isLinearInst_x3f_1139_);
lean_ctor_set(v_reuseFailAlloc_1184_, 11, v_noNatDivInst_x3f_1140_);
lean_ctor_set(v_reuseFailAlloc_1184_, 12, v_ringInst_x3f_1141_);
lean_ctor_set(v_reuseFailAlloc_1184_, 13, v_commRingInst_x3f_1142_);
lean_ctor_set(v_reuseFailAlloc_1184_, 14, v_orderedRingInst_x3f_1143_);
lean_ctor_set(v_reuseFailAlloc_1184_, 15, v_fieldInst_x3f_1144_);
lean_ctor_set(v_reuseFailAlloc_1184_, 16, v_charInst_x3f_1145_);
lean_ctor_set(v_reuseFailAlloc_1184_, 17, v_zero_1146_);
lean_ctor_set(v_reuseFailAlloc_1184_, 18, v_ofNatZero_1147_);
lean_ctor_set(v_reuseFailAlloc_1184_, 19, v_one_x3f_1148_);
lean_ctor_set(v_reuseFailAlloc_1184_, 20, v_leFn_x3f_1149_);
lean_ctor_set(v_reuseFailAlloc_1184_, 21, v_ltFn_x3f_1150_);
lean_ctor_set(v_reuseFailAlloc_1184_, 22, v_addFn_1151_);
lean_ctor_set(v_reuseFailAlloc_1184_, 23, v_zsmulFn_1152_);
lean_ctor_set(v_reuseFailAlloc_1184_, 24, v_nsmulFn_1153_);
lean_ctor_set(v_reuseFailAlloc_1184_, 25, v_zsmulFn_x3f_1154_);
lean_ctor_set(v_reuseFailAlloc_1184_, 26, v_nsmulFn_x3f_1155_);
lean_ctor_set(v_reuseFailAlloc_1184_, 27, v_homomulFn_x3f_1156_);
lean_ctor_set(v_reuseFailAlloc_1184_, 28, v_subFn_1157_);
lean_ctor_set(v_reuseFailAlloc_1184_, 29, v_negFn_1158_);
lean_ctor_set(v_reuseFailAlloc_1184_, 30, v_vars_1159_);
lean_ctor_set(v_reuseFailAlloc_1184_, 31, v_varMap_1160_);
lean_ctor_set(v_reuseFailAlloc_1184_, 32, v_lowers_1161_);
lean_ctor_set(v_reuseFailAlloc_1184_, 33, v_uppers_1162_);
lean_ctor_set(v_reuseFailAlloc_1184_, 34, v_diseqs_1163_);
lean_ctor_set(v_reuseFailAlloc_1184_, 35, v_assignment_1164_);
lean_ctor_set(v_reuseFailAlloc_1184_, 36, v_conflict_x3f_1166_);
lean_ctor_set(v_reuseFailAlloc_1184_, 37, v_diseqSplits_1167_);
lean_ctor_set(v_reuseFailAlloc_1184_, 38, v_elimEqs_1168_);
lean_ctor_set(v_reuseFailAlloc_1184_, 39, v_elimStack_1169_);
lean_ctor_set(v_reuseFailAlloc_1184_, 40, v_occurs_1170_);
lean_ctor_set(v_reuseFailAlloc_1184_, 41, v___x_1177_);
lean_ctor_set_uint8(v_reuseFailAlloc_1184_, sizeof(void*)*42, v_caseSplits_1165_);
v___x_1179_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
lean_object* v___x_1180_; lean_object* v___x_1182_; 
v___x_1180_ = lean_array_fset(v_xs_x27_1176_, v_a_1112_, v___x_1179_);
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 0, v___x_1180_);
v___x_1182_ = v___x_1126_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1180_);
lean_ctor_set(v_reuseFailAlloc_1183_, 1, v_typeIdOf_1116_);
lean_ctor_set(v_reuseFailAlloc_1183_, 2, v_exprToStructId_1117_);
lean_ctor_set(v_reuseFailAlloc_1183_, 3, v_exprToStructIdEntries_1118_);
lean_ctor_set(v_reuseFailAlloc_1183_, 4, v_forbiddenNatModules_1119_);
lean_ctor_set(v_reuseFailAlloc_1183_, 5, v_natStructs_1120_);
lean_ctor_set(v_reuseFailAlloc_1183_, 6, v_natTypeIdOf_1121_);
lean_ctor_set(v_reuseFailAlloc_1183_, 7, v_exprToNatStructId_1122_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0___boxed(lean_object* v_a_1195_, lean_object* v_e_1196_, lean_object* v_s_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0(v_a_1195_, v_e_1196_, v_s_1197_);
lean_dec(v_a_1195_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq(lean_object* v_e_1199_, lean_object* v_lhs_1200_, lean_object* v_rhs_1201_, uint8_t v_strict_1202_, uint8_t v_eqTrue_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_){
_start:
{
uint8_t v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1216_ = 0;
v___x_1217_ = lean_unsigned_to_nat(0u);
v___x_1218_ = lean_box(v___x_1216_);
v___x_1219_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed), 15, 3);
lean_closure_set(v___x_1219_, 0, v_lhs_1200_);
lean_closure_set(v___x_1219_, 1, v___x_1218_);
lean_closure_set(v___x_1219_, 2, v___x_1217_);
v___x_1220_ = l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(v___x_1219_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1220_) == 0)
{
lean_object* v_a_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1375_; 
v_a_1221_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1223_ = v___x_1220_;
v_isShared_1224_ = v_isSharedCheck_1375_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_a_1221_);
lean_dec(v___x_1220_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1375_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
if (lean_obj_tag(v_a_1221_) == 1)
{
lean_object* v_val_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
lean_del_object(v___x_1223_);
v_val_1225_ = lean_ctor_get(v_a_1221_, 0);
lean_inc(v_val_1225_);
lean_dec_ref(v_a_1221_);
v___x_1226_ = lean_box(v___x_1216_);
v___x_1227_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_reify_x3f___boxed), 15, 3);
lean_closure_set(v___x_1227_, 0, v_rhs_1201_);
lean_closure_set(v___x_1227_, 1, v___x_1226_);
lean_closure_set(v___x_1227_, 2, v___x_1217_);
v___x_1228_ = l_Lean_Meta_Grind_Arith_Linear_withRingM___redArg(v___x_1227_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1362_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1231_ = v___x_1228_;
v_isShared_1232_ = v_isSharedCheck_1362_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1228_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1362_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
if (lean_obj_tag(v_a_1229_) == 1)
{
lean_object* v_val_1233_; lean_object* v___x_1234_; 
lean_del_object(v___x_1231_);
v_val_1233_ = lean_ctor_get(v_a_1229_, 0);
lean_inc(v_val_1233_);
lean_dec_ref(v_a_1229_);
v___x_1234_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_1199_, v_a_1205_);
if (lean_obj_tag(v___x_1234_) == 0)
{
if (v_eqTrue_1203_ == 0)
{
lean_object* v_a_1235_; lean_object* v___x_1236_; 
v_a_1235_ = lean_ctor_get(v___x_1234_, 0);
lean_inc(v_a_1235_);
lean_dec_ref(v___x_1234_);
v___x_1236_ = l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1236_) == 0)
{
lean_object* v_a_1237_; uint8_t v___x_1238_; 
v_a_1237_ = lean_ctor_get(v___x_1236_, 0);
lean_inc(v_a_1237_);
lean_dec_ref(v___x_1236_);
v___x_1238_ = lean_unbox(v_a_1237_);
if (v___x_1238_ == 0)
{
lean_object* v___f_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
lean_dec(v_a_1237_);
lean_dec(v_a_1235_);
lean_dec(v_val_1233_);
lean_dec(v_val_1225_);
lean_inc(v_a_1204_);
v___f_1239_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1239_, 0, v_a_1204_);
lean_closure_set(v___f_1239_, 1, v_e_1199_);
v___x_1240_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_1241_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1240_, v___f_1239_, v_a_1205_);
return v___x_1241_;
}
else
{
lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___y_1245_; 
lean_inc(v_val_1225_);
lean_inc(v_val_1233_);
v___x_1242_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1242_, 0, v_val_1233_);
lean_ctor_set(v___x_1242_, 1, v_val_1225_);
v___x_1243_ = l_Lean_Grind_CommRing_Expr_toPoly(v___x_1242_);
if (v_strict_1202_ == 0)
{
uint8_t v___x_1292_; 
v___x_1292_ = lean_unbox(v_a_1237_);
lean_dec(v_a_1237_);
v___y_1245_ = v___x_1292_;
goto v___jp_1244_;
}
else
{
lean_dec(v_a_1237_);
v___y_1245_ = v_eqTrue_1203_;
goto v___jp_1244_;
}
v___jp_1244_:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v___x_1246_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1246_, 0, v_e_1199_);
lean_ctor_set(v___x_1246_, 1, v_val_1225_);
lean_ctor_set(v___x_1246_, 2, v_val_1233_);
v___x_1247_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1247_, 0, v___x_1243_);
lean_ctor_set(v___x_1247_, 1, v___x_1246_);
lean_ctor_set_uint8(v___x_1247_, sizeof(void*)*2, v___y_1245_);
v___x_1248_ = l_Lean_Meta_Grind_Arith_Linear_RingIneqCnstr_cleanupDenominators(v___x_1247_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; lean_object* v_p_1250_; lean_object* v___x_1251_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_a_1249_);
lean_dec_ref(v___x_1248_);
v_p_1250_ = lean_ctor_get(v_a_1249_, 0);
lean_inc(v_a_1235_);
lean_inc_ref(v_p_1250_);
v___x_1251_ = l_Lean_Grind_CommRing_Poly_toIntModuleExpr(v_p_1250_, v_a_1235_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; lean_object* v___x_1253_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1252_);
lean_dec_ref(v___x_1251_);
v___x_1253_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_a_1252_, v___x_1216_, v_a_1235_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1267_; 
v_a_1254_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1256_ = v___x_1253_;
v_isShared_1257_ = v_isSharedCheck_1267_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_dec(v___x_1253_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1267_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
if (lean_obj_tag(v_a_1254_) == 1)
{
lean_object* v_val_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
lean_del_object(v___x_1256_);
v_val_1258_ = lean_ctor_get(v_a_1254_, 0);
lean_inc_n(v_val_1258_, 2);
lean_dec_ref(v_a_1254_);
v___x_1259_ = l_Lean_Grind_Linarith_Expr_norm(v_val_1258_);
v___x_1260_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1260_, 0, v_a_1249_);
lean_ctor_set(v___x_1260_, 1, v_val_1258_);
v___x_1261_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1261_, 0, v___x_1259_);
lean_ctor_set(v___x_1261_, 1, v___x_1260_);
lean_ctor_set_uint8(v___x_1261_, sizeof(void*)*2, v___y_1245_);
v___x_1262_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1261_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
return v___x_1262_;
}
else
{
lean_object* v___x_1263_; lean_object* v___x_1265_; 
lean_dec(v_a_1254_);
lean_dec(v_a_1249_);
v___x_1263_ = lean_box(0);
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 0, v___x_1263_);
v___x_1265_ = v___x_1256_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1263_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
lean_dec(v_a_1249_);
v_a_1268_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1253_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1253_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec(v_a_1249_);
lean_dec(v_a_1235_);
v_a_1276_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1251_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1251_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
else
{
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1291_; 
lean_dec(v_a_1235_);
v_a_1284_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1291_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1286_ = v___x_1248_;
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v___x_1248_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v___x_1289_; 
if (v_isShared_1287_ == 0)
{
v___x_1289_ = v___x_1286_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_a_1284_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
}
}
}
else
{
lean_object* v_a_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1300_; 
lean_dec(v_a_1235_);
lean_dec(v_val_1233_);
lean_dec(v_val_1225_);
lean_dec_ref(v_e_1199_);
v_a_1293_ = lean_ctor_get(v___x_1236_, 0);
v_isSharedCheck_1300_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1300_ == 0)
{
v___x_1295_ = v___x_1236_;
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_a_1293_);
lean_dec(v___x_1236_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1300_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1298_; 
if (v_isShared_1296_ == 0)
{
v___x_1298_ = v___x_1295_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_a_1293_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
}
}
else
{
lean_object* v_a_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_a_1301_ = lean_ctor_get(v___x_1234_, 0);
lean_inc(v_a_1301_);
lean_dec_ref(v___x_1234_);
lean_inc(v_val_1233_);
lean_inc(v_val_1225_);
v___x_1302_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_1302_, 0, v_val_1225_);
lean_ctor_set(v___x_1302_, 1, v_val_1233_);
v___x_1303_ = l_Lean_Grind_CommRing_Expr_toPoly(v___x_1302_);
v___x_1304_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1304_, 0, v_e_1199_);
lean_ctor_set(v___x_1304_, 1, v_val_1225_);
lean_ctor_set(v___x_1304_, 2, v_val_1233_);
v___x_1305_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1305_, 0, v___x_1303_);
lean_ctor_set(v___x_1305_, 1, v___x_1304_);
lean_ctor_set_uint8(v___x_1305_, sizeof(void*)*2, v_strict_1202_);
v___x_1306_ = l_Lean_Meta_Grind_Arith_Linear_RingIneqCnstr_cleanupDenominators(v___x_1305_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; lean_object* v_p_1308_; lean_object* v___x_1309_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
lean_dec_ref(v___x_1306_);
v_p_1308_ = lean_ctor_get(v_a_1307_, 0);
lean_inc(v_a_1301_);
lean_inc_ref(v_p_1308_);
v___x_1309_ = l_Lean_Grind_CommRing_Poly_toIntModuleExpr(v_p_1308_, v_a_1301_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; lean_object* v___x_1311_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_a_1310_);
lean_dec_ref(v___x_1309_);
v___x_1311_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_a_1310_, v___x_1216_, v_a_1301_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1325_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1314_ = v___x_1311_;
v_isShared_1315_ = v_isSharedCheck_1325_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1311_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1325_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
if (lean_obj_tag(v_a_1312_) == 1)
{
lean_object* v_val_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
lean_del_object(v___x_1314_);
v_val_1316_ = lean_ctor_get(v_a_1312_, 0);
lean_inc_n(v_val_1316_, 2);
lean_dec_ref(v_a_1312_);
v___x_1317_ = l_Lean_Grind_Linarith_Expr_norm(v_val_1316_);
v___x_1318_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1318_, 0, v_a_1307_);
lean_ctor_set(v___x_1318_, 1, v_val_1316_);
v___x_1319_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1319_, 0, v___x_1317_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
lean_ctor_set_uint8(v___x_1319_, sizeof(void*)*2, v_strict_1202_);
v___x_1320_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1319_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
return v___x_1320_;
}
else
{
lean_object* v___x_1321_; lean_object* v___x_1323_; 
lean_dec(v_a_1312_);
lean_dec(v_a_1307_);
v___x_1321_ = lean_box(0);
if (v_isShared_1315_ == 0)
{
lean_ctor_set(v___x_1314_, 0, v___x_1321_);
v___x_1323_ = v___x_1314_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1333_; 
lean_dec(v_a_1307_);
v_a_1326_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1311_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1311_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_dec(v_a_1307_);
lean_dec(v_a_1301_);
v_a_1334_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1309_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1309_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
lean_dec(v_a_1301_);
v_a_1342_ = lean_ctor_get(v___x_1306_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1306_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___x_1306_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1306_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
}
}
else
{
lean_object* v_a_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1357_; 
lean_dec(v_val_1233_);
lean_dec(v_val_1225_);
lean_dec_ref(v_e_1199_);
v_a_1350_ = lean_ctor_get(v___x_1234_, 0);
v_isSharedCheck_1357_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1357_ == 0)
{
v___x_1352_ = v___x_1234_;
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_a_1350_);
lean_dec(v___x_1234_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1357_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1355_; 
if (v_isShared_1353_ == 0)
{
v___x_1355_ = v___x_1352_;
goto v_reusejp_1354_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_a_1350_);
v___x_1355_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1354_;
}
v_reusejp_1354_:
{
return v___x_1355_;
}
}
}
}
else
{
lean_object* v___x_1358_; lean_object* v___x_1360_; 
lean_dec(v_a_1229_);
lean_dec(v_val_1225_);
lean_dec_ref(v_e_1199_);
v___x_1358_ = lean_box(0);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 0, v___x_1358_);
v___x_1360_ = v___x_1231_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1358_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
else
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
lean_dec(v_val_1225_);
lean_dec_ref(v_e_1199_);
v_a_1363_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1228_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1228_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
else
{
lean_object* v___x_1371_; lean_object* v___x_1373_; 
lean_dec(v_a_1221_);
lean_dec_ref(v_rhs_1201_);
lean_dec_ref(v_e_1199_);
v___x_1371_ = lean_box(0);
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 0, v___x_1371_);
v___x_1373_ = v___x_1223_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v___x_1371_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
}
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
lean_dec_ref(v_rhs_1201_);
lean_dec_ref(v_e_1199_);
v_a_1376_ = lean_ctor_get(v___x_1220_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1220_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1220_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1220_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___boxed(lean_object** _args){
lean_object* v_e_1384_ = _args[0];
lean_object* v_lhs_1385_ = _args[1];
lean_object* v_rhs_1386_ = _args[2];
lean_object* v_strict_1387_ = _args[3];
lean_object* v_eqTrue_1388_ = _args[4];
lean_object* v_a_1389_ = _args[5];
lean_object* v_a_1390_ = _args[6];
lean_object* v_a_1391_ = _args[7];
lean_object* v_a_1392_ = _args[8];
lean_object* v_a_1393_ = _args[9];
lean_object* v_a_1394_ = _args[10];
lean_object* v_a_1395_ = _args[11];
lean_object* v_a_1396_ = _args[12];
lean_object* v_a_1397_ = _args[13];
lean_object* v_a_1398_ = _args[14];
lean_object* v_a_1399_ = _args[15];
lean_object* v_a_1400_ = _args[16];
_start:
{
uint8_t v_strict_boxed_1401_; uint8_t v_eqTrue_boxed_1402_; lean_object* v_res_1403_; 
v_strict_boxed_1401_ = lean_unbox(v_strict_1387_);
v_eqTrue_boxed_1402_ = lean_unbox(v_eqTrue_1388_);
v_res_1403_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq(v_e_1384_, v_lhs_1385_, v_rhs_1386_, v_strict_boxed_1401_, v_eqTrue_boxed_1402_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_);
lean_dec(v_a_1399_);
lean_dec_ref(v_a_1398_);
lean_dec(v_a_1397_);
lean_dec_ref(v_a_1396_);
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
lean_dec(v_a_1391_);
lean_dec(v_a_1390_);
lean_dec(v_a_1389_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq(lean_object* v_e_1404_, lean_object* v_lhs_1405_, lean_object* v_rhs_1406_, uint8_t v_strict_1407_, uint8_t v_eqTrue_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Lean_Meta_Grind_getGeneration___redArg(v_lhs_1405_, v_a_1410_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; uint8_t v___x_1423_; lean_object* v___x_1424_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
lean_inc(v_a_1422_);
lean_dec_ref(v___x_1421_);
v___x_1423_ = 0;
v___x_1424_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_lhs_1405_, v___x_1423_, v_a_1422_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1491_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1491_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1491_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1491_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1491_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
if (lean_obj_tag(v_a_1425_) == 1)
{
lean_object* v_val_1429_; lean_object* v___x_1430_; 
lean_del_object(v___x_1427_);
v_val_1429_ = lean_ctor_get(v_a_1425_, 0);
lean_inc(v_val_1429_);
lean_dec_ref(v_a_1425_);
v___x_1430_ = l_Lean_Meta_Grind_getGeneration___redArg(v_rhs_1406_, v_a_1410_);
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v_a_1431_; lean_object* v___x_1432_; 
v_a_1431_ = lean_ctor_get(v___x_1430_, 0);
lean_inc(v_a_1431_);
lean_dec_ref(v___x_1430_);
v___x_1432_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_rhs_1406_, v___x_1423_, v_a_1431_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1470_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1435_ = v___x_1432_;
v_isShared_1436_ = v_isSharedCheck_1470_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1432_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1470_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
if (lean_obj_tag(v_a_1433_) == 1)
{
lean_del_object(v___x_1435_);
if (v_eqTrue_1408_ == 0)
{
lean_object* v_val_1437_; lean_object* v___x_1438_; 
v_val_1437_ = lean_ctor_get(v_a_1433_, 0);
lean_inc(v_val_1437_);
lean_dec_ref(v_a_1433_);
v___x_1438_ = l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; uint8_t v___x_1440_; 
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_a_1439_);
lean_dec_ref(v___x_1438_);
v___x_1440_ = lean_unbox(v_a_1439_);
if (v___x_1440_ == 0)
{
lean_object* v___f_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_dec(v_a_1439_);
lean_dec(v_val_1437_);
lean_dec(v_val_1429_);
lean_inc(v_a_1409_);
v___f_1441_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1441_, 0, v_a_1409_);
lean_closure_set(v___f_1441_, 1, v_e_1404_);
v___x_1442_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_1443_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1442_, v___f_1441_, v_a_1410_);
return v___x_1443_;
}
else
{
lean_object* v___x_1444_; lean_object* v___x_1445_; uint8_t v___y_1447_; 
lean_inc(v_val_1429_);
lean_inc(v_val_1437_);
v___x_1444_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1444_, 0, v_val_1437_);
lean_ctor_set(v___x_1444_, 1, v_val_1429_);
v___x_1445_ = l_Lean_Grind_Linarith_Expr_norm(v___x_1444_);
if (v_strict_1407_ == 0)
{
uint8_t v___x_1451_; 
v___x_1451_ = lean_unbox(v_a_1439_);
lean_dec(v_a_1439_);
v___y_1447_ = v___x_1451_;
goto v___jp_1446_;
}
else
{
lean_dec(v_a_1439_);
v___y_1447_ = v_eqTrue_1408_;
goto v___jp_1446_;
}
v___jp_1446_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1448_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1448_, 0, v_e_1404_);
lean_ctor_set(v___x_1448_, 1, v_val_1429_);
lean_ctor_set(v___x_1448_, 2, v_val_1437_);
v___x_1449_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1449_, 0, v___x_1445_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
lean_ctor_set_uint8(v___x_1449_, sizeof(void*)*2, v___y_1447_);
v___x_1450_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1449_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_);
return v___x_1450_;
}
}
}
else
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
lean_dec(v_val_1437_);
lean_dec(v_val_1429_);
lean_dec_ref(v_e_1404_);
v_a_1452_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1454_ = v___x_1438_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1438_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1452_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
else
{
lean_object* v_val_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_val_1460_ = lean_ctor_get(v_a_1433_, 0);
lean_inc_n(v_val_1460_, 2);
lean_dec_ref(v_a_1433_);
lean_inc(v_val_1429_);
v___x_1461_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1461_, 0, v_val_1429_);
lean_ctor_set(v___x_1461_, 1, v_val_1460_);
v___x_1462_ = l_Lean_Grind_Linarith_Expr_norm(v___x_1461_);
v___x_1463_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1463_, 0, v_e_1404_);
lean_ctor_set(v___x_1463_, 1, v_val_1429_);
lean_ctor_set(v___x_1463_, 2, v_val_1460_);
v___x_1464_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1464_, 0, v___x_1462_);
lean_ctor_set(v___x_1464_, 1, v___x_1463_);
lean_ctor_set_uint8(v___x_1464_, sizeof(void*)*2, v_strict_1407_);
v___x_1465_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1464_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_);
return v___x_1465_;
}
}
else
{
lean_object* v___x_1466_; lean_object* v___x_1468_; 
lean_dec(v_a_1433_);
lean_dec(v_val_1429_);
lean_dec_ref(v_e_1404_);
v___x_1466_ = lean_box(0);
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 0, v___x_1466_);
v___x_1468_ = v___x_1435_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1466_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_dec(v_val_1429_);
lean_dec_ref(v_e_1404_);
v_a_1471_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1432_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1432_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec(v_val_1429_);
lean_dec_ref(v_rhs_1406_);
lean_dec_ref(v_e_1404_);
v_a_1479_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1430_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1430_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
else
{
lean_object* v___x_1487_; lean_object* v___x_1489_; 
lean_dec(v_a_1425_);
lean_dec_ref(v_rhs_1406_);
lean_dec_ref(v_e_1404_);
v___x_1487_ = lean_box(0);
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 0, v___x_1487_);
v___x_1489_ = v___x_1427_;
goto v_reusejp_1488_;
}
else
{
lean_object* v_reuseFailAlloc_1490_; 
v_reuseFailAlloc_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1490_, 0, v___x_1487_);
v___x_1489_ = v_reuseFailAlloc_1490_;
goto v_reusejp_1488_;
}
v_reusejp_1488_:
{
return v___x_1489_;
}
}
}
}
else
{
lean_object* v_a_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1499_; 
lean_dec_ref(v_rhs_1406_);
lean_dec_ref(v_e_1404_);
v_a_1492_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1499_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1499_ == 0)
{
v___x_1494_ = v___x_1424_;
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_a_1492_);
lean_dec(v___x_1424_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1499_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1497_; 
if (v_isShared_1495_ == 0)
{
v___x_1497_ = v___x_1494_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1498_; 
v_reuseFailAlloc_1498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1498_, 0, v_a_1492_);
v___x_1497_ = v_reuseFailAlloc_1498_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
return v___x_1497_;
}
}
}
}
else
{
lean_object* v_a_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1507_; 
lean_dec_ref(v_rhs_1406_);
lean_dec_ref(v_lhs_1405_);
lean_dec_ref(v_e_1404_);
v_a_1500_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1507_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1507_ == 0)
{
v___x_1502_ = v___x_1421_;
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_a_1500_);
lean_dec(v___x_1421_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1507_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1505_; 
if (v_isShared_1503_ == 0)
{
v___x_1505_ = v___x_1502_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v_a_1500_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq___boxed(lean_object** _args){
lean_object* v_e_1508_ = _args[0];
lean_object* v_lhs_1509_ = _args[1];
lean_object* v_rhs_1510_ = _args[2];
lean_object* v_strict_1511_ = _args[3];
lean_object* v_eqTrue_1512_ = _args[4];
lean_object* v_a_1513_ = _args[5];
lean_object* v_a_1514_ = _args[6];
lean_object* v_a_1515_ = _args[7];
lean_object* v_a_1516_ = _args[8];
lean_object* v_a_1517_ = _args[9];
lean_object* v_a_1518_ = _args[10];
lean_object* v_a_1519_ = _args[11];
lean_object* v_a_1520_ = _args[12];
lean_object* v_a_1521_ = _args[13];
lean_object* v_a_1522_ = _args[14];
lean_object* v_a_1523_ = _args[15];
lean_object* v_a_1524_ = _args[16];
_start:
{
uint8_t v_strict_boxed_1525_; uint8_t v_eqTrue_boxed_1526_; lean_object* v_res_1527_; 
v_strict_boxed_1525_ = lean_unbox(v_strict_1511_);
v_eqTrue_boxed_1526_ = lean_unbox(v_eqTrue_1512_);
v_res_1527_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq(v_e_1508_, v_lhs_1509_, v_rhs_1510_, v_strict_boxed_1525_, v_eqTrue_boxed_1526_, v_a_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
lean_dec(v_a_1523_);
lean_dec_ref(v_a_1522_);
lean_dec(v_a_1521_);
lean_dec_ref(v_a_1520_);
lean_dec(v_a_1519_);
lean_dec_ref(v_a_1518_);
lean_dec(v_a_1517_);
lean_dec_ref(v_a_1516_);
lean_dec(v_a_1515_);
lean_dec(v_a_1514_);
lean_dec(v_a_1513_);
return v_res_1527_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq(lean_object* v_e_1528_, lean_object* v_lhs_1529_, lean_object* v_rhs_1530_, uint8_t v_strict_1531_, uint8_t v_eqTrue_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_){
_start:
{
lean_object* v___x_1545_; 
v___x_1545_ = l_Lean_Meta_Grind_Arith_Linear_getNatStruct(v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_);
if (lean_obj_tag(v___x_1545_) == 0)
{
lean_object* v_a_1546_; lean_object* v___x_1547_; 
v_a_1546_ = lean_ctor_get(v___x_1545_, 0);
lean_inc(v_a_1546_);
lean_dec_ref(v___x_1545_);
lean_inc_ref(v_lhs_1529_);
v___x_1547_ = l_Lean_Meta_Grind_Arith_Linear_ofNatModule(v_lhs_1529_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v_fst_1549_; lean_object* v___x_1550_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1548_);
lean_dec_ref(v___x_1547_);
v_fst_1549_ = lean_ctor_get(v_a_1548_, 0);
lean_inc(v_fst_1549_);
lean_dec(v_a_1548_);
lean_inc_ref(v_rhs_1530_);
v___x_1550_ = l_Lean_Meta_Grind_Arith_Linear_ofNatModule(v_rhs_1530_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v_a_1551_; lean_object* v_fst_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1635_; 
v_a_1551_ = lean_ctor_get(v___x_1550_, 0);
lean_inc(v_a_1551_);
lean_dec_ref(v___x_1550_);
v_fst_1552_ = lean_ctor_get(v_a_1551_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v_a_1551_);
if (v_isSharedCheck_1635_ == 0)
{
lean_object* v_unused_1636_; 
v_unused_1636_ = lean_ctor_get(v_a_1551_, 1);
lean_dec(v_unused_1636_);
v___x_1554_ = v_a_1551_;
v_isShared_1555_ = v_isSharedCheck_1635_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_fst_1552_);
lean_dec(v_a_1551_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1635_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1556_; 
v___x_1556_ = l_Lean_Meta_Grind_getGeneration___redArg(v_lhs_1529_, v_a_1534_);
lean_dec_ref(v_lhs_1529_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v_a_1557_; lean_object* v_id_1558_; lean_object* v_structId_1559_; uint8_t v___x_1560_; lean_object* v___x_1561_; 
v_a_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc(v_a_1557_);
lean_dec_ref(v___x_1556_);
v_id_1558_ = lean_ctor_get(v_a_1546_, 0);
lean_inc(v_id_1558_);
v_structId_1559_ = lean_ctor_get(v_a_1546_, 1);
lean_inc(v_structId_1559_);
lean_dec(v_a_1546_);
v___x_1560_ = 0;
v___x_1561_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_fst_1549_, v___x_1560_, v_a_1557_, v_structId_1559_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_);
if (lean_obj_tag(v___x_1561_) == 0)
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1618_; 
v_a_1562_ = lean_ctor_get(v___x_1561_, 0);
v_isSharedCheck_1618_ = !lean_is_exclusive(v___x_1561_);
if (v_isSharedCheck_1618_ == 0)
{
v___x_1564_ = v___x_1561_;
v_isShared_1565_ = v_isSharedCheck_1618_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v___x_1561_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1618_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
if (lean_obj_tag(v_a_1562_) == 1)
{
lean_object* v_val_1566_; lean_object* v___x_1567_; 
lean_del_object(v___x_1564_);
v_val_1566_ = lean_ctor_get(v_a_1562_, 0);
lean_inc(v_val_1566_);
lean_dec_ref(v_a_1562_);
v___x_1567_ = l_Lean_Meta_Grind_getGeneration___redArg(v_rhs_1530_, v_a_1534_);
lean_dec_ref(v_rhs_1530_);
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_object* v_a_1568_; lean_object* v___x_1569_; 
v_a_1568_ = lean_ctor_get(v___x_1567_, 0);
lean_inc(v_a_1568_);
lean_dec_ref(v___x_1567_);
v___x_1569_ = l_Lean_Meta_Grind_Arith_Linear_reify_x3f(v_fst_1552_, v___x_1560_, v_a_1568_, v_structId_1559_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_);
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1597_; 
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1572_ = v___x_1569_;
v_isShared_1573_ = v_isSharedCheck_1597_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1569_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1597_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
if (lean_obj_tag(v_a_1570_) == 1)
{
lean_del_object(v___x_1572_);
if (v_eqTrue_1532_ == 0)
{
lean_object* v_val_1574_; lean_object* v___x_1576_; 
v_val_1574_ = lean_ctor_get(v_a_1570_, 0);
lean_inc_n(v_val_1574_, 2);
lean_dec_ref(v_a_1570_);
lean_inc(v_val_1566_);
if (v_isShared_1555_ == 0)
{
lean_ctor_set_tag(v___x_1554_, 3);
lean_ctor_set(v___x_1554_, 1, v_val_1566_);
lean_ctor_set(v___x_1554_, 0, v_val_1574_);
v___x_1576_ = v___x_1554_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_val_1574_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v_val_1566_);
v___x_1576_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
lean_object* v___x_1577_; uint8_t v___y_1579_; 
v___x_1577_ = l_Lean_Grind_Linarith_Expr_norm(v___x_1576_);
if (v_strict_1531_ == 0)
{
uint8_t v___x_1583_; 
v___x_1583_ = 1;
v___y_1579_ = v___x_1583_;
goto v___jp_1578_;
}
else
{
v___y_1579_ = v_eqTrue_1532_;
goto v___jp_1578_;
}
v___jp_1578_:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1580_ = lean_alloc_ctor(4, 4, 0);
lean_ctor_set(v___x_1580_, 0, v_e_1528_);
lean_ctor_set(v___x_1580_, 1, v_id_1558_);
lean_ctor_set(v___x_1580_, 2, v_val_1566_);
lean_ctor_set(v___x_1580_, 3, v_val_1574_);
v___x_1581_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1581_, 0, v___x_1577_);
lean_ctor_set(v___x_1581_, 1, v___x_1580_);
lean_ctor_set_uint8(v___x_1581_, sizeof(void*)*2, v___y_1579_);
v___x_1582_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1581_, v_structId_1559_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_);
lean_dec(v_structId_1559_);
return v___x_1582_;
}
}
}
else
{
lean_object* v_val_1585_; lean_object* v___x_1587_; 
v_val_1585_ = lean_ctor_get(v_a_1570_, 0);
lean_inc_n(v_val_1585_, 2);
lean_dec_ref(v_a_1570_);
lean_inc(v_val_1566_);
if (v_isShared_1555_ == 0)
{
lean_ctor_set_tag(v___x_1554_, 3);
lean_ctor_set(v___x_1554_, 1, v_val_1585_);
lean_ctor_set(v___x_1554_, 0, v_val_1566_);
v___x_1587_ = v___x_1554_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_val_1566_);
lean_ctor_set(v_reuseFailAlloc_1592_, 1, v_val_1585_);
v___x_1587_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1588_ = l_Lean_Grind_Linarith_Expr_norm(v___x_1587_);
v___x_1589_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1589_, 0, v_e_1528_);
lean_ctor_set(v___x_1589_, 1, v_id_1558_);
lean_ctor_set(v___x_1589_, 2, v_val_1566_);
lean_ctor_set(v___x_1589_, 3, v_val_1585_);
v___x_1590_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1590_, 0, v___x_1588_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
lean_ctor_set_uint8(v___x_1590_, sizeof(void*)*2, v_strict_1531_);
v___x_1591_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_assert(v___x_1590_, v_structId_1559_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_, v_a_1543_);
lean_dec(v_structId_1559_);
return v___x_1591_;
}
}
}
else
{
lean_object* v___x_1593_; lean_object* v___x_1595_; 
lean_dec(v_a_1570_);
lean_dec(v_val_1566_);
lean_dec(v_structId_1559_);
lean_dec(v_id_1558_);
lean_del_object(v___x_1554_);
lean_dec_ref(v_e_1528_);
v___x_1593_ = lean_box(0);
if (v_isShared_1573_ == 0)
{
lean_ctor_set(v___x_1572_, 0, v___x_1593_);
v___x_1595_ = v___x_1572_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v___x_1593_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec(v_val_1566_);
lean_dec(v_structId_1559_);
lean_dec(v_id_1558_);
lean_del_object(v___x_1554_);
lean_dec_ref(v_e_1528_);
v_a_1598_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1569_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1569_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
lean_dec(v_val_1566_);
lean_dec(v_structId_1559_);
lean_dec(v_id_1558_);
lean_del_object(v___x_1554_);
lean_dec(v_fst_1552_);
lean_dec_ref(v_e_1528_);
v_a_1606_ = lean_ctor_get(v___x_1567_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1567_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1567_);
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
else
{
lean_object* v___x_1614_; lean_object* v___x_1616_; 
lean_dec(v_a_1562_);
lean_dec(v_structId_1559_);
lean_dec(v_id_1558_);
lean_del_object(v___x_1554_);
lean_dec(v_fst_1552_);
lean_dec_ref(v_rhs_1530_);
lean_dec_ref(v_e_1528_);
v___x_1614_ = lean_box(0);
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v___x_1614_);
v___x_1616_ = v___x_1564_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1614_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
}
}
else
{
lean_object* v_a_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1626_; 
lean_dec(v_structId_1559_);
lean_dec(v_id_1558_);
lean_del_object(v___x_1554_);
lean_dec(v_fst_1552_);
lean_dec_ref(v_rhs_1530_);
lean_dec_ref(v_e_1528_);
v_a_1619_ = lean_ctor_get(v___x_1561_, 0);
v_isSharedCheck_1626_ = !lean_is_exclusive(v___x_1561_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1621_ = v___x_1561_;
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_a_1619_);
lean_dec(v___x_1561_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1626_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v___x_1624_; 
if (v_isShared_1622_ == 0)
{
v___x_1624_ = v___x_1621_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v_a_1619_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
else
{
lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1634_; 
lean_del_object(v___x_1554_);
lean_dec(v_fst_1552_);
lean_dec(v_fst_1549_);
lean_dec(v_a_1546_);
lean_dec_ref(v_rhs_1530_);
lean_dec_ref(v_e_1528_);
v_a_1627_ = lean_ctor_get(v___x_1556_, 0);
v_isSharedCheck_1634_ = !lean_is_exclusive(v___x_1556_);
if (v_isSharedCheck_1634_ == 0)
{
v___x_1629_ = v___x_1556_;
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_dec(v___x_1556_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1634_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v___x_1632_; 
if (v_isShared_1630_ == 0)
{
v___x_1632_ = v___x_1629_;
goto v_reusejp_1631_;
}
else
{
lean_object* v_reuseFailAlloc_1633_; 
v_reuseFailAlloc_1633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1633_, 0, v_a_1627_);
v___x_1632_ = v_reuseFailAlloc_1633_;
goto v_reusejp_1631_;
}
v_reusejp_1631_:
{
return v___x_1632_;
}
}
}
}
}
else
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1644_; 
lean_dec(v_fst_1549_);
lean_dec(v_a_1546_);
lean_dec_ref(v_rhs_1530_);
lean_dec_ref(v_lhs_1529_);
lean_dec_ref(v_e_1528_);
v_a_1637_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1639_ = v___x_1550_;
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1550_);
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
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_a_1637_);
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
else
{
lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
lean_dec(v_a_1546_);
lean_dec_ref(v_rhs_1530_);
lean_dec_ref(v_lhs_1529_);
lean_dec_ref(v_e_1528_);
v_a_1645_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1647_ = v___x_1547_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1547_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_a_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
}
else
{
lean_object* v_a_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1660_; 
lean_dec_ref(v_rhs_1530_);
lean_dec_ref(v_lhs_1529_);
lean_dec_ref(v_e_1528_);
v_a_1653_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1660_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1660_ == 0)
{
v___x_1655_ = v___x_1545_;
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_a_1653_);
lean_dec(v___x_1545_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1660_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1658_; 
if (v_isShared_1656_ == 0)
{
v___x_1658_ = v___x_1655_;
goto v_reusejp_1657_;
}
else
{
lean_object* v_reuseFailAlloc_1659_; 
v_reuseFailAlloc_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1659_, 0, v_a_1653_);
v___x_1658_ = v_reuseFailAlloc_1659_;
goto v_reusejp_1657_;
}
v_reusejp_1657_:
{
return v___x_1658_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq___boxed(lean_object** _args){
lean_object* v_e_1661_ = _args[0];
lean_object* v_lhs_1662_ = _args[1];
lean_object* v_rhs_1663_ = _args[2];
lean_object* v_strict_1664_ = _args[3];
lean_object* v_eqTrue_1665_ = _args[4];
lean_object* v_a_1666_ = _args[5];
lean_object* v_a_1667_ = _args[6];
lean_object* v_a_1668_ = _args[7];
lean_object* v_a_1669_ = _args[8];
lean_object* v_a_1670_ = _args[9];
lean_object* v_a_1671_ = _args[10];
lean_object* v_a_1672_ = _args[11];
lean_object* v_a_1673_ = _args[12];
lean_object* v_a_1674_ = _args[13];
lean_object* v_a_1675_ = _args[14];
lean_object* v_a_1676_ = _args[15];
lean_object* v_a_1677_ = _args[16];
_start:
{
uint8_t v_strict_boxed_1678_; uint8_t v_eqTrue_boxed_1679_; lean_object* v_res_1680_; 
v_strict_boxed_1678_ = lean_unbox(v_strict_1664_);
v_eqTrue_boxed_1679_ = lean_unbox(v_eqTrue_1665_);
v_res_1680_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq(v_e_1661_, v_lhs_1662_, v_rhs_1663_, v_strict_boxed_1678_, v_eqTrue_boxed_1679_, v_a_1666_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_);
lean_dec(v_a_1676_);
lean_dec_ref(v_a_1675_);
lean_dec(v_a_1674_);
lean_dec_ref(v_a_1673_);
lean_dec(v_a_1672_);
lean_dec_ref(v_a_1671_);
lean_dec(v_a_1670_);
lean_dec_ref(v_a_1669_);
lean_dec(v_a_1668_);
lean_dec(v_a_1667_);
lean_dec(v_a_1666_);
return v_res_1680_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(lean_object* v_x_1681_, lean_object* v_x_1682_){
_start:
{
if (lean_obj_tag(v_x_1681_) == 0)
{
if (lean_obj_tag(v_x_1682_) == 0)
{
uint8_t v___x_1683_; 
v___x_1683_ = 1;
return v___x_1683_;
}
else
{
uint8_t v___x_1684_; 
v___x_1684_ = 0;
return v___x_1684_;
}
}
else
{
if (lean_obj_tag(v_x_1682_) == 0)
{
uint8_t v___x_1685_; 
v___x_1685_ = 0;
return v___x_1685_;
}
else
{
lean_object* v_val_1686_; lean_object* v_val_1687_; uint8_t v___x_1688_; 
v_val_1686_ = lean_ctor_get(v_x_1681_, 0);
v_val_1687_ = lean_ctor_get(v_x_1682_, 0);
v___x_1688_ = lean_expr_eqv(v_val_1686_, v_val_1687_);
return v___x_1688_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0___boxed(lean_object* v_x_1689_, lean_object* v_x_1690_){
_start:
{
uint8_t v_res_1691_; lean_object* v_r_1692_; 
v_res_1691_ = l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(v_x_1689_, v_x_1690_);
lean_dec(v_x_1690_);
lean_dec(v_x_1689_);
v_r_1692_ = lean_box(v_res_1691_);
return v_r_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_propagateIneq(lean_object* v_e_1693_, uint8_t v_eqTrue_1694_, lean_object* v_a_1695_, lean_object* v_a_1696_, lean_object* v_a_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_, lean_object* v_a_1704_){
_start:
{
lean_object* v___x_1706_; 
v___x_1706_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_1697_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v_a_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1918_; 
v_a_1707_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1709_ = v___x_1706_;
v_isShared_1710_ = v_isSharedCheck_1918_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_a_1707_);
lean_dec(v___x_1706_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1918_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
uint8_t v_linarith_1711_; 
v_linarith_1711_ = lean_ctor_get_uint8(v_a_1707_, sizeof(void*)*11 + 22);
lean_dec(v_a_1707_);
if (v_linarith_1711_ == 0)
{
lean_object* v___x_1712_; lean_object* v___x_1714_; 
lean_dec_ref(v_e_1693_);
v___x_1712_ = lean_box(0);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1712_);
v___x_1714_ = v___x_1709_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v___x_1712_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
else
{
lean_object* v___x_1716_; lean_object* v___x_1717_; uint8_t v___x_1718_; 
v___x_1716_ = l_Lean_Expr_getAppNumArgs(v_e_1693_);
v___x_1717_ = lean_unsigned_to_nat(4u);
v___x_1718_ = lean_nat_dec_eq(v___x_1716_, v___x_1717_);
if (v___x_1718_ == 0)
{
lean_object* v___x_1719_; lean_object* v___x_1721_; 
lean_dec(v___x_1716_);
lean_dec_ref(v_e_1693_);
v___x_1719_ = lean_box(0);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1719_);
v___x_1721_ = v___x_1709_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1719_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
else
{
lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1723_ = lean_unsigned_to_nat(1u);
v___x_1724_ = lean_nat_sub(v___x_1716_, v___x_1723_);
lean_inc(v___x_1724_);
v___x_1725_ = l_Lean_Expr_getRevArg_x21(v_e_1693_, v___x_1724_);
lean_inc_ref(v___x_1725_);
v___x_1726_ = l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(v___x_1725_, v_a_1695_, v_a_1696_, v_a_1697_, v_a_1698_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1909_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1729_ = v___x_1726_;
v_isShared_1730_ = v_isSharedCheck_1909_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v___x_1726_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1909_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; uint8_t v_strict_1742_; lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1748_; lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1751_; lean_object* v___y_1752_; lean_object* v___y_1753_; 
v___x_1731_ = lean_nat_sub(v___x_1724_, v___x_1723_);
lean_dec(v___x_1724_);
v___x_1732_ = l_Lean_Expr_getRevArg_x21(v_e_1693_, v___x_1731_);
v___x_1733_ = lean_unsigned_to_nat(2u);
v___x_1734_ = lean_nat_sub(v___x_1716_, v___x_1733_);
v___x_1735_ = lean_nat_sub(v___x_1734_, v___x_1723_);
lean_dec(v___x_1734_);
v___x_1736_ = l_Lean_Expr_getRevArg_x21(v_e_1693_, v___x_1735_);
v___x_1737_ = lean_unsigned_to_nat(3u);
v___x_1738_ = lean_nat_sub(v___x_1716_, v___x_1737_);
lean_dec(v___x_1716_);
v___x_1739_ = lean_nat_sub(v___x_1738_, v___x_1723_);
lean_dec(v___x_1738_);
v___x_1740_ = l_Lean_Expr_getRevArg_x21(v_e_1693_, v___x_1739_);
if (lean_obj_tag(v_a_1727_) == 1)
{
lean_object* v_val_1767_; lean_object* v___x_1768_; 
lean_del_object(v___x_1729_);
lean_dec_ref(v___x_1725_);
lean_del_object(v___x_1709_);
v_val_1767_ = lean_ctor_get(v_a_1727_, 0);
lean_inc(v_val_1767_);
lean_dec_ref(v_a_1727_);
v___x_1768_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_val_1767_, v_a_1695_, v_a_1696_, v_a_1697_, v_a_1698_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1782_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1771_ = v___x_1768_;
v_isShared_1772_ = v_isSharedCheck_1782_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_a_1769_);
lean_dec(v___x_1768_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1782_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v_leFn_x3f_1773_; lean_object* v_ltFn_x3f_1774_; uint8_t v___x_1775_; 
v_leFn_x3f_1773_ = lean_ctor_get(v_a_1769_, 20);
lean_inc(v_leFn_x3f_1773_);
v_ltFn_x3f_1774_ = lean_ctor_get(v_a_1769_, 21);
lean_inc(v_ltFn_x3f_1774_);
lean_dec(v_a_1769_);
v___x_1775_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf(v_leFn_x3f_1773_, v___x_1732_);
lean_dec(v_leFn_x3f_1773_);
if (v___x_1775_ == 0)
{
uint8_t v___x_1776_; 
v___x_1776_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_isInstOf(v_ltFn_x3f_1774_, v___x_1732_);
lean_dec_ref(v___x_1732_);
lean_dec(v_ltFn_x3f_1774_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; lean_object* v___x_1779_; 
lean_dec(v_val_1767_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_dec_ref(v_e_1693_);
v___x_1777_ = lean_box(0);
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 0, v___x_1777_);
v___x_1779_ = v___x_1771_;
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
lean_del_object(v___x_1771_);
v_strict_1742_ = v___x_1718_;
v___y_1743_ = v_val_1767_;
v___y_1744_ = v_a_1695_;
v___y_1745_ = v_a_1696_;
v___y_1746_ = v_a_1697_;
v___y_1747_ = v_a_1698_;
v___y_1748_ = v_a_1699_;
v___y_1749_ = v_a_1700_;
v___y_1750_ = v_a_1701_;
v___y_1751_ = v_a_1702_;
v___y_1752_ = v_a_1703_;
v___y_1753_ = v_a_1704_;
goto v___jp_1741_;
}
}
else
{
uint8_t v___x_1781_; 
lean_dec(v_ltFn_x3f_1774_);
lean_del_object(v___x_1771_);
lean_dec_ref(v___x_1732_);
v___x_1781_ = 0;
v_strict_1742_ = v___x_1781_;
v___y_1743_ = v_val_1767_;
v___y_1744_ = v_a_1695_;
v___y_1745_ = v_a_1696_;
v___y_1746_ = v_a_1697_;
v___y_1747_ = v_a_1698_;
v___y_1748_ = v_a_1699_;
v___y_1749_ = v_a_1700_;
v___y_1750_ = v_a_1701_;
v___y_1751_ = v_a_1702_;
v___y_1752_ = v_a_1703_;
v___y_1753_ = v_a_1704_;
goto v___jp_1741_;
}
}
}
else
{
lean_object* v_a_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1790_; 
lean_dec(v_val_1767_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_dec_ref(v___x_1732_);
lean_dec_ref(v_e_1693_);
v_a_1783_ = lean_ctor_get(v___x_1768_, 0);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1768_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1785_ = v___x_1768_;
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_a_1783_);
lean_dec(v___x_1768_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1790_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
lean_object* v___x_1788_; 
if (v_isShared_1786_ == 0)
{
v___x_1788_ = v___x_1785_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1783_);
v___x_1788_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
return v___x_1788_;
}
}
}
}
else
{
lean_object* v___x_1791_; 
lean_dec(v_a_1727_);
v___x_1791_ = l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(v___x_1725_, v_a_1695_, v_a_1696_, v_a_1697_, v_a_1698_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1900_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1794_ = v___x_1791_;
v_isShared_1795_ = v_isSharedCheck_1900_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v___x_1791_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1900_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
if (lean_obj_tag(v_a_1792_) == 1)
{
lean_object* v_val_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1895_; 
v_val_1796_ = lean_ctor_get(v_a_1792_, 0);
v_isSharedCheck_1895_ = !lean_is_exclusive(v_a_1792_);
if (v_isSharedCheck_1895_ == 0)
{
v___x_1798_ = v_a_1792_;
v_isShared_1799_ = v_isSharedCheck_1895_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_val_1796_);
lean_dec(v_a_1792_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1895_;
goto v_resetjp_1797_;
}
v_resetjp_1797_:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Lean_Meta_Grind_Arith_Linear_getNatStruct(v_val_1796_, v_a_1695_, v_a_1696_, v_a_1697_, v_a_1698_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_, v_a_1703_, v_a_1704_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v_a_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1886_; 
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1800_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1803_ = v___x_1800_;
v_isShared_1804_ = v_isSharedCheck_1886_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_a_1801_);
lean_dec(v___x_1800_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1886_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v_leInst_x3f_1810_; lean_object* v_ltInst_x3f_1811_; lean_object* v_lawfulOrderLTInst_x3f_1812_; lean_object* v_isPreorderInst_x3f_1813_; lean_object* v_orderedAddInst_x3f_1814_; lean_object* v_isLinearInst_x3f_1815_; uint8_t v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1822_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v___y_1828_; uint8_t v___y_1829_; uint8_t v___y_1837_; lean_object* v___y_1838_; lean_object* v___y_1839_; lean_object* v___y_1840_; lean_object* v___y_1841_; lean_object* v___y_1842_; lean_object* v___y_1843_; lean_object* v___y_1844_; lean_object* v___y_1845_; lean_object* v___y_1846_; lean_object* v___y_1847_; lean_object* v___y_1848_; uint8_t v___y_1849_; uint8_t v___y_1851_; uint8_t v_strict_1852_; lean_object* v___y_1853_; lean_object* v___y_1854_; lean_object* v___y_1855_; lean_object* v___y_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___y_1860_; lean_object* v___y_1861_; lean_object* v___y_1862_; lean_object* v___y_1863_; uint8_t v___y_1869_; uint8_t v___y_1880_; uint8_t v___y_1882_; uint8_t v___y_1884_; 
v_leInst_x3f_1810_ = lean_ctor_get(v_a_1801_, 5);
lean_inc(v_leInst_x3f_1810_);
v_ltInst_x3f_1811_ = lean_ctor_get(v_a_1801_, 6);
lean_inc(v_ltInst_x3f_1811_);
v_lawfulOrderLTInst_x3f_1812_ = lean_ctor_get(v_a_1801_, 7);
lean_inc(v_lawfulOrderLTInst_x3f_1812_);
v_isPreorderInst_x3f_1813_ = lean_ctor_get(v_a_1801_, 8);
lean_inc(v_isPreorderInst_x3f_1813_);
v_orderedAddInst_x3f_1814_ = lean_ctor_get(v_a_1801_, 9);
lean_inc(v_orderedAddInst_x3f_1814_);
v_isLinearInst_x3f_1815_ = lean_ctor_get(v_a_1801_, 10);
lean_inc(v_isLinearInst_x3f_1815_);
lean_dec(v_a_1801_);
if (lean_obj_tag(v_leInst_x3f_1810_) == 0)
{
if (v___x_1718_ == 0)
{
v___y_1884_ = v___x_1718_;
goto v___jp_1883_;
}
else
{
lean_dec(v_isPreorderInst_x3f_1813_);
v___y_1882_ = v___x_1718_;
goto v___jp_1881_;
}
}
else
{
uint8_t v___x_1885_; 
v___x_1885_ = 0;
v___y_1884_ = v___x_1885_;
goto v___jp_1883_;
}
v___jp_1805_:
{
lean_object* v___x_1806_; lean_object* v___x_1808_; 
v___x_1806_ = lean_box(0);
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 0, v___x_1806_);
v___x_1808_ = v___x_1803_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v___x_1806_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
return v___x_1808_;
}
}
v___jp_1816_:
{
if (v___y_1829_ == 0)
{
lean_object* v___x_1830_; 
lean_dec(v_isLinearInst_x3f_1815_);
lean_del_object(v___x_1794_);
v___x_1830_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq(v_e_1693_, v___x_1736_, v___x_1740_, v___y_1817_, v_eqTrue_1694_, v___y_1823_, v___y_1825_, v___y_1824_, v___y_1820_, v___y_1827_, v___y_1818_, v___y_1821_, v___y_1826_, v___y_1828_, v___y_1819_, v___y_1822_);
lean_dec(v___y_1823_);
return v___x_1830_;
}
else
{
if (lean_obj_tag(v_isLinearInst_x3f_1815_) == 0)
{
lean_object* v___x_1831_; lean_object* v___x_1833_; 
lean_dec(v___y_1823_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_dec_ref(v_e_1693_);
v___x_1831_ = lean_box(0);
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 0, v___x_1831_);
v___x_1833_ = v___x_1794_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v___x_1831_);
v___x_1833_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
return v___x_1833_;
}
}
else
{
lean_object* v___x_1835_; 
lean_dec_ref(v_isLinearInst_x3f_1815_);
lean_del_object(v___x_1794_);
v___x_1835_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateNatModuleIneq(v_e_1693_, v___x_1736_, v___x_1740_, v___y_1817_, v_eqTrue_1694_, v___y_1823_, v___y_1825_, v___y_1824_, v___y_1820_, v___y_1827_, v___y_1818_, v___y_1821_, v___y_1826_, v___y_1828_, v___y_1819_, v___y_1822_);
lean_dec(v___y_1823_);
return v___x_1835_;
}
}
}
v___jp_1836_:
{
if (v_eqTrue_1694_ == 0)
{
v___y_1817_ = v___y_1837_;
v___y_1818_ = v___y_1838_;
v___y_1819_ = v___y_1839_;
v___y_1820_ = v___y_1840_;
v___y_1821_ = v___y_1841_;
v___y_1822_ = v___y_1842_;
v___y_1823_ = v___y_1843_;
v___y_1824_ = v___y_1844_;
v___y_1825_ = v___y_1845_;
v___y_1826_ = v___y_1846_;
v___y_1827_ = v___y_1847_;
v___y_1828_ = v___y_1848_;
v___y_1829_ = v___x_1718_;
goto v___jp_1816_;
}
else
{
v___y_1817_ = v___y_1837_;
v___y_1818_ = v___y_1838_;
v___y_1819_ = v___y_1839_;
v___y_1820_ = v___y_1840_;
v___y_1821_ = v___y_1841_;
v___y_1822_ = v___y_1842_;
v___y_1823_ = v___y_1843_;
v___y_1824_ = v___y_1844_;
v___y_1825_ = v___y_1845_;
v___y_1826_ = v___y_1846_;
v___y_1827_ = v___y_1847_;
v___y_1828_ = v___y_1848_;
v___y_1829_ = v___y_1849_;
goto v___jp_1816_;
}
}
v___jp_1850_:
{
if (v_strict_1852_ == 0)
{
lean_dec(v_lawfulOrderLTInst_x3f_1812_);
lean_del_object(v___x_1729_);
v___y_1837_ = v_strict_1852_;
v___y_1838_ = v___y_1858_;
v___y_1839_ = v___y_1862_;
v___y_1840_ = v___y_1856_;
v___y_1841_ = v___y_1859_;
v___y_1842_ = v___y_1863_;
v___y_1843_ = v___y_1853_;
v___y_1844_ = v___y_1855_;
v___y_1845_ = v___y_1854_;
v___y_1846_ = v___y_1860_;
v___y_1847_ = v___y_1857_;
v___y_1848_ = v___y_1861_;
v___y_1849_ = v_strict_1852_;
goto v___jp_1836_;
}
else
{
if (lean_obj_tag(v_lawfulOrderLTInst_x3f_1812_) == 0)
{
lean_object* v___x_1864_; lean_object* v___x_1866_; 
lean_dec(v___y_1853_);
lean_dec(v_isLinearInst_x3f_1815_);
lean_del_object(v___x_1794_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_dec_ref(v_e_1693_);
v___x_1864_ = lean_box(0);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 0, v___x_1864_);
v___x_1866_ = v___x_1729_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v___x_1864_);
v___x_1866_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
return v___x_1866_;
}
}
else
{
lean_dec_ref(v_lawfulOrderLTInst_x3f_1812_);
lean_del_object(v___x_1729_);
v___y_1837_ = v_strict_1852_;
v___y_1838_ = v___y_1858_;
v___y_1839_ = v___y_1862_;
v___y_1840_ = v___y_1856_;
v___y_1841_ = v___y_1859_;
v___y_1842_ = v___y_1863_;
v___y_1843_ = v___y_1853_;
v___y_1844_ = v___y_1855_;
v___y_1845_ = v___y_1854_;
v___y_1846_ = v___y_1860_;
v___y_1847_ = v___y_1857_;
v___y_1848_ = v___y_1861_;
v___y_1849_ = v___y_1851_;
goto v___jp_1836_;
}
}
}
v___jp_1868_:
{
lean_object* v___x_1871_; 
if (v_isShared_1799_ == 0)
{
lean_ctor_set(v___x_1798_, 0, v___x_1732_);
v___x_1871_ = v___x_1798_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v___x_1732_);
v___x_1871_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
uint8_t v___x_1872_; 
v___x_1872_ = l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(v___x_1871_, v_leInst_x3f_1810_);
lean_dec(v_leInst_x3f_1810_);
if (v___x_1872_ == 0)
{
uint8_t v___x_1873_; 
v___x_1873_ = l_Option_instBEq_beq___at___00Lean_Meta_Grind_Arith_Linear_propagateIneq_spec__0(v___x_1871_, v_ltInst_x3f_1811_);
lean_dec(v_ltInst_x3f_1811_);
lean_dec_ref(v___x_1871_);
if (v___x_1873_ == 0)
{
lean_object* v___x_1874_; lean_object* v___x_1876_; 
lean_dec(v_isLinearInst_x3f_1815_);
lean_dec(v_lawfulOrderLTInst_x3f_1812_);
lean_dec(v_val_1796_);
lean_del_object(v___x_1794_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_del_object(v___x_1729_);
lean_dec_ref(v_e_1693_);
v___x_1874_ = lean_box(0);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 0, v___x_1874_);
v___x_1876_ = v___x_1709_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v___x_1874_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
else
{
lean_del_object(v___x_1709_);
v___y_1851_ = v___y_1869_;
v_strict_1852_ = v___x_1718_;
v___y_1853_ = v_val_1796_;
v___y_1854_ = v_a_1695_;
v___y_1855_ = v_a_1696_;
v___y_1856_ = v_a_1697_;
v___y_1857_ = v_a_1698_;
v___y_1858_ = v_a_1699_;
v___y_1859_ = v_a_1700_;
v___y_1860_ = v_a_1701_;
v___y_1861_ = v_a_1702_;
v___y_1862_ = v_a_1703_;
v___y_1863_ = v_a_1704_;
goto v___jp_1850_;
}
}
else
{
lean_dec_ref(v___x_1871_);
lean_dec(v_ltInst_x3f_1811_);
lean_del_object(v___x_1709_);
v___y_1851_ = v___y_1869_;
v_strict_1852_ = v___y_1869_;
v___y_1853_ = v_val_1796_;
v___y_1854_ = v_a_1695_;
v___y_1855_ = v_a_1696_;
v___y_1856_ = v_a_1697_;
v___y_1857_ = v_a_1698_;
v___y_1858_ = v_a_1699_;
v___y_1859_ = v_a_1700_;
v___y_1860_ = v_a_1701_;
v___y_1861_ = v_a_1702_;
v___y_1862_ = v_a_1703_;
v___y_1863_ = v_a_1704_;
goto v___jp_1850_;
}
}
}
v___jp_1879_:
{
if (lean_obj_tag(v_orderedAddInst_x3f_1814_) == 0)
{
if (v___x_1718_ == 0)
{
lean_del_object(v___x_1803_);
v___y_1869_ = v___x_1718_;
goto v___jp_1868_;
}
else
{
lean_dec(v_isLinearInst_x3f_1815_);
lean_dec(v_lawfulOrderLTInst_x3f_1812_);
lean_dec(v_ltInst_x3f_1811_);
lean_dec(v_leInst_x3f_1810_);
lean_del_object(v___x_1798_);
lean_dec(v_val_1796_);
lean_del_object(v___x_1794_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_dec_ref(v___x_1732_);
lean_del_object(v___x_1729_);
lean_del_object(v___x_1709_);
lean_dec_ref(v_e_1693_);
goto v___jp_1805_;
}
}
else
{
lean_dec_ref(v_orderedAddInst_x3f_1814_);
lean_del_object(v___x_1803_);
v___y_1869_ = v___y_1880_;
goto v___jp_1868_;
}
}
v___jp_1881_:
{
if (v___y_1882_ == 0)
{
v___y_1880_ = v___y_1882_;
goto v___jp_1879_;
}
else
{
lean_dec(v_isLinearInst_x3f_1815_);
lean_dec(v_orderedAddInst_x3f_1814_);
lean_dec(v_lawfulOrderLTInst_x3f_1812_);
lean_dec(v_ltInst_x3f_1811_);
lean_dec(v_leInst_x3f_1810_);
lean_del_object(v___x_1798_);
lean_dec(v_val_1796_);
lean_del_object(v___x_1794_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_dec_ref(v___x_1732_);
lean_del_object(v___x_1729_);
lean_del_object(v___x_1709_);
lean_dec_ref(v_e_1693_);
goto v___jp_1805_;
}
}
v___jp_1883_:
{
if (lean_obj_tag(v_isPreorderInst_x3f_1813_) == 0)
{
v___y_1882_ = v___x_1718_;
goto v___jp_1881_;
}
else
{
lean_dec_ref(v_isPreorderInst_x3f_1813_);
v___y_1880_ = v___y_1884_;
goto v___jp_1879_;
}
}
}
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1894_; 
lean_del_object(v___x_1798_);
lean_dec(v_val_1796_);
lean_del_object(v___x_1794_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_dec_ref(v___x_1732_);
lean_del_object(v___x_1729_);
lean_del_object(v___x_1709_);
lean_dec_ref(v_e_1693_);
v_a_1887_ = lean_ctor_get(v___x_1800_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1800_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1889_ = v___x_1800_;
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1800_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1887_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
}
else
{
lean_object* v___x_1896_; lean_object* v___x_1898_; 
lean_dec(v_a_1792_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_dec_ref(v___x_1732_);
lean_del_object(v___x_1729_);
lean_del_object(v___x_1709_);
lean_dec_ref(v_e_1693_);
v___x_1896_ = lean_box(0);
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 0, v___x_1896_);
v___x_1898_ = v___x_1794_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1896_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
else
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1908_; 
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_dec_ref(v___x_1732_);
lean_del_object(v___x_1729_);
lean_del_object(v___x_1709_);
lean_dec_ref(v_e_1693_);
v_a_1901_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1908_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1908_ == 0)
{
v___x_1903_ = v___x_1791_;
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1791_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1908_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
lean_object* v___x_1906_; 
if (v_isShared_1904_ == 0)
{
v___x_1906_ = v___x_1903_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v_a_1901_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
v___jp_1741_:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing(v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_object* v_a_1755_; uint8_t v___x_1756_; 
v_a_1755_ = lean_ctor_get(v___x_1754_, 0);
lean_inc(v_a_1755_);
lean_dec_ref(v___x_1754_);
v___x_1756_ = lean_unbox(v_a_1755_);
lean_dec(v_a_1755_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1757_; 
v___x_1757_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateIntModuleIneq(v_e_1693_, v___x_1736_, v___x_1740_, v_strict_1742_, v_eqTrue_1694_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_);
lean_dec(v___y_1743_);
return v___x_1757_;
}
else
{
lean_object* v___x_1758_; 
v___x_1758_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr_0__Lean_Meta_Grind_Arith_Linear_propagateCommRingIneq(v_e_1693_, v___x_1736_, v___x_1740_, v_strict_1742_, v_eqTrue_1694_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_);
lean_dec(v___y_1743_);
return v___x_1758_;
}
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
lean_dec(v___y_1743_);
lean_dec_ref(v___x_1740_);
lean_dec_ref(v___x_1736_);
lean_dec_ref(v_e_1693_);
v_a_1759_ = lean_ctor_get(v___x_1754_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1754_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1754_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1754_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref(v___x_1725_);
lean_dec(v___x_1724_);
lean_dec(v___x_1716_);
lean_del_object(v___x_1709_);
lean_dec_ref(v_e_1693_);
v_a_1910_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1726_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1726_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
lean_dec_ref(v_e_1693_);
v_a_1919_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1706_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1706_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_propagateIneq___boxed(lean_object* v_e_1927_, lean_object* v_eqTrue_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_){
_start:
{
uint8_t v_eqTrue_boxed_1940_; lean_object* v_res_1941_; 
v_eqTrue_boxed_1940_ = lean_unbox(v_eqTrue_1928_);
v_res_1941_ = l_Lean_Meta_Grind_Arith_Linear_propagateIneq(v_e_1927_, v_eqTrue_boxed_1940_, v_a_1929_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_);
lean_dec(v_a_1938_);
lean_dec_ref(v_a_1937_);
lean_dec(v_a_1936_);
lean_dec_ref(v_a_1935_);
lean_dec(v_a_1934_);
lean_dec_ref(v_a_1933_);
lean_dec(v_a_1932_);
lean_dec_ref(v_a_1931_);
lean_dec(v_a_1930_);
lean_dec(v_a_1929_);
return v_res_1941_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Den(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Den(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Den(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Den(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Reify(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Linear_IneqCnstr(builtin);
}
#ifdef __cplusplus
}
#endif
