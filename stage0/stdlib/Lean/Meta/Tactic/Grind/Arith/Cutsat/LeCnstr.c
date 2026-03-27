// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Cutsat.LeCnstr
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Cutsat.ToInt import Init.Data.Int.OfNat import Lean.Meta.Tactic.Simp.Arith.Int import Lean.Meta.Tactic.Grind.Arith.Cutsat.Var import Lean.Meta.Tactic.Grind.Arith.Cutsat.Proof import Lean.Meta.Tactic.Grind.Arith.Cutsat.Nat import Lean.Meta.Tactic.Grind.Arith.Cutsat.Norm import Lean.Meta.Tactic.Grind.Arith.Cutsat.CommRing
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Int_Linear_instBEqPoly_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_eq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArray_default(lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Expr_norm(lean_object*);
lean_object* l_Int_Linear_Poly_normCommRing_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_cutsat_assert_le(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_toInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIntLit(lean_object*);
lean_object* l_Lean_mkIntAdd(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOfNotLE_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOfLE_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_ToIntM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstLEInt___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getIntValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_toPoly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_mul(lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_addConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_natToInt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqLBool_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_updateOccs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_setInconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_gcdCoeffs_x27(lean_object*);
lean_object* l_Int_Linear_Poly_div(lean_object*, lean_object*);
uint8_t l_Int_Linear_Poly_isSorted(lean_object*);
lean_object* l_Int_Linear_Poly_norm(lean_object*);
lean_object* l_Int_Linear_Poly_findVarToSubst___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_coeff(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_Linear_Poly_combine(lean_object*, lean_object*);
uint8_t l_Int_Linear_Poly_isUnsatLe(lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOfNotLT_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_getOfLT_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lia"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 228, 18, 139, 25, 122, 57, 58)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isNegEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isNegEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0;
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(87, 130, 109, 65, 232, 6, 169, 172)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(150, 223, 246, 201, 117, 37, 26, 227)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "new eq: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___boxed(lean_object**);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___boxed(lean_object**);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0;
static lean_once_cell_t l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___boxed(lean_object**);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "store"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__1_value),LEAN_SCALAR_PTR_LITERAL(236, 213, 16, 64, 1, 14, 244, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "trivial"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__3_value),LEAN_SCALAR_PTR_LITERAL(177, 38, 232, 206, 222, 75, 121, 224)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unsat"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__5_value),LEAN_SCALAR_PTR_LITERAL(216, 204, 174, 99, 3, 215, 140, 75)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 23, 180, 58, 194, 72, 175, 153)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 137, 50, 202, 239, 114, 140, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7_value;
LEAN_EXPORT lean_object* lean_grind_cutsat_assert_le(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "unexpected non normalized inequality constraint found"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ToInt"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "of_not_le"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(4, 173, 245, 176, 99, 227, 18, 222)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__3_value),LEAN_SCALAR_PTR_LITERAL(79, 115, 36, 201, 96, 73, 90, 93)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "of_le"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__2_value),LEAN_SCALAR_PTR_LITERAL(4, 173, 245, 176, 99, 227, 18, 222)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__6_value),LEAN_SCALAR_PTR_LITERAL(105, 164, 65, 191, 194, 192, 188, 236)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateToIntLe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateToIntLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__1_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm_spec__0(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_nat_to_int(v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(lean_object* v_c_3_){
_start:
{
lean_object* v___y_5_; lean_object* v_p_6_; lean_object* v_p_14_; uint8_t v___x_15_; 
v_p_14_ = lean_ctor_get(v_c_3_, 0);
v___x_15_ = l_Int_Linear_Poly_isSorted(v_p_14_);
if (v___x_15_ == 0)
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
lean_inc_ref(v_p_14_);
v___x_16_ = l_Int_Linear_Poly_norm(v_p_14_);
v___x_17_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_17_, 0, v_c_3_);
lean_inc_ref(v___x_16_);
v___x_18_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_18_, 0, v___x_16_);
lean_ctor_set(v___x_18_, 1, v___x_17_);
v___y_5_ = v___x_18_;
v_p_6_ = v___x_16_;
goto v___jp_4_;
}
else
{
lean_inc_ref(v_p_14_);
v___y_5_ = v_c_3_;
v_p_6_ = v_p_14_;
goto v___jp_4_;
}
v___jp_4_:
{
lean_object* v_k_7_; lean_object* v___x_8_; uint8_t v___x_9_; 
v_k_7_ = l_Int_Linear_Poly_gcdCoeffs_x27(v_p_6_);
v___x_8_ = lean_unsigned_to_nat(1u);
v___x_9_ = lean_nat_dec_eq(v_k_7_, v___x_8_);
if (v___x_9_ == 0)
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_10_ = lean_nat_to_int(v_k_7_);
v___x_11_ = l_Int_Linear_Poly_div(v___x_10_, v_p_6_);
lean_dec(v___x_10_);
v___x_12_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_12_, 0, v___y_5_);
v___x_13_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_13_, 0, v___x_11_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
return v___x_13_;
}
else
{
lean_dec(v_k_7_);
lean_dec_ref(v_p_6_);
return v___y_5_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(lean_object* v_cls_22_, lean_object* v___y_23_){
_start:
{
lean_object* v_options_25_; uint8_t v_hasTrace_26_; 
v_options_25_ = lean_ctor_get(v___y_23_, 2);
v_hasTrace_26_ = lean_ctor_get_uint8(v_options_25_, sizeof(void*)*1);
if (v_hasTrace_26_ == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; 
lean_dec(v_cls_22_);
v___x_27_ = lean_box(v_hasTrace_26_);
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
return v___x_28_;
}
else
{
lean_object* v_inheritedTraceOptions_29_; lean_object* v___x_30_; lean_object* v___x_31_; uint8_t v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v_inheritedTraceOptions_29_ = lean_ctor_get(v___y_23_, 13);
v___x_30_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___closed__1));
v___x_31_ = l_Lean_Name_append(v___x_30_, v_cls_22_);
v___x_32_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_29_, v_options_25_, v___x_31_);
lean_dec(v___x_31_);
v___x_33_ = lean_box(v___x_32_);
v___x_34_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
return v___x_34_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg___boxed(lean_object* v_cls_35_, lean_object* v___y_36_, lean_object* v___y_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v_cls_35_, v___y_36_);
lean_dec_ref(v___y_36_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0(lean_object* v_cls_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v_cls_39_, v___y_48_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___boxed(lean_object* v_cls_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0(v_cls_52_, v___y_53_, v___y_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_);
lean_dec(v___y_62_);
lean_dec_ref(v___y_61_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
lean_dec(v___y_54_);
lean_dec(v___y_53_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1_spec__1(lean_object* v_msgData_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; lean_object* v_env_72_; lean_object* v___x_73_; lean_object* v_mctx_74_; lean_object* v_lctx_75_; lean_object* v_options_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_71_ = lean_st_ref_get(v___y_69_);
v_env_72_ = lean_ctor_get(v___x_71_, 0);
lean_inc_ref(v_env_72_);
lean_dec(v___x_71_);
v___x_73_ = lean_st_ref_get(v___y_67_);
v_mctx_74_ = lean_ctor_get(v___x_73_, 0);
lean_inc_ref(v_mctx_74_);
lean_dec(v___x_73_);
v_lctx_75_ = lean_ctor_get(v___y_66_, 2);
v_options_76_ = lean_ctor_get(v___y_68_, 2);
lean_inc_ref(v_options_76_);
lean_inc_ref(v_lctx_75_);
v___x_77_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_77_, 0, v_env_72_);
lean_ctor_set(v___x_77_, 1, v_mctx_74_);
lean_ctor_set(v___x_77_, 2, v_lctx_75_);
lean_ctor_set(v___x_77_, 3, v_options_76_);
v___x_78_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_77_);
lean_ctor_set(v___x_78_, 1, v_msgData_65_);
v___x_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1_spec__1___boxed(lean_object* v_msgData_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1_spec__1(v_msgData_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
return v_res_86_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_87_; double v___x_88_; 
v___x_87_ = lean_unsigned_to_nat(0u);
v___x_88_ = lean_float_of_nat(v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(lean_object* v_cls_92_, lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v_ref_99_; lean_object* v___x_100_; lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_145_; 
v_ref_99_ = lean_ctor_get(v___y_96_, 5);
v___x_100_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1_spec__1(v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
v_a_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_145_ == 0)
{
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_145_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_145_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_105_; lean_object* v_traceState_106_; lean_object* v_env_107_; lean_object* v_nextMacroScope_108_; lean_object* v_ngen_109_; lean_object* v_auxDeclNGen_110_; lean_object* v_cache_111_; lean_object* v_messages_112_; lean_object* v_infoState_113_; lean_object* v_snapshotTasks_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_144_; 
v___x_105_ = lean_st_ref_take(v___y_97_);
v_traceState_106_ = lean_ctor_get(v___x_105_, 4);
v_env_107_ = lean_ctor_get(v___x_105_, 0);
v_nextMacroScope_108_ = lean_ctor_get(v___x_105_, 1);
v_ngen_109_ = lean_ctor_get(v___x_105_, 2);
v_auxDeclNGen_110_ = lean_ctor_get(v___x_105_, 3);
v_cache_111_ = lean_ctor_get(v___x_105_, 5);
v_messages_112_ = lean_ctor_get(v___x_105_, 6);
v_infoState_113_ = lean_ctor_get(v___x_105_, 7);
v_snapshotTasks_114_ = lean_ctor_get(v___x_105_, 8);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_144_ == 0)
{
v___x_116_ = v___x_105_;
v_isShared_117_ = v_isSharedCheck_144_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_snapshotTasks_114_);
lean_inc(v_infoState_113_);
lean_inc(v_messages_112_);
lean_inc(v_cache_111_);
lean_inc(v_traceState_106_);
lean_inc(v_auxDeclNGen_110_);
lean_inc(v_ngen_109_);
lean_inc(v_nextMacroScope_108_);
lean_inc(v_env_107_);
lean_dec(v___x_105_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_144_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
uint64_t v_tid_118_; lean_object* v_traces_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_143_; 
v_tid_118_ = lean_ctor_get_uint64(v_traceState_106_, sizeof(void*)*1);
v_traces_119_ = lean_ctor_get(v_traceState_106_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v_traceState_106_);
if (v_isSharedCheck_143_ == 0)
{
v___x_121_ = v_traceState_106_;
v_isShared_122_ = v_isSharedCheck_143_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_traces_119_);
lean_dec(v_traceState_106_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_143_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; double v___x_124_; uint8_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_133_; 
v___x_123_ = lean_box(0);
v___x_124_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__0);
v___x_125_ = 0;
v___x_126_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__1));
v___x_127_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_127_, 0, v_cls_92_);
lean_ctor_set(v___x_127_, 1, v___x_123_);
lean_ctor_set(v___x_127_, 2, v___x_126_);
lean_ctor_set_float(v___x_127_, sizeof(void*)*3, v___x_124_);
lean_ctor_set_float(v___x_127_, sizeof(void*)*3 + 8, v___x_124_);
lean_ctor_set_uint8(v___x_127_, sizeof(void*)*3 + 16, v___x_125_);
v___x_128_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___closed__2));
v___x_129_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_129_, 0, v___x_127_);
lean_ctor_set(v___x_129_, 1, v_a_101_);
lean_ctor_set(v___x_129_, 2, v___x_128_);
lean_inc(v_ref_99_);
v___x_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_130_, 0, v_ref_99_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = l_Lean_PersistentArray_push___redArg(v_traces_119_, v___x_130_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 0, v___x_131_);
v___x_133_ = v___x_121_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_131_);
lean_ctor_set_uint64(v_reuseFailAlloc_142_, sizeof(void*)*1, v_tid_118_);
v___x_133_ = v_reuseFailAlloc_142_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
lean_object* v___x_135_; 
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 4, v___x_133_);
v___x_135_ = v___x_116_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_env_107_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v_nextMacroScope_108_);
lean_ctor_set(v_reuseFailAlloc_141_, 2, v_ngen_109_);
lean_ctor_set(v_reuseFailAlloc_141_, 3, v_auxDeclNGen_110_);
lean_ctor_set(v_reuseFailAlloc_141_, 4, v___x_133_);
lean_ctor_set(v_reuseFailAlloc_141_, 5, v_cache_111_);
lean_ctor_set(v_reuseFailAlloc_141_, 6, v_messages_112_);
lean_ctor_set(v_reuseFailAlloc_141_, 7, v_infoState_113_);
lean_ctor_set(v_reuseFailAlloc_141_, 8, v_snapshotTasks_114_);
v___x_135_ = v_reuseFailAlloc_141_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_139_; 
v___x_136_ = lean_st_ref_set(v___y_97_, v___x_135_);
v___x_137_ = lean_box(0);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v___x_137_);
v___x_139_ = v___x_103_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg___boxed(lean_object* v_cls_146_, lean_object* v_msg_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v_cls_146_, v_msg_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
lean_dec(v___y_151_);
lean_dec_ref(v___y_150_);
lean_dec(v___y_149_);
lean_dec_ref(v___y_148_);
return v_res_153_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__4));
v___x_163_ = l_Lean_stringToMessageData(v___x_162_);
return v___x_163_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_unsigned_to_nat(0u);
v___x_165_ = lean_nat_to_int(v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(lean_object* v_a_166_, lean_object* v_x_167_, lean_object* v_c_u2081_168_, lean_object* v_b_169_, lean_object* v_c_u2082_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v___y_183_; lean_object* v___y_188_; lean_object* v_p_238_; lean_object* v_p_239_; lean_object* v___x_240_; uint8_t v___x_241_; 
v_p_238_ = lean_ctor_get(v_c_u2081_168_, 0);
v_p_239_ = lean_ctor_get(v_c_u2082_170_, 0);
v___x_240_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6);
v___x_241_ = lean_int_dec_le(v___x_240_, v_a_166_);
if (v___x_241_ == 0)
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
lean_inc_ref(v_p_238_);
v___x_242_ = l_Int_Linear_Poly_mul(v_p_238_, v_b_169_);
v___x_243_ = lean_int_neg(v_a_166_);
lean_inc_ref(v_p_239_);
v___x_244_ = l_Int_Linear_Poly_mul(v_p_239_, v___x_243_);
lean_dec(v___x_243_);
v___x_245_ = l_Int_Linear_Poly_combine(v___x_242_, v___x_244_);
v___y_188_ = v___x_245_;
goto v___jp_187_;
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
lean_inc_ref(v_p_239_);
v___x_246_ = l_Int_Linear_Poly_mul(v_p_239_, v_a_166_);
v___x_247_ = lean_int_neg(v_b_169_);
lean_inc_ref(v_p_238_);
v___x_248_ = l_Int_Linear_Poly_mul(v_p_238_, v___x_247_);
lean_dec(v___x_247_);
v___x_249_ = l_Int_Linear_Poly_combine(v___x_246_, v___x_248_);
v___y_188_ = v___x_249_;
goto v___jp_187_;
}
v___jp_182_:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v___x_184_, 0, v_x_167_);
lean_ctor_set(v___x_184_, 1, v_c_u2081_168_);
lean_ctor_set(v___x_184_, 2, v_c_u2082_170_);
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v___y_183_);
lean_ctor_set(v___x_185_, 1, v___x_184_);
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
v___jp_187_:
{
lean_object* v_cls_189_; lean_object* v___x_190_; lean_object* v_a_191_; uint8_t v___x_192_; 
v_cls_189_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__3));
v___x_190_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v_cls_189_, v_a_179_);
v_a_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc(v_a_191_);
lean_dec_ref(v___x_190_);
v___x_192_ = lean_unbox(v_a_191_);
lean_dec(v_a_191_);
if (v___x_192_ == 0)
{
v___y_183_ = v___y_188_;
goto v___jp_182_;
}
else
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_Meta_Grind_Arith_Cutsat_getVar___redArg(v_x_167_, v_a_171_, v_a_179_);
if (lean_obj_tag(v___x_193_) == 0)
{
lean_object* v_a_194_; lean_object* v___x_195_; 
v_a_194_ = lean_ctor_get(v___x_193_, 0);
lean_inc(v_a_194_);
lean_dec_ref(v___x_193_);
lean_inc_ref(v_c_u2081_168_);
v___x_195_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v_c_u2081_168_, v_a_171_, v_a_179_);
if (lean_obj_tag(v___x_195_) == 0)
{
lean_object* v_a_196_; lean_object* v___x_197_; 
v_a_196_ = lean_ctor_get(v___x_195_, 0);
lean_inc(v_a_196_);
lean_dec_ref(v___x_195_);
lean_inc_ref(v_c_u2082_170_);
v___x_197_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_u2082_170_, v_a_171_, v_a_179_);
if (lean_obj_tag(v___x_197_) == 0)
{
lean_object* v_a_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v_a_198_ = lean_ctor_get(v___x_197_, 0);
lean_inc(v_a_198_);
lean_dec_ref(v___x_197_);
v___x_199_ = l_Lean_MessageData_ofExpr(v_a_194_);
v___x_200_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__5);
v___x_201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_199_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
lean_ctor_set(v___x_202_, 1, v_a_196_);
v___x_203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
lean_ctor_set(v___x_203_, 1, v___x_200_);
v___x_204_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
lean_ctor_set(v___x_204_, 1, v_a_198_);
v___x_205_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v_cls_189_, v___x_204_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_dec_ref(v___x_205_);
v___y_183_ = v___y_188_;
goto v___jp_182_;
}
else
{
lean_object* v_a_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_213_; 
lean_dec_ref(v___y_188_);
lean_dec_ref(v_c_u2082_170_);
lean_dec_ref(v_c_u2081_168_);
lean_dec(v_x_167_);
v_a_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_213_ == 0)
{
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_a_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_213_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_211_; 
if (v_isShared_209_ == 0)
{
v___x_211_ = v___x_208_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_a_206_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
}
}
else
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
lean_dec(v_a_196_);
lean_dec(v_a_194_);
lean_dec_ref(v___y_188_);
lean_dec_ref(v_c_u2082_170_);
lean_dec_ref(v_c_u2081_168_);
lean_dec(v_x_167_);
v_a_214_ = lean_ctor_get(v___x_197_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___x_197_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_197_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_a_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
else
{
lean_object* v_a_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_229_; 
lean_dec(v_a_194_);
lean_dec_ref(v___y_188_);
lean_dec_ref(v_c_u2082_170_);
lean_dec_ref(v_c_u2081_168_);
lean_dec(v_x_167_);
v_a_222_ = lean_ctor_get(v___x_195_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_195_);
if (v_isSharedCheck_229_ == 0)
{
v___x_224_ = v___x_195_;
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_a_222_);
lean_dec(v___x_195_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_229_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_228_; 
v_reuseFailAlloc_228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_228_, 0, v_a_222_);
v___x_227_ = v_reuseFailAlloc_228_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
return v___x_227_;
}
}
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
lean_dec_ref(v___y_188_);
lean_dec_ref(v_c_u2082_170_);
lean_dec_ref(v_c_u2081_168_);
lean_dec(v_x_167_);
v_a_230_ = lean_ctor_get(v___x_193_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_193_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_193_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_193_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___boxed(lean_object* v_a_250_, lean_object* v_x_251_, lean_object* v_c_u2081_252_, lean_object* v_b_253_, lean_object* v_c_u2082_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(v_a_250_, v_x_251_, v_c_u2081_252_, v_b_253_, v_c_u2082_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_, v_a_262_, v_a_263_, v_a_264_);
lean_dec(v_a_264_);
lean_dec_ref(v_a_263_);
lean_dec(v_a_262_);
lean_dec_ref(v_a_261_);
lean_dec(v_a_260_);
lean_dec_ref(v_a_259_);
lean_dec(v_a_258_);
lean_dec_ref(v_a_257_);
lean_dec(v_a_256_);
lean_dec(v_a_255_);
lean_dec(v_b_253_);
lean_dec(v_a_250_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1(lean_object* v_cls_267_, lean_object* v_msg_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v_cls_267_, v_msg_268_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___boxed(lean_object* v_cls_281_, lean_object* v_msg_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1(v_cls_281_, v_msg_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
lean_dec(v___y_284_);
lean_dec(v___y_283_);
return v_res_294_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = l_Lean_maxRecDepthErrorMessage;
v___x_301_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__3);
v___x_303_ = l_Lean_MessageData_ofFormat(v___x_302_);
return v___x_303_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_304_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__4);
v___x_305_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__2));
v___x_306_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
lean_ctor_set(v___x_306_, 1, v___x_304_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(lean_object* v_ref_307_){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_309_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___closed__5);
v___x_310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_310_, 0, v_ref_307_);
lean_ctor_set(v___x_310_, 1, v___x_309_);
v___x_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg___boxed(lean_object* v_ref_312_, lean_object* v___y_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(v_ref_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0(lean_object* v_00_u03b1_315_, lean_object* v_ref_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v___x_328_; 
v___x_328_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(v_ref_316_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___boxed(lean_object* v_00_u03b1_329_, lean_object* v_ref_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0(v_00_u03b1_329_, v_ref_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
lean_dec(v___y_332_);
lean_dec(v___y_331_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(lean_object* v_c_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
lean_object* v_fileName_355_; lean_object* v_fileMap_356_; lean_object* v_options_357_; lean_object* v_currRecDepth_358_; lean_object* v_maxRecDepth_359_; lean_object* v_ref_360_; lean_object* v_currNamespace_361_; lean_object* v_openDecls_362_; lean_object* v_initHeartbeats_363_; lean_object* v_maxHeartbeats_364_; lean_object* v_quotContext_365_; lean_object* v_currMacroScope_366_; uint8_t v_diag_367_; lean_object* v_cancelTk_x3f_368_; uint8_t v_suppressElabErrors_369_; lean_object* v_inheritedTraceOptions_370_; uint8_t v___x_371_; 
v_fileName_355_ = lean_ctor_get(v_a_352_, 0);
lean_inc_ref(v_fileName_355_);
v_fileMap_356_ = lean_ctor_get(v_a_352_, 1);
lean_inc_ref(v_fileMap_356_);
v_options_357_ = lean_ctor_get(v_a_352_, 2);
lean_inc_ref(v_options_357_);
v_currRecDepth_358_ = lean_ctor_get(v_a_352_, 3);
lean_inc(v_currRecDepth_358_);
v_maxRecDepth_359_ = lean_ctor_get(v_a_352_, 4);
lean_inc(v_maxRecDepth_359_);
v_ref_360_ = lean_ctor_get(v_a_352_, 5);
lean_inc(v_ref_360_);
v_currNamespace_361_ = lean_ctor_get(v_a_352_, 6);
lean_inc(v_currNamespace_361_);
v_openDecls_362_ = lean_ctor_get(v_a_352_, 7);
lean_inc(v_openDecls_362_);
v_initHeartbeats_363_ = lean_ctor_get(v_a_352_, 8);
lean_inc(v_initHeartbeats_363_);
v_maxHeartbeats_364_ = lean_ctor_get(v_a_352_, 9);
lean_inc(v_maxHeartbeats_364_);
v_quotContext_365_ = lean_ctor_get(v_a_352_, 10);
lean_inc(v_quotContext_365_);
v_currMacroScope_366_ = lean_ctor_get(v_a_352_, 11);
lean_inc(v_currMacroScope_366_);
v_diag_367_ = lean_ctor_get_uint8(v_a_352_, sizeof(void*)*14);
v_cancelTk_x3f_368_ = lean_ctor_get(v_a_352_, 12);
lean_inc(v_cancelTk_x3f_368_);
v_suppressElabErrors_369_ = lean_ctor_get_uint8(v_a_352_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_370_ = lean_ctor_get(v_a_352_, 13);
lean_inc_ref(v_inheritedTraceOptions_370_);
lean_dec_ref(v_a_352_);
v___x_371_ = lean_nat_dec_eq(v_currRecDepth_358_, v_maxRecDepth_359_);
if (v___x_371_ == 0)
{
lean_object* v_p_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v_p_372_ = lean_ctor_get(v_c_343_, 0);
v___x_373_ = lean_unsigned_to_nat(1u);
v___x_374_ = lean_nat_add(v_currRecDepth_358_, v___x_373_);
lean_dec(v_currRecDepth_358_);
v___x_375_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_375_, 0, v_fileName_355_);
lean_ctor_set(v___x_375_, 1, v_fileMap_356_);
lean_ctor_set(v___x_375_, 2, v_options_357_);
lean_ctor_set(v___x_375_, 3, v___x_374_);
lean_ctor_set(v___x_375_, 4, v_maxRecDepth_359_);
lean_ctor_set(v___x_375_, 5, v_ref_360_);
lean_ctor_set(v___x_375_, 6, v_currNamespace_361_);
lean_ctor_set(v___x_375_, 7, v_openDecls_362_);
lean_ctor_set(v___x_375_, 8, v_initHeartbeats_363_);
lean_ctor_set(v___x_375_, 9, v_maxHeartbeats_364_);
lean_ctor_set(v___x_375_, 10, v_quotContext_365_);
lean_ctor_set(v___x_375_, 11, v_currMacroScope_366_);
lean_ctor_set(v___x_375_, 12, v_cancelTk_x3f_368_);
lean_ctor_set(v___x_375_, 13, v_inheritedTraceOptions_370_);
lean_ctor_set_uint8(v___x_375_, sizeof(void*)*14, v_diag_367_);
lean_ctor_set_uint8(v___x_375_, sizeof(void*)*14 + 1, v_suppressElabErrors_369_);
lean_inc_ref(v_p_372_);
v___x_376_ = l_Int_Linear_Poly_findVarToSubst___redArg(v_p_372_, v_a_344_, v___x_375_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_394_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_394_ == 0)
{
v___x_379_ = v___x_376_;
v_isShared_380_ = v_isSharedCheck_394_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_376_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_394_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
if (lean_obj_tag(v_a_377_) == 1)
{
lean_object* v_val_381_; lean_object* v_snd_382_; lean_object* v_snd_383_; lean_object* v_fst_384_; lean_object* v_fst_385_; lean_object* v_p_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
lean_del_object(v___x_379_);
v_val_381_ = lean_ctor_get(v_a_377_, 0);
lean_inc(v_val_381_);
lean_dec_ref(v_a_377_);
v_snd_382_ = lean_ctor_get(v_val_381_, 1);
lean_inc(v_snd_382_);
v_snd_383_ = lean_ctor_get(v_snd_382_, 1);
lean_inc(v_snd_383_);
v_fst_384_ = lean_ctor_get(v_val_381_, 0);
lean_inc(v_fst_384_);
lean_dec(v_val_381_);
v_fst_385_ = lean_ctor_get(v_snd_382_, 0);
lean_inc(v_fst_385_);
lean_dec(v_snd_382_);
v_p_386_ = lean_ctor_get(v_snd_383_, 0);
v___x_387_ = l_Int_Linear_Poly_coeff(v_p_386_, v_fst_385_);
v___x_388_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq(v___x_387_, v_fst_385_, v_snd_383_, v_fst_384_, v_c_343_, v_a_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_, v_a_351_, v___x_375_, v_a_353_);
lean_dec(v_fst_384_);
lean_dec(v___x_387_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v_a_389_; 
v_a_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_a_389_);
lean_dec_ref(v___x_388_);
v_c_343_ = v_a_389_;
v_a_352_ = v___x_375_;
goto _start;
}
else
{
lean_dec_ref(v___x_375_);
return v___x_388_;
}
}
else
{
lean_object* v___x_392_; 
lean_dec(v_a_377_);
lean_dec_ref(v___x_375_);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v_c_343_);
v___x_392_ = v___x_379_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_c_343_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec_ref(v___x_375_);
lean_dec_ref(v_c_343_);
v_a_395_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_376_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_376_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
else
{
lean_object* v___x_403_; 
lean_dec_ref(v_inheritedTraceOptions_370_);
lean_dec(v_cancelTk_x3f_368_);
lean_dec(v_currMacroScope_366_);
lean_dec(v_quotContext_365_);
lean_dec(v_maxHeartbeats_364_);
lean_dec(v_initHeartbeats_363_);
lean_dec(v_openDecls_362_);
lean_dec(v_currNamespace_361_);
lean_dec(v_maxRecDepth_359_);
lean_dec(v_currRecDepth_358_);
lean_dec_ref(v_options_357_);
lean_dec_ref(v_fileMap_356_);
lean_dec_ref(v_fileName_355_);
lean_dec_ref(v_c_343_);
v___x_403_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts_spec__0___redArg(v_ref_360_);
return v___x_403_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts___boxed(lean_object* v_c_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(v_c_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_);
lean_dec(v_a_414_);
lean_dec(v_a_412_);
lean_dec_ref(v_a_411_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
lean_dec(v_a_406_);
lean_dec(v_a_405_);
return v_res_416_;
}
}
LEAN_EXPORT uint8_t l_Int_Linear_Poly_isNegEq(lean_object* v_p_u2081_417_, lean_object* v_p_u2082_418_){
_start:
{
if (lean_obj_tag(v_p_u2081_417_) == 0)
{
if (lean_obj_tag(v_p_u2082_418_) == 0)
{
lean_object* v_k_419_; lean_object* v_k_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
v_k_419_ = lean_ctor_get(v_p_u2081_417_, 0);
v_k_420_ = lean_ctor_get(v_p_u2082_418_, 0);
v___x_421_ = lean_int_neg(v_k_420_);
v___x_422_ = lean_int_dec_eq(v_k_419_, v___x_421_);
lean_dec(v___x_421_);
return v___x_422_;
}
else
{
uint8_t v___x_423_; 
v___x_423_ = 0;
return v___x_423_;
}
}
else
{
if (lean_obj_tag(v_p_u2082_418_) == 1)
{
lean_object* v_k_424_; lean_object* v_v_425_; lean_object* v_p_426_; lean_object* v_k_427_; lean_object* v_v_428_; lean_object* v_p_429_; uint8_t v___y_431_; lean_object* v___x_433_; uint8_t v___x_434_; 
v_k_424_ = lean_ctor_get(v_p_u2081_417_, 0);
v_v_425_ = lean_ctor_get(v_p_u2081_417_, 1);
v_p_426_ = lean_ctor_get(v_p_u2081_417_, 2);
v_k_427_ = lean_ctor_get(v_p_u2082_418_, 0);
v_v_428_ = lean_ctor_get(v_p_u2082_418_, 1);
v_p_429_ = lean_ctor_get(v_p_u2082_418_, 2);
v___x_433_ = lean_int_neg(v_k_427_);
v___x_434_ = lean_int_dec_eq(v_k_424_, v___x_433_);
lean_dec(v___x_433_);
if (v___x_434_ == 0)
{
v___y_431_ = v___x_434_;
goto v___jp_430_;
}
else
{
uint8_t v___x_435_; 
v___x_435_ = lean_nat_dec_eq(v_v_425_, v_v_428_);
v___y_431_ = v___x_435_;
goto v___jp_430_;
}
v___jp_430_:
{
if (v___y_431_ == 0)
{
return v___y_431_;
}
else
{
v_p_u2081_417_ = v_p_426_;
v_p_u2082_418_ = v_p_429_;
goto _start;
}
}
}
else
{
uint8_t v___x_436_; 
v___x_436_ = 0;
return v___x_436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Int_Linear_Poly_isNegEq___boxed(lean_object* v_p_u2081_437_, lean_object* v_p_u2082_438_){
_start:
{
uint8_t v_res_439_; lean_object* v_r_440_; 
v_res_439_ = l_Int_Linear_Poly_isNegEq(v_p_u2081_437_, v_p_u2082_438_);
lean_dec_ref(v_p_u2082_438_);
lean_dec_ref(v_p_u2081_437_);
v_r_440_ = lean_box(v_res_439_);
return v_r_440_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(lean_object* v___x_441_, lean_object* v_as_442_, size_t v_i_443_, size_t v_stop_444_, lean_object* v_b_445_){
_start:
{
lean_object* v___y_447_; uint8_t v___x_451_; 
v___x_451_ = lean_usize_dec_eq(v_i_443_, v_stop_444_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; lean_object* v_p_453_; uint8_t v___x_454_; 
v___x_452_ = lean_array_uget_borrowed(v_as_442_, v_i_443_);
v_p_453_ = lean_ctor_get(v___x_452_, 0);
v___x_454_ = l_Int_Linear_instBEqPoly_beq(v_p_453_, v___x_441_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; 
lean_inc(v___x_452_);
v___x_455_ = l_Lean_PersistentArray_push___redArg(v_b_445_, v___x_452_);
v___y_447_ = v___x_455_;
goto v___jp_446_;
}
else
{
v___y_447_ = v_b_445_;
goto v___jp_446_;
}
}
else
{
return v_b_445_;
}
v___jp_446_:
{
size_t v___x_448_; size_t v___x_449_; 
v___x_448_ = ((size_t)1ULL);
v___x_449_ = lean_usize_add(v_i_443_, v___x_448_);
v_i_443_ = v___x_449_;
v_b_445_ = v___y_447_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1___boxed(lean_object* v___x_456_, lean_object* v_as_457_, lean_object* v_i_458_, lean_object* v_stop_459_, lean_object* v_b_460_){
_start:
{
size_t v_i_boxed_461_; size_t v_stop_boxed_462_; lean_object* v_res_463_; 
v_i_boxed_461_ = lean_unbox_usize(v_i_458_);
lean_dec(v_i_458_);
v_stop_boxed_462_ = lean_unbox_usize(v_stop_459_);
lean_dec(v_stop_459_);
v_res_463_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_456_, v_as_457_, v_i_boxed_461_, v_stop_boxed_462_, v_b_460_);
lean_dec_ref(v_as_457_);
lean_dec_ref(v___x_456_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(lean_object* v___x_464_, lean_object* v_x_465_, lean_object* v_x_466_){
_start:
{
if (lean_obj_tag(v_x_465_) == 0)
{
lean_object* v_cs_467_; lean_object* v___x_468_; lean_object* v___x_469_; uint8_t v___x_470_; 
v_cs_467_ = lean_ctor_get(v_x_465_, 0);
v___x_468_ = lean_unsigned_to_nat(0u);
v___x_469_ = lean_array_get_size(v_cs_467_);
v___x_470_ = lean_nat_dec_lt(v___x_468_, v___x_469_);
if (v___x_470_ == 0)
{
return v_x_466_;
}
else
{
uint8_t v___x_471_; 
v___x_471_ = lean_nat_dec_le(v___x_469_, v___x_469_);
if (v___x_471_ == 0)
{
if (v___x_470_ == 0)
{
return v_x_466_;
}
else
{
size_t v___x_472_; size_t v___x_473_; lean_object* v___x_474_; 
v___x_472_ = ((size_t)0ULL);
v___x_473_ = lean_usize_of_nat(v___x_469_);
v___x_474_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v___x_464_, v_cs_467_, v___x_472_, v___x_473_, v_x_466_);
return v___x_474_;
}
}
else
{
size_t v___x_475_; size_t v___x_476_; lean_object* v___x_477_; 
v___x_475_ = ((size_t)0ULL);
v___x_476_ = lean_usize_of_nat(v___x_469_);
v___x_477_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v___x_464_, v_cs_467_, v___x_475_, v___x_476_, v_x_466_);
return v___x_477_;
}
}
}
else
{
lean_object* v_vs_478_; lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v_vs_478_ = lean_ctor_get(v_x_465_, 0);
v___x_479_ = lean_unsigned_to_nat(0u);
v___x_480_ = lean_array_get_size(v_vs_478_);
v___x_481_ = lean_nat_dec_lt(v___x_479_, v___x_480_);
if (v___x_481_ == 0)
{
return v_x_466_;
}
else
{
uint8_t v___x_482_; 
v___x_482_ = lean_nat_dec_le(v___x_480_, v___x_480_);
if (v___x_482_ == 0)
{
if (v___x_481_ == 0)
{
return v_x_466_;
}
else
{
size_t v___x_483_; size_t v___x_484_; lean_object* v___x_485_; 
v___x_483_ = ((size_t)0ULL);
v___x_484_ = lean_usize_of_nat(v___x_480_);
v___x_485_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_464_, v_vs_478_, v___x_483_, v___x_484_, v_x_466_);
return v___x_485_;
}
}
else
{
size_t v___x_486_; size_t v___x_487_; lean_object* v___x_488_; 
v___x_486_ = ((size_t)0ULL);
v___x_487_ = lean_usize_of_nat(v___x_480_);
v___x_488_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_464_, v_vs_478_, v___x_486_, v___x_487_, v_x_466_);
return v___x_488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(lean_object* v___x_489_, lean_object* v_as_490_, size_t v_i_491_, size_t v_stop_492_, lean_object* v_b_493_){
_start:
{
uint8_t v___x_494_; 
v___x_494_ = lean_usize_dec_eq(v_i_491_, v_stop_492_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; lean_object* v___x_496_; size_t v___x_497_; size_t v___x_498_; 
v___x_495_ = lean_array_uget_borrowed(v_as_490_, v_i_491_);
v___x_496_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(v___x_489_, v___x_495_, v_b_493_);
v___x_497_ = ((size_t)1ULL);
v___x_498_ = lean_usize_add(v_i_491_, v___x_497_);
v_i_491_ = v___x_498_;
v_b_493_ = v___x_496_;
goto _start;
}
else
{
return v_b_493_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1___boxed(lean_object* v___x_500_, lean_object* v_as_501_, lean_object* v_i_502_, lean_object* v_stop_503_, lean_object* v_b_504_){
_start:
{
size_t v_i_boxed_505_; size_t v_stop_boxed_506_; lean_object* v_res_507_; 
v_i_boxed_505_ = lean_unbox_usize(v_i_502_);
lean_dec(v_i_502_);
v_stop_boxed_506_ = lean_unbox_usize(v_stop_503_);
lean_dec(v_stop_503_);
v_res_507_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v___x_500_, v_as_501_, v_i_boxed_505_, v_stop_boxed_506_, v_b_504_);
lean_dec_ref(v_as_501_);
lean_dec_ref(v___x_500_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2___boxed(lean_object* v___x_508_, lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(v___x_508_, v_x_509_, v_x_510_);
lean_dec_ref(v_x_509_);
lean_dec_ref(v___x_508_);
return v_res_511_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_instInhabitedPersistentArrayNode_default(lean_box(0));
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(lean_object* v___x_513_, lean_object* v_x_514_, size_t v_x_515_, size_t v_x_516_, lean_object* v_x_517_){
_start:
{
if (lean_obj_tag(v_x_514_) == 0)
{
lean_object* v_cs_518_; lean_object* v___x_519_; size_t v___x_520_; lean_object* v_j_521_; lean_object* v___x_522_; size_t v___x_523_; size_t v___x_524_; size_t v___x_525_; size_t v___x_526_; size_t v___x_527_; size_t v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; 
v_cs_518_ = lean_ctor_get(v_x_514_, 0);
v___x_519_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0);
v___x_520_ = lean_usize_shift_right(v_x_515_, v_x_516_);
v_j_521_ = lean_usize_to_nat(v___x_520_);
v___x_522_ = lean_array_get_borrowed(v___x_519_, v_cs_518_, v_j_521_);
v___x_523_ = ((size_t)1ULL);
v___x_524_ = lean_usize_shift_left(v___x_523_, v_x_516_);
v___x_525_ = lean_usize_sub(v___x_524_, v___x_523_);
v___x_526_ = lean_usize_land(v_x_515_, v___x_525_);
v___x_527_ = ((size_t)5ULL);
v___x_528_ = lean_usize_sub(v_x_516_, v___x_527_);
v___x_529_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(v___x_513_, v___x_522_, v___x_526_, v___x_528_, v_x_517_);
v___x_530_ = lean_unsigned_to_nat(1u);
v___x_531_ = lean_nat_add(v_j_521_, v___x_530_);
lean_dec(v_j_521_);
v___x_532_ = lean_array_get_size(v_cs_518_);
v___x_533_ = lean_nat_dec_lt(v___x_531_, v___x_532_);
if (v___x_533_ == 0)
{
lean_dec(v___x_531_);
return v___x_529_;
}
else
{
uint8_t v___x_534_; 
v___x_534_ = lean_nat_dec_le(v___x_532_, v___x_532_);
if (v___x_534_ == 0)
{
if (v___x_533_ == 0)
{
lean_dec(v___x_531_);
return v___x_529_;
}
else
{
size_t v___x_535_; size_t v___x_536_; lean_object* v___x_537_; 
v___x_535_ = lean_usize_of_nat(v___x_531_);
lean_dec(v___x_531_);
v___x_536_ = lean_usize_of_nat(v___x_532_);
v___x_537_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v___x_513_, v_cs_518_, v___x_535_, v___x_536_, v___x_529_);
return v___x_537_;
}
}
else
{
size_t v___x_538_; size_t v___x_539_; lean_object* v___x_540_; 
v___x_538_ = lean_usize_of_nat(v___x_531_);
lean_dec(v___x_531_);
v___x_539_ = lean_usize_of_nat(v___x_532_);
v___x_540_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0_spec__1(v___x_513_, v_cs_518_, v___x_538_, v___x_539_, v___x_529_);
return v___x_540_;
}
}
}
else
{
lean_object* v_vs_541_; lean_object* v___x_542_; lean_object* v___x_543_; uint8_t v___x_544_; 
v_vs_541_ = lean_ctor_get(v_x_514_, 0);
v___x_542_ = lean_usize_to_nat(v_x_515_);
v___x_543_ = lean_array_get_size(v_vs_541_);
v___x_544_ = lean_nat_dec_lt(v___x_542_, v___x_543_);
if (v___x_544_ == 0)
{
lean_dec(v___x_542_);
return v_x_517_;
}
else
{
uint8_t v___x_545_; 
v___x_545_ = lean_nat_dec_le(v___x_543_, v___x_543_);
if (v___x_545_ == 0)
{
if (v___x_544_ == 0)
{
lean_dec(v___x_542_);
return v_x_517_;
}
else
{
size_t v___x_546_; size_t v___x_547_; lean_object* v___x_548_; 
v___x_546_ = lean_usize_of_nat(v___x_542_);
lean_dec(v___x_542_);
v___x_547_ = lean_usize_of_nat(v___x_543_);
v___x_548_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_513_, v_vs_541_, v___x_546_, v___x_547_, v_x_517_);
return v___x_548_;
}
}
else
{
size_t v___x_549_; size_t v___x_550_; lean_object* v___x_551_; 
v___x_549_ = lean_usize_of_nat(v___x_542_);
lean_dec(v___x_542_);
v___x_550_ = lean_usize_of_nat(v___x_543_);
v___x_551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_513_, v_vs_541_, v___x_549_, v___x_550_, v_x_517_);
return v___x_551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___boxed(lean_object* v___x_552_, lean_object* v_x_553_, lean_object* v_x_554_, lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
size_t v_x_2065__boxed_557_; size_t v_x_2066__boxed_558_; lean_object* v_res_559_; 
v_x_2065__boxed_557_ = lean_unbox_usize(v_x_554_);
lean_dec(v_x_554_);
v_x_2066__boxed_558_ = lean_unbox_usize(v_x_555_);
lean_dec(v_x_555_);
v_res_559_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(v___x_552_, v_x_553_, v_x_2065__boxed_557_, v_x_2066__boxed_558_, v_x_556_);
lean_dec_ref(v_x_553_);
lean_dec_ref(v___x_552_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(lean_object* v___x_560_, lean_object* v_t_561_, lean_object* v_init_562_, lean_object* v_start_563_){
_start:
{
lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = lean_nat_dec_eq(v_start_563_, v___x_564_);
if (v___x_565_ == 0)
{
lean_object* v_root_566_; lean_object* v_tail_567_; size_t v_shift_568_; lean_object* v_tailOff_569_; uint8_t v___x_570_; 
v_root_566_ = lean_ctor_get(v_t_561_, 0);
v_tail_567_ = lean_ctor_get(v_t_561_, 1);
v_shift_568_ = lean_ctor_get_usize(v_t_561_, 4);
v_tailOff_569_ = lean_ctor_get(v_t_561_, 3);
v___x_570_ = lean_nat_dec_le(v_tailOff_569_, v_start_563_);
if (v___x_570_ == 0)
{
size_t v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; uint8_t v___x_574_; 
v___x_571_ = lean_usize_of_nat(v_start_563_);
v___x_572_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0(v___x_560_, v_root_566_, v___x_571_, v_shift_568_, v_init_562_);
v___x_573_ = lean_array_get_size(v_tail_567_);
v___x_574_ = lean_nat_dec_lt(v___x_564_, v___x_573_);
if (v___x_574_ == 0)
{
return v___x_572_;
}
else
{
uint8_t v___x_575_; 
v___x_575_ = lean_nat_dec_le(v___x_573_, v___x_573_);
if (v___x_575_ == 0)
{
if (v___x_574_ == 0)
{
return v___x_572_;
}
else
{
size_t v___x_576_; size_t v___x_577_; lean_object* v___x_578_; 
v___x_576_ = ((size_t)0ULL);
v___x_577_ = lean_usize_of_nat(v___x_573_);
v___x_578_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_560_, v_tail_567_, v___x_576_, v___x_577_, v___x_572_);
return v___x_578_;
}
}
else
{
size_t v___x_579_; size_t v___x_580_; lean_object* v___x_581_; 
v___x_579_ = ((size_t)0ULL);
v___x_580_ = lean_usize_of_nat(v___x_573_);
v___x_581_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_560_, v_tail_567_, v___x_579_, v___x_580_, v___x_572_);
return v___x_581_;
}
}
}
else
{
lean_object* v___x_582_; lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_582_ = lean_nat_sub(v_start_563_, v_tailOff_569_);
v___x_583_ = lean_array_get_size(v_tail_567_);
v___x_584_ = lean_nat_dec_lt(v___x_582_, v___x_583_);
if (v___x_584_ == 0)
{
lean_dec(v___x_582_);
return v_init_562_;
}
else
{
uint8_t v___x_585_; 
v___x_585_ = lean_nat_dec_le(v___x_583_, v___x_583_);
if (v___x_585_ == 0)
{
if (v___x_584_ == 0)
{
lean_dec(v___x_582_);
return v_init_562_;
}
else
{
size_t v___x_586_; size_t v___x_587_; lean_object* v___x_588_; 
v___x_586_ = lean_usize_of_nat(v___x_582_);
lean_dec(v___x_582_);
v___x_587_ = lean_usize_of_nat(v___x_583_);
v___x_588_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_560_, v_tail_567_, v___x_586_, v___x_587_, v_init_562_);
return v___x_588_;
}
}
else
{
size_t v___x_589_; size_t v___x_590_; lean_object* v___x_591_; 
v___x_589_ = lean_usize_of_nat(v___x_582_);
lean_dec(v___x_582_);
v___x_590_ = lean_usize_of_nat(v___x_583_);
v___x_591_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_560_, v_tail_567_, v___x_589_, v___x_590_, v_init_562_);
return v___x_591_;
}
}
}
}
else
{
lean_object* v_root_592_; lean_object* v_tail_593_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v_root_592_ = lean_ctor_get(v_t_561_, 0);
v_tail_593_ = lean_ctor_get(v_t_561_, 1);
v___x_594_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__2(v___x_560_, v_root_592_, v_init_562_);
v___x_595_ = lean_array_get_size(v_tail_593_);
v___x_596_ = lean_nat_dec_lt(v___x_564_, v___x_595_);
if (v___x_596_ == 0)
{
return v___x_594_;
}
else
{
uint8_t v___x_597_; 
v___x_597_ = lean_nat_dec_le(v___x_595_, v___x_595_);
if (v___x_597_ == 0)
{
if (v___x_596_ == 0)
{
return v___x_594_;
}
else
{
size_t v___x_598_; size_t v___x_599_; lean_object* v___x_600_; 
v___x_598_ = ((size_t)0ULL);
v___x_599_ = lean_usize_of_nat(v___x_595_);
v___x_600_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_560_, v_tail_593_, v___x_598_, v___x_599_, v___x_594_);
return v___x_600_;
}
}
else
{
size_t v___x_601_; size_t v___x_602_; lean_object* v___x_603_; 
v___x_601_ = ((size_t)0ULL);
v___x_602_ = lean_usize_of_nat(v___x_595_);
v___x_603_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__1(v___x_560_, v_tail_593_, v___x_601_, v___x_602_, v___x_594_);
return v___x_603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0___boxed(lean_object* v___x_604_, lean_object* v_t_605_, lean_object* v_init_606_, lean_object* v_start_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(v___x_604_, v_t_605_, v_init_606_, v_start_607_);
lean_dec(v_start_607_);
lean_dec_ref(v_t_605_);
lean_dec_ref(v___x_604_);
return v_res_608_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_609_ = lean_unsigned_to_nat(32u);
v___x_610_ = lean_mk_empty_array_with_capacity(v___x_609_);
v___x_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_611_, 0, v___x_610_);
return v___x_611_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1(void){
_start:
{
size_t v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_612_ = ((size_t)5ULL);
v___x_613_ = lean_unsigned_to_nat(0u);
v___x_614_ = lean_unsigned_to_nat(32u);
v___x_615_ = lean_mk_empty_array_with_capacity(v___x_614_);
v___x_616_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__0);
v___x_617_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_617_, 0, v___x_616_);
lean_ctor_set(v___x_617_, 1, v___x_615_);
lean_ctor_set(v___x_617_, 2, v___x_613_);
lean_ctor_set(v___x_617_, 3, v___x_613_);
lean_ctor_set_usize(v___x_617_, 4, v___x_612_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(lean_object* v___x_618_, lean_object* v_x_619_, size_t v_x_620_, size_t v_x_621_){
_start:
{
if (lean_obj_tag(v_x_619_) == 0)
{
lean_object* v_cs_622_; size_t v_j_623_; lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v_cs_622_ = lean_ctor_get(v_x_619_, 0);
v_j_623_ = lean_usize_shift_right(v_x_620_, v_x_621_);
v___x_624_ = lean_usize_to_nat(v_j_623_);
v___x_625_ = lean_array_get_size(v_cs_622_);
v___x_626_ = lean_nat_dec_lt(v___x_624_, v___x_625_);
if (v___x_626_ == 0)
{
lean_dec(v___x_624_);
return v_x_619_;
}
else
{
lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_644_; 
lean_inc_ref(v_cs_622_);
v_isSharedCheck_644_ = !lean_is_exclusive(v_x_619_);
if (v_isSharedCheck_644_ == 0)
{
lean_object* v_unused_645_; 
v_unused_645_ = lean_ctor_get(v_x_619_, 0);
lean_dec(v_unused_645_);
v___x_628_ = v_x_619_;
v_isShared_629_ = v_isSharedCheck_644_;
goto v_resetjp_627_;
}
else
{
lean_dec(v_x_619_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_644_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
size_t v___x_630_; size_t v___x_631_; size_t v___x_632_; size_t v_i_633_; size_t v___x_634_; size_t v_shift_635_; lean_object* v_v_636_; lean_object* v___x_637_; lean_object* v_xs_x27_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_630_ = ((size_t)1ULL);
v___x_631_ = lean_usize_shift_left(v___x_630_, v_x_621_);
v___x_632_ = lean_usize_sub(v___x_631_, v___x_630_);
v_i_633_ = lean_usize_land(v_x_620_, v___x_632_);
v___x_634_ = ((size_t)5ULL);
v_shift_635_ = lean_usize_sub(v_x_621_, v___x_634_);
v_v_636_ = lean_array_fget(v_cs_622_, v___x_624_);
v___x_637_ = lean_box(0);
v_xs_x27_638_ = lean_array_fset(v_cs_622_, v___x_624_, v___x_637_);
v___x_639_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(v___x_618_, v_v_636_, v_i_633_, v_shift_635_);
v___x_640_ = lean_array_fset(v_xs_x27_638_, v___x_624_, v___x_639_);
lean_dec(v___x_624_);
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 0, v___x_640_);
v___x_642_ = v___x_628_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
lean_object* v_vs_646_; lean_object* v___x_647_; lean_object* v___x_648_; uint8_t v___x_649_; 
v_vs_646_ = lean_ctor_get(v_x_619_, 0);
v___x_647_ = lean_usize_to_nat(v_x_620_);
v___x_648_ = lean_array_get_size(v_vs_646_);
v___x_649_ = lean_nat_dec_lt(v___x_647_, v___x_648_);
if (v___x_649_ == 0)
{
lean_dec(v___x_647_);
return v_x_619_;
}
else
{
lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_663_; 
lean_inc_ref(v_vs_646_);
v_isSharedCheck_663_ = !lean_is_exclusive(v_x_619_);
if (v_isSharedCheck_663_ == 0)
{
lean_object* v_unused_664_; 
v_unused_664_ = lean_ctor_get(v_x_619_, 0);
lean_dec(v_unused_664_);
v___x_651_ = v_x_619_;
v_isShared_652_ = v_isSharedCheck_663_;
goto v_resetjp_650_;
}
else
{
lean_dec(v_x_619_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_663_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v_v_653_; lean_object* v___x_654_; lean_object* v_xs_x27_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_661_; 
v_v_653_ = lean_array_fget(v_vs_646_, v___x_647_);
v___x_654_ = lean_box(0);
v_xs_x27_655_ = lean_array_fset(v_vs_646_, v___x_647_, v___x_654_);
v___x_656_ = lean_unsigned_to_nat(0u);
v___x_657_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1);
v___x_658_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(v___x_618_, v_v_653_, v___x_657_, v___x_656_);
lean_dec(v_v_653_);
v___x_659_ = lean_array_fset(v_xs_x27_655_, v___x_647_, v___x_658_);
lean_dec(v___x_647_);
if (v_isShared_652_ == 0)
{
lean_ctor_set(v___x_651_, 0, v___x_659_);
v___x_661_ = v___x_651_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_659_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___boxed(lean_object* v___x_665_, lean_object* v_x_666_, lean_object* v_x_667_, lean_object* v_x_668_){
_start:
{
size_t v_x_2238__boxed_669_; size_t v_x_2239__boxed_670_; lean_object* v_res_671_; 
v_x_2238__boxed_669_ = lean_unbox_usize(v_x_667_);
lean_dec(v_x_667_);
v_x_2239__boxed_670_ = lean_unbox_usize(v_x_668_);
lean_dec(v_x_668_);
v_res_671_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(v___x_665_, v_x_666_, v_x_2238__boxed_669_, v_x_2239__boxed_670_);
lean_dec_ref(v___x_665_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(lean_object* v___x_672_, lean_object* v_t_673_, lean_object* v_i_674_){
_start:
{
lean_object* v_root_675_; lean_object* v_tail_676_; lean_object* v_size_677_; size_t v_shift_678_; lean_object* v_tailOff_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_707_; 
v_root_675_ = lean_ctor_get(v_t_673_, 0);
v_tail_676_ = lean_ctor_get(v_t_673_, 1);
v_size_677_ = lean_ctor_get(v_t_673_, 2);
v_shift_678_ = lean_ctor_get_usize(v_t_673_, 4);
v_tailOff_679_ = lean_ctor_get(v_t_673_, 3);
v_isSharedCheck_707_ = !lean_is_exclusive(v_t_673_);
if (v_isSharedCheck_707_ == 0)
{
v___x_681_ = v_t_673_;
v_isShared_682_ = v_isSharedCheck_707_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_tailOff_679_);
lean_inc(v_size_677_);
lean_inc(v_tail_676_);
lean_inc(v_root_675_);
lean_dec(v_t_673_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_707_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
uint8_t v___x_683_; 
v___x_683_ = lean_nat_dec_le(v_tailOff_679_, v_i_674_);
if (v___x_683_ == 0)
{
size_t v___x_684_; lean_object* v___x_685_; lean_object* v___x_687_; 
v___x_684_ = lean_usize_of_nat(v_i_674_);
v___x_685_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4(v___x_672_, v_root_675_, v___x_684_, v_shift_678_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v___x_685_);
v___x_687_ = v___x_681_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v_tail_676_);
lean_ctor_set(v_reuseFailAlloc_688_, 2, v_size_677_);
lean_ctor_set(v_reuseFailAlloc_688_, 3, v_tailOff_679_);
lean_ctor_set_usize(v_reuseFailAlloc_688_, 4, v_shift_678_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
else
{
lean_object* v___x_689_; lean_object* v___x_690_; uint8_t v___x_691_; 
v___x_689_ = lean_nat_sub(v_i_674_, v_tailOff_679_);
v___x_690_ = lean_array_get_size(v_tail_676_);
v___x_691_ = lean_nat_dec_lt(v___x_689_, v___x_690_);
if (v___x_691_ == 0)
{
lean_object* v___x_693_; 
lean_dec(v___x_689_);
if (v_isShared_682_ == 0)
{
v___x_693_ = v___x_681_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_root_675_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v_tail_676_);
lean_ctor_set(v_reuseFailAlloc_694_, 2, v_size_677_);
lean_ctor_set(v_reuseFailAlloc_694_, 3, v_tailOff_679_);
lean_ctor_set_usize(v_reuseFailAlloc_694_, 4, v_shift_678_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
else
{
lean_object* v_v_695_; lean_object* v___x_696_; lean_object* v_xs_x27_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_705_; 
v_v_695_ = lean_array_fget(v_tail_676_, v___x_689_);
v___x_696_ = lean_box(0);
v_xs_x27_697_ = lean_array_fset(v_tail_676_, v___x_689_, v___x_696_);
v___x_698_ = lean_unsigned_to_nat(32u);
v___x_699_ = lean_mk_empty_array_with_capacity(v___x_698_);
lean_dec_ref(v___x_699_);
v___x_700_ = lean_unsigned_to_nat(0u);
v___x_701_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1_spec__4___closed__1);
v___x_702_ = l_Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0(v___x_672_, v_v_695_, v___x_701_, v___x_700_);
lean_dec(v_v_695_);
v___x_703_ = lean_array_fset(v_xs_x27_697_, v___x_689_, v___x_702_);
lean_dec(v___x_689_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 1, v___x_703_);
v___x_705_ = v___x_681_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_root_675_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_706_, 2, v_size_677_);
lean_ctor_set(v_reuseFailAlloc_706_, 3, v_tailOff_679_);
lean_ctor_set_usize(v_reuseFailAlloc_706_, 4, v_shift_678_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1___boxed(lean_object* v___x_708_, lean_object* v_t_709_, lean_object* v_i_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(v___x_708_, v_t_709_, v_i_710_);
lean_dec(v_i_710_);
lean_dec_ref(v___x_708_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0(lean_object* v_p_712_, lean_object* v_v_713_, lean_object* v_s_714_){
_start:
{
lean_object* v_vars_715_; lean_object* v_varMap_716_; lean_object* v_vars_x27_717_; lean_object* v_varMap_x27_718_; lean_object* v_natToIntMap_719_; lean_object* v_natDef_720_; lean_object* v_dvds_721_; lean_object* v_lowers_722_; lean_object* v_uppers_723_; lean_object* v_diseqs_724_; lean_object* v_elimEqs_725_; lean_object* v_elimStack_726_; lean_object* v_occurs_727_; lean_object* v_assignment_728_; lean_object* v_nextCnstrId_729_; uint8_t v_caseSplits_730_; lean_object* v_conflict_x3f_731_; lean_object* v_diseqSplits_732_; lean_object* v_divMod_733_; lean_object* v_toIntIds_734_; lean_object* v_toIntInfos_735_; lean_object* v_toIntTermMap_736_; lean_object* v_toIntVarMap_737_; uint8_t v_usedCommRing_738_; lean_object* v_nonlinearOccs_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_747_; 
v_vars_715_ = lean_ctor_get(v_s_714_, 0);
v_varMap_716_ = lean_ctor_get(v_s_714_, 1);
v_vars_x27_717_ = lean_ctor_get(v_s_714_, 2);
v_varMap_x27_718_ = lean_ctor_get(v_s_714_, 3);
v_natToIntMap_719_ = lean_ctor_get(v_s_714_, 4);
v_natDef_720_ = lean_ctor_get(v_s_714_, 5);
v_dvds_721_ = lean_ctor_get(v_s_714_, 6);
v_lowers_722_ = lean_ctor_get(v_s_714_, 7);
v_uppers_723_ = lean_ctor_get(v_s_714_, 8);
v_diseqs_724_ = lean_ctor_get(v_s_714_, 9);
v_elimEqs_725_ = lean_ctor_get(v_s_714_, 10);
v_elimStack_726_ = lean_ctor_get(v_s_714_, 11);
v_occurs_727_ = lean_ctor_get(v_s_714_, 12);
v_assignment_728_ = lean_ctor_get(v_s_714_, 13);
v_nextCnstrId_729_ = lean_ctor_get(v_s_714_, 14);
v_caseSplits_730_ = lean_ctor_get_uint8(v_s_714_, sizeof(void*)*23);
v_conflict_x3f_731_ = lean_ctor_get(v_s_714_, 15);
v_diseqSplits_732_ = lean_ctor_get(v_s_714_, 16);
v_divMod_733_ = lean_ctor_get(v_s_714_, 17);
v_toIntIds_734_ = lean_ctor_get(v_s_714_, 18);
v_toIntInfos_735_ = lean_ctor_get(v_s_714_, 19);
v_toIntTermMap_736_ = lean_ctor_get(v_s_714_, 20);
v_toIntVarMap_737_ = lean_ctor_get(v_s_714_, 21);
v_usedCommRing_738_ = lean_ctor_get_uint8(v_s_714_, sizeof(void*)*23 + 1);
v_nonlinearOccs_739_ = lean_ctor_get(v_s_714_, 22);
v_isSharedCheck_747_ = !lean_is_exclusive(v_s_714_);
if (v_isSharedCheck_747_ == 0)
{
v___x_741_ = v_s_714_;
v_isShared_742_ = v_isSharedCheck_747_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_nonlinearOccs_739_);
lean_inc(v_toIntVarMap_737_);
lean_inc(v_toIntTermMap_736_);
lean_inc(v_toIntInfos_735_);
lean_inc(v_toIntIds_734_);
lean_inc(v_divMod_733_);
lean_inc(v_diseqSplits_732_);
lean_inc(v_conflict_x3f_731_);
lean_inc(v_nextCnstrId_729_);
lean_inc(v_assignment_728_);
lean_inc(v_occurs_727_);
lean_inc(v_elimStack_726_);
lean_inc(v_elimEqs_725_);
lean_inc(v_diseqs_724_);
lean_inc(v_uppers_723_);
lean_inc(v_lowers_722_);
lean_inc(v_dvds_721_);
lean_inc(v_natDef_720_);
lean_inc(v_natToIntMap_719_);
lean_inc(v_varMap_x27_718_);
lean_inc(v_vars_x27_717_);
lean_inc(v_varMap_716_);
lean_inc(v_vars_715_);
lean_dec(v_s_714_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_747_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_743_; lean_object* v___x_745_; 
v___x_743_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(v_p_712_, v_uppers_723_, v_v_713_);
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 8, v___x_743_);
v___x_745_ = v___x_741_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 23, 2);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_vars_715_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_varMap_716_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_vars_x27_717_);
lean_ctor_set(v_reuseFailAlloc_746_, 3, v_varMap_x27_718_);
lean_ctor_set(v_reuseFailAlloc_746_, 4, v_natToIntMap_719_);
lean_ctor_set(v_reuseFailAlloc_746_, 5, v_natDef_720_);
lean_ctor_set(v_reuseFailAlloc_746_, 6, v_dvds_721_);
lean_ctor_set(v_reuseFailAlloc_746_, 7, v_lowers_722_);
lean_ctor_set(v_reuseFailAlloc_746_, 8, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_746_, 9, v_diseqs_724_);
lean_ctor_set(v_reuseFailAlloc_746_, 10, v_elimEqs_725_);
lean_ctor_set(v_reuseFailAlloc_746_, 11, v_elimStack_726_);
lean_ctor_set(v_reuseFailAlloc_746_, 12, v_occurs_727_);
lean_ctor_set(v_reuseFailAlloc_746_, 13, v_assignment_728_);
lean_ctor_set(v_reuseFailAlloc_746_, 14, v_nextCnstrId_729_);
lean_ctor_set(v_reuseFailAlloc_746_, 15, v_conflict_x3f_731_);
lean_ctor_set(v_reuseFailAlloc_746_, 16, v_diseqSplits_732_);
lean_ctor_set(v_reuseFailAlloc_746_, 17, v_divMod_733_);
lean_ctor_set(v_reuseFailAlloc_746_, 18, v_toIntIds_734_);
lean_ctor_set(v_reuseFailAlloc_746_, 19, v_toIntInfos_735_);
lean_ctor_set(v_reuseFailAlloc_746_, 20, v_toIntTermMap_736_);
lean_ctor_set(v_reuseFailAlloc_746_, 21, v_toIntVarMap_737_);
lean_ctor_set(v_reuseFailAlloc_746_, 22, v_nonlinearOccs_739_);
lean_ctor_set_uint8(v_reuseFailAlloc_746_, sizeof(void*)*23, v_caseSplits_730_);
lean_ctor_set_uint8(v_reuseFailAlloc_746_, sizeof(void*)*23 + 1, v_usedCommRing_738_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0___boxed(lean_object* v_p_748_, lean_object* v_v_749_, lean_object* v_s_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0(v_p_748_, v_v_749_, v_s_750_);
lean_dec(v_v_749_);
lean_dec_ref(v_p_748_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1(lean_object* v_p_752_, lean_object* v_v_753_, lean_object* v_s_754_){
_start:
{
lean_object* v_vars_755_; lean_object* v_varMap_756_; lean_object* v_vars_x27_757_; lean_object* v_varMap_x27_758_; lean_object* v_natToIntMap_759_; lean_object* v_natDef_760_; lean_object* v_dvds_761_; lean_object* v_lowers_762_; lean_object* v_uppers_763_; lean_object* v_diseqs_764_; lean_object* v_elimEqs_765_; lean_object* v_elimStack_766_; lean_object* v_occurs_767_; lean_object* v_assignment_768_; lean_object* v_nextCnstrId_769_; uint8_t v_caseSplits_770_; lean_object* v_conflict_x3f_771_; lean_object* v_diseqSplits_772_; lean_object* v_divMod_773_; lean_object* v_toIntIds_774_; lean_object* v_toIntInfos_775_; lean_object* v_toIntTermMap_776_; lean_object* v_toIntVarMap_777_; uint8_t v_usedCommRing_778_; lean_object* v_nonlinearOccs_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_787_; 
v_vars_755_ = lean_ctor_get(v_s_754_, 0);
v_varMap_756_ = lean_ctor_get(v_s_754_, 1);
v_vars_x27_757_ = lean_ctor_get(v_s_754_, 2);
v_varMap_x27_758_ = lean_ctor_get(v_s_754_, 3);
v_natToIntMap_759_ = lean_ctor_get(v_s_754_, 4);
v_natDef_760_ = lean_ctor_get(v_s_754_, 5);
v_dvds_761_ = lean_ctor_get(v_s_754_, 6);
v_lowers_762_ = lean_ctor_get(v_s_754_, 7);
v_uppers_763_ = lean_ctor_get(v_s_754_, 8);
v_diseqs_764_ = lean_ctor_get(v_s_754_, 9);
v_elimEqs_765_ = lean_ctor_get(v_s_754_, 10);
v_elimStack_766_ = lean_ctor_get(v_s_754_, 11);
v_occurs_767_ = lean_ctor_get(v_s_754_, 12);
v_assignment_768_ = lean_ctor_get(v_s_754_, 13);
v_nextCnstrId_769_ = lean_ctor_get(v_s_754_, 14);
v_caseSplits_770_ = lean_ctor_get_uint8(v_s_754_, sizeof(void*)*23);
v_conflict_x3f_771_ = lean_ctor_get(v_s_754_, 15);
v_diseqSplits_772_ = lean_ctor_get(v_s_754_, 16);
v_divMod_773_ = lean_ctor_get(v_s_754_, 17);
v_toIntIds_774_ = lean_ctor_get(v_s_754_, 18);
v_toIntInfos_775_ = lean_ctor_get(v_s_754_, 19);
v_toIntTermMap_776_ = lean_ctor_get(v_s_754_, 20);
v_toIntVarMap_777_ = lean_ctor_get(v_s_754_, 21);
v_usedCommRing_778_ = lean_ctor_get_uint8(v_s_754_, sizeof(void*)*23 + 1);
v_nonlinearOccs_779_ = lean_ctor_get(v_s_754_, 22);
v_isSharedCheck_787_ = !lean_is_exclusive(v_s_754_);
if (v_isSharedCheck_787_ == 0)
{
v___x_781_ = v_s_754_;
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_nonlinearOccs_779_);
lean_inc(v_toIntVarMap_777_);
lean_inc(v_toIntTermMap_776_);
lean_inc(v_toIntInfos_775_);
lean_inc(v_toIntIds_774_);
lean_inc(v_divMod_773_);
lean_inc(v_diseqSplits_772_);
lean_inc(v_conflict_x3f_771_);
lean_inc(v_nextCnstrId_769_);
lean_inc(v_assignment_768_);
lean_inc(v_occurs_767_);
lean_inc(v_elimStack_766_);
lean_inc(v_elimEqs_765_);
lean_inc(v_diseqs_764_);
lean_inc(v_uppers_763_);
lean_inc(v_lowers_762_);
lean_inc(v_dvds_761_);
lean_inc(v_natDef_760_);
lean_inc(v_natToIntMap_759_);
lean_inc(v_varMap_x27_758_);
lean_inc(v_vars_x27_757_);
lean_inc(v_varMap_756_);
lean_inc(v_vars_755_);
lean_dec(v_s_754_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_783_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__1(v_p_752_, v_lowers_762_, v_v_753_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 7, v___x_783_);
v___x_785_ = v___x_781_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 23, 2);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_vars_755_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v_varMap_756_);
lean_ctor_set(v_reuseFailAlloc_786_, 2, v_vars_x27_757_);
lean_ctor_set(v_reuseFailAlloc_786_, 3, v_varMap_x27_758_);
lean_ctor_set(v_reuseFailAlloc_786_, 4, v_natToIntMap_759_);
lean_ctor_set(v_reuseFailAlloc_786_, 5, v_natDef_760_);
lean_ctor_set(v_reuseFailAlloc_786_, 6, v_dvds_761_);
lean_ctor_set(v_reuseFailAlloc_786_, 7, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_786_, 8, v_uppers_763_);
lean_ctor_set(v_reuseFailAlloc_786_, 9, v_diseqs_764_);
lean_ctor_set(v_reuseFailAlloc_786_, 10, v_elimEqs_765_);
lean_ctor_set(v_reuseFailAlloc_786_, 11, v_elimStack_766_);
lean_ctor_set(v_reuseFailAlloc_786_, 12, v_occurs_767_);
lean_ctor_set(v_reuseFailAlloc_786_, 13, v_assignment_768_);
lean_ctor_set(v_reuseFailAlloc_786_, 14, v_nextCnstrId_769_);
lean_ctor_set(v_reuseFailAlloc_786_, 15, v_conflict_x3f_771_);
lean_ctor_set(v_reuseFailAlloc_786_, 16, v_diseqSplits_772_);
lean_ctor_set(v_reuseFailAlloc_786_, 17, v_divMod_773_);
lean_ctor_set(v_reuseFailAlloc_786_, 18, v_toIntIds_774_);
lean_ctor_set(v_reuseFailAlloc_786_, 19, v_toIntInfos_775_);
lean_ctor_set(v_reuseFailAlloc_786_, 20, v_toIntTermMap_776_);
lean_ctor_set(v_reuseFailAlloc_786_, 21, v_toIntVarMap_777_);
lean_ctor_set(v_reuseFailAlloc_786_, 22, v_nonlinearOccs_779_);
lean_ctor_set_uint8(v_reuseFailAlloc_786_, sizeof(void*)*23, v_caseSplits_770_);
lean_ctor_set_uint8(v_reuseFailAlloc_786_, sizeof(void*)*23 + 1, v_usedCommRing_778_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1___boxed(lean_object* v_p_788_, lean_object* v_v_789_, lean_object* v_s_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1(v_p_788_, v_v_789_, v_s_790_);
lean_dec(v_v_789_);
lean_dec_ref(v_p_788_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(lean_object* v_c_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_){
_start:
{
lean_object* v_p_799_; 
v_p_799_ = lean_ctor_get(v_c_792_, 0);
if (lean_obj_tag(v_p_799_) == 1)
{
lean_object* v_k_800_; lean_object* v_v_801_; lean_object* v___x_802_; uint8_t v___x_803_; 
lean_inc_ref(v_p_799_);
lean_dec_ref(v_c_792_);
v_k_800_ = lean_ctor_get(v_p_799_, 0);
v_v_801_ = lean_ctor_get(v_p_799_, 1);
lean_inc(v_v_801_);
v___x_802_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6);
v___x_803_ = lean_int_dec_lt(v_k_800_, v___x_802_);
if (v___x_803_ == 0)
{
lean_object* v___f_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___f_804_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_804_, 0, v_p_799_);
lean_closure_set(v___f_804_, 1, v_v_801_);
v___x_805_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_806_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_805_, v___f_804_, v_a_793_);
return v___x_806_;
}
else
{
lean_object* v___f_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___f_807_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___lam__1___boxed), 3, 2);
lean_closure_set(v___f_807_, 0, v_p_799_);
lean_closure_set(v___f_807_, 1, v_v_801_);
v___x_808_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_809_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_808_, v___f_807_, v_a_793_);
return v___x_809_;
}
}
else
{
lean_object* v___x_810_; 
v___x_810_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_);
return v___x_810_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg___boxed(lean_object* v_c_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_c_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_, v_a_816_);
lean_dec(v_a_816_);
lean_dec_ref(v_a_815_);
lean_dec(v_a_814_);
lean_dec_ref(v_a_813_);
lean_dec(v_a_812_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase(lean_object* v_c_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_c_819_, v_a_820_, v_a_826_, v_a_827_, v_a_828_, v_a_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___boxed(lean_object* v_c_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase(v_c_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_);
lean_dec(v_a_842_);
lean_dec_ref(v_a_841_);
lean_dec(v_a_840_);
lean_dec_ref(v_a_839_);
lean_dec(v_a_838_);
lean_dec_ref(v_a_837_);
lean_dec(v_a_836_);
lean_dec_ref(v_a_835_);
lean_dec(v_a_834_);
lean_dec(v_a_833_);
return v_res_844_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__5));
v___x_860_ = l_Lean_stringToMessageData(v___x_859_);
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(lean_object* v___x_861_, lean_object* v_c_862_, lean_object* v_as_863_, size_t v_sz_864_, size_t v_i_865_, lean_object* v_b_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
uint8_t v___x_878_; 
v___x_878_ = lean_usize_dec_lt(v_i_865_, v_sz_864_);
if (v___x_878_ == 0)
{
lean_object* v___x_879_; 
lean_dec_ref(v_c_862_);
lean_dec_ref(v___x_861_);
v___x_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_879_, 0, v_b_866_);
return v___x_879_;
}
else
{
lean_object* v_snd_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_972_; 
v_snd_880_ = lean_ctor_get(v_b_866_, 1);
v_isSharedCheck_972_ = !lean_is_exclusive(v_b_866_);
if (v_isSharedCheck_972_ == 0)
{
lean_object* v_unused_973_; 
v_unused_973_ = lean_ctor_get(v_b_866_, 0);
lean_dec(v_unused_973_);
v___x_882_ = v_b_866_;
v_isShared_883_ = v_isSharedCheck_972_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_snd_880_);
lean_dec(v_b_866_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_972_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v_a_884_; lean_object* v_p_885_; lean_object* v___x_886_; uint8_t v___x_887_; 
v_a_884_ = lean_array_uget_borrowed(v_as_863_, v_i_865_);
v_p_885_ = lean_ctor_get(v_a_884_, 0);
v___x_886_ = lean_box(0);
v___x_887_ = l_Int_Linear_Poly_isNegEq(v___x_861_, v_p_885_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; size_t v___x_889_; size_t v___x_890_; 
lean_del_object(v___x_882_);
lean_dec(v_snd_880_);
v___x_888_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__1));
v___x_889_ = ((size_t)1ULL);
v___x_890_ = lean_usize_add(v_i_865_, v___x_889_);
v_i_865_ = v___x_890_;
v_b_866_ = v___x_888_;
goto _start;
}
else
{
lean_object* v___x_892_; 
lean_inc(v_a_884_);
v___x_892_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_884_, v___y_867_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v___x_893_; lean_object* v___x_894_; 
lean_dec_ref(v___x_892_);
v___x_893_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_894_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_893_, v___y_875_);
if (lean_obj_tag(v___x_894_) == 0)
{
lean_object* v_a_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___y_899_; lean_object* v___y_900_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; uint8_t v___x_934_; 
v_a_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_a_895_);
lean_dec_ref(v___x_894_);
lean_inc(v_a_884_);
v___x_896_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_896_, 0, v_c_862_);
lean_ctor_set(v___x_896_, 1, v_a_884_);
v___x_897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_897_, 0, v___x_861_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
v___x_934_ = lean_unbox(v_a_895_);
lean_dec(v_a_895_);
if (v___x_934_ == 0)
{
v___y_899_ = v___y_867_;
v___y_900_ = v___y_868_;
v___y_901_ = v___y_869_;
v___y_902_ = v___y_870_;
v___y_903_ = v___y_871_;
v___y_904_ = v___y_872_;
v___y_905_ = v___y_873_;
v___y_906_ = v___y_874_;
v___y_907_ = v___y_875_;
v___y_908_ = v___y_876_;
goto v___jp_898_;
}
else
{
lean_object* v___x_935_; 
lean_inc_ref(v___x_897_);
v___x_935_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_897_, v___y_867_, v___y_875_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref(v___x_935_);
v___x_937_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6);
v___x_938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
lean_ctor_set(v___x_938_, 1, v_a_936_);
v___x_939_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v___x_893_, v___x_938_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_dec_ref(v___x_939_);
v___y_899_ = v___y_867_;
v___y_900_ = v___y_868_;
v___y_901_ = v___y_869_;
v___y_902_ = v___y_870_;
v___y_903_ = v___y_871_;
v___y_904_ = v___y_872_;
v___y_905_ = v___y_873_;
v___y_906_ = v___y_874_;
v___y_907_ = v___y_875_;
v___y_908_ = v___y_876_;
goto v___jp_898_;
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
lean_dec_ref(v___x_897_);
lean_del_object(v___x_882_);
lean_dec(v_snd_880_);
v_a_940_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_939_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_939_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
lean_dec_ref(v___x_897_);
lean_del_object(v___x_882_);
lean_dec(v_snd_880_);
v_a_948_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_935_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_935_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
v___jp_898_:
{
lean_object* v___x_909_; 
lean_inc(v___y_908_);
lean_inc_ref(v___y_907_);
lean_inc(v___y_906_);
lean_inc_ref(v___y_905_);
lean_inc(v___y_904_);
lean_inc_ref(v___y_903_);
lean_inc(v___y_902_);
lean_inc_ref(v___y_901_);
lean_inc(v___y_900_);
lean_inc(v___y_899_);
v___x_909_ = lean_grind_cutsat_assert_eq(v___x_897_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_924_; 
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_924_ == 0)
{
lean_object* v_unused_925_; 
v_unused_925_ = lean_ctor_get(v___x_909_, 0);
lean_dec(v_unused_925_);
v___x_911_ = v___x_909_;
v_isShared_912_ = v_isSharedCheck_924_;
goto v_resetjp_910_;
}
else
{
lean_dec(v___x_909_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_924_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_916_; 
v___x_913_ = lean_box(v___x_887_);
v___x_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_914_, 0, v___x_913_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 1, v___x_886_);
lean_ctor_set(v___x_882_, 0, v___x_914_);
v___x_916_ = v___x_882_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v___x_914_);
lean_ctor_set(v_reuseFailAlloc_923_, 1, v___x_886_);
v___x_916_ = v_reuseFailAlloc_923_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_917_, 0, v___x_916_);
v___x_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_918_);
lean_ctor_set(v___x_919_, 1, v_snd_880_);
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 0, v___x_919_);
v___x_921_ = v___x_911_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_del_object(v___x_882_);
lean_dec(v_snd_880_);
v_a_926_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_909_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_909_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
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
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_del_object(v___x_882_);
lean_dec(v_snd_880_);
lean_dec_ref(v_c_862_);
lean_dec_ref(v___x_861_);
v_a_956_ = lean_ctor_get(v___x_894_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_894_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_894_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_894_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
else
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_971_; 
lean_del_object(v___x_882_);
lean_dec(v_snd_880_);
lean_dec_ref(v_c_862_);
lean_dec_ref(v___x_861_);
v_a_964_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_971_ == 0)
{
v___x_966_ = v___x_892_;
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_892_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
if (v_isShared_967_ == 0)
{
v___x_969_ = v___x_966_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_a_964_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___boxed(lean_object** _args){
lean_object* v___x_974_ = _args[0];
lean_object* v_c_975_ = _args[1];
lean_object* v_as_976_ = _args[2];
lean_object* v_sz_977_ = _args[3];
lean_object* v_i_978_ = _args[4];
lean_object* v_b_979_ = _args[5];
lean_object* v___y_980_ = _args[6];
lean_object* v___y_981_ = _args[7];
lean_object* v___y_982_ = _args[8];
lean_object* v___y_983_ = _args[9];
lean_object* v___y_984_ = _args[10];
lean_object* v___y_985_ = _args[11];
lean_object* v___y_986_ = _args[12];
lean_object* v___y_987_ = _args[13];
lean_object* v___y_988_ = _args[14];
lean_object* v___y_989_ = _args[15];
lean_object* v___y_990_ = _args[16];
_start:
{
size_t v_sz_boxed_991_; size_t v_i_boxed_992_; lean_object* v_res_993_; 
v_sz_boxed_991_ = lean_unbox_usize(v_sz_977_);
lean_dec(v_sz_977_);
v_i_boxed_992_ = lean_unbox_usize(v_i_978_);
lean_dec(v_i_978_);
v_res_993_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(v___x_974_, v_c_975_, v_as_976_, v_sz_boxed_991_, v_i_boxed_992_, v_b_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
lean_dec(v___y_981_);
lean_dec(v___y_980_);
lean_dec_ref(v_as_976_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(lean_object* v___x_1000_, lean_object* v_c_1001_, lean_object* v_as_1002_, size_t v_sz_1003_, size_t v_i_1004_, lean_object* v_b_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
uint8_t v___x_1017_; 
v___x_1017_ = lean_usize_dec_lt(v_i_1004_, v_sz_1003_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; 
lean_dec_ref(v_c_1001_);
lean_dec_ref(v___x_1000_);
v___x_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1018_, 0, v_b_1005_);
return v___x_1018_;
}
else
{
lean_object* v_snd_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1111_; 
v_snd_1019_ = lean_ctor_get(v_b_1005_, 1);
v_isSharedCheck_1111_ = !lean_is_exclusive(v_b_1005_);
if (v_isSharedCheck_1111_ == 0)
{
lean_object* v_unused_1112_; 
v_unused_1112_ = lean_ctor_get(v_b_1005_, 0);
lean_dec(v_unused_1112_);
v___x_1021_ = v_b_1005_;
v_isShared_1022_ = v_isSharedCheck_1111_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_snd_1019_);
lean_dec(v_b_1005_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1111_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v_a_1023_; lean_object* v_p_1024_; lean_object* v___x_1025_; uint8_t v___x_1026_; 
v_a_1023_ = lean_array_uget_borrowed(v_as_1002_, v_i_1004_);
v_p_1024_ = lean_ctor_get(v_a_1023_, 0);
v___x_1025_ = lean_box(0);
v___x_1026_ = l_Int_Linear_Poly_isNegEq(v___x_1000_, v_p_1024_);
if (v___x_1026_ == 0)
{
lean_object* v___x_1027_; size_t v___x_1028_; size_t v___x_1029_; lean_object* v___x_1030_; 
lean_del_object(v___x_1021_);
lean_dec(v_snd_1019_);
v___x_1027_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__1));
v___x_1028_ = ((size_t)1ULL);
v___x_1029_ = lean_usize_add(v_i_1004_, v___x_1028_);
v___x_1030_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3(v___x_1000_, v_c_1001_, v_as_1002_, v_sz_1003_, v___x_1029_, v___x_1027_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
return v___x_1030_;
}
else
{
lean_object* v___x_1031_; 
lean_inc(v_a_1023_);
v___x_1031_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_1023_, v___y_1006_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
lean_dec_ref(v___x_1031_);
v___x_1032_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_1033_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_1032_, v___y_1014_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v_a_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; uint8_t v___x_1073_; 
v_a_1034_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_a_1034_);
lean_dec_ref(v___x_1033_);
lean_inc(v_a_1023_);
v___x_1035_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1035_, 0, v_c_1001_);
lean_ctor_set(v___x_1035_, 1, v_a_1023_);
v___x_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___x_1000_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
v___x_1073_ = lean_unbox(v_a_1034_);
lean_dec(v_a_1034_);
if (v___x_1073_ == 0)
{
v___y_1038_ = v___y_1006_;
v___y_1039_ = v___y_1007_;
v___y_1040_ = v___y_1008_;
v___y_1041_ = v___y_1009_;
v___y_1042_ = v___y_1010_;
v___y_1043_ = v___y_1011_;
v___y_1044_ = v___y_1012_;
v___y_1045_ = v___y_1013_;
v___y_1046_ = v___y_1014_;
v___y_1047_ = v___y_1015_;
goto v___jp_1037_;
}
else
{
lean_object* v___x_1074_; 
lean_inc_ref(v___x_1036_);
v___x_1074_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_1036_, v___y_1006_, v___y_1014_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
lean_inc(v_a_1075_);
lean_dec_ref(v___x_1074_);
v___x_1076_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6);
v___x_1077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
lean_ctor_set(v___x_1077_, 1, v_a_1075_);
v___x_1078_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v___x_1032_, v___x_1077_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_dec_ref(v___x_1078_);
v___y_1038_ = v___y_1006_;
v___y_1039_ = v___y_1007_;
v___y_1040_ = v___y_1008_;
v___y_1041_ = v___y_1009_;
v___y_1042_ = v___y_1010_;
v___y_1043_ = v___y_1011_;
v___y_1044_ = v___y_1012_;
v___y_1045_ = v___y_1013_;
v___y_1046_ = v___y_1014_;
v___y_1047_ = v___y_1015_;
goto v___jp_1037_;
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec_ref(v___x_1036_);
lean_del_object(v___x_1021_);
lean_dec(v_snd_1019_);
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1078_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1078_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
lean_dec_ref(v___x_1036_);
lean_del_object(v___x_1021_);
lean_dec(v_snd_1019_);
v_a_1087_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1074_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1074_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
}
v___jp_1037_:
{
lean_object* v___x_1048_; 
lean_inc(v___y_1047_);
lean_inc_ref(v___y_1046_);
lean_inc(v___y_1045_);
lean_inc_ref(v___y_1044_);
lean_inc(v___y_1043_);
lean_inc_ref(v___y_1042_);
lean_inc(v___y_1041_);
lean_inc_ref(v___y_1040_);
lean_inc(v___y_1039_);
lean_inc(v___y_1038_);
v___x_1048_ = lean_grind_cutsat_assert_eq(v___x_1036_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1063_; 
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1063_ == 0)
{
lean_object* v_unused_1064_; 
v_unused_1064_ = lean_ctor_get(v___x_1048_, 0);
lean_dec(v_unused_1064_);
v___x_1050_ = v___x_1048_;
v_isShared_1051_ = v_isSharedCheck_1063_;
goto v_resetjp_1049_;
}
else
{
lean_dec(v___x_1048_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1063_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1055_; 
v___x_1052_ = lean_box(v___x_1026_);
v___x_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1053_, 0, v___x_1052_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 1, v___x_1025_);
lean_ctor_set(v___x_1021_, 0, v___x_1053_);
v___x_1055_ = v___x_1021_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v___x_1025_);
v___x_1055_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
v___x_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
v___x_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
lean_ctor_set(v___x_1058_, 1, v_snd_1019_);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 0, v___x_1058_);
v___x_1060_ = v___x_1050_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
else
{
lean_object* v_a_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1072_; 
lean_del_object(v___x_1021_);
lean_dec(v_snd_1019_);
v_a_1065_ = lean_ctor_get(v___x_1048_, 0);
v_isSharedCheck_1072_ = !lean_is_exclusive(v___x_1048_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1067_ = v___x_1048_;
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_a_1065_);
lean_dec(v___x_1048_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1072_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1070_; 
if (v_isShared_1068_ == 0)
{
v___x_1070_ = v___x_1067_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_a_1065_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
}
}
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
lean_del_object(v___x_1021_);
lean_dec(v_snd_1019_);
lean_dec_ref(v_c_1001_);
lean_dec_ref(v___x_1000_);
v_a_1095_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1033_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1033_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
lean_del_object(v___x_1021_);
lean_dec(v_snd_1019_);
lean_dec_ref(v_c_1001_);
lean_dec_ref(v___x_1000_);
v_a_1103_ = lean_ctor_get(v___x_1031_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1031_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1031_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1031_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___boxed(lean_object** _args){
lean_object* v___x_1113_ = _args[0];
lean_object* v_c_1114_ = _args[1];
lean_object* v_as_1115_ = _args[2];
lean_object* v_sz_1116_ = _args[3];
lean_object* v_i_1117_ = _args[4];
lean_object* v_b_1118_ = _args[5];
lean_object* v___y_1119_ = _args[6];
lean_object* v___y_1120_ = _args[7];
lean_object* v___y_1121_ = _args[8];
lean_object* v___y_1122_ = _args[9];
lean_object* v___y_1123_ = _args[10];
lean_object* v___y_1124_ = _args[11];
lean_object* v___y_1125_ = _args[12];
lean_object* v___y_1126_ = _args[13];
lean_object* v___y_1127_ = _args[14];
lean_object* v___y_1128_ = _args[15];
lean_object* v___y_1129_ = _args[16];
_start:
{
size_t v_sz_boxed_1130_; size_t v_i_boxed_1131_; lean_object* v_res_1132_; 
v_sz_boxed_1130_ = lean_unbox_usize(v_sz_1116_);
lean_dec(v_sz_1116_);
v_i_boxed_1131_ = lean_unbox_usize(v_i_1117_);
lean_dec(v_i_1117_);
v_res_1132_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(v___x_1113_, v_c_1114_, v_as_1115_, v_sz_boxed_1130_, v_i_boxed_1131_, v_b_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec_ref(v___y_1121_);
lean_dec(v___y_1120_);
lean_dec(v___y_1119_);
lean_dec_ref(v_as_1115_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(lean_object* v_init_1133_, lean_object* v___x_1134_, lean_object* v_c_1135_, lean_object* v_n_1136_, lean_object* v_b_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_){
_start:
{
if (lean_obj_tag(v_n_1136_) == 0)
{
lean_object* v_cs_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1183_; 
v_cs_1149_ = lean_ctor_get(v_n_1136_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v_n_1136_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1151_ = v_n_1136_;
v_isShared_1152_ = v_isSharedCheck_1183_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_cs_1149_);
lean_dec(v_n_1136_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1183_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; size_t v_sz_1155_; size_t v___x_1156_; lean_object* v___x_1157_; 
v___x_1153_ = lean_box(0);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
lean_ctor_set(v___x_1154_, 1, v_b_1137_);
v_sz_1155_ = lean_array_size(v_cs_1149_);
v___x_1156_ = ((size_t)0ULL);
v___x_1157_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(v_init_1133_, v___x_1134_, v_c_1135_, v_cs_1149_, v_sz_1155_, v___x_1156_, v___x_1154_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
lean_dec_ref(v_cs_1149_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1174_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1174_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1174_ == 0)
{
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1174_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1174_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v_fst_1162_; 
v_fst_1162_ = lean_ctor_get(v_a_1158_, 0);
if (lean_obj_tag(v_fst_1162_) == 0)
{
lean_object* v_snd_1163_; lean_object* v___x_1165_; 
v_snd_1163_ = lean_ctor_get(v_a_1158_, 1);
lean_inc(v_snd_1163_);
lean_dec(v_a_1158_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set_tag(v___x_1151_, 1);
lean_ctor_set(v___x_1151_, 0, v_snd_1163_);
v___x_1165_ = v___x_1151_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_snd_1163_);
v___x_1165_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1167_; 
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v___x_1165_);
v___x_1167_ = v___x_1160_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v___x_1165_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
else
{
lean_object* v_val_1170_; lean_object* v___x_1172_; 
lean_inc_ref(v_fst_1162_);
lean_dec(v_a_1158_);
lean_del_object(v___x_1151_);
v_val_1170_ = lean_ctor_get(v_fst_1162_, 0);
lean_inc(v_val_1170_);
lean_dec_ref(v_fst_1162_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v_val_1170_);
v___x_1172_ = v___x_1160_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1173_; 
v_reuseFailAlloc_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1173_, 0, v_val_1170_);
v___x_1172_ = v_reuseFailAlloc_1173_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
return v___x_1172_;
}
}
}
}
else
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
lean_del_object(v___x_1151_);
v_a_1175_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1157_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1157_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
}
else
{
lean_object* v_vs_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1218_; 
v_vs_1184_ = lean_ctor_get(v_n_1136_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_n_1136_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1186_ = v_n_1136_;
v_isShared_1187_ = v_isSharedCheck_1218_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_vs_1184_);
lean_dec(v_n_1136_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1218_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; size_t v_sz_1190_; size_t v___x_1191_; lean_object* v___x_1192_; 
v___x_1188_ = lean_box(0);
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1188_);
lean_ctor_set(v___x_1189_, 1, v_b_1137_);
v_sz_1190_ = lean_array_size(v_vs_1184_);
v___x_1191_ = ((size_t)0ULL);
v___x_1192_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2(v___x_1134_, v_c_1135_, v_vs_1184_, v_sz_1190_, v___x_1191_, v___x_1189_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
lean_dec_ref(v_vs_1184_);
if (lean_obj_tag(v___x_1192_) == 0)
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1209_; 
v_a_1193_ = lean_ctor_get(v___x_1192_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1195_ = v___x_1192_;
v_isShared_1196_ = v_isSharedCheck_1209_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v___x_1192_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1209_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v_fst_1197_; 
v_fst_1197_ = lean_ctor_get(v_a_1193_, 0);
if (lean_obj_tag(v_fst_1197_) == 0)
{
lean_object* v_snd_1198_; lean_object* v___x_1200_; 
v_snd_1198_ = lean_ctor_get(v_a_1193_, 1);
lean_inc(v_snd_1198_);
lean_dec(v_a_1193_);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 0, v_snd_1198_);
v___x_1200_ = v___x_1186_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_snd_1198_);
v___x_1200_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
lean_object* v___x_1202_; 
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 0, v___x_1200_);
v___x_1202_ = v___x_1195_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1200_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
else
{
lean_object* v_val_1205_; lean_object* v___x_1207_; 
lean_inc_ref(v_fst_1197_);
lean_dec(v_a_1193_);
lean_del_object(v___x_1186_);
v_val_1205_ = lean_ctor_get(v_fst_1197_, 0);
lean_inc(v_val_1205_);
lean_dec_ref(v_fst_1197_);
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 0, v_val_1205_);
v___x_1207_ = v___x_1195_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_val_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_del_object(v___x_1186_);
v_a_1210_ = lean_ctor_get(v___x_1192_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1192_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1192_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1192_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(lean_object* v_init_1219_, lean_object* v___x_1220_, lean_object* v_c_1221_, lean_object* v_as_1222_, size_t v_sz_1223_, size_t v_i_1224_, lean_object* v_b_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
uint8_t v___x_1237_; 
v___x_1237_ = lean_usize_dec_lt(v_i_1224_, v_sz_1223_);
if (v___x_1237_ == 0)
{
lean_object* v___x_1238_; 
lean_dec_ref(v_c_1221_);
lean_dec_ref(v___x_1220_);
v___x_1238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1238_, 0, v_b_1225_);
return v___x_1238_;
}
else
{
lean_object* v_snd_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1273_; 
v_snd_1239_ = lean_ctor_get(v_b_1225_, 1);
v_isSharedCheck_1273_ = !lean_is_exclusive(v_b_1225_);
if (v_isSharedCheck_1273_ == 0)
{
lean_object* v_unused_1274_; 
v_unused_1274_ = lean_ctor_get(v_b_1225_, 0);
lean_dec(v_unused_1274_);
v___x_1241_ = v_b_1225_;
v_isShared_1242_ = v_isSharedCheck_1273_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_snd_1239_);
lean_dec(v_b_1225_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1273_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v_a_1243_; lean_object* v___x_1244_; 
v_a_1243_ = lean_array_uget_borrowed(v_as_1222_, v_i_1224_);
lean_inc(v_snd_1239_);
lean_inc(v_a_1243_);
lean_inc_ref(v_c_1221_);
lean_inc_ref(v___x_1220_);
v___x_1244_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(v_init_1219_, v___x_1220_, v_c_1221_, v_a_1243_, v_snd_1239_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1264_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1247_ = v___x_1244_;
v_isShared_1248_ = v_isSharedCheck_1264_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1244_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1264_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
if (lean_obj_tag(v_a_1245_) == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1251_; 
lean_dec_ref(v_c_1221_);
lean_dec_ref(v___x_1220_);
v___x_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1249_, 0, v_a_1245_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v___x_1249_);
v___x_1251_ = v___x_1241_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1249_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v_snd_1239_);
v___x_1251_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
lean_object* v___x_1253_; 
if (v_isShared_1248_ == 0)
{
lean_ctor_set(v___x_1247_, 0, v___x_1251_);
v___x_1253_ = v___x_1247_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v___x_1251_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1257_; lean_object* v___x_1259_; 
lean_del_object(v___x_1247_);
lean_dec(v_snd_1239_);
v_a_1256_ = lean_ctor_get(v_a_1245_, 0);
lean_inc(v_a_1256_);
lean_dec_ref(v_a_1245_);
v___x_1257_ = lean_box(0);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 1, v_a_1256_);
lean_ctor_set(v___x_1241_, 0, v___x_1257_);
v___x_1259_ = v___x_1241_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v___x_1257_);
lean_ctor_set(v_reuseFailAlloc_1263_, 1, v_a_1256_);
v___x_1259_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
size_t v___x_1260_; size_t v___x_1261_; 
v___x_1260_ = ((size_t)1ULL);
v___x_1261_ = lean_usize_add(v_i_1224_, v___x_1260_);
v_i_1224_ = v___x_1261_;
v_b_1225_ = v___x_1259_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1272_; 
lean_del_object(v___x_1241_);
lean_dec(v_snd_1239_);
lean_dec_ref(v_c_1221_);
lean_dec_ref(v___x_1220_);
v_a_1265_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1272_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1272_ == 0)
{
v___x_1267_ = v___x_1244_;
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1244_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1272_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
lean_object* v___x_1270_; 
if (v_isShared_1268_ == 0)
{
v___x_1270_ = v___x_1267_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v_a_1265_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1___boxed(lean_object** _args){
lean_object* v_init_1275_ = _args[0];
lean_object* v___x_1276_ = _args[1];
lean_object* v_c_1277_ = _args[2];
lean_object* v_as_1278_ = _args[3];
lean_object* v_sz_1279_ = _args[4];
lean_object* v_i_1280_ = _args[5];
lean_object* v_b_1281_ = _args[6];
lean_object* v___y_1282_ = _args[7];
lean_object* v___y_1283_ = _args[8];
lean_object* v___y_1284_ = _args[9];
lean_object* v___y_1285_ = _args[10];
lean_object* v___y_1286_ = _args[11];
lean_object* v___y_1287_ = _args[12];
lean_object* v___y_1288_ = _args[13];
lean_object* v___y_1289_ = _args[14];
lean_object* v___y_1290_ = _args[15];
lean_object* v___y_1291_ = _args[16];
lean_object* v___y_1292_ = _args[17];
_start:
{
size_t v_sz_boxed_1293_; size_t v_i_boxed_1294_; lean_object* v_res_1295_; 
v_sz_boxed_1293_ = lean_unbox_usize(v_sz_1279_);
lean_dec(v_sz_1279_);
v_i_boxed_1294_ = lean_unbox_usize(v_i_1280_);
lean_dec(v_i_1280_);
v_res_1295_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__1(v_init_1275_, v___x_1276_, v_c_1277_, v_as_1278_, v_sz_boxed_1293_, v_i_boxed_1294_, v_b_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_);
lean_dec(v___y_1291_);
lean_dec_ref(v___y_1290_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec(v___y_1282_);
lean_dec_ref(v_as_1278_);
lean_dec_ref(v_init_1275_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0___boxed(lean_object* v_init_1296_, lean_object* v___x_1297_, lean_object* v_c_1298_, lean_object* v_n_1299_, lean_object* v_b_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(v_init_1296_, v___x_1297_, v_c_1298_, v_n_1299_, v_b_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v_init_1296_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(lean_object* v___x_1319_, lean_object* v_c_1320_, lean_object* v_as_1321_, size_t v_sz_1322_, size_t v_i_1323_, lean_object* v_b_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
uint8_t v___x_1336_; 
v___x_1336_ = lean_usize_dec_lt(v_i_1323_, v_sz_1322_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; 
lean_dec_ref(v_c_1320_);
lean_dec_ref(v___x_1319_);
v___x_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1337_, 0, v_b_1324_);
return v___x_1337_;
}
else
{
lean_object* v_snd_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1429_; 
v_snd_1338_ = lean_ctor_get(v_b_1324_, 1);
v_isSharedCheck_1429_ = !lean_is_exclusive(v_b_1324_);
if (v_isSharedCheck_1429_ == 0)
{
lean_object* v_unused_1430_; 
v_unused_1430_ = lean_ctor_get(v_b_1324_, 0);
lean_dec(v_unused_1430_);
v___x_1340_ = v_b_1324_;
v_isShared_1341_ = v_isSharedCheck_1429_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_snd_1338_);
lean_dec(v_b_1324_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1429_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v_a_1342_; lean_object* v_p_1343_; lean_object* v___x_1344_; uint8_t v___x_1345_; 
v_a_1342_ = lean_array_uget_borrowed(v_as_1321_, v_i_1323_);
v_p_1343_ = lean_ctor_get(v_a_1342_, 0);
v___x_1344_ = lean_box(0);
v___x_1345_ = l_Int_Linear_Poly_isNegEq(v___x_1319_, v_p_1343_);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; size_t v___x_1347_; size_t v___x_1348_; 
lean_del_object(v___x_1340_);
lean_dec(v_snd_1338_);
v___x_1346_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___closed__1));
v___x_1347_ = ((size_t)1ULL);
v___x_1348_ = lean_usize_add(v_i_1323_, v___x_1347_);
v_i_1323_ = v___x_1348_;
v_b_1324_ = v___x_1346_;
goto _start;
}
else
{
lean_object* v___x_1350_; 
lean_inc(v_a_1342_);
v___x_1350_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_1342_, v___y_1325_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec_ref(v___x_1350_);
v___x_1351_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_1352_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_1351_, v___y_1333_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___y_1357_; lean_object* v___y_1358_; lean_object* v___y_1359_; lean_object* v___y_1360_; lean_object* v___y_1361_; lean_object* v___y_1362_; lean_object* v___y_1363_; lean_object* v___y_1364_; lean_object* v___y_1365_; lean_object* v___y_1366_; uint8_t v___x_1391_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc(v_a_1353_);
lean_dec_ref(v___x_1352_);
lean_inc(v_a_1342_);
v___x_1354_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1354_, 0, v_c_1320_);
lean_ctor_set(v___x_1354_, 1, v_a_1342_);
v___x_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1355_, 0, v___x_1319_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
v___x_1391_ = lean_unbox(v_a_1353_);
lean_dec(v_a_1353_);
if (v___x_1391_ == 0)
{
v___y_1357_ = v___y_1325_;
v___y_1358_ = v___y_1326_;
v___y_1359_ = v___y_1327_;
v___y_1360_ = v___y_1328_;
v___y_1361_ = v___y_1329_;
v___y_1362_ = v___y_1330_;
v___y_1363_ = v___y_1331_;
v___y_1364_ = v___y_1332_;
v___y_1365_ = v___y_1333_;
v___y_1366_ = v___y_1334_;
goto v___jp_1356_;
}
else
{
lean_object* v___x_1392_; 
lean_inc_ref(v___x_1355_);
v___x_1392_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_1355_, v___y_1325_, v___y_1333_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
lean_inc(v_a_1393_);
lean_dec_ref(v___x_1392_);
v___x_1394_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6);
v___x_1395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
lean_ctor_set(v___x_1395_, 1, v_a_1393_);
v___x_1396_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v___x_1351_, v___x_1395_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_dec_ref(v___x_1396_);
v___y_1357_ = v___y_1325_;
v___y_1358_ = v___y_1326_;
v___y_1359_ = v___y_1327_;
v___y_1360_ = v___y_1328_;
v___y_1361_ = v___y_1329_;
v___y_1362_ = v___y_1330_;
v___y_1363_ = v___y_1331_;
v___y_1364_ = v___y_1332_;
v___y_1365_ = v___y_1333_;
v___y_1366_ = v___y_1334_;
goto v___jp_1356_;
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
lean_dec_ref(v___x_1355_);
lean_del_object(v___x_1340_);
lean_dec(v_snd_1338_);
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1396_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1396_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
}
else
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1412_; 
lean_dec_ref(v___x_1355_);
lean_del_object(v___x_1340_);
lean_dec(v_snd_1338_);
v_a_1405_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1407_ = v___x_1392_;
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1392_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1410_; 
if (v_isShared_1408_ == 0)
{
v___x_1410_ = v___x_1407_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_a_1405_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
}
v___jp_1356_:
{
lean_object* v___x_1367_; 
lean_inc(v___y_1366_);
lean_inc_ref(v___y_1365_);
lean_inc(v___y_1364_);
lean_inc_ref(v___y_1363_);
lean_inc(v___y_1362_);
lean_inc_ref(v___y_1361_);
lean_inc(v___y_1360_);
lean_inc_ref(v___y_1359_);
lean_inc(v___y_1358_);
lean_inc(v___y_1357_);
v___x_1367_ = lean_grind_cutsat_assert_eq(v___x_1355_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1381_; 
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1381_ == 0)
{
lean_object* v_unused_1382_; 
v_unused_1382_ = lean_ctor_get(v___x_1367_, 0);
lean_dec(v_unused_1382_);
v___x_1369_ = v___x_1367_;
v_isShared_1370_ = v_isSharedCheck_1381_;
goto v_resetjp_1368_;
}
else
{
lean_dec(v___x_1367_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1381_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1374_; 
v___x_1371_ = lean_box(v___x_1345_);
v___x_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1371_);
if (v_isShared_1341_ == 0)
{
lean_ctor_set(v___x_1340_, 1, v___x_1344_);
lean_ctor_set(v___x_1340_, 0, v___x_1372_);
v___x_1374_ = v___x_1340_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v___x_1372_);
lean_ctor_set(v_reuseFailAlloc_1380_, 1, v___x_1344_);
v___x_1374_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1378_; 
v___x_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1374_);
v___x_1376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1375_);
lean_ctor_set(v___x_1376_, 1, v_snd_1338_);
if (v_isShared_1370_ == 0)
{
lean_ctor_set(v___x_1369_, 0, v___x_1376_);
v___x_1378_ = v___x_1369_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v___x_1376_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
else
{
lean_object* v_a_1383_; lean_object* v___x_1385_; uint8_t v_isShared_1386_; uint8_t v_isSharedCheck_1390_; 
lean_del_object(v___x_1340_);
lean_dec(v_snd_1338_);
v_a_1383_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1385_ = v___x_1367_;
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
else
{
lean_inc(v_a_1383_);
lean_dec(v___x_1367_);
v___x_1385_ = lean_box(0);
v_isShared_1386_ = v_isSharedCheck_1390_;
goto v_resetjp_1384_;
}
v_resetjp_1384_:
{
lean_object* v___x_1388_; 
if (v_isShared_1386_ == 0)
{
v___x_1388_ = v___x_1385_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v_a_1383_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
}
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
lean_del_object(v___x_1340_);
lean_dec(v_snd_1338_);
lean_dec_ref(v_c_1320_);
lean_dec_ref(v___x_1319_);
v_a_1413_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1352_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1352_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_del_object(v___x_1340_);
lean_dec(v_snd_1338_);
lean_dec_ref(v_c_1320_);
lean_dec_ref(v___x_1319_);
v_a_1421_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1350_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1350_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v___x_1431_ = _args[0];
lean_object* v_c_1432_ = _args[1];
lean_object* v_as_1433_ = _args[2];
lean_object* v_sz_1434_ = _args[3];
lean_object* v_i_1435_ = _args[4];
lean_object* v_b_1436_ = _args[5];
lean_object* v___y_1437_ = _args[6];
lean_object* v___y_1438_ = _args[7];
lean_object* v___y_1439_ = _args[8];
lean_object* v___y_1440_ = _args[9];
lean_object* v___y_1441_ = _args[10];
lean_object* v___y_1442_ = _args[11];
lean_object* v___y_1443_ = _args[12];
lean_object* v___y_1444_ = _args[13];
lean_object* v___y_1445_ = _args[14];
lean_object* v___y_1446_ = _args[15];
lean_object* v___y_1447_ = _args[16];
_start:
{
size_t v_sz_boxed_1448_; size_t v_i_boxed_1449_; lean_object* v_res_1450_; 
v_sz_boxed_1448_ = lean_unbox_usize(v_sz_1434_);
lean_dec(v_sz_1434_);
v_i_boxed_1449_ = lean_unbox_usize(v_i_1435_);
lean_dec(v_i_1435_);
v_res_1450_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(v___x_1431_, v_c_1432_, v_as_1433_, v_sz_boxed_1448_, v_i_boxed_1449_, v_b_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
lean_dec(v___y_1438_);
lean_dec(v___y_1437_);
lean_dec_ref(v_as_1433_);
return v_res_1450_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(lean_object* v___x_1454_, lean_object* v_c_1455_, lean_object* v_as_1456_, size_t v_sz_1457_, size_t v_i_1458_, lean_object* v_b_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
uint8_t v___x_1471_; 
v___x_1471_ = lean_usize_dec_lt(v_i_1458_, v_sz_1457_);
if (v___x_1471_ == 0)
{
lean_object* v___x_1472_; 
lean_dec_ref(v_c_1455_);
lean_dec_ref(v___x_1454_);
v___x_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1472_, 0, v_b_1459_);
return v___x_1472_;
}
else
{
lean_object* v_snd_1473_; lean_object* v___x_1475_; uint8_t v_isShared_1476_; uint8_t v_isSharedCheck_1564_; 
v_snd_1473_ = lean_ctor_get(v_b_1459_, 1);
v_isSharedCheck_1564_ = !lean_is_exclusive(v_b_1459_);
if (v_isSharedCheck_1564_ == 0)
{
lean_object* v_unused_1565_; 
v_unused_1565_ = lean_ctor_get(v_b_1459_, 0);
lean_dec(v_unused_1565_);
v___x_1475_ = v_b_1459_;
v_isShared_1476_ = v_isSharedCheck_1564_;
goto v_resetjp_1474_;
}
else
{
lean_inc(v_snd_1473_);
lean_dec(v_b_1459_);
v___x_1475_ = lean_box(0);
v_isShared_1476_ = v_isSharedCheck_1564_;
goto v_resetjp_1474_;
}
v_resetjp_1474_:
{
lean_object* v_a_1477_; lean_object* v_p_1478_; lean_object* v___x_1479_; uint8_t v___x_1480_; 
v_a_1477_ = lean_array_uget_borrowed(v_as_1456_, v_i_1458_);
v_p_1478_ = lean_ctor_get(v_a_1477_, 0);
v___x_1479_ = lean_box(0);
v___x_1480_ = l_Int_Linear_Poly_isNegEq(v___x_1454_, v_p_1478_);
if (v___x_1480_ == 0)
{
lean_object* v___x_1481_; size_t v___x_1482_; size_t v___x_1483_; lean_object* v___x_1484_; 
lean_del_object(v___x_1475_);
lean_dec(v_snd_1473_);
v___x_1481_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___closed__0));
v___x_1482_ = ((size_t)1ULL);
v___x_1483_ = lean_usize_add(v_i_1458_, v___x_1482_);
v___x_1484_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1_spec__4(v___x_1454_, v_c_1455_, v_as_1456_, v_sz_1457_, v___x_1483_, v___x_1481_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_);
return v___x_1484_;
}
else
{
lean_object* v___x_1485_; 
lean_inc(v_a_1477_);
v___x_1485_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase___redArg(v_a_1477_, v___y_1460_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v___x_1486_; lean_object* v___x_1487_; 
lean_dec_ref(v___x_1485_);
v___x_1486_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__4));
v___x_1487_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_1486_, v___y_1468_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v_a_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1497_; lean_object* v___y_1498_; lean_object* v___y_1499_; lean_object* v___y_1500_; lean_object* v___y_1501_; uint8_t v___x_1526_; 
v_a_1488_ = lean_ctor_get(v___x_1487_, 0);
lean_inc(v_a_1488_);
lean_dec_ref(v___x_1487_);
lean_inc(v_a_1477_);
v___x_1489_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1489_, 0, v_c_1455_);
lean_ctor_set(v___x_1489_, 1, v_a_1477_);
v___x_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1454_);
lean_ctor_set(v___x_1490_, 1, v___x_1489_);
v___x_1526_ = lean_unbox(v_a_1488_);
lean_dec(v_a_1488_);
if (v___x_1526_ == 0)
{
v___y_1492_ = v___y_1460_;
v___y_1493_ = v___y_1461_;
v___y_1494_ = v___y_1462_;
v___y_1495_ = v___y_1463_;
v___y_1496_ = v___y_1464_;
v___y_1497_ = v___y_1465_;
v___y_1498_ = v___y_1466_;
v___y_1499_ = v___y_1467_;
v___y_1500_ = v___y_1468_;
v___y_1501_ = v___y_1469_;
goto v___jp_1491_;
}
else
{
lean_object* v___x_1527_; 
lean_inc_ref(v___x_1490_);
v___x_1527_ = l_Lean_Meta_Grind_Arith_Cutsat_EqCnstr_pp___redArg(v___x_1490_, v___y_1460_, v___y_1468_);
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc(v_a_1528_);
lean_dec_ref(v___x_1527_);
v___x_1529_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2_spec__3___closed__6);
v___x_1530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1530_, 0, v___x_1529_);
lean_ctor_set(v___x_1530_, 1, v_a_1528_);
v___x_1531_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v___x_1486_, v___x_1530_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_);
if (lean_obj_tag(v___x_1531_) == 0)
{
lean_dec_ref(v___x_1531_);
v___y_1492_ = v___y_1460_;
v___y_1493_ = v___y_1461_;
v___y_1494_ = v___y_1462_;
v___y_1495_ = v___y_1463_;
v___y_1496_ = v___y_1464_;
v___y_1497_ = v___y_1465_;
v___y_1498_ = v___y_1466_;
v___y_1499_ = v___y_1467_;
v___y_1500_ = v___y_1468_;
v___y_1501_ = v___y_1469_;
goto v___jp_1491_;
}
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
lean_dec_ref(v___x_1490_);
lean_del_object(v___x_1475_);
lean_dec(v_snd_1473_);
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1531_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1531_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1531_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1547_; 
lean_dec_ref(v___x_1490_);
lean_del_object(v___x_1475_);
lean_dec(v_snd_1473_);
v_a_1540_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1542_ = v___x_1527_;
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1527_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1543_ == 0)
{
v___x_1545_ = v___x_1542_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1540_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
v___jp_1491_:
{
lean_object* v___x_1502_; 
lean_inc(v___y_1501_);
lean_inc_ref(v___y_1500_);
lean_inc(v___y_1499_);
lean_inc_ref(v___y_1498_);
lean_inc(v___y_1497_);
lean_inc_ref(v___y_1496_);
lean_inc(v___y_1495_);
lean_inc_ref(v___y_1494_);
lean_inc(v___y_1493_);
lean_inc(v___y_1492_);
v___x_1502_ = lean_grind_cutsat_assert_eq(v___x_1490_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1516_; 
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1516_ == 0)
{
lean_object* v_unused_1517_; 
v_unused_1517_ = lean_ctor_get(v___x_1502_, 0);
lean_dec(v_unused_1517_);
v___x_1504_ = v___x_1502_;
v_isShared_1505_ = v_isSharedCheck_1516_;
goto v_resetjp_1503_;
}
else
{
lean_dec(v___x_1502_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1516_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1506_ = lean_box(v___x_1480_);
v___x_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1506_);
if (v_isShared_1476_ == 0)
{
lean_ctor_set(v___x_1475_, 1, v___x_1479_);
lean_ctor_set(v___x_1475_, 0, v___x_1507_);
v___x_1509_ = v___x_1475_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1507_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v___x_1479_);
v___x_1509_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1513_; 
v___x_1510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1510_, 0, v___x_1509_);
v___x_1511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1511_, 0, v___x_1510_);
lean_ctor_set(v___x_1511_, 1, v_snd_1473_);
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 0, v___x_1511_);
v___x_1513_ = v___x_1504_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___x_1511_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
}
else
{
lean_object* v_a_1518_; lean_object* v___x_1520_; uint8_t v_isShared_1521_; uint8_t v_isSharedCheck_1525_; 
lean_del_object(v___x_1475_);
lean_dec(v_snd_1473_);
v_a_1518_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1525_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1525_ == 0)
{
v___x_1520_ = v___x_1502_;
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
else
{
lean_inc(v_a_1518_);
lean_dec(v___x_1502_);
v___x_1520_ = lean_box(0);
v_isShared_1521_ = v_isSharedCheck_1525_;
goto v_resetjp_1519_;
}
v_resetjp_1519_:
{
lean_object* v___x_1523_; 
if (v_isShared_1521_ == 0)
{
v___x_1523_ = v___x_1520_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_a_1518_);
v___x_1523_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
return v___x_1523_;
}
}
}
}
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
lean_del_object(v___x_1475_);
lean_dec(v_snd_1473_);
lean_dec_ref(v_c_1455_);
lean_dec_ref(v___x_1454_);
v_a_1548_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1487_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1487_);
v___x_1550_ = lean_box(0);
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
v_resetjp_1549_:
{
lean_object* v___x_1553_; 
if (v_isShared_1551_ == 0)
{
v___x_1553_ = v___x_1550_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_a_1548_);
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
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_del_object(v___x_1475_);
lean_dec(v_snd_1473_);
lean_dec_ref(v_c_1455_);
lean_dec_ref(v___x_1454_);
v_a_1556_ = lean_ctor_get(v___x_1485_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1485_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1485_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1___boxed(lean_object** _args){
lean_object* v___x_1566_ = _args[0];
lean_object* v_c_1567_ = _args[1];
lean_object* v_as_1568_ = _args[2];
lean_object* v_sz_1569_ = _args[3];
lean_object* v_i_1570_ = _args[4];
lean_object* v_b_1571_ = _args[5];
lean_object* v___y_1572_ = _args[6];
lean_object* v___y_1573_ = _args[7];
lean_object* v___y_1574_ = _args[8];
lean_object* v___y_1575_ = _args[9];
lean_object* v___y_1576_ = _args[10];
lean_object* v___y_1577_ = _args[11];
lean_object* v___y_1578_ = _args[12];
lean_object* v___y_1579_ = _args[13];
lean_object* v___y_1580_ = _args[14];
lean_object* v___y_1581_ = _args[15];
lean_object* v___y_1582_ = _args[16];
_start:
{
size_t v_sz_boxed_1583_; size_t v_i_boxed_1584_; lean_object* v_res_1585_; 
v_sz_boxed_1583_ = lean_unbox_usize(v_sz_1569_);
lean_dec(v_sz_1569_);
v_i_boxed_1584_ = lean_unbox_usize(v_i_1570_);
lean_dec(v_i_1570_);
v_res_1585_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(v___x_1566_, v_c_1567_, v_as_1568_, v_sz_boxed_1583_, v_i_boxed_1584_, v_b_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec(v___y_1579_);
lean_dec_ref(v___y_1578_);
lean_dec(v___y_1577_);
lean_dec_ref(v___y_1576_);
lean_dec(v___y_1575_);
lean_dec_ref(v___y_1574_);
lean_dec(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v_as_1568_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(lean_object* v___x_1586_, lean_object* v_c_1587_, lean_object* v_t_1588_, lean_object* v_init_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v_root_1601_; lean_object* v_tail_1602_; lean_object* v___x_1603_; 
v_root_1601_ = lean_ctor_get(v_t_1588_, 0);
lean_inc_ref(v_root_1601_);
v_tail_1602_ = lean_ctor_get(v_t_1588_, 1);
lean_inc_ref(v_tail_1602_);
lean_dec_ref(v_t_1588_);
lean_inc_ref(v_c_1587_);
lean_inc_ref(v___x_1586_);
lean_inc_ref(v_init_1589_);
v___x_1603_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0(v_init_1589_, v___x_1586_, v_c_1587_, v_root_1601_, v_init_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec_ref(v_init_1589_);
if (lean_obj_tag(v___x_1603_) == 0)
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1640_; 
v_a_1604_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1606_ = v___x_1603_;
v_isShared_1607_ = v_isSharedCheck_1640_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1603_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1640_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
if (lean_obj_tag(v_a_1604_) == 0)
{
lean_object* v_a_1608_; lean_object* v___x_1610_; 
lean_dec_ref(v_tail_1602_);
lean_dec_ref(v_c_1587_);
lean_dec_ref(v___x_1586_);
v_a_1608_ = lean_ctor_get(v_a_1604_, 0);
lean_inc(v_a_1608_);
lean_dec_ref(v_a_1604_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 0, v_a_1608_);
v___x_1610_ = v___x_1606_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_a_1608_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; size_t v_sz_1615_; size_t v___x_1616_; lean_object* v___x_1617_; 
lean_del_object(v___x_1606_);
v_a_1612_ = lean_ctor_get(v_a_1604_, 0);
lean_inc(v_a_1612_);
lean_dec_ref(v_a_1604_);
v___x_1613_ = lean_box(0);
v___x_1614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1613_);
lean_ctor_set(v___x_1614_, 1, v_a_1612_);
v_sz_1615_ = lean_array_size(v_tail_1602_);
v___x_1616_ = ((size_t)0ULL);
v___x_1617_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__1(v___x_1586_, v_c_1587_, v_tail_1602_, v_sz_1615_, v___x_1616_, v___x_1614_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec_ref(v_tail_1602_);
if (lean_obj_tag(v___x_1617_) == 0)
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1631_; 
v_a_1618_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1631_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1631_ == 0)
{
v___x_1620_ = v___x_1617_;
v_isShared_1621_ = v_isSharedCheck_1631_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1617_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1631_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v_fst_1622_; 
v_fst_1622_ = lean_ctor_get(v_a_1618_, 0);
if (lean_obj_tag(v_fst_1622_) == 0)
{
lean_object* v_snd_1623_; lean_object* v___x_1625_; 
v_snd_1623_ = lean_ctor_get(v_a_1618_, 1);
lean_inc(v_snd_1623_);
lean_dec(v_a_1618_);
if (v_isShared_1621_ == 0)
{
lean_ctor_set(v___x_1620_, 0, v_snd_1623_);
v___x_1625_ = v___x_1620_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_snd_1623_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
else
{
lean_object* v_val_1627_; lean_object* v___x_1629_; 
lean_inc_ref(v_fst_1622_);
lean_dec(v_a_1618_);
v_val_1627_ = lean_ctor_get(v_fst_1622_, 0);
lean_inc(v_val_1627_);
lean_dec_ref(v_fst_1622_);
if (v_isShared_1621_ == 0)
{
lean_ctor_set(v___x_1620_, 0, v_val_1627_);
v___x_1629_ = v___x_1620_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v_val_1627_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1639_; 
v_a_1632_ = lean_ctor_get(v___x_1617_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1617_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1634_ = v___x_1617_;
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_a_1632_);
lean_dec(v___x_1617_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1639_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1637_; 
if (v_isShared_1635_ == 0)
{
v___x_1637_ = v___x_1634_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v_a_1632_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
}
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1648_; 
lean_dec_ref(v_tail_1602_);
lean_dec_ref(v_c_1587_);
lean_dec_ref(v___x_1586_);
v_a_1641_ = lean_ctor_get(v___x_1603_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1603_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1643_ = v___x_1603_;
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1603_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0___boxed(lean_object* v___x_1649_, lean_object* v_c_1650_, lean_object* v_t_1651_, lean_object* v_init_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(v___x_1649_, v_c_1650_, v_t_1651_, v_init_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec(v___y_1653_);
return v_res_1664_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0(void){
_start:
{
lean_object* v___x_1665_; 
v___x_1665_ = l_Lean_instInhabitedPersistentArray_default(lean_box(0));
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(lean_object* v_c_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_, lean_object* v_a_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_){
_start:
{
lean_object* v_p_1678_; 
v_p_1678_ = lean_ctor_get(v_c_1666_, 0);
if (lean_obj_tag(v_p_1678_) == 1)
{
lean_object* v_k_1679_; lean_object* v_v_1680_; lean_object* v___x_1681_; 
lean_inc_ref(v_p_1678_);
v_k_1679_ = lean_ctor_get(v_p_1678_, 0);
v_v_1680_ = lean_ctor_get(v_p_1678_, 1);
v___x_1681_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_1667_, v_a_1675_);
if (lean_obj_tag(v___x_1681_) == 0)
{
lean_object* v_a_1682_; lean_object* v___y_1684_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v_a_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_a_1682_);
lean_dec_ref(v___x_1681_);
v___x_1710_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6);
v___x_1711_ = lean_int_dec_lt(v_k_1679_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_object* v_lowers_1712_; lean_object* v_size_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v_lowers_1712_ = lean_ctor_get(v_a_1682_, 7);
lean_inc_ref(v_lowers_1712_);
lean_dec(v_a_1682_);
v_size_1713_ = lean_ctor_get(v_lowers_1712_, 2);
v___x_1714_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0);
v___x_1715_ = lean_nat_dec_lt(v_v_1680_, v_size_1713_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; 
lean_dec_ref(v_lowers_1712_);
v___x_1716_ = l_outOfBounds___redArg(v___x_1714_);
v___y_1684_ = v___x_1716_;
goto v___jp_1683_;
}
else
{
lean_object* v___x_1717_; 
v___x_1717_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1714_, v_lowers_1712_, v_v_1680_);
lean_dec_ref(v_lowers_1712_);
v___y_1684_ = v___x_1717_;
goto v___jp_1683_;
}
}
else
{
lean_object* v_uppers_1718_; lean_object* v_size_1719_; lean_object* v___x_1720_; uint8_t v___x_1721_; 
v_uppers_1718_ = lean_ctor_get(v_a_1682_, 8);
lean_inc_ref(v_uppers_1718_);
lean_dec(v_a_1682_);
v_size_1719_ = lean_ctor_get(v_uppers_1718_, 2);
v___x_1720_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0);
v___x_1721_ = lean_nat_dec_lt(v_v_1680_, v_size_1719_);
if (v___x_1721_ == 0)
{
lean_object* v___x_1722_; 
lean_dec_ref(v_uppers_1718_);
v___x_1722_ = l_outOfBounds___redArg(v___x_1720_);
v___y_1684_ = v___x_1722_;
goto v___jp_1683_;
}
else
{
lean_object* v___x_1723_; 
v___x_1723_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1720_, v_uppers_1718_, v_v_1680_);
lean_dec_ref(v_uppers_1718_);
v___y_1684_ = v___x_1723_;
goto v___jp_1683_;
}
}
v___jp_1683_:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1685_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0_spec__0_spec__2___closed__0));
v___x_1686_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq_spec__0(v_p_1678_, v_c_1666_, v___y_1684_, v___x_1685_, v_a_1667_, v_a_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1701_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1689_ = v___x_1686_;
v_isShared_1690_ = v_isSharedCheck_1701_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_a_1687_);
lean_dec(v___x_1686_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1701_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v_fst_1691_; 
v_fst_1691_ = lean_ctor_get(v_a_1687_, 0);
lean_inc(v_fst_1691_);
lean_dec(v_a_1687_);
if (lean_obj_tag(v_fst_1691_) == 0)
{
uint8_t v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1695_; 
v___x_1692_ = 0;
v___x_1693_ = lean_box(v___x_1692_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v___x_1693_);
v___x_1695_ = v___x_1689_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1693_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
else
{
lean_object* v_val_1697_; lean_object* v___x_1699_; 
v_val_1697_ = lean_ctor_get(v_fst_1691_, 0);
lean_inc(v_val_1697_);
lean_dec_ref(v_fst_1691_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 0, v_val_1697_);
v___x_1699_ = v___x_1689_;
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
v_a_1702_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1686_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1686_);
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
lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1731_; 
lean_dec_ref(v_p_1678_);
lean_dec_ref(v_c_1666_);
v_a_1724_ = lean_ctor_get(v___x_1681_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v___x_1681_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1726_ = v___x_1681_;
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1681_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1731_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1729_; 
if (v_isShared_1727_ == 0)
{
v___x_1729_ = v___x_1726_;
goto v_reusejp_1728_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_a_1724_);
v___x_1729_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1728_;
}
v_reusejp_1728_:
{
return v___x_1729_;
}
}
}
}
else
{
lean_object* v___x_1732_; 
v___x_1732_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_1666_, v_a_1667_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_);
return v___x_1732_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___boxed(lean_object* v_c_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_){
_start:
{
lean_object* v_res_1745_; 
v_res_1745_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(v_c_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_);
lean_dec(v_a_1743_);
lean_dec_ref(v_a_1742_);
lean_dec(v_a_1741_);
lean_dec_ref(v_a_1740_);
lean_dec(v_a_1739_);
lean_dec_ref(v_a_1738_);
lean_dec(v_a_1737_);
lean_dec_ref(v_a_1736_);
lean_dec(v_a_1735_);
lean_dec(v_a_1734_);
return v_res_1745_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(lean_object* v___x_1746_, lean_object* v_as_1747_, size_t v_i_1748_, size_t v_stop_1749_, lean_object* v_b_1750_){
_start:
{
lean_object* v___y_1752_; uint8_t v___x_1756_; 
v___x_1756_ = lean_usize_dec_eq(v_i_1748_, v_stop_1749_);
if (v___x_1756_ == 0)
{
lean_object* v___x_1757_; lean_object* v_p_1758_; uint8_t v___x_1759_; 
v___x_1757_ = lean_array_uget_borrowed(v_as_1747_, v_i_1748_);
v_p_1758_ = lean_ctor_get(v___x_1757_, 0);
v___x_1759_ = l_Int_Linear_instBEqPoly_beq(v_p_1758_, v___x_1746_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; 
lean_inc(v___x_1757_);
v___x_1760_ = l_Lean_PersistentArray_push___redArg(v_b_1750_, v___x_1757_);
v___y_1752_ = v___x_1760_;
goto v___jp_1751_;
}
else
{
v___y_1752_ = v_b_1750_;
goto v___jp_1751_;
}
}
else
{
return v_b_1750_;
}
v___jp_1751_:
{
size_t v___x_1753_; size_t v___x_1754_; 
v___x_1753_ = ((size_t)1ULL);
v___x_1754_ = lean_usize_add(v_i_1748_, v___x_1753_);
v_i_1748_ = v___x_1754_;
v_b_1750_ = v___y_1752_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1___boxed(lean_object* v___x_1761_, lean_object* v_as_1762_, lean_object* v_i_1763_, lean_object* v_stop_1764_, lean_object* v_b_1765_){
_start:
{
size_t v_i_boxed_1766_; size_t v_stop_boxed_1767_; lean_object* v_res_1768_; 
v_i_boxed_1766_ = lean_unbox_usize(v_i_1763_);
lean_dec(v_i_1763_);
v_stop_boxed_1767_ = lean_unbox_usize(v_stop_1764_);
lean_dec(v_stop_1764_);
v_res_1768_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1761_, v_as_1762_, v_i_boxed_1766_, v_stop_boxed_1767_, v_b_1765_);
lean_dec_ref(v_as_1762_);
lean_dec_ref(v___x_1761_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(lean_object* v___x_1769_, lean_object* v_x_1770_, lean_object* v_x_1771_){
_start:
{
if (lean_obj_tag(v_x_1770_) == 0)
{
lean_object* v_cs_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; uint8_t v___x_1775_; 
v_cs_1772_ = lean_ctor_get(v_x_1770_, 0);
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = lean_array_get_size(v_cs_1772_);
v___x_1775_ = lean_nat_dec_lt(v___x_1773_, v___x_1774_);
if (v___x_1775_ == 0)
{
return v_x_1771_;
}
else
{
uint8_t v___x_1776_; 
v___x_1776_ = lean_nat_dec_le(v___x_1774_, v___x_1774_);
if (v___x_1776_ == 0)
{
if (v___x_1775_ == 0)
{
return v_x_1771_;
}
else
{
size_t v___x_1777_; size_t v___x_1778_; lean_object* v___x_1779_; 
v___x_1777_ = ((size_t)0ULL);
v___x_1778_ = lean_usize_of_nat(v___x_1774_);
v___x_1779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v___x_1769_, v_cs_1772_, v___x_1777_, v___x_1778_, v_x_1771_);
return v___x_1779_;
}
}
else
{
size_t v___x_1780_; size_t v___x_1781_; lean_object* v___x_1782_; 
v___x_1780_ = ((size_t)0ULL);
v___x_1781_ = lean_usize_of_nat(v___x_1774_);
v___x_1782_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v___x_1769_, v_cs_1772_, v___x_1780_, v___x_1781_, v_x_1771_);
return v___x_1782_;
}
}
}
else
{
lean_object* v_vs_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v_vs_1783_ = lean_ctor_get(v_x_1770_, 0);
v___x_1784_ = lean_unsigned_to_nat(0u);
v___x_1785_ = lean_array_get_size(v_vs_1783_);
v___x_1786_ = lean_nat_dec_lt(v___x_1784_, v___x_1785_);
if (v___x_1786_ == 0)
{
return v_x_1771_;
}
else
{
uint8_t v___x_1787_; 
v___x_1787_ = lean_nat_dec_le(v___x_1785_, v___x_1785_);
if (v___x_1787_ == 0)
{
if (v___x_1786_ == 0)
{
return v_x_1771_;
}
else
{
size_t v___x_1788_; size_t v___x_1789_; lean_object* v___x_1790_; 
v___x_1788_ = ((size_t)0ULL);
v___x_1789_ = lean_usize_of_nat(v___x_1785_);
v___x_1790_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1769_, v_vs_1783_, v___x_1788_, v___x_1789_, v_x_1771_);
return v___x_1790_;
}
}
else
{
size_t v___x_1791_; size_t v___x_1792_; lean_object* v___x_1793_; 
v___x_1791_ = ((size_t)0ULL);
v___x_1792_ = lean_usize_of_nat(v___x_1785_);
v___x_1793_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1769_, v_vs_1783_, v___x_1791_, v___x_1792_, v_x_1771_);
return v___x_1793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(lean_object* v___x_1794_, lean_object* v_as_1795_, size_t v_i_1796_, size_t v_stop_1797_, lean_object* v_b_1798_){
_start:
{
uint8_t v___x_1799_; 
v___x_1799_ = lean_usize_dec_eq(v_i_1796_, v_stop_1797_);
if (v___x_1799_ == 0)
{
lean_object* v___x_1800_; lean_object* v___x_1801_; size_t v___x_1802_; size_t v___x_1803_; 
v___x_1800_ = lean_array_uget_borrowed(v_as_1795_, v_i_1796_);
v___x_1801_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(v___x_1794_, v___x_1800_, v_b_1798_);
v___x_1802_ = ((size_t)1ULL);
v___x_1803_ = lean_usize_add(v_i_1796_, v___x_1802_);
v_i_1796_ = v___x_1803_;
v_b_1798_ = v___x_1801_;
goto _start;
}
else
{
return v_b_1798_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v___x_1805_, lean_object* v_as_1806_, lean_object* v_i_1807_, lean_object* v_stop_1808_, lean_object* v_b_1809_){
_start:
{
size_t v_i_boxed_1810_; size_t v_stop_boxed_1811_; lean_object* v_res_1812_; 
v_i_boxed_1810_ = lean_unbox_usize(v_i_1807_);
lean_dec(v_i_1807_);
v_stop_boxed_1811_ = lean_unbox_usize(v_stop_1808_);
lean_dec(v_stop_1808_);
v_res_1812_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v___x_1805_, v_as_1806_, v_i_boxed_1810_, v_stop_boxed_1811_, v_b_1809_);
lean_dec_ref(v_as_1806_);
lean_dec_ref(v___x_1805_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2___boxed(lean_object* v___x_1813_, lean_object* v_x_1814_, lean_object* v_x_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(v___x_1813_, v_x_1814_, v_x_1815_);
lean_dec_ref(v_x_1814_);
lean_dec_ref(v___x_1813_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(lean_object* v___x_1817_, lean_object* v_x_1818_, size_t v_x_1819_, size_t v_x_1820_, lean_object* v_x_1821_){
_start:
{
if (lean_obj_tag(v_x_1818_) == 0)
{
lean_object* v_cs_1822_; lean_object* v___x_1823_; size_t v___x_1824_; lean_object* v_j_1825_; lean_object* v___x_1826_; size_t v___x_1827_; size_t v___x_1828_; size_t v___x_1829_; size_t v___x_1830_; size_t v___x_1831_; size_t v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; uint8_t v___x_1837_; 
v_cs_1822_ = lean_ctor_get(v_x_1818_, 0);
v___x_1823_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_erase_spec__0_spec__0___closed__0);
v___x_1824_ = lean_usize_shift_right(v_x_1819_, v_x_1820_);
v_j_1825_ = lean_usize_to_nat(v___x_1824_);
v___x_1826_ = lean_array_get_borrowed(v___x_1823_, v_cs_1822_, v_j_1825_);
v___x_1827_ = ((size_t)1ULL);
v___x_1828_ = lean_usize_shift_left(v___x_1827_, v_x_1820_);
v___x_1829_ = lean_usize_sub(v___x_1828_, v___x_1827_);
v___x_1830_ = lean_usize_land(v_x_1819_, v___x_1829_);
v___x_1831_ = ((size_t)5ULL);
v___x_1832_ = lean_usize_sub(v_x_1820_, v___x_1831_);
v___x_1833_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(v___x_1817_, v___x_1826_, v___x_1830_, v___x_1832_, v_x_1821_);
v___x_1834_ = lean_unsigned_to_nat(1u);
v___x_1835_ = lean_nat_add(v_j_1825_, v___x_1834_);
lean_dec(v_j_1825_);
v___x_1836_ = lean_array_get_size(v_cs_1822_);
v___x_1837_ = lean_nat_dec_lt(v___x_1835_, v___x_1836_);
if (v___x_1837_ == 0)
{
lean_dec(v___x_1835_);
return v___x_1833_;
}
else
{
uint8_t v___x_1838_; 
v___x_1838_ = lean_nat_dec_le(v___x_1836_, v___x_1836_);
if (v___x_1838_ == 0)
{
if (v___x_1837_ == 0)
{
lean_dec(v___x_1835_);
return v___x_1833_;
}
else
{
size_t v___x_1839_; size_t v___x_1840_; lean_object* v___x_1841_; 
v___x_1839_ = lean_usize_of_nat(v___x_1835_);
lean_dec(v___x_1835_);
v___x_1840_ = lean_usize_of_nat(v___x_1836_);
v___x_1841_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v___x_1817_, v_cs_1822_, v___x_1839_, v___x_1840_, v___x_1833_);
return v___x_1841_;
}
}
else
{
size_t v___x_1842_; size_t v___x_1843_; lean_object* v___x_1844_; 
v___x_1842_ = lean_usize_of_nat(v___x_1835_);
lean_dec(v___x_1835_);
v___x_1843_ = lean_usize_of_nat(v___x_1836_);
v___x_1844_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0_spec__1(v___x_1817_, v_cs_1822_, v___x_1842_, v___x_1843_, v___x_1833_);
return v___x_1844_;
}
}
}
else
{
lean_object* v_vs_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; uint8_t v___x_1848_; 
v_vs_1845_ = lean_ctor_get(v_x_1818_, 0);
v___x_1846_ = lean_usize_to_nat(v_x_1819_);
v___x_1847_ = lean_array_get_size(v_vs_1845_);
v___x_1848_ = lean_nat_dec_lt(v___x_1846_, v___x_1847_);
if (v___x_1848_ == 0)
{
lean_dec(v___x_1846_);
return v_x_1821_;
}
else
{
uint8_t v___x_1849_; 
v___x_1849_ = lean_nat_dec_le(v___x_1847_, v___x_1847_);
if (v___x_1849_ == 0)
{
if (v___x_1848_ == 0)
{
lean_dec(v___x_1846_);
return v_x_1821_;
}
else
{
size_t v___x_1850_; size_t v___x_1851_; lean_object* v___x_1852_; 
v___x_1850_ = lean_usize_of_nat(v___x_1846_);
lean_dec(v___x_1846_);
v___x_1851_ = lean_usize_of_nat(v___x_1847_);
v___x_1852_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1817_, v_vs_1845_, v___x_1850_, v___x_1851_, v_x_1821_);
return v___x_1852_;
}
}
else
{
size_t v___x_1853_; size_t v___x_1854_; lean_object* v___x_1855_; 
v___x_1853_ = lean_usize_of_nat(v___x_1846_);
lean_dec(v___x_1846_);
v___x_1854_ = lean_usize_of_nat(v___x_1847_);
v___x_1855_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1817_, v_vs_1845_, v___x_1853_, v___x_1854_, v_x_1821_);
return v___x_1855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0___boxed(lean_object* v___x_1856_, lean_object* v_x_1857_, lean_object* v_x_1858_, lean_object* v_x_1859_, lean_object* v_x_1860_){
_start:
{
size_t v_x_21627__boxed_1861_; size_t v_x_21628__boxed_1862_; lean_object* v_res_1863_; 
v_x_21627__boxed_1861_ = lean_unbox_usize(v_x_1858_);
lean_dec(v_x_1858_);
v_x_21628__boxed_1862_ = lean_unbox_usize(v_x_1859_);
lean_dec(v_x_1859_);
v_res_1863_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(v___x_1856_, v_x_1857_, v_x_21627__boxed_1861_, v_x_21628__boxed_1862_, v_x_1860_);
lean_dec_ref(v_x_1857_);
lean_dec_ref(v___x_1856_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(lean_object* v___x_1864_, lean_object* v_t_1865_, lean_object* v_init_1866_, lean_object* v_start_1867_){
_start:
{
lean_object* v___x_1868_; uint8_t v___x_1869_; 
v___x_1868_ = lean_unsigned_to_nat(0u);
v___x_1869_ = lean_nat_dec_eq(v_start_1867_, v___x_1868_);
if (v___x_1869_ == 0)
{
lean_object* v_root_1870_; lean_object* v_tail_1871_; size_t v_shift_1872_; lean_object* v_tailOff_1873_; uint8_t v___x_1874_; 
v_root_1870_ = lean_ctor_get(v_t_1865_, 0);
v_tail_1871_ = lean_ctor_get(v_t_1865_, 1);
v_shift_1872_ = lean_ctor_get_usize(v_t_1865_, 4);
v_tailOff_1873_ = lean_ctor_get(v_t_1865_, 3);
v___x_1874_ = lean_nat_dec_le(v_tailOff_1873_, v_start_1867_);
if (v___x_1874_ == 0)
{
size_t v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; uint8_t v___x_1878_; 
v___x_1875_ = lean_usize_of_nat(v_start_1867_);
v___x_1876_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__0(v___x_1864_, v_root_1870_, v___x_1875_, v_shift_1872_, v_init_1866_);
v___x_1877_ = lean_array_get_size(v_tail_1871_);
v___x_1878_ = lean_nat_dec_lt(v___x_1868_, v___x_1877_);
if (v___x_1878_ == 0)
{
return v___x_1876_;
}
else
{
uint8_t v___x_1879_; 
v___x_1879_ = lean_nat_dec_le(v___x_1877_, v___x_1877_);
if (v___x_1879_ == 0)
{
if (v___x_1878_ == 0)
{
return v___x_1876_;
}
else
{
size_t v___x_1880_; size_t v___x_1881_; lean_object* v___x_1882_; 
v___x_1880_ = ((size_t)0ULL);
v___x_1881_ = lean_usize_of_nat(v___x_1877_);
v___x_1882_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1864_, v_tail_1871_, v___x_1880_, v___x_1881_, v___x_1876_);
return v___x_1882_;
}
}
else
{
size_t v___x_1883_; size_t v___x_1884_; lean_object* v___x_1885_; 
v___x_1883_ = ((size_t)0ULL);
v___x_1884_ = lean_usize_of_nat(v___x_1877_);
v___x_1885_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1864_, v_tail_1871_, v___x_1883_, v___x_1884_, v___x_1876_);
return v___x_1885_;
}
}
}
else
{
lean_object* v___x_1886_; lean_object* v___x_1887_; uint8_t v___x_1888_; 
v___x_1886_ = lean_nat_sub(v_start_1867_, v_tailOff_1873_);
v___x_1887_ = lean_array_get_size(v_tail_1871_);
v___x_1888_ = lean_nat_dec_lt(v___x_1886_, v___x_1887_);
if (v___x_1888_ == 0)
{
lean_dec(v___x_1886_);
return v_init_1866_;
}
else
{
uint8_t v___x_1889_; 
v___x_1889_ = lean_nat_dec_le(v___x_1887_, v___x_1887_);
if (v___x_1889_ == 0)
{
if (v___x_1888_ == 0)
{
lean_dec(v___x_1886_);
return v_init_1866_;
}
else
{
size_t v___x_1890_; size_t v___x_1891_; lean_object* v___x_1892_; 
v___x_1890_ = lean_usize_of_nat(v___x_1886_);
lean_dec(v___x_1886_);
v___x_1891_ = lean_usize_of_nat(v___x_1887_);
v___x_1892_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1864_, v_tail_1871_, v___x_1890_, v___x_1891_, v_init_1866_);
return v___x_1892_;
}
}
else
{
size_t v___x_1893_; size_t v___x_1894_; lean_object* v___x_1895_; 
v___x_1893_ = lean_usize_of_nat(v___x_1886_);
lean_dec(v___x_1886_);
v___x_1894_ = lean_usize_of_nat(v___x_1887_);
v___x_1895_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1864_, v_tail_1871_, v___x_1893_, v___x_1894_, v_init_1866_);
return v___x_1895_;
}
}
}
}
else
{
lean_object* v_root_1896_; lean_object* v_tail_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; uint8_t v___x_1900_; 
v_root_1896_ = lean_ctor_get(v_t_1865_, 0);
v_tail_1897_ = lean_ctor_get(v_t_1865_, 1);
v___x_1898_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__2(v___x_1864_, v_root_1896_, v_init_1866_);
v___x_1899_ = lean_array_get_size(v_tail_1897_);
v___x_1900_ = lean_nat_dec_lt(v___x_1868_, v___x_1899_);
if (v___x_1900_ == 0)
{
return v___x_1898_;
}
else
{
uint8_t v___x_1901_; 
v___x_1901_ = lean_nat_dec_le(v___x_1899_, v___x_1899_);
if (v___x_1901_ == 0)
{
if (v___x_1900_ == 0)
{
return v___x_1898_;
}
else
{
size_t v___x_1902_; size_t v___x_1903_; lean_object* v___x_1904_; 
v___x_1902_ = ((size_t)0ULL);
v___x_1903_ = lean_usize_of_nat(v___x_1899_);
v___x_1904_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1864_, v_tail_1897_, v___x_1902_, v___x_1903_, v___x_1898_);
return v___x_1904_;
}
}
else
{
size_t v___x_1905_; size_t v___x_1906_; lean_object* v___x_1907_; 
v___x_1905_ = ((size_t)0ULL);
v___x_1906_ = lean_usize_of_nat(v___x_1899_);
v___x_1907_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0_spec__1(v___x_1864_, v_tail_1897_, v___x_1905_, v___x_1906_, v___x_1898_);
return v___x_1907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0___boxed(lean_object* v___x_1908_, lean_object* v_t_1909_, lean_object* v_init_1910_, lean_object* v_start_1911_){
_start:
{
lean_object* v_res_1912_; 
v_res_1912_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(v___x_1908_, v_t_1909_, v_init_1910_, v_start_1911_);
lean_dec(v_start_1911_);
lean_dec_ref(v_t_1909_);
lean_dec_ref(v___x_1908_);
return v_res_1912_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1913_ = lean_unsigned_to_nat(32u);
v___x_1914_ = lean_mk_empty_array_with_capacity(v___x_1913_);
v___x_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1914_);
return v___x_1915_;
}
}
static lean_object* _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1(void){
_start:
{
size_t v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1916_ = ((size_t)5ULL);
v___x_1917_ = lean_unsigned_to_nat(0u);
v___x_1918_ = lean_unsigned_to_nat(32u);
v___x_1919_ = lean_mk_empty_array_with_capacity(v___x_1918_);
v___x_1920_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__0);
v___x_1921_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1921_, 0, v___x_1920_);
lean_ctor_set(v___x_1921_, 1, v___x_1919_);
lean_ctor_set(v___x_1921_, 2, v___x_1917_);
lean_ctor_set(v___x_1921_, 3, v___x_1917_);
lean_ctor_set_usize(v___x_1921_, 4, v___x_1916_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(lean_object* v___x_1922_, lean_object* v_x_1923_, size_t v_x_1924_, size_t v_x_1925_){
_start:
{
if (lean_obj_tag(v_x_1923_) == 0)
{
lean_object* v_cs_1926_; size_t v_j_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; uint8_t v___x_1930_; 
v_cs_1926_ = lean_ctor_get(v_x_1923_, 0);
v_j_1927_ = lean_usize_shift_right(v_x_1924_, v_x_1925_);
v___x_1928_ = lean_usize_to_nat(v_j_1927_);
v___x_1929_ = lean_array_get_size(v_cs_1926_);
v___x_1930_ = lean_nat_dec_lt(v___x_1928_, v___x_1929_);
if (v___x_1930_ == 0)
{
lean_dec(v___x_1928_);
return v_x_1923_;
}
else
{
lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1948_; 
lean_inc_ref(v_cs_1926_);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_x_1923_);
if (v_isSharedCheck_1948_ == 0)
{
lean_object* v_unused_1949_; 
v_unused_1949_ = lean_ctor_get(v_x_1923_, 0);
lean_dec(v_unused_1949_);
v___x_1932_ = v_x_1923_;
v_isShared_1933_ = v_isSharedCheck_1948_;
goto v_resetjp_1931_;
}
else
{
lean_dec(v_x_1923_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1948_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
size_t v___x_1934_; size_t v___x_1935_; size_t v___x_1936_; size_t v_i_1937_; size_t v___x_1938_; size_t v_shift_1939_; lean_object* v_v_1940_; lean_object* v___x_1941_; lean_object* v_xs_x27_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1946_; 
v___x_1934_ = ((size_t)1ULL);
v___x_1935_ = lean_usize_shift_left(v___x_1934_, v_x_1925_);
v___x_1936_ = lean_usize_sub(v___x_1935_, v___x_1934_);
v_i_1937_ = lean_usize_land(v_x_1924_, v___x_1936_);
v___x_1938_ = ((size_t)5ULL);
v_shift_1939_ = lean_usize_sub(v_x_1925_, v___x_1938_);
v_v_1940_ = lean_array_fget(v_cs_1926_, v___x_1928_);
v___x_1941_ = lean_box(0);
v_xs_x27_1942_ = lean_array_fset(v_cs_1926_, v___x_1928_, v___x_1941_);
v___x_1943_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(v___x_1922_, v_v_1940_, v_i_1937_, v_shift_1939_);
v___x_1944_ = lean_array_fset(v_xs_x27_1942_, v___x_1928_, v___x_1943_);
lean_dec(v___x_1928_);
if (v_isShared_1933_ == 0)
{
lean_ctor_set(v___x_1932_, 0, v___x_1944_);
v___x_1946_ = v___x_1932_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1944_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
else
{
lean_object* v_vs_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; uint8_t v___x_1953_; 
v_vs_1950_ = lean_ctor_get(v_x_1923_, 0);
v___x_1951_ = lean_usize_to_nat(v_x_1924_);
v___x_1952_ = lean_array_get_size(v_vs_1950_);
v___x_1953_ = lean_nat_dec_lt(v___x_1951_, v___x_1952_);
if (v___x_1953_ == 0)
{
lean_dec(v___x_1951_);
return v_x_1923_;
}
else
{
lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1967_; 
lean_inc_ref(v_vs_1950_);
v_isSharedCheck_1967_ = !lean_is_exclusive(v_x_1923_);
if (v_isSharedCheck_1967_ == 0)
{
lean_object* v_unused_1968_; 
v_unused_1968_ = lean_ctor_get(v_x_1923_, 0);
lean_dec(v_unused_1968_);
v___x_1955_ = v_x_1923_;
v_isShared_1956_ = v_isSharedCheck_1967_;
goto v_resetjp_1954_;
}
else
{
lean_dec(v_x_1923_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1967_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v_v_1957_; lean_object* v___x_1958_; lean_object* v_xs_x27_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1965_; 
v_v_1957_ = lean_array_fget(v_vs_1950_, v___x_1951_);
v___x_1958_ = lean_box(0);
v_xs_x27_1959_ = lean_array_fset(v_vs_1950_, v___x_1951_, v___x_1958_);
v___x_1960_ = lean_unsigned_to_nat(0u);
v___x_1961_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1);
v___x_1962_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(v___x_1922_, v_v_1957_, v___x_1961_, v___x_1960_);
lean_dec(v_v_1957_);
v___x_1963_ = lean_array_fset(v_xs_x27_1959_, v___x_1951_, v___x_1962_);
lean_dec(v___x_1951_);
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 0, v___x_1963_);
v___x_1965_ = v___x_1955_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
return v___x_1965_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___boxed(lean_object* v___x_1969_, lean_object* v_x_1970_, lean_object* v_x_1971_, lean_object* v_x_1972_){
_start:
{
size_t v_x_21799__boxed_1973_; size_t v_x_21800__boxed_1974_; lean_object* v_res_1975_; 
v_x_21799__boxed_1973_ = lean_unbox_usize(v_x_1971_);
lean_dec(v_x_1971_);
v_x_21800__boxed_1974_ = lean_unbox_usize(v_x_1972_);
lean_dec(v_x_1972_);
v_res_1975_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(v___x_1969_, v_x_1970_, v_x_21799__boxed_1973_, v_x_21800__boxed_1974_);
lean_dec_ref(v___x_1969_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(lean_object* v___x_1976_, lean_object* v_t_1977_, lean_object* v_i_1978_){
_start:
{
lean_object* v_root_1979_; lean_object* v_tail_1980_; lean_object* v_size_1981_; size_t v_shift_1982_; lean_object* v_tailOff_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_2011_; 
v_root_1979_ = lean_ctor_get(v_t_1977_, 0);
v_tail_1980_ = lean_ctor_get(v_t_1977_, 1);
v_size_1981_ = lean_ctor_get(v_t_1977_, 2);
v_shift_1982_ = lean_ctor_get_usize(v_t_1977_, 4);
v_tailOff_1983_ = lean_ctor_get(v_t_1977_, 3);
v_isSharedCheck_2011_ = !lean_is_exclusive(v_t_1977_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_1985_ = v_t_1977_;
v_isShared_1986_ = v_isSharedCheck_2011_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_tailOff_1983_);
lean_inc(v_size_1981_);
lean_inc(v_tail_1980_);
lean_inc(v_root_1979_);
lean_dec(v_t_1977_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_2011_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
uint8_t v___x_1987_; 
v___x_1987_ = lean_nat_dec_le(v_tailOff_1983_, v_i_1978_);
if (v___x_1987_ == 0)
{
size_t v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1991_; 
v___x_1988_ = lean_usize_of_nat(v_i_1978_);
v___x_1989_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4(v___x_1976_, v_root_1979_, v___x_1988_, v_shift_1982_);
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 0, v___x_1989_);
v___x_1991_ = v___x_1985_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v___x_1989_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_tail_1980_);
lean_ctor_set(v_reuseFailAlloc_1992_, 2, v_size_1981_);
lean_ctor_set(v_reuseFailAlloc_1992_, 3, v_tailOff_1983_);
lean_ctor_set_usize(v_reuseFailAlloc_1992_, 4, v_shift_1982_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
else
{
lean_object* v___x_1993_; lean_object* v___x_1994_; uint8_t v___x_1995_; 
v___x_1993_ = lean_nat_sub(v_i_1978_, v_tailOff_1983_);
v___x_1994_ = lean_array_get_size(v_tail_1980_);
v___x_1995_ = lean_nat_dec_lt(v___x_1993_, v___x_1994_);
if (v___x_1995_ == 0)
{
lean_object* v___x_1997_; 
lean_dec(v___x_1993_);
if (v_isShared_1986_ == 0)
{
v___x_1997_ = v___x_1985_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_root_1979_);
lean_ctor_set(v_reuseFailAlloc_1998_, 1, v_tail_1980_);
lean_ctor_set(v_reuseFailAlloc_1998_, 2, v_size_1981_);
lean_ctor_set(v_reuseFailAlloc_1998_, 3, v_tailOff_1983_);
lean_ctor_set_usize(v_reuseFailAlloc_1998_, 4, v_shift_1982_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
else
{
lean_object* v_v_1999_; lean_object* v___x_2000_; lean_object* v_xs_x27_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2009_; 
v_v_1999_ = lean_array_fget(v_tail_1980_, v___x_1993_);
v___x_2000_ = lean_box(0);
v_xs_x27_2001_ = lean_array_fset(v_tail_1980_, v___x_1993_, v___x_2000_);
v___x_2002_ = lean_unsigned_to_nat(32u);
v___x_2003_ = lean_mk_empty_array_with_capacity(v___x_2002_);
lean_dec_ref(v___x_2003_);
v___x_2004_ = lean_unsigned_to_nat(0u);
v___x_2005_ = lean_obj_once(&l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1, &l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1_once, _init_l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1_spec__4___closed__1);
v___x_2006_ = l_Lean_PersistentArray_foldlM___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__0(v___x_1976_, v_v_1999_, v___x_2005_, v___x_2004_);
lean_dec(v_v_1999_);
v___x_2007_ = lean_array_fset(v_xs_x27_2001_, v___x_1993_, v___x_2006_);
lean_dec(v___x_1993_);
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 1, v___x_2007_);
v___x_2009_ = v___x_1985_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_root_1979_);
lean_ctor_set(v_reuseFailAlloc_2010_, 1, v___x_2007_);
lean_ctor_set(v_reuseFailAlloc_2010_, 2, v_size_1981_);
lean_ctor_set(v_reuseFailAlloc_2010_, 3, v_tailOff_1983_);
lean_ctor_set_usize(v_reuseFailAlloc_2010_, 4, v_shift_1982_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1___boxed(lean_object* v___x_2012_, lean_object* v_t_2013_, lean_object* v_i_2014_){
_start:
{
lean_object* v_res_2015_; 
v_res_2015_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(v___x_2012_, v_t_2013_, v_i_2014_);
lean_dec(v_i_2014_);
lean_dec_ref(v___x_2012_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0(lean_object* v_p_2016_, lean_object* v_x_2017_, lean_object* v_s_2018_){
_start:
{
lean_object* v_vars_2019_; lean_object* v_varMap_2020_; lean_object* v_vars_x27_2021_; lean_object* v_varMap_x27_2022_; lean_object* v_natToIntMap_2023_; lean_object* v_natDef_2024_; lean_object* v_dvds_2025_; lean_object* v_lowers_2026_; lean_object* v_uppers_2027_; lean_object* v_diseqs_2028_; lean_object* v_elimEqs_2029_; lean_object* v_elimStack_2030_; lean_object* v_occurs_2031_; lean_object* v_assignment_2032_; lean_object* v_nextCnstrId_2033_; uint8_t v_caseSplits_2034_; lean_object* v_conflict_x3f_2035_; lean_object* v_diseqSplits_2036_; lean_object* v_divMod_2037_; lean_object* v_toIntIds_2038_; lean_object* v_toIntInfos_2039_; lean_object* v_toIntTermMap_2040_; lean_object* v_toIntVarMap_2041_; uint8_t v_usedCommRing_2042_; lean_object* v_nonlinearOccs_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2051_; 
v_vars_2019_ = lean_ctor_get(v_s_2018_, 0);
v_varMap_2020_ = lean_ctor_get(v_s_2018_, 1);
v_vars_x27_2021_ = lean_ctor_get(v_s_2018_, 2);
v_varMap_x27_2022_ = lean_ctor_get(v_s_2018_, 3);
v_natToIntMap_2023_ = lean_ctor_get(v_s_2018_, 4);
v_natDef_2024_ = lean_ctor_get(v_s_2018_, 5);
v_dvds_2025_ = lean_ctor_get(v_s_2018_, 6);
v_lowers_2026_ = lean_ctor_get(v_s_2018_, 7);
v_uppers_2027_ = lean_ctor_get(v_s_2018_, 8);
v_diseqs_2028_ = lean_ctor_get(v_s_2018_, 9);
v_elimEqs_2029_ = lean_ctor_get(v_s_2018_, 10);
v_elimStack_2030_ = lean_ctor_get(v_s_2018_, 11);
v_occurs_2031_ = lean_ctor_get(v_s_2018_, 12);
v_assignment_2032_ = lean_ctor_get(v_s_2018_, 13);
v_nextCnstrId_2033_ = lean_ctor_get(v_s_2018_, 14);
v_caseSplits_2034_ = lean_ctor_get_uint8(v_s_2018_, sizeof(void*)*23);
v_conflict_x3f_2035_ = lean_ctor_get(v_s_2018_, 15);
v_diseqSplits_2036_ = lean_ctor_get(v_s_2018_, 16);
v_divMod_2037_ = lean_ctor_get(v_s_2018_, 17);
v_toIntIds_2038_ = lean_ctor_get(v_s_2018_, 18);
v_toIntInfos_2039_ = lean_ctor_get(v_s_2018_, 19);
v_toIntTermMap_2040_ = lean_ctor_get(v_s_2018_, 20);
v_toIntVarMap_2041_ = lean_ctor_get(v_s_2018_, 21);
v_usedCommRing_2042_ = lean_ctor_get_uint8(v_s_2018_, sizeof(void*)*23 + 1);
v_nonlinearOccs_2043_ = lean_ctor_get(v_s_2018_, 22);
v_isSharedCheck_2051_ = !lean_is_exclusive(v_s_2018_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2045_ = v_s_2018_;
v_isShared_2046_ = v_isSharedCheck_2051_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_nonlinearOccs_2043_);
lean_inc(v_toIntVarMap_2041_);
lean_inc(v_toIntTermMap_2040_);
lean_inc(v_toIntInfos_2039_);
lean_inc(v_toIntIds_2038_);
lean_inc(v_divMod_2037_);
lean_inc(v_diseqSplits_2036_);
lean_inc(v_conflict_x3f_2035_);
lean_inc(v_nextCnstrId_2033_);
lean_inc(v_assignment_2032_);
lean_inc(v_occurs_2031_);
lean_inc(v_elimStack_2030_);
lean_inc(v_elimEqs_2029_);
lean_inc(v_diseqs_2028_);
lean_inc(v_uppers_2027_);
lean_inc(v_lowers_2026_);
lean_inc(v_dvds_2025_);
lean_inc(v_natDef_2024_);
lean_inc(v_natToIntMap_2023_);
lean_inc(v_varMap_x27_2022_);
lean_inc(v_vars_x27_2021_);
lean_inc(v_varMap_2020_);
lean_inc(v_vars_2019_);
lean_dec(v_s_2018_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2051_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2047_; lean_object* v___x_2049_; 
v___x_2047_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__1(v_p_2016_, v_diseqs_2028_, v_x_2017_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 9, v___x_2047_);
v___x_2049_ = v___x_2045_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(0, 23, 2);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_vars_2019_);
lean_ctor_set(v_reuseFailAlloc_2050_, 1, v_varMap_2020_);
lean_ctor_set(v_reuseFailAlloc_2050_, 2, v_vars_x27_2021_);
lean_ctor_set(v_reuseFailAlloc_2050_, 3, v_varMap_x27_2022_);
lean_ctor_set(v_reuseFailAlloc_2050_, 4, v_natToIntMap_2023_);
lean_ctor_set(v_reuseFailAlloc_2050_, 5, v_natDef_2024_);
lean_ctor_set(v_reuseFailAlloc_2050_, 6, v_dvds_2025_);
lean_ctor_set(v_reuseFailAlloc_2050_, 7, v_lowers_2026_);
lean_ctor_set(v_reuseFailAlloc_2050_, 8, v_uppers_2027_);
lean_ctor_set(v_reuseFailAlloc_2050_, 9, v___x_2047_);
lean_ctor_set(v_reuseFailAlloc_2050_, 10, v_elimEqs_2029_);
lean_ctor_set(v_reuseFailAlloc_2050_, 11, v_elimStack_2030_);
lean_ctor_set(v_reuseFailAlloc_2050_, 12, v_occurs_2031_);
lean_ctor_set(v_reuseFailAlloc_2050_, 13, v_assignment_2032_);
lean_ctor_set(v_reuseFailAlloc_2050_, 14, v_nextCnstrId_2033_);
lean_ctor_set(v_reuseFailAlloc_2050_, 15, v_conflict_x3f_2035_);
lean_ctor_set(v_reuseFailAlloc_2050_, 16, v_diseqSplits_2036_);
lean_ctor_set(v_reuseFailAlloc_2050_, 17, v_divMod_2037_);
lean_ctor_set(v_reuseFailAlloc_2050_, 18, v_toIntIds_2038_);
lean_ctor_set(v_reuseFailAlloc_2050_, 19, v_toIntInfos_2039_);
lean_ctor_set(v_reuseFailAlloc_2050_, 20, v_toIntTermMap_2040_);
lean_ctor_set(v_reuseFailAlloc_2050_, 21, v_toIntVarMap_2041_);
lean_ctor_set(v_reuseFailAlloc_2050_, 22, v_nonlinearOccs_2043_);
lean_ctor_set_uint8(v_reuseFailAlloc_2050_, sizeof(void*)*23, v_caseSplits_2034_);
lean_ctor_set_uint8(v_reuseFailAlloc_2050_, sizeof(void*)*23 + 1, v_usedCommRing_2042_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed(lean_object* v_p_2052_, lean_object* v_x_2053_, lean_object* v_s_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0(v_p_2052_, v_x_2053_, v_s_2054_);
lean_dec(v_x_2053_);
lean_dec_ref(v_p_2052_);
return v_res_2055_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2062_ = lean_unsigned_to_nat(1u);
v___x_2063_ = lean_nat_to_int(v___x_2062_);
return v___x_2063_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(lean_object* v_c_2064_, lean_object* v_x_2065_, lean_object* v_as_2066_, size_t v_sz_2067_, size_t v_i_2068_, lean_object* v_b_2069_, lean_object* v___y_2070_){
_start:
{
uint8_t v___x_2072_; 
v___x_2072_ = lean_usize_dec_lt(v_i_2068_, v_sz_2067_);
if (v___x_2072_ == 0)
{
lean_object* v___x_2073_; 
lean_dec(v_x_2065_);
lean_dec_ref(v_c_2064_);
v___x_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2073_, 0, v_b_2069_);
return v___x_2073_;
}
else
{
lean_object* v_snd_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2120_; 
v_snd_2074_ = lean_ctor_get(v_b_2069_, 1);
v_isSharedCheck_2120_ = !lean_is_exclusive(v_b_2069_);
if (v_isSharedCheck_2120_ == 0)
{
lean_object* v_unused_2121_; 
v_unused_2121_ = lean_ctor_get(v_b_2069_, 0);
lean_dec(v_unused_2121_);
v___x_2076_ = v_b_2069_;
v_isShared_2077_ = v_isSharedCheck_2120_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_snd_2074_);
lean_dec(v_b_2069_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2120_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v_p_2078_; lean_object* v_a_2079_; lean_object* v_p_2080_; lean_object* v___x_2081_; lean_object* v___f_2082_; uint8_t v___y_2084_; uint8_t v___x_2118_; 
v_p_2078_ = lean_ctor_get(v_c_2064_, 0);
v_a_2079_ = lean_array_uget_borrowed(v_as_2066_, v_i_2068_);
v_p_2080_ = lean_ctor_get(v_a_2079_, 0);
v___x_2081_ = lean_box(0);
lean_inc(v_x_2065_);
lean_inc_ref(v_p_2080_);
v___f_2082_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2082_, 0, v_p_2080_);
lean_closure_set(v___f_2082_, 1, v_x_2065_);
v___x_2118_ = l_Int_Linear_instBEqPoly_beq(v_p_2078_, v_p_2080_);
if (v___x_2118_ == 0)
{
uint8_t v___x_2119_; 
v___x_2119_ = l_Int_Linear_Poly_isNegEq(v_p_2078_, v_p_2080_);
v___y_2084_ = v___x_2119_;
goto v___jp_2083_;
}
else
{
v___y_2084_ = v___x_2118_;
goto v___jp_2083_;
}
v___jp_2083_:
{
if (v___y_2084_ == 0)
{
lean_object* v___x_2085_; size_t v___x_2086_; size_t v___x_2087_; 
lean_dec_ref(v___f_2082_);
lean_del_object(v___x_2076_);
lean_dec(v_snd_2074_);
v___x_2085_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__1));
v___x_2086_ = ((size_t)1ULL);
v___x_2087_ = lean_usize_add(v_i_2068_, v___x_2086_);
v_i_2068_ = v___x_2087_;
v_b_2069_ = v___x_2085_;
goto _start;
}
else
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
lean_dec(v_x_2065_);
v___x_2089_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2090_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2089_, v___f_2082_, v___y_2070_);
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2108_; 
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2108_ == 0)
{
lean_object* v_unused_2109_; 
v_unused_2109_ = lean_ctor_get(v___x_2090_, 0);
lean_dec(v_unused_2109_);
v___x_2092_ = v___x_2090_;
v_isShared_2093_ = v_isSharedCheck_2108_;
goto v_resetjp_2091_;
}
else
{
lean_dec(v___x_2090_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2108_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2101_; 
v___x_2094_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
lean_inc_ref(v_p_2078_);
v___x_2095_ = l_Int_Linear_Poly_addConst(v_p_2078_, v___x_2094_);
lean_inc(v_a_2079_);
v___x_2096_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2096_, 0, v_c_2064_);
lean_ctor_set(v___x_2096_, 1, v_a_2079_);
v___x_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2097_, 0, v___x_2095_);
lean_ctor_set(v___x_2097_, 1, v___x_2096_);
v___x_2098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
v___x_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 1, v___x_2081_);
lean_ctor_set(v___x_2076_, 0, v___x_2099_);
v___x_2101_ = v___x_2076_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v___x_2099_);
lean_ctor_set(v_reuseFailAlloc_2107_, 1, v___x_2081_);
v___x_2101_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2105_; 
v___x_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2101_);
v___x_2103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2102_);
lean_ctor_set(v___x_2103_, 1, v_snd_2074_);
if (v_isShared_2093_ == 0)
{
lean_ctor_set(v___x_2092_, 0, v___x_2103_);
v___x_2105_ = v___x_2092_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2106_; 
v_reuseFailAlloc_2106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2106_, 0, v___x_2103_);
v___x_2105_ = v_reuseFailAlloc_2106_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
return v___x_2105_;
}
}
}
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
lean_del_object(v___x_2076_);
lean_dec(v_snd_2074_);
lean_dec_ref(v_c_2064_);
v_a_2110_ = lean_ctor_get(v___x_2090_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v___x_2090_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2090_);
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
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___boxed(lean_object* v_c_2122_, lean_object* v_x_2123_, lean_object* v_as_2124_, lean_object* v_sz_2125_, lean_object* v_i_2126_, lean_object* v_b_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
size_t v_sz_boxed_2130_; size_t v_i_boxed_2131_; lean_object* v_res_2132_; 
v_sz_boxed_2130_ = lean_unbox_usize(v_sz_2125_);
lean_dec(v_sz_2125_);
v_i_boxed_2131_ = lean_unbox_usize(v_i_2126_);
lean_dec(v_i_2126_);
v_res_2132_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(v_c_2122_, v_x_2123_, v_as_2124_, v_sz_boxed_2130_, v_i_boxed_2131_, v_b_2127_, v___y_2128_);
lean_dec(v___y_2128_);
lean_dec_ref(v_as_2124_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(lean_object* v_c_2139_, lean_object* v_x_2140_, lean_object* v_as_2141_, size_t v_sz_2142_, size_t v_i_2143_, lean_object* v_b_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_){
_start:
{
uint8_t v___x_2156_; 
v___x_2156_ = lean_usize_dec_lt(v_i_2143_, v_sz_2142_);
if (v___x_2156_ == 0)
{
lean_object* v___x_2157_; 
lean_dec(v_x_2140_);
lean_dec_ref(v_c_2139_);
v___x_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2157_, 0, v_b_2144_);
return v___x_2157_;
}
else
{
lean_object* v_snd_2158_; lean_object* v___x_2160_; uint8_t v_isShared_2161_; uint8_t v_isSharedCheck_2204_; 
v_snd_2158_ = lean_ctor_get(v_b_2144_, 1);
v_isSharedCheck_2204_ = !lean_is_exclusive(v_b_2144_);
if (v_isSharedCheck_2204_ == 0)
{
lean_object* v_unused_2205_; 
v_unused_2205_ = lean_ctor_get(v_b_2144_, 0);
lean_dec(v_unused_2205_);
v___x_2160_ = v_b_2144_;
v_isShared_2161_ = v_isSharedCheck_2204_;
goto v_resetjp_2159_;
}
else
{
lean_inc(v_snd_2158_);
lean_dec(v_b_2144_);
v___x_2160_ = lean_box(0);
v_isShared_2161_ = v_isSharedCheck_2204_;
goto v_resetjp_2159_;
}
v_resetjp_2159_:
{
lean_object* v_p_2162_; lean_object* v_a_2163_; lean_object* v_p_2164_; lean_object* v___x_2165_; lean_object* v___f_2166_; uint8_t v___y_2168_; uint8_t v___x_2202_; 
v_p_2162_ = lean_ctor_get(v_c_2139_, 0);
v_a_2163_ = lean_array_uget_borrowed(v_as_2141_, v_i_2143_);
v_p_2164_ = lean_ctor_get(v_a_2163_, 0);
v___x_2165_ = lean_box(0);
lean_inc(v_x_2140_);
lean_inc_ref(v_p_2164_);
v___f_2166_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2166_, 0, v_p_2164_);
lean_closure_set(v___f_2166_, 1, v_x_2140_);
v___x_2202_ = l_Int_Linear_instBEqPoly_beq(v_p_2162_, v_p_2164_);
if (v___x_2202_ == 0)
{
uint8_t v___x_2203_; 
v___x_2203_ = l_Int_Linear_Poly_isNegEq(v_p_2162_, v_p_2164_);
v___y_2168_ = v___x_2203_;
goto v___jp_2167_;
}
else
{
v___y_2168_ = v___x_2202_;
goto v___jp_2167_;
}
v___jp_2167_:
{
if (v___y_2168_ == 0)
{
lean_object* v___x_2169_; size_t v___x_2170_; size_t v___x_2171_; lean_object* v___x_2172_; 
lean_dec_ref(v___f_2166_);
lean_del_object(v___x_2160_);
lean_dec(v_snd_2158_);
v___x_2169_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__1));
v___x_2170_ = ((size_t)1ULL);
v___x_2171_ = lean_usize_add(v_i_2143_, v___x_2170_);
v___x_2172_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(v_c_2139_, v_x_2140_, v_as_2141_, v_sz_2142_, v___x_2171_, v___x_2169_, v___y_2145_);
return v___x_2172_;
}
else
{
lean_object* v___x_2173_; lean_object* v___x_2174_; 
lean_dec(v_x_2140_);
v___x_2173_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2174_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2173_, v___f_2166_, v___y_2145_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2192_; 
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2192_ == 0)
{
lean_object* v_unused_2193_; 
v_unused_2193_ = lean_ctor_get(v___x_2174_, 0);
lean_dec(v_unused_2193_);
v___x_2176_ = v___x_2174_;
v_isShared_2177_ = v_isSharedCheck_2192_;
goto v_resetjp_2175_;
}
else
{
lean_dec(v___x_2174_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2192_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2185_; 
v___x_2178_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
lean_inc_ref(v_p_2162_);
v___x_2179_ = l_Int_Linear_Poly_addConst(v_p_2162_, v___x_2178_);
lean_inc(v_a_2163_);
v___x_2180_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2180_, 0, v_c_2139_);
lean_ctor_set(v___x_2180_, 1, v_a_2163_);
v___x_2181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2179_);
lean_ctor_set(v___x_2181_, 1, v___x_2180_);
v___x_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
v___x_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2182_);
if (v_isShared_2161_ == 0)
{
lean_ctor_set(v___x_2160_, 1, v___x_2165_);
lean_ctor_set(v___x_2160_, 0, v___x_2183_);
v___x_2185_ = v___x_2160_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v___x_2183_);
lean_ctor_set(v_reuseFailAlloc_2191_, 1, v___x_2165_);
v___x_2185_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2189_; 
v___x_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2185_);
v___x_2187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
lean_ctor_set(v___x_2187_, 1, v_snd_2158_);
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 0, v___x_2187_);
v___x_2189_ = v___x_2176_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v___x_2187_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
else
{
lean_object* v_a_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2201_; 
lean_del_object(v___x_2160_);
lean_dec(v_snd_2158_);
lean_dec_ref(v_c_2139_);
v_a_2194_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2196_ = v___x_2174_;
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_a_2194_);
lean_dec(v___x_2174_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2199_; 
if (v_isShared_2197_ == 0)
{
v___x_2199_ = v___x_2196_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_a_2194_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___boxed(lean_object** _args){
lean_object* v_c_2206_ = _args[0];
lean_object* v_x_2207_ = _args[1];
lean_object* v_as_2208_ = _args[2];
lean_object* v_sz_2209_ = _args[3];
lean_object* v_i_2210_ = _args[4];
lean_object* v_b_2211_ = _args[5];
lean_object* v___y_2212_ = _args[6];
lean_object* v___y_2213_ = _args[7];
lean_object* v___y_2214_ = _args[8];
lean_object* v___y_2215_ = _args[9];
lean_object* v___y_2216_ = _args[10];
lean_object* v___y_2217_ = _args[11];
lean_object* v___y_2218_ = _args[12];
lean_object* v___y_2219_ = _args[13];
lean_object* v___y_2220_ = _args[14];
lean_object* v___y_2221_ = _args[15];
lean_object* v___y_2222_ = _args[16];
_start:
{
size_t v_sz_boxed_2223_; size_t v_i_boxed_2224_; lean_object* v_res_2225_; 
v_sz_boxed_2223_ = lean_unbox_usize(v_sz_2209_);
lean_dec(v_sz_2209_);
v_i_boxed_2224_ = lean_unbox_usize(v_i_2210_);
lean_dec(v_i_2210_);
v_res_2225_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(v_c_2206_, v_x_2207_, v_as_2208_, v_sz_boxed_2223_, v_i_boxed_2224_, v_b_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
lean_dec(v___y_2217_);
lean_dec_ref(v___y_2216_);
lean_dec(v___y_2215_);
lean_dec_ref(v___y_2214_);
lean_dec(v___y_2213_);
lean_dec(v___y_2212_);
lean_dec_ref(v_as_2208_);
return v_res_2225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(lean_object* v_c_2232_, lean_object* v_x_2233_, lean_object* v_as_2234_, size_t v_sz_2235_, size_t v_i_2236_, lean_object* v_b_2237_, lean_object* v___y_2238_){
_start:
{
uint8_t v___x_2240_; 
v___x_2240_ = lean_usize_dec_lt(v_i_2236_, v_sz_2235_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; 
lean_dec(v_x_2233_);
lean_dec_ref(v_c_2232_);
v___x_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2241_, 0, v_b_2237_);
return v___x_2241_;
}
else
{
lean_object* v_snd_2242_; lean_object* v___x_2244_; uint8_t v_isShared_2245_; uint8_t v_isSharedCheck_2289_; 
v_snd_2242_ = lean_ctor_get(v_b_2237_, 1);
v_isSharedCheck_2289_ = !lean_is_exclusive(v_b_2237_);
if (v_isSharedCheck_2289_ == 0)
{
lean_object* v_unused_2290_; 
v_unused_2290_ = lean_ctor_get(v_b_2237_, 0);
lean_dec(v_unused_2290_);
v___x_2244_ = v_b_2237_;
v_isShared_2245_ = v_isSharedCheck_2289_;
goto v_resetjp_2243_;
}
else
{
lean_inc(v_snd_2242_);
lean_dec(v_b_2237_);
v___x_2244_ = lean_box(0);
v_isShared_2245_ = v_isSharedCheck_2289_;
goto v_resetjp_2243_;
}
v_resetjp_2243_:
{
lean_object* v_p_2246_; lean_object* v_a_2247_; lean_object* v_p_2248_; lean_object* v___x_2249_; lean_object* v___f_2250_; uint8_t v___y_2252_; uint8_t v___x_2287_; 
v_p_2246_ = lean_ctor_get(v_c_2232_, 0);
v_a_2247_ = lean_array_uget_borrowed(v_as_2234_, v_i_2236_);
v_p_2248_ = lean_ctor_get(v_a_2247_, 0);
v___x_2249_ = lean_box(0);
lean_inc(v_x_2233_);
lean_inc_ref(v_p_2248_);
v___f_2250_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2250_, 0, v_p_2248_);
lean_closure_set(v___f_2250_, 1, v_x_2233_);
v___x_2287_ = l_Int_Linear_instBEqPoly_beq(v_p_2246_, v_p_2248_);
if (v___x_2287_ == 0)
{
uint8_t v___x_2288_; 
v___x_2288_ = l_Int_Linear_Poly_isNegEq(v_p_2246_, v_p_2248_);
v___y_2252_ = v___x_2288_;
goto v___jp_2251_;
}
else
{
v___y_2252_ = v___x_2287_;
goto v___jp_2251_;
}
v___jp_2251_:
{
if (v___y_2252_ == 0)
{
lean_object* v___x_2253_; size_t v___x_2254_; size_t v___x_2255_; 
lean_dec_ref(v___f_2250_);
lean_del_object(v___x_2244_);
lean_dec(v_snd_2242_);
v___x_2253_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___closed__1));
v___x_2254_ = ((size_t)1ULL);
v___x_2255_ = lean_usize_add(v_i_2236_, v___x_2254_);
v_i_2236_ = v___x_2255_;
v_b_2237_ = v___x_2253_;
goto _start;
}
else
{
lean_object* v___x_2257_; lean_object* v___x_2258_; 
lean_dec(v_x_2233_);
v___x_2257_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2258_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2257_, v___f_2250_, v___y_2238_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2277_; 
v_isSharedCheck_2277_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2277_ == 0)
{
lean_object* v_unused_2278_; 
v_unused_2278_ = lean_ctor_get(v___x_2258_, 0);
lean_dec(v_unused_2278_);
v___x_2260_ = v___x_2258_;
v_isShared_2261_ = v_isSharedCheck_2277_;
goto v_resetjp_2259_;
}
else
{
lean_dec(v___x_2258_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2277_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2269_; 
v___x_2262_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
lean_inc_ref(v_p_2246_);
v___x_2263_ = l_Int_Linear_Poly_addConst(v_p_2246_, v___x_2262_);
lean_inc(v_a_2247_);
v___x_2264_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2264_, 0, v_c_2232_);
lean_ctor_set(v___x_2264_, 1, v_a_2247_);
v___x_2265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2265_, 0, v___x_2263_);
lean_ctor_set(v___x_2265_, 1, v___x_2264_);
v___x_2266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
v___x_2267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
if (v_isShared_2245_ == 0)
{
lean_ctor_set(v___x_2244_, 1, v___x_2249_);
lean_ctor_set(v___x_2244_, 0, v___x_2267_);
v___x_2269_ = v___x_2244_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2276_; 
v_reuseFailAlloc_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2276_, 0, v___x_2267_);
lean_ctor_set(v_reuseFailAlloc_2276_, 1, v___x_2249_);
v___x_2269_ = v_reuseFailAlloc_2276_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2274_; 
v___x_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
v___x_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2270_);
v___x_2272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2272_, 0, v___x_2271_);
lean_ctor_set(v___x_2272_, 1, v_snd_2242_);
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 0, v___x_2272_);
v___x_2274_ = v___x_2260_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2272_);
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
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2286_; 
lean_del_object(v___x_2244_);
lean_dec(v_snd_2242_);
lean_dec_ref(v_c_2232_);
v_a_2279_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2281_ = v___x_2258_;
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2258_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2284_; 
if (v_isShared_2282_ == 0)
{
v___x_2284_ = v___x_2281_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_a_2279_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg___boxed(lean_object* v_c_2291_, lean_object* v_x_2292_, lean_object* v_as_2293_, lean_object* v_sz_2294_, lean_object* v_i_2295_, lean_object* v_b_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_){
_start:
{
size_t v_sz_boxed_2299_; size_t v_i_boxed_2300_; lean_object* v_res_2301_; 
v_sz_boxed_2299_ = lean_unbox_usize(v_sz_2294_);
lean_dec(v_sz_2294_);
v_i_boxed_2300_ = lean_unbox_usize(v_i_2295_);
lean_dec(v_i_2295_);
v_res_2301_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(v_c_2291_, v_x_2292_, v_as_2293_, v_sz_boxed_2299_, v_i_boxed_2300_, v_b_2296_, v___y_2297_);
lean_dec(v___y_2297_);
lean_dec_ref(v_as_2293_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(lean_object* v_c_2305_, lean_object* v_x_2306_, lean_object* v_as_2307_, size_t v_sz_2308_, size_t v_i_2309_, lean_object* v_b_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_){
_start:
{
uint8_t v___x_2322_; 
v___x_2322_ = lean_usize_dec_lt(v_i_2309_, v_sz_2308_);
if (v___x_2322_ == 0)
{
lean_object* v___x_2323_; 
lean_dec(v_x_2306_);
lean_dec_ref(v_c_2305_);
v___x_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2323_, 0, v_b_2310_);
return v___x_2323_;
}
else
{
lean_object* v_snd_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2371_; 
v_snd_2324_ = lean_ctor_get(v_b_2310_, 1);
v_isSharedCheck_2371_ = !lean_is_exclusive(v_b_2310_);
if (v_isSharedCheck_2371_ == 0)
{
lean_object* v_unused_2372_; 
v_unused_2372_ = lean_ctor_get(v_b_2310_, 0);
lean_dec(v_unused_2372_);
v___x_2326_ = v_b_2310_;
v_isShared_2327_ = v_isSharedCheck_2371_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_snd_2324_);
lean_dec(v_b_2310_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2371_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v_p_2328_; lean_object* v_a_2329_; lean_object* v_p_2330_; lean_object* v___x_2331_; lean_object* v___f_2332_; uint8_t v___y_2334_; uint8_t v___x_2369_; 
v_p_2328_ = lean_ctor_get(v_c_2305_, 0);
v_a_2329_ = lean_array_uget_borrowed(v_as_2307_, v_i_2309_);
v_p_2330_ = lean_ctor_get(v_a_2329_, 0);
v___x_2331_ = lean_box(0);
lean_inc(v_x_2306_);
lean_inc_ref(v_p_2330_);
v___f_2332_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2332_, 0, v_p_2330_);
lean_closure_set(v___f_2332_, 1, v_x_2306_);
v___x_2369_ = l_Int_Linear_instBEqPoly_beq(v_p_2328_, v_p_2330_);
if (v___x_2369_ == 0)
{
uint8_t v___x_2370_; 
v___x_2370_ = l_Int_Linear_Poly_isNegEq(v_p_2328_, v_p_2330_);
v___y_2334_ = v___x_2370_;
goto v___jp_2333_;
}
else
{
v___y_2334_ = v___x_2369_;
goto v___jp_2333_;
}
v___jp_2333_:
{
if (v___y_2334_ == 0)
{
lean_object* v___x_2335_; size_t v___x_2336_; size_t v___x_2337_; lean_object* v___x_2338_; 
lean_dec_ref(v___f_2332_);
lean_del_object(v___x_2326_);
lean_dec(v_snd_2324_);
v___x_2335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___closed__0));
v___x_2336_ = ((size_t)1ULL);
v___x_2337_ = lean_usize_add(v_i_2309_, v___x_2336_);
v___x_2338_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(v_c_2305_, v_x_2306_, v_as_2307_, v_sz_2308_, v___x_2337_, v___x_2335_, v___y_2311_);
return v___x_2338_;
}
else
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
lean_dec(v_x_2306_);
v___x_2339_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_2340_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2339_, v___f_2332_, v___y_2311_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2359_; 
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2359_ == 0)
{
lean_object* v_unused_2360_; 
v_unused_2360_ = lean_ctor_get(v___x_2340_, 0);
lean_dec(v_unused_2360_);
v___x_2342_ = v___x_2340_;
v_isShared_2343_ = v_isSharedCheck_2359_;
goto v_resetjp_2341_;
}
else
{
lean_dec(v___x_2340_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2359_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2351_; 
v___x_2344_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
lean_inc_ref(v_p_2328_);
v___x_2345_ = l_Int_Linear_Poly_addConst(v_p_2328_, v___x_2344_);
lean_inc(v_a_2329_);
v___x_2346_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_2346_, 0, v_c_2305_);
lean_ctor_set(v___x_2346_, 1, v_a_2329_);
v___x_2347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2347_, 0, v___x_2345_);
lean_ctor_set(v___x_2347_, 1, v___x_2346_);
v___x_2348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
v___x_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 1, v___x_2331_);
lean_ctor_set(v___x_2326_, 0, v___x_2349_);
v___x_2351_ = v___x_2326_;
goto v_reusejp_2350_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v___x_2349_);
lean_ctor_set(v_reuseFailAlloc_2358_, 1, v___x_2331_);
v___x_2351_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2350_;
}
v_reusejp_2350_:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2356_; 
v___x_2352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2351_);
v___x_2353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2352_);
v___x_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2354_, 0, v___x_2353_);
lean_ctor_set(v___x_2354_, 1, v_snd_2324_);
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 0, v___x_2354_);
v___x_2356_ = v___x_2342_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v___x_2354_);
v___x_2356_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
return v___x_2356_;
}
}
}
}
else
{
lean_object* v_a_2361_; lean_object* v___x_2363_; uint8_t v_isShared_2364_; uint8_t v_isSharedCheck_2368_; 
lean_del_object(v___x_2326_);
lean_dec(v_snd_2324_);
lean_dec_ref(v_c_2305_);
v_a_2361_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2368_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2363_ = v___x_2340_;
v_isShared_2364_ = v_isSharedCheck_2368_;
goto v_resetjp_2362_;
}
else
{
lean_inc(v_a_2361_);
lean_dec(v___x_2340_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9___boxed(lean_object** _args){
lean_object* v_c_2373_ = _args[0];
lean_object* v_x_2374_ = _args[1];
lean_object* v_as_2375_ = _args[2];
lean_object* v_sz_2376_ = _args[3];
lean_object* v_i_2377_ = _args[4];
lean_object* v_b_2378_ = _args[5];
lean_object* v___y_2379_ = _args[6];
lean_object* v___y_2380_ = _args[7];
lean_object* v___y_2381_ = _args[8];
lean_object* v___y_2382_ = _args[9];
lean_object* v___y_2383_ = _args[10];
lean_object* v___y_2384_ = _args[11];
lean_object* v___y_2385_ = _args[12];
lean_object* v___y_2386_ = _args[13];
lean_object* v___y_2387_ = _args[14];
lean_object* v___y_2388_ = _args[15];
lean_object* v___y_2389_ = _args[16];
_start:
{
size_t v_sz_boxed_2390_; size_t v_i_boxed_2391_; lean_object* v_res_2392_; 
v_sz_boxed_2390_ = lean_unbox_usize(v_sz_2376_);
lean_dec(v_sz_2376_);
v_i_boxed_2391_ = lean_unbox_usize(v_i_2377_);
lean_dec(v_i_2377_);
v_res_2392_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(v_c_2373_, v_x_2374_, v_as_2375_, v_sz_boxed_2390_, v_i_boxed_2391_, v_b_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v___y_2382_);
lean_dec_ref(v___y_2381_);
lean_dec(v___y_2380_);
lean_dec(v___y_2379_);
lean_dec_ref(v_as_2375_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(lean_object* v_init_2393_, lean_object* v_c_2394_, lean_object* v_x_2395_, lean_object* v_n_2396_, lean_object* v_b_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_){
_start:
{
if (lean_obj_tag(v_n_2396_) == 0)
{
lean_object* v_cs_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2443_; 
v_cs_2409_ = lean_ctor_get(v_n_2396_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v_n_2396_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2411_ = v_n_2396_;
v_isShared_2412_ = v_isSharedCheck_2443_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_cs_2409_);
lean_dec(v_n_2396_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2443_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2413_; lean_object* v___x_2414_; size_t v_sz_2415_; size_t v___x_2416_; lean_object* v___x_2417_; 
v___x_2413_ = lean_box(0);
v___x_2414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2414_, 0, v___x_2413_);
lean_ctor_set(v___x_2414_, 1, v_b_2397_);
v_sz_2415_ = lean_array_size(v_cs_2409_);
v___x_2416_ = ((size_t)0ULL);
v___x_2417_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(v_init_2393_, v_c_2394_, v_x_2395_, v_cs_2409_, v_sz_2415_, v___x_2416_, v___x_2414_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_);
lean_dec_ref(v_cs_2409_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2434_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2434_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2434_ == 0)
{
v___x_2420_ = v___x_2417_;
v_isShared_2421_ = v_isSharedCheck_2434_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2417_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2434_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v_fst_2422_; 
v_fst_2422_ = lean_ctor_get(v_a_2418_, 0);
if (lean_obj_tag(v_fst_2422_) == 0)
{
lean_object* v_snd_2423_; lean_object* v___x_2425_; 
v_snd_2423_ = lean_ctor_get(v_a_2418_, 1);
lean_inc(v_snd_2423_);
lean_dec(v_a_2418_);
if (v_isShared_2412_ == 0)
{
lean_ctor_set_tag(v___x_2411_, 1);
lean_ctor_set(v___x_2411_, 0, v_snd_2423_);
v___x_2425_ = v___x_2411_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_snd_2423_);
v___x_2425_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
lean_object* v___x_2427_; 
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v___x_2425_);
v___x_2427_ = v___x_2420_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v___x_2425_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
else
{
lean_object* v_val_2430_; lean_object* v___x_2432_; 
lean_inc_ref(v_fst_2422_);
lean_dec(v_a_2418_);
lean_del_object(v___x_2411_);
v_val_2430_ = lean_ctor_get(v_fst_2422_, 0);
lean_inc(v_val_2430_);
lean_dec_ref(v_fst_2422_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v_val_2430_);
v___x_2432_ = v___x_2420_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_val_2430_);
v___x_2432_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
return v___x_2432_;
}
}
}
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2442_; 
lean_del_object(v___x_2411_);
v_a_2435_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2437_ = v___x_2417_;
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2417_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2438_ == 0)
{
v___x_2440_ = v___x_2437_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_a_2435_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
}
}
else
{
lean_object* v_vs_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2478_; 
v_vs_2444_ = lean_ctor_get(v_n_2396_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v_n_2396_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2446_ = v_n_2396_;
v_isShared_2447_ = v_isSharedCheck_2478_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_vs_2444_);
lean_dec(v_n_2396_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2478_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; size_t v_sz_2450_; size_t v___x_2451_; lean_object* v___x_2452_; 
v___x_2448_ = lean_box(0);
v___x_2449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2448_);
lean_ctor_set(v___x_2449_, 1, v_b_2397_);
v_sz_2450_ = lean_array_size(v_vs_2444_);
v___x_2451_ = ((size_t)0ULL);
v___x_2452_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9(v_c_2394_, v_x_2395_, v_vs_2444_, v_sz_2450_, v___x_2451_, v___x_2449_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_);
lean_dec_ref(v_vs_2444_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2469_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2455_ = v___x_2452_;
v_isShared_2456_ = v_isSharedCheck_2469_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_a_2453_);
lean_dec(v___x_2452_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2469_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v_fst_2457_; 
v_fst_2457_ = lean_ctor_get(v_a_2453_, 0);
if (lean_obj_tag(v_fst_2457_) == 0)
{
lean_object* v_snd_2458_; lean_object* v___x_2460_; 
v_snd_2458_ = lean_ctor_get(v_a_2453_, 1);
lean_inc(v_snd_2458_);
lean_dec(v_a_2453_);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 0, v_snd_2458_);
v___x_2460_ = v___x_2446_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_snd_2458_);
v___x_2460_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
lean_object* v___x_2462_; 
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 0, v___x_2460_);
v___x_2462_ = v___x_2455_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v___x_2460_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
else
{
lean_object* v_val_2465_; lean_object* v___x_2467_; 
lean_inc_ref(v_fst_2457_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2446_);
v_val_2465_ = lean_ctor_get(v_fst_2457_, 0);
lean_inc(v_val_2465_);
lean_dec_ref(v_fst_2457_);
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 0, v_val_2465_);
v___x_2467_ = v___x_2455_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_val_2465_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
lean_del_object(v___x_2446_);
v_a_2470_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2452_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2452_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(lean_object* v_init_2479_, lean_object* v_c_2480_, lean_object* v_x_2481_, lean_object* v_as_2482_, size_t v_sz_2483_, size_t v_i_2484_, lean_object* v_b_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
uint8_t v___x_2497_; 
v___x_2497_ = lean_usize_dec_lt(v_i_2484_, v_sz_2483_);
if (v___x_2497_ == 0)
{
lean_object* v___x_2498_; 
lean_dec(v_x_2481_);
lean_dec_ref(v_c_2480_);
v___x_2498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2498_, 0, v_b_2485_);
return v___x_2498_;
}
else
{
lean_object* v_snd_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2533_; 
v_snd_2499_ = lean_ctor_get(v_b_2485_, 1);
v_isSharedCheck_2533_ = !lean_is_exclusive(v_b_2485_);
if (v_isSharedCheck_2533_ == 0)
{
lean_object* v_unused_2534_; 
v_unused_2534_ = lean_ctor_get(v_b_2485_, 0);
lean_dec(v_unused_2534_);
v___x_2501_ = v_b_2485_;
v_isShared_2502_ = v_isSharedCheck_2533_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_snd_2499_);
lean_dec(v_b_2485_);
v___x_2501_ = lean_box(0);
v_isShared_2502_ = v_isSharedCheck_2533_;
goto v_resetjp_2500_;
}
v_resetjp_2500_:
{
lean_object* v_a_2503_; lean_object* v___x_2504_; 
v_a_2503_ = lean_array_uget_borrowed(v_as_2482_, v_i_2484_);
lean_inc(v_snd_2499_);
lean_inc(v_a_2503_);
lean_inc(v_x_2481_);
lean_inc_ref(v_c_2480_);
v___x_2504_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(v_init_2479_, v_c_2480_, v_x_2481_, v_a_2503_, v_snd_2499_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2524_; 
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2507_ = v___x_2504_;
v_isShared_2508_ = v_isSharedCheck_2524_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2504_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2524_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
if (lean_obj_tag(v_a_2505_) == 0)
{
lean_object* v___x_2509_; lean_object* v___x_2511_; 
lean_dec(v_x_2481_);
lean_dec_ref(v_c_2480_);
v___x_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2509_, 0, v_a_2505_);
if (v_isShared_2502_ == 0)
{
lean_ctor_set(v___x_2501_, 0, v___x_2509_);
v___x_2511_ = v___x_2501_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v___x_2509_);
lean_ctor_set(v_reuseFailAlloc_2515_, 1, v_snd_2499_);
v___x_2511_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
lean_object* v___x_2513_; 
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 0, v___x_2511_);
v___x_2513_ = v___x_2507_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___x_2511_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2517_; lean_object* v___x_2519_; 
lean_del_object(v___x_2507_);
lean_dec(v_snd_2499_);
v_a_2516_ = lean_ctor_get(v_a_2505_, 0);
lean_inc(v_a_2516_);
lean_dec_ref(v_a_2505_);
v___x_2517_ = lean_box(0);
if (v_isShared_2502_ == 0)
{
lean_ctor_set(v___x_2501_, 1, v_a_2516_);
lean_ctor_set(v___x_2501_, 0, v___x_2517_);
v___x_2519_ = v___x_2501_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v___x_2517_);
lean_ctor_set(v_reuseFailAlloc_2523_, 1, v_a_2516_);
v___x_2519_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
size_t v___x_2520_; size_t v___x_2521_; 
v___x_2520_ = ((size_t)1ULL);
v___x_2521_ = lean_usize_add(v_i_2484_, v___x_2520_);
v_i_2484_ = v___x_2521_;
v_b_2485_ = v___x_2519_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2525_; lean_object* v___x_2527_; uint8_t v_isShared_2528_; uint8_t v_isSharedCheck_2532_; 
lean_del_object(v___x_2501_);
lean_dec(v_snd_2499_);
lean_dec(v_x_2481_);
lean_dec_ref(v_c_2480_);
v_a_2525_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2527_ = v___x_2504_;
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
else
{
lean_inc(v_a_2525_);
lean_dec(v___x_2504_);
v___x_2527_ = lean_box(0);
v_isShared_2528_ = v_isSharedCheck_2532_;
goto v_resetjp_2526_;
}
v_resetjp_2526_:
{
lean_object* v___x_2530_; 
if (v_isShared_2528_ == 0)
{
v___x_2530_ = v___x_2527_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_a_2525_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8___boxed(lean_object** _args){
lean_object* v_init_2535_ = _args[0];
lean_object* v_c_2536_ = _args[1];
lean_object* v_x_2537_ = _args[2];
lean_object* v_as_2538_ = _args[3];
lean_object* v_sz_2539_ = _args[4];
lean_object* v_i_2540_ = _args[5];
lean_object* v_b_2541_ = _args[6];
lean_object* v___y_2542_ = _args[7];
lean_object* v___y_2543_ = _args[8];
lean_object* v___y_2544_ = _args[9];
lean_object* v___y_2545_ = _args[10];
lean_object* v___y_2546_ = _args[11];
lean_object* v___y_2547_ = _args[12];
lean_object* v___y_2548_ = _args[13];
lean_object* v___y_2549_ = _args[14];
lean_object* v___y_2550_ = _args[15];
lean_object* v___y_2551_ = _args[16];
lean_object* v___y_2552_ = _args[17];
_start:
{
size_t v_sz_boxed_2553_; size_t v_i_boxed_2554_; lean_object* v_res_2555_; 
v_sz_boxed_2553_ = lean_unbox_usize(v_sz_2539_);
lean_dec(v_sz_2539_);
v_i_boxed_2554_ = lean_unbox_usize(v_i_2540_);
lean_dec(v_i_2540_);
v_res_2555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__8(v_init_2535_, v_c_2536_, v_x_2537_, v_as_2538_, v_sz_boxed_2553_, v_i_boxed_2554_, v_b_2541_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
lean_dec(v___y_2543_);
lean_dec(v___y_2542_);
lean_dec_ref(v_as_2538_);
lean_dec_ref(v_init_2535_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6___boxed(lean_object* v_init_2556_, lean_object* v_c_2557_, lean_object* v_x_2558_, lean_object* v_n_2559_, lean_object* v_b_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(v_init_2556_, v_c_2557_, v_x_2558_, v_n_2559_, v_b_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
lean_dec(v___y_2570_);
lean_dec_ref(v___y_2569_);
lean_dec(v___y_2568_);
lean_dec_ref(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec_ref(v___y_2565_);
lean_dec(v___y_2564_);
lean_dec_ref(v___y_2563_);
lean_dec(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec_ref(v_init_2556_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(lean_object* v_c_2573_, lean_object* v_x_2574_, lean_object* v_t_2575_, lean_object* v_init_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_){
_start:
{
lean_object* v_root_2588_; lean_object* v_tail_2589_; lean_object* v___x_2590_; 
v_root_2588_ = lean_ctor_get(v_t_2575_, 0);
lean_inc_ref(v_root_2588_);
v_tail_2589_ = lean_ctor_get(v_t_2575_, 1);
lean_inc_ref(v_tail_2589_);
lean_dec_ref(v_t_2575_);
lean_inc(v_x_2574_);
lean_inc_ref(v_c_2573_);
lean_inc_ref(v_init_2576_);
v___x_2590_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6(v_init_2576_, v_c_2573_, v_x_2574_, v_root_2588_, v_init_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
lean_dec_ref(v_init_2576_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2627_; 
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2590_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2593_ = v___x_2590_;
v_isShared_2594_ = v_isSharedCheck_2627_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2590_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2627_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
if (lean_obj_tag(v_a_2591_) == 0)
{
lean_object* v_a_2595_; lean_object* v___x_2597_; 
lean_dec_ref(v_tail_2589_);
lean_dec(v_x_2574_);
lean_dec_ref(v_c_2573_);
v_a_2595_ = lean_ctor_get(v_a_2591_, 0);
lean_inc(v_a_2595_);
lean_dec_ref(v_a_2591_);
if (v_isShared_2594_ == 0)
{
lean_ctor_set(v___x_2593_, 0, v_a_2595_);
v___x_2597_ = v___x_2593_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_a_2595_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; size_t v_sz_2602_; size_t v___x_2603_; lean_object* v___x_2604_; 
lean_del_object(v___x_2593_);
v_a_2599_ = lean_ctor_get(v_a_2591_, 0);
lean_inc(v_a_2599_);
lean_dec_ref(v_a_2591_);
v___x_2600_ = lean_box(0);
v___x_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
lean_ctor_set(v___x_2601_, 1, v_a_2599_);
v_sz_2602_ = lean_array_size(v_tail_2589_);
v___x_2603_ = ((size_t)0ULL);
v___x_2604_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7(v_c_2573_, v_x_2574_, v_tail_2589_, v_sz_2602_, v___x_2603_, v___x_2601_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
lean_dec_ref(v_tail_2589_);
if (lean_obj_tag(v___x_2604_) == 0)
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2618_; 
v_a_2605_ = lean_ctor_get(v___x_2604_, 0);
v_isSharedCheck_2618_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2618_ == 0)
{
v___x_2607_ = v___x_2604_;
v_isShared_2608_ = v_isSharedCheck_2618_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v___x_2604_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2618_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v_fst_2609_; 
v_fst_2609_ = lean_ctor_get(v_a_2605_, 0);
if (lean_obj_tag(v_fst_2609_) == 0)
{
lean_object* v_snd_2610_; lean_object* v___x_2612_; 
v_snd_2610_ = lean_ctor_get(v_a_2605_, 1);
lean_inc(v_snd_2610_);
lean_dec(v_a_2605_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v_snd_2610_);
v___x_2612_ = v___x_2607_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_snd_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
else
{
lean_object* v_val_2614_; lean_object* v___x_2616_; 
lean_inc_ref(v_fst_2609_);
lean_dec(v_a_2605_);
v_val_2614_ = lean_ctor_get(v_fst_2609_, 0);
lean_inc(v_val_2614_);
lean_dec_ref(v_fst_2609_);
if (v_isShared_2608_ == 0)
{
lean_ctor_set(v___x_2607_, 0, v_val_2614_);
v___x_2616_ = v___x_2607_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v_val_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
}
}
else
{
lean_object* v_a_2619_; lean_object* v___x_2621_; uint8_t v_isShared_2622_; uint8_t v_isSharedCheck_2626_; 
v_a_2619_ = lean_ctor_get(v___x_2604_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2604_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2621_ = v___x_2604_;
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
else
{
lean_inc(v_a_2619_);
lean_dec(v___x_2604_);
v___x_2621_ = lean_box(0);
v_isShared_2622_ = v_isSharedCheck_2626_;
goto v_resetjp_2620_;
}
v_resetjp_2620_:
{
lean_object* v___x_2624_; 
if (v_isShared_2622_ == 0)
{
v___x_2624_ = v___x_2621_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v_a_2619_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
}
}
}
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec_ref(v_tail_2589_);
lean_dec(v_x_2574_);
lean_dec_ref(v_c_2573_);
v_a_2628_ = lean_ctor_get(v___x_2590_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2590_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2590_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2590_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2___boxed(lean_object* v_c_2636_, lean_object* v_x_2637_, lean_object* v_t_2638_, lean_object* v_init_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(v_c_2636_, v_x_2637_, v_t_2638_, v_init_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
lean_dec(v___y_2641_);
lean_dec(v___y_2640_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(lean_object* v_x_2652_, lean_object* v_c_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_){
_start:
{
lean_object* v___x_2665_; 
v___x_2665_ = l_Lean_Meta_Grind_Arith_Cutsat_get_x27___redArg(v_a_2654_, v_a_2662_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v_a_2666_; lean_object* v___y_2668_; lean_object* v_diseqs_2693_; lean_object* v_size_2694_; lean_object* v___x_2695_; uint8_t v___x_2696_; 
v_a_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc(v_a_2666_);
lean_dec_ref(v___x_2665_);
v_diseqs_2693_ = lean_ctor_get(v_a_2666_, 9);
lean_inc_ref(v_diseqs_2693_);
lean_dec(v_a_2666_);
v_size_2694_ = lean_ctor_get(v_diseqs_2693_, 2);
v___x_2695_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq___closed__0);
v___x_2696_ = lean_nat_dec_lt(v_x_2652_, v_size_2694_);
if (v___x_2696_ == 0)
{
lean_object* v___x_2697_; 
lean_dec_ref(v_diseqs_2693_);
v___x_2697_ = l_outOfBounds___redArg(v___x_2695_);
v___y_2668_ = v___x_2697_;
goto v___jp_2667_;
}
else
{
lean_object* v___x_2698_; 
v___x_2698_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2695_, v_diseqs_2693_, v_x_2652_);
lean_dec_ref(v_diseqs_2693_);
v___y_2668_ = v___x_2698_;
goto v___jp_2667_;
}
v___jp_2667_:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2669_ = lean_box(0);
v___x_2670_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7___closed__0));
v___x_2671_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2(v_c_2653_, v_x_2652_, v___y_2668_, v___x_2670_, v_a_2654_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_, v_a_2662_, v_a_2663_);
if (lean_obj_tag(v___x_2671_) == 0)
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2684_; 
v_a_2672_ = lean_ctor_get(v___x_2671_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2671_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2674_ = v___x_2671_;
v_isShared_2675_ = v_isSharedCheck_2684_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2671_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2684_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v_fst_2676_; 
v_fst_2676_ = lean_ctor_get(v_a_2672_, 0);
lean_inc(v_fst_2676_);
lean_dec(v_a_2672_);
if (lean_obj_tag(v_fst_2676_) == 0)
{
lean_object* v___x_2678_; 
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 0, v___x_2669_);
v___x_2678_ = v___x_2674_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v___x_2669_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
return v___x_2678_;
}
}
else
{
lean_object* v_val_2680_; lean_object* v___x_2682_; 
v_val_2680_ = lean_ctor_get(v_fst_2676_, 0);
lean_inc(v_val_2680_);
lean_dec_ref(v_fst_2676_);
if (v_isShared_2675_ == 0)
{
lean_ctor_set(v___x_2674_, 0, v_val_2680_);
v___x_2682_ = v___x_2674_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_val_2680_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
else
{
lean_object* v_a_2685_; lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2692_; 
v_a_2685_ = lean_ctor_get(v___x_2671_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v___x_2671_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2687_ = v___x_2671_;
v_isShared_2688_ = v_isSharedCheck_2692_;
goto v_resetjp_2686_;
}
else
{
lean_inc(v_a_2685_);
lean_dec(v___x_2671_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2692_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
lean_object* v___x_2690_; 
if (v_isShared_2688_ == 0)
{
v___x_2690_ = v___x_2687_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v_a_2685_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
}
}
else
{
lean_object* v_a_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2706_; 
lean_dec_ref(v_c_2653_);
lean_dec(v_x_2652_);
v_a_2699_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2701_ = v___x_2665_;
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
else
{
lean_inc(v_a_2699_);
lean_dec(v___x_2665_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2704_; 
if (v_isShared_2702_ == 0)
{
v___x_2704_ = v___x_2701_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2699_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f___boxed(lean_object* v_x_2707_, lean_object* v_c_2708_, lean_object* v_a_2709_, lean_object* v_a_2710_, lean_object* v_a_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_, lean_object* v_a_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(v_x_2707_, v_c_2708_, v_a_2709_, v_a_2710_, v_a_2711_, v_a_2712_, v_a_2713_, v_a_2714_, v_a_2715_, v_a_2716_, v_a_2717_, v_a_2718_);
lean_dec(v_a_2718_);
lean_dec_ref(v_a_2717_);
lean_dec(v_a_2716_);
lean_dec_ref(v_a_2715_);
lean_dec(v_a_2714_);
lean_dec_ref(v_a_2713_);
lean_dec(v_a_2712_);
lean_dec_ref(v_a_2711_);
lean_dec(v_a_2710_);
lean_dec(v_a_2709_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11(lean_object* v_c_2721_, lean_object* v_x_2722_, lean_object* v_as_2723_, size_t v_sz_2724_, size_t v_i_2725_, lean_object* v_b_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v___x_2738_; 
v___x_2738_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg(v_c_2721_, v_x_2722_, v_as_2723_, v_sz_2724_, v_i_2725_, v_b_2726_, v___y_2727_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___boxed(lean_object** _args){
lean_object* v_c_2739_ = _args[0];
lean_object* v_x_2740_ = _args[1];
lean_object* v_as_2741_ = _args[2];
lean_object* v_sz_2742_ = _args[3];
lean_object* v_i_2743_ = _args[4];
lean_object* v_b_2744_ = _args[5];
lean_object* v___y_2745_ = _args[6];
lean_object* v___y_2746_ = _args[7];
lean_object* v___y_2747_ = _args[8];
lean_object* v___y_2748_ = _args[9];
lean_object* v___y_2749_ = _args[10];
lean_object* v___y_2750_ = _args[11];
lean_object* v___y_2751_ = _args[12];
lean_object* v___y_2752_ = _args[13];
lean_object* v___y_2753_ = _args[14];
lean_object* v___y_2754_ = _args[15];
lean_object* v___y_2755_ = _args[16];
_start:
{
size_t v_sz_boxed_2756_; size_t v_i_boxed_2757_; lean_object* v_res_2758_; 
v_sz_boxed_2756_ = lean_unbox_usize(v_sz_2742_);
lean_dec(v_sz_2742_);
v_i_boxed_2757_ = lean_unbox_usize(v_i_2743_);
lean_dec(v_i_2743_);
v_res_2758_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11(v_c_2739_, v_x_2740_, v_as_2741_, v_sz_boxed_2756_, v_i_boxed_2757_, v_b_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2749_);
lean_dec(v___y_2748_);
lean_dec_ref(v___y_2747_);
lean_dec(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec_ref(v_as_2741_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10(lean_object* v_c_2759_, lean_object* v_x_2760_, lean_object* v_as_2761_, size_t v_sz_2762_, size_t v_i_2763_, lean_object* v_b_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_){
_start:
{
lean_object* v___x_2776_; 
v___x_2776_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___redArg(v_c_2759_, v_x_2760_, v_as_2761_, v_sz_2762_, v_i_2763_, v_b_2764_, v___y_2765_);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10___boxed(lean_object** _args){
lean_object* v_c_2777_ = _args[0];
lean_object* v_x_2778_ = _args[1];
lean_object* v_as_2779_ = _args[2];
lean_object* v_sz_2780_ = _args[3];
lean_object* v_i_2781_ = _args[4];
lean_object* v_b_2782_ = _args[5];
lean_object* v___y_2783_ = _args[6];
lean_object* v___y_2784_ = _args[7];
lean_object* v___y_2785_ = _args[8];
lean_object* v___y_2786_ = _args[9];
lean_object* v___y_2787_ = _args[10];
lean_object* v___y_2788_ = _args[11];
lean_object* v___y_2789_ = _args[12];
lean_object* v___y_2790_ = _args[13];
lean_object* v___y_2791_ = _args[14];
lean_object* v___y_2792_ = _args[15];
lean_object* v___y_2793_ = _args[16];
_start:
{
size_t v_sz_boxed_2794_; size_t v_i_boxed_2795_; lean_object* v_res_2796_; 
v_sz_boxed_2794_ = lean_unbox_usize(v_sz_2780_);
lean_dec(v_sz_2780_);
v_i_boxed_2795_ = lean_unbox_usize(v_i_2781_);
lean_dec(v_i_2781_);
v_res_2796_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__6_spec__9_spec__10(v_c_2777_, v_x_2778_, v_as_2779_, v_sz_boxed_2794_, v_i_boxed_2795_, v_b_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec(v___y_2790_);
lean_dec_ref(v___y_2789_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec(v___y_2783_);
lean_dec_ref(v_as_2779_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0(lean_object* v_v_2797_, lean_object* v_b_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_){
_start:
{
lean_object* v_snd_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2841_; 
v_snd_2810_ = lean_ctor_get(v_b_2798_, 1);
v_isSharedCheck_2841_ = !lean_is_exclusive(v_b_2798_);
if (v_isSharedCheck_2841_ == 0)
{
lean_object* v_unused_2842_; 
v_unused_2842_ = lean_ctor_get(v_b_2798_, 0);
lean_dec(v_unused_2842_);
v___x_2812_ = v_b_2798_;
v_isShared_2813_ = v_isSharedCheck_2841_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_snd_2810_);
lean_dec(v_b_2798_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2841_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2814_; 
lean_inc(v_snd_2810_);
lean_inc(v_v_2797_);
v___x_2814_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f(v_v_2797_, v_snd_2810_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2832_; 
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2817_ = v___x_2814_;
v_isShared_2818_ = v_isSharedCheck_2832_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2814_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2832_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
if (lean_obj_tag(v_a_2815_) == 1)
{
lean_object* v_val_2819_; lean_object* v___x_2820_; lean_object* v___x_2822_; 
lean_del_object(v___x_2817_);
lean_dec(v_snd_2810_);
v_val_2819_ = lean_ctor_get(v_a_2815_, 0);
lean_inc(v_val_2819_);
lean_dec_ref(v_a_2815_);
v___x_2820_ = lean_box(0);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 1, v_val_2819_);
lean_ctor_set(v___x_2812_, 0, v___x_2820_);
v___x_2822_ = v___x_2812_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v___x_2820_);
lean_ctor_set(v_reuseFailAlloc_2824_, 1, v_val_2819_);
v___x_2822_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
v_b_2798_ = v___x_2822_;
goto _start;
}
}
else
{
lean_object* v___x_2825_; lean_object* v___x_2827_; 
lean_dec(v_a_2815_);
lean_dec(v_v_2797_);
lean_inc(v_snd_2810_);
v___x_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2825_, 0, v_snd_2810_);
if (v_isShared_2813_ == 0)
{
lean_ctor_set(v___x_2812_, 0, v___x_2825_);
v___x_2827_ = v___x_2812_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v___x_2825_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v_snd_2810_);
v___x_2827_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
lean_object* v___x_2829_; 
if (v_isShared_2818_ == 0)
{
lean_ctor_set(v___x_2817_, 0, v___x_2827_);
v___x_2829_ = v___x_2817_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v___x_2827_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
}
}
else
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
lean_del_object(v___x_2812_);
lean_dec(v_snd_2810_);
lean_dec(v_v_2797_);
v_a_2833_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2814_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2814_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0___boxed(lean_object* v_v_2843_, lean_object* v_b_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
lean_object* v_res_2856_; 
v_res_2856_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0(v_v_2843_, v_b_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec(v___y_2852_);
lean_dec_ref(v___y_2851_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
lean_dec(v___y_2848_);
lean_dec_ref(v___y_2847_);
lean_dec(v___y_2846_);
lean_dec(v___y_2845_);
return v_res_2856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(lean_object* v_c_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_){
_start:
{
lean_object* v_p_2869_; 
v_p_2869_ = lean_ctor_get(v_c_2857_, 0);
if (lean_obj_tag(v_p_2869_) == 1)
{
lean_object* v_v_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; 
v_v_2870_ = lean_ctor_get(v_p_2869_, 1);
lean_inc(v_v_2870_);
v___x_2871_ = lean_box(0);
v___x_2872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2871_);
lean_ctor_set(v___x_2872_, 1, v_c_2857_);
v___x_2873_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_spec__0(v_v_2870_, v___x_2872_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_, v_a_2864_, v_a_2865_, v_a_2866_, v_a_2867_);
if (lean_obj_tag(v___x_2873_) == 0)
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2887_; 
v_a_2874_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2876_ = v___x_2873_;
v_isShared_2877_ = v_isSharedCheck_2887_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2873_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2887_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v_fst_2878_; 
v_fst_2878_ = lean_ctor_get(v_a_2874_, 0);
if (lean_obj_tag(v_fst_2878_) == 0)
{
lean_object* v_snd_2879_; lean_object* v___x_2881_; 
v_snd_2879_ = lean_ctor_get(v_a_2874_, 1);
lean_inc(v_snd_2879_);
lean_dec(v_a_2874_);
if (v_isShared_2877_ == 0)
{
lean_ctor_set(v___x_2876_, 0, v_snd_2879_);
v___x_2881_ = v___x_2876_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v_snd_2879_);
v___x_2881_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
return v___x_2881_;
}
}
else
{
lean_object* v_val_2883_; lean_object* v___x_2885_; 
lean_inc_ref(v_fst_2878_);
lean_dec(v_a_2874_);
v_val_2883_ = lean_ctor_get(v_fst_2878_, 0);
lean_inc(v_val_2883_);
lean_dec_ref(v_fst_2878_);
if (v_isShared_2877_ == 0)
{
lean_ctor_set(v___x_2876_, 0, v_val_2883_);
v___x_2885_ = v___x_2876_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_val_2883_);
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
lean_object* v_a_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2895_; 
v_a_2888_ = lean_ctor_get(v___x_2873_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v___x_2873_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2890_ = v___x_2873_;
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
else
{
lean_inc(v_a_2888_);
lean_dec(v___x_2873_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___x_2893_; 
if (v_isShared_2891_ == 0)
{
v___x_2893_ = v___x_2890_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_a_2888_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
}
else
{
lean_object* v___x_2896_; 
v___x_2896_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_c_2857_, v_a_2858_, v_a_2864_, v_a_2865_, v_a_2866_, v_a_2867_);
return v___x_2896_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq___boxed(lean_object* v_c_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_, lean_object* v_a_2900_, lean_object* v_a_2901_, lean_object* v_a_2902_, lean_object* v_a_2903_, lean_object* v_a_2904_, lean_object* v_a_2905_, lean_object* v_a_2906_, lean_object* v_a_2907_, lean_object* v_a_2908_){
_start:
{
lean_object* v_res_2909_; 
v_res_2909_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(v_c_2897_, v_a_2898_, v_a_2899_, v_a_2900_, v_a_2901_, v_a_2902_, v_a_2903_, v_a_2904_, v_a_2905_, v_a_2906_, v_a_2907_);
lean_dec(v_a_2907_);
lean_dec_ref(v_a_2906_);
lean_dec(v_a_2905_);
lean_dec_ref(v_a_2904_);
lean_dec(v_a_2903_);
lean_dec_ref(v_a_2902_);
lean_dec(v_a_2901_);
lean_dec_ref(v_a_2900_);
lean_dec(v_a_2899_);
lean_dec(v_a_2898_);
return v_res_2909_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(lean_object* v_a_2910_, lean_object* v_x_2911_, size_t v_x_2912_, size_t v_x_2913_){
_start:
{
if (lean_obj_tag(v_x_2911_) == 0)
{
lean_object* v_cs_2914_; size_t v_j_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; uint8_t v___x_2918_; 
v_cs_2914_ = lean_ctor_get(v_x_2911_, 0);
v_j_2915_ = lean_usize_shift_right(v_x_2912_, v_x_2913_);
v___x_2916_ = lean_usize_to_nat(v_j_2915_);
v___x_2917_ = lean_array_get_size(v_cs_2914_);
v___x_2918_ = lean_nat_dec_lt(v___x_2916_, v___x_2917_);
if (v___x_2918_ == 0)
{
lean_dec(v___x_2916_);
lean_dec_ref(v_a_2910_);
return v_x_2911_;
}
else
{
lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2936_; 
lean_inc_ref(v_cs_2914_);
v_isSharedCheck_2936_ = !lean_is_exclusive(v_x_2911_);
if (v_isSharedCheck_2936_ == 0)
{
lean_object* v_unused_2937_; 
v_unused_2937_ = lean_ctor_get(v_x_2911_, 0);
lean_dec(v_unused_2937_);
v___x_2920_ = v_x_2911_;
v_isShared_2921_ = v_isSharedCheck_2936_;
goto v_resetjp_2919_;
}
else
{
lean_dec(v_x_2911_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2936_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
size_t v___x_2922_; size_t v___x_2923_; size_t v___x_2924_; size_t v_i_2925_; size_t v___x_2926_; size_t v_shift_2927_; lean_object* v_v_2928_; lean_object* v___x_2929_; lean_object* v_xs_x27_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2934_; 
v___x_2922_ = ((size_t)1ULL);
v___x_2923_ = lean_usize_shift_left(v___x_2922_, v_x_2913_);
v___x_2924_ = lean_usize_sub(v___x_2923_, v___x_2922_);
v_i_2925_ = lean_usize_land(v_x_2912_, v___x_2924_);
v___x_2926_ = ((size_t)5ULL);
v_shift_2927_ = lean_usize_sub(v_x_2913_, v___x_2926_);
v_v_2928_ = lean_array_fget(v_cs_2914_, v___x_2916_);
v___x_2929_ = lean_box(0);
v_xs_x27_2930_ = lean_array_fset(v_cs_2914_, v___x_2916_, v___x_2929_);
v___x_2931_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(v_a_2910_, v_v_2928_, v_i_2925_, v_shift_2927_);
v___x_2932_ = lean_array_fset(v_xs_x27_2930_, v___x_2916_, v___x_2931_);
lean_dec(v___x_2916_);
if (v_isShared_2921_ == 0)
{
lean_ctor_set(v___x_2920_, 0, v___x_2932_);
v___x_2934_ = v___x_2920_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v___x_2932_);
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
lean_object* v_vs_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; uint8_t v___x_2941_; 
v_vs_2938_ = lean_ctor_get(v_x_2911_, 0);
v___x_2939_ = lean_usize_to_nat(v_x_2912_);
v___x_2940_ = lean_array_get_size(v_vs_2938_);
v___x_2941_ = lean_nat_dec_lt(v___x_2939_, v___x_2940_);
if (v___x_2941_ == 0)
{
lean_dec(v___x_2939_);
lean_dec_ref(v_a_2910_);
return v_x_2911_;
}
else
{
lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2953_; 
lean_inc_ref(v_vs_2938_);
v_isSharedCheck_2953_ = !lean_is_exclusive(v_x_2911_);
if (v_isSharedCheck_2953_ == 0)
{
lean_object* v_unused_2954_; 
v_unused_2954_ = lean_ctor_get(v_x_2911_, 0);
lean_dec(v_unused_2954_);
v___x_2943_ = v_x_2911_;
v_isShared_2944_ = v_isSharedCheck_2953_;
goto v_resetjp_2942_;
}
else
{
lean_dec(v_x_2911_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2953_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v_v_2945_; lean_object* v___x_2946_; lean_object* v_xs_x27_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2951_; 
v_v_2945_ = lean_array_fget(v_vs_2938_, v___x_2939_);
v___x_2946_ = lean_box(0);
v_xs_x27_2947_ = lean_array_fset(v_vs_2938_, v___x_2939_, v___x_2946_);
v___x_2948_ = l_Lean_PersistentArray_push___redArg(v_v_2945_, v_a_2910_);
v___x_2949_ = lean_array_fset(v_xs_x27_2947_, v___x_2939_, v___x_2948_);
lean_dec(v___x_2939_);
if (v_isShared_2944_ == 0)
{
lean_ctor_set(v___x_2943_, 0, v___x_2949_);
v___x_2951_ = v___x_2943_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v___x_2949_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0___boxed(lean_object* v_a_2955_, lean_object* v_x_2956_, lean_object* v_x_2957_, lean_object* v_x_2958_){
_start:
{
size_t v_x_73392__boxed_2959_; size_t v_x_73393__boxed_2960_; lean_object* v_res_2961_; 
v_x_73392__boxed_2959_ = lean_unbox_usize(v_x_2957_);
lean_dec(v_x_2957_);
v_x_73393__boxed_2960_ = lean_unbox_usize(v_x_2958_);
lean_dec(v_x_2958_);
v_res_2961_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(v_a_2955_, v_x_2956_, v_x_73392__boxed_2959_, v_x_73393__boxed_2960_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(lean_object* v_a_2962_, lean_object* v_t_2963_, lean_object* v_i_2964_){
_start:
{
lean_object* v_root_2965_; lean_object* v_tail_2966_; lean_object* v_size_2967_; size_t v_shift_2968_; lean_object* v_tailOff_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2993_; 
v_root_2965_ = lean_ctor_get(v_t_2963_, 0);
v_tail_2966_ = lean_ctor_get(v_t_2963_, 1);
v_size_2967_ = lean_ctor_get(v_t_2963_, 2);
v_shift_2968_ = lean_ctor_get_usize(v_t_2963_, 4);
v_tailOff_2969_ = lean_ctor_get(v_t_2963_, 3);
v_isSharedCheck_2993_ = !lean_is_exclusive(v_t_2963_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2971_ = v_t_2963_;
v_isShared_2972_ = v_isSharedCheck_2993_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_tailOff_2969_);
lean_inc(v_size_2967_);
lean_inc(v_tail_2966_);
lean_inc(v_root_2965_);
lean_dec(v_t_2963_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2993_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
uint8_t v___x_2973_; 
v___x_2973_ = lean_nat_dec_le(v_tailOff_2969_, v_i_2964_);
if (v___x_2973_ == 0)
{
size_t v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2977_; 
v___x_2974_ = lean_usize_of_nat(v_i_2964_);
v___x_2975_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0_spec__0(v_a_2962_, v_root_2965_, v___x_2974_, v_shift_2968_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 0, v___x_2975_);
v___x_2977_ = v___x_2971_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v___x_2975_);
lean_ctor_set(v_reuseFailAlloc_2978_, 1, v_tail_2966_);
lean_ctor_set(v_reuseFailAlloc_2978_, 2, v_size_2967_);
lean_ctor_set(v_reuseFailAlloc_2978_, 3, v_tailOff_2969_);
lean_ctor_set_usize(v_reuseFailAlloc_2978_, 4, v_shift_2968_);
v___x_2977_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
return v___x_2977_;
}
}
else
{
lean_object* v___x_2979_; lean_object* v___x_2980_; uint8_t v___x_2981_; 
v___x_2979_ = lean_nat_sub(v_i_2964_, v_tailOff_2969_);
v___x_2980_ = lean_array_get_size(v_tail_2966_);
v___x_2981_ = lean_nat_dec_lt(v___x_2979_, v___x_2980_);
if (v___x_2981_ == 0)
{
lean_object* v___x_2983_; 
lean_dec(v___x_2979_);
lean_dec_ref(v_a_2962_);
if (v_isShared_2972_ == 0)
{
v___x_2983_ = v___x_2971_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_root_2965_);
lean_ctor_set(v_reuseFailAlloc_2984_, 1, v_tail_2966_);
lean_ctor_set(v_reuseFailAlloc_2984_, 2, v_size_2967_);
lean_ctor_set(v_reuseFailAlloc_2984_, 3, v_tailOff_2969_);
lean_ctor_set_usize(v_reuseFailAlloc_2984_, 4, v_shift_2968_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
return v___x_2983_;
}
}
else
{
lean_object* v_v_2985_; lean_object* v___x_2986_; lean_object* v_xs_x27_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2991_; 
v_v_2985_ = lean_array_fget(v_tail_2966_, v___x_2979_);
v___x_2986_ = lean_box(0);
v_xs_x27_2987_ = lean_array_fset(v_tail_2966_, v___x_2979_, v___x_2986_);
v___x_2988_ = l_Lean_PersistentArray_push___redArg(v_v_2985_, v_a_2962_);
v___x_2989_ = lean_array_fset(v_xs_x27_2987_, v___x_2979_, v___x_2988_);
lean_dec(v___x_2979_);
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 1, v___x_2989_);
v___x_2991_ = v___x_2971_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_root_2965_);
lean_ctor_set(v_reuseFailAlloc_2992_, 1, v___x_2989_);
lean_ctor_set(v_reuseFailAlloc_2992_, 2, v_size_2967_);
lean_ctor_set(v_reuseFailAlloc_2992_, 3, v_tailOff_2969_);
lean_ctor_set_usize(v_reuseFailAlloc_2992_, 4, v_shift_2968_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0___boxed(lean_object* v_a_2994_, lean_object* v_t_2995_, lean_object* v_i_2996_){
_start:
{
lean_object* v_res_2997_; 
v_res_2997_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(v_a_2994_, v_t_2995_, v_i_2996_);
lean_dec(v_i_2996_);
return v_res_2997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0(lean_object* v_a_2998_, lean_object* v_v_2999_, lean_object* v_s_3000_){
_start:
{
lean_object* v_vars_3001_; lean_object* v_varMap_3002_; lean_object* v_vars_x27_3003_; lean_object* v_varMap_x27_3004_; lean_object* v_natToIntMap_3005_; lean_object* v_natDef_3006_; lean_object* v_dvds_3007_; lean_object* v_lowers_3008_; lean_object* v_uppers_3009_; lean_object* v_diseqs_3010_; lean_object* v_elimEqs_3011_; lean_object* v_elimStack_3012_; lean_object* v_occurs_3013_; lean_object* v_assignment_3014_; lean_object* v_nextCnstrId_3015_; uint8_t v_caseSplits_3016_; lean_object* v_conflict_x3f_3017_; lean_object* v_diseqSplits_3018_; lean_object* v_divMod_3019_; lean_object* v_toIntIds_3020_; lean_object* v_toIntInfos_3021_; lean_object* v_toIntTermMap_3022_; lean_object* v_toIntVarMap_3023_; uint8_t v_usedCommRing_3024_; lean_object* v_nonlinearOccs_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3033_; 
v_vars_3001_ = lean_ctor_get(v_s_3000_, 0);
v_varMap_3002_ = lean_ctor_get(v_s_3000_, 1);
v_vars_x27_3003_ = lean_ctor_get(v_s_3000_, 2);
v_varMap_x27_3004_ = lean_ctor_get(v_s_3000_, 3);
v_natToIntMap_3005_ = lean_ctor_get(v_s_3000_, 4);
v_natDef_3006_ = lean_ctor_get(v_s_3000_, 5);
v_dvds_3007_ = lean_ctor_get(v_s_3000_, 6);
v_lowers_3008_ = lean_ctor_get(v_s_3000_, 7);
v_uppers_3009_ = lean_ctor_get(v_s_3000_, 8);
v_diseqs_3010_ = lean_ctor_get(v_s_3000_, 9);
v_elimEqs_3011_ = lean_ctor_get(v_s_3000_, 10);
v_elimStack_3012_ = lean_ctor_get(v_s_3000_, 11);
v_occurs_3013_ = lean_ctor_get(v_s_3000_, 12);
v_assignment_3014_ = lean_ctor_get(v_s_3000_, 13);
v_nextCnstrId_3015_ = lean_ctor_get(v_s_3000_, 14);
v_caseSplits_3016_ = lean_ctor_get_uint8(v_s_3000_, sizeof(void*)*23);
v_conflict_x3f_3017_ = lean_ctor_get(v_s_3000_, 15);
v_diseqSplits_3018_ = lean_ctor_get(v_s_3000_, 16);
v_divMod_3019_ = lean_ctor_get(v_s_3000_, 17);
v_toIntIds_3020_ = lean_ctor_get(v_s_3000_, 18);
v_toIntInfos_3021_ = lean_ctor_get(v_s_3000_, 19);
v_toIntTermMap_3022_ = lean_ctor_get(v_s_3000_, 20);
v_toIntVarMap_3023_ = lean_ctor_get(v_s_3000_, 21);
v_usedCommRing_3024_ = lean_ctor_get_uint8(v_s_3000_, sizeof(void*)*23 + 1);
v_nonlinearOccs_3025_ = lean_ctor_get(v_s_3000_, 22);
v_isSharedCheck_3033_ = !lean_is_exclusive(v_s_3000_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3027_ = v_s_3000_;
v_isShared_3028_ = v_isSharedCheck_3033_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_nonlinearOccs_3025_);
lean_inc(v_toIntVarMap_3023_);
lean_inc(v_toIntTermMap_3022_);
lean_inc(v_toIntInfos_3021_);
lean_inc(v_toIntIds_3020_);
lean_inc(v_divMod_3019_);
lean_inc(v_diseqSplits_3018_);
lean_inc(v_conflict_x3f_3017_);
lean_inc(v_nextCnstrId_3015_);
lean_inc(v_assignment_3014_);
lean_inc(v_occurs_3013_);
lean_inc(v_elimStack_3012_);
lean_inc(v_elimEqs_3011_);
lean_inc(v_diseqs_3010_);
lean_inc(v_uppers_3009_);
lean_inc(v_lowers_3008_);
lean_inc(v_dvds_3007_);
lean_inc(v_natDef_3006_);
lean_inc(v_natToIntMap_3005_);
lean_inc(v_varMap_x27_3004_);
lean_inc(v_vars_x27_3003_);
lean_inc(v_varMap_3002_);
lean_inc(v_vars_3001_);
lean_dec(v_s_3000_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3033_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3029_; lean_object* v___x_3031_; 
v___x_3029_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(v_a_2998_, v_uppers_3009_, v_v_2999_);
if (v_isShared_3028_ == 0)
{
lean_ctor_set(v___x_3027_, 8, v___x_3029_);
v___x_3031_ = v___x_3027_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(0, 23, 2);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_vars_3001_);
lean_ctor_set(v_reuseFailAlloc_3032_, 1, v_varMap_3002_);
lean_ctor_set(v_reuseFailAlloc_3032_, 2, v_vars_x27_3003_);
lean_ctor_set(v_reuseFailAlloc_3032_, 3, v_varMap_x27_3004_);
lean_ctor_set(v_reuseFailAlloc_3032_, 4, v_natToIntMap_3005_);
lean_ctor_set(v_reuseFailAlloc_3032_, 5, v_natDef_3006_);
lean_ctor_set(v_reuseFailAlloc_3032_, 6, v_dvds_3007_);
lean_ctor_set(v_reuseFailAlloc_3032_, 7, v_lowers_3008_);
lean_ctor_set(v_reuseFailAlloc_3032_, 8, v___x_3029_);
lean_ctor_set(v_reuseFailAlloc_3032_, 9, v_diseqs_3010_);
lean_ctor_set(v_reuseFailAlloc_3032_, 10, v_elimEqs_3011_);
lean_ctor_set(v_reuseFailAlloc_3032_, 11, v_elimStack_3012_);
lean_ctor_set(v_reuseFailAlloc_3032_, 12, v_occurs_3013_);
lean_ctor_set(v_reuseFailAlloc_3032_, 13, v_assignment_3014_);
lean_ctor_set(v_reuseFailAlloc_3032_, 14, v_nextCnstrId_3015_);
lean_ctor_set(v_reuseFailAlloc_3032_, 15, v_conflict_x3f_3017_);
lean_ctor_set(v_reuseFailAlloc_3032_, 16, v_diseqSplits_3018_);
lean_ctor_set(v_reuseFailAlloc_3032_, 17, v_divMod_3019_);
lean_ctor_set(v_reuseFailAlloc_3032_, 18, v_toIntIds_3020_);
lean_ctor_set(v_reuseFailAlloc_3032_, 19, v_toIntInfos_3021_);
lean_ctor_set(v_reuseFailAlloc_3032_, 20, v_toIntTermMap_3022_);
lean_ctor_set(v_reuseFailAlloc_3032_, 21, v_toIntVarMap_3023_);
lean_ctor_set(v_reuseFailAlloc_3032_, 22, v_nonlinearOccs_3025_);
lean_ctor_set_uint8(v_reuseFailAlloc_3032_, sizeof(void*)*23, v_caseSplits_3016_);
lean_ctor_set_uint8(v_reuseFailAlloc_3032_, sizeof(void*)*23 + 1, v_usedCommRing_3024_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0___boxed(lean_object* v_a_3034_, lean_object* v_v_3035_, lean_object* v_s_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0(v_a_3034_, v_v_3035_, v_s_3036_);
lean_dec(v_v_3035_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1(lean_object* v_a_3038_, lean_object* v_v_3039_, lean_object* v_s_3040_){
_start:
{
lean_object* v_vars_3041_; lean_object* v_varMap_3042_; lean_object* v_vars_x27_3043_; lean_object* v_varMap_x27_3044_; lean_object* v_natToIntMap_3045_; lean_object* v_natDef_3046_; lean_object* v_dvds_3047_; lean_object* v_lowers_3048_; lean_object* v_uppers_3049_; lean_object* v_diseqs_3050_; lean_object* v_elimEqs_3051_; lean_object* v_elimStack_3052_; lean_object* v_occurs_3053_; lean_object* v_assignment_3054_; lean_object* v_nextCnstrId_3055_; uint8_t v_caseSplits_3056_; lean_object* v_conflict_x3f_3057_; lean_object* v_diseqSplits_3058_; lean_object* v_divMod_3059_; lean_object* v_toIntIds_3060_; lean_object* v_toIntInfos_3061_; lean_object* v_toIntTermMap_3062_; lean_object* v_toIntVarMap_3063_; uint8_t v_usedCommRing_3064_; lean_object* v_nonlinearOccs_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3073_; 
v_vars_3041_ = lean_ctor_get(v_s_3040_, 0);
v_varMap_3042_ = lean_ctor_get(v_s_3040_, 1);
v_vars_x27_3043_ = lean_ctor_get(v_s_3040_, 2);
v_varMap_x27_3044_ = lean_ctor_get(v_s_3040_, 3);
v_natToIntMap_3045_ = lean_ctor_get(v_s_3040_, 4);
v_natDef_3046_ = lean_ctor_get(v_s_3040_, 5);
v_dvds_3047_ = lean_ctor_get(v_s_3040_, 6);
v_lowers_3048_ = lean_ctor_get(v_s_3040_, 7);
v_uppers_3049_ = lean_ctor_get(v_s_3040_, 8);
v_diseqs_3050_ = lean_ctor_get(v_s_3040_, 9);
v_elimEqs_3051_ = lean_ctor_get(v_s_3040_, 10);
v_elimStack_3052_ = lean_ctor_get(v_s_3040_, 11);
v_occurs_3053_ = lean_ctor_get(v_s_3040_, 12);
v_assignment_3054_ = lean_ctor_get(v_s_3040_, 13);
v_nextCnstrId_3055_ = lean_ctor_get(v_s_3040_, 14);
v_caseSplits_3056_ = lean_ctor_get_uint8(v_s_3040_, sizeof(void*)*23);
v_conflict_x3f_3057_ = lean_ctor_get(v_s_3040_, 15);
v_diseqSplits_3058_ = lean_ctor_get(v_s_3040_, 16);
v_divMod_3059_ = lean_ctor_get(v_s_3040_, 17);
v_toIntIds_3060_ = lean_ctor_get(v_s_3040_, 18);
v_toIntInfos_3061_ = lean_ctor_get(v_s_3040_, 19);
v_toIntTermMap_3062_ = lean_ctor_get(v_s_3040_, 20);
v_toIntVarMap_3063_ = lean_ctor_get(v_s_3040_, 21);
v_usedCommRing_3064_ = lean_ctor_get_uint8(v_s_3040_, sizeof(void*)*23 + 1);
v_nonlinearOccs_3065_ = lean_ctor_get(v_s_3040_, 22);
v_isSharedCheck_3073_ = !lean_is_exclusive(v_s_3040_);
if (v_isSharedCheck_3073_ == 0)
{
v___x_3067_ = v_s_3040_;
v_isShared_3068_ = v_isSharedCheck_3073_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_nonlinearOccs_3065_);
lean_inc(v_toIntVarMap_3063_);
lean_inc(v_toIntTermMap_3062_);
lean_inc(v_toIntInfos_3061_);
lean_inc(v_toIntIds_3060_);
lean_inc(v_divMod_3059_);
lean_inc(v_diseqSplits_3058_);
lean_inc(v_conflict_x3f_3057_);
lean_inc(v_nextCnstrId_3055_);
lean_inc(v_assignment_3054_);
lean_inc(v_occurs_3053_);
lean_inc(v_elimStack_3052_);
lean_inc(v_elimEqs_3051_);
lean_inc(v_diseqs_3050_);
lean_inc(v_uppers_3049_);
lean_inc(v_lowers_3048_);
lean_inc(v_dvds_3047_);
lean_inc(v_natDef_3046_);
lean_inc(v_natToIntMap_3045_);
lean_inc(v_varMap_x27_3044_);
lean_inc(v_vars_x27_3043_);
lean_inc(v_varMap_3042_);
lean_inc(v_vars_3041_);
lean_dec(v_s_3040_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3073_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3069_; lean_object* v___x_3071_; 
v___x_3069_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl_spec__0(v_a_3038_, v_lowers_3048_, v_v_3039_);
if (v_isShared_3068_ == 0)
{
lean_ctor_set(v___x_3067_, 7, v___x_3069_);
v___x_3071_ = v___x_3067_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3072_; 
v_reuseFailAlloc_3072_ = lean_alloc_ctor(0, 23, 2);
lean_ctor_set(v_reuseFailAlloc_3072_, 0, v_vars_3041_);
lean_ctor_set(v_reuseFailAlloc_3072_, 1, v_varMap_3042_);
lean_ctor_set(v_reuseFailAlloc_3072_, 2, v_vars_x27_3043_);
lean_ctor_set(v_reuseFailAlloc_3072_, 3, v_varMap_x27_3044_);
lean_ctor_set(v_reuseFailAlloc_3072_, 4, v_natToIntMap_3045_);
lean_ctor_set(v_reuseFailAlloc_3072_, 5, v_natDef_3046_);
lean_ctor_set(v_reuseFailAlloc_3072_, 6, v_dvds_3047_);
lean_ctor_set(v_reuseFailAlloc_3072_, 7, v___x_3069_);
lean_ctor_set(v_reuseFailAlloc_3072_, 8, v_uppers_3049_);
lean_ctor_set(v_reuseFailAlloc_3072_, 9, v_diseqs_3050_);
lean_ctor_set(v_reuseFailAlloc_3072_, 10, v_elimEqs_3051_);
lean_ctor_set(v_reuseFailAlloc_3072_, 11, v_elimStack_3052_);
lean_ctor_set(v_reuseFailAlloc_3072_, 12, v_occurs_3053_);
lean_ctor_set(v_reuseFailAlloc_3072_, 13, v_assignment_3054_);
lean_ctor_set(v_reuseFailAlloc_3072_, 14, v_nextCnstrId_3055_);
lean_ctor_set(v_reuseFailAlloc_3072_, 15, v_conflict_x3f_3057_);
lean_ctor_set(v_reuseFailAlloc_3072_, 16, v_diseqSplits_3058_);
lean_ctor_set(v_reuseFailAlloc_3072_, 17, v_divMod_3059_);
lean_ctor_set(v_reuseFailAlloc_3072_, 18, v_toIntIds_3060_);
lean_ctor_set(v_reuseFailAlloc_3072_, 19, v_toIntInfos_3061_);
lean_ctor_set(v_reuseFailAlloc_3072_, 20, v_toIntTermMap_3062_);
lean_ctor_set(v_reuseFailAlloc_3072_, 21, v_toIntVarMap_3063_);
lean_ctor_set(v_reuseFailAlloc_3072_, 22, v_nonlinearOccs_3065_);
lean_ctor_set_uint8(v_reuseFailAlloc_3072_, sizeof(void*)*23, v_caseSplits_3056_);
lean_ctor_set_uint8(v_reuseFailAlloc_3072_, sizeof(void*)*23 + 1, v_usedCommRing_3064_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1___boxed(lean_object* v_a_3074_, lean_object* v_v_3075_, lean_object* v_s_3076_){
_start:
{
lean_object* v_res_3077_; 
v_res_3077_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1(v_a_3074_, v_v_3075_, v_s_3076_);
lean_dec(v_v_3075_);
return v_res_3077_;
}
}
LEAN_EXPORT lean_object* lean_grind_cutsat_assert_le(lean_object* v_c_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_, lean_object* v_a_3107_, lean_object* v_a_3108_, lean_object* v_a_3109_, lean_object* v_a_3110_, lean_object* v_a_3111_){
_start:
{
lean_object* v___y_3117_; lean_object* v___y_3118_; lean_object* v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v___y_3147_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___y_3153_; lean_object* v___y_3163_; lean_object* v___y_3164_; lean_object* v___y_3165_; lean_object* v___y_3166_; lean_object* v___y_3167_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___x_3185_; 
v___x_3185_ = l_Lean_Meta_Grind_Arith_Cutsat_inconsistent___redArg(v_a_3102_, v_a_3110_);
if (lean_obj_tag(v___x_3185_) == 0)
{
lean_object* v_a_3186_; lean_object* v___x_3188_; uint8_t v_isShared_3189_; uint8_t v_isSharedCheck_3314_; 
v_a_3186_ = lean_ctor_get(v___x_3185_, 0);
v_isSharedCheck_3314_ = !lean_is_exclusive(v___x_3185_);
if (v_isSharedCheck_3314_ == 0)
{
v___x_3188_ = v___x_3185_;
v_isShared_3189_ = v_isSharedCheck_3314_;
goto v_resetjp_3187_;
}
else
{
lean_inc(v_a_3186_);
lean_dec(v___x_3185_);
v___x_3188_ = lean_box(0);
v_isShared_3189_ = v_isSharedCheck_3314_;
goto v_resetjp_3187_;
}
v_resetjp_3187_:
{
uint8_t v___x_3190_; 
v___x_3190_ = lean_unbox(v_a_3186_);
lean_dec(v_a_3186_);
if (v___x_3190_ == 0)
{
lean_object* v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; lean_object* v___y_3195_; lean_object* v___y_3196_; lean_object* v___y_3197_; lean_object* v___y_3198_; lean_object* v___y_3199_; lean_object* v___y_3200_; lean_object* v___y_3201_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v_a_3297_; uint8_t v___x_3298_; 
lean_del_object(v___x_3188_);
v___x_3295_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__7));
v___x_3296_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3295_, v_a_3110_);
v_a_3297_ = lean_ctor_get(v___x_3296_, 0);
lean_inc(v_a_3297_);
lean_dec_ref(v___x_3296_);
v___x_3298_ = lean_unbox(v_a_3297_);
lean_dec(v_a_3297_);
if (v___x_3298_ == 0)
{
v___y_3192_ = v_a_3102_;
v___y_3193_ = v_a_3103_;
v___y_3194_ = v_a_3104_;
v___y_3195_ = v_a_3105_;
v___y_3196_ = v_a_3106_;
v___y_3197_ = v_a_3107_;
v___y_3198_ = v_a_3108_;
v___y_3199_ = v_a_3109_;
v___y_3200_ = v_a_3110_;
v___y_3201_ = v_a_3111_;
goto v___jp_3191_;
}
else
{
lean_object* v___x_3299_; 
lean_inc_ref(v_c_3101_);
v___x_3299_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_c_3101_, v_a_3102_, v_a_3110_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v_a_3300_; lean_object* v___x_3301_; 
v_a_3300_ = lean_ctor_get(v___x_3299_, 0);
lean_inc(v_a_3300_);
lean_dec_ref(v___x_3299_);
v___x_3301_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v___x_3295_, v_a_3300_, v_a_3108_, v_a_3109_, v_a_3110_, v_a_3111_);
if (lean_obj_tag(v___x_3301_) == 0)
{
lean_dec_ref(v___x_3301_);
v___y_3192_ = v_a_3102_;
v___y_3193_ = v_a_3103_;
v___y_3194_ = v_a_3104_;
v___y_3195_ = v_a_3105_;
v___y_3196_ = v_a_3106_;
v___y_3197_ = v_a_3107_;
v___y_3198_ = v_a_3108_;
v___y_3199_ = v_a_3109_;
v___y_3200_ = v_a_3110_;
v___y_3201_ = v_a_3111_;
goto v___jp_3191_;
}
else
{
lean_dec(v_a_3111_);
lean_dec_ref(v_a_3110_);
lean_dec(v_a_3109_);
lean_dec_ref(v_a_3108_);
lean_dec(v_a_3107_);
lean_dec_ref(v_a_3106_);
lean_dec(v_a_3105_);
lean_dec_ref(v_a_3104_);
lean_dec(v_a_3103_);
lean_dec(v_a_3102_);
lean_dec_ref(v_c_3101_);
return v___x_3301_;
}
}
else
{
lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3309_; 
lean_dec(v_a_3111_);
lean_dec_ref(v_a_3110_);
lean_dec(v_a_3109_);
lean_dec_ref(v_a_3108_);
lean_dec(v_a_3107_);
lean_dec_ref(v_a_3106_);
lean_dec(v_a_3105_);
lean_dec_ref(v_a_3104_);
lean_dec(v_a_3103_);
lean_dec(v_a_3102_);
lean_dec_ref(v_c_3101_);
v_a_3302_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3309_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3309_ == 0)
{
v___x_3304_ = v___x_3299_;
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v___x_3299_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3309_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3307_; 
if (v_isShared_3305_ == 0)
{
v___x_3307_ = v___x_3304_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v_a_3302_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
}
v___jp_3191_:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3202_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_norm(v_c_3101_);
lean_inc_ref(v___y_3200_);
v___x_3203_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applySubsts(v___x_3202_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
if (lean_obj_tag(v___x_3203_) == 0)
{
lean_object* v_a_3204_; lean_object* v_p_3205_; uint8_t v___x_3206_; 
v_a_3204_ = lean_ctor_get(v___x_3203_, 0);
lean_inc(v_a_3204_);
lean_dec_ref(v___x_3203_);
v_p_3205_ = lean_ctor_get(v_a_3204_, 0);
v___x_3206_ = l_Int_Linear_Poly_isUnsatLe(v_p_3205_);
if (v___x_3206_ == 0)
{
uint8_t v___x_3207_; 
v___x_3207_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_isTrivial(v_a_3204_);
if (v___x_3207_ == 0)
{
if (lean_obj_tag(v_p_3205_) == 1)
{
lean_object* v_k_3208_; lean_object* v_v_3209_; lean_object* v___x_3210_; 
v_k_3208_ = lean_ctor_get(v_p_3205_, 0);
lean_inc(v_k_3208_);
v_v_3209_ = lean_ctor_get(v_p_3205_, 1);
lean_inc(v_v_3209_);
lean_inc(v_a_3204_);
v___x_3210_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_findEq(v_a_3204_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3247_; 
v_a_3211_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3247_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3247_ == 0)
{
v___x_3213_ = v___x_3210_;
v_isShared_3214_ = v_isSharedCheck_3247_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v___x_3210_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3247_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
uint8_t v___x_3215_; 
v___x_3215_ = lean_unbox(v_a_3211_);
lean_dec(v_a_3211_);
if (v___x_3215_ == 0)
{
lean_object* v___x_3216_; 
lean_del_object(v___x_3213_);
v___x_3216_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq(v_a_3204_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v_a_3220_; lean_object* v___f_3221_; lean_object* v___f_3222_; uint8_t v___x_3223_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3217_);
lean_dec_ref(v___x_3216_);
v___x_3218_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__2));
v___x_3219_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3218_, v___y_3200_);
v_a_3220_ = lean_ctor_get(v___x_3219_, 0);
lean_inc(v_a_3220_);
lean_dec_ref(v___x_3219_);
lean_inc(v_v_3209_);
lean_inc(v_a_3217_);
v___f_3221_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3221_, 0, v_a_3217_);
lean_closure_set(v___f_3221_, 1, v_v_3209_);
lean_inc(v_v_3209_);
lean_inc(v_a_3217_);
v___f_3222_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___lam__1___boxed), 3, 2);
lean_closure_set(v___f_3222_, 0, v_a_3217_);
lean_closure_set(v___f_3222_, 1, v_v_3209_);
v___x_3223_ = lean_unbox(v_a_3220_);
lean_dec(v_a_3220_);
if (v___x_3223_ == 0)
{
v___y_3144_ = v___f_3222_;
v___y_3145_ = v___f_3221_;
v___y_3146_ = v_k_3208_;
v___y_3147_ = v_a_3217_;
v___y_3148_ = v_v_3209_;
v___y_3149_ = v___y_3192_;
v___y_3150_ = v___y_3198_;
v___y_3151_ = v___y_3199_;
v___y_3152_ = v___y_3200_;
v___y_3153_ = v___y_3201_;
goto v___jp_3143_;
}
else
{
lean_object* v___x_3224_; 
lean_inc(v_a_3217_);
v___x_3224_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_a_3217_, v___y_3192_, v___y_3200_);
if (lean_obj_tag(v___x_3224_) == 0)
{
lean_object* v_a_3225_; lean_object* v___x_3226_; 
v_a_3225_ = lean_ctor_get(v___x_3224_, 0);
lean_inc(v_a_3225_);
lean_dec_ref(v___x_3224_);
v___x_3226_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v___x_3218_, v_a_3225_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_dec_ref(v___x_3226_);
v___y_3144_ = v___f_3222_;
v___y_3145_ = v___f_3221_;
v___y_3146_ = v_k_3208_;
v___y_3147_ = v_a_3217_;
v___y_3148_ = v_v_3209_;
v___y_3149_ = v___y_3192_;
v___y_3150_ = v___y_3198_;
v___y_3151_ = v___y_3199_;
v___y_3152_ = v___y_3200_;
v___y_3153_ = v___y_3201_;
goto v___jp_3143_;
}
else
{
lean_dec_ref(v___f_3222_);
lean_dec_ref(v___f_3221_);
lean_dec(v_a_3217_);
lean_dec(v_v_3209_);
lean_dec(v_k_3208_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3192_);
return v___x_3226_;
}
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_dec_ref(v___f_3222_);
lean_dec_ref(v___f_3221_);
lean_dec(v_a_3217_);
lean_dec(v_v_3209_);
lean_dec(v_k_3208_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3192_);
v_a_3227_ = lean_ctor_get(v___x_3224_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3224_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3224_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3224_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
}
else
{
lean_object* v_a_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3242_; 
lean_dec(v_v_3209_);
lean_dec(v_k_3208_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3192_);
v_a_3235_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3237_ = v___x_3216_;
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_a_3235_);
lean_dec(v___x_3216_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3242_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___x_3240_; 
if (v_isShared_3238_ == 0)
{
v___x_3240_ = v___x_3237_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3235_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
else
{
lean_object* v___x_3243_; lean_object* v___x_3245_; 
lean_dec(v_v_3209_);
lean_dec(v_k_3208_);
lean_dec(v_a_3204_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
v___x_3243_ = lean_box(0);
if (v_isShared_3214_ == 0)
{
lean_ctor_set(v___x_3213_, 0, v___x_3243_);
v___x_3245_ = v___x_3213_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3243_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
}
}
else
{
lean_object* v_a_3248_; lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3255_; 
lean_dec(v_v_3209_);
lean_dec(v_k_3208_);
lean_dec(v_a_3204_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
v_a_3248_ = lean_ctor_get(v___x_3210_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3210_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3250_ = v___x_3210_;
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
else
{
lean_inc(v_a_3248_);
lean_dec(v___x_3210_);
v___x_3250_ = lean_box(0);
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
v_resetjp_3249_:
{
lean_object* v___x_3253_; 
if (v_isShared_3251_ == 0)
{
v___x_3253_ = v___x_3250_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v_a_3248_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
return v___x_3253_;
}
}
}
}
else
{
lean_object* v___x_3256_; 
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
v___x_3256_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_throwUnexpected___redArg(v_a_3204_, v___y_3192_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3192_);
return v___x_3256_;
}
}
else
{
lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v_a_3259_; uint8_t v___x_3260_; 
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
v___x_3257_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__4));
v___x_3258_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3257_, v___y_3200_);
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_a_3259_);
lean_dec_ref(v___x_3258_);
v___x_3260_ = lean_unbox(v_a_3259_);
lean_dec(v_a_3259_);
if (v___x_3260_ == 0)
{
lean_dec(v_a_3204_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3192_);
goto v___jp_3113_;
}
else
{
lean_object* v___x_3261_; 
v___x_3261_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_a_3204_, v___y_3192_, v___y_3200_);
lean_dec(v___y_3192_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; lean_object* v___x_3263_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3262_);
lean_dec_ref(v___x_3261_);
v___x_3263_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v___x_3257_, v_a_3262_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_dec_ref(v___x_3263_);
goto v___jp_3113_;
}
else
{
return v___x_3263_;
}
}
else
{
lean_object* v_a_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3271_; 
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
v_a_3264_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3266_ = v___x_3261_;
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_a_3264_);
lean_dec(v___x_3261_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3269_; 
if (v_isShared_3267_ == 0)
{
v___x_3269_ = v___x_3266_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_a_3264_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
return v___x_3269_;
}
}
}
}
}
}
else
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v_a_3274_; uint8_t v___x_3275_; 
v___x_3272_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___closed__6));
v___x_3273_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__0___redArg(v___x_3272_, v___y_3200_);
v_a_3274_ = lean_ctor_get(v___x_3273_, 0);
lean_inc(v_a_3274_);
lean_dec_ref(v___x_3273_);
v___x_3275_ = lean_unbox(v_a_3274_);
lean_dec(v_a_3274_);
if (v___x_3275_ == 0)
{
v___y_3163_ = v_a_3204_;
v___y_3164_ = v___y_3192_;
v___y_3165_ = v___y_3193_;
v___y_3166_ = v___y_3194_;
v___y_3167_ = v___y_3195_;
v___y_3168_ = v___y_3196_;
v___y_3169_ = v___y_3197_;
v___y_3170_ = v___y_3198_;
v___y_3171_ = v___y_3199_;
v___y_3172_ = v___y_3200_;
v___y_3173_ = v___y_3201_;
goto v___jp_3162_;
}
else
{
lean_object* v___x_3276_; 
lean_inc(v_a_3204_);
v___x_3276_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_pp___redArg(v_a_3204_, v___y_3192_, v___y_3200_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v_a_3277_; lean_object* v___x_3278_; 
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3277_);
lean_dec_ref(v___x_3276_);
v___x_3278_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq_spec__1___redArg(v___x_3272_, v_a_3277_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_dec_ref(v___x_3278_);
v___y_3163_ = v_a_3204_;
v___y_3164_ = v___y_3192_;
v___y_3165_ = v___y_3193_;
v___y_3166_ = v___y_3194_;
v___y_3167_ = v___y_3195_;
v___y_3168_ = v___y_3196_;
v___y_3169_ = v___y_3197_;
v___y_3170_ = v___y_3198_;
v___y_3171_ = v___y_3199_;
v___y_3172_ = v___y_3200_;
v___y_3173_ = v___y_3201_;
goto v___jp_3162_;
}
else
{
lean_dec(v_a_3204_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
return v___x_3278_;
}
}
else
{
lean_object* v_a_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3286_; 
lean_dec(v_a_3204_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
v_a_3279_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3281_ = v___x_3276_;
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_a_3279_);
lean_dec(v___x_3276_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3284_; 
if (v_isShared_3282_ == 0)
{
v___x_3284_ = v___x_3281_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_a_3279_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
}
}
}
}
}
}
else
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3294_; 
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
v_a_3287_ = lean_ctor_get(v___x_3203_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3203_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3289_ = v___x_3203_;
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v___x_3203_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3292_; 
if (v_isShared_3290_ == 0)
{
v___x_3292_ = v___x_3289_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3287_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
}
}
else
{
lean_object* v___x_3310_; lean_object* v___x_3312_; 
lean_dec(v_a_3111_);
lean_dec_ref(v_a_3110_);
lean_dec(v_a_3109_);
lean_dec_ref(v_a_3108_);
lean_dec(v_a_3107_);
lean_dec_ref(v_a_3106_);
lean_dec(v_a_3105_);
lean_dec_ref(v_a_3104_);
lean_dec(v_a_3103_);
lean_dec(v_a_3102_);
lean_dec_ref(v_c_3101_);
v___x_3310_ = lean_box(0);
if (v_isShared_3189_ == 0)
{
lean_ctor_set(v___x_3188_, 0, v___x_3310_);
v___x_3312_ = v___x_3188_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v___x_3310_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
return v___x_3312_;
}
}
}
}
else
{
lean_object* v_a_3315_; lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3322_; 
lean_dec(v_a_3111_);
lean_dec_ref(v_a_3110_);
lean_dec(v_a_3109_);
lean_dec_ref(v_a_3108_);
lean_dec(v_a_3107_);
lean_dec_ref(v_a_3106_);
lean_dec(v_a_3105_);
lean_dec_ref(v_a_3104_);
lean_dec(v_a_3103_);
lean_dec(v_a_3102_);
lean_dec_ref(v_c_3101_);
v_a_3315_ = lean_ctor_get(v___x_3185_, 0);
v_isSharedCheck_3322_ = !lean_is_exclusive(v___x_3185_);
if (v_isSharedCheck_3322_ == 0)
{
v___x_3317_ = v___x_3185_;
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
else
{
lean_inc(v_a_3315_);
lean_dec(v___x_3185_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3320_; 
if (v_isShared_3318_ == 0)
{
v___x_3320_ = v___x_3317_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3321_; 
v_reuseFailAlloc_3321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3321_, 0, v_a_3315_);
v___x_3320_ = v_reuseFailAlloc_3321_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
return v___x_3320_;
}
}
}
v___jp_3113_:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3114_ = lean_box(0);
v___x_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
return v___x_3115_;
}
v___jp_3116_:
{
lean_object* v___x_3121_; 
v___x_3121_ = l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_satisfied___redArg(v___y_3117_, v___y_3119_, v___y_3120_);
lean_dec_ref(v___y_3120_);
if (lean_obj_tag(v___x_3121_) == 0)
{
lean_object* v_a_3122_; lean_object* v___x_3124_; uint8_t v_isShared_3125_; uint8_t v_isSharedCheck_3134_; 
v_a_3122_ = lean_ctor_get(v___x_3121_, 0);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3124_ = v___x_3121_;
v_isShared_3125_ = v_isSharedCheck_3134_;
goto v_resetjp_3123_;
}
else
{
lean_inc(v_a_3122_);
lean_dec(v___x_3121_);
v___x_3124_ = lean_box(0);
v_isShared_3125_ = v_isSharedCheck_3134_;
goto v_resetjp_3123_;
}
v_resetjp_3123_:
{
uint8_t v___x_3126_; uint8_t v___x_3127_; uint8_t v___x_3128_; 
v___x_3126_ = 0;
v___x_3127_ = lean_unbox(v_a_3122_);
lean_dec(v_a_3122_);
v___x_3128_ = l_Lean_instBEqLBool_beq(v___x_3127_, v___x_3126_);
if (v___x_3128_ == 0)
{
lean_object* v___x_3129_; lean_object* v___x_3131_; 
lean_dec(v___y_3119_);
lean_dec(v___y_3118_);
v___x_3129_ = lean_box(0);
if (v_isShared_3125_ == 0)
{
lean_ctor_set(v___x_3124_, 0, v___x_3129_);
v___x_3131_ = v___x_3124_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v___x_3129_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
else
{
lean_object* v___x_3133_; 
lean_del_object(v___x_3124_);
v___x_3133_ = l_Lean_Meta_Grind_Arith_Cutsat_resetAssignmentFrom___redArg(v___y_3118_, v___y_3119_);
lean_dec(v___y_3119_);
return v___x_3133_;
}
}
}
else
{
lean_object* v_a_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3142_; 
lean_dec(v___y_3119_);
lean_dec(v___y_3118_);
v_a_3135_ = lean_ctor_get(v___x_3121_, 0);
v_isSharedCheck_3142_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3142_ == 0)
{
v___x_3137_ = v___x_3121_;
v_isShared_3138_ = v_isSharedCheck_3142_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_a_3135_);
lean_dec(v___x_3121_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3142_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v___x_3140_; 
if (v_isShared_3138_ == 0)
{
v___x_3140_ = v___x_3137_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_a_3135_);
v___x_3140_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
return v___x_3140_;
}
}
}
}
v___jp_3143_:
{
lean_object* v_p_3154_; lean_object* v___x_3155_; 
v_p_3154_ = lean_ctor_get(v___y_3147_, 0);
lean_inc_ref(v_p_3154_);
v___x_3155_ = l_Int_Linear_Poly_updateOccs___redArg(v_p_3154_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_);
lean_dec(v___y_3153_);
lean_dec(v___y_3151_);
lean_dec_ref(v___y_3150_);
if (lean_obj_tag(v___x_3155_) == 0)
{
lean_object* v___x_3156_; uint8_t v___x_3157_; 
lean_dec_ref(v___x_3155_);
v___x_3156_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6);
v___x_3157_ = lean_int_dec_lt(v___y_3146_, v___x_3156_);
lean_dec(v___y_3146_);
if (v___x_3157_ == 0)
{
lean_object* v___x_3158_; lean_object* v___x_3159_; 
lean_dec_ref(v___y_3144_);
v___x_3158_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_3159_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3158_, v___y_3145_, v___y_3149_);
if (lean_obj_tag(v___x_3159_) == 0)
{
lean_dec_ref(v___x_3159_);
v___y_3117_ = v___y_3147_;
v___y_3118_ = v___y_3148_;
v___y_3119_ = v___y_3149_;
v___y_3120_ = v___y_3152_;
goto v___jp_3116_;
}
else
{
lean_dec_ref(v___y_3152_);
lean_dec(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
return v___x_3159_;
}
}
else
{
lean_object* v___x_3160_; lean_object* v___x_3161_; 
lean_dec_ref(v___y_3145_);
v___x_3160_ = l_Lean_Meta_Grind_Arith_Cutsat_cutsatExt;
v___x_3161_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3160_, v___y_3144_, v___y_3149_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_dec_ref(v___x_3161_);
v___y_3117_ = v___y_3147_;
v___y_3118_ = v___y_3148_;
v___y_3119_ = v___y_3149_;
v___y_3120_ = v___y_3152_;
goto v___jp_3116_;
}
else
{
lean_dec_ref(v___y_3152_);
lean_dec(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
return v___x_3161_;
}
}
}
else
{
lean_dec_ref(v___y_3152_);
lean_dec(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
lean_dec(v___y_3146_);
lean_dec_ref(v___y_3145_);
lean_dec_ref(v___y_3144_);
return v___x_3155_;
}
}
v___jp_3162_:
{
lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3174_, 0, v___y_3163_);
v___x_3175_ = l_Lean_Meta_Grind_Arith_Cutsat_setInconsistent(v___x_3174_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
lean_dec(v___y_3173_);
lean_dec_ref(v___y_3172_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec(v___y_3167_);
lean_dec_ref(v___y_3166_);
lean_dec(v___y_3165_);
lean_dec(v___y_3164_);
if (lean_obj_tag(v___x_3175_) == 0)
{
lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3183_; 
v_isSharedCheck_3183_ = !lean_is_exclusive(v___x_3175_);
if (v_isSharedCheck_3183_ == 0)
{
lean_object* v_unused_3184_; 
v_unused_3184_ = lean_ctor_get(v___x_3175_, 0);
lean_dec(v_unused_3184_);
v___x_3177_ = v___x_3175_;
v_isShared_3178_ = v_isSharedCheck_3183_;
goto v_resetjp_3176_;
}
else
{
lean_dec(v___x_3175_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3183_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3179_; lean_object* v___x_3181_; 
v___x_3179_ = lean_box(0);
if (v_isShared_3178_ == 0)
{
lean_ctor_set(v___x_3177_, 0, v___x_3179_);
v___x_3181_ = v___x_3177_;
goto v_reusejp_3180_;
}
else
{
lean_object* v_reuseFailAlloc_3182_; 
v_reuseFailAlloc_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3182_, 0, v___x_3179_);
v___x_3181_ = v_reuseFailAlloc_3182_;
goto v_reusejp_3180_;
}
v_reusejp_3180_:
{
return v___x_3181_;
}
}
}
else
{
return v___x_3175_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertImpl___boxed(lean_object* v_c_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_, lean_object* v_a_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_){
_start:
{
lean_object* v_res_3335_; 
v_res_3335_ = lean_grind_cutsat_assert_le(v_c_3323_, v_a_3324_, v_a_3325_, v_a_3326_, v_a_3327_, v_a_3328_, v_a_3329_, v_a_3330_, v_a_3331_, v_a_3332_, v_a_3333_);
return v_res_3335_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1(void){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___x_3337_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__0));
v___x_3338_ = l_Lean_stringToMessageData(v___x_3337_);
return v___x_3338_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(lean_object* v_e_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_, lean_object* v_a_3344_, lean_object* v_a_3345_){
_start:
{
lean_object* v___x_3347_; 
v___x_3347_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_3340_);
if (lean_obj_tag(v___x_3347_) == 0)
{
lean_object* v_a_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3361_; 
v_a_3348_ = lean_ctor_get(v___x_3347_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3347_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3350_ = v___x_3347_;
v_isShared_3351_ = v_isSharedCheck_3361_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_a_3348_);
lean_dec(v___x_3347_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3361_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
uint8_t v___x_3352_; 
v___x_3352_ = lean_unbox(v_a_3348_);
lean_dec(v_a_3348_);
if (v___x_3352_ == 0)
{
lean_object* v___x_3353_; lean_object* v___x_3355_; 
lean_dec_ref(v_e_3339_);
v___x_3353_ = lean_box(0);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v___x_3353_);
v___x_3355_ = v___x_3350_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v___x_3353_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
else
{
lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
lean_del_object(v___x_3350_);
v___x_3357_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___closed__1);
v___x_3358_ = l_Lean_indentExpr(v_e_3339_);
v___x_3359_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3357_);
lean_ctor_set(v___x_3359_, 1, v___x_3358_);
v___x_3360_ = l_Lean_Meta_Sym_reportIssue(v___x_3359_, v_a_3340_, v_a_3341_, v_a_3342_, v_a_3343_, v_a_3344_, v_a_3345_);
return v___x_3360_;
}
}
}
else
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
lean_dec_ref(v_e_3339_);
v_a_3362_ = lean_ctor_get(v___x_3347_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3347_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3347_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3347_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg___boxed(lean_object* v_e_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_, lean_object* v_a_3376_, lean_object* v_a_3377_){
_start:
{
lean_object* v_res_3378_; 
v_res_3378_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(v_e_3370_, v_a_3371_, v_a_3372_, v_a_3373_, v_a_3374_, v_a_3375_, v_a_3376_);
lean_dec(v_a_3376_);
lean_dec_ref(v_a_3375_);
lean_dec(v_a_3374_);
lean_dec_ref(v_a_3373_);
lean_dec(v_a_3372_);
lean_dec_ref(v_a_3371_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized(lean_object* v_e_3379_, lean_object* v_a_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_, lean_object* v_a_3383_, lean_object* v_a_3384_, lean_object* v_a_3385_, lean_object* v_a_3386_, lean_object* v_a_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_){
_start:
{
lean_object* v___x_3391_; 
v___x_3391_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(v_e_3379_, v_a_3384_, v_a_3385_, v_a_3386_, v_a_3387_, v_a_3388_, v_a_3389_);
return v___x_3391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___boxed(lean_object* v_e_3392_, lean_object* v_a_3393_, lean_object* v_a_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized(v_e_3392_, v_a_3393_, v_a_3394_, v_a_3395_, v_a_3396_, v_a_3397_, v_a_3398_, v_a_3399_, v_a_3400_, v_a_3401_, v_a_3402_);
lean_dec(v_a_3402_);
lean_dec_ref(v_a_3401_);
lean_dec(v_a_3400_);
lean_dec_ref(v_a_3399_);
lean_dec(v_a_3398_);
lean_dec_ref(v_a_3397_);
lean_dec(v_a_3396_);
lean_dec_ref(v_a_3395_);
lean_dec(v_a_3394_);
lean_dec(v_a_3393_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f(lean_object* v_e_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_, lean_object* v_a_3414_, lean_object* v_a_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_){
_start:
{
lean_object* v___x_3422_; 
lean_inc_ref(v_e_3410_);
v___x_3422_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_3410_, v_a_3418_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3538_; 
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3538_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3538_ == 0)
{
v___x_3425_ = v___x_3422_;
v_isShared_3426_ = v_isSharedCheck_3538_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3422_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3538_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3432_; uint8_t v___x_3433_; 
v___x_3432_ = l_Lean_Expr_cleanupAnnotations(v_a_3423_);
v___x_3433_ = l_Lean_Expr_isApp(v___x_3432_);
if (v___x_3433_ == 0)
{
lean_dec_ref(v___x_3432_);
lean_dec_ref(v_e_3410_);
goto v___jp_3427_;
}
else
{
lean_object* v_arg_3434_; lean_object* v___x_3435_; uint8_t v___x_3436_; 
v_arg_3434_ = lean_ctor_get(v___x_3432_, 1);
lean_inc_ref(v_arg_3434_);
v___x_3435_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3432_);
v___x_3436_ = l_Lean_Expr_isApp(v___x_3435_);
if (v___x_3436_ == 0)
{
lean_dec_ref(v___x_3435_);
lean_dec_ref(v_arg_3434_);
lean_dec_ref(v_e_3410_);
goto v___jp_3427_;
}
else
{
lean_object* v_arg_3437_; lean_object* v___x_3438_; uint8_t v___x_3439_; 
v_arg_3437_ = lean_ctor_get(v___x_3435_, 1);
lean_inc_ref(v_arg_3437_);
v___x_3438_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3435_);
v___x_3439_ = l_Lean_Expr_isApp(v___x_3438_);
if (v___x_3439_ == 0)
{
lean_dec_ref(v___x_3438_);
lean_dec_ref(v_arg_3437_);
lean_dec_ref(v_arg_3434_);
lean_dec_ref(v_e_3410_);
goto v___jp_3427_;
}
else
{
lean_object* v_arg_3440_; lean_object* v___x_3441_; uint8_t v___x_3442_; 
v_arg_3440_ = lean_ctor_get(v___x_3438_, 1);
lean_inc_ref(v_arg_3440_);
v___x_3441_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3438_);
v___x_3442_ = l_Lean_Expr_isApp(v___x_3441_);
if (v___x_3442_ == 0)
{
lean_dec_ref(v___x_3441_);
lean_dec_ref(v_arg_3440_);
lean_dec_ref(v_arg_3437_);
lean_dec_ref(v_arg_3434_);
lean_dec_ref(v_e_3410_);
goto v___jp_3427_;
}
else
{
lean_object* v___x_3443_; lean_object* v___x_3444_; uint8_t v___x_3445_; 
v___x_3443_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3441_);
v___x_3444_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2));
v___x_3445_ = l_Lean_Expr_isConstOf(v___x_3443_, v___x_3444_);
lean_dec_ref(v___x_3443_);
if (v___x_3445_ == 0)
{
lean_dec_ref(v_arg_3440_);
lean_dec_ref(v_arg_3437_);
lean_dec_ref(v_arg_3434_);
lean_dec_ref(v_e_3410_);
goto v___jp_3427_;
}
else
{
lean_object* v___x_3446_; 
lean_del_object(v___x_3425_);
v___x_3446_ = l_Lean_Meta_Structural_isInstLEInt___redArg(v_arg_3440_, v_a_3418_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_a_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3529_; 
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3529_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3529_ == 0)
{
v___x_3449_ = v___x_3446_;
v_isShared_3450_ = v_isSharedCheck_3529_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3446_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3529_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
uint8_t v___x_3451_; 
v___x_3451_ = lean_unbox(v_a_3447_);
lean_dec(v_a_3447_);
if (v___x_3451_ == 0)
{
lean_object* v___x_3452_; lean_object* v___x_3454_; 
lean_dec_ref(v_arg_3437_);
lean_dec_ref(v_arg_3434_);
lean_dec_ref(v_e_3410_);
v___x_3452_ = lean_box(0);
if (v_isShared_3450_ == 0)
{
lean_ctor_set(v___x_3449_, 0, v___x_3452_);
v___x_3454_ = v___x_3449_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3452_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
else
{
lean_object* v___x_3456_; 
lean_del_object(v___x_3449_);
v___x_3456_ = l_Lean_Meta_getIntValue_x3f(v_arg_3434_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v_a_3457_; 
v_a_3457_ = lean_ctor_get(v___x_3456_, 0);
lean_inc(v_a_3457_);
lean_dec_ref(v___x_3456_);
if (lean_obj_tag(v_a_3457_) == 1)
{
lean_object* v_val_3458_; lean_object* v___x_3460_; uint8_t v_isShared_3461_; uint8_t v_isSharedCheck_3502_; 
v_val_3458_ = lean_ctor_get(v_a_3457_, 0);
v_isSharedCheck_3502_ = !lean_is_exclusive(v_a_3457_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3460_ = v_a_3457_;
v_isShared_3461_ = v_isSharedCheck_3502_;
goto v_resetjp_3459_;
}
else
{
lean_inc(v_val_3458_);
lean_dec(v_a_3457_);
v___x_3460_ = lean_box(0);
v_isShared_3461_ = v_isSharedCheck_3502_;
goto v_resetjp_3459_;
}
v_resetjp_3459_:
{
lean_object* v___x_3462_; uint8_t v___x_3463_; 
v___x_3462_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6, &l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_LeCnstr_applyEq___closed__6);
v___x_3463_ = lean_int_dec_eq(v_val_3458_, v___x_3462_);
lean_dec(v_val_3458_);
if (v___x_3463_ == 0)
{
lean_object* v___x_3464_; 
lean_del_object(v___x_3460_);
lean_dec_ref(v_arg_3437_);
v___x_3464_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(v_e_3410_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3472_; 
v_isSharedCheck_3472_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3472_ == 0)
{
lean_object* v_unused_3473_; 
v_unused_3473_ = lean_ctor_get(v___x_3464_, 0);
lean_dec(v_unused_3473_);
v___x_3466_ = v___x_3464_;
v_isShared_3467_ = v_isSharedCheck_3472_;
goto v_resetjp_3465_;
}
else
{
lean_dec(v___x_3464_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3472_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
lean_object* v___x_3468_; lean_object* v___x_3470_; 
v___x_3468_ = lean_box(0);
if (v_isShared_3467_ == 0)
{
lean_ctor_set(v___x_3466_, 0, v___x_3468_);
v___x_3470_ = v___x_3466_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v___x_3468_);
v___x_3470_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3469_;
}
v_reusejp_3469_:
{
return v___x_3470_;
}
}
}
else
{
lean_object* v_a_3474_; lean_object* v___x_3476_; uint8_t v_isShared_3477_; uint8_t v_isSharedCheck_3481_; 
v_a_3474_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3481_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3481_ == 0)
{
v___x_3476_ = v___x_3464_;
v_isShared_3477_ = v_isSharedCheck_3481_;
goto v_resetjp_3475_;
}
else
{
lean_inc(v_a_3474_);
lean_dec(v___x_3464_);
v___x_3476_ = lean_box(0);
v_isShared_3477_ = v_isSharedCheck_3481_;
goto v_resetjp_3475_;
}
v_resetjp_3475_:
{
lean_object* v___x_3479_; 
if (v_isShared_3477_ == 0)
{
v___x_3479_ = v___x_3476_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v_a_3474_);
v___x_3479_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
return v___x_3479_;
}
}
}
}
else
{
lean_object* v___x_3482_; 
lean_dec_ref(v_e_3410_);
v___x_3482_ = l_Lean_Meta_Grind_Arith_Cutsat_toPoly(v_arg_3437_, v_a_3411_, v_a_3412_, v_a_3413_, v_a_3414_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
if (lean_obj_tag(v___x_3482_) == 0)
{
lean_object* v_a_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3493_; 
v_a_3483_ = lean_ctor_get(v___x_3482_, 0);
v_isSharedCheck_3493_ = !lean_is_exclusive(v___x_3482_);
if (v_isSharedCheck_3493_ == 0)
{
v___x_3485_ = v___x_3482_;
v_isShared_3486_ = v_isSharedCheck_3493_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_a_3483_);
lean_dec(v___x_3482_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3493_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3488_; 
if (v_isShared_3461_ == 0)
{
lean_ctor_set(v___x_3460_, 0, v_a_3483_);
v___x_3488_ = v___x_3460_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v_a_3483_);
v___x_3488_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
lean_object* v___x_3490_; 
if (v_isShared_3486_ == 0)
{
lean_ctor_set(v___x_3485_, 0, v___x_3488_);
v___x_3490_ = v___x_3485_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v___x_3488_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
else
{
lean_object* v_a_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3501_; 
lean_del_object(v___x_3460_);
v_a_3494_ = lean_ctor_get(v___x_3482_, 0);
v_isSharedCheck_3501_ = !lean_is_exclusive(v___x_3482_);
if (v_isSharedCheck_3501_ == 0)
{
v___x_3496_ = v___x_3482_;
v_isShared_3497_ = v_isSharedCheck_3501_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_a_3494_);
lean_dec(v___x_3482_);
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
v_reuseFailAlloc_3500_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
else
{
lean_object* v___x_3503_; 
lean_dec(v_a_3457_);
lean_dec_ref(v_arg_3437_);
v___x_3503_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_reportNonNormalized___redArg(v_e_3410_, v_a_3415_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v___x_3505_; uint8_t v_isShared_3506_; uint8_t v_isSharedCheck_3511_; 
v_isSharedCheck_3511_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3511_ == 0)
{
lean_object* v_unused_3512_; 
v_unused_3512_ = lean_ctor_get(v___x_3503_, 0);
lean_dec(v_unused_3512_);
v___x_3505_ = v___x_3503_;
v_isShared_3506_ = v_isSharedCheck_3511_;
goto v_resetjp_3504_;
}
else
{
lean_dec(v___x_3503_);
v___x_3505_ = lean_box(0);
v_isShared_3506_ = v_isSharedCheck_3511_;
goto v_resetjp_3504_;
}
v_resetjp_3504_:
{
lean_object* v___x_3507_; lean_object* v___x_3509_; 
v___x_3507_ = lean_box(0);
if (v_isShared_3506_ == 0)
{
lean_ctor_set(v___x_3505_, 0, v___x_3507_);
v___x_3509_ = v___x_3505_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3510_; 
v_reuseFailAlloc_3510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3510_, 0, v___x_3507_);
v___x_3509_ = v_reuseFailAlloc_3510_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
return v___x_3509_;
}
}
}
else
{
lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3520_; 
v_a_3513_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3515_ = v___x_3503_;
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_3503_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3520_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3518_; 
if (v_isShared_3516_ == 0)
{
v___x_3518_ = v___x_3515_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v_a_3513_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
}
}
}
else
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3528_; 
lean_dec_ref(v_arg_3437_);
lean_dec_ref(v_e_3410_);
v_a_3521_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3523_ = v___x_3456_;
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_3456_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3526_; 
if (v_isShared_3524_ == 0)
{
v___x_3526_ = v___x_3523_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3521_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
}
}
}
else
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3537_; 
lean_dec_ref(v_arg_3437_);
lean_dec_ref(v_arg_3434_);
lean_dec_ref(v_e_3410_);
v_a_3530_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3532_ = v___x_3446_;
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___x_3446_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3537_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___x_3535_; 
if (v_isShared_3533_ == 0)
{
v___x_3535_ = v___x_3532_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v_a_3530_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
}
}
}
}
}
}
}
}
v___jp_3427_:
{
lean_object* v___x_3428_; lean_object* v___x_3430_; 
v___x_3428_ = lean_box(0);
if (v_isShared_3426_ == 0)
{
lean_ctor_set(v___x_3425_, 0, v___x_3428_);
v___x_3430_ = v___x_3425_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v___x_3428_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
else
{
lean_object* v_a_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3546_; 
lean_dec_ref(v_e_3410_);
v_a_3539_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3546_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3541_ = v___x_3422_;
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_a_3539_);
lean_dec(v___x_3422_);
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
v_reuseFailAlloc_3545_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___boxed(lean_object* v_e_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f(v_e_3547_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_, v_a_3555_, v_a_3556_, v_a_3557_);
lean_dec(v_a_3557_);
lean_dec_ref(v_a_3556_);
lean_dec(v_a_3555_);
lean_dec_ref(v_a_3554_);
lean_dec(v_a_3553_);
lean_dec_ref(v_a_3552_);
lean_dec(v_a_3551_);
lean_dec_ref(v_a_3550_);
lean_dec(v_a_3549_);
lean_dec(v_a_3548_);
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(lean_object* v_c_3560_, lean_object* v_a_3561_, lean_object* v_a_3562_, lean_object* v_a_3563_, lean_object* v_a_3564_, lean_object* v_a_3565_, lean_object* v_a_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_){
_start:
{
lean_object* v_p_3572_; lean_object* v___x_3573_; 
v_p_3572_ = lean_ctor_get(v_c_3560_, 0);
lean_inc_ref(v_p_3572_);
v___x_3573_ = l_Int_Linear_Poly_normCommRing_x3f(v_p_3572_, v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v_a_3574_; 
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
lean_inc(v_a_3574_);
lean_dec_ref(v___x_3573_);
if (lean_obj_tag(v_a_3574_) == 1)
{
lean_object* v_val_3575_; lean_object* v_snd_3576_; lean_object* v_fst_3577_; lean_object* v_fst_3578_; lean_object* v_snd_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3588_; 
v_val_3575_ = lean_ctor_get(v_a_3574_, 0);
lean_inc(v_val_3575_);
lean_dec_ref(v_a_3574_);
v_snd_3576_ = lean_ctor_get(v_val_3575_, 1);
lean_inc(v_snd_3576_);
v_fst_3577_ = lean_ctor_get(v_val_3575_, 0);
lean_inc(v_fst_3577_);
lean_dec(v_val_3575_);
v_fst_3578_ = lean_ctor_get(v_snd_3576_, 0);
v_snd_3579_ = lean_ctor_get(v_snd_3576_, 1);
v_isSharedCheck_3588_ = !lean_is_exclusive(v_snd_3576_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3581_ = v_snd_3576_;
v_isShared_3582_ = v_isSharedCheck_3588_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_snd_3579_);
lean_inc(v_fst_3578_);
lean_dec(v_snd_3576_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3588_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v___x_3583_; lean_object* v___x_3585_; 
v___x_3583_ = lean_alloc_ctor(17, 3, 0);
lean_ctor_set(v___x_3583_, 0, v_c_3560_);
lean_ctor_set(v___x_3583_, 1, v_fst_3577_);
lean_ctor_set(v___x_3583_, 2, v_fst_3578_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 1, v___x_3583_);
lean_ctor_set(v___x_3581_, 0, v_snd_3579_);
v___x_3585_ = v___x_3581_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_snd_3579_);
lean_ctor_set(v_reuseFailAlloc_3587_, 1, v___x_3583_);
v___x_3585_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
lean_object* v___x_3586_; 
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
lean_inc_ref(v_a_3567_);
lean_inc(v_a_3566_);
lean_inc_ref(v_a_3565_);
lean_inc(v_a_3564_);
lean_inc_ref(v_a_3563_);
lean_inc(v_a_3562_);
lean_inc(v_a_3561_);
v___x_3586_ = lean_grind_cutsat_assert_le(v___x_3585_, v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
return v___x_3586_;
}
}
}
else
{
lean_object* v___x_3589_; 
lean_dec(v_a_3574_);
lean_inc(v_a_3570_);
lean_inc_ref(v_a_3569_);
lean_inc(v_a_3568_);
lean_inc_ref(v_a_3567_);
lean_inc(v_a_3566_);
lean_inc_ref(v_a_3565_);
lean_inc(v_a_3564_);
lean_inc_ref(v_a_3563_);
lean_inc(v_a_3562_);
lean_inc(v_a_3561_);
v___x_3589_ = lean_grind_cutsat_assert_le(v_c_3560_, v_a_3561_, v_a_3562_, v_a_3563_, v_a_3564_, v_a_3565_, v_a_3566_, v_a_3567_, v_a_3568_, v_a_3569_, v_a_3570_);
return v___x_3589_;
}
}
else
{
lean_object* v_a_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3597_; 
lean_dec_ref(v_c_3560_);
v_a_3590_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3592_ = v___x_3573_;
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_a_3590_);
lean_dec(v___x_3573_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3595_; 
if (v_isShared_3593_ == 0)
{
v___x_3595_ = v___x_3592_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v_a_3590_);
v___x_3595_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
return v___x_3595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore___boxed(lean_object* v_c_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_, lean_object* v_a_3609_){
_start:
{
lean_object* v_res_3610_; 
v_res_3610_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v_c_3598_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_, v_a_3605_, v_a_3606_, v_a_3607_, v_a_3608_);
lean_dec(v_a_3608_);
lean_dec_ref(v_a_3607_);
lean_dec(v_a_3606_);
lean_dec_ref(v_a_3605_);
lean_dec(v_a_3604_);
lean_dec_ref(v_a_3603_);
lean_dec(v_a_3602_);
lean_dec_ref(v_a_3601_);
lean_dec(v_a_3600_);
lean_dec(v_a_3599_);
return v_res_3610_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0(void){
_start:
{
lean_object* v___x_3611_; lean_object* v___x_3612_; 
v___x_3611_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
v___x_3612_ = lean_int_neg(v___x_3611_);
return v___x_3612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(lean_object* v_e_3613_, uint8_t v_eqTrue_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_, lean_object* v_a_3617_, lean_object* v_a_3618_, lean_object* v_a_3619_, lean_object* v_a_3620_, lean_object* v_a_3621_, lean_object* v_a_3622_, lean_object* v_a_3623_, lean_object* v_a_3624_){
_start:
{
lean_object* v___x_3626_; 
lean_inc_ref(v_e_3613_);
v___x_3626_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f(v_e_3613_, v_a_3615_, v_a_3616_, v_a_3617_, v_a_3618_, v_a_3619_, v_a_3620_, v_a_3621_, v_a_3622_, v_a_3623_, v_a_3624_);
if (lean_obj_tag(v___x_3626_) == 0)
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3653_; 
v_a_3627_ = lean_ctor_get(v___x_3626_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3626_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3629_ = v___x_3626_;
v_isShared_3630_ = v_isSharedCheck_3653_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3626_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3653_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
if (lean_obj_tag(v_a_3627_) == 1)
{
lean_del_object(v___x_3629_);
if (v_eqTrue_3614_ == 0)
{
lean_object* v_val_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; 
v_val_3631_ = lean_ctor_get(v_a_3627_, 0);
lean_inc(v_val_3631_);
lean_dec_ref(v_a_3627_);
v___x_3632_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
v___x_3633_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___closed__0);
lean_inc(v_val_3631_);
v___x_3634_ = l_Int_Linear_Poly_mul(v_val_3631_, v___x_3633_);
v___x_3635_ = l_Int_Linear_Poly_addConst(v___x_3634_, v___x_3632_);
v___x_3636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3636_, 0, v_e_3613_);
lean_ctor_set(v___x_3636_, 1, v_val_3631_);
v___x_3637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3635_);
lean_ctor_set(v___x_3637_, 1, v___x_3636_);
v___x_3638_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v___x_3637_, v_a_3615_, v_a_3616_, v_a_3617_, v_a_3618_, v_a_3619_, v_a_3620_, v_a_3621_, v_a_3622_, v_a_3623_, v_a_3624_);
return v___x_3638_;
}
else
{
lean_object* v_val_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3648_; 
v_val_3639_ = lean_ctor_get(v_a_3627_, 0);
v_isSharedCheck_3648_ = !lean_is_exclusive(v_a_3627_);
if (v_isSharedCheck_3648_ == 0)
{
v___x_3641_ = v_a_3627_;
v_isShared_3642_ = v_isSharedCheck_3648_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_val_3639_);
lean_dec(v_a_3627_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3648_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3644_; 
if (v_isShared_3642_ == 0)
{
lean_ctor_set_tag(v___x_3641_, 0);
lean_ctor_set(v___x_3641_, 0, v_e_3613_);
v___x_3644_ = v___x_3641_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v_e_3613_);
v___x_3644_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; 
v___x_3645_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3645_, 0, v_val_3639_);
lean_ctor_set(v___x_3645_, 1, v___x_3644_);
v___x_3646_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v___x_3645_, v_a_3615_, v_a_3616_, v_a_3617_, v_a_3618_, v_a_3619_, v_a_3620_, v_a_3621_, v_a_3622_, v_a_3623_, v_a_3624_);
return v___x_3646_;
}
}
}
}
else
{
lean_object* v___x_3649_; lean_object* v___x_3651_; 
lean_dec(v_a_3627_);
lean_dec_ref(v_e_3613_);
v___x_3649_ = lean_box(0);
if (v_isShared_3630_ == 0)
{
lean_ctor_set(v___x_3629_, 0, v___x_3649_);
v___x_3651_ = v___x_3629_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v___x_3649_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3661_; 
lean_dec_ref(v_e_3613_);
v_a_3654_ = lean_ctor_get(v___x_3626_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3626_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3656_ = v___x_3626_;
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3626_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
if (v_isShared_3657_ == 0)
{
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_a_3654_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe___boxed(lean_object* v_e_3662_, lean_object* v_eqTrue_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_){
_start:
{
uint8_t v_eqTrue_boxed_3675_; lean_object* v_res_3676_; 
v_eqTrue_boxed_3675_ = lean_unbox(v_eqTrue_3663_);
v_res_3676_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(v_e_3662_, v_eqTrue_boxed_3675_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_, v_a_3671_, v_a_3672_, v_a_3673_);
lean_dec(v_a_3673_);
lean_dec_ref(v_a_3672_);
lean_dec(v_a_3671_);
lean_dec_ref(v_a_3670_);
lean_dec(v_a_3669_);
lean_dec_ref(v_a_3668_);
lean_dec(v_a_3667_);
lean_dec_ref(v_a_3666_);
lean_dec(v_a_3665_);
lean_dec(v_a_3664_);
return v_res_3676_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0(void){
_start:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; 
v___x_3677_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_refineWithDiseq_refineWithDiseqStep_x3f_spec__2_spec__7_spec__11___redArg___closed__2);
v___x_3678_ = l_Lean_mkIntLit(v___x_3677_);
return v___x_3678_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5(void){
_start:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3686_ = lean_box(0);
v___x_3687_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__4));
v___x_3688_ = l_Lean_mkConst(v___x_3687_, v___x_3686_);
return v___x_3688_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8(void){
_start:
{
lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3694_ = lean_box(0);
v___x_3695_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__7));
v___x_3696_ = l_Lean_mkConst(v___x_3695_, v___x_3694_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(lean_object* v_e_3697_, uint8_t v_eqTrue_3698_, lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_, lean_object* v_a_3704_, lean_object* v_a_3705_, lean_object* v_a_3706_, lean_object* v_a_3707_, lean_object* v_a_3708_){
_start:
{
lean_object* v___y_3711_; lean_object* v___y_3712_; lean_object* v_fst_3713_; lean_object* v_snd_3714_; lean_object* v___x_3743_; uint8_t v___x_3744_; 
lean_inc_ref(v_e_3697_);
v___x_3743_ = l_Lean_Expr_cleanupAnnotations(v_e_3697_);
v___x_3744_ = l_Lean_Expr_isApp(v___x_3743_);
if (v___x_3744_ == 0)
{
lean_dec_ref(v___x_3743_);
lean_dec_ref(v_e_3697_);
goto v___jp_3740_;
}
else
{
lean_object* v_arg_3745_; lean_object* v___x_3746_; uint8_t v___x_3747_; 
v_arg_3745_ = lean_ctor_get(v___x_3743_, 1);
lean_inc_ref(v_arg_3745_);
v___x_3746_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3743_);
v___x_3747_ = l_Lean_Expr_isApp(v___x_3746_);
if (v___x_3747_ == 0)
{
lean_dec_ref(v___x_3746_);
lean_dec_ref(v_arg_3745_);
lean_dec_ref(v_e_3697_);
goto v___jp_3740_;
}
else
{
lean_object* v_arg_3748_; lean_object* v___y_3750_; lean_object* v___x_3788_; uint8_t v___x_3789_; 
v_arg_3748_ = lean_ctor_get(v___x_3746_, 1);
lean_inc_ref(v_arg_3748_);
v___x_3788_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3746_);
v___x_3789_ = l_Lean_Expr_isApp(v___x_3788_);
if (v___x_3789_ == 0)
{
lean_dec_ref(v___x_3788_);
lean_dec_ref(v_arg_3748_);
lean_dec_ref(v_arg_3745_);
lean_dec_ref(v_e_3697_);
goto v___jp_3740_;
}
else
{
lean_object* v___x_3790_; uint8_t v___x_3791_; 
v___x_3790_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3788_);
v___x_3791_ = l_Lean_Expr_isApp(v___x_3790_);
if (v___x_3791_ == 0)
{
lean_dec_ref(v___x_3790_);
lean_dec_ref(v_arg_3748_);
lean_dec_ref(v_arg_3745_);
lean_dec_ref(v_e_3697_);
goto v___jp_3740_;
}
else
{
lean_object* v___x_3792_; lean_object* v___x_3793_; uint8_t v___x_3794_; 
v___x_3792_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3790_);
v___x_3793_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2));
v___x_3794_ = l_Lean_Expr_isConstOf(v___x_3792_, v___x_3793_);
lean_dec_ref(v___x_3792_);
if (v___x_3794_ == 0)
{
lean_dec_ref(v_arg_3748_);
lean_dec_ref(v_arg_3745_);
lean_dec_ref(v_e_3697_);
goto v___jp_3740_;
}
else
{
if (v_eqTrue_3698_ == 0)
{
lean_object* v___x_3795_; 
v___x_3795_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__5);
v___y_3750_ = v___x_3795_;
goto v___jp_3749_;
}
else
{
lean_object* v___x_3796_; 
v___x_3796_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__8);
v___y_3750_ = v___x_3796_;
goto v___jp_3749_;
}
}
}
}
v___jp_3749_:
{
lean_object* v___x_3751_; 
v___x_3751_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_3697_, v_a_3699_);
if (lean_obj_tag(v___x_3751_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3753_; 
v_a_3752_ = lean_ctor_get(v___x_3751_, 0);
lean_inc(v_a_3752_);
lean_dec_ref(v___x_3751_);
lean_inc_ref(v_arg_3748_);
v___x_3753_ = l_Lean_Meta_Grind_Arith_Cutsat_natToInt(v_arg_3748_, v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_, v_a_3707_, v_a_3708_);
if (lean_obj_tag(v___x_3753_) == 0)
{
lean_object* v_a_3754_; lean_object* v_fst_3755_; lean_object* v_snd_3756_; lean_object* v___x_3757_; 
v_a_3754_ = lean_ctor_get(v___x_3753_, 0);
lean_inc(v_a_3754_);
lean_dec_ref(v___x_3753_);
v_fst_3755_ = lean_ctor_get(v_a_3754_, 0);
lean_inc(v_fst_3755_);
v_snd_3756_ = lean_ctor_get(v_a_3754_, 1);
lean_inc(v_snd_3756_);
lean_dec(v_a_3754_);
lean_inc_ref(v_arg_3745_);
v___x_3757_ = l_Lean_Meta_Grind_Arith_Cutsat_natToInt(v_arg_3745_, v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_, v_a_3707_, v_a_3708_);
if (lean_obj_tag(v___x_3757_) == 0)
{
lean_object* v_a_3758_; lean_object* v_fst_3759_; lean_object* v_snd_3760_; lean_object* v___x_3761_; 
v_a_3758_ = lean_ctor_get(v___x_3757_, 0);
lean_inc(v_a_3758_);
lean_dec_ref(v___x_3757_);
v_fst_3759_ = lean_ctor_get(v_a_3758_, 0);
lean_inc(v_fst_3759_);
v_snd_3760_ = lean_ctor_get(v_a_3758_, 1);
lean_inc(v_snd_3760_);
lean_dec(v_a_3758_);
lean_inc(v_fst_3759_);
lean_inc(v_fst_3755_);
lean_inc_ref(v___y_3750_);
v___x_3761_ = l_Lean_mkApp6(v___y_3750_, v_arg_3748_, v_arg_3745_, v_fst_3755_, v_fst_3759_, v_snd_3756_, v_snd_3760_);
if (v_eqTrue_3698_ == 0)
{
lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3762_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0);
v___x_3763_ = l_Lean_mkIntAdd(v_fst_3759_, v___x_3762_);
v___y_3711_ = v_a_3752_;
v___y_3712_ = v___x_3761_;
v_fst_3713_ = v___x_3763_;
v_snd_3714_ = v_fst_3755_;
goto v___jp_3710_;
}
else
{
v___y_3711_ = v_a_3752_;
v___y_3712_ = v___x_3761_;
v_fst_3713_ = v_fst_3755_;
v_snd_3714_ = v_fst_3759_;
goto v___jp_3710_;
}
}
else
{
lean_object* v_a_3764_; lean_object* v___x_3766_; uint8_t v_isShared_3767_; uint8_t v_isSharedCheck_3771_; 
lean_dec(v_snd_3756_);
lean_dec(v_fst_3755_);
lean_dec(v_a_3752_);
lean_dec_ref(v_arg_3748_);
lean_dec_ref(v_arg_3745_);
lean_dec_ref(v_e_3697_);
v_a_3764_ = lean_ctor_get(v___x_3757_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v___x_3757_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3766_ = v___x_3757_;
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
else
{
lean_inc(v_a_3764_);
lean_dec(v___x_3757_);
v___x_3766_ = lean_box(0);
v_isShared_3767_ = v_isSharedCheck_3771_;
goto v_resetjp_3765_;
}
v_resetjp_3765_:
{
lean_object* v___x_3769_; 
if (v_isShared_3767_ == 0)
{
v___x_3769_ = v___x_3766_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v_a_3764_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
}
}
else
{
lean_object* v_a_3772_; lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3779_; 
lean_dec(v_a_3752_);
lean_dec_ref(v_arg_3748_);
lean_dec_ref(v_arg_3745_);
lean_dec_ref(v_e_3697_);
v_a_3772_ = lean_ctor_get(v___x_3753_, 0);
v_isSharedCheck_3779_ = !lean_is_exclusive(v___x_3753_);
if (v_isSharedCheck_3779_ == 0)
{
v___x_3774_ = v___x_3753_;
v_isShared_3775_ = v_isSharedCheck_3779_;
goto v_resetjp_3773_;
}
else
{
lean_inc(v_a_3772_);
lean_dec(v___x_3753_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3779_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v___x_3777_; 
if (v_isShared_3775_ == 0)
{
v___x_3777_ = v___x_3774_;
goto v_reusejp_3776_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v_a_3772_);
v___x_3777_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3776_;
}
v_reusejp_3776_:
{
return v___x_3777_;
}
}
}
}
else
{
lean_object* v_a_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3787_; 
lean_dec_ref(v_arg_3748_);
lean_dec_ref(v_arg_3745_);
lean_dec_ref(v_e_3697_);
v_a_3780_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3782_ = v___x_3751_;
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_a_3780_);
lean_dec(v___x_3751_);
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
}
}
v___jp_3710_:
{
lean_object* v___x_3715_; 
lean_inc(v___y_3711_);
v___x_3715_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_fst_3713_, v___y_3711_, v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_, v_a_3707_, v_a_3708_);
if (lean_obj_tag(v___x_3715_) == 0)
{
lean_object* v_a_3716_; lean_object* v___x_3717_; 
v_a_3716_ = lean_ctor_get(v___x_3715_, 0);
lean_inc(v_a_3716_);
lean_dec_ref(v___x_3715_);
v___x_3717_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_snd_3714_, v___y_3711_, v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_, v_a_3707_, v_a_3708_);
if (lean_obj_tag(v___x_3717_) == 0)
{
lean_object* v_a_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; 
v_a_3718_ = lean_ctor_get(v___x_3717_, 0);
lean_inc(v_a_3718_);
lean_dec_ref(v___x_3717_);
lean_inc(v_a_3718_);
lean_inc(v_a_3716_);
v___x_3719_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3719_, 0, v_a_3716_);
lean_ctor_set(v___x_3719_, 1, v_a_3718_);
v___x_3720_ = l_Int_Linear_Expr_norm(v___x_3719_);
lean_dec_ref(v___x_3719_);
v___x_3721_ = lean_alloc_ctor(2, 4, 1);
lean_ctor_set(v___x_3721_, 0, v_e_3697_);
lean_ctor_set(v___x_3721_, 1, v___y_3712_);
lean_ctor_set(v___x_3721_, 2, v_a_3716_);
lean_ctor_set(v___x_3721_, 3, v_a_3718_);
lean_ctor_set_uint8(v___x_3721_, sizeof(void*)*4, v_eqTrue_3698_);
v___x_3722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3720_);
lean_ctor_set(v___x_3722_, 1, v___x_3721_);
v___x_3723_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v___x_3722_, v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_, v_a_3706_, v_a_3707_, v_a_3708_);
return v___x_3723_;
}
else
{
lean_object* v_a_3724_; lean_object* v___x_3726_; uint8_t v_isShared_3727_; uint8_t v_isSharedCheck_3731_; 
lean_dec(v_a_3716_);
lean_dec_ref(v___y_3712_);
lean_dec_ref(v_e_3697_);
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
lean_dec_ref(v_snd_3714_);
lean_dec_ref(v___y_3712_);
lean_dec(v___y_3711_);
lean_dec_ref(v_e_3697_);
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
v___jp_3740_:
{
lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___x_3741_ = lean_box(0);
v___x_3742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3741_);
return v___x_3742_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___boxed(lean_object* v_e_3797_, lean_object* v_eqTrue_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_, lean_object* v_a_3802_, lean_object* v_a_3803_, lean_object* v_a_3804_, lean_object* v_a_3805_, lean_object* v_a_3806_, lean_object* v_a_3807_, lean_object* v_a_3808_, lean_object* v_a_3809_){
_start:
{
uint8_t v_eqTrue_boxed_3810_; lean_object* v_res_3811_; 
v_eqTrue_boxed_3810_ = lean_unbox(v_eqTrue_3798_);
v_res_3811_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(v_e_3797_, v_eqTrue_boxed_3810_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_, v_a_3807_, v_a_3808_);
lean_dec(v_a_3808_);
lean_dec_ref(v_a_3807_);
lean_dec(v_a_3806_);
lean_dec_ref(v_a_3805_);
lean_dec(v_a_3804_);
lean_dec_ref(v_a_3803_);
lean_dec(v_a_3802_);
lean_dec_ref(v_a_3801_);
lean_dec(v_a_3800_);
lean_dec(v_a_3799_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateToIntLe(lean_object* v_e_3812_, uint8_t v_eqTrue_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v_a_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_){
_start:
{
lean_object* v___y_3830_; lean_object* v___y_3831_; lean_object* v___y_3832_; lean_object* v___y_3833_; lean_object* v___y_3834_; lean_object* v___y_3835_; lean_object* v___y_3836_; lean_object* v___y_3837_; lean_object* v___y_3838_; lean_object* v___y_3839_; lean_object* v___y_3840_; lean_object* v___y_3841_; lean_object* v_fst_3842_; lean_object* v_snd_3843_; lean_object* v_____x_3870_; lean_object* v___y_3871_; lean_object* v___y_3872_; lean_object* v___y_3873_; lean_object* v___y_3874_; lean_object* v___y_3875_; lean_object* v___y_3876_; lean_object* v___y_3877_; lean_object* v___y_3878_; lean_object* v___y_3879_; lean_object* v___y_3880_; lean_object* v___y_3881_; 
if (v_eqTrue_3813_ == 0)
{
lean_object* v___x_3935_; 
v___x_3935_ = l_Lean_Meta_Grind_Arith_Cutsat_getOfNotLE_x3f___redArg(v_a_3814_, v_a_3815_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
if (lean_obj_tag(v___x_3935_) == 0)
{
lean_object* v_a_3936_; 
v_a_3936_ = lean_ctor_get(v___x_3935_, 0);
lean_inc(v_a_3936_);
lean_dec_ref(v___x_3935_);
v_____x_3870_ = v_a_3936_;
v___y_3871_ = v_a_3814_;
v___y_3872_ = v_a_3815_;
v___y_3873_ = v_a_3816_;
v___y_3874_ = v_a_3817_;
v___y_3875_ = v_a_3818_;
v___y_3876_ = v_a_3819_;
v___y_3877_ = v_a_3820_;
v___y_3878_ = v_a_3821_;
v___y_3879_ = v_a_3822_;
v___y_3880_ = v_a_3823_;
v___y_3881_ = v_a_3824_;
goto v___jp_3869_;
}
else
{
lean_object* v_a_3937_; lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3944_; 
lean_dec_ref(v_e_3812_);
v_a_3937_ = lean_ctor_get(v___x_3935_, 0);
v_isSharedCheck_3944_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_3944_ == 0)
{
v___x_3939_ = v___x_3935_;
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
else
{
lean_inc(v_a_3937_);
lean_dec(v___x_3935_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
lean_object* v___x_3942_; 
if (v_isShared_3940_ == 0)
{
v___x_3942_ = v___x_3939_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_a_3937_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
return v___x_3942_;
}
}
}
}
else
{
lean_object* v___x_3945_; 
v___x_3945_ = l_Lean_Meta_Grind_Arith_Cutsat_getOfLE_x3f___redArg(v_a_3814_, v_a_3815_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_);
if (lean_obj_tag(v___x_3945_) == 0)
{
lean_object* v_a_3946_; 
v_a_3946_ = lean_ctor_get(v___x_3945_, 0);
lean_inc(v_a_3946_);
lean_dec_ref(v___x_3945_);
v_____x_3870_ = v_a_3946_;
v___y_3871_ = v_a_3814_;
v___y_3872_ = v_a_3815_;
v___y_3873_ = v_a_3816_;
v___y_3874_ = v_a_3817_;
v___y_3875_ = v_a_3818_;
v___y_3876_ = v_a_3819_;
v___y_3877_ = v_a_3820_;
v___y_3878_ = v_a_3821_;
v___y_3879_ = v_a_3822_;
v___y_3880_ = v_a_3823_;
v___y_3881_ = v_a_3824_;
goto v___jp_3869_;
}
else
{
lean_object* v_a_3947_; lean_object* v___x_3949_; uint8_t v_isShared_3950_; uint8_t v_isSharedCheck_3954_; 
lean_dec_ref(v_e_3812_);
v_a_3947_ = lean_ctor_get(v___x_3945_, 0);
v_isSharedCheck_3954_ = !lean_is_exclusive(v___x_3945_);
if (v_isSharedCheck_3954_ == 0)
{
v___x_3949_ = v___x_3945_;
v_isShared_3950_ = v_isSharedCheck_3954_;
goto v_resetjp_3948_;
}
else
{
lean_inc(v_a_3947_);
lean_dec(v___x_3945_);
v___x_3949_ = lean_box(0);
v_isShared_3950_ = v_isSharedCheck_3954_;
goto v_resetjp_3948_;
}
v_resetjp_3948_:
{
lean_object* v___x_3952_; 
if (v_isShared_3950_ == 0)
{
v___x_3952_ = v___x_3949_;
goto v_reusejp_3951_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v_a_3947_);
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
v___jp_3826_:
{
lean_object* v___x_3827_; lean_object* v___x_3828_; 
v___x_3827_ = lean_box(0);
v___x_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3828_, 0, v___x_3827_);
return v___x_3828_;
}
v___jp_3829_:
{
lean_object* v___x_3844_; 
lean_inc(v___y_3835_);
v___x_3844_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_fst_3842_, v___y_3835_, v___y_3834_, v___y_3831_, v___y_3836_, v___y_3832_, v___y_3838_, v___y_3830_, v___y_3837_, v___y_3833_, v___y_3839_, v___y_3841_);
if (lean_obj_tag(v___x_3844_) == 0)
{
lean_object* v_a_3845_; lean_object* v___x_3846_; 
v_a_3845_ = lean_ctor_get(v___x_3844_, 0);
lean_inc(v_a_3845_);
lean_dec_ref(v___x_3844_);
v___x_3846_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_snd_3843_, v___y_3835_, v___y_3834_, v___y_3831_, v___y_3836_, v___y_3832_, v___y_3838_, v___y_3830_, v___y_3837_, v___y_3833_, v___y_3839_, v___y_3841_);
if (lean_obj_tag(v___x_3846_) == 0)
{
lean_object* v_a_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; 
v_a_3847_ = lean_ctor_get(v___x_3846_, 0);
lean_inc(v_a_3847_);
lean_dec_ref(v___x_3846_);
lean_inc(v_a_3847_);
lean_inc(v_a_3845_);
v___x_3848_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3848_, 0, v_a_3845_);
lean_ctor_set(v___x_3848_, 1, v_a_3847_);
v___x_3849_ = l_Int_Linear_Expr_norm(v___x_3848_);
lean_dec_ref(v___x_3848_);
v___x_3850_ = lean_alloc_ctor(2, 4, 1);
lean_ctor_set(v___x_3850_, 0, v_e_3812_);
lean_ctor_set(v___x_3850_, 1, v___y_3840_);
lean_ctor_set(v___x_3850_, 2, v_a_3845_);
lean_ctor_set(v___x_3850_, 3, v_a_3847_);
lean_ctor_set_uint8(v___x_3850_, sizeof(void*)*4, v_eqTrue_3813_);
v___x_3851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3849_);
lean_ctor_set(v___x_3851_, 1, v___x_3850_);
v___x_3852_ = l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_LeCnstr_assertCore(v___x_3851_, v___y_3834_, v___y_3831_, v___y_3836_, v___y_3832_, v___y_3838_, v___y_3830_, v___y_3837_, v___y_3833_, v___y_3839_, v___y_3841_);
return v___x_3852_;
}
else
{
lean_object* v_a_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3860_; 
lean_dec(v_a_3845_);
lean_dec_ref(v___y_3840_);
lean_dec_ref(v_e_3812_);
v_a_3853_ = lean_ctor_get(v___x_3846_, 0);
v_isSharedCheck_3860_ = !lean_is_exclusive(v___x_3846_);
if (v_isSharedCheck_3860_ == 0)
{
v___x_3855_ = v___x_3846_;
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_a_3853_);
lean_dec(v___x_3846_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3860_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
lean_object* v___x_3858_; 
if (v_isShared_3856_ == 0)
{
v___x_3858_ = v___x_3855_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v_a_3853_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
}
}
else
{
lean_object* v_a_3861_; lean_object* v___x_3863_; uint8_t v_isShared_3864_; uint8_t v_isSharedCheck_3868_; 
lean_dec_ref(v_snd_3843_);
lean_dec_ref(v___y_3840_);
lean_dec(v___y_3835_);
lean_dec_ref(v_e_3812_);
v_a_3861_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3868_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3868_ == 0)
{
v___x_3863_ = v___x_3844_;
v_isShared_3864_ = v_isSharedCheck_3868_;
goto v_resetjp_3862_;
}
else
{
lean_inc(v_a_3861_);
lean_dec(v___x_3844_);
v___x_3863_ = lean_box(0);
v_isShared_3864_ = v_isSharedCheck_3868_;
goto v_resetjp_3862_;
}
v_resetjp_3862_:
{
lean_object* v___x_3866_; 
if (v_isShared_3864_ == 0)
{
v___x_3866_ = v___x_3863_;
goto v_reusejp_3865_;
}
else
{
lean_object* v_reuseFailAlloc_3867_; 
v_reuseFailAlloc_3867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3867_, 0, v_a_3861_);
v___x_3866_ = v_reuseFailAlloc_3867_;
goto v_reusejp_3865_;
}
v_reusejp_3865_:
{
return v___x_3866_;
}
}
}
}
v___jp_3869_:
{
if (lean_obj_tag(v_____x_3870_) == 1)
{
lean_object* v_val_3882_; lean_object* v___x_3883_; uint8_t v___x_3884_; 
v_val_3882_ = lean_ctor_get(v_____x_3870_, 0);
lean_inc(v_val_3882_);
lean_dec_ref(v_____x_3870_);
lean_inc_ref(v_e_3812_);
v___x_3883_ = l_Lean_Expr_cleanupAnnotations(v_e_3812_);
v___x_3884_ = l_Lean_Expr_isApp(v___x_3883_);
if (v___x_3884_ == 0)
{
lean_dec_ref(v___x_3883_);
lean_dec(v_val_3882_);
lean_dec_ref(v_e_3812_);
goto v___jp_3826_;
}
else
{
lean_object* v_arg_3885_; lean_object* v___x_3886_; uint8_t v___x_3887_; 
v_arg_3885_ = lean_ctor_get(v___x_3883_, 1);
lean_inc_ref(v_arg_3885_);
v___x_3886_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3883_);
v___x_3887_ = l_Lean_Expr_isApp(v___x_3886_);
if (v___x_3887_ == 0)
{
lean_dec_ref(v___x_3886_);
lean_dec_ref(v_arg_3885_);
lean_dec(v_val_3882_);
lean_dec_ref(v_e_3812_);
goto v___jp_3826_;
}
else
{
lean_object* v_arg_3888_; lean_object* v___x_3889_; uint8_t v___x_3890_; 
v_arg_3888_ = lean_ctor_get(v___x_3886_, 1);
lean_inc_ref(v_arg_3888_);
v___x_3889_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3886_);
v___x_3890_ = l_Lean_Expr_isApp(v___x_3889_);
if (v___x_3890_ == 0)
{
lean_dec_ref(v___x_3889_);
lean_dec_ref(v_arg_3888_);
lean_dec_ref(v_arg_3885_);
lean_dec(v_val_3882_);
lean_dec_ref(v_e_3812_);
goto v___jp_3826_;
}
else
{
lean_object* v___x_3891_; uint8_t v___x_3892_; 
v___x_3891_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3889_);
v___x_3892_ = l_Lean_Expr_isApp(v___x_3891_);
if (v___x_3892_ == 0)
{
lean_dec_ref(v___x_3891_);
lean_dec_ref(v_arg_3888_);
lean_dec_ref(v_arg_3885_);
lean_dec(v_val_3882_);
lean_dec_ref(v_e_3812_);
goto v___jp_3826_;
}
else
{
lean_object* v___x_3893_; lean_object* v___x_3894_; uint8_t v___x_3895_; 
v___x_3893_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3891_);
v___x_3894_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2));
v___x_3895_ = l_Lean_Expr_isConstOf(v___x_3893_, v___x_3894_);
lean_dec_ref(v___x_3893_);
if (v___x_3895_ == 0)
{
lean_dec_ref(v_arg_3888_);
lean_dec_ref(v_arg_3885_);
lean_dec(v_val_3882_);
lean_dec_ref(v_e_3812_);
goto v___jp_3826_;
}
else
{
lean_object* v___x_3896_; 
v___x_3896_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_3812_, v___y_3872_);
if (lean_obj_tag(v___x_3896_) == 0)
{
lean_object* v_a_3897_; lean_object* v___x_3898_; 
v_a_3897_ = lean_ctor_get(v___x_3896_, 0);
lean_inc(v_a_3897_);
lean_dec_ref(v___x_3896_);
lean_inc_ref(v_arg_3888_);
v___x_3898_ = l_Lean_Meta_Grind_Arith_Cutsat_toInt(v_arg_3888_, v___y_3871_, v___y_3872_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_object* v_a_3899_; lean_object* v_fst_3900_; lean_object* v_snd_3901_; lean_object* v___x_3902_; 
v_a_3899_ = lean_ctor_get(v___x_3898_, 0);
lean_inc(v_a_3899_);
lean_dec_ref(v___x_3898_);
v_fst_3900_ = lean_ctor_get(v_a_3899_, 0);
lean_inc(v_fst_3900_);
v_snd_3901_ = lean_ctor_get(v_a_3899_, 1);
lean_inc(v_snd_3901_);
lean_dec(v_a_3899_);
lean_inc_ref(v_arg_3885_);
v___x_3902_ = l_Lean_Meta_Grind_Arith_Cutsat_toInt(v_arg_3885_, v___y_3871_, v___y_3872_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_a_3903_; lean_object* v_fst_3904_; lean_object* v_snd_3905_; lean_object* v___x_3906_; 
v_a_3903_ = lean_ctor_get(v___x_3902_, 0);
lean_inc(v_a_3903_);
lean_dec_ref(v___x_3902_);
v_fst_3904_ = lean_ctor_get(v_a_3903_, 0);
lean_inc(v_fst_3904_);
v_snd_3905_ = lean_ctor_get(v_a_3903_, 1);
lean_inc(v_snd_3905_);
lean_dec(v_a_3903_);
lean_inc(v_fst_3904_);
lean_inc(v_fst_3900_);
v___x_3906_ = l_Lean_mkApp6(v_val_3882_, v_arg_3888_, v_arg_3885_, v_fst_3900_, v_fst_3904_, v_snd_3901_, v_snd_3905_);
if (v_eqTrue_3813_ == 0)
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3907_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0);
v___x_3908_ = l_Lean_mkIntAdd(v_fst_3904_, v___x_3907_);
v___y_3830_ = v___y_3877_;
v___y_3831_ = v___y_3873_;
v___y_3832_ = v___y_3875_;
v___y_3833_ = v___y_3879_;
v___y_3834_ = v___y_3872_;
v___y_3835_ = v_a_3897_;
v___y_3836_ = v___y_3874_;
v___y_3837_ = v___y_3878_;
v___y_3838_ = v___y_3876_;
v___y_3839_ = v___y_3880_;
v___y_3840_ = v___x_3906_;
v___y_3841_ = v___y_3881_;
v_fst_3842_ = v___x_3908_;
v_snd_3843_ = v_fst_3900_;
goto v___jp_3829_;
}
else
{
v___y_3830_ = v___y_3877_;
v___y_3831_ = v___y_3873_;
v___y_3832_ = v___y_3875_;
v___y_3833_ = v___y_3879_;
v___y_3834_ = v___y_3872_;
v___y_3835_ = v_a_3897_;
v___y_3836_ = v___y_3874_;
v___y_3837_ = v___y_3878_;
v___y_3838_ = v___y_3876_;
v___y_3839_ = v___y_3880_;
v___y_3840_ = v___x_3906_;
v___y_3841_ = v___y_3881_;
v_fst_3842_ = v_fst_3900_;
v_snd_3843_ = v_fst_3904_;
goto v___jp_3829_;
}
}
else
{
lean_object* v_a_3909_; lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_3916_; 
lean_dec(v_snd_3901_);
lean_dec(v_fst_3900_);
lean_dec(v_a_3897_);
lean_dec_ref(v_arg_3888_);
lean_dec_ref(v_arg_3885_);
lean_dec(v_val_3882_);
lean_dec_ref(v_e_3812_);
v_a_3909_ = lean_ctor_get(v___x_3902_, 0);
v_isSharedCheck_3916_ = !lean_is_exclusive(v___x_3902_);
if (v_isSharedCheck_3916_ == 0)
{
v___x_3911_ = v___x_3902_;
v_isShared_3912_ = v_isSharedCheck_3916_;
goto v_resetjp_3910_;
}
else
{
lean_inc(v_a_3909_);
lean_dec(v___x_3902_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_3916_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
lean_object* v___x_3914_; 
if (v_isShared_3912_ == 0)
{
v___x_3914_ = v___x_3911_;
goto v_reusejp_3913_;
}
else
{
lean_object* v_reuseFailAlloc_3915_; 
v_reuseFailAlloc_3915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3915_, 0, v_a_3909_);
v___x_3914_ = v_reuseFailAlloc_3915_;
goto v_reusejp_3913_;
}
v_reusejp_3913_:
{
return v___x_3914_;
}
}
}
}
else
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3924_; 
lean_dec(v_a_3897_);
lean_dec_ref(v_arg_3888_);
lean_dec_ref(v_arg_3885_);
lean_dec(v_val_3882_);
lean_dec_ref(v_e_3812_);
v_a_3917_ = lean_ctor_get(v___x_3898_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v___x_3898_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3919_ = v___x_3898_;
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v___x_3898_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
lean_object* v___x_3922_; 
if (v_isShared_3920_ == 0)
{
v___x_3922_ = v___x_3919_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3923_; 
v_reuseFailAlloc_3923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3923_, 0, v_a_3917_);
v___x_3922_ = v_reuseFailAlloc_3923_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
return v___x_3922_;
}
}
}
}
else
{
lean_object* v_a_3925_; lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3932_; 
lean_dec_ref(v_arg_3888_);
lean_dec_ref(v_arg_3885_);
lean_dec(v_val_3882_);
lean_dec_ref(v_e_3812_);
v_a_3925_ = lean_ctor_get(v___x_3896_, 0);
v_isSharedCheck_3932_ = !lean_is_exclusive(v___x_3896_);
if (v_isSharedCheck_3932_ == 0)
{
v___x_3927_ = v___x_3896_;
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
else
{
lean_inc(v_a_3925_);
lean_dec(v___x_3896_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3930_; 
if (v_isShared_3928_ == 0)
{
v___x_3930_ = v___x_3927_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v_a_3925_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
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
lean_object* v___x_3933_; lean_object* v___x_3934_; 
lean_dec(v_____x_3870_);
lean_dec_ref(v_e_3812_);
v___x_3933_ = lean_box(0);
v___x_3934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3934_, 0, v___x_3933_);
return v___x_3934_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateToIntLe___boxed(lean_object* v_e_3955_, lean_object* v_eqTrue_3956_, lean_object* v_a_3957_, lean_object* v_a_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_, lean_object* v_a_3964_, lean_object* v_a_3965_, lean_object* v_a_3966_, lean_object* v_a_3967_, lean_object* v_a_3968_){
_start:
{
uint8_t v_eqTrue_boxed_3969_; lean_object* v_res_3970_; 
v_eqTrue_boxed_3969_ = lean_unbox(v_eqTrue_3956_);
v_res_3970_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateToIntLe(v_e_3955_, v_eqTrue_boxed_3969_, v_a_3957_, v_a_3958_, v_a_3959_, v_a_3960_, v_a_3961_, v_a_3962_, v_a_3963_, v_a_3964_, v_a_3965_, v_a_3966_, v_a_3967_);
lean_dec(v_a_3967_);
lean_dec_ref(v_a_3966_);
lean_dec(v_a_3965_);
lean_dec_ref(v_a_3964_);
lean_dec(v_a_3963_);
lean_dec_ref(v_a_3962_);
lean_dec(v_a_3961_);
lean_dec_ref(v_a_3960_);
lean_dec(v_a_3959_);
lean_dec(v_a_3958_);
lean_dec(v_a_3957_);
return v_res_3970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe(lean_object* v_e_3976_, uint8_t v_eqTrue_3977_, lean_object* v_a_3978_, lean_object* v_a_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_, lean_object* v_a_3985_, lean_object* v_a_3986_, lean_object* v_a_3987_){
_start:
{
lean_object* v___x_3992_; 
v___x_3992_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_3980_);
if (lean_obj_tag(v___x_3992_) == 0)
{
lean_object* v_a_3993_; lean_object* v___x_3995_; uint8_t v_isShared_3996_; uint8_t v_isSharedCheck_4023_; 
v_a_3993_ = lean_ctor_get(v___x_3992_, 0);
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_3992_);
if (v_isSharedCheck_4023_ == 0)
{
v___x_3995_ = v___x_3992_;
v_isShared_3996_ = v_isSharedCheck_4023_;
goto v_resetjp_3994_;
}
else
{
lean_inc(v_a_3993_);
lean_dec(v___x_3992_);
v___x_3995_ = lean_box(0);
v_isShared_3996_ = v_isSharedCheck_4023_;
goto v_resetjp_3994_;
}
v_resetjp_3994_:
{
uint8_t v_lia_3997_; 
v_lia_3997_ = lean_ctor_get_uint8(v_a_3993_, sizeof(void*)*11 + 23);
lean_dec(v_a_3993_);
if (v_lia_3997_ == 0)
{
lean_object* v___x_3998_; lean_object* v___x_4000_; 
lean_dec_ref(v_e_3976_);
v___x_3998_ = lean_box(0);
if (v_isShared_3996_ == 0)
{
lean_ctor_set(v___x_3995_, 0, v___x_3998_);
v___x_4000_ = v___x_3995_;
goto v_reusejp_3999_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v___x_3998_);
v___x_4000_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3999_;
}
v_reusejp_3999_:
{
return v___x_4000_;
}
}
else
{
lean_object* v___x_4002_; uint8_t v___x_4003_; 
lean_del_object(v___x_3995_);
lean_inc_ref(v_e_3976_);
v___x_4002_ = l_Lean_Expr_cleanupAnnotations(v_e_3976_);
v___x_4003_ = l_Lean_Expr_isApp(v___x_4002_);
if (v___x_4003_ == 0)
{
lean_dec_ref(v___x_4002_);
lean_dec_ref(v_e_3976_);
goto v___jp_3989_;
}
else
{
lean_object* v___x_4004_; uint8_t v___x_4005_; 
v___x_4004_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4002_);
v___x_4005_ = l_Lean_Expr_isApp(v___x_4004_);
if (v___x_4005_ == 0)
{
lean_dec_ref(v___x_4004_);
lean_dec_ref(v_e_3976_);
goto v___jp_3989_;
}
else
{
lean_object* v___x_4006_; uint8_t v___x_4007_; 
v___x_4006_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4004_);
v___x_4007_ = l_Lean_Expr_isApp(v___x_4006_);
if (v___x_4007_ == 0)
{
lean_dec_ref(v___x_4006_);
lean_dec_ref(v_e_3976_);
goto v___jp_3989_;
}
else
{
lean_object* v___x_4008_; uint8_t v___x_4009_; 
v___x_4008_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4006_);
v___x_4009_ = l_Lean_Expr_isApp(v___x_4008_);
if (v___x_4009_ == 0)
{
lean_dec_ref(v___x_4008_);
lean_dec_ref(v_e_3976_);
goto v___jp_3989_;
}
else
{
lean_object* v_arg_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; uint8_t v___x_4013_; 
v_arg_4010_ = lean_ctor_get(v___x_4008_, 1);
lean_inc_ref(v_arg_4010_);
v___x_4011_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4008_);
v___x_4012_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr_0__Lean_Meta_Grind_Arith_Cutsat_toPolyLe_x3f___closed__2));
v___x_4013_ = l_Lean_Expr_isConstOf(v___x_4011_, v___x_4012_);
lean_dec_ref(v___x_4011_);
if (v___x_4013_ == 0)
{
lean_dec_ref(v_arg_4010_);
lean_dec_ref(v_e_3976_);
goto v___jp_3989_;
}
else
{
lean_object* v___x_4014_; uint8_t v___x_4015_; 
v___x_4014_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__0));
v___x_4015_ = l_Lean_Expr_isConstOf(v_arg_4010_, v___x_4014_);
if (v___x_4015_ == 0)
{
lean_object* v___x_4016_; uint8_t v___x_4017_; 
v___x_4016_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___closed__2));
v___x_4017_ = l_Lean_Expr_isConstOf(v_arg_4010_, v___x_4016_);
if (v___x_4017_ == 0)
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
v___x_4018_ = lean_box(v_eqTrue_3977_);
v___x_4019_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateToIntLe___boxed), 14, 2);
lean_closure_set(v___x_4019_, 0, v_e_3976_);
lean_closure_set(v___x_4019_, 1, v___x_4018_);
v___x_4020_ = l_Lean_Meta_Grind_Arith_Cutsat_ToIntM_run(v_arg_4010_, v___x_4019_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_, v_a_3985_, v_a_3986_, v_a_3987_);
return v___x_4020_;
}
else
{
lean_object* v___x_4021_; 
lean_dec_ref(v_arg_4010_);
v___x_4021_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateIntLe(v_e_3976_, v_eqTrue_3977_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_, v_a_3985_, v_a_3986_, v_a_3987_);
return v___x_4021_;
}
}
else
{
lean_object* v___x_4022_; 
lean_dec_ref(v_arg_4010_);
v___x_4022_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe(v_e_3976_, v_eqTrue_3977_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_, v_a_3985_, v_a_3986_, v_a_3987_);
return v___x_4022_;
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
lean_object* v_a_4024_; lean_object* v___x_4026_; uint8_t v_isShared_4027_; uint8_t v_isSharedCheck_4031_; 
lean_dec_ref(v_e_3976_);
v_a_4024_ = lean_ctor_get(v___x_3992_, 0);
v_isSharedCheck_4031_ = !lean_is_exclusive(v___x_3992_);
if (v_isSharedCheck_4031_ == 0)
{
v___x_4026_ = v___x_3992_;
v_isShared_4027_ = v_isSharedCheck_4031_;
goto v_resetjp_4025_;
}
else
{
lean_inc(v_a_4024_);
lean_dec(v___x_3992_);
v___x_4026_ = lean_box(0);
v_isShared_4027_ = v_isSharedCheck_4031_;
goto v_resetjp_4025_;
}
v_resetjp_4025_:
{
lean_object* v___x_4029_; 
if (v_isShared_4027_ == 0)
{
v___x_4029_ = v___x_4026_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4030_; 
v_reuseFailAlloc_4030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4030_, 0, v_a_4024_);
v___x_4029_ = v_reuseFailAlloc_4030_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
return v___x_4029_;
}
}
}
v___jp_3989_:
{
lean_object* v___x_3990_; lean_object* v___x_3991_; 
v___x_3990_ = lean_box(0);
v___x_3991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3991_, 0, v___x_3990_);
return v___x_3991_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLe___boxed(lean_object* v_e_4032_, lean_object* v_eqTrue_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_, lean_object* v_a_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_, lean_object* v_a_4041_, lean_object* v_a_4042_, lean_object* v_a_4043_, lean_object* v_a_4044_){
_start:
{
uint8_t v_eqTrue_boxed_4045_; lean_object* v_res_4046_; 
v_eqTrue_boxed_4045_ = lean_unbox(v_eqTrue_4033_);
v_res_4046_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateLe(v_e_4032_, v_eqTrue_boxed_4045_, v_a_4034_, v_a_4035_, v_a_4036_, v_a_4037_, v_a_4038_, v_a_4039_, v_a_4040_, v_a_4041_, v_a_4042_, v_a_4043_);
lean_dec(v_a_4043_);
lean_dec_ref(v_a_4042_);
lean_dec(v_a_4041_);
lean_dec_ref(v_a_4040_);
lean_dec(v_a_4039_);
lean_dec_ref(v_a_4038_);
lean_dec(v_a_4037_);
lean_dec_ref(v_a_4036_);
lean_dec(v_a_4035_);
lean_dec(v_a_4034_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__0(lean_object* v_e_4047_, lean_object* v_arg_4048_, lean_object* v_arg_4049_, uint8_t v_eqTrue_4050_, lean_object* v_____x_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_){
_start:
{
if (lean_obj_tag(v_____x_4051_) == 1)
{
lean_object* v_val_4064_; lean_object* v___x_4065_; 
v_val_4064_ = lean_ctor_get(v_____x_4051_, 0);
lean_inc(v_val_4064_);
lean_dec_ref(v_____x_4051_);
v___x_4065_ = l_Lean_Meta_Grind_getGeneration___redArg(v_e_4047_, v___y_4053_);
if (lean_obj_tag(v___x_4065_) == 0)
{
lean_object* v_a_4066_; lean_object* v___x_4067_; 
v_a_4066_ = lean_ctor_get(v___x_4065_, 0);
lean_inc(v_a_4066_);
lean_dec_ref(v___x_4065_);
lean_inc_ref(v_arg_4048_);
v___x_4067_ = l_Lean_Meta_Grind_Arith_Cutsat_toInt(v_arg_4048_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4067_) == 0)
{
lean_object* v_a_4068_; lean_object* v_fst_4069_; lean_object* v_snd_4070_; lean_object* v___x_4072_; uint8_t v_isShared_4073_; uint8_t v_isSharedCheck_4125_; 
v_a_4068_ = lean_ctor_get(v___x_4067_, 0);
lean_inc(v_a_4068_);
lean_dec_ref(v___x_4067_);
v_fst_4069_ = lean_ctor_get(v_a_4068_, 0);
v_snd_4070_ = lean_ctor_get(v_a_4068_, 1);
v_isSharedCheck_4125_ = !lean_is_exclusive(v_a_4068_);
if (v_isSharedCheck_4125_ == 0)
{
v___x_4072_ = v_a_4068_;
v_isShared_4073_ = v_isSharedCheck_4125_;
goto v_resetjp_4071_;
}
else
{
lean_inc(v_snd_4070_);
lean_inc(v_fst_4069_);
lean_dec(v_a_4068_);
v___x_4072_ = lean_box(0);
v_isShared_4073_ = v_isSharedCheck_4125_;
goto v_resetjp_4071_;
}
v_resetjp_4071_:
{
lean_object* v___x_4074_; 
lean_inc_ref(v_arg_4049_);
v___x_4074_ = l_Lean_Meta_Grind_Arith_Cutsat_toInt(v_arg_4049_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4074_) == 0)
{
lean_object* v_a_4075_; lean_object* v_fst_4076_; lean_object* v_snd_4077_; lean_object* v___x_4079_; uint8_t v_isShared_4080_; uint8_t v_isSharedCheck_4116_; 
v_a_4075_ = lean_ctor_get(v___x_4074_, 0);
lean_inc(v_a_4075_);
lean_dec_ref(v___x_4074_);
v_fst_4076_ = lean_ctor_get(v_a_4075_, 0);
v_snd_4077_ = lean_ctor_get(v_a_4075_, 1);
v_isSharedCheck_4116_ = !lean_is_exclusive(v_a_4075_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4079_ = v_a_4075_;
v_isShared_4080_ = v_isSharedCheck_4116_;
goto v_resetjp_4078_;
}
else
{
lean_inc(v_snd_4077_);
lean_inc(v_fst_4076_);
lean_dec(v_a_4075_);
v___x_4079_ = lean_box(0);
v_isShared_4080_ = v_isSharedCheck_4116_;
goto v_resetjp_4078_;
}
v_resetjp_4078_:
{
lean_object* v___x_4081_; lean_object* v_fst_4083_; lean_object* v_snd_4084_; 
lean_inc(v_fst_4076_);
lean_inc(v_fst_4069_);
v___x_4081_ = l_Lean_mkApp6(v_val_4064_, v_arg_4048_, v_arg_4049_, v_fst_4069_, v_fst_4076_, v_snd_4070_, v_snd_4077_);
if (v_eqTrue_4050_ == 0)
{
v_fst_4083_ = v_fst_4076_;
v_snd_4084_ = v_fst_4069_;
goto v___jp_4082_;
}
else
{
lean_object* v___x_4114_; lean_object* v___x_4115_; 
v___x_4114_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0, &l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Cutsat_propagateNatLe___closed__0);
v___x_4115_ = l_Lean_mkIntAdd(v_fst_4069_, v___x_4114_);
v_fst_4083_ = v___x_4115_;
v_snd_4084_ = v_fst_4076_;
goto v___jp_4082_;
}
v___jp_4082_:
{
lean_object* v___x_4085_; 
lean_inc(v_a_4066_);
v___x_4085_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_fst_4083_, v_a_4066_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4085_) == 0)
{
lean_object* v_a_4086_; lean_object* v___x_4087_; 
v_a_4086_ = lean_ctor_get(v___x_4085_, 0);
lean_inc(v_a_4086_);
lean_dec_ref(v___x_4085_);
v___x_4087_ = l_Lean_Meta_Grind_Arith_Cutsat_toLinearExpr(v_snd_4084_, v_a_4066_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
if (lean_obj_tag(v___x_4087_) == 0)
{
lean_object* v_a_4088_; lean_object* v___x_4090_; 
v_a_4088_ = lean_ctor_get(v___x_4087_, 0);
lean_inc(v_a_4088_);
lean_dec_ref(v___x_4087_);
lean_inc(v_a_4088_);
lean_inc(v_a_4086_);
if (v_isShared_4080_ == 0)
{
lean_ctor_set_tag(v___x_4079_, 3);
lean_ctor_set(v___x_4079_, 1, v_a_4088_);
lean_ctor_set(v___x_4079_, 0, v_a_4086_);
v___x_4090_ = v___x_4079_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4097_; 
v_reuseFailAlloc_4097_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4097_, 0, v_a_4086_);
lean_ctor_set(v_reuseFailAlloc_4097_, 1, v_a_4088_);
v___x_4090_ = v_reuseFailAlloc_4097_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4094_; 
v___x_4091_ = l_Int_Linear_Expr_norm(v___x_4090_);
lean_dec_ref(v___x_4090_);
v___x_4092_ = lean_alloc_ctor(2, 4, 1);
lean_ctor_set(v___x_4092_, 0, v_e_4047_);
lean_ctor_set(v___x_4092_, 1, v___x_4081_);
lean_ctor_set(v___x_4092_, 2, v_a_4086_);
lean_ctor_set(v___x_4092_, 3, v_a_4088_);
lean_ctor_set_uint8(v___x_4092_, sizeof(void*)*4, v_eqTrue_4050_);
if (v_isShared_4073_ == 0)
{
lean_ctor_set(v___x_4072_, 1, v___x_4092_);
lean_ctor_set(v___x_4072_, 0, v___x_4091_);
v___x_4094_ = v___x_4072_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4096_; 
v_reuseFailAlloc_4096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4096_, 0, v___x_4091_);
lean_ctor_set(v_reuseFailAlloc_4096_, 1, v___x_4092_);
v___x_4094_ = v_reuseFailAlloc_4096_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
lean_object* v___x_4095_; 
lean_inc(v___y_4062_);
lean_inc_ref(v___y_4061_);
lean_inc(v___y_4060_);
lean_inc_ref(v___y_4059_);
lean_inc(v___y_4058_);
lean_inc_ref(v___y_4057_);
lean_inc(v___y_4056_);
lean_inc_ref(v___y_4055_);
lean_inc(v___y_4054_);
lean_inc(v___y_4053_);
v___x_4095_ = lean_grind_cutsat_assert_le(v___x_4094_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
return v___x_4095_;
}
}
}
else
{
lean_object* v_a_4098_; lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4105_; 
lean_dec(v_a_4086_);
lean_dec_ref(v___x_4081_);
lean_del_object(v___x_4079_);
lean_del_object(v___x_4072_);
lean_dec_ref(v_e_4047_);
v_a_4098_ = lean_ctor_get(v___x_4087_, 0);
v_isSharedCheck_4105_ = !lean_is_exclusive(v___x_4087_);
if (v_isSharedCheck_4105_ == 0)
{
v___x_4100_ = v___x_4087_;
v_isShared_4101_ = v_isSharedCheck_4105_;
goto v_resetjp_4099_;
}
else
{
lean_inc(v_a_4098_);
lean_dec(v___x_4087_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4105_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v___x_4103_; 
if (v_isShared_4101_ == 0)
{
v___x_4103_ = v___x_4100_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4104_; 
v_reuseFailAlloc_4104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4104_, 0, v_a_4098_);
v___x_4103_ = v_reuseFailAlloc_4104_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
return v___x_4103_;
}
}
}
}
else
{
lean_object* v_a_4106_; lean_object* v___x_4108_; uint8_t v_isShared_4109_; uint8_t v_isSharedCheck_4113_; 
lean_dec_ref(v_snd_4084_);
lean_dec_ref(v___x_4081_);
lean_del_object(v___x_4079_);
lean_del_object(v___x_4072_);
lean_dec(v_a_4066_);
lean_dec_ref(v_e_4047_);
v_a_4106_ = lean_ctor_get(v___x_4085_, 0);
v_isSharedCheck_4113_ = !lean_is_exclusive(v___x_4085_);
if (v_isSharedCheck_4113_ == 0)
{
v___x_4108_ = v___x_4085_;
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
else
{
lean_inc(v_a_4106_);
lean_dec(v___x_4085_);
v___x_4108_ = lean_box(0);
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
v_resetjp_4107_:
{
lean_object* v___x_4111_; 
if (v_isShared_4109_ == 0)
{
v___x_4111_ = v___x_4108_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v_a_4106_);
v___x_4111_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
return v___x_4111_;
}
}
}
}
}
}
else
{
lean_object* v_a_4117_; lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4124_; 
lean_del_object(v___x_4072_);
lean_dec(v_snd_4070_);
lean_dec(v_fst_4069_);
lean_dec(v_a_4066_);
lean_dec(v_val_4064_);
lean_dec_ref(v_arg_4049_);
lean_dec_ref(v_arg_4048_);
lean_dec_ref(v_e_4047_);
v_a_4117_ = lean_ctor_get(v___x_4074_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v___x_4074_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4119_ = v___x_4074_;
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
else
{
lean_inc(v_a_4117_);
lean_dec(v___x_4074_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
lean_object* v___x_4122_; 
if (v_isShared_4120_ == 0)
{
v___x_4122_ = v___x_4119_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_a_4117_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
return v___x_4122_;
}
}
}
}
}
else
{
lean_object* v_a_4126_; lean_object* v___x_4128_; uint8_t v_isShared_4129_; uint8_t v_isSharedCheck_4133_; 
lean_dec(v_a_4066_);
lean_dec(v_val_4064_);
lean_dec_ref(v_arg_4049_);
lean_dec_ref(v_arg_4048_);
lean_dec_ref(v_e_4047_);
v_a_4126_ = lean_ctor_get(v___x_4067_, 0);
v_isSharedCheck_4133_ = !lean_is_exclusive(v___x_4067_);
if (v_isSharedCheck_4133_ == 0)
{
v___x_4128_ = v___x_4067_;
v_isShared_4129_ = v_isSharedCheck_4133_;
goto v_resetjp_4127_;
}
else
{
lean_inc(v_a_4126_);
lean_dec(v___x_4067_);
v___x_4128_ = lean_box(0);
v_isShared_4129_ = v_isSharedCheck_4133_;
goto v_resetjp_4127_;
}
v_resetjp_4127_:
{
lean_object* v___x_4131_; 
if (v_isShared_4129_ == 0)
{
v___x_4131_ = v___x_4128_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v_a_4126_);
v___x_4131_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
return v___x_4131_;
}
}
}
}
else
{
lean_object* v_a_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4141_; 
lean_dec(v_val_4064_);
lean_dec_ref(v_arg_4049_);
lean_dec_ref(v_arg_4048_);
lean_dec_ref(v_e_4047_);
v_a_4134_ = lean_ctor_get(v___x_4065_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v___x_4065_);
if (v_isSharedCheck_4141_ == 0)
{
v___x_4136_ = v___x_4065_;
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
else
{
lean_inc(v_a_4134_);
lean_dec(v___x_4065_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
lean_object* v___x_4139_; 
if (v_isShared_4137_ == 0)
{
v___x_4139_ = v___x_4136_;
goto v_reusejp_4138_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v_a_4134_);
v___x_4139_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4138_;
}
v_reusejp_4138_:
{
return v___x_4139_;
}
}
}
}
else
{
lean_object* v___x_4142_; lean_object* v___x_4143_; 
lean_dec(v_____x_4051_);
lean_dec_ref(v_arg_4049_);
lean_dec_ref(v_arg_4048_);
lean_dec_ref(v_e_4047_);
v___x_4142_ = lean_box(0);
v___x_4143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4143_, 0, v___x_4142_);
return v___x_4143_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__0___boxed(lean_object** _args){
lean_object* v_e_4144_ = _args[0];
lean_object* v_arg_4145_ = _args[1];
lean_object* v_arg_4146_ = _args[2];
lean_object* v_eqTrue_4147_ = _args[3];
lean_object* v_____x_4148_ = _args[4];
lean_object* v___y_4149_ = _args[5];
lean_object* v___y_4150_ = _args[6];
lean_object* v___y_4151_ = _args[7];
lean_object* v___y_4152_ = _args[8];
lean_object* v___y_4153_ = _args[9];
lean_object* v___y_4154_ = _args[10];
lean_object* v___y_4155_ = _args[11];
lean_object* v___y_4156_ = _args[12];
lean_object* v___y_4157_ = _args[13];
lean_object* v___y_4158_ = _args[14];
lean_object* v___y_4159_ = _args[15];
lean_object* v___y_4160_ = _args[16];
_start:
{
uint8_t v_eqTrue_boxed_4161_; lean_object* v_res_4162_; 
v_eqTrue_boxed_4161_ = lean_unbox(v_eqTrue_4147_);
v_res_4162_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__0(v_e_4144_, v_arg_4145_, v_arg_4146_, v_eqTrue_boxed_4161_, v_____x_4148_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_);
lean_dec(v___y_4159_);
lean_dec_ref(v___y_4158_);
lean_dec(v___y_4157_);
lean_dec_ref(v___y_4156_);
lean_dec(v___y_4155_);
lean_dec_ref(v___y_4154_);
lean_dec(v___y_4153_);
lean_dec_ref(v___y_4152_);
lean_dec(v___y_4151_);
lean_dec(v___y_4150_);
lean_dec(v___y_4149_);
return v_res_4162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__1(uint8_t v_eqTrue_4163_, lean_object* v___f_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_){
_start:
{
if (v_eqTrue_4163_ == 0)
{
lean_object* v___x_4177_; 
v___x_4177_ = l_Lean_Meta_Grind_Arith_Cutsat_getOfNotLT_x3f___redArg(v___y_4165_, v___y_4166_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_);
if (lean_obj_tag(v___x_4177_) == 0)
{
lean_object* v_a_4178_; lean_object* v___x_4179_; 
v_a_4178_ = lean_ctor_get(v___x_4177_, 0);
lean_inc(v_a_4178_);
lean_dec_ref(v___x_4177_);
lean_inc(v___y_4175_);
lean_inc_ref(v___y_4174_);
lean_inc(v___y_4173_);
lean_inc_ref(v___y_4172_);
lean_inc(v___y_4171_);
lean_inc_ref(v___y_4170_);
lean_inc(v___y_4169_);
lean_inc_ref(v___y_4168_);
lean_inc(v___y_4167_);
lean_inc(v___y_4166_);
lean_inc(v___y_4165_);
v___x_4179_ = lean_apply_13(v___f_4164_, v_a_4178_, v___y_4165_, v___y_4166_, v___y_4167_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_, lean_box(0));
return v___x_4179_;
}
else
{
lean_object* v_a_4180_; lean_object* v___x_4182_; uint8_t v_isShared_4183_; uint8_t v_isSharedCheck_4187_; 
lean_dec_ref(v___f_4164_);
v_a_4180_ = lean_ctor_get(v___x_4177_, 0);
v_isSharedCheck_4187_ = !lean_is_exclusive(v___x_4177_);
if (v_isSharedCheck_4187_ == 0)
{
v___x_4182_ = v___x_4177_;
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
else
{
lean_inc(v_a_4180_);
lean_dec(v___x_4177_);
v___x_4182_ = lean_box(0);
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
v_resetjp_4181_:
{
lean_object* v___x_4185_; 
if (v_isShared_4183_ == 0)
{
v___x_4185_ = v___x_4182_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v_a_4180_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
}
}
else
{
lean_object* v___x_4188_; 
v___x_4188_ = l_Lean_Meta_Grind_Arith_Cutsat_getOfLT_x3f___redArg(v___y_4165_, v___y_4166_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_);
if (lean_obj_tag(v___x_4188_) == 0)
{
lean_object* v_a_4189_; lean_object* v___x_4190_; 
v_a_4189_ = lean_ctor_get(v___x_4188_, 0);
lean_inc(v_a_4189_);
lean_dec_ref(v___x_4188_);
lean_inc(v___y_4175_);
lean_inc_ref(v___y_4174_);
lean_inc(v___y_4173_);
lean_inc_ref(v___y_4172_);
lean_inc(v___y_4171_);
lean_inc_ref(v___y_4170_);
lean_inc(v___y_4169_);
lean_inc_ref(v___y_4168_);
lean_inc(v___y_4167_);
lean_inc(v___y_4166_);
lean_inc(v___y_4165_);
v___x_4190_ = lean_apply_13(v___f_4164_, v_a_4189_, v___y_4165_, v___y_4166_, v___y_4167_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_, lean_box(0));
return v___x_4190_;
}
else
{
lean_object* v_a_4191_; lean_object* v___x_4193_; uint8_t v_isShared_4194_; uint8_t v_isSharedCheck_4198_; 
lean_dec_ref(v___f_4164_);
v_a_4191_ = lean_ctor_get(v___x_4188_, 0);
v_isSharedCheck_4198_ = !lean_is_exclusive(v___x_4188_);
if (v_isSharedCheck_4198_ == 0)
{
v___x_4193_ = v___x_4188_;
v_isShared_4194_ = v_isSharedCheck_4198_;
goto v_resetjp_4192_;
}
else
{
lean_inc(v_a_4191_);
lean_dec(v___x_4188_);
v___x_4193_ = lean_box(0);
v_isShared_4194_ = v_isSharedCheck_4198_;
goto v_resetjp_4192_;
}
v_resetjp_4192_:
{
lean_object* v___x_4196_; 
if (v_isShared_4194_ == 0)
{
v___x_4196_ = v___x_4193_;
goto v_reusejp_4195_;
}
else
{
lean_object* v_reuseFailAlloc_4197_; 
v_reuseFailAlloc_4197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4197_, 0, v_a_4191_);
v___x_4196_ = v_reuseFailAlloc_4197_;
goto v_reusejp_4195_;
}
v_reusejp_4195_:
{
return v___x_4196_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__1___boxed(lean_object* v_eqTrue_4199_, lean_object* v___f_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_){
_start:
{
uint8_t v_eqTrue_boxed_4213_; lean_object* v_res_4214_; 
v_eqTrue_boxed_4213_ = lean_unbox(v_eqTrue_4199_);
v_res_4214_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__1(v_eqTrue_boxed_4213_, v___f_4200_, v___y_4201_, v___y_4202_, v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_);
lean_dec(v___y_4211_);
lean_dec_ref(v___y_4210_);
lean_dec(v___y_4209_);
lean_dec_ref(v___y_4208_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
lean_dec(v___y_4205_);
lean_dec_ref(v___y_4204_);
lean_dec(v___y_4203_);
lean_dec(v___y_4202_);
lean_dec(v___y_4201_);
return v_res_4214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt(lean_object* v_e_4220_, uint8_t v_eqTrue_4221_, lean_object* v_a_4222_, lean_object* v_a_4223_, lean_object* v_a_4224_, lean_object* v_a_4225_, lean_object* v_a_4226_, lean_object* v_a_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_){
_start:
{
lean_object* v___x_4236_; 
v___x_4236_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_4224_);
if (lean_obj_tag(v___x_4236_) == 0)
{
lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4265_; 
v_a_4237_ = lean_ctor_get(v___x_4236_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v___x_4236_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4239_ = v___x_4236_;
v_isShared_4240_ = v_isSharedCheck_4265_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___x_4236_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4265_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
uint8_t v_lia_4241_; 
v_lia_4241_ = lean_ctor_get_uint8(v_a_4237_, sizeof(void*)*11 + 23);
lean_dec(v_a_4237_);
if (v_lia_4241_ == 0)
{
lean_object* v___x_4242_; lean_object* v___x_4244_; 
lean_dec_ref(v_e_4220_);
v___x_4242_ = lean_box(0);
if (v_isShared_4240_ == 0)
{
lean_ctor_set(v___x_4239_, 0, v___x_4242_);
v___x_4244_ = v___x_4239_;
goto v_reusejp_4243_;
}
else
{
lean_object* v_reuseFailAlloc_4245_; 
v_reuseFailAlloc_4245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4245_, 0, v___x_4242_);
v___x_4244_ = v_reuseFailAlloc_4245_;
goto v_reusejp_4243_;
}
v_reusejp_4243_:
{
return v___x_4244_;
}
}
else
{
lean_object* v___x_4246_; uint8_t v___x_4247_; 
lean_del_object(v___x_4239_);
lean_inc_ref(v_e_4220_);
v___x_4246_ = l_Lean_Expr_cleanupAnnotations(v_e_4220_);
v___x_4247_ = l_Lean_Expr_isApp(v___x_4246_);
if (v___x_4247_ == 0)
{
lean_dec_ref(v___x_4246_);
lean_dec_ref(v_e_4220_);
goto v___jp_4233_;
}
else
{
lean_object* v_arg_4248_; lean_object* v___x_4249_; uint8_t v___x_4250_; 
v_arg_4248_ = lean_ctor_get(v___x_4246_, 1);
lean_inc_ref(v_arg_4248_);
v___x_4249_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4246_);
v___x_4250_ = l_Lean_Expr_isApp(v___x_4249_);
if (v___x_4250_ == 0)
{
lean_dec_ref(v___x_4249_);
lean_dec_ref(v_arg_4248_);
lean_dec_ref(v_e_4220_);
goto v___jp_4233_;
}
else
{
lean_object* v_arg_4251_; lean_object* v___x_4252_; uint8_t v___x_4253_; 
v_arg_4251_ = lean_ctor_get(v___x_4249_, 1);
lean_inc_ref(v_arg_4251_);
v___x_4252_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4249_);
v___x_4253_ = l_Lean_Expr_isApp(v___x_4252_);
if (v___x_4253_ == 0)
{
lean_dec_ref(v___x_4252_);
lean_dec_ref(v_arg_4251_);
lean_dec_ref(v_arg_4248_);
lean_dec_ref(v_e_4220_);
goto v___jp_4233_;
}
else
{
lean_object* v___x_4254_; uint8_t v___x_4255_; 
v___x_4254_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4252_);
v___x_4255_ = l_Lean_Expr_isApp(v___x_4254_);
if (v___x_4255_ == 0)
{
lean_dec_ref(v___x_4254_);
lean_dec_ref(v_arg_4251_);
lean_dec_ref(v_arg_4248_);
lean_dec_ref(v_e_4220_);
goto v___jp_4233_;
}
else
{
lean_object* v_arg_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; uint8_t v___x_4259_; 
v_arg_4256_ = lean_ctor_get(v___x_4254_, 1);
lean_inc_ref(v_arg_4256_);
v___x_4257_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4254_);
v___x_4258_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___closed__2));
v___x_4259_ = l_Lean_Expr_isConstOf(v___x_4257_, v___x_4258_);
lean_dec_ref(v___x_4257_);
if (v___x_4259_ == 0)
{
lean_dec_ref(v_arg_4256_);
lean_dec_ref(v_arg_4251_);
lean_dec_ref(v_arg_4248_);
lean_dec_ref(v_e_4220_);
goto v___jp_4233_;
}
else
{
lean_object* v___x_4260_; lean_object* v___f_4261_; lean_object* v___x_4262_; lean_object* v___y_4263_; lean_object* v___x_4264_; 
v___x_4260_ = lean_box(v_eqTrue_4221_);
v___f_4261_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__0___boxed), 17, 4);
lean_closure_set(v___f_4261_, 0, v_e_4220_);
lean_closure_set(v___f_4261_, 1, v_arg_4251_);
lean_closure_set(v___f_4261_, 2, v_arg_4248_);
lean_closure_set(v___f_4261_, 3, v___x_4260_);
v___x_4262_ = lean_box(v_eqTrue_4221_);
v___y_4263_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___lam__1___boxed), 14, 2);
lean_closure_set(v___y_4263_, 0, v___x_4262_);
lean_closure_set(v___y_4263_, 1, v___f_4261_);
v___x_4264_ = l_Lean_Meta_Grind_Arith_Cutsat_ToIntM_run(v_arg_4256_, v___y_4263_, v_a_4222_, v_a_4223_, v_a_4224_, v_a_4225_, v_a_4226_, v_a_4227_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_);
return v___x_4264_;
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
lean_object* v_a_4266_; lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4273_; 
lean_dec_ref(v_e_4220_);
v_a_4266_ = lean_ctor_get(v___x_4236_, 0);
v_isSharedCheck_4273_ = !lean_is_exclusive(v___x_4236_);
if (v_isSharedCheck_4273_ == 0)
{
v___x_4268_ = v___x_4236_;
v_isShared_4269_ = v_isSharedCheck_4273_;
goto v_resetjp_4267_;
}
else
{
lean_inc(v_a_4266_);
lean_dec(v___x_4236_);
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
v___jp_4233_:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4234_ = lean_box(0);
v___x_4235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4235_, 0, v___x_4234_);
return v___x_4235_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Cutsat_propagateLt___boxed(lean_object* v_e_4274_, lean_object* v_eqTrue_4275_, lean_object* v_a_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_, lean_object* v_a_4282_, lean_object* v_a_4283_, lean_object* v_a_4284_, lean_object* v_a_4285_, lean_object* v_a_4286_){
_start:
{
uint8_t v_eqTrue_boxed_4287_; lean_object* v_res_4288_; 
v_eqTrue_boxed_4287_ = lean_unbox(v_eqTrue_4275_);
v_res_4288_ = l_Lean_Meta_Grind_Arith_Cutsat_propagateLt(v_e_4274_, v_eqTrue_boxed_4287_, v_a_4276_, v_a_4277_, v_a_4278_, v_a_4279_, v_a_4280_, v_a_4281_, v_a_4282_, v_a_4283_, v_a_4284_, v_a_4285_);
lean_dec(v_a_4285_);
lean_dec_ref(v_a_4284_);
lean_dec(v_a_4283_);
lean_dec_ref(v_a_4282_);
lean_dec(v_a_4281_);
lean_dec_ref(v_a_4280_);
lean_dec(v_a_4279_);
lean_dec_ref(v_a_4278_);
lean_dec(v_a_4277_);
lean_dec(v_a_4276_);
return v_res_4288_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Int(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Arith_Int(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(uint8_t builtin);
lean_object* initialize_Init_Data_Int_OfNat(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Arith_Int(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_OfNat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Arith_Int(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Proof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Nat(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_Norm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_CommRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_LeCnstr(builtin);
}
#ifdef __cplusplus
}
#endif
